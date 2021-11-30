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
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
boolean tmp_b0_1 =(buffer[0] == 'F');
boolean b0_1 = tmp_b0_1==1;
boolean tmp_b0_2 =(buffer[0] == '>');
boolean b0_2 = tmp_b0_2==1;
boolean tmp_b0_3 =(buffer[0] == '@');
boolean b0_3 = tmp_b0_3==1;
boolean tmp_b0_4 =(buffer[0] == '0');
boolean b0_4 = tmp_b0_4==1;
boolean tmp_b0_5 =(buffer[0] == '.');
boolean b0_5 = tmp_b0_5==1;
boolean tmp_b0_6 =(buffer[0] == 'S');
boolean b0_6 = tmp_b0_6==1;
boolean tmp_b0_7 =(buffer[0] == 'A');
boolean b0_7 = tmp_b0_7==1;
boolean tmp_b0_8 =(buffer[0] == '~');
boolean b0_8 = tmp_b0_8==1;
boolean tmp_b0_9 =(buffer[0] == '1');
boolean b0_9 = tmp_b0_9==1;
boolean tmp_b0_10 =(buffer[0] == '/');
boolean b0_10 = tmp_b0_10==1;
boolean tmp_b0_11 =(buffer[0] == 'T');
boolean b0_11 = tmp_b0_11==1;
boolean tmp_b0_12 =(buffer[0] == '<');
boolean b0_12 = tmp_b0_12==1;
boolean tmp_b0_13 =(buffer[0] == '%');
boolean b0_13 = tmp_b0_13==1;
boolean tmp_b0_14 =(buffer[0] == 'j');
boolean b0_14 = tmp_b0_14==1;
boolean tmp_b0_15 =(buffer[0] == 'B');
boolean b0_15 = tmp_b0_15==1;
boolean tmp_b0_16 =(buffer[0] == 'M');
boolean b0_16 = tmp_b0_16==1;
boolean tmp_b0_17 =(buffer[0] == 'P');
boolean b0_17 = tmp_b0_17==1;
boolean tmp_b0_18 =(buffer[0] == '=');
boolean b0_18 = tmp_b0_18==1;
boolean tmp_b1_1 =(buffer[1] == 'C');
boolean b1_1 = tmp_b1_1==1;
boolean tmp_b1_2 =(buffer[1] == '@');
boolean b1_2 = tmp_b1_2==1;
boolean tmp_b1_3 =(buffer[1] == '.');
boolean b1_3 = tmp_b1_3==1;
boolean tmp_b1_4 =(buffer[1] == 'T');
boolean b1_4 = tmp_b1_4==1;
boolean tmp_b1_5 =(buffer[1] == '%');
boolean b1_5 = tmp_b1_5==1;
boolean tmp_b1_6 =(buffer[1] == '0');
boolean b1_6 = tmp_b1_6==1;
boolean tmp_b1_7 =(buffer[1] == 'p');
boolean b1_7 = tmp_b1_7==1;
boolean tmp_b1_8 =(buffer[1] == 'O');
boolean b1_8 = tmp_b1_8==1;
boolean tmp_b1_9 =(buffer[1] == '!');
boolean b1_9 = tmp_b1_9==1;
boolean tmp_b1_10 =(buffer[1] == 'R');
boolean b1_10 = tmp_b1_10==1;
boolean tmp_b1_11 =(buffer[1] == 'M');
boolean b1_11 = tmp_b1_11==1;
boolean tmp_b1_12 =(buffer[1] == 'Z');
boolean b1_12 = tmp_b1_12==1;
boolean tmp_b1_13 =(buffer[1] == 'K');
boolean b1_13 = tmp_b1_13==1;
boolean tmp_b1_14 =(buffer[1] == '?');
boolean b1_14 = tmp_b1_14==1;
boolean tmp_b1_15 =(buffer[1] == '=');
boolean b1_15 = tmp_b1_15==1;
boolean tmp_b2_1 =(buffer[2] == '%');
boolean b2_1 = tmp_b2_1==1;
boolean tmp_b2_2 =(buffer[2] == 'l');
boolean b2_2 = tmp_b2_2==1;
boolean tmp_b2_3 =(buffer[2] == 'P');
boolean b2_3 = tmp_b2_3==1;
if(b0_13) {
matched = true;
pattern_id = 0;
}
if(b0_5) {
matched = true;
pattern_id = 1;
}
if(b0_5 && b1_3) {
matched = true;
pattern_id = 2;
}
if(b0_5 && b1_7 && b2_2) {
matched = true;
pattern_id = 3;
}
if(b0_10) {
matched = true;
pattern_id = 4;
}
if(b0_10 && b1_5 && b2_1) {
matched = true;
pattern_id = 5;
}
if(b0_10 && b1_14) {
matched = true;
pattern_id = 6;
}
if(b0_4) {
matched = true;
pattern_id = 7;
}
if(b0_4 && b1_6) {
matched = true;
pattern_id = 8;
}
if(b0_9) {
matched = true;
pattern_id = 9;
}
if(b0_12 && b1_9) {
matched = true;
pattern_id = 10;
}
if(b0_12 && b1_10) {
matched = true;
pattern_id = 11;
}
if(b0_18 && b1_15) {
matched = true;
pattern_id = 12;
}
if(b0_2) {
matched = true;
pattern_id = 13;
}
if(b0_3) {
matched = true;
pattern_id = 14;
}
if(b0_3 && b1_2) {
matched = true;
pattern_id = 15;
}
if(b0_7) {
matched = true;
pattern_id = 16;
}
if(b0_15 && b1_11) {
matched = true;
pattern_id = 17;
}
if(b0_1 && b1_1) {
matched = true;
pattern_id = 18;
}
if(b0_16 && b1_12) {
matched = true;
pattern_id = 19;
}
if(b0_17 && b1_13) {
matched = true;
pattern_id = 20;
}
if(b0_6 && b1_4) {
matched = true;
pattern_id = 21;
}
if(b0_11 && b1_8 && b2_3) {
matched = true;
pattern_id = 22;
}
if(b0_14) {
matched = true;
pattern_id = 23;
}
if(b0_8) {
matched = true;
pattern_id = 24;
}

}