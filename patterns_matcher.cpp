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
if(reg_0(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_3(4, 4) && reg_2(5, 5) && reg_2(6, 6) && reg_3(7, 7) && reg_2(8, 8) && reg_2(9, 9) && reg_3(10, 10) && reg_2(11, 11) && reg_4(12, 12) && reg_3(13, 13) && reg_2(14, 14) && reg_2(15, 15) && reg_3(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_3(19, 19) && reg_2(20, 20) && reg_2(21, 21) && reg_1(22, 22) && reg_5(23, 23) && reg_6(24, 24) && reg_7(25, 25) && reg_8(26, 26) && reg_9(27, 27) && reg_10(28, 28) && reg_1(29, 29) && reg_0(30, 30) && reg_11(31, 31) && reg_3(32, 32) && reg_2(33, 33) && reg_2(34, 34) && reg_1(35, 35)) {
matched = true;
pattern_id = 0;
}
if(reg_12(0, 0) && reg_13(1, 1) && reg_14(2, 2) && reg_15(3, 3) && reg_10(4, 4) && reg_16(5, 5) && reg_17(6, 6) && reg_18(7, 7) && reg_10(8, 8) && reg_12(9, 9)) {
matched = true;
pattern_id = 1;
}
if(reg_19(0, 0) && reg_9(1, 1) && reg_20(2, 2) && reg_21(3, 3) && reg_22(4, 4) && reg_23(5, 5) && reg_24(6, 6) && reg_1(7, 7) && reg_2(8, 8) && reg_5(9, 9) && reg_1(10, 10)) {
matched = true;
pattern_id = 2;
}
if(reg_25(0, 0) && reg_26(1, 1) && reg_1(2, 2) && reg_27(3, 3) && reg_2(4, 4) && reg_3(5, 5) && reg_2(6, 6) && reg_2(7, 7) && reg_3(8, 8) && reg_2(9, 9) && reg_0(10, 10) && reg_3(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14)) {
matched = true;
pattern_id = 3;
}
if(reg_28(0, 0) && reg_29(1, 1) && reg_30(2, 2) && reg_31(3, 3) && reg_21(4, 4) && reg_32(5, 5) && reg_21(6, 6) && reg_31(7, 7)) {
matched = true;
pattern_id = 4;
}
if(reg_33(0, 0) && reg_9(1, 1) && reg_34(2, 2) && reg_24(3, 3) && reg_20(4, 4) && reg_9(5, 5) && reg_1(6, 6) && reg_35(7, 7) && reg_30(8, 8) && reg_1(9, 9) && reg_3(10, 10)) {
matched = true;
pattern_id = 5;
}
if(reg_28(0, 0) && reg_20(1, 1) && reg_14(2, 2) && reg_36(3, 3) && reg_37(4, 4) && reg_3(5, 5) && reg_38(6, 6) && reg_10(7, 7) && reg_9(8, 8)) {
matched = true;
pattern_id = 6;
}
if(reg_39(0, 0) && reg_40(1, 1) && reg_3(2, 2)) {
matched = true;
pattern_id = 7;
}
if(reg_18(0, 0) && reg_24(1, 1) && reg_10(2, 2) && reg_20(3, 3)) {
matched = true;
pattern_id = 8;
}
if(reg_38(0, 0) && reg_32(1, 1) && reg_41(2, 2) && reg_33(3, 3)) {
matched = true;
pattern_id = 9;
}
if(reg_26(0, 0) && reg_9(1, 1) && reg_20(2, 2) && reg_32(3, 3) && reg_37(4, 4) && reg_18(5, 5) && reg_9(6, 6) && reg_6(7, 7) && reg_9(8, 8)) {
matched = true;
pattern_id = 10;
}
if(reg_19(0, 0) && reg_13(1, 1) && reg_20(2, 2) && reg_9(3, 3) && reg_40(4, 4) && reg_6(5, 5) && reg_13(6, 6) && reg_10(7, 7) && reg_18(8, 8) && reg_9(9, 9) && reg_6(10, 10)) {
matched = true;
pattern_id = 11;
}
if(reg_42(0, 0) && reg_1(1, 1) && reg_35(2, 2) && reg_30(3, 3) && reg_3(4, 4) && reg_43(5, 5) && reg_40(6, 6) && reg_1(7, 7)) {
matched = true;
pattern_id = 12;
}
if(reg_39(0, 0) && reg_31(1, 1) && reg_44(2, 2) && reg_45(3, 3) && reg_26(4, 4)) {
matched = true;
pattern_id = 13;
}
if(reg_39(0, 0) && reg_31(1, 1) && reg_44(2, 2) && reg_3(3, 3) && reg_44(4, 4) && reg_24(5, 5) && reg_6(6, 6) && reg_20(7, 7) && reg_3(8, 8) && reg_24(9, 9) && reg_37(10, 10) && reg_9(11, 11) && reg_22(12, 12)) {
matched = true;
pattern_id = 14;
}
if(reg_13(0, 0) && reg_42(1, 1) && reg_20(2, 2) && reg_7(3, 3) && reg_8(4, 4) && reg_13(5, 5) && reg_20(6, 6) && reg_9(7, 7)) {
matched = true;
pattern_id = 15;
}
if(reg_46(0, 0) && reg_24(1, 1) && reg_47(2, 2) && reg_47(3, 3) && reg_9(4, 4) && reg_48(5, 5) && reg_3(6, 6) && reg_7(7, 7) && reg_22(8, 8)) {
matched = true;
pattern_id = 16;
}
if(reg_1(0, 0) && reg_25(1, 1) && reg_11(2, 2) && reg_3(3, 3) && reg_25(4, 4) && reg_11(5, 5) && reg_1(6, 6)) {
matched = true;
pattern_id = 17;
}
if(reg_49(0, 0) && reg_37(1, 1) && reg_7(2, 2) && reg_2(3, 3) && reg_42(4, 4) && reg_13(5, 5)) {
matched = true;
pattern_id = 18;
}
if(reg_30(0, 0) && reg_18(1, 1) && reg_18(2, 2) && reg_18(3, 3) && reg_18(4, 4) && reg_3(5, 5) && reg_50(6, 6) && reg_49(7, 7) && reg_3(8, 8) && reg_50(9, 9) && reg_24(10, 10) && reg_36(11, 11) && reg_20(12, 12) && reg_18(13, 13) && reg_3(14, 14) && reg_21(15, 15) && reg_10(16, 16) && reg_3(17, 17) && reg_45(18, 18) && reg_37(19, 19) && reg_9(20, 20) && reg_22(21, 21)) {
matched = true;
pattern_id = 19;
}
if(reg_37(0, 0) && reg_18(1, 1) && reg_30(2, 2) && reg_10(3, 3) && reg_9(4, 4) && reg_3(5, 5) && reg_14(6, 6) && reg_9(7, 7) && reg_6(8, 8) && reg_24(9, 9) && reg_3(10, 10) && reg_10(11, 11) && reg_9(12, 12) && reg_6(13, 13) && reg_8(14, 14) && reg_9(15, 15) && reg_6(16, 16)) {
matched = true;
pattern_id = 20;
}
if(reg_15(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_15(3, 3) && reg_2(4, 4) && reg_2(5, 5)) {
matched = true;
pattern_id = 21;
}
if(reg_51(0, 0) && reg_13(1, 1) && reg_42(2, 2) && reg_52(3, 3) && reg_48(4, 4) && reg_24(5, 5) && reg_24(6, 6) && reg_6(7, 7)) {
matched = true;
pattern_id = 22;
}
if(reg_6(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_20(3, 3)) {
matched = true;
pattern_id = 23;
}
if(reg_6(0, 0) && reg_9(1, 1) && reg_15(2, 2) && reg_20(3, 3)) {
matched = true;
pattern_id = 24;
}
if(reg_15(0, 0) && reg_18(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_20(4, 4) && reg_53(5, 5)) {
matched = true;
pattern_id = 25;
}
if(reg_46(0, 0) && reg_6(1, 1) && reg_52(2, 2) && reg_6(3, 3) && reg_2(4, 4) && reg_16(5, 5)) {
matched = true;
pattern_id = 26;
}
if(reg_48(0, 0) && reg_27(1, 1) && reg_35(2, 2) && reg_18(3, 3) && reg_18(4, 4) && reg_54(5, 5)) {
matched = true;
pattern_id = 27;
}
if(reg_10(0, 0) && reg_13(1, 1) && reg_20(2, 2) && reg_24(3, 3) && reg_6(4, 4) && reg_7(5, 5)) {
matched = true;
pattern_id = 28;
}
if(reg_18(0, 0) && reg_13(1, 1) && reg_16(2, 2) && reg_2(3, 3) && reg_6(4, 4)) {
matched = true;
pattern_id = 29;
}
if(reg_23(0, 0) && reg_6(1, 1) && reg_7(2, 2) && reg_48(3, 3) && reg_13(4, 4) && reg_49(5, 5)) {
matched = true;
pattern_id = 30;
}
if(reg_32(0, 0) && reg_20(1, 1) && reg_24(2, 2) && reg_24(3, 3) && reg_47(4, 4) && reg_33(5, 5)) {
matched = true;
pattern_id = 31;
}
if(reg_15(0, 0) && reg_13(1, 1) && reg_22(2, 2) && reg_52(3, 3)) {
matched = true;
pattern_id = 32;
}
if(reg_27(0, 0) && reg_0(1, 1) && reg_35(2, 2) && reg_11(3, 3)) {
matched = true;
pattern_id = 33;
}
if(reg_30(0, 0) && reg_30(1, 1) && reg_30(2, 2) && reg_30(3, 3) && reg_30(4, 4) && reg_30(5, 5) && reg_30(6, 6) && reg_30(7, 7) && reg_30(8, 8) && reg_30(9, 9)) {
matched = true;
pattern_id = 34;
}
if(reg_44(0, 0) && reg_45(1, 1) && reg_26(2, 2) && reg_19(3, 3)) {
matched = true;
pattern_id = 35;
}
if(reg_10(0, 0) && reg_7(1, 1) && reg_42(2, 2) && reg_52(3, 3) && reg_9(4, 4) && reg_22(5, 5)) {
matched = true;
pattern_id = 36;
}
if(reg_23(0, 0) && reg_7(1, 1) && reg_42(2, 2) && reg_52(3, 3) && reg_9(4, 4) && reg_22(5, 5)) {
matched = true;
pattern_id = 37;
}
if(reg_10(0, 0) && reg_37(1, 1) && reg_24(2, 2) && reg_24(3, 3) && reg_23(4, 4) && reg_15(5, 5) && reg_24(6, 6) && reg_6(7, 7) && reg_52(8, 8) && reg_10(9, 9)) {
matched = true;
pattern_id = 38;
}
if(reg_10(0, 0) && reg_52(1, 1) && reg_7(2, 2) && reg_46(3, 3) && reg_46(4, 4) && reg_14(5, 5)) {
matched = true;
pattern_id = 39;
}
if(reg_46(0, 0) && reg_24(1, 1) && reg_47(2, 2) && reg_7(3, 3) && reg_22(4, 4) && reg_1(5, 5) && reg_35(6, 6) && reg_30(7, 7) && reg_1(8, 8)) {
matched = true;
pattern_id = 40;
}
if(reg_46(0, 0) && reg_11(1, 1) && reg_11(2, 2)) {
matched = true;
pattern_id = 41;
}
if(reg_55(0, 0) && reg_29(1, 1) && reg_41(2, 2) && reg_56(3, 3) && reg_56(4, 4) && reg_45(5, 5) && reg_55(6, 6)) {
matched = true;
pattern_id = 42;
}
if(reg_51(0, 0) && reg_9(1, 1) && reg_20(2, 2) && reg_13(3, 3) && reg_13(4, 4) && reg_46(5, 5) && reg_34(6, 6) && reg_24(7, 7) && reg_10(8, 8) && reg_20(9, 9) && reg_48(10, 10) && reg_24(11, 11) && reg_22(12, 12) && reg_9(13, 13)) {
matched = true;
pattern_id = 43;
}
if(reg_47(0, 0) && reg_45(1, 1) && reg_6(2, 2) && reg_13(3, 3) && reg_8(4, 4) && reg_9(5, 5)) {
matched = true;
pattern_id = 44;
}
if(reg_52(0, 0) && reg_7(1, 1) && reg_46(2, 2) && reg_46(3, 3) && reg_34(4, 4) && reg_9(5, 5)) {
matched = true;
pattern_id = 45;
}
if(reg_47(0, 0) && reg_9(1, 1) && reg_10(2, 2) && reg_36(3, 3) && reg_22(4, 4) && reg_48(5, 5) && reg_18(6, 6) && reg_9(7, 7) && reg_7(8, 8) && reg_20(9, 9) && reg_53(10, 10)) {
matched = true;
pattern_id = 46;
}
if(reg_46(0, 0) && reg_11(1, 1) && reg_11(2, 2) && reg_13(3, 3) && reg_48(4, 4) && reg_10(5, 5) && reg_46(6, 6)) {
matched = true;
pattern_id = 47;
}
if(reg_10(0, 0) && reg_18(1, 1) && reg_9(2, 2) && reg_46(3, 3) && reg_46(4, 4) && reg_3(5, 5) && reg_51(6, 6) && reg_24(7, 7) && reg_36(8, 8) && reg_22(9, 9) && reg_48(10, 10)) {
matched = true;
pattern_id = 48;
}
if(reg_13(0, 0) && reg_46(1, 1) && reg_7(2, 2) && reg_8(3, 3) && reg_9(4, 4) && reg_3(5, 5) && reg_20(6, 6) && reg_7(7, 7) && reg_57(8, 8) && reg_47(9, 9) && reg_36(10, 10)) {
matched = true;
pattern_id = 49;
}
if(reg_13(0, 0) && reg_46(1, 1) && reg_7(2, 2) && reg_8(3, 3) && reg_9(4, 4)) {
matched = true;
pattern_id = 50;
}
if(reg_22(0, 0) && reg_9(1, 1) && reg_15(2, 2) && reg_10(3, 3) && reg_9(4, 4) && reg_6(5, 5) && reg_8(6, 6) && reg_9(7, 7) && reg_6(8, 8)) {
matched = true;
pattern_id = 51;
}
if(reg_10(0, 0) && reg_20(1, 1) && reg_6(2, 2) && reg_9(3, 3) && reg_13(4, 4) && reg_34(5, 5) && reg_58(6, 6)) {
matched = true;
pattern_id = 52;
}
if(reg_37(0, 0) && reg_7(1, 1) && reg_22(2, 2) && reg_47(3, 3)) {
matched = true;
pattern_id = 53;
}
if(reg_37(0, 0) && reg_24(1, 1) && reg_22(2, 2) && reg_47(3, 3)) {
matched = true;
pattern_id = 54;
}
if(reg_59(0, 0)) {
matched = true;
pattern_id = 55;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_43(2, 2) && reg_3(3, 3) && reg_60(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_27(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_27(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_2(29, 29) && reg_1(30, 30)) {
matched = true;
pattern_id = 56;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_27(2, 2) && reg_3(3, 3) && reg_60(4, 4) && reg_2(5, 5) && reg_1(6, 6)) {
matched = true;
pattern_id = 57;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_27(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_1(21, 21)) {
matched = true;
pattern_id = 58;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_61(2, 2) && reg_1(3, 3) && reg_13(4, 4) && reg_36(5, 5) && reg_20(6, 6) && reg_18(7, 7) && reg_24(8, 8) && reg_6(9, 9) && reg_10(10, 10)) {
matched = true;
pattern_id = 59;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_61(2, 2) && reg_1(3, 3) && reg_8(4, 4) && reg_9(5, 5) && reg_6(6, 6) && reg_10(7, 7) && reg_7(8, 8) && reg_24(9, 9) && reg_22(10, 10)) {
matched = true;
pattern_id = 60;
}
if(reg_17(0, 0) && reg_17(1, 1) && reg_58(2, 2) && reg_17(3, 3) && reg_17(4, 4) && reg_58(5, 5) && reg_17(6, 6) && reg_17(7, 7) && reg_58(8, 8)) {
matched = true;
pattern_id = 61;
}
if(reg_20(0, 0) && reg_18(1, 1) && reg_7(2, 2) && reg_10(3, 3) && reg_7(4, 4) && reg_10(5, 5) && reg_10(6, 6) && reg_24(7, 7) && reg_34(8, 8) && reg_9(9, 9) && reg_20(10, 10) && reg_9(11, 11) && reg_34(12, 12) && reg_37(13, 13) && reg_10(14, 14) && reg_37(15, 15) && reg_13(16, 16) && reg_42(17, 17) && reg_9(18, 18) && reg_23(19, 19) && reg_24(20, 20) && reg_6(21, 21) && reg_20(22, 22) && reg_18(23, 23) && reg_9(24, 24) && reg_10(25, 25) && reg_24(26, 26) && reg_42(27, 27) && reg_52(28, 28) && reg_7(29, 29) && reg_22(30, 30) && reg_13(31, 31) && reg_48(32, 32) && reg_48(33, 33) && reg_6(34, 34) && reg_7(35, 35) && reg_22(36, 36) && reg_49(37, 37) && reg_9(38, 38) && reg_13(39, 39) && reg_18(40, 40) && reg_49(41, 41) && reg_9(42, 42) && reg_13(43, 43) && reg_18(44, 44) && reg_7(45, 45) && reg_52(46, 46) && reg_22(47, 47) && reg_24(48, 48) && reg_15(49, 49) && reg_20(50, 50) && reg_18(51, 51) && reg_7(52, 52) && reg_10(53, 53) && reg_7(54, 54) && reg_10(55, 55) && reg_46(56, 56) && reg_13(57, 57) && reg_34(58, 58) && reg_9(59, 59) && reg_51(60, 60) && reg_36(61, 61) && reg_20(62, 62) && reg_13(63, 63) && reg_22(64, 64) && reg_49(65, 65) && reg_15(66, 66) && reg_13(67, 67) && reg_49(68, 68) && reg_15(69, 69) && reg_18(70, 70) && reg_24(71, 71) && reg_42(72, 72) && reg_13(73, 73) && reg_6(74, 74) && reg_9(75, 75) && reg_10(76, 76) && reg_18(77, 77) && reg_24(78, 78) && reg_6(79, 79) && reg_7(80, 80) && reg_14(81, 81) && reg_24(82, 82) && reg_22(83, 83) && reg_47(84, 84) && reg_24(85, 85) && reg_20(86, 86) && reg_7(87, 87) && reg_20(88, 88) && reg_15(89, 89) && reg_24(90, 90) && reg_6(91, 91) && reg_52(92, 92) && reg_7(93, 93) && reg_22(94, 94) && reg_47(95, 95) && reg_10(96, 96) && reg_24(97, 97) && reg_13(98, 98) && reg_46(99, 99) && reg_46(100, 100) && reg_7(101, 101) && reg_10(102, 102) && reg_42(103, 103) && reg_24(104, 104) && reg_24(105, 105) && reg_46(106, 106)) {
matched = true;
pattern_id = 62;
}
if(reg_30(0, 0) && reg_5(1, 1) && reg_50(2, 2) && reg_33(3, 3) && reg_45(4, 4) && reg_40(5, 5) && reg_62(6, 6) && reg_32(7, 7)) {
matched = true;
pattern_id = 63;
}
if(reg_1(0, 0) && reg_40(1, 1) && reg_5(2, 2) && reg_3(3, 3) && reg_60(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_41(7, 7) && reg_60(8, 8) && reg_3(9, 9) && reg_5(10, 10) && reg_61(11, 11) && reg_3(12, 12) && reg_39(13, 13) && reg_39(14, 14) && reg_3(15, 15) && reg_39(16, 16) && reg_39(17, 17) && reg_3(18, 18) && reg_39(19, 19) && reg_39(20, 20) && reg_1(21, 21) && reg_58(22, 22) && reg_51(23, 23) && reg_7(24, 24) && reg_22(25, 25) && reg_58(26, 26) && reg_10(27, 27) && reg_18(28, 28)) {
matched = true;
pattern_id = 64;
}
if(reg_27(0, 0) && reg_1(1, 1) && reg_40(2, 2) && reg_2(3, 3) && reg_3(4, 4) && reg_25(5, 5) && reg_2(6, 6) && reg_1(7, 7) && reg_63(8, 8) && reg_27(9, 9) && reg_1(10, 10) && reg_5(11, 11) && reg_25(12, 12) && reg_3(13, 13) && reg_25(14, 14) && reg_35(15, 15) && reg_3(16, 16) && reg_39(17, 17) && reg_39(18, 18) && reg_1(19, 19) && reg_27(20, 20) && reg_1(21, 21) && reg_40(22, 22) && reg_64(23, 23) && reg_3(24, 24) && reg_40(25, 25) && reg_5(26, 26) && reg_3(27, 27) && reg_60(28, 28) && reg_2(29, 29) && reg_1(30, 30) && reg_27(31, 31) && reg_1(32, 32) && reg_40(33, 33) && reg_2(34, 34) && reg_1(35, 35)) {
matched = true;
pattern_id = 65;
}
if(reg_27(0, 0) && reg_1(1, 1) && reg_40(2, 2) && reg_2(3, 3) && reg_3(4, 4) && reg_25(5, 5) && reg_2(6, 6) && reg_3(7, 7) && reg_2(8, 8) && reg_0(9, 9) && reg_3(10, 10) && reg_40(11, 11) && reg_5(12, 12) && reg_3(13, 13) && reg_60(14, 14) && reg_2(15, 15) && reg_3(16, 16) && reg_60(17, 17) && reg_43(18, 18) && reg_3(19, 19) && reg_40(20, 20) && reg_2(21, 21) && reg_1(22, 22) && reg_36(23, 23) && reg_56(24, 24) && reg_1(25, 25) && reg_41(26, 26) && reg_25(27, 27) && reg_1(28, 28) && reg_56(29, 29) && reg_65(30, 30) && reg_1(31, 31) && reg_25(32, 32) && reg_2(33, 33) && reg_1(34, 34)) {
matched = true;
pattern_id = 66;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_64(2, 2) && reg_3(3, 3) && reg_39(4, 4) && reg_61(5, 5) && reg_3(6, 6) && reg_0(7, 7) && reg_64(8, 8) && reg_3(9, 9) && reg_40(10, 10) && reg_61(11, 11) && reg_3(12, 12) && reg_60(13, 13) && reg_64(14, 14) && reg_3(15, 15) && reg_39(16, 16) && reg_35(17, 17) && reg_3(18, 18) && reg_60(19, 19) && reg_64(20, 20) && reg_3(21, 21) && reg_39(22, 22) && reg_64(23, 23) && reg_3(24, 24) && reg_60(25, 25) && reg_64(26, 26) && reg_3(27, 27) && reg_39(28, 28) && reg_0(29, 29) && reg_3(30, 30) && reg_30(31, 31) && reg_40(32, 32) && reg_1(33, 33) && reg_66(34, 34) && reg_1(35, 35) && reg_39(36, 36) && reg_41(37, 37) && reg_1(38, 38)) {
matched = true;
pattern_id = 67;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_1(3, 3) && reg_22(4, 4) && reg_65(5, 5) && reg_1(6, 6) && reg_40(7, 7) && reg_4(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_4(11, 11) && reg_3(12, 12) && reg_64(13, 13) && reg_30(14, 14) && reg_1(15, 15) && reg_27(16, 16) && reg_1(17, 17) && reg_40(18, 18) && reg_64(19, 19) && reg_3(20, 20) && reg_60(21, 21) && reg_64(22, 22) && reg_1(23, 23) && reg_26(24, 24) && reg_1(25, 25) && reg_2(26, 26) && reg_27(27, 27) && reg_3(28, 28) && reg_40(29, 29) && reg_4(30, 30) && reg_1(31, 31) && reg_39(32, 32) && reg_1(33, 33) && reg_2(34, 34) && reg_43(35, 35) && reg_1(36, 36)) {
matched = true;
pattern_id = 68;
}
if(reg_1(0, 0) && reg_64(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_27(4, 4) && reg_30(5, 5) && reg_3(6, 6) && reg_40(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_39(11, 11) && reg_3(12, 12) && reg_64(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_0(17, 17) && reg_1(18, 18) && reg_3(19, 19) && reg_1(20, 20) && reg_2(21, 21) && reg_60(22, 22) && reg_3(23, 23) && reg_64(24, 24) && reg_0(25, 25) && reg_3(26, 26) && reg_2(27, 27) && reg_0(28, 28) && reg_1(29, 29) && reg_3(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_39(33, 33) && reg_3(34, 34) && reg_5(35, 35) && reg_2(36, 36) && reg_3(37, 37) && reg_0(38, 38) && reg_35(39, 39) && reg_3(40, 40) && reg_25(41, 41) && reg_39(42, 42) && reg_3(43, 43) && reg_39(44, 44) && reg_60(45, 45) && reg_1(46, 46)) {
matched = true;
pattern_id = 69;
}
if(reg_67(0, 0) && reg_67(1, 1) && reg_67(2, 2) && reg_13(3, 3) && reg_20(4, 4) && reg_18(5, 5)) {
matched = true;
pattern_id = 70;
}
if(reg_1(0, 0) && reg_39(1, 1) && reg_39(2, 2) && reg_3(3, 3) && reg_39(4, 4) && reg_11(5, 5) && reg_3(6, 6) && reg_39(7, 7) && reg_39(8, 8) && reg_3(9, 9) && reg_39(10, 10) && reg_5(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_4(14, 14) && reg_1(15, 15)) {
matched = true;
pattern_id = 71;
}
if(reg_58(0, 0) && reg_8(1, 1) && reg_7(2, 2) && reg_9(3, 3) && reg_15(4, 4) && reg_10(5, 5) && reg_24(6, 6) && reg_36(7, 7) && reg_6(8, 8) && reg_42(9, 9) && reg_9(10, 10) && reg_58(11, 11) && reg_20(12, 12) && reg_9(13, 13) && reg_34(14, 14) && reg_37(15, 15) && reg_46(16, 16) && reg_13(17, 17) && reg_20(18, 18) && reg_9(19, 19) && reg_17(20, 20) && reg_18(21, 21) && reg_20(22, 22) && reg_34(23, 23) && reg_46(24, 24) && reg_63(25, 25)) {
matched = true;
pattern_id = 72;
}
if(reg_26(0, 0) && reg_30(1, 1) && reg_50(2, 2) && reg_41(3, 3) && reg_26(4, 4) && reg_30(5, 5) && reg_50(6, 6) && reg_41(7, 7)) {
matched = true;
pattern_id = 73;
}
if(reg_35(0, 0) && reg_1(1, 1) && reg_40(2, 2) && reg_64(3, 3) && reg_3(4, 4) && reg_25(5, 5) && reg_27(6, 6) && reg_3(7, 7) && reg_27(8, 8) && reg_2(9, 9) && reg_1(10, 10) && reg_63(11, 11) && reg_1(12, 12) && reg_41(13, 13) && reg_64(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_4(17, 17) && reg_1(18, 18) && reg_68(19, 19) && reg_66(20, 20) && reg_1(21, 21) && reg_39(22, 22) && reg_30(23, 23) && reg_1(24, 24) && reg_19(25, 25) && reg_35(26, 26) && reg_1(27, 27) && reg_40(28, 28) && reg_2(29, 29) && reg_1(30, 30) && reg_44(31, 31) && reg_1(32, 32) && reg_39(33, 33) && reg_61(34, 34) && reg_3(35, 35) && reg_5(36, 36) && reg_2(37, 37) && reg_1(38, 38) && reg_44(39, 39)) {
matched = true;
pattern_id = 74;
}
if(reg_65(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_41(3, 3) && reg_1(4, 4) && reg_27(5, 5) && reg_1(6, 6) && reg_40(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_25(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_35(13, 13) && reg_25(14, 14) && reg_3(15, 15) && reg_60(16, 16) && reg_5(17, 17) && reg_1(18, 18) && reg_69(19, 19) && reg_1(20, 20) && reg_2(21, 21) && reg_41(22, 22) && reg_3(23, 23) && reg_60(24, 24) && reg_64(25, 25) && reg_3(26, 26) && reg_39(27, 27) && reg_30(28, 28) && reg_3(29, 29) && reg_60(30, 30) && reg_64(31, 31) && reg_3(32, 32) && reg_39(33, 33) && reg_64(34, 34) && reg_1(35, 35)) {
matched = true;
pattern_id = 75;
}
if(reg_18(0, 0) && reg_70(1, 1) && reg_65(2, 2) && reg_1(3, 3) && reg_39(4, 4) && reg_39(5, 5) && reg_3(6, 6) && reg_5(7, 7) && reg_43(8, 8) && reg_3(9, 9) && reg_39(10, 10) && reg_39(11, 11) && reg_3(12, 12) && reg_5(13, 13) && reg_11(14, 14) && reg_3(15, 15) && reg_39(16, 16) && reg_39(17, 17) && reg_3(18, 18) && reg_39(19, 19) && reg_43(20, 20) && reg_3(21, 21) && reg_60(22, 22) && reg_25(23, 23) && reg_3(24, 24) && reg_39(25, 25) && reg_43(26, 26) && reg_3(27, 27) && reg_64(28, 28) && reg_2(29, 29) && reg_1(30, 30) && reg_23(31, 31) && reg_27(32, 32)) {
matched = true;
pattern_id = 76;
}
if(reg_1(0, 0) && reg_5(1, 1) && reg_60(2, 2) && reg_1(3, 3) && reg_71(4, 4) && reg_1(5, 5) && reg_40(6, 6) && reg_5(7, 7) && reg_3(8, 8) && reg_60(9, 9) && reg_2(10, 10) && reg_3(11, 11) && reg_41(12, 12) && reg_60(13, 13) && reg_3(14, 14) && reg_5(15, 15) && reg_64(16, 16) && reg_3(17, 17) && reg_39(18, 18) && reg_39(19, 19) && reg_3(20, 20) && reg_39(21, 21) && reg_39(22, 22) && reg_3(23, 23) && reg_39(24, 24) && reg_39(25, 25) && reg_1(26, 26) && reg_58(27, 27) && reg_51(28, 28) && reg_7(29, 29) && reg_22(30, 30) && reg_58(31, 31) && reg_10(32, 32) && reg_18(33, 33)) {
matched = true;
pattern_id = 77;
}
if(reg_72(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_41(3, 3) && reg_1(4, 4) && reg_27(5, 5) && reg_1(6, 6) && reg_40(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_25(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_35(13, 13) && reg_25(14, 14) && reg_3(15, 15) && reg_60(16, 16) && reg_5(17, 17) && reg_1(18, 18) && reg_69(19, 19) && reg_1(20, 20) && reg_27(21, 21) && reg_0(22, 22) && reg_3(23, 23) && reg_60(24, 24) && reg_64(25, 25) && reg_3(26, 26) && reg_39(27, 27) && reg_64(28, 28) && reg_3(29, 29) && reg_60(30, 30) && reg_64(31, 31) && reg_3(32, 32) && reg_39(33, 33) && reg_64(34, 34) && reg_1(35, 35)) {
matched = true;
pattern_id = 78;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_60(2, 2) && reg_3(3, 3) && reg_5(4, 4) && reg_64(5, 5) && reg_3(6, 6) && reg_39(7, 7) && reg_39(8, 8) && reg_3(9, 9) && reg_39(10, 10) && reg_39(11, 11) && reg_3(12, 12) && reg_39(13, 13) && reg_39(14, 14) && reg_1(15, 15) && reg_58(16, 16) && reg_51(17, 17) && reg_7(18, 18) && reg_22(19, 19) && reg_58(20, 20) && reg_10(21, 21) && reg_18(22, 22)) {
matched = true;
pattern_id = 79;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_1(3, 3) && reg_58(4, 4) && reg_73(5, 5) && reg_1(6, 6) && reg_41(7, 7) && reg_25(8, 8) && reg_1(9, 9) && reg_74(10, 10) && reg_65(11, 11) && reg_1(12, 12) && reg_60(13, 13) && reg_64(14, 14) && reg_3(15, 15) && reg_39(16, 16) && reg_25(17, 17) && reg_3(18, 18) && reg_60(19, 19) && reg_64(20, 20) && reg_1(21, 21) && reg_59(22, 22) && reg_1(23, 23) && reg_60(24, 24) && reg_64(25, 25) && reg_3(26, 26) && reg_39(27, 27) && reg_0(28, 28) && reg_1(29, 29)) {
matched = true;
pattern_id = 80;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_3(3, 3) && reg_0(4, 4) && reg_35(5, 5) && reg_1(6, 6) && reg_65(7, 7) && reg_35(8, 8) && reg_1(9, 9) && reg_40(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_60(13, 13) && reg_60(14, 14) && reg_1(15, 15) && reg_39(16, 16) && reg_1(17, 17) && reg_39(18, 18) && reg_30(19, 19) && reg_3(20, 20) && reg_60(21, 21) && reg_64(22, 22) && reg_1(23, 23) && reg_39(24, 24) && reg_1(25, 25) && reg_39(26, 26) && reg_43(27, 27) && reg_3(28, 28) && reg_60(29, 29) && reg_64(30, 30) && reg_1(31, 31) && reg_4(32, 32)) {
matched = true;
pattern_id = 81;
}
if(reg_40(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_61(3, 3) && reg_3(4, 4) && reg_60(5, 5) && reg_64(6, 6) && reg_1(7, 7) && reg_54(8, 8) && reg_1(9, 9) && reg_2(10, 10) && reg_60(11, 11) && reg_3(12, 12) && reg_60(13, 13) && reg_5(14, 14) && reg_1(15, 15) && reg_62(16, 16) && reg_1(17, 17) && reg_2(18, 18) && reg_60(19, 19) && reg_3(20, 20) && reg_60(21, 21) && reg_64(22, 22) && reg_1(23, 23) && reg_40(24, 24) && reg_1(25, 25) && reg_2(26, 26) && reg_40(27, 27) && reg_3(28, 28) && reg_25(29, 29) && reg_2(30, 30) && reg_3(31, 31) && reg_2(32, 32) && reg_25(33, 33) && reg_3(34, 34) && reg_40(35, 35) && reg_5(36, 36) && reg_3(37, 37) && reg_60(38, 38) && reg_2(39, 39) && reg_1(40, 40) && reg_27(41, 41) && reg_1(42, 42) && reg_40(43, 43) && reg_2(44, 44) && reg_3(45, 45) && reg_39(46, 46) && reg_41(47, 47) && reg_3(48, 48) && reg_40(49, 49) && reg_2(50, 50) && reg_3(51, 51) && reg_40(52, 52) && reg_5(53, 53) && reg_3(54, 54) && reg_60(55, 55) && reg_2(56, 56) && reg_3(57, 57) && reg_41(58, 58) && reg_60(59, 59) && reg_3(60, 60) && reg_64(61, 61) && reg_11(62, 62) && reg_3(63, 63) && reg_39(64, 64) && reg_39(65, 65) && reg_3(66, 66) && reg_39(67, 67) && reg_39(68, 68) && reg_3(69, 69) && reg_39(70, 70) && reg_39(71, 71) && reg_1(72, 72) && reg_58(73, 73) && reg_51(74, 74) && reg_7(75, 75) && reg_22(76, 76) && reg_58(77, 77) && reg_10(78, 78) && reg_18(79, 79) && reg_1(80, 80) && reg_2(81, 81) && reg_30(82, 82) && reg_1(83, 83)) {
matched = true;
pattern_id = 82;
}
if(reg_75(0, 0) && reg_75(1, 1) && reg_75(2, 2) && reg_75(3, 3) && reg_76(4, 4) && reg_17(5, 5) && reg_27(6, 6) && reg_61(7, 7) && reg_0(8, 8) && reg_36(9, 9) && reg_76(10, 10) && reg_35(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_0(15, 15) && reg_11(16, 16) && reg_1(17, 17) && reg_22(18, 18)) {
matched = true;
pattern_id = 83;
}
if(reg_1(0, 0) && reg_30(1, 1) && reg_25(2, 2) && reg_3(3, 3) && reg_40(4, 4) && reg_5(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_64(8, 8) && reg_3(9, 9) && reg_60(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_27(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_2(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_2(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_3(39, 39) && reg_2(40, 40) && reg_2(41, 41) && reg_3(42, 42) && reg_2(43, 43) && reg_27(44, 44) && reg_3(45, 45) && reg_2(46, 46) && reg_2(47, 47) && reg_3(48, 48) && reg_2(49, 49) && reg_27(50, 50) && reg_1(51, 51) && reg_3(52, 52) && reg_3(53, 53) && reg_3(54, 54) && reg_3(55, 55) && reg_1(56, 56) && reg_2(57, 57) && reg_0(58, 58) && reg_1(59, 59) && reg_13(60, 60)) {
matched = true;
pattern_id = 84;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_3(3, 3) && reg_61(4, 4) && reg_39(5, 5) && reg_1(6, 6) && reg_70(7, 7) && reg_38(8, 8) && reg_1(9, 9) && reg_39(10, 10) && reg_41(11, 11) && reg_1(12, 12) && reg_50(13, 13) && reg_1(14, 14) && reg_64(15, 15) && reg_60(16, 16) && reg_3(17, 17) && reg_39(18, 18) && reg_41(19, 19) && reg_1(20, 20) && reg_50(21, 21) && reg_1(22, 22) && reg_64(23, 23) && reg_25(24, 24) && reg_1(25, 25)) {
matched = true;
pattern_id = 85;
}
if(reg_15(0, 0) && reg_18(1, 1) && reg_24(2, 2) && reg_7(3, 3) && reg_10(4, 4) && reg_1(5, 5) && reg_35(6, 6) && reg_30(7, 7) && reg_1(8, 8) && reg_58(9, 9) && reg_58(10, 10)) {
matched = true;
pattern_id = 86;
}
if(reg_19(0, 0) && reg_41(1, 1) && reg_31(2, 2) && reg_3(3, 3) && reg_58(4, 4) && reg_3(5, 5) && reg_29(6, 6) && reg_31(7, 7) && reg_31(8, 8) && reg_44(9, 9) && reg_58(10, 10) && reg_27(11, 11) && reg_17(12, 12) && reg_27(13, 13)) {
matched = true;
pattern_id = 87;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_1(3, 3) && reg_62(4, 4) && reg_54(5, 5) && reg_32(6, 6) && reg_0(7, 7) && reg_1(8, 8) && reg_41(9, 9) && reg_11(10, 10) && reg_3(11, 11) && reg_60(12, 12) && reg_35(13, 13) && reg_3(14, 14) && reg_40(15, 15) && reg_35(16, 16) && reg_3(17, 17) && reg_2(18, 18) && reg_25(19, 19) && reg_1(20, 20) && reg_62(21, 21) && reg_1(22, 22) && reg_60(23, 23) && reg_60(24, 24) && reg_3(25, 25) && reg_0(26, 26) && reg_35(27, 27) && reg_3(28, 28) && reg_25(29, 29) && reg_60(30, 30) && reg_1(31, 31) && reg_44(32, 32) && reg_15(33, 33)) {
matched = true;
pattern_id = 88;
}
if(reg_1(0, 0) && reg_25(1, 1) && reg_11(2, 2) && reg_1(3, 3) && reg_3(4, 4) && reg_1(5, 5) && reg_25(6, 6) && reg_11(7, 7) && reg_1(8, 8) && reg_53(9, 9) && reg_1(10, 10) && reg_60(11, 11) && reg_25(12, 12) && reg_3(13, 13) && reg_40(14, 14) && reg_40(15, 15) && reg_3(16, 16) && reg_60(17, 17) && reg_35(18, 18) && reg_3(19, 19) && reg_41(20, 20) && reg_64(21, 21) && reg_3(22, 22) && reg_2(23, 23) && reg_11(24, 24) && reg_3(25, 25) && reg_60(26, 26) && reg_25(27, 27) && reg_3(28, 28) && reg_27(29, 29) && reg_64(30, 30) && reg_1(31, 31) && reg_35(32, 32) && reg_1(33, 33) && reg_40(34, 34) && reg_64(35, 35) && reg_1(36, 36) && reg_23(37, 37) && reg_1(38, 38) && reg_25(39, 39) && reg_64(40, 40) && reg_3(41, 41) && reg_27(42, 42) && reg_2(43, 43) && reg_1(44, 44)) {
matched = true;
pattern_id = 89;
}
if(reg_23(0, 0) && reg_6(1, 1) && reg_24(2, 2) && reg_34(3, 3) && reg_1(4, 4) && reg_35(5, 5) && reg_30(6, 6) && reg_3(7, 7) && reg_64(8, 8) && reg_2(9, 9) && reg_3(10, 10) && reg_64(11, 11) && reg_2(12, 12) && reg_3(13, 13) && reg_64(14, 14) && reg_2(15, 15) && reg_3(16, 16) && reg_64(17, 17) && reg_2(18, 18) && reg_3(19, 19) && reg_64(20, 20) && reg_2(21, 21) && reg_3(22, 22) && reg_64(23, 23) && reg_2(24, 24) && reg_3(25, 25) && reg_64(26, 26) && reg_2(27, 27) && reg_3(28, 28) && reg_64(29, 29) && reg_2(30, 30) && reg_3(31, 31) && reg_64(32, 32) && reg_2(33, 33) && reg_3(34, 34) && reg_64(35, 35) && reg_2(36, 36) && reg_3(37, 37) && reg_64(38, 38) && reg_2(39, 39) && reg_1(40, 40)) {
matched = true;
pattern_id = 90;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_1(3, 3) && reg_41(4, 4) && reg_1(5, 5) && reg_41(6, 6) && reg_25(7, 7) && reg_1(8, 8) && reg_3(9, 9) && reg_54(10, 10) && reg_1(11, 11) && reg_39(12, 12) && reg_40(13, 13) && reg_1(14, 14) && reg_35(15, 15) && reg_1(16, 16) && reg_40(17, 17) && reg_64(18, 18) && reg_3(19, 19) && reg_25(20, 20) && reg_27(21, 21) && reg_3(22, 22) && reg_60(23, 23) && reg_0(24, 24) && reg_3(25, 25) && reg_60(26, 26) && reg_25(27, 27) && reg_3(28, 28) && reg_39(29, 29) && reg_35(30, 30) && reg_3(31, 31) && reg_60(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_67(35, 35)) {
matched = true;
pattern_id = 91;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_27(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_35(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_27(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_0(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_0(32, 32) && reg_3(33, 33) && reg_41(34, 34) && reg_60(35, 35) && reg_1(36, 36)) {
matched = true;
pattern_id = 92;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_61(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_27(26, 26) && reg_1(27, 27) && reg_63(28, 28) && reg_1(29, 29) && reg_2(30, 30) && reg_2(31, 31) && reg_3(32, 32) && reg_2(33, 33) && reg_27(34, 34) && reg_3(35, 35) && reg_2(36, 36) && reg_0(37, 37) && reg_1(38, 38)) {
matched = true;
pattern_id = 93;
}
if(reg_65(0, 0) && reg_1(1, 1) && reg_25(2, 2) && reg_2(3, 3) && reg_3(4, 4) && reg_2(5, 5) && reg_0(6, 6) && reg_3(7, 7) && reg_60(8, 8) && reg_64(9, 9) && reg_3(10, 10) && reg_2(11, 11) && reg_4(12, 12) && reg_3(13, 13) && reg_39(14, 14) && reg_41(15, 15) && reg_3(16, 16) && reg_40(17, 17) && reg_60(18, 18) && reg_3(19, 19) && reg_60(20, 20) && reg_64(21, 21) && reg_1(22, 22) && reg_39(23, 23) && reg_1(24, 24) && reg_2(25, 25) && reg_11(26, 26) && reg_3(27, 27) && reg_25(28, 28) && reg_2(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_4(32, 32) && reg_3(33, 33) && reg_60(34, 34) && reg_64(35, 35) && reg_1(36, 36) && reg_39(37, 37)) {
matched = true;
pattern_id = 94;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_1(3, 3) && reg_72(4, 4) && reg_65(5, 5) && reg_72(6, 6) && reg_72(7, 7) && reg_72(8, 8) && reg_27(9, 9) && reg_1(10, 10) && reg_5(11, 11) && reg_0(12, 12) && reg_3(13, 13) && reg_60(14, 14) && reg_60(15, 15) && reg_1(16, 16) && reg_72(17, 17) && reg_1(18, 18) && reg_2(19, 19) && reg_25(20, 20) && reg_3(21, 21) && reg_60(22, 22) && reg_60(23, 23) && reg_1(24, 24) && reg_72(25, 25) && reg_1(26, 26) && reg_27(27, 27) && reg_41(28, 28) && reg_1(29, 29)) {
matched = true;
pattern_id = 95;
}
if(reg_1(0, 0) && reg_41(1, 1) && reg_25(2, 2) && reg_1(3, 3) && reg_71(4, 4) && reg_65(5, 5) && reg_27(6, 6) && reg_1(7, 7) && reg_40(8, 8) && reg_2(9, 9) && reg_1(10, 10) && reg_71(11, 11) && reg_1(12, 12) && reg_60(13, 13) && reg_64(14, 14) && reg_1(15, 15) && reg_39(16, 16) && reg_1(17, 17) && reg_2(18, 18) && reg_11(19, 19) && reg_3(20, 20) && reg_60(21, 21) && reg_64(22, 22) && reg_3(23, 23) && reg_40(24, 24) && reg_35(25, 25) && reg_1(26, 26) && reg_71(27, 27) && reg_1(28, 28) && reg_60(29, 29) && reg_64(30, 30) && reg_3(31, 31) && reg_2(32, 32) && reg_4(33, 33) && reg_1(34, 34)) {
matched = true;
pattern_id = 96;
}
if(reg_42(0, 0) && reg_34(1, 1) && reg_48(2, 2) && reg_73(3, 3) && reg_6(4, 4) && reg_24(5, 5) && reg_24(6, 6) && reg_20(7, 7) && reg_10(8, 8) && reg_18(9, 9)) {
matched = true;
pattern_id = 97;
}
if(reg_13(0, 0) && reg_3(1, 1) && reg_51(2, 2) && reg_3(3, 3) && reg_42(4, 4) && reg_3(5, 5) && reg_48(6, 6) && reg_3(7, 7) && reg_9(8, 8) && reg_3(9, 9) && reg_23(10, 10)) {
matched = true;
pattern_id = 98;
}
if(reg_10(0, 0) && reg_9(1, 1) && reg_13(2, 2) && reg_6(3, 3) && reg_42(4, 4) && reg_18(5, 5)) {
matched = true;
pattern_id = 99;
}
if(reg_6(0, 0) && reg_24(1, 1) && reg_24(2, 2) && reg_20(3, 3)) {
matched = true;
pattern_id = 100;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_1(3, 3)) {
matched = true;
pattern_id = 101;
}
if(reg_1(0, 0) && reg_35(1, 1) && reg_25(2, 2) && reg_1(3, 3)) {
matched = true;
pattern_id = 102;
}
if(reg_1(0, 0) && reg_61(1, 1) && reg_40(2, 2) && reg_1(3, 3)) {
matched = true;
pattern_id = 103;
}
if(reg_71(0, 0) && reg_71(1, 1)) {
matched = true;
pattern_id = 104;
}
if(reg_71(0, 0)) {
matched = true;
pattern_id = 105;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_30(2, 2) && reg_1(3, 3) && reg_3(4, 4) && reg_3(5, 5) && reg_3(6, 6) && reg_3(7, 7) && reg_3(8, 8)) {
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
if(reg_17(0, 0) && reg_23(1, 1) && reg_24(2, 2) && reg_6(3, 3) && reg_15(4, 4) && reg_13(5, 5) && reg_6(6, 6) && reg_48(7, 7)) {
matched = true;
pattern_id = 109;
}
if(reg_17(0, 0) && reg_6(1, 1) && reg_18(2, 2) && reg_24(3, 3) && reg_10(4, 4) && reg_20(5, 5) && reg_10(6, 6)) {
matched = true;
pattern_id = 110;
}
if(reg_40(0, 0) && reg_28(1, 1) && reg_5(2, 2)) {
matched = true;
pattern_id = 111;
}
if(reg_40(0, 0) && reg_41(1, 1) && reg_56(2, 2)) {
matched = true;
pattern_id = 112;
}
if(reg_44(0, 0) && reg_30(1, 1) && reg_32(2, 2) && reg_32(3, 3) && reg_3(4, 4) && reg_48(5, 5) && reg_48(6, 6) && reg_48(7, 7) && reg_71(8, 8) && reg_1(9, 9) && reg_2(10, 10) && reg_30(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 113;
}
if(reg_37(0, 0) && reg_13(1, 1) && reg_10(2, 2) && reg_10(3, 3) && reg_3(4, 4) && reg_77(5, 5) && reg_7(6, 6) && reg_10(7, 7) && reg_10(8, 8) && reg_71(9, 9) && reg_7(10, 10) && reg_10(11, 11) && reg_10(12, 12)) {
matched = true;
pattern_id = 114;
}
if(reg_37(0, 0) && reg_13(1, 1) && reg_10(2, 2) && reg_10(3, 3) && reg_3(4, 4) && reg_15(5, 5) && reg_18(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_20(9, 9)) {
matched = true;
pattern_id = 115;
}
if(reg_33(0, 0) && reg_41(1, 1) && reg_31(2, 2) && reg_33(3, 3)) {
matched = true;
pattern_id = 116;
}
if(reg_37(0, 0) && reg_13(1, 1) && reg_10(2, 2) && reg_10(3, 3) && reg_3(4, 4) && reg_77(5, 5) && reg_42(6, 6) && reg_52(7, 7) && reg_46(8, 8) && reg_13(9, 9) && reg_36(10, 10) && reg_10(11, 11)) {
matched = true;
pattern_id = 117;
}
if(reg_37(0, 0) && reg_13(1, 1) && reg_10(2, 2) && reg_10(3, 3) && reg_3(4, 4) && reg_77(5, 5) && reg_10(6, 6) && reg_13(7, 7) && reg_7(8, 8) && reg_22(9, 9) && reg_20(10, 10)) {
matched = true;
pattern_id = 118;
}
if(reg_37(0, 0) && reg_13(1, 1) && reg_10(2, 2) && reg_10(3, 3) && reg_3(4, 4) && reg_77(5, 5) && reg_10(6, 6) && reg_13(7, 7) && reg_20(8, 8) && reg_13(9, 9) && reg_22(10, 10)) {
matched = true;
pattern_id = 119;
}
if(reg_17(0, 0) && reg_76(1, 1) && reg_0(2, 2) && reg_2(3, 3) && reg_17(4, 4)) {
matched = true;
pattern_id = 120;
}
if(reg_32(0, 0) && reg_21(1, 1) && reg_31(2, 2) && reg_41(3, 3)) {
matched = true;
pattern_id = 121;
}
if(reg_3(0, 0) && reg_77(1, 1) && reg_77(2, 2) && reg_36(3, 3) && reg_10(4, 4) && reg_9(5, 5) && reg_77(6, 6) && reg_42(7, 7) && reg_24(8, 8) && reg_34(9, 9) && reg_37(10, 10) && reg_6(11, 11) && reg_9(12, 12) && reg_10(13, 13) && reg_10(14, 14) && reg_77(15, 15) && reg_37(16, 16) && reg_6(17, 17) && reg_24(18, 18) && reg_47(19, 19) && reg_6(20, 20) && reg_13(21, 21) && reg_34(22, 22) && reg_3(23, 23)) {
matched = true;
pattern_id = 122;
}
if(reg_1(0, 0) && reg_27(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_27(4, 4) && reg_27(5, 5) && reg_3(6, 6) && reg_27(7, 7) && reg_0(8, 8) && reg_3(9, 9) && reg_27(10, 10) && reg_35(11, 11) && reg_3(12, 12) && reg_27(13, 13) && reg_11(14, 14) && reg_3(15, 15) && reg_27(16, 16) && reg_43(17, 17) && reg_3(18, 18) && reg_27(19, 19) && reg_4(20, 20) && reg_3(21, 21) && reg_27(22, 22) && reg_61(23, 23) && reg_3(24, 24) && reg_27(25, 25) && reg_60(26, 26) && reg_3(27, 27) && reg_27(28, 28) && reg_64(29, 29) && reg_3(30, 30) && reg_27(31, 31) && reg_30(32, 32) && reg_3(33, 33) && reg_27(34, 34) && reg_25(35, 35) && reg_3(36, 36) && reg_27(37, 37) && reg_40(38, 38) && reg_3(39, 39) && reg_27(40, 40) && reg_5(41, 41) && reg_3(42, 42) && reg_27(43, 43) && reg_41(44, 44) && reg_3(45, 45) && reg_27(46, 46) && reg_39(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 123;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_60(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_64(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_30(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_25(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_40(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_5(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_41(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_39(23, 23) && reg_3(24, 24) && reg_27(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_27(28, 28) && reg_27(29, 29) && reg_3(30, 30) && reg_27(31, 31) && reg_0(32, 32) && reg_3(33, 33) && reg_27(34, 34) && reg_35(35, 35) && reg_3(36, 36) && reg_27(37, 37) && reg_11(38, 38) && reg_3(39, 39) && reg_27(40, 40) && reg_43(41, 41) && reg_3(42, 42) && reg_27(43, 43) && reg_4(44, 44) && reg_3(45, 45) && reg_27(46, 46) && reg_61(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 124;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_27(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_0(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_35(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_11(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_43(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_4(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_61(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_60(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_64(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_30(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_25(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_40(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_5(38, 38) && reg_3(39, 39) && reg_2(40, 40) && reg_41(41, 41) && reg_3(42, 42) && reg_2(43, 43) && reg_39(44, 44) && reg_1(45, 45)) {
matched = true;
pattern_id = 125;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_2(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_2(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_60(38, 38) && reg_3(39, 39) && reg_2(40, 40) && reg_64(41, 41) && reg_3(42, 42) && reg_2(43, 43) && reg_30(44, 44) && reg_3(45, 45) && reg_2(46, 46) && reg_25(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 126;
}
if(reg_1(0, 0) && reg_30(1, 1) && reg_25(2, 2) && reg_3(3, 3) && reg_40(4, 4) && reg_5(5, 5) && reg_3(6, 6) && reg_30(7, 7) && reg_25(8, 8) && reg_3(9, 9) && reg_40(10, 10) && reg_5(11, 11) && reg_3(12, 12) && reg_30(13, 13) && reg_25(14, 14) && reg_3(15, 15) && reg_40(16, 16) && reg_5(17, 17) && reg_3(18, 18) && reg_30(19, 19) && reg_25(20, 20) && reg_3(21, 21) && reg_40(22, 22) && reg_5(23, 23) && reg_3(24, 24) && reg_30(25, 25) && reg_25(26, 26) && reg_3(27, 27) && reg_40(28, 28) && reg_5(29, 29) && reg_3(30, 30) && reg_30(31, 31) && reg_25(32, 32) && reg_3(33, 33) && reg_40(34, 34) && reg_5(35, 35) && reg_3(36, 36) && reg_30(37, 37) && reg_25(38, 38) && reg_3(39, 39) && reg_40(40, 40) && reg_5(41, 41) && reg_3(42, 42) && reg_30(43, 43) && reg_25(44, 44) && reg_3(45, 45) && reg_40(46, 46) && reg_5(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 127;
}
if(reg_44(0, 0) && reg_7(1, 1) && reg_22(2, 2) && reg_47(3, 3) && reg_7(4, 4) && reg_22(5, 5) && reg_47(6, 6) && reg_3(7, 7) && reg_23(8, 8) && reg_6(9, 9) && reg_24(10, 10) && reg_34(11, 11) && reg_3(12, 12) && reg_5(13, 13) && reg_9(14, 14) && reg_46(15, 15)) {
matched = true;
pattern_id = 128;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_27(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_0(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_35(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_11(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_43(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_4(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_61(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_60(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_64(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_30(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_25(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_40(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_5(38, 38) && reg_3(39, 39) && reg_2(40, 40) && reg_41(41, 41) && reg_3(42, 42) && reg_2(43, 43) && reg_39(44, 44) && reg_3(45, 45) && reg_27(46, 46) && reg_2(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 129;
}
if(reg_1(0, 0) && reg_30(1, 1) && reg_64(2, 2) && reg_1(3, 3) && reg_3(4, 4) && reg_32(5, 5) && reg_36(6, 6) && reg_10(7, 7) && reg_20(8, 8) && reg_13(9, 9) && reg_7(10, 10) && reg_22(11, 11) && reg_13(12, 12) && reg_51(13, 13) && reg_46(14, 14) && reg_9(15, 15) && reg_3(16, 16) && reg_32(17, 17) && reg_24(18, 18)) {
matched = true;
pattern_id = 130;
}
if(reg_2(0, 0) && reg_27(1, 1) && reg_0(2, 2) && reg_35(3, 3) && reg_11(4, 4) && reg_43(5, 5) && reg_4(6, 6) && reg_61(7, 7) && reg_60(8, 8) && reg_64(9, 9) && reg_13(10, 10) && reg_51(11, 11) && reg_42(12, 12) && reg_48(13, 13) && reg_9(14, 14) && reg_23(15, 15) && reg_47(16, 16) && reg_18(17, 17) && reg_7(18, 18) && reg_57(19, 19) && reg_52(20, 20) && reg_46(21, 21) && reg_34(22, 22) && reg_22(23, 23) && reg_24(24, 24) && reg_37(25, 25)) {
matched = true;
pattern_id = 131;
}
if(reg_78(0, 0) && reg_78(1, 1) && reg_78(2, 2) && reg_78(3, 3) && reg_78(4, 4) && reg_78(5, 5) && reg_78(6, 6) && reg_78(7, 7) && reg_78(8, 8) && reg_78(9, 9) && reg_78(10, 10) && reg_78(11, 11) && reg_78(12, 12) && reg_78(13, 13) && reg_78(14, 14) && reg_78(15, 15)) {
matched = true;
pattern_id = 132;
}
if(reg_45(0, 0) && reg_50(1, 1) && reg_9(2, 2) && reg_20(3, 3) && reg_9(4, 4) && reg_6(5, 5) && reg_45(6, 6) && reg_51(7, 7) && reg_9(8, 8) && reg_10(9, 9) && reg_9(10, 10) && reg_30(11, 11) && reg_6(12, 12) && reg_34(13, 13) && reg_13(14, 14) && reg_48(15, 15)) {
matched = true;
pattern_id = 133;
}
if(reg_5(0, 0) && reg_13(1, 1) && reg_20(2, 2) && reg_13(3, 3) && reg_1(4, 4) && reg_2(5, 5) && reg_2(6, 6) && reg_3(7, 7) && reg_2(8, 8) && reg_2(9, 9) && reg_3(10, 10) && reg_2(11, 11) && reg_2(12, 12) && reg_3(13, 13) && reg_2(14, 14) && reg_2(15, 15) && reg_3(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_3(19, 19) && reg_2(20, 20) && reg_2(21, 21) && reg_3(22, 22) && reg_2(23, 23) && reg_2(24, 24) && reg_3(25, 25) && reg_2(26, 26) && reg_2(27, 27) && reg_3(28, 28) && reg_2(29, 29) && reg_2(30, 30) && reg_3(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_3(34, 34) && reg_2(35, 35) && reg_2(36, 36) && reg_3(37, 37) && reg_2(38, 38) && reg_2(39, 39) && reg_1(40, 40)) {
matched = true;
pattern_id = 134;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_60(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_11(5, 5) && reg_1(6, 6) && reg_3(7, 7) && reg_3(8, 8) && reg_3(9, 9) && reg_3(10, 10) && reg_3(11, 11) && reg_3(12, 12) && reg_3(13, 13) && reg_3(14, 14) && reg_3(15, 15) && reg_3(16, 16) && reg_3(17, 17) && reg_3(18, 18) && reg_3(19, 19) && reg_3(20, 20)) {
matched = true;
pattern_id = 135;
}
if(reg_13(0, 0) && reg_51(1, 1) && reg_42(2, 2) && reg_48(3, 3) && reg_9(4, 4) && reg_23(5, 5) && reg_47(6, 6) && reg_18(7, 7) && reg_7(8, 8) && reg_57(9, 9) && reg_52(10, 10) && reg_46(11, 11) && reg_34(12, 12) && reg_22(13, 13) && reg_24(14, 14) && reg_37(15, 15)) {
matched = true;
pattern_id = 136;
}
if(reg_21(0, 0) && reg_32(1, 1) && reg_32(2, 2) && reg_44(3, 3) && reg_26(4, 4) && reg_19(5, 5) && reg_33(6, 6) && reg_68(7, 7)) {
matched = true;
pattern_id = 137;
}
if(reg_30(0, 0) && reg_25(1, 1) && reg_40(2, 2) && reg_5(3, 3) && reg_41(4, 4) && reg_39(5, 5) && reg_19(6, 6) && reg_29(7, 7) && reg_21(8, 8) && reg_74(9, 9) && reg_62(10, 10) && reg_56(11, 11) && reg_50(12, 12) && reg_26(13, 13) && reg_45(14, 14) && reg_44(15, 15) && reg_68(16, 16) && reg_33(17, 17) && reg_32(18, 18) && reg_31(19, 19) && reg_38(20, 20) && reg_72(21, 21) && reg_28(22, 22) && reg_30(23, 23) && reg_25(24, 24) && reg_40(25, 25) && reg_5(26, 26) && reg_41(27, 27) && reg_39(28, 28) && reg_19(29, 29) && reg_29(30, 30) && reg_21(31, 31)) {
matched = true;
pattern_id = 138;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_2(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_2(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_3(39, 39) && reg_2(40, 40) && reg_2(41, 41) && reg_3(42, 42) && reg_2(43, 43) && reg_2(44, 44) && reg_3(45, 45) && reg_2(46, 46) && reg_2(47, 47) && reg_3(48, 48) && reg_2(49, 49) && reg_2(50, 50) && reg_3(51, 51) && reg_2(52, 52) && reg_2(53, 53) && reg_3(54, 54) && reg_2(55, 55) && reg_2(56, 56) && reg_3(57, 57) && reg_2(58, 58) && reg_2(59, 59) && reg_1(60, 60)) {
matched = true;
pattern_id = 139;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24)) {
matched = true;
pattern_id = 140;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_1(12, 12) && reg_41(13, 13) && reg_41(14, 14) && reg_41(15, 15) && reg_41(16, 16) && reg_41(17, 17) && reg_41(18, 18) && reg_41(19, 19) && reg_41(20, 20) && reg_41(21, 21) && reg_41(22, 22) && reg_41(23, 23) && reg_41(24, 24)) {
matched = true;
pattern_id = 141;
}
if(reg_60(0, 0) && reg_64(1, 1) && reg_1(2, 2) && reg_35(3, 3) && reg_30(4, 4) && reg_3(5, 5) && reg_35(6, 6) && reg_25(7, 7) && reg_1(8, 8) && reg_66(9, 9) && reg_78(10, 10) && reg_59(11, 11) && reg_63(12, 12)) {
matched = true;
pattern_id = 142;
}
if(reg_31(0, 0) && reg_74(1, 1) && reg_44(2, 2) && reg_7(3, 3) && reg_22(4, 4) && reg_47(5, 5) && reg_44(6, 6) && reg_6(7, 7) && reg_24(8, 8) && reg_3(9, 9) && reg_51(10, 10) && reg_49(11, 11) && reg_3(12, 12) && reg_74(13, 13) && reg_7(14, 14) && reg_34(15, 15)) {
matched = true;
pattern_id = 143;
}
if(reg_28(0, 0) && reg_18(1, 1) && reg_13(2, 2) && reg_20(3, 3) && reg_10(4, 4) && reg_38(5, 5) && reg_37(6, 6) && reg_3(7, 7) && reg_77(8, 8) && reg_3(9, 9) && reg_30(10, 10) && reg_3(11, 11) && reg_26(12, 12) && reg_9(13, 13) && reg_20(14, 14) && reg_15(15, 15)) {
matched = true;
pattern_id = 144;
}
if(reg_1(0, 0) && reg_30(1, 1) && reg_30(2, 2) && reg_3(3, 3) && reg_30(4, 4) && reg_30(5, 5) && reg_3(6, 6) && reg_30(7, 7) && reg_30(8, 8) && reg_3(9, 9) && reg_30(10, 10) && reg_30(11, 11) && reg_3(12, 12) && reg_30(13, 13) && reg_30(14, 14) && reg_3(15, 15) && reg_30(16, 16) && reg_30(17, 17) && reg_3(18, 18) && reg_30(19, 19) && reg_30(20, 20) && reg_3(21, 21) && reg_30(22, 22) && reg_30(23, 23) && reg_3(24, 24) && reg_30(25, 25) && reg_30(26, 26) && reg_3(27, 27) && reg_30(28, 28) && reg_30(29, 29) && reg_3(30, 30) && reg_30(31, 31) && reg_30(32, 32) && reg_3(33, 33) && reg_30(34, 34) && reg_30(35, 35) && reg_3(36, 36) && reg_30(37, 37) && reg_30(38, 38) && reg_3(39, 39) && reg_30(40, 40) && reg_30(41, 41) && reg_3(42, 42) && reg_30(43, 43) && reg_30(44, 44) && reg_3(45, 45) && reg_30(46, 46) && reg_30(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 145;
}
if(reg_40(0, 0) && reg_7(1, 1) && reg_22(2, 2) && reg_42(3, 3) && reg_24(4, 4) && reg_3(5, 5) && reg_26(6, 6) && reg_9(7, 7) && reg_20(8, 8) && reg_15(9, 9) && reg_24(10, 10) && reg_6(11, 11) && reg_52(12, 12) && reg_79(13, 13) && reg_3(14, 14) && reg_21(15, 15) && reg_22(16, 16) && reg_42(17, 17) && reg_17(18, 18)) {
matched = true;
pattern_id = 146;
}
if(reg_44(0, 0) && reg_30(1, 1) && reg_32(2, 2) && reg_32(3, 3)) {
matched = true;
pattern_id = 147;
}
if(reg_25(0, 0) && reg_13(1, 1) && reg_20(2, 2) && reg_20(3, 3) && reg_46(4, 4) && reg_9(5, 5) && reg_50(6, 6) && reg_13(7, 7) && reg_7(8, 8) && reg_46(9, 9)) {
matched = true;
pattern_id = 148;
}
if(reg_43(0, 0) && reg_35(1, 1) && reg_2(2, 2) && reg_3(3, 3)) {
matched = true;
pattern_id = 149;
}
if(reg_56(0, 0) && reg_24(1, 1) && reg_47(2, 2) && reg_7(3, 3) && reg_22(4, 4) && reg_3(5, 5) && reg_23(6, 6) && reg_13(7, 7) && reg_7(8, 8) && reg_46(9, 9) && reg_9(10, 10) && reg_48(11, 11)) {
matched = true;
pattern_id = 150;
}
if(reg_28(0, 0) && reg_9(1, 1) && reg_46(2, 2) && reg_42(3, 3) && reg_24(4, 4) && reg_34(5, 5) && reg_9(6, 6) && reg_53(7, 7) && reg_37(8, 8) && reg_10(9, 9) && reg_49(10, 10) && reg_25(11, 11) && reg_26(12, 12) && reg_40(13, 13) && reg_71(14, 14) && reg_46(15, 15) && reg_13(16, 16) && reg_34(17, 17) && reg_35(18, 18) && reg_6(19, 19) && reg_14(20, 20) && reg_17(21, 21) && reg_48(22, 22) && reg_9(23, 23)) {
matched = true;
pattern_id = 151;
}
if(reg_40(0, 0) && reg_24(1, 1) && reg_34(2, 2) && reg_34(3, 3) && reg_13(4, 4) && reg_22(5, 5) && reg_48(6, 6) && reg_3(7, 7) && reg_42(8, 8) && reg_24(9, 9) && reg_34(10, 10) && reg_37(11, 11) && reg_46(12, 12) && reg_9(13, 13) && reg_20(14, 14) && reg_9(15, 15) && reg_48(16, 16)) {
matched = true;
pattern_id = 152;
}
if(reg_25(0, 0) && reg_13(1, 1) && reg_48(2, 2) && reg_3(3, 3) && reg_42(4, 4) && reg_24(5, 5) && reg_34(6, 6) && reg_34(7, 7) && reg_13(8, 8) && reg_22(9, 9) && reg_48(10, 10) && reg_3(11, 11) && reg_24(12, 12) && reg_6(13, 13) && reg_3(14, 14) && reg_23(15, 15) && reg_7(16, 16) && reg_46(17, 17) && reg_9(18, 18) && reg_22(19, 19) && reg_13(20, 20) && reg_34(21, 21) && reg_9(22, 22)) {
matched = true;
pattern_id = 153;
}
if(reg_27(0, 0) && reg_3(1, 1) && reg_23(2, 2) && reg_7(3, 3) && reg_46(4, 4) && reg_9(5, 5) && reg_1(6, 6) && reg_0(7, 7) && reg_60(8, 8) && reg_1(9, 9) && reg_10(10, 10) && reg_1(11, 11) && reg_0(12, 12) && reg_64(13, 13) && reg_1(14, 14) && reg_3(15, 15) && reg_42(16, 16) && reg_24(17, 17) && reg_37(18, 18) && reg_7(19, 19) && reg_9(20, 20) && reg_48(21, 21)) {
matched = true;
pattern_id = 154;
}
if(reg_36(0, 0) && reg_7(1, 1) && reg_48(2, 2) && reg_78(3, 3) && reg_2(4, 4) && reg_1(5, 5) && reg_0(6, 6) && reg_60(7, 7) && reg_1(8, 8) && reg_6(9, 9) && reg_24(10, 10) && reg_24(11, 11) && reg_20(12, 12) && reg_1(13, 13) && reg_0(14, 14) && reg_64(15, 15) && reg_1(16, 16)) {
matched = true;
pattern_id = 155;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_43(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_1(6, 6) && reg_59(7, 7)) {
matched = true;
pattern_id = 156;
}
if(reg_30(0, 0) && reg_5(1, 1) && reg_50(2, 2) && reg_21(3, 3) && reg_26(4, 4) && reg_21(5, 5) && reg_32(6, 6) && reg_31(7, 7) && reg_33(8, 8) && reg_30(9, 9) && reg_31(10, 10) && reg_45(11, 11) && reg_33(12, 12)) {
matched = true;
pattern_id = 157;
}
if(reg_23(0, 0) && reg_20(1, 1) && reg_37(2, 2) && reg_1(3, 3) && reg_35(4, 4) && reg_30(5, 5) && reg_1(6, 6)) {
matched = true;
pattern_id = 158;
}
if(reg_37(0, 0) && reg_42(1, 1) && reg_42(2, 2) && reg_10(3, 3) && reg_34(4, 4) && reg_49(5, 5) && reg_10(6, 6) && reg_12(7, 7) && reg_46(8, 8) && reg_13(9, 9) && reg_48(10, 10) && reg_34(11, 11) && reg_58(12, 12) && reg_7(13, 13) && reg_22(14, 14) && reg_42(15, 15) && reg_10(16, 16) && reg_58(17, 17) && reg_48(18, 18) && reg_51(19, 19) && reg_42(20, 20) && reg_24(21, 21) && reg_22(22, 22) && reg_22(23, 23) && reg_9(24, 24) && reg_42(25, 25) && reg_20(26, 26) && reg_17(27, 27) && reg_7(28, 28) && reg_22(29, 29) && reg_42(30, 30)) {
matched = true;
pattern_id = 159;
}
if(reg_71(0, 0) && reg_44(1, 1) && reg_74(2, 2) && reg_56(3, 3) && reg_3(4, 4) && reg_33(5, 5) && reg_5(6, 6) && reg_80(7, 7) && reg_50(8, 8) && reg_32(9, 9) && reg_19(10, 10) && reg_3(11, 11) && reg_5(12, 12) && reg_21(13, 13) && reg_32(14, 14) && reg_44(15, 15) && reg_56(16, 16) && reg_30(17, 17) && reg_80(18, 18) && reg_3(19, 19) && reg_78(20, 20)) {
matched = true;
pattern_id = 160;
}
if(reg_21(0, 0) && reg_22(1, 1) && reg_8(2, 2) && reg_13(3, 3) && reg_46(4, 4) && reg_7(5, 5) && reg_48(6, 6) && reg_3(7, 7) && reg_46(8, 8) && reg_24(9, 9) && reg_47(10, 10) && reg_7(11, 11) && reg_22(12, 12)) {
matched = true;
pattern_id = 161;
}
if(reg_19(0, 0) && reg_41(1, 1) && reg_31(2, 2) && reg_3(3, 3)) {
matched = true;
pattern_id = 162;
}
if(reg_67(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_4(3, 3) && reg_3(4, 4) && reg_27(5, 5) && reg_2(6, 6) && reg_1(7, 7) && reg_71(8, 8) && reg_1(9, 9) && reg_27(10, 10) && reg_11(11, 11) && reg_3(12, 12) && reg_5(13, 13) && reg_27(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_0(17, 17) && reg_3(18, 18) && reg_27(19, 19) && reg_64(20, 20) && reg_1(21, 21)) {
matched = true;
pattern_id = 163;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_27(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_35(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_27(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_1(21, 21)) {
matched = true;
pattern_id = 164;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_0(5, 5) && reg_1(6, 6)) {
matched = true;
pattern_id = 165;
}
if(reg_17(0, 0) && reg_17(1, 1)) {
matched = true;
pattern_id = 166;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_27(5, 5) && reg_1(6, 6) && reg_58(7, 7)) {
matched = true;
pattern_id = 167;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 168;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_1(12, 12) && reg_28(13, 13) && reg_1(14, 14) && reg_2(15, 15) && reg_2(16, 16) && reg_1(17, 17) && reg_7(18, 18) && reg_1(19, 19) && reg_2(20, 20) && reg_2(21, 21) && reg_1(22, 22) && reg_22(23, 23) && reg_1(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_1(27, 27) && reg_48(28, 28) && reg_1(29, 29) && reg_2(30, 30) && reg_2(31, 31) && reg_1(32, 32) && reg_24(33, 33) && reg_1(34, 34) && reg_2(35, 35) && reg_2(36, 36) && reg_1(37, 37) && reg_15(38, 38) && reg_1(39, 39) && reg_2(40, 40) && reg_2(41, 41) && reg_1(42, 42) && reg_10(43, 43) && reg_1(44, 44) && reg_2(45, 45) && reg_2(46, 46) && reg_1(47, 47) && reg_3(48, 48) && reg_1(49, 49) && reg_2(50, 50) && reg_2(51, 51) && reg_1(52, 52) && reg_26(53, 53) && reg_1(54, 54) && reg_2(55, 55) && reg_2(56, 56) && reg_1(57, 57) && reg_31(58, 58) && reg_1(59, 59) && reg_2(60, 60) && reg_2(61, 61) && reg_1(62, 62) && reg_3(63, 63) && reg_1(64, 64) && reg_2(65, 65) && reg_2(66, 66) && reg_1(67, 67) && reg_27(68, 68) && reg_1(69, 69) && reg_2(70, 70) && reg_2(71, 71) && reg_1(72, 72) && reg_35(73, 73) && reg_1(74, 74) && reg_2(75, 75) && reg_2(76, 76) && reg_1(77, 77) && reg_60(78, 78) && reg_1(79, 79) && reg_2(80, 80) && reg_2(81, 81) && reg_1(82, 82) && reg_27(83, 83)) {
matched = true;
pattern_id = 169;
}
if(reg_1(0, 0) && reg_43(1, 1) && reg_40(2, 2) && reg_1(3, 3) && reg_17(4, 4) && reg_17(5, 5) && reg_58(6, 6) && reg_1(7, 7) && reg_2(8, 8) && reg_2(9, 9) && reg_3(10, 10) && reg_2(11, 11) && reg_2(12, 12) && reg_3(13, 13) && reg_2(14, 14) && reg_2(15, 15) && reg_1(16, 16)) {
matched = true;
pattern_id = 170;
}
if(reg_1(0, 0) && reg_43(1, 1) && reg_40(2, 2) && reg_1(3, 3) && reg_17(4, 4) && reg_17(5, 5) && reg_17(6, 6) && reg_1(7, 7) && reg_2(8, 8) && reg_2(9, 9) && reg_3(10, 10) && reg_2(11, 11) && reg_2(12, 12) && reg_3(13, 13) && reg_2(14, 14) && reg_2(15, 15) && reg_1(16, 16)) {
matched = true;
pattern_id = 171;
}
if(reg_50(0, 0) && reg_32(1, 1) && reg_19(2, 2) && reg_3(3, 3)) {
matched = true;
pattern_id = 172;
}
if(reg_38(0, 0) && reg_10(1, 1) && reg_9(2, 2) && reg_6(3, 3) && reg_77(4, 4) && reg_30(5, 5) && reg_47(6, 6) && reg_9(7, 7) && reg_22(8, 8) && reg_20(9, 9) && reg_1(10, 10) && reg_35(11, 11) && reg_30(12, 12) && reg_1(13, 13) && reg_21(14, 14) && reg_40(15, 15) && reg_68(16, 16)) {
matched = true;
pattern_id = 173;
}
if(reg_26(0, 0) && reg_21(1, 1) && reg_40(2, 2) && reg_62(3, 3) && reg_3(4, 4)) {
matched = true;
pattern_id = 174;
}
if(reg_32(0, 0) && reg_31(1, 1) && reg_45(2, 2) && reg_33(3, 3)) {
matched = true;
pattern_id = 175;
}
if(reg_40(0, 0) && reg_28(1, 1) && reg_5(2, 2) && reg_3(3, 3) && reg_3(4, 4)) {
matched = true;
pattern_id = 176;
}
if(reg_50(0, 0) && reg_62(1, 1) && reg_5(2, 2) && reg_3(3, 3) && reg_3(4, 4)) {
matched = true;
pattern_id = 177;
}
if(reg_50(0, 0) && reg_62(1, 1) && reg_5(2, 2) && reg_3(3, 3) && reg_17(4, 4)) {
matched = true;
pattern_id = 178;
}
if(reg_50(0, 0) && reg_62(1, 1) && reg_5(2, 2)) {
matched = true;
pattern_id = 179;
}
if(reg_28(0, 0) && reg_7(1, 1) && reg_22(2, 2) && reg_19(3, 3) && reg_13(4, 4) && reg_20(5, 5) && reg_9(6, 6) && reg_59(7, 7)) {
matched = true;
pattern_id = 180;
}
if(reg_19(0, 0) && reg_26(1, 1) && reg_38(2, 2) && reg_31(3, 3) && reg_41(4, 4) && reg_56(5, 5) && reg_56(6, 6) && reg_30(7, 7) && reg_3(8, 8) && reg_40(9, 9) && reg_45(10, 10) && reg_26(11, 11) && reg_26(12, 12) && reg_41(13, 13) && reg_40(14, 14) && reg_31(15, 15)) {
matched = true;
pattern_id = 181;
}
if(reg_19(0, 0) && reg_26(1, 1) && reg_38(2, 2) && reg_31(3, 3) && reg_41(4, 4) && reg_56(5, 5) && reg_56(6, 6) && reg_30(7, 7) && reg_3(8, 8) && reg_45(9, 9) && reg_62(10, 10)) {
matched = true;
pattern_id = 182;
}
if(reg_33(0, 0) && reg_39(1, 1) && reg_25(2, 2) && reg_3(3, 3) && reg_2(4, 4)) {
matched = true;
pattern_id = 183;
}
if(reg_32(0, 0) && reg_31(1, 1)) {
matched = true;
pattern_id = 184;
}
if(reg_43(0, 0) && reg_43(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_43(4, 4) && reg_17(5, 5) && reg_61(6, 6) && reg_17(7, 7) && reg_27(8, 8)) {
matched = true;
pattern_id = 185;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_27(5, 5) && reg_3(6, 6) && reg_60(7, 7) && reg_61(8, 8) && reg_3(9, 9) && reg_64(10, 10) && reg_64(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 186;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_27(5, 5) && reg_3(6, 6) && reg_60(7, 7) && reg_4(8, 8) && reg_3(9, 9) && reg_30(10, 10) && reg_43(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 187;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_27(5, 5) && reg_3(6, 6) && reg_60(7, 7) && reg_4(8, 8) && reg_3(9, 9) && reg_30(10, 10) && reg_2(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 188;
}
if(reg_1(0, 0) && reg_35(1, 1) && reg_30(2, 2) && reg_3(3, 3) && reg_35(4, 4) && reg_30(5, 5) && reg_3(6, 6) && reg_35(7, 7) && reg_30(8, 8) && reg_3(9, 9) && reg_35(10, 10) && reg_30(11, 11) && reg_3(12, 12) && reg_35(13, 13) && reg_30(14, 14) && reg_3(15, 15) && reg_35(16, 16) && reg_30(17, 17) && reg_3(18, 18) && reg_35(19, 19) && reg_30(20, 20) && reg_3(21, 21) && reg_35(22, 22) && reg_30(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_35(28, 28) && reg_30(29, 29) && reg_3(30, 30) && reg_35(31, 31) && reg_30(32, 32) && reg_3(33, 33) && reg_35(34, 34) && reg_30(35, 35) && reg_3(36, 36) && reg_35(37, 37) && reg_30(38, 38) && reg_3(39, 39) && reg_35(40, 40) && reg_30(41, 41) && reg_3(42, 42) && reg_35(43, 43) && reg_30(44, 44) && reg_3(45, 45) && reg_35(46, 46) && reg_30(47, 47) && reg_3(48, 48) && reg_35(49, 49) && reg_30(50, 50) && reg_1(51, 51)) {
matched = true;
pattern_id = 189;
}
if(reg_51(0, 0) && reg_7(1, 1) && reg_22(2, 2) && reg_1(3, 3) && reg_2(4, 4) && reg_2(5, 5) && reg_1(6, 6) && reg_51(7, 7) && reg_7(8, 8) && reg_22(9, 9) && reg_1(10, 10) && reg_2(11, 11) && reg_2(12, 12) && reg_1(13, 13)) {
matched = true;
pattern_id = 190;
}
if(reg_9(0, 0) && reg_42(1, 1) && reg_18(2, 2) && reg_24(3, 3) && reg_3(4, 4) && reg_1(5, 5) && reg_0(6, 6) && reg_0(7, 7) && reg_1(8, 8) && reg_3(9, 9) && reg_67(10, 10) && reg_3(11, 11) && reg_67(12, 12) && reg_3(13, 13) && reg_1(14, 14) && reg_0(15, 15) && reg_0(16, 16) && reg_1(17, 17)) {
matched = true;
pattern_id = 191;
}
if(reg_77(0, 0) && reg_23(1, 1) && reg_6(2, 2) && reg_24(3, 3) && reg_24(4, 4) && reg_20(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9)) {
matched = true;
pattern_id = 192;
}
if(reg_46(0, 0) && reg_24(1, 1) && reg_47(2, 2) && reg_7(3, 3) && reg_22(4, 4) && reg_3(5, 5) && reg_7(6, 6) && reg_22(7, 7) && reg_42(8, 8) && reg_24(9, 9) && reg_6(10, 10) && reg_6(11, 11) && reg_9(12, 12) && reg_42(13, 13) && reg_20(14, 14)) {
matched = true;
pattern_id = 193;
}
if(reg_6(0, 0) && reg_24(1, 1) && reg_24(2, 2) && reg_20(3, 3) && reg_1(4, 4) && reg_2(5, 5) && reg_2(6, 6) && reg_1(7, 7) && reg_6(8, 8) && reg_24(9, 9) && reg_24(10, 10) && reg_20(11, 11) && reg_1(12, 12) && reg_2(13, 13) && reg_2(14, 14) && reg_1(15, 15)) {
matched = true;
pattern_id = 194;
}
if(reg_9(0, 0) && reg_42(1, 1) && reg_18(2, 2) && reg_24(3, 3) && reg_3(4, 4) && reg_1(5, 5) && reg_0(6, 6) && reg_0(7, 7) && reg_1(8, 8) && reg_67(9, 9) && reg_3(10, 10) && reg_67(11, 11) && reg_1(12, 12) && reg_0(13, 13) && reg_0(14, 14) && reg_1(15, 15)) {
matched = true;
pattern_id = 195;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_1(3, 3) && reg_6(4, 4) && reg_24(5, 5) && reg_24(6, 6) && reg_20(7, 7) && reg_1(8, 8) && reg_2(9, 9) && reg_2(10, 10) && reg_1(11, 11)) {
matched = true;
pattern_id = 196;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_27(2, 2) && reg_1(3, 3) && reg_6(4, 4) && reg_46(5, 5) && reg_24(6, 6) && reg_47(7, 7) && reg_7(8, 8) && reg_22(9, 9) && reg_48(10, 10) && reg_1(11, 11) && reg_35(12, 12) && reg_30(13, 13) && reg_1(14, 14) && reg_3(15, 15) && reg_44(16, 16) && reg_9(17, 17) && reg_6(18, 18) && reg_34(19, 19) && reg_7(20, 20) && reg_10(21, 21) && reg_10(22, 22) && reg_7(23, 23) && reg_24(24, 24) && reg_22(25, 25) && reg_3(26, 26) && reg_48(27, 27) && reg_9(28, 28) && reg_22(29, 29) && reg_7(30, 30) && reg_9(31, 31) && reg_48(32, 32) && reg_17(33, 33)) {
matched = true;
pattern_id = 197;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_27(5, 5) && reg_3(6, 6) && reg_60(7, 7) && reg_4(8, 8) && reg_3(9, 9) && reg_30(10, 10) && reg_0(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 198;
}
if(reg_30(0, 0)) {
matched = true;
pattern_id = 199;
}
if(reg_72(0, 0) && reg_41(1, 1) && reg_33(2, 2) && reg_32(3, 3) && reg_21(4, 4) && reg_45(5, 5) && reg_26(6, 6) && reg_1(7, 7) && reg_2(8, 8) && reg_30(9, 9) && reg_1(10, 10)) {
matched = true;
pattern_id = 200;
}
if(reg_30(0, 0) && reg_30(1, 1) && reg_30(2, 2) && reg_30(3, 3) && reg_30(4, 4) && reg_30(5, 5) && reg_30(6, 6) && reg_30(7, 7) && reg_30(8, 8) && reg_30(9, 9) && reg_30(10, 10) && reg_30(11, 11) && reg_30(12, 12) && reg_30(13, 13) && reg_30(14, 14) && reg_30(15, 15)) {
matched = true;
pattern_id = 201;
}
if(reg_9(0, 0) && reg_18(1, 1) && reg_46(2, 2) && reg_24(3, 3) && reg_3(4, 4) && reg_42(5, 5) && reg_49(6, 6) && reg_51(7, 7) && reg_9(8, 8) && reg_6(9, 9) && reg_42(10, 10) && reg_24(11, 11) && reg_37(12, 12) && reg_1(13, 13) && reg_2(14, 14) && reg_30(15, 15) && reg_1(16, 16) && reg_12(17, 17) && reg_36(18, 18) && reg_7(19, 19) && reg_20(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_30(23, 23) && reg_1(24, 24)) {
matched = true;
pattern_id = 202;
}
if(reg_9(0, 0) && reg_16(1, 1) && reg_37(2, 2) && reg_22(3, 3) && reg_3(4, 4) && reg_42(5, 5) && reg_49(6, 6) && reg_51(7, 7) && reg_9(8, 8) && reg_6(9, 9) && reg_42(10, 10) && reg_24(11, 11) && reg_37(12, 12)) {
matched = true;
pattern_id = 203;
}
if(reg_30(0, 0) && reg_34(1, 1) && reg_13(2, 2) && reg_22(3, 3) && reg_48(4, 4) && reg_13(5, 5)) {
matched = true;
pattern_id = 204;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_61(5, 5) && reg_3(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_2(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_61(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_2(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_2(22, 22) && reg_11(23, 23) && reg_3(24, 24) && reg_2(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_2(28, 28) && reg_2(29, 29) && reg_3(30, 30) && reg_2(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_2(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39)) {
matched = true;
pattern_id = 205;
}
if(reg_42(0, 0) && reg_49(1, 1) && reg_51(2, 2) && reg_9(3, 3) && reg_6(4, 4) && reg_42(5, 5) && reg_24(6, 6) && reg_37(7, 7)) {
matched = true;
pattern_id = 206;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_30(2, 2) && reg_1(3, 3) && reg_18(4, 4) && reg_9(5, 5) && reg_46(6, 6) && reg_37(7, 7) && reg_1(8, 8) && reg_2(9, 9) && reg_30(10, 10) && reg_1(11, 11) && reg_12(12, 12) && reg_36(13, 13) && reg_7(14, 14) && reg_20(15, 15) && reg_9(16, 16) && reg_1(17, 17) && reg_2(18, 18) && reg_30(19, 19) && reg_1(20, 20)) {
matched = true;
pattern_id = 207;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_35(2, 2) && reg_3(3, 3) && reg_41(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_39(7, 7) && reg_60(8, 8) && reg_1(9, 9) && reg_76(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_35(13, 13) && reg_3(14, 14) && reg_41(15, 15) && reg_2(16, 16) && reg_3(17, 17) && reg_39(18, 18) && reg_60(19, 19) && reg_1(20, 20) && reg_76(21, 21) && reg_1(22, 22) && reg_2(23, 23) && reg_35(24, 24) && reg_3(25, 25) && reg_41(26, 26) && reg_2(27, 27) && reg_3(28, 28) && reg_39(29, 29) && reg_60(30, 30) && reg_1(31, 31) && reg_76(32, 32) && reg_1(33, 33) && reg_2(34, 34) && reg_35(35, 35) && reg_3(36, 36) && reg_41(37, 37) && reg_2(38, 38) && reg_3(39, 39) && reg_39(40, 40) && reg_60(41, 41) && reg_1(42, 42) && reg_76(43, 43)) {
matched = true;
pattern_id = 208;
}
if(reg_1(0, 0) && reg_0(1, 1) && reg_11(2, 2) && reg_3(3, 3) && reg_2(4, 4) && reg_39(5, 5) && reg_3(6, 6) && reg_27(7, 7) && reg_0(8, 8) && reg_1(9, 9) && reg_11(10, 10) && reg_1(11, 11) && reg_0(12, 12) && reg_11(13, 13) && reg_3(14, 14) && reg_2(15, 15) && reg_39(16, 16) && reg_3(17, 17) && reg_27(18, 18) && reg_0(19, 19) && reg_1(20, 20) && reg_11(21, 21) && reg_1(22, 22) && reg_0(23, 23) && reg_11(24, 24) && reg_3(25, 25) && reg_2(26, 26) && reg_39(27, 27) && reg_3(28, 28) && reg_27(29, 29) && reg_0(30, 30) && reg_1(31, 31) && reg_11(32, 32) && reg_1(33, 33) && reg_0(34, 34) && reg_11(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_39(38, 38) && reg_3(39, 39) && reg_27(40, 40) && reg_0(41, 41) && reg_1(42, 42) && reg_11(43, 43)) {
matched = true;
pattern_id = 209;
}
if(reg_45(0, 0) && reg_1(1, 1) && reg_39(2, 2) && reg_39(3, 3) && reg_3(4, 4) && reg_39(5, 5) && reg_25(6, 6) && reg_3(7, 7) && reg_60(8, 8) && reg_0(9, 9) && reg_1(10, 10) && reg_45(11, 11) && reg_1(12, 12) && reg_39(13, 13) && reg_39(14, 14) && reg_3(15, 15) && reg_39(16, 16) && reg_25(17, 17) && reg_3(18, 18) && reg_60(19, 19) && reg_0(20, 20) && reg_1(21, 21) && reg_45(22, 22) && reg_1(23, 23) && reg_39(24, 24) && reg_39(25, 25) && reg_3(26, 26) && reg_39(27, 27) && reg_25(28, 28) && reg_3(29, 29) && reg_60(30, 30) && reg_0(31, 31) && reg_1(32, 32) && reg_45(33, 33) && reg_1(34, 34) && reg_39(35, 35) && reg_39(36, 36) && reg_3(37, 37) && reg_39(38, 38) && reg_25(39, 39) && reg_3(40, 40) && reg_60(41, 41) && reg_0(42, 42) && reg_1(43, 43)) {
matched = true;
pattern_id = 210;
}
if(reg_19(0, 0) && reg_1(1, 1) && reg_39(2, 2) && reg_39(3, 3) && reg_3(4, 4) && reg_2(5, 5) && reg_11(6, 6) && reg_3(7, 7) && reg_27(8, 8) && reg_39(9, 9) && reg_1(10, 10) && reg_19(11, 11) && reg_1(12, 12) && reg_39(13, 13) && reg_39(14, 14) && reg_3(15, 15) && reg_2(16, 16) && reg_11(17, 17) && reg_3(18, 18) && reg_27(19, 19) && reg_39(20, 20) && reg_1(21, 21) && reg_19(22, 22) && reg_1(23, 23) && reg_39(24, 24) && reg_39(25, 25) && reg_3(26, 26) && reg_2(27, 27) && reg_11(28, 28) && reg_3(29, 29) && reg_27(30, 30) && reg_39(31, 31) && reg_1(32, 32) && reg_19(33, 33) && reg_1(34, 34) && reg_39(35, 35) && reg_39(36, 36) && reg_3(37, 37) && reg_2(38, 38) && reg_11(39, 39) && reg_3(40, 40) && reg_27(41, 41) && reg_39(42, 42) && reg_1(43, 43)) {
matched = true;
pattern_id = 211;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_60(2, 2) && reg_1(3, 3) && reg_53(4, 4) && reg_1(5, 5) && reg_2(6, 6) && reg_0(7, 7) && reg_3(8, 8) && reg_60(9, 9) && reg_2(10, 10) && reg_3(11, 11) && reg_2(12, 12) && reg_60(13, 13) && reg_1(14, 14) && reg_53(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_0(18, 18) && reg_3(19, 19) && reg_60(20, 20) && reg_2(21, 21) && reg_3(22, 22) && reg_2(23, 23) && reg_60(24, 24) && reg_1(25, 25) && reg_53(26, 26) && reg_1(27, 27) && reg_2(28, 28) && reg_0(29, 29) && reg_3(30, 30) && reg_60(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_60(35, 35) && reg_1(36, 36) && reg_53(37, 37) && reg_1(38, 38) && reg_2(39, 39) && reg_0(40, 40) && reg_3(41, 41) && reg_60(42, 42) && reg_2(43, 43) && reg_1(44, 44)) {
matched = true;
pattern_id = 212;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_25(2, 2) && reg_1(3, 3) && reg_64(4, 4) && reg_1(5, 5) && reg_2(6, 6) && reg_0(7, 7) && reg_3(8, 8) && reg_60(9, 9) && reg_2(10, 10) && reg_3(11, 11) && reg_2(12, 12) && reg_25(13, 13) && reg_1(14, 14) && reg_64(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_0(18, 18) && reg_3(19, 19) && reg_60(20, 20) && reg_2(21, 21) && reg_3(22, 22) && reg_2(23, 23) && reg_25(24, 24) && reg_1(25, 25) && reg_64(26, 26) && reg_1(27, 27) && reg_2(28, 28) && reg_0(29, 29) && reg_3(30, 30) && reg_60(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_2(34, 34) && reg_25(35, 35) && reg_1(36, 36) && reg_64(37, 37) && reg_1(38, 38) && reg_2(39, 39) && reg_0(40, 40) && reg_3(41, 41) && reg_60(42, 42) && reg_2(43, 43) && reg_1(44, 44)) {
matched = true;
pattern_id = 213;
}
if(reg_1(0, 0) && reg_27(1, 1) && reg_35(2, 2) && reg_3(3, 3) && reg_40(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_27(7, 7) && reg_40(8, 8) && reg_3(9, 9) && reg_30(10, 10) && reg_4(11, 11) && reg_3(12, 12) && reg_27(13, 13) && reg_35(14, 14) && reg_3(15, 15) && reg_40(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_27(19, 19) && reg_40(20, 20) && reg_3(21, 21) && reg_30(22, 22) && reg_4(23, 23) && reg_3(24, 24) && reg_27(25, 25) && reg_35(26, 26) && reg_3(27, 27) && reg_40(28, 28) && reg_2(29, 29) && reg_3(30, 30) && reg_27(31, 31) && reg_40(32, 32) && reg_3(33, 33) && reg_30(34, 34) && reg_4(35, 35) && reg_3(36, 36) && reg_27(37, 37) && reg_35(38, 38) && reg_3(39, 39) && reg_40(40, 40) && reg_2(41, 41) && reg_3(42, 42) && reg_27(43, 43) && reg_40(44, 44) && reg_3(45, 45) && reg_30(46, 46) && reg_4(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 214;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_27(4, 4) && reg_40(5, 5) && reg_1(6, 6) && reg_71(7, 7) && reg_1(8, 8) && reg_27(9, 9) && reg_27(10, 10) && reg_3(11, 11) && reg_60(12, 12) && reg_2(13, 13) && reg_3(14, 14) && reg_27(15, 15) && reg_40(16, 16) && reg_1(17, 17) && reg_71(18, 18) && reg_1(19, 19) && reg_27(20, 20) && reg_27(21, 21) && reg_3(22, 22) && reg_60(23, 23) && reg_2(24, 24) && reg_3(25, 25) && reg_27(26, 26) && reg_40(27, 27) && reg_1(28, 28) && reg_71(29, 29) && reg_1(30, 30) && reg_27(31, 31) && reg_27(32, 32) && reg_3(33, 33) && reg_60(34, 34) && reg_2(35, 35) && reg_3(36, 36) && reg_27(37, 37) && reg_40(38, 38) && reg_1(39, 39) && reg_71(40, 40) && reg_1(41, 41) && reg_27(42, 42) && reg_27(43, 43) && reg_1(44, 44)) {
matched = true;
pattern_id = 215;
}
if(reg_1(0, 0) && reg_30(1, 1) && reg_4(2, 2) && reg_3(3, 3) && reg_27(4, 4) && reg_40(5, 5) && reg_3(6, 6) && reg_40(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_27(10, 10) && reg_35(11, 11) && reg_3(12, 12) && reg_30(13, 13) && reg_4(14, 14) && reg_3(15, 15) && reg_27(16, 16) && reg_40(17, 17) && reg_3(18, 18) && reg_40(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_27(22, 22) && reg_35(23, 23) && reg_3(24, 24) && reg_30(25, 25) && reg_4(26, 26) && reg_3(27, 27) && reg_27(28, 28) && reg_40(29, 29) && reg_3(30, 30) && reg_40(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_27(34, 34) && reg_35(35, 35) && reg_3(36, 36) && reg_30(37, 37) && reg_4(38, 38) && reg_3(39, 39) && reg_27(40, 40) && reg_40(41, 41) && reg_3(42, 42) && reg_40(43, 43) && reg_2(44, 44) && reg_3(45, 45) && reg_27(46, 46) && reg_35(47, 47) && reg_1(48, 48)) {
matched = true;
pattern_id = 216;
}
if(reg_1(0, 0) && reg_60(1, 1) && reg_0(2, 2) && reg_3(3, 3) && reg_27(4, 4) && reg_2(5, 5) && reg_1(6, 6) && reg_3(7, 7) && reg_1(8, 8) && reg_27(9, 9) && reg_61(10, 10) && reg_3(11, 11) && reg_64(12, 12) && reg_27(13, 13) && reg_3(14, 14) && reg_5(15, 15) && reg_2(16, 16) && reg_1(17, 17) && reg_3(18, 18) && reg_1(19, 19) && reg_2(20, 20) && reg_60(21, 21) && reg_1(22, 22)) {
matched = true;
pattern_id = 217;
}
if(reg_1(0, 0) && reg_64(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_64(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_64(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_64(10, 10) && reg_2(11, 11) && reg_3(12, 12) && reg_64(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_64(16, 16) && reg_2(17, 17) && reg_3(18, 18) && reg_64(19, 19) && reg_2(20, 20) && reg_3(21, 21) && reg_64(22, 22) && reg_2(23, 23) && reg_3(24, 24) && reg_64(25, 25) && reg_2(26, 26) && reg_3(27, 27) && reg_64(28, 28) && reg_2(29, 29) && reg_3(30, 30) && reg_64(31, 31) && reg_2(32, 32) && reg_3(33, 33) && reg_64(34, 34) && reg_2(35, 35) && reg_3(36, 36) && reg_64(37, 37) && reg_2(38, 38) && reg_3(39, 39) && reg_64(40, 40) && reg_2(41, 41) && reg_1(42, 42)) {
matched = true;
pattern_id = 218;
}
if(reg_1(0, 0) && reg_25(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_25(4, 4) && reg_43(5, 5) && reg_3(6, 6) && reg_40(7, 7) && reg_5(8, 8) && reg_3(9, 9) && reg_60(10, 10) && reg_2(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 219;
}
if(reg_1(0, 0) && reg_25(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_27(4, 4) && reg_61(5, 5) && reg_3(6, 6) && reg_40(7, 7) && reg_5(8, 8) && reg_3(9, 9) && reg_60(10, 10) && reg_2(11, 11) && reg_1(12, 12)) {
matched = true;
pattern_id = 220;
}
if(reg_1(0, 0) && reg_64(1, 1) && reg_2(2, 2) && reg_3(3, 3) && reg_64(4, 4) && reg_2(5, 5) && reg_3(6, 6) && reg_64(7, 7) && reg_2(8, 8) && reg_3(9, 9) && reg_41(10, 10) && reg_60(11, 11) && reg_3(12, 12) && reg_40(13, 13) && reg_2(14, 14) && reg_3(15, 15) && reg_39(16, 16) && reg_39(17, 17) && reg_3(18, 18) && reg_39(19, 19) && reg_39(20, 20) && reg_3(21, 21) && reg_39(22, 22) && reg_39(23, 23) && reg_1(24, 24) && reg_58(25, 25) && reg_51(26, 26) && reg_7(27, 27) && reg_22(28, 28) && reg_58(29, 29) && reg_10(30, 30) && reg_18(31, 31)) {
matched = true;
pattern_id = 221;
}
if(reg_6(0, 0) && reg_42(1, 1) && reg_37(2, 2) && reg_20(3, 3) && reg_3(4, 4) && reg_20(5, 5) && reg_24(6, 6) && reg_1(7, 7) && reg_35(8, 8) && reg_30(9, 9) && reg_1(10, 10)) {
matched = true;
pattern_id = 222;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_30(2, 2) && reg_1(3, 3) && reg_5(4, 4) && reg_58(5, 5)) {
matched = true;
pattern_id = 223;
}
if(reg_29(0, 0) && reg_41(1, 1) && reg_56(2, 2) && reg_44(3, 3)) {
matched = true;
pattern_id = 224;
}
if(reg_42(0, 0) && reg_18(1, 1) && reg_13(2, 2) && reg_6(3, 3) && reg_10(4, 4) && reg_9(5, 5) && reg_20(6, 6) && reg_3(7, 7) && reg_78(8, 8) && reg_3(9, 9) && reg_1(10, 10) && reg_0(11, 11) && reg_0(12, 12) && reg_3(13, 13) && reg_0(14, 14) && reg_0(15, 15) && reg_1(16, 16)) {
matched = true;
pattern_id = 225;
}
if(reg_9(0, 0) && reg_16(1, 1) && reg_37(2, 2) && reg_22(3, 3)) {
matched = true;
pattern_id = 226;
}
if(reg_9(0, 0) && reg_37(1, 1) && reg_46(2, 2) && reg_49(3, 3) && reg_77(4, 4) && reg_20(5, 5) && reg_24(6, 6) && reg_1(7, 7) && reg_35(8, 8) && reg_30(9, 9) && reg_1(10, 10) && reg_3(11, 11) && reg_13(12, 12) && reg_69(13, 13) && reg_17(14, 14) && reg_81(15, 15) && reg_58(16, 16) && reg_51(17, 17) && reg_7(18, 18) && reg_22(19, 19) && reg_58(20, 20)) {
matched = true;
pattern_id = 227;
}
if(reg_34(0, 0) && reg_13(1, 1) && reg_7(2, 2) && reg_46(3, 3) && reg_3(4, 4) && reg_23(5, 5) && reg_6(6, 6) && reg_24(7, 7) && reg_34(8, 8) && reg_1(9, 9) && reg_35(10, 10) && reg_30(11, 11) && reg_1(12, 12) && reg_3(13, 13) && reg_1(14, 14) && reg_0(15, 15) && reg_0(16, 16) && reg_3(17, 17) && reg_61(18, 18) && reg_40(19, 19) && reg_1(20, 20)) {
matched = true;
pattern_id = 228;
}
if(reg_50(0, 0) && reg_30(1, 1) && reg_21(2, 2) && reg_56(3, 3) && reg_3(4, 4) && reg_39(5, 5) && reg_33(6, 6) && reg_45(7, 7) && reg_50(8, 8) && reg_1(9, 9) && reg_35(10, 10) && reg_30(11, 11) && reg_1(12, 12) && reg_3(13, 13) && reg_1(14, 14) && reg_61(15, 15) && reg_40(16, 16) && reg_1(17, 17) && reg_58(18, 18) && reg_36(19, 19) && reg_10(20, 20) && reg_6(21, 21) && reg_58(22, 22) && reg_36(23, 23) && reg_42(24, 24) && reg_51(25, 25) && reg_58(26, 26) && reg_20(27, 27) && reg_13(28, 28) && reg_7(29, 29) && reg_46(30, 30)) {
matched = true;
pattern_id = 229;
}
if(reg_40(0, 0) && reg_6(1, 1) && reg_24(2, 2) && reg_24(3, 3) && reg_20(4, 4) && reg_1(5, 5) && reg_2(6, 6) && reg_5(7, 7) && reg_3(8, 8) && reg_2(9, 9) && reg_30(10, 10) && reg_1(11, 11) && reg_50(12, 12) && reg_37(13, 13) && reg_6(14, 14) && reg_24(15, 15) && reg_47(16, 16) && reg_79(17, 17) && reg_3(18, 18) && reg_44(19, 19) && reg_78(20, 20) && reg_58(21, 21) && reg_51(22, 22) && reg_7(23, 23) && reg_22(24, 24) && reg_58(25, 25)) {
matched = true;
pattern_id = 230;
}
if(reg_40(0, 0) && reg_6(1, 1) && reg_24(2, 2) && reg_24(3, 3) && reg_20(4, 4) && reg_1(5, 5) && reg_2(6, 6) && reg_64(7, 7) && reg_3(8, 8) && reg_2(9, 9) && reg_64(10, 10) && reg_3(11, 11) && reg_2(12, 12) && reg_64(13, 13) && reg_3(14, 14) && reg_2(15, 15) && reg_64(16, 16) && reg_3(17, 17) && reg_2(18, 18) && reg_64(19, 19) && reg_3(20, 20) && reg_2(21, 21) && reg_64(22, 22) && reg_3(23, 23) && reg_2(24, 24) && reg_64(25, 25) && reg_1(26, 26) && reg_50(27, 27) && reg_37(28, 28) && reg_6(29, 29) && reg_24(30, 30) && reg_47(31, 31) && reg_79(32, 32) && reg_44(33, 33) && reg_78(34, 34) && reg_58(35, 35) && reg_51(36, 36) && reg_7(37, 37) && reg_22(38, 38)) {
matched = true;
pattern_id = 231;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_30(2, 2) && reg_1(3, 3) && reg_40(4, 4) && reg_6(5, 5) && reg_24(6, 6) && reg_24(7, 7) && reg_20(8, 8) && reg_1(9, 9) && reg_2(10, 10) && reg_30(11, 11) && reg_1(12, 12) && reg_50(13, 13) && reg_37(14, 14) && reg_6(15, 15) && reg_24(16, 16) && reg_47(17, 17)) {
matched = true;
pattern_id = 232;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_30(2, 2) && reg_1(3, 3) && reg_40(4, 4) && reg_1(5, 5) && reg_35(6, 6) && reg_30(7, 7) && reg_1(8, 8) && reg_48(9, 9) && reg_13(10, 10) && reg_9(11, 11) && reg_34(12, 12) && reg_24(13, 13) && reg_22(14, 14) && reg_1(15, 15) && reg_2(16, 16) && reg_30(17, 17) && reg_1(18, 18) && reg_33(19, 19)) {
matched = true;
pattern_id = 233;
}
if(reg_1(0, 0) && reg_2(1, 1) && reg_30(2, 2) && reg_1(3, 3) && reg_40(4, 4) && reg_6(5, 5) && reg_24(6, 6) && reg_24(7, 7) && reg_20(8, 8) && reg_1(9, 9) && reg_2(10, 10) && reg_5(11, 11) && reg_3(12, 12) && reg_2(13, 13) && reg_30(14, 14) && reg_1(15, 15) && reg_50(16, 16) && reg_37(17, 17) && reg_6(18, 18) && reg_24(19, 19) && reg_47(20, 20)) {
matched = true;
pattern_id = 234;
}
if(reg_8(0, 0) && reg_6(1, 1) && reg_23(2, 2) && reg_49(3, 3)) {
matched = true;
pattern_id = 235;
}
if(reg_10(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_10(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_20(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_13(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29) && reg_6(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_20(35, 35) && reg_1(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39) && reg_73(40, 40) && reg_1(41, 41) && reg_2(42, 42) && reg_2(43, 43) && reg_1(44, 44) && reg_57(45, 45) && reg_1(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49) && reg_24(50, 50) && reg_1(51, 51) && reg_2(52, 52) && reg_2(53, 53) && reg_1(54, 54) && reg_51(55, 55) && reg_1(56, 56) && reg_2(57, 57) && reg_2(58, 58) && reg_1(59, 59)) {
matched = true;
pattern_id = 236;
}
if(reg_10(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_37(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_13(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_10(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29) && reg_10(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_15(35, 35) && reg_1(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39) && reg_24(40, 40) && reg_1(41, 41) && reg_2(42, 42) && reg_2(43, 43) && reg_1(44, 44) && reg_6(45, 45) && reg_1(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49) && reg_48(50, 50) && reg_1(51, 51) && reg_2(52, 52) && reg_2(53, 53) && reg_1(54, 54)) {
matched = true;
pattern_id = 237;
}
if(reg_10(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_48(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_9(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_46(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29) && reg_9(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_20(35, 35) && reg_1(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39) && reg_9(40, 40) && reg_1(41, 41) && reg_2(42, 42) && reg_2(43, 43) && reg_1(44, 44) && reg_73(45, 45) && reg_1(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49) && reg_13(50, 50) && reg_1(51, 51) && reg_2(52, 52) && reg_2(53, 53) && reg_1(54, 54) && reg_46(55, 55) && reg_1(56, 56) && reg_2(57, 57) && reg_2(58, 58) && reg_1(59, 59) && reg_9(60, 60) && reg_1(61, 61) && reg_2(62, 62) && reg_2(63, 63) && reg_1(64, 64)) {
matched = true;
pattern_id = 238;
}
if(reg_10(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_13(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_48(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_48(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29) && reg_36(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_10(35, 35) && reg_1(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39) && reg_9(40, 40) && reg_1(41, 41) && reg_2(42, 42) && reg_2(43, 43) && reg_1(44, 44) && reg_6(45, 45) && reg_1(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49)) {
matched = true;
pattern_id = 239;
}
if(reg_16(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_42(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_34(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_48(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29) && reg_10(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_18(35, 35) && reg_1(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39) && reg_9(40, 40) && reg_1(41, 41) && reg_2(42, 42) && reg_2(43, 43) && reg_1(44, 44) && reg_46(45, 45) && reg_1(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49) && reg_46(50, 50) && reg_1(51, 51) && reg_2(52, 52) && reg_2(53, 53) && reg_1(54, 54)) {
matched = true;
pattern_id = 240;
}
if(reg_10(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_48(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_9(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_46(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29) && reg_9(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_20(35, 35) && reg_1(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39) && reg_9(40, 40) && reg_1(41, 41) && reg_2(42, 42) && reg_2(43, 43) && reg_1(44, 44) && reg_73(45, 45) && reg_1(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49) && reg_13(50, 50) && reg_1(51, 51) && reg_2(52, 52) && reg_2(53, 53) && reg_1(54, 54) && reg_46(55, 55) && reg_1(56, 56) && reg_2(57, 57) && reg_2(58, 58) && reg_1(59, 59) && reg_9(60, 60) && reg_1(61, 61) && reg_2(62, 62) && reg_2(63, 63) && reg_1(64, 64) && reg_6(65, 65) && reg_1(66, 66) && reg_2(67, 67) && reg_2(68, 68) && reg_1(69, 69) && reg_20(70, 70) && reg_1(71, 71) && reg_2(72, 72) && reg_2(73, 73) && reg_1(74, 74)) {
matched = true;
pattern_id = 241;
}
if(reg_16(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_6(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_9(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_47(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29)) {
matched = true;
pattern_id = 242;
}
if(reg_56(0, 0) && reg_24(1, 1) && reg_47(2, 2) && reg_7(3, 3) && reg_22(4, 4) && reg_3(5, 5) && reg_23(6, 6) && reg_13(7, 7) && reg_7(8, 8) && reg_46(9, 9) && reg_9(10, 10) && reg_48(11, 11) && reg_3(12, 12) && reg_23(13, 13) && reg_24(14, 14) && reg_6(15, 15) && reg_3(16, 16) && reg_36(17, 17) && reg_10(18, 18) && reg_9(19, 19) && reg_6(20, 20) && reg_3(21, 21) && reg_82(22, 22) && reg_10(23, 23) && reg_13(24, 24) && reg_82(25, 25)) {
matched = true;
pattern_id = 243;
}
if(reg_64(0, 0) && reg_3(1, 1) && reg_1(2, 2) && reg_5(3, 3) && reg_2(4, 4) && reg_3(5, 5) && reg_2(6, 6) && reg_2(7, 7) && reg_3(8, 8) && reg_64(9, 9) && reg_0(10, 10) && reg_3(11, 11) && reg_2(12, 12) && reg_27(13, 13) && reg_3(14, 14) && reg_40(15, 15) && reg_0(16, 16) && reg_3(17, 17) && reg_2(18, 18) && reg_2(19, 19) && reg_1(20, 20) && reg_33(21, 21) && reg_1(22, 22) && reg_2(23, 23) && reg_2(24, 24) && reg_1(25, 25) && reg_38(26, 26) && reg_1(27, 27) && reg_2(28, 28) && reg_2(29, 29) && reg_1(30, 30) && reg_64(31, 31) && reg_3(32, 32) && reg_1(33, 33) && reg_41(34, 34) && reg_40(35, 35) && reg_3(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39)) {
matched = true;
pattern_id = 244;
}
if(reg_29(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_76(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_16(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_15(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_3(19, 19) && reg_64(20, 20) && reg_2(21, 21) && reg_3(22, 22) && reg_2(23, 23) && reg_2(24, 24) && reg_3(25, 25) && reg_64(26, 26) && reg_2(27, 27) && reg_3(28, 28) && reg_2(29, 29) && reg_2(30, 30) && reg_3(31, 31) && reg_64(32, 32) && reg_2(33, 33) && reg_3(34, 34) && reg_2(35, 35) && reg_2(36, 36) && reg_3(37, 37) && reg_64(38, 38) && reg_2(39, 39) && reg_3(40, 40) && reg_2(41, 41) && reg_2(42, 42) && reg_3(43, 43) && reg_64(44, 44) && reg_2(45, 45) && reg_3(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49) && reg_35(50, 50) && reg_1(51, 51) && reg_2(52, 52) && reg_2(53, 53) && reg_3(54, 54) && reg_40(55, 55) && reg_2(56, 56) && reg_3(57, 57) && reg_2(58, 58) && reg_2(59, 59) && reg_1(60, 60) && reg_44(61, 61) && reg_1(62, 62) && reg_2(63, 63) && reg_2(64, 64) && reg_1(65, 65) && reg_18(66, 66) && reg_1(67, 67) && reg_2(68, 68) && reg_2(69, 69) && reg_1(70, 70) && reg_17(71, 71) && reg_1(72, 72) && reg_2(73, 73) && reg_2(74, 74) && reg_1(75, 75)) {
matched = true;
pattern_id = 245;
}
if(reg_16(0, 0) && reg_1(1, 1) && reg_2(2, 2) && reg_2(3, 3) && reg_1(4, 4) && reg_37(5, 5) && reg_1(6, 6) && reg_2(7, 7) && reg_2(8, 8) && reg_1(9, 9) && reg_73(10, 10) && reg_1(11, 11) && reg_2(12, 12) && reg_2(13, 13) && reg_1(14, 14) && reg_10(15, 15) && reg_1(16, 16) && reg_2(17, 17) && reg_2(18, 18) && reg_1(19, 19) && reg_37(20, 20) && reg_1(21, 21) && reg_2(22, 22) && reg_2(23, 23) && reg_1(24, 24) && reg_6(25, 25) && reg_1(26, 26) && reg_2(27, 27) && reg_2(28, 28) && reg_1(29, 29) && reg_7(30, 30) && reg_1(31, 31) && reg_2(32, 32) && reg_2(33, 33) && reg_1(34, 34) && reg_22(35, 35) && reg_1(36, 36) && reg_2(37, 37) && reg_2(38, 38) && reg_1(39, 39) && reg_20(40, 40) && reg_1(41, 41) && reg_2(42, 42) && reg_2(43, 43) && reg_1(44, 44) && reg_23(45, 45) && reg_1(46, 46) && reg_2(47, 47) && reg_2(48, 48) && reg_1(49, 49)) {
matched = true;
pattern_id = 246;
}
if(reg_11(0, 0) && reg_5(1, 1) && reg_47(2, 2) && reg_7(3, 3) && reg_23(4, 4) && reg_20(5, 5) && reg_10(6, 6)) {
matched = true;
pattern_id = 247;
}
if(reg_45(0, 0) && reg_36(1, 1) && reg_20(2, 2) && reg_45(3, 3) && reg_23(4, 4) && reg_25(5, 5) && reg_24(6, 6) && reg_16(7, 7)) {
matched = true;
pattern_id = 248;
}
if(reg_73(0, 0) && reg_33(1, 1) && reg_56(2, 2) && reg_5(3, 3)) {
matched = true;
pattern_id = 249;
}
if(reg_46(0, 0) && reg_48(1, 1) && reg_73(2, 2) && reg_46(3, 3) && reg_7(4, 4) && reg_51(5, 5) && reg_6(6, 6) && reg_13(7, 7) && reg_6(8, 8) && reg_49(9, 9) && reg_73(10, 10) && reg_37(11, 11) && reg_13(12, 12) && reg_20(13, 13) && reg_18(14, 14)) {
matched = true;
pattern_id = 250;
}
if(reg_1(0, 0) && reg_39(1, 1) && reg_39(2, 2) && reg_3(3, 3) && reg_39(4, 4) && reg_35(5, 5) && reg_3(6, 6) && reg_39(7, 7) && reg_39(8, 8) && reg_3(9, 9) && reg_39(10, 10) && reg_35(11, 11) && reg_3(12, 12) && reg_39(13, 13) && reg_39(14, 14) && reg_3(15, 15) && reg_39(16, 16) && reg_35(17, 17) && reg_3(18, 18) && reg_39(19, 19) && reg_39(20, 20) && reg_3(21, 21) && reg_39(22, 22) && reg_35(23, 23) && reg_3(24, 24) && reg_39(25, 25) && reg_39(26, 26) && reg_3(27, 27) && reg_39(28, 28) && reg_35(29, 29) && reg_1(30, 30)) {
matched = true;
pattern_id = 251;
}
if(reg_6(0, 0) && reg_9(1, 1) && reg_10(2, 2) && reg_24(3, 3) && reg_46(4, 4) && reg_8(5, 5) && reg_73(6, 6) && reg_18(7, 7) && reg_24(8, 8) && reg_10(9, 9) && reg_20(10, 10) && reg_73(11, 11) && reg_42(12, 12) && reg_24(13, 13) && reg_22(14, 14) && reg_23(15, 15)) {
matched = true;
pattern_id = 252;
}
if(reg_20(0, 0) && reg_24(1, 1) && reg_3(2, 2) && reg_10(3, 3) && reg_36(4, 4) && reg_3(5, 5) && reg_6(6, 6) && reg_24(7, 7) && reg_24(8, 8) && reg_20(9, 9)) {
matched = true;
pattern_id = 253;
}
if(reg_22(0, 0) && reg_24(1, 1) && reg_20(2, 2) && reg_3(3, 3) && reg_24(4, 4) && reg_22(5, 5) && reg_3(6, 6) && reg_10(7, 7) && reg_49(8, 8) && reg_10(9, 9) && reg_20(10, 10) && reg_9(11, 11) && reg_34(12, 12) && reg_3(13, 13) && reg_42(14, 14) && reg_24(15, 15) && reg_22(16, 16) && reg_10(17, 17) && reg_24(18, 18) && reg_46(19, 19) && reg_9(20, 20)) {
matched = true;
pattern_id = 254;
}
if(reg_56(0, 0) && reg_24(1, 1) && reg_47(2, 2) && reg_7(3, 3) && reg_22(4, 4) && reg_3(5, 5) && reg_7(6, 6) && reg_22(7, 7) && reg_42(8, 8) && reg_24(9, 9) && reg_6(10, 10) && reg_6(11, 11) && reg_9(12, 12) && reg_42(13, 13) && reg_20(14, 14)) {
matched = true;
pattern_id = 255;
}
if(reg_46(0, 0) && reg_24(1, 1) && reg_47(2, 2) && reg_7(3, 3) && reg_22(4, 4) && reg_1(5, 5) && reg_35(6, 6) && reg_30(7, 7) && reg_1(8, 8) && reg_3(9, 9) && reg_6(10, 10) && reg_24(11, 11) && reg_24(12, 12) && reg_20(13, 13)) {
matched = true;
pattern_id = 256;
}
if(reg_58(0, 0) && reg_18(1, 1) && reg_10(2, 2) && reg_16(3, 3) && reg_17(4, 4) && reg_42(5, 5) && reg_47(6, 6) && reg_7(7, 7)) {
matched = true;
pattern_id = 257;
}
if(reg_58(0, 0) && reg_10(1, 1) && reg_17(2, 2) && reg_42(3, 3) && reg_47(4, 4) && reg_7(5, 5)) {
matched = true;
pattern_id = 258;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_10(2, 2) && reg_7(3, 3) && reg_10(4, 4) && reg_13(5, 5) && reg_17(6, 6) && reg_48(7, 7) && reg_46(8, 8) && reg_46(9, 9) && reg_58(10, 10) && reg_28(11, 11) && reg_32(12, 12) && reg_9(13, 13) && reg_6(14, 14) && reg_8(15, 15) && reg_7(16, 16) && reg_42(17, 17) && reg_9(18, 18) && reg_78(19, 19)) {
matched = true;
pattern_id = 259;
}
if(reg_58(0, 0) && reg_80(1, 1) && reg_13(2, 2) && reg_25(3, 3) && reg_25(4, 4)) {
matched = true;
pattern_id = 260;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_15(2, 2) && reg_15(3, 3) && reg_51(4, 4) && reg_24(5, 5) && reg_13(6, 6) && reg_6(7, 7) && reg_48(8, 8) && reg_58(9, 9) && reg_37(10, 10) && reg_13(11, 11) && reg_10(12, 12) && reg_10(13, 13) && reg_15(14, 14) && reg_48(15, 15) && reg_17(16, 16) && reg_20(17, 17) && reg_16(18, 18) && reg_20(19, 19)) {
matched = true;
pattern_id = 261;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_9(2, 2) && reg_51(3, 3) && reg_48(4, 4) && reg_6(5, 5) && reg_7(6, 6) && reg_8(7, 7) && reg_9(8, 8) && reg_6(9, 9)) {
matched = true;
pattern_id = 262;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_18(2, 2) && reg_24(3, 3) && reg_7(4, 4) && reg_10(5, 5) && reg_73(6, 6) && reg_6(7, 7) && reg_13(8, 8) && reg_15(9, 9) && reg_17(10, 10) && reg_42(11, 11) && reg_47(12, 12) && reg_7(13, 13) && reg_63(14, 14)) {
matched = true;
pattern_id = 263;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_18(2, 2) && reg_24(3, 3) && reg_7(4, 4) && reg_10(5, 5) && reg_73(6, 6) && reg_6(7, 7) && reg_13(8, 8) && reg_15(9, 9) && reg_17(10, 10) && reg_42(11, 11) && reg_47(12, 12) && reg_7(13, 13)) {
matched = true;
pattern_id = 264;
}
if(reg_3(0, 0) && reg_58(1, 1) && reg_29(2, 2) && reg_31(3, 3) && reg_31(4, 4) && reg_44(5, 5) && reg_58(6, 6) && reg_27(7, 7) && reg_17(8, 8)) {
matched = true;
pattern_id = 265;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_9(2, 2) && reg_51(3, 3) && reg_37(4, 4) && reg_46(5, 5) && reg_36(6, 6) && reg_10(7, 7) && reg_63(8, 8) && reg_13(9, 9) && reg_51(10, 10) && reg_24(11, 11) && reg_36(12, 12) && reg_20(13, 13)) {
matched = true;
pattern_id = 266;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_9(2, 2) && reg_51(3, 3) && reg_37(4, 4) && reg_46(5, 5) && reg_36(6, 6) && reg_10(7, 7) && reg_63(8, 8) && reg_10(9, 9) && reg_42(10, 10) && reg_6(11, 11) && reg_7(12, 12) && reg_37(13, 13) && reg_20(14, 14)) {
matched = true;
pattern_id = 267;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_9(2, 2) && reg_51(3, 3) && reg_10(4, 4) && reg_9(5, 5) && reg_22(6, 6) && reg_48(7, 7) && reg_34(8, 8) && reg_13(9, 9) && reg_7(10, 10) && reg_46(11, 11)) {
matched = true;
pattern_id = 268;
}
if(reg_58(0, 0) && reg_48(1, 1) && reg_42(2, 2) && reg_51(3, 3) && reg_24(4, 4) && reg_13(5, 5) && reg_6(6, 6) && reg_48(7, 7) && reg_17(8, 8) && reg_42(9, 9) && reg_47(10, 10) && reg_7(11, 11)) {
matched = true;
pattern_id = 269;
}
if(reg_58(0, 0) && reg_48(1, 1) && reg_42(2, 2) && reg_23(3, 3) && reg_24(4, 4) && reg_6(5, 5) && reg_36(6, 6) && reg_34(7, 7) && reg_17(8, 8) && reg_42(9, 9) && reg_47(10, 10) && reg_7(11, 11)) {
matched = true;
pattern_id = 270;
}
if(reg_58(0, 0) && reg_34(1, 1) && reg_34(2, 2) && reg_10(3, 3) && reg_20(4, 4) && reg_48(5, 5) && reg_24(6, 6) && reg_48(7, 7) && reg_17(8, 8) && reg_42(9, 9) && reg_47(10, 10) && reg_7(11, 11)) {
matched = true;
pattern_id = 271;
}
if(reg_58(0, 0) && reg_13(1, 1) && reg_37(2, 2) && reg_9(3, 3) && reg_16(4, 4) && reg_9(5, 5) && reg_42(6, 6) && reg_17(7, 7) && reg_37(8, 8) && reg_46(9, 9)) {
matched = true;
pattern_id = 272;
}
if(reg_58(0, 0) && reg_7(1, 1) && reg_34(2, 2) && reg_13(3, 3) && reg_47(4, 4) && reg_9(5, 5) && reg_34(6, 6) && reg_13(7, 7) && reg_37(8, 8) && reg_17(9, 9) && reg_9(10, 10) && reg_16(11, 11) && reg_9(12, 12) && reg_63(13, 13)) {
matched = true;
pattern_id = 273;
}
if(reg_58(0, 0) && reg_42(1, 1) && reg_8(2, 2) && reg_10(3, 3) && reg_15(4, 4) && reg_9(5, 5) && reg_51(6, 6) && reg_17(7, 7) && reg_42(8, 8) && reg_47(9, 9) && reg_7(10, 10)) {
matched = true;
pattern_id = 274;
}
if(reg_58(0, 0) && reg_37(1, 1) && reg_18(2, 2) && reg_37(3, 3) && reg_17(4, 4) && reg_42(5, 5) && reg_47(6, 6) && reg_7(7, 7)) {
matched = true;
pattern_id = 275;
}
if(reg_58(0, 0) && reg_47(1, 1) && reg_46(2, 2) && reg_7(3, 3) && reg_34(4, 4) && reg_37(5, 5) && reg_10(6, 6) && reg_9(7, 7)) {
matched = true;
pattern_id = 276;
}
if(reg_58(0, 0) && reg_18(1, 1) && reg_20(2, 2) && reg_34(3, 3) && reg_46(4, 4) && reg_10(5, 5) && reg_42(6, 6) && reg_6(7, 7) && reg_7(8, 8) && reg_37(9, 9) && reg_20(10, 10)) {
matched = true;
pattern_id = 277;
}
if(reg_58(0, 0) && reg_7(1, 1) && reg_22(2, 2) && reg_23(3, 3) && reg_24(4, 4) && reg_0(5, 5) && reg_15(6, 6) && reg_15(7, 7) && reg_15(8, 8)) {
matched = true;
pattern_id = 278;
}
if(reg_58(0, 0) && reg_34(1, 1) && reg_13(2, 2) && reg_7(3, 3) && reg_46(4, 4) && reg_46(5, 5) && reg_7(6, 6) && reg_10(7, 7) && reg_20(8, 8) && reg_17(9, 9) && reg_37(10, 10) && reg_46(11, 11)) {
matched = true;
pattern_id = 279;
}
if(reg_58(0, 0) && reg_22(1, 1) && reg_37(2, 2) && reg_18(3, 3) && reg_77(4, 4) && reg_20(5, 5) && reg_9(6, 6) && reg_10(7, 7) && reg_20(8, 8) && reg_77(9, 9) && reg_42(10, 10) && reg_47(11, 11) && reg_7(12, 12)) {
matched = true;
pattern_id = 280;
}
if(reg_58(0, 0) && reg_37(1, 1) && reg_9(2, 2) && reg_6(3, 3) && reg_46(4, 4) && reg_17(5, 5) && reg_9(6, 6) && reg_16(7, 7) && reg_9(8, 8)) {
matched = true;
pattern_id = 281;
}
if(reg_58(0, 0) && reg_6(1, 1) && reg_47(2, 2) && reg_36(3, 3) && reg_9(4, 4) && reg_10(5, 5) && reg_20(6, 6) && reg_17(7, 7) && reg_9(8, 8) && reg_16(9, 9) && reg_9(10, 10)) {
matched = true;
pattern_id = 282;
}
if(reg_58(0, 0) && reg_6(1, 1) && reg_15(2, 2) && reg_15(3, 3) && reg_15(4, 4) && reg_10(5, 5) && reg_18(6, 6) && reg_9(7, 7) && reg_46(8, 8) && reg_46(9, 9) && reg_17(10, 10) && reg_37(11, 11) && reg_46(12, 12)) {
matched = true;
pattern_id = 283;
}
if(reg_58(0, 0) && reg_20(1, 1) && reg_9(2, 2) && reg_10(3, 3) && reg_20(4, 4) && reg_77(5, 5) && reg_42(6, 6) && reg_47(7, 7) && reg_7(8, 8)) {
matched = true;
pattern_id = 284;
}
if(reg_58(0, 0) && reg_20(1, 1) && reg_9(2, 2) && reg_16(3, 3) && reg_20(4, 4) && reg_42(5, 5) && reg_24(6, 6) && reg_36(7, 7) && reg_22(8, 8) && reg_20(9, 9) && reg_9(10, 10) && reg_6(11, 11) && reg_17(12, 12) && reg_37(13, 13) && reg_46(14, 14)) {
matched = true;
pattern_id = 285;
}
if(reg_58(0, 0) && reg_36(1, 1) && reg_37(2, 2) && reg_46(3, 3) && reg_24(4, 4) && reg_13(5, 5) && reg_48(6, 6) && reg_9(7, 7) && reg_6(8, 8) && reg_17(9, 9) && reg_9(10, 10) && reg_16(11, 11) && reg_9(12, 12)) {
matched = true;
pattern_id = 286;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_9(2, 2) && reg_51(3, 3) && reg_47(4, 4) && reg_13(5, 5) && reg_7(6, 6) && reg_10(7, 7)) {
matched = true;
pattern_id = 287;
}
if(reg_58(0, 0) && reg_23(1, 1) && reg_7(2, 2) && reg_22(3, 3) && reg_47(4, 4) && reg_9(5, 5) && reg_6(6, 6)) {
matched = true;
pattern_id = 288;
}
if(reg_58(0, 0) && reg_37(1, 1) && reg_9(2, 2) && reg_6(3, 3) && reg_46(4, 4) && reg_10(5, 5) && reg_18(6, 6) && reg_24(7, 7) && reg_37(8, 8) && reg_17(9, 9) && reg_42(10, 10) && reg_47(11, 11) && reg_7(12, 12)) {
matched = true;
pattern_id = 289;
}
if(reg_58(0, 0) && reg_13(1, 1) && reg_47(2, 2) && reg_46(3, 3) && reg_7(4, 4) && reg_34(5, 5) && reg_37(6, 6) && reg_10(7, 7) && reg_9(8, 8)) {
matched = true;
pattern_id = 290;
}
if(reg_58(0, 0) && reg_30(1, 1) && reg_22(2, 2) && reg_39(3, 3) && reg_24(4, 4) && reg_6(5, 5) && reg_34(6, 6) && reg_0(7, 7)) {
matched = true;
pattern_id = 291;
}
if(reg_58(0, 0) && reg_13(1, 1) && reg_6(2, 2) && reg_47(3, 3) && reg_10(4, 4) && reg_17(5, 5) && reg_51(6, 6) && reg_13(7, 7) && reg_20(8, 8)) {
matched = true;
pattern_id = 292;
}
if(reg_58(0, 0) && reg_30(1, 1) && reg_31(2, 2) && reg_77(3, 3) && reg_13(4, 4) && reg_48(5, 5) && reg_34(6, 6) && reg_7(7, 7) && reg_22(8, 8) && reg_17(9, 9) && reg_42(10, 10) && reg_47(11, 11) && reg_7(12, 12)) {
matched = true;
pattern_id = 293;
}
if(reg_58(0, 0) && reg_51(1, 1) && reg_22(2, 2) && reg_51(3, 3) && reg_23(4, 4) && reg_24(5, 5) && reg_6(6, 6) && reg_34(7, 7) && reg_17(8, 8) && reg_42(9, 9) && reg_47(10, 10) && reg_7(11, 11)) {
matched = true;
pattern_id = 294;
}
if(reg_58(0, 0) && reg_42(1, 1) && reg_13(2, 2) && reg_34(3, 3) && reg_37(4, 4) && reg_13(5, 5) && reg_10(6, 6)) {
matched = true;
pattern_id = 295;
}
if(reg_58(0, 0) && reg_8(1, 1) && reg_7(2, 2) && reg_9(3, 3) && reg_15(4, 4) && reg_77(5, 5) && reg_10(6, 6) && reg_24(7, 7) && reg_36(8, 8) && reg_6(9, 9) && reg_42(10, 10) && reg_9(11, 11)) {
matched = true;
pattern_id = 296;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_13(2, 2) && reg_7(3, 3) && reg_10(4, 4) && reg_17(5, 5) && reg_37(6, 6) && reg_46(7, 7)) {
matched = true;
pattern_id = 297;
}
if(reg_58(0, 0) && reg_23(1, 1) && reg_7(2, 2) && reg_46(3, 3) && reg_9(4, 4) && reg_10(5, 5) && reg_17(6, 6) && reg_37(7, 7) && reg_46(8, 8)) {
matched = true;
pattern_id = 298;
}
if(reg_58(0, 0) && reg_15(1, 1) && reg_47(2, 2) && reg_36(3, 3) && reg_9(4, 4) && reg_10(5, 5) && reg_20(6, 6) && reg_17(7, 7) && reg_9(8, 8) && reg_16(9, 9) && reg_9(10, 10)) {
matched = true;
pattern_id = 299;
}

}