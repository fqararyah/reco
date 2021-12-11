/*
#include <iostream>
#include <string>
#include <fstream>
#include <bitset>
#include "./tmp/krnl_s2mm.h"

#define LEN 64

using namespace std;

string gen_random(int n_packets, string text, int position);

int main(int argc, char *argv[]){
    if (argc != 2){
        cerr << "Usage: " << argv[0] << " n_packets" << endl;
        return 1;
    }
    int n_packets = stoi(argv[1]);
    string text[10]  = {"qazwsx.hsq",
        "Ahhhh My Mouth Is Open",
        "|85 80 00 01 00 01 00 00 00 00|",
        "../../../",
        "^|0E|1|C0 B0 3B 8D|~|0E 89 FA 89 F9|",
        "89|3A 3B|<=>?",
        "Welcome!psyBNC@lam3rz.de",
        "w00w00",
        "WHATISIT",
        "c|3A 5C|"};
    ofstream myfile ("test_data.dat");
//  int position;
    for (int i=0; i<n_packets; i++){
        int text_size = text[i].size();
//      cout << "text " << i << "size = " << text_size << endl;
        int position = rand() % (LEN - text_size);
        string rand_text = gen_random(LEN, text[i], position);
        myfile << rand_text << endl;
//      cout << "Random text = " << rand_text << endl;
    }
    myfile.close();

    // ******** TEST ********* //

    hls::stream<pkt> pkt_stream;
	pkt input_pkt;
	ap_uint<DWIDTH> input;

	unsigned int size = n_packets * LEN;

	ap_uint<DWIDTH> output[size]; // We do not care about it in the test

	bool matched = false;
	int pattern_id[size]; // Need to check this size
	int count_krnl;

    ifstream myfile1 ("test_data.dat");
    char c;
    if (myfile1.is_open()){
        int count = 0;
        string myinput = "";
        while (myfile1.get(c)){
//          cout << c;
            if (count < LEN){
                myinput += c;
                count++;
                if (count == LEN-1){
                    for (int i=0; i<LEN; i++){
                        bitset<8> bsstream(myinput[i]);
                        input(i * 8 + 7, i * 8) = myinput[i];
                        // cout << myinput[i] << " --- " << input(i * 8 + 7, i * 8)  << endl;
                        // cout << bsstream << " ";
                        //if(i%LEN == 0)
                          //  cout << endl;
                    }
                    pkt_stream.write(input_pkt);
                }
            }
            else{
                count = 0;
            }
        }
        // DUT
		krnl_s2mm(output, pkt_stream, size, matched, pattern_id, count_krnl);
		// Print results
		cout << "Match = " << matched << endl;
		cout << "Pattern ID = " << pattern_id[0] << endl;
		cout << endl;
    }
    cout << endl;
    myfile1.close();
    return 0;
}

string gen_random(int len, string text, int position) {
    string s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "!@#�$%&/|<>\\(){}[]=?+ ";
    for (int i = 0; i < len - text.size() + 1; ++i) {
        if (i == position){
            s += text;
        }
        else{
            s += alphanum[rand() % (sizeof(alphanum) - 1)];
        }
    }

    return s;
}
*/

#include <iostream>
#include "./pattern_matcher.h"
#include "./tmp/krnl_s2mm.h"
using namespace std;
int main() {
	ap_uint<16> out[1408];
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
	input.data(71,64) ='.';
	for(int i=72 ; i < DWIDTH - 8; i+=8){
		input.data(i + 7, i) = a_safe_prefix_postfix;
	}
	//ficken
	unsigned int size = 1408;
	bool match;
	for(int i=0; i< 22; i++){
		pkt_stream.write(input);
	}

	int count = 0;
	krnl_s2mm(out, pkt_stream, size);
//	std::cout << "HERE" << std::endl;
//	for(int i=0;i<size;i++){
//		if(out[i] < 16000)
//		std::cout<<">>>>>>>>>>>>>>>"<<out[i]<<"\n";
//
//	}

	return 0;
}
