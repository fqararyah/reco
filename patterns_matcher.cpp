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
boolean b0_1 =(buffer[0] == 'F');
boolean b0_2 =(buffer[0] == 'l');
boolean b0_3 =(buffer[0] == '>');
boolean b0_4 =(buffer[0] == '@');
boolean b0_5 =(buffer[0] == '0');
boolean b0_6 =(buffer[0] == '.');
boolean b0_7 =(buffer[0] == 'C');
boolean b0_8 =(buffer[0] == 'M');
boolean b0_9 =(buffer[0] == 'S');
boolean b0_10 =(buffer[0] == 'A');
boolean b0_11 =(buffer[0] == '%');
boolean b0_12 =(buffer[0] == '4');
boolean b0_13 =(buffer[0] == '~');
boolean b0_14 =(buffer[0] == '1');
boolean b0_15 =(buffer[0] == '/');
boolean b0_16 =(buffer[0] == 'P');
boolean b0_17 =(buffer[0] == '2');
boolean b0_18 =(buffer[0] == 'R');
boolean b0_19 =(buffer[0] == 'T');
boolean b0_20 =(buffer[0] == '<');
boolean b0_21 =(buffer[0] == 'G');
boolean b0_22 =(buffer[0] == 'j');
boolean b0_23 =(buffer[0] == 'B');
boolean b0_24 =(buffer[0] == ' ');
boolean b0_25 =(buffer[0] == 't');
boolean b0_26 =(buffer[0] == '3');
boolean b0_27 =(buffer[0] == 'o');
boolean b0_28 =(buffer[0] == '=');
boolean b0_29 =(buffer[0] == 's');
boolean b0_30 =(buffer[0] == '8');
boolean b1_1 =(buffer[1] == 'C');
boolean b1_2 =(buffer[1] == '4');
boolean b1_3 =(buffer[1] == '@');
boolean b1_4 =(buffer[1] == 'W');
boolean b1_5 =(buffer[1] == 'E');
boolean b1_6 =(buffer[1] == '.');
boolean b1_7 =(buffer[1] == 'K');
boolean b1_8 =(buffer[1] == 'T');
boolean b1_9 =(buffer[1] == '2');
boolean b1_10 =(buffer[1] == '1');
boolean b1_11 =(buffer[1] == '0');
boolean b1_12 =(buffer[1] == '%');
boolean b1_13 =(buffer[1] == 'M');
boolean b1_14 =(buffer[1] == 'p');
boolean b1_15 =(buffer[1] == 'O');
boolean b1_16 =(buffer[1] == '!');
boolean b1_17 =(buffer[1] == 'r');
boolean b1_18 =(buffer[1] == 'R');
boolean b1_19 =(buffer[1] == 'U');
boolean b1_20 =(buffer[1] == 'Q');
boolean b1_21 =(buffer[1] == 'N');
boolean b1_22 =(buffer[1] == 'Z');
boolean b1_23 =(buffer[1] == '?');
boolean b1_24 =(buffer[1] == '=');
boolean b1_25 =(buffer[1] == 'l');
boolean b1_26 =(buffer[1] == 'm');
boolean b1_27 =(buffer[1] == 'x');
boolean b1_28 =(buffer[1] == 'v');
boolean b1_29 =(buffer[1] == '5');
boolean b2_1 =(buffer[2] == ' ');
boolean b2_2 =(buffer[2] == '4');
boolean b2_3 =(buffer[2] == 'D');
boolean b2_4 =(buffer[2] == 'L');
boolean b2_5 =(buffer[2] == '0');
boolean b2_6 =(buffer[2] == 'u');
boolean b2_7 =(buffer[2] == '3');
boolean b2_8 =(buffer[2] == '/');
boolean b2_9 =(buffer[2] == '%');
boolean b2_10 =(buffer[2] == 'l');
boolean b2_11 =(buffer[2] == 'P');
boolean b2_12 =(buffer[2] == 'a');
boolean b2_13 =(buffer[2] == 't');
boolean b2_14 =(buffer[2] == 'p');
boolean b2_15 =(buffer[2] == 'T');
boolean b2_16 =(buffer[2] == 'S');
boolean b2_17 =(buffer[2] == 'y');
boolean b2_18 =(buffer[2] == '2');
boolean b2_19 =(buffer[2] == '=');
boolean b2_20 =(buffer[2] == 'd');
boolean b2_21 =(buffer[2] == 's');
boolean b2_22 =(buffer[2] == '7');
boolean b2_23 =(buffer[2] == '1');
boolean b2_24 =(buffer[2] == '6');
if(b0_1 && b1_1 && b2_1) {
matched = true;

}
if(b0_2 && b1_2 && b2_2) {
matched = true;

}
if(b0_3) {
matched = true;

}
if(b0_4 && b1_3) {
matched = true;

}
if(b0_4) {
matched = true;

}
if(b0_5) {
matched = true;

}
if(b0_6) {
matched = true;

}
if(b0_7 && b1_4 && b2_3) {
matched = true;

}
if(b0_7 && b1_5 && b2_4) {
matched = true;

}
if(b0_6 && b1_6) {
matched = true;

}
if(b0_8 && b1_7 && b2_3) {
matched = true;

}
if(b0_9 && b1_8) {
matched = true;

}
if(b0_10) {
matched = true;

}
if(b0_11 && b1_9 && b2_5) {
matched = true;

}
if(b0_11 && b1_10 && b2_6) {
matched = true;

}
if(b0_12 && b1_11 && b2_7) {
matched = true;

}
if(b0_6 && b1_6 && b2_8) {
matched = true;

}
if(b0_13) {
matched = true;

}
if(b0_14) {
matched = true;

}
if(b0_15 && b1_12 && b2_9) {
matched = true;

}
if(b0_7 && b1_13 && b2_3) {
matched = true;

}
if(b0_16 && b1_4 && b2_3) {
matched = true;

}
if(b0_17 && b1_11 && b2_5) {
matched = true;

}
if(b0_18 && b1_13 && b2_3) {
matched = true;

}
if(b0_5 && b1_11) {
matched = true;

}
if(b0_6 && b1_14 && b2_10) {
matched = true;

}
if(b0_19 && b1_15 && b2_11) {
matched = true;

}
if(b0_20 && b1_16) {
matched = true;

}
if(b0_11) {
matched = true;

}
if(b0_6 && b1_17 && b2_12) {
matched = true;

}
if(b0_6 && b1_17 && b2_13) {
matched = true;

}
if(b0_6 && b1_17 && b2_14) {
matched = true;

}
if(b0_20 && b1_18) {
matched = true;

}
if(b0_21 && b1_5 && b2_15) {
matched = true;

}
if(b0_16 && b1_19 && b2_15) {
matched = true;

}
if(b0_22) {
matched = true;

}
if(b0_23 && b1_13) {
matched = true;

}
if(b0_18 && b1_20 && b2_16) {
matched = true;

}
if(b0_21 && b1_21 && b2_15) {
matched = true;

}
if(b0_15) {
matched = true;

}
if(b0_24) {
matched = true;

}
if(b0_25 && b1_17 && b2_17) {
matched = true;

}
if(b0_26 && b1_11 && b2_18) {
matched = true;

}
if(b0_27 && b1_14 && b2_19) {
matched = true;

}
if(b0_8 && b1_22) {
matched = true;

}
if(b0_16 && b1_7) {
matched = true;

}
if(b0_15 && b1_23) {
matched = true;

}
if(b0_28 && b1_24) {
matched = true;

}
if(b0_6 && b1_25 && b2_20) {
matched = true;

}
if(b0_15 && b1_9 && b2_5) {
matched = true;

}
if(b0_29 && b1_26 && b2_21) {
matched = true;

}
if(b0_15 && b1_27 && b2_8) {
matched = true;

}
if(b0_26 && b1_11 && b2_22) {
matched = true;

}
if(b0_15 && b1_28 && b2_23) {
matched = true;

}
if(b0_30 && b1_29 && b2_24) {
matched = true;

}

}