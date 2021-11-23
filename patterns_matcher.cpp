#include "pattern_matcher.h"


void pattern_matcher(ap_int<1> positions[256][chunck_len + pattern_max_len], char chunk[chunck_len + pattern_max_len - 1]) {
int starting_indx_0 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('q' == chunk[i] && 'V' == chunk[i+1] && 'w' == chunk[i+2] && 'Y' == chunk[i+3] && 'S' == chunk[i+4] && 'V' == chunk[i+5] && 'P' == chunk[i+6] && 'H' == chunk[i+7] && 'b' == chunk[i+8] && 'D' == chunk[i+9] && 'X' == chunk[i+10] && 'p' == chunk[i+11] && 'P' == chunk[i+12] && 'd' == chunk[i+13] && 'k' == chunk[i+14] && 'h' == chunk[i+15] && 'x' == chunk[i+16] && 'E' == chunk[i+17] && 'p' == chunk[i+18] && 'y' == chunk[i+19]) {
 positions[0][i] = 1; 
}
}
int starting_indx_1 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'K' == chunk[i+1] && 'p' == chunk[i+2] && 'a' == chunk[i+3] && 'U' == chunk[i+4] && 'n' == chunk[i+5] && 'A' == chunk[i+6] && 'r' == chunk[i+7] && 'l' == chunk[i+8] && 'X' == chunk[i+9] && 'y' == chunk[i+10] && 'k' == chunk[i+11] && 'W' == chunk[i+12] && 'Z' == chunk[i+13] && 'e' == chunk[i+14] && 'i' == chunk[i+15] && 'N' == chunk[i+16] && 'N' == chunk[i+17]) {
 positions[1][i] = 1; 
}
}
int starting_indx_2 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('i' == chunk[i] && 'i' == chunk[i+1] && 'a' == chunk[i+2] && 'a' == chunk[i+3] && 'n' == chunk[i+4] && 'X' == chunk[i+5] && 'n' == chunk[i+6] && 'k' == chunk[i+7] && 'k' == chunk[i+8] && 's' == chunk[i+9] && 'u' == chunk[i+10] && 'm' == chunk[i+11] && 'I' == chunk[i+12] && 'R' == chunk[i+13] && 'O' == chunk[i+14]) {
 positions[2][i] = 1; 
}
}
int starting_indx_3 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('l' == chunk[i] && 'S' == chunk[i+1] && 'm' == chunk[i+2] && 'y' == chunk[i+3] && 't' == chunk[i+4] && 'b' == chunk[i+5] && 'x' == chunk[i+6]) {
 positions[3][i] = 1; 
}
}
int starting_indx_4 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('k' == chunk[i] && 'j' == chunk[i+1] && 'q' == chunk[i+2] && 'e' == chunk[i+3] && 'v' == chunk[i+4] && 't' == chunk[i+5] && 'M' == chunk[i+6] && 'L' == chunk[i+7] && 'a' == chunk[i+8] && 'M' == chunk[i+9] && 'R' == chunk[i+10] && 'T' == chunk[i+11] && 'v' == chunk[i+12] && 'e' == chunk[i+13]) {
 positions[4][i] = 1; 
}
}
int starting_indx_5 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('w' == chunk[i] && 't' == chunk[i+1] && 'E' == chunk[i+2] && 'S' == chunk[i+3] && 'u' == chunk[i+4] && 'l' == chunk[i+5] && 'E' == chunk[i+6] && 'E' == chunk[i+7] && 'T' == chunk[i+8] && 'l' == chunk[i+9]) {
 positions[5][i] = 1; 
}
}
int starting_indx_6 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('q' == chunk[i] && 'b' == chunk[i+1]) {
 positions[6][i] = 1; 
}
}
int starting_indx_7 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('z' == chunk[i] && 'b' == chunk[i+1] && 'J' == chunk[i+2] && 'Y' == chunk[i+3] && 'A' == chunk[i+4] && 'x' == chunk[i+5] && 'y' == chunk[i+6] && 'L' == chunk[i+7] && 'a' == chunk[i+8] && 'C' == chunk[i+9] && 'c' == chunk[i+10] && 'T' == chunk[i+11]) {
 positions[7][i] = 1; 
}
}
int starting_indx_8 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('N' == chunk[i] && 'm' == chunk[i+1] && 'h' == chunk[i+2] && 'W' == chunk[i+3] && 'p' == chunk[i+4] && 'D' == chunk[i+5]) {
 positions[8][i] = 1; 
}
}
int starting_indx_9 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('G' == chunk[i] && 'w' == chunk[i+1] && 'H' == chunk[i+2] && 'q' == chunk[i+3] && 'X' == chunk[i+4] && 'D' == chunk[i+5] && 'g' == chunk[i+6] && 'L' == chunk[i+7] && 'V' == chunk[i+8] && 'X' == chunk[i+9] && 'Z' == chunk[i+10] && 'x' == chunk[i+11]) {
 positions[9][i] = 1; 
}
}
int starting_indx_10 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('c' == chunk[i] && 'B' == chunk[i+1] && 'f' == chunk[i+2] && 'n' == chunk[i+3] && 'v' == chunk[i+4] && 'G' == chunk[i+5] && 'N' == chunk[i+6] && 'x' == chunk[i+7] && 'j' == chunk[i+8] && 'v' == chunk[i+9]) {
 positions[10][i] = 1; 
}
}
int starting_indx_11 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 'I' == chunk[i+1] && 'f' == chunk[i+2] && 't' == chunk[i+3] && 'R' == chunk[i+4] && 'u' == chunk[i+5] && 't' == chunk[i+6] && 'l' == chunk[i+7] && 'Z' == chunk[i+8]) {
 positions[11][i] = 1; 
}
}
int starting_indx_12 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('O' == chunk[i] && 'j' == chunk[i+1] && 'U' == chunk[i+2]) {
 positions[12][i] = 1; 
}
}
int starting_indx_13 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('E' == chunk[i] && 'k' == chunk[i+1] && 'U' == chunk[i+2] && 'd' == chunk[i+3] && 'f' == chunk[i+4] && 'M' == chunk[i+5] && 'I' == chunk[i+6] && 'z' == chunk[i+7] && 'c' == chunk[i+8] && 'p' == chunk[i+9]) {
 positions[13][i] = 1; 
}
}
int starting_indx_14 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('w' == chunk[i] && 'q' == chunk[i+1] && 'D' == chunk[i+2] && 'P' == chunk[i+3] && 'A' == chunk[i+4] && 'j' == chunk[i+5] && 'd' == chunk[i+6] && 'O' == chunk[i+7] && 'c' == chunk[i+8] && 'Z' == chunk[i+9] && 'F' == chunk[i+10] && 'v' == chunk[i+11] && 'n' == chunk[i+12] && 'i' == chunk[i+13] && 'U' == chunk[i+14] && 'K' == chunk[i+15] && 'i' == chunk[i+16] && 'O' == chunk[i+17] && 'Y' == chunk[i+18] && 'A' == chunk[i+19]) {
 positions[14][i] = 1; 
}
}
int starting_indx_15 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('k' == chunk[i] && 'B' == chunk[i+1] && 'x' == chunk[i+2] && 'j' == chunk[i+3]) {
 positions[15][i] = 1; 
}
}
int starting_indx_16 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 's' == chunk[i+1]) {
 positions[16][i] = 1; 
}
}
int starting_indx_17 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'N' == chunk[i+1] && 'k' == chunk[i+2] && 'H' == chunk[i+3] && 'D' == chunk[i+4]) {
 positions[17][i] = 1; 
}
}
int starting_indx_18 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 'U' == chunk[i+1] && 'u' == chunk[i+2] && 'E' == chunk[i+3] && 'r' == chunk[i+4] && 's' == chunk[i+5] && 'E' == chunk[i+6] && 'z' == chunk[i+7] && 'j' == chunk[i+8] && 'h' == chunk[i+9] && 'y' == chunk[i+10] && 'I' == chunk[i+11] && 'l' == chunk[i+12] && 'O' == chunk[i+13] && 'F' == chunk[i+14] && 'v' == chunk[i+15]) {
 positions[18][i] = 1; 
}
}
int starting_indx_19 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'F' == chunk[i+1] && 'r' == chunk[i+2] && 'G' == chunk[i+3] && 'Y' == chunk[i+4] && 'J' == chunk[i+5]) {
 positions[19][i] = 1; 
}
}
int starting_indx_20 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 'e' == chunk[i+1] && 'Y' == chunk[i+2] && 'Y' == chunk[i+3] && 'X' == chunk[i+4] && 'w' == chunk[i+5] && 'S' == chunk[i+6] && 'L' == chunk[i+7] && 'Q' == chunk[i+8] && 'c' == chunk[i+9] && 'W' == chunk[i+10] && 't' == chunk[i+11] && 'x' == chunk[i+12] && 'J' == chunk[i+13] && 'T' == chunk[i+14] && 'Q' == chunk[i+15] && 'r' == chunk[i+16]) {
 positions[20][i] = 1; 
}
}
int starting_indx_21 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('q' == chunk[i] && 'X' == chunk[i+1] && 'S' == chunk[i+2] && 'T' == chunk[i+3] && 's' == chunk[i+4] && 'v' == chunk[i+5] && 'P' == chunk[i+6] && 'l' == chunk[i+7] && 'L' == chunk[i+8] && 'a' == chunk[i+9] && 'E' == chunk[i+10] && 'J' == chunk[i+11] && 'X' == chunk[i+12] && 'q' == chunk[i+13] && 'u' == chunk[i+14] && 'Q' == chunk[i+15]) {
 positions[21][i] = 1; 
}
}
int starting_indx_22 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 's' == chunk[i+1] && 'G' == chunk[i+2] && 'P' == chunk[i+3] && 'R' == chunk[i+4] && 'Z' == chunk[i+5] && 'w' == chunk[i+6] && 'w' == chunk[i+7] && 'r' == chunk[i+8]) {
 positions[22][i] = 1; 
}
}
int starting_indx_23 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('V' == chunk[i] && 'A' == chunk[i+1] && 'w' == chunk[i+2] && 'l' == chunk[i+3] && 'S' == chunk[i+4] && 'C' == chunk[i+5] && 'x' == chunk[i+6] && 'v' == chunk[i+7] && 'H' == chunk[i+8] && 'j' == chunk[i+9] && 'H' == chunk[i+10] && 'k' == chunk[i+11]) {
 positions[23][i] = 1; 
}
}
int starting_indx_24 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 'E' == chunk[i+1] && 's' == chunk[i+2] && 'S' == chunk[i+3] && 'f' == chunk[i+4] && 'U' == chunk[i+5] && 'Q' == chunk[i+6]) {
 positions[24][i] = 1; 
}
}
int starting_indx_25 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('k' == chunk[i] && 'N' == chunk[i+1] && 'X' == chunk[i+2] && 'L' == chunk[i+3] && 'H' == chunk[i+4] && 'Q' == chunk[i+5] && 'A' == chunk[i+6] && 't' == chunk[i+7] && 'N' == chunk[i+8] && 'J' == chunk[i+9] && 'X' == chunk[i+10] && 'O' == chunk[i+11] && 'r' == chunk[i+12] && 'U' == chunk[i+13]) {
 positions[25][i] = 1; 
}
}
int starting_indx_26 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('m' == chunk[i]) {
 positions[26][i] = 1; 
}
}
int starting_indx_27 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('L' == chunk[i] && 'C' == chunk[i+1] && 'N' == chunk[i+2] && 'P' == chunk[i+3] && 'l' == chunk[i+4] && 'o' == chunk[i+5]) {
 positions[27][i] = 1; 
}
}
int starting_indx_28 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('O' == chunk[i] && 'T' == chunk[i+1] && 'c' == chunk[i+2] && 'E' == chunk[i+3] && 'o' == chunk[i+4] && 'k' == chunk[i+5]) {
 positions[28][i] = 1; 
}
}
int starting_indx_29 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('i' == chunk[i] && 'h' == chunk[i+1]) {
 positions[29][i] = 1; 
}
}
int starting_indx_30 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('l' == chunk[i] && 'E' == chunk[i+1] && 'm' == chunk[i+2] && 'J' == chunk[i+3] && 'c' == chunk[i+4] && 'A' == chunk[i+5] && 'D' == chunk[i+6] && 'w' == chunk[i+7] && 'y' == chunk[i+8] && 'Q' == chunk[i+9] && 'N' == chunk[i+10]) {
 positions[30][i] = 1; 
}
}
int starting_indx_31 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('L' == chunk[i] && 'n' == chunk[i+1] && 'p' == chunk[i+2]) {
 positions[31][i] = 1; 
}
}
int starting_indx_32 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i] && 'w' == chunk[i+1] && 'z' == chunk[i+2] && 'r' == chunk[i+3] && 'A' == chunk[i+4] && 'h' == chunk[i+5] && 'S' == chunk[i+6] && 'J' == chunk[i+7] && 'x' == chunk[i+8] && 'c' == chunk[i+9] && 'J' == chunk[i+10] && 'N' == chunk[i+11]) {
 positions[32][i] = 1; 
}
}
int starting_indx_33 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 's' == chunk[i+1] && 'I' == chunk[i+2] && 'G' == chunk[i+3] && 'v' == chunk[i+4] && 'L' == chunk[i+5] && 's' == chunk[i+6] && 'w' == chunk[i+7] && 'i' == chunk[i+8] && 'A' == chunk[i+9]) {
 positions[33][i] = 1; 
}
}
int starting_indx_34 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('K' == chunk[i] && 'P' == chunk[i+1] && 'I' == chunk[i+2] && 'x' == chunk[i+3] && 'D' == chunk[i+4] && 'j' == chunk[i+5] && 'k' == chunk[i+6] && 'M' == chunk[i+7] && 'y' == chunk[i+8] && 'K' == chunk[i+9] && 'E' == chunk[i+10] && 'm' == chunk[i+11] && 'i' == chunk[i+12] && 'M' == chunk[i+13]) {
 positions[34][i] = 1; 
}
}
int starting_indx_35 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('w' == chunk[i] && 'Q' == chunk[i+1] && 'a' == chunk[i+2]) {
 positions[35][i] = 1; 
}
}
int starting_indx_36 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'u' == chunk[i+1] && 'K' == chunk[i+2] && 'N' == chunk[i+3] && 'I' == chunk[i+4] && 'j' == chunk[i+5] && 'u' == chunk[i+6] && 'O' == chunk[i+7] && 'K' == chunk[i+8] && 'y' == chunk[i+9] && 'B' == chunk[i+10] && 'B' == chunk[i+11] && 'o' == chunk[i+12]) {
 positions[36][i] = 1; 
}
}
int starting_indx_37 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('s' == chunk[i] && 'E' == chunk[i+1] && 'T' == chunk[i+2] && 'y' == chunk[i+3] && 'y' == chunk[i+4] && 'k' == chunk[i+5] && 'M' == chunk[i+6] && 'M' == chunk[i+7] && 'q' == chunk[i+8] && 'V' == chunk[i+9] && 't' == chunk[i+10] && 'F' == chunk[i+11] && 'q' == chunk[i+12] && 'A' == chunk[i+13] && 'b' == chunk[i+14] && 'u' == chunk[i+15]) {
 positions[37][i] = 1; 
}
}
int starting_indx_38 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('F' == chunk[i] && 's' == chunk[i+1] && 'j' == chunk[i+2] && 'E' == chunk[i+3] && 'b' == chunk[i+4] && 'h' == chunk[i+5] && 'Q' == chunk[i+6] && 'N' == chunk[i+7] && 'C' == chunk[i+8] && 'p' == chunk[i+9]) {
 positions[38][i] = 1; 
}
}
int starting_indx_39 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('c' == chunk[i] && 'Y' == chunk[i+1] && 'i' == chunk[i+2] && 'z' == chunk[i+3] && 'a' == chunk[i+4] && 'E' == chunk[i+5] && 'I' == chunk[i+6] && 'J' == chunk[i+7] && 'r' == chunk[i+8] && 'p' == chunk[i+9]) {
 positions[39][i] = 1; 
}
}
int starting_indx_40 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Y' == chunk[i] && 'c' == chunk[i+1] && 'p' == chunk[i+2] && 'F' == chunk[i+3] && 'r' == chunk[i+4] && 'j' == chunk[i+5] && 'U' == chunk[i+6] && 's' == chunk[i+7] && 's' == chunk[i+8] && 'F' == chunk[i+9] && 'M' == chunk[i+10] && 'E' == chunk[i+11] && 'H' == chunk[i+12] && 'P' == chunk[i+13] && 'M' == chunk[i+14] && 'V' == chunk[i+15]) {
 positions[40][i] = 1; 
}
}
int starting_indx_41 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('b' == chunk[i] && 'W' == chunk[i+1] && 'i' == chunk[i+2] && 't' == chunk[i+3]) {
 positions[41][i] = 1; 
}
}
int starting_indx_42 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('I' == chunk[i] && 'T' == chunk[i+1] && 'v' == chunk[i+2] && 'N' == chunk[i+3] && 's' == chunk[i+4] && 'U' == chunk[i+5] && 'H' == chunk[i+6] && 'b' == chunk[i+7] && 'D' == chunk[i+8] && 'w' == chunk[i+9]) {
 positions[42][i] = 1; 
}
}
int starting_indx_43 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('R' == chunk[i] && 'V' == chunk[i+1] && 'L' == chunk[i+2] && 'i' == chunk[i+3] && 'c' == chunk[i+4] && 'a' == chunk[i+5] && 'q' == chunk[i+6] && 'J' == chunk[i+7] && 'D' == chunk[i+8] && 'R' == chunk[i+9] && 'g' == chunk[i+10] && 'R' == chunk[i+11]) {
 positions[43][i] = 1; 
}
}
int starting_indx_44 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('m' == chunk[i] && 'a' == chunk[i+1] && 'B' == chunk[i+2] && 'X' == chunk[i+3] && 'Z' == chunk[i+4] && 'B' == chunk[i+5] && 'M' == chunk[i+6] && 'K' == chunk[i+7] && 'S' == chunk[i+8] && 'T' == chunk[i+9] && 'O' == chunk[i+10] && 'P' == chunk[i+11] && 'E' == chunk[i+12] && 'y' == chunk[i+13] && 'E' == chunk[i+14] && 'z' == chunk[i+15] && 'R' == chunk[i+16] && 'U' == chunk[i+17]) {
 positions[44][i] = 1; 
}
}
int starting_indx_45 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('s' == chunk[i] && 'D' == chunk[i+1] && 'W' == chunk[i+2] && 'e' == chunk[i+3] && 't' == chunk[i+4] && 'a' == chunk[i+5] && 'S' == chunk[i+6]) {
 positions[45][i] = 1; 
}
}
int starting_indx_46 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('L' == chunk[i] && 's' == chunk[i+1] && 'P' == chunk[i+2] && 'X' == chunk[i+3] && 'E' == chunk[i+4] && 't' == chunk[i+5] && 'j' == chunk[i+6] && 'k' == chunk[i+7] && 'E' == chunk[i+8] && 'S' == chunk[i+9] && 'J' == chunk[i+10] && 'F' == chunk[i+11] && 'v' == chunk[i+12] && 'I' == chunk[i+13]) {
 positions[46][i] = 1; 
}
}
int starting_indx_47 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('B' == chunk[i] && 'L' == chunk[i+1] && 'I' == chunk[i+2] && 'Z' == chunk[i+3] && 'd' == chunk[i+4]) {
 positions[47][i] = 1; 
}
}
int starting_indx_48 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('U' == chunk[i] && 'o' == chunk[i+1] && 'r' == chunk[i+2]) {
 positions[48][i] = 1; 
}
}
int starting_indx_49 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Y' == chunk[i] && 'e' == chunk[i+1] && 'Q' == chunk[i+2]) {
 positions[49][i] = 1; 
}
}
int starting_indx_50 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('v' == chunk[i]) {
 positions[50][i] = 1; 
}
}
int starting_indx_51 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('e' == chunk[i] && 'z' == chunk[i+1] && 'S' == chunk[i+2] && 'F' == chunk[i+3] && 'd' == chunk[i+4] && 'h' == chunk[i+5] && 'h' == chunk[i+6] && 'o' == chunk[i+7] && 'N' == chunk[i+8] && 'P' == chunk[i+9] && 'h' == chunk[i+10] && 'T' == chunk[i+11] && 'i' == chunk[i+12] && 's' == chunk[i+13]) {
 positions[51][i] = 1; 
}
}
int starting_indx_52 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('j' == chunk[i] && 'l' == chunk[i+1] && 'N' == chunk[i+2] && 'l' == chunk[i+3] && 'A' == chunk[i+4] && 'Z' == chunk[i+5] && 'k' == chunk[i+6] && 'e' == chunk[i+7] && 'N' == chunk[i+8] && 'n' == chunk[i+9] && 'c' == chunk[i+10] && 'J' == chunk[i+11] && 'g' == chunk[i+12] && 'Q' == chunk[i+13] && 'y' == chunk[i+14]) {
 positions[52][i] = 1; 
}
}
int starting_indx_53 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('r' == chunk[i] && 'd' == chunk[i+1] && 'K' == chunk[i+2]) {
 positions[53][i] = 1; 
}
}
int starting_indx_54 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('h' == chunk[i] && 'V' == chunk[i+1] && 'z' == chunk[i+2] && 'N' == chunk[i+3] && 'i' == chunk[i+4] && 'a' == chunk[i+5] && 'B' == chunk[i+6] && 'f' == chunk[i+7] && 'u' == chunk[i+8] && 'R' == chunk[i+9] && 'M' == chunk[i+10] && 'F' == chunk[i+11] && 'F' == chunk[i+12] && 'w' == chunk[i+13] && 'P' == chunk[i+14] && 'x' == chunk[i+15] && 'd' == chunk[i+16] && 'i' == chunk[i+17] && 'S' == chunk[i+18]) {
 positions[54][i] = 1; 
}
}
int starting_indx_55 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('j' == chunk[i] && 'K' == chunk[i+1] && 'O' == chunk[i+2] && 'R' == chunk[i+3] && 'G' == chunk[i+4] && 's' == chunk[i+5] && 'J' == chunk[i+6] && 'J' == chunk[i+7] && 'N' == chunk[i+8] && 'o' == chunk[i+9]) {
 positions[55][i] = 1; 
}
}
int starting_indx_56 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('e' == chunk[i] && 'J' == chunk[i+1] && 'p' == chunk[i+2] && 'q' == chunk[i+3] && 'W' == chunk[i+4] && 's' == chunk[i+5] && 'H' == chunk[i+6] && 'i' == chunk[i+7] && 'Z' == chunk[i+8]) {
 positions[56][i] = 1; 
}
}
int starting_indx_57 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 'D' == chunk[i+1] && 'V' == chunk[i+2] && 'y' == chunk[i+3] && 'l' == chunk[i+4] && 'i' == chunk[i+5] && 'T' == chunk[i+6] && 'b' == chunk[i+7]) {
 positions[57][i] = 1; 
}
}
int starting_indx_58 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'K' == chunk[i+1] && 'Q' == chunk[i+2] && 'c' == chunk[i+3] && 'f' == chunk[i+4] && 'h' == chunk[i+5] && 'G' == chunk[i+6] && 'M' == chunk[i+7] && 'D' == chunk[i+8] && 'p' == chunk[i+9] && 'y' == chunk[i+10]) {
 positions[58][i] = 1; 
}
}
int starting_indx_59 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('E' == chunk[i] && 'u' == chunk[i+1] && 'g' == chunk[i+2] && 'Y' == chunk[i+3] && 'H' == chunk[i+4] && 'b' == chunk[i+5] && 'I' == chunk[i+6] && 'U' == chunk[i+7] && 'y' == chunk[i+8] && 'd' == chunk[i+9] && 'j' == chunk[i+10] && 'B' == chunk[i+11] && 'R' == chunk[i+12] && 'Y' == chunk[i+13] && 'o' == chunk[i+14]) {
 positions[59][i] = 1; 
}
}
int starting_indx_60 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'Q' == chunk[i+1] && 'F' == chunk[i+2] && 'n' == chunk[i+3]) {
 positions[60][i] = 1; 
}
}
int starting_indx_61 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 'N' == chunk[i+1] && 'y' == chunk[i+2] && 'w' == chunk[i+3] && 'p' == chunk[i+4]) {
 positions[61][i] = 1; 
}
}
int starting_indx_62 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('v' == chunk[i] && 'N' == chunk[i+1] && 'T' == chunk[i+2] && 'w' == chunk[i+3] && 'Y' == chunk[i+4] && 'y' == chunk[i+5] && 'y' == chunk[i+6] && 'i' == chunk[i+7] && 'U' == chunk[i+8] && 'w' == chunk[i+9]) {
 positions[62][i] = 1; 
}
}
int starting_indx_63 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Z' == chunk[i] && 'O' == chunk[i+1] && 'B' == chunk[i+2] && 'x' == chunk[i+3] && 'H' == chunk[i+4] && 'c' == chunk[i+5] && 'L' == chunk[i+6] && 'K' == chunk[i+7] && 'n' == chunk[i+8] && 'V' == chunk[i+9]) {
 positions[63][i] = 1; 
}
}
int starting_indx_64 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('z' == chunk[i] && 'e' == chunk[i+1] && 'g' == chunk[i+2] && 'c' == chunk[i+3] && 'c' == chunk[i+4] && 'l' == chunk[i+5]) {
 positions[64][i] = 1; 
}
}
int starting_indx_65 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('m' == chunk[i] && 'c' == chunk[i+1] && 'F' == chunk[i+2] && 'E' == chunk[i+3] && 'Q' == chunk[i+4] && 'W' == chunk[i+5] && 'w' == chunk[i+6]) {
 positions[65][i] = 1; 
}
}
int starting_indx_66 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('B' == chunk[i]) {
 positions[66][i] = 1; 
}
}
int starting_indx_67 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('t' == chunk[i] && 'N' == chunk[i+1] && 'B' == chunk[i+2] && 'u' == chunk[i+3] && 'D' == chunk[i+4] && 'D' == chunk[i+5] && 'g' == chunk[i+6] && 'm' == chunk[i+7] && 'j' == chunk[i+8] && 'P' == chunk[i+9] && 'k' == chunk[i+10] && 'e' == chunk[i+11] && 'x' == chunk[i+12] && 'y' == chunk[i+13] && 'E' == chunk[i+14] && 'j' == chunk[i+15]) {
 positions[67][i] = 1; 
}
}
int starting_indx_68 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('q' == chunk[i] && 'h' == chunk[i+1] && 'r' == chunk[i+2] && 'k' == chunk[i+3] && 'W' == chunk[i+4] && 's' == chunk[i+5] && 'R' == chunk[i+6] && 'p' == chunk[i+7] && 'c' == chunk[i+8] && 'E' == chunk[i+9] && 'c' == chunk[i+10] && 'w' == chunk[i+11] && 'W' == chunk[i+12] && 'x' == chunk[i+13] && 'u' == chunk[i+14] && 'd' == chunk[i+15] && 'S' == chunk[i+16] && 'b' == chunk[i+17]) {
 positions[68][i] = 1; 
}
}
int starting_indx_69 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('E' == chunk[i] && 'j' == chunk[i+1] && 'h' == chunk[i+2] && 'Y' == chunk[i+3] && 'Q' == chunk[i+4] && 'u' == chunk[i+5] && 's' == chunk[i+6] && 'D' == chunk[i+7] && 'R' == chunk[i+8] && 'p' == chunk[i+9] && 'U' == chunk[i+10] && 'k' == chunk[i+11] && 'c' == chunk[i+12] && 'm' == chunk[i+13] && 'T' == chunk[i+14]) {
 positions[69][i] = 1; 
}
}
int starting_indx_70 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('K' == chunk[i]) {
 positions[70][i] = 1; 
}
}
int starting_indx_71 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Q' == chunk[i] && 'f' == chunk[i+1] && 'N' == chunk[i+2] && 'z' == chunk[i+3] && 'T' == chunk[i+4] && 'x' == chunk[i+5] && 'R' == chunk[i+6] && 't' == chunk[i+7]) {
 positions[71][i] = 1; 
}
}
int starting_indx_72 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'x' == chunk[i+1] && 's' == chunk[i+2] && 'e' == chunk[i+3] && 'U' == chunk[i+4] && 'T' == chunk[i+5]) {
 positions[72][i] = 1; 
}
}
int starting_indx_73 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('k' == chunk[i] && 'X' == chunk[i+1] && 'p' == chunk[i+2] && 'l' == chunk[i+3] && 'R' == chunk[i+4] && 'n' == chunk[i+5] && 'c' == chunk[i+6] && 'P' == chunk[i+7] && 'M' == chunk[i+8] && 'B' == chunk[i+9] && 'U' == chunk[i+10] && 'r' == chunk[i+11] && 'a' == chunk[i+12] && 'D' == chunk[i+13] && 'd' == chunk[i+14]) {
 positions[73][i] = 1; 
}
}
int starting_indx_74 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('X' == chunk[i] && 'R' == chunk[i+1] && 'A' == chunk[i+2] && 'k' == chunk[i+3] && 'c' == chunk[i+4] && 'c' == chunk[i+5] && 'J' == chunk[i+6] && 'H' == chunk[i+7] && 'K' == chunk[i+8] && 'w' == chunk[i+9] && 'g' == chunk[i+10] && 'T' == chunk[i+11] && 'e' == chunk[i+12] && 'p' == chunk[i+13] && 'Z' == chunk[i+14]) {
 positions[74][i] = 1; 
}
}
int starting_indx_75 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'E' == chunk[i+1] && 'd' == chunk[i+2] && 'R' == chunk[i+3] && 'p' == chunk[i+4] && 'P' == chunk[i+5] && 'd' == chunk[i+6] && 'F' == chunk[i+7] && 'z' == chunk[i+8] && 'Y' == chunk[i+9] && 'd' == chunk[i+10] && 'd' == chunk[i+11] && 'q' == chunk[i+12] && 'A' == chunk[i+13] && 'C' == chunk[i+14] && 't' == chunk[i+15]) {
 positions[75][i] = 1; 
}
}
int starting_indx_76 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('c' == chunk[i] && 'm' == chunk[i+1]) {
 positions[76][i] = 1; 
}
}
int starting_indx_77 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 'G' == chunk[i+1] && 'O' == chunk[i+2] && 'z' == chunk[i+3] && 'm' == chunk[i+4] && 'I' == chunk[i+5]) {
 positions[77][i] = 1; 
}
}
int starting_indx_78 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'u' == chunk[i+1] && 'Y' == chunk[i+2] && 'g' == chunk[i+3] && 'f' == chunk[i+4] && 'I' == chunk[i+5] && 'k' == chunk[i+6] && 'M' == chunk[i+7]) {
 positions[78][i] = 1; 
}
}
int starting_indx_79 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('U' == chunk[i] && 'n' == chunk[i+1] && 'N' == chunk[i+2]) {
 positions[79][i] = 1; 
}
}
int starting_indx_80 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('C' == chunk[i]) {
 positions[80][i] = 1; 
}
}
int starting_indx_81 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('w' == chunk[i] && 'F' == chunk[i+1] && 'B' == chunk[i+2] && 'K' == chunk[i+3] && 'X' == chunk[i+4] && 'y' == chunk[i+5] && 'H' == chunk[i+6] && 'O' == chunk[i+7] && 'i' == chunk[i+8] && 'U' == chunk[i+9] && 'a' == chunk[i+10] && 'W' == chunk[i+11] && 't' == chunk[i+12] && 'S' == chunk[i+13] && 'C' == chunk[i+14] && 'o' == chunk[i+15] && 'J' == chunk[i+16] && 'h' == chunk[i+17]) {
 positions[81][i] = 1; 
}
}
int starting_indx_82 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('t' == chunk[i] && 'E' == chunk[i+1] && 'f' == chunk[i+2] && 'X' == chunk[i+3] && 'X' == chunk[i+4]) {
 positions[82][i] = 1; 
}
}
int starting_indx_83 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('z' == chunk[i] && 'u' == chunk[i+1] && 'i' == chunk[i+2] && 'i' == chunk[i+3] && 'I' == chunk[i+4] && 'f' == chunk[i+5] && 'E' == chunk[i+6] && 'p' == chunk[i+7] && 'S' == chunk[i+8]) {
 positions[83][i] = 1; 
}
}
int starting_indx_84 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Z' == chunk[i] && 'B' == chunk[i+1] && 'K' == chunk[i+2]) {
 positions[84][i] = 1; 
}
}
int starting_indx_85 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('r' == chunk[i] && 'd' == chunk[i+1] && 'F' == chunk[i+2] && 'S' == chunk[i+3] && 'p' == chunk[i+4] && 'd' == chunk[i+5] && 'T' == chunk[i+6] && 'm' == chunk[i+7]) {
 positions[85][i] = 1; 
}
}
int starting_indx_86 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 'g' == chunk[i+1] && 'e' == chunk[i+2] && 'A' == chunk[i+3] && 'X' == chunk[i+4] && 'u' == chunk[i+5] && 'y' == chunk[i+6] && 'W' == chunk[i+7] && 'X' == chunk[i+8] && 'J' == chunk[i+9]) {
 positions[86][i] = 1; 
}
}
int starting_indx_87 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('s' == chunk[i]) {
 positions[87][i] = 1; 
}
}
int starting_indx_88 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('K' == chunk[i] && 'b' == chunk[i+1] && 'C' == chunk[i+2] && 'j' == chunk[i+3] && 'S' == chunk[i+4]) {
 positions[88][i] = 1; 
}
}
int starting_indx_89 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('U' == chunk[i]) {
 positions[89][i] = 1; 
}
}
int starting_indx_90 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 'B' == chunk[i+1]) {
 positions[90][i] = 1; 
}
}
int starting_indx_91 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'Z' == chunk[i+1] && 'Z' == chunk[i+2] && 'y' == chunk[i+3] && 'J' == chunk[i+4] && 'i' == chunk[i+5] && 'u' == chunk[i+6] && 'e' == chunk[i+7] && 't' == chunk[i+8]) {
 positions[91][i] = 1; 
}
}
int starting_indx_92 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('i' == chunk[i] && 'q' == chunk[i+1] && 'F' == chunk[i+2] && 'R' == chunk[i+3] && 'u' == chunk[i+4] && 's' == chunk[i+5]) {
 positions[92][i] = 1; 
}
}
int starting_indx_93 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('e' == chunk[i] && 'I' == chunk[i+1]) {
 positions[93][i] = 1; 
}
}
int starting_indx_94 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('b' == chunk[i] && 'b' == chunk[i+1] && 'h' == chunk[i+2] && 'd' == chunk[i+3] && 'i' == chunk[i+4] && 'w' == chunk[i+5] && 'B' == chunk[i+6] && 'q' == chunk[i+7] && 'N' == chunk[i+8] && 'b' == chunk[i+9] && 'o' == chunk[i+10] && 'H' == chunk[i+11] && 'B' == chunk[i+12] && 'i' == chunk[i+13] && 'x' == chunk[i+14] && 'm' == chunk[i+15] && 'v' == chunk[i+16] && 'w' == chunk[i+17]) {
 positions[94][i] = 1; 
}
}
int starting_indx_95 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('k' == chunk[i]) {
 positions[95][i] = 1; 
}
}
int starting_indx_96 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('N' == chunk[i] && 'k' == chunk[i+1] && 'U' == chunk[i+2] && 'g' == chunk[i+3] && 'r' == chunk[i+4] && 'H' == chunk[i+5] && 'M' == chunk[i+6] && 'k' == chunk[i+7] && 'O' == chunk[i+8] && 'T' == chunk[i+9] && 'j' == chunk[i+10] && 'C' == chunk[i+11] && 'W' == chunk[i+12] && 'B' == chunk[i+13] && 'Y' == chunk[i+14] && 'B' == chunk[i+15] && 'h' == chunk[i+16] && 'v' == chunk[i+17] && 'u' == chunk[i+18]) {
 positions[96][i] = 1; 
}
}
int starting_indx_97 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('o' == chunk[i] && 'D' == chunk[i+1] && 'M' == chunk[i+2] && 'B' == chunk[i+3] && 'k' == chunk[i+4] && 'C' == chunk[i+5] && 'd' == chunk[i+6] && 'X' == chunk[i+7] && 'Q' == chunk[i+8] && 'k' == chunk[i+9] && 'I' == chunk[i+10] && 'E' == chunk[i+11] && 'F' == chunk[i+12] && 'M' == chunk[i+13] && 'a' == chunk[i+14]) {
 positions[97][i] = 1; 
}
}
int starting_indx_98 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('i' == chunk[i] && 'A' == chunk[i+1] && 'R' == chunk[i+2] && 'd' == chunk[i+3]) {
 positions[98][i] = 1; 
}
}
int starting_indx_99 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i] && 'c' == chunk[i+1] && 'K' == chunk[i+2] && 'p' == chunk[i+3] && 'E' == chunk[i+4] && 'T' == chunk[i+5] && 'w' == chunk[i+6]) {
 positions[99][i] = 1; 
}
}
int starting_indx_100 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'n' == chunk[i+1] && 'm' == chunk[i+2] && 'r' == chunk[i+3] && 'm' == chunk[i+4] && 't' == chunk[i+5] && 'J' == chunk[i+6] && 'H' == chunk[i+7] && 'w' == chunk[i+8] && 'W' == chunk[i+9] && 'W' == chunk[i+10] && 'Y' == chunk[i+11] && 'p' == chunk[i+12]) {
 positions[100][i] = 1; 
}
}
int starting_indx_101 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('w' == chunk[i] && 'Z' == chunk[i+1] && 'p' == chunk[i+2] && 'Q' == chunk[i+3] && 'd' == chunk[i+4] && 'N' == chunk[i+5] && 'F' == chunk[i+6] && 'z' == chunk[i+7] && 'w' == chunk[i+8] && 'j' == chunk[i+9] && 'j' == chunk[i+10] && 'p' == chunk[i+11]) {
 positions[101][i] = 1; 
}
}
int starting_indx_102 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('y' == chunk[i] && 'c' == chunk[i+1] && 'g' == chunk[i+2] && 'k' == chunk[i+3] && 'z' == chunk[i+4] && 'g' == chunk[i+5] && 'W' == chunk[i+6] && 'T' == chunk[i+7] && 's' == chunk[i+8] && 'm' == chunk[i+9] && 'Y' == chunk[i+10] && 'Z' == chunk[i+11] && 'W' == chunk[i+12] && 'u' == chunk[i+13] && 'E' == chunk[i+14] && 'R' == chunk[i+15]) {
 positions[102][i] = 1; 
}
}
int starting_indx_103 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('I' == chunk[i] && 'N' == chunk[i+1] && 'f' == chunk[i+2] && 'Z' == chunk[i+3] && 'm' == chunk[i+4] && 'y' == chunk[i+5] && 'S' == chunk[i+6] && 'a' == chunk[i+7] && 'g' == chunk[i+8] && 'G' == chunk[i+9] && 'M' == chunk[i+10] && 'L' == chunk[i+11] && 'N' == chunk[i+12] && 'l' == chunk[i+13] && 'y' == chunk[i+14] && 'b' == chunk[i+15]) {
 positions[103][i] = 1; 
}
}
int starting_indx_104 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('R' == chunk[i] && 'b' == chunk[i+1] && 'N' == chunk[i+2] && 't' == chunk[i+3] && 'G' == chunk[i+4] && 'y' == chunk[i+5] && 'G' == chunk[i+6] && 'E' == chunk[i+7] && 'I' == chunk[i+8] && 'T' == chunk[i+9] && 'S' == chunk[i+10]) {
 positions[104][i] = 1; 
}
}
int starting_indx_105 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('C' == chunk[i] && 'Y' == chunk[i+1] && 'L' == chunk[i+2] && 'S' == chunk[i+3] && 'J' == chunk[i+4] && 'Q' == chunk[i+5] && 'd' == chunk[i+6] && 'I' == chunk[i+7] && 'j' == chunk[i+8] && 'Z' == chunk[i+9] && 'A' == chunk[i+10] && 'x' == chunk[i+11] && 'L' == chunk[i+12]) {
 positions[105][i] = 1; 
}
}
int starting_indx_106 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('R' == chunk[i]) {
 positions[106][i] = 1; 
}
}
int starting_indx_107 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('n' == chunk[i] && 's' == chunk[i+1] && 's' == chunk[i+2] && 'e' == chunk[i+3] && 'b' == chunk[i+4] && 'f' == chunk[i+5] && 'X' == chunk[i+6] && 'w' == chunk[i+7] && 'N' == chunk[i+8] && 'L' == chunk[i+9] && 'W' == chunk[i+10] && 'T' == chunk[i+11] && 'A' == chunk[i+12] && 't' == chunk[i+13] && 'a' == chunk[i+14] && 'r' == chunk[i+15] && 'T' == chunk[i+16]) {
 positions[107][i] = 1; 
}
}
int starting_indx_108 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('e' == chunk[i] && 'c' == chunk[i+1] && 'W' == chunk[i+2] && 'f' == chunk[i+3] && 'Q' == chunk[i+4] && 't' == chunk[i+5] && 'w' == chunk[i+6] && 'S' == chunk[i+7]) {
 positions[108][i] = 1; 
}
}
int starting_indx_109 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('N' == chunk[i] && 'J' == chunk[i+1] && 'n' == chunk[i+2] && 'E' == chunk[i+3] && 'H' == chunk[i+4] && 'f' == chunk[i+5] && 'h' == chunk[i+6] && 'p' == chunk[i+7] && 'v' == chunk[i+8] && 'Y' == chunk[i+9] && 'I' == chunk[i+10] && 'B' == chunk[i+11] && 'z' == chunk[i+12] && 'a' == chunk[i+13] && 'Q' == chunk[i+14] && 'y' == chunk[i+15] && 'y' == chunk[i+16] && 'l' == chunk[i+17] && 'W' == chunk[i+18] && 'P' == chunk[i+19]) {
 positions[109][i] = 1; 
}
}
int starting_indx_110 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('n' == chunk[i] && 'R' == chunk[i+1] && 'N' == chunk[i+2] && 'u' == chunk[i+3] && 'y' == chunk[i+4] && 'u' == chunk[i+5] && 'g' == chunk[i+6] && 'S' == chunk[i+7] && 'J' == chunk[i+8] && 'S' == chunk[i+9] && 'T' == chunk[i+10] && 'x' == chunk[i+11] && 'p' == chunk[i+12] && 'g' == chunk[i+13] && 'n' == chunk[i+14] && 's' == chunk[i+15] && 't' == chunk[i+16]) {
 positions[110][i] = 1; 
}
}
int starting_indx_111 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Z' == chunk[i] && 'N' == chunk[i+1] && 'e' == chunk[i+2] && 'k' == chunk[i+3] && 'e' == chunk[i+4] && 'O' == chunk[i+5] && 'A' == chunk[i+6] && 'X' == chunk[i+7] && 'l' == chunk[i+8]) {
 positions[111][i] = 1; 
}
}
int starting_indx_112 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('P' == chunk[i] && 'e' == chunk[i+1] && 'K' == chunk[i+2] && 'K' == chunk[i+3] && 'O' == chunk[i+4] && 'O' == chunk[i+5] && 'I' == chunk[i+6] && 'U' == chunk[i+7]) {
 positions[112][i] = 1; 
}
}
int starting_indx_113 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 'o' == chunk[i+1] && 'B' == chunk[i+2] && 'E' == chunk[i+3] && 'H' == chunk[i+4] && 'M' == chunk[i+5] && 'p' == chunk[i+6] && 't' == chunk[i+7] && 'A' == chunk[i+8] && 'r' == chunk[i+9] && 'f' == chunk[i+10] && 'M' == chunk[i+11] && 'v' == chunk[i+12] && 'l' == chunk[i+13]) {
 positions[113][i] = 1; 
}
}
int starting_indx_114 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('b' == chunk[i] && 'j' == chunk[i+1] && 'h' == chunk[i+2] && 's' == chunk[i+3] && 'K' == chunk[i+4] && 'J' == chunk[i+5] && 'M' == chunk[i+6] && 'K' == chunk[i+7] && 'l' == chunk[i+8] && 'B' == chunk[i+9] && 'm' == chunk[i+10] && 'u' == chunk[i+11] && 'M' == chunk[i+12] && 'g' == chunk[i+13]) {
 positions[114][i] = 1; 
}
}
int starting_indx_115 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('U' == chunk[i] && 'e' == chunk[i+1] && 'd' == chunk[i+2] && 'F' == chunk[i+3] && 'i' == chunk[i+4] && 'H' == chunk[i+5] && 'e' == chunk[i+6] && 'u' == chunk[i+7] && 'm' == chunk[i+8] && 'D' == chunk[i+9] && 'P' == chunk[i+10]) {
 positions[115][i] = 1; 
}
}
int starting_indx_116 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('o' == chunk[i] && 'S' == chunk[i+1] && 'N' == chunk[i+2] && 'Z' == chunk[i+3] && 'E' == chunk[i+4] && 'g' == chunk[i+5] && 'a' == chunk[i+6] && 'm' == chunk[i+7] && 'R' == chunk[i+8] && 'k' == chunk[i+9] && 'h' == chunk[i+10] && 'f' == chunk[i+11] && 'v' == chunk[i+12]) {
 positions[116][i] = 1; 
}
}
int starting_indx_117 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 'N' == chunk[i+1] && 'W' == chunk[i+2] && 'g' == chunk[i+3] && 'K' == chunk[i+4]) {
 positions[117][i] = 1; 
}
}
int starting_indx_118 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('V' == chunk[i] && 'u' == chunk[i+1] && 'X' == chunk[i+2] && 'Z' == chunk[i+3] && 'l' == chunk[i+4] && 'T' == chunk[i+5] && 'J' == chunk[i+6] && 'L' == chunk[i+7] && 'O' == chunk[i+8] && 'g' == chunk[i+9] && 'x' == chunk[i+10] && 'g' == chunk[i+11] && 'e' == chunk[i+12] && 'm' == chunk[i+13] && 'n' == chunk[i+14]) {
 positions[118][i] = 1; 
}
}
int starting_indx_119 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 'l' == chunk[i+1] && 'D' == chunk[i+2] && 'R' == chunk[i+3] && 'V' == chunk[i+4] && 'W' == chunk[i+5] && 'f' == chunk[i+6] && 'p' == chunk[i+7] && 'z' == chunk[i+8] && 'I' == chunk[i+9] && 'D' == chunk[i+10]) {
 positions[119][i] = 1; 
}
}
int starting_indx_120 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i] && 'h' == chunk[i+1] && 'M' == chunk[i+2] && 'x' == chunk[i+3] && 'i' == chunk[i+4] && 'R' == chunk[i+5] && 'a' == chunk[i+6] && 'F' == chunk[i+7] && 'y' == chunk[i+8] && 'v' == chunk[i+9] && 'V' == chunk[i+10] && 'e' == chunk[i+11] && 'F' == chunk[i+12]) {
 positions[120][i] = 1; 
}
}
int starting_indx_121 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('b' == chunk[i] && 'h' == chunk[i+1] && 'Z' == chunk[i+2] && 'E' == chunk[i+3] && 'w' == chunk[i+4] && 'W' == chunk[i+5] && 'V' == chunk[i+6] && 'm' == chunk[i+7] && 'v' == chunk[i+8] && 'y' == chunk[i+9]) {
 positions[121][i] = 1; 
}
}
int starting_indx_122 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('s' == chunk[i] && 'F' == chunk[i+1] && 'P' == chunk[i+2] && 'S' == chunk[i+3] && 'X' == chunk[i+4]) {
 positions[122][i] = 1; 
}
}
int starting_indx_123 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('K' == chunk[i] && 'h' == chunk[i+1] && 's' == chunk[i+2]) {
 positions[123][i] = 1; 
}
}
int starting_indx_124 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('v' == chunk[i] && 'e' == chunk[i+1] && 'H' == chunk[i+2] && 'B' == chunk[i+3] && 'd' == chunk[i+4] && 'o' == chunk[i+5] && 'A' == chunk[i+6] && 'p' == chunk[i+7] && 'r' == chunk[i+8] && 'Q' == chunk[i+9] && 'U' == chunk[i+10] && 'e' == chunk[i+11] && 'j' == chunk[i+12] && 'r' == chunk[i+13]) {
 positions[124][i] = 1; 
}
}
int starting_indx_125 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('J' == chunk[i] && 'E' == chunk[i+1] && 'B' == chunk[i+2] && 'l' == chunk[i+3]) {
 positions[125][i] = 1; 
}
}
int starting_indx_126 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('y' == chunk[i] && 'p' == chunk[i+1] && 'f' == chunk[i+2] && 'C' == chunk[i+3] && 'w' == chunk[i+4] && 'i' == chunk[i+5] && 'Z' == chunk[i+6] && 'f' == chunk[i+7] && 'a' == chunk[i+8] && 'X' == chunk[i+9] && 'j' == chunk[i+10] && 'x' == chunk[i+11] && 'Z' == chunk[i+12] && 'b' == chunk[i+13] && 'b' == chunk[i+14] && 'q' == chunk[i+15] && 'J' == chunk[i+16] && 'D' == chunk[i+17]) {
 positions[126][i] = 1; 
}
}
int starting_indx_127 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('H' == chunk[i] && 'f' == chunk[i+1] && 'd' == chunk[i+2] && 'n' == chunk[i+3] && 'm' == chunk[i+4] && 'Z' == chunk[i+5] && 'C' == chunk[i+6] && 'a' == chunk[i+7] && 'E' == chunk[i+8] && 'H' == chunk[i+9] && 'f' == chunk[i+10] && 'r' == chunk[i+11] && 'M' == chunk[i+12]) {
 positions[127][i] = 1; 
}
}
int starting_indx_128 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('G' == chunk[i] && 'b' == chunk[i+1] && 'd' == chunk[i+2] && 'k' == chunk[i+3] && 'z' == chunk[i+4] && 'X' == chunk[i+5] && 'X' == chunk[i+6] && 'G' == chunk[i+7] && 'B' == chunk[i+8] && 'L' == chunk[i+9] && 'Q' == chunk[i+10] && 'P' == chunk[i+11] && 'N' == chunk[i+12] && 'O' == chunk[i+13] && 'L' == chunk[i+14] && 'c' == chunk[i+15]) {
 positions[128][i] = 1; 
}
}
int starting_indx_129 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('b' == chunk[i] && 'A' == chunk[i+1] && 'X' == chunk[i+2] && 'U' == chunk[i+3] && 'A' == chunk[i+4] && 'Z' == chunk[i+5] && 'B' == chunk[i+6]) {
 positions[129][i] = 1; 
}
}
int starting_indx_130 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i] && 'W' == chunk[i+1] && 'k' == chunk[i+2] && 'v' == chunk[i+3] && 'j' == chunk[i+4] && 't' == chunk[i+5] && 'X' == chunk[i+6] && 'm' == chunk[i+7] && 'B' == chunk[i+8] && 'e' == chunk[i+9] && 'x' == chunk[i+10] && 'n' == chunk[i+11] && 'z' == chunk[i+12]) {
 positions[130][i] = 1; 
}
}
int starting_indx_131 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('m' == chunk[i] && 'r' == chunk[i+1] && 'i' == chunk[i+2] && 'E' == chunk[i+3] && 'x' == chunk[i+4] && 's' == chunk[i+5] && 'a' == chunk[i+6] && 'Q' == chunk[i+7] && 'O' == chunk[i+8] && 'h' == chunk[i+9] && 'X' == chunk[i+10] && 'k' == chunk[i+11] && 'W' == chunk[i+12] && 'D' == chunk[i+13]) {
 positions[131][i] = 1; 
}
}
int starting_indx_132 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('e' == chunk[i] && 'R' == chunk[i+1] && 'y' == chunk[i+2]) {
 positions[132][i] = 1; 
}
}
int starting_indx_133 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 'j' == chunk[i+1]) {
 positions[133][i] = 1; 
}
}
int starting_indx_134 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('P' == chunk[i] && 'b' == chunk[i+1] && 'V' == chunk[i+2] && 'F' == chunk[i+3] && 'u' == chunk[i+4] && 'M' == chunk[i+5] && 'D' == chunk[i+6]) {
 positions[134][i] = 1; 
}
}
int starting_indx_135 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'p' == chunk[i+1] && 'e' == chunk[i+2] && 'x' == chunk[i+3] && 'N' == chunk[i+4]) {
 positions[135][i] = 1; 
}
}
int starting_indx_136 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i]) {
 positions[136][i] = 1; 
}
}
int starting_indx_137 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Z' == chunk[i] && 'B' == chunk[i+1] && 'f' == chunk[i+2] && 'r' == chunk[i+3] && 'i' == chunk[i+4] && 'W' == chunk[i+5]) {
 positions[137][i] = 1; 
}
}
int starting_indx_138 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('v' == chunk[i] && 'X' == chunk[i+1] && 'n' == chunk[i+2] && 'j' == chunk[i+3] && 's' == chunk[i+4] && 'H' == chunk[i+5] && 'S' == chunk[i+6] && 'J' == chunk[i+7] && 'f' == chunk[i+8] && 's' == chunk[i+9] && 'h' == chunk[i+10] && 'g' == chunk[i+11]) {
 positions[138][i] = 1; 
}
}
int starting_indx_139 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 't' == chunk[i+1] && 'x' == chunk[i+2] && 'E' == chunk[i+3] && 'J' == chunk[i+4] && 'L' == chunk[i+5] && 'C' == chunk[i+6] && 'p' == chunk[i+7] && 'K' == chunk[i+8] && 'i' == chunk[i+9] && 'q' == chunk[i+10] && 'b' == chunk[i+11] && 'I' == chunk[i+12]) {
 positions[139][i] = 1; 
}
}
int starting_indx_140 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('U' == chunk[i]) {
 positions[140][i] = 1; 
}
}
int starting_indx_141 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('i' == chunk[i] && 'p' == chunk[i+1] && 'E' == chunk[i+2] && 'Q' == chunk[i+3] && 'T' == chunk[i+4] && 'd' == chunk[i+5] && 'a' == chunk[i+6] && 'a' == chunk[i+7] && 'X' == chunk[i+8] && 'n' == chunk[i+9] && 'A' == chunk[i+10] && 'o' == chunk[i+11] && 'G' == chunk[i+12]) {
 positions[141][i] = 1; 
}
}
int starting_indx_142 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('p' == chunk[i] && 'Y' == chunk[i+1] && 't' == chunk[i+2] && 'd' == chunk[i+3] && 'Z' == chunk[i+4] && 'G' == chunk[i+5] && 'p' == chunk[i+6] && 'c' == chunk[i+7] && 'S' == chunk[i+8] && 'y' == chunk[i+9] && 'w' == chunk[i+10] && 'X' == chunk[i+11] && 'b' == chunk[i+12] && 'J' == chunk[i+13] && 't' == chunk[i+14] && 'C' == chunk[i+15] && 'C' == chunk[i+16] && 'g' == chunk[i+17] && 'P' == chunk[i+18] && 'h' == chunk[i+19]) {
 positions[142][i] = 1; 
}
}
int starting_indx_143 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('K' == chunk[i] && 'H' == chunk[i+1] && 'r' == chunk[i+2] && 'T' == chunk[i+3] && 'L' == chunk[i+4] && 'M' == chunk[i+5] && 'y' == chunk[i+6] && 'y' == chunk[i+7] && 't' == chunk[i+8] && 'k' == chunk[i+9] && 'L' == chunk[i+10] && 'R' == chunk[i+11]) {
 positions[143][i] = 1; 
}
}
int starting_indx_144 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('P' == chunk[i] && 'C' == chunk[i+1] && 'd' == chunk[i+2]) {
 positions[144][i] = 1; 
}
}
int starting_indx_145 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('H' == chunk[i] && 'N' == chunk[i+1] && 'y' == chunk[i+2] && 'g' == chunk[i+3] && 'G' == chunk[i+4] && 't' == chunk[i+5] && 'J' == chunk[i+6]) {
 positions[145][i] = 1; 
}
}
int starting_indx_146 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 'i' == chunk[i+1] && 'D' == chunk[i+2] && 'w' == chunk[i+3] && 'e' == chunk[i+4] && 'F' == chunk[i+5] && 'a' == chunk[i+6] && 'K' == chunk[i+7] && 'K' == chunk[i+8] && 'n' == chunk[i+9] && 'K' == chunk[i+10] && 'D' == chunk[i+11]) {
 positions[146][i] = 1; 
}
}
int starting_indx_147 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('d' == chunk[i] && 'V' == chunk[i+1]) {
 positions[147][i] = 1; 
}
}
int starting_indx_148 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('h' == chunk[i] && 'v' == chunk[i+1] && 'j' == chunk[i+2]) {
 positions[148][i] = 1; 
}
}
int starting_indx_149 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('v' == chunk[i] && 'q' == chunk[i+1] && 'r' == chunk[i+2] && 'E' == chunk[i+3] && 'Y' == chunk[i+4] && 'j' == chunk[i+5] && 'V' == chunk[i+6] && 'h' == chunk[i+7] && 'q' == chunk[i+8] && 'q' == chunk[i+9] && 'b' == chunk[i+10] && 'O' == chunk[i+11]) {
 positions[149][i] = 1; 
}
}
int starting_indx_150 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('y' == chunk[i] && 'k' == chunk[i+1] && 'O' == chunk[i+2] && 'Y' == chunk[i+3] && 'p' == chunk[i+4] && 'S' == chunk[i+5] && 'q' == chunk[i+6] && 'L' == chunk[i+7] && 'C' == chunk[i+8]) {
 positions[150][i] = 1; 
}
}
int starting_indx_151 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('M' == chunk[i] && 'i' == chunk[i+1] && 'K' == chunk[i+2] && 'd' == chunk[i+3] && 'V' == chunk[i+4] && 'w' == chunk[i+5]) {
 positions[151][i] = 1; 
}
}
int starting_indx_152 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('h' == chunk[i] && 'a' == chunk[i+1] && 'D' == chunk[i+2] && 'c' == chunk[i+3] && 'S' == chunk[i+4] && 'N' == chunk[i+5] && 'F' == chunk[i+6] && 'R' == chunk[i+7] && 'P' == chunk[i+8] && 'c' == chunk[i+9] && 'b' == chunk[i+10] && 'L' == chunk[i+11] && 'A' == chunk[i+12] && 'h' == chunk[i+13] && 'A' == chunk[i+14] && 'U' == chunk[i+15] && 'H' == chunk[i+16] && 'N' == chunk[i+17]) {
 positions[152][i] = 1; 
}
}
int starting_indx_153 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('N' == chunk[i] && 'K' == chunk[i+1] && 'o' == chunk[i+2] && 'I' == chunk[i+3] && 'S' == chunk[i+4] && 'h' == chunk[i+5] && 'T' == chunk[i+6] && 'e' == chunk[i+7] && 'U' == chunk[i+8] && 'R' == chunk[i+9] && 'L' == chunk[i+10] && 'f' == chunk[i+11] && 'c' == chunk[i+12] && 'e' == chunk[i+13] && 'T' == chunk[i+14]) {
 positions[153][i] = 1; 
}
}
int starting_indx_154 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('t' == chunk[i] && 'P' == chunk[i+1] && 'H' == chunk[i+2] && 'I' == chunk[i+3] && 'U' == chunk[i+4] && 'e' == chunk[i+5] && 'P' == chunk[i+6] && 'R' == chunk[i+7] && 'r' == chunk[i+8] && 'h' == chunk[i+9] && 'z' == chunk[i+10] && 'W' == chunk[i+11] && 't' == chunk[i+12] && 'q' == chunk[i+13] && 'D' == chunk[i+14]) {
 positions[154][i] = 1; 
}
}
int starting_indx_155 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('t' == chunk[i] && 'a' == chunk[i+1] && 'W' == chunk[i+2] && 'u' == chunk[i+3] && 'H' == chunk[i+4] && 'Q' == chunk[i+5] && 'F' == chunk[i+6] && 'D' == chunk[i+7] && 'y' == chunk[i+8] && 'j' == chunk[i+9]) {
 positions[155][i] = 1; 
}
}
int starting_indx_156 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('q' == chunk[i] && 'u' == chunk[i+1] && 'N' == chunk[i+2] && 'n' == chunk[i+3] && 'D' == chunk[i+4] && 'f' == chunk[i+5] && 'j' == chunk[i+6]) {
 positions[156][i] = 1; 
}
}
int starting_indx_157 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'O' == chunk[i+1] && 'B' == chunk[i+2] && 'C' == chunk[i+3] && 'N' == chunk[i+4] && 'H' == chunk[i+5] && 'P' == chunk[i+6] && 'z' == chunk[i+7] && 'l' == chunk[i+8] && 'm' == chunk[i+9] && 'i' == chunk[i+10] && 'F' == chunk[i+11]) {
 positions[157][i] = 1; 
}
}
int starting_indx_158 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('R' == chunk[i] && 'G' == chunk[i+1] && 'C' == chunk[i+2] && 'K' == chunk[i+3] && 'w' == chunk[i+4] && 'b' == chunk[i+5]) {
 positions[158][i] = 1; 
}
}
int starting_indx_159 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('B' == chunk[i] && 'r' == chunk[i+1] && 'K' == chunk[i+2] && 'F' == chunk[i+3] && 'G' == chunk[i+4]) {
 positions[159][i] = 1; 
}
}
int starting_indx_160 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('n' == chunk[i] && 'J' == chunk[i+1] && 'p' == chunk[i+2] && 'Q' == chunk[i+3] && 'k' == chunk[i+4] && 'A' == chunk[i+5] && 'J' == chunk[i+6] && 'Y' == chunk[i+7] && 'q' == chunk[i+8] && 'u' == chunk[i+9] && 's' == chunk[i+10] && 'N' == chunk[i+11] && 'g' == chunk[i+12] && 'm' == chunk[i+13] && 'q' == chunk[i+14] && 'B' == chunk[i+15] && 'w' == chunk[i+16] && 'H' == chunk[i+17]) {
 positions[160][i] = 1; 
}
}
int starting_indx_161 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('F' == chunk[i] && 'O' == chunk[i+1] && 'T' == chunk[i+2] && 'P' == chunk[i+3] && 'f' == chunk[i+4] && 'h' == chunk[i+5] && 'S' == chunk[i+6] && 'X' == chunk[i+7] && 'h' == chunk[i+8]) {
 positions[161][i] = 1; 
}
}
int starting_indx_162 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'g' == chunk[i+1] && 'O' == chunk[i+2] && 's' == chunk[i+3] && 'W' == chunk[i+4] && 'L' == chunk[i+5] && 'l' == chunk[i+6] && 'd' == chunk[i+7] && 'X' == chunk[i+8] && 'I' == chunk[i+9] && 'y' == chunk[i+10]) {
 positions[162][i] = 1; 
}
}
int starting_indx_163 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('O' == chunk[i] && 'v' == chunk[i+1] && 'U' == chunk[i+2] && 'X' == chunk[i+3] && 'q' == chunk[i+4] && 'g' == chunk[i+5]) {
 positions[163][i] = 1; 
}
}
int starting_indx_164 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('v' == chunk[i] && 'g' == chunk[i+1] && 't' == chunk[i+2] && 'e' == chunk[i+3] && 's' == chunk[i+4] && 'T' == chunk[i+5] && 'v' == chunk[i+6] && 'A' == chunk[i+7] && 'A' == chunk[i+8] && 'e' == chunk[i+9] && 'e' == chunk[i+10] && 't' == chunk[i+11] && 'e' == chunk[i+12] && 'l' == chunk[i+13]) {
 positions[164][i] = 1; 
}
}
int starting_indx_165 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'Y' == chunk[i+1]) {
 positions[165][i] = 1; 
}
}
int starting_indx_166 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 'g' == chunk[i+1] && 'D' == chunk[i+2] && 'A' == chunk[i+3] && 'e' == chunk[i+4] && 'o' == chunk[i+5] && 'A' == chunk[i+6] && 'b' == chunk[i+7] && 'K' == chunk[i+8] && 'I' == chunk[i+9] && 's' == chunk[i+10] && 'P' == chunk[i+11] && 'g' == chunk[i+12] && 'R' == chunk[i+13] && 'G' == chunk[i+14] && 'u' == chunk[i+15] && 'x' == chunk[i+16]) {
 positions[166][i] = 1; 
}
}
int starting_indx_167 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'y' == chunk[i+1] && 'g' == chunk[i+2]) {
 positions[167][i] = 1; 
}
}
int starting_indx_168 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('X' == chunk[i] && 'p' == chunk[i+1] && 'h' == chunk[i+2] && 'N' == chunk[i+3] && 'I' == chunk[i+4] && 'g' == chunk[i+5]) {
 positions[168][i] = 1; 
}
}
int starting_indx_169 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('P' == chunk[i] && 'Q' == chunk[i+1] && 'I' == chunk[i+2]) {
 positions[169][i] = 1; 
}
}
int starting_indx_170 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('B' == chunk[i] && 'h' == chunk[i+1] && 'r' == chunk[i+2] && 't' == chunk[i+3] && 'J' == chunk[i+4] && 'D' == chunk[i+5] && 'B' == chunk[i+6] && 'c' == chunk[i+7] && 'n' == chunk[i+8] && 'G' == chunk[i+9] && 'i' == chunk[i+10] && 'y' == chunk[i+11] && 'Q' == chunk[i+12]) {
 positions[170][i] = 1; 
}
}
int starting_indx_171 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('m' == chunk[i] && 'u' == chunk[i+1] && 'Z' == chunk[i+2] && 'T' == chunk[i+3] && 'H' == chunk[i+4] && 'e' == chunk[i+5]) {
 positions[171][i] = 1; 
}
}
int starting_indx_172 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('t' == chunk[i] && 'd' == chunk[i+1] && 'P' == chunk[i+2] && 'D' == chunk[i+3] && 't' == chunk[i+4]) {
 positions[172][i] = 1; 
}
}
int starting_indx_173 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('J' == chunk[i] && 'Z' == chunk[i+1] && 'K' == chunk[i+2] && 'O' == chunk[i+3] && 'G' == chunk[i+4] && 'q' == chunk[i+5] && 's' == chunk[i+6] && 'k' == chunk[i+7] && 'V' == chunk[i+8] && 'O' == chunk[i+9] && 'q' == chunk[i+10] && 'D' == chunk[i+11] && 'E' == chunk[i+12] && 'z' == chunk[i+13] && 'W' == chunk[i+14]) {
 positions[173][i] = 1; 
}
}
int starting_indx_174 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'i' == chunk[i+1] && 'M' == chunk[i+2] && 'm' == chunk[i+3] && 'D' == chunk[i+4] && 'S' == chunk[i+5] && 'U' == chunk[i+6] && 'X' == chunk[i+7] && 'g' == chunk[i+8] && 'C' == chunk[i+9] && 'o' == chunk[i+10] && 'i' == chunk[i+11] && 'p' == chunk[i+12] && 'k' == chunk[i+13] && 'P' == chunk[i+14] && 'f' == chunk[i+15] && 'U' == chunk[i+16] && 'C' == chunk[i+17] && 'q' == chunk[i+18] && 'N' == chunk[i+19]) {
 positions[174][i] = 1; 
}
}
int starting_indx_175 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('R' == chunk[i] && 'k' == chunk[i+1] && 'Z' == chunk[i+2] && 'S' == chunk[i+3] && 'E' == chunk[i+4] && 'g' == chunk[i+5] && 't' == chunk[i+6] && 'L' == chunk[i+7] && 'q' == chunk[i+8] && 'O' == chunk[i+9] && 'w' == chunk[i+10] && 'S' == chunk[i+11] && 'd' == chunk[i+12] && 'I' == chunk[i+13] && 'U' == chunk[i+14]) {
 positions[175][i] = 1; 
}
}
int starting_indx_176 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('h' == chunk[i] && 'n' == chunk[i+1] && 'W' == chunk[i+2] && 'b' == chunk[i+3] && 'v' == chunk[i+4] && 'K' == chunk[i+5] && 'L' == chunk[i+6] && 'E' == chunk[i+7] && 'O' == chunk[i+8] && 'F' == chunk[i+9] && 'H' == chunk[i+10] && 'M' == chunk[i+11] && 's' == chunk[i+12] && 'M' == chunk[i+13] && 'v' == chunk[i+14] && 'd' == chunk[i+15] && 's' == chunk[i+16] && 'i' == chunk[i+17]) {
 positions[176][i] = 1; 
}
}
int starting_indx_177 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 's' == chunk[i+1] && 'A' == chunk[i+2] && 'x' == chunk[i+3] && 'X' == chunk[i+4] && 'i' == chunk[i+5] && 's' == chunk[i+6] && 'P' == chunk[i+7] && 'm' == chunk[i+8] && 'W' == chunk[i+9] && 'U' == chunk[i+10] && 'c' == chunk[i+11] && 'a' == chunk[i+12] && 'F' == chunk[i+13] && 'k' == chunk[i+14] && 't' == chunk[i+15] && 'A' == chunk[i+16]) {
 positions[177][i] = 1; 
}
}
int starting_indx_178 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 'L' == chunk[i+1] && 'R' == chunk[i+2] && 'D' == chunk[i+3] && 'v' == chunk[i+4] && 'U' == chunk[i+5] && 'H' == chunk[i+6] && 'G' == chunk[i+7] && 'u' == chunk[i+8] && 'T' == chunk[i+9]) {
 positions[178][i] = 1; 
}
}
int starting_indx_179 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Y' == chunk[i] && 'Y' == chunk[i+1] && 'a' == chunk[i+2] && 'k' == chunk[i+3] && 'K' == chunk[i+4] && 'F' == chunk[i+5] && 'P' == chunk[i+6] && 'a' == chunk[i+7] && 'I' == chunk[i+8] && 'Y' == chunk[i+9] && 'E' == chunk[i+10] && 'X' == chunk[i+11] && 'D' == chunk[i+12] && 'x' == chunk[i+13] && 'c' == chunk[i+14] && 'o' == chunk[i+15] && 'I' == chunk[i+16] && 'a' == chunk[i+17] && 'E' == chunk[i+18] && 'h' == chunk[i+19]) {
 positions[179][i] = 1; 
}
}
int starting_indx_180 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('k' == chunk[i] && 'k' == chunk[i+1] && 'G' == chunk[i+2] && 'p' == chunk[i+3] && 'Q' == chunk[i+4] && 'z' == chunk[i+5] && 'P' == chunk[i+6]) {
 positions[180][i] = 1; 
}
}
int starting_indx_181 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('y' == chunk[i] && 'A' == chunk[i+1] && 'P' == chunk[i+2] && 'o' == chunk[i+3]) {
 positions[181][i] = 1; 
}
}
int starting_indx_182 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i] && 'n' == chunk[i+1] && 'Q' == chunk[i+2] && 'p' == chunk[i+3] && 'L' == chunk[i+4] && 'e' == chunk[i+5] && 'V' == chunk[i+6] && 'G' == chunk[i+7] && 'x' == chunk[i+8]) {
 positions[182][i] = 1; 
}
}
int starting_indx_183 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('L' == chunk[i] && 't' == chunk[i+1] && 'o' == chunk[i+2] && 'V' == chunk[i+3] && 'g' == chunk[i+4] && 'x' == chunk[i+5] && 'J' == chunk[i+6] && 'M' == chunk[i+7] && 'J' == chunk[i+8] && 'W' == chunk[i+9] && 'Z' == chunk[i+10] && 'C' == chunk[i+11] && 'Y' == chunk[i+12] && 'R' == chunk[i+13]) {
 positions[183][i] = 1; 
}
}
int starting_indx_184 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('q' == chunk[i] && 'H' == chunk[i+1]) {
 positions[184][i] = 1; 
}
}
int starting_indx_185 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('j' == chunk[i]) {
 positions[185][i] = 1; 
}
}
int starting_indx_186 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('d' == chunk[i] && 'D' == chunk[i+1] && 'a' == chunk[i+2] && 'm' == chunk[i+3] && 'X' == chunk[i+4] && 'm' == chunk[i+5] && 'g' == chunk[i+6] && 'l' == chunk[i+7] && 'D' == chunk[i+8] && 'C' == chunk[i+9] && 'Z' == chunk[i+10] && 'E' == chunk[i+11] && 'E' == chunk[i+12] && 's' == chunk[i+13]) {
 positions[186][i] = 1; 
}
}
int starting_indx_187 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('e' == chunk[i] && 'b' == chunk[i+1] && 'X' == chunk[i+2] && 'Y' == chunk[i+3] && 'S' == chunk[i+4] && 'X' == chunk[i+5] && 'N' == chunk[i+6] && 'N' == chunk[i+7] && 'D' == chunk[i+8] && 'N' == chunk[i+9] && 'N' == chunk[i+10] && 'M' == chunk[i+11] && 'T' == chunk[i+12] && 'N' == chunk[i+13] && 'n' == chunk[i+14] && 'b' == chunk[i+15] && 'P' == chunk[i+16]) {
 positions[187][i] = 1; 
}
}
int starting_indx_188 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('G' == chunk[i] && 'm' == chunk[i+1] && 'e' == chunk[i+2] && 'S' == chunk[i+3] && 'v' == chunk[i+4] && 'm' == chunk[i+5] && 'g' == chunk[i+6] && 'I' == chunk[i+7] && 'x' == chunk[i+8] && 'f' == chunk[i+9] && 'l' == chunk[i+10] && 'o' == chunk[i+11] && 'z' == chunk[i+12] && 'a' == chunk[i+13] && 'c' == chunk[i+14]) {
 positions[188][i] = 1; 
}
}
int starting_indx_189 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('d' == chunk[i] && 't' == chunk[i+1] && 'm' == chunk[i+2] && 'U' == chunk[i+3] && 'y' == chunk[i+4] && 'z' == chunk[i+5] && 'k' == chunk[i+6] && 'X' == chunk[i+7] && 'h' == chunk[i+8] && 'y' == chunk[i+9] && 'S' == chunk[i+10] && 'm' == chunk[i+11] && 'n' == chunk[i+12] && 'i' == chunk[i+13]) {
 positions[189][i] = 1; 
}
}
int starting_indx_190 = pattern_max_len - 13;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('C' == chunk[i] && 'j' == chunk[i+1] && 'A' == chunk[i+2] && 'b' == chunk[i+3] && 'r' == chunk[i+4] && 'D' == chunk[i+5] && 'H' == chunk[i+6] && 'X' == chunk[i+7] && 'm' == chunk[i+8] && 'S' == chunk[i+9] && 'S' == chunk[i+10] && 'R' == chunk[i+11] && 'r' == chunk[i+12]) {
 positions[190][i] = 1; 
}
}
int starting_indx_191 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('o' == chunk[i] && 'B' == chunk[i+1] && 'Y' == chunk[i+2]) {
 positions[191][i] = 1; 
}
}
int starting_indx_192 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Q' == chunk[i] && 'Q' == chunk[i+1] && 'J' == chunk[i+2] && 'T' == chunk[i+3] && 'V' == chunk[i+4] && 'C' == chunk[i+5] && 'U' == chunk[i+6] && 'm' == chunk[i+7] && 'm' == chunk[i+8] && 'u' == chunk[i+9] && 'L' == chunk[i+10] && 'q' == chunk[i+11] && 'T' == chunk[i+12] && 'R' == chunk[i+13]) {
 positions[192][i] = 1; 
}
}
int starting_indx_193 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('m' == chunk[i] && 'I' == chunk[i+1]) {
 positions[193][i] = 1; 
}
}
int starting_indx_194 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('x' == chunk[i] && 'O' == chunk[i+1] && 'g' == chunk[i+2] && 'T' == chunk[i+3] && 'M' == chunk[i+4] && 'B' == chunk[i+5]) {
 positions[194][i] = 1; 
}
}
int starting_indx_195 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('j' == chunk[i] && 'O' == chunk[i+1] && 's' == chunk[i+2] && 'l' == chunk[i+3] && 'a' == chunk[i+4] && 'I' == chunk[i+5] && 'j' == chunk[i+6] && 'T' == chunk[i+7] && 'B' == chunk[i+8] && 'g' == chunk[i+9] && 'V' == chunk[i+10] && 'a' == chunk[i+11]) {
 positions[195][i] = 1; 
}
}
int starting_indx_196 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'u' == chunk[i+1] && 'U' == chunk[i+2] && 'f' == chunk[i+3] && 'F' == chunk[i+4] && 'j' == chunk[i+5] && 'x' == chunk[i+6] && 'a' == chunk[i+7] && 'd' == chunk[i+8] && 'U' == chunk[i+9] && 'M' == chunk[i+10] && 'x' == chunk[i+11] && 'W' == chunk[i+12] && 'E' == chunk[i+13] && 'q' == chunk[i+14] && 'Z' == chunk[i+15] && 'K' == chunk[i+16] && 'C' == chunk[i+17]) {
 positions[196][i] = 1; 
}
}
int starting_indx_197 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('M' == chunk[i] && 'I' == chunk[i+1] && 'A' == chunk[i+2] && 'k' == chunk[i+3] && 'z' == chunk[i+4] && 'B' == chunk[i+5] && 'J' == chunk[i+6] && 'C' == chunk[i+7] && 'b' == chunk[i+8] && 'o' == chunk[i+9] && 'E' == chunk[i+10]) {
 positions[197][i] = 1; 
}
}
int starting_indx_198 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'G' == chunk[i+1] && 'e' == chunk[i+2] && 'X' == chunk[i+3] && 'I' == chunk[i+4] && 'E' == chunk[i+5] && 'o' == chunk[i+6] && 'f' == chunk[i+7] && 'Q' == chunk[i+8] && 'P' == chunk[i+9]) {
 positions[198][i] = 1; 
}
}
int starting_indx_199 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('u' == chunk[i] && 'g' == chunk[i+1] && 'f' == chunk[i+2] && 'U' == chunk[i+3] && 'u' == chunk[i+4] && 'A' == chunk[i+5] && 'l' == chunk[i+6] && 'u' == chunk[i+7] && 'w' == chunk[i+8] && 'X' == chunk[i+9] && 'X' == chunk[i+10] && 'c' == chunk[i+11] && 't' == chunk[i+12] && 'O' == chunk[i+13] && 'R' == chunk[i+14] && 'X' == chunk[i+15] && 'h' == chunk[i+16] && 'H' == chunk[i+17] && 'f' == chunk[i+18] && 'W' == chunk[i+19]) {
 positions[199][i] = 1; 
}
}
int starting_indx_200 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('c' == chunk[i] && 'F' == chunk[i+1] && 'G' == chunk[i+2]) {
 positions[200][i] = 1; 
}
}
int starting_indx_201 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('n' == chunk[i] && 'C' == chunk[i+1] && 't' == chunk[i+2] && 'j' == chunk[i+3] && 'B' == chunk[i+4] && 'r' == chunk[i+5] && 'N' == chunk[i+6] && 'C' == chunk[i+7] && 'K' == chunk[i+8] && 'e' == chunk[i+9] && 'R' == chunk[i+10] && 'H' == chunk[i+11] && 'p' == chunk[i+12] && 's' == chunk[i+13] && 'f' == chunk[i+14] && 'L' == chunk[i+15]) {
 positions[201][i] = 1; 
}
}
int starting_indx_202 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('e' == chunk[i] && 'y' == chunk[i+1] && 's' == chunk[i+2] && 'A' == chunk[i+3] && 'g' == chunk[i+4] && 'k' == chunk[i+5] && 'w' == chunk[i+6] && 'O' == chunk[i+7] && 'B' == chunk[i+8] && 'f' == chunk[i+9]) {
 positions[202][i] = 1; 
}
}
int starting_indx_203 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('n' == chunk[i] && 'w' == chunk[i+1] && 'R' == chunk[i+2] && 'g' == chunk[i+3] && 'D' == chunk[i+4] && 'u' == chunk[i+5] && 'g' == chunk[i+6] && 'F' == chunk[i+7] && 'u' == chunk[i+8] && 'c' == chunk[i+9] && 'R' == chunk[i+10]) {
 positions[203][i] = 1; 
}
}
int starting_indx_204 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 'd' == chunk[i+1] && 'M' == chunk[i+2] && 'o' == chunk[i+3] && 's' == chunk[i+4] && 't' == chunk[i+5] && 'q' == chunk[i+6] && 'D' == chunk[i+7] && 'G' == chunk[i+8] && 'H' == chunk[i+9] && 'w' == chunk[i+10] && 'G' == chunk[i+11] && 'G' == chunk[i+12] && 'f' == chunk[i+13] && 'G' == chunk[i+14]) {
 positions[204][i] = 1; 
}
}
int starting_indx_205 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('C' == chunk[i] && 'A' == chunk[i+1] && 'Q' == chunk[i+2] && 'm' == chunk[i+3] && 'N' == chunk[i+4] && 'U' == chunk[i+5] && 'z' == chunk[i+6] && 'B' == chunk[i+7] && 'h' == chunk[i+8] && 'i' == chunk[i+9] && 'e' == chunk[i+10] && 'C' == chunk[i+11] && 'u' == chunk[i+12] && 'c' == chunk[i+13] && 't' == chunk[i+14] && 'Y' == chunk[i+15] && 'x' == chunk[i+16] && 'A' == chunk[i+17] && 'M' == chunk[i+18]) {
 positions[205][i] = 1; 
}
}
int starting_indx_206 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'l' == chunk[i+1] && 'a' == chunk[i+2] && 'C' == chunk[i+3] && 'j' == chunk[i+4] && 'U' == chunk[i+5] && 't' == chunk[i+6] && 'c' == chunk[i+7] && 'K' == chunk[i+8] && 'g' == chunk[i+9] && 'L' == chunk[i+10] && 'W' == chunk[i+11] && 'S' == chunk[i+12] && 'd' == chunk[i+13] && 'e' == chunk[i+14] && 'f' == chunk[i+15] && 's' == chunk[i+16] && 'O' == chunk[i+17] && 's' == chunk[i+18]) {
 positions[206][i] = 1; 
}
}
int starting_indx_207 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('B' == chunk[i] && 'Q' == chunk[i+1] && 'o' == chunk[i+2] && 'c' == chunk[i+3] && 'B' == chunk[i+4] && 'D' == chunk[i+5] && 's' == chunk[i+6] && 'k' == chunk[i+7] && 'S' == chunk[i+8] && 'v' == chunk[i+9]) {
 positions[207][i] = 1; 
}
}
int starting_indx_208 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 'G' == chunk[i+1] && 'K' == chunk[i+2] && 'z' == chunk[i+3] && 'D' == chunk[i+4] && 'N' == chunk[i+5] && 'D' == chunk[i+6] && 'c' == chunk[i+7] && 'l' == chunk[i+8] && 'x' == chunk[i+9] && 'E' == chunk[i+10] && 'u' == chunk[i+11] && 'N' == chunk[i+12] && 'f' == chunk[i+13] && 'h' == chunk[i+14] && 'C' == chunk[i+15] && 'r' == chunk[i+16]) {
 positions[208][i] = 1; 
}
}
int starting_indx_209 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Y' == chunk[i] && 'v' == chunk[i+1] && 'O' == chunk[i+2] && 'h' == chunk[i+3] && 'y' == chunk[i+4] && 'z' == chunk[i+5] && 'C' == chunk[i+6] && 'q' == chunk[i+7] && 'i' == chunk[i+8] && 'j' == chunk[i+9] && 'V' == chunk[i+10] && 'Z' == chunk[i+11]) {
 positions[209][i] = 1; 
}
}
int starting_indx_210 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'w' == chunk[i+1] && 'r' == chunk[i+2] && 'l' == chunk[i+3] && 'l' == chunk[i+4] && 'A' == chunk[i+5] && 'a' == chunk[i+6] && 'R' == chunk[i+7] && 'z' == chunk[i+8] && 'u' == chunk[i+9] && 'q' == chunk[i+10] && 'm' == chunk[i+11] && 'N' == chunk[i+12] && 'j' == chunk[i+13] && 'B' == chunk[i+14] && 'N' == chunk[i+15] && 'H' == chunk[i+16] && 'D' == chunk[i+17]) {
 positions[210][i] = 1; 
}
}
int starting_indx_211 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('s' == chunk[i] && 'y' == chunk[i+1] && 'c' == chunk[i+2] && 'm' == chunk[i+3]) {
 positions[211][i] = 1; 
}
}
int starting_indx_212 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Q' == chunk[i] && 'z' == chunk[i+1] && 'p' == chunk[i+2] && 'S' == chunk[i+3] && 'F' == chunk[i+4] && 'L' == chunk[i+5] && 'Q' == chunk[i+6]) {
 positions[212][i] = 1; 
}
}
int starting_indx_213 = pattern_max_len - 17;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('b' == chunk[i] && 'h' == chunk[i+1] && 'X' == chunk[i+2] && 'J' == chunk[i+3] && 't' == chunk[i+4] && 'g' == chunk[i+5] && 'v' == chunk[i+6] && 'v' == chunk[i+7] && 'N' == chunk[i+8] && 'w' == chunk[i+9] && 'k' == chunk[i+10] && 'a' == chunk[i+11] && 'c' == chunk[i+12] && 'm' == chunk[i+13] && 'F' == chunk[i+14] && 'c' == chunk[i+15] && 'r' == chunk[i+16]) {
 positions[213][i] = 1; 
}
}
int starting_indx_214 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('H' == chunk[i] && 'n' == chunk[i+1] && 'c' == chunk[i+2] && 'o' == chunk[i+3] && 'v' == chunk[i+4] && 'Y' == chunk[i+5] && 'u' == chunk[i+6] && 'o' == chunk[i+7] && 'x' == chunk[i+8] && 'D' == chunk[i+9] && 'b' == chunk[i+10] && 'c' == chunk[i+11] && 'S' == chunk[i+12] && 'h' == chunk[i+13] && 'W' == chunk[i+14] && 'm' == chunk[i+15]) {
 positions[214][i] = 1; 
}
}
int starting_indx_215 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('S' == chunk[i] && 't' == chunk[i+1] && 'h' == chunk[i+2] && 'p' == chunk[i+3]) {
 positions[215][i] = 1; 
}
}
int starting_indx_216 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('O' == chunk[i] && 'h' == chunk[i+1] && 'X' == chunk[i+2]) {
 positions[216][i] = 1; 
}
}
int starting_indx_217 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('w' == chunk[i] && 'Y' == chunk[i+1] && 'v' == chunk[i+2] && 'q' == chunk[i+3] && 'A' == chunk[i+4] && 'k' == chunk[i+5] && 'X' == chunk[i+6] && 'r' == chunk[i+7] && 't' == chunk[i+8] && 'e' == chunk[i+9] && 'z' == chunk[i+10] && 'l' == chunk[i+11] && 'p' == chunk[i+12] && 'U' == chunk[i+13] && 'F' == chunk[i+14] && 'a' == chunk[i+15] && 'X' == chunk[i+16] && 't' == chunk[i+17] && 'E' == chunk[i+18]) {
 positions[217][i] = 1; 
}
}
int starting_indx_218 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('d' == chunk[i] && 'U' == chunk[i+1] && 'V' == chunk[i+2] && 'U' == chunk[i+3] && 'W' == chunk[i+4] && 'J' == chunk[i+5] && 'n' == chunk[i+6] && 'y' == chunk[i+7]) {
 positions[218][i] = 1; 
}
}
int starting_indx_219 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 's' == chunk[i+1] && 'F' == chunk[i+2] && 'c' == chunk[i+3] && 'S' == chunk[i+4] && 'q' == chunk[i+5] && 'a' == chunk[i+6] && 'D' == chunk[i+7] && 'j' == chunk[i+8] && 'h' == chunk[i+9] && 'V' == chunk[i+10] && 'f' == chunk[i+11] && 'p' == chunk[i+12] && 'u' == chunk[i+13] && 'x' == chunk[i+14] && 'p' == chunk[i+15] && 'N' == chunk[i+16] && 'F' == chunk[i+17] && 'a' == chunk[i+18]) {
 positions[219][i] = 1; 
}
}
int starting_indx_220 = pattern_max_len - 1;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('L' == chunk[i]) {
 positions[220][i] = 1; 
}
}
int starting_indx_221 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('H' == chunk[i] && 'z' == chunk[i+1] && 'w' == chunk[i+2] && 'u' == chunk[i+3] && 'r' == chunk[i+4] && 'O' == chunk[i+5] && 'n' == chunk[i+6] && 'Y' == chunk[i+7] && 'L' == chunk[i+8] && 's' == chunk[i+9] && 'C' == chunk[i+10]) {
 positions[221][i] = 1; 
}
}
int starting_indx_222 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('R' == chunk[i] && 'a' == chunk[i+1] && 'L' == chunk[i+2] && 'L' == chunk[i+3] && 'm' == chunk[i+4]) {
 positions[222][i] = 1; 
}
}
int starting_indx_223 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i] && 'K' == chunk[i+1] && 't' == chunk[i+2] && 'f' == chunk[i+3] && 'o' == chunk[i+4] && 'p' == chunk[i+5] && 'n' == chunk[i+6] && 'y' == chunk[i+7]) {
 positions[223][i] = 1; 
}
}
int starting_indx_224 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('n' == chunk[i] && 's' == chunk[i+1] && 'U' == chunk[i+2] && 'i' == chunk[i+3] && 'n' == chunk[i+4] && 'W' == chunk[i+5] && 'k' == chunk[i+6] && 'h' == chunk[i+7] && 'M' == chunk[i+8] && 'L' == chunk[i+9] && 'N' == chunk[i+10] && 'T' == chunk[i+11] && 'U' == chunk[i+12] && 'M' == chunk[i+13] && 'F' == chunk[i+14] && 'o' == chunk[i+15] && 'C' == chunk[i+16] && 'O' == chunk[i+17] && 't' == chunk[i+18]) {
 positions[224][i] = 1; 
}
}
int starting_indx_225 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'M' == chunk[i+1] && 'l' == chunk[i+2] && 'L' == chunk[i+3] && 'D' == chunk[i+4] && 'Z' == chunk[i+5] && 'I' == chunk[i+6] && 'P' == chunk[i+7] && 'g' == chunk[i+8]) {
 positions[225][i] = 1; 
}
}
int starting_indx_226 = pattern_max_len - 12;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('K' == chunk[i] && 'E' == chunk[i+1] && 'H' == chunk[i+2] && 'a' == chunk[i+3] && 't' == chunk[i+4] && 'a' == chunk[i+5] && 'J' == chunk[i+6] && 'k' == chunk[i+7] && 'M' == chunk[i+8] && 'k' == chunk[i+9] && 'P' == chunk[i+10] && 'Y' == chunk[i+11]) {
 positions[226][i] = 1; 
}
}
int starting_indx_227 = pattern_max_len - 10;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('y' == chunk[i] && 'r' == chunk[i+1] && 'E' == chunk[i+2] && 'M' == chunk[i+3] && 'M' == chunk[i+4] && 'P' == chunk[i+5] && 'v' == chunk[i+6] && 'i' == chunk[i+7] && 'm' == chunk[i+8] && 'C' == chunk[i+9]) {
 positions[227][i] = 1; 
}
}
int starting_indx_228 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('J' == chunk[i] && 'O' == chunk[i+1] && 'm' == chunk[i+2] && 'V' == chunk[i+3] && 'g' == chunk[i+4] && 'N' == chunk[i+5] && 'b' == chunk[i+6] && 'F' == chunk[i+7] && 'l' == chunk[i+8] && 's' == chunk[i+9] && 'I' == chunk[i+10] && 'b' == chunk[i+11] && 'm' == chunk[i+12] && 'r' == chunk[i+13] && 'T' == chunk[i+14] && 'k' == chunk[i+15] && 'r' == chunk[i+16] && 'z' == chunk[i+17]) {
 positions[228][i] = 1; 
}
}
int starting_indx_229 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('f' == chunk[i] && 'O' == chunk[i+1] && 'w' == chunk[i+2] && 't' == chunk[i+3] && 'S' == chunk[i+4] && 'h' == chunk[i+5] && 'N' == chunk[i+6] && 'p' == chunk[i+7] && 'b' == chunk[i+8]) {
 positions[229][i] = 1; 
}
}
int starting_indx_230 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('o' == chunk[i] && 'r' == chunk[i+1] && 'Z' == chunk[i+2] && 'y' == chunk[i+3] && 'C' == chunk[i+4] && 'Z' == chunk[i+5] && 'q' == chunk[i+6] && 'e' == chunk[i+7] && 'E' == chunk[i+8] && 'z' == chunk[i+9] && 'F' == chunk[i+10] && 'j' == chunk[i+11] && 'z' == chunk[i+12] && 'Q' == chunk[i+13] && 'U' == chunk[i+14] && 'E' == chunk[i+15] && 'I' == chunk[i+16] && 'd' == chunk[i+17] && 'X' == chunk[i+18] && 'z' == chunk[i+19]) {
 positions[230][i] = 1; 
}
}
int starting_indx_231 = pattern_max_len - 20;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('M' == chunk[i] && 'c' == chunk[i+1] && 'm' == chunk[i+2] && 'G' == chunk[i+3] && 'X' == chunk[i+4] && 'Q' == chunk[i+5] && 'q' == chunk[i+6] && 'v' == chunk[i+7] && 'G' == chunk[i+8] && 'R' == chunk[i+9] && 'l' == chunk[i+10] && 'x' == chunk[i+11] && 'B' == chunk[i+12] && 'N' == chunk[i+13] && 'Z' == chunk[i+14] && 'N' == chunk[i+15] && 'R' == chunk[i+16] && 'Q' == chunk[i+17] && 'k' == chunk[i+18] && 'y' == chunk[i+19]) {
 positions[231][i] = 1; 
}
}
int starting_indx_232 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('K' == chunk[i] && 'N' == chunk[i+1] && 'Y' == chunk[i+2] && 'N' == chunk[i+3] && 'Q' == chunk[i+4] && 'd' == chunk[i+5] && 's' == chunk[i+6] && 'W' == chunk[i+7]) {
 positions[232][i] = 1; 
}
}
int starting_indx_233 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('A' == chunk[i] && 'F' == chunk[i+1] && 'E' == chunk[i+2] && 'H' == chunk[i+3] && 'U' == chunk[i+4] && 'l' == chunk[i+5] && 'W' == chunk[i+6] && 'Z' == chunk[i+7]) {
 positions[233][i] = 1; 
}
}
int starting_indx_234 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('E' == chunk[i] && 'F' == chunk[i+1] && 'C' == chunk[i+2] && 'O' == chunk[i+3] && 'K' == chunk[i+4] && 'p' == chunk[i+5] && 'p' == chunk[i+6] && 'u' == chunk[i+7] && 'T' == chunk[i+8] && 'T' == chunk[i+9] && 'o' == chunk[i+10] && 'j' == chunk[i+11] && 'f' == chunk[i+12] && 'h' == chunk[i+13] && 'X' == chunk[i+14]) {
 positions[234][i] = 1; 
}
}
int starting_indx_235 = pattern_max_len - 15;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('P' == chunk[i] && 'D' == chunk[i+1] && 'I' == chunk[i+2] && 'P' == chunk[i+3] && 'Y' == chunk[i+4] && 'a' == chunk[i+5] && 'R' == chunk[i+6] && 'j' == chunk[i+7] && 'a' == chunk[i+8] && 'F' == chunk[i+9] && 'S' == chunk[i+10] && 'N' == chunk[i+11] && 'R' == chunk[i+12] && 'S' == chunk[i+13] && 'i' == chunk[i+14]) {
 positions[235][i] = 1; 
}
}
int starting_indx_236 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('Z' == chunk[i] && 'c' == chunk[i+1] && 'W' == chunk[i+2] && 'e' == chunk[i+3]) {
 positions[236][i] = 1; 
}
}
int starting_indx_237 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('C' == chunk[i] && 'l' == chunk[i+1] && 'h' == chunk[i+2] && 'W' == chunk[i+3] && 'b' == chunk[i+4] && 'v' == chunk[i+5] && 'Y' == chunk[i+6] && 'X' == chunk[i+7] && 'B' == chunk[i+8] && 'I' == chunk[i+9] && 'Q' == chunk[i+10] && 'H' == chunk[i+11] && 'O' == chunk[i+12] && 'W' == chunk[i+13]) {
 positions[237][i] = 1; 
}
}
int starting_indx_238 = pattern_max_len - 11;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('T' == chunk[i] && 'o' == chunk[i+1] && 'k' == chunk[i+2] && 'F' == chunk[i+3] && 'G' == chunk[i+4] && 'F' == chunk[i+5] && 'Q' == chunk[i+6] && 'J' == chunk[i+7] && 'u' == chunk[i+8] && 'd' == chunk[i+9] && 'X' == chunk[i+10]) {
 positions[238][i] = 1; 
}
}
int starting_indx_239 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('u' == chunk[i] && 'a' == chunk[i+1] && 'F' == chunk[i+2] && 'c' == chunk[i+3] && 'n' == chunk[i+4] && 'm' == chunk[i+5] && 'J' == chunk[i+6] && 'q' == chunk[i+7] && 'r' == chunk[i+8] && 't' == chunk[i+9] && 'o' == chunk[i+10] && 'Z' == chunk[i+11] && 'Q' == chunk[i+12] && 'p' == chunk[i+13] && 'C' == chunk[i+14] && 'Q' == chunk[i+15] && 'e' == chunk[i+16] && 'K' == chunk[i+17] && 'F' == chunk[i+18]) {
 positions[239][i] = 1; 
}
}
int starting_indx_240 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('o' == chunk[i] && 'v' == chunk[i+1] && 'A' == chunk[i+2] && 'q' == chunk[i+3] && 'n' == chunk[i+4] && 'x' == chunk[i+5] && 'B' == chunk[i+6] && 'a' == chunk[i+7] && 'u' == chunk[i+8] && 'h' == chunk[i+9] && 'Y' == chunk[i+10] && 'j' == chunk[i+11] && 'p' == chunk[i+12] && 'u' == chunk[i+13] && 's' == chunk[i+14] && 'X' == chunk[i+15]) {
 positions[240][i] = 1; 
}
}
int starting_indx_241 = pattern_max_len - 8;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('w' == chunk[i] && 'W' == chunk[i+1] && 'p' == chunk[i+2] && 's' == chunk[i+3] && 'g' == chunk[i+4] && 'O' == chunk[i+5] && 'J' == chunk[i+6] && 'E' == chunk[i+7]) {
 positions[241][i] = 1; 
}
}
int starting_indx_242 = pattern_max_len - 9;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('h' == chunk[i] && 'I' == chunk[i+1] && 'H' == chunk[i+2] && 'O' == chunk[i+3] && 'r' == chunk[i+4] && 'c' == chunk[i+5] && 'j' == chunk[i+6] && 'Q' == chunk[i+7] && 'Y' == chunk[i+8]) {
 positions[242][i] = 1; 
}
}
int starting_indx_243 = pattern_max_len - 4;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 'C' == chunk[i+1] && 't' == chunk[i+2] && 'X' == chunk[i+3]) {
 positions[243][i] = 1; 
}
}
int starting_indx_244 = pattern_max_len - 5;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('I' == chunk[i] && 'o' == chunk[i+1] && 'u' == chunk[i+2] && 'u' == chunk[i+3] && 'l' == chunk[i+4]) {
 positions[244][i] = 1; 
}
}
int starting_indx_245 = pattern_max_len - 2;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('B' == chunk[i] && 'P' == chunk[i+1]) {
 positions[245][i] = 1; 
}
}
int starting_indx_246 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('y' == chunk[i] && 'a' == chunk[i+1] && 'h' == chunk[i+2] && 'q' == chunk[i+3] && 'H' == chunk[i+4] && 'T' == chunk[i+5] && 'z' == chunk[i+6] && 'V' == chunk[i+7] && 'f' == chunk[i+8] && 'Z' == chunk[i+9] && 'g' == chunk[i+10] && 'a' == chunk[i+11] && 'u' == chunk[i+12] && 't' == chunk[i+13]) {
 positions[246][i] = 1; 
}
}
int starting_indx_247 = pattern_max_len - 18;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('D' == chunk[i] && 'i' == chunk[i+1] && 'U' == chunk[i+2] && 'O' == chunk[i+3] && 'j' == chunk[i+4] && 'x' == chunk[i+5] && 'J' == chunk[i+6] && 't' == chunk[i+7] && 'r' == chunk[i+8] && 'f' == chunk[i+9] && 'B' == chunk[i+10] && 'B' == chunk[i+11] && 'H' == chunk[i+12] && 'a' == chunk[i+13] && 'D' == chunk[i+14] && 'E' == chunk[i+15] && 't' == chunk[i+16] && 'V' == chunk[i+17]) {
 positions[247][i] = 1; 
}
}
int starting_indx_248 = pattern_max_len - 16;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('g' == chunk[i] && 't' == chunk[i+1] && 'H' == chunk[i+2] && 'X' == chunk[i+3] && 'e' == chunk[i+4] && 'p' == chunk[i+5] && 'B' == chunk[i+6] && 'h' == chunk[i+7] && 'g' == chunk[i+8] && 'L' == chunk[i+9] && 'p' == chunk[i+10] && 'P' == chunk[i+11] && 'G' == chunk[i+12] && 'N' == chunk[i+13] && 'y' == chunk[i+14] && 'H' == chunk[i+15]) {
 positions[248][i] = 1; 
}
}
int starting_indx_249 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('R' == chunk[i] && 'R' == chunk[i+1] && 'R' == chunk[i+2] && 'E' == chunk[i+3] && 'H' == chunk[i+4] && 'H' == chunk[i+5] && 'x' == chunk[i+6]) {
 positions[249][i] = 1; 
}
}
int starting_indx_250 = pattern_max_len - 7;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('j' == chunk[i] && 'T' == chunk[i+1] && 'b' == chunk[i+2] && 'b' == chunk[i+3] && 'h' == chunk[i+4] && 'N' == chunk[i+5] && 'z' == chunk[i+6]) {
 positions[250][i] = 1; 
}
}
int starting_indx_251 = pattern_max_len - 14;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('a' == chunk[i] && 'R' == chunk[i+1] && 'D' == chunk[i+2] && 'v' == chunk[i+3] && 'J' == chunk[i+4] && 'o' == chunk[i+5] && 'u' == chunk[i+6] && 'F' == chunk[i+7] && 'q' == chunk[i+8] && 'n' == chunk[i+9] && 'o' == chunk[i+10] && 'F' == chunk[i+11] && 'E' == chunk[i+12] && 'q' == chunk[i+13]) {
 positions[251][i] = 1; 
}
}
int starting_indx_252 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('r' == chunk[i] && 'f' == chunk[i+1] && 'N' == chunk[i+2]) {
 positions[252][i] = 1; 
}
}
int starting_indx_253 = pattern_max_len - 19;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('J' == chunk[i] && 's' == chunk[i+1] && 'T' == chunk[i+2] && 'B' == chunk[i+3] && 'c' == chunk[i+4] && 'Q' == chunk[i+5] && 'D' == chunk[i+6] && 'd' == chunk[i+7] && 'Q' == chunk[i+8] && 'l' == chunk[i+9] && 'd' == chunk[i+10] && 'o' == chunk[i+11] && 'B' == chunk[i+12] && 'H' == chunk[i+13] && 'L' == chunk[i+14] && 'j' == chunk[i+15] && 'n' == chunk[i+16] && 'w' == chunk[i+17] && 'p' == chunk[i+18]) {
 positions[253][i] = 1; 
}
}
int starting_indx_254 = pattern_max_len - 3;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('X' == chunk[i] && 'H' == chunk[i+1] && 'B' == chunk[i+2]) {
 positions[254][i] = 1; 
}
}
int starting_indx_255 = pattern_max_len - 6;
for(int i=starting_indx; i<chunck_len + pattern_max_len - 1; i++){
if('o' == chunk[i] && 'C' == chunk[i+1] && 'P' == chunk[i+2] && 'F' == chunk[i+3] && 'K' == chunk[i+4] && 'Y' == chunk[i+5]) {
 positions[255][i] = 1; 
}
}

}