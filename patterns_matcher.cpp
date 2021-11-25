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
boolean b0_1 =(buffer[0] == '2');
boolean b0_2 =(buffer[0] == 'q');
boolean b0_3 =(buffer[0] == 'G');
boolean b0_4 =(buffer[0] == 'B');
boolean b0_5 =(buffer[0] == 'W');
boolean b0_6 =(buffer[0] == 'R');
boolean b0_7 =(buffer[0] == 'F');
boolean b0_8 =(buffer[0] == 'h');
boolean b0_9 =(buffer[0] == 'U');
boolean b0_10 =(buffer[0] == 'N');
boolean b0_11 =(buffer[0] == 'c');
boolean b0_12 =(buffer[0] == 'a');
boolean b0_13 =(buffer[0] == 'l');
boolean b0_14 =(buffer[0] == '|');
boolean b0_15 =(buffer[0] == 'y');
boolean b0_16 =(buffer[0] == 'A');
boolean b0_17 =(buffer[0] == 'p');
boolean b0_18 =(buffer[0] == 'w');
boolean b1_1 =(buffer[1] == '|');
boolean b1_2 =(buffer[1] == 'a');
boolean b1_3 =(buffer[1] == 'e');
boolean b1_4 =(buffer[1] == 'N');
boolean b1_5 =(buffer[1] == 'H');
boolean b1_6 =(buffer[1] == 't');
boolean b1_7 =(buffer[1] == 'C');
boolean b1_8 =(buffer[1] == 'o');
boolean b1_9 =(buffer[1] == 'S');
boolean b1_10 =(buffer[1] == 'T');
boolean b1_11 =(buffer[1] == 'c');
boolean b1_12 =(buffer[1] == 'B');
boolean b1_13 =(buffer[1] == 'p');
boolean b1_14 =(buffer[1] == 'h');
boolean b1_15 =(buffer[1] == '0');
boolean b2_1 =(buffer[2] == '0');
boolean b2_2 =(buffer[2] == 'z');
boolean b2_3 =(buffer[2] == 't');
boolean b2_4 =(buffer[2] == '|');
boolean b2_5 =(buffer[2] == 'A');
boolean b2_6 =(buffer[2] == 'm');
boolean b2_7 =(buffer[2] == ' ');
boolean b2_8 =(buffer[2] == 's');
boolean b2_9 =(buffer[2] == 'E');
boolean b2_10 =(buffer[2] == '3');
boolean b2_11 =(buffer[2] == 'P');
boolean b2_12 =(buffer[2] == 'g');
boolean b2_13 =(buffer[2] == '4');
boolean b2_14 =(buffer[2] == 'i');
boolean b2_15 =(buffer[2] == 'h');
boolean b3_1 =(buffer[3] == '0');
boolean b3_2 =(buffer[3] == 'w');
boolean b3_3 =(buffer[3] == 'I');
boolean b3_4 =(buffer[3] == '1');
boolean b3_5 =(buffer[3] == 'T');
boolean b3_6 =(buffer[3] == 'o');
boolean b3_7 =(buffer[3] == 'u');
boolean b3_8 =(buffer[3] == 't');
boolean b3_9 =(buffer[3] == 'R');
boolean b3_10 =(buffer[3] == 'S');
boolean b3_11 =(buffer[3] == 'e');
boolean b3_12 =(buffer[3] == 'A');
boolean b3_13 =(buffer[3] == 'O');
boolean b3_14 =(buffer[3] == ' ');
boolean b3_15 =(buffer[3] == 'i');
boolean b3_16 =(buffer[3] == 'g');
boolean b3_17 =(buffer[3] == 'h');
boolean b3_18 =(buffer[3] == 's');
boolean b4_1 =(buffer[4] == ' ');
boolean b4_2 =(buffer[4] == 's');
boolean b4_3 =(buffer[4] == 'n');
boolean b4_4 =(buffer[4] == '0');
boolean b4_5 =(buffer[4] == 'I');
boolean b4_6 =(buffer[4] == 't');
boolean b4_7 =(buffer[4] == 'p');
boolean b4_8 =(buffer[4] == 'C');
boolean b4_9 =(buffer[4] == 'N');
boolean b4_10 =(buffer[4] == 'P');
boolean b4_11 =(buffer[4] == 'v');
boolean b4_12 =(buffer[4] == 'e');
boolean b4_13 =(buffer[4] == 'B');
boolean b4_14 =(buffer[4] == 'c');
boolean b4_15 =(buffer[4] == 'h');
boolean b5_1 =(buffer[5] == '0');
boolean b5_2 =(buffer[5] == 'x');
boolean b5_3 =(buffer[5] == 'f');
boolean b5_4 =(buffer[5] == ' ');
boolean b5_5 =(buffer[5] == 'S');
boolean b5_6 =(buffer[5] == 'e');
boolean b5_7 =(buffer[5] == 'h');
boolean b5_8 =(buffer[5] == 'r');
boolean b5_9 =(buffer[5] == '5');
boolean b5_10 =(buffer[5] == 'o');
boolean b5_11 =(buffer[5] == 'a');
boolean b5_12 =(buffer[5] == 'd');
boolean b5_13 =(buffer[5] == '4');
boolean b6_1 =(buffer[6] == '0');
boolean b6_2 =(buffer[6] == '.');
boolean b6_3 =(buffer[6] == 'o');
boolean b6_4 =(buffer[6] == 'I');
boolean b6_5 =(buffer[6] == '|');
boolean b6_6 =(buffer[6] == 'U');
boolean b6_7 =(buffer[6] == 'e');
boolean b6_8 =(buffer[6] == 'a');
boolean b6_9 =(buffer[6] == 'C');
boolean b6_10 =(buffer[6] == 'r');
boolean b6_11 =(buffer[6] == 't');
boolean b6_12 =(buffer[6] == ' ');
boolean b6_13 =(buffer[6] == 'M');
boolean b6_14 =(buffer[6] == 'z');
boolean b7_1 =(buffer[7] == ' ');
boolean b7_2 =(buffer[7] == 'h');
boolean b7_3 =(buffer[7] == '|');
boolean b7_4 =(buffer[7] == '0');
boolean b7_5 =(buffer[7] == 'T');
boolean b7_6 =(buffer[7] == '3');
boolean b7_7 =(buffer[7] == 's');
boolean b7_8 =(buffer[7] == 'r');
boolean b7_9 =(buffer[7] == 't');
boolean b7_10 =(buffer[7] == 'e');
boolean b7_11 =(buffer[7] == 'i');
boolean b7_12 =(buffer[7] == 'y');
boolean b8_1 =(buffer[8] == '0');
boolean b8_2 =(buffer[8] == 's');
boolean b8_3 =(buffer[8] == ' ');
boolean b8_4 =(buffer[8] == 'A');
boolean b8_5 =(buffer[8] == 'e');
boolean b8_6 =(buffer[8] == 'h');
boolean b8_7 =(buffer[8] == 'n');
boolean b8_8 =(buffer[8] == 'r');
boolean b9_1 =(buffer[9] == '0');
boolean b9_2 =(buffer[9] == 'q');
boolean b9_3 =(buffer[9] == 'D');
boolean b9_4 =(buffer[9] == '|');
boolean b9_5 =(buffer[9] == 'e');
boolean b9_6 =(buffer[9] == 'o');
boolean b9_7 =(buffer[9] == 'M');
boolean b10_1 =(buffer[10] == ' ');
boolean b10_2 =(buffer[10] == '|');
boolean b10_3 =(buffer[10] == '2');
boolean b10_4 =(buffer[10] == 'r');
boolean b10_5 =(buffer[10] == 'p');
boolean b10_6 =(buffer[10] == 'o');
boolean b11_1 =(buffer[11] == '0');
boolean b11_2 =(buffer[11] == ' ');
boolean b11_3 =(buffer[11] == 'e');
boolean b11_4 =(buffer[11] == 'u');
boolean b11_5 =(buffer[11] == 's');
boolean b12_1 =(buffer[12] == '6');
boolean b12_2 =(buffer[12] == '0');
boolean b12_3 =(buffer[12] == 'n');
boolean b12_4 =(buffer[12] == 't');
boolean b12_5 =(buffer[12] == 'e');
boolean b13_1 =(buffer[13] == ' ');
boolean b13_2 =(buffer[13] == '0');
boolean b13_3 =(buffer[13] == 'h');
boolean b13_4 =(buffer[13] == 'r');
boolean b14_1 =(buffer[14] == '0');
boolean b14_2 =(buffer[14] == '|');
boolean b14_3 =(buffer[14] == ' ');
boolean b14_4 =(buffer[14] == 'v');
boolean b15_1 =(buffer[15] == '0');
boolean b15_2 =(buffer[15] == 'I');
boolean b15_3 =(buffer[15] == 'e');
boolean b16_1 =(buffer[16] == ' ');
boolean b16_2 =(buffer[16] == 's');
boolean b16_3 =(buffer[16] == 'r');
boolean b17_1 =(buffer[17] == '0');
boolean b17_2 =(buffer[17] == ' ');
boolean b18_1 =(buffer[18] == '0');
boolean b18_2 =(buffer[18] == 'O');
boolean b19_1 =(buffer[19] == ' ');
boolean b19_2 =(buffer[19] == 'p');
boolean b20_1 =(buffer[20] == '0');
boolean b20_2 =(buffer[20] == 'e');
boolean b21_1 =(buffer[21] == '0');
boolean b21_2 =(buffer[21] == 'n');
boolean b22_1 =(buffer[22] == '|');
boolean b23_1 =(buffer[23] == 'D');
boolean b24_1 =(buffer[24] == 'r');
boolean b25_1 =(buffer[25] == 'i');
boolean b26_1 =(buffer[26] == 'v');
boolean b27_1 =(buffer[27] == 'e');
boolean b28_1 =(buffer[28] == 's');
boolean b29_1 =(buffer[29] == '|');
boolean b30_1 =(buffer[30] == '2');
boolean b31_1 =(buffer[31] == '4');
boolean b32_1 =(buffer[32] == ' ');
boolean b33_1 =(buffer[33] == '0');
boolean b34_1 =(buffer[34] == '0');
boolean b35_1 =(buffer[35] == '|');
if(b0_1 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_1 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_1 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1 && b23_1 && b24_1 && b25_1 && b26_1 && b27_1 && b28_1 && b29_1 && b30_1 && b31_1 && b32_1 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 0;
}
if(b0_2 && b1_2 && b2_2 && b3_2 && b4_2 && b5_2 && b6_2 && b7_2 && b8_2 && b9_2) {
matched = true;
pattern_id = 1;
}
if(b0_3 && b1_3 && b2_3 && b3_3 && b4_3 && b5_3 && b6_3 && b7_3 && b8_1 && b9_3 && b10_2) {
matched = true;
pattern_id = 2;
}
if(b0_4 && b1_4 && b2_4 && b3_4 && b4_4 && b5_4 && b6_1 && b7_4 && b8_3 && b9_1 && b10_3 && b11_2 && b12_2 && b13_2 && b14_2) {
matched = true;
pattern_id = 3;
}
if(b0_5 && b1_5 && b2_5 && b3_5 && b4_5 && b5_5 && b6_4 && b7_5) {
matched = true;
pattern_id = 4;
}
if(b0_6 && b1_3 && b2_6 && b3_6 && b4_6 && b5_6 && b6_5 && b7_6 && b8_4 && b9_4 && b10_1) {
matched = true;
pattern_id = 5;
}
if(b0_5 && b1_6 && b2_2 && b3_7 && b4_7 && b5_4 && b6_6 && b7_7 && b8_5) {
matched = true;
pattern_id = 6;
}
if(b0_7 && b1_7 && b2_7) {
matched = true;
pattern_id = 7;
}
if(b0_8 && b1_8 && b2_8 && b3_8) {
matched = true;
pattern_id = 8;
}
if(b0_9 && b1_9 && b2_9 && b3_9) {
matched = true;
pattern_id = 9;
}
if(b0_10 && b1_3 && b2_3 && b3_10 && b4_7 && b5_7 && b6_7 && b7_8 && b8_5) {
matched = true;
pattern_id = 10;
}
if(b0_3 && b1_2 && b2_3 && b3_11 && b4_8 && b5_8 && b6_8 && b7_7 && b8_6 && b9_5 && b10_4) {
matched = true;
pattern_id = 11;
}
if(b0_11 && b1_1 && b2_10 && b3_12 && b4_1 && b5_9 && b6_9 && b7_3) {
matched = true;
pattern_id = 12;
}
if(b0_7 && b1_10 && b2_11 && b3_13 && b4_9) {
matched = true;
pattern_id = 13;
}
if(b0_7 && b1_10 && b2_11 && b3_14 && b4_10 && b5_10 && b6_10 && b7_9 && b8_3 && b9_6 && b10_5 && b11_3 && b12_3) {
matched = true;
pattern_id = 14;
}
if(b0_12 && b1_11 && b2_3 && b3_15 && b4_11 && b5_11 && b6_11 && b7_10) {
matched = true;
pattern_id = 15;
}
if(b0_13 && b1_8 && b2_12 && b3_16 && b4_12 && b5_12 && b6_12 && b7_11 && b8_7) {
matched = true;
pattern_id = 16;
}
if(b0_14 && b1_12 && b2_13 && b3_14 && b4_13 && b5_13 && b6_5) {
matched = true;
pattern_id = 17;
}
if(b0_15 && b1_13 && b2_14 && b3_1 && b4_14 && b5_11) {
matched = true;
pattern_id = 18;
}
if(b0_16 && b1_14 && b2_15 && b3_17 && b4_15 && b5_4 && b6_13 && b7_12 && b8_3 && b9_7 && b10_6 && b11_4 && b12_4 && b13_3 && b14_3 && b15_2 && b16_2 && b17_2 && b18_2 && b19_2 && b20_2 && b21_2) {
matched = true;
pattern_id = 19;
}
if(b0_17 && b1_14 && b2_5 && b3_18 && b4_12 && b5_4 && b6_14 && b7_10 && b8_8 && b9_6 && b10_1 && b11_5 && b12_5 && b13_4 && b14_4 && b15_3 && b16_3) {
matched = true;
pattern_id = 20;
}
if(b0_18 && b1_15 && b2_1 && b3_2 && b4_4 && b5_1) {
matched = true;
pattern_id = 21;
}

}