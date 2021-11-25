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
ap_uint<35>reg_0 = 0;
ap_uint<34>reg_1 = 0;
ap_uint<33>reg_2 = 0;
ap_uint<31>reg_3 = 0;
ap_uint<23>reg_4 = 0;
ap_uint<12>reg_5 = 0;
ap_uint<11>reg_6 = 0;
ap_uint<10>reg_7 = 0;
ap_uint<9>reg_8 = 0;
ap_uint<12>reg_9 = 0;
ap_uint<13>reg_10 = 0;
ap_uint<4>reg_11 = 0;
ap_uint<9>reg_12 = 0;
ap_uint<9>reg_13 = 0;
ap_uint<10>reg_14 = 0;
ap_uint<6>reg_15 = 0;
ap_uint<4>reg_16 = 0;
ap_uint<3>reg_17 = 0;
ap_uint<20>reg_18 = 0;
ap_uint<10>reg_19 = 0;
ap_uint<9>reg_20 = 0;
ap_uint<7>reg_21 = 0;
ap_uint<6>reg_22 = 0;
ap_uint<5>reg_23 = 0;
ap_uint<11>reg_24 = 0;
ap_uint<14>reg_25 = 0;
ap_uint<13>reg_26 = 0;
ap_uint<11>reg_27 = 0;
ap_uint<8>reg_28 = 0;
ap_uint<6>reg_29 = 0;
ap_uint<21>reg_30 = 0;
ap_uint<11>reg_31 = 0;
ap_uint<5>reg_32 = 0;
ap_uint<10>reg_33 = 0;
ap_uint<8>reg_34 = 0;
ap_uint<5>reg_35 = 0;
ap_uint<10>reg_36 = 0;
ap_uint<16>reg_37 = 0;
ap_uint<3>reg_38 = 0;
ap_uint<12>reg_39 = 0;
ap_uint<6>reg_40 = 0;
ap_uint<1>reg_41 = 0;
ap_uint<7>reg_42 = 0;
ap_uint<2>reg_43 = 0;
ap_uint<10>reg_44 = 0;
ap_uint<3>reg_45 = 0;
ap_uint<8>reg_46 = 0;
ap_uint<6>reg_47 = 0;
ap_uint<3>reg_48 = 0;
ap_uint<14>reg_49 = 0;
ap_uint<15>reg_50 = 0;
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
reg_0 >> 1;
reg_0(34, 34) = ('2' == buffer[buffer_size - chunk_len]);
reg_1 >> 1;
reg_1(33, 33) = ('|' == buffer[buffer_size - chunk_len]);
reg_2 >> 1;
reg_2(32, 32) = ('0' == buffer[buffer_size - chunk_len]);
reg_3 >> 1;
reg_3(30, 30) = (' ' == buffer[buffer_size - chunk_len]);
reg_4 >> 1;
reg_4(22, 22) = ('6' == buffer[buffer_size - chunk_len]);
reg_5 >> 1;
reg_5(11, 11) = ('D' == buffer[buffer_size - chunk_len]);
reg_6 >> 1;
reg_6(10, 10) = ('r' == buffer[buffer_size - chunk_len]);
reg_7 >> 1;
reg_7(9, 9) = ('i' == buffer[buffer_size - chunk_len]);
reg_8 >> 1;
reg_8(8, 8) = ('v' == buffer[buffer_size - chunk_len]);
reg_9 >> 1;
reg_9(11, 11) = ('e' == buffer[buffer_size - chunk_len]);
reg_10 >> 1;
reg_10(12, 12) = ('s' == buffer[buffer_size - chunk_len]);
reg_11 >> 1;
reg_11(3, 3) = ('4' == buffer[buffer_size - chunk_len]);
reg_12 >> 1;
reg_12(8, 8) = ('q' == buffer[buffer_size - chunk_len]);
reg_13 >> 1;
reg_13(8, 8) = ('a' == buffer[buffer_size - chunk_len]);
reg_14 >> 1;
reg_14(9, 9) = ('z' == buffer[buffer_size - chunk_len]);
reg_15 >> 1;
reg_15(5, 5) = ('w' == buffer[buffer_size - chunk_len]);
reg_16 >> 1;
reg_16(3, 3) = ('x' == buffer[buffer_size - chunk_len]);
reg_17 >> 1;
reg_17(2, 2) = ('.' == buffer[buffer_size - chunk_len]);
reg_18 >> 1;
reg_18(19, 19) = ('h' == buffer[buffer_size - chunk_len]);
reg_19 >> 1;
reg_19(9, 9) = ('G' == buffer[buffer_size - chunk_len]);
reg_20 >> 1;
reg_20(8, 8) = ('t' == buffer[buffer_size - chunk_len]);
reg_21 >> 1;
reg_21(6, 6) = ('I' == buffer[buffer_size - chunk_len]);
reg_22 >> 1;
reg_22(5, 5) = ('n' == buffer[buffer_size - chunk_len]);
reg_23 >> 1;
reg_23(4, 4) = ('f' == buffer[buffer_size - chunk_len]);
reg_24 >> 1;
reg_24(10, 10) = ('o' == buffer[buffer_size - chunk_len]);
reg_25 >> 1;
reg_25(13, 13) = ('B' == buffer[buffer_size - chunk_len]);
reg_26 >> 1;
reg_26(12, 12) = ('N' == buffer[buffer_size - chunk_len]);
reg_27 >> 1;
reg_27(10, 10) = ('1' == buffer[buffer_size - chunk_len]);
reg_28 >> 1;
reg_28(7, 7) = ('W' == buffer[buffer_size - chunk_len]);
reg_29 >> 1;
reg_29(5, 5) = ('H' == buffer[buffer_size - chunk_len]);
reg_30 >> 1;
reg_30(20, 20) = ('A' == buffer[buffer_size - chunk_len]);
reg_31 >> 1;
reg_31(10, 10) = ('T' == buffer[buffer_size - chunk_len]);
reg_32 >> 1;
reg_32(4, 4) = ('S' == buffer[buffer_size - chunk_len]);
reg_33 >> 1;
reg_33(9, 9) = ('R' == buffer[buffer_size - chunk_len]);
reg_34 >> 1;
reg_34(7, 7) = ('m' == buffer[buffer_size - chunk_len]);
reg_35 >> 1;
reg_35(4, 4) = ('3' == buffer[buffer_size - chunk_len]);
reg_36 >> 1;
reg_36(9, 9) = ('u' == buffer[buffer_size - chunk_len]);
reg_37 >> 1;
reg_37(15, 15) = ('p' == buffer[buffer_size - chunk_len]);
reg_38 >> 1;
reg_38(2, 2) = ('U' == buffer[buffer_size - chunk_len]);
reg_39 >> 1;
reg_39(11, 11) = ('F' == buffer[buffer_size - chunk_len]);
reg_40 >> 1;
reg_40(5, 5) = ('C' == buffer[buffer_size - chunk_len]);
reg_41 >> 1;
reg_41(0, 0) = ('E' == buffer[buffer_size - chunk_len]);
reg_42 >> 1;
reg_42(6, 6) = ('c' == buffer[buffer_size - chunk_len]);
reg_43 >> 1;
reg_43(1, 1) = ('5' == buffer[buffer_size - chunk_len]);
reg_44 >> 1;
reg_44(9, 9) = ('P' == buffer[buffer_size - chunk_len]);
reg_45 >> 1;
reg_45(2, 2) = ('O' == buffer[buffer_size - chunk_len]);
reg_46 >> 1;
reg_46(7, 7) = ('l' == buffer[buffer_size - chunk_len]);
reg_47 >> 1;
reg_47(5, 5) = ('g' == buffer[buffer_size - chunk_len]);
reg_48 >> 1;
reg_48(2, 2) = ('d' == buffer[buffer_size - chunk_len]);
reg_49 >> 1;
reg_49(13, 13) = ('y' == buffer[buffer_size - chunk_len]);
reg_50 >> 1;
reg_50(14, 14) = ('M' == buffer[buffer_size - chunk_len]);
if(reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_5(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 0;
}
if(reg_12(0,0) && reg_13(0,0) && reg_14(0,0) && reg_15(0,0) && reg_10(0,0) && reg_16(0,0) && reg_17(0,0) && reg_18(0,0) && reg_10(0,0) && reg_12(0,0)) {
matched = true;
pattern_id = 1;
}
if(reg_19(0,0) && reg_9(0,0) && reg_20(0,0) && reg_21(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2;
}
if(reg_25(0,0) && reg_26(0,0) && reg_1(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 3;
}
if(reg_28(0,0) && reg_29(0,0) && reg_30(0,0) && reg_31(0,0) && reg_21(0,0) && reg_32(0,0) && reg_21(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 4;
}
if(reg_33(0,0) && reg_9(0,0) && reg_34(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 5;
}
if(reg_28(0,0) && reg_20(0,0) && reg_14(0,0) && reg_36(0,0) && reg_37(0,0) && reg_3(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 6;
}
if(reg_39(0,0) && reg_40(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 7;
}
if(reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 8;
}
if(reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 9;
}
if(reg_26(0,0) && reg_9(0,0) && reg_20(0,0) && reg_32(0,0) && reg_37(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 10;
}
if(reg_19(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_40(0,0) && reg_6(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 11;
}
if(reg_42(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 12;
}
if(reg_39(0,0) && reg_31(0,0) && reg_44(0,0) && reg_45(0,0) && reg_26(0,0)) {
matched = true;
pattern_id = 13;
}
if(reg_39(0,0) && reg_31(0,0) && reg_44(0,0) && reg_3(0,0) && reg_44(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_3(0,0) && reg_24(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 14;
}
if(reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 15;
}
if(reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_48(0,0) && reg_3(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 16;
}
if(reg_1(0,0) && reg_25(0,0) && reg_11(0,0) && reg_3(0,0) && reg_25(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 17;
}
if(reg_49(0,0) && reg_37(0,0) && reg_7(0,0) && reg_2(0,0) && reg_42(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 18;
}
if(reg_30(0,0) && reg_18(0,0) && reg_18(0,0) && reg_18(0,0) && reg_18(0,0) && reg_3(0,0) && reg_50(0,0) && reg_49(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_3(0,0) && reg_21(0,0) && reg_10(0,0) && reg_3(0,0) && reg_45(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 19;
}
if(reg_37(0,0) && reg_18(0,0) && reg_30(0,0) && reg_10(0,0) && reg_9(0,0) && reg_3(0,0) && reg_14(0,0) && reg_9(0,0) && reg_6(0,0) && reg_24(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 20;
}
if(reg_15(0,0) && reg_2(0,0) && reg_2(0,0) && reg_15(0,0) && reg_2(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 21;
}

}