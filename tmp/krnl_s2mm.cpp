/**********
 Copyright (c) 2019-2020, Xilinx, Inc.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice,
 this list of conditions and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.

 3. Neither the name of the copyright holder nor the names of its contributors
 may be used to endorse or promote products derived from this software
 without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED.
 IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 LIMITED TO,
 PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **********/
/* This is a stream to memory mapped data mover kernel which takes input from a
 stream and writes data
 to global memory via memory mapped interface */

// #include "krnl_s2mm.h" (We are including it in pattern_matcher.h
#include "../pattern_matcher.h"
#include "krnl_s2mm.h"
#include <iostream>

void krnl_s2mm(ap_uint<16> *out,     // Write only memory mapped
		hls::stream<pkt> &n2k,    // Internal Stream
		unsigned int size    // Size in bytes
		) {
#pragma HLS INTERFACE m_axi port = out offset = slave bundle = gmem
#pragma HLS INTERFACE axis port = n2k
#pragma HLS INTERFACE s_axilite port = out bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

	pkt v;
	char buffer[buffer_size];
	ap_uint<DWIDTH>  packet[PACKET_SIZE];
#pragma HLS array_reshape variable=buffer complete
	for (int char_ind = 0; char_ind < buffer_size; char_ind++) {
#pragma HLS unroll
		buffer[char_ind] = a_safe_prefix_postfix;
	}
	ap_uint<DWIDTH> safe_chunck;
	for (int i = 0; i < DWIDTH - 8; i += 8) {
		safe_chunck(i + 7, i) = a_safe_prefix_postfix;
	}
	bool done = false;
	data_retrival: for (unsigned int i = 0; i < (size / BYTES_PER_BEAT); i++) {
		n2k.read(v);
		packet[i % PACKET_SIZE] = v.data;
	}
	outer_loop: for (unsigned int i = 0; i < (size / BYTES_PER_BEAT); i++) {
#pragma HLS LOOP_TRIPCOUNT min= 1 max= 1000000 avg= 2200
		main_matching_loop: for (int j = 0; j < BYTES_PER_BEAT; j +=
				chunk_len) {
					ap_uint<16> pattern_id = 16000;
			shift_and_fill(packet[i%PACKET_SIZE], buffer, j);
			match(pattern_id, buffer);
			out[i * BYTES_PER_BEAT + j] = pattern_id;
		}
	}
}
