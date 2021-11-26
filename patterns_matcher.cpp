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
boolean reg_0[35] = 0;
boolean reg_1[82] = 0;
boolean reg_2[81] = 0;
boolean reg_3[79] = 0;
boolean reg_4[28] = 0;
boolean reg_5[69] = 0;
boolean reg_6[85] = 0;
boolean reg_7[104] = 0;
boolean reg_8[24] = 0;
boolean reg_9[97] = 0;
boolean reg_10[103] = 0;
boolean reg_11[42] = 0;
boolean reg_12[9] = 0;
boolean reg_13[90] = 0;
boolean reg_14[25] = 0;
boolean reg_15[57] = 0;
boolean reg_16[4] = 0;
boolean reg_17[13] = 0;
boolean reg_18[105] = 0;
boolean reg_19[14] = 0;
boolean reg_20[106] = 0;
boolean reg_21[7] = 0;
boolean reg_22[76] = 0;
boolean reg_23[87] = 0;
boolean reg_24[99] = 0;
boolean reg_25[58] = 0;
boolean reg_26[13] = 0;
boolean reg_27[42] = 0;
boolean reg_28[8] = 0;
boolean reg_29[7] = 0;
boolean reg_30[59] = 0;
boolean reg_31[11] = 0;
boolean reg_32[27] = 0;
boolean reg_33[10] = 0;
boolean reg_34[98] = 0;
boolean reg_35[39] = 0;
boolean reg_36[45] = 0;
boolean reg_37[93] = 0;
boolean reg_38[17] = 0;
boolean reg_39[37] = 0;
boolean reg_40[83] = 0;
boolean reg_41[36] = 0;
boolean reg_42[89] = 0;
boolean reg_43[28] = 0;
boolean reg_44[10] = 0;
boolean reg_45[4] = 0;
boolean reg_46[50] = 0;
boolean reg_47[22] = 0;
boolean reg_48[74] = 0;
boolean reg_49[69] = 0;
boolean reg_50[15] = 0;
boolean reg_51[46] = 0;
boolean reg_52[78] = 0;
boolean reg_53[35] = 0;
boolean reg_54[75] = 0;
boolean reg_55[6] = 0;
boolean reg_56[10] = 0;
boolean reg_57[2] = 0;
boolean reg_58[25] = 0;
boolean reg_59[7] = 0;
boolean reg_60[78] = 0;
boolean reg_61[80] = 0;
boolean reg_62[67] = 0;
boolean reg_63[28] = 0;
boolean reg_64[77] = 0;
boolean reg_65[37] = 0;
boolean reg_66[19] = 0;
boolean reg_67[5] = 0;
boolean reg_68[20] = 0;
boolean reg_69[16] = 0;
boolean reg_70[31] = 0;
boolean reg_71[30] = 0;
boolean reg_72[35] = 0;
boolean reg_73[24] = 0;
boolean reg_74[19] = 0;
boolean reg_75[18] = 0;
boolean reg_76[14] = 0;
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
if(reg_0[35] && reg_1[81] && reg_2[79] && reg_2[78] && reg_3[75] && reg_2[76] && reg_2[75] && reg_3[72] && reg_2[73] && reg_2[72] && reg_3[69] && reg_2[70] && reg_4[16] && reg_3[66] && reg_2[67] && reg_2[66] && reg_3[63] && reg_2[64] && reg_2[63] && reg_3[60] && reg_2[61] && reg_2[60] && reg_1[60] && reg_5[46] && reg_6[61] && reg_7[79] && reg_8[-2] && reg_9[70] && reg_10[75] && reg_1[53] && reg_0[5] && reg_11[11] && reg_3[47] && reg_2[48] && reg_2[47] && reg_1[47]) {
matched = true;
pattern_id = 0;
}
if(reg_12[9] && reg_13[89] && reg_14[23] && reg_15[54] && reg_10[99] && reg_16[-1] && reg_17[7] && reg_18[98] && reg_10[95] && reg_12[0]) {
matched = true;
pattern_id = 1;
}
if(reg_19[14] && reg_9[96] && reg_20[104] && reg_21[4] && reg_22[72] && reg_23[82] && reg_24[93] && reg_1[75] && reg_2[73] && reg_5[60] && reg_1[72]) {
matched = true;
pattern_id = 2;
}
if(reg_25[58] && reg_26[12] && reg_1[80] && reg_27[39] && reg_2[77] && reg_3[74] && reg_2[75] && reg_2[74] && reg_3[71] && reg_2[72] && reg_0[25] && reg_3[68] && reg_2[69] && reg_2[68] && reg_1[68]) {
matched = true;
pattern_id = 3;
}
if(reg_28[8] && reg_29[6] && reg_30[57] && reg_31[8] && reg_21[3] && reg_32[22] && reg_21[1] && reg_31[4]) {
matched = true;
pattern_id = 4;
}
if(reg_33[10] && reg_9[96] && reg_34[96] && reg_24[96] && reg_20[102] && reg_9[92] && reg_1[76] && reg_35[32] && reg_30[51] && reg_1[73] && reg_3[69]) {
matched = true;
pattern_id = 5;
}
if(reg_28[8] && reg_20[105] && reg_14[23] && reg_36[42] && reg_37[89] && reg_3[74] && reg_38[11] && reg_10[96] && reg_9[89]) {
matched = true;
pattern_id = 6;
}
if(reg_39[37] && reg_40[82] && reg_3[77]) {
matched = true;
pattern_id = 7;
}
if(reg_18[105] && reg_24[98] && reg_10[101] && reg_20[103]) {
matched = true;
pattern_id = 8;
}
if(reg_38[17] && reg_32[26] && reg_41[34] && reg_33[7]) {
matched = true;
pattern_id = 9;
}
if(reg_26[13] && reg_9[96] && reg_20[104] && reg_32[24] && reg_37[89] && reg_18[100] && reg_9[91] && reg_6[78] && reg_9[89]) {
matched = true;
pattern_id = 10;
}
if(reg_19[14] && reg_13[89] && reg_20[104] && reg_9[94] && reg_40[79] && reg_6[80] && reg_13[84] && reg_10[96] && reg_18[97] && reg_9[88] && reg_6[75]) {
matched = true;
pattern_id = 11;
}
if(reg_42[89] && reg_1[81] && reg_35[37] && reg_30[56] && reg_3[75] && reg_43[23] && reg_40[77] && reg_1[75]) {
matched = true;
pattern_id = 12;
}
if(reg_39[37] && reg_31[10] && reg_44[8] && reg_45[1] && reg_26[9]) {
matched = true;
pattern_id = 13;
}
if(reg_39[37] && reg_31[10] && reg_44[8] && reg_3[76] && reg_44[6] && reg_24[94] && reg_6[79] && reg_20[99] && reg_3[71] && reg_24[90] && reg_37[83] && reg_9[86] && reg_22[64]) {
matched = true;
pattern_id = 14;
}
if(reg_13[90] && reg_42[88] && reg_20[104] && reg_7[101] && reg_8[20] && reg_13[85] && reg_20[100] && reg_9[90]) {
matched = true;
pattern_id = 15;
}
if(reg_46[50] && reg_24[98] && reg_47[20] && reg_47[19] && reg_9[93] && reg_48[69] && reg_3[73] && reg_7[97] && reg_22[68]) {
matched = true;
pattern_id = 16;
}
if(reg_1[82] && reg_25[57] && reg_11[40] && reg_3[76] && reg_25[54] && reg_11[37] && reg_1[76]) {
matched = true;
pattern_id = 17;
}
if(reg_49[69] && reg_37[92] && reg_7[102] && reg_2[78] && reg_42[85] && reg_13[85]) {
matched = true;
pattern_id = 18;
}
if(reg_30[59] && reg_18[104] && reg_18[103] && reg_18[102] && reg_18[101] && reg_3[74] && reg_50[9] && reg_49[62] && reg_3[71] && reg_50[6] && reg_24[89] && reg_36[34] && reg_20[94] && reg_18[92] && reg_3[65] && reg_21[-8] && reg_10[87] && reg_3[62] && reg_45[-14] && reg_37[74] && reg_9[77] && reg_22[55]) {
matched = true;
pattern_id = 19;
}
if(reg_37[93] && reg_18[104] && reg_30[57] && reg_10[100] && reg_9[93] && reg_3[74] && reg_14[19] && reg_9[90] && reg_6[77] && reg_24[90] && reg_3[69] && reg_10[92] && reg_9[85] && reg_6[72] && reg_8[10] && reg_9[82] && reg_6[69]) {
matched = true;
pattern_id = 20;
}
if(reg_15[57] && reg_2[80] && reg_2[79] && reg_15[54] && reg_2[77] && reg_2[76]) {
matched = true;
pattern_id = 21;
}
if(reg_51[46] && reg_13[89] && reg_42[87] && reg_52[75] && reg_48[70] && reg_24[94] && reg_24[93] && reg_6[78]) {
matched = true;
pattern_id = 22;
}
if(reg_6[85] && reg_2[80] && reg_2[79] && reg_20[103]) {
matched = true;
pattern_id = 23;
}
if(reg_6[85] && reg_9[96] && reg_15[55] && reg_20[103]) {
matched = true;
pattern_id = 24;
}
if(reg_15[57] && reg_18[104] && reg_2[79] && reg_2[78] && reg_20[102] && reg_53[30]) {
matched = true;
pattern_id = 25;
}
if(reg_46[50] && reg_6[84] && reg_52[76] && reg_6[82] && reg_2[77] && reg_16[-1]) {
matched = true;
pattern_id = 26;
}
if(reg_48[74] && reg_27[41] && reg_35[37] && reg_18[102] && reg_18[101] && reg_54[70]) {
matched = true;
pattern_id = 27;
}
if(reg_10[103] && reg_13[89] && reg_20[104] && reg_24[96] && reg_6[81] && reg_7[99]) {
matched = true;
pattern_id = 28;
}
if(reg_18[105] && reg_13[89] && reg_16[2] && reg_2[78] && reg_6[81]) {
matched = true;
pattern_id = 29;
}
if(reg_23[87] && reg_6[84] && reg_7[102] && reg_48[71] && reg_13[86] && reg_49[64]) {
matched = true;
pattern_id = 30;
}
if(reg_32[27] && reg_20[105] && reg_24[97] && reg_24[96] && reg_47[18] && reg_33[5]) {
matched = true;
pattern_id = 31;
}
if(reg_15[57] && reg_13[89] && reg_22[74] && reg_52[75]) {
matched = true;
pattern_id = 32;
}
if(reg_27[42] && reg_0[34] && reg_35[37] && reg_11[39]) {
matched = true;
pattern_id = 33;
}
if(reg_30[59] && reg_30[58] && reg_30[57] && reg_30[56] && reg_30[55] && reg_30[54] && reg_30[53] && reg_30[52] && reg_30[51] && reg_30[50]) {
matched = true;
pattern_id = 34;
}
if(reg_44[10] && reg_45[3] && reg_26[11] && reg_19[11]) {
matched = true;
pattern_id = 35;
}
if(reg_10[103] && reg_7[103] && reg_42[87] && reg_52[75] && reg_9[93] && reg_22[71]) {
matched = true;
pattern_id = 36;
}
if(reg_23[87] && reg_7[103] && reg_42[87] && reg_52[75] && reg_9[93] && reg_22[71]) {
matched = true;
pattern_id = 37;
}
if(reg_10[103] && reg_37[92] && reg_24[97] && reg_24[96] && reg_23[83] && reg_15[52] && reg_24[93] && reg_6[78] && reg_52[70] && reg_10[94]) {
matched = true;
pattern_id = 38;
}
if(reg_10[103] && reg_52[77] && reg_7[102] && reg_46[47] && reg_46[46] && reg_14[20]) {
matched = true;
pattern_id = 39;
}
if(reg_46[50] && reg_24[98] && reg_47[20] && reg_7[101] && reg_22[72] && reg_1[77] && reg_35[33] && reg_30[52] && reg_1[74]) {
matched = true;
pattern_id = 40;
}
if(reg_46[50] && reg_11[41] && reg_11[40]) {
matched = true;
pattern_id = 41;
}
if(reg_55[6] && reg_29[6] && reg_41[34] && reg_56[7] && reg_56[6] && reg_45[-1] && reg_55[0]) {
matched = true;
pattern_id = 42;
}
if(reg_51[46] && reg_9[96] && reg_20[104] && reg_13[87] && reg_13[86] && reg_46[45] && reg_34[92] && reg_24[92] && reg_10[95] && reg_20[97] && reg_48[64] && reg_24[88] && reg_22[64] && reg_9[84]) {
matched = true;
pattern_id = 43;
}
if(reg_47[22] && reg_45[3] && reg_6[83] && reg_13[87] && reg_8[20] && reg_9[92]) {
matched = true;
pattern_id = 44;
}
if(reg_52[78] && reg_7[103] && reg_46[48] && reg_46[47] && reg_34[94] && reg_9[92]) {
matched = true;
pattern_id = 45;
}
if(reg_47[22] && reg_9[96] && reg_10[101] && reg_36[42] && reg_22[72] && reg_48[69] && reg_18[99] && reg_9[90] && reg_7[96] && reg_20[97] && reg_53[25]) {
matched = true;
pattern_id = 46;
}
if(reg_46[50] && reg_11[41] && reg_11[40] && reg_13[87] && reg_48[70] && reg_10[98] && reg_46[44]) {
matched = true;
pattern_id = 47;
}
if(reg_10[103] && reg_18[104] && reg_9[95] && reg_46[47] && reg_46[46] && reg_3[74] && reg_51[40] && reg_24[92] && reg_36[37] && reg_22[67] && reg_48[64]) {
matched = true;
pattern_id = 48;
}
if(reg_13[90] && reg_46[49] && reg_7[102] && reg_8[21] && reg_9[93] && reg_3[74] && reg_20[100] && reg_7[97] && reg_57[-6] && reg_47[13] && reg_36[35]) {
matched = true;
pattern_id = 49;
}
if(reg_13[90] && reg_46[49] && reg_7[102] && reg_8[21] && reg_9[93]) {
matched = true;
pattern_id = 50;
}
if(reg_22[76] && reg_9[96] && reg_15[55] && reg_10[100] && reg_9[93] && reg_6[80] && reg_8[18] && reg_9[90] && reg_6[77]) {
matched = true;
pattern_id = 51;
}
if(reg_10[103] && reg_20[105] && reg_6[83] && reg_9[94] && reg_13[86] && reg_34[93] && reg_58[19]) {
matched = true;
pattern_id = 52;
}
if(reg_37[93] && reg_7[103] && reg_22[74] && reg_47[19]) {
matched = true;
pattern_id = 53;
}
if(reg_37[93] && reg_24[98] && reg_22[74] && reg_47[19]) {
matched = true;
pattern_id = 54;
}
if(reg_59[7]) {
matched = true;
pattern_id = 55;
}
if(reg_1[82] && reg_60[77] && reg_43[26] && reg_3[76] && reg_60[74] && reg_2[76] && reg_3[73] && reg_2[74] && reg_2[73] && reg_3[70] && reg_2[71] && reg_27[31] && reg_3[67] && reg_2[68] && reg_2[67] && reg_3[64] && reg_2[65] && reg_27[25] && reg_3[61] && reg_2[62] && reg_2[61] && reg_3[58] && reg_2[59] && reg_2[58] && reg_3[55] && reg_2[56] && reg_2[55] && reg_3[52] && reg_2[53] && reg_2[52] && reg_1[52]) {
matched = true;
pattern_id = 56;
}
if(reg_1[82] && reg_60[77] && reg_27[40] && reg_3[76] && reg_60[74] && reg_2[76] && reg_1[76]) {
matched = true;
pattern_id = 57;
}
if(reg_1[82] && reg_2[80] && reg_2[79] && reg_3[76] && reg_2[77] && reg_27[37] && reg_3[73] && reg_2[74] && reg_2[73] && reg_3[70] && reg_2[71] && reg_2[70] && reg_3[67] && reg_2[68] && reg_2[67] && reg_3[64] && reg_2[65] && reg_2[64] && reg_3[61] && reg_2[62] && reg_2[61] && reg_1[61]) {
matched = true;
pattern_id = 58;
}
if(reg_1[82] && reg_2[80] && reg_61[78] && reg_1[79] && reg_13[86] && reg_36[40] && reg_20[100] && reg_18[98] && reg_24[91] && reg_6[76] && reg_10[93]) {
matched = true;
pattern_id = 59;
}
if(reg_1[82] && reg_2[80] && reg_61[78] && reg_1[79] && reg_8[20] && reg_9[92] && reg_6[79] && reg_10[96] && reg_7[96] && reg_24[90] && reg_22[66]) {
matched = true;
pattern_id = 60;
}
if(reg_17[13] && reg_17[12] && reg_58[23] && reg_17[10] && reg_17[9] && reg_58[20] && reg_17[7] && reg_17[6] && reg_58[17]) {
matched = true;
pattern_id = 61;
}
if(reg_20[106] && reg_18[104] && reg_7[102] && reg_10[100] && reg_7[100] && reg_10[98] && reg_10[97] && reg_24[92] && reg_34[90] && reg_9[88] && reg_20[96] && reg_9[86] && reg_34[86] && reg_37[80] && reg_10[89] && reg_37[78] && reg_13[74] && reg_42[72] && reg_9[79] && reg_23[68] && reg_24[79] && reg_6[64] && reg_20[84] && reg_18[82] && reg_9[73] && reg_10[78] && reg_24[73] && reg_42[62] && reg_52[50] && reg_7[75] && reg_22[46] && reg_13[59] && reg_48[42] && reg_48[41] && reg_6[51] && reg_7[69] && reg_22[40] && reg_49[32] && reg_9[59] && reg_13[51] && reg_18[65] && reg_49[28] && reg_9[55] && reg_13[47] && reg_18[61] && reg_7[59] && reg_52[32] && reg_22[29] && reg_24[51] && reg_15[8] && reg_20[56] && reg_18[54] && reg_7[52] && reg_10[50] && reg_7[50] && reg_10[48] && reg_46[-6] && reg_13[33] && reg_34[40] && reg_9[38] && reg_51[-14] && reg_36[-16] && reg_20[44] && reg_13[27] && reg_22[12] && reg_49[4] && reg_15[-9] && reg_13[23] && reg_49[1] && reg_15[-12] && reg_18[35] && reg_24[28] && reg_42[17] && reg_13[17] && reg_6[11] && reg_9[22] && reg_10[27] && reg_18[28] && reg_24[21] && reg_6[6] && reg_7[24] && reg_14[-56] && reg_24[17] && reg_22[-7] && reg_47[-62] && reg_24[14] && reg_20[20] && reg_7[17] && reg_20[18] && reg_15[-32] && reg_24[9] && reg_6[-6] && reg_52[-14] && reg_7[11] && reg_22[-18] && reg_47[-73] && reg_10[7] && reg_24[2] && reg_13[-8] && reg_46[-49] && reg_46[-50] && reg_7[3] && reg_10[1] && reg_42[-14] && reg_24[-5] && reg_24[-6] && reg_46[-56]) {
matched = true;
pattern_id = 62;
}
if(reg_30[59] && reg_5[68] && reg_50[13] && reg_33[7] && reg_45[0] && reg_40[78] && reg_62[61] && reg_32[20]) {
matched = true;
pattern_id = 63;
}
if(reg_1[82] && reg_40[82] && reg_5[67] && reg_3[76] && reg_60[74] && reg_2[76] && reg_3[73] && reg_41[29] && reg_60[70] && reg_3[70] && reg_5[59] && reg_61[69] && reg_3[67] && reg_39[24] && reg_39[23] && reg_3[64] && reg_39[21] && reg_39[20] && reg_3[61] && reg_39[18] && reg_39[17] && reg_1[61] && reg_58[3] && reg_51[23] && reg_7[80] && reg_22[51] && reg_58[-1] && reg_10[76] && reg_18[77]) {
matched = true;
pattern_id = 64;
}
if(reg_27[42] && reg_1[81] && reg_40[81] && reg_2[78] && reg_3[75] && reg_25[53] && reg_2[75] && reg_1[75] && reg_63[20] && reg_27[33] && reg_1[72] && reg_5[58] && reg_25[46] && reg_3[66] && reg_25[44] && reg_35[24] && reg_3[63] && reg_39[20] && reg_39[19] && reg_1[63] && reg_27[22] && reg_1[61] && reg_40[61] && reg_64[54] && reg_3[55] && reg_40[58] && reg_5[43] && reg_3[52] && reg_60[50] && reg_2[52] && reg_1[52] && reg_27[11] && reg_1[50] && reg_40[50] && reg_2[47] && reg_1[47]) {
matched = true;
pattern_id = 65;
}
if(reg_27[42] && reg_1[81] && reg_40[81] && reg_2[78] && reg_3[75] && reg_25[53] && reg_2[75] && reg_3[72] && reg_2[73] && reg_0[26] && reg_3[69] && reg_40[72] && reg_5[57] && reg_3[66] && reg_60[64] && reg_2[66] && reg_3[63] && reg_60[61] && reg_43[10] && reg_3[60] && reg_40[63] && reg_2[60] && reg_1[60] && reg_36[22] && reg_56[-14] && reg_1[57] && reg_41[10] && reg_25[31] && reg_1[54] && reg_56[-19] && reg_65[7] && reg_1[51] && reg_25[26] && reg_2[48] && reg_1[48]) {
matched = true;
pattern_id = 66;
}
if(reg_1[82] && reg_60[77] && reg_64[75] && reg_3[76] && reg_39[33] && reg_61[75] && reg_3[73] && reg_0[28] && reg_64[69] && reg_3[70] && reg_40[73] && reg_61[69] && reg_3[67] && reg_60[65] && reg_64[63] && reg_3[64] && reg_39[21] && reg_35[22] && reg_3[61] && reg_60[59] && reg_64[57] && reg_3[58] && reg_39[15] && reg_64[54] && reg_3[55] && reg_60[53] && reg_64[51] && reg_3[52] && reg_39[9] && reg_0[6] && reg_3[49] && reg_30[28] && reg_40[51] && reg_1[49] && reg_66[-15] && reg_1[47] && reg_39[1] && reg_41[-1] && reg_1[44]) {
matched = true;
pattern_id = 67;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_1[79] && reg_22[72] && reg_65[32] && reg_1[76] && reg_40[76] && reg_4[20] && reg_3[70] && reg_2[71] && reg_4[17] && reg_3[67] && reg_64[64] && reg_30[45] && reg_1[67] && reg_27[26] && reg_1[65] && reg_40[65] && reg_64[58] && reg_3[59] && reg_60[57] && reg_64[55] && reg_1[59] && reg_26[-11] && reg_1[57] && reg_2[55] && reg_27[15] && reg_3[51] && reg_40[54] && reg_4[-2] && reg_1[51] && reg_39[5] && reg_1[49] && reg_2[47] && reg_43[-7] && reg_1[46]) {
matched = true;
pattern_id = 68;
}
if(reg_1[82] && reg_64[76] && reg_2[79] && reg_3[76] && reg_27[38] && reg_30[54] && reg_3[73] && reg_40[76] && reg_2[73] && reg_3[70] && reg_2[71] && reg_39[26] && reg_3[67] && reg_64[64] && reg_2[67] && reg_3[64] && reg_2[65] && reg_0[18] && reg_1[64] && reg_3[60] && reg_1[62] && reg_2[60] && reg_60[56] && reg_3[56] && reg_64[53] && reg_0[10] && reg_3[53] && reg_2[54] && reg_0[7] && reg_1[53] && reg_3[49] && reg_1[51] && reg_2[49] && reg_39[4] && reg_3[45] && reg_5[34] && reg_2[45] && reg_3[42] && reg_0[-3] && reg_35[0] && reg_3[39] && reg_25[17] && reg_39[-5] && reg_3[36] && reg_39[-7] && reg_60[33] && reg_1[36]) {
matched = true;
pattern_id = 69;
}
if(reg_67[5] && reg_67[4] && reg_67[3] && reg_13[87] && reg_20[102] && reg_18[100]) {
matched = true;
pattern_id = 70;
}
if(reg_1[82] && reg_39[36] && reg_39[35] && reg_3[76] && reg_39[33] && reg_11[37] && reg_3[73] && reg_39[30] && reg_39[29] && reg_3[70] && reg_39[27] && reg_5[58] && reg_3[67] && reg_2[68] && reg_4[14] && reg_1[67]) {
matched = true;
pattern_id = 71;
}
if(reg_58[25] && reg_8[23] && reg_7[102] && reg_9[94] && reg_15[53] && reg_10[98] && reg_24[93] && reg_36[38] && reg_6[77] && reg_42[80] && reg_9[87] && reg_58[14] && reg_20[94] && reg_9[84] && reg_34[84] && reg_37[78] && reg_46[34] && reg_13[73] && reg_20[88] && reg_9[78] && reg_17[-7] && reg_18[84] && reg_20[84] && reg_34[75] && reg_46[26] && reg_63[3]) {
matched = true;
pattern_id = 72;
}
if(reg_26[13] && reg_30[58] && reg_50[13] && reg_41[33] && reg_26[9] && reg_30[54] && reg_50[9] && reg_41[29]) {
matched = true;
pattern_id = 73;
}
if(reg_35[39] && reg_1[81] && reg_40[81] && reg_64[74] && reg_3[75] && reg_25[53] && reg_27[36] && reg_3[72] && reg_27[34] && reg_2[72] && reg_1[72] && reg_63[17] && reg_1[70] && reg_41[23] && reg_64[63] && reg_3[64] && reg_2[65] && reg_4[11] && reg_1[64] && reg_68[1] && reg_66[-1] && reg_1[61] && reg_39[15] && reg_30[36] && reg_1[58] && reg_19[-11] && reg_35[13] && reg_1[55] && reg_40[55] && reg_2[52] && reg_1[52] && reg_44[-21] && reg_1[50] && reg_39[4] && reg_61[46] && reg_3[44] && reg_5[33] && reg_2[44] && reg_1[44] && reg_44[-29]) {
matched = true;
pattern_id = 74;
}
if(reg_65[37] && reg_1[81] && reg_2[79] && reg_41[33] && reg_1[78] && reg_27[37] && reg_1[76] && reg_40[76] && reg_2[73] && reg_3[70] && reg_25[48] && reg_2[70] && reg_3[67] && reg_35[26] && reg_25[44] && reg_3[64] && reg_60[62] && reg_5[52] && reg_1[64] && reg_69[-3] && reg_1[62] && reg_2[60] && reg_41[14] && reg_3[56] && reg_60[54] && reg_64[52] && reg_3[53] && reg_39[10] && reg_30[31] && reg_3[50] && reg_60[48] && reg_64[46] && reg_3[47] && reg_39[4] && reg_64[43] && reg_1[47]) {
matched = true;
pattern_id = 75;
}
if(reg_18[105] && reg_70[30] && reg_65[35] && reg_1[79] && reg_39[33] && reg_39[32] && reg_3[73] && reg_5[62] && reg_43[20] && reg_3[70] && reg_39[27] && reg_39[26] && reg_3[67] && reg_5[56] && reg_11[28] && reg_3[64] && reg_39[21] && reg_39[20] && reg_3[61] && reg_39[18] && reg_43[8] && reg_3[58] && reg_60[56] && reg_25[35] && reg_3[55] && reg_39[12] && reg_43[2] && reg_3[52] && reg_64[49] && reg_2[52] && reg_1[52] && reg_23[56] && reg_27[10]) {
matched = true;
pattern_id = 76;
}
if(reg_1[82] && reg_5[68] && reg_60[76] && reg_1[79] && reg_71[26] && reg_1[77] && reg_40[77] && reg_5[62] && reg_3[71] && reg_60[69] && reg_2[71] && reg_3[68] && reg_41[24] && reg_60[65] && reg_3[65] && reg_5[54] && reg_64[61] && reg_3[62] && reg_39[19] && reg_39[18] && reg_3[59] && reg_39[16] && reg_39[15] && reg_3[56] && reg_39[13] && reg_39[12] && reg_1[56] && reg_58[-2] && reg_51[18] && reg_7[75] && reg_22[46] && reg_58[-6] && reg_10[71] && reg_18[72]) {
matched = true;
pattern_id = 77;
}
if(reg_72[35] && reg_1[81] && reg_2[79] && reg_41[33] && reg_1[78] && reg_27[37] && reg_1[76] && reg_40[76] && reg_2[73] && reg_3[70] && reg_25[48] && reg_2[70] && reg_3[67] && reg_35[26] && reg_25[44] && reg_3[64] && reg_60[62] && reg_5[52] && reg_1[64] && reg_69[-3] && reg_1[62] && reg_27[21] && reg_0[13] && reg_3[56] && reg_60[54] && reg_64[52] && reg_3[53] && reg_39[10] && reg_64[49] && reg_3[50] && reg_60[48] && reg_64[46] && reg_3[47] && reg_39[4] && reg_64[43] && reg_1[47]) {
matched = true;
pattern_id = 78;
}
if(reg_1[82] && reg_41[35] && reg_60[76] && reg_3[76] && reg_5[65] && reg_64[72] && reg_3[73] && reg_39[30] && reg_39[29] && reg_3[70] && reg_39[27] && reg_39[26] && reg_3[67] && reg_39[24] && reg_39[23] && reg_1[67] && reg_58[9] && reg_51[29] && reg_7[86] && reg_22[57] && reg_58[5] && reg_10[82] && reg_18[83]) {
matched = true;
pattern_id = 79;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_1[79] && reg_58[21] && reg_73[19] && reg_1[76] && reg_41[29] && reg_25[50] && reg_1[73] && reg_74[9] && reg_65[26] && reg_1[70] && reg_60[65] && reg_64[63] && reg_3[64] && reg_39[21] && reg_25[41] && reg_3[61] && reg_60[59] && reg_64[57] && reg_1[61] && reg_59[-15] && reg_1[59] && reg_60[54] && reg_64[52] && reg_3[53] && reg_39[10] && reg_0[7] && reg_1[53]) {
matched = true;
pattern_id = 80;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_3[76] && reg_0[31] && reg_35[34] && reg_1[76] && reg_65[30] && reg_35[31] && reg_1[73] && reg_40[73] && reg_2[70] && reg_3[67] && reg_60[65] && reg_60[64] && reg_1[67] && reg_39[21] && reg_1[65] && reg_39[19] && reg_30[40] && reg_3[59] && reg_60[57] && reg_64[55] && reg_1[59] && reg_39[13] && reg_1[57] && reg_39[11] && reg_43[1] && reg_3[51] && reg_60[49] && reg_64[47] && reg_1[51] && reg_4[-4]) {
matched = true;
pattern_id = 81;
}
if(reg_40[83] && reg_1[81] && reg_2[79] && reg_61[77] && reg_3[75] && reg_60[73] && reg_64[71] && reg_1[75] && reg_54[67] && reg_1[73] && reg_2[71] && reg_60[67] && reg_3[67] && reg_60[65] && reg_5[55] && reg_1[67] && reg_62[51] && reg_1[65] && reg_2[63] && reg_60[59] && reg_3[59] && reg_60[57] && reg_64[55] && reg_1[59] && reg_40[59] && reg_1[57] && reg_2[55] && reg_40[56] && reg_3[51] && reg_25[29] && reg_2[51] && reg_3[48] && reg_2[49] && reg_25[25] && reg_3[45] && reg_40[48] && reg_5[33] && reg_3[42] && reg_60[40] && reg_2[42] && reg_1[42] && reg_27[1] && reg_1[40] && reg_40[40] && reg_2[37] && reg_3[34] && reg_39[-9] && reg_41[-11] && reg_3[31] && reg_40[34] && reg_2[31] && reg_3[28] && reg_40[31] && reg_5[16] && reg_3[25] && reg_60[23] && reg_2[25] && reg_3[22] && reg_41[-22] && reg_60[19] && reg_3[19] && reg_64[16] && reg_11[-20] && reg_3[16] && reg_39[-27] && reg_39[-28] && reg_3[13] && reg_39[-30] && reg_39[-31] && reg_3[10] && reg_39[-33] && reg_39[-34] && reg_1[10] && reg_58[-48] && reg_51[-28] && reg_7[29] && reg_22[0] && reg_58[-52] && reg_10[25] && reg_18[26] && reg_1[2] && reg_2[0] && reg_30[-23] && reg_1[-1]) {
matched = true;
pattern_id = 82;
}
if(reg_75[18] && reg_75[17] && reg_75[16] && reg_75[15] && reg_76[10] && reg_17[8] && reg_27[36] && reg_61[73] && reg_0[27] && reg_36[36] && reg_76[4] && reg_35[28] && reg_2[69] && reg_2[68] && reg_1[68] && reg_0[20] && reg_11[26] && reg_1[65] && reg_22[58]) {
matched = true;
pattern_id = 83;
}
if(reg_1[82] && reg_30[58] && reg_25[56] && reg_3[76] && reg_40[79] && reg_5[64] && reg_3[73] && reg_2[74] && reg_64[69] && reg_3[70] && reg_60[68] && reg_2[70] && reg_3[67] && reg_2[68] && reg_2[67] && reg_3[64] && reg_2[65] && reg_2[64] && reg_3[61] && reg_2[62] && reg_2[61] && reg_3[58] && reg_2[59] && reg_27[19] && reg_3[55] && reg_2[56] && reg_2[55] && reg_3[52] && reg_2[53] && reg_2[52] && reg_3[49] && reg_2[50] && reg_2[49] && reg_3[46] && reg_2[47] && reg_2[46] && reg_3[43] && reg_2[44] && reg_2[43] && reg_3[40] && reg_2[41] && reg_2[40] && reg_3[37] && reg_2[38] && reg_27[-2] && reg_3[34] && reg_2[35] && reg_2[34] && reg_3[31] && reg_2[32] && reg_27[-8] && reg_1[31] && reg_3[27] && reg_3[26] && reg_3[25] && reg_3[24] && reg_1[26] && reg_2[24] && reg_0[-23] && reg_1[23] && reg_13[30]) {
matched = true;
pattern_id = 84;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_3[76] && reg_61[76] && reg_39[32] && reg_1[76] && reg_70[24] && reg_38[9] && reg_1[73] && reg_39[27] && reg_41[25] && reg_1[70] && reg_50[2] && reg_1[68] && reg_64[62] && reg_60[62] && reg_3[62] && reg_39[19] && reg_41[17] && reg_1[62] && reg_50[-6] && reg_1[60] && reg_64[54] && reg_25[34] && reg_1[57]) {
matched = true;
pattern_id = 85;
}
if(reg_15[57] && reg_18[104] && reg_24[97] && reg_7[101] && reg_10[99] && reg_1[77] && reg_35[33] && reg_30[52] && reg_1[74] && reg_58[16] && reg_58[15]) {
matched = true;
pattern_id = 86;
}
if(reg_19[14] && reg_41[35] && reg_31[9] && reg_3[76] && reg_58[21] && reg_3[74] && reg_29[1] && reg_31[4] && reg_31[3] && reg_44[1] && reg_58[15] && reg_27[31] && reg_17[1] && reg_27[29]) {
matched = true;
pattern_id = 87;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_1[79] && reg_62[63] && reg_54[70] && reg_32[21] && reg_0[28] && reg_1[74] && reg_41[27] && reg_11[32] && reg_3[68] && reg_60[66] && reg_35[26] && reg_3[65] && reg_40[68] && reg_35[23] && reg_3[62] && reg_2[63] && reg_25[39] && reg_1[62] && reg_62[46] && reg_1[60] && reg_60[55] && reg_60[54] && reg_3[54] && reg_0[9] && reg_35[12] && reg_3[51] && reg_25[29] && reg_60[48] && reg_1[51] && reg_44[-22] && reg_15[24]) {
matched = true;
pattern_id = 88;
}
if(reg_1[82] && reg_25[57] && reg_11[40] && reg_1[79] && reg_3[75] && reg_1[77] && reg_25[52] && reg_11[35] && reg_1[74] && reg_53[26] && reg_1[72] && reg_60[67] && reg_25[46] && reg_3[66] && reg_40[69] && reg_40[68] && reg_3[63] && reg_60[61] && reg_35[21] && reg_3[60] && reg_41[16] && reg_64[56] && reg_3[57] && reg_2[58] && reg_11[18] && reg_3[54] && reg_60[52] && reg_25[31] && reg_3[51] && reg_27[13] && reg_64[47] && reg_1[51] && reg_35[7] && reg_1[49] && reg_40[49] && reg_64[42] && reg_1[46] && reg_23[50] && reg_1[44] && reg_25[19] && reg_64[37] && reg_3[38] && reg_27[0] && reg_2[38] && reg_1[38]) {
matched = true;
pattern_id = 89;
}
if(reg_23[87] && reg_6[84] && reg_24[97] && reg_34[95] && reg_1[78] && reg_35[34] && reg_30[53] && reg_3[72] && reg_64[69] && reg_2[72] && reg_3[69] && reg_64[66] && reg_2[69] && reg_3[66] && reg_64[63] && reg_2[66] && reg_3[63] && reg_64[60] && reg_2[63] && reg_3[60] && reg_64[57] && reg_2[60] && reg_3[57] && reg_64[54] && reg_2[57] && reg_3[54] && reg_64[51] && reg_2[54] && reg_3[51] && reg_64[48] && reg_2[51] && reg_3[48] && reg_64[45] && reg_2[48] && reg_3[45] && reg_64[42] && reg_2[45] && reg_3[42] && reg_64[39] && reg_2[42] && reg_1[42]) {
matched = true;
pattern_id = 90;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_1[79] && reg_41[32] && reg_1[77] && reg_41[30] && reg_25[51] && reg_1[74] && reg_3[70] && reg_54[65] && reg_1[71] && reg_39[25] && reg_40[70] && reg_1[68] && reg_35[24] && reg_1[66] && reg_40[66] && reg_64[59] && reg_3[60] && reg_25[38] && reg_27[21] && reg_3[57] && reg_60[55] && reg_0[11] && reg_3[54] && reg_60[52] && reg_25[31] && reg_3[51] && reg_39[8] && reg_35[9] && reg_3[48] && reg_60[46] && reg_2[48] && reg_1[48] && reg_67[-30]) {
matched = true;
pattern_id = 91;
}
if(reg_1[82] && reg_2[80] && reg_27[40] && reg_3[76] && reg_2[77] && reg_35[34] && reg_3[73] && reg_2[74] && reg_2[73] && reg_3[70] && reg_2[71] && reg_2[70] && reg_3[67] && reg_2[68] && reg_2[67] && reg_3[64] && reg_2[65] && reg_2[64] && reg_3[61] && reg_2[62] && reg_2[61] && reg_3[58] && reg_2[59] && reg_27[19] && reg_3[55] && reg_2[56] && reg_2[55] && reg_3[52] && reg_2[53] && reg_0[6] && reg_3[49] && reg_2[50] && reg_0[3] && reg_3[46] && reg_41[2] && reg_60[43] && reg_1[46]) {
matched = true;
pattern_id = 92;
}
if(reg_1[82] && reg_60[77] && reg_2[79] && reg_3[76] && reg_2[77] && reg_2[76] && reg_3[73] && reg_2[74] && reg_61[72] && reg_3[70] && reg_2[71] && reg_2[70] && reg_3[67] && reg_2[68] && reg_2[67] && reg_3[64] && reg_2[65] && reg_2[64] && reg_3[61] && reg_2[62] && reg_2[61] && reg_3[58] && reg_2[59] && reg_2[58] && reg_3[55] && reg_2[56] && reg_27[16] && reg_1[55] && reg_63[0] && reg_1[53] && reg_2[51] && reg_2[50] && reg_3[47] && reg_2[48] && reg_27[8] && reg_3[44] && reg_2[45] && reg_0[-2] && reg_1[44]) {
matched = true;
pattern_id = 93;
}
if(reg_65[37] && reg_1[81] && reg_25[56] && reg_2[78] && reg_3[75] && reg_2[76] && reg_0[29] && reg_3[72] && reg_60[70] && reg_64[68] && reg_3[69] && reg_2[70] && reg_4[16] && reg_3[66] && reg_39[23] && reg_41[21] && reg_3[63] && reg_40[66] && reg_60[60] && reg_3[60] && reg_60[58] && reg_64[56] && reg_1[60] && reg_39[14] && reg_1[58] && reg_2[56] && reg_11[16] && reg_3[52] && reg_25[30] && reg_2[52] && reg_3[49] && reg_2[50] && reg_4[-4] && reg_3[46] && reg_60[44] && reg_64[42] && reg_1[46] && reg_39[0]) {
matched = true;
pattern_id = 94;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_1[79] && reg_72[31] && reg_65[32] && reg_72[29] && reg_72[28] && reg_72[27] && reg_27[33] && reg_1[72] && reg_5[58] && reg_0[23] && reg_3[66] && reg_60[64] && reg_60[63] && reg_1[66] && reg_72[18] && reg_1[64] && reg_2[62] && reg_25[38] && reg_3[58] && reg_60[56] && reg_60[55] && reg_1[58] && reg_72[10] && reg_1[56] && reg_27[15] && reg_41[8] && reg_1[53]) {
matched = true;
pattern_id = 95;
}
if(reg_1[82] && reg_41[35] && reg_25[56] && reg_1[79] && reg_71[26] && reg_65[32] && reg_27[36] && reg_1[75] && reg_40[75] && reg_2[72] && reg_1[72] && reg_71[19] && reg_1[70] && reg_60[65] && reg_64[63] && reg_1[67] && reg_39[21] && reg_1[65] && reg_2[63] && reg_11[23] && reg_3[59] && reg_60[57] && reg_64[55] && reg_3[56] && reg_40[59] && reg_35[14] && reg_1[56] && reg_71[3] && reg_1[54] && reg_60[49] && reg_64[47] && reg_3[48] && reg_2[49] && reg_4[-5] && reg_1[48]) {
matched = true;
pattern_id = 96;
}
if(reg_42[89] && reg_34[97] && reg_48[72] && reg_73[21] && reg_6[81] && reg_24[94] && reg_24[93] && reg_20[99] && reg_10[95] && reg_18[96]) {
matched = true;
pattern_id = 97;
}
if(reg_13[90] && reg_3[78] && reg_51[44] && reg_3[76] && reg_42[85] && reg_3[74] && reg_48[68] && reg_3[72] && reg_9[89] && reg_3[70] && reg_23[77]) {
matched = true;
pattern_id = 98;
}
if(reg_10[103] && reg_9[96] && reg_13[88] && reg_6[82] && reg_42[85] && reg_18[100]) {
matched = true;
pattern_id = 99;
}

}