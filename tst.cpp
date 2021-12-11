#include <iostream>
#include "./pattern_matcher.h"
#include "./tmp/krnl_s2mm.h"
using namespace std;
int main() {
    unsigned int size = 1408;
	ap_uint<16> out[size];
	hls::stream<pkt> pkt_stream;
	pkt input;
//	input.data(7,0) ='|';
//	input.data(15,8) ='B';
//	input.data(23,16) ='4';
//	input.data(31,24) =' ';
//	input.data(39,32) ='B';
//	input.data(47,40) ='4';
//	input.data(55,48) ='|';
	input.data(7,0) = a_safe_prefix_postfix;
	input.data(15,8) ='|';
	input.data(23,16) ='B';
	input.data(31,24) ='4';
	input.data(39,32) =' ';
	input.data(47,40) ='B';
	input.data(55,48) ='4';
	input.data(63,56) ='|';
	for(int i=72 ; i < DWIDTH - 8; i+=8){
		input.data(i + 7, i) = a_safe_prefix_postfix;
	}
	//ficken
	bool match;
	for(int i=0; i< 22; i++){
		pkt_stream.write(input);
	}

    for(int i=0; i<size; i++){
        out[i] = 16000;
    }

	int count = 0;
	krnl_s2mm(out, pkt_stream, size);
	std::cout << "HERE" << std::endl;
	for(int i=0;i<size;i++){
		if(out[i] < 16000)
		std::cout<<">>>>>>>>>>>>>>>"<<out[i]<<"\n";

	}

	return 0;
}
