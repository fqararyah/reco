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
ap_uint<82>reg_1 = 0;
ap_uint<81>reg_2 = 0;
ap_uint<79>reg_3 = 0;
ap_uint<28>reg_4 = 0;
ap_uint<69>reg_5 = 0;
ap_uint<85>reg_6 = 0;
ap_uint<104>reg_7 = 0;
ap_uint<24>reg_8 = 0;
ap_uint<97>reg_9 = 0;
ap_uint<103>reg_10 = 0;
ap_uint<42>reg_11 = 0;
ap_uint<9>reg_12 = 0;
ap_uint<90>reg_13 = 0;
ap_uint<25>reg_14 = 0;
ap_uint<57>reg_15 = 0;
ap_uint<4>reg_16 = 0;
ap_uint<13>reg_17 = 0;
ap_uint<105>reg_18 = 0;
ap_uint<14>reg_19 = 0;
ap_uint<106>reg_20 = 0;
ap_uint<7>reg_21 = 0;
ap_uint<76>reg_22 = 0;
ap_uint<87>reg_23 = 0;
ap_uint<99>reg_24 = 0;
ap_uint<58>reg_25 = 0;
ap_uint<13>reg_26 = 0;
ap_uint<42>reg_27 = 0;
ap_uint<8>reg_28 = 0;
ap_uint<7>reg_29 = 0;
ap_uint<59>reg_30 = 0;
ap_uint<11>reg_31 = 0;
ap_uint<27>reg_32 = 0;
ap_uint<10>reg_33 = 0;
ap_uint<98>reg_34 = 0;
ap_uint<39>reg_35 = 0;
ap_uint<45>reg_36 = 0;
ap_uint<93>reg_37 = 0;
ap_uint<17>reg_38 = 0;
ap_uint<37>reg_39 = 0;
ap_uint<83>reg_40 = 0;
ap_uint<36>reg_41 = 0;
ap_uint<89>reg_42 = 0;
ap_uint<28>reg_43 = 0;
ap_uint<10>reg_44 = 0;
ap_uint<4>reg_45 = 0;
ap_uint<50>reg_46 = 0;
ap_uint<22>reg_47 = 0;
ap_uint<74>reg_48 = 0;
ap_uint<69>reg_49 = 0;
ap_uint<15>reg_50 = 0;
ap_uint<46>reg_51 = 0;
ap_uint<78>reg_52 = 0;
ap_uint<35>reg_53 = 0;
ap_uint<75>reg_54 = 0;
ap_uint<6>reg_55 = 0;
ap_uint<10>reg_56 = 0;
ap_uint<2>reg_57 = 0;
ap_uint<25>reg_58 = 0;
ap_uint<7>reg_59 = 0;
ap_uint<78>reg_60 = 0;
ap_uint<80>reg_61 = 0;
ap_uint<67>reg_62 = 0;
ap_uint<28>reg_63 = 0;
ap_uint<77>reg_64 = 0;
ap_uint<37>reg_65 = 0;
ap_uint<19>reg_66 = 0;
ap_uint<5>reg_67 = 0;
ap_uint<20>reg_68 = 0;
ap_uint<16>reg_69 = 0;
ap_uint<31>reg_70 = 0;
ap_uint<30>reg_71 = 0;
ap_uint<35>reg_72 = 0;
ap_uint<24>reg_73 = 0;
ap_uint<19>reg_74 = 0;
ap_uint<18>reg_75 = 0;
ap_uint<14>reg_76 = 0;
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
reg_0 >> 1;
reg_0(34, 34) = ('2' == buffer[buffer_size - chunk_len]);
reg_1 >> 1;
reg_1(81, 81) = ('|' == buffer[buffer_size - chunk_len]);
reg_2 >> 1;
reg_2(80, 80) = ('0' == buffer[buffer_size - chunk_len]);
reg_3 >> 1;
reg_3(78, 78) = (' ' == buffer[buffer_size - chunk_len]);
reg_4 >> 1;
reg_4(27, 27) = ('6' == buffer[buffer_size - chunk_len]);
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
reg_12(8, 8) = ('q' == buffer[buffer_size - chunk_len]);
reg_13 >> 1;
reg_13(89, 89) = ('a' == buffer[buffer_size - chunk_len]);
reg_14 >> 1;
reg_14(24, 24) = ('z' == buffer[buffer_size - chunk_len]);
reg_15 >> 1;
reg_15(56, 56) = ('w' == buffer[buffer_size - chunk_len]);
reg_16 >> 1;
reg_16(3, 3) = ('x' == buffer[buffer_size - chunk_len]);
reg_17 >> 1;
reg_17(12, 12) = ('.' == buffer[buffer_size - chunk_len]);
reg_18 >> 1;
reg_18(104, 104) = ('h' == buffer[buffer_size - chunk_len]);
reg_19 >> 1;
reg_19(13, 13) = ('G' == buffer[buffer_size - chunk_len]);
reg_20 >> 1;
reg_20(105, 105) = ('t' == buffer[buffer_size - chunk_len]);
reg_21 >> 1;
reg_21(6, 6) = ('I' == buffer[buffer_size - chunk_len]);
reg_22 >> 1;
reg_22(75, 75) = ('n' == buffer[buffer_size - chunk_len]);
reg_23 >> 1;
reg_23(86, 86) = ('f' == buffer[buffer_size - chunk_len]);
reg_24 >> 1;
reg_24(98, 98) = ('o' == buffer[buffer_size - chunk_len]);
reg_25 >> 1;
reg_25(57, 57) = ('B' == buffer[buffer_size - chunk_len]);
reg_26 >> 1;
reg_26(12, 12) = ('N' == buffer[buffer_size - chunk_len]);
reg_27 >> 1;
reg_27(41, 41) = ('1' == buffer[buffer_size - chunk_len]);
reg_28 >> 1;
reg_28(7, 7) = ('W' == buffer[buffer_size - chunk_len]);
reg_29 >> 1;
reg_29(6, 6) = ('H' == buffer[buffer_size - chunk_len]);
reg_30 >> 1;
reg_30(58, 58) = ('A' == buffer[buffer_size - chunk_len]);
reg_31 >> 1;
reg_31(10, 10) = ('T' == buffer[buffer_size - chunk_len]);
reg_32 >> 1;
reg_32(26, 26) = ('S' == buffer[buffer_size - chunk_len]);
reg_33 >> 1;
reg_33(9, 9) = ('R' == buffer[buffer_size - chunk_len]);
reg_34 >> 1;
reg_34(97, 97) = ('m' == buffer[buffer_size - chunk_len]);
reg_35 >> 1;
reg_35(38, 38) = ('3' == buffer[buffer_size - chunk_len]);
reg_36 >> 1;
reg_36(44, 44) = ('u' == buffer[buffer_size - chunk_len]);
reg_37 >> 1;
reg_37(92, 92) = ('p' == buffer[buffer_size - chunk_len]);
reg_38 >> 1;
reg_38(16, 16) = ('U' == buffer[buffer_size - chunk_len]);
reg_39 >> 1;
reg_39(36, 36) = ('F' == buffer[buffer_size - chunk_len]);
reg_40 >> 1;
reg_40(82, 82) = ('C' == buffer[buffer_size - chunk_len]);
reg_41 >> 1;
reg_41(35, 35) = ('E' == buffer[buffer_size - chunk_len]);
reg_42 >> 1;
reg_42(88, 88) = ('c' == buffer[buffer_size - chunk_len]);
reg_43 >> 1;
reg_43(27, 27) = ('5' == buffer[buffer_size - chunk_len]);
reg_44 >> 1;
reg_44(9, 9) = ('P' == buffer[buffer_size - chunk_len]);
reg_45 >> 1;
reg_45(3, 3) = ('O' == buffer[buffer_size - chunk_len]);
reg_46 >> 1;
reg_46(49, 49) = ('l' == buffer[buffer_size - chunk_len]);
reg_47 >> 1;
reg_47(21, 21) = ('g' == buffer[buffer_size - chunk_len]);
reg_48 >> 1;
reg_48(73, 73) = ('d' == buffer[buffer_size - chunk_len]);
reg_49 >> 1;
reg_49(68, 68) = ('y' == buffer[buffer_size - chunk_len]);
reg_50 >> 1;
reg_50(14, 14) = ('M' == buffer[buffer_size - chunk_len]);
reg_51 >> 1;
reg_51(45, 45) = ('b' == buffer[buffer_size - chunk_len]);
reg_52 >> 1;
reg_52(77, 77) = ('k' == buffer[buffer_size - chunk_len]);
reg_53 >> 1;
reg_53(34, 34) = ('!' == buffer[buffer_size - chunk_len]);
reg_54 >> 1;
reg_54(74, 74) = ('[' == buffer[buffer_size - chunk_len]);
reg_55 >> 1;
reg_55(5, 5) = ('*' == buffer[buffer_size - chunk_len]);
reg_56 >> 1;
reg_56(9, 9) = ('L' == buffer[buffer_size - chunk_len]);
reg_57 >> 1;
reg_57(1, 1) = ('j' == buffer[buffer_size - chunk_len]);
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
reg_67(4, 4) = ('+' == buffer[buffer_size - chunk_len]);
reg_68 >> 1;
reg_68(19, 19) = ('Q' == buffer[buffer_size - chunk_len]);
reg_69 >> 1;
reg_69(15, 15) = ('~' == buffer[buffer_size - chunk_len]);
reg_70 >> 1;
reg_70(30, 30) = (']' == buffer[buffer_size - chunk_len]);
reg_71 >> 1;
reg_71(29, 29) = ('@' == buffer[buffer_size - chunk_len]);
reg_72 >> 1;
reg_72(34, 34) = ('V' == buffer[buffer_size - chunk_len]);
reg_73 >> 1;
reg_73(23, 23) = ('_' == buffer[buffer_size - chunk_len]);
reg_74 >> 1;
reg_74(18, 18) = ('J' == buffer[buffer_size - chunk_len]);
reg_75 >> 1;
reg_75(17, 17) = ('X' == buffer[buffer_size - chunk_len]);
reg_76 >> 1;
reg_76(13, 13) = ('%' == buffer[buffer_size - chunk_len]);
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

}