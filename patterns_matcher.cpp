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
boolean reg_0[36] = {0};
boolean reg_1[83] = {0};
boolean reg_2[82] = {0};
boolean reg_3[80] = {0};
boolean reg_4[29] = {0};
boolean reg_5[70] = {0};
boolean reg_6[86] = {0};
boolean reg_7[105] = {0};
boolean reg_8[25] = {0};
boolean reg_9[98] = {0};
boolean reg_10[104] = {0};
boolean reg_11[43] = {0};
boolean reg_12[10] = {0};
boolean reg_13[91] = {0};
boolean reg_14[26] = {0};
boolean reg_15[58] = {0};
boolean reg_16[5] = {0};
boolean reg_17[14] = {0};
boolean reg_18[106] = {0};
boolean reg_19[15] = {0};
boolean reg_20[107] = {0};
boolean reg_21[8] = {0};
boolean reg_22[77] = {0};
boolean reg_23[88] = {0};
boolean reg_24[100] = {0};
boolean reg_25[59] = {0};
boolean reg_26[14] = {0};
boolean reg_27[43] = {0};
boolean reg_28[9] = {0};
boolean reg_29[8] = {0};
boolean reg_30[60] = {0};
boolean reg_31[12] = {0};
boolean reg_32[28] = {0};
boolean reg_33[11] = {0};
boolean reg_34[99] = {0};
boolean reg_35[40] = {0};
boolean reg_36[46] = {0};
boolean reg_37[94] = {0};
boolean reg_38[18] = {0};
boolean reg_39[38] = {0};
boolean reg_40[84] = {0};
boolean reg_41[37] = {0};
boolean reg_42[90] = {0};
boolean reg_43[29] = {0};
boolean reg_44[11] = {0};
boolean reg_45[5] = {0};
boolean reg_46[51] = {0};
boolean reg_47[23] = {0};
boolean reg_48[75] = {0};
boolean reg_49[70] = {0};
boolean reg_50[16] = {0};
boolean reg_51[47] = {0};
boolean reg_52[79] = {0};
boolean reg_53[36] = {0};
boolean reg_54[76] = {0};
boolean reg_55[7] = {0};
boolean reg_56[11] = {0};
boolean reg_57[3] = {0};
boolean reg_58[26] = {0};
boolean reg_59[8] = {0};
boolean reg_60[79] = {0};
boolean reg_61[81] = {0};
boolean reg_62[68] = {0};
boolean reg_63[29] = {0};
boolean reg_64[78] = {0};
boolean reg_65[38] = {0};
boolean reg_66[20] = {0};
boolean reg_67[6] = {0};
boolean reg_68[21] = {0};
boolean reg_69[17] = {0};
boolean reg_70[32] = {0};
boolean reg_71[31] = {0};
boolean reg_72[36] = {0};
boolean reg_73[25] = {0};
boolean reg_74[20] = {0};
boolean reg_75[19] = {0};
boolean reg_76[15] = {0};
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
for(int i = 0; i <35; i++){
reg_0[i] =reg_0[i + 1];
}
reg_0[35] = ('2' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <82; i++){
reg_1[i] =reg_1[i + 1];
}
reg_1[82] = ('|' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <81; i++){
reg_2[i] =reg_2[i + 1];
}
reg_2[81] = ('0' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <79; i++){
reg_3[i] =reg_3[i + 1];
}
reg_3[79] = (' ' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <28; i++){
reg_4[i] =reg_4[i + 1];
}
reg_4[28] = ('6' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <69; i++){
reg_5[i] =reg_5[i + 1];
}
reg_5[69] = ('D' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <85; i++){
reg_6[i] =reg_6[i + 1];
}
reg_6[85] = ('r' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <104; i++){
reg_7[i] =reg_7[i + 1];
}
reg_7[104] = ('i' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <24; i++){
reg_8[i] =reg_8[i + 1];
}
reg_8[24] = ('v' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <97; i++){
reg_9[i] =reg_9[i + 1];
}
reg_9[97] = ('e' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <103; i++){
reg_10[i] =reg_10[i + 1];
}
reg_10[103] = ('s' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <42; i++){
reg_11[i] =reg_11[i + 1];
}
reg_11[42] = ('4' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <9; i++){
reg_12[i] =reg_12[i + 1];
}
reg_12[9] = ('q' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <90; i++){
reg_13[i] =reg_13[i + 1];
}
reg_13[90] = ('a' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <25; i++){
reg_14[i] =reg_14[i + 1];
}
reg_14[25] = ('z' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <57; i++){
reg_15[i] =reg_15[i + 1];
}
reg_15[57] = ('w' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <4; i++){
reg_16[i] =reg_16[i + 1];
}
reg_16[4] = ('x' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <13; i++){
reg_17[i] =reg_17[i + 1];
}
reg_17[13] = ('.' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <105; i++){
reg_18[i] =reg_18[i + 1];
}
reg_18[105] = ('h' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <14; i++){
reg_19[i] =reg_19[i + 1];
}
reg_19[14] = ('G' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <106; i++){
reg_20[i] =reg_20[i + 1];
}
reg_20[106] = ('t' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <7; i++){
reg_21[i] =reg_21[i + 1];
}
reg_21[7] = ('I' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <76; i++){
reg_22[i] =reg_22[i + 1];
}
reg_22[76] = ('n' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <87; i++){
reg_23[i] =reg_23[i + 1];
}
reg_23[87] = ('f' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <99; i++){
reg_24[i] =reg_24[i + 1];
}
reg_24[99] = ('o' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <58; i++){
reg_25[i] =reg_25[i + 1];
}
reg_25[58] = ('B' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <13; i++){
reg_26[i] =reg_26[i + 1];
}
reg_26[13] = ('N' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <42; i++){
reg_27[i] =reg_27[i + 1];
}
reg_27[42] = ('1' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <8; i++){
reg_28[i] =reg_28[i + 1];
}
reg_28[8] = ('W' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <7; i++){
reg_29[i] =reg_29[i + 1];
}
reg_29[7] = ('H' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <59; i++){
reg_30[i] =reg_30[i + 1];
}
reg_30[59] = ('A' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <11; i++){
reg_31[i] =reg_31[i + 1];
}
reg_31[11] = ('T' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <27; i++){
reg_32[i] =reg_32[i + 1];
}
reg_32[27] = ('S' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <10; i++){
reg_33[i] =reg_33[i + 1];
}
reg_33[10] = ('R' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <98; i++){
reg_34[i] =reg_34[i + 1];
}
reg_34[98] = ('m' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <39; i++){
reg_35[i] =reg_35[i + 1];
}
reg_35[39] = ('3' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <45; i++){
reg_36[i] =reg_36[i + 1];
}
reg_36[45] = ('u' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <93; i++){
reg_37[i] =reg_37[i + 1];
}
reg_37[93] = ('p' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <17; i++){
reg_38[i] =reg_38[i + 1];
}
reg_38[17] = ('U' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <37; i++){
reg_39[i] =reg_39[i + 1];
}
reg_39[37] = ('F' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <83; i++){
reg_40[i] =reg_40[i + 1];
}
reg_40[83] = ('C' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <36; i++){
reg_41[i] =reg_41[i + 1];
}
reg_41[36] = ('E' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <89; i++){
reg_42[i] =reg_42[i + 1];
}
reg_42[89] = ('c' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <28; i++){
reg_43[i] =reg_43[i + 1];
}
reg_43[28] = ('5' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <10; i++){
reg_44[i] =reg_44[i + 1];
}
reg_44[10] = ('P' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <4; i++){
reg_45[i] =reg_45[i + 1];
}
reg_45[4] = ('O' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <50; i++){
reg_46[i] =reg_46[i + 1];
}
reg_46[50] = ('l' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <22; i++){
reg_47[i] =reg_47[i + 1];
}
reg_47[22] = ('g' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <74; i++){
reg_48[i] =reg_48[i + 1];
}
reg_48[74] = ('d' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <69; i++){
reg_49[i] =reg_49[i + 1];
}
reg_49[69] = ('y' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <15; i++){
reg_50[i] =reg_50[i + 1];
}
reg_50[15] = ('M' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <46; i++){
reg_51[i] =reg_51[i + 1];
}
reg_51[46] = ('b' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <78; i++){
reg_52[i] =reg_52[i + 1];
}
reg_52[78] = ('k' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <35; i++){
reg_53[i] =reg_53[i + 1];
}
reg_53[35] = ('!' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <75; i++){
reg_54[i] =reg_54[i + 1];
}
reg_54[75] = ('[' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <6; i++){
reg_55[i] =reg_55[i + 1];
}
reg_55[6] = ('*' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <10; i++){
reg_56[i] =reg_56[i + 1];
}
reg_56[10] = ('L' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <2; i++){
reg_57[i] =reg_57[i + 1];
}
reg_57[2] = ('j' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <25; i++){
reg_58[i] =reg_58[i + 1];
}
reg_58[25] = ('/' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <7; i++){
reg_59[i] =reg_59[i + 1];
}
reg_59[7] = ('>' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <78; i++){
reg_60[i] =reg_60[i + 1];
}
reg_60[78] = ('8' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <80; i++){
reg_61[i] =reg_61[i + 1];
}
reg_61[80] = ('7' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <67; i++){
reg_62[i] =reg_62[i + 1];
}
reg_62[67] = ('K' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <28; i++){
reg_63[i] =reg_63[i + 1];
}
reg_63[28] = ('?' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <77; i++){
reg_64[i] =reg_64[i + 1];
}
reg_64[77] = ('9' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <37; i++){
reg_65[i] =reg_65[i + 1];
}
reg_65[37] = ('^' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <19; i++){
reg_66[i] =reg_66[i + 1];
}
reg_66[19] = ('<' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <5; i++){
reg_67[i] =reg_67[i + 1];
}
reg_67[5] = ('+' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <20; i++){
reg_68[i] =reg_68[i + 1];
}
reg_68[20] = ('Q' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <16; i++){
reg_69[i] =reg_69[i + 1];
}
reg_69[16] = ('~' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <31; i++){
reg_70[i] =reg_70[i + 1];
}
reg_70[31] = (']' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <30; i++){
reg_71[i] =reg_71[i + 1];
}
reg_71[30] = ('@' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <35; i++){
reg_72[i] =reg_72[i + 1];
}
reg_72[35] = ('V' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <24; i++){
reg_73[i] =reg_73[i + 1];
}
reg_73[24] = ('_' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <19; i++){
reg_74[i] =reg_74[i + 1];
}
reg_74[19] = ('J' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <18; i++){
reg_75[i] =reg_75[i + 1];
}
reg_75[18] = ('X' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <14; i++){
reg_76[i] =reg_76[i + 1];
}
reg_76[14] = ('%' == buffer[buffer_size - chunk_len]);
if(reg_0[0] && reg_1[48] && reg_2[48] && reg_2[49] && reg_3[48] && reg_2[51] && reg_2[52] && reg_3[51] && reg_2[54] && reg_2[55] && reg_3[54] && reg_2[57] && reg_4[5] && reg_3[57] && reg_2[60] && reg_2[61] && reg_3[60] && reg_2[63] && reg_2[64] && reg_3[63] && reg_2[66] && reg_2[67] && reg_1[69] && reg_5[57] && reg_6[74] && reg_7[94] && reg_8[15] && reg_9[89] && reg_10[96] && reg_1[76] && reg_0[30] && reg_11[38] && reg_3[76] && reg_2[79] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 0;
}
if(reg_12[0] && reg_13[82] && reg_14[18] && reg_15[51] && reg_10[98] && reg_16[0] && reg_17[10] && reg_18[103] && reg_10[102] && reg_12[9]) {
matched = true;
pattern_id = 1;
}
if(reg_19[4] && reg_9[88] && reg_20[98] && reg_21[0] && reg_22[70] && reg_23[82] && reg_24[95] && reg_1[79] && reg_2[79] && reg_5[68] && reg_1[82]) {
matched = true;
pattern_id = 2;
}
if(reg_25[44] && reg_26[0] && reg_1[70] && reg_27[31] && reg_2[71] && reg_3[70] && reg_2[73] && reg_2[74] && reg_3[73] && reg_2[76] && reg_0[31] && reg_3[76] && reg_2[79] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 3;
}
if(reg_28[1] && reg_29[1] && reg_30[54] && reg_31[7] && reg_21[4] && reg_32[25] && reg_21[6] && reg_31[11]) {
matched = true;
pattern_id = 4;
}
if(reg_33[0] && reg_9[88] && reg_34[90] && reg_24[92] && reg_20[100] && reg_9[92] && reg_1[78] && reg_35[36] && reg_30[57] && reg_1[81] && reg_3[79]) {
matched = true;
pattern_id = 5;
}
if(reg_28[0] && reg_20[99] && reg_14[19] && reg_36[40] && reg_37[89] && reg_3[76] && reg_38[15] && reg_10[102] && reg_9[97]) {
matched = true;
pattern_id = 6;
}
if(reg_39[35] && reg_40[82] && reg_3[79]) {
matched = true;
pattern_id = 7;
}
if(reg_18[102] && reg_24[97] && reg_10[102] && reg_20[106]) {
matched = true;
pattern_id = 8;
}
if(reg_38[14] && reg_32[25] && reg_41[35] && reg_33[10]) {
matched = true;
pattern_id = 9;
}
if(reg_26[5] && reg_9[90] && reg_20[100] && reg_32[22] && reg_37[89] && reg_18[102] && reg_9[95] && reg_6[84] && reg_9[97]) {
matched = true;
pattern_id = 10;
}
if(reg_19[4] && reg_13[81] && reg_20[98] && reg_9[90] && reg_40[77] && reg_6[80] && reg_13[86] && reg_10[100] && reg_18[103] && reg_9[96] && reg_6[85]) {
matched = true;
pattern_id = 11;
}
if(reg_42[82] && reg_1[76] && reg_35[34] && reg_30[55] && reg_3[76] && reg_43[26] && reg_40[82] && reg_1[82]) {
matched = true;
pattern_id = 12;
}
if(reg_39[33] && reg_31[8] && reg_44[8] && reg_45[3] && reg_26[13]) {
matched = true;
pattern_id = 13;
}
if(reg_39[25] && reg_31[0] && reg_44[0] && reg_3[70] && reg_44[2] && reg_24[92] && reg_6[79] && reg_20[101] && reg_3[75] && reg_24[96] && reg_37[91] && reg_9[96] && reg_22[76]) {
matched = true;
pattern_id = 14;
}
if(reg_13[83] && reg_42[83] && reg_20[101] && reg_7[100] && reg_8[21] && reg_13[88] && reg_20[105] && reg_9[97]) {
matched = true;
pattern_id = 15;
}
if(reg_46[42] && reg_24[92] && reg_47[16] && reg_47[17] && reg_9[93] && reg_48[71] && reg_3[77] && reg_7[103] && reg_22[76]) {
matched = true;
pattern_id = 16;
}
if(reg_1[76] && reg_25[53] && reg_11[38] && reg_3[76] && reg_25[56] && reg_11[41] && reg_1[82]) {
matched = true;
pattern_id = 17;
}
if(reg_49[64] && reg_37[89] && reg_7[101] && reg_2[79] && reg_42[88] && reg_13[90]) {
matched = true;
pattern_id = 18;
}
if(reg_30[38] && reg_18[85] && reg_18[86] && reg_18[87] && reg_18[88] && reg_3[63] && reg_50[0] && reg_49[55] && reg_3[66] && reg_50[3] && reg_24[88] && reg_36[35] && reg_20[97] && reg_18[97] && reg_3[72] && reg_21[1] && reg_10[98] && reg_3[75] && reg_45[1] && reg_37[91] && reg_9[96] && reg_22[76]) {
matched = true;
pattern_id = 19;
}
if(reg_37[77] && reg_18[90] && reg_30[45] && reg_10[90] && reg_9[85] && reg_3[68] && reg_14[15] && reg_9[88] && reg_6[77] && reg_24[92] && reg_3[73] && reg_10[98] && reg_9[93] && reg_6[82] && reg_8[22] && reg_9[96] && reg_6[85]) {
matched = true;
pattern_id = 20;
}
if(reg_15[52] && reg_2[77] && reg_2[78] && reg_15[55] && reg_2[80] && reg_2[81]) {
matched = true;
pattern_id = 21;
}
if(reg_51[39] && reg_13[84] && reg_42[84] && reg_52[74] && reg_48[71] && reg_24[97] && reg_24[98] && reg_6[85]) {
matched = true;
pattern_id = 22;
}
if(reg_6[82] && reg_2[79] && reg_2[80] && reg_20[106]) {
matched = true;
pattern_id = 23;
}
if(reg_6[82] && reg_9[95] && reg_15[56] && reg_20[106]) {
matched = true;
pattern_id = 24;
}
if(reg_15[52] && reg_18[101] && reg_2[78] && reg_2[79] && reg_20[105] && reg_53[35]) {
matched = true;
pattern_id = 25;
}
if(reg_46[45] && reg_6[81] && reg_52[75] && reg_6[83] && reg_2[80] && reg_16[4]) {
matched = true;
pattern_id = 26;
}
if(reg_48[69] && reg_27[38] && reg_35[36] && reg_18[103] && reg_18[104] && reg_54[75]) {
matched = true;
pattern_id = 27;
}
if(reg_10[98] && reg_13[86] && reg_20[103] && reg_24[97] && reg_6[84] && reg_7[104]) {
matched = true;
pattern_id = 28;
}
if(reg_18[101] && reg_13[87] && reg_16[2] && reg_2[80] && reg_6[85]) {
matched = true;
pattern_id = 29;
}
if(reg_23[82] && reg_6[81] && reg_7[101] && reg_48[72] && reg_13[89] && reg_49[69]) {
matched = true;
pattern_id = 30;
}
if(reg_32[22] && reg_20[102] && reg_24[96] && reg_24[97] && reg_47[21] && reg_33[10]) {
matched = true;
pattern_id = 31;
}
if(reg_15[54] && reg_13[88] && reg_22[75] && reg_52[78]) {
matched = true;
pattern_id = 32;
}
if(reg_27[39] && reg_0[33] && reg_35[38] && reg_11[42]) {
matched = true;
pattern_id = 33;
}
if(reg_30[50] && reg_30[51] && reg_30[52] && reg_30[53] && reg_30[54] && reg_30[55] && reg_30[56] && reg_30[57] && reg_30[58] && reg_30[59]) {
matched = true;
pattern_id = 34;
}
if(reg_44[7] && reg_45[2] && reg_26[12] && reg_19[14]) {
matched = true;
pattern_id = 35;
}
if(reg_10[98] && reg_7[100] && reg_42[86] && reg_52[76] && reg_9[96] && reg_22[76]) {
matched = true;
pattern_id = 36;
}
if(reg_23[82] && reg_7[100] && reg_42[86] && reg_52[76] && reg_9[96] && reg_22[76]) {
matched = true;
pattern_id = 37;
}
if(reg_10[94] && reg_37[85] && reg_24[92] && reg_24[93] && reg_23[82] && reg_15[53] && reg_24[96] && reg_6[83] && reg_52[77] && reg_10[103]) {
matched = true;
pattern_id = 38;
}
if(reg_10[98] && reg_52[74] && reg_7[101] && reg_46[48] && reg_46[49] && reg_14[25]) {
matched = true;
pattern_id = 39;
}
if(reg_46[42] && reg_24[92] && reg_47[16] && reg_7[99] && reg_22[72] && reg_1[79] && reg_35[37] && reg_30[58] && reg_1[82]) {
matched = true;
pattern_id = 40;
}
if(reg_46[48] && reg_11[41] && reg_11[42]) {
matched = true;
pattern_id = 41;
}
if(reg_55[0] && reg_29[2] && reg_41[32] && reg_56[7] && reg_56[8] && reg_45[3] && reg_55[6]) {
matched = true;
pattern_id = 42;
}
if(reg_51[33] && reg_9[85] && reg_20[95] && reg_13[80] && reg_13[81] && reg_46[42] && reg_34[91] && reg_24[93] && reg_10[98] && reg_20[102] && reg_48[71] && reg_24[97] && reg_22[75] && reg_9[97]) {
matched = true;
pattern_id = 43;
}
if(reg_47[17] && reg_45[0] && reg_6[82] && reg_13[88] && reg_8[23] && reg_9[97]) {
matched = true;
pattern_id = 44;
}
if(reg_52[73] && reg_7[100] && reg_46[47] && reg_46[48] && reg_34[97] && reg_9[97]) {
matched = true;
pattern_id = 45;
}
if(reg_47[12] && reg_9[88] && reg_10[95] && reg_36[38] && reg_22[70] && reg_48[69] && reg_18[101] && reg_9[94] && reg_7[102] && reg_20[105] && reg_53[35]) {
matched = true;
pattern_id = 46;
}
if(reg_46[44] && reg_11[37] && reg_11[38] && reg_13[87] && reg_48[72] && reg_10[102] && reg_46[50]) {
matched = true;
pattern_id = 47;
}
if(reg_10[93] && reg_18[96] && reg_9[89] && reg_46[43] && reg_46[44] && reg_3[74] && reg_51[42] && reg_24[96] && reg_36[43] && reg_22[75] && reg_48[74]) {
matched = true;
pattern_id = 48;
}
if(reg_13[80] && reg_46[41] && reg_7[96] && reg_8[17] && reg_9[91] && reg_3[74] && reg_20[102] && reg_7[101] && reg_57[0] && reg_47[21] && reg_36[45]) {
matched = true;
pattern_id = 49;
}
if(reg_13[86] && reg_46[47] && reg_7[102] && reg_8[23] && reg_9[97]) {
matched = true;
pattern_id = 50;
}
if(reg_22[68] && reg_9[90] && reg_15[51] && reg_10[98] && reg_9[93] && reg_6[82] && reg_8[22] && reg_9[96] && reg_6[85]) {
matched = true;
pattern_id = 51;
}
if(reg_10[97] && reg_20[101] && reg_6[81] && reg_9[94] && reg_13[88] && reg_34[97] && reg_58[25]) {
matched = true;
pattern_id = 52;
}
if(reg_37[90] && reg_7[102] && reg_22[75] && reg_47[22]) {
matched = true;
pattern_id = 53;
}
if(reg_37[90] && reg_24[97] && reg_22[75] && reg_47[22]) {
matched = true;
pattern_id = 54;
}
if(reg_59[7]) {
matched = true;
pattern_id = 55;
}
if(reg_1[52] && reg_60[49] && reg_43[0] && reg_3[52] && reg_60[52] && reg_2[56] && reg_3[55] && reg_2[58] && reg_2[59] && reg_3[58] && reg_2[61] && reg_27[23] && reg_3[61] && reg_2[64] && reg_2[65] && reg_3[64] && reg_2[67] && reg_27[29] && reg_3[67] && reg_2[70] && reg_2[71] && reg_3[70] && reg_2[73] && reg_2[74] && reg_3[73] && reg_2[76] && reg_2[77] && reg_3[76] && reg_2[79] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 56;
}
if(reg_1[76] && reg_60[73] && reg_27[38] && reg_3[76] && reg_60[76] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 57;
}
if(reg_1[61] && reg_2[61] && reg_2[62] && reg_3[61] && reg_2[64] && reg_27[26] && reg_3[64] && reg_2[67] && reg_2[68] && reg_3[67] && reg_2[70] && reg_2[71] && reg_3[70] && reg_2[73] && reg_2[74] && reg_3[73] && reg_2[76] && reg_2[77] && reg_3[76] && reg_2[79] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 58;
}
if(reg_1[72] && reg_2[72] && reg_61[72] && reg_1[75] && reg_13[84] && reg_36[40] && reg_20[102] && reg_18[102] && reg_24[97] && reg_6[84] && reg_10[103]) {
matched = true;
pattern_id = 59;
}
if(reg_1[72] && reg_2[72] && reg_61[72] && reg_1[75] && reg_8[18] && reg_9[92] && reg_6[81] && reg_10[100] && reg_7[102] && reg_24[98] && reg_22[76]) {
matched = true;
pattern_id = 60;
}
if(reg_17[5] && reg_17[6] && reg_58[19] && reg_17[8] && reg_17[9] && reg_58[22] && reg_17[11] && reg_17[12] && reg_58[25]) {
matched = true;
pattern_id = 61;
}
if(reg_20[0] && reg_18[0] && reg_7[0] && reg_10[0] && reg_7[2] && reg_10[2] && reg_10[3] && reg_24[0] && reg_34[0] && reg_9[0] && reg_20[10] && reg_9[2] && reg_34[4] && reg_37[0] && reg_10[11] && reg_37[2] && reg_13[0] && reg_42[0] && reg_9[9] && reg_23[0] && reg_24[13] && reg_6[0] && reg_20[22] && reg_18[22] && reg_9[15] && reg_10[22] && reg_24[19] && reg_42[10] && reg_52[0] && reg_7[27] && reg_22[0] && reg_13[15] && reg_48[0] && reg_48[1] && reg_6[13] && reg_7[33] && reg_22[6] && reg_49[0] && reg_9[29] && reg_13[23] && reg_18[39] && reg_49[4] && reg_9[33] && reg_13[27] && reg_18[43] && reg_7[43] && reg_52[18] && reg_22[17] && reg_24[41] && reg_15[0] && reg_20[50] && reg_18[50] && reg_7[50] && reg_10[50] && reg_7[52] && reg_10[52] && reg_46[0] && reg_13[41] && reg_34[50] && reg_9[50] && reg_51[0] && reg_36[0] && reg_20[62] && reg_13[47] && reg_22[34] && reg_49[28] && reg_15[17] && reg_13[51] && reg_49[31] && reg_15[20] && reg_18[69] && reg_24[64] && reg_42[55] && reg_13[57] && reg_6[53] && reg_9[66] && reg_10[73] && reg_18[76] && reg_24[71] && reg_6[58] && reg_7[78] && reg_14[0] && reg_24[75] && reg_22[53] && reg_47[0] && reg_24[78] && reg_20[86] && reg_7[85] && reg_20[88] && reg_15[40] && reg_24[83] && reg_6[70] && reg_52[64] && reg_7[91] && reg_22[64] && reg_47[11] && reg_10[93] && reg_24[90] && reg_13[82] && reg_46[43] && reg_46[44] && reg_7[99] && reg_10[99] && reg_42[86] && reg_24[97] && reg_24[98] && reg_46[50]) {
matched = true;
pattern_id = 62;
}
if(reg_30[52] && reg_5[63] && reg_50[10] && reg_33[6] && reg_45[1] && reg_40[81] && reg_62[66] && reg_32[27]) {
matched = true;
pattern_id = 63;
}
if(reg_1[54] && reg_40[56] && reg_5[43] && reg_3[54] && reg_60[54] && reg_2[58] && reg_3[57] && reg_41[15] && reg_60[58] && reg_3[60] && reg_5[51] && reg_61[63] && reg_3[63] && reg_39[22] && reg_39[23] && reg_3[66] && reg_39[25] && reg_39[26] && reg_3[69] && reg_39[28] && reg_39[29] && reg_1[75] && reg_58[19] && reg_51[41] && reg_7[100] && reg_22[73] && reg_58[23] && reg_10[102] && reg_18[105]) {
matched = true;
pattern_id = 64;
}
if(reg_27[7] && reg_1[48] && reg_40[50] && reg_2[49] && reg_3[48] && reg_25[28] && reg_2[52] && reg_1[54] && reg_63[1] && reg_27[16] && reg_1[57] && reg_5[45] && reg_25[35] && reg_3[57] && reg_25[37] && reg_35[19] && reg_3[60] && reg_39[19] && reg_39[20] && reg_1[66] && reg_27[27] && reg_1[68] && reg_40[70] && reg_64[65] && reg_3[68] && reg_40[73] && reg_5[60] && reg_3[71] && reg_60[71] && reg_2[75] && reg_1[77] && reg_27[38] && reg_1[79] && reg_40[81] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 65;
}
if(reg_27[8] && reg_1[49] && reg_40[51] && reg_2[50] && reg_3[49] && reg_25[29] && reg_2[53] && reg_3[52] && reg_2[55] && reg_0[10] && reg_3[55] && reg_40[60] && reg_5[47] && reg_3[58] && reg_60[58] && reg_2[62] && reg_3[61] && reg_60[61] && reg_43[12] && reg_3[64] && reg_40[69] && reg_2[68] && reg_1[70] && reg_36[34] && reg_56[0] && reg_1[73] && reg_41[28] && reg_25[51] && reg_1[76] && reg_56[5] && reg_65[33] && reg_1[79] && reg_25[56] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 66;
}
if(reg_1[44] && reg_60[41] && reg_64[41] && reg_3[44] && reg_39[3] && reg_61[47] && reg_3[47] && reg_0[4] && reg_64[47] && reg_3[50] && reg_40[55] && reg_61[53] && reg_3[53] && reg_60[53] && reg_64[53] && reg_3[56] && reg_39[15] && reg_35[18] && reg_3[59] && reg_60[59] && reg_64[59] && reg_3[62] && reg_39[21] && reg_64[62] && reg_3[65] && reg_60[65] && reg_64[65] && reg_3[68] && reg_39[27] && reg_0[26] && reg_3[71] && reg_30[52] && reg_40[77] && reg_1[77] && reg_66[15] && reg_1[79] && reg_39[35] && reg_41[35] && reg_1[82]) {
matched = true;
pattern_id = 67;
}
if(reg_1[46] && reg_41[1] && reg_25[24] && reg_1[49] && reg_22[44] && reg_65[6] && reg_1[52] && reg_40[54] && reg_4[0] && reg_3[52] && reg_2[55] && reg_4[3] && reg_3[55] && reg_64[54] && reg_30[37] && reg_1[61] && reg_27[22] && reg_1[63] && reg_40[65] && reg_64[60] && reg_3[63] && reg_60[63] && reg_64[63] && reg_1[69] && reg_26[1] && reg_1[71] && reg_2[71] && reg_27[33] && reg_3[71] && reg_40[76] && reg_4[22] && reg_1[77] && reg_39[33] && reg_1[79] && reg_2[79] && reg_43[27] && reg_1[82]) {
matched = true;
pattern_id = 68;
}
if(reg_1[36] && reg_64[32] && reg_2[37] && reg_3[36] && reg_27[0] && reg_30[18] && reg_3[39] && reg_40[44] && reg_2[43] && reg_3[42] && reg_2[45] && reg_39[2] && reg_3[45] && reg_64[44] && reg_2[49] && reg_3[48] && reg_2[51] && reg_0[6] && reg_1[54] && reg_3[52] && reg_1[56] && reg_2[56] && reg_60[54] && reg_3[56] && reg_64[55] && reg_0[14] && reg_3[59] && reg_2[62] && reg_0[17] && reg_1[65] && reg_3[63] && reg_1[67] && reg_2[67] && reg_39[24] && reg_3[67] && reg_5[58] && reg_2[71] && reg_3[70] && reg_0[27] && reg_35[32] && reg_3[73] && reg_25[53] && reg_39[33] && reg_3[76] && reg_39[35] && reg_60[77] && reg_1[82]) {
matched = true;
pattern_id = 69;
}
if(reg_67[0] && reg_67[1] && reg_67[2] && reg_13[88] && reg_20[105] && reg_18[105]) {
matched = true;
pattern_id = 70;
}
if(reg_1[67] && reg_39[23] && reg_39[24] && reg_3[67] && reg_39[26] && reg_11[32] && reg_3[70] && reg_39[29] && reg_39[30] && reg_3[73] && reg_39[32] && reg_5[65] && reg_3[76] && reg_2[79] && reg_4[27] && reg_1[82]) {
matched = true;
pattern_id = 71;
}
if(reg_58[0] && reg_8[0] && reg_7[81] && reg_9[75] && reg_15[36] && reg_10[83] && reg_24[80] && reg_36[27] && reg_6[68] && reg_42[73] && reg_9[82] && reg_58[11] && reg_20[93] && reg_9[85] && reg_34[87] && reg_37[83] && reg_46[41] && reg_13[82] && reg_20[99] && reg_9[91] && reg_17[8] && reg_18[101] && reg_20[103] && reg_34[96] && reg_46[49] && reg_63[28]) {
matched = true;
pattern_id = 72;
}
if(reg_26[6] && reg_30[53] && reg_50[10] && reg_41[32] && reg_26[10] && reg_30[57] && reg_50[14] && reg_41[36]) {
matched = true;
pattern_id = 73;
}
if(reg_35[0] && reg_1[44] && reg_40[46] && reg_64[41] && reg_3[44] && reg_25[24] && reg_27[9] && reg_3[47] && reg_27[11] && reg_2[51] && reg_1[53] && reg_63[0] && reg_1[55] && reg_41[10] && reg_64[52] && reg_3[55] && reg_2[58] && reg_4[6] && reg_1[61] && reg_68[0] && reg_66[0] && reg_1[64] && reg_39[20] && reg_30[43] && reg_1[67] && reg_19[0] && reg_35[26] && reg_1[70] && reg_40[72] && reg_2[71] && reg_1[73] && reg_44[2] && reg_1[75] && reg_39[31] && reg_61[75] && reg_3[75] && reg_5[66] && reg_2[79] && reg_1[81] && reg_44[10]) {
matched = true;
pattern_id = 74;
}
if(reg_65[2] && reg_1[48] && reg_2[48] && reg_41[4] && reg_1[51] && reg_27[12] && reg_1[53] && reg_40[55] && reg_2[54] && reg_3[53] && reg_25[33] && reg_2[57] && reg_3[56] && reg_35[17] && reg_25[37] && reg_3[59] && reg_60[59] && reg_5[51] && reg_1[65] && reg_69[0] && reg_1[67] && reg_2[67] && reg_41[23] && reg_3[67] && reg_60[67] && reg_64[67] && reg_3[70] && reg_39[29] && reg_30[52] && reg_3[73] && reg_60[73] && reg_64[73] && reg_3[76] && reg_39[35] && reg_64[76] && reg_1[82]) {
matched = true;
pattern_id = 75;
}
if(reg_18[73] && reg_70[0] && reg_65[7] && reg_1[53] && reg_39[9] && reg_39[10] && reg_3[53] && reg_5[44] && reg_43[4] && reg_3[56] && reg_39[15] && reg_39[16] && reg_3[59] && reg_5[50] && reg_11[24] && reg_3[62] && reg_39[21] && reg_39[22] && reg_3[65] && reg_39[24] && reg_43[16] && reg_3[68] && reg_60[68] && reg_25[49] && reg_3[71] && reg_39[30] && reg_43[22] && reg_3[74] && reg_64[73] && reg_2[78] && reg_1[80] && reg_23[86] && reg_27[42]) {
matched = true;
pattern_id = 76;
}
if(reg_1[49] && reg_5[37] && reg_60[47] && reg_1[52] && reg_71[1] && reg_1[54] && reg_40[56] && reg_5[43] && reg_3[54] && reg_60[54] && reg_2[58] && reg_3[57] && reg_41[15] && reg_60[58] && reg_3[60] && reg_5[51] && reg_64[60] && reg_3[63] && reg_39[22] && reg_39[23] && reg_3[66] && reg_39[25] && reg_39[26] && reg_3[69] && reg_39[28] && reg_39[29] && reg_1[75] && reg_58[19] && reg_51[41] && reg_7[100] && reg_22[73] && reg_58[23] && reg_10[102] && reg_18[105]) {
matched = true;
pattern_id = 77;
}
if(reg_72[0] && reg_1[48] && reg_2[48] && reg_41[4] && reg_1[51] && reg_27[12] && reg_1[53] && reg_40[55] && reg_2[54] && reg_3[53] && reg_25[33] && reg_2[57] && reg_3[56] && reg_35[17] && reg_25[37] && reg_3[59] && reg_60[59] && reg_5[51] && reg_1[65] && reg_69[0] && reg_1[67] && reg_27[28] && reg_0[22] && reg_3[67] && reg_60[67] && reg_64[67] && reg_3[70] && reg_39[29] && reg_64[70] && reg_3[73] && reg_60[73] && reg_64[73] && reg_3[76] && reg_39[35] && reg_64[76] && reg_1[82]) {
matched = true;
pattern_id = 78;
}
if(reg_1[60] && reg_41[15] && reg_60[58] && reg_3[60] && reg_5[51] && reg_64[60] && reg_3[63] && reg_39[22] && reg_39[23] && reg_3[66] && reg_39[25] && reg_39[26] && reg_3[69] && reg_39[28] && reg_39[29] && reg_1[75] && reg_58[19] && reg_51[41] && reg_7[100] && reg_22[73] && reg_58[23] && reg_10[102] && reg_18[105]) {
matched = true;
pattern_id = 79;
}
if(reg_1[53] && reg_41[8] && reg_25[31] && reg_1[56] && reg_58[0] && reg_73[0] && reg_1[59] && reg_41[14] && reg_25[37] && reg_1[62] && reg_74[0] && reg_65[19] && reg_1[65] && reg_60[62] && reg_64[62] && reg_3[65] && reg_39[24] && reg_25[46] && reg_3[68] && reg_60[68] && reg_64[68] && reg_1[74] && reg_59[0] && reg_1[76] && reg_60[73] && reg_64[73] && reg_3[76] && reg_39[35] && reg_0[34] && reg_1[82]) {
matched = true;
pattern_id = 80;
}
if(reg_1[50] && reg_41[5] && reg_25[28] && reg_3[50] && reg_0[7] && reg_35[12] && reg_1[56] && reg_65[12] && reg_35[15] && reg_1[59] && reg_40[61] && reg_2[60] && reg_3[59] && reg_60[59] && reg_60[60] && reg_1[65] && reg_39[21] && reg_1[67] && reg_39[23] && reg_30[46] && reg_3[67] && reg_60[67] && reg_64[67] && reg_1[73] && reg_39[29] && reg_1[75] && reg_39[31] && reg_43[23] && reg_3[75] && reg_60[75] && reg_64[75] && reg_1[81] && reg_4[28]) {
matched = true;
pattern_id = 81;
}
if(reg_40[0] && reg_1[0] && reg_2[0] && reg_61[0] && reg_3[0] && reg_60[0] && reg_64[0] && reg_1[6] && reg_54[0] && reg_1[8] && reg_2[8] && reg_60[6] && reg_3[8] && reg_60[8] && reg_5[0] && reg_1[14] && reg_62[0] && reg_1[16] && reg_2[16] && reg_60[14] && reg_3[16] && reg_60[16] && reg_64[16] && reg_1[22] && reg_40[24] && reg_1[24] && reg_2[24] && reg_40[27] && reg_3[24] && reg_25[4] && reg_2[28] && reg_3[27] && reg_2[30] && reg_25[8] && reg_3[30] && reg_40[35] && reg_5[22] && reg_3[33] && reg_60[33] && reg_2[37] && reg_1[39] && reg_27[0] && reg_1[41] && reg_40[43] && reg_2[42] && reg_3[41] && reg_39[0] && reg_41[0] && reg_3[44] && reg_40[49] && reg_2[48] && reg_3[47] && reg_40[52] && reg_5[39] && reg_3[50] && reg_60[50] && reg_2[54] && reg_3[53] && reg_41[11] && reg_60[54] && reg_3[56] && reg_64[55] && reg_11[21] && reg_3[59] && reg_39[18] && reg_39[19] && reg_3[62] && reg_39[21] && reg_39[22] && reg_3[65] && reg_39[24] && reg_39[25] && reg_1[71] && reg_58[15] && reg_51[37] && reg_7[96] && reg_22[69] && reg_58[19] && reg_10[98] && reg_18[101] && reg_1[79] && reg_2[79] && reg_30[58] && reg_1[82]) {
matched = true;
pattern_id = 82;
}
if(reg_75[0] && reg_75[1] && reg_75[2] && reg_75[3] && reg_76[0] && reg_17[0] && reg_27[30] && reg_61[69] && reg_0[25] && reg_36[36] && reg_76[6] && reg_35[32] && reg_2[75] && reg_2[76] && reg_1[78] && reg_0[32] && reg_11[40] && reg_1[81] && reg_22[76]) {
matched = true;
pattern_id = 83;
}
if(reg_1[22] && reg_30[0] && reg_25[0] && reg_3[22] && reg_40[27] && reg_5[14] && reg_3[25] && reg_2[28] && reg_64[25] && reg_3[28] && reg_60[28] && reg_2[32] && reg_3[31] && reg_2[34] && reg_2[35] && reg_3[34] && reg_2[37] && reg_2[38] && reg_3[37] && reg_2[40] && reg_2[41] && reg_3[40] && reg_2[43] && reg_27[5] && reg_3[43] && reg_2[46] && reg_2[47] && reg_3[46] && reg_2[49] && reg_2[50] && reg_3[49] && reg_2[52] && reg_2[53] && reg_3[52] && reg_2[55] && reg_2[56] && reg_3[55] && reg_2[58] && reg_2[59] && reg_3[58] && reg_2[61] && reg_2[62] && reg_3[61] && reg_2[64] && reg_27[26] && reg_3[64] && reg_2[67] && reg_2[68] && reg_3[67] && reg_2[70] && reg_27[32] && reg_1[73] && reg_3[71] && reg_3[72] && reg_3[73] && reg_3[74] && reg_1[78] && reg_2[78] && reg_0[33] && reg_1[81] && reg_13[90]) {
matched = true;
pattern_id = 84;
}
if(reg_1[57] && reg_41[12] && reg_25[35] && reg_3[57] && reg_61[59] && reg_39[17] && reg_1[63] && reg_70[13] && reg_38[0] && reg_1[66] && reg_39[22] && reg_41[22] && reg_1[69] && reg_50[3] && reg_1[71] && reg_64[67] && reg_60[69] && reg_3[71] && reg_39[30] && reg_41[30] && reg_1[77] && reg_50[11] && reg_1[79] && reg_64[75] && reg_25[57] && reg_1[82]) {
matched = true;
pattern_id = 85;
}
if(reg_15[47] && reg_18[96] && reg_24[91] && reg_7[97] && reg_10[97] && reg_1[77] && reg_35[35] && reg_30[56] && reg_1[80] && reg_58[24] && reg_58[25]) {
matched = true;
pattern_id = 86;
}
if(reg_19[1] && reg_41[24] && reg_31[0] && reg_3[69] && reg_58[16] && reg_3[71] && reg_29[0] && reg_31[5] && reg_31[6] && reg_44[6] && reg_58[22] && reg_27[40] && reg_17[12] && reg_27[42]) {
matched = true;
pattern_id = 87;
}
if(reg_1[49] && reg_41[4] && reg_25[27] && reg_1[52] && reg_62[38] && reg_54[47] && reg_32[0] && reg_0[9] && reg_1[57] && reg_41[12] && reg_11[19] && reg_3[57] && reg_60[57] && reg_35[19] && reg_3[60] && reg_40[65] && reg_35[22] && reg_3[63] && reg_2[66] && reg_25[44] && reg_1[69] && reg_62[55] && reg_1[71] && reg_60[68] && reg_60[69] && reg_3[71] && reg_0[28] && reg_35[33] && reg_3[74] && reg_25[54] && reg_60[75] && reg_1[80] && reg_44[9] && reg_15[57]) {
matched = true;
pattern_id = 88;
}
if(reg_1[38] && reg_25[15] && reg_11[0] && reg_1[41] && reg_3[39] && reg_1[43] && reg_25[20] && reg_11[5] && reg_1[46] && reg_53[0] && reg_1[48] && reg_60[45] && reg_25[26] && reg_3[48] && reg_40[53] && reg_40[54] && reg_3[51] && reg_60[51] && reg_35[13] && reg_3[54] && reg_41[12] && reg_64[54] && reg_3[57] && reg_2[60] && reg_11[22] && reg_3[60] && reg_60[60] && reg_25[41] && reg_3[63] && reg_27[27] && reg_64[63] && reg_1[69] && reg_35[27] && reg_1[71] && reg_40[73] && reg_64[68] && reg_1[74] && reg_23[80] && reg_1[76] && reg_25[53] && reg_64[73] && reg_3[76] && reg_27[40] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 89;
}
if(reg_23[47] && reg_6[46] && reg_24[61] && reg_34[61] && reg_1[46] && reg_35[4] && reg_30[25] && reg_3[46] && reg_64[45] && reg_2[50] && reg_3[49] && reg_64[48] && reg_2[53] && reg_3[52] && reg_64[51] && reg_2[56] && reg_3[55] && reg_64[54] && reg_2[59] && reg_3[58] && reg_64[57] && reg_2[62] && reg_3[61] && reg_64[60] && reg_2[65] && reg_3[64] && reg_64[63] && reg_2[68] && reg_3[67] && reg_64[66] && reg_2[71] && reg_3[70] && reg_64[69] && reg_2[74] && reg_3[73] && reg_64[72] && reg_2[77] && reg_3[76] && reg_64[75] && reg_2[80] && reg_1[82]) {
matched = true;
pattern_id = 90;
}
if(reg_1[47] && reg_41[2] && reg_25[25] && reg_1[50] && reg_41[5] && reg_1[52] && reg_41[7] && reg_25[30] && reg_1[55] && reg_3[53] && reg_54[50] && reg_1[58] && reg_39[14] && reg_40[61] && reg_1[61] && reg_35[19] && reg_1[63] && reg_40[65] && reg_64[60] && reg_3[63] && reg_25[43] && reg_27[28] && reg_3[66] && reg_60[66] && reg_0[24] && reg_3[69] && reg_60[69] && reg_25[50] && reg_3[72] && reg_39[31] && reg_35[34] && reg_3[75] && reg_60[75] && reg_2[79] && reg_1[81] && reg_67[5]) {
matched = true;
pattern_id = 91;
}
if(reg_1[46] && reg_2[46] && reg_27[8] && reg_3[46] && reg_2[49] && reg_35[8] && reg_3[49] && reg_2[52] && reg_2[53] && reg_3[52] && reg_2[55] && reg_2[56] && reg_3[55] && reg_2[58] && reg_2[59] && reg_3[58] && reg_2[61] && reg_2[62] && reg_3[61] && reg_2[64] && reg_2[65] && reg_3[64] && reg_2[67] && reg_27[29] && reg_3[67] && reg_2[70] && reg_2[71] && reg_3[70] && reg_2[73] && reg_0[28] && reg_3[73] && reg_2[76] && reg_0[31] && reg_3[76] && reg_41[34] && reg_60[77] && reg_1[82]) {
matched = true;
pattern_id = 92;
}
if(reg_1[44] && reg_60[41] && reg_2[45] && reg_3[44] && reg_2[47] && reg_2[48] && reg_3[47] && reg_2[50] && reg_61[50] && reg_3[50] && reg_2[53] && reg_2[54] && reg_3[53] && reg_2[56] && reg_2[57] && reg_3[56] && reg_2[59] && reg_2[60] && reg_3[59] && reg_2[62] && reg_2[63] && reg_3[62] && reg_2[65] && reg_2[66] && reg_3[65] && reg_2[68] && reg_27[30] && reg_1[71] && reg_63[18] && reg_1[73] && reg_2[73] && reg_2[74] && reg_3[73] && reg_2[76] && reg_27[38] && reg_3[76] && reg_2[79] && reg_0[34] && reg_1[82]) {
matched = true;
pattern_id = 93;
}
if(reg_65[0] && reg_1[46] && reg_25[23] && reg_2[47] && reg_3[46] && reg_2[49] && reg_0[4] && reg_3[49] && reg_60[49] && reg_64[49] && reg_3[52] && reg_2[55] && reg_4[3] && reg_3[55] && reg_39[14] && reg_41[14] && reg_3[58] && reg_40[63] && reg_60[59] && reg_3[61] && reg_60[61] && reg_64[61] && reg_1[67] && reg_39[23] && reg_1[69] && reg_2[69] && reg_11[31] && reg_3[69] && reg_25[49] && reg_2[73] && reg_3[72] && reg_2[75] && reg_4[23] && reg_3[75] && reg_60[75] && reg_64[75] && reg_1[81] && reg_39[37]) {
matched = true;
pattern_id = 94;
}
if(reg_1[53] && reg_41[8] && reg_25[31] && reg_1[56] && reg_72[10] && reg_65[13] && reg_72[12] && reg_72[13] && reg_72[14] && reg_27[22] && reg_1[63] && reg_5[51] && reg_0[18] && reg_3[63] && reg_60[63] && reg_60[64] && reg_1[69] && reg_72[23] && reg_1[71] && reg_2[71] && reg_25[49] && reg_3[71] && reg_60[71] && reg_60[72] && reg_1[77] && reg_72[31] && reg_1[79] && reg_27[40] && reg_41[35] && reg_1[82]) {
matched = true;
pattern_id = 95;
}
if(reg_1[48] && reg_41[3] && reg_25[26] && reg_1[51] && reg_71[0] && reg_65[8] && reg_27[14] && reg_1[55] && reg_40[57] && reg_2[56] && reg_1[58] && reg_71[7] && reg_1[60] && reg_60[57] && reg_64[57] && reg_1[63] && reg_39[19] && reg_1[65] && reg_2[65] && reg_11[27] && reg_3[65] && reg_60[65] && reg_64[65] && reg_3[68] && reg_40[73] && reg_35[30] && reg_1[74] && reg_71[23] && reg_1[76] && reg_60[73] && reg_64[73] && reg_3[76] && reg_2[79] && reg_4[27] && reg_1[82]) {
matched = true;
pattern_id = 96;
}
if(reg_42[80] && reg_34[90] && reg_48[67] && reg_73[18] && reg_6[80] && reg_24[95] && reg_24[96] && reg_20[104] && reg_10[102] && reg_18[105]) {
matched = true;
pattern_id = 97;
}
if(reg_13[80] && reg_3[70] && reg_51[38] && reg_3[72] && reg_42[83] && reg_3[74] && reg_48[70] && reg_3[76] && reg_9[95] && reg_3[78] && reg_23[87]) {
matched = true;
pattern_id = 98;
}
if(reg_10[98] && reg_9[93] && reg_13[87] && reg_6[83] && reg_42[88] && reg_18[105]) {
matched = true;
pattern_id = 99;
}

}