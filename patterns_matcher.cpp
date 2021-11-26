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
boolean reg_0[35] = {0};
boolean reg_1[82] = {0};
boolean reg_2[81] = {0};
boolean reg_3[79] = {0};
boolean reg_4[28] = {0};
boolean reg_5[69] = {0};
boolean reg_6[85] = {0};
boolean reg_7[104] = {0};
boolean reg_8[24] = {0};
boolean reg_9[97] = {0};
boolean reg_10[103] = {0};
boolean reg_11[42] = {0};
boolean reg_12[9] = {0};
boolean reg_13[90] = {0};
boolean reg_14[25] = {0};
boolean reg_15[57] = {0};
boolean reg_16[4] = {0};
boolean reg_17[13] = {0};
boolean reg_18[105] = {0};
boolean reg_19[14] = {0};
boolean reg_20[106] = {0};
boolean reg_21[7] = {0};
boolean reg_22[76] = {0};
boolean reg_23[87] = {0};
boolean reg_24[99] = {0};
boolean reg_25[58] = {0};
boolean reg_26[13] = {0};
boolean reg_27[42] = {0};
boolean reg_28[8] = {0};
boolean reg_29[7] = {0};
boolean reg_30[59] = {0};
boolean reg_31[11] = {0};
boolean reg_32[27] = {0};
boolean reg_33[10] = {0};
boolean reg_34[98] = {0};
boolean reg_35[39] = {0};
boolean reg_36[45] = {0};
boolean reg_37[93] = {0};
boolean reg_38[17] = {0};
boolean reg_39[37] = {0};
boolean reg_40[83] = {0};
boolean reg_41[36] = {0};
boolean reg_42[89] = {0};
boolean reg_43[28] = {0};
boolean reg_44[10] = {0};
boolean reg_45[4] = {0};
boolean reg_46[50] = {0};
boolean reg_47[22] = {0};
boolean reg_48[74] = {0};
boolean reg_49[69] = {0};
boolean reg_50[15] = {0};
boolean reg_51[46] = {0};
boolean reg_52[78] = {0};
boolean reg_53[35] = {0};
boolean reg_54[75] = {0};
boolean reg_55[6] = {0};
boolean reg_56[10] = {0};
boolean reg_57[2] = {0};
boolean reg_58[25] = {0};
boolean reg_59[7] = {0};
boolean reg_60[78] = {0};
boolean reg_61[80] = {0};
boolean reg_62[67] = {0};
boolean reg_63[28] = {0};
boolean reg_64[77] = {0};
boolean reg_65[37] = {0};
boolean reg_66[19] = {0};
boolean reg_67[5] = {0};
boolean reg_68[20] = {0};
boolean reg_69[16] = {0};
boolean reg_70[31] = {0};
boolean reg_71[30] = {0};
boolean reg_72[35] = {0};
boolean reg_73[24] = {0};
boolean reg_74[19] = {0};
boolean reg_75[18] = {0};
boolean reg_76[14] = {0};
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
for(int i = 0; i <34; i++){
reg_0[i] =reg_0[i + 1];
}
reg_0[34] = ('2' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <81; i++){
reg_1[i] =reg_1[i + 1];
}
reg_1[81] = ('|' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <80; i++){
reg_2[i] =reg_2[i + 1];
}
reg_2[80] = ('0' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <78; i++){
reg_3[i] =reg_3[i + 1];
}
reg_3[78] = (' ' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <27; i++){
reg_4[i] =reg_4[i + 1];
}
reg_4[27] = ('6' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <68; i++){
reg_5[i] =reg_5[i + 1];
}
reg_5[68] = ('D' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <84; i++){
reg_6[i] =reg_6[i + 1];
}
reg_6[84] = ('r' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <103; i++){
reg_7[i] =reg_7[i + 1];
}
reg_7[103] = ('i' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <23; i++){
reg_8[i] =reg_8[i + 1];
}
reg_8[23] = ('v' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <96; i++){
reg_9[i] =reg_9[i + 1];
}
reg_9[96] = ('e' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <102; i++){
reg_10[i] =reg_10[i + 1];
}
reg_10[102] = ('s' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <41; i++){
reg_11[i] =reg_11[i + 1];
}
reg_11[41] = ('4' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <8; i++){
reg_12[i] =reg_12[i + 1];
}
reg_12[8] = ('q' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <89; i++){
reg_13[i] =reg_13[i + 1];
}
reg_13[89] = ('a' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <24; i++){
reg_14[i] =reg_14[i + 1];
}
reg_14[24] = ('z' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <56; i++){
reg_15[i] =reg_15[i + 1];
}
reg_15[56] = ('w' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <3; i++){
reg_16[i] =reg_16[i + 1];
}
reg_16[3] = ('x' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <12; i++){
reg_17[i] =reg_17[i + 1];
}
reg_17[12] = ('.' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <104; i++){
reg_18[i] =reg_18[i + 1];
}
reg_18[104] = ('h' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <13; i++){
reg_19[i] =reg_19[i + 1];
}
reg_19[13] = ('G' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <105; i++){
reg_20[i] =reg_20[i + 1];
}
reg_20[105] = ('t' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <6; i++){
reg_21[i] =reg_21[i + 1];
}
reg_21[6] = ('I' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <75; i++){
reg_22[i] =reg_22[i + 1];
}
reg_22[75] = ('n' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <86; i++){
reg_23[i] =reg_23[i + 1];
}
reg_23[86] = ('f' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <98; i++){
reg_24[i] =reg_24[i + 1];
}
reg_24[98] = ('o' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <57; i++){
reg_25[i] =reg_25[i + 1];
}
reg_25[57] = ('B' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <12; i++){
reg_26[i] =reg_26[i + 1];
}
reg_26[12] = ('N' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <41; i++){
reg_27[i] =reg_27[i + 1];
}
reg_27[41] = ('1' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <7; i++){
reg_28[i] =reg_28[i + 1];
}
reg_28[7] = ('W' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <6; i++){
reg_29[i] =reg_29[i + 1];
}
reg_29[6] = ('H' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <58; i++){
reg_30[i] =reg_30[i + 1];
}
reg_30[58] = ('A' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <10; i++){
reg_31[i] =reg_31[i + 1];
}
reg_31[10] = ('T' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <26; i++){
reg_32[i] =reg_32[i + 1];
}
reg_32[26] = ('S' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <9; i++){
reg_33[i] =reg_33[i + 1];
}
reg_33[9] = ('R' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <97; i++){
reg_34[i] =reg_34[i + 1];
}
reg_34[97] = ('m' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <38; i++){
reg_35[i] =reg_35[i + 1];
}
reg_35[38] = ('3' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <44; i++){
reg_36[i] =reg_36[i + 1];
}
reg_36[44] = ('u' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <92; i++){
reg_37[i] =reg_37[i + 1];
}
reg_37[92] = ('p' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <16; i++){
reg_38[i] =reg_38[i + 1];
}
reg_38[16] = ('U' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <36; i++){
reg_39[i] =reg_39[i + 1];
}
reg_39[36] = ('F' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <82; i++){
reg_40[i] =reg_40[i + 1];
}
reg_40[82] = ('C' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <35; i++){
reg_41[i] =reg_41[i + 1];
}
reg_41[35] = ('E' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <88; i++){
reg_42[i] =reg_42[i + 1];
}
reg_42[88] = ('c' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <27; i++){
reg_43[i] =reg_43[i + 1];
}
reg_43[27] = ('5' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <9; i++){
reg_44[i] =reg_44[i + 1];
}
reg_44[9] = ('P' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <3; i++){
reg_45[i] =reg_45[i + 1];
}
reg_45[3] = ('O' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <49; i++){
reg_46[i] =reg_46[i + 1];
}
reg_46[49] = ('l' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <21; i++){
reg_47[i] =reg_47[i + 1];
}
reg_47[21] = ('g' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <73; i++){
reg_48[i] =reg_48[i + 1];
}
reg_48[73] = ('d' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <68; i++){
reg_49[i] =reg_49[i + 1];
}
reg_49[68] = ('y' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <14; i++){
reg_50[i] =reg_50[i + 1];
}
reg_50[14] = ('M' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <45; i++){
reg_51[i] =reg_51[i + 1];
}
reg_51[45] = ('b' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <77; i++){
reg_52[i] =reg_52[i + 1];
}
reg_52[77] = ('k' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <34; i++){
reg_53[i] =reg_53[i + 1];
}
reg_53[34] = ('!' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <74; i++){
reg_54[i] =reg_54[i + 1];
}
reg_54[74] = ('[' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <5; i++){
reg_55[i] =reg_55[i + 1];
}
reg_55[5] = ('*' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <9; i++){
reg_56[i] =reg_56[i + 1];
}
reg_56[9] = ('L' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <1; i++){
reg_57[i] =reg_57[i + 1];
}
reg_57[1] = ('j' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <24; i++){
reg_58[i] =reg_58[i + 1];
}
reg_58[24] = ('/' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <6; i++){
reg_59[i] =reg_59[i + 1];
}
reg_59[6] = ('>' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <77; i++){
reg_60[i] =reg_60[i + 1];
}
reg_60[77] = ('8' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <79; i++){
reg_61[i] =reg_61[i + 1];
}
reg_61[79] = ('7' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <66; i++){
reg_62[i] =reg_62[i + 1];
}
reg_62[66] = ('K' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <27; i++){
reg_63[i] =reg_63[i + 1];
}
reg_63[27] = ('?' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <76; i++){
reg_64[i] =reg_64[i + 1];
}
reg_64[76] = ('9' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <36; i++){
reg_65[i] =reg_65[i + 1];
}
reg_65[36] = ('^' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <18; i++){
reg_66[i] =reg_66[i + 1];
}
reg_66[18] = ('<' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <4; i++){
reg_67[i] =reg_67[i + 1];
}
reg_67[4] = ('+' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <19; i++){
reg_68[i] =reg_68[i + 1];
}
reg_68[19] = ('Q' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <15; i++){
reg_69[i] =reg_69[i + 1];
}
reg_69[15] = ('~' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <30; i++){
reg_70[i] =reg_70[i + 1];
}
reg_70[30] = (']' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <29; i++){
reg_71[i] =reg_71[i + 1];
}
reg_71[29] = ('@' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <34; i++){
reg_72[i] =reg_72[i + 1];
}
reg_72[34] = ('V' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <23; i++){
reg_73[i] =reg_73[i + 1];
}
reg_73[23] = ('_' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <18; i++){
reg_74[i] =reg_74[i + 1];
}
reg_74[18] = ('J' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <17; i++){
reg_75[i] =reg_75[i + 1];
}
reg_75[17] = ('X' == buffer[buffer_size - chunk_len]);
for(int i = 0; i <13; i++){
reg_76[i] =reg_76[i + 1];
}
reg_76[13] = ('%' == buffer[buffer_size - chunk_len]);
if(reg_0[34] && reg_1[80] && reg_2[78] && reg_2[77] && reg_3[74] && reg_2[75] && reg_2[74] && reg_3[71] && reg_2[72] && reg_2[71] && reg_3[68] && reg_2[69] && reg_4[15] && reg_3[65] && reg_2[66] && reg_2[65] && reg_3[62] && reg_2[63] && reg_2[62] && reg_3[59] && reg_2[60] && reg_2[59] && reg_1[59] && reg_5[45] && reg_6[60] && reg_7[78] && reg_8[-3] && reg_9[69] && reg_10[74] && reg_1[52] && reg_0[4] && reg_11[10] && reg_3[46] && reg_2[47] && reg_2[46] && reg_1[46]) {
matched = true;
pattern_id = 0;
}
if(reg_12[8] && reg_13[88] && reg_14[22] && reg_15[53] && reg_10[98] && reg_16[-2] && reg_17[6] && reg_18[97] && reg_10[94] && reg_12[-1]) {
matched = true;
pattern_id = 1;
}
if(reg_19[13] && reg_9[95] && reg_20[103] && reg_21[3] && reg_22[71] && reg_23[81] && reg_24[92] && reg_1[74] && reg_2[72] && reg_5[59] && reg_1[71]) {
matched = true;
pattern_id = 2;
}
if(reg_25[57] && reg_26[11] && reg_1[79] && reg_27[38] && reg_2[76] && reg_3[73] && reg_2[74] && reg_2[73] && reg_3[70] && reg_2[71] && reg_0[24] && reg_3[67] && reg_2[68] && reg_2[67] && reg_1[67]) {
matched = true;
pattern_id = 3;
}
if(reg_28[7] && reg_29[5] && reg_30[56] && reg_31[7] && reg_21[2] && reg_32[21] && reg_21[0] && reg_31[3]) {
matched = true;
pattern_id = 4;
}
if(reg_33[9] && reg_9[95] && reg_34[95] && reg_24[95] && reg_20[101] && reg_9[91] && reg_1[75] && reg_35[31] && reg_30[50] && reg_1[72] && reg_3[68]) {
matched = true;
pattern_id = 5;
}
if(reg_28[7] && reg_20[104] && reg_14[22] && reg_36[41] && reg_37[88] && reg_3[73] && reg_38[10] && reg_10[95] && reg_9[88]) {
matched = true;
pattern_id = 6;
}
if(reg_39[36] && reg_40[81] && reg_3[76]) {
matched = true;
pattern_id = 7;
}
if(reg_18[104] && reg_24[97] && reg_10[100] && reg_20[102]) {
matched = true;
pattern_id = 8;
}
if(reg_38[16] && reg_32[25] && reg_41[33] && reg_33[6]) {
matched = true;
pattern_id = 9;
}
if(reg_26[12] && reg_9[95] && reg_20[103] && reg_32[23] && reg_37[88] && reg_18[99] && reg_9[90] && reg_6[77] && reg_9[88]) {
matched = true;
pattern_id = 10;
}
if(reg_19[13] && reg_13[88] && reg_20[103] && reg_9[93] && reg_40[78] && reg_6[79] && reg_13[83] && reg_10[95] && reg_18[96] && reg_9[87] && reg_6[74]) {
matched = true;
pattern_id = 11;
}
if(reg_42[88] && reg_1[80] && reg_35[36] && reg_30[55] && reg_3[74] && reg_43[22] && reg_40[76] && reg_1[74]) {
matched = true;
pattern_id = 12;
}
if(reg_39[36] && reg_31[9] && reg_44[7] && reg_45[0] && reg_26[8]) {
matched = true;
pattern_id = 13;
}
if(reg_39[36] && reg_31[9] && reg_44[7] && reg_3[75] && reg_44[5] && reg_24[93] && reg_6[78] && reg_20[98] && reg_3[70] && reg_24[89] && reg_37[82] && reg_9[85] && reg_22[63]) {
matched = true;
pattern_id = 14;
}
if(reg_13[89] && reg_42[87] && reg_20[103] && reg_7[100] && reg_8[19] && reg_13[84] && reg_20[99] && reg_9[89]) {
matched = true;
pattern_id = 15;
}
if(reg_46[49] && reg_24[97] && reg_47[19] && reg_47[18] && reg_9[92] && reg_48[68] && reg_3[72] && reg_7[96] && reg_22[67]) {
matched = true;
pattern_id = 16;
}
if(reg_1[81] && reg_25[56] && reg_11[39] && reg_3[75] && reg_25[53] && reg_11[36] && reg_1[75]) {
matched = true;
pattern_id = 17;
}
if(reg_49[68] && reg_37[91] && reg_7[101] && reg_2[77] && reg_42[84] && reg_13[84]) {
matched = true;
pattern_id = 18;
}
if(reg_30[58] && reg_18[103] && reg_18[102] && reg_18[101] && reg_18[100] && reg_3[73] && reg_50[8] && reg_49[61] && reg_3[70] && reg_50[5] && reg_24[88] && reg_36[33] && reg_20[93] && reg_18[91] && reg_3[64] && reg_21[-9] && reg_10[86] && reg_3[61] && reg_45[-15] && reg_37[73] && reg_9[76] && reg_22[54]) {
matched = true;
pattern_id = 19;
}
if(reg_37[92] && reg_18[103] && reg_30[56] && reg_10[99] && reg_9[92] && reg_3[73] && reg_14[18] && reg_9[89] && reg_6[76] && reg_24[89] && reg_3[68] && reg_10[91] && reg_9[84] && reg_6[71] && reg_8[9] && reg_9[81] && reg_6[68]) {
matched = true;
pattern_id = 20;
}
if(reg_15[56] && reg_2[79] && reg_2[78] && reg_15[53] && reg_2[76] && reg_2[75]) {
matched = true;
pattern_id = 21;
}
if(reg_51[45] && reg_13[88] && reg_42[86] && reg_52[74] && reg_48[69] && reg_24[93] && reg_24[92] && reg_6[77]) {
matched = true;
pattern_id = 22;
}
if(reg_6[84] && reg_2[79] && reg_2[78] && reg_20[102]) {
matched = true;
pattern_id = 23;
}
if(reg_6[84] && reg_9[95] && reg_15[54] && reg_20[102]) {
matched = true;
pattern_id = 24;
}
if(reg_15[56] && reg_18[103] && reg_2[78] && reg_2[77] && reg_20[101] && reg_53[29]) {
matched = true;
pattern_id = 25;
}
if(reg_46[49] && reg_6[83] && reg_52[75] && reg_6[81] && reg_2[76] && reg_16[-2]) {
matched = true;
pattern_id = 26;
}
if(reg_48[73] && reg_27[40] && reg_35[36] && reg_18[101] && reg_18[100] && reg_54[69]) {
matched = true;
pattern_id = 27;
}
if(reg_10[102] && reg_13[88] && reg_20[103] && reg_24[95] && reg_6[80] && reg_7[98]) {
matched = true;
pattern_id = 28;
}
if(reg_18[104] && reg_13[88] && reg_16[1] && reg_2[77] && reg_6[80]) {
matched = true;
pattern_id = 29;
}
if(reg_23[86] && reg_6[83] && reg_7[101] && reg_48[70] && reg_13[85] && reg_49[63]) {
matched = true;
pattern_id = 30;
}
if(reg_32[26] && reg_20[104] && reg_24[96] && reg_24[95] && reg_47[17] && reg_33[4]) {
matched = true;
pattern_id = 31;
}
if(reg_15[56] && reg_13[88] && reg_22[73] && reg_52[74]) {
matched = true;
pattern_id = 32;
}
if(reg_27[41] && reg_0[33] && reg_35[36] && reg_11[38]) {
matched = true;
pattern_id = 33;
}
if(reg_30[58] && reg_30[57] && reg_30[56] && reg_30[55] && reg_30[54] && reg_30[53] && reg_30[52] && reg_30[51] && reg_30[50] && reg_30[49]) {
matched = true;
pattern_id = 34;
}
if(reg_44[9] && reg_45[2] && reg_26[10] && reg_19[10]) {
matched = true;
pattern_id = 35;
}
if(reg_10[102] && reg_7[102] && reg_42[86] && reg_52[74] && reg_9[92] && reg_22[70]) {
matched = true;
pattern_id = 36;
}
if(reg_23[86] && reg_7[102] && reg_42[86] && reg_52[74] && reg_9[92] && reg_22[70]) {
matched = true;
pattern_id = 37;
}
if(reg_10[102] && reg_37[91] && reg_24[96] && reg_24[95] && reg_23[82] && reg_15[51] && reg_24[92] && reg_6[77] && reg_52[69] && reg_10[93]) {
matched = true;
pattern_id = 38;
}
if(reg_10[102] && reg_52[76] && reg_7[101] && reg_46[46] && reg_46[45] && reg_14[19]) {
matched = true;
pattern_id = 39;
}
if(reg_46[49] && reg_24[97] && reg_47[19] && reg_7[100] && reg_22[71] && reg_1[76] && reg_35[32] && reg_30[51] && reg_1[73]) {
matched = true;
pattern_id = 40;
}
if(reg_46[49] && reg_11[40] && reg_11[39]) {
matched = true;
pattern_id = 41;
}
if(reg_55[5] && reg_29[5] && reg_41[33] && reg_56[6] && reg_56[5] && reg_45[-2] && reg_55[-1]) {
matched = true;
pattern_id = 42;
}
if(reg_51[45] && reg_9[95] && reg_20[103] && reg_13[86] && reg_13[85] && reg_46[44] && reg_34[91] && reg_24[91] && reg_10[94] && reg_20[96] && reg_48[63] && reg_24[87] && reg_22[63] && reg_9[83]) {
matched = true;
pattern_id = 43;
}
if(reg_47[21] && reg_45[2] && reg_6[82] && reg_13[86] && reg_8[19] && reg_9[91]) {
matched = true;
pattern_id = 44;
}
if(reg_52[77] && reg_7[102] && reg_46[47] && reg_46[46] && reg_34[93] && reg_9[91]) {
matched = true;
pattern_id = 45;
}
if(reg_47[21] && reg_9[95] && reg_10[100] && reg_36[41] && reg_22[71] && reg_48[68] && reg_18[98] && reg_9[89] && reg_7[95] && reg_20[96] && reg_53[24]) {
matched = true;
pattern_id = 46;
}
if(reg_46[49] && reg_11[40] && reg_11[39] && reg_13[86] && reg_48[69] && reg_10[97] && reg_46[43]) {
matched = true;
pattern_id = 47;
}
if(reg_10[102] && reg_18[103] && reg_9[94] && reg_46[46] && reg_46[45] && reg_3[73] && reg_51[39] && reg_24[91] && reg_36[36] && reg_22[66] && reg_48[63]) {
matched = true;
pattern_id = 48;
}
if(reg_13[89] && reg_46[48] && reg_7[101] && reg_8[20] && reg_9[92] && reg_3[73] && reg_20[99] && reg_7[96] && reg_57[-7] && reg_47[12] && reg_36[34]) {
matched = true;
pattern_id = 49;
}
if(reg_13[89] && reg_46[48] && reg_7[101] && reg_8[20] && reg_9[92]) {
matched = true;
pattern_id = 50;
}
if(reg_22[75] && reg_9[95] && reg_15[54] && reg_10[99] && reg_9[92] && reg_6[79] && reg_8[17] && reg_9[89] && reg_6[76]) {
matched = true;
pattern_id = 51;
}
if(reg_10[102] && reg_20[104] && reg_6[82] && reg_9[93] && reg_13[85] && reg_34[92] && reg_58[18]) {
matched = true;
pattern_id = 52;
}
if(reg_37[92] && reg_7[102] && reg_22[73] && reg_47[18]) {
matched = true;
pattern_id = 53;
}
if(reg_37[92] && reg_24[97] && reg_22[73] && reg_47[18]) {
matched = true;
pattern_id = 54;
}
if(reg_59[6]) {
matched = true;
pattern_id = 55;
}
if(reg_1[81] && reg_60[76] && reg_43[25] && reg_3[75] && reg_60[73] && reg_2[75] && reg_3[72] && reg_2[73] && reg_2[72] && reg_3[69] && reg_2[70] && reg_27[30] && reg_3[66] && reg_2[67] && reg_2[66] && reg_3[63] && reg_2[64] && reg_27[24] && reg_3[60] && reg_2[61] && reg_2[60] && reg_3[57] && reg_2[58] && reg_2[57] && reg_3[54] && reg_2[55] && reg_2[54] && reg_3[51] && reg_2[52] && reg_2[51] && reg_1[51]) {
matched = true;
pattern_id = 56;
}
if(reg_1[81] && reg_60[76] && reg_27[39] && reg_3[75] && reg_60[73] && reg_2[75] && reg_1[75]) {
matched = true;
pattern_id = 57;
}
if(reg_1[81] && reg_2[79] && reg_2[78] && reg_3[75] && reg_2[76] && reg_27[36] && reg_3[72] && reg_2[73] && reg_2[72] && reg_3[69] && reg_2[70] && reg_2[69] && reg_3[66] && reg_2[67] && reg_2[66] && reg_3[63] && reg_2[64] && reg_2[63] && reg_3[60] && reg_2[61] && reg_2[60] && reg_1[60]) {
matched = true;
pattern_id = 58;
}
if(reg_1[81] && reg_2[79] && reg_61[77] && reg_1[78] && reg_13[85] && reg_36[39] && reg_20[99] && reg_18[97] && reg_24[90] && reg_6[75] && reg_10[92]) {
matched = true;
pattern_id = 59;
}
if(reg_1[81] && reg_2[79] && reg_61[77] && reg_1[78] && reg_8[19] && reg_9[91] && reg_6[78] && reg_10[95] && reg_7[95] && reg_24[89] && reg_22[65]) {
matched = true;
pattern_id = 60;
}
if(reg_17[12] && reg_17[11] && reg_58[22] && reg_17[9] && reg_17[8] && reg_58[19] && reg_17[6] && reg_17[5] && reg_58[16]) {
matched = true;
pattern_id = 61;
}
if(reg_20[105] && reg_18[103] && reg_7[101] && reg_10[99] && reg_7[99] && reg_10[97] && reg_10[96] && reg_24[91] && reg_34[89] && reg_9[87] && reg_20[95] && reg_9[85] && reg_34[85] && reg_37[79] && reg_10[88] && reg_37[77] && reg_13[73] && reg_42[71] && reg_9[78] && reg_23[67] && reg_24[78] && reg_6[63] && reg_20[83] && reg_18[81] && reg_9[72] && reg_10[77] && reg_24[72] && reg_42[61] && reg_52[49] && reg_7[74] && reg_22[45] && reg_13[58] && reg_48[41] && reg_48[40] && reg_6[50] && reg_7[68] && reg_22[39] && reg_49[31] && reg_9[58] && reg_13[50] && reg_18[64] && reg_49[27] && reg_9[54] && reg_13[46] && reg_18[60] && reg_7[58] && reg_52[31] && reg_22[28] && reg_24[50] && reg_15[7] && reg_20[55] && reg_18[53] && reg_7[51] && reg_10[49] && reg_7[49] && reg_10[47] && reg_46[-7] && reg_13[32] && reg_34[39] && reg_9[37] && reg_51[-15] && reg_36[-17] && reg_20[43] && reg_13[26] && reg_22[11] && reg_49[3] && reg_15[-10] && reg_13[22] && reg_49[0] && reg_15[-13] && reg_18[34] && reg_24[27] && reg_42[16] && reg_13[16] && reg_6[10] && reg_9[21] && reg_10[26] && reg_18[27] && reg_24[20] && reg_6[5] && reg_7[23] && reg_14[-57] && reg_24[16] && reg_22[-8] && reg_47[-63] && reg_24[13] && reg_20[19] && reg_7[16] && reg_20[17] && reg_15[-33] && reg_24[8] && reg_6[-7] && reg_52[-15] && reg_7[10] && reg_22[-19] && reg_47[-74] && reg_10[6] && reg_24[1] && reg_13[-9] && reg_46[-50] && reg_46[-51] && reg_7[2] && reg_10[0] && reg_42[-15] && reg_24[-6] && reg_24[-7] && reg_46[-57]) {
matched = true;
pattern_id = 62;
}
if(reg_30[58] && reg_5[67] && reg_50[12] && reg_33[6] && reg_45[-1] && reg_40[77] && reg_62[60] && reg_32[19]) {
matched = true;
pattern_id = 63;
}
if(reg_1[81] && reg_40[81] && reg_5[66] && reg_3[75] && reg_60[73] && reg_2[75] && reg_3[72] && reg_41[28] && reg_60[69] && reg_3[69] && reg_5[58] && reg_61[68] && reg_3[66] && reg_39[23] && reg_39[22] && reg_3[63] && reg_39[20] && reg_39[19] && reg_3[60] && reg_39[17] && reg_39[16] && reg_1[60] && reg_58[2] && reg_51[22] && reg_7[79] && reg_22[50] && reg_58[-2] && reg_10[75] && reg_18[76]) {
matched = true;
pattern_id = 64;
}
if(reg_27[41] && reg_1[80] && reg_40[80] && reg_2[77] && reg_3[74] && reg_25[52] && reg_2[74] && reg_1[74] && reg_63[19] && reg_27[32] && reg_1[71] && reg_5[57] && reg_25[45] && reg_3[65] && reg_25[43] && reg_35[23] && reg_3[62] && reg_39[19] && reg_39[18] && reg_1[62] && reg_27[21] && reg_1[60] && reg_40[60] && reg_64[53] && reg_3[54] && reg_40[57] && reg_5[42] && reg_3[51] && reg_60[49] && reg_2[51] && reg_1[51] && reg_27[10] && reg_1[49] && reg_40[49] && reg_2[46] && reg_1[46]) {
matched = true;
pattern_id = 65;
}
if(reg_27[41] && reg_1[80] && reg_40[80] && reg_2[77] && reg_3[74] && reg_25[52] && reg_2[74] && reg_3[71] && reg_2[72] && reg_0[25] && reg_3[68] && reg_40[71] && reg_5[56] && reg_3[65] && reg_60[63] && reg_2[65] && reg_3[62] && reg_60[60] && reg_43[9] && reg_3[59] && reg_40[62] && reg_2[59] && reg_1[59] && reg_36[21] && reg_56[-15] && reg_1[56] && reg_41[9] && reg_25[30] && reg_1[53] && reg_56[-20] && reg_65[6] && reg_1[50] && reg_25[25] && reg_2[47] && reg_1[47]) {
matched = true;
pattern_id = 66;
}
if(reg_1[81] && reg_60[76] && reg_64[74] && reg_3[75] && reg_39[32] && reg_61[74] && reg_3[72] && reg_0[27] && reg_64[68] && reg_3[69] && reg_40[72] && reg_61[68] && reg_3[66] && reg_60[64] && reg_64[62] && reg_3[63] && reg_39[20] && reg_35[21] && reg_3[60] && reg_60[58] && reg_64[56] && reg_3[57] && reg_39[14] && reg_64[53] && reg_3[54] && reg_60[52] && reg_64[50] && reg_3[51] && reg_39[8] && reg_0[5] && reg_3[48] && reg_30[27] && reg_40[50] && reg_1[48] && reg_66[-16] && reg_1[46] && reg_39[0] && reg_41[-2] && reg_1[43]) {
matched = true;
pattern_id = 67;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_1[78] && reg_22[71] && reg_65[31] && reg_1[75] && reg_40[75] && reg_4[19] && reg_3[69] && reg_2[70] && reg_4[16] && reg_3[66] && reg_64[63] && reg_30[44] && reg_1[66] && reg_27[25] && reg_1[64] && reg_40[64] && reg_64[57] && reg_3[58] && reg_60[56] && reg_64[54] && reg_1[58] && reg_26[-12] && reg_1[56] && reg_2[54] && reg_27[14] && reg_3[50] && reg_40[53] && reg_4[-3] && reg_1[50] && reg_39[4] && reg_1[48] && reg_2[46] && reg_43[-8] && reg_1[45]) {
matched = true;
pattern_id = 68;
}
if(reg_1[81] && reg_64[75] && reg_2[78] && reg_3[75] && reg_27[37] && reg_30[53] && reg_3[72] && reg_40[75] && reg_2[72] && reg_3[69] && reg_2[70] && reg_39[25] && reg_3[66] && reg_64[63] && reg_2[66] && reg_3[63] && reg_2[64] && reg_0[17] && reg_1[63] && reg_3[59] && reg_1[61] && reg_2[59] && reg_60[55] && reg_3[55] && reg_64[52] && reg_0[9] && reg_3[52] && reg_2[53] && reg_0[6] && reg_1[52] && reg_3[48] && reg_1[50] && reg_2[48] && reg_39[3] && reg_3[44] && reg_5[33] && reg_2[44] && reg_3[41] && reg_0[-4] && reg_35[-1] && reg_3[38] && reg_25[16] && reg_39[-6] && reg_3[35] && reg_39[-8] && reg_60[32] && reg_1[35]) {
matched = true;
pattern_id = 69;
}
if(reg_67[4] && reg_67[3] && reg_67[2] && reg_13[86] && reg_20[101] && reg_18[99]) {
matched = true;
pattern_id = 70;
}
if(reg_1[81] && reg_39[35] && reg_39[34] && reg_3[75] && reg_39[32] && reg_11[36] && reg_3[72] && reg_39[29] && reg_39[28] && reg_3[69] && reg_39[26] && reg_5[57] && reg_3[66] && reg_2[67] && reg_4[13] && reg_1[66]) {
matched = true;
pattern_id = 71;
}
if(reg_58[24] && reg_8[22] && reg_7[101] && reg_9[93] && reg_15[52] && reg_10[97] && reg_24[92] && reg_36[37] && reg_6[76] && reg_42[79] && reg_9[86] && reg_58[13] && reg_20[93] && reg_9[83] && reg_34[83] && reg_37[77] && reg_46[33] && reg_13[72] && reg_20[87] && reg_9[77] && reg_17[-8] && reg_18[83] && reg_20[83] && reg_34[74] && reg_46[25] && reg_63[2]) {
matched = true;
pattern_id = 72;
}
if(reg_26[12] && reg_30[57] && reg_50[12] && reg_41[32] && reg_26[8] && reg_30[53] && reg_50[8] && reg_41[28]) {
matched = true;
pattern_id = 73;
}
if(reg_35[38] && reg_1[80] && reg_40[80] && reg_64[73] && reg_3[74] && reg_25[52] && reg_27[35] && reg_3[71] && reg_27[33] && reg_2[71] && reg_1[71] && reg_63[16] && reg_1[69] && reg_41[22] && reg_64[62] && reg_3[63] && reg_2[64] && reg_4[10] && reg_1[63] && reg_68[0] && reg_66[-2] && reg_1[60] && reg_39[14] && reg_30[35] && reg_1[57] && reg_19[-12] && reg_35[12] && reg_1[54] && reg_40[54] && reg_2[51] && reg_1[51] && reg_44[-22] && reg_1[49] && reg_39[3] && reg_61[45] && reg_3[43] && reg_5[32] && reg_2[43] && reg_1[43] && reg_44[-30]) {
matched = true;
pattern_id = 74;
}
if(reg_65[36] && reg_1[80] && reg_2[78] && reg_41[32] && reg_1[77] && reg_27[36] && reg_1[75] && reg_40[75] && reg_2[72] && reg_3[69] && reg_25[47] && reg_2[69] && reg_3[66] && reg_35[25] && reg_25[43] && reg_3[63] && reg_60[61] && reg_5[51] && reg_1[63] && reg_69[-4] && reg_1[61] && reg_2[59] && reg_41[13] && reg_3[55] && reg_60[53] && reg_64[51] && reg_3[52] && reg_39[9] && reg_30[30] && reg_3[49] && reg_60[47] && reg_64[45] && reg_3[46] && reg_39[3] && reg_64[42] && reg_1[46]) {
matched = true;
pattern_id = 75;
}
if(reg_18[104] && reg_70[29] && reg_65[34] && reg_1[78] && reg_39[32] && reg_39[31] && reg_3[72] && reg_5[61] && reg_43[19] && reg_3[69] && reg_39[26] && reg_39[25] && reg_3[66] && reg_5[55] && reg_11[27] && reg_3[63] && reg_39[20] && reg_39[19] && reg_3[60] && reg_39[17] && reg_43[7] && reg_3[57] && reg_60[55] && reg_25[34] && reg_3[54] && reg_39[11] && reg_43[1] && reg_3[51] && reg_64[48] && reg_2[51] && reg_1[51] && reg_23[55] && reg_27[9]) {
matched = true;
pattern_id = 76;
}
if(reg_1[81] && reg_5[67] && reg_60[75] && reg_1[78] && reg_71[25] && reg_1[76] && reg_40[76] && reg_5[61] && reg_3[70] && reg_60[68] && reg_2[70] && reg_3[67] && reg_41[23] && reg_60[64] && reg_3[64] && reg_5[53] && reg_64[60] && reg_3[61] && reg_39[18] && reg_39[17] && reg_3[58] && reg_39[15] && reg_39[14] && reg_3[55] && reg_39[12] && reg_39[11] && reg_1[55] && reg_58[-3] && reg_51[17] && reg_7[74] && reg_22[45] && reg_58[-7] && reg_10[70] && reg_18[71]) {
matched = true;
pattern_id = 77;
}
if(reg_72[34] && reg_1[80] && reg_2[78] && reg_41[32] && reg_1[77] && reg_27[36] && reg_1[75] && reg_40[75] && reg_2[72] && reg_3[69] && reg_25[47] && reg_2[69] && reg_3[66] && reg_35[25] && reg_25[43] && reg_3[63] && reg_60[61] && reg_5[51] && reg_1[63] && reg_69[-4] && reg_1[61] && reg_27[20] && reg_0[12] && reg_3[55] && reg_60[53] && reg_64[51] && reg_3[52] && reg_39[9] && reg_64[48] && reg_3[49] && reg_60[47] && reg_64[45] && reg_3[46] && reg_39[3] && reg_64[42] && reg_1[46]) {
matched = true;
pattern_id = 78;
}
if(reg_1[81] && reg_41[34] && reg_60[75] && reg_3[75] && reg_5[64] && reg_64[71] && reg_3[72] && reg_39[29] && reg_39[28] && reg_3[69] && reg_39[26] && reg_39[25] && reg_3[66] && reg_39[23] && reg_39[22] && reg_1[66] && reg_58[8] && reg_51[28] && reg_7[85] && reg_22[56] && reg_58[4] && reg_10[81] && reg_18[82]) {
matched = true;
pattern_id = 79;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_1[78] && reg_58[20] && reg_73[18] && reg_1[75] && reg_41[28] && reg_25[49] && reg_1[72] && reg_74[8] && reg_65[25] && reg_1[69] && reg_60[64] && reg_64[62] && reg_3[63] && reg_39[20] && reg_25[40] && reg_3[60] && reg_60[58] && reg_64[56] && reg_1[60] && reg_59[-16] && reg_1[58] && reg_60[53] && reg_64[51] && reg_3[52] && reg_39[9] && reg_0[6] && reg_1[52]) {
matched = true;
pattern_id = 80;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_3[75] && reg_0[30] && reg_35[33] && reg_1[75] && reg_65[29] && reg_35[30] && reg_1[72] && reg_40[72] && reg_2[69] && reg_3[66] && reg_60[64] && reg_60[63] && reg_1[66] && reg_39[20] && reg_1[64] && reg_39[18] && reg_30[39] && reg_3[58] && reg_60[56] && reg_64[54] && reg_1[58] && reg_39[12] && reg_1[56] && reg_39[10] && reg_43[0] && reg_3[50] && reg_60[48] && reg_64[46] && reg_1[50] && reg_4[-5]) {
matched = true;
pattern_id = 81;
}
if(reg_40[82] && reg_1[80] && reg_2[78] && reg_61[76] && reg_3[74] && reg_60[72] && reg_64[70] && reg_1[74] && reg_54[66] && reg_1[72] && reg_2[70] && reg_60[66] && reg_3[66] && reg_60[64] && reg_5[54] && reg_1[66] && reg_62[50] && reg_1[64] && reg_2[62] && reg_60[58] && reg_3[58] && reg_60[56] && reg_64[54] && reg_1[58] && reg_40[58] && reg_1[56] && reg_2[54] && reg_40[55] && reg_3[50] && reg_25[28] && reg_2[50] && reg_3[47] && reg_2[48] && reg_25[24] && reg_3[44] && reg_40[47] && reg_5[32] && reg_3[41] && reg_60[39] && reg_2[41] && reg_1[41] && reg_27[0] && reg_1[39] && reg_40[39] && reg_2[36] && reg_3[33] && reg_39[-10] && reg_41[-12] && reg_3[30] && reg_40[33] && reg_2[30] && reg_3[27] && reg_40[30] && reg_5[15] && reg_3[24] && reg_60[22] && reg_2[24] && reg_3[21] && reg_41[-23] && reg_60[18] && reg_3[18] && reg_64[15] && reg_11[-21] && reg_3[15] && reg_39[-28] && reg_39[-29] && reg_3[12] && reg_39[-31] && reg_39[-32] && reg_3[9] && reg_39[-34] && reg_39[-35] && reg_1[9] && reg_58[-49] && reg_51[-29] && reg_7[28] && reg_22[-1] && reg_58[-53] && reg_10[24] && reg_18[25] && reg_1[1] && reg_2[-1] && reg_30[-24] && reg_1[-2]) {
matched = true;
pattern_id = 82;
}
if(reg_75[17] && reg_75[16] && reg_75[15] && reg_75[14] && reg_76[9] && reg_17[7] && reg_27[35] && reg_61[72] && reg_0[26] && reg_36[35] && reg_76[3] && reg_35[27] && reg_2[68] && reg_2[67] && reg_1[67] && reg_0[19] && reg_11[25] && reg_1[64] && reg_22[57]) {
matched = true;
pattern_id = 83;
}
if(reg_1[81] && reg_30[57] && reg_25[55] && reg_3[75] && reg_40[78] && reg_5[63] && reg_3[72] && reg_2[73] && reg_64[68] && reg_3[69] && reg_60[67] && reg_2[69] && reg_3[66] && reg_2[67] && reg_2[66] && reg_3[63] && reg_2[64] && reg_2[63] && reg_3[60] && reg_2[61] && reg_2[60] && reg_3[57] && reg_2[58] && reg_27[18] && reg_3[54] && reg_2[55] && reg_2[54] && reg_3[51] && reg_2[52] && reg_2[51] && reg_3[48] && reg_2[49] && reg_2[48] && reg_3[45] && reg_2[46] && reg_2[45] && reg_3[42] && reg_2[43] && reg_2[42] && reg_3[39] && reg_2[40] && reg_2[39] && reg_3[36] && reg_2[37] && reg_27[-3] && reg_3[33] && reg_2[34] && reg_2[33] && reg_3[30] && reg_2[31] && reg_27[-9] && reg_1[30] && reg_3[26] && reg_3[25] && reg_3[24] && reg_3[23] && reg_1[25] && reg_2[23] && reg_0[-24] && reg_1[22] && reg_13[29]) {
matched = true;
pattern_id = 84;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_3[75] && reg_61[75] && reg_39[31] && reg_1[75] && reg_70[23] && reg_38[8] && reg_1[72] && reg_39[26] && reg_41[24] && reg_1[69] && reg_50[1] && reg_1[67] && reg_64[61] && reg_60[61] && reg_3[61] && reg_39[18] && reg_41[16] && reg_1[61] && reg_50[-7] && reg_1[59] && reg_64[53] && reg_25[33] && reg_1[56]) {
matched = true;
pattern_id = 85;
}
if(reg_15[56] && reg_18[103] && reg_24[96] && reg_7[100] && reg_10[98] && reg_1[76] && reg_35[32] && reg_30[51] && reg_1[73] && reg_58[15] && reg_58[14]) {
matched = true;
pattern_id = 86;
}
if(reg_19[13] && reg_41[34] && reg_31[8] && reg_3[75] && reg_58[20] && reg_3[73] && reg_29[0] && reg_31[3] && reg_31[2] && reg_44[0] && reg_58[14] && reg_27[30] && reg_17[0] && reg_27[28]) {
matched = true;
pattern_id = 87;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_1[78] && reg_62[62] && reg_54[69] && reg_32[20] && reg_0[27] && reg_1[73] && reg_41[26] && reg_11[31] && reg_3[67] && reg_60[65] && reg_35[25] && reg_3[64] && reg_40[67] && reg_35[22] && reg_3[61] && reg_2[62] && reg_25[38] && reg_1[61] && reg_62[45] && reg_1[59] && reg_60[54] && reg_60[53] && reg_3[53] && reg_0[8] && reg_35[11] && reg_3[50] && reg_25[28] && reg_60[47] && reg_1[50] && reg_44[-23] && reg_15[23]) {
matched = true;
pattern_id = 88;
}
if(reg_1[81] && reg_25[56] && reg_11[39] && reg_1[78] && reg_3[74] && reg_1[76] && reg_25[51] && reg_11[34] && reg_1[73] && reg_53[25] && reg_1[71] && reg_60[66] && reg_25[45] && reg_3[65] && reg_40[68] && reg_40[67] && reg_3[62] && reg_60[60] && reg_35[20] && reg_3[59] && reg_41[15] && reg_64[55] && reg_3[56] && reg_2[57] && reg_11[17] && reg_3[53] && reg_60[51] && reg_25[30] && reg_3[50] && reg_27[12] && reg_64[46] && reg_1[50] && reg_35[6] && reg_1[48] && reg_40[48] && reg_64[41] && reg_1[45] && reg_23[49] && reg_1[43] && reg_25[18] && reg_64[36] && reg_3[37] && reg_27[-1] && reg_2[37] && reg_1[37]) {
matched = true;
pattern_id = 89;
}
if(reg_23[86] && reg_6[83] && reg_24[96] && reg_34[94] && reg_1[77] && reg_35[33] && reg_30[52] && reg_3[71] && reg_64[68] && reg_2[71] && reg_3[68] && reg_64[65] && reg_2[68] && reg_3[65] && reg_64[62] && reg_2[65] && reg_3[62] && reg_64[59] && reg_2[62] && reg_3[59] && reg_64[56] && reg_2[59] && reg_3[56] && reg_64[53] && reg_2[56] && reg_3[53] && reg_64[50] && reg_2[53] && reg_3[50] && reg_64[47] && reg_2[50] && reg_3[47] && reg_64[44] && reg_2[47] && reg_3[44] && reg_64[41] && reg_2[44] && reg_3[41] && reg_64[38] && reg_2[41] && reg_1[41]) {
matched = true;
pattern_id = 90;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_1[78] && reg_41[31] && reg_1[76] && reg_41[29] && reg_25[50] && reg_1[73] && reg_3[69] && reg_54[64] && reg_1[70] && reg_39[24] && reg_40[69] && reg_1[67] && reg_35[23] && reg_1[65] && reg_40[65] && reg_64[58] && reg_3[59] && reg_25[37] && reg_27[20] && reg_3[56] && reg_60[54] && reg_0[10] && reg_3[53] && reg_60[51] && reg_25[30] && reg_3[50] && reg_39[7] && reg_35[8] && reg_3[47] && reg_60[45] && reg_2[47] && reg_1[47] && reg_67[-31]) {
matched = true;
pattern_id = 91;
}
if(reg_1[81] && reg_2[79] && reg_27[39] && reg_3[75] && reg_2[76] && reg_35[33] && reg_3[72] && reg_2[73] && reg_2[72] && reg_3[69] && reg_2[70] && reg_2[69] && reg_3[66] && reg_2[67] && reg_2[66] && reg_3[63] && reg_2[64] && reg_2[63] && reg_3[60] && reg_2[61] && reg_2[60] && reg_3[57] && reg_2[58] && reg_27[18] && reg_3[54] && reg_2[55] && reg_2[54] && reg_3[51] && reg_2[52] && reg_0[5] && reg_3[48] && reg_2[49] && reg_0[2] && reg_3[45] && reg_41[1] && reg_60[42] && reg_1[45]) {
matched = true;
pattern_id = 92;
}
if(reg_1[81] && reg_60[76] && reg_2[78] && reg_3[75] && reg_2[76] && reg_2[75] && reg_3[72] && reg_2[73] && reg_61[71] && reg_3[69] && reg_2[70] && reg_2[69] && reg_3[66] && reg_2[67] && reg_2[66] && reg_3[63] && reg_2[64] && reg_2[63] && reg_3[60] && reg_2[61] && reg_2[60] && reg_3[57] && reg_2[58] && reg_2[57] && reg_3[54] && reg_2[55] && reg_27[15] && reg_1[54] && reg_63[-1] && reg_1[52] && reg_2[50] && reg_2[49] && reg_3[46] && reg_2[47] && reg_27[7] && reg_3[43] && reg_2[44] && reg_0[-3] && reg_1[43]) {
matched = true;
pattern_id = 93;
}
if(reg_65[36] && reg_1[80] && reg_25[55] && reg_2[77] && reg_3[74] && reg_2[75] && reg_0[28] && reg_3[71] && reg_60[69] && reg_64[67] && reg_3[68] && reg_2[69] && reg_4[15] && reg_3[65] && reg_39[22] && reg_41[20] && reg_3[62] && reg_40[65] && reg_60[59] && reg_3[59] && reg_60[57] && reg_64[55] && reg_1[59] && reg_39[13] && reg_1[57] && reg_2[55] && reg_11[15] && reg_3[51] && reg_25[29] && reg_2[51] && reg_3[48] && reg_2[49] && reg_4[-5] && reg_3[45] && reg_60[43] && reg_64[41] && reg_1[45] && reg_39[-1]) {
matched = true;
pattern_id = 94;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_1[78] && reg_72[30] && reg_65[31] && reg_72[28] && reg_72[27] && reg_72[26] && reg_27[32] && reg_1[71] && reg_5[57] && reg_0[22] && reg_3[65] && reg_60[63] && reg_60[62] && reg_1[65] && reg_72[17] && reg_1[63] && reg_2[61] && reg_25[37] && reg_3[57] && reg_60[55] && reg_60[54] && reg_1[57] && reg_72[9] && reg_1[55] && reg_27[14] && reg_41[7] && reg_1[52]) {
matched = true;
pattern_id = 95;
}
if(reg_1[81] && reg_41[34] && reg_25[55] && reg_1[78] && reg_71[25] && reg_65[31] && reg_27[35] && reg_1[74] && reg_40[74] && reg_2[71] && reg_1[71] && reg_71[18] && reg_1[69] && reg_60[64] && reg_64[62] && reg_1[66] && reg_39[20] && reg_1[64] && reg_2[62] && reg_11[22] && reg_3[58] && reg_60[56] && reg_64[54] && reg_3[55] && reg_40[58] && reg_35[13] && reg_1[55] && reg_71[2] && reg_1[53] && reg_60[48] && reg_64[46] && reg_3[47] && reg_2[48] && reg_4[-6] && reg_1[47]) {
matched = true;
pattern_id = 96;
}
if(reg_42[88] && reg_34[96] && reg_48[71] && reg_73[20] && reg_6[80] && reg_24[93] && reg_24[92] && reg_20[98] && reg_10[94] && reg_18[95]) {
matched = true;
pattern_id = 97;
}
if(reg_13[89] && reg_3[77] && reg_51[43] && reg_3[75] && reg_42[84] && reg_3[73] && reg_48[67] && reg_3[71] && reg_9[88] && reg_3[69] && reg_23[76]) {
matched = true;
pattern_id = 98;
}
if(reg_10[102] && reg_9[95] && reg_13[87] && reg_6[81] && reg_42[84] && reg_18[99]) {
matched = true;
pattern_id = 99;
}

}