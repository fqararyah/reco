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
ap_uint<43>reg_0 = 0;
ap_uint<83>reg_1 = 0;
ap_uint<82>reg_2 = 0;
ap_uint<80>reg_3 = 0;
ap_uint<46>reg_4 = 0;
ap_uint<69>reg_5 = 0;
ap_uint<85>reg_6 = 0;
ap_uint<104>reg_7 = 0;
ap_uint<24>reg_8 = 0;
ap_uint<97>reg_9 = 0;
ap_uint<103>reg_10 = 0;
ap_uint<42>reg_11 = 0;
ap_uint<23>reg_12 = 0;
ap_uint<90>reg_13 = 0;
ap_uint<25>reg_14 = 0;
ap_uint<60>reg_15 = 0;
ap_uint<65>reg_16 = 0;
ap_uint<13>reg_17 = 0;
ap_uint<105>reg_18 = 0;
ap_uint<43>reg_19 = 0;
ap_uint<106>reg_20 = 0;
ap_uint<28>reg_21 = 0;
ap_uint<76>reg_22 = 0;
ap_uint<87>reg_23 = 0;
ap_uint<99>reg_24 = 0;
ap_uint<58>reg_25 = 0;
ap_uint<30>reg_26 = 0;
ap_uint<47>reg_27 = 0;
ap_uint<70>reg_28 = 0;
ap_uint<75>reg_29 = 0;
ap_uint<59>reg_30 = 0;
ap_uint<25>reg_31 = 0;
ap_uint<27>reg_32 = 0;
ap_uint<24>reg_33 = 0;
ap_uint<98>reg_34 = 0;
ap_uint<50>reg_35 = 0;
ap_uint<45>reg_36 = 0;
ap_uint<93>reg_37 = 0;
ap_uint<17>reg_38 = 0;
ap_uint<41>reg_39 = 0;
ap_uint<83>reg_40 = 0;
ap_uint<39>reg_41 = 0;
ap_uint<89>reg_42 = 0;
ap_uint<34>reg_43 = 0;
ap_uint<19>reg_44 = 0;
ap_uint<43>reg_45 = 0;
ap_uint<50>reg_46 = 0;
ap_uint<26>reg_47 = 0;
ap_uint<74>reg_48 = 0;
ap_uint<69>reg_49 = 0;
ap_uint<30>reg_50 = 0;
ap_uint<46>reg_51 = 0;
ap_uint<78>reg_52 = 0;
ap_uint<40>reg_53 = 0;
ap_uint<75>reg_54 = 0;
ap_uint<6>reg_55 = 0;
ap_uint<27>reg_56 = 0;
ap_uint<14>reg_57 = 0;
ap_uint<25>reg_58 = 0;
ap_uint<7>reg_59 = 0;
ap_uint<78>reg_60 = 0;
ap_uint<80>reg_61 = 0;
ap_uint<67>reg_62 = 0;
ap_uint<28>reg_63 = 0;
ap_uint<77>reg_64 = 0;
ap_uint<37>reg_65 = 0;
ap_uint<19>reg_66 = 0;
ap_uint<21>reg_67 = 0;
ap_uint<20>reg_68 = 0;
ap_uint<16>reg_69 = 0;
ap_uint<31>reg_70 = 0;
ap_uint<37>reg_71 = 0;
ap_uint<35>reg_72 = 0;
ap_uint<64>reg_73 = 0;
ap_uint<22>reg_74 = 0;
ap_uint<18>reg_75 = 0;
ap_uint<70>reg_76 = 0;
ap_uint<22>reg_77 = 0;
ap_uint<15>reg_78 = 0;
ap_uint<8>reg_79 = 0;
ap_uint<13>reg_80 = 0;
ap_uint<5>reg_81 = 0;
ap_uint<3>reg_82 = 0;
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
reg_0 >> 1;
reg_0(42, 42) = ('2' == buffer[buffer_size - chunk_len]);
reg_1 >> 1;
reg_1(82, 82) = ('|' == buffer[buffer_size - chunk_len]);
reg_2 >> 1;
reg_2(81, 81) = ('0' == buffer[buffer_size - chunk_len]);
reg_3 >> 1;
reg_3(79, 79) = (' ' == buffer[buffer_size - chunk_len]);
reg_4 >> 1;
reg_4(45, 45) = ('6' == buffer[buffer_size - chunk_len]);
reg_5 >> 1;
reg_5(68, 68) = ('D' == buffer[buffer_size - chunk_len]);
reg_6 >> 1;
reg_6(84, 84) = ('r' == buffer[buffer_size - chunk_len]);
reg_7 >> 1;
reg_7(103, 103) = ('i' == buffer[buffer_size - chunk_len]);
reg_8 >> 1;
reg_8(23, 23) = ('v' == buffer[buffer_size - chunk_len]);
reg_9 >> 1;
reg_9(96, 96) = ('e' == buffer[buffer_size - chunk_len]);
reg_10 >> 1;
reg_10(102, 102) = ('s' == buffer[buffer_size - chunk_len]);
reg_11 >> 1;
reg_11(41, 41) = ('4' == buffer[buffer_size - chunk_len]);
reg_12 >> 1;
reg_12(22, 22) = ('q' == buffer[buffer_size - chunk_len]);
reg_13 >> 1;
reg_13(89, 89) = ('a' == buffer[buffer_size - chunk_len]);
reg_14 >> 1;
reg_14(24, 24) = ('z' == buffer[buffer_size - chunk_len]);
reg_15 >> 1;
reg_15(59, 59) = ('w' == buffer[buffer_size - chunk_len]);
reg_16 >> 1;
reg_16(64, 64) = ('x' == buffer[buffer_size - chunk_len]);
reg_17 >> 1;
reg_17(12, 12) = ('.' == buffer[buffer_size - chunk_len]);
reg_18 >> 1;
reg_18(104, 104) = ('h' == buffer[buffer_size - chunk_len]);
reg_19 >> 1;
reg_19(42, 42) = ('G' == buffer[buffer_size - chunk_len]);
reg_20 >> 1;
reg_20(105, 105) = ('t' == buffer[buffer_size - chunk_len]);
reg_21 >> 1;
reg_21(27, 27) = ('I' == buffer[buffer_size - chunk_len]);
reg_22 >> 1;
reg_22(75, 75) = ('n' == buffer[buffer_size - chunk_len]);
reg_23 >> 1;
reg_23(86, 86) = ('f' == buffer[buffer_size - chunk_len]);
reg_24 >> 1;
reg_24(98, 98) = ('o' == buffer[buffer_size - chunk_len]);
reg_25 >> 1;
reg_25(57, 57) = ('B' == buffer[buffer_size - chunk_len]);
reg_26 >> 1;
reg_26(29, 29) = ('N' == buffer[buffer_size - chunk_len]);
reg_27 >> 1;
reg_27(46, 46) = ('1' == buffer[buffer_size - chunk_len]);
reg_28 >> 1;
reg_28(69, 69) = ('W' == buffer[buffer_size - chunk_len]);
reg_29 >> 1;
reg_29(74, 74) = ('H' == buffer[buffer_size - chunk_len]);
reg_30 >> 1;
reg_30(58, 58) = ('A' == buffer[buffer_size - chunk_len]);
reg_31 >> 1;
reg_31(24, 24) = ('T' == buffer[buffer_size - chunk_len]);
reg_32 >> 1;
reg_32(26, 26) = ('S' == buffer[buffer_size - chunk_len]);
reg_33 >> 1;
reg_33(23, 23) = ('R' == buffer[buffer_size - chunk_len]);
reg_34 >> 1;
reg_34(97, 97) = ('m' == buffer[buffer_size - chunk_len]);
reg_35 >> 1;
reg_35(49, 49) = ('3' == buffer[buffer_size - chunk_len]);
reg_36 >> 1;
reg_36(44, 44) = ('u' == buffer[buffer_size - chunk_len]);
reg_37 >> 1;
reg_37(92, 92) = ('p' == buffer[buffer_size - chunk_len]);
reg_38 >> 1;
reg_38(16, 16) = ('U' == buffer[buffer_size - chunk_len]);
reg_39 >> 1;
reg_39(40, 40) = ('F' == buffer[buffer_size - chunk_len]);
reg_40 >> 1;
reg_40(82, 82) = ('C' == buffer[buffer_size - chunk_len]);
reg_41 >> 1;
reg_41(38, 38) = ('E' == buffer[buffer_size - chunk_len]);
reg_42 >> 1;
reg_42(88, 88) = ('c' == buffer[buffer_size - chunk_len]);
reg_43 >> 1;
reg_43(33, 33) = ('5' == buffer[buffer_size - chunk_len]);
reg_44 >> 1;
reg_44(18, 18) = ('P' == buffer[buffer_size - chunk_len]);
reg_45 >> 1;
reg_45(42, 42) = ('O' == buffer[buffer_size - chunk_len]);
reg_46 >> 1;
reg_46(49, 49) = ('l' == buffer[buffer_size - chunk_len]);
reg_47 >> 1;
reg_47(25, 25) = ('g' == buffer[buffer_size - chunk_len]);
reg_48 >> 1;
reg_48(73, 73) = ('d' == buffer[buffer_size - chunk_len]);
reg_49 >> 1;
reg_49(68, 68) = ('y' == buffer[buffer_size - chunk_len]);
reg_50 >> 1;
reg_50(29, 29) = ('M' == buffer[buffer_size - chunk_len]);
reg_51 >> 1;
reg_51(45, 45) = ('b' == buffer[buffer_size - chunk_len]);
reg_52 >> 1;
reg_52(77, 77) = ('k' == buffer[buffer_size - chunk_len]);
reg_53 >> 1;
reg_53(39, 39) = ('!' == buffer[buffer_size - chunk_len]);
reg_54 >> 1;
reg_54(74, 74) = ('[' == buffer[buffer_size - chunk_len]);
reg_55 >> 1;
reg_55(5, 5) = ('*' == buffer[buffer_size - chunk_len]);
reg_56 >> 1;
reg_56(26, 26) = ('L' == buffer[buffer_size - chunk_len]);
reg_57 >> 1;
reg_57(13, 13) = ('j' == buffer[buffer_size - chunk_len]);
reg_58 >> 1;
reg_58(24, 24) = ('/' == buffer[buffer_size - chunk_len]);
reg_59 >> 1;
reg_59(6, 6) = ('>' == buffer[buffer_size - chunk_len]);
reg_60 >> 1;
reg_60(77, 77) = ('8' == buffer[buffer_size - chunk_len]);
reg_61 >> 1;
reg_61(79, 79) = ('7' == buffer[buffer_size - chunk_len]);
reg_62 >> 1;
reg_62(66, 66) = ('K' == buffer[buffer_size - chunk_len]);
reg_63 >> 1;
reg_63(27, 27) = ('?' == buffer[buffer_size - chunk_len]);
reg_64 >> 1;
reg_64(76, 76) = ('9' == buffer[buffer_size - chunk_len]);
reg_65 >> 1;
reg_65(36, 36) = ('^' == buffer[buffer_size - chunk_len]);
reg_66 >> 1;
reg_66(18, 18) = ('<' == buffer[buffer_size - chunk_len]);
reg_67 >> 1;
reg_67(20, 20) = ('+' == buffer[buffer_size - chunk_len]);
reg_68 >> 1;
reg_68(19, 19) = ('Q' == buffer[buffer_size - chunk_len]);
reg_69 >> 1;
reg_69(15, 15) = ('~' == buffer[buffer_size - chunk_len]);
reg_70 >> 1;
reg_70(30, 30) = (']' == buffer[buffer_size - chunk_len]);
reg_71 >> 1;
reg_71(36, 36) = ('@' == buffer[buffer_size - chunk_len]);
reg_72 >> 1;
reg_72(34, 34) = ('V' == buffer[buffer_size - chunk_len]);
reg_73 >> 1;
reg_73(63, 63) = ('_' == buffer[buffer_size - chunk_len]);
reg_74 >> 1;
reg_74(21, 21) = ('J' == buffer[buffer_size - chunk_len]);
reg_75 >> 1;
reg_75(17, 17) = ('X' == buffer[buffer_size - chunk_len]);
reg_76 >> 1;
reg_76(69, 69) = ('%' == buffer[buffer_size - chunk_len]);
reg_77 >> 1;
reg_77(21, 21) = ('-' == buffer[buffer_size - chunk_len]);
reg_78 >> 1;
reg_78(14, 14) = ('=' == buffer[buffer_size - chunk_len]);
reg_79 >> 1;
reg_79(7, 7) = (',' == buffer[buffer_size - chunk_len]);
reg_80 >> 1;
reg_80(12, 12) = ('Y' == buffer[buffer_size - chunk_len]);
reg_81 >> 1;
reg_81(4, 4) = ('`' == buffer[buffer_size - chunk_len]);
reg_82 >> 1;
reg_82(2, 2) = ('\'' == buffer[buffer_size - chunk_len]);
if(reg_0(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_5(0, 0) && reg_6(0, 0) && reg_7(0, 0) && reg_8(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 0;
}
if(reg_12(0, 0) && reg_13(0, 0) && reg_14(0, 0) && reg_15(0, 0) && reg_10(0, 0) && reg_16(0, 0) && reg_17(0, 0) && reg_18(0, 0) && reg_10(0, 0) && reg_12(0, 0)) {
matched = true;
pattern_id = 1;
}
if(reg_19(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_21(0, 0) && reg_22(0, 0) && reg_23(0, 0) && reg_24(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_5(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 2;
}
if(reg_25(0, 0) && reg_26(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 3;
}
if(reg_28(0, 0) && reg_29(0, 0) && reg_30(0, 0) && reg_31(0, 0) && reg_21(0, 0) && reg_32(0, 0) && reg_21(0, 0) && reg_31(0, 0)) {
matched = true;
pattern_id = 4;
}
if(reg_33(0, 0) && reg_9(0, 0) && reg_34(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 5;
}
if(reg_28(0, 0) && reg_20(0, 0) && reg_14(0, 0) && reg_36(0, 0) && reg_37(0, 0) && reg_3(0, 0) && reg_38(0, 0) && reg_10(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 6;
}
if(reg_39(0, 0) && reg_40(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 7;
}
if(reg_18(0, 0) && reg_24(0, 0) && reg_10(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 8;
}
if(reg_38(0, 0) && reg_32(0, 0) && reg_41(0, 0) && reg_33(0, 0)) {
matched = true;
pattern_id = 9;
}
if(reg_26(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_32(0, 0) && reg_37(0, 0) && reg_18(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 10;
}
if(reg_19(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_40(0, 0) && reg_6(0, 0) && reg_13(0, 0) && reg_10(0, 0) && reg_18(0, 0) && reg_9(0, 0) && reg_6(0, 0)) {
matched = true;
pattern_id = 11;
}
if(reg_42(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_43(0, 0) && reg_40(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 12;
}
if(reg_39(0, 0) && reg_31(0, 0) && reg_44(0, 0) && reg_45(0, 0) && reg_26(0, 0)) {
matched = true;
pattern_id = 13;
}
if(reg_39(0, 0) && reg_31(0, 0) && reg_44(0, 0) && reg_3(0, 0) && reg_44(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_20(0, 0) && reg_3(0, 0) && reg_24(0, 0) && reg_37(0, 0) && reg_9(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 14;
}
if(reg_13(0, 0) && reg_42(0, 0) && reg_20(0, 0) && reg_7(0, 0) && reg_8(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 15;
}
if(reg_46(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_47(0, 0) && reg_9(0, 0) && reg_48(0, 0) && reg_3(0, 0) && reg_7(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 16;
}
if(reg_1(0, 0) && reg_25(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_11(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 17;
}
if(reg_49(0, 0) && reg_37(0, 0) && reg_7(0, 0) && reg_2(0, 0) && reg_42(0, 0) && reg_13(0, 0)) {
matched = true;
pattern_id = 18;
}
if(reg_30(0, 0) && reg_18(0, 0) && reg_18(0, 0) && reg_18(0, 0) && reg_18(0, 0) && reg_3(0, 0) && reg_50(0, 0) && reg_49(0, 0) && reg_3(0, 0) && reg_50(0, 0) && reg_24(0, 0) && reg_36(0, 0) && reg_20(0, 0) && reg_18(0, 0) && reg_3(0, 0) && reg_21(0, 0) && reg_10(0, 0) && reg_3(0, 0) && reg_45(0, 0) && reg_37(0, 0) && reg_9(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 19;
}
if(reg_37(0, 0) && reg_18(0, 0) && reg_30(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_3(0, 0) && reg_14(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_3(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_8(0, 0) && reg_9(0, 0) && reg_6(0, 0)) {
matched = true;
pattern_id = 20;
}
if(reg_15(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_15(0, 0) && reg_2(0, 0) && reg_2(0, 0)) {
matched = true;
pattern_id = 21;
}
if(reg_51(0, 0) && reg_13(0, 0) && reg_42(0, 0) && reg_52(0, 0) && reg_48(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_6(0, 0)) {
matched = true;
pattern_id = 22;
}
if(reg_6(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 23;
}
if(reg_6(0, 0) && reg_9(0, 0) && reg_15(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 24;
}
if(reg_15(0, 0) && reg_18(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_20(0, 0) && reg_53(0, 0)) {
matched = true;
pattern_id = 25;
}
if(reg_46(0, 0) && reg_6(0, 0) && reg_52(0, 0) && reg_6(0, 0) && reg_2(0, 0) && reg_16(0, 0)) {
matched = true;
pattern_id = 26;
}
if(reg_48(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_18(0, 0) && reg_18(0, 0) && reg_54(0, 0)) {
matched = true;
pattern_id = 27;
}
if(reg_10(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 28;
}
if(reg_18(0, 0) && reg_13(0, 0) && reg_16(0, 0) && reg_2(0, 0) && reg_6(0, 0)) {
matched = true;
pattern_id = 29;
}
if(reg_23(0, 0) && reg_6(0, 0) && reg_7(0, 0) && reg_48(0, 0) && reg_13(0, 0) && reg_49(0, 0)) {
matched = true;
pattern_id = 30;
}
if(reg_32(0, 0) && reg_20(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_33(0, 0)) {
matched = true;
pattern_id = 31;
}
if(reg_15(0, 0) && reg_13(0, 0) && reg_22(0, 0) && reg_52(0, 0)) {
matched = true;
pattern_id = 32;
}
if(reg_27(0, 0) && reg_0(0, 0) && reg_35(0, 0) && reg_11(0, 0)) {
matched = true;
pattern_id = 33;
}
if(reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0)) {
matched = true;
pattern_id = 34;
}
if(reg_44(0, 0) && reg_45(0, 0) && reg_26(0, 0) && reg_19(0, 0)) {
matched = true;
pattern_id = 35;
}
if(reg_10(0, 0) && reg_7(0, 0) && reg_42(0, 0) && reg_52(0, 0) && reg_9(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 36;
}
if(reg_23(0, 0) && reg_7(0, 0) && reg_42(0, 0) && reg_52(0, 0) && reg_9(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 37;
}
if(reg_10(0, 0) && reg_37(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_23(0, 0) && reg_15(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_52(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 38;
}
if(reg_10(0, 0) && reg_52(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_46(0, 0) && reg_14(0, 0)) {
matched = true;
pattern_id = 39;
}
if(reg_46(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 40;
}
if(reg_46(0, 0) && reg_11(0, 0) && reg_11(0, 0)) {
matched = true;
pattern_id = 41;
}
if(reg_55(0, 0) && reg_29(0, 0) && reg_41(0, 0) && reg_56(0, 0) && reg_56(0, 0) && reg_45(0, 0) && reg_55(0, 0)) {
matched = true;
pattern_id = 42;
}
if(reg_51(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_13(0, 0) && reg_13(0, 0) && reg_46(0, 0) && reg_34(0, 0) && reg_24(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_48(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 43;
}
if(reg_47(0, 0) && reg_45(0, 0) && reg_6(0, 0) && reg_13(0, 0) && reg_8(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 44;
}
if(reg_52(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_46(0, 0) && reg_34(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 45;
}
if(reg_47(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_36(0, 0) && reg_22(0, 0) && reg_48(0, 0) && reg_18(0, 0) && reg_9(0, 0) && reg_7(0, 0) && reg_20(0, 0) && reg_53(0, 0)) {
matched = true;
pattern_id = 46;
}
if(reg_46(0, 0) && reg_11(0, 0) && reg_11(0, 0) && reg_13(0, 0) && reg_48(0, 0) && reg_10(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 47;
}
if(reg_10(0, 0) && reg_18(0, 0) && reg_9(0, 0) && reg_46(0, 0) && reg_46(0, 0) && reg_3(0, 0) && reg_51(0, 0) && reg_24(0, 0) && reg_36(0, 0) && reg_22(0, 0) && reg_48(0, 0)) {
matched = true;
pattern_id = 48;
}
if(reg_13(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_8(0, 0) && reg_9(0, 0) && reg_3(0, 0) && reg_20(0, 0) && reg_7(0, 0) && reg_57(0, 0) && reg_47(0, 0) && reg_36(0, 0)) {
matched = true;
pattern_id = 49;
}
if(reg_13(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_8(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 50;
}
if(reg_22(0, 0) && reg_9(0, 0) && reg_15(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_8(0, 0) && reg_9(0, 0) && reg_6(0, 0)) {
matched = true;
pattern_id = 51;
}
if(reg_10(0, 0) && reg_20(0, 0) && reg_6(0, 0) && reg_9(0, 0) && reg_13(0, 0) && reg_34(0, 0) && reg_58(0, 0)) {
matched = true;
pattern_id = 52;
}
if(reg_37(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_47(0, 0)) {
matched = true;
pattern_id = 53;
}
if(reg_37(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_47(0, 0)) {
matched = true;
pattern_id = 54;
}
if(reg_59(0, 0)) {
matched = true;
pattern_id = 55;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 56;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 57;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 58;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_1(0, 0) && reg_13(0, 0) && reg_36(0, 0) && reg_20(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 59;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_1(0, 0) && reg_8(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_10(0, 0) && reg_7(0, 0) && reg_24(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 60;
}
if(reg_17(0, 0) && reg_17(0, 0) && reg_58(0, 0) && reg_17(0, 0) && reg_17(0, 0) && reg_58(0, 0) && reg_17(0, 0) && reg_17(0, 0) && reg_58(0, 0)) {
matched = true;
pattern_id = 61;
}
if(reg_20(0, 0) && reg_18(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_34(0, 0) && reg_37(0, 0) && reg_10(0, 0) && reg_37(0, 0) && reg_13(0, 0) && reg_42(0, 0) && reg_9(0, 0) && reg_23(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_20(0, 0) && reg_18(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_24(0, 0) && reg_42(0, 0) && reg_52(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_13(0, 0) && reg_48(0, 0) && reg_48(0, 0) && reg_6(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_49(0, 0) && reg_9(0, 0) && reg_13(0, 0) && reg_18(0, 0) && reg_49(0, 0) && reg_9(0, 0) && reg_13(0, 0) && reg_18(0, 0) && reg_7(0, 0) && reg_52(0, 0) && reg_22(0, 0) && reg_24(0, 0) && reg_15(0, 0) && reg_20(0, 0) && reg_18(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_46(0, 0) && reg_13(0, 0) && reg_34(0, 0) && reg_9(0, 0) && reg_51(0, 0) && reg_36(0, 0) && reg_20(0, 0) && reg_13(0, 0) && reg_22(0, 0) && reg_49(0, 0) && reg_15(0, 0) && reg_13(0, 0) && reg_49(0, 0) && reg_15(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_42(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_7(0, 0) && reg_14(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_47(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_7(0, 0) && reg_20(0, 0) && reg_15(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_52(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_47(0, 0) && reg_10(0, 0) && reg_24(0, 0) && reg_13(0, 0) && reg_46(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 62;
}
if(reg_30(0, 0) && reg_5(0, 0) && reg_50(0, 0) && reg_33(0, 0) && reg_45(0, 0) && reg_40(0, 0) && reg_62(0, 0) && reg_32(0, 0)) {
matched = true;
pattern_id = 63;
}
if(reg_1(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_58(0, 0) && reg_10(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 64;
}
if(reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_63(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_5(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 65;
}
if(reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_36(0, 0) && reg_56(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_56(0, 0) && reg_65(0, 0) && reg_1(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 66;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_0(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_66(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_41(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 67;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_22(0, 0) && reg_65(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_26(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_4(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_43(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 68;
}
if(reg_1(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_0(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_60(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 69;
}
if(reg_67(0, 0) && reg_67(0, 0) && reg_67(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 70;
}
if(reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 71;
}
if(reg_58(0, 0) && reg_8(0, 0) && reg_7(0, 0) && reg_9(0, 0) && reg_15(0, 0) && reg_10(0, 0) && reg_24(0, 0) && reg_36(0, 0) && reg_6(0, 0) && reg_42(0, 0) && reg_9(0, 0) && reg_58(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_34(0, 0) && reg_37(0, 0) && reg_46(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_17(0, 0) && reg_18(0, 0) && reg_20(0, 0) && reg_34(0, 0) && reg_46(0, 0) && reg_63(0, 0)) {
matched = true;
pattern_id = 72;
}
if(reg_26(0, 0) && reg_30(0, 0) && reg_50(0, 0) && reg_41(0, 0) && reg_26(0, 0) && reg_30(0, 0) && reg_50(0, 0) && reg_41(0, 0)) {
matched = true;
pattern_id = 73;
}
if(reg_35(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_63(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_1(0, 0) && reg_68(0, 0) && reg_66(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_19(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_44(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_44(0, 0)) {
matched = true;
pattern_id = 74;
}
if(reg_65(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_41(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_5(0, 0) && reg_1(0, 0) && reg_69(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_41(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_64(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 75;
}
if(reg_18(0, 0) && reg_70(0, 0) && reg_65(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_23(0, 0) && reg_27(0, 0)) {
matched = true;
pattern_id = 76;
}
if(reg_1(0, 0) && reg_5(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_58(0, 0) && reg_10(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 77;
}
if(reg_72(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_41(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_5(0, 0) && reg_1(0, 0) && reg_69(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_64(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 78;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_58(0, 0) && reg_10(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 79;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_74(0, 0) && reg_65(0, 0) && reg_1(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_59(0, 0) && reg_1(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 80;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_0(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_65(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_4(0, 0)) {
matched = true;
pattern_id = 81;
}
if(reg_40(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_54(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_5(0, 0) && reg_1(0, 0) && reg_62(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_41(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_58(0, 0) && reg_10(0, 0) && reg_18(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 82;
}
if(reg_75(0, 0) && reg_75(0, 0) && reg_75(0, 0) && reg_75(0, 0) && reg_76(0, 0) && reg_17(0, 0) && reg_27(0, 0) && reg_61(0, 0) && reg_0(0, 0) && reg_36(0, 0) && reg_76(0, 0) && reg_35(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_11(0, 0) && reg_1(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 83;
}
if(reg_1(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_13(0, 0)) {
matched = true;
pattern_id = 84;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_61(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_70(0, 0) && reg_38(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_41(0, 0) && reg_1(0, 0) && reg_50(0, 0) && reg_1(0, 0) && reg_64(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_41(0, 0) && reg_1(0, 0) && reg_50(0, 0) && reg_1(0, 0) && reg_64(0, 0) && reg_25(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 85;
}
if(reg_15(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_58(0, 0)) {
matched = true;
pattern_id = 86;
}
if(reg_19(0, 0) && reg_41(0, 0) && reg_31(0, 0) && reg_3(0, 0) && reg_58(0, 0) && reg_3(0, 0) && reg_29(0, 0) && reg_31(0, 0) && reg_31(0, 0) && reg_44(0, 0) && reg_58(0, 0) && reg_27(0, 0) && reg_17(0, 0) && reg_27(0, 0)) {
matched = true;
pattern_id = 87;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_62(0, 0) && reg_54(0, 0) && reg_32(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_62(0, 0) && reg_1(0, 0) && reg_60(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_0(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_44(0, 0) && reg_15(0, 0)) {
matched = true;
pattern_id = 88;
}
if(reg_1(0, 0) && reg_25(0, 0) && reg_11(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_25(0, 0) && reg_11(0, 0) && reg_1(0, 0) && reg_53(0, 0) && reg_1(0, 0) && reg_60(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_23(0, 0) && reg_1(0, 0) && reg_25(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 89;
}
if(reg_23(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 90;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_54(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_67(0, 0)) {
matched = true;
pattern_id = 91;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_60(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 92;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_63(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 93;
}
if(reg_65(0, 0) && reg_1(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_41(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_39(0, 0)) {
matched = true;
pattern_id = 94;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_72(0, 0) && reg_65(0, 0) && reg_72(0, 0) && reg_72(0, 0) && reg_72(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_5(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_72(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_72(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_41(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 95;
}
if(reg_1(0, 0) && reg_41(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_65(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 96;
}
if(reg_42(0, 0) && reg_34(0, 0) && reg_48(0, 0) && reg_73(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_10(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 97;
}
if(reg_13(0, 0) && reg_3(0, 0) && reg_51(0, 0) && reg_3(0, 0) && reg_42(0, 0) && reg_3(0, 0) && reg_48(0, 0) && reg_3(0, 0) && reg_9(0, 0) && reg_3(0, 0) && reg_23(0, 0)) {
matched = true;
pattern_id = 98;
}
if(reg_10(0, 0) && reg_9(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_42(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 99;
}
if(reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 100;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 101;
}
if(reg_1(0, 0) && reg_35(0, 0) && reg_25(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 102;
}
if(reg_1(0, 0) && reg_61(0, 0) && reg_40(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 103;
}
if(reg_71(0, 0) && reg_71(0, 0)) {
matched = true;
pattern_id = 104;
}
if(reg_71(0, 0)) {
matched = true;
pattern_id = 105;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 106;
}
if(reg_2(0, 0)) {
matched = true;
pattern_id = 107;
}
if(reg_17(0, 0)) {
matched = true;
pattern_id = 108;
}
if(reg_17(0, 0) && reg_23(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_15(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_48(0, 0)) {
matched = true;
pattern_id = 109;
}
if(reg_17(0, 0) && reg_6(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 110;
}
if(reg_40(0, 0) && reg_28(0, 0) && reg_5(0, 0)) {
matched = true;
pattern_id = 111;
}
if(reg_40(0, 0) && reg_41(0, 0) && reg_56(0, 0)) {
matched = true;
pattern_id = 112;
}
if(reg_44(0, 0) && reg_30(0, 0) && reg_32(0, 0) && reg_32(0, 0) && reg_3(0, 0) && reg_48(0, 0) && reg_48(0, 0) && reg_48(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 113;
}
if(reg_37(0, 0) && reg_13(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_3(0, 0) && reg_77(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_71(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 114;
}
if(reg_37(0, 0) && reg_13(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_3(0, 0) && reg_15(0, 0) && reg_18(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 115;
}
if(reg_33(0, 0) && reg_41(0, 0) && reg_31(0, 0) && reg_33(0, 0)) {
matched = true;
pattern_id = 116;
}
if(reg_37(0, 0) && reg_13(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_3(0, 0) && reg_77(0, 0) && reg_42(0, 0) && reg_52(0, 0) && reg_46(0, 0) && reg_13(0, 0) && reg_36(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 117;
}
if(reg_37(0, 0) && reg_13(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_3(0, 0) && reg_77(0, 0) && reg_10(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 118;
}
if(reg_37(0, 0) && reg_13(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_3(0, 0) && reg_77(0, 0) && reg_10(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_13(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 119;
}
if(reg_17(0, 0) && reg_76(0, 0) && reg_0(0, 0) && reg_2(0, 0) && reg_17(0, 0)) {
matched = true;
pattern_id = 120;
}
if(reg_32(0, 0) && reg_21(0, 0) && reg_31(0, 0) && reg_41(0, 0)) {
matched = true;
pattern_id = 121;
}
if(reg_3(0, 0) && reg_77(0, 0) && reg_77(0, 0) && reg_36(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_77(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_37(0, 0) && reg_6(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_77(0, 0) && reg_37(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_6(0, 0) && reg_13(0, 0) && reg_34(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 122;
}
if(reg_1(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_41(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_39(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 123;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_41(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_61(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 124;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_41(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 125;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 126;
}
if(reg_1(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 127;
}
if(reg_44(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_47(0, 0) && reg_3(0, 0) && reg_23(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_9(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 128;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_41(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 129;
}
if(reg_1(0, 0) && reg_30(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_32(0, 0) && reg_36(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_13(0, 0) && reg_51(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_3(0, 0) && reg_32(0, 0) && reg_24(0, 0)) {
matched = true;
pattern_id = 130;
}
if(reg_2(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_35(0, 0) && reg_11(0, 0) && reg_43(0, 0) && reg_4(0, 0) && reg_61(0, 0) && reg_60(0, 0) && reg_64(0, 0) && reg_13(0, 0) && reg_51(0, 0) && reg_42(0, 0) && reg_48(0, 0) && reg_9(0, 0) && reg_23(0, 0) && reg_47(0, 0) && reg_18(0, 0) && reg_7(0, 0) && reg_57(0, 0) && reg_52(0, 0) && reg_46(0, 0) && reg_34(0, 0) && reg_22(0, 0) && reg_24(0, 0) && reg_37(0, 0)) {
matched = true;
pattern_id = 131;
}
if(reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0) && reg_78(0, 0)) {
matched = true;
pattern_id = 132;
}
if(reg_45(0, 0) && reg_50(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_45(0, 0) && reg_51(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_30(0, 0) && reg_6(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_48(0, 0)) {
matched = true;
pattern_id = 133;
}
if(reg_5(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_13(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 134;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 135;
}
if(reg_13(0, 0) && reg_51(0, 0) && reg_42(0, 0) && reg_48(0, 0) && reg_9(0, 0) && reg_23(0, 0) && reg_47(0, 0) && reg_18(0, 0) && reg_7(0, 0) && reg_57(0, 0) && reg_52(0, 0) && reg_46(0, 0) && reg_34(0, 0) && reg_22(0, 0) && reg_24(0, 0) && reg_37(0, 0)) {
matched = true;
pattern_id = 136;
}
if(reg_21(0, 0) && reg_32(0, 0) && reg_32(0, 0) && reg_44(0, 0) && reg_26(0, 0) && reg_19(0, 0) && reg_33(0, 0) && reg_68(0, 0)) {
matched = true;
pattern_id = 137;
}
if(reg_30(0, 0) && reg_25(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_41(0, 0) && reg_39(0, 0) && reg_19(0, 0) && reg_29(0, 0) && reg_21(0, 0) && reg_74(0, 0) && reg_62(0, 0) && reg_56(0, 0) && reg_50(0, 0) && reg_26(0, 0) && reg_45(0, 0) && reg_44(0, 0) && reg_68(0, 0) && reg_33(0, 0) && reg_32(0, 0) && reg_31(0, 0) && reg_38(0, 0) && reg_72(0, 0) && reg_28(0, 0) && reg_30(0, 0) && reg_25(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_41(0, 0) && reg_39(0, 0) && reg_19(0, 0) && reg_29(0, 0) && reg_21(0, 0)) {
matched = true;
pattern_id = 138;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 139;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 140;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0) && reg_41(0, 0)) {
matched = true;
pattern_id = 141;
}
if(reg_60(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_66(0, 0) && reg_78(0, 0) && reg_59(0, 0) && reg_63(0, 0)) {
matched = true;
pattern_id = 142;
}
if(reg_31(0, 0) && reg_74(0, 0) && reg_44(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_47(0, 0) && reg_44(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_3(0, 0) && reg_51(0, 0) && reg_49(0, 0) && reg_3(0, 0) && reg_74(0, 0) && reg_7(0, 0) && reg_34(0, 0)) {
matched = true;
pattern_id = 143;
}
if(reg_28(0, 0) && reg_18(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_10(0, 0) && reg_38(0, 0) && reg_37(0, 0) && reg_3(0, 0) && reg_77(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_26(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_15(0, 0)) {
matched = true;
pattern_id = 144;
}
if(reg_1(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 145;
}
if(reg_40(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_3(0, 0) && reg_26(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_15(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_52(0, 0) && reg_79(0, 0) && reg_3(0, 0) && reg_21(0, 0) && reg_22(0, 0) && reg_42(0, 0) && reg_17(0, 0)) {
matched = true;
pattern_id = 146;
}
if(reg_44(0, 0) && reg_30(0, 0) && reg_32(0, 0) && reg_32(0, 0)) {
matched = true;
pattern_id = 147;
}
if(reg_25(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_20(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_50(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 148;
}
if(reg_43(0, 0) && reg_35(0, 0) && reg_2(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 149;
}
if(reg_56(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_3(0, 0) && reg_23(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_48(0, 0)) {
matched = true;
pattern_id = 150;
}
if(reg_28(0, 0) && reg_9(0, 0) && reg_46(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_9(0, 0) && reg_53(0, 0) && reg_37(0, 0) && reg_10(0, 0) && reg_49(0, 0) && reg_25(0, 0) && reg_26(0, 0) && reg_40(0, 0) && reg_71(0, 0) && reg_46(0, 0) && reg_13(0, 0) && reg_34(0, 0) && reg_35(0, 0) && reg_6(0, 0) && reg_14(0, 0) && reg_17(0, 0) && reg_48(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 151;
}
if(reg_40(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_22(0, 0) && reg_48(0, 0) && reg_3(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_37(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_48(0, 0)) {
matched = true;
pattern_id = 152;
}
if(reg_25(0, 0) && reg_13(0, 0) && reg_48(0, 0) && reg_3(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_22(0, 0) && reg_48(0, 0) && reg_3(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_3(0, 0) && reg_23(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_22(0, 0) && reg_13(0, 0) && reg_34(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 153;
}
if(reg_27(0, 0) && reg_3(0, 0) && reg_23(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_37(0, 0) && reg_7(0, 0) && reg_9(0, 0) && reg_48(0, 0)) {
matched = true;
pattern_id = 154;
}
if(reg_36(0, 0) && reg_7(0, 0) && reg_48(0, 0) && reg_78(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_64(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 155;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_59(0, 0)) {
matched = true;
pattern_id = 156;
}
if(reg_30(0, 0) && reg_5(0, 0) && reg_50(0, 0) && reg_21(0, 0) && reg_26(0, 0) && reg_21(0, 0) && reg_32(0, 0) && reg_31(0, 0) && reg_33(0, 0) && reg_30(0, 0) && reg_31(0, 0) && reg_45(0, 0) && reg_33(0, 0)) {
matched = true;
pattern_id = 157;
}
if(reg_23(0, 0) && reg_20(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 158;
}
if(reg_37(0, 0) && reg_42(0, 0) && reg_42(0, 0) && reg_10(0, 0) && reg_34(0, 0) && reg_49(0, 0) && reg_10(0, 0) && reg_12(0, 0) && reg_46(0, 0) && reg_13(0, 0) && reg_48(0, 0) && reg_34(0, 0) && reg_58(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_42(0, 0) && reg_10(0, 0) && reg_58(0, 0) && reg_48(0, 0) && reg_51(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_22(0, 0) && reg_9(0, 0) && reg_42(0, 0) && reg_20(0, 0) && reg_17(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_42(0, 0)) {
matched = true;
pattern_id = 159;
}
if(reg_71(0, 0) && reg_44(0, 0) && reg_74(0, 0) && reg_56(0, 0) && reg_3(0, 0) && reg_33(0, 0) && reg_5(0, 0) && reg_80(0, 0) && reg_50(0, 0) && reg_32(0, 0) && reg_19(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_21(0, 0) && reg_32(0, 0) && reg_44(0, 0) && reg_56(0, 0) && reg_30(0, 0) && reg_80(0, 0) && reg_3(0, 0) && reg_78(0, 0)) {
matched = true;
pattern_id = 160;
}
if(reg_21(0, 0) && reg_22(0, 0) && reg_8(0, 0) && reg_13(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_48(0, 0) && reg_3(0, 0) && reg_46(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 161;
}
if(reg_19(0, 0) && reg_41(0, 0) && reg_31(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 162;
}
if(reg_67(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_64(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 163;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 164;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 165;
}
if(reg_17(0, 0) && reg_17(0, 0)) {
matched = true;
pattern_id = 166;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_58(0, 0)) {
matched = true;
pattern_id = 167;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 168;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_28(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_7(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_22(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_24(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_15(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_26(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_31(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_27(0, 0)) {
matched = true;
pattern_id = 169;
}
if(reg_1(0, 0) && reg_43(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_17(0, 0) && reg_17(0, 0) && reg_58(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 170;
}
if(reg_1(0, 0) && reg_43(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_17(0, 0) && reg_17(0, 0) && reg_17(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 171;
}
if(reg_50(0, 0) && reg_32(0, 0) && reg_19(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 172;
}
if(reg_38(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_77(0, 0) && reg_30(0, 0) && reg_47(0, 0) && reg_9(0, 0) && reg_22(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_21(0, 0) && reg_40(0, 0) && reg_68(0, 0)) {
matched = true;
pattern_id = 173;
}
if(reg_26(0, 0) && reg_21(0, 0) && reg_40(0, 0) && reg_62(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 174;
}
if(reg_32(0, 0) && reg_31(0, 0) && reg_45(0, 0) && reg_33(0, 0)) {
matched = true;
pattern_id = 175;
}
if(reg_40(0, 0) && reg_28(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 176;
}
if(reg_50(0, 0) && reg_62(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_3(0, 0)) {
matched = true;
pattern_id = 177;
}
if(reg_50(0, 0) && reg_62(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_17(0, 0)) {
matched = true;
pattern_id = 178;
}
if(reg_50(0, 0) && reg_62(0, 0) && reg_5(0, 0)) {
matched = true;
pattern_id = 179;
}
if(reg_28(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_19(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_59(0, 0)) {
matched = true;
pattern_id = 180;
}
if(reg_19(0, 0) && reg_26(0, 0) && reg_38(0, 0) && reg_31(0, 0) && reg_41(0, 0) && reg_56(0, 0) && reg_56(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_45(0, 0) && reg_26(0, 0) && reg_26(0, 0) && reg_41(0, 0) && reg_40(0, 0) && reg_31(0, 0)) {
matched = true;
pattern_id = 181;
}
if(reg_19(0, 0) && reg_26(0, 0) && reg_38(0, 0) && reg_31(0, 0) && reg_41(0, 0) && reg_56(0, 0) && reg_56(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_45(0, 0) && reg_62(0, 0)) {
matched = true;
pattern_id = 182;
}
if(reg_33(0, 0) && reg_39(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_2(0, 0)) {
matched = true;
pattern_id = 183;
}
if(reg_32(0, 0) && reg_31(0, 0)) {
matched = true;
pattern_id = 184;
}
if(reg_43(0, 0) && reg_43(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_43(0, 0) && reg_17(0, 0) && reg_61(0, 0) && reg_17(0, 0) && reg_27(0, 0)) {
matched = true;
pattern_id = 185;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_64(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 186;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_43(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 187;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 188;
}
if(reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_3(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 189;
}
if(reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 190;
}
if(reg_9(0, 0) && reg_42(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_67(0, 0) && reg_3(0, 0) && reg_67(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 191;
}
if(reg_77(0, 0) && reg_23(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 192;
}
if(reg_46(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_3(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_6(0, 0) && reg_9(0, 0) && reg_42(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 193;
}
if(reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 194;
}
if(reg_9(0, 0) && reg_42(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_67(0, 0) && reg_3(0, 0) && reg_67(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 195;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 196;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_46(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_44(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_34(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_7(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_3(0, 0) && reg_48(0, 0) && reg_9(0, 0) && reg_22(0, 0) && reg_7(0, 0) && reg_9(0, 0) && reg_48(0, 0) && reg_17(0, 0)) {
matched = true;
pattern_id = 197;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 198;
}
if(reg_30(0, 0)) {
matched = true;
pattern_id = 199;
}
if(reg_72(0, 0) && reg_41(0, 0) && reg_33(0, 0) && reg_32(0, 0) && reg_21(0, 0) && reg_45(0, 0) && reg_26(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 200;
}
if(reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0) && reg_30(0, 0)) {
matched = true;
pattern_id = 201;
}
if(reg_9(0, 0) && reg_18(0, 0) && reg_46(0, 0) && reg_24(0, 0) && reg_3(0, 0) && reg_42(0, 0) && reg_49(0, 0) && reg_51(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_12(0, 0) && reg_36(0, 0) && reg_7(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 202;
}
if(reg_9(0, 0) && reg_16(0, 0) && reg_37(0, 0) && reg_22(0, 0) && reg_3(0, 0) && reg_42(0, 0) && reg_49(0, 0) && reg_51(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_37(0, 0)) {
matched = true;
pattern_id = 203;
}
if(reg_30(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_22(0, 0) && reg_48(0, 0) && reg_13(0, 0)) {
matched = true;
pattern_id = 204;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 205;
}
if(reg_42(0, 0) && reg_49(0, 0) && reg_51(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_37(0, 0)) {
matched = true;
pattern_id = 206;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_18(0, 0) && reg_9(0, 0) && reg_46(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_12(0, 0) && reg_36(0, 0) && reg_7(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 207;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_76(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_76(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_76(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_76(0, 0)) {
matched = true;
pattern_id = 208;
}
if(reg_1(0, 0) && reg_0(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_11(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_11(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_11(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_11(0, 0)) {
matched = true;
pattern_id = 209;
}
if(reg_45(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_45(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_45(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_0(0, 0) && reg_1(0, 0) && reg_45(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_25(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 210;
}
if(reg_19(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_19(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_19(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_19(0, 0) && reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_11(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_39(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 211;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_53(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_53(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_53(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_1(0, 0) && reg_53(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 212;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_25(0, 0) && reg_1(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 213;
}
if(reg_1(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 214;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_71(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_27(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 215;
}
if(reg_1(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_30(0, 0) && reg_4(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_35(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 216;
}
if(reg_1(0, 0) && reg_60(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_27(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_5(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_60(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 217;
}
if(reg_1(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 218;
}
if(reg_1(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_25(0, 0) && reg_43(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 219;
}
if(reg_1(0, 0) && reg_25(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_27(0, 0) && reg_61(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_60(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 220;
}
if(reg_1(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_41(0, 0) && reg_60(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_58(0, 0) && reg_10(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 221;
}
if(reg_6(0, 0) && reg_42(0, 0) && reg_37(0, 0) && reg_20(0, 0) && reg_3(0, 0) && reg_20(0, 0) && reg_24(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 222;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_5(0, 0) && reg_58(0, 0)) {
matched = true;
pattern_id = 223;
}
if(reg_29(0, 0) && reg_41(0, 0) && reg_56(0, 0) && reg_44(0, 0)) {
matched = true;
pattern_id = 224;
}
if(reg_42(0, 0) && reg_18(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_20(0, 0) && reg_3(0, 0) && reg_78(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_0(0, 0) && reg_0(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 225;
}
if(reg_9(0, 0) && reg_16(0, 0) && reg_37(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 226;
}
if(reg_9(0, 0) && reg_37(0, 0) && reg_46(0, 0) && reg_49(0, 0) && reg_77(0, 0) && reg_20(0, 0) && reg_24(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_13(0, 0) && reg_69(0, 0) && reg_17(0, 0) && reg_81(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_58(0, 0)) {
matched = true;
pattern_id = 227;
}
if(reg_34(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_3(0, 0) && reg_23(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_34(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_0(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_61(0, 0) && reg_40(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 228;
}
if(reg_50(0, 0) && reg_30(0, 0) && reg_21(0, 0) && reg_56(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_33(0, 0) && reg_45(0, 0) && reg_50(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_61(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_58(0, 0) && reg_36(0, 0) && reg_10(0, 0) && reg_6(0, 0) && reg_58(0, 0) && reg_36(0, 0) && reg_42(0, 0) && reg_51(0, 0) && reg_58(0, 0) && reg_20(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 229;
}
if(reg_40(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_50(0, 0) && reg_37(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_79(0, 0) && reg_3(0, 0) && reg_44(0, 0) && reg_78(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_58(0, 0)) {
matched = true;
pattern_id = 230;
}
if(reg_40(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_64(0, 0) && reg_1(0, 0) && reg_50(0, 0) && reg_37(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_79(0, 0) && reg_44(0, 0) && reg_78(0, 0) && reg_58(0, 0) && reg_51(0, 0) && reg_7(0, 0) && reg_22(0, 0)) {
matched = true;
pattern_id = 231;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_50(0, 0) && reg_37(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_47(0, 0)) {
matched = true;
pattern_id = 232;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_13(0, 0) && reg_9(0, 0) && reg_34(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_33(0, 0)) {
matched = true;
pattern_id = 233;
}
if(reg_1(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_40(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_5(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_50(0, 0) && reg_37(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_47(0, 0)) {
matched = true;
pattern_id = 234;
}
if(reg_8(0, 0) && reg_6(0, 0) && reg_23(0, 0) && reg_49(0, 0)) {
matched = true;
pattern_id = 235;
}
if(reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_13(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_57(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_24(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_51(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 236;
}
if(reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_13(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_15(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_24(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 237;
}
if(reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_46(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_13(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_46(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 238;
}
if(reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_13(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_36(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 239;
}
if(reg_16(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_42(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_34(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_18(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_46(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_46(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 240;
}
if(reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_48(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_46(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_13(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_46(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 241;
}
if(reg_16(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_9(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_47(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 242;
}
if(reg_56(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_3(0, 0) && reg_23(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_48(0, 0) && reg_3(0, 0) && reg_23(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_3(0, 0) && reg_36(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_3(0, 0) && reg_82(0, 0) && reg_10(0, 0) && reg_13(0, 0) && reg_82(0, 0)) {
matched = true;
pattern_id = 243;
}
if(reg_64(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_5(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_27(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_0(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_33(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_38(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_64(0, 0) && reg_3(0, 0) && reg_1(0, 0) && reg_41(0, 0) && reg_40(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 244;
}
if(reg_29(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_76(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_16(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_15(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_64(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_40(0, 0) && reg_2(0, 0) && reg_3(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_44(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_18(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_17(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 245;
}
if(reg_16(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_73(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_10(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_37(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_6(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_7(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_22(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_20(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0) && reg_23(0, 0) && reg_1(0, 0) && reg_2(0, 0) && reg_2(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 246;
}
if(reg_11(0, 0) && reg_5(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_23(0, 0) && reg_20(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 247;
}
if(reg_45(0, 0) && reg_36(0, 0) && reg_20(0, 0) && reg_45(0, 0) && reg_23(0, 0) && reg_25(0, 0) && reg_24(0, 0) && reg_16(0, 0)) {
matched = true;
pattern_id = 248;
}
if(reg_73(0, 0) && reg_33(0, 0) && reg_56(0, 0) && reg_5(0, 0)) {
matched = true;
pattern_id = 249;
}
if(reg_46(0, 0) && reg_48(0, 0) && reg_73(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_51(0, 0) && reg_6(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_49(0, 0) && reg_73(0, 0) && reg_37(0, 0) && reg_13(0, 0) && reg_20(0, 0) && reg_18(0, 0)) {
matched = true;
pattern_id = 250;
}
if(reg_1(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_35(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_39(0, 0) && reg_3(0, 0) && reg_39(0, 0) && reg_35(0, 0) && reg_1(0, 0)) {
matched = true;
pattern_id = 251;
}
if(reg_6(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_24(0, 0) && reg_46(0, 0) && reg_8(0, 0) && reg_73(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_73(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_23(0, 0)) {
matched = true;
pattern_id = 252;
}
if(reg_20(0, 0) && reg_24(0, 0) && reg_3(0, 0) && reg_10(0, 0) && reg_36(0, 0) && reg_3(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 253;
}
if(reg_22(0, 0) && reg_24(0, 0) && reg_20(0, 0) && reg_3(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_3(0, 0) && reg_10(0, 0) && reg_49(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_34(0, 0) && reg_3(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_22(0, 0) && reg_10(0, 0) && reg_24(0, 0) && reg_46(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 254;
}
if(reg_56(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_3(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_6(0, 0) && reg_9(0, 0) && reg_42(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 255;
}
if(reg_46(0, 0) && reg_24(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_1(0, 0) && reg_35(0, 0) && reg_30(0, 0) && reg_1(0, 0) && reg_3(0, 0) && reg_6(0, 0) && reg_24(0, 0) && reg_24(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 256;
}
if(reg_58(0, 0) && reg_18(0, 0) && reg_10(0, 0) && reg_16(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 257;
}
if(reg_58(0, 0) && reg_10(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 258;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_10(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_13(0, 0) && reg_17(0, 0) && reg_48(0, 0) && reg_46(0, 0) && reg_46(0, 0) && reg_58(0, 0) && reg_28(0, 0) && reg_32(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_8(0, 0) && reg_7(0, 0) && reg_42(0, 0) && reg_9(0, 0) && reg_78(0, 0)) {
matched = true;
pattern_id = 259;
}
if(reg_58(0, 0) && reg_80(0, 0) && reg_13(0, 0) && reg_25(0, 0) && reg_25(0, 0)) {
matched = true;
pattern_id = 260;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_15(0, 0) && reg_15(0, 0) && reg_51(0, 0) && reg_24(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_48(0, 0) && reg_58(0, 0) && reg_37(0, 0) && reg_13(0, 0) && reg_10(0, 0) && reg_10(0, 0) && reg_15(0, 0) && reg_48(0, 0) && reg_17(0, 0) && reg_20(0, 0) && reg_16(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 261;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_9(0, 0) && reg_51(0, 0) && reg_48(0, 0) && reg_6(0, 0) && reg_7(0, 0) && reg_8(0, 0) && reg_9(0, 0) && reg_6(0, 0)) {
matched = true;
pattern_id = 262;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_73(0, 0) && reg_6(0, 0) && reg_13(0, 0) && reg_15(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0) && reg_63(0, 0)) {
matched = true;
pattern_id = 263;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_73(0, 0) && reg_6(0, 0) && reg_13(0, 0) && reg_15(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 264;
}
if(reg_3(0, 0) && reg_58(0, 0) && reg_29(0, 0) && reg_31(0, 0) && reg_31(0, 0) && reg_44(0, 0) && reg_58(0, 0) && reg_27(0, 0) && reg_17(0, 0)) {
matched = true;
pattern_id = 265;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_9(0, 0) && reg_51(0, 0) && reg_37(0, 0) && reg_46(0, 0) && reg_36(0, 0) && reg_10(0, 0) && reg_63(0, 0) && reg_13(0, 0) && reg_51(0, 0) && reg_24(0, 0) && reg_36(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 266;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_9(0, 0) && reg_51(0, 0) && reg_37(0, 0) && reg_46(0, 0) && reg_36(0, 0) && reg_10(0, 0) && reg_63(0, 0) && reg_10(0, 0) && reg_42(0, 0) && reg_6(0, 0) && reg_7(0, 0) && reg_37(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 267;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_9(0, 0) && reg_51(0, 0) && reg_10(0, 0) && reg_9(0, 0) && reg_22(0, 0) && reg_48(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 268;
}
if(reg_58(0, 0) && reg_48(0, 0) && reg_42(0, 0) && reg_51(0, 0) && reg_24(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_48(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 269;
}
if(reg_58(0, 0) && reg_48(0, 0) && reg_42(0, 0) && reg_23(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_36(0, 0) && reg_34(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 270;
}
if(reg_58(0, 0) && reg_34(0, 0) && reg_34(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_48(0, 0) && reg_24(0, 0) && reg_48(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 271;
}
if(reg_58(0, 0) && reg_13(0, 0) && reg_37(0, 0) && reg_9(0, 0) && reg_16(0, 0) && reg_9(0, 0) && reg_42(0, 0) && reg_17(0, 0) && reg_37(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 272;
}
if(reg_58(0, 0) && reg_7(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_47(0, 0) && reg_9(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_37(0, 0) && reg_17(0, 0) && reg_9(0, 0) && reg_16(0, 0) && reg_9(0, 0) && reg_63(0, 0)) {
matched = true;
pattern_id = 273;
}
if(reg_58(0, 0) && reg_42(0, 0) && reg_8(0, 0) && reg_10(0, 0) && reg_15(0, 0) && reg_9(0, 0) && reg_51(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 274;
}
if(reg_58(0, 0) && reg_37(0, 0) && reg_18(0, 0) && reg_37(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 275;
}
if(reg_58(0, 0) && reg_47(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_34(0, 0) && reg_37(0, 0) && reg_10(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 276;
}
if(reg_58(0, 0) && reg_18(0, 0) && reg_20(0, 0) && reg_34(0, 0) && reg_46(0, 0) && reg_10(0, 0) && reg_42(0, 0) && reg_6(0, 0) && reg_7(0, 0) && reg_37(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 277;
}
if(reg_58(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_23(0, 0) && reg_24(0, 0) && reg_0(0, 0) && reg_15(0, 0) && reg_15(0, 0) && reg_15(0, 0)) {
matched = true;
pattern_id = 278;
}
if(reg_58(0, 0) && reg_34(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_17(0, 0) && reg_37(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 279;
}
if(reg_58(0, 0) && reg_22(0, 0) && reg_37(0, 0) && reg_18(0, 0) && reg_77(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_77(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 280;
}
if(reg_58(0, 0) && reg_37(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_46(0, 0) && reg_17(0, 0) && reg_9(0, 0) && reg_16(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 281;
}
if(reg_58(0, 0) && reg_6(0, 0) && reg_47(0, 0) && reg_36(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_17(0, 0) && reg_9(0, 0) && reg_16(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 282;
}
if(reg_58(0, 0) && reg_6(0, 0) && reg_15(0, 0) && reg_15(0, 0) && reg_15(0, 0) && reg_10(0, 0) && reg_18(0, 0) && reg_9(0, 0) && reg_46(0, 0) && reg_46(0, 0) && reg_17(0, 0) && reg_37(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 283;
}
if(reg_58(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_77(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 284;
}
if(reg_58(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_16(0, 0) && reg_20(0, 0) && reg_42(0, 0) && reg_24(0, 0) && reg_36(0, 0) && reg_22(0, 0) && reg_20(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_17(0, 0) && reg_37(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 285;
}
if(reg_58(0, 0) && reg_36(0, 0) && reg_37(0, 0) && reg_46(0, 0) && reg_24(0, 0) && reg_13(0, 0) && reg_48(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_17(0, 0) && reg_9(0, 0) && reg_16(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 286;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_9(0, 0) && reg_51(0, 0) && reg_47(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 287;
}
if(reg_58(0, 0) && reg_23(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_47(0, 0) && reg_9(0, 0) && reg_6(0, 0)) {
matched = true;
pattern_id = 288;
}
if(reg_58(0, 0) && reg_37(0, 0) && reg_9(0, 0) && reg_6(0, 0) && reg_46(0, 0) && reg_10(0, 0) && reg_18(0, 0) && reg_24(0, 0) && reg_37(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 289;
}
if(reg_58(0, 0) && reg_13(0, 0) && reg_47(0, 0) && reg_46(0, 0) && reg_7(0, 0) && reg_34(0, 0) && reg_37(0, 0) && reg_10(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 290;
}
if(reg_58(0, 0) && reg_30(0, 0) && reg_22(0, 0) && reg_39(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_34(0, 0) && reg_0(0, 0)) {
matched = true;
pattern_id = 291;
}
if(reg_58(0, 0) && reg_13(0, 0) && reg_6(0, 0) && reg_47(0, 0) && reg_10(0, 0) && reg_17(0, 0) && reg_51(0, 0) && reg_13(0, 0) && reg_20(0, 0)) {
matched = true;
pattern_id = 292;
}
if(reg_58(0, 0) && reg_30(0, 0) && reg_31(0, 0) && reg_77(0, 0) && reg_13(0, 0) && reg_48(0, 0) && reg_34(0, 0) && reg_7(0, 0) && reg_22(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 293;
}
if(reg_58(0, 0) && reg_51(0, 0) && reg_22(0, 0) && reg_51(0, 0) && reg_23(0, 0) && reg_24(0, 0) && reg_6(0, 0) && reg_34(0, 0) && reg_17(0, 0) && reg_42(0, 0) && reg_47(0, 0) && reg_7(0, 0)) {
matched = true;
pattern_id = 294;
}
if(reg_58(0, 0) && reg_42(0, 0) && reg_13(0, 0) && reg_34(0, 0) && reg_37(0, 0) && reg_13(0, 0) && reg_10(0, 0)) {
matched = true;
pattern_id = 295;
}
if(reg_58(0, 0) && reg_8(0, 0) && reg_7(0, 0) && reg_9(0, 0) && reg_15(0, 0) && reg_77(0, 0) && reg_10(0, 0) && reg_24(0, 0) && reg_36(0, 0) && reg_6(0, 0) && reg_42(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 296;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_13(0, 0) && reg_7(0, 0) && reg_10(0, 0) && reg_17(0, 0) && reg_37(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 297;
}
if(reg_58(0, 0) && reg_23(0, 0) && reg_7(0, 0) && reg_46(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_17(0, 0) && reg_37(0, 0) && reg_46(0, 0)) {
matched = true;
pattern_id = 298;
}
if(reg_58(0, 0) && reg_15(0, 0) && reg_47(0, 0) && reg_36(0, 0) && reg_9(0, 0) && reg_10(0, 0) && reg_20(0, 0) && reg_17(0, 0) && reg_9(0, 0) && reg_16(0, 0) && reg_9(0, 0)) {
matched = true;
pattern_id = 299;
}

}