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
ap_uint<313>reg_0 = 0;
ap_uint<363>reg_1 = 0;
ap_uint<362>reg_2 = 0;
ap_uint<360>reg_3 = 0;
ap_uint<195>reg_4 = 0;
ap_uint<283>reg_5 = 0;
ap_uint<237>reg_6 = 0;
ap_uint<225>reg_7 = 0;
ap_uint<204>reg_8 = 0;
ap_uint<238>reg_9 = 0;
ap_uint<239>reg_10 = 0;
ap_uint<220>reg_11 = 0;
ap_uint<54>reg_12 = 0;
ap_uint<222>reg_13 = 0;
ap_uint<226>reg_14 = 0;
ap_uint<182>reg_15 = 0;
ap_uint<153>reg_16 = 0;
ap_uint<249>reg_17 = 0;
ap_uint<150>reg_18 = 0;
ap_uint<261>reg_19 = 0;
ap_uint<231>reg_20 = 0;
ap_uint<198>reg_21 = 0;
ap_uint<232>reg_22 = 0;
ap_uint<184>reg_23 = 0;
ap_uint<227>reg_24 = 0;
ap_uint<203>reg_25 = 0;
ap_uint<179>reg_26 = 0;
ap_uint<319>reg_27 = 0;
ap_uint<187>reg_28 = 0;
ap_uint<255>reg_29 = 0;
ap_uint<242>reg_30 = 0;
ap_uint<259>reg_31 = 0;
ap_uint<199>reg_32 = 0;
ap_uint<127>reg_33 = 0;
ap_uint<213>reg_34 = 0;
ap_uint<224>reg_35 = 0;
ap_uint<119>reg_36 = 0;
ap_uint<212>reg_37 = 0;
ap_uint<240>reg_38 = 0;
ap_uint<110>reg_39 = 0;
ap_uint<274>reg_40 = 0;
ap_uint<260>reg_41 = 0;
ap_uint<219>reg_42 = 0;
ap_uint<275>reg_43 = 0;
ap_uint<252>reg_44 = 0;
ap_uint<116>reg_45 = 0;
ap_uint<229>reg_46 = 0;
ap_uint<234>reg_47 = 0;
ap_uint<184>reg_48 = 0;
ap_uint<147>reg_49 = 0;
ap_uint<228>reg_50 = 0;
ap_uint<208>reg_51 = 0;
ap_uint<81>reg_52 = 0;
ap_uint<40>reg_53 = 0;
ap_uint<75>reg_54 = 0;
ap_uint<166>reg_55 = 0;
ap_uint<129>reg_56 = 0;
ap_uint<60>reg_57 = 0;
ap_uint<257>reg_58 = 0;
ap_uint<83>reg_59 = 0;
ap_uint<287>reg_60 = 0;
ap_uint<119>reg_61 = 0;
ap_uint<102>reg_62 = 0;
ap_uint<38>reg_63 = 0;
ap_uint<105>reg_64 = 0;
ap_uint<37>reg_65 = 0;
ap_uint<88>reg_66 = 0;
ap_uint<137>reg_67 = 0;
ap_uint<123>reg_68 = 0;
ap_uint<19>reg_69 = 0;
ap_uint<31>reg_70 = 0;
ap_uint<48>reg_71 = 0;
ap_uint<167>reg_72 = 0;
ap_uint<64>reg_73 = 0;
ap_uint<72>reg_74 = 0;
ap_uint<18>reg_75 = 0;
ap_uint<70>reg_76 = 0;
ap_uint<236>reg_77 = 0;
ap_uint<160>reg_78 = 0;
ap_uint<146>reg_79 = 0;
ap_uint<48>reg_80 = 0;
ap_uint<5>reg_81 = 0;
ap_uint<20>reg_82 = 0;
ap_uint<101>reg_83 = 0;
ap_uint<13>reg_84 = 0;
ap_uint<13>reg_85 = 0;
ap_uint<230>reg_86 = 0;
ap_uint<216>reg_87 = 0;
ap_uint<112>reg_88 = 0;
ap_uint<6>reg_89 = 0;
ap_uint<65>reg_90 = 0;
ap_uint<67>reg_91 = 0;
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
reg_0 >> 1;
reg_0(312, 312) = ('2' == buffer[buffer_size - chunk_len]);
reg_1 >> 1;
reg_1(362, 362) = ('|' == buffer[buffer_size - chunk_len]);
reg_2 >> 1;
reg_2(361, 361) = ('0' == buffer[buffer_size - chunk_len]);
reg_3 >> 1;
reg_3(359, 359) = (' ' == buffer[buffer_size - chunk_len]);
reg_4 >> 1;
reg_4(194, 194) = ('6' == buffer[buffer_size - chunk_len]);
reg_5 >> 1;
reg_5(282, 282) = ('D' == buffer[buffer_size - chunk_len]);
reg_6 >> 1;
reg_6(236, 236) = ('r' == buffer[buffer_size - chunk_len]);
reg_7 >> 1;
reg_7(224, 224) = ('i' == buffer[buffer_size - chunk_len]);
reg_8 >> 1;
reg_8(203, 203) = ('v' == buffer[buffer_size - chunk_len]);
reg_9 >> 1;
reg_9(237, 237) = ('e' == buffer[buffer_size - chunk_len]);
reg_10 >> 1;
reg_10(238, 238) = ('s' == buffer[buffer_size - chunk_len]);
reg_11 >> 1;
reg_11(219, 219) = ('4' == buffer[buffer_size - chunk_len]);
reg_12 >> 1;
reg_12(53, 53) = ('q' == buffer[buffer_size - chunk_len]);
reg_13 >> 1;
reg_13(221, 221) = ('a' == buffer[buffer_size - chunk_len]);
reg_14 >> 1;
reg_14(225, 225) = ('z' == buffer[buffer_size - chunk_len]);
reg_15 >> 1;
reg_15(181, 181) = ('w' == buffer[buffer_size - chunk_len]);
reg_16 >> 1;
reg_16(152, 152) = ('x' == buffer[buffer_size - chunk_len]);
reg_17 >> 1;
reg_17(248, 248) = ('.' == buffer[buffer_size - chunk_len]);
reg_18 >> 1;
reg_18(149, 149) = ('h' == buffer[buffer_size - chunk_len]);
reg_19 >> 1;
reg_19(260, 260) = ('G' == buffer[buffer_size - chunk_len]);
reg_20 >> 1;
reg_20(230, 230) = ('t' == buffer[buffer_size - chunk_len]);
reg_21 >> 1;
reg_21(197, 197) = ('I' == buffer[buffer_size - chunk_len]);
reg_22 >> 1;
reg_22(231, 231) = ('n' == buffer[buffer_size - chunk_len]);
reg_23 >> 1;
reg_23(183, 183) = ('f' == buffer[buffer_size - chunk_len]);
reg_24 >> 1;
reg_24(226, 226) = ('o' == buffer[buffer_size - chunk_len]);
reg_25 >> 1;
reg_25(202, 202) = ('B' == buffer[buffer_size - chunk_len]);
reg_26 >> 1;
reg_26(178, 178) = ('N' == buffer[buffer_size - chunk_len]);
reg_27 >> 1;
reg_27(318, 318) = ('1' == buffer[buffer_size - chunk_len]);
reg_28 >> 1;
reg_28(186, 186) = ('W' == buffer[buffer_size - chunk_len]);
reg_29 >> 1;
reg_29(254, 254) = ('H' == buffer[buffer_size - chunk_len]);
reg_30 >> 1;
reg_30(241, 241) = ('A' == buffer[buffer_size - chunk_len]);
reg_31 >> 1;
reg_31(258, 258) = ('T' == buffer[buffer_size - chunk_len]);
reg_32 >> 1;
reg_32(198, 198) = ('S' == buffer[buffer_size - chunk_len]);
reg_33 >> 1;
reg_33(126, 126) = ('R' == buffer[buffer_size - chunk_len]);
reg_34 >> 1;
reg_34(212, 212) = ('m' == buffer[buffer_size - chunk_len]);
reg_35 >> 1;
reg_35(223, 223) = ('3' == buffer[buffer_size - chunk_len]);
reg_36 >> 1;
reg_36(118, 118) = ('u' == buffer[buffer_size - chunk_len]);
reg_37 >> 1;
reg_37(211, 211) = ('p' == buffer[buffer_size - chunk_len]);
reg_38 >> 1;
reg_38(239, 239) = ('U' == buffer[buffer_size - chunk_len]);
reg_39 >> 1;
reg_39(109, 109) = ('F' == buffer[buffer_size - chunk_len]);
reg_40 >> 1;
reg_40(273, 273) = ('C' == buffer[buffer_size - chunk_len]);
reg_41 >> 1;
reg_41(259, 259) = ('E' == buffer[buffer_size - chunk_len]);
reg_42 >> 1;
reg_42(218, 218) = ('c' == buffer[buffer_size - chunk_len]);
reg_43 >> 1;
reg_43(274, 274) = ('5' == buffer[buffer_size - chunk_len]);
reg_44 >> 1;
reg_44(251, 251) = ('P' == buffer[buffer_size - chunk_len]);
reg_45 >> 1;
reg_45(115, 115) = ('O' == buffer[buffer_size - chunk_len]);
reg_46 >> 1;
reg_46(228, 228) = ('l' == buffer[buffer_size - chunk_len]);
reg_47 >> 1;
reg_47(233, 233) = ('g' == buffer[buffer_size - chunk_len]);
reg_48 >> 1;
reg_48(183, 183) = ('d' == buffer[buffer_size - chunk_len]);
reg_49 >> 1;
reg_49(146, 146) = ('y' == buffer[buffer_size - chunk_len]);
reg_50 >> 1;
reg_50(227, 227) = ('M' == buffer[buffer_size - chunk_len]);
reg_51 >> 1;
reg_51(207, 207) = ('b' == buffer[buffer_size - chunk_len]);
reg_52 >> 1;
reg_52(80, 80) = ('k' == buffer[buffer_size - chunk_len]);
reg_53 >> 1;
reg_53(39, 39) = ('!' == buffer[buffer_size - chunk_len]);
reg_54 >> 1;
reg_54(74, 74) = ('[' == buffer[buffer_size - chunk_len]);
reg_55 >> 1;
reg_55(165, 165) = ('*' == buffer[buffer_size - chunk_len]);
reg_56 >> 1;
reg_56(128, 128) = ('L' == buffer[buffer_size - chunk_len]);
reg_57 >> 1;
reg_57(59, 59) = ('j' == buffer[buffer_size - chunk_len]);
reg_58 >> 1;
reg_58(256, 256) = ('/' == buffer[buffer_size - chunk_len]);
reg_59 >> 1;
reg_59(82, 82) = ('>' == buffer[buffer_size - chunk_len]);
reg_60 >> 1;
reg_60(286, 286) = ('8' == buffer[buffer_size - chunk_len]);
reg_61 >> 1;
reg_61(118, 118) = ('7' == buffer[buffer_size - chunk_len]);
reg_62 >> 1;
reg_62(101, 101) = ('K' == buffer[buffer_size - chunk_len]);
reg_63 >> 1;
reg_63(37, 37) = ('?' == buffer[buffer_size - chunk_len]);
reg_64 >> 1;
reg_64(104, 104) = ('9' == buffer[buffer_size - chunk_len]);
reg_65 >> 1;
reg_65(36, 36) = ('^' == buffer[buffer_size - chunk_len]);
reg_66 >> 1;
reg_66(87, 87) = ('<' == buffer[buffer_size - chunk_len]);
reg_67 >> 1;
reg_67(136, 136) = ('+' == buffer[buffer_size - chunk_len]);
reg_68 >> 1;
reg_68(122, 122) = ('Q' == buffer[buffer_size - chunk_len]);
reg_69 >> 1;
reg_69(18, 18) = ('~' == buffer[buffer_size - chunk_len]);
reg_70 >> 1;
reg_70(30, 30) = (']' == buffer[buffer_size - chunk_len]);
reg_71 >> 1;
reg_71(47, 47) = ('@' == buffer[buffer_size - chunk_len]);
reg_72 >> 1;
reg_72(166, 166) = ('V' == buffer[buffer_size - chunk_len]);
reg_73 >> 1;
reg_73(63, 63) = ('_' == buffer[buffer_size - chunk_len]);
reg_74 >> 1;
reg_74(71, 71) = ('J' == buffer[buffer_size - chunk_len]);
reg_75 >> 1;
reg_75(17, 17) = ('X' == buffer[buffer_size - chunk_len]);
reg_76 >> 1;
reg_76(69, 69) = ('%' == buffer[buffer_size - chunk_len]);
reg_77 >> 1;
reg_77(235, 235) = ('-' == buffer[buffer_size - chunk_len]);
reg_78 >> 1;
reg_78(159, 159) = ('=' == buffer[buffer_size - chunk_len]);
reg_79 >> 1;
reg_79(145, 145) = (',' == buffer[buffer_size - chunk_len]);
reg_80 >> 1;
reg_80(47, 47) = ('Y' == buffer[buffer_size - chunk_len]);
reg_81 >> 1;
reg_81(4, 4) = ('`' == buffer[buffer_size - chunk_len]);
reg_82 >> 1;
reg_82(19, 19) = ('\'' == buffer[buffer_size - chunk_len]);
reg_83 >> 1;
reg_83(100, 100) = ('&' == buffer[buffer_size - chunk_len]);
reg_84 >> 1;
reg_84(12, 12) = ('}' == buffer[buffer_size - chunk_len]);
reg_85 >> 1;
reg_85(12, 12) = ('Z' == buffer[buffer_size - chunk_len]);
reg_86 >> 1;
reg_86(229, 229) = (':' == buffer[buffer_size - chunk_len]);
reg_87 >> 1;
reg_87(215, 215) = ('(' == buffer[buffer_size - chunk_len]);
reg_88 >> 1;
reg_88(111, 111) = (')' == buffer[buffer_size - chunk_len]);
reg_89 >> 1;
reg_89(5, 5) = ('$' == buffer[buffer_size - chunk_len]);
reg_90 >> 1;
reg_90(64, 64) = ('{' == buffer[buffer_size - chunk_len]);
reg_91 >> 1;
reg_91(66, 66) = ('#' == buffer[buffer_size - chunk_len]);
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
if(reg_51(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_48(0,0) && reg_24(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 22;
}
if(reg_6(0,0) && reg_2(0,0) && reg_2(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 23;
}
if(reg_6(0,0) && reg_9(0,0) && reg_15(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 24;
}
if(reg_15(0,0) && reg_18(0,0) && reg_2(0,0) && reg_2(0,0) && reg_20(0,0) && reg_53(0,0)) {
matched = true;
pattern_id = 25;
}
if(reg_46(0,0) && reg_6(0,0) && reg_52(0,0) && reg_6(0,0) && reg_2(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 26;
}
if(reg_48(0,0) && reg_27(0,0) && reg_35(0,0) && reg_18(0,0) && reg_18(0,0) && reg_54(0,0)) {
matched = true;
pattern_id = 27;
}
if(reg_10(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 28;
}
if(reg_18(0,0) && reg_13(0,0) && reg_16(0,0) && reg_2(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 29;
}
if(reg_23(0,0) && reg_6(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 30;
}
if(reg_32(0,0) && reg_20(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 31;
}
if(reg_15(0,0) && reg_13(0,0) && reg_22(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 32;
}
if(reg_27(0,0) && reg_0(0,0) && reg_35(0,0) && reg_11(0,0)) {
matched = true;
pattern_id = 33;
}
if(reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 34;
}
if(reg_44(0,0) && reg_45(0,0) && reg_26(0,0) && reg_19(0,0)) {
matched = true;
pattern_id = 35;
}
if(reg_10(0,0) && reg_7(0,0) && reg_42(0,0) && reg_52(0,0) && reg_9(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 36;
}
if(reg_23(0,0) && reg_7(0,0) && reg_42(0,0) && reg_52(0,0) && reg_9(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 37;
}
if(reg_10(0,0) && reg_37(0,0) && reg_24(0,0) && reg_24(0,0) && reg_23(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 38;
}
if(reg_10(0,0) && reg_52(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_14(0,0)) {
matched = true;
pattern_id = 39;
}
if(reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 40;
}
if(reg_46(0,0) && reg_11(0,0) && reg_11(0,0)) {
matched = true;
pattern_id = 41;
}
if(reg_55(0,0) && reg_29(0,0) && reg_41(0,0) && reg_56(0,0) && reg_56(0,0) && reg_45(0,0) && reg_55(0,0)) {
matched = true;
pattern_id = 42;
}
if(reg_51(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_13(0,0) && reg_46(0,0) && reg_34(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_48(0,0) && reg_24(0,0) && reg_22(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 43;
}
if(reg_47(0,0) && reg_45(0,0) && reg_6(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 44;
}
if(reg_52(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_34(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 45;
}
if(reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_22(0,0) && reg_48(0,0) && reg_18(0,0) && reg_9(0,0) && reg_7(0,0) && reg_20(0,0) && reg_53(0,0)) {
matched = true;
pattern_id = 46;
}
if(reg_46(0,0) && reg_11(0,0) && reg_11(0,0) && reg_13(0,0) && reg_48(0,0) && reg_10(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 47;
}
if(reg_10(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_3(0,0) && reg_51(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 48;
}
if(reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_3(0,0) && reg_20(0,0) && reg_7(0,0) && reg_57(0,0) && reg_47(0,0) && reg_36(0,0)) {
matched = true;
pattern_id = 49;
}
if(reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 50;
}
if(reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 51;
}
if(reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 52;
}
if(reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 53;
}
if(reg_37(0,0) && reg_24(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 54;
}
if(reg_59(0,0)) {
matched = true;
pattern_id = 55;
}
if(reg_1(0,0) && reg_60(0,0) && reg_43(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 56;
}
if(reg_1(0,0) && reg_60(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 57;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 58;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_6(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 59;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 60;
}
if(reg_17(0,0) && reg_17(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 61;
}
if(reg_20(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_10(0,0) && reg_37(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_42(0,0) && reg_52(0,0) && reg_7(0,0) && reg_22(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_49(0,0) && reg_9(0,0) && reg_13(0,0) && reg_18(0,0) && reg_49(0,0) && reg_9(0,0) && reg_13(0,0) && reg_18(0,0) && reg_7(0,0) && reg_52(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_20(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_7(0,0) && reg_10(0,0) && reg_46(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_51(0,0) && reg_36(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_49(0,0) && reg_15(0,0) && reg_13(0,0) && reg_49(0,0) && reg_15(0,0) && reg_18(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_14(0,0) && reg_24(0,0) && reg_22(0,0) && reg_47(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_10(0,0) && reg_24(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_42(0,0) && reg_24(0,0) && reg_24(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 62;
}
if(reg_30(0,0) && reg_5(0,0) && reg_50(0,0) && reg_33(0,0) && reg_45(0,0) && reg_40(0,0) && reg_62(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 63;
}
if(reg_1(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_41(0,0) && reg_60(0,0) && reg_3(0,0) && reg_5(0,0) && reg_61(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 64;
}
if(reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_25(0,0) && reg_2(0,0) && reg_1(0,0) && reg_63(0,0) && reg_27(0,0) && reg_1(0,0) && reg_5(0,0) && reg_25(0,0) && reg_3(0,0) && reg_25(0,0) && reg_35(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_64(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 65;
}
if(reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_43(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_1(0,0) && reg_36(0,0) && reg_56(0,0) && reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_56(0,0) && reg_65(0,0) && reg_1(0,0) && reg_25(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 66;
}
if(reg_1(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_40(0,0) && reg_61(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_30(0,0) && reg_40(0,0) && reg_1(0,0) && reg_66(0,0) && reg_1(0,0) && reg_39(0,0) && reg_41(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 67;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_22(0,0) && reg_65(0,0) && reg_1(0,0) && reg_40(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_64(0,0) && reg_30(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_26(0,0) && reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_4(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 68;
}
if(reg_1(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_30(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_64(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_5(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_35(0,0) && reg_3(0,0) && reg_25(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 69;
}
if(reg_67(0,0) && reg_67(0,0) && reg_67(0,0) && reg_13(0,0) && reg_20(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 70;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_11(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 71;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0) && reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 72;
}
if(reg_26(0,0) && reg_30(0,0) && reg_50(0,0) && reg_41(0,0) && reg_26(0,0) && reg_30(0,0) && reg_50(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 73;
}
if(reg_35(0,0) && reg_1(0,0) && reg_40(0,0) && reg_64(0,0) && reg_3(0,0) && reg_25(0,0) && reg_27(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_63(0,0) && reg_1(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_68(0,0) && reg_66(0,0) && reg_1(0,0) && reg_39(0,0) && reg_30(0,0) && reg_1(0,0) && reg_19(0,0) && reg_35(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_1(0,0) && reg_44(0,0) && reg_1(0,0) && reg_39(0,0) && reg_61(0,0) && reg_3(0,0) && reg_5(0,0) && reg_2(0,0) && reg_1(0,0) && reg_44(0,0)) {
matched = true;
pattern_id = 74;
}
if(reg_65(0,0) && reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_5(0,0) && reg_1(0,0) && reg_69(0,0) && reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_30(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 75;
}
if(reg_18(0,0) && reg_70(0,0) && reg_65(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_5(0,0) && reg_43(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_5(0,0) && reg_11(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_43(0,0) && reg_3(0,0) && reg_60(0,0) && reg_25(0,0) && reg_3(0,0) && reg_39(0,0) && reg_43(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 76;
}
if(reg_1(0,0) && reg_5(0,0) && reg_60(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_41(0,0) && reg_60(0,0) && reg_3(0,0) && reg_5(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 77;
}
if(reg_72(0,0) && reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_5(0,0) && reg_1(0,0) && reg_69(0,0) && reg_1(0,0) && reg_27(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 78;
}
if(reg_1(0,0) && reg_41(0,0) && reg_60(0,0) && reg_3(0,0) && reg_5(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 79;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_58(0,0) && reg_73(0,0) && reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_74(0,0) && reg_65(0,0) && reg_1(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_59(0,0) && reg_1(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 80;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0) && reg_65(0,0) && reg_35(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_39(0,0) && reg_30(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_39(0,0) && reg_43(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_4(0,0)) {
matched = true;
pattern_id = 81;
}
if(reg_40(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_54(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_60(0,0) && reg_5(0,0) && reg_1(0,0) && reg_62(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_40(0,0) && reg_1(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_41(0,0) && reg_60(0,0) && reg_3(0,0) && reg_64(0,0) && reg_11(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 82;
}
if(reg_75(0,0) && reg_75(0,0) && reg_75(0,0) && reg_75(0,0) && reg_76(0,0) && reg_17(0,0) && reg_27(0,0) && reg_61(0,0) && reg_0(0,0) && reg_36(0,0) && reg_76(0,0) && reg_35(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_0(0,0) && reg_11(0,0) && reg_1(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 83;
}
if(reg_1(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 84;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_3(0,0) && reg_61(0,0) && reg_39(0,0) && reg_1(0,0) && reg_70(0,0) && reg_38(0,0) && reg_1(0,0) && reg_39(0,0) && reg_41(0,0) && reg_1(0,0) && reg_50(0,0) && reg_1(0,0) && reg_64(0,0) && reg_60(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_1(0,0) && reg_50(0,0) && reg_1(0,0) && reg_64(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 85;
}
if(reg_15(0,0) && reg_18(0,0) && reg_24(0,0) && reg_7(0,0) && reg_10(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_58(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 86;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 87;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_62(0,0) && reg_54(0,0) && reg_32(0,0) && reg_0(0,0) && reg_1(0,0) && reg_41(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_62(0,0) && reg_1(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_35(0,0) && reg_3(0,0) && reg_25(0,0) && reg_60(0,0) && reg_1(0,0) && reg_44(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 88;
}
if(reg_1(0,0) && reg_25(0,0) && reg_11(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_25(0,0) && reg_11(0,0) && reg_1(0,0) && reg_53(0,0) && reg_1(0,0) && reg_60(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_3(0,0) && reg_60(0,0) && reg_35(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_25(0,0) && reg_3(0,0) && reg_27(0,0) && reg_64(0,0) && reg_1(0,0) && reg_35(0,0) && reg_1(0,0) && reg_40(0,0) && reg_64(0,0) && reg_1(0,0) && reg_23(0,0) && reg_1(0,0) && reg_25(0,0) && reg_64(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 89;
}
if(reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 90;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_54(0,0) && reg_1(0,0) && reg_39(0,0) && reg_40(0,0) && reg_1(0,0) && reg_35(0,0) && reg_1(0,0) && reg_40(0,0) && reg_64(0,0) && reg_3(0,0) && reg_25(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_25(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0) && reg_67(0,0)) {
matched = true;
pattern_id = 91;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_41(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 92;
}
if(reg_1(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_63(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 93;
}
if(reg_65(0,0) && reg_1(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_40(0,0) && reg_60(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_39(0,0)) {
matched = true;
pattern_id = 94;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_72(0,0) && reg_65(0,0) && reg_72(0,0) && reg_72(0,0) && reg_72(0,0) && reg_27(0,0) && reg_1(0,0) && reg_5(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_1(0,0) && reg_72(0,0) && reg_1(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_1(0,0) && reg_72(0,0) && reg_1(0,0) && reg_27(0,0) && reg_41(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 95;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_71(0,0) && reg_65(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_40(0,0) && reg_35(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 96;
}
if(reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_73(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 97;
}
if(reg_13(0,0) && reg_3(0,0) && reg_51(0,0) && reg_3(0,0) && reg_42(0,0) && reg_3(0,0) && reg_48(0,0) && reg_3(0,0) && reg_9(0,0) && reg_3(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 98;
}
if(reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 99;
}
if(reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 100;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 101;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 102;
}
if(reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 103;
}
if(reg_71(0,0) && reg_71(0,0)) {
matched = true;
pattern_id = 104;
}
if(reg_71(0,0)) {
matched = true;
pattern_id = 105;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 106;
}
if(reg_2(0,0)) {
matched = true;
pattern_id = 107;
}
if(reg_17(0,0)) {
matched = true;
pattern_id = 108;
}
if(reg_17(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_15(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 109;
}
if(reg_17(0,0) && reg_6(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 110;
}
if(reg_40(0,0) && reg_28(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 111;
}
if(reg_40(0,0) && reg_41(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 112;
}
if(reg_44(0,0) && reg_30(0,0) && reg_32(0,0) && reg_32(0,0) && reg_3(0,0) && reg_48(0,0) && reg_48(0,0) && reg_48(0,0) && reg_71(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 113;
}
if(reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_3(0,0) && reg_77(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_71(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 114;
}
if(reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_3(0,0) && reg_15(0,0) && reg_18(0,0) && reg_2(0,0) && reg_2(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 115;
}
if(reg_33(0,0) && reg_41(0,0) && reg_31(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 116;
}
if(reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_3(0,0) && reg_77(0,0) && reg_42(0,0) && reg_52(0,0) && reg_46(0,0) && reg_13(0,0) && reg_36(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 117;
}
if(reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_3(0,0) && reg_77(0,0) && reg_10(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 118;
}
if(reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_3(0,0) && reg_77(0,0) && reg_10(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 119;
}
if(reg_17(0,0) && reg_76(0,0) && reg_0(0,0) && reg_2(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 120;
}
if(reg_32(0,0) && reg_21(0,0) && reg_31(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 121;
}
if(reg_3(0,0) && reg_77(0,0) && reg_77(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_77(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_77(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 122;
}
if(reg_1(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_43(0,0) && reg_3(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_64(0,0) && reg_3(0,0) && reg_27(0,0) && reg_30(0,0) && reg_3(0,0) && reg_27(0,0) && reg_25(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_27(0,0) && reg_5(0,0) && reg_3(0,0) && reg_27(0,0) && reg_41(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 123;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_41(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_43(0,0) && reg_3(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 124;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_41(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 125;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 126;
}
if(reg_1(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 127;
}
if(reg_44(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_3(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_3(0,0) && reg_5(0,0) && reg_9(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 128;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_41(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 129;
}
if(reg_1(0,0) && reg_30(0,0) && reg_64(0,0) && reg_1(0,0) && reg_3(0,0) && reg_32(0,0) && reg_36(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_3(0,0) && reg_32(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 130;
}
if(reg_2(0,0) && reg_27(0,0) && reg_0(0,0) && reg_35(0,0) && reg_11(0,0) && reg_43(0,0) && reg_4(0,0) && reg_61(0,0) && reg_60(0,0) && reg_64(0,0) && reg_13(0,0) && reg_51(0,0) && reg_42(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_47(0,0) && reg_18(0,0) && reg_7(0,0) && reg_57(0,0) && reg_52(0,0) && reg_46(0,0) && reg_34(0,0) && reg_22(0,0) && reg_24(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 131;
}
if(reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 132;
}
if(reg_45(0,0) && reg_50(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_45(0,0) && reg_51(0,0) && reg_9(0,0) && reg_10(0,0) && reg_9(0,0) && reg_30(0,0) && reg_6(0,0) && reg_34(0,0) && reg_13(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 133;
}
if(reg_5(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 134;
}
if(reg_1(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 135;
}
if(reg_13(0,0) && reg_51(0,0) && reg_42(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_47(0,0) && reg_18(0,0) && reg_7(0,0) && reg_57(0,0) && reg_52(0,0) && reg_46(0,0) && reg_34(0,0) && reg_22(0,0) && reg_24(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 136;
}
if(reg_21(0,0) && reg_32(0,0) && reg_32(0,0) && reg_44(0,0) && reg_26(0,0) && reg_19(0,0) && reg_33(0,0) && reg_68(0,0)) {
matched = true;
pattern_id = 137;
}
if(reg_30(0,0) && reg_25(0,0) && reg_40(0,0) && reg_5(0,0) && reg_41(0,0) && reg_39(0,0) && reg_19(0,0) && reg_29(0,0) && reg_21(0,0) && reg_74(0,0) && reg_62(0,0) && reg_56(0,0) && reg_50(0,0) && reg_26(0,0) && reg_45(0,0) && reg_44(0,0) && reg_68(0,0) && reg_33(0,0) && reg_32(0,0) && reg_31(0,0) && reg_38(0,0) && reg_72(0,0) && reg_28(0,0) && reg_30(0,0) && reg_25(0,0) && reg_40(0,0) && reg_5(0,0) && reg_41(0,0) && reg_39(0,0) && reg_19(0,0) && reg_29(0,0) && reg_21(0,0)) {
matched = true;
pattern_id = 138;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 139;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 140;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 141;
}
if(reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_66(0,0) && reg_78(0,0) && reg_59(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 142;
}
if(reg_31(0,0) && reg_74(0,0) && reg_44(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_44(0,0) && reg_6(0,0) && reg_24(0,0) && reg_3(0,0) && reg_51(0,0) && reg_49(0,0) && reg_3(0,0) && reg_74(0,0) && reg_7(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 143;
}
if(reg_28(0,0) && reg_18(0,0) && reg_13(0,0) && reg_20(0,0) && reg_10(0,0) && reg_38(0,0) && reg_37(0,0) && reg_3(0,0) && reg_77(0,0) && reg_3(0,0) && reg_30(0,0) && reg_3(0,0) && reg_26(0,0) && reg_9(0,0) && reg_20(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 144;
}
if(reg_1(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 145;
}
if(reg_40(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_3(0,0) && reg_26(0,0) && reg_9(0,0) && reg_20(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_79(0,0) && reg_3(0,0) && reg_21(0,0) && reg_22(0,0) && reg_42(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 146;
}
if(reg_44(0,0) && reg_30(0,0) && reg_32(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 147;
}
if(reg_25(0,0) && reg_13(0,0) && reg_20(0,0) && reg_20(0,0) && reg_46(0,0) && reg_9(0,0) && reg_50(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 148;
}
if(reg_43(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 149;
}
if(reg_56(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_3(0,0) && reg_23(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 150;
}
if(reg_28(0,0) && reg_9(0,0) && reg_46(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_53(0,0) && reg_37(0,0) && reg_10(0,0) && reg_49(0,0) && reg_25(0,0) && reg_26(0,0) && reg_40(0,0) && reg_71(0,0) && reg_46(0,0) && reg_13(0,0) && reg_34(0,0) && reg_35(0,0) && reg_6(0,0) && reg_14(0,0) && reg_17(0,0) && reg_48(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 151;
}
if(reg_40(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_3(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 152;
}
if(reg_25(0,0) && reg_13(0,0) && reg_48(0,0) && reg_3(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_3(0,0) && reg_24(0,0) && reg_6(0,0) && reg_3(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 153;
}
if(reg_27(0,0) && reg_3(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0) && reg_3(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0) && reg_7(0,0) && reg_9(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 154;
}
if(reg_36(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0) && reg_2(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 155;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 156;
}
if(reg_30(0,0) && reg_5(0,0) && reg_50(0,0) && reg_21(0,0) && reg_26(0,0) && reg_21(0,0) && reg_32(0,0) && reg_31(0,0) && reg_33(0,0) && reg_30(0,0) && reg_31(0,0) && reg_45(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 157;
}
if(reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 158;
}
if(reg_37(0,0) && reg_42(0,0) && reg_42(0,0) && reg_10(0,0) && reg_34(0,0) && reg_49(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_48(0,0) && reg_51(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 159;
}
if(reg_71(0,0) && reg_44(0,0) && reg_74(0,0) && reg_56(0,0) && reg_3(0,0) && reg_33(0,0) && reg_5(0,0) && reg_80(0,0) && reg_50(0,0) && reg_32(0,0) && reg_19(0,0) && reg_3(0,0) && reg_5(0,0) && reg_21(0,0) && reg_32(0,0) && reg_44(0,0) && reg_56(0,0) && reg_30(0,0) && reg_80(0,0) && reg_3(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 160;
}
if(reg_21(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_3(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 161;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 162;
}
if(reg_67(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 163;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 164;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 165;
}
if(reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 166;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 167;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 168;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_28(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_26(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_31(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_60(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 169;
}
if(reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 170;
}
if(reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 171;
}
if(reg_50(0,0) && reg_32(0,0) && reg_19(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 172;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_21(0,0) && reg_40(0,0) && reg_68(0,0)) {
matched = true;
pattern_id = 173;
}
if(reg_26(0,0) && reg_21(0,0) && reg_40(0,0) && reg_62(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 174;
}
if(reg_32(0,0) && reg_31(0,0) && reg_45(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 175;
}
if(reg_40(0,0) && reg_28(0,0) && reg_5(0,0) && reg_3(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 176;
}
if(reg_50(0,0) && reg_62(0,0) && reg_5(0,0) && reg_3(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 177;
}
if(reg_50(0,0) && reg_62(0,0) && reg_5(0,0) && reg_3(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 178;
}
if(reg_50(0,0) && reg_62(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 179;
}
if(reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_19(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 180;
}
if(reg_19(0,0) && reg_26(0,0) && reg_38(0,0) && reg_31(0,0) && reg_41(0,0) && reg_56(0,0) && reg_56(0,0) && reg_30(0,0) && reg_3(0,0) && reg_40(0,0) && reg_45(0,0) && reg_26(0,0) && reg_26(0,0) && reg_41(0,0) && reg_40(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 181;
}
if(reg_19(0,0) && reg_26(0,0) && reg_38(0,0) && reg_31(0,0) && reg_41(0,0) && reg_56(0,0) && reg_56(0,0) && reg_30(0,0) && reg_3(0,0) && reg_45(0,0) && reg_62(0,0)) {
matched = true;
pattern_id = 182;
}
if(reg_33(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 183;
}
if(reg_32(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 184;
}
if(reg_43(0,0) && reg_43(0,0) && reg_2(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_61(0,0) && reg_17(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 185;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_61(0,0) && reg_3(0,0) && reg_64(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 186;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 187;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 188;
}
if(reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 189;
}
if(reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 190;
}
if(reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_24(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_67(0,0) && reg_3(0,0) && reg_67(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 191;
}
if(reg_77(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 192;
}
if(reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_3(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_6(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 193;
}
if(reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 194;
}
if(reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_24(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_3(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 195;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 196;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_6(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_44(0,0) && reg_9(0,0) && reg_6(0,0) && reg_34(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_3(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_7(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 197;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 198;
}
if(reg_30(0,0)) {
matched = true;
pattern_id = 199;
}
if(reg_72(0,0) && reg_41(0,0) && reg_33(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 200;
}
if(reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 201;
}
if(reg_9(0,0) && reg_18(0,0) && reg_46(0,0) && reg_24(0,0) && reg_3(0,0) && reg_42(0,0) && reg_49(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 202;
}
if(reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_22(0,0) && reg_3(0,0) && reg_42(0,0) && reg_49(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 203;
}
if(reg_30(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 204;
}
if(reg_1(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 205;
}
if(reg_42(0,0) && reg_49(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 206;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 207;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_41(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_60(0,0) && reg_1(0,0) && reg_76(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_41(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_60(0,0) && reg_1(0,0) && reg_76(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_41(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_60(0,0) && reg_1(0,0) && reg_76(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_41(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_60(0,0) && reg_1(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 208;
}
if(reg_1(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0) && reg_11(0,0) && reg_1(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0) && reg_11(0,0) && reg_1(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0) && reg_11(0,0) && reg_1(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0) && reg_11(0,0)) {
matched = true;
pattern_id = 209;
}
if(reg_45(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_1(0,0) && reg_45(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_1(0,0) && reg_45(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_1(0,0) && reg_45(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 210;
}
if(reg_19(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_1(0,0) && reg_19(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_1(0,0) && reg_19(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_1(0,0) && reg_19(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 211;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_53(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_53(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_53(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_53(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 212;
}
if(reg_1(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_64(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_64(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_64(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_64(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 213;
}
if(reg_1(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 214;
}
if(reg_1(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_27(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 215;
}
if(reg_1(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 216;
}
if(reg_1(0,0) && reg_60(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_64(0,0) && reg_27(0,0) && reg_3(0,0) && reg_5(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 217;
}
if(reg_1(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 218;
}
if(reg_1(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_25(0,0) && reg_43(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 219;
}
if(reg_1(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 220;
}
if(reg_1(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_41(0,0) && reg_60(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 221;
}
if(reg_6(0,0) && reg_42(0,0) && reg_37(0,0) && reg_20(0,0) && reg_3(0,0) && reg_20(0,0) && reg_24(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 222;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_5(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 223;
}
if(reg_29(0,0) && reg_41(0,0) && reg_56(0,0) && reg_44(0,0)) {
matched = true;
pattern_id = 224;
}
if(reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_3(0,0) && reg_78(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 225;
}
if(reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 226;
}
if(reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_49(0,0) && reg_77(0,0) && reg_20(0,0) && reg_24(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_13(0,0) && reg_69(0,0) && reg_17(0,0) && reg_81(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 227;
}
if(reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_3(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 228;
}
if(reg_50(0,0) && reg_30(0,0) && reg_21(0,0) && reg_56(0,0) && reg_3(0,0) && reg_39(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_58(0,0) && reg_36(0,0) && reg_10(0,0) && reg_6(0,0) && reg_58(0,0) && reg_36(0,0) && reg_42(0,0) && reg_51(0,0) && reg_58(0,0) && reg_20(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 229;
}
if(reg_40(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_50(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0) && reg_79(0,0) && reg_3(0,0) && reg_44(0,0) && reg_78(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 230;
}
if(reg_40(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_50(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0) && reg_79(0,0) && reg_44(0,0) && reg_78(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 231;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_50(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 232;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_48(0,0) && reg_13(0,0) && reg_9(0,0) && reg_34(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 233;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_50(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 234;
}
if(reg_8(0,0) && reg_6(0,0) && reg_23(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 235;
}
if(reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_57(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_51(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 236;
}
if(reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 237;
}
if(reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 238;
}
if(reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 239;
}
if(reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 240;
}
if(reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 241;
}
if(reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 242;
}
if(reg_56(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_3(0,0) && reg_23(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_3(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_3(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_82(0,0) && reg_10(0,0) && reg_13(0,0) && reg_82(0,0)) {
matched = true;
pattern_id = 243;
}
if(reg_64(0,0) && reg_3(0,0) && reg_1(0,0) && reg_5(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_33(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_38(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_64(0,0) && reg_3(0,0) && reg_1(0,0) && reg_41(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 244;
}
if(reg_29(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_76(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_44(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_17(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 245;
}
if(reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 246;
}
if(reg_11(0,0) && reg_5(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 247;
}
if(reg_45(0,0) && reg_36(0,0) && reg_20(0,0) && reg_45(0,0) && reg_23(0,0) && reg_25(0,0) && reg_24(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 248;
}
if(reg_73(0,0) && reg_33(0,0) && reg_56(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 249;
}
if(reg_46(0,0) && reg_48(0,0) && reg_73(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_73(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 250;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 251;
}
if(reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_8(0,0) && reg_73(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 252;
}
if(reg_20(0,0) && reg_24(0,0) && reg_3(0,0) && reg_10(0,0) && reg_36(0,0) && reg_3(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 253;
}
if(reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_3(0,0) && reg_24(0,0) && reg_22(0,0) && reg_3(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_3(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 254;
}
if(reg_56(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_3(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_6(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 255;
}
if(reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 256;
}
if(reg_58(0,0) && reg_18(0,0) && reg_10(0,0) && reg_16(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 257;
}
if(reg_58(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 258;
}
if(reg_58(0,0) && reg_15(0,0) && reg_10(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0) && reg_58(0,0) && reg_28(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 259;
}
if(reg_58(0,0) && reg_80(0,0) && reg_13(0,0) && reg_25(0,0) && reg_25(0,0)) {
matched = true;
pattern_id = 260;
}
if(reg_58(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_48(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 261;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_48(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 262;
}
if(reg_58(0,0) && reg_15(0,0) && reg_18(0,0) && reg_24(0,0) && reg_7(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 263;
}
if(reg_58(0,0) && reg_15(0,0) && reg_18(0,0) && reg_24(0,0) && reg_7(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 264;
}
if(reg_3(0,0) && reg_58(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 265;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_10(0,0) && reg_63(0,0) && reg_13(0,0) && reg_51(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 266;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_10(0,0) && reg_63(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 267;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 268;
}
if(reg_58(0,0) && reg_48(0,0) && reg_42(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 269;
}
if(reg_58(0,0) && reg_48(0,0) && reg_42(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 270;
}
if(reg_58(0,0) && reg_34(0,0) && reg_34(0,0) && reg_10(0,0) && reg_20(0,0) && reg_48(0,0) && reg_24(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 271;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 272;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_37(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 273;
}
if(reg_58(0,0) && reg_42(0,0) && reg_8(0,0) && reg_10(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 274;
}
if(reg_58(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 275;
}
if(reg_58(0,0) && reg_47(0,0) && reg_46(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_10(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 276;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 277;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_0(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 278;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 279;
}
if(reg_58(0,0) && reg_22(0,0) && reg_37(0,0) && reg_18(0,0) && reg_77(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_77(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 280;
}
if(reg_58(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_46(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 281;
}
if(reg_58(0,0) && reg_6(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 282;
}
if(reg_58(0,0) && reg_6(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_10(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 283;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_77(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 284;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_42(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 285;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 286;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_47(0,0) && reg_13(0,0) && reg_7(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 287;
}
if(reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 288;
}
if(reg_58(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_46(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 289;
}
if(reg_58(0,0) && reg_13(0,0) && reg_47(0,0) && reg_46(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_10(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 290;
}
if(reg_58(0,0) && reg_30(0,0) && reg_22(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 291;
}
if(reg_58(0,0) && reg_13(0,0) && reg_6(0,0) && reg_47(0,0) && reg_10(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 292;
}
if(reg_58(0,0) && reg_30(0,0) && reg_31(0,0) && reg_77(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 293;
}
if(reg_58(0,0) && reg_51(0,0) && reg_22(0,0) && reg_51(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 294;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 295;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_77(0,0) && reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 296;
}
if(reg_58(0,0) && reg_15(0,0) && reg_13(0,0) && reg_7(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 297;
}
if(reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 298;
}
if(reg_58(0,0) && reg_15(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 299;
}
if(reg_58(0,0) && reg_15(0,0) && reg_6(0,0) && reg_13(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 300;
}
if(reg_58(0,0) && reg_42(0,0) && reg_46(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_9(0,0) && reg_48(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 301;
}
if(reg_58(0,0) && reg_9(0,0) && reg_22(0,0) && reg_8(0,0) && reg_7(0,0) && reg_6(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 302;
}
if(reg_58(0,0) && reg_23(0,0) && reg_13(0,0) && reg_16(0,0) && reg_10(0,0) && reg_36(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 303;
}
if(reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 304;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 305;
}
if(reg_58(0,0) && reg_10(0,0) && reg_22(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 306;
}
if(reg_58(0,0) && reg_15(0,0) && reg_35(0,0) && reg_77(0,0) && reg_34(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 307;
}
if(reg_58(0,0) && reg_42(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 308;
}
if(reg_58(0,0) && reg_48(0,0) && reg_13(0,0) && reg_49(0,0) && reg_43(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0) && reg_7(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 309;
}
if(reg_58(0,0) && reg_48(0,0) && reg_13(0,0) && reg_49(0,0) && reg_43(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 310;
}
if(reg_58(0,0) && reg_52(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 311;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_77(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 312;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 313;
}
if(reg_58(0,0) && reg_6(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 314;
}
if(reg_58(0,0) && reg_48(0,0) && reg_36(0,0) && reg_34(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0) && reg_8(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 315;
}
if(reg_58(0,0) && reg_10(0,0) && reg_22(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_9(0,0) && reg_6(0,0) && reg_14(0,0) && reg_17(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 316;
}
if(reg_58(0,0) && reg_10(0,0) && reg_36(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 317;
}
if(reg_58(0,0) && reg_20(0,0) && reg_42(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 318;
}
if(reg_58(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_77(0,0) && reg_42(0,0) && reg_77(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 319;
}
if(reg_58(0,0) && reg_6(0,0) && reg_52(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 320;
}
if(reg_58(0,0) && reg_15(0,0) && reg_35(0,0) && reg_20(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 321;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 322;
}
if(reg_58(0,0) && reg_56(0,0) && reg_28(0,0) && reg_19(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 323;
}
if(reg_58(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_7(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 324;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 325;
}
if(reg_58(0,0) && reg_23(0,0) && reg_46(0,0) && reg_9(0,0) && reg_16(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 326;
}
if(reg_58(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 327;
}
if(reg_58(0,0) && reg_37(0,0) && reg_18(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 328;
}
if(reg_58(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_77(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 329;
}
if(reg_58(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 330;
}
if(reg_58(0,0) && reg_37(0,0) && reg_37(0,0) && reg_48(0,0) && reg_10(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 331;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 332;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 333;
}
if(reg_58(0,0) && reg_30(0,0) && reg_22(0,0) && reg_49(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 334;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 335;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 336;
}
if(reg_58(0,0) && reg_15(0,0) && reg_13(0,0) && reg_49(0,0) && reg_77(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 337;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_46(0,0) && reg_10(0,0) && reg_77(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 338;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 339;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 340;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_10(0,0) && reg_37(0,0) && reg_7(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 341;
}
if(reg_20(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 342;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_17(0,0) && reg_34(0,0) && reg_13(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 343;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_58(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 344;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_58(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 345;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_58(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 346;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_58(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 347;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 348;
}
if(reg_40(0,0) && reg_39(0,0) && reg_73(0,0) && reg_32(0,0) && reg_41(0,0) && reg_31(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0) && reg_32(0,0) && reg_45(0,0) && reg_38(0,0) && reg_33(0,0) && reg_40(0,0) && reg_41(0,0) && reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_26(0,0) && reg_30(0,0) && reg_50(0,0) && reg_41(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 349;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_22(0,0) && reg_7(0,0) && reg_37(0,0) && reg_37(0,0) && reg_9(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_9(0,0) && reg_16(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 350;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_9(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_6(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_42(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 351;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_52(0,0) && reg_10(0,0) && reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 352;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 353;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_8(0,0) && reg_51(0,0) && reg_9(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_58(0,0) && reg_51(0,0) && reg_9(0,0) && reg_13(0,0) && reg_22(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 354;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_22(0,0) && reg_7(0,0) && reg_37(0,0) && reg_37(0,0) && reg_9(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_36(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 355;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_45(0,0) && reg_5(0,0) && reg_25(0,0) && reg_40(0,0) && reg_5(0,0) && reg_32(0,0) && reg_26(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 356;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_5(0,0) && reg_25(0,0) && reg_40(0,0) && reg_45(0,0) && reg_26(0,0) && reg_26(0,0) && reg_41(0,0) && reg_40(0,0) && reg_31(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_32(0,0) && reg_73(0,0) && reg_39(0,0) && reg_56(0,0) && reg_38(0,0) && reg_32(0,0) && reg_29(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 357;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_9(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 358;
}
if(reg_40(0,0) && reg_39(0,0) && reg_73(0,0) && reg_32(0,0) && reg_41(0,0) && reg_31(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0) && reg_32(0,0) && reg_45(0,0) && reg_38(0,0) && reg_33(0,0) && reg_40(0,0) && reg_41(0,0) && reg_44(0,0) && reg_30(0,0) && reg_32(0,0) && reg_32(0,0) && reg_28(0,0) && reg_45(0,0) && reg_33(0,0) && reg_5(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 359;
}
if(reg_40(0,0) && reg_39(0,0) && reg_73(0,0) && reg_21(0,0) && reg_32(0,0) && reg_40(0,0) && reg_45(0,0) && reg_56(0,0) && reg_5(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0) && reg_32(0,0) && reg_45(0,0) && reg_38(0,0) && reg_33(0,0) && reg_40(0,0) && reg_41(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 360;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_41(0,0) && reg_26(0,0) && reg_40(0,0) && reg_33(0,0) && reg_80(0,0) && reg_44(0,0) && reg_31(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 361;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_9(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_49(0,0) && reg_24(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_48(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 362;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_45(0,0) && reg_5(0,0) && reg_25(0,0) && reg_40(0,0) && reg_21(0,0) && reg_26(0,0) && reg_21(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 363;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_5(0,0) && reg_41(0,0) && reg_40(0,0) && reg_33(0,0) && reg_80(0,0) && reg_44(0,0) && reg_31(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 364;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 365;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_32(0,0) && reg_41(0,0) && reg_31(0,0) && reg_45(0,0) && reg_5(0,0) && reg_25(0,0) && reg_40(0,0) && reg_21(0,0) && reg_26(0,0) && reg_21(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 366;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_32(0,0) && reg_41(0,0) && reg_31(0,0) && reg_31(0,0) && reg_21(0,0) && reg_26(0,0) && reg_19(0,0) && reg_32(0,0) && reg_73(0,0) && reg_33(0,0) && reg_41(0,0) && reg_39(0,0) && reg_33(0,0) && reg_41(0,0) && reg_32(0,0) && reg_29(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 367;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 368;
}
if(reg_40(0,0) && reg_39(0,0) && reg_38(0,0) && reg_32(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_73(0,0) && reg_72(0,0) && reg_41(0,0) && reg_33(0,0) && reg_21(0,0) && reg_39(0,0) && reg_80(0,0) && reg_50(0,0) && reg_30(0,0) && reg_21(0,0) && reg_56(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 369;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_22(0,0) && reg_7(0,0) && reg_37(0,0) && reg_37(0,0) && reg_9(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 370;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0) && reg_46(0,0) && reg_10(0,0) && reg_49(0,0) && reg_22(0,0) && reg_20(0,0) && reg_13(0,0) && reg_16(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 371;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 372;
}
if(reg_58(0,0) && reg_24(0,0) && reg_22(0,0) && reg_6(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 373;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_37(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 374;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_22(0,0) && reg_7(0,0) && reg_37(0,0) && reg_37(0,0) && reg_9(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 375;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_6(0,0) && reg_37(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 376;
}
if(reg_44(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 377;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 378;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 379;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 380;
}
if(reg_58(0,0) && reg_23(0,0) && reg_37(0,0) && reg_10(0,0) && reg_6(0,0) && reg_8(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 381;
}
if(reg_58(0,0) && reg_23(0,0) && reg_37(0,0) && reg_6(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 382;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_58(0,0) && reg_23(0,0) && reg_37(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 383;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_39(0,0) && reg_37(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 384;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 385;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 386;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 387;
}
if(reg_58(0,0) && reg_42(0,0) && reg_23(0,0) && reg_47(0,0) && reg_15(0,0) && reg_7(0,0) && reg_14(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 388;
}
if(reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 389;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_6(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 390;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 391;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 392;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_37(0,0) && reg_8(0,0) && reg_20(0,0) && reg_58(0,0) && reg_13(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 393;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 394;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 395;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_37(0,0) && reg_8(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 396;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 397;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_37(0,0) && reg_8(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_10(0,0) && reg_20(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 398;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_37(0,0) && reg_8(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 399;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 400;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_37(0,0) && reg_8(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_8(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 401;
}
if(reg_58(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 402;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_37(0,0) && reg_8(0,0) && reg_20(0,0) && reg_58(0,0) && reg_15(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_20(0,0) && reg_24(0,0) && reg_17(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 403;
}
if(reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 404;
}
if(reg_58(0,0) && reg_48(0,0) && reg_8(0,0) && reg_15(0,0) && reg_10(0,0) && reg_10(0,0) && reg_6(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 405;
}
if(reg_58(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 406;
}
if(reg_56(0,0) && reg_45(0,0) && reg_40(0,0) && reg_62(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 407;
}
if(reg_17(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 408;
}
if(reg_58(0,0) && reg_55(0,0) && reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 409;
}
if(reg_17(0,0) && reg_17(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 410;
}
if(reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_11(0,0) && reg_1(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 411;
}
if(reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 412;
}
if(reg_17(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 413;
}
if(reg_76(0,0) && reg_0(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 414;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_15(0,0) && reg_63(0,0) && reg_40(0,0) && reg_7(0,0) && reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_29(0,0) && reg_7(0,0) && reg_20(0,0) && reg_10(0,0) && reg_39(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 415;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_40(0,0) && reg_19(0,0) && reg_21(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 416;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_20(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_51(0,0) && reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 417;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_10(0,0) && reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 418;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_16(0,0) && reg_49(0,0) && reg_58(0,0) && reg_15(0,0) && reg_35(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_16(0,0) && reg_49(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 419;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 420;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 421;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 422;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0) && reg_58(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_47(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 423;
}
if(reg_58(0,0) && reg_34(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_42(0,0) && reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_42(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 424;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 425;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_13(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 426;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_7(0,0) && reg_10(0,0) && reg_34(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0) && reg_63(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 427;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0) && reg_58(0,0) && reg_13(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 428;
}
if(reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 429;
}
if(reg_1(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_55(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 430;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_51(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 431;
}
if(reg_58(0,0) && reg_51(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 432;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_51(0,0) && reg_24(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 433;
}
if(reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 434;
}
if(reg_17(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_63(0,0) && reg_83(0,0)) {
matched = true;
pattern_id = 435;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_7(0,0) && reg_6(0,0) && reg_58(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_7(0,0) && reg_20(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_51(0,0) && reg_6(0,0) && reg_15(0,0) && reg_10(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 436;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_48(0,0) && reg_52(0,0) && reg_58(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_51(0,0) && reg_6(0,0) && reg_15(0,0) && reg_10(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 437;
}
if(reg_58(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_73(0,0) && reg_74(0,0) && reg_32(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 438;
}
if(reg_83(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_67(0,0) && reg_58(0,0) && reg_10(0,0) && reg_67(0,0) && reg_42(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_55(0,0) && reg_17(0,0) && reg_55(0,0)) {
matched = true;
pattern_id = 439;
}
if(reg_58(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_72(0,0) && reg_13(0,0) && reg_6(0,0) && reg_7(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_73(0,0) && reg_74(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 440;
}
if(reg_76(0,0) && reg_27(0,0) && reg_36(0,0)) {
matched = true;
pattern_id = 441;
}
if(reg_1(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_55(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 442;
}
if(reg_58(0,0) && reg_23(0,0) && reg_37(0,0) && reg_42(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 443;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_20(0,0) && reg_24(0,0) && reg_24(0,0) && reg_46(0,0) && reg_10(0,0) && reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_48(0,0) && reg_6(0,0) && reg_8(0,0) && reg_10(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 444;
}
if(reg_58(0,0) && reg_47(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 445;
}
if(reg_1(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_55(0,0) && reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 446;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0) && reg_58(0,0) && reg_13(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 447;
}
if(reg_40(0,0) && reg_7(0,0) && reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_29(0,0) && reg_7(0,0) && reg_20(0,0) && reg_10(0,0) && reg_39(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 448;
}
if(reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_42(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_11(0,0) && reg_1(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 449;
}
if(reg_3(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 450;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_8(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_37(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_73(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 451;
}
if(reg_58(0,0) && reg_34(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_42(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 452;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_20(0,0) && reg_24(0,0) && reg_24(0,0) && reg_46(0,0) && reg_10(0,0) && reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_48(0,0) && reg_10(0,0) && reg_22(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 453;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 454;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 455;
}
if(reg_3(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 456;
}
if(reg_58(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 457;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 458;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_64(0,0) && reg_61(0,0) && reg_17(0,0) && reg_8(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 459;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_44(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 460;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_62(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_50(0,0) && reg_9(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_18(0,0) && reg_7(0,0) && reg_37(0,0) && reg_58(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_37(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_58(0,0) && reg_72(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_40(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 461;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_62(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_50(0,0) && reg_9(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_18(0,0) && reg_7(0,0) && reg_37(0,0) && reg_58(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_37(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_20(0,0) && reg_36(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_13(0,0) && reg_46(0,0) && reg_58(0,0) && reg_72(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_40(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 462;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_32(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_62(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_50(0,0) && reg_9(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_18(0,0) && reg_7(0,0) && reg_37(0,0) && reg_58(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_37(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_20(0,0) && reg_36(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_13(0,0) && reg_46(0,0) && reg_58(0,0) && reg_72(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_40(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 463;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_32(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_62(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_44(0,0) && reg_36(0,0) && reg_10(0,0) && reg_18(0,0) && reg_58(0,0) && reg_72(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_40(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 464;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_32(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_62(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_32(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_58(0,0) && reg_72(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_40(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 465;
}
if(reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 466;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_10(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 467;
}
if(reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_58(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 468;
}
if(reg_58(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 469;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 470;
}
if(reg_31(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_39(0,0)) {
matched = true;
pattern_id = 471;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 472;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 473;
}
if(reg_11(0,0) && reg_2(0,0) && reg_35(0,0)) {
matched = true;
pattern_id = 474;
}
if(reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 475;
}
if(reg_33(0,0) && reg_41(0,0) && reg_72(0,0) && reg_56(0,0) && reg_45(0,0) && reg_19(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 476;
}
if(reg_21(0,0) && reg_26(0,0) && reg_5(0,0) && reg_41(0,0) && reg_75(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 477;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_44(0,0) && reg_41(0,0) && reg_33(0,0) && reg_31(0,0) && reg_21(0,0) && reg_41(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 478;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 479;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 480;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 481;
}
if(reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 482;
}
if(reg_76(0,0) && reg_0(0,0) && reg_43(0,0) && reg_0(0,0) && reg_9(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 483;
}
if(reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 484;
}
if(reg_16(0,0) && reg_37(0,0) && reg_73(0,0) && reg_9(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_48(0,0) && reg_10(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 485;
}
if(reg_16(0,0) && reg_37(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 486;
}
if(reg_16(0,0) && reg_37(0,0) && reg_73(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_34(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 487;
}
if(reg_16(0,0) && reg_37(0,0) && reg_73(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_10(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 488;
}
if(reg_22(0,0) && reg_42(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 489;
}
if(reg_15(0,0) && reg_10(0,0) && reg_18(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 490;
}
if(reg_6(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 491;
}
if(reg_20(0,0) && reg_9(0,0) && reg_46(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 492;
}
if(reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 493;
}
if(reg_20(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 494;
}
if(reg_16(0,0) && reg_37(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 495;
}
if(reg_32(0,0) && reg_41(0,0) && reg_30(0,0) && reg_33(0,0) && reg_40(0,0) && reg_29(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 496;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 497;
}
if(reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 498;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_18(0,0) && reg_7(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 499;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 500;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 501;
}
if(reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_18(0,0) && reg_7(0,0) && reg_20(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 502;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 503;
}
if(reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 504;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_17(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_17(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_42(0,0) && reg_17(0,0) && reg_38(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 505;
}
if(reg_58(0,0) && reg_48(0,0) && reg_10(0,0) && reg_47(0,0) && reg_15(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_63(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 506;
}
if(reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_76(0,0) && reg_35(0,0) && reg_40(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_76(0,0) && reg_0(0,0) && reg_2(0,0) && reg_46(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_36(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_76(0,0) && reg_35(0,0) && reg_5(0,0) && reg_76(0,0) && reg_0(0,0) && reg_0(0,0) && reg_74(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 507;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_41(0,0) && reg_16(0,0) && reg_9(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 508;
}
if(reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 509;
}
if(reg_1(0,0) && reg_25(0,0) && reg_30(0,0) && reg_1(0,0) && reg_21(0,0) && reg_1(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_61(0,0) && reg_3(0,0) && reg_5(0,0) && reg_0(0,0) && reg_3(0,0) && reg_25(0,0) && reg_64(0,0) && reg_3(0,0) && reg_25(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_61(0,0) && reg_3(0,0) && reg_5(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 510;
}
if(reg_63(0,0) && reg_32(0,0) && reg_31(0,0) && reg_33(0,0) && reg_41(0,0) && reg_26(0,0) && reg_19(0,0) && reg_38(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 511;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 512;
}
if(reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 513;
}
if(reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0) && reg_44(0,0) && reg_30(0,0) && reg_32(0,0) && reg_32(0,0) && reg_28(0,0) && reg_45(0,0) && reg_33(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 514;
}
if(reg_63(0,0) && reg_63(0,0) && reg_63(0,0) && reg_63(0,0) && reg_63(0,0) && reg_63(0,0) && reg_63(0,0) && reg_63(0,0) && reg_63(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 515;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 516;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_48(0,0) && reg_73(0,0) && reg_23(0,0) && reg_9(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 517;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_10(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 518;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 519;
}
if(reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_73(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_34(0,0) && reg_48(0,0) && reg_51(0,0)) {
matched = true;
pattern_id = 520;
}
if(reg_58(0,0) && reg_42(0,0) && reg_49(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 521;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_74(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_27(0,0) && reg_17(0,0) && reg_0(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 522;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_10(0,0) && reg_3(0,0) && reg_32(0,0) && reg_9(0,0) && reg_42(0,0) && reg_36(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_3(0,0) && reg_30(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_49(0,0) && reg_14(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 523;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_36(0,0) && reg_10(0,0) && reg_73(0,0) && reg_7(0,0) && reg_10(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_73(0,0) && reg_49(0,0) && reg_24(0,0) && reg_36(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 524;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_77(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_37(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 525;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_10(0,0) && reg_8(0,0) && reg_42(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 526;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_7(0,0) && reg_20(0,0) && reg_58(0,0) && reg_44(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_21(0,0) && reg_20(0,0) && reg_73(0,0) && reg_32(0,0) && reg_32(0,0) && reg_21(0,0) && reg_73(0,0) && reg_8(0,0) && reg_0(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 527;
}
if(reg_58(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 528;
}
if(reg_58(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0) && reg_58(0,0) && reg_10(0,0) && reg_22(0,0) && reg_37(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 529;
}
if(reg_58(0,0) && reg_76(0,0) && reg_2(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 530;
}
if(reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_9(0,0) && reg_47(0,0) && reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 531;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 532;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 533;
}
if(reg_63(0,0) && reg_5(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_5(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 534;
}
if(reg_63(0,0) && reg_41(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_5(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 535;
}
if(reg_46(0,0) && reg_10(0,0) && reg_76(0,0) && reg_0(0,0) && reg_2(0,0) && reg_77(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 536;
}
if(reg_58(0,0) && reg_34(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 537;
}
if(reg_58(0,0) && reg_34(0,0) && reg_49(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 538;
}
if(reg_58(0,0) && reg_9(0,0) && reg_20(0,0) && reg_42(0,0) && reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 539;
}
if(reg_63(0,0) && reg_44(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 540;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 541;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 542;
}
if(reg_73(0,0) && reg_30(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_40(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_38(0,0) && reg_6(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 543;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 544;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 545;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_13(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 546;
}
if(reg_17(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_13(0,0) && reg_42(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 547;
}
if(reg_17(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_73(0,0) && reg_13(0,0) && reg_42(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 548;
}
if(reg_1(0,0) && reg_41(0,0) && reg_25(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_64(0,0) && reg_30(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_40(0,0) && reg_35(0,0) && reg_1(0,0) && reg_65(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_64(0,0) && reg_5(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 549;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_35(0,0)) {
matched = true;
pattern_id = 550;
}
if(reg_42(0,0) && reg_48(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 551;
}
if(reg_44(0,0) && reg_29(0,0) && reg_44(0,0) && reg_73(0,0) && reg_30(0,0) && reg_38(0,0) && reg_31(0,0) && reg_29(0,0) && reg_73(0,0) && reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_78(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 552;
}
if(reg_29(0,0) && reg_41(0,0) && reg_30(0,0) && reg_5(0,0) && reg_58(0,0) && reg_17(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 553;
}
if(reg_58(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 554;
}
if(reg_58(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 555;
}
if(reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 556;
}
if(reg_58(0,0) && reg_69(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 557;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 558;
}
if(reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 559;
}
if(reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 560;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 561;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 562;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_34(0,0) && reg_42(0,0) && reg_23(0,0) && reg_47(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 563;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_34(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 564;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 565;
}
if(reg_58(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 566;
}
if(reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 567;
}
if(reg_58(0,0) && reg_58(0,0) && reg_58(0,0) && reg_58(0,0) && reg_58(0,0) && reg_58(0,0) && reg_58(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 568;
}
if(reg_58(0,0) && reg_44(0,0) && reg_32(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_44(0,0) && reg_32(0,0) && reg_40(0,0) && reg_45(0,0) && reg_41(0,0) && reg_6(0,0) && reg_6(0,0) && reg_44(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 569;
}
if(reg_58(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 570;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0)) {
matched = true;
pattern_id = 571;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_35(0,0)) {
matched = true;
pattern_id = 572;
}
if(reg_58(0,0) && reg_42(0,0) && reg_35(0,0) && reg_0(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_58(0,0) && reg_40(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_44(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 573;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 574;
}
if(reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_52(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 575;
}
if(reg_58(0,0) && reg_19(0,0) && reg_28(0,0) && reg_28(0,0) && reg_41(0,0) && reg_25(0,0) && reg_17(0,0) && reg_41(0,0) && reg_75(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 576;
}
if(reg_58(0,0) && reg_15(0,0) && reg_10(0,0) && reg_73(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 577;
}
if(reg_58(0,0) && reg_6(0,0) && reg_37(0,0) && reg_34(0,0) && reg_73(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 578;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 579;
}
if(reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_47(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 580;
}
if(reg_58(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_58(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_73(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 581;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_57(0,0) && reg_57(0,0)) {
matched = true;
pattern_id = 582;
}
if(reg_58(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 583;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_77(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 584;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_35(0,0)) {
matched = true;
pattern_id = 585;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_24(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_35(0,0)) {
matched = true;
pattern_id = 586;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_35(0,0) && reg_0(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 587;
}
if(reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_63(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 588;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_42(0,0) && reg_10(0,0) && reg_77(0,0) && reg_48(0,0) && reg_36(0,0) && reg_34(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 589;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 590;
}
if(reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0) && reg_48(0,0) && reg_51(0,0) && reg_27(0,0) && reg_77(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 591;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 592;
}
if(reg_58(0,0) && reg_10(0,0) && reg_46(0,0) && reg_16(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_63(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 593;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_77(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 594;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_37(0,0) && reg_77(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 595;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 596;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_77(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 597;
}
if(reg_58(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_58(0,0) && reg_57(0,0) && reg_48(0,0) && reg_52(0,0) && reg_33(0,0) && reg_12(0,0) && reg_26(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 598;
}
if(reg_58(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 599;
}
if(reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_57(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 600;
}
if(reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_57(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 601;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 602;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_35(0,0)) {
matched = true;
pattern_id = 603;
}
if(reg_63(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_36(0,0) && reg_10(0,0) && reg_6(0,0) && reg_77(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 604;
}
if(reg_17(0,0) && reg_17(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 605;
}
if(reg_21(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_3(0,0) && reg_38(0,0) && reg_33(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 606;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_8(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 607;
}
if(reg_58(0,0) && reg_13(0,0) && reg_16(0,0) && reg_77(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 608;
}
if(reg_58(0,0) && reg_13(0,0) && reg_16(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 609;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_34(0,0) && reg_47(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 610;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_47(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 611;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_37(0,0) && reg_24(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 612;
}
if(reg_58(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 613;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_77(0,0) && reg_34(0,0) && reg_13(0,0) && reg_37(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 614;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 615;
}
if(reg_58(0,0) && reg_51(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 616;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 617;
}
if(reg_58(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 618;
}
if(reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 619;
}
if(reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_10(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 620;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 621;
}
if(reg_58(0,0) && reg_48(0,0) && reg_23(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 622;
}
if(reg_58(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 623;
}
if(reg_58(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_15(0,0) && reg_9(0,0) && reg_6(0,0) && reg_63(0,0) && reg_5(0,0) && reg_25(0,0)) {
matched = true;
pattern_id = 624;
}
if(reg_58(0,0) && reg_33(0,0) && reg_45(0,0) && reg_30(0,0) && reg_5(0,0) && reg_32(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 625;
}
if(reg_50(0,0) && reg_21(0,0) && reg_31(0,0) && reg_77(0,0) && reg_50(0,0) && reg_30(0,0) && reg_19(0,0) && reg_21(0,0) && reg_40(0,0) && reg_77(0,0) && reg_40(0,0) && reg_45(0,0) && reg_45(0,0) && reg_62(0,0) && reg_21(0,0) && reg_41(0,0) && reg_77(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 626;
}
if(reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 627;
}
if(reg_58(0,0) && reg_39(0,0) && reg_20(0,0) && reg_37(0,0) && reg_32(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 628;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 629;
}
if(reg_58(0,0) && reg_39(0,0) && reg_20(0,0) && reg_37(0,0) && reg_32(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0) && reg_40(0,0) && reg_32(0,0) && reg_44(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 630;
}
if(reg_58(0,0) && reg_39(0,0) && reg_20(0,0) && reg_37(0,0) && reg_32(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0) && reg_40(0,0) && reg_72(0,0) && reg_44(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 631;
}
if(reg_25(0,0) && reg_41(0,0) && reg_30(0,0) && reg_72(0,0) && reg_21(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 632;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_27(0,0) && reg_1(0,0) && reg_5(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_41(0,0) && reg_60(0,0) && reg_1(0,0) && reg_54(0,0) && reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 633;
}
if(reg_58(0,0) && reg_32(0,0) && reg_28(0,0) && reg_41(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 634;
}
if(reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 635;
}
if(reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 636;
}
if(reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_12(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 637;
}
if(reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_12(0,0)) {
matched = true;
pattern_id = 638;
}
if(reg_58(0,0) && reg_23(0,0) && reg_37(0,0) && reg_35(0,0) && reg_2(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 639;
}
if(reg_58(0,0) && reg_23(0,0) && reg_37(0,0) && reg_11(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 640;
}
if(reg_58(0,0) && reg_46(0,0) && reg_9(0,0) && reg_8(0,0) && reg_9(0,0) && reg_46(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 641;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_54(0,0) && reg_80(0,0) && reg_9(0,0) && reg_10(0,0) && reg_70(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_5(0,0) && reg_1(0,0) && reg_83(0,0)) {
matched = true;
pattern_id = 642;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 643;
}
if(reg_73(0,0) && reg_44(0,0) && reg_29(0,0) && reg_44(0,0) && reg_56(0,0) && reg_21(0,0) && reg_25(0,0) && reg_54(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_70(0,0)) {
matched = true;
pattern_id = 644;
}
if(reg_58(0,0) && reg_48(0,0) && reg_51(0,0) && reg_73(0,0) && reg_34(0,0) && reg_49(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 645;
}
if(reg_58(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 646;
}
if(reg_1(0,0) && reg_61(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_1(0,0) && reg_16(0,0) && reg_1(0,0) && reg_61(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_1(0,0) && reg_16(0,0) && reg_1(0,0) && reg_61(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_1(0,0) && reg_16(0,0) && reg_1(0,0) && reg_61(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_1(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 647;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_56(0,0) && reg_24(0,0) && reg_47(0,0) && reg_24(0,0) && reg_22(0,0) && reg_39(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 648;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 649;
}
if(reg_58(0,0) && reg_34(0,0) && reg_10(0,0) && reg_48(0,0) && reg_13(0,0) && reg_42(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 650;
}
if(reg_58(0,0) && reg_73(0,0) && reg_34(0,0) && reg_9(0,0) && reg_34(0,0) && reg_73(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 651;
}
if(reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 652;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 653;
}
if(reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_17(0,0) && reg_24(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_34(0,0) && reg_46(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 654;
}
if(reg_58(0,0) && reg_47(0,0) && reg_6(0,0) && reg_13(0,0) && reg_37(0,0) && reg_18(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_34(0,0) && reg_46(0,0) && reg_35(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 655;
}
if(reg_72(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_3(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_13(0,0) && reg_46(0,0) && reg_3(0,0) && reg_26(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 656;
}
if(reg_33(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_21(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_40(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_29(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_5(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_17(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_5(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_56(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 657;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 658;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 659;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_10(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 660;
}
if(reg_58(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0) && reg_0(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 661;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 662;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_34(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 663;
}
if(reg_58(0,0) && reg_14(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 664;
}
if(reg_77(0,0) && reg_10(0,0) && reg_24(0,0) && reg_13(0,0) && reg_3(0,0) && reg_76(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 665;
}
if(reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 666;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 667;
}
if(reg_1(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_3(0,0) && reg_64(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 668;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_28(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 669;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 670;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_16(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 671;
}
if(reg_58(0,0) && reg_63(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 672;
}
if(reg_69(0,0)) {
matched = true;
pattern_id = 673;
}
if(reg_32(0,0) && reg_31(0,0) && reg_30(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 674;
}
if(reg_58(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_73(0,0) && reg_72(0,0) && reg_25(0,0) && reg_32(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 675;
}
if(reg_58(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_58(0,0) && reg_57(0,0) && reg_48(0,0) && reg_52(0,0) && reg_33(0,0) && reg_12(0,0) && reg_26(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 676;
}
if(reg_44(0,0) && reg_33(0,0) && reg_21(0,0) && reg_72(0,0) && reg_50(0,0) && reg_32(0,0) && reg_19(0,0)) {
matched = true;
pattern_id = 677;
}
if(reg_26(0,0) && reg_45(0,0) && reg_31(0,0) && reg_21(0,0) && reg_39(0,0) && reg_80(0,0) && reg_3(0,0) && reg_55(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 678;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 679;
}
if(reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 680;
}
if(reg_56(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 681;
}
if(reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0)) {
matched = true;
pattern_id = 682;
}
if(reg_58(0,0) && reg_46(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 683;
}
if(reg_13(0,0) && reg_7(0,0) && reg_34(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_48(0,0) && reg_48(0,0) && reg_19(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 684;
}
if(reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 685;
}
if(reg_58(0,0) && reg_14(0,0) && reg_34(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 686;
}
if(reg_58(0,0) && reg_15(0,0) && reg_13(0,0) && reg_49(0,0) && reg_77(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_58(0,0) && reg_15(0,0) && reg_13(0,0) && reg_49(0,0) && reg_77(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 687;
}
if(reg_27(0,0)) {
matched = true;
pattern_id = 688;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 689;
}
if(reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 690;
}
if(reg_58(0,0) && reg_34(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_42(0,0) && reg_58(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 691;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 692;
}
if(reg_58(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 693;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_58(0,0) && reg_13(0,0) && reg_47(0,0) && reg_24(0,0) && reg_6(0,0) && reg_13(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 694;
}
if(reg_58(0,0) && reg_10(0,0) && reg_34(0,0) && reg_10(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 695;
}
if(reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 696;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 697;
}
if(reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 698;
}
if(reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 699;
}
if(reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 700;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_5(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 701;
}
if(reg_2(0,0) && reg_83(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_1(0,0) && reg_30(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 702;
}
if(reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_1(0,0) && reg_30(0,0) && reg_11(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 703;
}
if(reg_41(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 704;
}
if(reg_19(0,0) && reg_26(0,0) && reg_38(0,0) && reg_31(0,0) && reg_41(0,0) && reg_56(0,0) && reg_56(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 705;
}
if(reg_58(0,0) && reg_17(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 706;
}
if(reg_58(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 707;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_68(0,0) && reg_36(0,0) && reg_7(0,0) && reg_42(0,0) && reg_52(0,0) && reg_20(0,0) && reg_7(0,0) && reg_34(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 708;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 709;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 710;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_41(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 711;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 712;
}
if(reg_58(0,0) && reg_22(0,0) && reg_37(0,0) && reg_18(0,0) && reg_77(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 713;
}
if(reg_58(0,0) && reg_13(0,0) && reg_6(0,0) && reg_47(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 714;
}
if(reg_58(0,0) && reg_30(0,0) && reg_31(0,0) && reg_77(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 715;
}
if(reg_58(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_13(0,0) && reg_7(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 716;
}
if(reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 717;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 718;
}
if(reg_58(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 719;
}
if(reg_58(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 720;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 721;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_10(0,0) && reg_8(0,0) && reg_42(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 722;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 723;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 724;
}
if(reg_44(0,0) && reg_33(0,0) && reg_21(0,0) && reg_72(0,0) && reg_50(0,0) && reg_32(0,0) && reg_19(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 725;
}
if(reg_45(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_46(0,0) && reg_9(0,0) && reg_3(0,0) && reg_30(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_3(0,0) && reg_45(0,0) && reg_22(0,0) && reg_9(0,0) && reg_77(0,0) && reg_29(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_3(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 726;
}
if(reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_52(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 727;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 728;
}
if(reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 729;
}
if(reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 730;
}
if(reg_58(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 731;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 732;
}
if(reg_58(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 733;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_48(0,0) && reg_9(0,0) && reg_10(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 734;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_52(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 735;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_7(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 736;
}
if(reg_58(0,0) && reg_10(0,0) && reg_48(0,0) && reg_51(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 737;
}
if(reg_58(0,0) && reg_10(0,0) && reg_15(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 738;
}
if(reg_58(0,0) && reg_20(0,0) && reg_20(0,0) && reg_13(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_20(0,0) && reg_24(0,0) && reg_37(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 739;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 740;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 741;
}
if(reg_58(0,0) && reg_36(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_52(0,0) && reg_9(0,0) && reg_9(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 742;
}
if(reg_58(0,0) && reg_34(0,0) && reg_52(0,0) && reg_7(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 743;
}
if(reg_58(0,0) && reg_42(0,0) && reg_20(0,0) && reg_10(0,0) && reg_10(0,0) && reg_17(0,0) && reg_7(0,0) && reg_48(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 744;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_37(0,0) && reg_15(0,0) && reg_48(0,0) && reg_58(0,0) && reg_13(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_0(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 745;
}
if(reg_58(0,0) && reg_69(0,0) && reg_22(0,0) && reg_24(0,0) && reg_51(0,0) && reg_24(0,0) && reg_48(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 746;
}
if(reg_58(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 747;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_63(0,0) && reg_21(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_78(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 748;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 749;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 750;
}
if(reg_58(0,0) && reg_10(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_42(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 751;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_32(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0) && reg_9(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_58(0,0) && reg_47(0,0) && reg_24(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_32(0,0) && reg_42(0,0) && reg_24(0,0) && reg_37(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 752;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_7(0,0) && reg_6(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 753;
}
if(reg_58(0,0) && reg_13(0,0) && reg_27(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_35(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 754;
}
if(reg_58(0,0) && reg_13(0,0) && reg_27(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_35(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 755;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 756;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_41(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 757;
}
if(reg_58(0,0) && reg_44(0,0) && reg_33(0,0) && reg_26(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 758;
}
if(reg_58(0,0) && reg_26(0,0) && reg_38(0,0) && reg_56(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 759;
}
if(reg_58(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 760;
}
if(reg_58(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 761;
}
if(reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_63(0,0) && reg_34(0,0) && reg_10(0,0) && reg_10(0,0) && reg_78(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 762;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 763;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 764;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_37(0,0) && reg_36(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 765;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_37(0,0) && reg_36(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 766;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_37(0,0) && reg_36(0,0) && reg_20(0,0) && reg_0(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 767;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_37(0,0) && reg_36(0,0) && reg_20(0,0) && reg_0(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 768;
}
if(reg_58(0,0) && reg_9(0,0) && reg_22(0,0) && reg_8(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 769;
}
if(reg_58(0,0) && reg_9(0,0) && reg_22(0,0) && reg_8(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 770;
}
if(reg_58(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_34(0,0) && reg_9(0,0) && reg_20(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 771;
}
if(reg_58(0,0) && reg_63(0,0) && reg_50(0,0) && reg_78(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 772;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 773;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 774;
}
if(reg_58(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 775;
}
if(reg_58(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 776;
}
if(reg_58(0,0) && reg_42(0,0) && reg_48(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_58(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0) && reg_73(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 777;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_58(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0) && reg_73(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 778;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 779;
}
if(reg_58(0,0) && reg_42(0,0) && reg_46(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_58(0,0) && reg_34(0,0) && reg_49(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_46(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 780;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_36(0,0) && reg_22(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_25(0,0) && reg_25(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 781;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 782;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_77(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_10(0,0) && reg_8(0,0) && reg_42(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 783;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_58(0,0) && reg_13(0,0) && reg_47(0,0) && reg_24(0,0) && reg_6(0,0) && reg_13(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 784;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 785;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 786;
}
if(reg_30(0,0) && reg_38(0,0) && reg_31(0,0) && reg_29(0,0) && reg_21(0,0) && reg_26(0,0) && reg_39(0,0) && reg_45(0,0)) {
matched = true;
pattern_id = 787;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_46(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 788;
}
if(reg_50(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_78(0,0) && reg_48(0,0) && reg_9(0,0) && reg_51(0,0) && reg_36(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 789;
}
if(reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 790;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 791;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_15(0,0) && reg_6(0,0) && reg_13(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 792;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_42(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_58(0,0) && reg_42(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 793;
}
if(reg_1(0,0) && reg_27(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 794;
}
if(reg_58(0,0) && reg_76(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 795;
}
if(reg_58(0,0) && reg_42(0,0) && reg_10(0,0) && reg_32(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 796;
}
if(reg_29(0,0) && reg_41(0,0) && reg_56(0,0) && reg_45(0,0)) {
matched = true;
pattern_id = 797;
}
if(reg_41(0,0) && reg_31(0,0) && reg_33(0,0) && reg_26(0,0)) {
matched = true;
pattern_id = 798;
}
if(reg_58(0,0) && reg_40(0,0) && reg_72(0,0) && reg_32(0,0) && reg_58(0,0) && reg_41(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_7(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 799;
}
if(reg_58(0,0) && reg_42(0,0) && reg_8(0,0) && reg_10(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_58(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 800;
}
if(reg_58(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_58(0,0) && reg_48(0,0) && reg_51(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 801;
}
if(reg_58(0,0) && reg_48(0,0) && reg_42(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 802;
}
if(reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 803;
}
if(reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_73(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 804;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 805;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 806;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 807;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 808;
}
if(reg_58(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 809;
}
if(reg_58(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 810;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 811;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 812;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 813;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 814;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_51(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 815;
}
if(reg_58(0,0) && reg_42(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_8(0,0) && reg_6(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 816;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_36(0,0) && reg_37(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 817;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 818;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 819;
}
if(reg_58(0,0) && reg_9(0,0) && reg_8(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0) && reg_11(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 820;
}
if(reg_58(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0) && reg_49(0,0) && reg_22(0,0) && reg_42(0,0) && reg_11(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 821;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_11(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 822;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_15(0,0) && reg_11(0,0) && reg_4(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 823;
}
if(reg_58(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_34(0,0) && reg_13(0,0) && reg_6(0,0) && reg_52(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 824;
}
if(reg_58(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_36(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 825;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_51(0,0) && reg_24(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 826;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 827;
}
if(reg_58(0,0) && reg_10(0,0) && reg_46(0,0) && reg_16(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 828;
}
if(reg_58(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_15(0,0) && reg_9(0,0) && reg_6(0,0) && reg_63(0,0) && reg_5(0,0) && reg_25(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 829;
}
if(reg_58(0,0) && reg_23(0,0) && reg_13(0,0) && reg_12(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 830;
}
if(reg_58(0,0) && reg_23(0,0) && reg_13(0,0) && reg_12(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 831;
}
if(reg_58(0,0) && reg_23(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_24(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 832;
}
if(reg_58(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_29(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 833;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 834;
}
if(reg_58(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 835;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 836;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_63(0,0) && reg_77(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 837;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_63(0,0) && reg_9(0,0) && reg_16(0,0) && reg_42(0,0) && reg_46(0,0) && reg_36(0,0) && reg_48(0,0) && reg_9(0,0) && reg_78(0,0) && reg_81(0,0)) {
matched = true;
pattern_id = 838;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 839;
}
if(reg_5(0,0) && reg_41(0,0) && reg_56(0,0) && reg_41(0,0) && reg_31(0,0) && reg_41(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 840;
}
if(reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 841;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 842;
}
if(reg_58(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 843;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_63(0,0) && reg_17(0,0) && reg_17(0,0) && reg_58(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 844;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 845;
}
if(reg_58(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 846;
}
if(reg_58(0,0) && reg_19(0,0) && reg_28(0,0) && reg_28(0,0) && reg_41(0,0) && reg_25(0,0) && reg_17(0,0) && reg_41(0,0) && reg_75(0,0) && reg_41(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 847;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_8(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 848;
}
if(reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 849;
}
if(reg_40(0,0) && reg_50(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 850;
}
if(reg_33(0,0) && reg_26(0,0) && reg_39(0,0) && reg_33(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 851;
}
if(reg_50(0,0) && reg_45(0,0) && reg_5(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 852;
}
if(reg_44(0,0) && reg_28(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 853;
}
if(reg_32(0,0) && reg_80(0,0) && reg_32(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 854;
}
if(reg_58(0,0) && reg_32(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_40(0,0) && reg_32(0,0) && reg_72(0,0) && reg_32(0,0) && reg_58(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_45(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_34(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 855;
}
if(reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 856;
}
if(reg_30(0,0) && reg_44(0,0) && reg_45(0,0) && reg_44(0,0)) {
matched = true;
pattern_id = 857;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 858;
}
if(reg_72(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_50(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 859;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_0(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 860;
}
if(reg_58(0,0) && reg_48(0,0) && reg_51(0,0) && reg_0(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 861;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_77(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_58(0,0) && reg_55(0,0) && reg_63(0,0) && reg_55(0,0)) {
matched = true;
pattern_id = 862;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 863;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 864;
}
if(reg_58(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_46(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 865;
}
if(reg_58(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 866;
}
if(reg_58(0,0) && reg_20(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 867;
}
if(reg_58(0,0) && reg_9(0,0) && reg_22(0,0) && reg_8(0,0) && reg_7(0,0) && reg_6(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 868;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_63(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 869;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_35(0,0) && reg_0(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 870;
}
if(reg_58(0,0) && reg_37(0,0) && reg_23(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_13(0,0) && reg_46(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 871;
}
if(reg_58(0,0) && reg_37(0,0) && reg_23(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_13(0,0) && reg_46(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 872;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 873;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_23(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 874;
}
if(reg_58(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_16(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 875;
}
if(reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_35(0,0) && reg_0(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 876;
}
if(reg_58(0,0) && reg_69(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 877;
}
if(reg_58(0,0) && reg_34(0,0) && reg_52(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 878;
}
if(reg_21(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_3(0,0) && reg_24(0,0) && reg_23(0,0) && reg_3(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 879;
}
if(reg_7(0,0) && reg_34(0,0) && reg_47(0,0) && reg_3(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_78(0,0) && reg_57(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 880;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 881;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_48(0,0) && reg_24(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 882;
}
if(reg_58(0,0) && reg_18(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_58(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 883;
}
if(reg_58(0,0) && reg_18(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_58(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 884;
}
if(reg_41(0,0) && reg_75(0,0) && reg_41(0,0) && reg_40(0,0) && reg_38(0,0) && reg_31(0,0) && reg_41(0,0) && reg_73(0,0) && reg_32(0,0) && reg_80(0,0) && reg_32(0,0) && reg_31(0,0) && reg_41(0,0) && reg_50(0,0)) {
matched = true;
pattern_id = 885;
}
if(reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_78(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 886;
}
if(reg_48(0,0) && reg_9(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 887;
}
if(reg_10(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 888;
}
if(reg_3(0,0) && reg_15(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 889;
}
if(reg_48(0,0) && reg_9(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_51(0,0) && reg_9(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 890;
}
if(reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 891;
}
if(reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 892;
}
if(reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 893;
}
if(reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 894;
}
if(reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 895;
}
if(reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 896;
}
if(reg_48(0,0) && reg_51(0,0) && reg_13(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_37(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 897;
}
if(reg_48(0,0) && reg_51(0,0) && reg_13(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 898;
}
if(reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_37(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 899;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 900;
}
if(reg_47(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 901;
}
if(reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 902;
}
if(reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_3(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 903;
}
if(reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_3(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 904;
}
if(reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 905;
}
if(reg_20(0,0) && reg_6(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_3(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 906;
}
if(reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_3(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 907;
}
if(reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 908;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_37(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 909;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0) && reg_77(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 910;
}
if(reg_58(0,0) && reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_24(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 911;
}
if(reg_58(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_24(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 912;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 913;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_10(0,0) && reg_73(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 914;
}
if(reg_58(0,0) && reg_51(0,0) && reg_10(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 915;
}
if(reg_58(0,0) && reg_51(0,0) && reg_10(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 916;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 917;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_48(0,0) && reg_9(0,0) && reg_10(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 918;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 919;
}
if(reg_58(0,0) && reg_47(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 920;
}
if(reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 921;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_10(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 922;
}
if(reg_58(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_52(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 923;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_42(0,0) && reg_49(0,0) && reg_42(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 924;
}
if(reg_58(0,0) && reg_50(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_21(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 925;
}
if(reg_58(0,0) && reg_9(0,0) && reg_34(0,0) && reg_36(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 926;
}
if(reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_20(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_37(0,0) && reg_17(0,0) && reg_51(0,0) && reg_20(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 927;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 928;
}
if(reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 929;
}
if(reg_58(0,0) && reg_13(0,0) && reg_27(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 930;
}
if(reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_3(0,0) && reg_75(0,0) && reg_50(0,0) && reg_56(0,0) && reg_29(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_33(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 931;
}
if(reg_58(0,0) && reg_10(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_6(0,0) && reg_6(0,0) && reg_9(0,0) && reg_46(0,0) && reg_10(0,0) && reg_37(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_73(0,0) && reg_34(0,0) && reg_9(0,0) && reg_17(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 932;
}
if(reg_58(0,0) && reg_46(0,0) && reg_9(0,0) && reg_23(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 933;
}
if(reg_58(0,0) && reg_47(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 934;
}
if(reg_58(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_24(0,0) && reg_46(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 935;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_36(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 936;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_36(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 937;
}
if(reg_10(0,0) && reg_9(0,0) && reg_42(0,0) && reg_36(0,0) && reg_6(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_79(0,0) && reg_3(0,0) && reg_24(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 938;
}
if(reg_58(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_73(0,0) && reg_34(0,0) && reg_9(0,0) && reg_34(0,0) && reg_51(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 939;
}
if(reg_58(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 940;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_61(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 941;
}
if(reg_13(0,0) && reg_7(0,0) && reg_34(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_48(0,0) && reg_48(0,0) && reg_41(0,0) && reg_16(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_30(0,0) && reg_37(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 942;
}
if(reg_58(0,0) && reg_13(0,0) && reg_10(0,0) && reg_73(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 943;
}
if(reg_58(0,0) && reg_13(0,0) && reg_10(0,0) && reg_73(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_11(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 944;
}
if(reg_44(0,0) && reg_30(0,0) && reg_33(0,0) && reg_31(0,0) && reg_21(0,0) && reg_30(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 945;
}
if(reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_48(0,0) && reg_79(0,0) && reg_20(0,0) && reg_6(0,0) && reg_36(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 946;
}
if(reg_58(0,0) && reg_51(0,0) && reg_0(0,0) && reg_58(0,0) && reg_51(0,0) && reg_0(0,0) && reg_77(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_46(0,0) && reg_36(0,0) && reg_48(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 947;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_42(0,0) && reg_63(0,0) && reg_26(0,0) && reg_24(0,0) && reg_42(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 948;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_42(0,0) && reg_63(0,0) && reg_1(0,0) && reg_0(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 949;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 950;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 951;
}
if(reg_58(0,0) && reg_17(0,0) && reg_5(0,0) && reg_32(0,0) && reg_73(0,0) && reg_32(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 952;
}
if(reg_58(0,0) && reg_17(0,0) && reg_39(0,0) && reg_25(0,0) && reg_40(0,0) && reg_21(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 953;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_44(0,0) && reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_68(0,0) && reg_1(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_68(0,0) && reg_1(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 954;
}
if(reg_58(0,0) && reg_37(0,0) && reg_51(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_37(0,0) && reg_51(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 955;
}
if(reg_58(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 956;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_73(0,0) && reg_10(0,0) && reg_34(0,0) && reg_7(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 957;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 958;
}
if(reg_1(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_3(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 959;
}
if(reg_58(0,0) && reg_42(0,0) && reg_10(0,0) && reg_44(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 960;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_20(0,0) && reg_34(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 961;
}
if(reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_29(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 962;
}
if(reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 963;
}
if(reg_0(0,0) && reg_2(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 964;
}
if(reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 965;
}
if(reg_58(0,0) && reg_6(0,0) && reg_15(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_4(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 966;
}
if(reg_31(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 967;
}
if(reg_1(0,0) && reg_40(0,0) && reg_2(0,0) && reg_1(0,0) && reg_44(0,0) && reg_33(0,0) && reg_1(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_1(0,0) && reg_44(0,0) && reg_68(0,0) && reg_33(0,0) && reg_44(0,0) && reg_1(0,0) && reg_25(0,0) && reg_60(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_5(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 968;
}
if(reg_75(0,0) && reg_77(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_40(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 969;
}
if(reg_55(0,0) && reg_19(0,0) && reg_45(0,0) && reg_25(0,0) && reg_25(0,0) && reg_56(0,0) && reg_41(0,0) && reg_55(0,0)) {
matched = true;
pattern_id = 970;
}
if(reg_36(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 971;
}
if(reg_19(0,0) && reg_45(0,0) && reg_25(0,0) && reg_25(0,0) && reg_56(0,0) && reg_41(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 972;
}
if(reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_20(0,0) && reg_24(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_24(0,0) && reg_37(0,0) && reg_10(0,0) && reg_71(0,0) && reg_48(0,0) && reg_7(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 973;
}
if(reg_58(0,0) && reg_32(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_32(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 974;
}
if(reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 975;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_52(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_34(0,0) && reg_51(0,0) && reg_6(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 976;
}
if(reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_3(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_52(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_46(0,0) && reg_9(0,0) && reg_48(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_34(0,0) && reg_51(0,0) && reg_6(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 977;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_40(0,0)) {
matched = true;
pattern_id = 978;
}
if(reg_58(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0) && reg_35(0,0) && reg_58(0,0) && reg_41(0,0) && reg_16(0,0) && reg_9(0,0) && reg_42(0,0) && reg_50(0,0) && reg_13(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_48(0,0) && reg_10(0,0) && reg_37(0,0) && reg_42(0,0) && reg_17(0,0) && reg_48(0,0) && reg_0(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 979;
}
if(reg_37(0,0) && reg_10(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_81(0,0)) {
matched = true;
pattern_id = 980;
}
if(reg_58(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 981;
}
if(reg_58(0,0) && reg_13(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 982;
}
if(reg_58(0,0) && reg_28(0,0) && reg_41(0,0) && reg_25(0,0) && reg_77(0,0) && reg_21(0,0) && reg_26(0,0) && reg_39(0,0)) {
matched = true;
pattern_id = 983;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 984;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 985;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_31(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_32(0,0) && reg_18(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 986;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_32(0,0) && reg_22(0,0) && reg_24(0,0) && reg_24(0,0) && reg_37(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 987;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 988;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_16(0,0) && reg_77(0,0) && reg_7(0,0) && reg_42(0,0) && reg_12(0,0)) {
matched = true;
pattern_id = 989;
}
if(reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 990;
}
if(reg_58(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_58(0,0) && reg_43(0,0) && reg_2(0,0) && reg_2(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 991;
}
if(reg_32(0,0) && reg_32(0,0) && reg_29(0,0) && reg_77(0,0)) {
matched = true;
pattern_id = 992;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 993;
}
if(reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_24(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 994;
}
if(reg_57(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_58(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 995;
}
if(reg_56(0,0) && reg_45(0,0) && reg_19(0,0) && reg_21(0,0) && reg_26(0,0)) {
matched = true;
pattern_id = 996;
}
if(reg_53(0,0) && reg_71(0,0) && reg_1(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 997;
}
if(reg_30(0,0) && reg_38(0,0) && reg_31(0,0) && reg_29(0,0) && reg_41(0,0) && reg_26(0,0) && reg_31(0,0) && reg_21(0,0) && reg_40(0,0) && reg_30(0,0) && reg_31(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 998;
}
if(reg_56(0,0) && reg_21(0,0) && reg_32(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 999;
}
if(reg_58(0,0) && reg_8(0,0) && reg_22(0,0) && reg_42(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_57(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1000;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_14(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1001;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_77(0,0) && reg_46(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1002;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1003;
}
if(reg_58(0,0) && reg_15(0,0) && reg_13(0,0) && reg_49(0,0) && reg_77(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1004;
}
if(reg_58(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_17(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1005;
}
if(reg_58(0,0) && reg_6(0,0) && reg_24(0,0) && reg_51(0,0) && reg_24(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1006;
}
if(reg_37(0,0) && reg_22(0,0) && reg_47(0,0) && reg_3(0,0) && reg_54(0,0) && reg_70(0,0) && reg_17(0,0) && reg_17(0,0) && reg_62(0,0) && reg_10(0,0) && reg_3(0,0) && reg_46(0,0) && reg_11(0,0) && reg_11(0,0)) {
matched = true;
pattern_id = 1007;
}
if(reg_22(0,0) && reg_7(0,0) && reg_47(0,0) && reg_47(0,0) && reg_13(0,0) && reg_18(0,0) && reg_51(0,0) && reg_7(0,0) && reg_20(0,0) && reg_42(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 1008;
}
if(reg_58(0,0) && reg_6(0,0) && reg_24(0,0) && reg_51(0,0) && reg_24(0,0) && reg_20(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1009;
}
if(reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_16(0,0) && reg_23(0,0) && reg_7(0,0) && reg_6(0,0) && reg_69(0,0) && reg_27(0,0) && reg_58(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1010;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1011;
}
if(reg_30(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_14(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1012;
}
if(reg_80(0,0) && reg_28(0,0) && reg_33(0,0) && reg_20(0,0) && reg_13(0,0) && reg_28(0,0) && reg_11(0,0) && reg_4(0,0) && reg_80(0,0) && reg_28(0,0) && reg_33(0,0) && reg_20(0,0) && reg_13(0,0) && reg_28(0,0) && reg_11(0,0)) {
matched = true;
pattern_id = 1013;
}
if(reg_58(0,0) && reg_34(0,0) && reg_6(0,0) && reg_20(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1014;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1015;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1016;
}
if(reg_58(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_50(0,0) && reg_24(0,0) && reg_48(0,0) && reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_50(0,0) && reg_24(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1017;
}
if(reg_58(0,0) && reg_75(0,0) && reg_32(0,0) && reg_68(0,0) && reg_56(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_17(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1018;
}
if(reg_58(0,0) && reg_48(0,0) && reg_34(0,0) && reg_10(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 1019;
}
if(reg_58(0,0) && reg_47(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_10(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1020;
}
if(reg_58(0,0) && reg_24(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_42(0,0) && reg_34(0,0) && reg_47(0,0) && reg_6(0,0) && reg_77(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1021;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 1022;
}
if(reg_58(0,0) && reg_22(0,0) && reg_37(0,0) && reg_18(0,0) && reg_77(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1023;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_8(0,0)) {
matched = true;
pattern_id = 1024;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1025;
}
if(reg_36(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1026;
}
if(reg_31(0,0) && reg_41(0,0) && reg_33(0,0) && reg_50(0,0) && reg_78(0,0) && reg_16(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1027;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_71(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1028;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_25(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1029;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1030;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1031;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_62(0,0) && reg_30(0,0) && reg_5(0,0) && reg_50(0,0) && reg_2(0,0) && reg_17(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1032;
}
if(reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_18(0,0) && reg_58(0,0) && reg_58(0,0) && reg_51(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1033;
}
if(reg_56(0,0) && reg_32(0,0) && reg_38(0,0) && reg_25(0,0)) {
matched = true;
pattern_id = 1034;
}
if(reg_33(0,0) && reg_41(0,0) && reg_26(0,0) && reg_30(0,0) && reg_50(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1035;
}
if(reg_39(0,0) && reg_21(0,0) && reg_26(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1036;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_64(0,0) && reg_35(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1037;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_41(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1038;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_61(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1039;
}
if(reg_50(0,0) && reg_77(0,0) && reg_32(0,0) && reg_41(0,0) && reg_30(0,0) && reg_33(0,0) && reg_40(0,0) && reg_29(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 1040;
}
if(reg_32(0,0) && reg_24(0,0) && reg_46(0,0) && reg_13(0,0) && reg_6(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_10(0,0) && reg_17(0,0) && reg_26(0,0) && reg_9(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1041;
}
if(reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_14(0,0) && reg_9(0,0) && reg_48(0,0) && reg_73(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1042;
}
if(reg_30(0,0) && reg_38(0,0) && reg_31(0,0) && reg_29(0,0)) {
matched = true;
pattern_id = 1043;
}
if(reg_58(0,0) && reg_6(0,0) && reg_37(0,0) && reg_42(0,0) && reg_77(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1044;
}
if(reg_58(0,0) && reg_6(0,0) && reg_37(0,0) && reg_42(0,0) && reg_77(0,0) && reg_10(0,0) && reg_34(0,0) && reg_51(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1045;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1046;
}
if(reg_75(0,0) && reg_31(0,0) && reg_26(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1047;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1048;
}
if(reg_33(0,0) && reg_50(0,0) && reg_5(0,0) && reg_21(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 1049;
}
if(reg_58(0,0) && reg_40(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_24(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1050;
}
if(reg_58(0,0) && reg_9(0,0) && reg_42(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_9(0,0) && reg_42(0,0) && reg_15(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1051;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1052;
}
if(reg_58(0,0) && reg_13(0,0) && reg_51(0,0) && reg_0(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1053;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1054;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1055;
}
if(reg_47(0,0) && reg_10(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 1056;
}
if(reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_42(0,0) && reg_52(0,0) && reg_77(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_49(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1057;
}
if(reg_58(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_77(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1058;
}
if(reg_33(0,0) && reg_41(0,0) && reg_32(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1059;
}
if(reg_5(0,0) && reg_41(0,0) && reg_56(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1060;
}
if(reg_33(0,0) && reg_50(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1061;
}
if(reg_16(0,0) && reg_37(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_15(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1062;
}
if(reg_16(0,0) && reg_37(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1063;
}
if(reg_2(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 1064;
}
if(reg_55(0,0) && reg_3(0,0) && reg_5(0,0) && reg_24(0,0) && reg_46(0,0) && reg_49(0,0) && reg_3(0,0) && reg_20(0,0) && reg_6(0,0) && reg_24(0,0) && reg_57(0,0) && reg_13(0,0) && reg_22(0,0) && reg_3(0,0) && reg_8(0,0) && reg_27(0,0) && reg_17(0,0) && reg_43(0,0) && reg_3(0,0) && reg_77(0,0) && reg_3(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 1065;
}
if(reg_25(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1066;
}
if(reg_40(0,0) && reg_30(0,0) && reg_56(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 1067;
}
if(reg_38(0,0) && reg_32(0,0) && reg_33(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 1068;
}
if(reg_58(0,0) && reg_8(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1069;
}
if(reg_58(0,0) && reg_13(0,0) && reg_46(0,0) && reg_49(0,0) && reg_13(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1070;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_6(0,0) && reg_13(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1071;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_73(0,0) && reg_51(0,0) && reg_24(0,0) && reg_48(0,0) && reg_49(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1072;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1073;
}
if(reg_58(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1074;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_10(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1075;
}
if(reg_58(0,0) && reg_10(0,0) && reg_34(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1076;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1077;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1078;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_61(0,0) && reg_1(0,0) && reg_84(0,0)) {
matched = true;
pattern_id = 1079;
}
if(reg_41(0,0) && reg_3(0,0) && reg_39(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_3(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_79(0,0) && reg_3(0,0) && reg_13(0,0) && reg_51(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 1080;
}
if(reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 1081;
}
if(reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_15(0,0) && reg_13(0,0) && reg_6(0,0) && reg_22(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_42(0,0) && reg_18(0,0) && reg_36(0,0) && reg_22(0,0) && reg_52(0,0) && reg_3(0,0) && reg_7(0,0) && reg_10(0,0) && reg_3(0,0) && reg_13(0,0) && reg_46(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_49(0,0) && reg_3(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1082;
}
if(reg_41(0,0) && reg_3(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_24(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_3(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_7(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_3(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_3(0,0) && reg_10(0,0) && reg_49(0,0) && reg_22(0,0) && reg_20(0,0) && reg_13(0,0) && reg_16(0,0) && reg_3(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1083;
}
if(reg_41(0,0) && reg_3(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_24(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_3(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_33(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_3(0,0) && reg_6(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_3(0,0) && reg_34(0,0) && reg_7(0,0) && reg_10(0,0) && reg_10(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1084;
}
if(reg_42(0,0) && reg_8(0,0) && reg_10(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_3(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_3(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1085;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1086;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1087;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1088;
}
if(reg_1(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1089;
}
if(reg_1(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1090;
}
if(reg_1(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1091;
}
if(reg_1(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1092;
}
if(reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1093;
}
if(reg_58(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_23(0,0) && reg_46(0,0) && reg_24(0,0) && reg_15(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1094;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_73(0,0) && reg_51(0,0) && reg_36(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1095;
}
if(reg_58(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_51(0,0) && reg_36(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1096;
}
if(reg_31(0,0) && reg_33(0,0) && reg_30(0,0) && reg_40(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1097;
}
if(reg_58(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_37(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1098;
}
if(reg_58(0,0) && reg_50(0,0) && reg_10(0,0) && reg_34(0,0) && reg_50(0,0) && reg_13(0,0) && reg_10(0,0) && reg_52(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1099;
}
if(reg_58(0,0) && reg_5(0,0) && reg_25(0,0) && reg_11(0,0) && reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1100;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1101;
}
if(reg_58(0,0) && reg_17(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1102;
}
if(reg_58(0,0) && reg_48(0,0) && reg_34(0,0) && reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 1103;
}
if(reg_17(0,0) && reg_42(0,0) && reg_10(0,0) && reg_37(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 1104;
}
if(reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1105;
}
if(reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1106;
}
if(reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1107;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1108;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_35(0,0) && reg_0(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1109;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_35(0,0) && reg_0(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1110;
}
if(reg_58(0,0) && reg_46(0,0) && reg_49(0,0) && reg_6(0,0) && reg_7(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1111;
}
if(reg_58(0,0) && reg_47(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1112;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1113;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1114;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_34(0,0) && reg_10(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1115;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_39(0,0) && reg_61(0,0) && reg_1(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 1116;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_10(0,0) && reg_9(0,0) && reg_73(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1117;
}
if(reg_39(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1118;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_25(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1119;
}
if(reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1120;
}
if(reg_32(0,0) && reg_41(0,0) && reg_30(0,0) && reg_33(0,0) && reg_40(0,0) && reg_29(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1121;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1122;
}
if(reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0) && reg_3(0,0) && reg_20(0,0) && reg_7(0,0) && reg_34(0,0) && reg_9(0,0) && reg_58(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 1123;
}
if(reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_3(0,0) && reg_20(0,0) && reg_24(0,0) && reg_24(0,0) && reg_3(0,0) && reg_46(0,0) && reg_24(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1124;
}
if(reg_40(0,0) && reg_33(0,0) && reg_41(0,0) && reg_30(0,0) && reg_31(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1125;
}
if(reg_40(0,0) && reg_30(0,0) && reg_44(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 1126;
}
if(reg_31(0,0) && reg_45(0,0) && reg_44(0,0)) {
matched = true;
pattern_id = 1127;
}
if(reg_33(0,0) && reg_32(0,0) && reg_41(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1128;
}
if(reg_58(0,0) && reg_13(0,0) && reg_46(0,0) && reg_51(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1129;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_7(0,0) && reg_37(0,0) && reg_42(0,0) && reg_23(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1130;
}
if(reg_34(0,0) && reg_49(0,0) && reg_13(0,0) && reg_42(0,0) && reg_42(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1131;
}
if(reg_38(0,0) && reg_21(0,0) && reg_5(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 1132;
}
if(reg_50(0,0) && reg_7(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_10(0,0) && reg_24(0,0) && reg_23(0,0) && reg_20(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1133;
}
if(reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1134;
}
if(reg_58(0,0) && reg_7(0,0) && reg_52(0,0) && reg_24(0,0) && reg_22(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1135;
}
if(reg_58(0,0) && reg_10(0,0) && reg_15(0,0) && reg_10(0,0) && reg_6(0,0) && reg_8(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1136;
}
if(reg_58(0,0) && reg_22(0,0) && reg_10(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1137;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_32(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1138;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1139;
}
if(reg_58(0,0) && reg_9(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_47(0,0) && reg_47(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1140;
}
if(reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_52(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_9(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1141;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1142;
}
if(reg_58(0,0) && reg_37(0,0) && reg_18(0,0) && reg_7(0,0) && reg_46(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_34(0,0) && reg_48(0,0) && reg_51(0,0)) {
matched = true;
pattern_id = 1143;
}
if(reg_58(0,0) && reg_37(0,0) && reg_18(0,0) && reg_7(0,0) && reg_46(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1144;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_42(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_10(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1145;
}
if(reg_58(0,0) && reg_55(0,0) && reg_17(0,0) && reg_10(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1146;
}
if(reg_58(0,0) && reg_37(0,0) && reg_77(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1147;
}
if(reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_51(0,0) && reg_24(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1148;
}
if(reg_58(0,0) && reg_47(0,0) && reg_34(0,0) && reg_77(0,0) && reg_0(0,0) && reg_77(0,0) && reg_51(0,0) && reg_0(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1149;
}
if(reg_58(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_11(0,0)) {
matched = true;
pattern_id = 1150;
}
if(reg_58(0,0) && reg_20(0,0) && reg_36(0,0) && reg_6(0,0) && reg_51(0,0) && reg_13(0,0) && reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1151;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_18(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1152;
}
if(reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1153;
}
if(reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_24(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1154;
}
if(reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1155;
}
if(reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_73(0,0) && reg_47(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1156;
}
if(reg_58(0,0) && reg_7(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_19(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1157;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1158;
}
if(reg_58(0,0) && reg_13(0,0) && reg_22(0,0) && reg_22(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1159;
}
if(reg_1(0,0) && reg_27(0,0) && reg_35(0,0) && reg_1(0,0) && reg_25(0,0) && reg_7(0,0) && reg_20(0,0) && reg_31(0,0) && reg_24(0,0) && reg_6(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_3(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_24(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1160;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1161;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1162;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1163;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1164;
}
if(reg_58(0,0) && reg_40(0,0) && reg_32(0,0) && reg_50(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_20(0,0) && reg_24(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1165;
}
if(reg_58(0,0) && reg_13(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1166;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_47(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1167;
}
if(reg_58(0,0) && reg_42(0,0) && reg_8(0,0) && reg_10(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_0(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1168;
}
if(reg_58(0,0) && reg_42(0,0) && reg_8(0,0) && reg_10(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1169;
}
if(reg_58(0,0) && reg_34(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_7(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1170;
}
if(reg_58(0,0) && reg_48(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1171;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1172;
}
if(reg_58(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1173;
}
if(reg_58(0,0) && reg_9(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_20(0,0) && reg_18(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1174;
}
if(reg_58(0,0) && reg_9(0,0) && reg_14(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1175;
}
if(reg_58(0,0) && reg_9(0,0) && reg_14(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1176;
}
if(reg_58(0,0) && reg_9(0,0) && reg_14(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1177;
}
if(reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_9(0,0) && reg_9(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1178;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_34(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1179;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1180;
}
if(reg_58(0,0) && reg_47(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1181;
}
if(reg_58(0,0) && reg_47(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1182;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_39(0,0) && reg_24(0,0) && reg_46(0,0) && reg_7(0,0) && reg_24(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1183;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1184;
}
if(reg_58(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1185;
}
if(reg_58(0,0) && reg_22(0,0) && reg_10(0,0) && reg_50(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1186;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1187;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1188;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1189;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1190;
}
if(reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1191;
}
if(reg_58(0,0) && reg_15(0,0) && reg_10(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1192;
}
if(reg_58(0,0) && reg_22(0,0) && reg_37(0,0) && reg_18(0,0) && reg_77(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_7(0,0) && reg_20(0,0) && reg_10(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1193;
}
if(reg_58(0,0) && reg_42(0,0) && reg_10(0,0) && reg_26(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1194;
}
if(reg_58(0,0) && reg_37(0,0) && reg_10(0,0) && reg_36(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_7(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1195;
}
if(reg_58(0,0) && reg_47(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1196;
}
if(reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1197;
}
if(reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1198;
}
if(reg_48(0,0) && reg_51(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_10(0,0) && reg_73(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1199;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_20(0,0) && reg_24(0,0) && reg_37(0,0) && reg_7(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1200;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1201;
}
if(reg_58(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_39(0,0) && reg_7(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1202;
}
if(reg_58(0,0) && reg_32(0,0) && reg_39(0,0) && reg_26(0,0) && reg_24(0,0) && reg_23(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1203;
}
if(reg_58(0,0) && reg_31(0,0) && reg_45(0,0) && reg_44(0,0) && reg_27(0,0) && reg_2(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1204;
}
if(reg_58(0,0) && reg_32(0,0) && reg_37(0,0) && reg_13(0,0) && reg_34(0,0) && reg_41(0,0) && reg_16(0,0) && reg_42(0,0) && reg_37(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1205;
}
if(reg_58(0,0) && reg_10(0,0) && reg_37(0,0) && reg_13(0,0) && reg_34(0,0) && reg_6(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1206;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1207;
}
if(reg_58(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_9(0,0) && reg_29(0,0) && reg_9(0,0) && reg_46(0,0) && reg_37(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1208;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1209;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_37(0,0) && reg_15(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1210;
}
if(reg_58(0,0) && reg_42(0,0) && reg_15(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1211;
}
if(reg_58(0,0) && reg_48(0,0) && reg_48(0,0) && reg_7(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1212;
}
if(reg_58(0,0) && reg_22(0,0) && reg_48(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1213;
}
if(reg_58(0,0) && reg_72(0,0) && reg_10(0,0) && reg_32(0,0) && reg_9(0,0) && reg_20(0,0) && reg_40(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_7(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1214;
}
if(reg_58(0,0) && reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1215;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1216;
}
if(reg_58(0,0) && reg_38(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_32(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_27(0,0) && reg_27(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1217;
}
if(reg_58(0,0) && reg_5(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_56(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1218;
}
if(reg_58(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1219;
}
if(reg_75(0,0) && reg_41(0,0) && reg_75(0,0) && reg_40(0,0) && reg_29(0,0) && reg_43(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 1220;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1221;
}
if(reg_41(0,0) && reg_75(0,0) && reg_44(0,0) && reg_26(0,0)) {
matched = true;
pattern_id = 1222;
}
if(reg_72(0,0) && reg_33(0,0) && reg_39(0,0) && reg_80(0,0)) {
matched = true;
pattern_id = 1223;
}
if(reg_32(0,0) && reg_41(0,0) && reg_26(0,0) && reg_5(0,0) && reg_3(0,0) && reg_39(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1224;
}
if(reg_32(0,0) && reg_30(0,0) && reg_50(0,0) && reg_56(0,0) && reg_3(0,0) && reg_39(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1225;
}
if(reg_32(0,0) && reg_45(0,0) && reg_50(0,0) && reg_56(0,0) && reg_3(0,0) && reg_39(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1226;
}
if(reg_50(0,0) && reg_30(0,0) && reg_21(0,0) && reg_56(0,0) && reg_3(0,0) && reg_39(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1227;
}
if(reg_33(0,0) && reg_40(0,0) && reg_44(0,0) && reg_31(0,0) && reg_3(0,0) && reg_31(0,0) && reg_45(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1228;
}
if(reg_33(0,0) && reg_9(0,0) && reg_34(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_26(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_24(0,0) && reg_46(0,0) && reg_3(0,0) && reg_44(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1229;
}
if(reg_30(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_3(0,0) && reg_36(0,0) && reg_22(0,0) && reg_10(0,0) && reg_36(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_23(0,0) && reg_36(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1230;
}
if(reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_10(0,0) && reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_58(0,0) && reg_44(0,0) && reg_45(0,0) && reg_33(0,0) && reg_31(0,0) && reg_30(0,0) && reg_56(0,0) && reg_73(0,0) && reg_5(0,0) && reg_41(0,0) && reg_50(0,0) && reg_45(0,0)) {
matched = true;
pattern_id = 1231;
}
if(reg_58(0,0) && reg_37(0,0) && reg_10(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1232;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1233;
}
if(reg_58(0,0) && reg_38(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_40(0,0) && reg_46(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1234;
}
if(reg_58(0,0) && reg_31(0,0) && reg_7(0,0) && reg_20(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1235;
}
if(reg_58(0,0) && reg_32(0,0) && reg_9(0,0) && reg_20(0,0) && reg_36(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1236;
}
if(reg_58(0,0) && reg_19(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_13(0,0) && reg_46(0,0) && reg_39(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1237;
}
if(reg_58(0,0) && reg_5(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_39(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1238;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1239;
}
if(reg_58(0,0) && reg_23(0,0) && reg_6(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1240;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1241;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1242;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_9(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1243;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1244;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1245;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1246;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1247;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_9(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1248;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1249;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1250;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_73(0,0) && reg_34(0,0) && reg_7(0,0) && reg_10(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1251;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1252;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_20(0,0) && reg_37(0,0) && reg_46(0,0) && reg_73(0,0) && reg_34(0,0) && reg_7(0,0) && reg_10(0,0) && reg_42(0,0) && reg_73(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1253;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_20(0,0) && reg_37(0,0) && reg_46(0,0) && reg_73(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1254;
}
if(reg_58(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_18(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1255;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_10(0,0) && reg_10(0,0) && reg_7(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1256;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_37(0,0) && reg_36(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1257;
}
if(reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1258;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_20(0,0) && reg_51(0,0) && reg_24(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1259;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_36(0,0) && reg_37(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1260;
}
if(reg_48(0,0) && reg_24(0,0) && reg_78(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1261;
}
if(reg_41(0,0) && reg_3(0,0) && reg_42(0,0) && reg_8(0,0) && reg_10(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_15(0,0) && reg_13(0,0) && reg_6(0,0) && reg_22(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_3(0,0) && reg_34(0,0) && reg_13(0,0) && reg_52(0,0) && reg_9(0,0) && reg_3(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_3(0,0) && reg_40(0,0) && reg_72(0,0) && reg_32(0,0) && reg_3(0,0) && reg_7(0,0) && reg_22(0,0) && reg_3(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1262;
}
if(reg_30(0,0) && reg_6(0,0) && reg_47(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1263;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_16(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1264;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_16(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1265;
}
if(reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_42(0,0) && reg_52(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1266;
}
if(reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1267;
}
if(reg_58(0,0) && reg_32(0,0) && reg_18(0,0) && reg_24(0,0) && reg_37(0,0) && reg_5(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_49(0,0) && reg_44(0,0) && reg_6(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_42(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1268;
}
if(reg_58(0,0) && reg_10(0,0) && reg_47(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_24(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1269;
}
if(reg_58(0,0) && reg_51(0,0) && reg_10(0,0) && reg_34(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1270;
}
if(reg_58(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1271;
}
if(reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_7(0,0) && reg_47(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0) && reg_78(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1272;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1273;
}
if(reg_58(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_58(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_58(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1274;
}
if(reg_58(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_58(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1275;
}
if(reg_75(0,0) && reg_40(0,0) && reg_28(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1276;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1277;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1278;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1279;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_73(0,0) && reg_34(0,0) && reg_9(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1280;
}
if(reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1281;
}
if(reg_58(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1282;
}
if(reg_58(0,0) && reg_7(0,0) && reg_37(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1283;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1284;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1285;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1286;
}
if(reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_13(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_73(0,0) && reg_18(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1287;
}
if(reg_58(0,0) && reg_24(0,0) && reg_37(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_73(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1288;
}
if(reg_58(0,0) && reg_22(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1289;
}
if(reg_58(0,0) && reg_23(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1290;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_73(0,0) && reg_47(0,0) && reg_9(0,0) && reg_48(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1291;
}
if(reg_58(0,0) && reg_21(0,0) && reg_32(0,0) && reg_30(0,0) && reg_44(0,0) && reg_21(0,0) && reg_32(0,0) && reg_52(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1292;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1293;
}
if(reg_58(0,0) && reg_32(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1294;
}
if(reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_37(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1295;
}
if(reg_75(0,0) && reg_50(0,0) && reg_62(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1296;
}
if(reg_26(0,0) && reg_56(0,0) && reg_32(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1297;
}
if(reg_1(0,0) && reg_60(0,0) && reg_43(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_1(0,0) && reg_66(0,0) && reg_1(0,0) && reg_64(0,0) && reg_41(0,0) && reg_3(0,0) && reg_30(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1298;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1299;
}
if(reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1300;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_51(0,0) && reg_6(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_42(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1301;
}
if(reg_33(0,0) && reg_26(0,0) && reg_31(0,0) && reg_45(0,0)) {
matched = true;
pattern_id = 1302;
}
if(reg_32(0,0) && reg_31(0,0) && reg_45(0,0) && reg_38(0,0)) {
matched = true;
pattern_id = 1303;
}
if(reg_30(0,0) && reg_44(0,0) && reg_44(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1304;
}
if(reg_58(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1305;
}
if(reg_66(0,0) && reg_53(0,0)) {
matched = true;
pattern_id = 1306;
}
if(reg_58(0,0) && reg_21(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_68(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1307;
}
if(reg_58(0,0) && reg_15(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0) && reg_7(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1308;
}
if(reg_58(0,0) && reg_15(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0) && reg_7(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1309;
}
if(reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1310;
}
if(reg_58(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0) && reg_58(0,0) && reg_48(0,0) && reg_51(0,0) && reg_73(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1311;
}
if(reg_58(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_20(0,0) && reg_13(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1312;
}
if(reg_58(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1313;
}
if(reg_31(0,0) && reg_41(0,0) && reg_26(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_38(0,0) && reg_39(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_45(0,0) && reg_6(0,0) && reg_49(0,0) && reg_44(0,0) && reg_45(0,0) && reg_28(0,0) && reg_41(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 1314;
}
if(reg_58(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1315;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1316;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1317;
}
if(reg_5(0,0) && reg_41(0,0) && reg_32(0,0) && reg_40(0,0) && reg_33(0,0) && reg_21(0,0) && reg_25(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1318;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_33(0,0) && reg_9(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_58(0,0) && reg_40(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1319;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1320;
}
if(reg_1(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1321;
}
if(reg_50(0,0) && reg_5(0,0) && reg_31(0,0) && reg_50(0,0)) {
matched = true;
pattern_id = 1322;
}
if(reg_76(0,0)) {
matched = true;
pattern_id = 1323;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1324;
}
if(reg_17(0,0) && reg_6(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1325;
}
if(reg_17(0,0) && reg_6(0,0) && reg_34(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1326;
}
if(reg_17(0,0) && reg_6(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1327;
}
if(reg_17(0,0) && reg_6(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1328;
}
if(reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1329;
}
if(reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_36(0,0) && reg_36(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1330;
}
if(reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1331;
}
if(reg_7(0,0) && reg_18(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1332;
}
if(reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_34(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1333;
}
if(reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1334;
}
if(reg_6(0,0) && reg_34(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1335;
}
if(reg_20(0,0) && reg_13(0,0) && reg_52(0,0) && reg_9(0,0) && reg_20(0,0) && reg_18(0,0) && reg_7(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1336;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_0(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1337;
}
if(reg_17(0,0) && reg_9(0,0) && reg_34(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1338;
}
if(reg_17(0,0) && reg_15(0,0) && reg_34(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1339;
}
if(reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_34(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1340;
}
if(reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_58(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1341;
}
if(reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_58(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1342;
}
if(reg_6(0,0) && reg_20(0,0) && reg_10(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_58(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1343;
}
if(reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_78(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 1344;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1345;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_50(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1346;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1347;
}
if(reg_30(0,0) && reg_56(0,0) && reg_56(0,0) && reg_45(0,0)) {
matched = true;
pattern_id = 1348;
}
if(reg_80(0,0) && reg_50(0,0) && reg_32(0,0) && reg_19(0,0)) {
matched = true;
pattern_id = 1349;
}
if(reg_66(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 1350;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1351;
}
if(reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1352;
}
if(reg_2(0,0) && reg_43(0,0) && reg_35(0,0) && reg_11(0,0) && reg_40(0,0) && reg_39(0,0) && reg_4(0,0) && reg_27(0,0) && reg_77(0,0) && reg_60(0,0) && reg_35(0,0) && reg_40(0,0) && reg_43(0,0) && reg_77(0,0) && reg_11(0,0) && reg_61(0,0) && reg_4(0,0) && reg_43(0,0) && reg_77(0,0) && reg_25(0,0) && reg_27(0,0) && reg_64(0,0) && reg_25(0,0) && reg_77(0,0) && reg_11(0,0) && reg_43(0,0) && reg_39(0,0) && reg_61(0,0) && reg_30(0,0) && reg_11(0,0) && reg_41(0,0) && reg_27(0,0) && reg_35(0,0) && reg_43(0,0) && reg_5(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 1353;
}
if(reg_66(0,0) && reg_32(0,0) && reg_31(0,0) && reg_33(0,0) && reg_41(0,0) && reg_30(0,0) && reg_50(0,0) && reg_68(0,0) && reg_38(0,0) && reg_45(0,0) && reg_31(0,0) && reg_41(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1354;
}
if(reg_66(0,0) && reg_32(0,0) && reg_26(0,0) && reg_30(0,0) && reg_44(0,0) && reg_68(0,0) && reg_38(0,0) && reg_45(0,0) && reg_31(0,0) && reg_41(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1355;
}
if(reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_58(0,0) && reg_18(0,0) && reg_37(0,0) && reg_57(0,0) && reg_15(0,0) && reg_57(0,0) && reg_13(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_23(0,0) && reg_15(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1356;
}
if(reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_58(0,0) && reg_18(0,0) && reg_37(0,0) && reg_57(0,0) && reg_48(0,0) && reg_15(0,0) && reg_34(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1357;
}
if(reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_58(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_58(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_17(0,0) && reg_16(0,0) && reg_34(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1358;
}
if(reg_41(0,0) && reg_16(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_48(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1359;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1360;
}
if(reg_29(0,0) && reg_41(0,0) && reg_30(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1361;
}
if(reg_44(0,0) && reg_38(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1362;
}
if(reg_5(0,0) && reg_41(0,0) && reg_56(0,0) && reg_41(0,0) && reg_31(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1363;
}
if(reg_56(0,0) && reg_45(0,0) && reg_40(0,0) && reg_62(0,0)) {
matched = true;
pattern_id = 1364;
}
if(reg_50(0,0) && reg_62(0,0) && reg_40(0,0) && reg_45(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 1365;
}
if(reg_40(0,0) && reg_45(0,0) && reg_44(0,0) && reg_80(0,0)) {
matched = true;
pattern_id = 1366;
}
if(reg_50(0,0) && reg_45(0,0) && reg_72(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1367;
}
if(reg_77(0,0) && reg_77(0,0) && reg_51(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_36(0,0) && reg_37(0,0) && reg_77(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1368;
}
if(reg_58(0,0) && reg_10(0,0) && reg_37(0,0) && reg_7(0,0) && reg_37(0,0) && reg_9(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1369;
}
if(reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1370;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1371;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_34(0,0) && reg_36(0,0)) {
matched = true;
pattern_id = 1372;
}
if(reg_58(0,0) && reg_9(0,0) && reg_34(0,0) && reg_36(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_23(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1373;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1374;
}
if(reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1375;
}
if(reg_58(0,0) && reg_23(0,0) && reg_6(0,0) && reg_34(0,0) && reg_19(0,0) && reg_9(0,0) && reg_20(0,0) && reg_30(0,0) && reg_20(0,0) && reg_20(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 1376;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 1377;
}
if(reg_58(0,0) && reg_23(0,0) && reg_6(0,0) && reg_34(0,0) && reg_40(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 1378;
}
if(reg_58(0,0) && reg_18(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1379;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1380;
}
if(reg_56(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1381;
}
if(reg_57(0,0)) {
matched = true;
pattern_id = 1382;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 1383;
}
if(reg_58(0,0) && reg_42(0,0) && reg_6(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 1384;
}
if(reg_58(0,0) && reg_42(0,0) && reg_6(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1385;
}
if(reg_50(0,0) && reg_13(0,0) && reg_16(0,0) && reg_77(0,0) && reg_48(0,0) && reg_24(0,0) && reg_20(0,0) && reg_48(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1386;
}
if(reg_58(0,0) && reg_26(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_36(0,0) && reg_10(0,0) && reg_31(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1387;
}
if(reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_9(0,0) && reg_50(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1388;
}
if(reg_58(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1389;
}
if(reg_30(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_14(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_25(0,0) && reg_13(0,0) && reg_10(0,0) && reg_7(0,0) && reg_42(0,0)) {
matched = true;
pattern_id = 1390;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_9(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1391;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1392;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1393;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_46(0,0) && reg_48(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1394;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1395;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_47(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_73(0,0) && reg_48(0,0) && reg_48(0,0) && reg_46(0,0) && reg_73(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1396;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_42(0,0) && reg_9(0,0) && reg_46(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1397;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_8(0,0) && reg_24(0,0) && reg_52(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1398;
}
if(reg_31(0,0) && reg_21(0,0) && reg_50(0,0) && reg_41(0,0) && reg_73(0,0) && reg_85(0,0) && reg_45(0,0) && reg_26(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1399;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_17(0,0) && reg_47(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1400;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1401;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1402;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1403;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_36(0,0) && reg_22(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1404;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_24(0,0) && reg_46(0,0) && reg_48(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1405;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 1406;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1407;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1408;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1409;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1410;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1411;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_36(0,0) && reg_6(0,0) && reg_9(0,0) && reg_73(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_9(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 1412;
}
if(reg_39(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_73(0,0) && reg_31(0,0) && reg_85(0,0)) {
matched = true;
pattern_id = 1413;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1414;
}
if(reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1415;
}
if(reg_26(0,0) && reg_38(0,0) && reg_50(0,0) && reg_31(0,0) && reg_45(0,0)) {
matched = true;
pattern_id = 1416;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_51(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 1417;
}
if(reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_58(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1418;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1419;
}
if(reg_58(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_23(0,0) && reg_47(0,0) && reg_6(0,0) && reg_9(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1420;
}
if(reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1421;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1422;
}
if(reg_58(0,0) && reg_7(0,0) && reg_51(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_37(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1423;
}
if(reg_58(0,0) && reg_37(0,0) && reg_47(0,0) && reg_37(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1424;
}
if(reg_25(0,0) && reg_50(0,0)) {
matched = true;
pattern_id = 1425;
}
if(reg_58(0,0) && reg_10(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1426;
}
if(reg_1(0,0) && reg_60(0,0) && reg_64(0,0) && reg_1(0,0) && reg_44(0,0) && reg_26(0,0) && reg_19(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_27(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1427;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1428;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_47(0,0) && reg_20(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1429;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_47(0,0) && reg_20(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1430;
}
if(reg_42(0,0) && reg_20(0,0) && reg_16(0,0) && reg_73(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_37(0,0) && reg_36(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1431;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_17(0,0) && reg_52(0,0) && reg_10(0,0) && reg_48(0,0) && reg_15(0,0) && reg_6(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1432;
}
if(reg_42(0,0) && reg_20(0,0) && reg_16(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_7(0,0) && reg_48(0,0) && reg_48(0,0) && reg_46(0,0) && reg_6(0,0) && reg_17(0,0) && reg_10(0,0) && reg_36(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_37(0,0) && reg_24(0,0) && reg_37(0,0) && reg_36(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1433;
}
if(reg_34(0,0) && reg_48(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_10(0,0) && reg_48(0,0) && reg_24(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_10(0,0) && reg_48(0,0) && reg_24(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_14(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1434;
}
if(reg_34(0,0) && reg_48(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_34(0,0) && reg_48(0,0) && reg_0(0,0) && reg_17(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_47(0,0) && reg_9(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1435;
}
if(reg_34(0,0) && reg_48(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_34(0,0) && reg_48(0,0) && reg_0(0,0) && reg_17(0,0) && reg_10(0,0) && reg_48(0,0) && reg_24(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_14(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1436;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_46(0,0) && reg_20(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_10(0,0) && reg_18(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_20(0,0) && reg_16(0,0) && reg_22(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1437;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_12(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1438;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1439;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1440;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_9(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1441;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_9(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1442;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_48(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 1443;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_9(0,0) && reg_46(0,0) && reg_73(0,0) && reg_37(0,0) && reg_36(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1444;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_13(0,0) && reg_12(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_73(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_73(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1445;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_13(0,0) && reg_12(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_17(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_73(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_10(0,0) && reg_73(0,0) && reg_22(0,0) && reg_24(0,0) && reg_73(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_36(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1446;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_13(0,0) && reg_12(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_17(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_73(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_10(0,0) && reg_73(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_22(0,0) && reg_6(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1447;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_13(0,0) && reg_12(0,0) && reg_73(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_17(0,0) && reg_13(0,0) && reg_12(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_22(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1448;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_7(0,0) && reg_10(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1449;
}
if(reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1450;
}
if(reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1451;
}
if(reg_31(0,0) && reg_45(0,0) && reg_73(0,0) && reg_40(0,0) && reg_29(0,0) && reg_30(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 1452;
}
if(reg_58(0,0) && reg_7(0,0) && reg_10(0,0) && reg_12(0,0) && reg_46(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1453;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_36(0,0) && reg_7(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 1454;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1455;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_11(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1456;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_51(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1457;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_51(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1458;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1459;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1460;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 1461;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_51(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1462;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 1463;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 1464;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1465;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1466;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_51(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1467;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1468;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_10(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1469;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1470;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1471;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1472;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1473;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1474;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1475;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 1476;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1477;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1478;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1479;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1480;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1481;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1482;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1483;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1484;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1485;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1486;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1487;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 1488;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1489;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1490;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1491;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1492;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1493;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_8(0,0) && reg_24(0,0) && reg_52(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1494;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_51(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1495;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1496;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1497;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1498;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1499;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1500;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1501;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1502;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1503;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1504;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1505;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1506;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1507;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1508;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1509;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1510;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_24(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1511;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_73(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1512;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1513;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_10(0,0) && reg_73(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1514;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1515;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_9(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1516;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1517;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1518;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1519;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1520;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1521;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1522;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1523;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 1524;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1525;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1526;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1527;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1528;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1529;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1530;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1531;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1532;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_42(0,0) && reg_36(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_48(0,0) && reg_48(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1533;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_37(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1534;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1535;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_34(0,0) && reg_13(0,0) && reg_52(0,0) && reg_9(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1536;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_24(0,0) && reg_51(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1537;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1538;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_47(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1539;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_47(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1540;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_47(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1541;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1542;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1543;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1544;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1545;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1546;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1547;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_18(0,0) && reg_13(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1548;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1549;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_47(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_73(0,0) && reg_48(0,0) && reg_48(0,0) && reg_46(0,0) && reg_73(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1550;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_47(0,0) && reg_20(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1551;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_46(0,0) && reg_48(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1552;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1553;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1554;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_37(0,0) && reg_9(0,0) && reg_42(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1555;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_36(0,0) && reg_10(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1556;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_36(0,0) && reg_22(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1557;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_36(0,0) && reg_22(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1558;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1559;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1560;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_13(0,0) && reg_51(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1561;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1562;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_51(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1563;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1564;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1565;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_10(0,0) && reg_73(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1566;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_73(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1567;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_10(0,0) && reg_73(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1568;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_24(0,0) && reg_51(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1569;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1570;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_47(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1571;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1572;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1573;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_17(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1574;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1575;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1576;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1577;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1578;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1579;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_24(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1580;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1581;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_37(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1582;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_47(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1583;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1584;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_18(0,0) && reg_13(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_34(0,0) && reg_22(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1585;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1586;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_17(0,0) && reg_10(0,0) && reg_36(0,0) && reg_10(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1587;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1588;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1589;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1590;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1591;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1592;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1593;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 1594;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_36(0,0) && reg_22(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1595;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_11(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1596;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_13(0,0) && reg_22(0,0) && reg_73(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1597;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1598;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1599;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1600;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_20(0,0) && reg_6(0,0) && reg_7(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1601;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1602;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_34(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1603;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_15(0,0) && reg_7(0,0) && reg_20(0,0) && reg_42(0,0) && reg_18(0,0) && reg_73(0,0) && reg_34(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1604;
}
if(reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_17(0,0) && reg_10(0,0) && reg_15(0,0) && reg_7(0,0) && reg_20(0,0) && reg_42(0,0) && reg_18(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1605;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1606;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1607;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1608;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1609;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1610;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1611;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 1612;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1613;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1614;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1615;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1616;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1617;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1618;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1619;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1620;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1621;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 1622;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1623;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1624;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1625;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1626;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_42(0,0) && reg_9(0,0) && reg_46(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1627;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1628;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1629;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1630;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1631;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_73(0,0) && reg_24(0,0) && reg_22(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1632;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1633;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1634;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1635;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1636;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1637;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1638;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1639;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_22(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1640;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_6(0,0) && reg_13(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 1641;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1642;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_6(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1643;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1644;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1645;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1646;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1647;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_47(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1648;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1649;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1650;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1651;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1652;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_10(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1653;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1654;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1655;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_10(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1656;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1657;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1658;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_10(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1659;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1660;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0)) {
matched = true;
pattern_id = 1661;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1662;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_10(0,0) && reg_15(0,0) && reg_7(0,0) && reg_20(0,0) && reg_42(0,0) && reg_18(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1663;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_36(0,0) && reg_22(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1664;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_73(0,0) && reg_36(0,0) && reg_20(0,0) && reg_46(0,0) && reg_17(0,0) && reg_10(0,0) && reg_15(0,0) && reg_7(0,0) && reg_20(0,0) && reg_42(0,0) && reg_18(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1665;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_17(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1666;
}
if(reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_17(0,0) && reg_48(0,0) && reg_51(0,0) && reg_34(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_73(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_36(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1667;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1668;
}
if(reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1669;
}
if(reg_44(0,0) && reg_30(0,0) && reg_31(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1670;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_1(0,0) && reg_17(0,0) && reg_17(0,0) && reg_1(0,0) && reg_25(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1671;
}
if(reg_25(0,0) && reg_26(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1672;
}
if(reg_28(0,0) && reg_21(0,0) && reg_26(0,0) && reg_5(0,0) && reg_21(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 1673;
}
if(reg_32(0,0) && reg_80(0,0) && reg_32(0,0) && reg_5(0,0) && reg_21(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 1674;
}
if(reg_30(0,0) && reg_25(0,0) && reg_40(0,0) && reg_74(0,0) && reg_85(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_41(0,0) && reg_21(0,0) && reg_72(0,0)) {
matched = true;
pattern_id = 1675;
}
if(reg_33(0,0) && reg_68(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 1676;
}
if(reg_19(0,0) && reg_26(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1677;
}
if(reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_13(0,0) && reg_22(0,0) && reg_9(0,0) && reg_3(0,0) && reg_26(0,0) && reg_9(0,0) && reg_20(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_3(0,0) && reg_8(0,0) && reg_10(0,0) && reg_3(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_51(0,0) && reg_49(0,0) && reg_3(0,0) && reg_32(0,0) && reg_36(0,0) && reg_7(0,0) && reg_48(0,0) && reg_3(0,0) && reg_39(0,0) && reg_46(0,0) && reg_24(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_17(0,0) && reg_51(0,0) && reg_46(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0) && reg_54(0,0) && reg_6(0,0) && reg_2(0,0) && reg_2(0,0) && reg_20(0,0) && reg_70(0,0) && reg_1(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1678;
}
if(reg_5(0,0) && reg_21(0,0) && reg_32(0,0) && reg_31(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 1679;
}
if(reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_46(0,0) && reg_18(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1680;
}
if(reg_29(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_24(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 1681;
}
if(reg_72(0,0) && reg_13(0,0) && reg_34(0,0) && reg_37(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_3(0,0) && reg_8(0,0) && reg_27(0,0) && reg_17(0,0) && reg_0(0,0) && reg_3(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_45(0,0) && reg_22(0,0) && reg_77(0,0) && reg_56(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 1682;
}
if(reg_30(0,0) && reg_44(0,0) && reg_44(0,0) && reg_41(0,0) && reg_26(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1683;
}
if(reg_41(0,0) && reg_75(0,0) && reg_30(0,0) && reg_50(0,0) && reg_21(0,0) && reg_26(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1684;
}
if(reg_39(0,0) && reg_41(0,0) && reg_31(0,0) && reg_40(0,0) && reg_29(0,0)) {
matched = true;
pattern_id = 1685;
}
if(reg_32(0,0) && reg_31(0,0) && reg_30(0,0) && reg_31(0,0) && reg_38(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 1686;
}
if(reg_32(0,0) && reg_38(0,0) && reg_25(0,0) && reg_32(0,0) && reg_40(0,0) && reg_33(0,0) && reg_21(0,0) && reg_25(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1687;
}
if(reg_38(0,0) && reg_26(0,0) && reg_32(0,0) && reg_38(0,0) && reg_25(0,0) && reg_32(0,0) && reg_40(0,0) && reg_33(0,0) && reg_21(0,0) && reg_25(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1688;
}
if(reg_33(0,0) && reg_26(0,0) && reg_39(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 1689;
}
if(reg_32(0,0) && reg_41(0,0) && reg_30(0,0) && reg_33(0,0) && reg_40(0,0) && reg_29(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1690;
}
if(reg_33(0,0) && reg_21(0,0) && reg_39(0,0) && reg_39(0,0)) {
matched = true;
pattern_id = 1691;
}
if(reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_10(0,0) && reg_9(0,0) && reg_42(0,0) && reg_36(0,0) && reg_6(0,0) && reg_9(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1692;
}
if(reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_9(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 1693;
}
if(reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_42(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1694;
}
if(reg_42(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1695;
}
if(reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1696;
}
if(reg_13(0,0) && reg_7(0,0) && reg_34(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_47(0,0) && reg_24(0,0) && reg_13(0,0) && reg_15(0,0) && reg_13(0,0) && reg_49(0,0) && reg_63(0,0) && reg_34(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1697;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_17(0,0) && reg_10(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1698;
}
if(reg_58(0,0) && reg_15(0,0) && reg_35(0,0) && reg_15(0,0) && reg_18(0,0) && reg_24(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1699;
}
if(reg_17(0,0) && reg_42(0,0) && reg_48(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1700;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1701;
}
if(reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_16(0,0) && reg_77(0,0) && reg_34(0,0) && reg_10(0,0) && reg_22(0,0) && reg_34(0,0) && reg_10(0,0) && reg_47(0,0) && reg_6(0,0) && reg_37(0,0) && reg_0(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1702;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_30(0,0) && reg_1(0,0) && reg_82(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_31(0,0) && reg_31(0,0) && reg_80(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_44(0,0) && reg_31(0,0) && reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1703;
}
if(reg_42(0,0) && reg_46(0,0) && reg_10(0,0) && reg_7(0,0) && reg_48(0,0) && reg_86(0,0) && reg_13(0,0) && reg_48(0,0) && reg_51(0,0) && reg_60(0,0) && reg_60(0,0) && reg_2(0,0) && reg_13(0,0) && reg_4(0,0) && reg_77(0,0) && reg_48(0,0) && reg_60(0,0) && reg_23(0,0) && reg_23(0,0) && reg_77(0,0) && reg_27(0,0) && reg_27(0,0) && reg_42(0,0) && reg_23(0,0) && reg_77(0,0) && reg_64(0,0) && reg_35(0,0) && reg_61(0,0) && reg_61(0,0) && reg_77(0,0) && reg_2(0,0) && reg_2(0,0) && reg_13(0,0) && reg_13(0,0) && reg_2(0,0) && reg_2(0,0) && reg_35(0,0) && reg_51(0,0) && reg_61(0,0) && reg_13(0,0) && reg_27(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 1704;
}
if(reg_66(0,0) && reg_45(0,0) && reg_25(0,0) && reg_74(0,0) && reg_41(0,0) && reg_40(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1705;
}
if(reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1706;
}
if(reg_58(0,0)) {
matched = true;
pattern_id = 1707;
}
if(reg_27(0,0) && reg_57(0,0) && reg_1(0,0) && reg_5(0,0) && reg_2(0,0) && reg_3(0,0) && reg_5(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1708;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1709;
}
if(reg_17(0,0) && reg_15(0,0) && reg_34(0,0) && reg_14(0,0)) {
matched = true;
pattern_id = 1710;
}
if(reg_17(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1711;
}
if(reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1712;
}
if(reg_3(0,0)) {
matched = true;
pattern_id = 1713;
}
if(reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_24(0,0) && reg_48(0,0) && reg_51(0,0) && reg_42(0,0) && reg_17(0,0) && reg_48(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1714;
}
if(reg_56(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_82(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_82(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1715;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_30(0,0) && reg_1(0,0) && reg_82(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1716;
}
if(reg_30(0,0) && reg_33(0,0) && reg_62(0,0) && reg_30(0,0) && reg_5(0,0) && reg_50(0,0) && reg_21(0,0) && reg_26(0,0) && reg_73(0,0) && reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 1717;
}
if(reg_30(0,0) && reg_33(0,0) && reg_62(0,0) && reg_39(0,0) && reg_32(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1718;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1719;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0)) {
matched = true;
pattern_id = 1720;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1721;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1722;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1723;
}
if(reg_58(0,0) && reg_13(0,0) && reg_15(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1724;
}
if(reg_58(0,0) && reg_13(0,0) && reg_15(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1725;
}
if(reg_21(0,0) && reg_26(0,0) && reg_72(0,0) && reg_21(0,0) && reg_31(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1726;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1727;
}
if(reg_58(0,0) && reg_20(0,0) && reg_24(0,0) && reg_22(0,0) && reg_47(0,0) && reg_57(0,0) && reg_7(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1728;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1729;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_45(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_64(0,0) && reg_17(0,0) && reg_4(0,0) && reg_11(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1730;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_5(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_40(0,0) && reg_18(0,0) && reg_13(0,0) && reg_2(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1731;
}
if(reg_0(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1732;
}
if(reg_0(0,0) && reg_0(0,0) && reg_27(0,0) && reg_3(0,0) && reg_19(0,0) && reg_24(0,0) && reg_24(0,0) && reg_48(0,0) && reg_51(0,0) && reg_49(0,0) && reg_9(0,0) && reg_3(0,0) && reg_18(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_49(0,0) && reg_3(0,0) && reg_6(0,0) && reg_2(0,0) && reg_2(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1733;
}
if(reg_58(0,0) && reg_34(0,0) && reg_36(0,0) && reg_7(0,0) && reg_9(0,0) && reg_51(0,0) && reg_46(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1734;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_0(0,0) && reg_5(0,0) && reg_1(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_24(0,0) && reg_6(0,0) && reg_23(0,0) && reg_9(0,0) && reg_36(0,0) && reg_10(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_39(0,0) && reg_36(0,0) && reg_42(0,0) && reg_52(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_32(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1735;
}
if(reg_58(0,0) && reg_13(0,0) && reg_22(0,0) && reg_24(0,0) && reg_22(0,0) && reg_49(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1736;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_13(0,0) && reg_10(0,0) && reg_13(0,0) && reg_23(0,0) && reg_13(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1737;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_57(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1738;
}
if(reg_76(0,0) && reg_44(0,0) && reg_5(0,0) && reg_39(0,0) && reg_77(0,0) && reg_27(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 1739;
}
if(reg_66(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_59(0,0) && reg_66(0,0) && reg_51(0,0) && reg_24(0,0) && reg_48(0,0) && reg_49(0,0) && reg_59(0,0) && reg_66(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1740;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1741;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 1742;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_6(0,0) && reg_9(0,0) && reg_77(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1743;
}
if(reg_20(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 1744;
}
if(reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_24(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1745;
}
if(reg_76(0,0) && reg_30(0,0) && reg_56(0,0) && reg_56(0,0) && reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_32(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_39(0,0) && reg_21(0,0) && reg_56(0,0) && reg_41(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1746;
}
if(reg_76(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_19(0,0) && reg_33(0,0) && reg_30(0,0) && reg_50(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1747;
}
if(reg_76(0,0) && reg_30(0,0) && reg_44(0,0) && reg_44(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1748;
}
if(reg_76(0,0) && reg_40(0,0) && reg_45(0,0) && reg_50(0,0) && reg_50(0,0) && reg_45(0,0) && reg_26(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_19(0,0) && reg_33(0,0) && reg_30(0,0) && reg_50(0,0) && reg_39(0,0) && reg_21(0,0) && reg_56(0,0) && reg_41(0,0) && reg_32(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1749;
}
if(reg_76(0,0) && reg_40(0,0) && reg_45(0,0) && reg_50(0,0) && reg_50(0,0) && reg_45(0,0) && reg_26(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_19(0,0) && reg_33(0,0) && reg_30(0,0) && reg_50(0,0) && reg_39(0,0) && reg_21(0,0) && reg_56(0,0) && reg_41(0,0) && reg_32(0,0) && reg_1(0,0) && reg_11(0,0) && reg_2(0,0) && reg_1(0,0) && reg_16(0,0) && reg_60(0,0) && reg_4(0,0) && reg_1(0,0) && reg_11(0,0) && reg_27(0,0) && reg_1(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1750;
}
if(reg_76(0,0) && reg_40(0,0) && reg_45(0,0) && reg_50(0,0) && reg_32(0,0) && reg_44(0,0) && reg_41(0,0) && reg_40(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1751;
}
if(reg_76(0,0) && reg_29(0,0) && reg_45(0,0) && reg_50(0,0) && reg_41(0,0) && reg_5(0,0) && reg_33(0,0) && reg_21(0,0) && reg_72(0,0) && reg_41(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1752;
}
if(reg_76(0,0) && reg_29(0,0) && reg_45(0,0) && reg_50(0,0) && reg_41(0,0) && reg_44(0,0) && reg_30(0,0) && reg_31(0,0) && reg_29(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1753;
}
if(reg_76(0,0) && reg_56(0,0) && reg_45(0,0) && reg_40(0,0) && reg_30(0,0) && reg_56(0,0) && reg_30(0,0) && reg_44(0,0) && reg_44(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1754;
}
if(reg_76(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_19(0,0) && reg_33(0,0) && reg_30(0,0) && reg_50(0,0) && reg_39(0,0) && reg_21(0,0) && reg_56(0,0) && reg_41(0,0) && reg_32(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1755;
}
if(reg_76(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_19(0,0) && reg_33(0,0) && reg_30(0,0) && reg_50(0,0) && reg_39(0,0) && reg_21(0,0) && reg_56(0,0) && reg_41(0,0) && reg_32(0,0) && reg_1(0,0) && reg_11(0,0) && reg_2(0,0) && reg_1(0,0) && reg_75(0,0) && reg_60(0,0) && reg_4(0,0) && reg_1(0,0) && reg_11(0,0) && reg_27(0,0) && reg_1(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1756;
}
if(reg_76(0,0) && reg_32(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_5(0,0) && reg_6(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1757;
}
if(reg_76(0,0) && reg_32(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_33(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1758;
}
if(reg_76(0,0) && reg_31(0,0) && reg_41(0,0) && reg_50(0,0) && reg_44(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1759;
}
if(reg_76(0,0) && reg_31(0,0) && reg_50(0,0) && reg_44(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1760;
}
if(reg_76(0,0) && reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_30(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1761;
}
if(reg_76(0,0) && reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_26(0,0) && reg_30(0,0) && reg_50(0,0) && reg_41(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1762;
}
if(reg_76(0,0) && reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_39(0,0) && reg_21(0,0) && reg_56(0,0) && reg_41(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1763;
}
if(reg_76(0,0) && reg_28(0,0) && reg_21(0,0) && reg_26(0,0) && reg_5(0,0) && reg_21(0,0) && reg_33(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1764;
}
if(reg_76(0,0) && reg_44(0,0) && reg_38(0,0) && reg_25(0,0) && reg_56(0,0) && reg_21(0,0) && reg_40(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1765;
}
if(reg_76(0,0) && reg_44(0,0) && reg_32(0,0) && reg_50(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0) && reg_44(0,0) && reg_13(0,0) && reg_20(0,0) && reg_18(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1766;
}
if(reg_76(0,0) && reg_40(0,0) && reg_45(0,0) && reg_50(0,0) && reg_44(0,0) && reg_38(0,0) && reg_31(0,0) && reg_41(0,0) && reg_33(0,0) && reg_26(0,0) && reg_30(0,0) && reg_50(0,0) && reg_41(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1767;
}
if(reg_76(0,0) && reg_56(0,0) && reg_45(0,0) && reg_19(0,0) && reg_45(0,0) && reg_26(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_72(0,0) && reg_41(0,0) && reg_33(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1768;
}
if(reg_76(0,0) && reg_44(0,0) && reg_30(0,0) && reg_31(0,0) && reg_29(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1769;
}
if(reg_76(0,0) && reg_44(0,0) && reg_30(0,0) && reg_31(0,0) && reg_29(0,0) && reg_41(0,0) && reg_75(0,0) && reg_31(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1770;
}
if(reg_76(0,0) && reg_44(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_44(0,0) && reg_31(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1771;
}
if(reg_76(0,0) && reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_5(0,0) && reg_45(0,0) && reg_50(0,0) && reg_30(0,0) && reg_21(0,0) && reg_26(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 1772;
}
if(reg_73(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1773;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1774;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1775;
}
if(reg_58(0,0) && reg_18(0,0) && reg_7(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 1776;
}
if(reg_35(0,0) && reg_2(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1777;
}
if(reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_31(0,0) && reg_15(0,0) && reg_7(0,0) && reg_20(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_78(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_24(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_51(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_78(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_22(0,0) && reg_24(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_47(0,0) && reg_22(0,0) && reg_78(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_18(0,0) && reg_9(0,0) && reg_7(0,0) && reg_47(0,0) && reg_18(0,0) && reg_20(0,0) && reg_3(0,0) && reg_78(0,0) && reg_3(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_27(0,0) && reg_37(0,0) && reg_16(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_15(0,0) && reg_7(0,0) && reg_48(0,0) && reg_20(0,0) && reg_18(0,0) && reg_3(0,0) && reg_78(0,0) && reg_3(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_27(0,0) && reg_37(0,0) && reg_16(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1778;
}
if(reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_24(0,0) && reg_73(0,0) && reg_37(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1779;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_10(0,0) && reg_46(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_39(0,0) && reg_1(0,0) && reg_10(0,0) && reg_13(0,0) && reg_23(0,0) && reg_9(0,0) && reg_18(0,0) && reg_24(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1780;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_34(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_15(0,0) && reg_9(0,0) && reg_6(0,0) && reg_51(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1781;
}
if(reg_66(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_59(0,0) && reg_66(0,0) && reg_53(0,0) && reg_5(0,0) && reg_45(0,0) && reg_40(0,0) && reg_31(0,0) && reg_80(0,0) && reg_44(0,0) && reg_41(0,0)) {
matched = true;
pattern_id = 1782;
}
if(reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_31(0,0) && reg_7(0,0) && reg_34(0,0) && reg_9(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1783;
}
if(reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_41(0,0) && reg_8(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_56(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1784;
}
if(reg_1(0,0) && reg_64(0,0) && reg_41(0,0) && reg_3(0,0) && reg_64(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1785;
}
if(reg_9(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_87(0,0) && reg_23(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_87(0,0) && reg_37(0,0) && reg_79(0,0) && reg_13(0,0) && reg_79(0,0) && reg_42(0,0) && reg_79(0,0) && reg_52(0,0) && reg_79(0,0) && reg_9(0,0) && reg_79(0,0) && reg_6(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 1786;
}
if(reg_1(0,0) && reg_43(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_61(0,0) && reg_1(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_10(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_61(0,0) && reg_1(0,0) && reg_21(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_61(0,0) && reg_3(0,0) && reg_43(0,0) && reg_5(0,0) && reg_3(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1787;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_19(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_46(0,0) && reg_9(0,0) && reg_3(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1788;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_51(0,0) && reg_24(0,0) && reg_20(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1789;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_15(0,0) && reg_7(0,0) && reg_37(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_7(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1790;
}
if(reg_1(0,0) && reg_2(0,0) && reg_40(0,0) && reg_1(0,0) && reg_46(0,0) && reg_24(0,0) && reg_46(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_37(0,0) && reg_15(0,0) && reg_22(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1791;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_6(0,0) && reg_9(0,0) && reg_15(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1792;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_57(0,0) && reg_9(0,0) && reg_51(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_22(0,0) && reg_7(0,0) && reg_52(0,0) && reg_24(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_10(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1793;
}
if(reg_13(0,0) && reg_78(0,0) && reg_80(0,0) && reg_28(0,0) && reg_85(0,0) && reg_34(0,0) && reg_13(0,0) && reg_28(0,0) && reg_68(0,0) && reg_64(0,0) && reg_50(0,0) && reg_5(0,0) && reg_38(0,0) && reg_49(0,0) && reg_45(0,0) && reg_5(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1794;
}
if(reg_58(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1795;
}
if(reg_66(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_59(0,0) && reg_66(0,0) && reg_18(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_59(0,0) && reg_66(0,0) && reg_34(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_3(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_77(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_8(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 1796;
}
if(reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1797;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_38(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_64(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_64(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_9(0,0) && reg_22(0,0) && reg_77(0,0) && reg_38(0,0) && reg_32(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1798;
}
if(reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0) && reg_27(0,0) && reg_17(0,0) && reg_36(0,0) && reg_10(0,0) && reg_13(0,0) && reg_17(0,0) && reg_47(0,0) && reg_24(0,0) && reg_8(0,0)) {
matched = true;
pattern_id = 1799;
}
if(reg_1(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_1(0,0) && reg_0(0,0) && reg_41(0,0) && reg_1(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1800;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_37(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1801;
}
if(reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 1802;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_26(0,0) && reg_9(0,0) && reg_15(0,0) && reg_25(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_31(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1803;
}
if(reg_58(0,0) && reg_10(0,0) && reg_58(0,0) && reg_63(0,0) && reg_52(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1804;
}
if(reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1805;
}
if(reg_17(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1806;
}
if(reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_13(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1807;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_78(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_9(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1808;
}
if(reg_30(0,0) && reg_42(0,0) && reg_36(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_7(0,0) && reg_16(0,0) && reg_77(0,0)) {
matched = true;
pattern_id = 1809;
}
if(reg_58(0,0) && reg_13(0,0) && reg_42(0,0) && reg_36(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_7(0,0) && reg_16(0,0) && reg_77(0,0) && reg_15(0,0) && reg_8(0,0) && reg_10(0,0) && reg_77(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_77(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_77(0,0) && reg_10(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_77(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_16(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1810;
}
if(reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_78(0,0) && reg_47(0,0) && reg_2(0,0) && reg_2(0,0) && reg_48(0,0) && reg_44(0,0) && reg_13(0,0) && reg_89(0,0) && reg_89(0,0) && reg_15(0,0) && reg_2(0,0) && reg_6(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1811;
}
if(reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_78(0,0) && reg_58(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_17(0,0) && reg_8(0,0) && reg_36(0,0) && reg_46(0,0) && reg_22(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1812;
}
if(reg_44(0,0) && reg_29(0,0) && reg_26(0,0) && reg_57(0,0) && reg_42(0,0) && reg_34(0,0) && reg_46(0,0) && reg_15(0,0) && reg_48(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1813;
}
if(reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_86(0,0) && reg_58(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_17(0,0) && reg_13(0,0) && reg_42(0,0) && reg_36(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_7(0,0) && reg_16(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1814;
}
if(reg_66(0,0) && reg_32(0,0) && reg_42(0,0) && reg_33(0,0) && reg_7(0,0) && reg_44(0,0) && reg_20(0,0) && reg_59(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_20(0,0) && reg_87(0,0)) {
matched = true;
pattern_id = 1815;
}
if(reg_59(0,0) && reg_78(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_16(0,0) && reg_13(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 1816;
}
if(reg_46(0,0) && reg_23(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0) && reg_1(0,0) && reg_0(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1817;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1818;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_44(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_33(0,0) && reg_9(0,0) && reg_42(0,0) && reg_9(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1819;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_25(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_21(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1820;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_25(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_5(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_10(0,0) && reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1821;
}
if(reg_1(0,0) && reg_64(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1822;
}
if(reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_36(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_9(0,0) && reg_22(0,0) && reg_77(0,0) && reg_36(0,0) && reg_10(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1823;
}
if(reg_58(0,0) && reg_57(0,0) && reg_10(0,0) && reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_63(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1824;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_38(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_64(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_64(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_9(0,0) && reg_22(0,0) && reg_77(0,0) && reg_38(0,0) && reg_32(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1825;
}
if(reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_51(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_35(0,0) && reg_61(0,0) && reg_64(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_21(0,0) && reg_26(0,0) && reg_31(0,0) && reg_1(0,0) && reg_0(0,0) && reg_5(0,0) && reg_1(0,0) && reg_4(0,0) && reg_61(0,0) && reg_4(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1826;
}
if(reg_58(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1827;
}
if(reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_40(0,0) && reg_18(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1828;
}
if(reg_58(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_10(0,0) && reg_58(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1829;
}
if(reg_1(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1830;
}
if(reg_58(0,0) && reg_29(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_15(0,0) && reg_7(0,0) && reg_48(0,0) && reg_20(0,0) && reg_18(0,0) && reg_78(0,0) && reg_27(0,0) && reg_3(0,0) && reg_18(0,0) && reg_9(0,0) && reg_7(0,0) && reg_47(0,0) && reg_18(0,0) && reg_20(0,0) && reg_78(0,0) && reg_27(0,0) && reg_3(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_78(0,0) && reg_22(0,0) && reg_24(0,0) && reg_59(0,0) && reg_66(0,0) && reg_58(0,0) && reg_7(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1831;
}
if(reg_49(0,0) && reg_24(0,0) && reg_45(0,0) && reg_11(0,0) && reg_31(0,0) && reg_30(0,0) && reg_51(0,0) && reg_22(0,0) && reg_0(0,0) && reg_20(0,0) && reg_37(0,0) && reg_46(0,0) && reg_43(0,0) && reg_5(0,0) && reg_46(0,0) && reg_20(0,0) && reg_40(0,0) && reg_23(0,0) && reg_30(0,0) && reg_32(0,0) && reg_74(0,0) && reg_21(0,0) && reg_85(0,0) && reg_0(0,0) && reg_10(0,0) && reg_37(0,0) && reg_41(0,0) && reg_74(0,0) && reg_44(0,0) && reg_56(0,0) && reg_32(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1832;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1833;
}
if(reg_58(0,0) && reg_51(0,0) && reg_58(0,0) && reg_22(0,0) && reg_58(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_58(0,0) && reg_20(0,0) && reg_36(0,0) && reg_48(0,0) && reg_24(0,0) && reg_17(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1834;
}
if(reg_13(0,0) && reg_78(0,0) && reg_10(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_3(0,0) && reg_40(0,0) && reg_30(0,0) && reg_50(0,0) && reg_44(0,0) && reg_45(0,0) && reg_3(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_3(0,0) && reg_44(0,0) && reg_30(0,0) && reg_19(0,0) && reg_21(0,0) && reg_26(0,0) && reg_30(0,0) && reg_3(0,0) && reg_15(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_3(0,0) && reg_40(0,0) && reg_45(0,0) && reg_5(0,0) && reg_21(0,0) && reg_19(0,0) && reg_45(0,0) && reg_3(0,0) && reg_78(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 1835;
}
if(reg_42(0,0) && reg_10(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1836;
}
if(reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_48(0,0) && reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_48(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1837;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1838;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_44(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_77(0,0) && reg_33(0,0) && reg_9(0,0) && reg_42(0,0) && reg_9(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1839;
}
if(reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_73(0,0) && reg_8(0,0) && reg_20(0,0) && reg_7(0,0) && reg_73(0,0) && reg_42(0,0) && reg_22(0,0) && reg_23(0,0) && reg_58(0,0) && reg_2(0,0) && reg_2(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 1840;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1841;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1842;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_25(0,0) && reg_6(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_24(0,0) && reg_52(0,0) && reg_17(0,0) && reg_30(0,0) && reg_60(0,0) && reg_3(0,0) && reg_25(0,0) && reg_6(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1843;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_40(0,0) && reg_86(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1844;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_34(0,0) && reg_13(0,0) && reg_42(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1845;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_8(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1846;
}
if(reg_58(0,0) && reg_22(0,0) && reg_24(0,0) && reg_10(0,0) && reg_7(0,0) && reg_47(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1847;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1848;
}
if(reg_58(0,0) && reg_52(0,0) && reg_10(0,0) && reg_13(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1849;
}
if(reg_24(0,0) && reg_37(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1850;
}
if(reg_1(0,0) && reg_41(0,0) && reg_39(0,0) && reg_3(0,0) && reg_25(0,0) && reg_25(0,0) && reg_3(0,0) && reg_25(0,0) && reg_39(0,0) && reg_3(0,0) && reg_43(0,0) && reg_2(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1851;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_38(0,0) && reg_23(0,0) && reg_13(0,0) && reg_10(0,0) && reg_24(0,0) && reg_23(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1852;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_40(0,0) && reg_1(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_8(0,0) && reg_9(0,0) && reg_22(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1853;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_47(0,0) && reg_7(0,0) && reg_47(0,0) && reg_13(0,0) && reg_10(0,0) && reg_51(0,0) && reg_18(0,0) && reg_17(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1854;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_16(0,0) && reg_7(0,0) && reg_16(0,0) && reg_51(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1855;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_16(0,0) && reg_7(0,0) && reg_16(0,0) && reg_51(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1856;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_24(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 1857;
}
if(reg_1(0,0) && reg_61(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_4(0,0) && reg_41(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_4(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_4(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_61(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_61(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_61(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1858;
}
if(reg_10(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_7(0,0) && reg_42(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 1859;
}
if(reg_51(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_18(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_0(0,0) && reg_78(0,0) && reg_56(0,0) && reg_24(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1860;
}
if(reg_51(0,0) && reg_46(0,0) && reg_24(0,0) && reg_51(0,0) && reg_18(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_0(0,0) && reg_78(0,0) && reg_33(0,0) && reg_9(0,0) && reg_23(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 1861;
}
if(reg_77(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_35(0,0) && reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1862;
}
if(reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0) && reg_79(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_16(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_67(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0) && reg_79(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_12(0,0) && reg_78(0,0) && reg_2(0,0) && reg_17(0,0) && reg_64(0,0) && reg_79(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_12(0,0) && reg_78(0,0) && reg_2(0,0) && reg_17(0,0) && reg_60(0,0) && reg_79(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_37(0,0) && reg_22(0,0) && reg_47(0,0) && reg_79(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_12(0,0) && reg_78(0,0) && reg_2(0,0) && reg_17(0,0) && reg_43(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1863;
}
if(reg_58(0,0) && reg_20(0,0) && reg_18(0,0) && reg_7(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_20(0,0) && reg_18(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_63(0,0) && reg_7(0,0) && reg_34(0,0) && reg_47(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1864;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_66(0,0) && reg_32(0,0) && reg_40(0,0) && reg_33(0,0) && reg_21(0,0) && reg_44(0,0) && reg_31(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1865;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_26(0,0) && reg_45(0,0) && reg_62(0,0) && reg_21(0,0) && reg_30(0,0) && reg_26(0,0) && reg_64(0,0) && reg_43(0,0) && reg_1(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0) && reg_28(0,0) && reg_41(0,0) && reg_25(0,0)) {
matched = true;
pattern_id = 1866;
}
if(reg_50(0,0) && reg_85(0,0)) {
matched = true;
pattern_id = 1867;
}
if(reg_2(0,0) && reg_13(0,0) && reg_28(0,0) && reg_27(0,0) && reg_46(0,0) && reg_44(0,0)) {
matched = true;
pattern_id = 1868;
}
if(reg_33(0,0) && reg_9(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_6(0,0) && reg_86(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1869;
}
if(reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_48(0,0) && reg_27(0,0) && reg_57(0,0) && reg_10(0,0) && reg_0(0,0) && reg_27(0,0) && reg_10(0,0) && reg_14(0,0) && reg_12(0,0) && reg_60(0,0) && reg_43(0,0) && reg_18(0,0) && reg_49(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_42(0,0) && reg_46(0,0) && reg_24(0,0) && reg_36(0,0) && reg_48(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1870;
}
if(reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_1(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_25(0,0) && reg_6(0,0) && reg_36(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0) && reg_1(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0) && reg_30(0,0) && reg_41(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 1871;
}
if(reg_20(0,0) && reg_7(0,0) && reg_37(0,0) && reg_24(0,0) && reg_78(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_83(0,0)) {
matched = true;
pattern_id = 1872;
}
if(reg_83(0,0) && reg_10(0,0) && reg_52(0,0) && reg_27(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1873;
}
if(reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_77(0,0)) {
matched = true;
pattern_id = 1874;
}
if(reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_10(0,0) && reg_7(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_13(0,0) && reg_10(0,0) && reg_7(0,0) && reg_16(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1875;
}
if(reg_58(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1876;
}
if(reg_45(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_58(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1877;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1878;
}
if(reg_58(0,0) && reg_42(0,0) && reg_42(0,0) && reg_51(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_58(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1879;
}
if(reg_1(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_34(0,0) && reg_10(0,0) && reg_22(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_22(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_14(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1880;
}
if(reg_66(0,0) && reg_7(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 1881;
}
if(reg_1(0,0) && reg_2(0,0) && reg_39(0,0) && reg_1(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_46(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1882;
}
if(reg_58(0,0) && reg_23(0,0) && reg_9(0,0) && reg_9(0,0) && reg_48(0,0) && reg_63(0,0) && reg_6(0,0) && reg_9(0,0) && reg_12(0,0) && reg_78(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1883;
}
if(reg_44(0,0) && reg_40(0,0) && reg_33(0,0) && reg_13(0,0) && reg_20(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 1884;
}
if(reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1885;
}
if(reg_47(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_46(0,0) && reg_9(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 1886;
}
if(reg_34(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1887;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1888;
}
if(reg_58(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_63(0,0) && reg_18(0,0) && reg_46(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1889;
}
if(reg_44(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_34(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_7(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_77(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_51(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1890;
}
if(reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1891;
}
if(reg_66(0,0) && reg_53(0,0) && reg_77(0,0) && reg_77(0,0) && reg_48(0,0) && reg_9(0,0) && reg_48(0,0) && reg_43(0,0) && reg_2(0,0) && reg_64(0,0) && reg_77(0,0) && reg_77(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1892;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_45(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_58(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_16(0,0) && reg_60(0,0) && reg_4(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1893;
}
if(reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_39(0,0) && reg_1(0,0) && reg_6(0,0) && reg_9(0,0) && reg_47(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1894;
}
if(reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_39(0,0) && reg_1(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1895;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1896;
}
if(reg_10(0,0) && reg_73(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1897;
}
if(reg_10(0,0) && reg_73(0,0) && reg_20(0,0) && reg_13(0,0) && reg_10(0,0) && reg_52(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1898;
}
if(reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_17(0,0) && reg_51(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1899;
}
if(reg_17(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_10(0,0) && reg_7(0,0) && reg_46(0,0) && reg_24(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1900;
}
if(reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1901;
}
if(reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1902;
}
if(reg_48(0,0) && reg_7(0,0) && reg_9(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1903;
}
if(reg_10(0,0) && reg_46(0,0) && reg_9(0,0) && reg_9(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1904;
}
if(reg_10(0,0) && reg_7(0,0) && reg_34(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1905;
}
if(reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1906;
}
if(reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1907;
}
if(reg_10(0,0) && reg_49(0,0) && reg_22(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1908;
}
if(reg_36(0,0) && reg_48(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1909;
}
if(reg_36(0,0) && reg_48(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1910;
}
if(reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1911;
}
if(reg_7(0,0) && reg_42(0,0) && reg_34(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1912;
}
if(reg_20(0,0) && reg_42(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1913;
}
if(reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1914;
}
if(reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1915;
}
if(reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1916;
}
if(reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_42(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1917;
}
if(reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_8(0,0) && reg_9(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1918;
}
if(reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_48(0,0) && reg_48(0,0) && reg_24(0,0) && reg_10(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1919;
}
if(reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_9(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1920;
}
if(reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1921;
}
if(reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1922;
}
if(reg_23(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_48(0,0) && reg_48(0,0) && reg_24(0,0) && reg_10(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1923;
}
if(reg_10(0,0) && reg_46(0,0) && reg_24(0,0) && reg_15(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1924;
}
if(reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1925;
}
if(reg_23(0,0) && reg_36(0,0) && reg_46(0,0) && reg_46(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1926;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_42(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1927;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_10(0,0) && reg_35(0,0) && reg_12(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 1928;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_66(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_3(0,0) && reg_20(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_57(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_3(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_13(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_2(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_59(0,0) && reg_66(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_59(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1929;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_8(0,0) && reg_10(0,0) && reg_9(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_49(0,0) && reg_24(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1930;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_47(0,0) && reg_58(0,0) && reg_13(0,0) && reg_15(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_10(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1931;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1932;
}
if(reg_58(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_52(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_6(0,0) && reg_10(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1933;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_35(0,0) && reg_0(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_29(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_17(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_29(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_33(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_43(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 1934;
}
if(reg_66(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_59(0,0) && reg_21(0,0) && reg_5(0,0) && reg_56(0,0) && reg_41(0,0) && reg_66(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1935;
}
if(reg_58(0,0) && reg_22(0,0) && reg_13(0,0) && reg_20(0,0) && reg_37(0,0) && reg_13(0,0) && reg_49(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1936;
}
if(reg_34(0,0) && reg_13(0,0) && reg_42(0,0) && reg_26(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1937;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_47(0,0) && reg_24(0,0) && reg_46(0,0) && reg_7(0,0) && reg_49(0,0) && reg_24(0,0) && reg_22(0,0) && reg_14(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_37(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1938;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_14(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1939;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_51(0,0) && reg_7(0,0) && reg_47(0,0) && reg_34(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_24(0,0) && reg_37(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_51(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1940;
}
if(reg_1(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_23(0,0) && reg_23(0,0) && reg_7(0,0) && reg_42(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1941;
}
if(reg_1(0,0) && reg_2(0,0) && reg_39(0,0) && reg_1(0,0) && reg_52(0,0) && reg_36(0,0) && reg_52(0,0) && reg_36(0,0) && reg_20(0,0) && reg_6(0,0) && reg_36(0,0) && reg_10(0,0) && reg_20(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_61(0,0) && reg_61(0,0) && reg_61(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1942;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1943;
}
if(reg_78(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 1944;
}
if(reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1945;
}
if(reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_34(0,0) && reg_17(0,0) && reg_57(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1946;
}
if(reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_57(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 1947;
}
if(reg_66(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_3(0,0) && reg_15(0,0) && reg_7(0,0) && reg_48(0,0) && reg_20(0,0) && reg_18(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1948;
}
if(reg_58(0,0) && reg_17(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_58(0,0) && reg_63(0,0) && reg_23(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1949;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1950;
}
if(reg_58(0,0) && reg_36(0,0) && reg_43(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1951;
}
if(reg_40(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_7(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_78(0,0) && reg_42(0,0) && reg_42(0,0) && reg_0(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1952;
}
if(reg_58(0,0) && reg_16(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1953;
}
if(reg_6(0,0) && reg_13(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_51(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1954;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0) && reg_27(0,0) && reg_43(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1955;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0) && reg_34(0,0) && reg_13(0,0) && reg_42(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1956;
}
if(reg_58(0,0) && reg_57(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1957;
}
if(reg_58(0,0) && reg_57(0,0) && reg_46(0,0) && reg_22(0,0) && reg_37(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1958;
}
if(reg_58(0,0) && reg_57(0,0) && reg_24(0,0) && reg_8(0,0) && reg_23(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1959;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_37(0,0) && reg_51(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1960;
}
if(reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1961;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_63(0,0) && reg_27(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 1962;
}
if(reg_44(0,0) && reg_62(0,0)) {
matched = true;
pattern_id = 1963;
}
if(reg_66(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_59(0,0) && reg_66(0,0) && reg_51(0,0) && reg_24(0,0) && reg_48(0,0) && reg_49(0,0) && reg_59(0,0) && reg_66(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_59(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_8(0,0) && reg_13(0,0) && reg_6(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 1964;
}
if(reg_58(0,0) && reg_63(0,0) && reg_23(0,0) && reg_78(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 1965;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1966;
}
if(reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_10(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_7(0,0) && reg_77(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_47(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1967;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_20(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_52(0,0) && reg_42(0,0) && reg_13(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1968;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_42(0,0) && reg_7(0,0) && reg_22(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_49(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1969;
}
if(reg_58(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 1970;
}
if(reg_37(0,0) && reg_10(0,0) && reg_2(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1971;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_32(0,0) && reg_41(0,0) && reg_75(0,0) && reg_1(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 1972;
}
if(reg_6(0,0) && reg_9(0,0) && reg_20(0,0) && reg_36(0,0) && reg_6(0,0) && reg_22(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_5(0,0) && reg_21(0,0) && reg_33(0,0) && reg_41(0,0) && reg_40(0,0) && reg_31(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1973;
}
if(reg_66(0,0) && reg_7(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_3(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_80(0,0) && reg_45(0,0) && reg_38(0,0) && reg_33(0,0) && reg_1(0,0) && reg_0(0,0) && reg_43(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_25(0,0) && reg_33(0,0) && reg_45(0,0) && reg_28(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_1(0,0) && reg_0(0,0) && reg_43(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_29(0,0) && reg_30(0,0) && reg_32(0,0) && reg_1(0,0) && reg_0(0,0) && reg_43(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_25(0,0) && reg_41(0,0) && reg_41(0,0) && reg_26(0,0) && reg_1(0,0) && reg_0(0,0) && reg_43(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_56(0,0) && reg_45(0,0) && reg_40(0,0) && reg_62(0,0) && reg_41(0,0) && reg_5(0,0)) {
matched = true;
pattern_id = 1974;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_10(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1975;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_27(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1976;
}
if(reg_78(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1977;
}
if(reg_58(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 1978;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_22(0,0) && reg_51(0,0) && reg_18(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1979;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_24(0,0) && reg_18(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_7(0,0) && reg_47(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1980;
}
if(reg_1(0,0) && reg_43(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1981;
}
if(reg_66(0,0) && reg_48(0,0) && reg_7(0,0) && reg_8(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_29(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_50(0,0) && reg_9(0,0) && reg_25(0,0) && reg_9(0,0) && reg_20(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 1982;
}
if(reg_58(0,0) && reg_46(0,0) && reg_48(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 1983;
}
if(reg_83(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_37(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1984;
}
if(reg_58(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1985;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_34(0,0) && reg_49(0,0) && reg_44(0,0) && reg_7(0,0) && reg_42(0,0) && reg_20(0,0) && reg_36(0,0) && reg_6(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1986;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_34(0,0) && reg_49(0,0) && reg_44(0,0) && reg_7(0,0) && reg_42(0,0) && reg_20(0,0) && reg_36(0,0) && reg_6(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1987;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_16(0,0) && reg_16(0,0) && reg_36(0,0) && reg_14(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1988;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_34(0,0) && reg_49(0,0) && reg_44(0,0) && reg_7(0,0) && reg_42(0,0) && reg_20(0,0) && reg_36(0,0) && reg_6(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1989;
}
if(reg_58(0,0) && reg_20(0,0) && reg_24(0,0) && reg_34(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_77(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1990;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1991;
}
if(reg_58(0,0) && reg_51(0,0) && reg_36(0,0) && reg_49(0,0) && reg_77(0,0) && reg_10(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 1992;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_18(0,0) && reg_7(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1993;
}
if(reg_58(0,0) && reg_36(0,0) && reg_46(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 1994;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_45(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 1995;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_15(0,0) && reg_24(0,0) && reg_46(0,0) && reg_23(0,0) && reg_8(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 1996;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1997;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_7(0,0) && reg_48(0,0) && reg_24(0,0) && reg_17(0,0) && reg_7(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 1998;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_34(0,0) && reg_49(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 1999;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2000;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_73(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_0(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2001;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2002;
}
if(reg_58(0,0) && reg_37(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2003;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_35(0,0) && reg_2(0,0) && reg_2(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 2004;
}
if(reg_66(0,0) && reg_51(0,0) && reg_24(0,0) && reg_48(0,0) && reg_49(0,0) && reg_59(0,0) && reg_66(0,0) && reg_51(0,0) && reg_59(0,0) && reg_66(0,0) && reg_58(0,0) && reg_51(0,0) && reg_59(0,0) && reg_66(0,0) && reg_10(0,0) && reg_20(0,0) && reg_49(0,0) && reg_46(0,0) && reg_9(0,0) && reg_59(0,0) && reg_48(0,0) && reg_7(0,0) && reg_8(0,0) && reg_90(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_23(0,0) && reg_46(0,0) && reg_24(0,0) && reg_15(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_18(0,0) && reg_7(0,0) && reg_48(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_15(0,0) && reg_7(0,0) && reg_48(0,0) && reg_20(0,0) && reg_18(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_27(0,0) && reg_37(0,0) && reg_16(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_18(0,0) && reg_9(0,0) && reg_7(0,0) && reg_47(0,0) && reg_18(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_27(0,0) && reg_37(0,0) && reg_16(0,0) && reg_84(0,0) && reg_66(0,0) && reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_49(0,0) && reg_46(0,0) && reg_9(0,0) && reg_59(0,0) && reg_66(0,0) && reg_48(0,0) && reg_7(0,0) && reg_8(0,0) && reg_59(0,0)) {
matched = true;
pattern_id = 2005;
}
if(reg_32(0,0) && reg_21(0,0) && reg_44(0,0) && reg_58(0,0) && reg_0(0,0) && reg_17(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2006;
}
if(reg_58(0,0) && reg_13(0,0) && reg_23(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_14(0,0) && reg_24(0,0) && reg_22(0,0) && reg_9(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2007;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2008;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_50(0,0) && reg_52(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2009;
}
if(reg_58(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_46(0,0) && reg_10(0,0) && reg_51(0,0) && reg_13(0,0) && reg_6(0,0) && reg_58(0,0) && reg_41(0,0) && reg_13(0,0) && reg_14(0,0) && reg_9(0,0) && reg_46(0,0) && reg_25(0,0) && reg_13(0,0) && reg_6(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2010;
}
if(reg_58(0,0) && reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2011;
}
if(reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2012;
}
if(reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_79(0,0) && reg_3(0,0) && reg_55(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_12(0,0) && reg_78(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2013;
}
if(reg_19(0,0) && reg_18(0,0) && reg_2(0,0) && reg_10(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2014;
}
if(reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_3(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_24(0,0) && reg_3(0,0) && reg_13(0,0) && reg_8(0,0) && reg_10(0,0) && reg_3(0,0) && reg_87(0,0) && reg_7(0,0) && reg_48(0,0) && reg_79(0,0) && reg_3(0,0) && reg_37(0,0) && reg_42(0,0) && reg_79(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_79(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_79(0,0) && reg_42(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_49(0,0) && reg_3(0,0) && reg_79(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_73(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_79(0,0) && reg_3(0,0) && reg_34(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_88(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_36(0,0) && reg_9(0,0) && reg_10(0,0) && reg_87(0,0)) {
matched = true;
pattern_id = 2015;
}
if(reg_75(0,0) && reg_77(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_15(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_48(0,0) && reg_77(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2016;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2017;
}
if(reg_63(0,0) && reg_34(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2018;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_78(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_36(0,0) && reg_37(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2019;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_78(0,0) && reg_6(0,0) && reg_9(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2020;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_78(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 2021;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_78(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2022;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_78(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_42(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2023;
}
if(reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_78(0,0) && reg_76(0,0) && reg_0(0,0) && reg_2(0,0) && reg_26(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_17(0,0) && reg_17(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2024;
}
if(reg_66(0,0) && reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_8(0,0) && reg_59(0,0) && reg_66(0,0) && reg_7(0,0) && reg_59(0,0) && reg_66(0,0) && reg_58(0,0) && reg_7(0,0) && reg_59(0,0) && reg_66(0,0) && reg_10(0,0) && reg_20(0,0) && reg_49(0,0) && reg_46(0,0) && reg_9(0,0) && reg_59(0,0) && reg_48(0,0) && reg_7(0,0) && reg_8(0,0) && reg_90(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_23(0,0) && reg_46(0,0) && reg_24(0,0) && reg_15(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_18(0,0) && reg_7(0,0) && reg_48(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_15(0,0) && reg_7(0,0) && reg_48(0,0) && reg_20(0,0) && reg_18(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_27(0,0) && reg_37(0,0) && reg_16(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2025;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_45(0,0) && reg_37(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_58(0,0) && reg_27(0,0) && reg_2(0,0) && reg_17(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_38(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_41(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_3(0,0) && reg_80(0,0) && reg_16(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_9(0,0) && reg_22(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0) && reg_3(0,0) && reg_44(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_24(0,0) && reg_58(0,0) && reg_0(0,0) && reg_17(0,0) && reg_64(0,0) && reg_17(0,0) && reg_27(0,0) && reg_4(0,0) && reg_60(0,0) && reg_3(0,0) && reg_72(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_27(0,0) && reg_27(0,0) && reg_17(0,0) && reg_43(0,0) && reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2026;
}
if(reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_63(0,0) && reg_6(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2027;
}
if(reg_58(0,0) && reg_42(0,0) && reg_6(0,0) && reg_49(0,0) && reg_37(0,0) && reg_20(0,0) && reg_73(0,0) && reg_27(0,0) && reg_73(0,0) && reg_10(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2028;
}
if(reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_83(0,0) && reg_18(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2029;
}
if(reg_58(0,0) && reg_8(0,0) && reg_0(0,0) && reg_0(0,0) && reg_58(0,0) && reg_34(0,0) && reg_36(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_7(0,0) && reg_16(0,0) && reg_13(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2030;
}
if(reg_58(0,0) && reg_8(0,0) && reg_0(0,0) && reg_0(0,0) && reg_58(0,0) && reg_34(0,0) && reg_36(0,0) && reg_20(0,0) && reg_13(0,0) && reg_51(0,0) && reg_7(0,0) && reg_16(0,0) && reg_13(0,0) && reg_58(0,0) && reg_27(0,0) && reg_22(0,0) && reg_23(0,0) && reg_35(0,0) && reg_42(0,0) && reg_20(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2031;
}
if(reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2032;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_63(0,0) && reg_12(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2033;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_36(0,0) && reg_36(0,0) && reg_7(0,0) && reg_48(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2034;
}
if(reg_58(0,0) && reg_36(0,0) && reg_20(0,0) && reg_42(0,0) && reg_58(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_17(0,0) && reg_20(0,0) && reg_7(0,0) && reg_34(0,0) && reg_9(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_17(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_86(0,0) && reg_3(0,0) && reg_62(0,0) && reg_9(0,0) && reg_9(0,0) && reg_37(0,0) && reg_77(0,0) && reg_30(0,0) && reg_46(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2035;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_34(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2036;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_10(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_51(0,0) && reg_24(0,0) && reg_16(0,0) && reg_24(0,0) && reg_22(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2037;
}
if(reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_47(0,0) && reg_6(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2038;
}
if(reg_3(0,0) && reg_74(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 2039;
}
if(reg_58(0,0) && reg_63(0,0) && reg_36(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2040;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_22(0,0) && reg_8(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2041;
}
if(reg_58(0,0) && reg_63(0,0) && reg_47(0,0) && reg_15(0,0) && reg_10(0,0) && reg_73(0,0) && reg_6(0,0) && reg_48(0,0) && reg_78(0,0) && reg_42(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2042;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_16(0,0) && reg_7(0,0) && reg_13(0,0) && reg_24(0,0) && reg_37(0,0) && reg_7(0,0) && reg_57(0,0) && reg_7(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2043;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_13(0,0) && reg_52(0,0) && reg_15(0,0) && reg_34(0,0) && reg_27(0,0) && reg_35(0,0) && reg_64(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2044;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_4(0,0) && reg_2(0,0) && reg_20(0,0) && reg_24(0,0) && reg_36(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2045;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_47(0,0) && reg_18(0,0) && reg_57(0,0) && reg_47(0,0) && reg_23(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2046;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0) && reg_58(0,0) && reg_63(0,0) && reg_83(0,0) && reg_42(0,0) && reg_34(0,0) && reg_37(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2047;
}
if(reg_83(0,0) && reg_13(0,0) && reg_23(0,0) && reg_23(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2048;
}
if(reg_37(0,0) && reg_10(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_10(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_13(0,0) && reg_10(0,0) && reg_48(0,0) && reg_78(0,0) && reg_23(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_87(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 2049;
}
if(reg_13(0,0) && reg_12(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_16(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_23(0,0) && reg_23(0,0) && reg_78(0,0) && reg_32(0,0) && reg_20(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2050;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_47(0,0) && reg_24(0,0) && reg_24(0,0) && reg_51(0,0) && reg_14(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2051;
}
if(reg_58(0,0) && reg_37(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_16(0,0) && reg_63(0,0) && reg_37(0,0) && reg_6(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2052;
}
if(reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2053;
}
if(reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_0(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_34(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_87(0,0) && reg_87(0,0) && reg_23(0,0) && reg_88(0,0) && reg_63(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2054;
}
if(reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_23(0,0) && reg_6(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_24(0,0) && reg_34(0,0) && reg_40(0,0) && reg_18(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_13(0,0) && reg_6(0,0) && reg_40(0,0) && reg_24(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_67(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_48(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2055;
}
if(reg_78(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2056;
}
if(reg_17(0,0) && reg_57(0,0) && reg_22(0,0) && reg_46(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2057;
}
if(reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2058;
}
if(reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_3(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_73(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_78(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2059;
}
if(reg_17(0,0) && reg_46(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 2060;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_46(0,0) && reg_49(0,0) && reg_22(0,0) && reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2061;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_45(0,0) && reg_28(0,0) && reg_4(0,0) && reg_11(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_6(0,0) && reg_8(0,0) && reg_86(0,0) && reg_0(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_3(0,0) && reg_19(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_24(0,0) && reg_58(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_39(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_24(0,0) && reg_16(0,0) && reg_58(0,0) && reg_0(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2062;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_46(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_10(0,0) && reg_49(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_10(0,0) && reg_49(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2063;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_86(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_79(0,0) && reg_3(0,0) && reg_55(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_12(0,0) && reg_78(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_86(0,0) && reg_3(0,0) && reg_42(0,0) && reg_46(0,0) && reg_24(0,0) && reg_10(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2064;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_61(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_31(0,0) && reg_6(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_77(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_24(0,0) && reg_46(0,0) && reg_86(0,0) && reg_3(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2065;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_61(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_31(0,0) && reg_6(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_77(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_24(0,0) && reg_46(0,0) && reg_86(0,0) && reg_3(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2066;
}
if(reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_36(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 2067;
}
if(reg_1(0,0) && reg_43(0,0) && reg_11(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2068;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_36(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2069;
}
if(reg_7(0,0) && reg_37(0,0) && reg_77(0,0) && reg_15(0,0) && reg_18(0,0) && reg_24(0,0) && reg_77(0,0) && reg_7(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2070;
}
if(reg_38(0,0) && reg_44(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_41(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2071;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_83(0,0) && reg_22(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2072;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2073;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2074;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_21(0,0) && reg_5(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2075;
}
if(reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_49(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_23(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2076;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_85(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2077;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_14(0,0) && reg_2(0,0) && reg_2(0,0) && reg_10(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2078;
}
if(reg_17(0,0) && reg_14(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2079;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_51(0,0) && reg_7(0,0) && reg_20(0,0) && reg_17(0,0) && reg_46(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_79(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_86(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_21(0,0) && reg_22(0,0) && reg_48(0,0) && reg_49(0,0) && reg_3(0,0) && reg_56(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 2080;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_51(0,0) && reg_7(0,0) && reg_20(0,0) && reg_46(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_79(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_86(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_21(0,0) && reg_22(0,0) && reg_48(0,0) && reg_49(0,0) && reg_3(0,0) && reg_56(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 2081;
}
if(reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_37(0,0) && reg_6(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2082;
}
if(reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_18(0,0) && reg_13(0,0) && reg_8(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_51(0,0) && reg_9(0,0) && reg_24(0,0) && reg_20(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2083;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_7(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2084;
}
if(reg_58(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2085;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_42(0,0) && reg_46(0,0) && reg_36(0,0) && reg_51(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0)) {
matched = true;
pattern_id = 2086;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_10(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_37(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_24(0,0) && reg_10(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_36(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2087;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_10(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_37(0,0) && reg_24(0,0) && reg_46(0,0) && reg_46(0,0) && reg_24(0,0) && reg_10(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_36(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2088;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_23(0,0) && reg_9(0,0) && reg_22(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_36(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 2089;
}
if(reg_58(0,0) && reg_42(0,0) && reg_34(0,0) && reg_48(0,0) && reg_63(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2090;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_13(0,0) && reg_6(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_8(0,0) && reg_24(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_40(0,0) && reg_86(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2091;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2092;
}
if(reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_3(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_91(0,0)) {
matched = true;
pattern_id = 2093;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2094;
}
if(reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_0(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2095;
}
if(reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_3(0,0) && reg_91(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0) && reg_3(0,0) && reg_13(0,0) && reg_51(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2096;
}
if(reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_3(0,0) && reg_91(0,0) && reg_22(0,0) && reg_3(0,0) && reg_57(0,0) && reg_24(0,0) && reg_51(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2097;
}
if(reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_3(0,0) && reg_91(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_27(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_3(0,0) && reg_91(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_0(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_3(0,0) && reg_91(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_35(0,0) && reg_3(0,0) && reg_87(0,0) && reg_22(0,0) && reg_36(0,0) && reg_46(0,0) && reg_46(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2098;
}
if(reg_58(0,0) && reg_13(0,0) && reg_8(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2099;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_57(0,0) && reg_7(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_77(0,0) && reg_14(0,0) && reg_9(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2100;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_58(0,0) && reg_63(0,0) && reg_7(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2101;
}
if(reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2102;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_7(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2103;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_58(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2104;
}
if(reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_23(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2105;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_34(0,0) && reg_57(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_22(0,0) && reg_8(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_63(0,0) && reg_13(0,0) && reg_13(0,0) && reg_37(0,0) && reg_23(0,0) && reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2106;
}
if(reg_58(0,0) && reg_22(0,0) && reg_24(0,0) && reg_8(0,0) && reg_6(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_6(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_13(0,0) && reg_37(0,0) && reg_20(0,0) && reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2107;
}
if(reg_58(0,0) && reg_39(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_31(0,0) && reg_24(0,0) && reg_5(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2108;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_51(0,0) && reg_24(0,0) && reg_47(0,0) && reg_43(0,0) && reg_27(0,0) && reg_43(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_14(0,0) && reg_13(0,0) && reg_37(0,0) && reg_20(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2109;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_52(0,0) && reg_13(0,0) && reg_6(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2110;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_40(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_42(0,0) && reg_24(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2111;
}
if(reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_13(0,0) && reg_78(0,0) && reg_38(0,0) && reg_44(0,0) && reg_5(0,0) && reg_30(0,0) && reg_31(0,0) && reg_41(0,0) && reg_83(0,0) && reg_20(0,0) && reg_7(0,0) && reg_37(0,0) && reg_78(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_83(0,0) && reg_22(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2112;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2113;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_0(0,0) && reg_25(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_30(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2114;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2115;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_18(0,0) && reg_37(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_86(0,0) && reg_3(0,0) && reg_40(0,0) && reg_46(0,0) && reg_24(0,0) && reg_10(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0)) {
matched = true;
pattern_id = 2116;
}
if(reg_33(0,0) && reg_9(0,0) && reg_42(0,0) && reg_9(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2117;
}
if(reg_32(0,0) && reg_18(0,0) && reg_7(0,0) && reg_37(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2118;
}
if(reg_8(0,0) && reg_24(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2119;
}
if(reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2120;
}
if(reg_2(0,0) && reg_27(0,0) && reg_0(0,0) && reg_35(0,0) && reg_11(0,0) && reg_43(0,0) && reg_4(0,0) && reg_61(0,0) && reg_60(0,0) && reg_64(0,0) && reg_13(0,0) && reg_51(0,0) && reg_42(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_47(0,0) && reg_18(0,0) && reg_7(0,0) && reg_57(0,0) && reg_52(0,0) && reg_46(0,0) && reg_34(0,0) && reg_22(0,0) && reg_24(0,0) && reg_37(0,0) && reg_12(0,0) && reg_6(0,0) && reg_10(0,0) && reg_20(0,0) && reg_36(0,0) && reg_8(0,0)) {
matched = true;
pattern_id = 2121;
}
if(reg_13(0,0) && reg_51(0,0) && reg_42(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_47(0,0) && reg_18(0,0) && reg_7(0,0) && reg_57(0,0) && reg_52(0,0) && reg_46(0,0) && reg_34(0,0) && reg_22(0,0) && reg_24(0,0) && reg_37(0,0) && reg_12(0,0) && reg_6(0,0) && reg_10(0,0) && reg_20(0,0) && reg_36(0,0) && reg_8(0,0) && reg_15(0,0) && reg_13(0,0) && reg_51(0,0) && reg_42(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_47(0,0) && reg_18(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 2122;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_47(0,0) && reg_20(0,0) && reg_7(0,0) && reg_48(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2123;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_12(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_10(0,0) && reg_42(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2124;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_23(0,0) && reg_36(0,0) && reg_22(0,0) && reg_22(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_9(0,0) && reg_8(0,0) && reg_7(0,0) && reg_46(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2125;
}
if(reg_74(0,0) && reg_45(0,0) && reg_21(0,0) && reg_26(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_91(0,0) && reg_8(0,0) && reg_22(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2126;
}
if(reg_58(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0) && reg_58(0,0) && reg_32(0,0) && reg_20(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2127;
}
if(reg_83(0,0) && reg_51(0,0) && reg_24(0,0) && reg_46(0,0) && reg_13(0,0) && reg_36(0,0) && reg_10(0,0) && reg_13(0,0) && reg_48(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 2128;
}
if(reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_1(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2129;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2130;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_42(0,0) && reg_13(0,0) && reg_6(0,0) && reg_6(0,0) && reg_36(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_47(0,0) && reg_24(0,0) && reg_20(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2131;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_49(0,0) && reg_27(0,0) && reg_64(0,0) && reg_4(0,0) && reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2132;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0) && reg_42(0,0) && reg_20(0,0) && reg_6(0,0) && reg_24(0,0) && reg_22(0,0) && reg_46(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_20(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2133;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_48(0,0) && reg_23(0,0) && reg_36(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_10(0,0) && reg_9(0,0) && reg_46(0,0) && reg_23(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2134;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_23(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_60(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_18(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2135;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_47(0,0) && reg_16(0,0) && reg_43(0,0) && reg_4(0,0) && reg_35(0,0) && reg_64(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_20(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2136;
}
if(reg_1(0,0) && reg_27(0,0) && reg_27(0,0) && reg_1(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_37(0,0) && reg_42(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_27(0,0) && reg_7(0,0) && reg_20(0,0) && reg_4(0,0) && reg_0(0,0) && reg_35(0,0) && reg_60(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_14(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2137;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_47(0,0) && reg_24(0,0) && reg_4(0,0) && reg_4(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2138;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_34(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2139;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_22(0,0) && reg_13(0,0) && reg_8(0,0) && reg_27(0,0) && reg_2(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_13(0,0) && reg_20(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2140;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_22(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_10(0,0) && reg_18(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_22(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2141;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_24(0,0) && reg_42(0,0) && reg_24(0,0) && reg_77(0,0) && reg_0(0,0) && reg_35(0,0) && reg_27(0,0) && reg_77(0,0) && reg_34(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_16(0,0) && reg_22(0,0) && reg_10(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2142;
}
if(reg_1(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_13(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_13(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2143;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_37(0,0) && reg_46(0,0) && reg_11(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2144;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_10(0,0) && reg_24(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_6(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2145;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_6(0,0) && reg_7(0,0) && reg_42(0,0) && reg_36(0,0) && reg_10(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_13(0,0) && reg_20(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_42(0,0) && reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2146;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2147;
}
if(reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_10(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2148;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_10(0,0) && reg_15(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2149;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_20(0,0) && reg_13(0,0) && reg_52(0,0) && reg_13(0,0) && reg_34(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_37(0,0) && reg_24(0,0) && reg_48(0,0) && reg_14(0,0) && reg_24(0,0) && reg_22(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2150;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_20(0,0) && reg_36(0,0) && reg_22(0,0) && reg_47(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_18(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2151;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_12(0,0) && reg_12(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2152;
}
if(reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_22(0,0) && reg_13(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_10(0,0) && reg_9(0,0) && reg_46(0,0) && reg_23(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2153;
}
if(reg_19(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_37(0,0) && reg_1(0,0) && reg_35(0,0) && reg_5(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2154;
}
if(reg_58(0,0) && reg_13(0,0) && reg_47(0,0) && reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 2155;
}
if(reg_58(0,0) && reg_46(0,0) && reg_58(0,0) && reg_13(0,0) && reg_23(0,0) && reg_73(0,0) && reg_46(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_16(0,0) && reg_37(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 2156;
}
if(reg_58(0,0) && reg_34(0,0) && reg_58(0,0) && reg_23(0,0) && reg_73(0,0) && reg_46(0,0) && reg_73(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_16(0,0) && reg_37(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 2157;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2158;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_58(0,0) && reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_24(0,0)) {
matched = true;
pattern_id = 2159;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_31(0,0) && reg_7(0,0) && reg_16(0,0) && reg_5(0,0) && reg_46(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2160;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_63(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2161;
}
if(reg_58(0,0) && reg_29(0,0) && reg_26(0,0) && reg_30(0,0) && reg_44(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 2162;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_18(0,0) && reg_13(0,0) && reg_20(0,0) && reg_20(0,0) && reg_24(0,0) && reg_36(0,0) && reg_34(0,0) && reg_13(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2163;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_10(0,0) && reg_7(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_34(0,0) && reg_49(0,0) && reg_8(0,0) && reg_22(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2164;
}
if(reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_23(0,0) && reg_36(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_73(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_36(0,0) && reg_37(0,0) && reg_17(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2165;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_58(0,0) && reg_10(0,0) && reg_15(0,0) && reg_23(0,0) && reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_44(0,0) && reg_6(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_42(0,0) && reg_20(0,0) && reg_33(0,0) && reg_9(0,0) && reg_10(0,0) && reg_36(0,0) && reg_46(0,0) && reg_20(0,0) && reg_17(0,0) && reg_57(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2166;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_63(0,0) && reg_37(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2167;
}
if(reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_16(0,0) && reg_77(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_77(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_77(0,0) && reg_36(0,0) && reg_6(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_45(0,0) && reg_28(0,0) && reg_4(0,0) && reg_11(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_6(0,0) && reg_8(0,0) && reg_86(0,0) && reg_0(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_3(0,0) && reg_19(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_24(0,0) && reg_58(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_39(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_24(0,0) && reg_16(0,0) && reg_58(0,0) && reg_0(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2168;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_2(0,0) && reg_14(0,0) && reg_14(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2169;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0) && reg_6(0,0) && reg_9(0,0) && reg_52(0,0) && reg_36(0,0) && reg_6(0,0) && reg_7(0,0) && reg_47(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2170;
}
if(reg_23(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0) && reg_51(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2171;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0) && reg_27(0,0) && reg_4(0,0)) {
matched = true;
pattern_id = 2172;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2173;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_38(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_3(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2174;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0) && reg_27(0,0) && reg_4(0,0) && reg_4(0,0)) {
matched = true;
pattern_id = 2175;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_46(0,0) && reg_58(0,0) && reg_9(0,0) && reg_46(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2176;
}
if(reg_58(0,0) && reg_7(0,0) && reg_9(0,0) && reg_77(0,0) && reg_9(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0) && reg_17(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0) && reg_63(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0) && reg_36(0,0) && reg_20(0,0) && reg_7(0,0) && reg_46(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 2177;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_10(0,0) && reg_34(0,0) && reg_10(0,0) && reg_47(0,0) && reg_6(0,0) && reg_13(0,0) && reg_51(0,0) && reg_51(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_36(0,0) && reg_6(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_37(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2178;
}
if(reg_58(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_7(0,0) && reg_48(0,0) && reg_58(0,0) && reg_10(0,0) && reg_34(0,0) && reg_10(0,0) && reg_58(0,0) && reg_10(0,0) && reg_49(0,0) && reg_22(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2179;
}
if(reg_58(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_6(0,0) && reg_24(0,0) && reg_7(0,0) && reg_48(0,0) && reg_58(0,0) && reg_10(0,0) && reg_34(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2180;
}
if(reg_1(0,0) && reg_0(0,0) && reg_4(0,0) && reg_1(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_78(0,0) && reg_32(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_40(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 2181;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_58(0,0) && reg_48(0,0) && reg_51(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_24(0,0) && reg_42(0,0) && reg_20(0,0) && reg_9(0,0) && reg_20(0,0) && reg_77(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2182;
}
if(reg_58(0,0) && reg_27(0,0) && reg_58(0,0) && reg_4(0,0) && reg_51(0,0) && reg_77(0,0) && reg_43(0,0) && reg_43(0,0) && reg_60(0,0) && reg_4(0,0) && reg_64(0,0) && reg_11(0,0) && reg_61(0,0) && reg_2(0,0) && reg_43(0,0) && reg_27(0,0) && reg_0(0,0) && reg_64(0,0) && reg_51(0,0) && reg_2(0,0) && reg_27(0,0) && reg_42(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2183;
}
if(reg_58(0,0) && reg_20(0,0) && reg_34(0,0) && reg_37(0,0) && reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2184;
}
if(reg_17(0,0) && reg_16(0,0) && reg_37(0,0) && reg_47(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_17(0,0) && reg_51(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_79(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_86(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_21(0,0) && reg_22(0,0) && reg_48(0,0) && reg_49(0,0) && reg_3(0,0) && reg_56(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2185;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_38(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_25(0,0) && reg_33(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_6(0,0) && reg_8(0,0) && reg_86(0,0) && reg_27(0,0) && reg_17(0,0) && reg_64(0,0) && reg_17(0,0) && reg_0(0,0) && reg_51(0,0) && reg_43(0,0) && reg_88(0,0) && reg_3(0,0) && reg_19(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_24(0,0) && reg_58(0,0) && reg_0(0,0) && reg_2(0,0) && reg_2(0,0) && reg_64(0,0) && reg_27(0,0) && reg_0(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_39(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_24(0,0) && reg_16(0,0) && reg_58(0,0) && reg_35(0,0) && reg_17(0,0) && reg_4(0,0) && reg_51(0,0) && reg_43(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2186;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0) && reg_4(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2187;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2188;
}
if(reg_58(0,0) && reg_9(0,0) && reg_18(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2189;
}
if(reg_58(0,0) && reg_0(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2190;
}
if(reg_58(0,0) && reg_47(0,0) && reg_42(0,0) && reg_10(0,0) && reg_63(0,0) && reg_13(0,0) && reg_46(0,0) && reg_37(0,0) && reg_18(0,0) && reg_13(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2191;
}
if(reg_58(0,0) && reg_47(0,0) && reg_48(0,0) && reg_7(0,0) && reg_63(0,0) && reg_13(0,0) && reg_46(0,0) && reg_37(0,0) && reg_18(0,0) && reg_13(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2192;
}
if(reg_46(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 2193;
}
if(reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2194;
}
if(reg_58(0,0) && reg_51(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2195;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_13(0,0) && reg_22(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_11(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_10(0,0) && reg_49(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2196;
}
if(reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_26(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_5(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_32(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_33(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_72(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_33(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_25(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_38(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_39(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_33(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2197;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_27(0,0) && reg_0(0,0) && reg_35(0,0) && reg_11(0,0) && reg_43(0,0) && reg_4(0,0) && reg_61(0,0) && reg_60(0,0) && reg_64(0,0) && reg_17(0,0) && reg_23(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2198;
}
if(reg_34(0,0) && reg_49(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2199;
}
if(reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2200;
}
if(reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2201;
}
if(reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2202;
}
if(reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2203;
}
if(reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_11(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2204;
}
if(reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_11(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2205;
}
if(reg_1(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_7(0,0) && reg_34(0,0) && reg_12(0,0) && reg_12(0,0) && reg_13(0,0) && reg_52(0,0) && reg_36(0,0) && reg_47(0,0) && reg_9(0,0) && reg_42(0,0) && reg_42(0,0) && reg_47(0,0) && reg_15(0,0) && reg_13(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2206;
}
if(reg_1(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_36(0,0) && reg_24(0,0) && reg_47(0,0) && reg_15(0,0) && reg_24(0,0) && reg_7(0,0) && reg_47(0,0) && reg_7(0,0) && reg_36(0,0) && reg_15(0,0) && reg_9(0,0) && reg_49(0,0) && reg_42(0,0) && reg_42(0,0) && reg_10(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2207;
}
if(reg_54(0,0) && reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_42(0,0) && reg_13(0,0) && reg_22(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0) && reg_70(0,0)) {
matched = true;
pattern_id = 2208;
}
if(reg_58(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2209;
}
if(reg_58(0,0) && reg_13(0,0) && reg_8(0,0) && reg_7(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_58(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2210;
}
if(reg_56(0,0) && reg_7(0,0) && reg_22(0,0) && reg_36(0,0) && reg_16(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2211;
}
if(reg_37(0,0) && reg_48(0,0) && reg_23(0,0) && reg_73(0,0) && reg_9(0,0) && reg_23(0,0) && reg_13(0,0) && reg_16(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2212;
}
if(reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_58(0,0) && reg_37(0,0) && reg_48(0,0) && reg_23(0,0) && reg_73(0,0) && reg_9(0,0) && reg_23(0,0) && reg_13(0,0) && reg_16(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2213;
}
if(reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_39(0,0) && reg_36(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_46(0,0) && reg_40(0,0) && reg_9(0,0) && reg_6(0,0) && reg_9(0,0) && reg_34(0,0) && reg_24(0,0) && reg_22(0,0) && reg_49(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2214;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0) && reg_36(0,0) && reg_22(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_13(0,0) && reg_46(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2215;
}
if(reg_1(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2216;
}
if(reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2217;
}
if(reg_1(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2218;
}
if(reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2219;
}
if(reg_1(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2220;
}
if(reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2221;
}
if(reg_1(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2222;
}
if(reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2223;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_0(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_31(0,0) && reg_6(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2224;
}
if(reg_1(0,0) && reg_35(0,0) && reg_41(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_43(0,0) && reg_39(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_51(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2225;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2226;
}
if(reg_1(0,0) && reg_43(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_59(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2227;
}
if(reg_17(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2228;
}
if(reg_17(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2229;
}
if(reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_9(0,0) && reg_47(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2230;
}
if(reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2231;
}
if(reg_17(0,0) && reg_37(0,0) && reg_48(0,0) && reg_23(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2232;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_42(0,0) && reg_13(0,0) && reg_10(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_48(0,0) && reg_7(0,0) && reg_13(0,0) && reg_34(0,0) && reg_24(0,0) && reg_22(0,0) && reg_48(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_18(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2233;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0) && reg_36(0,0) && reg_10(0,0) && reg_46(0,0) && reg_36(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_6(0,0) && reg_49(0,0) && reg_13(0,0) && reg_14(0,0) && reg_13(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2234;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_18(0,0) && reg_9(0,0) && reg_46(0,0) && reg_46(0,0) && reg_24(0,0) && reg_3(0,0) && reg_42(0,0) && reg_6(0,0) && reg_13(0,0) && reg_14(0,0) && reg_49(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2235;
}
if(reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_13(0,0) && reg_78(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_83(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_7(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2236;
}
if(reg_88(0,0) && reg_83(0,0) && reg_48(0,0) && reg_20(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2237;
}
if(reg_1(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_64(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2238;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_48(0,0) && reg_58(0,0) && reg_47(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_27(0,0) && reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 2239;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_24(0,0) && reg_42(0,0) && reg_20(0,0) && reg_9(0,0) && reg_20(0,0) && reg_77(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2240;
}
if(reg_44(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2241;
}
if(reg_23(0,0) && reg_36(0,0) && reg_22(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_3(0,0) && reg_39(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_44(0,0) && reg_6(0,0) && reg_24(0,0) && reg_16(0,0) && reg_49(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_38(0,0) && reg_33(0,0) && reg_56(0,0) && reg_87(0,0) && reg_36(0,0) && reg_6(0,0) && reg_46(0,0) && reg_79(0,0) && reg_3(0,0) && reg_18(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 2242;
}
if(reg_17(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_86(0,0) && reg_3(0,0) && reg_47(0,0) && reg_14(0,0) && reg_7(0,0) && reg_37(0,0) && reg_79(0,0) && reg_3(0,0) && reg_48(0,0) && reg_9(0,0) && reg_23(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2243;
}
if(reg_58(0,0) && reg_2(0,0) && reg_17(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2244;
}
if(reg_58(0,0) && reg_37(0,0) && reg_36(0,0) && reg_51(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_28(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_64(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2245;
}
if(reg_58(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_52(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_34(0,0) && reg_13(0,0) && reg_42(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2246;
}
if(reg_58(0,0) && reg_10(0,0) && reg_6(0,0) && reg_8(0,0) && reg_0(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_78(0,0) && reg_27(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2247;
}
if(reg_31(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_10(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_86(0,0) && reg_3(0,0) && reg_40(0,0) && reg_18(0,0) && reg_36(0,0) && reg_22(0,0) && reg_52(0,0) && reg_9(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 2248;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_34(0,0) && reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2249;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2250;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_34(0,0) && reg_13(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2251;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0) && reg_78(0,0) && reg_16(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0) && reg_83(0,0) && reg_36(0,0) && reg_6(0,0) && reg_46(0,0) && reg_1(0,0) && reg_35(0,0) && reg_5(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_5(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_35(0,0) && reg_5(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2252;
}
if(reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2253;
}
if(reg_17(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_55(0,0) && reg_79(0,0) && reg_3(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2254;
}
if(reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_63(0,0) && reg_2(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 2255;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2256;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_48(0,0) && reg_7(0,0) && reg_10(0,0) && reg_52(0,0) && reg_43(0,0) && reg_61(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2257;
}
if(reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_63(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2258;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_51(0,0) && reg_36(0,0) && reg_7(0,0) && reg_46(0,0) && reg_48(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2259;
}
if(reg_58(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2260;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_22(0,0) && reg_13(0,0) && reg_22(0,0) && reg_24(0,0) && reg_10(0,0) && reg_9(0,0) && reg_52(0,0) && reg_46(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2261;
}
if(reg_50(0,0) && reg_30(0,0) && reg_21(0,0) && reg_56(0,0) && reg_3(0,0) && reg_39(0,0) && reg_33(0,0) && reg_45(0,0) && reg_50(0,0) && reg_86(0,0) && reg_3(0,0) && reg_66(0,0) && reg_33(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_46(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_59(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2262;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_9(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_78(0,0) && reg_46(0,0) && reg_7(0,0) && reg_51(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_75(0,0) && reg_50(0,0) && reg_44(0,0) && reg_44(0,0)) {
matched = true;
pattern_id = 2263;
}
if(reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2264;
}
if(reg_10(0,0) && reg_34(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2265;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_10(0,0) && reg_37(0,0) && reg_18(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_6(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2266;
}
if(reg_29(0,0) && reg_41(0,0) && reg_56(0,0) && reg_56(0,0) && reg_45(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2267;
}
if(reg_33(0,0) && reg_41(0,0) && reg_30(0,0) && reg_5(0,0) && reg_5(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2268;
}
if(reg_33(0,0) && reg_41(0,0) && reg_30(0,0) && reg_5(0,0) && reg_80(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2269;
}
if(reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_23(0,0) && reg_20(0,0) && reg_15(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2270;
}
if(reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_51(0,0) && reg_37(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2271;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_18(0,0) && reg_10(0,0) && reg_46(0,0) && reg_18(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_10(0,0) && reg_49(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2272;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_64(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_31(0,0) && reg_6(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_86(0,0) && reg_3(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_16(0,0) && reg_77(0,0) && reg_15(0,0) && reg_15(0,0) && reg_15(0,0) && reg_77(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_77(0,0) && reg_36(0,0) && reg_6(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2273;
}
if(reg_58(0,0) && reg_48(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2274;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2275;
}
if(reg_58(0,0) && reg_51(0,0) && reg_24(0,0) && reg_49(0,0) && reg_48(0,0) && reg_22(0,0) && reg_58(0,0) && reg_51(0,0) && reg_24(0,0) && reg_49(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2276;
}
if(reg_83(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2277;
}
if(reg_58(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2278;
}
if(reg_58(0,0) && reg_20(0,0) && reg_34(0,0) && reg_37(0,0) && reg_10(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2279;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_63(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2280;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0) && reg_74(0,0) && reg_39(0,0) && reg_21(0,0) && reg_39(0,0)) {
matched = true;
pattern_id = 2281;
}
if(reg_48(0,0) && reg_13(0,0) && reg_48(0,0) && reg_24(0,0) && reg_10(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2282;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2283;
}
if(reg_58(0,0) && reg_20(0,0) && reg_24(0,0) && reg_52(0,0) && reg_9(0,0) && reg_22(0,0) && reg_58(0,0) && reg_20(0,0) && reg_24(0,0) && reg_52(0,0) && reg_9(0,0) && reg_22(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2284;
}
if(reg_1(0,0) && reg_27(0,0) && reg_27(0,0) && reg_1(0,0) && reg_9(0,0) && reg_48(0,0) && reg_36(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_7(0,0) && reg_20(0,0) && reg_24(0,0) && reg_37(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_6(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_34(0,0) && reg_24(0,0) && reg_24(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2285;
}
if(reg_44(0,0) && reg_30(0,0) && reg_32(0,0) && reg_32(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2286;
}
if(reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2287;
}
if(reg_58(0,0) && reg_20(0,0) && reg_6(0,0) && reg_48(0,0) && reg_37(0,0) && reg_6(0,0) && reg_58(0,0) && reg_20(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2288;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_10(0,0) && reg_13(0,0) && reg_46(0,0) && reg_20(0,0) && reg_10(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2289;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_10(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_51(0,0) && reg_46(0,0) && reg_24(0,0) && reg_24(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2290;
}
if(reg_76(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_10(0,0) && reg_76(0,0)) {
matched = true;
pattern_id = 2291;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_34(0,0) && reg_9(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2292;
}
if(reg_58(0,0) && reg_22(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_23(0,0) && reg_49(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2293;
}
if(reg_90(0,0) && reg_87(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_3(0,0) && reg_21(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_88(0,0) && reg_17(0,0) && reg_10(0,0) && reg_6(0,0) && reg_42(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2294;
}
if(reg_1(0,0) && reg_5(0,0) && reg_43(0,0) && reg_3(0,0) && reg_25(0,0) && reg_27(0,0) && reg_3(0,0) && reg_39(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_43(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2295;
}
if(reg_1(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_39(0,0) && reg_61(0,0) && reg_3(0,0) && reg_64(0,0) && reg_11(0,0) && reg_3(0,0) && reg_61(0,0) && reg_43(0,0) && reg_3(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_61(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_41(0,0) && reg_3(0,0) && reg_27(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2296;
}
if(reg_1(0,0) && reg_5(0,0) && reg_40(0,0) && reg_3(0,0) && reg_40(0,0) && reg_61(0,0) && reg_3(0,0) && reg_43(0,0) && reg_41(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_30(0,0) && reg_2(0,0) && reg_3(0,0) && reg_5(0,0) && reg_25(0,0) && reg_3(0,0) && reg_5(0,0) && reg_0(0,0) && reg_3(0,0) && reg_43(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2297;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_47(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_46(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2298;
}
if(reg_76(0,0) && reg_35(0,0) && reg_5(0,0) && reg_76(0,0) && reg_0(0,0) && reg_60(0,0) && reg_76(0,0) && reg_0(0,0) && reg_64(0,0) && reg_67(0,0) && reg_76(0,0) && reg_61(0,0) && reg_25(0,0)) {
matched = true;
pattern_id = 2299;
}
if(reg_87(0,0) && reg_88(0,0) && reg_3(0,0) && reg_90(0,0)) {
matched = true;
pattern_id = 2300;
}
if(reg_58(0,0) && reg_2(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 2301;
}
if(reg_1(0,0) && reg_0(0,0) && reg_27(0,0) && reg_3(0,0) && reg_0(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_32(0,0) && reg_40(0,0) && reg_30(0,0) && reg_26(0,0) && reg_26(0,0) && reg_41(0,0) && reg_33(0,0) && reg_3(0,0) && reg_45(0,0) && reg_26(0,0)) {
matched = true;
pattern_id = 2302;
}
if(reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_51(0,0) && reg_36(0,0) && reg_10(0,0) && reg_49(0,0) && reg_51(0,0) && reg_24(0,0) && reg_16(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_9(0,0) && reg_42(0,0) && reg_18(0,0) && reg_24(0,0) && reg_3(0,0) && reg_77(0,0) && reg_9(0,0) && reg_3(0,0) && reg_1(0,0) && reg_0(0,0) && reg_61(0,0) && reg_3(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_27(0,0) && reg_11(0,0) && reg_61(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_27(0,0) && reg_11(0,0) && reg_27(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_27(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_27(0,0) && reg_11(0,0) && reg_4(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_27(0,0) && reg_11(0,0) && reg_61(0,0) && reg_1(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_27(0,0) && reg_4(0,0) && reg_11(0,0) && reg_1(0,0) && reg_0(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2303;
}
if(reg_25(0,0) && reg_38(0,0) && reg_21(0,0) && reg_56(0,0) && reg_5(0,0) && reg_3(0,0) && reg_75(0,0) && reg_60(0,0) && reg_4(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2304;
}
if(reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2305;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2306;
}
if(reg_58(0,0) && reg_51(0,0) && reg_58(0,0) && reg_37(0,0) && reg_52(0,0) && reg_47(0,0) && reg_58(0,0) && reg_31(0,0) && reg_0(0,0) && reg_2(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 2307;
}
if(reg_58(0,0) && reg_16(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2308;
}
if(reg_44(0,0) && reg_30(0,0) && reg_32(0,0) && reg_32(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2309;
}
if(reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2310;
}
if(reg_58(0,0) && reg_51(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2311;
}
if(reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_73(0,0) && reg_13(0,0) && reg_6(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_46(0,0) && reg_9(0,0) && reg_10(0,0) && reg_77(0,0) && reg_13(0,0) && reg_36(0,0) && reg_20(0,0) && reg_18(0,0) && reg_77(0,0)) {
matched = true;
pattern_id = 2312;
}
if(reg_58(0,0) && reg_51(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2313;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_13(0,0) && reg_8(0,0) && reg_11(0,0) && reg_1(0,0) && reg_2(0,0) && reg_40(0,0) && reg_1(0,0) && reg_34(0,0) && reg_7(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_10(0,0) && reg_24(0,0) && reg_23(0,0) && reg_20(0,0) && reg_10(0,0) && reg_37(0,0) && reg_35(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2314;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_57(0,0) && reg_13(0,0) && reg_8(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_10(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2315;
}
if(reg_29(0,0) && reg_29(0,0) && reg_72(0,0) && reg_27(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2316;
}
if(reg_1(0,0) && reg_60(0,0) && reg_43(0,0) && reg_3(0,0) && reg_27(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2317;
}
if(reg_1(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2318;
}
if(reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_45(0,0) && reg_32(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2319;
}
if(reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_77(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_44(0,0) && reg_56(0,0) && reg_38(0,0) && reg_19(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2320;
}
if(reg_58(0,0) && reg_51(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_77(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_51(0,0) && reg_13(0,0) && reg_57(0,0) && reg_24(0,0) && reg_10(0,0) && reg_58(0,0) && reg_22(0,0) && reg_4(0,0) && reg_43(0,0) && reg_48(0,0) && reg_57(0,0) && reg_27(0,0) && reg_61(0,0) && reg_7(0,0) && reg_27(0,0) && reg_60(0,0) && reg_35(0,0) && reg_4(0,0)) {
matched = true;
pattern_id = 2321;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2322;
}
if(reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_7(0,0) && reg_6(0,0) && reg_42(0,0) && reg_1(0,0) && reg_0(0,0) && reg_5(0,0) && reg_1(0,0) && reg_10(0,0) && reg_7(0,0) && reg_22(0,0) && reg_52(0,0) && reg_18(0,0) && reg_24(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_0(0,0) && reg_41(0,0) && reg_1(0,0) && reg_42(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_1(0,0) && reg_0(0,0) && reg_41(0,0) && reg_1(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2323;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_47(0,0) && reg_24(0,0) && reg_24(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_34(0,0) && reg_49(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2324;
}
if(reg_3(0,0) && reg_87(0,0) && reg_88(0,0) && reg_3(0,0) && reg_90(0,0)) {
matched = true;
pattern_id = 2325;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2326;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_1(0,0) && reg_20(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_6(0,0) && reg_24(0,0) && reg_22(0,0) && reg_7(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_10(0,0) && reg_24(0,0) && reg_16(0,0) && reg_16(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_36(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2327;
}
if(reg_58(0,0) && reg_42(0,0) && reg_51(0,0) && reg_6(0,0) && reg_6(0,0) && reg_49(0,0) && reg_58(0,0) && reg_42(0,0) && reg_51(0,0) && reg_6(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2328;
}
if(reg_37(0,0) && reg_46(0,0) && reg_36(0,0) && reg_47(0,0) && reg_78(0,0) && reg_26(0,0) && reg_30(0,0) && reg_45(0,0)) {
matched = true;
pattern_id = 2329;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_61(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2330;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_50(0,0) && reg_30(0,0) && reg_33(0,0) && reg_41(0,0) && reg_80(0,0) && reg_45(0,0) && reg_56(0,0) && reg_41(0,0) && reg_83(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_13(0,0) && reg_20(0,0) && reg_78(0,0) && reg_37(0,0) && reg_20(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2331;
}
if(reg_58(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_23(0,0) && reg_7(0,0) && reg_42(0,0) && reg_13(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2332;
}
if(reg_21(0,0) && reg_26(0,0) && reg_31(0,0) && reg_41(0,0) && reg_33(0,0) && reg_26(0,0) && reg_30(0,0) && reg_40(0,0) && reg_21(0,0) && reg_45(0,0) && reg_26(0,0) && reg_30(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 2333;
}
if(reg_25(0,0) && reg_33(0,0) && reg_30(0,0) && reg_32(0,0) && reg_21(0,0) && reg_56(0,0)) {
matched = true;
pattern_id = 2334;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_33(0,0) && reg_38(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2335;
}
if(reg_73(0,0) && reg_37(0,0) && reg_48(0,0) && reg_23(0,0) && reg_17(0,0) && reg_9(0,0) && reg_16(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2336;
}
if(reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_34(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_47(0,0) && reg_2(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2337;
}
if(reg_1(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0) && reg_22(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_9(0,0) && reg_16(0,0) && reg_18(0,0) && reg_7(0,0) && reg_51(0,0) && reg_7(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0) && reg_23(0,0) && reg_27(0,0) && reg_11(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 2338;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_12(0,0) && reg_2(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_37(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2339;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_12(0,0) && reg_24(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_18(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 2340;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_63(0,0) && reg_51(0,0) && reg_20(0,0) && reg_22(0,0) && reg_19(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2341;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_6(0,0) && reg_9(0,0) && reg_46(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2342;
}
if(reg_87(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2343;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2344;
}
if(reg_58(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2345;
}
if(reg_58(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_48(0,0) && reg_73(0,0) && reg_7(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2346;
}
if(reg_5(0,0) && reg_41(0,0) && reg_75(0,0) && reg_31(0,0) && reg_60(0,0) && reg_61(0,0)) {
matched = true;
pattern_id = 2347;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_64(0,0) && reg_17(0,0) && reg_43(0,0) && reg_35(0,0) && reg_17(0,0) && reg_27(0,0) && reg_27(0,0) && reg_35(0,0) && reg_17(0,0) && reg_0(0,0) && reg_0(0,0) && reg_35(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2348;
}
if(reg_17(0,0) && reg_13(0,0) && reg_51(0,0) && reg_10(0,0) && reg_24(0,0) && reg_46(0,0) && reg_36(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2349;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_51(0,0) && reg_18(0,0) && reg_17(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2350;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_9(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_17(0,0) && reg_14(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2351;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_17(0,0) && reg_36(0,0) && reg_10(0,0) && reg_17(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2352;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_0(0,0) && reg_17(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2353;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_4(0,0) && reg_11(0,0) && reg_17(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2354;
}
if(reg_58(0,0) && reg_27(0,0) && reg_27(0,0) && reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2355;
}
if(reg_58(0,0) && reg_27(0,0) && reg_27(0,0) && reg_58(0,0) && reg_23(0,0) && reg_9(0,0) && reg_9(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2356;
}
if(reg_1(0,0) && reg_4(0,0) && reg_2(0,0) && reg_3(0,0) && reg_5(0,0) && reg_25(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2357;
}
if(reg_1(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2358;
}
if(reg_1(0,0) && reg_60(0,0) && reg_30(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_0(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2359;
}
if(reg_1(0,0) && reg_4(0,0) && reg_43(0,0) && reg_3(0,0) && reg_5(0,0) && reg_25(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2360;
}
if(reg_1(0,0) && reg_61(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2361;
}
if(reg_32(0,0) && reg_46(0,0) && reg_9(0,0) && reg_9(0,0) && reg_37(0,0) && reg_49(0,0) && reg_53(0,0) && reg_71(0,0) && reg_91(0,0) && reg_12(0,0) && reg_13(0,0) && reg_14(0,0) && reg_27(0,0) && reg_35(0,0) && reg_11(0,0) && reg_2(0,0) && reg_0(0,0) && reg_10(0,0) && reg_42(0,0) && reg_8(0,0) && reg_10(0,0) && reg_48(0,0) && reg_9(0,0) && reg_60(0,0) && reg_64(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2362;
}
if(reg_1(0,0) && reg_40(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_3(0,0) && reg_5(0,0) && reg_64(0,0) && reg_3(0,0) && reg_64(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_40(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_35(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_39(0,0) && reg_64(0,0) && reg_3(0,0) && reg_11(0,0) && reg_2(0,0) && reg_3(0,0) && reg_25(0,0) && reg_30(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_64(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_64(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2363;
}
if(reg_1(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_4(0,0) && reg_11(0,0) && reg_3(0,0) && reg_25(0,0) && reg_30(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_43(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2364;
}
if(reg_1(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_61(0,0) && reg_11(0,0) && reg_3(0,0) && reg_25(0,0) && reg_30(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_25(0,0) && reg_64(0,0) && reg_3(0,0) && reg_61(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2365;
}
if(reg_1(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_3(0,0) && reg_11(0,0) && reg_5(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_11(0,0) && reg_39(0,0) && reg_3(0,0) && reg_43(0,0) && reg_2(0,0) && reg_3(0,0) && reg_43(0,0) && reg_27(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_35(0,0) && reg_39(0,0) && reg_3(0,0) && reg_0(0,0) && reg_5(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_3(0,0) && reg_35(0,0) && reg_39(0,0) && reg_3(0,0) && reg_43(0,0) && reg_2(0,0) && reg_3(0,0) && reg_43(0,0) && reg_11(0,0) && reg_3(0,0) && reg_35(0,0) && reg_41(0,0) && reg_3(0,0) && reg_35(0,0) && reg_41(0,0) && reg_3(0,0) && reg_35(0,0) && reg_41(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2366;
}
if(reg_1(0,0) && reg_5(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_0(0,0) && reg_3(0,0) && reg_5(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_41(0,0) && reg_3(0,0) && reg_40(0,0) && reg_39(0,0) && reg_3(0,0) && reg_5(0,0) && reg_0(0,0) && reg_3(0,0) && reg_40(0,0) && reg_11(0,0) && reg_3(0,0) && reg_30(0,0) && reg_27(0,0) && reg_3(0,0) && reg_25(0,0) && reg_35(0,0) && reg_3(0,0) && reg_25(0,0) && reg_27(0,0) && reg_3(0,0) && reg_25(0,0) && reg_27(0,0) && reg_3(0,0) && reg_30(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_41(0,0) && reg_3(0,0) && reg_40(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_2(0,0) && reg_3(0,0) && reg_30(0,0) && reg_2(0,0) && reg_3(0,0) && reg_30(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2367;
}
if(reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_27(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_61(0,0) && reg_60(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2368;
}
if(reg_1(0,0) && reg_11(0,0) && reg_39(0,0) && reg_3(0,0) && reg_43(0,0) && reg_2(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_35(0,0) && reg_39(0,0) && reg_3(0,0) && reg_43(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_11(0,0) && reg_39(0,0) && reg_3(0,0) && reg_35(0,0) && reg_39(0,0) && reg_3(0,0) && reg_11(0,0) && reg_5(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_11(0,0) && reg_41(0,0) && reg_3(0,0) && reg_11(0,0) && reg_30(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2369;
}
if(reg_1(0,0) && reg_27(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_61(0,0) && reg_43(0,0) && reg_3(0,0) && reg_61(0,0) && reg_61(0,0) && reg_3(0,0) && reg_61(0,0) && reg_61(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_4(0,0) && reg_4(0,0) && reg_3(0,0) && reg_4(0,0) && reg_4(0,0) && reg_3(0,0) && reg_4(0,0) && reg_4(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2370;
}
if(reg_1(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_35(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_35(0,0) && reg_43(0,0) && reg_3(0,0) && reg_0(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2371;
}
if(reg_1(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_43(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_4(0,0) && reg_3(0,0) && reg_35(0,0) && reg_43(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_0(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_35(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_0(0,0) && reg_64(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_35(0,0) && reg_43(0,0) && reg_3(0,0) && reg_35(0,0) && reg_35(0,0) && reg_3(0,0) && reg_35(0,0) && reg_11(0,0) && reg_3(0,0) && reg_4(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2372;
}
if(reg_1(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_43(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_11(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2373;
}
if(reg_1(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_0(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_39(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_41(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2374;
}
if(reg_1(0,0) && reg_5(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_41(0,0) && reg_3(0,0) && reg_5(0,0) && reg_0(0,0) && reg_3(0,0) && reg_5(0,0) && reg_43(0,0) && reg_3(0,0) && reg_30(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_64(0,0) && reg_3(0,0) && reg_5(0,0) && reg_43(0,0) && reg_3(0,0) && reg_5(0,0) && reg_43(0,0) && reg_3(0,0) && reg_5(0,0) && reg_27(0,0) && reg_3(0,0) && reg_30(0,0) && reg_27(0,0) && reg_3(0,0) && reg_5(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_2(0,0) && reg_3(0,0) && reg_5(0,0) && reg_11(0,0) && reg_3(0,0) && reg_40(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_0(0,0) && reg_3(0,0) && reg_5(0,0) && reg_43(0,0) && reg_3(0,0) && reg_25(0,0) && reg_41(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2375;
}
if(reg_1(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_3(0,0) && reg_27(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_61(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2376;
}
if(reg_1(0,0) && reg_2(0,0) && reg_40(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_3(0,0) && reg_27(0,0) && reg_39(0,0) && reg_3(0,0) && reg_11(0,0) && reg_39(0,0) && reg_3(0,0) && reg_43(0,0) && reg_2(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_35(0,0) && reg_39(0,0) && reg_3(0,0) && reg_43(0,0) && reg_61(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_11(0,0) && reg_39(0,0) && reg_3(0,0) && reg_35(0,0) && reg_39(0,0) && reg_3(0,0) && reg_11(0,0) && reg_5(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_11(0,0) && reg_41(0,0) && reg_3(0,0) && reg_11(0,0) && reg_30(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2377;
}
if(reg_1(0,0) && reg_60(0,0) && reg_30(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_41(0,0) && reg_30(0,0) && reg_3(0,0) && reg_4(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_25(0,0) && reg_11(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2378;
}
if(reg_1(0,0) && reg_60(0,0) && reg_30(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_11(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_61(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2379;
}
if(reg_1(0,0) && reg_60(0,0) && reg_30(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_0(0,0) && reg_3(0,0) && reg_61(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2380;
}
if(reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 2381;
}
if(reg_1(0,0) && reg_60(0,0) && reg_0(0,0) && reg_3(0,0) && reg_39(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_41(0,0) && reg_3(0,0) && reg_5(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_40(0,0) && reg_30(0,0) && reg_3(0,0) && reg_39(0,0) && reg_43(0,0) && reg_3(0,0) && reg_40(0,0) && reg_60(0,0) && reg_3(0,0) && reg_40(0,0) && reg_60(0,0) && reg_3(0,0) && reg_5(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_39(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_41(0,0) && reg_3(0,0) && reg_5(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_40(0,0) && reg_30(0,0) && reg_3(0,0) && reg_64(0,0) && reg_11(0,0) && reg_3(0,0) && reg_64(0,0) && reg_43(0,0) && reg_3(0,0) && reg_39(0,0) && reg_25(0,0) && reg_3(0,0) && reg_5(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_11(0,0) && reg_3(0,0) && reg_40(0,0) && reg_39(0,0) && reg_3(0,0) && reg_40(0,0) && reg_60(0,0) && reg_3(0,0) && reg_5(0,0) && reg_11(0,0) && reg_3(0,0) && reg_5(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_5(0,0) && reg_39(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_61(0,0) && reg_3(0,0) && reg_60(0,0) && reg_30(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_3(0,0) && reg_60(0,0) && reg_61(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2382;
}
if(reg_66(0,0) && reg_63(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2383;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_38(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_40(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_36(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_24(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_22(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_66(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2384;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_13(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2385;
}
if(reg_79(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_25(0,0) && reg_9(0,0) && reg_18(0,0) && reg_13(0,0) && reg_8(0,0) && reg_7(0,0) && reg_24(0,0) && reg_6(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_86(0,0) && reg_90(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_18(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_45(0,0) && reg_22(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2386;
}
if(reg_29(0,0) && reg_13(0,0) && reg_15(0,0) && reg_52(0,0) && reg_41(0,0) && reg_49(0,0) && reg_9(0,0) && reg_3(0,0) && reg_62(0,0) && reg_9(0,0) && reg_49(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2387;
}
if(reg_32(0,0) && reg_36(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_78(0,0) && reg_63(0,0) && reg_36(0,0) && reg_20(0,0) && reg_23(0,0) && reg_77(0,0) && reg_60(0,0) && reg_63(0,0) && reg_25(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2388;
}
if(reg_78(0,0) && reg_2(0,0) && reg_5(0,0) && reg_78(0,0) && reg_2(0,0) && reg_30(0,0) && reg_40(0,0) && reg_46(0,0) && reg_7(0,0) && reg_37(0,0) && reg_51(0,0) && reg_24(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 2389;
}
if(reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2390;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_35(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_45(0,0) && reg_28(0,0) && reg_4(0,0) && reg_11(0,0) && reg_88(0,0) && reg_3(0,0) && reg_30(0,0) && reg_37(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_62(0,0) && reg_7(0,0) && reg_20(0,0) && reg_58(0,0) && reg_43(0,0) && reg_35(0,0) && reg_61(0,0) && reg_17(0,0) && reg_35(0,0) && reg_4(0,0) && reg_3(0,0) && reg_87(0,0) && reg_62(0,0) && reg_29(0,0) && reg_31(0,0) && reg_50(0,0) && reg_56(0,0) && reg_79(0,0) && reg_3(0,0) && reg_46(0,0) && reg_7(0,0) && reg_52(0,0) && reg_9(0,0) && reg_3(0,0) && reg_19(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_24(0,0) && reg_88(0,0) && reg_3(0,0) && reg_40(0,0) && reg_18(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_58(0,0) && reg_35(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_27(0,0) && reg_64(0,0) && reg_27(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_32(0,0) && reg_13(0,0) && reg_23(0,0) && reg_13(0,0) && reg_6(0,0) && reg_7(0,0) && reg_58(0,0) && reg_43(0,0) && reg_35(0,0) && reg_61(0,0) && reg_17(0,0) && reg_35(0,0) && reg_4(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_48(0,0) && reg_49(0,0) && reg_22(0,0) && reg_48(0,0) && reg_22(0,0) && reg_10(0,0) && reg_17(0,0) && reg_24(0,0) && reg_6(0,0) && reg_47(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2391;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_61(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_34(0,0) && reg_7(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_10(0,0) && reg_24(0,0) && reg_23(0,0) && reg_20(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_86(0,0) && reg_3(0,0) && reg_40(0,0) && reg_46(0,0) && reg_24(0,0) && reg_10(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2392;
}
if(reg_58(0,0) && reg_57(0,0) && reg_10(0,0) && reg_58(0,0) && reg_57(0,0) && reg_12(0,0) && reg_36(0,0) && reg_9(0,0) && reg_6(0,0) && reg_49(0,0) && reg_77(0,0)) {
matched = true;
pattern_id = 2393;
}
if(reg_58(0,0) && reg_6(0,0) && reg_27(0,0) && reg_16(0,0) && reg_37(0,0) && reg_6(0,0) && reg_58(0,0) && reg_6(0,0) && reg_27(0,0) && reg_16(0,0) && reg_9(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2394;
}
if(reg_58(0,0) && reg_34(0,0) && reg_35(0,0) && reg_11(0,0) && reg_35(0,0) && reg_23(0,0) && reg_23(0,0) && reg_11(0,0) && reg_36(0,0) && reg_23(0,0) && reg_51(0,0) && reg_22(0,0) && reg_34(0,0) && reg_34(0,0) && reg_11(0,0) && reg_36(0,0) && reg_36(0,0) && reg_11(0,0) && reg_22(0,0) && reg_23(0,0) && reg_35(0,0) && reg_11(0,0) && reg_34(0,0) && reg_11(0,0) && reg_11(0,0) && reg_35(0,0) && reg_23(0,0) && reg_6(0,0) && reg_6(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2395;
}
if(reg_19(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_32(0,0) && reg_72(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_40(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_40(0,0) && reg_56(0,0) && reg_33(0,0) && reg_3(0,0) && reg_0(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_43(0,0) && reg_2(0,0) && reg_61(0,0) && reg_0(0,0) && reg_61(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_40(0,0) && reg_56(0,0) && reg_33(0,0) && reg_3(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_11(0,0) && reg_43(0,0) && reg_2(0,0) && reg_4(0,0) && reg_17(0,0) && reg_0(0,0) && reg_27(0,0) && reg_43(0,0) && reg_0(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_40(0,0) && reg_56(0,0) && reg_33(0,0) && reg_3(0,0) && reg_35(0,0) && reg_17(0,0) && reg_43(0,0) && reg_17(0,0) && reg_35(0,0) && reg_2(0,0) && reg_61(0,0) && reg_0(0,0) && reg_64(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_7(0,0) && reg_37(0,0) && reg_77(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_6(0,0) && reg_17(0,0) && reg_9(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_77(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_24(0,0) && reg_46(0,0) && reg_86(0,0) && reg_3(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_42(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2396;
}
if(reg_17(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0) && reg_63(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2397;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_30(0,0) && reg_56(0,0) && reg_21(0,0) && reg_85(0,0) && reg_41(0,0) && reg_33(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2398;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_6(0,0) && reg_6(0,0) && reg_13(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_43(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2399;
}
if(reg_83(0,0) && reg_37(0,0) && reg_42(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2400;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_5(0,0) && reg_26(0,0) && reg_32(0,0) && reg_3(0,0) && reg_40(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2401;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_26(0,0) && reg_32(0,0) && reg_21(0,0) && reg_32(0,0) && reg_73(0,0) && reg_21(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_42(0,0) && reg_3(0,0) && reg_87(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2402;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_51(0,0) && reg_17(0,0) && reg_16(0,0) && reg_34(0,0) && reg_46(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2403;
}
if(reg_1(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_42(0,0) && reg_52(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_77(0,0) && reg_6(0,0) && reg_9(0,0) && reg_42(0,0) && reg_7(0,0) && reg_37(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_11(0,0) && reg_4(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2404;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_17(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_63(0,0) && reg_7(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2405;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_63(0,0) && reg_7(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2406;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_19(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_46(0,0) && reg_9(0,0) && reg_3(0,0) && reg_45(0,0) && reg_34(0,0) && reg_13(0,0) && reg_18(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2407;
}
if(reg_58(0,0) && reg_51(0,0) && reg_51(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2408;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2409;
}
if(reg_3(0,0) && reg_41(0,0) && reg_50(0,0) && reg_39(0,0)) {
matched = true;
pattern_id = 2410;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_16(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2411;
}
if(reg_58(0,0) && reg_37(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_16(0,0) && reg_63(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2412;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0)) {
matched = true;
pattern_id = 2413;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2414;
}
if(reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_31(0,0) && reg_6(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_32(0,0) && reg_56(0,0) && reg_40(0,0) && reg_40(0,0) && reg_0(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_40(0,0) && reg_56(0,0) && reg_33(0,0) && reg_3(0,0) && reg_0(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_43(0,0) && reg_2(0,0) && reg_61(0,0) && reg_0(0,0) && reg_61(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_40(0,0) && reg_56(0,0) && reg_33(0,0) && reg_3(0,0) && reg_35(0,0) && reg_17(0,0) && reg_43(0,0) && reg_17(0,0) && reg_35(0,0) && reg_2(0,0) && reg_61(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_17(0,0) && reg_26(0,0) && reg_41(0,0) && reg_31(0,0) && reg_3(0,0) && reg_40(0,0) && reg_56(0,0) && reg_33(0,0) && reg_3(0,0) && reg_35(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_35(0,0) && reg_2(0,0) && reg_61(0,0) && reg_0(0,0) && reg_64(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_13(0,0) && reg_3(0,0) && reg_40(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_44(0,0) && reg_40(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 2415;
}
if(reg_62(0,0) && reg_6(0,0) && reg_7(0,0) && reg_10(0,0) && reg_33(0,0)) {
matched = true;
pattern_id = 2416;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_73(0,0) && reg_42(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2417;
}
if(reg_58(0,0) && reg_6(0,0) && reg_9(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2418;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_72(0,0) && reg_7(0,0) && reg_20(0,0) && reg_6(0,0) && reg_36(0,0) && reg_8(0,0) && reg_7(0,0) && reg_13(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 2419;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2420;
}
if(reg_1(0,0) && reg_2(0,0) && reg_25(0,0) && reg_1(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_42(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_8(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_48(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_0(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_10(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2421;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_32(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_44(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2422;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_5(0,0) && reg_41(0,0) && reg_3(0,0) && reg_40(0,0) && reg_43(0,0) && reg_3(0,0) && reg_11(0,0) && reg_43(0,0) && reg_3(0,0) && reg_64(0,0) && reg_64(0,0) && reg_3(0,0) && reg_27(0,0) && reg_11(0,0) && reg_3(0,0) && reg_27(0,0) && reg_41(0,0) && reg_3(0,0) && reg_39(0,0) && reg_43(0,0) && reg_3(0,0) && reg_61(0,0) && reg_41(0,0) && reg_3(0,0) && reg_43(0,0) && reg_4(0,0) && reg_3(0,0) && reg_61(0,0) && reg_60(0,0) && reg_3(0,0) && reg_5(0,0) && reg_39(0,0) && reg_3(0,0) && reg_0(0,0) && reg_35(0,0) && reg_3(0,0) && reg_40(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_30(0,0) && reg_3(0,0) && reg_27(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2423;
}
if(reg_58(0,0) && reg_7(0,0) && reg_37(0,0) && reg_58(0,0) && reg_63(0,0) && reg_42(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_78(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2424;
}
if(reg_58(0,0) && reg_13(0,0) && reg_20(0,0) && reg_74(0,0) && reg_10(0,0) && reg_58(0,0) && reg_8(0,0)) {
matched = true;
pattern_id = 2425;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_20(0,0) && reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_13(0,0) && reg_48(0,0) && reg_10(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2426;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_63(0,0) && reg_7(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2427;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_63(0,0) && reg_7(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2428;
}
if(reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_46(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2429;
}
if(reg_58(0,0) && reg_34(0,0) && reg_7(0,0) && reg_10(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_8(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2430;
}
if(reg_58(0,0) && reg_7(0,0) && reg_48(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2431;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2432;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_48(0,0) && reg_36(0,0) && reg_42(0,0) && reg_20(0,0) && reg_10(0,0) && reg_58(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2433;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2434;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2435;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2436;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2437;
}
if(reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_58(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_73(0,0) && reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_27(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2438;
}
if(reg_58(0,0) && reg_23(0,0) && reg_46(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2439;
}
if(reg_58(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_6(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2440;
}
if(reg_58(0,0) && reg_13(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_73(0,0) && reg_6(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_22(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2441;
}
if(reg_58(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2442;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_61(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_32(0,0) && reg_72(0,0) && reg_27(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2443;
}
if(reg_58(0,0) && reg_13(0,0) && reg_6(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_8(0,0) && reg_24(0,0) && reg_58(0,0) && reg_8(0,0) && reg_6(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2444;
}
if(reg_58(0,0) && reg_13(0,0) && reg_6(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_8(0,0) && reg_24(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_7(0,0) && reg_9(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2445;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_34(0,0) && reg_49(0,0) && reg_34(0,0) && reg_24(0,0) && reg_22(0,0) && reg_9(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_11(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_2(0,0) && reg_13(0,0) && reg_1(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_48(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2446;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_37(0,0) && reg_37(0,0) && reg_16(0,0) && reg_6(0,0) && reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_37(0,0) && reg_7(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2447;
}
if(reg_10(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2448;
}
if(reg_44(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0) && reg_3(0,0) && reg_58(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2449;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_6(0,0) && reg_8(0,0) && reg_86(0,0) && reg_61(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_27(0,0) && reg_88(0,0) && reg_3(0,0) && reg_19(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_24(0,0) && reg_58(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_39(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_24(0,0) && reg_16(0,0) && reg_58(0,0) && reg_61(0,0) && reg_17(0,0) && reg_2(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2450;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2451;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_27(0,0) && reg_27(0,0) && reg_3(0,0) && reg_5(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2452;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_37(0,0) && reg_52(0,0) && reg_16(0,0) && reg_35(0,0) && reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_37(0,0) && reg_7(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2453;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_41(0,0) && reg_50(0,0) && reg_41(0,0) && reg_33(0,0) && reg_80(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2454;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_5(0,0) && reg_35(0,0) && reg_3(0,0) && reg_4(0,0) && reg_0(0,0) && reg_3(0,0) && reg_11(0,0) && reg_61(0,0) && reg_3(0,0) && reg_5(0,0) && reg_30(0,0) && reg_3(0,0) && reg_4(0,0) && reg_0(0,0) && reg_3(0,0) && reg_11(0,0) && reg_30(0,0) && reg_3(0,0) && reg_30(0,0) && reg_27(0,0) && reg_3(0,0) && reg_35(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2455;
}
if(reg_21(0,0) && reg_5(0,0) && reg_73(0,0) && reg_50(0,0) && reg_30(0,0) && reg_68(0,0) && reg_38(0,0) && reg_21(0,0) && reg_26(0,0) && reg_30(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2456;
}
if(reg_58(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_52(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2457;
}
if(reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_24(0,0) && reg_78(0,0) && reg_76(0,0) && reg_2(0,0) && reg_5(0,0) && reg_76(0,0) && reg_2(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 2458;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_32(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_6(0,0) && reg_7(0,0) && reg_77(0,0) && reg_40(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_35(0,0) && reg_0(0,0)) {
matched = true;
pattern_id = 2459;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_58(0,0) && reg_22(0,0) && reg_13(0,0) && reg_42(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_58(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_58(0,0) && reg_27(0,0) && reg_58(0,0) && reg_0(0,0) && reg_58(0,0) && reg_35(0,0) && reg_58(0,0) && reg_51(0,0) && reg_6(0,0) && reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_13(0,0) && reg_48(0,0) && reg_24(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2460;
}
if(reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0) && reg_79(0,0) && reg_3(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_77(0,0) && reg_41(0,0) && reg_22(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_86(0,0) && reg_3(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_43(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_27(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_45(0,0) && reg_28(0,0) && reg_4(0,0) && reg_11(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_6(0,0) && reg_8(0,0) && reg_86(0,0) && reg_27(0,0) && reg_0(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0) && reg_3(0,0) && reg_19(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_24(0,0) && reg_58(0,0) && reg_0(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_2(0,0) && reg_27(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_39(0,0) && reg_7(0,0) && reg_6(0,0) && reg_9(0,0) && reg_23(0,0) && reg_24(0,0) && reg_16(0,0) && reg_58(0,0) && reg_27(0,0) && reg_0(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2461;
}
if(reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_45(0,0) && reg_62(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_56(0,0) && reg_9(0,0) && reg_22(0,0) && reg_47(0,0) && reg_20(0,0) && reg_18(0,0) && reg_86(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2462;
}
if(reg_58(0,0) && reg_48(0,0) && reg_7(0,0) && reg_23(0,0) && reg_23(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2463;
}
if(reg_1(0,0) && reg_2(0,0) && reg_61(0,0) && reg_1(0,0) && reg_20(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_7(0,0) && reg_27(0,0) && reg_43(0,0) && reg_1(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0) && reg_22(0,0) && reg_24(0,0) && reg_77(0,0) && reg_7(0,0) && reg_37(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_51(0,0) && reg_7(0,0) && reg_14(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2464;
}
if(reg_58(0,0) && reg_37(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_24(0,0) && reg_56(0,0) && reg_7(0,0) && reg_51(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0) && reg_58(0,0) && reg_63(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2465;
}
if(reg_0(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_18(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_86(0,0) && reg_58(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2466;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_17(0,0) && reg_2(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 2467;
}
if(reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_20(0,0) && reg_24(0,0) && reg_42(0,0) && reg_24(0,0) && reg_46(0,0) && reg_72(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2468;
}
if(reg_58(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2469;
}
if(reg_17(0,0) && reg_34(0,0) && reg_24(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 2470;
}
if(reg_1(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_43(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2471;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2472;
}
if(reg_58(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2473;
}
if(reg_1(0,0) && reg_35(0,0) && reg_40(0,0) && reg_1(0,0) && reg_34(0,0) && reg_9(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_48(0,0) && reg_26(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_41(0,0) && reg_1(0,0) && reg_27(0,0) && reg_2(0,0) && reg_13(0,0) && reg_61(0,0) && reg_48(0,0) && reg_2(0,0) && reg_35(0,0) && reg_2(0,0) && reg_77(0,0) && reg_27(0,0) && reg_13(0,0) && reg_4(0,0) && reg_27(0,0) && reg_77(0,0) && reg_27(0,0) && reg_27(0,0) && reg_9(0,0) && reg_35(0,0) && reg_77(0,0) && reg_51(0,0) && reg_9(0,0) && reg_9(0,0) && reg_13(0,0) && reg_77(0,0) && reg_2(0,0) && reg_2(0,0) && reg_27(0,0) && reg_42(0,0) && reg_11(0,0) && reg_0(0,0) && reg_9(0,0) && reg_0(0,0) && reg_13(0,0) && reg_2(0,0) && reg_60(0,0) && reg_51(0,0) && reg_1(0,0) && reg_35(0,0) && reg_40(0,0) && reg_3(0,0) && reg_0(0,0) && reg_39(0,0) && reg_1(0,0) && reg_34(0,0) && reg_9(0,0) && reg_20(0,0) && reg_18(0,0) && reg_24(0,0) && reg_48(0,0) && reg_26(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_41(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2474;
}
if(reg_17(0,0) && reg_10(0,0) && reg_15(0,0) && reg_23(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2475;
}
if(reg_58(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_34(0,0) && reg_7(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2476;
}
if(reg_58(0,0) && reg_6(0,0) && reg_37(0,0) && reg_63(0,0) && reg_8(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2477;
}
if(reg_58(0,0) && reg_24(0,0) && reg_23(0,0) && reg_23(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_73(0,0) && reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_63(0,0) && reg_8(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2478;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_49(0,0) && reg_30(0,0) && reg_37(0,0) && reg_37(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2479;
}
if(reg_58(0,0) && reg_37(0,0) && reg_36(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_13(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2480;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2481;
}
if(reg_58(0,0) && reg_48(0,0) && reg_24(0,0) && reg_42(0,0) && reg_36(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_6(0,0) && reg_22(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2482;
}
if(reg_58(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2483;
}
if(reg_58(0,0) && reg_42(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2484;
}
if(reg_78(0,0) && reg_71(0,0) && reg_9(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_87(0,0) && reg_51(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_4(0,0) && reg_11(0,0) && reg_73(0,0) && reg_48(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_48(0,0) && reg_9(0,0) && reg_87(0,0) && reg_89(0,0) && reg_73(0,0) && reg_44(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 2485;
}
if(reg_58(0,0) && reg_6(0,0) && reg_10(0,0) && reg_10(0,0) && reg_58(0,0) && reg_23(0,0) && reg_9(0,0) && reg_9(0,0) && reg_48(0,0) && reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_34(0,0)) {
matched = true;
pattern_id = 2486;
}
if(reg_58(0,0) && reg_33(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_25(0,0) && reg_6(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2487;
}
if(reg_58(0,0) && reg_33(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_50(0,0) && reg_13(0,0) && reg_7(0,0) && reg_46(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2488;
}
if(reg_58(0,0) && reg_33(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_45(0,0) && reg_32(0,0) && reg_62(0,0) && reg_9(0,0) && reg_49(0,0) && reg_17(0,0) && reg_20(0,0) && reg_16(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2489;
}
if(reg_1(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_11(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_30(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_3(0,0) && reg_4(0,0) && reg_43(0,0) && reg_3(0,0) && reg_43(0,0) && reg_0(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_3(0,0) && reg_41(0,0) && reg_35(0,0) && reg_3(0,0) && reg_43(0,0) && reg_60(0,0) && reg_3(0,0) && reg_61(0,0) && reg_4(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_3(0,0) && reg_60(0,0) && reg_27(0,0) && reg_3(0,0) && reg_11(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_41(0,0) && reg_3(0,0) && reg_11(0,0) && reg_60(0,0) && reg_3(0,0) && reg_64(0,0) && reg_40(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_3(0,0) && reg_25(0,0) && reg_25(0,0) && reg_3(0,0) && reg_11(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_41(0,0) && reg_3(0,0) && reg_11(0,0) && reg_60(0,0) && reg_3(0,0) && reg_30(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_3(0,0) && reg_30(0,0) && reg_27(0,0) && reg_3(0,0) && reg_11(0,0) && reg_5(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_41(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2490;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2491;
}
if(reg_58(0,0) && reg_47(0,0) && reg_20(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2492;
}
if(reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2493;
}
if(reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2494;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_42(0,0) && reg_52(0,0) && reg_49(0,0) && reg_42(0,0) && reg_6(0,0) && reg_49(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_6(0,0) && reg_13(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2495;
}
if(reg_58(0,0) && reg_35(0,0) && reg_11(0,0) && reg_47(0,0) && reg_23(0,0) && reg_43(0,0) && reg_49(0,0) && reg_58(0,0) && reg_6(0,0) && reg_35(0,0) && reg_11(0,0) && reg_23(0,0) && reg_35(0,0) && reg_35(0,0) && reg_11(0,0) && reg_43(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2496;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2497;
}
if(reg_40(0,0) && reg_45(0,0) && reg_26(0,0) && reg_26(0,0) && reg_41(0,0) && reg_40(0,0) && reg_31(0,0)) {
matched = true;
pattern_id = 2498;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_24(0,0) && reg_14(0,0) && reg_7(0,0) && reg_46(0,0) && reg_46(0,0) && reg_13(0,0) && reg_58(0,0) && reg_11(0,0) && reg_17(0,0) && reg_2(0,0) && reg_3(0,0) && reg_87(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_37(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_51(0,0) && reg_46(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_32(0,0) && reg_21(0,0) && reg_41(0,0) && reg_3(0,0) && reg_4(0,0) && reg_17(0,0) && reg_2(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_3(0,0) && reg_26(0,0) && reg_31(0,0) && reg_3(0,0) && reg_43(0,0) && reg_17(0,0) && reg_27(0,0) && reg_88(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2499;
}
if(reg_1(0,0) && reg_64(0,0) && reg_25(0,0) && reg_3(0,0) && reg_11(0,0) && reg_39(0,0) && reg_3(0,0) && reg_25(0,0) && reg_2(0,0) && reg_3(0,0) && reg_61(0,0) && reg_43(0,0) && reg_3(0,0) && reg_41(0,0) && reg_0(0,0) && reg_3(0,0) && reg_61(0,0) && reg_4(0,0) && reg_3(0,0) && reg_64(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_11(0,0) && reg_3(0,0) && reg_43(0,0) && reg_30(0,0) && reg_3(0,0) && reg_39(0,0) && reg_27(0,0) && reg_3(0,0) && reg_39(0,0) && reg_64(0,0) && reg_3(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_5(0,0) && reg_11(0,0) && reg_3(0,0) && reg_30(0,0) && reg_0(0,0) && reg_3(0,0) && reg_4(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2500;
}
if(reg_1(0,0) && reg_11(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2501;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2502;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2503;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_5(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2504;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_11(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2505;
}
if(reg_1(0,0) && reg_27(0,0) && reg_4(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2506;
}
if(reg_39(0,0) && reg_9(0,0) && reg_7(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_48(0,0) && reg_41(0,0) && reg_10(0,0) && reg_42(0,0) && reg_13(0,0) && reg_46(0,0) && reg_13(0,0) && reg_20(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2507;
}
if(reg_38(0,0) && reg_32(0,0) && reg_41(0,0) && reg_33(0,0) && reg_3(0,0) && reg_24(0,0) && reg_51(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_71(0,0) && reg_51(0,0) && reg_9(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_24(0,0) && reg_48(0,0) && reg_10(0,0) && reg_17(0,0) && reg_20(0,0) && reg_52(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2508;
}
if(reg_44(0,0) && reg_30(0,0) && reg_32(0,0) && reg_32(0,0) && reg_3(0,0) && reg_19(0,0) && reg_24(0,0) && reg_24(0,0) && reg_48(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_27(0,0) && reg_64(0,0) && reg_60(0,0) && reg_4(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2509;
}
if(reg_32(0,0) && reg_31(0,0) && reg_45(0,0) && reg_33(0,0) && reg_3(0,0) && reg_32(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_3(0,0) && reg_23(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2510;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_24(0,0) && reg_7(0,0) && reg_37(0,0) && reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_24(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2511;
}
if(reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_40(0,0) && reg_50(0,0) && reg_2(0,0) && reg_27(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_40(0,0) && reg_50(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_40(0,0) && reg_50(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2512;
}
if(reg_18(0,0) && reg_7(0,0) && reg_2(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2513;
}
if(reg_1(0,0) && reg_35(0,0) && reg_64(0,0) && reg_3(0,0) && reg_4(0,0) && reg_11(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_35(0,0) && reg_3(0,0) && reg_4(0,0) && reg_4(0,0) && reg_3(0,0) && reg_4(0,0) && reg_43(0,0) && reg_3(0,0) && reg_4(0,0) && reg_4(0,0) && reg_3(0,0) && reg_35(0,0) && reg_43(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_4(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_64(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_11(0,0) && reg_3(0,0) && reg_35(0,0) && reg_4(0,0) && reg_3(0,0) && reg_35(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_27(0,0) && reg_3(0,0) && reg_35(0,0) && reg_27(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_35(0,0) && reg_3(0,0) && reg_35(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2514;
}
if(reg_1(0,0) && reg_4(0,0) && reg_27(0,0) && reg_3(0,0) && reg_4(0,0) && reg_35(0,0) && reg_3(0,0) && reg_35(0,0) && reg_4(0,0) && reg_3(0,0) && reg_4(0,0) && reg_0(0,0) && reg_3(0,0) && reg_4(0,0) && reg_4(0,0) && reg_3(0,0) && reg_35(0,0) && reg_11(0,0) && reg_3(0,0) && reg_4(0,0) && reg_11(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_4(0,0) && reg_4(0,0) && reg_3(0,0) && reg_35(0,0) && reg_43(0,0) && reg_3(0,0) && reg_35(0,0) && reg_4(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_11(0,0) && reg_3(0,0) && reg_35(0,0) && reg_4(0,0) && reg_3(0,0) && reg_35(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_61(0,0) && reg_3(0,0) && reg_35(0,0) && reg_27(0,0) && reg_3(0,0) && reg_35(0,0) && reg_27(0,0) && reg_3(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_35(0,0) && reg_35(0,0) && reg_3(0,0) && reg_35(0,0) && reg_64(0,0) && reg_3(0,0) && reg_35(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2515;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_8(0,0) && reg_7(0,0) && reg_48(0,0) && reg_9(0,0) && reg_24(0,0) && reg_58(0,0) && reg_12(0,0) && reg_36(0,0) && reg_7(0,0) && reg_42(0,0) && reg_52(0,0) && reg_20(0,0) && reg_7(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2516;
}
if(reg_58(0,0) && reg_26(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_58(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2517;
}
if(reg_58(0,0) && reg_26(0,0) && reg_9(0,0) && reg_15(0,0) && reg_10(0,0) && reg_58(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2518;
}
if(reg_17(0,0) && reg_37(0,0) && reg_3(0,0) && reg_29(0,0) && reg_31(0,0) && reg_31(0,0) && reg_44(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 2519;
}
if(reg_58(0,0) && reg_37(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2520;
}
if(reg_17(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 2521;
}
if(reg_1(0,0) && reg_61(0,0) && reg_25(0,0) && reg_3(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_6(0,0) && reg_20(0,0) && reg_8(0,0) && reg_37(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 2522;
}
if(reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_47(0,0) && reg_58(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2523;
}
if(reg_58(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_46(0,0) && reg_36(0,0) && reg_48(0,0) && reg_9(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2524;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2525;
}
if(reg_35(0,0) && reg_2(0,0) && reg_61(0,0)) {
matched = true;
pattern_id = 2526;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2527;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_25(0,0) && reg_56(0,0) && reg_44(0,0) && reg_73(0,0) && reg_51(0,0) && reg_51(0,0) && reg_24(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2528;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_9(0,0) && reg_16(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2529;
}
if(reg_58(0,0) && reg_6(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_24(0,0) && reg_34(0,0) && reg_61(0,0) && reg_43(0,0) && reg_2(0,0) && reg_16(0,0) && reg_61(0,0) && reg_43(0,0) && reg_2(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0) && reg_63(0,0) && reg_16(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2530;
}
if(reg_51(0,0) && reg_20(0,0) && reg_10(0,0) && reg_20(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2531;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2532;
}
if(reg_19(0,0) && reg_45(0,0) && reg_5(0,0) && reg_85(0,0) && reg_21(0,0) && reg_56(0,0) && reg_56(0,0) && reg_30(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2533;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_20(0,0) && reg_9(0,0) && reg_16(0,0) && reg_20(0,0) && reg_58(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 2534;
}
if(reg_1(0,0) && reg_11(0,0) && reg_40(0,0) && reg_3(0,0) && reg_11(0,0) && reg_60(0,0) && reg_3(0,0) && reg_11(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_2(0,0) && reg_3(0,0) && reg_61(0,0) && reg_27(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_5(0,0) && reg_39(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2535;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2536;
}
if(reg_58(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2537;
}
if(reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_23(0,0) && reg_22(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_78(0,0) && reg_29(0,0) && reg_13(0,0) && reg_15(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0) && reg_9(0,0) && reg_73(0,0) && reg_62(0,0) && reg_9(0,0) && reg_49(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2538;
}
if(reg_32(0,0) && reg_36(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_78(0,0) && reg_63(0,0) && reg_36(0,0) && reg_20(0,0) && reg_23(0,0) && reg_77(0,0) && reg_60(0,0) && reg_63(0,0) && reg_25(0,0) && reg_63(0,0) && reg_32(0,0) && reg_19(0,0) && reg_39(0,0) && reg_35(0,0) && reg_13(0,0) && reg_2(0,0) && reg_72(0,0) && reg_43(0,0) && reg_85(0,0) && reg_32(0,0) && reg_25(0,0) && reg_50(0,0) && reg_51(0,0) && reg_0(0,0) && reg_48(0,0) && reg_22(0,0) && reg_85(0,0) && reg_75(0,0) && reg_21(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2539;
}
if(reg_44(0,0) && reg_13(0,0) && reg_10(0,0) && reg_10(0,0) && reg_15(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_10(0,0) && reg_3(0,0) && reg_33(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_6(0,0) && reg_48(0,0) && reg_9(0,0) && reg_48(0,0) && reg_3(0,0) && reg_45(0,0) && reg_22(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2540;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_9(0,0) && reg_6(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2541;
}
if(reg_58(0,0) && reg_24(0,0) && reg_37(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2542;
}
if(reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2543;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2544;
}
if(reg_30(0,0) && reg_42(0,0) && reg_42(0,0) && reg_9(0,0) && reg_37(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_55(0,0) && reg_58(0,0) && reg_55(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_38(0,0) && reg_30(0,0) && reg_77(0,0) && reg_40(0,0) && reg_44(0,0) && reg_38(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2545;
}
if(reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2546;
}
if(reg_78(0,0) && reg_44(0,0) && reg_11(0,0) && reg_40(0,0) && reg_62(0,0) && reg_35(0,0) && reg_31(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2547;
}
if(reg_78(0,0) && reg_2(0,0) && reg_5(0,0) && reg_78(0,0) && reg_2(0,0) && reg_30(0,0) && reg_78(0,0) && reg_2(0,0) && reg_5(0,0) && reg_78(0,0) && reg_2(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 2548;
}
if(reg_78(0,0) && reg_2(0,0) && reg_5(0,0) && reg_78(0,0) && reg_2(0,0) && reg_30(0,0)) {
matched = true;
pattern_id = 2549;
}
if(reg_14(0,0) && reg_15(0,0) && reg_46(0,0) && reg_8(0,0) && reg_7(0,0) && reg_9(0,0) && reg_15(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_36(0,0) && reg_34(0,0) && reg_24(0,0) && reg_47(0,0) && reg_13(0,0) && reg_23(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2550;
}
if(reg_1(0,0) && reg_61(0,0) && reg_25(0,0) && reg_3(0,0) && reg_43(0,0) && reg_40(0,0) && reg_1(0,0) && reg_6(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_35(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2551;
}
if(reg_28(0,0) && reg_33(0,0) && reg_30(0,0) && reg_10(0,0) && reg_10(0,0) && reg_9(0,0) && reg_34(0,0) && reg_51(0,0) && reg_46(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 2552;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_61(0,0) && reg_3(0,0) && reg_40(0,0) && reg_61(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_3(0,0) && reg_4(0,0) && reg_25(0,0) && reg_3(0,0) && reg_40(0,0) && reg_0(0,0) && reg_3(0,0) && reg_39(0,0) && reg_5(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_41(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2553;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_5(0,0) && reg_61(0,0) && reg_3(0,0) && reg_61(0,0) && reg_43(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_61(0,0) && reg_3(0,0) && reg_40(0,0) && reg_61(0,0) && reg_3(0,0) && reg_4(0,0) && reg_0(0,0) && reg_3(0,0) && reg_25(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2554;
}
if(reg_1(0,0) && reg_11(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2555;
}
if(reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_30(0,0) && reg_5(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2556;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_40(0,0) && reg_40(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_39(0,0) && reg_3(0,0) && reg_39(0,0) && reg_61(0,0) && reg_3(0,0) && reg_30(0,0) && reg_4(0,0) && reg_3(0,0) && reg_4(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2557;
}
if(reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_43(0,0) && reg_43(0,0) && reg_3(0,0) && reg_25(0,0) && reg_25(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_30(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_61(0,0) && reg_30(0,0) && reg_3(0,0) && reg_5(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_4(0,0) && reg_40(0,0) && reg_3(0,0) && reg_60(0,0) && reg_27(0,0) && reg_3(0,0) && reg_41(0,0) && reg_4(0,0) && reg_3(0,0) && reg_64(0,0) && reg_61(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_64(0,0) && reg_27(0,0) && reg_3(0,0) && reg_25(0,0) && reg_40(0,0) && reg_3(0,0) && reg_5(0,0) && reg_30(0,0) && reg_3(0,0) && reg_41(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2558;
}
if(reg_1(0,0) && reg_35(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_43(0,0) && reg_43(0,0) && reg_3(0,0) && reg_25(0,0) && reg_25(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_30(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_61(0,0) && reg_30(0,0) && reg_3(0,0) && reg_5(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_4(0,0) && reg_40(0,0) && reg_3(0,0) && reg_60(0,0) && reg_27(0,0) && reg_3(0,0) && reg_41(0,0) && reg_4(0,0) && reg_3(0,0) && reg_64(0,0) && reg_61(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_64(0,0) && reg_27(0,0) && reg_3(0,0) && reg_25(0,0) && reg_40(0,0) && reg_3(0,0) && reg_5(0,0) && reg_30(0,0) && reg_3(0,0) && reg_41(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2559;
}
if(reg_1(0,0) && reg_11(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_41(0,0) && reg_3(0,0) && reg_30(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_43(0,0) && reg_43(0,0) && reg_3(0,0) && reg_25(0,0) && reg_25(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_30(0,0) && reg_11(0,0) && reg_3(0,0) && reg_2(0,0) && reg_64(0,0) && reg_3(0,0) && reg_61(0,0) && reg_30(0,0) && reg_3(0,0) && reg_5(0,0) && reg_64(0,0) && reg_3(0,0) && reg_60(0,0) && reg_4(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_4(0,0) && reg_40(0,0) && reg_3(0,0) && reg_60(0,0) && reg_27(0,0) && reg_3(0,0) && reg_41(0,0) && reg_4(0,0) && reg_3(0,0) && reg_64(0,0) && reg_61(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_64(0,0) && reg_27(0,0) && reg_3(0,0) && reg_25(0,0) && reg_40(0,0) && reg_3(0,0) && reg_5(0,0) && reg_30(0,0) && reg_3(0,0) && reg_41(0,0) && reg_41(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_0(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2560;
}
if(reg_1(0,0) && reg_35(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_39(0,0) && reg_43(0,0) && reg_3(0,0) && reg_27(0,0) && reg_35(0,0) && reg_3(0,0) && reg_60(0,0) && reg_64(0,0) && reg_3(0,0) && reg_43(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2561;
}
if(reg_1(0,0) && reg_0(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_25(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_39(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2562;
}
if(reg_1(0,0) && reg_35(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_0(0,0) && reg_25(0,0) && reg_3(0,0) && reg_39(0,0) && reg_39(0,0) && reg_3(0,0) && reg_11(0,0) && reg_25(0,0) && reg_3(0,0) && reg_39(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2563;
}
if(reg_13(0,0) && reg_20(0,0) && reg_20(0,0) && reg_13(0,0) && reg_42(0,0) && reg_18(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_25(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2564;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_77(0,0) && reg_31(0,0) && reg_49(0,0) && reg_37(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2565;
}
if(reg_1(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0) && reg_44(0,0) && reg_6(0,0) && reg_24(0,0) && reg_16(0,0) && reg_49(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2566;
}
if(reg_58(0,0) && reg_10(0,0) && reg_7(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_10(0,0) && reg_58(0,0) && reg_51(0,0) && reg_13(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_58(0,0) && reg_42(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_42(0,0) && reg_24(0,0) && reg_6(0,0) && reg_0(0,0) && reg_27(0,0) && reg_17(0,0) && reg_47(0,0) && reg_7(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 2567;
}
if(reg_34(0,0) && reg_49(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_0(0,0) && reg_17(0,0) && reg_43(0,0) && reg_17(0,0) && reg_0(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 2568;
}
if(reg_32(0,0) && reg_36(0,0) && reg_51(0,0) && reg_57(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_29(0,0) && reg_13(0,0) && reg_15(0,0) && reg_52(0,0) && reg_41(0,0) && reg_49(0,0) && reg_9(0,0) && reg_3(0,0) && reg_62(0,0) && reg_9(0,0) && reg_49(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2569;
}
if(reg_58(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_13(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2570;
}
if(reg_13(0,0) && reg_51(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_86(0,0)) {
matched = true;
pattern_id = 2571;
}
if(reg_58(0,0) && reg_47(0,0) && reg_9(0,0) && reg_24(0,0) && reg_7(0,0) && reg_37(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_51(0,0) && reg_48(0,0) && reg_6(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2572;
}
if(reg_1(0,0) && reg_2(0,0) && reg_25(0,0) && reg_3(0,0) && reg_27(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2573;
}
if(reg_58(0,0) && reg_8(0,0) && reg_27(0,0)) {
matched = true;
pattern_id = 2574;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_51(0,0) && reg_38(0,0) && reg_68(0,0) && reg_60(0,0) && reg_68(0,0) && reg_34(0,0) && reg_8(0,0) && reg_38(0,0) && reg_37(0,0) && reg_21(0,0) && reg_43(0,0) && reg_61(0,0) && reg_36(0,0) && reg_48(0,0) && reg_28(0,0) && reg_39(0,0) && reg_16(0,0) && reg_68(0,0) && reg_29(0,0) && reg_44(0,0) && reg_52(0,0) && reg_36(0,0) && reg_49(0,0) && reg_62(0,0) && reg_5(0,0) && reg_23(0,0) && reg_42(0,0) && reg_35(0,0) && reg_31(0,0) && reg_60(0,0) && reg_36(0,0) && reg_43(0,0)) {
matched = true;
pattern_id = 2575;
}
if(reg_34(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2576;
}
if(reg_58(0,0) && reg_7(0,0) && reg_42(0,0) && reg_46(0,0) && reg_24(0,0) && reg_36(0,0) && reg_48(0,0) && reg_10(0,0) && reg_49(0,0) && reg_22(0,0) && reg_42(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 2577;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_48(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2578;
}
if(reg_58(0,0) && reg_8(0,0) && reg_7(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_34(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_22(0,0) && reg_23(0,0) && reg_24(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2579;
}
if(reg_58(0,0) && reg_56(0,0) && reg_9(0,0) && reg_20(0,0) && reg_10(0,0) && reg_19(0,0) && reg_24(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_30(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2580;
}
if(reg_7(0,0) && reg_32(0,0) && reg_37(0,0) && reg_49(0,0) && reg_62(0,0) && reg_9(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2581;
}
if(reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_3(0,0) && reg_44(0,0) && reg_6(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_3(0,0) && reg_66(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_13(0,0) && reg_10(0,0) && reg_9(0,0) && reg_59(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2582;
}
if(reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_47(0,0) && reg_9(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_32(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2583;
}
if(reg_10(0,0) && reg_9(0,0) && reg_22(0,0) && reg_48(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_19(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_3(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_10(0,0) && reg_1(0,0) && reg_61(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2584;
}
if(reg_58(0,0) && reg_34(0,0) && reg_9(0,0) && reg_10(0,0) && reg_10(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2585;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_50(0,0) && reg_7(0,0) && reg_22(0,0) && reg_48(0,0) && reg_10(0,0) && reg_37(0,0) && reg_13(0,0) && reg_6(0,0) && reg_52(0,0) && reg_3(0,0) && reg_50(0,0) && reg_21(0,0) && reg_44(0,0) && reg_3(0,0)) {
matched = true;
pattern_id = 2586;
}
if(reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_18(0,0) && reg_24(0,0) && reg_36(0,0) && reg_48(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2587;
}
if(reg_10(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_42(0,0) && reg_9(0,0) && reg_73(0,0) && reg_52(0,0) && reg_9(0,0) && reg_49(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2588;
}
if(reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_73(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2589;
}
if(reg_10(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_22(0,0) && reg_42(0,0) && reg_9(0,0) && reg_73(0,0) && reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_22(0,0) && reg_10(0,0) && reg_18(0,0) && reg_24(0,0) && reg_20(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2590;
}
if(reg_10(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_9(0,0) && reg_22(0,0) && reg_73(0,0) && reg_20(0,0) && reg_18(0,0) && reg_36(0,0) && reg_34(0,0) && reg_51(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2591;
}
if(reg_23(0,0) && reg_7(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0) && reg_73(0,0)) {
matched = true;
pattern_id = 2592;
}
if(reg_58(0,0) && reg_38(0,0) && reg_37(0,0) && reg_47(0,0) && reg_32(0,0) && reg_8(0,0) && reg_6(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2593;
}
if(reg_1(0,0) && reg_61(0,0) && reg_25(0,0) && reg_3(0,0) && reg_0(0,0) && reg_0(0,0) && reg_1(0,0) && reg_7(0,0) && reg_48(0,0) && reg_1(0,0) && reg_0(0,0) && reg_0(0,0) && reg_3(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2594;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2595;
}
if(reg_17(0,0) && reg_42(0,0) && reg_6(0,0) && reg_9(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_41(0,0) && reg_46(0,0) && reg_9(0,0) && reg_34(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_26(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 2596;
}
if(reg_17(0,0) && reg_37(0,0) && reg_13(0,0) && reg_36(0,0) && reg_10(0,0) && reg_9(0,0) && reg_30(0,0) && reg_22(0,0) && reg_7(0,0) && reg_34(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2597;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2598;
}
if(reg_1(0,0) && reg_11(0,0) && reg_41(0,0) && reg_3(0,0) && reg_2(0,0) && reg_39(0,0) && reg_3(0,0) && reg_11(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_61(0,0) && reg_3(0,0) && reg_0(0,0) && reg_61(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2599;
}
if(reg_58(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_23(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2600;
}
if(reg_58(0,0) && reg_42(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0)) {
matched = true;
pattern_id = 2601;
}
if(reg_20(0,0) && reg_7(0,0) && reg_34(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2602;
}
if(reg_19(0,0) && reg_85(0,0) && reg_21(0,0) && reg_44(0,0) && reg_45(0,0) && reg_62(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2603;
}
if(reg_58(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_58(0,0) && reg_47(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_46(0,0) && reg_9(0,0) && reg_73(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_46(0,0) && reg_49(0,0) && reg_20(0,0) && reg_7(0,0) && reg_42(0,0) && reg_10(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2604;
}
if(reg_1(0,0) && reg_11(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2605;
}
if(reg_1(0,0) && reg_35(0,0) && reg_60(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2606;
}
if(reg_1(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_60(0,0) && reg_27(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2607;
}
if(reg_42(0,0) && reg_15(0,0) && reg_42(0,0) && reg_10(0,0) && reg_23(0,0) && reg_77(0,0) && reg_22(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_8(0,0) && reg_9(0,0) && reg_34(0,0) && reg_10(0,0) && reg_47(0,0) && reg_77(0,0) && reg_7(0,0) && reg_23(0,0) && reg_6(0,0) && reg_13(0,0) && reg_34(0,0) && reg_9(0,0) && reg_77(0,0) && reg_11(0,0) && reg_35(0,0) && reg_42(0,0) && reg_60(0,0) && reg_43(0,0) && reg_42(0,0) && reg_2(0,0) && reg_48(0,0) && reg_77(0,0) && reg_48(0,0) && reg_4(0,0) && reg_35(0,0) && reg_35(0,0) && reg_77(0,0) && reg_13(0,0) && reg_23(0,0) && reg_43(0,0) && reg_9(0,0) && reg_77(0,0) && reg_42(0,0) && reg_2(0,0) && reg_43(0,0) && reg_4(0,0) && reg_77(0,0) && reg_35(0,0) && reg_0(0,0) && reg_48(0,0) && reg_42(0,0) && reg_61(0,0) && reg_9(0,0) && reg_23(0,0) && reg_42(0,0) && reg_43(0,0) && reg_61(0,0) && reg_2(0,0) && reg_51(0,0) && reg_17(0,0) && reg_18(0,0) && reg_20(0,0) && reg_34(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2608;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2609;
}
if(reg_28(0,0) && reg_9(0,0) && reg_51(0,0) && reg_62(0,0) && reg_7(0,0) && reg_20(0,0) && reg_39(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_25(0,0) && reg_24(0,0) && reg_36(0,0) && reg_22(0,0) && reg_48(0,0) && reg_13(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 2610;
}
if(reg_58(0,0) && reg_47(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2611;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_17(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0)) {
matched = true;
pattern_id = 2612;
}
if(reg_58(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_57(0,0) && reg_10(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2613;
}
if(reg_32(0,0) && reg_9(0,0) && reg_20(0,0) && reg_77(0,0) && reg_40(0,0) && reg_24(0,0) && reg_24(0,0) && reg_52(0,0) && reg_7(0,0) && reg_9(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_3(0,0) && reg_0(0,0) && reg_2(0,0) && reg_1(0,0) && reg_34(0,0) && reg_9(0,0) && reg_48(0,0) && reg_7(0,0) && reg_13(0,0) && reg_37(0,0) && reg_46(0,0) && reg_13(0,0) && reg_22(0,0) && reg_25(0,0) && reg_30(0,0) && reg_62(0,0) && reg_1(0,0) && reg_35(0,0) && reg_5(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2614;
}
if(reg_1(0,0) && reg_39(0,0) && reg_41(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_1(0,0) && reg_11(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2615;
}
if(reg_58(0,0) && reg_32(0,0) && reg_9(0,0) && reg_6(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_34(0,0) && reg_13(0,0) && reg_42(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2616;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_50(0,0) && reg_7(0,0) && reg_42(0,0) && reg_6(0,0) && reg_24(0,0) && reg_10(0,0) && reg_24(0,0) && reg_23(0,0) && reg_20(0,0) && reg_3(0,0) && reg_25(0,0) && reg_21(0,0) && reg_31(0,0) && reg_32(0,0)) {
matched = true;
pattern_id = 2617;
}
if(reg_22(0,0) && reg_9(0,0) && reg_15(0,0) && reg_73(0,0) && reg_10(0,0) && reg_46(0,0) && reg_13(0,0) && reg_8(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2618;
}
if(reg_58(0,0) && reg_40(0,0) && reg_18(0,0) && reg_6(0,0) && reg_24(0,0) && reg_34(0,0) && reg_9(0,0) && reg_32(0,0) && reg_9(0,0) && reg_20(0,0) && reg_36(0,0) && reg_37(0,0) && reg_17(0,0) && reg_51(0,0) && reg_13(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2619;
}
if(reg_58(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_58(0,0) && reg_21(0,0) && reg_22(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_46(0,0) && reg_46(0,0) && reg_28(0,0) && reg_7(0,0) && reg_14(0,0) && reg_13(0,0) && reg_6(0,0) && reg_48(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0)) {
matched = true;
pattern_id = 2620;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_60(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2621;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2622;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2623;
}
if(reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_27(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_43(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2624;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_35(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2625;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_33(0,0) && reg_13(0,0) && reg_49(0,0) && reg_77(0,0) && reg_5(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_3(0,0) && reg_2(0,0) && reg_30(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2626;
}
if(reg_58(0,0) && reg_15(0,0) && reg_6(0,0) && reg_24(0,0) && reg_24(0,0) && reg_20(0,0) && reg_58(0,0) && reg_8(0,0) && reg_35(0,0)) {
matched = true;
pattern_id = 2627;
}
if(reg_29(0,0) && reg_24(0,0) && reg_10(0,0) && reg_20(0,0) && reg_86(0,0) && reg_3(0,0) && reg_34(0,0) && reg_51(0,0) && reg_23(0,0) && reg_42(0,0) && reg_9(0,0) && reg_0(0,0) && reg_11(0,0) && reg_6(0,0) && reg_47(0,0) && reg_22(0,0) && reg_4(0,0) && reg_43(0,0) && reg_51(0,0) && reg_16(0,0) && reg_35(0,0) && reg_47(0,0) && reg_17(0,0)) {
matched = true;
pattern_id = 2628;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_28(0,0) && reg_7(0,0) && reg_22(0,0) && reg_29(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_40(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2629;
}
if(reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_34(0,0) && reg_13(0,0) && reg_22(0,0) && reg_48(0,0) && reg_21(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2630;
}
if(reg_1(0,0) && reg_2(0,0) && reg_4(0,0) && reg_1(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_1(0,0) && reg_2(0,0) && reg_5(0,0) && reg_1(0,0) && reg_15(0,0) && reg_7(0,0) && reg_22(0,0) && reg_13(0,0) && reg_37(0,0) && reg_37(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0) && reg_1(0,0) && reg_2(0,0) && reg_35(0,0) && reg_1(0,0) && reg_42(0,0) && reg_24(0,0) && reg_34(0,0) && reg_1(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2631;
}
if(reg_1(0,0) && reg_61(0,0) && reg_30(0,0) && reg_3(0,0) && reg_60(0,0) && reg_5(0,0) && reg_3(0,0) && reg_64(0,0) && reg_25(0,0) && reg_3(0,0) && reg_5(0,0) && reg_40(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2632;
}
if(reg_1(0,0) && reg_2(0,0) && reg_60(0,0) && reg_3(0,0) && reg_41(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2633;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_1(0,0) && reg_61(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2634;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_1(0,0) && reg_30(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2635;
}
if(reg_39(0,0) && reg_6(0,0) && reg_13(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2636;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_1(0,0) && reg_61(0,0) && reg_43(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2637;
}
if(reg_60(0,0) && reg_43(0,0) && reg_4(0,0)) {
matched = true;
pattern_id = 2638;
}
if(reg_41(0,0) && reg_6(0,0) && reg_6(0,0) && reg_24(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2639;
}
if(reg_78(0,0) && reg_71(0,0) && reg_9(0,0) && reg_8(0,0) && reg_13(0,0) && reg_46(0,0) && reg_87(0,0) && reg_47(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_34(0,0) && reg_13(0,0) && reg_47(0,0) && reg_7(0,0) && reg_42(0,0) && reg_73(0,0) && reg_12(0,0) && reg_36(0,0) && reg_24(0,0) && reg_20(0,0) && reg_9(0,0) && reg_10(0,0) && reg_73(0,0) && reg_47(0,0) && reg_37(0,0) && reg_42(0,0) && reg_87(0,0) && reg_88(0,0) && reg_63(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_7(0,0) && reg_37(0,0) && reg_10(0,0) && reg_46(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_9(0,0) && reg_10(0,0) && reg_87(0,0) && reg_89(0,0) && reg_73(0,0) && reg_44(0,0) && reg_45(0,0) && reg_32(0,0) && reg_31(0,0) && reg_54(0,0)) {
matched = true;
pattern_id = 2640;
}
if(reg_40(0,0) && reg_24(0,0) && reg_22(0,0) && reg_22(0,0) && reg_9(0,0) && reg_42(0,0) && reg_20(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0) && reg_63(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2641;
}
if(reg_58(0,0) && reg_74(0,0) && reg_44(0,0) && reg_77(0,0) && reg_57(0,0) && reg_13(0,0) && reg_58(0,0) && reg_57(0,0) && reg_10(0,0) && reg_63(0,0)) {
matched = true;
pattern_id = 2642;
}
if(reg_58(0,0) && reg_10(0,0) && reg_9(0,0) && reg_13(0,0) && reg_6(0,0) && reg_42(0,0) && reg_18(0,0) && reg_63(0,0) && reg_12(0,0) && reg_78(0,0) && reg_19(0,0) && reg_24(0,0) && reg_24(0,0) && reg_47(0,0) && reg_46(0,0) && reg_9(0,0) && reg_83(0,0) && reg_47(0,0) && reg_24(0,0) && reg_78(0,0) && reg_83(0,0) && reg_12(0,0) && reg_10(0,0) && reg_78(0,0) && reg_22(0,0) && reg_83(0,0) && reg_23(0,0) && reg_24(0,0) && reg_6(0,0) && reg_34(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2643;
}
if(reg_58(0,0) && reg_34(0,0) && reg_34(0,0) && reg_17(0,0) && reg_57(0,0) && reg_37(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2644;
}
if(reg_58(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0) && reg_24(0,0) && reg_22(0,0) && reg_17(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_16(0,0) && reg_63(0,0) && reg_21(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2645;
}
if(reg_28(0,0) && reg_13(0,0) && reg_10(0,0) && reg_18(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_31(0,0) && reg_24(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 2646;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_29(0,0) && reg_20(0,0) && reg_20(0,0) && reg_37(0,0) && reg_25(0,0) && reg_6(0,0) && reg_24(0,0) && reg_15(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0) && reg_27(0,0) && reg_17(0,0) && reg_2(0,0)) {
matched = true;
pattern_id = 2647;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_1(0,0) && reg_30(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2648;
}
if(reg_1(0,0) && reg_39(0,0) && reg_39(0,0) && reg_1(0,0) && reg_32(0,0) && reg_50(0,0) && reg_25(0,0) && reg_1(0,0) && reg_30(0,0) && reg_0(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2649;
}
if(reg_71(0,0) && reg_1(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_2(0,0) && reg_35(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_2(0,0) && reg_2(0,0) && reg_3(0,0) && reg_4(0,0) && reg_11(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2650;
}
if(reg_1(0,0) && reg_27(0,0) && reg_60(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2651;
}
if(reg_1(0,0) && reg_27(0,0) && reg_25(0,0) && reg_3(0,0) && reg_27(0,0) && reg_61(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_3(0,0) && reg_41(0,0) && reg_64(0,0) && reg_1(0,0)) {
matched = true;
pattern_id = 2652;
}
if(reg_58(0,0) && reg_17(0,0) && reg_10(0,0) && reg_8(0,0) && reg_22(0,0) && reg_58(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_6(0,0) && reg_7(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2653;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0)) {
matched = true;
pattern_id = 2654;
}
if(reg_58(0,0) && reg_9(0,0) && reg_20(0,0) && reg_42(0,0) && reg_58(0,0) && reg_7(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 2655;
}
if(reg_58(0,0) && reg_9(0,0) && reg_20(0,0) && reg_42(0,0) && reg_58(0,0) && reg_34(0,0) && reg_24(0,0) && reg_20(0,0) && reg_48(0,0)) {
matched = true;
pattern_id = 2656;
}
if(reg_58(0,0) && reg_9(0,0) && reg_20(0,0) && reg_42(0,0) && reg_58(0,0) && reg_10(0,0) && reg_18(0,0) && reg_13(0,0) && reg_48(0,0) && reg_24(0,0) && reg_15(0,0)) {
matched = true;
pattern_id = 2657;
}
if(reg_58(0,0) && reg_15(0,0) && reg_10(0,0) && reg_73(0,0) && reg_23(0,0) && reg_20(0,0) && reg_37(0,0) && reg_17(0,0) && reg_46(0,0) && reg_24(0,0) && reg_47(0,0)) {
matched = true;
pattern_id = 2658;
}
if(reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_13(0,0) && reg_37(0,0) && reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_13(0,0) && reg_37(0,0) && reg_46(0,0) && reg_9(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_24(0,0) && reg_13(0,0) && reg_37(0,0) && reg_6(0,0) && reg_24(0,0) && reg_36(0,0) && reg_20(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2659;
}
if(reg_58(0,0) && reg_31(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_24(0,0) && reg_37(0,0) && reg_20(0,0) && reg_7(0,0) && reg_28(0,0) && reg_39(0,0) && reg_50(0,0) && reg_58(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_19(0,0) && reg_9(0,0) && reg_20(0,0) && reg_45(0,0) && reg_22(0,0) && reg_9(0,0) && reg_31(0,0) && reg_9(0,0) && reg_22(0,0) && reg_13(0,0) && reg_22(0,0) && reg_20(0,0)) {
matched = true;
pattern_id = 2660;
}
if(reg_58(0,0) && reg_31(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_24(0,0) && reg_37(0,0) && reg_20(0,0) && reg_7(0,0) && reg_28(0,0) && reg_39(0,0) && reg_50(0,0) && reg_58(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2661;
}
if(reg_58(0,0) && reg_31(0,0) && reg_9(0,0) && reg_46(0,0) && reg_9(0,0) && reg_24(0,0) && reg_37(0,0) && reg_20(0,0) && reg_7(0,0) && reg_28(0,0) && reg_39(0,0) && reg_50(0,0) && reg_58(0,0) && reg_30(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0) && reg_7(0,0) && reg_10(0,0) && reg_20(0,0) && reg_6(0,0) && reg_13(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_58(0,0) && reg_30(0,0) && reg_48(0,0) && reg_48(0,0) && reg_39(0,0) && reg_7(0,0) && reg_6(0,0) && reg_10(0,0) && reg_20(0,0) && reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0)) {
matched = true;
pattern_id = 2662;
}
if(reg_32(0,0) && reg_21(0,0) && reg_31(0,0) && reg_41(0,0) && reg_3(0,0) && reg_32(0,0) && reg_41(0,0) && reg_31(0,0) && reg_40(0,0)) {
matched = true;
pattern_id = 2663;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_42(0,0) && reg_20(0,0) && reg_46(0,0) && reg_63(0,0) && reg_13(0,0) && reg_42(0,0) && reg_20(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_78(0,0) && reg_10(0,0) && reg_9(0,0) && reg_20(0,0) && reg_31(0,0) && reg_13(0,0) && reg_10(0,0) && reg_52(0,0) && reg_32(0,0) && reg_9(0,0) && reg_20(0,0) && reg_20(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2664;
}
if(reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_77(0,0) && reg_51(0,0) && reg_7(0,0) && reg_22(0,0) && reg_58(0,0) && reg_42(0,0) && reg_47(0,0) && reg_7(0,0) && reg_42(0,0) && reg_20(0,0) && reg_46(0,0)) {
matched = true;
pattern_id = 2665;
}
if(reg_87(0,0) && reg_36(0,0) && reg_22(0,0) && reg_52(0,0) && reg_22(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_3(0,0) && reg_8(0,0) && reg_9(0,0) && reg_6(0,0) && reg_10(0,0) && reg_7(0,0) && reg_24(0,0) && reg_22(0,0) && reg_88(0,0)) {
matched = true;
pattern_id = 2666;
}
if(reg_58(0,0) && reg_13(0,0) && reg_37(0,0) && reg_7(0,0) && reg_58(0,0) && reg_10(0,0) && reg_20(0,0) && reg_13(0,0) && reg_20(0,0) && reg_36(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2667;
}
if(reg_48(0,0) && reg_7(0,0) && reg_48(0,0) && reg_78(0,0)) {
matched = true;
pattern_id = 2668;
}
if(reg_48(0,0) && reg_24(0,0) && reg_15(0,0) && reg_22(0,0) && reg_46(0,0) && reg_24(0,0) && reg_13(0,0) && reg_48(0,0) && reg_17(0,0) && reg_42(0,0) && reg_24(0,0) && reg_22(0,0) && reg_23(0,0)) {
matched = true;
pattern_id = 2669;
}
if(reg_15(0,0) && reg_13(0,0) && reg_7(0,0) && reg_20(0,0) && reg_44(0,0) && reg_7(0,0) && reg_22(0,0) && reg_47(0,0) && reg_12(0,0) && reg_6(0,0) && reg_49(0,0)) {
matched = true;
pattern_id = 2670;
}
if(reg_58(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_13(0,0) && reg_48(0,0) && reg_34(0,0) && reg_7(0,0) && reg_22(0,0)) {
matched = true;
pattern_id = 2671;
}
if(reg_58(0,0) && reg_15(0,0) && reg_37(0,0) && reg_77(0,0) && reg_7(0,0) && reg_22(0,0) && reg_42(0,0) && reg_46(0,0) && reg_36(0,0) && reg_48(0,0) && reg_9(0,0) && reg_10(0,0)) {
matched = true;
pattern_id = 2672;
}
if(reg_58(0,0) && reg_68(0,0) && reg_36(0,0) && reg_13(0,0) && reg_46(0,0) && reg_7(0,0) && reg_20(0,0) && reg_49(0,0) && reg_40(0,0) && reg_18(0,0) && reg_9(0,0) && reg_42(0,0) && reg_52(0,0) && reg_58(0,0) && reg_22(0,0) && reg_7(0,0) && reg_4(0,0) && reg_17(0,0) && reg_37(0,0) && reg_18(0,0) && reg_37(0,0)) {
matched = true;
pattern_id = 2673;
}
if(reg_38(0,0) && reg_10(0,0) && reg_9(0,0) && reg_6(0,0) && reg_77(0,0) && reg_30(0,0) && reg_47(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_1(0,0) && reg_35(0,0) && reg_30(0,0) && reg_1(0,0) && reg_3(0,0) && reg_26(0,0) && reg_9(0,0) && reg_20(0,0) && reg_32(0,0) && reg_36(0,0) && reg_37(0,0) && reg_37(0,0) && reg_24(0,0) && reg_6(0,0) && reg_20(0,0) && reg_3(0,0) && reg_50(0,0) && reg_13(0,0) && reg_22(0,0) && reg_13(0,0) && reg_47(0,0) && reg_9(0,0) && reg_6(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2674;
}
if(reg_58(0,0) && reg_13(0,0) && reg_10(0,0) && reg_37(0,0) && reg_22(0,0) && reg_9(0,0) && reg_20(0,0) && reg_73(0,0) && reg_42(0,0) && reg_46(0,0) && reg_7(0,0) && reg_9(0,0) && reg_22(0,0) && reg_20(0,0) && reg_58(0,0) && reg_10(0,0) && reg_49(0,0) && reg_10(0,0) && reg_20(0,0) && reg_9(0,0) && reg_34(0,0) && reg_73(0,0) && reg_15(0,0) && reg_9(0,0) && reg_51(0,0) && reg_58(0,0) && reg_11(0,0) && reg_73(0,0) && reg_2(0,0) && reg_73(0,0) && reg_35(0,0) && reg_2(0,0) && reg_35(0,0) && reg_27(0,0) && reg_64(0,0) && reg_58(0,0) && reg_36(0,0) && reg_37(0,0) && reg_48(0,0) && reg_13(0,0) && reg_20(0,0) && reg_9(0,0) && reg_58(0,0)) {
matched = true;
pattern_id = 2675;
}
if(reg_76(0,0) && reg_5(0,0) && reg_2(0,0) && reg_76(0,0) && reg_60(0,0) && reg_25(0,0) && reg_31(0,0) && reg_46(0,0) && reg_76(0,0) && reg_5(0,0) && reg_40(0,0)) {
matched = true;
pattern_id = 2676;
}

}