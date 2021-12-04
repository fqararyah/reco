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
#include "pattern_matcher.h"

extern "C" {
void krnl_s2mm(ap_uint<DWIDTH> *out,     // Write only memory mapped
               hls::stream<pkt> &n2k,    // Internal Stream
               unsigned int  size,    // Size in bytes
			   // Added for project
			   // @Mateo Shouldn't this be the pointers instead?
			   bool 			&matched,
			   int 				&pattern_id
               ) {
#pragma HLS INTERFACE m_axi port = out offset = slave bundle = gmem
#pragma HLS INTERFACE axis port = n2k
#pragma HLS INTERFACE s_axilite port = out bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  //unsigned int count = 0:
data_mover:

  int i = 0;
  pkt v;
  char buffer[BUFFER_SIZE]; // TODO: stop it from mapping to BRAM
  //fareed: this pragma makes all the elements accessible in one cycle (no BRAM ports dependency/ limitation)
#pragma HLS array_reshape variable=buffer complete
  // Auto-pipeline is going to apply pipeline to this loop
  //fareed: replaced size with a constant just to view the behaviour (schedulaing, latency, ...etc). When size is used the simulation/syntheseis give weird results
  krnl: for (unsigned int i = 0; i < (1024 / BYTES_PER_BEAT); i++) {
//#pragma HLS DATAFLOW
    n2k.read(v);
    // @Mateo I think we should implement shift and fill in one function
    shift(buffer);
    fill(v.data, buffer);
    match:match(matched, pattern_id, buffer);
    out[i] = v.data;
  }
  // do {
  //   n2k.read(v);
  //   out[i] = v.data;
  //   count++;
  // } while (v.last != 1)
  // size = count;
}
}
