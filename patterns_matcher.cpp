#include "pattern_matcher.h"


void shift(char buffer[buffer_size]){
for(int i=0; i< buffer_size - chunk_len; i++){
buffer[i] = buffer[i+chunk_len];
}
}

void fill(char chunk[chunk_len], char buffer[buffer_size]){
for(int i=0;i<chunk_len; i++){
buffer[buffer_size - chunk_len + i] = chunk[i];
}
}

void dummy(bool &matched, int &pattern_id, char buffer[buffer_size]){
matched = 1;
dummy_loop:for(int i=0; i< buffer_size - chunk_len; i++){
pattern_id += buffer[i];
}
}
void match(bool &matched, int pattern_id[1000], char buffer[buffer_size]) {
boolean b0_1;
b0_1(0,0) =(buffer[0] == 'F');
boolean b0_2;
b0_2(0,0) =(buffer[0] == '>');
boolean b0_3;
b0_3(0,0) =(buffer[0] == '@');
boolean b0_4;
b0_4(0,0) =(buffer[0] == '0');
boolean b0_5;
b0_5(0,0) =(buffer[0] == '.');
boolean b0_6;
b0_6(0,0) =(buffer[0] == 'S');
boolean b0_7;
b0_7(0,0) =(buffer[0] == 'A');
boolean b0_8;
b0_8(0,0) =(buffer[0] == '~');
boolean b0_9;
b0_9(0,0) =(buffer[0] == '1');
boolean b0_10;
b0_10(0,0) =(buffer[0] == '/');
boolean b0_11;
b0_11(0,0) =(buffer[0] == 'T');
boolean b0_12;
b0_12(0,0) =(buffer[0] == '<');
boolean b0_13;
b0_13(0,0) =(buffer[0] == '%');
boolean b0_14;
b0_14(0,0) =(buffer[0] == 'j');
boolean b0_15;
b0_15(0,0) =(buffer[0] == 'B');
boolean b0_16;
b0_16(0,0) =(buffer[0] == 'M');
boolean b0_17;
b0_17(0,0) =(buffer[0] == 'P');
boolean b0_18;
b0_18(0,0) =(buffer[0] == '=');
boolean b1_1;
b1_1(0,0) =(buffer[1] == 'C');
boolean b1_2;
b1_2(0,0) =(buffer[1] == '@');
boolean b1_3;
b1_3(0,0) =(buffer[1] == '.');
boolean b1_4;
b1_4(0,0) =(buffer[1] == 'T');
boolean b1_5;
b1_5(0,0) =(buffer[1] == '%');
boolean b1_6;
b1_6(0,0) =(buffer[1] == '0');
boolean b1_7;
b1_7(0,0) =(buffer[1] == 'p');
boolean b1_8;
b1_8(0,0) =(buffer[1] == 'O');
boolean b1_9;
b1_9(0,0) =(buffer[1] == '!');
boolean b1_10;
b1_10(0,0) =(buffer[1] == 'R');
boolean b1_11;
b1_11(0,0) =(buffer[1] == 'M');
boolean b1_12;
b1_12(0,0) =(buffer[1] == 'Z');
boolean b1_13;
b1_13(0,0) =(buffer[1] == 'K');
boolean b1_14;
b1_14(0,0) =(buffer[1] == '?');
boolean b1_15;
b1_15(0,0) =(buffer[1] == '=');
boolean b2_1;
b2_1(0,0) =(buffer[2] == '%');
boolean b2_2;
b2_2(0,0) =(buffer[2] == 'l');
boolean b2_3;
b2_3(0,0) =(buffer[2] == 'P');
if(b0_13) {
pattern_id [0] = 1;
}
if(b0_5) {
pattern_id [1] = 1;
}
if(b0_5 && b1_3) {
pattern_id [2] = 1;
}
if(b0_5 && b1_7 && b2_2) {
pattern_id [3] = 1;
}
if(b0_10) {
pattern_id [4] = 1;
}
if(b0_10 && b1_5 && b2_1) {
pattern_id [5] = 1;
}
if(b0_10 && b1_14) {
pattern_id [6] = 1;
}
if(b0_4) {
pattern_id [7] = 1;
}
if(b0_4 && b1_6) {
pattern_id [8] = 1;
}
if(b0_9) {
pattern_id [9] = 1;
}
if(b0_12 && b1_9) {
pattern_id [10] = 1;
}
if(b0_12 && b1_10) {
pattern_id [11] = 1;
}
if(b0_18 && b1_15) {
pattern_id [12] = 1;
}
if(b0_2) {
pattern_id [13] = 1;
}
if(b0_3) {
pattern_id [14] = 1;
}
if(b0_3 && b1_2) {
pattern_id [15] = 1;
}
if(b0_7) {
pattern_id [16] = 1;
}
if(b0_15 && b1_11) {
pattern_id [17] = 1;
}
if(b0_1 && b1_1) {
pattern_id [18] = 1;
}
if(b0_16 && b1_12) {
pattern_id [19] = 1;
}
if(b0_17 && b1_13) {
pattern_id [20] = 1;
}
if(b0_6 && b1_4) {
pattern_id [21] = 1;
}
if(b0_11 && b1_8 && b2_3) {
pattern_id [22] = 1;
}
if(b0_14) {
pattern_id [23] = 1;
}
if(b0_8) {
pattern_id [24] = 1;
}

}