#include "pattern_matcher.h"


void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx){
shift_loop:for(int i=0; i< buffer_size - chunk_len; i++){
#pragma HLS UNROLL
buffer[i] = buffer[i+chunk_len];
}
fill_loop:for(int i=0;i<chunk_len; i++){
#pragma HLS UNROLL
buffer[buffer_size - chunk_len + i] = chunk((start_indx + i) * 8 + 7, (start_indx + i) * 8);
}
}

void match(ap_uint<16> &pattern_id, char buffer[buffer_size]) {
for(int i=0; i<chunk_len; i++){
#pragma HLS UNROLL
boolean b0_1 = (buffer[i] == '|');
boolean b1_1 = (buffer[i + 1] == '0');
boolean b2_1 = (buffer[i + 2] == '0');
boolean b3_1 = (buffer[i + 3] == ' ');
boolean b4_1 = (buffer[i + 4] == '0');
boolean b5_1 = (buffer[i + 5] == '0');
boolean b6_1 = (buffer[i + 6] == ' ');
boolean b7_1 = (buffer[i + 7] == '0');
boolean b8_1 = (buffer[i + 8] == '0');
boolean b9_1 = (buffer[i + 9] == ' ');
boolean b10_1 = (buffer[i + 10] == '0');
boolean b11_1 = (buffer[i + 11] == '0');
boolean b12_1 = (buffer[i + 12] == ' ');
boolean b13_1 = (buffer[i + 13] == '0');
boolean b14_1 = (buffer[i + 14] == '0');
boolean b15_1 = (buffer[i + 15] == ' ');
boolean b16_1 = (buffer[i + 16] == '0');
boolean b17_1 = (buffer[i + 17] == '0');
boolean b18_1 = (buffer[i + 18] == ' ');
boolean b19_1 = (buffer[i + 19] == '0');
boolean b20_1 = (buffer[i + 20] == '0');
boolean b21_1 = (buffer[i + 21] == ' ');
boolean b22_1 = (buffer[i + 22] == '0');
boolean b23_1 = (buffer[i + 23] == '0');
boolean b24_1 = (buffer[i + 24] == ' ');
boolean b25_1 = (buffer[i + 25] == '0');
boolean b26_1 = (buffer[i + 26] == '0');
boolean b27_1 = (buffer[i + 27] == ' ');
boolean b28_1 = (buffer[i + 28] == '0');
boolean b29_1 = (buffer[i + 29] == '0');
boolean b30_1 = (buffer[i + 30] == ' ');
boolean b31_1 = (buffer[i + 31] == '0');
boolean b32_1 = (buffer[i + 32] == '0');
boolean b33_1 = (buffer[i + 33] == ' ');
boolean b34_1 = (buffer[i + 34] == '0');
boolean b35_1 = (buffer[i + 35] == '0');
boolean b36_1 = (buffer[i + 36] == ' ');
boolean b37_1 = (buffer[i + 37] == '0');
boolean b38_1 = (buffer[i + 38] == '0');
boolean b39_1 = (buffer[i + 39] == ' ');
boolean b40_1 = (buffer[i + 40] == '0');
boolean b41_1 = (buffer[i + 41] == '0');
boolean b42_1 = (buffer[i + 42] == ' ');
boolean b43_1 = (buffer[i + 43] == '0');
boolean b44_1 = (buffer[i + 44] == '1');
boolean b45_1 = (buffer[i + 45] == ' ');
boolean b46_1 = (buffer[i + 46] == '1');
boolean b47_1 = (buffer[i + 47] == '0');
boolean b48_1 = (buffer[i + 48] == ' ');
boolean b49_1 = (buffer[i + 49] == '0');
boolean b50_1 = (buffer[i + 50] == '2');
boolean b51_1 = (buffer[i + 51] == ' ');
boolean b52_1 = (buffer[i + 52] == '0');
boolean b53_1 = (buffer[i + 53] == '0');
boolean b54_1 = (buffer[i + 54] == ' ');
boolean b55_1 = (buffer[i + 55] == '0');
boolean b56_1 = (buffer[i + 56] == '0');
boolean b57_1 = (buffer[i + 57] == ' ');
boolean b58_1 = (buffer[i + 58] == '0');
boolean b59_1 = (buffer[i + 59] == '0');
boolean b60_1 = (buffer[i + 60] == ' ');
boolean b61_1 = (buffer[i + 61] == '0');
boolean b62_1 = (buffer[i + 62] == '0');
boolean b63_1 = (buffer[i + 63] == ' ');
boolean b64_1 = (buffer[i + 64] == '0');
boolean b65_1 = (buffer[i + 65] == '0');
boolean b66_1 = (buffer[i + 66] == ' ');
boolean b67_1 = (buffer[i + 67] == '0');
boolean b68_1 = (buffer[i + 68] == '0');
boolean b69_1 = (buffer[i + 69] == ' ');
boolean b70_1 = (buffer[i + 70] == '0');
boolean b71_1 = (buffer[i + 71] == '0');
boolean b72_1 = (buffer[i + 72] == ' ');
boolean b73_1 = (buffer[i + 73] == '0');
boolean b74_1 = (buffer[i + 74] == '0');
boolean b75_1 = (buffer[i + 75] == ' ');
boolean b76_1 = (buffer[i + 76] == '8');
boolean b77_1 = (buffer[i + 77] == '8');
boolean b78_1 = (buffer[i + 78] == ' ');
boolean b79_1 = (buffer[i + 79] == '0');
boolean b80_1 = (buffer[i + 80] == 'D');
boolean b81_1 = (buffer[i + 81] == ' ');
boolean b82_1 = (buffer[i + 82] == '0');
boolean b83_1 = (buffer[i + 83] == '0');
boolean b84_1 = (buffer[i + 84] == ' ');
boolean b85_1 = (buffer[i + 85] == '0');
boolean b86_1 = (buffer[i + 86] == '0');
boolean b87_1 = (buffer[i + 87] == ' ');
boolean b88_1 = (buffer[i + 88] == '5');
boolean b89_1 = (buffer[i + 89] == 'C');
boolean b90_1 = (buffer[i + 90] == ' ');
boolean b91_1 = (buffer[i + 91] == '0');
boolean b92_1 = (buffer[i + 92] == '0');
boolean b93_1 = (buffer[i + 93] == ' ');
boolean b94_1 = (buffer[i + 94] == '0');
boolean b95_1 = (buffer[i + 95] == '0');
boolean b96_1 = (buffer[i + 96] == ' ');
boolean b97_1 = (buffer[i + 97] == '0');
boolean b98_1 = (buffer[i + 98] == '0');
boolean b99_1 = (buffer[i + 99] == ' ');
boolean b100_1 = (buffer[i + 100] == '0');
boolean b101_1 = (buffer[i + 101] == '1');
boolean b102_1 = (buffer[i + 102] == ' ');
boolean b102_2 = (buffer[i + 102] == 'G');
boolean b103_1 = (buffer[i + 103] == '0');
boolean b103_2 = (buffer[i + 103] == 'E');
boolean b104_1 = (buffer[i + 104] == '0');
boolean b104_2 = (buffer[i + 104] == 'T');
boolean b105_1 = (buffer[i + 105] == ' ');
boolean b106_1 = (buffer[i + 106] == '0');
boolean b106_2 = (buffer[i + 106] == '/');
boolean b107_1 = (buffer[i + 107] == '0');
boolean b107_2 = (buffer[i + 107] == ' ');
boolean b108_1 = (buffer[i + 108] == ' ');
boolean b108_2 = (buffer[i + 108] == 'H');
boolean b109_1 = (buffer[i + 109] == '0');
boolean b109_2 = (buffer[i + 109] == 'T');
boolean b110_1 = (buffer[i + 110] == '0');
boolean b110_2 = (buffer[i + 110] == 'T');
boolean b111_1 = (buffer[i + 111] == ' ');
boolean b111_2 = (buffer[i + 111] == 'P');
boolean b112_1 = (buffer[i + 112] == '0');
boolean b112_2 = (buffer[i + 112] == '/');
boolean b113_1 = (buffer[i + 113] == '1');
boolean b114_1 = (buffer[i + 114] == ' ');
boolean b114_2 = (buffer[i + 114] == '.');
boolean b115_1 = (buffer[i + 115] == '0');
boolean b115_2 = (buffer[i + 115] == '1');
boolean b116_1 = (buffer[i + 116] == '0');
boolean b116_2 = (buffer[i + 116] == '|');
boolean b117_1 = (buffer[i + 117] == ' ');
boolean b117_2 = (buffer[i + 117] == '0');
boolean b118_1 = (buffer[i + 118] == '0');
boolean b118_2 = (buffer[i + 118] == 'D');
boolean b119_1 = (buffer[i + 119] == '0');
boolean b119_2 = (buffer[i + 119] == ' ');
boolean b120_1 = (buffer[i + 120] == ' ');
boolean b120_2 = (buffer[i + 120] == '0');
boolean b121_1 = (buffer[i + 121] == '0');
boolean b121_2 = (buffer[i + 121] == 'A');
boolean b122_1 = (buffer[i + 122] == '0');
boolean b122_2 = (buffer[i + 122] == '|');
boolean b123_1 = (buffer[i + 123] == '|');
boolean b123_2 = (buffer[i + 123] == 'U');
boolean b124_1 = (buffer[i + 124] == 'P');
boolean b124_2 = (buffer[i + 124] == 's');
boolean b125_1 = (buffer[i + 125] == '|');
boolean b125_2 = (buffer[i + 125] == 'e');
boolean b126_1 = (buffer[i + 126] == '0');
boolean b126_2 = (buffer[i + 126] == 'r');
boolean b127_1 = (buffer[i + 127] == '1');
boolean b127_2 = (buffer[i + 127] == '0');
boolean b127_3 = (buffer[i + 127] == '-');
boolean b128_1 = (buffer[i + 128] == ' ');
boolean b128_2 = (buffer[i + 128] == '|');
boolean b128_3 = (buffer[i + 128] == 'A');
boolean b129_1 = (buffer[i + 129] == '0');
boolean b129_2 = (buffer[i + 129] == 'e');
boolean b129_3 = (buffer[i + 129] == 'g');
boolean b130_1 = (buffer[i + 130] == '1');
boolean b130_2 = (buffer[i + 130] == '|');
boolean b130_3 = (buffer[i + 130] == 'e');
boolean b131_1 = (buffer[i + 131] == ' ');
boolean b131_2 = (buffer[i + 131] == '0');
boolean b131_3 = (buffer[i + 131] == 'n');
boolean b132_1 = (buffer[i + 132] == '0');
boolean b132_2 = (buffer[i + 132] == 't');
boolean b133_1 = (buffer[i + 133] == '0');
boolean b133_2 = (buffer[i + 133] == '|');
boolean b133_3 = (buffer[i + 133] == ':');
boolean b134_1 = (buffer[i + 134] == ' ');
boolean b134_2 = (buffer[i + 134] == 'l');
boolean b135_1 = (buffer[i + 135] == '0');
boolean b135_2 = (buffer[i + 135] == '|');
boolean b135_3 = (buffer[i + 135] == 'M');
boolean b136_1 = (buffer[i + 136] == '2');
boolean b136_2 = (buffer[i + 136] == '0');
boolean b136_3 = (buffer[i + 136] == 'o');
boolean b137_1 = (buffer[i + 137] == ' ');
boolean b137_2 = (buffer[i + 137] == '0');
boolean b137_3 = (buffer[i + 137] == 'z');
boolean b138_1 = (buffer[i + 138] == '0');
boolean b138_2 = (buffer[i + 138] == '|');
boolean b138_3 = (buffer[i + 138] == 'i');
boolean b139_1 = (buffer[i + 139] == '3');
boolean b139_2 = (buffer[i + 139] == 'e');
boolean b139_3 = (buffer[i + 139] == 'l');
boolean b140_1 = (buffer[i + 140] == ' ');
boolean b140_2 = (buffer[i + 140] == '|');
boolean b140_3 = (buffer[i + 140] == 'l');
boolean b141_1 = (buffer[i + 141] == '0');
boolean b141_2 = (buffer[i + 141] == 'a');
boolean b142_1 = (buffer[i + 142] == '0');
boolean b142_2 = (buffer[i + 142] == '/');
boolean b143_1 = (buffer[i + 143] == ' ');
boolean b143_2 = (buffer[i + 143] == '|');
boolean b143_3 = (buffer[i + 143] == '4');
boolean b144_1 = (buffer[i + 144] == '0');
boolean b144_2 = (buffer[i + 144] == 'c');
boolean b144_3 = (buffer[i + 144] == '.');
boolean b145_1 = (buffer[i + 145] == '0');
boolean b145_2 = (buffer[i + 145] == '|');
boolean b146_1 = (buffer[i + 146] == ' ');
boolean b146_2 = (buffer[i + 146] == '0');
boolean b147_1 = (buffer[i + 147] == '2');
boolean b147_2 = (buffer[i + 147] == '0');
boolean b147_3 = (buffer[i + 147] == '(');
boolean b148_1 = (buffer[i + 148] == '4');
boolean b148_2 = (buffer[i + 148] == '|');
boolean b148_3 = (buffer[i + 148] == 'c');
boolean b149_1 = (buffer[i + 149] == ' ');
boolean b149_2 = (buffer[i + 149] == 't');
boolean b149_3 = (buffer[i + 149] == 'o');
boolean b150_1 = (buffer[i + 150] == '0');
boolean b150_2 = (buffer[i + 150] == '|');
boolean b150_3 = (buffer[i + 150] == 'm');
boolean b151_1 = (buffer[i + 151] == '1');
boolean b151_2 = (buffer[i + 151] == '0');
boolean b151_3 = (buffer[i + 151] == 'p');
boolean b152_1 = (buffer[i + 152] == ' ');
boolean b152_2 = (buffer[i + 152] == '0');
boolean b152_3 = (buffer[i + 152] == 'a');
boolean b153_1 = (buffer[i + 153] == '0');
boolean b153_2 = (buffer[i + 153] == '|');
boolean b153_3 = (buffer[i + 153] == 't');
boolean b154_1 = (buffer[i + 154] == '1');
boolean b154_2 = (buffer[i + 154] == ' ');
boolean b154_3 = (buffer[i + 154] == 'i');
boolean b155_1 = (buffer[i + 155] == ' ');
boolean b155_2 = (buffer[i + 155] == '|');
boolean b155_3 = (buffer[i + 155] == 'b');
boolean b156_1 = (buffer[i + 156] == '0');
boolean b156_2 = (buffer[i + 156] == 'l');
boolean b157_1 = (buffer[i + 157] == '0');
boolean b157_2 = (buffer[i + 157] == 'e');
boolean b158_1 = (buffer[i + 158] == ' ');
boolean b158_2 = (buffer[i + 158] == '|');
boolean b159_1 = (buffer[i + 159] == '0');
boolean b159_2 = (buffer[i + 159] == 'v');
boolean b159_3 = (buffer[i + 159] == '3');
boolean b160_1 = (buffer[i + 160] == '0');
boolean b160_2 = (buffer[i + 160] == '|');
boolean b160_3 = (buffer[i + 160] == 'B');
boolean b161_1 = (buffer[i + 161] == ' ');
boolean b161_2 = (buffer[i + 161] == '0');
boolean b161_3 = (buffer[i + 161] == '|');
boolean b162_1 = (buffer[i + 162] == '8');
boolean b162_2 = (buffer[i + 162] == '0');
boolean b162_3 = (buffer[i + 162] == ' ');
boolean b163_1 = (buffer[i + 163] == '0');
boolean b163_2 = (buffer[i + 163] == '|');
boolean b163_3 = (buffer[i + 163] == 'M');
boolean b164_1 = (buffer[i + 164] == ' ');
boolean b164_2 = (buffer[i + 164] == 'e');
boolean b164_3 = (buffer[i + 164] == 'S');
boolean b165_1 = (buffer[i + 165] == '0');
boolean b165_2 = (buffer[i + 165] == '|');
boolean b165_3 = (buffer[i + 165] == 'I');
boolean b166_1 = (buffer[i + 166] == '1');
boolean b166_2 = (buffer[i + 166] == '0');
boolean b166_3 = (buffer[i + 166] == 'E');
boolean b167_1 = (buffer[i + 167] == ' ');
boolean b167_2 = (buffer[i + 167] == '0');
boolean b168_1 = (buffer[i + 168] == '0');
boolean b168_2 = (buffer[i + 168] == '|');
boolean b168_3 = (buffer[i + 168] == '6');
boolean b169_1 = (buffer[i + 169] == '0');
boolean b169_2 = (buffer[i + 169] == 'r');
boolean b169_3 = (buffer[i + 169] == '.');
boolean b170_1 = (buffer[i + 170] == ' ');
boolean b170_2 = (buffer[i + 170] == '|');
boolean b170_3 = (buffer[i + 170] == '0');
boolean b171_1 = (buffer[i + 171] == '0');
boolean b171_2 = (buffer[i + 171] == '|');
boolean b172_1 = (buffer[i + 172] == '6');
boolean b172_2 = (buffer[i + 172] == '0');
boolean b172_3 = (buffer[i + 172] == '3');
boolean b173_1 = (buffer[i + 173] == ' ');
boolean b173_2 = (buffer[i + 173] == '|');
boolean b173_3 = (buffer[i + 173] == 'B');
boolean b174_1 = (buffer[i + 174] == '8');
boolean b174_2 = (buffer[i + 174] == 'i');
boolean b174_3 = (buffer[i + 174] == 'H');
boolean b174_4 = (buffer[i + 174] == '|');
boolean b175_1 = (buffer[i + 175] == '0');
boolean b175_2 = (buffer[i + 175] == '|');
boolean b175_3 = (buffer[i + 175] == 'T');
boolean b175_4 = (buffer[i + 175] == ' ');
boolean b176_1 = (buffer[i + 176] == ' ');
boolean b176_2 = (buffer[i + 176] == '0');
boolean b176_3 = (buffer[i + 176] == 'T');
boolean b176_4 = (buffer[i + 176] == 'W');
boolean b177_1 = (buffer[i + 177] == '0');
boolean b177_2 = (buffer[i + 177] == 'P');
boolean b177_3 = (buffer[i + 177] == 'i');
boolean b178_1 = (buffer[i + 178] == '2');
boolean b178_2 = (buffer[i + 178] == '|');
boolean b178_3 = (buffer[i + 178] == '/');
boolean b178_4 = (buffer[i + 178] == 'n');
boolean b179_1 = (buffer[i + 179] == ' ');
boolean b179_2 = (buffer[i + 179] == 'f');
boolean b179_3 = (buffer[i + 179] == '1');
boolean b179_4 = (buffer[i + 179] == 'd');
boolean b180_1 = (buffer[i + 180] == '0');
boolean b180_2 = (buffer[i + 180] == '|');
boolean b180_3 = (buffer[i + 180] == '.');
boolean b180_4 = (buffer[i + 180] == 'o');
boolean b181_1 = (buffer[i + 181] == '0');
boolean b181_2 = (buffer[i + 181] == '1');
boolean b181_3 = (buffer[i + 181] == 'w');
boolean b182_1 = (buffer[i + 182] == ' ');
boolean b182_2 = (buffer[i + 182] == '0');
boolean b182_3 = (buffer[i + 182] == '|');
boolean b182_4 = (buffer[i + 182] == 's');
boolean b183_1 = (buffer[i + 183] == '0');
boolean b183_2 = (buffer[i + 183] == '|');
boolean b183_3 = (buffer[i + 183] == ' ');
boolean b184_1 = (buffer[i + 184] == '2');
boolean b184_2 = (buffer[i + 184] == 'i');
boolean b184_3 = (buffer[i + 184] == 'D');
boolean b184_4 = (buffer[i + 184] == 'N');
boolean b185_1 = (buffer[i + 185] == ' ');
boolean b185_2 = (buffer[i + 185] == '|');
boolean b185_3 = (buffer[i + 185] == 'G');
boolean b185_4 = (buffer[i + 185] == 'T');
boolean b186_1 = (buffer[i + 186] == '8');
boolean b186_2 = (buffer[i + 186] == '0');
boolean b186_3 = (buffer[i + 186] == 'E');
boolean b186_4 = (buffer[i + 186] == ' ');
boolean b187_1 = (buffer[i + 187] == '0');
boolean b187_2 = (buffer[i + 187] == 'T');
boolean b187_3 = (buffer[i + 187] == 'A');
boolean b187_4 = (buffer[i + 187] == '5');
boolean b188_1 = (buffer[i + 188] == ' ');
boolean b188_2 = (buffer[i + 188] == '|');
boolean b188_3 = (buffer[i + 188] == '.');
boolean b189_1 = (buffer[i + 189] == '0');
boolean b189_2 = (buffer[i + 189] == 'c');
boolean b189_3 = (buffer[i + 189] == '/');
boolean b189_4 = (buffer[i + 189] == 'A');
boolean b189_5 = (buffer[i + 189] == '1');
boolean b189_6 = (buffer[i + 189] == 'M');
boolean b190_1 = (buffer[i + 190] == '3');
boolean b190_2 = (buffer[i + 190] == '|');
boolean b190_3 = (buffer[i + 190] == ' ');
boolean b190_4 = (buffer[i + 190] == 'c');
boolean b190_5 = (buffer[i + 190] == 'o');
boolean b191_1 = (buffer[i + 191] == ' ');
boolean b191_2 = (buffer[i + 191] == '0');
boolean b191_3 = (buffer[i + 191] == 'H');
boolean b191_4 = (buffer[i + 191] == 'c');
boolean b191_5 = (buffer[i + 191] == '3');
boolean b191_6 = (buffer[i + 191] == 'z');
boolean b192_1 = (buffer[i + 192] == '0');
boolean b192_2 = (buffer[i + 192] == 'T');
boolean b192_3 = (buffer[i + 192] == 'G');
boolean b192_4 = (buffer[i + 192] == 'e');
boolean b192_5 = (buffer[i + 192] == 'B');
boolean b192_6 = (buffer[i + 192] == 'i');
boolean b193_1 = (buffer[i + 193] == '0');
boolean b193_2 = (buffer[i + 193] == '|');
boolean b193_3 = (buffer[i + 193] == 'T');
boolean b193_4 = (buffer[i + 193] == 'E');
boolean b193_5 = (buffer[i + 193] == 'p');
boolean b193_6 = (buffer[i + 193] == 'l');
boolean b194_1 = (buffer[i + 194] == ' ');
boolean b194_2 = (buffer[i + 194] == 'a');
boolean b194_3 = (buffer[i + 194] == 'P');
boolean b194_4 = (buffer[i + 194] == 'T');
boolean b194_5 = (buffer[i + 194] == 't');
boolean b194_6 = (buffer[i + 194] == 'l');
boolean b194_7 = (buffer[i + 194] == '0');
boolean b195_1 = (buffer[i + 195] == '0');
boolean b195_2 = (buffer[i + 195] == '|');
boolean b195_3 = (buffer[i + 195] == '/');
boolean b195_4 = (buffer[i + 195] == ' ');
boolean b195_5 = (buffer[i + 195] == ':');
boolean b195_6 = (buffer[i + 195] == 'S');
boolean b195_7 = (buffer[i + 195] == 'a');
boolean b195_8 = (buffer[i + 195] == 'D');
boolean b196_1 = (buffer[i + 196] == '3');
boolean b196_2 = (buffer[i + 196] == '0');
boolean b196_3 = (buffer[i + 196] == '1');
boolean b196_4 = (buffer[i + 196] == '/');
boolean b196_5 = (buffer[i + 196] == ' ');
boolean b196_6 = (buffer[i + 196] == 'V');
boolean b197_1 = (buffer[i + 197] == ' ');
boolean b197_2 = (buffer[i + 197] == '0');
boolean b197_3 = (buffer[i + 197] == '.');
boolean b197_4 = (buffer[i + 197] == '*');
boolean b197_5 = (buffer[i + 197] == '1');
boolean b197_6 = (buffer[i + 197] == '4');
boolean b198_1 = (buffer[i + 198] == '8');
boolean b198_2 = (buffer[i + 198] == '|');
boolean b198_3 = (buffer[i + 198] == '1');
boolean b198_4 = (buffer[i + 198] == 'H');
boolean b198_5 = (buffer[i + 198] == '/');
boolean b198_6 = (buffer[i + 198] == 'G');
boolean b198_7 = (buffer[i + 198] == '.');
boolean b198_8 = (buffer[i + 198] == 'A');
boolean b199_1 = (buffer[i + 199] == '0');
boolean b199_2 = (buffer[i + 199] == 'n');
boolean b199_3 = (buffer[i + 199] == '|');
boolean b199_4 = (buffer[i + 199] == 'T');
boolean b199_5 = (buffer[i + 199] == '*');
boolean b199_6 = (buffer[i + 199] == 'E');
boolean b199_7 = (buffer[i + 199] == '3');
boolean b200_1 = (buffer[i + 200] == ' ');
boolean b200_2 = (buffer[i + 200] == 'a');
boolean b200_3 = (buffer[i + 200] == '|');
boolean b200_4 = (buffer[i + 200] == '0');
boolean b200_5 = (buffer[i + 200] == 'T');
boolean b200_6 = (buffer[i + 200] == 'B');
boolean b200_7 = (buffer[i + 200] == 'A');
boolean b201_1 = (buffer[i + 201] == '0');
boolean b201_2 = (buffer[i + 201] == 'm');
boolean b201_3 = (buffer[i + 201] == 'D');
boolean b201_4 = (buffer[i + 201] == 'P');
boolean b201_5 = (buffer[i + 201] == ' ');
boolean b201_6 = (buffer[i + 201] == '|');
boolean b201_7 = (buffer[i + 201] == '(');
boolean b201_8 = (buffer[i + 201] == 'c');
boolean b202_1 = (buffer[i + 202] == '4');
boolean b202_2 = (buffer[i + 202] == 'e');
boolean b202_3 = (buffer[i + 202] == '0');
boolean b202_4 = (buffer[i + 202] == ' ');
boolean b202_5 = (buffer[i + 202] == '/');
boolean b202_6 = (buffer[i + 202] == 'D');
boolean b202_7 = (buffer[i + 202] == 'U');
boolean b202_8 = (buffer[i + 202] == 'c');
boolean b203_1 = (buffer[i + 203] == ' ');
boolean b203_2 = (buffer[i + 203] == '=');
boolean b203_3 = (buffer[i + 203] == '|');
boolean b203_4 = (buffer[i + 203] == '0');
boolean b203_5 = (buffer[i + 203] == '1');
boolean b203_6 = (buffer[i + 203] == 's');
boolean b203_7 = (buffer[i + 203] == '.');
boolean b203_8 = (buffer[i + 203] == 'o');
boolean b203_9 = (buffer[i + 203] == 'e');
boolean b204_1 = (buffer[i + 204] == '0');
boolean b204_2 = (buffer[i + 204] == '|');
boolean b204_3 = (buffer[i + 204] == 'd');
boolean b204_4 = (buffer[i + 204] == 'A');
boolean b204_5 = (buffer[i + 204] == '.');
boolean b204_6 = (buffer[i + 204] == 'e');
boolean b204_7 = (buffer[i + 204] == 'H');
boolean b204_8 = (buffer[i + 204] == 'N');
boolean b204_9 = (buffer[i + 204] == 'm');
boolean b204_10 = (buffer[i + 204] == 'p');
boolean b205_1 = (buffer[i + 205] == '0');
boolean b205_2 = (buffer[i + 205] == '5');
boolean b205_3 = (buffer[i + 205] == '|');
boolean b205_4 = (buffer[i + 205] == '1');
boolean b205_5 = (buffer[i + 205] == 'A');
boolean b205_6 = (buffer[i + 205] == 'r');
boolean b205_7 = (buffer[i + 205] == 'T');
boolean b205_8 = (buffer[i + 205] == 'E');
boolean b205_9 = (buffer[i + 205] == 'p');
boolean b205_10 = (buffer[i + 205] == 't');
boolean b206_1 = (buffer[i + 206] == ' ');
boolean b206_2 = (buffer[i + 206] == 'C');
boolean b206_3 = (buffer[i + 206] == '0');
boolean b206_4 = (buffer[i + 206] == 'U');
boolean b206_5 = (buffer[i + 206] == '|');
boolean b206_6 = (buffer[i + 206] == '-');
boolean b206_7 = (buffer[i + 206] == 'T');
boolean b206_8 = (buffer[i + 206] == 'a');
boolean b206_9 = (buffer[i + 206] == ':');
boolean b207_1 = (buffer[i + 207] == '0');
boolean b207_2 = (buffer[i + 207] == ' ');
boolean b207_3 = (buffer[i + 207] == 's');
boolean b207_4 = (buffer[i + 207] == 'C');
boolean b207_5 = (buffer[i + 207] == 'A');
boolean b207_6 = (buffer[i + 207] == 'P');
boolean b207_7 = (buffer[i + 207] == '4');
boolean b207_8 = (buffer[i + 207] == 't');
boolean b208_1 = (buffer[i + 208] == '5');
boolean b208_2 = (buffer[i + 208] == '2');
boolean b208_3 = (buffer[i + 208] == '|');
boolean b208_4 = (buffer[i + 208] == 'e');
boolean b208_5 = (buffer[i + 208] == 'D');
boolean b208_6 = (buffer[i + 208] == 'o');
boolean b208_7 = (buffer[i + 208] == 'g');
boolean b208_8 = (buffer[i + 208] == '/');
boolean b208_9 = (buffer[i + 208] == '.');
boolean b208_10 = (buffer[i + 208] == 'i');
boolean b208_11 = (buffer[i + 208] == 't');
boolean b209_1 = (buffer[i + 209] == ' ');
boolean b209_2 = (buffer[i + 209] == '2');
boolean b209_3 = (buffer[i + 209] == 'o');
boolean b209_4 = (buffer[i + 209] == 'r');
boolean b209_5 = (buffer[i + 209] == 'n');
boolean b209_6 = (buffer[i + 209] == 'e');
boolean b209_7 = (buffer[i + 209] == '1');
boolean b209_8 = (buffer[i + 209] == '0');
boolean b209_9 = (buffer[i + 209] == 'b');
boolean b210_1 = (buffer[i + 210] == '8');
boolean b210_2 = (buffer[i + 210] == '|');
boolean b210_3 = (buffer[i + 210] == '-');
boolean b210_4 = (buffer[i + 210] == '0');
boolean b210_5 = (buffer[i + 210] == 't');
boolean b210_6 = (buffer[i + 210] == 'n');
boolean b210_7 = (buffer[i + 210] == '.');
boolean b210_8 = (buffer[i + 210] == 'C');
boolean b210_9 = (buffer[i + 210] == 'l');
boolean b210_10 = (buffer[i + 210] == 'x');
boolean b211_1 = (buffer[i + 211] == '0');
boolean b211_2 = (buffer[i + 211] == 'T');
boolean b211_3 = (buffer[i + 211] == 'A');
boolean b211_4 = (buffer[i + 211] == 'e');
boolean b211_5 = (buffer[i + 211] == 't');
boolean b211_6 = (buffer[i + 211] == '1');
boolean b211_7 = (buffer[i + 211] == '|');
boolean b212_1 = (buffer[i + 212] == ' ');
boolean b212_2 = (buffer[i + 212] == 'w');
boolean b212_3 = (buffer[i + 212] == '0');
boolean b212_4 = (buffer[i + 212] == 'g');
boolean b212_5 = (buffer[i + 212] == '|');
boolean b212_6 = (buffer[i + 212] == 'n');
boolean b212_7 = (buffer[i + 212] == ':');
boolean b212_8 = (buffer[i + 212] == '3');
boolean b212_9 = (buffer[i + 212] == '/');
boolean b213_1 = (buffer[i + 213] == '0');
boolean b213_2 = (buffer[i + 213] == 'i');
boolean b213_3 = (buffer[i + 213] == '|');
boolean b213_4 = (buffer[i + 213] == 'e');
boolean b213_5 = (buffer[i + 213] == 'U');
boolean b213_6 = (buffer[i + 213] == 't');
boolean b213_7 = (buffer[i + 213] == ' ');
boolean b213_8 = (buffer[i + 213] == 'B');
boolean b213_9 = (buffer[i + 213] == '3');
boolean b213_10 = (buffer[i + 213] == 'h');
boolean b214_1 = (buffer[i + 214] == 'B');
boolean b214_2 = (buffer[i + 214] == 't');
boolean b214_3 = (buffer[i + 214] == ' ');
boolean b214_4 = (buffer[i + 214] == 'n');
boolean b214_5 = (buffer[i + 214] == 's');
boolean b214_6 = (buffer[i + 214] == '-');
boolean b214_7 = (buffer[i + 214] == 'M');
boolean b214_8 = (buffer[i + 214] == 'D');
boolean b214_9 = (buffer[i + 214] == '|');
boolean b215_1 = (buffer[i + 215] == ' ');
boolean b215_2 = (buffer[i + 215] == 't');
boolean b215_3 = (buffer[i + 215] == '|');
boolean b215_4 = (buffer[i + 215] == 'e');
boolean b215_5 = (buffer[i + 215] == 'T');
boolean b215_6 = (buffer[i + 215] == 'o');
boolean b215_7 = (buffer[i + 215] == 'm');
boolean b216_1 = (buffer[i + 216] == '0');
boolean b216_2 = (buffer[i + 216] == 'e');
boolean b216_3 = (buffer[i + 216] == ':');
boolean b216_4 = (buffer[i + 216] == 'r');
boolean b216_5 = (buffer[i + 216] == 'y');
boolean b216_6 = (buffer[i + 216] == 'z');
boolean b216_7 = (buffer[i + 216] == '.');
boolean b216_8 = (buffer[i + 216] == ' ');
boolean b216_9 = (buffer[i + 216] == 'l');
boolean b217_1 = (buffer[i + 217] == '0');
boolean b217_2 = (buffer[i + 217] == 'r');
boolean b217_3 = (buffer[i + 217] == '|');
boolean b217_4 = (buffer[i + 217] == ' ');
boolean b217_5 = (buffer[i + 217] == '-');
boolean b217_6 = (buffer[i + 217] == 'p');
boolean b217_7 = (buffer[i + 217] == 'i');
boolean b217_8 = (buffer[i + 217] == 'A');
boolean b217_9 = (buffer[i + 217] == 'N');
boolean b217_10 = (buffer[i + 217] == 'M');
boolean b217_11 = (buffer[i + 217] == ',');
boolean b218_1 = (buffer[i + 218] == ' ');
boolean b218_2 = (buffer[i + 218] == '|');
boolean b218_3 = (buffer[i + 218] == '2');
boolean b218_4 = (buffer[i + 218] == 'M');
boolean b218_5 = (buffer[i + 218] == 'A');
boolean b218_6 = (buffer[i + 218] == 'e');
boolean b218_7 = (buffer[i + 218] == 'l');
boolean b218_8 = (buffer[i + 218] == 'E');
boolean b218_9 = (buffer[i + 218] == 'S');
boolean b219_1 = (buffer[i + 219] == '0');
boolean b219_2 = (buffer[i + 219] == '5');
boolean b219_3 = (buffer[i + 219] == '2');
boolean b219_4 = (buffer[i + 219] == 'f');
boolean b219_5 = (buffer[i + 219] == 'o');
boolean b219_6 = (buffer[i + 219] == 'g');
boolean b219_7 = (buffer[i + 219] == ':');
boolean b219_8 = (buffer[i + 219] == '.');
boolean b219_9 = (buffer[i + 219] == 'l');
boolean b219_10 = (buffer[i + 219] == 'U');
boolean b219_11 = (buffer[i + 219] == 'T');
boolean b219_12 = (buffer[i + 219] == 'I');
boolean b219_13 = (buffer[i + 219] == '*');
boolean b220_1 = (buffer[i + 220] == '1');
boolean b220_2 = (buffer[i + 220] == 'C');
boolean b220_3 = (buffer[i + 220] == '|');
boolean b220_4 = (buffer[i + 220] == 'z');
boolean b220_5 = (buffer[i + 220] == 'e');
boolean b220_6 = (buffer[i + 220] == ' ');
boolean b220_7 = (buffer[i + 220] == 'x');
boolean b220_8 = (buffer[i + 220] == 'a');
boolean b220_9 = (buffer[i + 220] == 's');
boolean b220_10 = (buffer[i + 220] == '4');
boolean b220_11 = (buffer[i + 220] == 'E');
boolean b220_12 = (buffer[i + 220] == '/');
boolean b221_1 = (buffer[i + 221] == ' ');
boolean b221_2 = (buffer[i + 221] == 'c');
boolean b221_3 = (buffer[i + 221] == '0');
boolean b221_4 = (buffer[i + 221] == 'i');
boolean b221_5 = (buffer[i + 221] == 'n');
boolean b221_6 = (buffer[i + 221] == 'a');
boolean b221_7 = (buffer[i + 221] == 'p');
boolean b221_8 = (buffer[i + 221] == '/');
boolean b221_9 = (buffer[i + 221] == 'e');
boolean b221_10 = (buffer[i + 221] == '.');
boolean b221_11 = (buffer[i + 221] == '*');
boolean b222_1 = (buffer[i + 222] == '0');
boolean b222_2 = (buffer[i + 222] == '2');
boolean b222_3 = (buffer[i + 222] == '|');
boolean b222_4 = (buffer[i + 222] == 'l');
boolean b222_5 = (buffer[i + 222] == 't');
boolean b222_6 = (buffer[i + 222] == 'p');
boolean b222_7 = (buffer[i + 222] == 'g');
boolean b222_8 = (buffer[i + 222] == '5');
boolean b222_9 = (buffer[i + 222] == 'r');
boolean b222_10 = (buffer[i + 222] == '8');
boolean b223_1 = (buffer[i + 223] == '0');
boolean b223_2 = (buffer[i + 223] == '2');
boolean b223_3 = (buffer[i + 223] == '|');
boolean b223_4 = (buffer[i + 223] == 'l');
boolean b223_5 = (buffer[i + 223] == ':');
boolean b223_6 = (buffer[i + 223] == 'p');
boolean b223_7 = (buffer[i + 223] == '.');
boolean b223_8 = (buffer[i + 223] == '-');
boolean b223_9 = (buffer[i + 223] == 'E');
boolean b224_1 = (buffer[i + 224] == ' ');
boolean b224_2 = (buffer[i + 224] == '|');
boolean b224_3 = (buffer[i + 224] == '2');
boolean b224_4 = (buffer[i + 224] == 'r');
boolean b224_5 = (buffer[i + 224] == 'a');
boolean b224_6 = (buffer[i + 224] == 'l');
boolean b224_7 = (buffer[i + 224] == 'c');
boolean b224_8 = (buffer[i + 224] == '0');
boolean b224_9 = (buffer[i + 224] == 'A');
boolean b224_10 = (buffer[i + 224] == 'D');
boolean b225_1 = (buffer[i + 225] == '0');
boolean b225_2 = (buffer[i + 225] == ' ');
boolean b225_3 = (buffer[i + 225] == '|');
boolean b225_4 = (buffer[i + 225] == '/');
boolean b225_5 = (buffer[i + 225] == 'M');
boolean b225_6 = (buffer[i + 225] == 'i');
boolean b225_7 = (buffer[i + 225] == 'o');
boolean b225_8 = (buffer[i + 225] == 'g');
boolean b225_9 = (buffer[i + 225] == '3');
boolean b226_1 = (buffer[i + 226] == 'C');
boolean b226_2 = (buffer[i + 226] == 's');
boolean b226_3 = (buffer[i + 226] == '+');
boolean b226_4 = (buffer[i + 226] == '0');
boolean b226_5 = (buffer[i + 226] == '4');
boolean b226_6 = (buffer[i + 226] == 'o');
boolean b226_7 = (buffer[i + 226] == 'c');
boolean b226_8 = (buffer[i + 226] == 'm');
boolean b226_9 = (buffer[i + 226] == '(');
boolean b226_10 = (buffer[i + 226] == 'e');
boolean b226_11 = (buffer[i + 226] == 'B');
boolean b226_12 = (buffer[i + 226] == '3');
boolean b227_1 = (buffer[i + 227] == ' ');
boolean b227_2 = (buffer[i + 227] == 'c');
boolean b227_3 = (buffer[i + 227] == '|');
boolean b227_4 = (buffer[i + 227] == '0');
boolean b227_5 = (buffer[i + 227] == '.');
boolean b227_6 = (buffer[i + 227] == 'z');
boolean b227_7 = (buffer[i + 227] == 'a');
boolean b227_8 = (buffer[i + 227] == 'W');
boolean b227_9 = (buffer[i + 227] == 'n');
boolean b227_10 = (buffer[i + 227] == 'B');
boolean b227_11 = (buffer[i + 227] == 'A');
boolean b228_1 = (buffer[i + 228] == '0');
boolean b228_2 = (buffer[i + 228] == 'r');
boolean b228_3 = (buffer[i + 228] == '2');
boolean b228_4 = (buffer[i + 228] == '|');
boolean b228_5 = (buffer[i + 228] == 'i');
boolean b228_6 = (buffer[i + 228] == 'H');
boolean b228_7 = (buffer[i + 228] == 't');
boolean b228_8 = (buffer[i + 228] == 'b');
boolean b228_9 = (buffer[i + 228] == ' ');
boolean b229_1 = (buffer[i + 229] == '0');
boolean b229_2 = (buffer[i + 229] == 'o');
boolean b229_3 = (buffer[i + 229] == '2');
boolean b229_4 = (buffer[i + 229] == ' ');
boolean b229_5 = (buffer[i + 229] == 'l');
boolean b229_6 = (buffer[i + 229] == 'i');
boolean b229_7 = (buffer[i + 229] == 'r');
boolean b229_8 = (buffer[i + 229] == 'n');
boolean b229_9 = (buffer[i + 229] == ':');
boolean b229_10 = (buffer[i + 229] == '.');
boolean b229_11 = (buffer[i + 229] == 'A');
boolean b230_1 = (buffer[i + 230] == ' ');
boolean b230_2 = (buffer[i + 230] == 'l');
boolean b230_3 = (buffer[i + 230] == '|');
boolean b230_4 = (buffer[i + 230] == '(');
boolean b230_5 = (buffer[i + 230] == 's');
boolean b230_6 = (buffer[i + 230] == 'o');
boolean b230_7 = (buffer[i + 230] == 'd');
boolean b230_8 = (buffer[i + 230] == 'N');
boolean b230_9 = (buffer[i + 230] == 'W');
boolean b230_10 = (buffer[i + 230] == 'c');
boolean b231_1 = (buffer[i + 231] == '0');
boolean b231_2 = (buffer[i + 231] == 'l');
boolean b231_3 = (buffer[i + 231] == 'r');
boolean b231_4 = (buffer[i + 231] == 'c');
boolean b231_5 = (buffer[i + 231] == 'a');
boolean b231_6 = (buffer[i + 231] == 'H');
boolean b231_7 = (buffer[i + 231] == 't');
boolean b231_8 = (buffer[i + 231] == 'n');
boolean b231_9 = (buffer[i + 231] == 'o');
boolean b231_10 = (buffer[i + 231] == 'M');
boolean b231_11 = (buffer[i + 231] == 'E');
boolean b231_12 = (buffer[i + 231] == 'i');
boolean b232_1 = (buffer[i + 232] == '4');
boolean b232_2 = (buffer[i + 232] == 'i');
boolean b232_3 = (buffer[i + 232] == '|');
boolean b232_4 = (buffer[i + 232] == '0');
boolean b232_5 = (buffer[i + 232] == 'o');
boolean b232_6 = (buffer[i + 232] == '/');
boolean b232_7 = (buffer[i + 232] == ':');
boolean b232_8 = (buffer[i + 232] == 'D');
boolean b232_9 = (buffer[i + 232] == 'w');
boolean b232_10 = (buffer[i + 232] == 'T');
boolean b232_11 = (buffer[i + 232] == 'n');
boolean b232_12 = (buffer[i + 232] == 'e');
boolean b233_1 = (buffer[i + 233] == ' ');
boolean b233_2 = (buffer[i + 233] == 'n');
boolean b233_3 = (buffer[i + 233] == '2');
boolean b233_4 = (buffer[i + 233] == '|');
boolean b233_5 = (buffer[i + 233] == 'm');
boolean b233_6 = (buffer[i + 233] == '4');
boolean b233_7 = (buffer[i + 233] == 's');
boolean b233_8 = (buffer[i + 233] == 'x');
boolean b233_9 = (buffer[i + 233] == '0');
boolean b233_10 = (buffer[i + 233] == '5');
boolean b233_11 = (buffer[i + 233] == 'z');
boolean b233_12 = (buffer[i + 233] == 'd');
boolean b233_13 = (buffer[i + 233] == 'p');
boolean b234_1 = (buffer[i + 234] == '0');
boolean b234_2 = (buffer[i + 234] == 'L');
boolean b234_3 = (buffer[i + 234] == 'g');
boolean b234_4 = (buffer[i + 234] == '2');
boolean b234_5 = (buffer[i + 234] == 'm');
boolean b234_6 = (buffer[i + 234] == 'p');
boolean b234_7 = (buffer[i + 234] == '.');
boolean b234_8 = (buffer[i + 234] == 't');
boolean b234_9 = (buffer[i + 234] == 'b');
boolean b234_10 = (buffer[i + 234] == '-');
boolean b234_11 = (buffer[i + 234] == 'D');
boolean b234_12 = (buffer[i + 234] == ' ');
boolean b234_13 = (buffer[i + 234] == 'i');
boolean b234_14 = (buffer[i + 234] == 'C');
boolean b234_15 = (buffer[i + 234] == 'o');
boolean b235_1 = (buffer[i + 235] == '0');
boolean b235_2 = (buffer[i + 235] == '|');
boolean b235_3 = (buffer[i + 235] == '=');
boolean b235_4 = (buffer[i + 235] == ' ');
boolean b235_5 = (buffer[i + 235] == 'a');
boolean b235_6 = (buffer[i + 235] == ':');
boolean b235_7 = (buffer[i + 235] == 'i');
boolean b235_8 = (buffer[i + 235] == 'w');
boolean b235_9 = (buffer[i + 235] == 'A');
boolean b235_10 = (buffer[i + 235] == 'N');
boolean b235_11 = (buffer[i + 235] == 'l');
boolean b235_12 = (buffer[i + 235] == 'L');
boolean b235_13 = (buffer[i + 235] == '-');
boolean b236_1 = (buffer[i + 236] == ' ');
boolean b236_2 = (buffer[i + 236] == '0');
boolean b236_3 = (buffer[i + 236] == '|');
boolean b236_4 = (buffer[i + 236] == '3');
boolean b236_5 = (buffer[i + 236] == 't');
boolean b236_6 = (buffer[i + 236] == 'w');
boolean b236_7 = (buffer[i + 236] == 'T');
boolean b236_8 = (buffer[i + 236] == 'l');
boolean b236_9 = (buffer[i + 236] == 'R');
boolean b236_10 = (buffer[i + 236] == 's');
boolean b236_11 = (buffer[i + 236] == 'E');
boolean b237_1 = (buffer[i + 237] == '0');
boolean b237_2 = (buffer[i + 237] == '5');
boolean b237_3 = (buffer[i + 237] == 'A');
boolean b237_4 = (buffer[i + 237] == 'i');
boolean b237_5 = (buffer[i + 237] == '(');
boolean b237_6 = (buffer[i + 237] == 'b');
boolean b237_7 = (buffer[i + 237] == 'l');
boolean b237_8 = (buffer[i + 237] == 'w');
boolean b237_9 = (buffer[i + 237] == ' ');
boolean b237_10 = (buffer[i + 237] == 'a');
boolean b237_11 = (buffer[i + 237] == 'n');
boolean b238_1 = (buffer[i + 238] == '1');
boolean b238_2 = (buffer[i + 238] == '|');
boolean b238_3 = (buffer[i + 238] == 'C');
boolean b238_4 = (buffer[i + 238] == 'b');
boolean b238_5 = (buffer[i + 238] == 'c');
boolean b238_6 = (buffer[i + 238] == 'i');
boolean b238_7 = (buffer[i + 238] == 'y');
boolean b238_8 = (buffer[i + 238] == '-');
boolean b238_9 = (buffer[i + 238] == '6');
boolean b238_10 = (buffer[i + 238] == '/');
boolean b238_11 = (buffer[i + 238] == '2');
boolean b238_12 = (buffer[i + 238] == 'N');
boolean b239_1 = (buffer[i + 239] == '|');
boolean b239_2 = (buffer[i + 239] == 'o');
boolean b239_3 = (buffer[i + 239] == ' ');
boolean b239_4 = (buffer[i + 239] == '2');
boolean b239_5 = (buffer[i + 239] == 'l');
boolean b239_6 = (buffer[i + 239] == 't');
boolean b239_7 = (buffer[i + 239] == '.');
boolean b239_8 = (buffer[i + 239] == 'f');
boolean b239_9 = (buffer[i + 239] == 'c');
boolean b239_10 = (buffer[i + 239] == 'U');
boolean b239_11 = (buffer[i + 239] == '4');
boolean b239_12 = (buffer[i + 239] == 'T');
boolean b240_1 = (buffer[i + 240] == 'Q');
boolean b240_2 = (buffer[i + 240] == '|');
boolean b240_3 = (buffer[i + 240] == '2');
boolean b240_4 = (buffer[i + 240] == '+');
boolean b240_5 = (buffer[i + 240] == 'e');
boolean b240_6 = (buffer[i + 240] == 'm');
boolean b240_7 = (buffer[i + 240] == '.');
boolean b240_8 = (buffer[i + 240] == 'c');
boolean b240_9 = (buffer[i + 240] == 'o');
boolean b240_10 = (buffer[i + 240] == 's');
boolean b240_11 = (buffer[i + 240] == '3');
boolean b240_12 = (buffer[i + 240] == '0');
boolean b240_13 = (buffer[i + 240] == ' ');
boolean b240_14 = (buffer[i + 240] == 'd');
boolean b241_1 = (buffer[i + 241] == '|');
boolean b241_2 = (buffer[i + 241] == '0');
boolean b241_3 = (buffer[i + 241] == '2');
boolean b241_4 = (buffer[i + 241] == 'p');
boolean b241_5 = (buffer[i + 241] == 'l');
boolean b241_6 = (buffer[i + 241] == 'o');
boolean b241_7 = (buffer[i + 241] == 'r');
boolean b241_8 = (buffer[i + 241] == 'e');
boolean b241_9 = (buffer[i + 241] == '.');
boolean b241_10 = (buffer[i + 241] == '6');
boolean b241_11 = (buffer[i + 241] == 'i');
boolean b242_1 = (buffer[i + 242] == '8');
boolean b242_2 = (buffer[i + 242] == '0');
boolean b242_3 = (buffer[i + 242] == '|');
boolean b242_4 = (buffer[i + 242] == '2');
boolean b242_5 = (buffer[i + 242] == '3');
boolean b242_6 = (buffer[i + 242] == 'a');
boolean b242_7 = (buffer[i + 242] == 'y');
boolean b242_8 = (buffer[i + 242] == 'm');
boolean b242_9 = (buffer[i + 242] == 't');
boolean b242_10 = (buffer[i + 242] == 'r');
boolean b242_11 = (buffer[i + 242] == ' ');
boolean b242_12 = (buffer[i + 242] == '5');
boolean b242_13 = (buffer[i + 242] == '.');
boolean b242_14 = (buffer[i + 242] == 'n');
boolean b243_1 = (buffer[i + 243] == '0');
boolean b243_2 = (buffer[i + 243] == '|');
boolean b243_3 = (buffer[i + 243] == 'a');
boolean b243_4 = (buffer[i + 243] == '2');
boolean b243_5 = (buffer[i + 243] == 'B');
boolean b243_6 = (buffer[i + 243] == 't');
boolean b243_7 = (buffer[i + 243] == '-');
boolean b243_8 = (buffer[i + 243] == ':');
boolean b243_9 = (buffer[i + 243] == '(');
boolean b243_10 = (buffer[i + 243] == '1');
boolean b243_11 = (buffer[i + 243] == 'g');
boolean b244_1 = (buffer[i + 244] == ' ');
boolean b244_2 = (buffer[i + 244] == 'g');
boolean b244_3 = (buffer[i + 244] == 'u');
boolean b244_4 = (buffer[i + 244] == '|');
boolean b244_5 = (buffer[i + 244] == 'v');
boolean b244_6 = (buffer[i + 244] == 'i');
boolean b244_7 = (buffer[i + 244] == '0');
boolean b244_8 = (buffer[i + 244] == 'A');
boolean b244_9 = (buffer[i + 244] == 'c');
boolean b244_10 = (buffer[i + 244] == '7');
boolean b244_11 = (buffer[i + 244] == ':');
boolean b245_1 = (buffer[i + 245] == '0');
boolean b245_2 = (buffer[i + 245] == '|');
boolean b245_3 = (buffer[i + 245] == 't');
boolean b245_4 = (buffer[i + 245] == 'e');
boolean b245_5 = (buffer[i + 245] == ' ');
boolean b245_6 = (buffer[i + 245] == 'b');
boolean b245_7 = (buffer[i + 245] == 'D');
boolean b245_8 = (buffer[i + 245] == 'r');
boolean b245_9 = (buffer[i + 245] == 'g');
boolean b245_10 = (buffer[i + 245] == 'o');
boolean b245_11 = (buffer[i + 245] == '2');
boolean b245_12 = (buffer[i + 245] == '3');
boolean b246_1 = (buffer[i + 246] == '0');
boolean b246_2 = (buffer[i + 246] == 'o');
boolean b246_3 = (buffer[i + 246] == '|');
boolean b246_4 = (buffer[i + 246] == 'M');
boolean b246_5 = (buffer[i + 246] == 'l');
boolean b246_6 = (buffer[i + 246] == ' ');
boolean b246_7 = (buffer[i + 246] == 'e');
boolean b246_8 = (buffer[i + 246] == 'W');
boolean b246_9 = (buffer[i + 246] == 'm');
boolean b246_10 = (buffer[i + 246] == '7');
boolean b246_11 = (buffer[i + 246] == 'B');
boolean b246_12 = (buffer[i + 246] == 'i');
boolean b247_1 = (buffer[i + 247] == ' ');
boolean b247_2 = (buffer[i + 247] == '0');
boolean b247_3 = (buffer[i + 247] == '|');
boolean b247_4 = (buffer[i + 247] == '2');
boolean b247_5 = (buffer[i + 247] == 'S');
boolean b247_6 = (buffer[i + 247] == 'e');
boolean b247_7 = (buffer[i + 247] == 'x');
boolean b247_8 = (buffer[i + 247] == 'n');
boolean b247_9 = (buffer[i + 247] == 'O');
boolean b247_10 = (buffer[i + 247] == 'p');
boolean b247_11 = (buffer[i + 247] == 'd');
boolean b248_1 = (buffer[i + 248] == '0');
boolean b248_2 = (buffer[i + 248] == '|');
boolean b248_3 = (buffer[i + 248] == '5');
boolean b248_4 = (buffer[i + 248] == '2');
boolean b248_5 = (buffer[i + 248] == 'I');
boolean b248_6 = (buffer[i + 248] == 'A');
boolean b248_7 = (buffer[i + 248] == 'n');
boolean b248_8 = (buffer[i + 248] == 't');
boolean b248_9 = (buffer[i + 248] == 'W');
boolean b248_10 = (buffer[i + 248] == 'a');
boolean b248_11 = (buffer[i + 248] == '3');
boolean b248_12 = (buffer[i + 248] == ' ');
boolean b248_13 = (buffer[i + 248] == 'e');
boolean b249_1 = (buffer[i + 249] == '0');
boolean b249_2 = (buffer[i + 249] == 'i');
boolean b249_3 = (buffer[i + 249] == 'C');
boolean b249_4 = (buffer[i + 249] == '|');
boolean b249_5 = (buffer[i + 249] == 'e');
boolean b249_6 = (buffer[i + 249] == 'E');
boolean b249_7 = (buffer[i + 249] == '3');
boolean b249_8 = (buffer[i + 249] == 'c');
boolean b249_9 = (buffer[i + 249] == '/');
boolean b249_10 = (buffer[i + 249] == ':');
boolean b249_11 = (buffer[i + 249] == '6');
boolean b249_12 = (buffer[i + 249] == 't');
boolean b249_13 = (buffer[i + 249] == 'B');
boolean b249_14 = (buffer[i + 249] == 'T');
boolean b249_15 = (buffer[i + 249] == 'n');
boolean b250_1 = (buffer[i + 250] == ' ');
boolean b250_2 = (buffer[i + 250] == '|');
boolean b250_3 = (buffer[i + 250] == 'A');
boolean b250_4 = (buffer[i + 250] == '+');
boolean b250_5 = (buffer[i + 250] == 'B');
boolean b250_6 = (buffer[i + 250] == 'o');
boolean b250_7 = (buffer[i + 250] == 'h');
boolean b250_8 = (buffer[i + 250] == '8');
boolean b250_9 = (buffer[i + 250] == '4');
boolean b250_10 = (buffer[i + 250] == 'i');
boolean b250_11 = (buffer[i + 250] == 'r');
boolean b250_12 = (buffer[i + 250] == 't');
boolean b251_1 = (buffer[i + 251] == '0');
boolean b251_2 = (buffer[i + 251] == '2');
boolean b251_3 = (buffer[i + 251] == 'c');
boolean b251_4 = (buffer[i + 251] == 'U');
boolean b251_5 = (buffer[i + 251] == '|');
boolean b251_6 = (buffer[i + 251] == '7');
boolean b251_7 = (buffer[i + 251] == 'd');
boolean b251_8 = (buffer[i + 251] == 't');
boolean b251_9 = (buffer[i + 251] == 'M');
boolean b251_10 = (buffer[i + 251] == ')');
boolean b251_11 = (buffer[i + 251] == 'b');
boolean b251_12 = (buffer[i + 251] == ' ');
boolean b251_13 = (buffer[i + 251] == 'i');
boolean b252_1 = (buffer[i + 252] == '0');
boolean b252_2 = (buffer[i + 252] == '2');
boolean b252_3 = (buffer[i + 252] == 'c');
boolean b252_4 = (buffer[i + 252] == 's');
boolean b252_5 = (buffer[i + 252] == '.');
boolean b252_6 = (buffer[i + 252] == ' ');
boolean b252_7 = (buffer[i + 252] == 'e');
boolean b252_8 = (buffer[i + 252] == 'm');
boolean b252_9 = (buffer[i + 252] == 'o');
boolean b252_10 = (buffer[i + 252] == 'l');
boolean b252_11 = (buffer[i + 252] == 'd');
boolean b252_12 = (buffer[i + 252] == 't');
boolean b253_1 = (buffer[i + 253] == ' ');
boolean b253_2 = (buffer[i + 253] == '|');
boolean b253_3 = (buffer[i + 253] == 'e');
boolean b253_4 = (buffer[i + 253] == '2');
boolean b253_5 = (buffer[i + 253] == '0');
boolean b253_6 = (buffer[i + 253] == 'M');
boolean b253_7 = (buffer[i + 253] == 'd');
boolean b253_8 = (buffer[i + 253] == 'l');
boolean b253_9 = (buffer[i + 253] == 'z');
boolean b253_10 = (buffer[i + 253] == 'F');
boolean b253_11 = (buffer[i + 253] == 'A');
boolean b253_12 = (buffer[i + 253] == 'N');
boolean b253_13 = (buffer[i + 253] == 'y');
boolean b254_1 = (buffer[i + 254] == '2');
boolean b254_2 = (buffer[i + 254] == 'n');
boolean b254_3 = (buffer[i + 254] == ' ');
boolean b254_4 = (buffer[i + 254] == 'p');
boolean b254_5 = (buffer[i + 254] == 'r');
boolean b254_6 = (buffer[i + 254] == '|');
boolean b254_7 = (buffer[i + 254] == 'S');
boolean b254_8 = (buffer[i + 254] == ',');
boolean b254_9 = (buffer[i + 254] == 'i');
boolean b254_10 = (buffer[i + 254] == '4');
boolean b254_11 = (buffer[i + 254] == 'E');
boolean b255_1 = (buffer[i + 255] == '4');
boolean b255_2 = (buffer[i + 255] == '|');
boolean b255_3 = (buffer[i + 255] == 'f');
boolean b255_4 = (buffer[i + 255] == 't');
boolean b255_5 = (buffer[i + 255] == '-');
boolean b255_6 = (buffer[i + 255] == 'a');
boolean b255_7 = (buffer[i + 255] == '3');
boolean b255_8 = (buffer[i + 255] == 'I');
boolean b255_9 = (buffer[i + 255] == '0');
boolean b255_10 = (buffer[i + 255] == ' ');
boolean b255_11 = (buffer[i + 255] == 'l');
boolean b255_12 = (buffer[i + 255] == 'p');
boolean b255_13 = (buffer[i + 255] == 'T');
boolean b256_1 = (buffer[i + 256] == ' ');
boolean b256_2 = (buffer[i + 256] == '0');
boolean b256_3 = (buffer[i + 256] == 'r');
boolean b256_4 = (buffer[i + 256] == ':');
boolean b256_5 = (buffer[i + 256] == 'A');
boolean b256_6 = (buffer[i + 256] == '|');
boolean b256_7 = (buffer[i + 256] == 'B');
boolean b256_8 = (buffer[i + 256] == 'E');
boolean b256_9 = (buffer[i + 256] == 'D');
boolean b256_10 = (buffer[i + 256] == '*');
boolean b256_11 = (buffer[i + 256] == 'l');
boolean b256_12 = (buffer[i + 256] == '/');
boolean b257_1 = (buffer[i + 257] == 't');
boolean b257_2 = (buffer[i + 257] == '0');
boolean b257_3 = (buffer[i + 257] == 'a');
boolean b257_4 = (buffer[i + 257] == ' ');
boolean b257_5 = (buffer[i + 257] == 'g');
boolean b257_6 = (buffer[i + 257] == '2');
boolean b257_7 = (buffer[i + 257] == '|');
boolean b257_8 = (buffer[i + 257] == '/');
boolean b257_9 = (buffer[i + 257] == 'E');
boolean b257_10 = (buffer[i + 257] == 'e');
boolean b257_11 = (buffer[i + 257] == 'C');
boolean b257_12 = (buffer[i + 257] == '4');
boolean b258_1 = (buffer[i + 258] == 'h');
boolean b258_2 = (buffer[i + 258] == '2');
boolean b258_3 = (buffer[i + 258] == '|');
boolean b258_4 = (buffer[i + 258] == 'm');
boolean b258_5 = (buffer[i + 258] == 'a');
boolean b258_6 = (buffer[i + 258] == 'e');
boolean b258_7 = (buffer[i + 258] == ' ');
boolean b258_8 = (buffer[i + 258] == '7');
boolean b258_9 = (buffer[i + 258] == 't');
boolean b258_10 = (buffer[i + 258] == '0');
boolean b258_11 = (buffer[i + 258] == '*');
boolean b258_12 = (buffer[i + 258] == '/');
boolean b258_13 = (buffer[i + 258] == '9');
boolean b258_14 = (buffer[i + 258] == 'W');
boolean b258_15 = (buffer[i + 258] == 'L');
boolean b258_16 = (buffer[i + 258] == '.');
boolean b259_1 = (buffer[i + 259] == 'i');
boolean b259_2 = (buffer[i + 259] == ' ');
boolean b259_3 = (buffer[i + 259] == 'e');
boolean b259_4 = (buffer[i + 259] == 'p');
boolean b259_5 = (buffer[i + 259] == 'n');
boolean b259_6 = (buffer[i + 259] == '|');
boolean b259_7 = (buffer[i + 259] == 'W');
boolean b259_8 = (buffer[i + 259] == '.');
boolean b259_9 = (buffer[i + 259] == 'A');
boolean b259_10 = (buffer[i + 259] == '5');
boolean b259_11 = (buffer[i + 259] == 'D');
boolean b259_12 = (buffer[i + 259] == 'M');
boolean b259_13 = (buffer[i + 259] == 'R');
boolean b259_14 = (buffer[i + 259] == '0');
boolean b260_1 = (buffer[i + 260] == 's');
boolean b260_2 = (buffer[i + 260] == '0');
boolean b260_3 = (buffer[i + 260] == '|');
boolean b260_4 = (buffer[i + 260] == 'b');
boolean b260_5 = (buffer[i + 260] == 'p');
boolean b260_6 = (buffer[i + 260] == 't');
boolean b260_7 = (buffer[i + 260] == '+');
boolean b260_8 = (buffer[i + 260] == 'i');
boolean b260_9 = (buffer[i + 260] == 'x');
boolean b260_10 = (buffer[i + 260] == '.');
boolean b260_11 = (buffer[i + 260] == '4');
boolean b260_12 = (buffer[i + 260] == 'S');
boolean b260_13 = (buffer[i + 260] == ' ');
boolean b261_1 = (buffer[i + 261] == 'i');
boolean b261_2 = (buffer[i + 261] == '0');
boolean b261_3 = (buffer[i + 261] == '1');
boolean b261_4 = (buffer[i + 261] == 'o');
boolean b261_5 = (buffer[i + 261] == 'l');
boolean b261_6 = (buffer[i + 261] == '|');
boolean b261_7 = (buffer[i + 261] == 'n');
boolean b261_8 = (buffer[i + 261] == 't');
boolean b261_9 = (buffer[i + 261] == 'U');
boolean b261_10 = (buffer[i + 261] == 'D');
boolean b261_11 = (buffer[i + 261] == ' ');
boolean b261_12 = (buffer[i + 261] == 'K');
boolean b261_13 = (buffer[i + 261] == 'I');
boolean b261_14 = (buffer[i + 261] == '3');
boolean b262_1 = (buffer[i + 262] == 's');
boolean b262_2 = (buffer[i + 262] == '&');
boolean b262_3 = (buffer[i + 262] == ' ');
boolean b262_4 = (buffer[i + 262] == '0');
boolean b262_5 = (buffer[i + 262] == 'r');
boolean b262_6 = (buffer[i + 262] == 'i');
boolean b262_7 = (buffer[i + 262] == '3');
boolean b262_8 = (buffer[i + 262] == '2');
boolean b262_9 = (buffer[i + 262] == 'd');
boolean b262_10 = (buffer[i + 262] == '/');
boolean b262_11 = (buffer[i + 262] == 'D');
boolean b262_12 = (buffer[i + 262] == 'E');
boolean b262_13 = (buffer[i + 262] == '.');
boolean b262_14 = (buffer[i + 262] == 'B');
boolean b263_1 = (buffer[i + 263] == 's');
boolean b263_2 = (buffer[i + 263] == '|');
boolean b263_3 = (buffer[i + 263] == '0');
boolean b263_4 = (buffer[i + 263] == 'd');
boolean b263_5 = (buffer[i + 263] == 'c');
boolean b263_6 = (buffer[i + 263] == 'A');
boolean b263_7 = (buffer[i + 263] == '2');
boolean b263_8 = (buffer[i + 263] == 'D');
boolean b263_9 = (buffer[i + 263] == 'o');
boolean b263_10 = (buffer[i + 263] == 'B');
boolean b263_11 = (buffer[i + 263] == 'h');
boolean b263_12 = (buffer[i + 263] == 'e');
boolean b263_13 = (buffer[i + 263] == '(');
boolean b263_14 = (buffer[i + 263] == '3');
boolean b263_15 = (buffer[i + 263] == 't');
boolean b263_16 = (buffer[i + 263] == ' ');
boolean b264_1 = (buffer[i + 264] == 'o');
boolean b264_2 = (buffer[i + 264] == '0');
boolean b264_3 = (buffer[i + 264] == 'f');
boolean b264_4 = (buffer[i + 264] == 'e');
boolean b264_5 = (buffer[i + 264] == 'a');
boolean b264_6 = (buffer[i + 264] == '|');
boolean b264_7 = (buffer[i + 264] == ' ');
boolean b264_8 = (buffer[i + 264] == 'w');
boolean b264_9 = (buffer[i + 264] == 't');
boolean b264_10 = (buffer[i + 264] == 'r');
boolean b264_11 = (buffer[i + 264] == 'A');
boolean b264_12 = (buffer[i + 264] == 'W');
boolean b264_13 = (buffer[i + 264] == '/');
boolean b264_14 = (buffer[i + 264] == '7');
boolean b264_15 = (buffer[i + 264] == '.');
boolean b265_1 = (buffer[i + 265] == 'm');
boolean b265_2 = (buffer[i + 265] == '2');
boolean b265_3 = (buffer[i + 265] == ' ');
boolean b265_4 = (buffer[i + 265] == '|');
boolean b265_5 = (buffer[i + 265] == 'r');
boolean b265_6 = (buffer[i + 265] == 't');
boolean b265_7 = (buffer[i + 265] == '0');
boolean b265_8 = (buffer[i + 265] == 's');
boolean b265_9 = (buffer[i + 265] == '-');
boolean b265_10 = (buffer[i + 265] == 'i');
boolean b265_11 = (buffer[i + 265] == 'C');
boolean b265_12 = (buffer[i + 265] == '5');
boolean b265_13 = (buffer[i + 265] == '.');
boolean b265_14 = (buffer[i + 265] == '4');
boolean b265_15 = (buffer[i + 265] == 'S');
boolean b266_1 = (buffer[i + 266] == 'e');
boolean b266_2 = (buffer[i + 266] == ' ');
boolean b266_3 = (buffer[i + 266] == '0');
boolean b266_4 = (buffer[i + 266] == '=');
boolean b266_5 = (buffer[i + 266] == 'i');
boolean b266_6 = (buffer[i + 266] == 'O');
boolean b266_7 = (buffer[i + 266] == '|');
boolean b266_8 = (buffer[i + 266] == 'A');
boolean b266_9 = (buffer[i + 266] == 'W');
boolean b266_10 = (buffer[i + 266] == 'l');
boolean b266_11 = (buffer[i + 266] == 'n');
boolean b266_12 = (buffer[i + 266] == '2');
boolean b266_13 = (buffer[i + 266] == '3');
boolean b266_14 = (buffer[i + 266] == '5');
boolean b266_15 = (buffer[i + 266] == 'L');
boolean b267_1 = (buffer[i + 267] == 't');
boolean b267_2 = (buffer[i + 267] == '0');
boolean b267_3 = (buffer[i + 267] == '|');
boolean b267_4 = (buffer[i + 267] == 'o');
boolean b267_5 = (buffer[i + 267] == 'p');
boolean b267_6 = (buffer[i + 267] == '2');
boolean b267_7 = (buffer[i + 267] == 'N');
boolean b267_8 = (buffer[i + 267] == 'i');
boolean b267_9 = (buffer[i + 267] == ',');
boolean b267_10 = (buffer[i + 267] == 'g');
boolean b267_11 = (buffer[i + 267] == 'c');
boolean b267_12 = (buffer[i + 267] == 'd');
boolean b267_13 = (buffer[i + 267] == ' ');
boolean b267_14 = (buffer[i + 267] == 'U');
boolean b267_15 = (buffer[i + 267] == '7');
boolean b267_16 = (buffer[i + 267] == 'C');
boolean b268_1 = (buffer[i + 268] == 'e');
boolean b268_2 = (buffer[i + 268] == '1');
boolean b268_3 = (buffer[i + 268] == ' ');
boolean b268_4 = (buffer[i + 268] == '|');
boolean b268_5 = (buffer[i + 268] == '5');
boolean b268_6 = (buffer[i + 268] == 'n');
boolean b268_7 = (buffer[i + 268] == '2');
boolean b268_8 = (buffer[i + 268] == 'A');
boolean b268_9 = (buffer[i + 268] == 'T');
boolean b268_10 = (buffer[i + 268] == 'c');
boolean b268_11 = (buffer[i + 268] == 'o');
boolean b268_12 = (buffer[i + 268] == '4');
boolean b268_13 = (buffer[i + 268] == 'C');
boolean b268_14 = (buffer[i + 268] == '.');
boolean b268_15 = (buffer[i + 268] == '3');
boolean b268_16 = (buffer[i + 268] == '6');
boolean b269_1 = (buffer[i + 269] == 'm');
boolean b269_2 = (buffer[i + 269] == ' ');
boolean b269_3 = (buffer[i + 269] == '8');
boolean b269_4 = (buffer[i + 269] == 'a');
boolean b269_5 = (buffer[i + 269] == 'C');
boolean b269_6 = (buffer[i + 269] == '/');
boolean b269_7 = (buffer[i + 269] == 'r');
boolean b269_8 = (buffer[i + 269] == '|');
boolean b269_9 = (buffer[i + 269] == 'i');
boolean b269_10 = (buffer[i + 269] == 'c');
boolean b269_11 = (buffer[i + 269] == 'd');
boolean b269_12 = (buffer[i + 269] == '*');
boolean b269_13 = (buffer[i + 269] == 'n');
boolean b269_14 = (buffer[i + 269] == 'e');
boolean b269_15 = (buffer[i + 269] == 'w');
boolean b269_16 = (buffer[i + 269] == '.');
boolean b269_17 = (buffer[i + 269] == '3');
boolean b269_18 = (buffer[i + 269] == 'A');
boolean b269_19 = (buffer[i + 269] == '0');
boolean b269_20 = (buffer[i + 269] == 'B');
boolean b269_21 = (buffer[i + 269] == '2');
boolean b269_22 = (buffer[i + 269] == '6');
boolean b270_1 = (buffer[i + 270] == 'p');
boolean b270_2 = (buffer[i + 270] == '0');
boolean b270_3 = (buffer[i + 270] == '|');
boolean b270_4 = (buffer[i + 270] == ' ');
boolean b270_5 = (buffer[i + 270] == 'x');
boolean b270_6 = (buffer[i + 270] == 'a');
boolean b270_7 = (buffer[i + 270] == '+');
boolean b270_8 = (buffer[i + 270] == 'c');
boolean b270_9 = (buffer[i + 270] == '5');
boolean b270_10 = (buffer[i + 270] == 'o');
boolean b270_11 = (buffer[i + 270] == '/');
boolean b270_12 = (buffer[i + 270] == 't');
boolean b270_13 = (buffer[i + 270] == 's');
boolean b270_14 = (buffer[i + 270] == 'i');
boolean b270_15 = (buffer[i + 270] == '6');
boolean b270_16 = (buffer[i + 270] == '2');
boolean b271_1 = (buffer[i + 271] == 's');
boolean b271_2 = (buffer[i + 271] == '0');
boolean b271_3 = (buffer[i + 271] == ' ');
boolean b271_4 = (buffer[i + 271] == '2');
boolean b271_5 = (buffer[i + 271] == 'm');
boolean b271_6 = (buffer[i + 271] == '/');
boolean b271_7 = (buffer[i + 271] == '|');
boolean b271_8 = (buffer[i + 271] == 'e');
boolean b271_9 = (buffer[i + 271] == '.');
boolean b271_10 = (buffer[i + 271] == 'w');
boolean b271_11 = (buffer[i + 271] == '*');
boolean b271_12 = (buffer[i + 271] == ':');
boolean b271_13 = (buffer[i + 271] == 't');
boolean b271_14 = (buffer[i + 271] == 'n');
boolean b271_15 = (buffer[i + 271] == '4');
boolean b271_16 = (buffer[i + 271] == 'F');
boolean b271_17 = (buffer[i + 271] == '1');
boolean b271_18 = (buffer[i + 271] == '3');
boolean b272_1 = (buffer[i + 272] == 'p');
boolean b272_2 = (buffer[i + 272] == ' ');
boolean b272_3 = (buffer[i + 272] == '0');
boolean b272_4 = (buffer[i + 272] == '2');
boolean b272_5 = (buffer[i + 272] == 'l');
boolean b272_6 = (buffer[i + 272] == '1');
boolean b272_7 = (buffer[i + 272] == 's');
boolean b272_8 = (buffer[i + 272] == '|');
boolean b272_9 = (buffer[i + 272] == '-');
boolean b272_10 = (buffer[i + 272] == '3');
boolean b272_11 = (buffer[i + 272] == 'f');
boolean b272_12 = (buffer[i + 272] == '.');
boolean b272_13 = (buffer[i + 272] == '7');
boolean b272_14 = (buffer[i + 272] == '5');
boolean b272_15 = (buffer[i + 272] == 'n');
boolean b272_16 = (buffer[i + 272] == '(');
boolean b272_17 = (buffer[i + 272] == 'W');
boolean b272_18 = (buffer[i + 272] == 'B');
boolean b272_19 = (buffer[i + 272] == 'D');
boolean b273_1 = (buffer[i + 273] == 'a');
boolean b273_2 = (buffer[i + 273] == '0');
boolean b273_3 = (buffer[i + 273] == '1');
boolean b273_4 = (buffer[i + 273] == '|');
boolean b273_5 = (buffer[i + 273] == 'U');
boolean b273_6 = (buffer[i + 273] == ',');
boolean b273_7 = (buffer[i + 273] == '2');
boolean b273_8 = (buffer[i + 273] == 't');
boolean b273_9 = (buffer[i + 273] == ' ');
boolean b273_10 = (buffer[i + 273] == 'M');
boolean b273_11 = (buffer[i + 273] == 'E');
boolean b273_12 = (buffer[i + 273] == 'B');
boolean b273_13 = (buffer[i + 273] == 'r');
boolean b273_14 = (buffer[i + 273] == 'K');
boolean b273_15 = (buffer[i + 273] == 'i');
boolean b274_1 = (buffer[i + 274] == 'c');
boolean b274_2 = (buffer[i + 274] == '4');
boolean b274_3 = (buffer[i + 274] == ' ');
boolean b274_4 = (buffer[i + 274] == 'i');
boolean b274_5 = (buffer[i + 274] == 'n');
boolean b274_6 = (buffer[i + 274] == 'U');
boolean b274_7 = (buffer[i + 274] == 's');
boolean b274_8 = (buffer[i + 274] == 'a');
boolean b274_9 = (buffer[i + 274] == '.');
boolean b274_10 = (buffer[i + 274] == '|');
boolean b274_11 = (buffer[i + 274] == ':');
boolean b274_12 = (buffer[i + 274] == '3');
boolean b274_13 = (buffer[i + 274] == 'N');
boolean b274_14 = (buffer[i + 274] == 'D');
boolean b274_15 = (buffer[i + 274] == 'o');
boolean b274_16 = (buffer[i + 274] == 'H');
boolean b274_17 = (buffer[i + 274] == 'C');
boolean b274_18 = (buffer[i + 274] == '0');
boolean b274_19 = (buffer[i + 274] == 'B');
boolean b274_20 = (buffer[i + 274] == 'A');
boolean b275_1 = (buffer[i + 275] == 'e');
boolean b275_2 = (buffer[i + 275] == ' ');
boolean b275_3 = (buffer[i + 275] == '0');
boolean b275_4 = (buffer[i + 275] == '|');
boolean b275_5 = (buffer[i + 275] == 'o');
boolean b275_6 = (buffer[i + 275] == 's');
boolean b275_7 = (buffer[i + 275] == 'p');
boolean b275_8 = (buffer[i + 275] == '<');
boolean b275_9 = (buffer[i + 275] == '8');
boolean b275_10 = (buffer[i + 275] == 'B');
boolean b275_11 = (buffer[i + 275] == 'T');
boolean b275_12 = (buffer[i + 275] == '/');
boolean b275_13 = (buffer[i + 275] == 'z');
boolean b275_14 = (buffer[i + 275] == 'c');
boolean b275_15 = (buffer[i + 275] == 'r');
boolean b275_16 = (buffer[i + 275] == '7');
boolean b275_17 = (buffer[i + 275] == 'd');
boolean b275_18 = (buffer[i + 275] == '3');
boolean b275_19 = (buffer[i + 275] == '.');
boolean b275_20 = (buffer[i + 275] == 'U');
boolean b275_21 = (buffer[i + 275] == 'A');
boolean b276_1 = (buffer[i + 276] == 'f');
boolean b276_2 = (buffer[i + 276] == '0');
boolean b276_3 = (buffer[i + 276] == '|');
boolean b276_4 = (buffer[i + 276] == 'e');
boolean b276_5 = (buffer[i + 276] == 'r');
boolean b276_6 = (buffer[i + 276] == 'p');
boolean b276_7 = (buffer[i + 276] == 'b');
boolean b276_8 = (buffer[i + 276] == '*');
boolean b276_9 = (buffer[i + 276] == ' ');
boolean b276_10 = (buffer[i + 276] == 'w');
boolean b276_11 = (buffer[i + 276] == 'i');
boolean b276_12 = (buffer[i + 276] == 'G');
boolean b276_13 = (buffer[i + 276] == 'o');
boolean b276_14 = (buffer[i + 276] == 'U');
boolean b276_15 = (buffer[i + 276] == 'T');
boolean b276_16 = (buffer[i + 276] == 'M');
boolean b276_17 = (buffer[i + 276] == 'B');
boolean b276_18 = (buffer[i + 276] == 'N');
boolean b276_19 = (buffer[i + 276] == 'm');
boolean b276_20 = (buffer[i + 276] == 's');
boolean b277_1 = (buffer[i + 277] == 'o');
boolean b277_2 = (buffer[i + 277] == '6');
boolean b277_3 = (buffer[i + 277] == '|');
boolean b277_4 = (buffer[i + 277] == ' ');
boolean b277_5 = (buffer[i + 277] == '0');
boolean b277_6 = (buffer[i + 277] == '5');
boolean b277_7 = (buffer[i + 277] == 'r');
boolean b277_8 = (buffer[i + 277] == '-');
boolean b277_9 = (buffer[i + 277] == 'l');
boolean b277_10 = (buffer[i + 277] == '/');
boolean b277_11 = (buffer[i + 277] == '2');
boolean b277_12 = (buffer[i + 277] == 'A');
boolean b277_13 = (buffer[i + 277] == 'e');
boolean b277_14 = (buffer[i + 277] == 'E');
boolean b277_15 = (buffer[i + 277] == 'd');
boolean b277_16 = (buffer[i + 277] == 'P');
boolean b277_17 = (buffer[i + 277] == 'H');
boolean b277_18 = (buffer[i + 277] == '4');
boolean b277_19 = (buffer[i + 277] == 'C');
boolean b277_20 = (buffer[i + 277] == 'L');
boolean b277_21 = (buffer[i + 277] == 'w');
boolean b277_22 = (buffer[i + 277] == 's');
boolean b278_1 = (buffer[i + 278] == 'r');
boolean b278_2 = (buffer[i + 278] == '|');
boolean b278_3 = (buffer[i + 278] == '0');
boolean b278_4 = (buffer[i + 278] == 'C');
boolean b278_5 = (buffer[i + 278] == '-');
boolean b278_6 = (buffer[i + 278] == 'A');
boolean b278_7 = (buffer[i + 278] == 'i');
boolean b278_8 = (buffer[i + 278] == 'd');
boolean b278_9 = (buffer[i + 278] == 'u');
boolean b278_10 = (buffer[i + 278] == '2');
boolean b278_11 = (buffer[i + 278] == '*');
boolean b278_12 = (buffer[i + 278] == 'T');
boolean b278_13 = (buffer[i + 278] == '.');
boolean b278_14 = (buffer[i + 278] == 'b');
boolean b278_15 = (buffer[i + 278] == 'l');
boolean b278_16 = (buffer[i + 278] == '3');
boolean b278_17 = (buffer[i + 278] == '/');
boolean b278_18 = (buffer[i + 278] == '7');
boolean b278_19 = (buffer[i + 278] == '8');
boolean b278_20 = (buffer[i + 278] == ',');
boolean b278_21 = (buffer[i + 278] == 's');
boolean b278_22 = (buffer[i + 278] == ' ');
boolean b278_23 = (buffer[i + 278] == 'e');
boolean b278_24 = (buffer[i + 278] == '1');
boolean b279_1 = (buffer[i + 279] == 't');
boolean b279_2 = (buffer[i + 279] == 'p');
boolean b279_3 = (buffer[i + 279] == '0');
boolean b279_4 = (buffer[i + 279] == '5');
boolean b279_5 = (buffer[i + 279] == 'l');
boolean b279_6 = (buffer[i + 279] == ' ');
boolean b279_7 = (buffer[i + 279] == 'A');
boolean b279_8 = (buffer[i + 279] == 'g');
boolean b279_9 = (buffer[i + 279] == 'c');
boolean b279_10 = (buffer[i + 279] == 'y');
boolean b279_11 = (buffer[i + 279] == '2');
boolean b279_12 = (buffer[i + 279] == '|');
boolean b279_13 = (buffer[i + 279] == 'a');
boolean b279_14 = (buffer[i + 279] == 'r');
boolean b279_15 = (buffer[i + 279] == '1');
boolean b279_16 = (buffer[i + 279] == 'h');
boolean b279_17 = (buffer[i + 279] == 'n');
boolean b279_18 = (buffer[i + 279] == 'B');
boolean b279_19 = (buffer[i + 279] == 'T');
boolean b279_20 = (buffer[i + 279] == '.');
boolean b279_21 = (buffer[i + 279] == '-');
boolean b280_1 = (buffer[i + 280] == 'h');
boolean b280_2 = (buffer[i + 280] == 'C');
boolean b280_3 = (buffer[i + 280] == '|');
boolean b280_4 = (buffer[i + 280] == 'u');
boolean b280_5 = (buffer[i + 280] == ' ');
boolean b280_6 = (buffer[i + 280] == '2');
boolean b280_7 = (buffer[i + 280] == 'g');
boolean b280_8 = (buffer[i + 280] == 'e');
boolean b280_9 = (buffer[i + 280] == 'a');
boolean b280_10 = (buffer[i + 280] == '>');
boolean b280_11 = (buffer[i + 280] == '8');
boolean b280_12 = (buffer[i + 280] == 'c');
boolean b280_13 = (buffer[i + 280] == '+');
boolean b280_14 = (buffer[i + 280] == '0');
boolean b280_15 = (buffer[i + 280] == 'i');
boolean b280_16 = (buffer[i + 280] == 'p');
boolean b280_17 = (buffer[i + 280] == '/');
boolean b280_18 = (buffer[i + 280] == '.');
boolean b280_19 = (buffer[i + 280] == 'P');
boolean b280_20 = (buffer[i + 280] == '4');
boolean b280_21 = (buffer[i + 280] == 'D');
boolean b280_22 = (buffer[i + 280] == 'l');
boolean b280_23 = (buffer[i + 280] == 'N');
boolean b280_24 = (buffer[i + 280] == '-');
boolean b280_25 = (buffer[i + 280] == 'A');
boolean b280_26 = (buffer[i + 280] == '6');
boolean b280_27 = (buffer[i + 280] == '3');
boolean b281_1 = (buffer[i + 281] == 'e');
boolean b281_2 = (buffer[i + 281] == '|');
boolean b281_3 = (buffer[i + 281] == '0');
boolean b281_4 = (buffer[i + 281] == 'b');
boolean b281_5 = (buffer[i + 281] == '8');
boolean b281_6 = (buffer[i + 281] == '2');
boolean b281_7 = (buffer[i + 281] == 'n');
boolean b281_8 = (buffer[i + 281] == 't');
boolean b281_9 = (buffer[i + 281] == '<');
boolean b281_10 = (buffer[i + 281] == '/');
boolean b281_11 = (buffer[i + 281] == 'D');
boolean b281_12 = (buffer[i + 281] == 'd');
boolean b281_13 = (buffer[i + 281] == '3');
boolean b281_14 = (buffer[i + 281] == 'c');
boolean b281_15 = (buffer[i + 281] == ' ');
boolean b281_16 = (buffer[i + 281] == '5');
boolean b281_17 = (buffer[i + 281] == ':');
boolean b281_18 = (buffer[i + 281] == '1');
boolean b281_19 = (buffer[i + 281] == 'i');
boolean b281_20 = (buffer[i + 281] == 'T');
boolean b281_21 = (buffer[i + 281] == 'E');
boolean b281_22 = (buffer[i + 281] == 'L');
boolean b281_23 = (buffer[i + 281] == 'a');
boolean b281_24 = (buffer[i + 281] == 'A');
boolean b281_25 = (buffer[i + 281] == 'g');
boolean b282_1 = (buffer[i + 282] == 's');
boolean b282_2 = (buffer[i + 282] == '0');
boolean b282_3 = (buffer[i + 282] == 'l');
boolean b282_4 = (buffer[i + 282] == '|');
boolean b282_5 = (buffer[i + 282] == 'n');
boolean b282_6 = (buffer[i + 282] == 't');
boolean b282_7 = (buffer[i + 282] == 'i');
boolean b282_8 = (buffer[i + 282] == 'b');
boolean b282_9 = (buffer[i + 282] == 'W');
boolean b282_10 = (buffer[i + 282] == '2');
boolean b282_11 = (buffer[i + 282] == ' ');
boolean b282_12 = (buffer[i + 282] == 'e');
boolean b282_13 = (buffer[i + 282] == 'B');
boolean b282_14 = (buffer[i + 282] == 'H');
boolean b282_15 = (buffer[i + 282] == '.');
boolean b282_16 = (buffer[i + 282] == '/');
boolean b282_17 = (buffer[i + 282] == '1');
boolean b282_18 = (buffer[i + 282] == 'k');
boolean b282_19 = (buffer[i + 282] == 'T');
boolean b282_20 = (buffer[i + 282] == 'R');
boolean b282_21 = (buffer[i + 282] == 'g');
boolean b283_1 = (buffer[i + 283] == 'o');
boolean b283_2 = (buffer[i + 283] == '7');
boolean b283_3 = (buffer[i + 283] == ' ');
boolean b283_4 = (buffer[i + 283] == 'i');
boolean b283_5 = (buffer[i + 283] == '|');
boolean b283_6 = (buffer[i + 283] == 't');
boolean b283_7 = (buffer[i + 283] == 'c');
boolean b283_8 = (buffer[i + 283] == '>');
boolean b283_9 = (buffer[i + 283] == '2');
boolean b283_10 = (buffer[i + 283] == '0');
boolean b283_11 = (buffer[i + 283] == 'n');
boolean b283_12 = (buffer[i + 283] == 'p');
boolean b283_13 = (buffer[i + 283] == 'T');
boolean b283_14 = (buffer[i + 283] == ':');
boolean b283_15 = (buffer[i + 283] == '.');
boolean b283_16 = (buffer[i + 283] == '6');
boolean b283_17 = (buffer[i + 283] == '8');
boolean b283_18 = (buffer[i + 283] == 'e');
boolean b283_19 = (buffer[i + 283] == '5');
boolean b284_1 = (buffer[i + 284] == 'c');
boolean b284_2 = (buffer[i + 284] == ' ');
boolean b284_3 = (buffer[i + 284] == '0');
boolean b284_4 = (buffer[i + 284] == 'e');
boolean b284_5 = (buffer[i + 284] == 'a');
boolean b284_6 = (buffer[i + 284] == '|');
boolean b284_7 = (buffer[i + 284] == '3');
boolean b284_8 = (buffer[i + 284] == 'n');
boolean b284_9 = (buffer[i + 284] == 'r');
boolean b284_10 = (buffer[i + 284] == '<');
boolean b284_11 = (buffer[i + 284] == 'w');
boolean b284_12 = (buffer[i + 284] == ':');
boolean b284_13 = (buffer[i + 284] == 'A');
boolean b284_14 = (buffer[i + 284] == 't');
boolean b284_15 = (buffer[i + 284] == 'T');
boolean b284_16 = (buffer[i + 284] == '/');
boolean b284_17 = (buffer[i + 284] == 'd');
boolean b284_18 = (buffer[i + 284] == 'D');
boolean b284_19 = (buffer[i + 284] == '1');
boolean b284_20 = (buffer[i + 284] == '7');
boolean b284_21 = (buffer[i + 284] == '2');
boolean b284_22 = (buffer[i + 284] == '.');
boolean b284_23 = (buffer[i + 284] == 'C');
boolean b284_24 = (buffer[i + 284] == 'U');
boolean b285_1 = (buffer[i + 285] == 'k');
boolean b285_2 = (buffer[i + 285] == '8');
boolean b285_3 = (buffer[i + 285] == '0');
boolean b285_4 = (buffer[i + 285] == '|');
boolean b285_5 = (buffer[i + 285] == '3');
boolean b285_6 = (buffer[i + 285] == '2');
boolean b285_7 = (buffer[i + 285] == 'l');
boolean b285_8 = (buffer[i + 285] == 'A');
boolean b285_9 = (buffer[i + 285] == '/');
boolean b285_10 = (buffer[i + 285] == 'i');
boolean b285_11 = (buffer[i + 285] == 'd');
boolean b285_12 = (buffer[i + 285] == ' ');
boolean b285_13 = (buffer[i + 285] == 'E');
boolean b285_14 = (buffer[i + 285] == 'T');
boolean b285_15 = (buffer[i + 285] == '-');
boolean b285_16 = (buffer[i + 285] == 'P');
boolean b285_17 = (buffer[i + 285] == '(');
boolean b285_18 = (buffer[i + 285] == 'f');
boolean b285_19 = (buffer[i + 285] == 'e');
boolean b285_20 = (buffer[i + 285] == 'M');
boolean b285_21 = (buffer[i + 285] == 'w');
boolean b285_22 = (buffer[i + 285] == 'G');
boolean b285_23 = (buffer[i + 285] == 'L');
boolean b285_24 = (buffer[i + 285] == '.');
boolean b285_25 = (buffer[i + 285] == 't');
boolean b285_26 = (buffer[i + 285] == ':');
boolean b285_27 = (buffer[i + 285] == 's');
boolean b286_1 = (buffer[i + 286] == 'i');
boolean b286_2 = (buffer[i + 286] == '9');
boolean b286_3 = (buffer[i + 286] == ' ');
boolean b286_4 = (buffer[i + 286] == 'A');
boolean b286_5 = (buffer[i + 286] == '0');
boolean b286_6 = (buffer[i + 286] == '|');
boolean b286_7 = (buffer[i + 286] == 'x');
boolean b286_8 = (buffer[i + 286] == 'P');
boolean b286_9 = (buffer[i + 286] == 'p');
boolean b286_10 = (buffer[i + 286] == 'b');
boolean b286_11 = (buffer[i + 286] == 'o');
boolean b286_12 = (buffer[i + 286] == 'H');
boolean b286_13 = (buffer[i + 286] == 'M');
boolean b286_14 = (buffer[i + 286] == '4');
boolean b286_15 = (buffer[i + 286] == 'r');
boolean b286_16 = (buffer[i + 286] == 'E');
boolean b286_17 = (buffer[i + 286] == '/');
boolean b286_18 = (buffer[i + 286] == 'W');
boolean b286_19 = (buffer[i + 286] == 'n');
boolean b286_20 = (buffer[i + 286] == '3');
boolean b286_21 = (buffer[i + 286] == 's');
boolean b286_22 = (buffer[i + 286] == 'F');
boolean b286_23 = (buffer[i + 286] == 'e');
boolean b286_24 = (buffer[i + 286] == ')');
boolean b286_25 = (buffer[i + 286] == 'R');
boolean b286_26 = (buffer[i + 286] == 'c');
boolean b287_1 = (buffer[i + 287] == 'n');
boolean b287_2 = (buffer[i + 287] == '|');
boolean b287_3 = (buffer[i + 287] == '0');
boolean b287_4 = (buffer[i + 287] == 'E');
boolean b287_5 = (buffer[i + 287] == 'g');
boolean b287_6 = (buffer[i + 287] == ' ');
boolean b287_7 = (buffer[i + 287] == 'h');
boolean b287_8 = (buffer[i + 287] == 'O');
boolean b287_9 = (buffer[i + 287] == 't');
boolean b287_10 = (buffer[i + 287] == '>');
boolean b287_11 = (buffer[i + 287] == 'w');
boolean b287_12 = (buffer[i + 287] == 'T');
boolean b287_13 = (buffer[i + 287] == '2');
boolean b287_14 = (buffer[i + 287] == 'o');
boolean b287_15 = (buffer[i + 287] == 'c');
boolean b287_16 = (buffer[i + 287] == '.');
boolean b287_17 = (buffer[i + 287] == 'i');
boolean b287_18 = (buffer[i + 287] == '1');
boolean b287_19 = (buffer[i + 287] == 'r');
boolean b287_20 = (buffer[i + 287] == 'z');
boolean b287_21 = (buffer[i + 287] == '/');
boolean b287_22 = (buffer[i + 287] == 'A');
boolean b287_23 = (buffer[i + 287] == 'D');
boolean b287_24 = (buffer[i + 287] == '7');
boolean b287_25 = (buffer[i + 287] == 'B');
boolean b287_26 = (buffer[i + 287] == '3');
boolean b287_27 = (buffer[i + 287] == 'M');
boolean b287_28 = (buffer[i + 287] == '5');
boolean b288_1 = (buffer[i + 288] == 'a');
boolean b288_2 = (buffer[i + 288] == '[');
boolean b288_3 = (buffer[i + 288] == '0');
boolean b288_4 = (buffer[i + 288] == 'H');
boolean b288_5 = (buffer[i + 288] == ' ');
boolean b288_6 = (buffer[i + 288] == '7');
boolean b288_7 = (buffer[i + 288] == '|');
boolean b288_8 = (buffer[i + 288] == 'n');
boolean b288_9 = (buffer[i + 288] == 'M');
boolean b288_10 = (buffer[i + 288] == 't');
boolean b288_11 = (buffer[i + 288] == 'S');
boolean b288_12 = (buffer[i + 288] == '<');
boolean b288_13 = (buffer[i + 288] == 's');
boolean b288_14 = (buffer[i + 288] == 'T');
boolean b288_15 = (buffer[i + 288] == '2');
boolean b288_16 = (buffer[i + 288] == 'z');
boolean b288_17 = (buffer[i + 288] == 'c');
boolean b288_18 = (buffer[i + 288] == 'd');
boolean b288_19 = (buffer[i + 288] == '.');
boolean b288_20 = (buffer[i + 288] == 'u');
boolean b288_21 = (buffer[i + 288] == 'i');
boolean b288_22 = (buffer[i + 288] == 'k');
boolean b288_23 = (buffer[i + 288] == '3');
boolean b288_24 = (buffer[i + 288] == '5');
boolean b288_25 = (buffer[i + 288] == 'A');
boolean b288_26 = (buffer[i + 288] == 'o');
boolean b288_27 = (buffer[i + 288] == '-');
boolean b289_1 = (buffer[i + 289] == 'd');
boolean b289_2 = (buffer[i + 289] == '|');
boolean b289_3 = (buffer[i + 289] == ' ');
boolean b289_4 = (buffer[i + 289] == 's');
boolean b289_5 = (buffer[i + 289] == '1');
boolean b289_6 = (buffer[i + 289] == 'I');
boolean b289_7 = (buffer[i + 289] == '=');
boolean b289_8 = (buffer[i + 289] == 'M');
boolean b289_9 = (buffer[i + 289] == 'o');
boolean b289_10 = (buffer[i + 289] == 'm');
boolean b289_11 = (buffer[i + 289] == 'T');
boolean b289_12 = (buffer[i + 289] == 't');
boolean b289_13 = (buffer[i + 289] == 'U');
boolean b289_14 = (buffer[i + 289] == 'P');
boolean b289_15 = (buffer[i + 289] == 'i');
boolean b289_16 = (buffer[i + 289] == 'e');
boolean b289_17 = (buffer[i + 289] == ')');
boolean b289_18 = (buffer[i + 289] == 'E');
boolean b289_19 = (buffer[i + 289] == 'l');
boolean b289_20 = (buffer[i + 289] == '0');
boolean b289_21 = (buffer[i + 289] == 'n');
boolean b289_22 = (buffer[i + 289] == 'A');
boolean b289_23 = (buffer[i + 289] == '/');
boolean b289_24 = (buffer[i + 289] == '4');
boolean b289_25 = (buffer[i + 289] == 'F');
boolean b289_26 = (buffer[i + 289] == 'D');
boolean b289_27 = (buffer[i + 289] == '.');
boolean b289_28 = (buffer[i + 289] == 'z');
boolean b290_1 = (buffer[i + 290] == 'd');
boolean b290_2 = (buffer[i + 290] == '0');
boolean b290_3 = (buffer[i + 290] == '|');
boolean b290_4 = (buffer[i + 290] == '9');
boolean b290_5 = (buffer[i + 290] == 'n');
boolean b290_6 = (buffer[i + 290] == 'o');
boolean b290_7 = (buffer[i + 290] == 'z');
boolean b290_8 = (buffer[i + 290] == 'l');
boolean b290_9 = (buffer[i + 290] == ' ');
boolean b290_10 = (buffer[i + 290] == 'y');
boolean b290_11 = (buffer[i + 290] == 's');
boolean b290_12 = (buffer[i + 290] == 't');
boolean b290_13 = (buffer[i + 290] == 'N');
boolean b290_14 = (buffer[i + 290] == '/');
boolean b290_15 = (buffer[i + 290] == '+');
boolean b290_16 = (buffer[i + 290] == 'p');
boolean b290_17 = (buffer[i + 290] == 'c');
boolean b290_18 = (buffer[i + 290] == 'A');
boolean b290_19 = (buffer[i + 290] == 'b');
boolean b290_20 = (buffer[i + 290] == '7');
boolean b290_21 = (buffer[i + 290] == '4');
boolean b290_22 = (buffer[i + 290] == ')');
boolean b290_23 = (buffer[i + 290] == '5');
boolean b290_24 = (buffer[i + 290] == '2');
boolean b290_25 = (buffer[i + 290] == 'i');
boolean b290_26 = (buffer[i + 290] == '3');
boolean b290_27 = (buffer[i + 290] == '1');
boolean b290_28 = (buffer[i + 290] == 'g');
boolean b291_1 = (buffer[i + 291] == 'r');
boolean b291_2 = (buffer[i + 291] == '8');
boolean b291_3 = (buffer[i + 291] == '0');
boolean b291_4 = (buffer[i + 291] == ' ');
boolean b291_5 = (buffer[i + 291] == '1');
boolean b291_6 = (buffer[i + 291] == 's');
boolean b291_7 = (buffer[i + 291] == '5');
boolean b291_8 = (buffer[i + 291] == 'z');
boolean b291_9 = (buffer[i + 291] == 'i');
boolean b291_10 = (buffer[i + 291] == '+');
boolean b291_11 = (buffer[i + 291] == '/');
boolean b291_12 = (buffer[i + 291] == 'p');
boolean b291_13 = (buffer[i + 291] == 'e');
boolean b291_14 = (buffer[i + 291] == 'y');
boolean b291_15 = (buffer[i + 291] == 'T');
boolean b291_16 = (buffer[i + 291] == '|');
boolean b291_17 = (buffer[i + 291] == 'l');
boolean b291_18 = (buffer[i + 291] == 't');
boolean b291_19 = (buffer[i + 291] == 'J');
boolean b291_20 = (buffer[i + 291] == 'w');
boolean b291_21 = (buffer[i + 291] == 'd');
boolean b291_22 = (buffer[i + 291] == 'a');
boolean b291_23 = (buffer[i + 291] == 'c');
boolean b291_24 = (buffer[i + 291] == 'u');
boolean b291_25 = (buffer[i + 291] == 'U');
boolean b291_26 = (buffer[i + 291] == '.');
boolean b291_27 = (buffer[i + 291] == '2');
boolean b291_28 = (buffer[i + 291] == 'C');
boolean b292_1 = (buffer[i + 292] == 'i');
boolean b292_2 = (buffer[i + 292] == ' ');
boolean b292_3 = (buffer[i + 292] == '|');
boolean b292_4 = (buffer[i + 292] == '0');
boolean b292_5 = (buffer[i + 292] == 'a');
boolean b292_6 = (buffer[i + 292] == 'C');
boolean b292_7 = (buffer[i + 292] == 'l');
boolean b292_8 = (buffer[i + 292] == 'x');
boolean b292_9 = (buffer[i + 292] == 'e');
boolean b292_10 = (buffer[i + 292] == 'r');
boolean b292_11 = (buffer[i + 292] == '.');
boolean b292_12 = (buffer[i + 292] == '2');
boolean b292_13 = (buffer[i + 292] == '-');
boolean b292_14 = (buffer[i + 292] == 'D');
boolean b292_15 = (buffer[i + 292] == '/');
boolean b292_16 = (buffer[i + 292] == 'n');
boolean b292_17 = (buffer[i + 292] == 'O');
boolean b292_18 = (buffer[i + 292] == 's');
boolean b292_19 = (buffer[i + 292] == 'b');
boolean b292_20 = (buffer[i + 292] == 'A');
boolean b292_21 = (buffer[i + 292] == '1');
boolean b292_22 = (buffer[i + 292] == '4');
boolean b292_23 = (buffer[i + 292] == '3');
boolean b292_24 = (buffer[i + 292] == '7');
boolean b292_25 = (buffer[i + 292] == 'E');
boolean b292_26 = (buffer[i + 292] == '6');
boolean b292_27 = (buffer[i + 292] == 'F');
boolean b293_1 = (buffer[i + 293] == 'n');
boolean b293_2 = (buffer[i + 293] == '8');
boolean b293_3 = (buffer[i + 293] == 'W');
boolean b293_4 = (buffer[i + 293] == '|');
boolean b293_5 = (buffer[i + 293] == '%');
boolean b293_6 = (buffer[i + 293] == '2');
boolean b293_7 = (buffer[i + 293] == '0');
boolean b293_8 = (buffer[i + 293] == ' ');
boolean b293_9 = (buffer[i + 293] == 'l');
boolean b293_10 = (buffer[i + 293] == 'm');
boolean b293_11 = (buffer[i + 293] == '=');
boolean b293_12 = (buffer[i + 293] == '-');
boolean b293_13 = (buffer[i + 293] == 'e');
boolean b293_14 = (buffer[i + 293] == '5');
boolean b293_15 = (buffer[i + 293] == '1');
boolean b293_16 = (buffer[i + 293] == '/');
boolean b293_17 = (buffer[i + 293] == 'E');
boolean b293_18 = (buffer[i + 293] == '4');
boolean b293_19 = (buffer[i + 293] == 'g');
boolean b293_20 = (buffer[i + 293] == 'I');
boolean b293_21 = (buffer[i + 293] == '.');
boolean b293_22 = (buffer[i + 293] == 'D');
boolean b293_23 = (buffer[i + 293] == '6');
boolean b293_24 = (buffer[i + 293] == 'p');
boolean b293_25 = (buffer[i + 293] == 'c');
boolean b293_26 = (buffer[i + 293] == 'y');
boolean b293_27 = (buffer[i + 293] == '3');
boolean b293_28 = (buffer[i + 293] == 'h');
boolean b293_29 = (buffer[i + 293] == 'M');
boolean b293_30 = (buffer[i + 293] == 'a');
boolean b293_31 = (buffer[i + 293] == 't');
boolean b293_32 = (buffer[i + 293] == '9');
boolean b294_1 = (buffer[i + 294] == 'y');
boolean b294_2 = (buffer[i + 294] == 'D');
boolean b294_3 = (buffer[i + 294] == '|');
boolean b294_4 = (buffer[i + 294] == 'p');
boolean b294_5 = (buffer[i + 294] == ' ');
boolean b294_6 = (buffer[i + 294] == '0');
boolean b294_7 = (buffer[i + 294] == 'e');
boolean b294_8 = (buffer[i + 294] == '2');
boolean b294_9 = (buffer[i + 294] == 'l');
boolean b294_10 = (buffer[i + 294] == 'a');
boolean b294_11 = (buffer[i + 294] == 'd');
boolean b294_12 = (buffer[i + 294] == 'A');
boolean b294_13 = (buffer[i + 294] == '>');
boolean b294_14 = (buffer[i + 294] == '.');
boolean b294_15 = (buffer[i + 294] == 'o');
boolean b294_16 = (buffer[i + 294] == '5');
boolean b294_17 = (buffer[i + 294] == 'n');
boolean b294_18 = (buffer[i + 294] == ':');
boolean b294_19 = (buffer[i + 294] == 'N');
boolean b294_20 = (buffer[i + 294] == 't');
boolean b294_21 = (buffer[i + 294] == 'c');
boolean b294_22 = (buffer[i + 294] == 'b');
boolean b294_23 = (buffer[i + 294] == 'r');
boolean b294_24 = (buffer[i + 294] == 'H');
boolean b294_25 = (buffer[i + 294] == '7');
boolean b294_26 = (buffer[i + 294] == '3');
boolean b294_27 = (buffer[i + 294] == '/');
boolean b295_1 = (buffer[i + 295] == 'e');
boolean b295_2 = (buffer[i + 295] == '|');
boolean b295_3 = (buffer[i + 295] == '0');
boolean b295_4 = (buffer[i + 295] == ' ');
boolean b295_5 = (buffer[i + 295] == '2');
boolean b295_6 = (buffer[i + 295] == 'a');
boolean b295_7 = (buffer[i + 295] == '/');
boolean b295_8 = (buffer[i + 295] == ',');
boolean b295_9 = (buffer[i + 295] == 'g');
boolean b295_10 = (buffer[i + 295] == 'd');
boolean b295_11 = (buffer[i + 295] == '1');
boolean b295_12 = (buffer[i + 295] == 'l');
boolean b295_13 = (buffer[i + 295] == '.');
boolean b295_14 = (buffer[i + 295] == 'c');
boolean b295_15 = (buffer[i + 295] == 'A');
boolean b295_16 = (buffer[i + 295] == 'T');
boolean b295_17 = (buffer[i + 295] == 'h');
boolean b295_18 = (buffer[i + 295] == ':');
boolean b295_19 = (buffer[i + 295] == 'o');
boolean b295_20 = (buffer[i + 295] == '-');
boolean b295_21 = (buffer[i + 295] == '4');
boolean b295_22 = (buffer[i + 295] == 'D');
boolean b295_23 = (buffer[i + 295] == 'B');
boolean b295_24 = (buffer[i + 295] == 'z');
boolean b295_25 = (buffer[i + 295] == '5');
boolean b295_26 = (buffer[i + 295] == 't');
boolean b295_27 = (buffer[i + 295] == '3');
boolean b295_28 = (buffer[i + 295] == '6');
boolean b296_1 = (buffer[i + 296] == 'a');
boolean b296_2 = (buffer[i + 296] == 'K');
boolean b296_3 = (buffer[i + 296] == '0');
boolean b296_4 = (buffer[i + 296] == '1');
boolean b296_5 = (buffer[i + 296] == 'N');
boolean b296_6 = (buffer[i + 296] == '|');
boolean b296_7 = (buffer[i + 296] == '/');
boolean b296_8 = (buffer[i + 296] == '5');
boolean b296_9 = (buffer[i + 296] == 't');
boolean b296_10 = (buffer[i + 296] == 'x');
boolean b296_11 = (buffer[i + 296] == '2');
boolean b296_12 = (buffer[i + 296] == 'e');
boolean b296_13 = (buffer[i + 296] == 'i');
boolean b296_14 = (buffer[i + 296] == 'D');
boolean b296_15 = (buffer[i + 296] == 'o');
boolean b296_16 = (buffer[i + 296] == ')');
boolean b296_17 = (buffer[i + 296] == '#');
boolean b296_18 = (buffer[i + 296] == ' ');
boolean b296_19 = (buffer[i + 296] == 'p');
boolean b296_20 = (buffer[i + 296] == 'A');
boolean b296_21 = (buffer[i + 296] == 'F');
boolean b296_22 = (buffer[i + 296] == '7');
boolean b296_23 = (buffer[i + 296] == '4');
boolean b296_24 = (buffer[i + 296] == 'm');
boolean b296_25 = (buffer[i + 296] == 's');
boolean b296_26 = (buffer[i + 296] == '9');
boolean b296_27 = (buffer[i + 296] == 'v');
boolean b296_28 = (buffer[i + 296] == '.');
boolean b296_29 = (buffer[i + 296] == 'h');
boolean b296_30 = (buffer[i + 296] == '8');
boolean b296_31 = (buffer[i + 296] == '3');
boolean b297_1 = (buffer[i + 297] == 'h');
boolean b297_2 = (buffer[i + 297] == '|');
boolean b297_3 = (buffer[i + 297] == '0');
boolean b297_4 = (buffer[i + 297] == ' ');
boolean b297_5 = (buffer[i + 297] == '3');
boolean b297_6 = (buffer[i + 297] == 'e');
boolean b297_7 = (buffer[i + 297] == 'c');
boolean b297_8 = (buffer[i + 297] == '5');
boolean b297_9 = (buffer[i + 297] == '.');
boolean b297_10 = (buffer[i + 297] == 'n');
boolean b297_11 = (buffer[i + 297] == 'v');
boolean b297_12 = (buffer[i + 297] == 'i');
boolean b297_13 = (buffer[i + 297] == '2');
boolean b297_14 = (buffer[i + 297] == 'd');
boolean b297_15 = (buffer[i + 297] == 'H');
boolean b297_16 = (buffer[i + 297] == 't');
boolean b297_17 = (buffer[i + 297] == 'A');
boolean b297_18 = (buffer[i + 297] == '6');
boolean b297_19 = (buffer[i + 297] == 'U');
boolean b297_20 = (buffer[i + 297] == '(');
boolean b297_21 = (buffer[i + 297] == '*');
boolean b297_22 = (buffer[i + 297] == 'g');
boolean b297_23 = (buffer[i + 297] == ')');
boolean b297_24 = (buffer[i + 297] == 'l');
boolean b297_25 = (buffer[i + 297] == 'o');
boolean b298_1 = (buffer[i + 298] == 'y');
boolean b298_2 = (buffer[i + 298] == '0');
boolean b298_3 = (buffer[i + 298] == 'i');
boolean b298_4 = (buffer[i + 298] == '|');
boolean b298_5 = (buffer[i + 298] == 'x');
boolean b298_6 = (buffer[i + 298] == ' ');
boolean b298_7 = (buffer[i + 298] == 't');
boolean b298_8 = (buffer[i + 298] == 'e');
boolean b298_9 = (buffer[i + 298] == '.');
boolean b298_10 = (buffer[i + 298] == 'p');
boolean b298_11 = (buffer[i + 298] == '{');
boolean b298_12 = (buffer[i + 298] == 'n');
boolean b298_13 = (buffer[i + 298] == 'B');
boolean b298_14 = (buffer[i + 298] == '2');
boolean b298_15 = (buffer[i + 298] == '(');
boolean b298_16 = (buffer[i + 298] == 'o');
boolean b298_17 = (buffer[i + 298] == 'c');
boolean b298_18 = (buffer[i + 298] == 's');
boolean b298_19 = (buffer[i + 298] == 'H');
boolean b298_20 = (buffer[i + 298] == 'U');
boolean b298_21 = (buffer[i + 298] == '/');
boolean b298_22 = (buffer[i + 298] == ':');
boolean b298_23 = (buffer[i + 298] == '3');
boolean b298_24 = (buffer[i + 298] == '4');
boolean b298_25 = (buffer[i + 298] == 'D');
boolean b298_26 = (buffer[i + 298] == 'C');
boolean b298_27 = (buffer[i + 298] == 'l');
boolean b298_28 = (buffer[i + 298] == 'd');
boolean b298_29 = (buffer[i + 298] == '7');
boolean b299_1 = (buffer[i + 299] == 'e');
boolean b299_2 = (buffer[i + 299] == '8');
boolean b299_3 = (buffer[i + 299] == '|');
boolean b299_4 = (buffer[i + 299] == 's');
boolean b299_5 = (buffer[i + 299] == '_');
boolean b299_6 = (buffer[i + 299] == '/');
boolean b299_7 = (buffer[i + 299] == '0');
boolean b299_8 = (buffer[i + 299] == 'w');
boolean b299_9 = (buffer[i + 299] == 'f');
boolean b299_10 = (buffer[i + 299] == 'n');
boolean b299_11 = (buffer[i + 299] == ' ');
boolean b299_12 = (buffer[i + 299] == 't');
boolean b299_13 = (buffer[i + 299] == 'h');
boolean b299_14 = (buffer[i + 299] == ':');
boolean b299_15 = (buffer[i + 299] == 'o');
boolean b299_16 = (buffer[i + 299] == 'A');
boolean b299_17 = (buffer[i + 299] == 'W');
boolean b299_18 = (buffer[i + 299] == 'D');
boolean b299_19 = (buffer[i + 299] == 'c');
boolean b299_20 = (buffer[i + 299] == 'M');
boolean b299_21 = (buffer[i + 299] == '1');
boolean b299_22 = (buffer[i + 299] == 'T');
boolean b299_23 = (buffer[i + 299] == '*');
boolean b299_24 = (buffer[i + 299] == 'B');
boolean b299_25 = (buffer[i + 299] == 'C');
boolean b299_26 = (buffer[i + 299] == '2');
boolean b299_27 = (buffer[i + 299] == '7');
boolean b299_28 = (buffer[i + 299] == '3');
boolean b299_29 = (buffer[i + 299] == 'N');
boolean b299_30 = (buffer[i + 299] == 'a');
boolean b299_31 = (buffer[i + 299] == '(');
boolean b299_32 = (buffer[i + 299] == '6');
boolean b300_1 = (buffer[i + 300] == 'a');
boolean b300_2 = (buffer[i + 300] == ' ');
boolean b300_3 = (buffer[i + 300] == '0');
boolean b300_4 = (buffer[i + 300] == '|');
boolean b300_5 = (buffer[i + 300] == 'S');
boolean b300_6 = (buffer[i + 300] == 'o');
boolean b300_7 = (buffer[i + 300] == 't');
boolean b300_8 = (buffer[i + 300] == '(');
boolean b300_9 = (buffer[i + 300] == '/');
boolean b300_10 = (buffer[i + 300] == 'p');
boolean b300_11 = (buffer[i + 300] == 'x');
boolean b300_12 = (buffer[i + 300] == '<');
boolean b300_13 = (buffer[i + 300] == 'v');
boolean b300_14 = (buffer[i + 300] == 'e');
boolean b300_15 = (buffer[i + 300] == '+');
boolean b300_16 = (buffer[i + 300] == 'i');
boolean b300_17 = (buffer[i + 300] == 'g');
boolean b300_18 = (buffer[i + 300] == 'r');
boolean b300_19 = (buffer[i + 300] == 'T');
boolean b300_20 = (buffer[i + 300] == 'm');
boolean b300_21 = (buffer[i + 300] == '5');
boolean b300_22 = (buffer[i + 300] == 'w');
boolean b300_23 = (buffer[i + 300] == 'D');
boolean b300_24 = (buffer[i + 300] == 'E');
boolean b300_25 = (buffer[i + 300] == 'W');
boolean b300_26 = (buffer[i + 300] == 'c');
boolean b301_1 = (buffer[i + 301] == 'h');
boolean b301_2 = (buffer[i + 301] == '8');
boolean b301_3 = (buffer[i + 301] == '0');
boolean b301_4 = (buffer[i + 301] == 'i');
boolean b301_5 = (buffer[i + 301] == ' ');
boolean b301_6 = (buffer[i + 301] == 'r');
boolean b301_7 = (buffer[i + 301] == 'e');
boolean b301_8 = (buffer[i + 301] == '|');
boolean b301_9 = (buffer[i + 301] == 'W');
boolean b301_10 = (buffer[i + 301] == 't');
boolean b301_11 = (buffer[i + 301] == 'M');
boolean b301_12 = (buffer[i + 301] == 'U');
boolean b301_13 = (buffer[i + 301] == 'H');
boolean b301_14 = (buffer[i + 301] == 'n');
boolean b301_15 = (buffer[i + 301] == ':');
boolean b301_16 = (buffer[i + 301] == '1');
boolean b301_17 = (buffer[i + 301] == 'p');
boolean b301_18 = (buffer[i + 301] == 'z');
boolean b301_19 = (buffer[i + 301] == '3');
boolean b301_20 = (buffer[i + 301] == '-');
boolean b301_21 = (buffer[i + 301] == 'P');
boolean b301_22 = (buffer[i + 301] == '4');
boolean b301_23 = (buffer[i + 301] == 'C');
boolean b301_24 = (buffer[i + 301] == '.');
boolean b301_25 = (buffer[i + 301] == 'T');
boolean b301_26 = (buffer[i + 301] == 'm');
boolean b301_27 = (buffer[i + 301] == 'E');
boolean b301_28 = (buffer[i + 301] == '6');
boolean b301_29 = (buffer[i + 301] == '5');
boolean b301_30 = (buffer[i + 301] == 'w');
boolean b302_1 = (buffer[i + 302] == 'i');
boolean b302_2 = (buffer[i + 302] == '9');
boolean b302_3 = (buffer[i + 302] == '|');
boolean b302_4 = (buffer[i + 302] == '0');
boolean b302_5 = (buffer[i + 302] == 't');
boolean b302_6 = (buffer[i + 302] == '2');
boolean b302_7 = (buffer[i + 302] == 'k');
boolean b302_8 = (buffer[i + 302] == 'r');
boolean b302_9 = (buffer[i + 302] == 'H');
boolean b302_10 = (buffer[i + 302] == '/');
boolean b302_11 = (buffer[i + 302] == 'o');
boolean b302_12 = (buffer[i + 302] == 'f');
boolean b302_13 = (buffer[i + 302] == '<');
boolean b302_14 = (buffer[i + 302] == 'd');
boolean b302_15 = (buffer[i + 302] == ' ');
boolean b302_16 = (buffer[i + 302] == 'A');
boolean b302_17 = (buffer[i + 302] == 'B');
boolean b302_18 = (buffer[i + 302] == '-');
boolean b302_19 = (buffer[i + 302] == 'a');
boolean b302_20 = (buffer[i + 302] == 'h');
boolean b302_21 = (buffer[i + 302] == 'D');
boolean b302_22 = (buffer[i + 302] == 'x');
boolean b302_23 = (buffer[i + 302] == 'c');
boolean b302_24 = (buffer[i + 302] == 'F');
boolean b302_25 = (buffer[i + 302] == '5');
boolean b302_26 = (buffer[i + 302] == '7');
boolean b302_27 = (buffer[i + 302] == 'n');
boolean b302_28 = (buffer[i + 302] == '.');
boolean b302_29 = (buffer[i + 302] == 'e');
boolean b302_30 = (buffer[i + 302] == '1');
boolean b302_31 = (buffer[i + 302] == '3');
boolean b303_1 = (buffer[i + 303] == 'k');
boolean b303_2 = (buffer[i + 303] == '|');
boolean b303_3 = (buffer[i + 303] == 'n');
boolean b303_4 = (buffer[i + 303] == 'w');
boolean b303_5 = (buffer[i + 303] == 'e');
boolean b303_6 = (buffer[i + 303] == ' ');
boolean b303_7 = (buffer[i + 303] == '0');
boolean b303_8 = (buffer[i + 303] == '3');
boolean b303_9 = (buffer[i + 303] == '8');
boolean b303_10 = (buffer[i + 303] == 'm');
boolean b303_11 = (buffer[i + 303] == 'T');
boolean b303_12 = (buffer[i + 303] == 'j');
boolean b303_13 = (buffer[i + 303] == 'z');
boolean b303_14 = (buffer[i + 303] == 'r');
boolean b303_15 = (buffer[i + 303] == 'f');
boolean b303_16 = (buffer[i + 303] == '/');
boolean b303_17 = (buffer[i + 303] == 's');
boolean b303_18 = (buffer[i + 303] == '2');
boolean b303_19 = (buffer[i + 303] == 'o');
boolean b303_20 = (buffer[i + 303] == 'i');
boolean b303_21 = (buffer[i + 303] == 'c');
boolean b303_22 = (buffer[i + 303] == 'y');
boolean b303_23 = (buffer[i + 303] == ':');
boolean b303_24 = (buffer[i + 303] == 'l');
boolean b303_25 = (buffer[i + 303] == 'g');
boolean b303_26 = (buffer[i + 303] == '1');
boolean b303_27 = (buffer[i + 303] == 'A');
boolean b303_28 = (buffer[i + 303] == '-');
boolean b303_29 = (buffer[i + 303] == 't');
boolean b303_30 = (buffer[i + 303] == 'h');
boolean b303_31 = (buffer[i + 303] == 'M');
boolean b303_32 = (buffer[i + 303] == '.');
boolean b303_33 = (buffer[i + 303] == 'd');
boolean b303_34 = (buffer[i + 303] == 'C');
boolean b304_1 = (buffer[i + 304] == 'n');
boolean b304_2 = (buffer[i + 304] == 'C');
boolean b304_3 = (buffer[i + 304] == 'A');
boolean b304_4 = (buffer[i + 304] == '0');
boolean b304_5 = (buffer[i + 304] == '|');
boolean b304_6 = (buffer[i + 304] == 's');
boolean b304_7 = (buffer[i + 304] == 'p');
boolean b304_8 = (buffer[i + 304] == 'd');
boolean b304_9 = (buffer[i + 304] == ' ');
boolean b304_10 = (buffer[i + 304] == 'v');
boolean b304_11 = (buffer[i + 304] == 'o');
boolean b304_12 = (buffer[i + 304] == 'F');
boolean b304_13 = (buffer[i + 304] == '5');
boolean b304_14 = (buffer[i + 304] == 'l');
boolean b304_15 = (buffer[i + 304] == 'T');
boolean b304_16 = (buffer[i + 304] == 'a');
boolean b304_17 = (buffer[i + 304] == 'i');
boolean b304_18 = (buffer[i + 304] == 'B');
boolean b304_19 = (buffer[i + 304] == 't');
boolean b304_20 = (buffer[i + 304] == 'w');
boolean b304_21 = (buffer[i + 304] == 'h');
boolean b304_22 = (buffer[i + 304] == 'H');
boolean b304_23 = (buffer[i + 304] == 'e');
boolean b304_24 = (buffer[i + 304] == '.');
boolean b304_25 = (buffer[i + 304] == 'g');
boolean b304_26 = (buffer[i + 304] == '/');
boolean b304_27 = (buffer[i + 304] == 'S');
boolean b304_28 = (buffer[i + 304] == '1');
boolean b304_29 = (buffer[i + 304] == '2');
boolean b304_30 = (buffer[i + 304] == '4');
boolean b304_31 = (buffer[i + 304] == 'L');
boolean b304_32 = (buffer[i + 304] == '3');
boolean b304_33 = (buffer[i + 304] == '8');
boolean b304_34 = (buffer[i + 304] == '6');
boolean b304_35 = (buffer[i + 304] == 'f');
boolean b305_1 = (buffer[i + 305] == 'o');
boolean b305_2 = (buffer[i + 305] == '|');
boolean b305_3 = (buffer[i + 305] == 'B');
boolean b305_4 = (buffer[i + 305] == '0');
boolean b305_5 = (buffer[i + 305] == '/');
boolean b305_6 = (buffer[i + 305] == '1');
boolean b305_7 = (buffer[i + 305] == '8');
boolean b305_8 = (buffer[i + 305] == 'E');
boolean b305_9 = (buffer[i + 305] == 's');
boolean b305_10 = (buffer[i + 305] == 'F');
boolean b305_11 = (buffer[i + 305] == 'C');
boolean b305_12 = (buffer[i + 305] == 'W');
boolean b305_13 = (buffer[i + 305] == '2');
boolean b305_14 = (buffer[i + 305] == 'P');
boolean b305_15 = (buffer[i + 305] == 'v');
boolean b305_16 = (buffer[i + 305] == 'l');
boolean b305_17 = (buffer[i + 305] == 'm');
boolean b305_18 = (buffer[i + 305] == 'n');
boolean b305_19 = (buffer[i + 305] == 'i');
boolean b305_20 = (buffer[i + 305] == ':');
boolean b305_21 = (buffer[i + 305] == 'e');
boolean b305_22 = (buffer[i + 305] == ' ');
boolean b305_23 = (buffer[i + 305] == '*');
boolean b305_24 = (buffer[i + 305] == 'a');
boolean b305_25 = (buffer[i + 305] == 'R');
boolean b305_26 = (buffer[i + 305] == 'b');
boolean b305_27 = (buffer[i + 305] == 'A');
boolean b305_28 = (buffer[i + 305] == 'p');
boolean b305_29 = (buffer[i + 305] == 'z');
boolean b305_30 = (buffer[i + 305] == '7');
boolean b305_31 = (buffer[i + 305] == '9');
boolean b305_32 = (buffer[i + 305] == 'w');
boolean b305_33 = (buffer[i + 305] == 'H');
boolean b305_34 = (buffer[i + 305] == '(');
boolean b305_35 = (buffer[i + 305] == 'U');
boolean b305_36 = (buffer[i + 305] == '6');
boolean b305_37 = (buffer[i + 305] == '-');
boolean b306_1 = (buffer[i + 306] == 'w');
boolean b306_2 = (buffer[i + 306] == '0');
boolean b306_3 = (buffer[i + 306] == ' ');
boolean b306_4 = (buffer[i + 306] == 'S');
boolean b306_5 = (buffer[i + 306] == 'p');
boolean b306_6 = (buffer[i + 306] == 'i');
boolean b306_7 = (buffer[i + 306] == '9');
boolean b306_8 = (buffer[i + 306] == 'H');
boolean b306_9 = (buffer[i + 306] == '3');
boolean b306_10 = (buffer[i + 306] == '/');
boolean b306_11 = (buffer[i + 306] == 'a');
boolean b306_12 = (buffer[i + 306] == '|');
boolean b306_13 = (buffer[i + 306] == 'l');
boolean b306_14 = (buffer[i + 306] == 'e');
boolean b306_15 = (buffer[i + 306] == 't');
boolean b306_16 = (buffer[i + 306] == 'v');
boolean b306_17 = (buffer[i + 306] == 'n');
boolean b306_18 = (buffer[i + 306] == 'c');
boolean b306_19 = (buffer[i + 306] == 's');
boolean b306_20 = (buffer[i + 306] == 'D');
boolean b306_21 = (buffer[i + 306] == '7');
boolean b306_22 = (buffer[i + 306] == 'O');
boolean b306_23 = (buffer[i + 306] == 'h');
boolean b306_24 = (buffer[i + 306] == 'u');
boolean b306_25 = (buffer[i + 306] == ',');
boolean b306_26 = (buffer[i + 306] == 'd');
boolean b306_27 = (buffer[i + 306] == '-');
boolean b306_28 = (buffer[i + 306] == '1');
boolean b306_29 = (buffer[i + 306] == 'o');
boolean b306_30 = (buffer[i + 306] == 'r');
boolean b307_1 = (buffer[i + 307] == 't');
boolean b307_2 = (buffer[i + 307] == 'C');
boolean b307_3 = (buffer[i + 307] == '0');
boolean b307_4 = (buffer[i + 307] == '|');
boolean b307_5 = (buffer[i + 307] == ' ');
boolean b307_6 = (buffer[i + 307] == '/');
boolean b307_7 = (buffer[i + 307] == 'a');
boolean b307_8 = (buffer[i + 307] == 'c');
boolean b307_9 = (buffer[i + 307] == 'l');
boolean b307_10 = (buffer[i + 307] == '4');
boolean b307_11 = (buffer[i + 307] == 'F');
boolean b307_12 = (buffer[i + 307] == '2');
boolean b307_13 = (buffer[i + 307] == 'n');
boolean b307_14 = (buffer[i + 307] == 's');
boolean b307_15 = (buffer[i + 307] == 'o');
boolean b307_16 = (buffer[i + 307] == 'B');
boolean b307_17 = (buffer[i + 307] == '1');
boolean b307_18 = (buffer[i + 307] == 'U');
boolean b307_19 = (buffer[i + 307] == '3');
boolean b307_20 = (buffer[i + 307] == '>');
boolean b307_21 = (buffer[i + 307] == 'E');
boolean b307_22 = (buffer[i + 307] == 'w');
boolean b307_23 = (buffer[i + 307] == 'N');
boolean b307_24 = (buffer[i + 307] == 'k');
boolean b307_25 = (buffer[i + 307] == '*');
boolean b307_26 = (buffer[i + 307] == 'W');
boolean b307_27 = (buffer[i + 307] == ':');
boolean b307_28 = (buffer[i + 307] == '.');
boolean b307_29 = (buffer[i + 307] == 'e');
boolean b307_30 = (buffer[i + 307] == 'A');
boolean b307_31 = (buffer[i + 307] == 'b');
boolean b307_32 = (buffer[i + 307] == '6');
boolean b307_33 = (buffer[i + 307] == '9');
boolean b307_34 = (buffer[i + 307] == 'u');
boolean b308_1 = (buffer[i + 308] == 'h');
boolean b308_2 = (buffer[i + 308] == ' ');
boolean b308_3 = (buffer[i + 308] == 'D');
boolean b308_4 = (buffer[i + 308] == '0');
boolean b308_5 = (buffer[i + 308] == 'd');
boolean b308_6 = (buffer[i + 308] == '|');
boolean b308_7 = (buffer[i + 308] == '9');
boolean b308_8 = (buffer[i + 308] == 'S');
boolean b308_9 = (buffer[i + 308] == 'm');
boolean b308_10 = (buffer[i + 308] == 'R');
boolean b308_11 = (buffer[i + 308] == 'v');
boolean b308_12 = (buffer[i + 308] == 'u');
boolean b308_13 = (buffer[i + 308] == '.');
boolean b308_14 = (buffer[i + 308] == 'F');
boolean b308_15 = (buffer[i + 308] == '2');
boolean b308_16 = (buffer[i + 308] == '3');
boolean b308_17 = (buffer[i + 308] == 's');
boolean b308_18 = (buffer[i + 308] == 'c');
boolean b308_19 = (buffer[i + 308] == 'B');
boolean b308_20 = (buffer[i + 308] == '/');
boolean b308_21 = (buffer[i + 308] == '<');
boolean b308_22 = (buffer[i + 308] == 'w');
boolean b308_23 = (buffer[i + 308] == 'T');
boolean b308_24 = (buffer[i + 308] == 'i');
boolean b308_25 = (buffer[i + 308] == ':');
boolean b308_26 = (buffer[i + 308] == '6');
boolean b308_27 = (buffer[i + 308] == 'l');
boolean b308_28 = (buffer[i + 308] == 'a');
boolean b308_29 = (buffer[i + 308] == 'e');
boolean b308_30 = (buffer[i + 308] == 'x');
boolean b308_31 = (buffer[i + 308] == '8');
boolean b308_32 = (buffer[i + 308] == '7');
boolean b308_33 = (buffer[i + 308] == '4');
boolean b308_34 = (buffer[i + 308] == 'n');
boolean b308_35 = (buffer[i + 308] == 'p');
boolean b308_36 = (buffer[i + 308] == 't');
boolean b308_37 = (buffer[i + 308] == 'N');
boolean b308_38 = (buffer[i + 308] == 'r');
boolean b308_39 = (buffer[i + 308] == '5');
boolean b309_1 = (buffer[i + 309] == 'i');
boolean b309_2 = (buffer[i + 309] == 'B');
boolean b309_3 = (buffer[i + 309] == ' ');
boolean b309_4 = (buffer[i + 309] == '|');
boolean b309_5 = (buffer[i + 309] == 'p');
boolean b309_6 = (buffer[i + 309] == 's');
boolean b309_7 = (buffer[i + 309] == '_');
boolean b309_8 = (buffer[i + 309] == 'x');
boolean b309_9 = (buffer[i + 309] == 'e');
boolean b309_10 = (buffer[i + 309] == '0');
boolean b309_11 = (buffer[i + 309] == '4');
boolean b309_12 = (buffer[i + 309] == 'g');
boolean b309_13 = (buffer[i + 309] == 'r');
boolean b309_14 = (buffer[i + 309] == 'o');
boolean b309_15 = (buffer[i + 309] == '3');
boolean b309_16 = (buffer[i + 309] == 'q');
boolean b309_17 = (buffer[i + 309] == '1');
boolean b309_18 = (buffer[i + 309] == 'A');
boolean b309_19 = (buffer[i + 309] == 'a');
boolean b309_20 = (buffer[i + 309] == 'w');
boolean b309_21 = (buffer[i + 309] == 'h');
boolean b309_22 = (buffer[i + 309] == 't');
boolean b309_23 = (buffer[i + 309] == 'G');
boolean b309_24 = (buffer[i + 309] == 'M');
boolean b309_25 = (buffer[i + 309] == 'E');
boolean b309_26 = (buffer[i + 309] == 'c');
boolean b309_27 = (buffer[i + 309] == 'n');
boolean b309_28 = (buffer[i + 309] == '.');
boolean b309_29 = (buffer[i + 309] == 'd');
boolean b309_30 = (buffer[i + 309] == ':');
boolean b309_31 = (buffer[i + 309] == '5');
boolean b309_32 = (buffer[i + 309] == 'T');
boolean b309_33 = (buffer[i + 309] == '-');
boolean b310_1 = (buffer[i + 310] == 's');
boolean b310_2 = (buffer[i + 310] == '0');
boolean b310_3 = (buffer[i + 310] == '|');
boolean b310_4 = (buffer[i + 310] == ' ');
boolean b310_5 = (buffer[i + 310] == 't');
boolean b310_6 = (buffer[i + 310] == 'l');
boolean b310_7 = (buffer[i + 310] == 'i');
boolean b310_8 = (buffer[i + 310] == 'F');
boolean b310_9 = (buffer[i + 310] == 'w');
boolean b310_10 = (buffer[i + 310] == 'B');
boolean b310_11 = (buffer[i + 310] == '/');
boolean b310_12 = (buffer[i + 310] == '=');
boolean b310_13 = (buffer[i + 310] == 'r');
boolean b310_14 = (buffer[i + 310] == '.');
boolean b310_15 = (buffer[i + 310] == 'c');
boolean b310_16 = (buffer[i + 310] == 'v');
boolean b310_17 = (buffer[i + 310] == '>');
boolean b310_18 = (buffer[i + 310] == '+');
boolean b310_19 = (buffer[i + 310] == '6');
boolean b310_20 = (buffer[i + 310] == 'y');
boolean b310_21 = (buffer[i + 310] == 'E');
boolean b310_22 = (buffer[i + 310] == 'D');
boolean b310_23 = (buffer[i + 310] == 'o');
boolean b310_24 = (buffer[i + 310] == 'M');
boolean b310_25 = (buffer[i + 310] == 'm');
boolean b310_26 = (buffer[i + 310] == 'e');
boolean b310_27 = (buffer[i + 310] == 'p');
boolean b310_28 = (buffer[i + 310] == '2');
boolean b310_29 = (buffer[i + 310] == '4');
boolean b310_30 = (buffer[i + 310] == '1');
boolean b310_31 = (buffer[i + 310] == '5');
boolean b310_32 = (buffer[i + 310] == '9');
boolean b310_33 = (buffer[i + 310] == 'a');
boolean b310_34 = (buffer[i + 310] == 'U');
boolean b310_35 = (buffer[i + 310] == '7');
boolean b310_36 = (buffer[i + 310] == 'A');
boolean b311_1 = (buffer[i + 311] == 'i');
boolean b311_2 = (buffer[i + 311] == ' ');
boolean b311_3 = (buffer[i + 311] == '9');
boolean b311_4 = (buffer[i + 311] == '0');
boolean b311_5 = (buffer[i + 311] == 'e');
boolean b311_6 = (buffer[i + 311] == '2');
boolean b311_7 = (buffer[i + 311] == 's');
boolean b311_8 = (buffer[i + 311] == 'n');
boolean b311_9 = (buffer[i + 311] == 'b');
boolean b311_10 = (buffer[i + 311] == 'F');
boolean b311_11 = (buffer[i + 311] == 'h');
boolean b311_12 = (buffer[i + 311] == '|');
boolean b311_13 = (buffer[i + 311] == '-');
boolean b311_14 = (buffer[i + 311] == 'p');
boolean b311_15 = (buffer[i + 311] == 'M');
boolean b311_16 = (buffer[i + 311] == '=');
boolean b311_17 = (buffer[i + 311] == '<');
boolean b311_18 = (buffer[i + 311] == 't');
boolean b311_19 = (buffer[i + 311] == '.');
boolean b311_20 = (buffer[i + 311] == ',');
boolean b311_21 = (buffer[i + 311] == 'd');
boolean b311_22 = (buffer[i + 311] == 'w');
boolean b311_23 = (buffer[i + 311] == 'T');
boolean b311_24 = (buffer[i + 311] == 'U');
boolean b311_25 = (buffer[i + 311] == '3');
boolean b311_26 = (buffer[i + 311] == 'z');
boolean b311_27 = (buffer[i + 311] == 'A');
boolean b311_28 = (buffer[i + 311] == 'o');
boolean b311_29 = (buffer[i + 311] == 'r');
boolean b311_30 = (buffer[i + 311] == 'l');
boolean b311_31 = (buffer[i + 311] == 'k');
boolean b311_32 = (buffer[i + 311] == '7');
boolean b311_33 = (buffer[i + 311] == '4');
boolean b311_34 = (buffer[i + 311] == 'D');
boolean b311_35 = (buffer[i + 311] == '5');
boolean b311_36 = (buffer[i + 311] == '6');
boolean b311_37 = (buffer[i + 311] == '1');
boolean b311_38 = (buffer[i + 311] == 'g');
boolean b312_1 = (buffer[i + 312] == 's');
boolean b312_2 = (buffer[i + 312] == '0');
boolean b312_3 = (buffer[i + 312] == ' ');
boolean b312_4 = (buffer[i + 312] == '|');
boolean b312_5 = (buffer[i + 312] == 'e');
boolean b312_6 = (buffer[i + 312] == 'y');
boolean b312_7 = (buffer[i + 312] == '8');
boolean b312_8 = (buffer[i + 312] == 'n');
boolean b312_9 = (buffer[i + 312] == '.');
boolean b312_10 = (buffer[i + 312] == 'D');
boolean b312_11 = (buffer[i + 312] == 'A');
boolean b312_12 = (buffer[i + 312] == 't');
boolean b312_13 = (buffer[i + 312] == 'S');
boolean b312_14 = (buffer[i + 312] == 'i');
boolean b312_15 = (buffer[i + 312] == '/');
boolean b312_16 = (buffer[i + 312] == 'o');
boolean b312_17 = (buffer[i + 312] == '2');
boolean b312_18 = (buffer[i + 312] == '1');
boolean b312_19 = (buffer[i + 312] == 'w');
boolean b312_20 = (buffer[i + 312] == 'B');
boolean b312_21 = (buffer[i + 312] == 'z');
boolean b312_22 = (buffer[i + 312] == 'v');
boolean b312_23 = (buffer[i + 312] == 'T');
boolean b312_24 = (buffer[i + 312] == 'p');
boolean b312_25 = (buffer[i + 312] == 'U');
boolean b312_26 = (buffer[i + 312] == 'm');
boolean b313_1 = (buffer[i + 313] == 'l');
boolean b313_2 = (buffer[i + 313] == 'B');
boolean b313_3 = (buffer[i + 313] == '8');
boolean b313_4 = (buffer[i + 313] == '0');
boolean b313_5 = (buffer[i + 313] == 'o');
boolean b313_6 = (buffer[i + 313] == '3');
boolean b313_7 = (buffer[i + 313] == '|');
boolean b313_8 = (buffer[i + 313] == ' ');
boolean b313_9 = (buffer[i + 313] == '/');
boolean b313_10 = (buffer[i + 313] == 'I');
boolean b313_11 = (buffer[i + 313] == 'r');
boolean b313_12 = (buffer[i + 313] == 's');
boolean b313_13 = (buffer[i + 313] == 'y');
boolean b313_14 = (buffer[i + 313] == 'F');
boolean b313_15 = (buffer[i + 313] == 'i');
boolean b313_16 = (buffer[i + 313] == 'U');
boolean b313_17 = (buffer[i + 313] == 'd');
boolean b313_18 = (buffer[i + 313] == '9');
boolean b313_19 = (buffer[i + 313] == 'g');
boolean b313_20 = (buffer[i + 313] == '(');
boolean b313_21 = (buffer[i + 313] == '2');
boolean b313_22 = (buffer[i + 313] == 'n');
boolean b313_23 = (buffer[i + 313] == 'm');
boolean b313_24 = (buffer[i + 313] == '*');
boolean b313_25 = (buffer[i + 313] == '.');
boolean b313_26 = (buffer[i + 313] == 'e');
boolean b313_27 = (buffer[i + 313] == 'A');
boolean b313_28 = (buffer[i + 313] == 'C');
boolean b313_29 = (buffer[i + 313] == ':');
boolean b313_30 = (buffer[i + 313] == 'H');
boolean b313_31 = (buffer[i + 313] == 'M');
boolean b313_32 = (buffer[i + 313] == '-');
boolean b313_33 = (buffer[i + 313] == 'c');
boolean b313_34 = (buffer[i + 313] == '5');
boolean b313_35 = (buffer[i + 313] == '1');
boolean b313_36 = (buffer[i + 313] == '4');
boolean b313_37 = (buffer[i + 313] == 'S');
boolean b313_38 = (buffer[i + 313] == '7');
boolean b313_39 = (buffer[i + 313] == 'b');
boolean b313_40 = (buffer[i + 313] == 'E');
boolean b314_1 = (buffer[i + 314] == 'a');
boolean b314_2 = (buffer[i + 314] == ' ');
boolean b314_3 = (buffer[i + 314] == '0');
boolean b314_4 = (buffer[i + 314] == '|');
boolean b314_5 = (buffer[i + 314] == 'A');
boolean b314_6 = (buffer[i + 314] == '_');
boolean b314_7 = (buffer[i + 314] == 'p');
boolean b314_8 = (buffer[i + 314] == 'd');
boolean b314_9 = (buffer[i + 314] == 's');
boolean b314_10 = (buffer[i + 314] == 'l');
boolean b314_11 = (buffer[i + 314] == '9');
boolean b314_12 = (buffer[i + 314] == 'x');
boolean b314_13 = (buffer[i + 314] == 'K');
boolean b314_14 = (buffer[i + 314] == '1');
boolean b314_15 = (buffer[i + 314] == 'v');
boolean b314_16 = (buffer[i + 314] == 'h');
boolean b314_17 = (buffer[i + 314] == '.');
boolean b314_18 = (buffer[i + 314] == 'S');
boolean b314_19 = (buffer[i + 314] == 'F');
boolean b314_20 = (buffer[i + 314] == 'g');
boolean b314_21 = (buffer[i + 314] == 'B');
boolean b314_22 = (buffer[i + 314] == 'b');
boolean b314_23 = (buffer[i + 314] == 'e');
boolean b314_24 = (buffer[i + 314] == ',');
boolean b314_25 = (buffer[i + 314] == '2');
boolean b314_26 = (buffer[i + 314] == 'E');
boolean b314_27 = (buffer[i + 314] == 'c');
boolean b314_28 = (buffer[i + 314] == 'i');
boolean b314_29 = (buffer[i + 314] == '>');
boolean b314_30 = (buffer[i + 314] == '3');
boolean b314_31 = (buffer[i + 314] == 'r');
boolean b314_32 = (buffer[i + 314] == 'o');
boolean b314_33 = (buffer[i + 314] == 'T');
boolean b314_34 = (buffer[i + 314] == 'R');
boolean b314_35 = (buffer[i + 314] == '/');
boolean b314_36 = (buffer[i + 314] == 'H');
boolean b314_37 = (buffer[i + 314] == 'C');
boolean b314_38 = (buffer[i + 314] == '4');
boolean b314_39 = (buffer[i + 314] == '5');
boolean b314_40 = (buffer[i + 314] == '7');
boolean b314_41 = (buffer[i + 314] == '8');
boolean b314_42 = (buffer[i + 314] == 'm');
boolean b314_43 = (buffer[i + 314] == '-');
boolean b314_44 = (buffer[i + 314] == 't');
boolean b314_45 = (buffer[i + 314] == '=');
boolean b315_1 = (buffer[i + 315] == 'm');
boolean b315_2 = (buffer[i + 315] == 'C');
boolean b315_3 = (buffer[i + 315] == ' ');
boolean b315_4 = (buffer[i + 315] == '|');
boolean b315_5 = (buffer[i + 315] == '0');
boolean b315_6 = (buffer[i + 315] == '/');
boolean b315_7 = (buffer[i + 315] == 'n');
boolean b315_8 = (buffer[i + 315] == 'U');
boolean b315_9 = (buffer[i + 315] == '2');
boolean b315_10 = (buffer[i + 315] == 'H');
boolean b315_11 = (buffer[i + 315] == 'e');
boolean b315_12 = (buffer[i + 315] == 'p');
boolean b315_13 = (buffer[i + 315] == 'y');
boolean b315_14 = (buffer[i + 315] == 'd');
boolean b315_15 = (buffer[i + 315] == 's');
boolean b315_16 = (buffer[i + 315] == '.');
boolean b315_17 = (buffer[i + 315] == 'u');
boolean b315_18 = (buffer[i + 315] == 'h');
boolean b315_19 = (buffer[i + 315] == '3');
boolean b315_20 = (buffer[i + 315] == 'x');
boolean b315_21 = (buffer[i + 315] == 't');
boolean b315_22 = (buffer[i + 315] == 'M');
boolean b315_23 = (buffer[i + 315] == 'A');
boolean b315_24 = (buffer[i + 315] == 'o');
boolean b315_25 = (buffer[i + 315] == '<');
boolean b315_26 = (buffer[i + 315] == 'Y');
boolean b315_27 = (buffer[i + 315] == 'a');
boolean b315_28 = (buffer[i + 315] == 'B');
boolean b315_29 = (buffer[i + 315] == '-');
boolean b315_30 = (buffer[i + 315] == 'J');
boolean b315_31 = (buffer[i + 315] == 'c');
boolean b315_32 = (buffer[i + 315] == 'r');
boolean b315_33 = (buffer[i + 315] == 'l');
boolean b315_34 = (buffer[i + 315] == 'T');
boolean b315_35 = (buffer[i + 315] == 'I');
boolean b315_36 = (buffer[i + 315] == '(');
boolean b315_37 = (buffer[i + 315] == 'f');
boolean b315_38 = (buffer[i + 315] == 'i');
boolean b315_39 = (buffer[i + 315] == '9');
boolean b315_40 = (buffer[i + 315] == ':');
boolean b315_41 = (buffer[i + 315] == '@');
boolean b316_1 = (buffer[i + 316] == 'e');
boolean b316_2 = (buffer[i + 316] == 'D');
boolean b316_3 = (buffer[i + 316] == '0');
boolean b316_4 = (buffer[i + 316] == '1');
boolean b316_5 = (buffer[i + 316] == 'A');
boolean b316_6 = (buffer[i + 316] == '3');
boolean b316_7 = (buffer[i + 316] == ' ');
boolean b316_8 = (buffer[i + 316] == '/');
boolean b316_9 = (buffer[i + 316] == 'S');
boolean b316_10 = (buffer[i + 316] == 'o');
boolean b316_11 = (buffer[i + 316] == 's');
boolean b316_12 = (buffer[i + 316] == '9');
boolean b316_13 = (buffer[i + 316] == 'f');
boolean b316_14 = (buffer[i + 316] == 'E');
boolean b316_15 = (buffer[i + 316] == 'T');
boolean b316_16 = (buffer[i + 316] == 'F');
boolean b316_17 = (buffer[i + 316] == 'r');
boolean b316_18 = (buffer[i + 316] == 'j');
boolean b316_19 = (buffer[i + 316] == 'b');
boolean b316_20 = (buffer[i + 316] == 'y');
boolean b316_21 = (buffer[i + 316] == 'd');
boolean b316_22 = (buffer[i + 316] == 'i');
boolean b316_23 = (buffer[i + 316] == 't');
boolean b316_24 = (buffer[i + 316] == 'B');
boolean b316_25 = (buffer[i + 316] == '.');
boolean b316_26 = (buffer[i + 316] == '7');
boolean b316_27 = (buffer[i + 316] == '|');
boolean b316_28 = (buffer[i + 316] == '6');
boolean b316_29 = (buffer[i + 316] == 'm');
boolean b316_30 = (buffer[i + 316] == 'Y');
boolean b316_31 = (buffer[i + 316] == 'n');
boolean b316_32 = (buffer[i + 316] == ',');
boolean b316_33 = (buffer[i + 316] == 'x');
boolean b316_34 = (buffer[i + 316] == 'p');
boolean b316_35 = (buffer[i + 316] == 'k');
boolean b316_36 = (buffer[i + 316] == 'O');
boolean b316_37 = (buffer[i + 316] == 'v');
boolean b316_38 = (buffer[i + 316] == 'a');
boolean b316_39 = (buffer[i + 316] == 'P');
boolean b316_40 = (buffer[i + 316] == 'c');
boolean b316_41 = (buffer[i + 316] == 'H');
boolean b316_42 = (buffer[i + 316] == ':');
boolean b316_43 = (buffer[i + 316] == 'C');
boolean b316_44 = (buffer[i + 316] == '4');
boolean b316_45 = (buffer[i + 316] == '2');
boolean b316_46 = (buffer[i + 316] == '-');
boolean b316_47 = (buffer[i + 316] == 'g');
boolean b317_1 = (buffer[i + 317] == 'b');
boolean b317_2 = (buffer[i + 317] == '|');
boolean b317_3 = (buffer[i + 317] == ' ');
boolean b317_4 = (buffer[i + 317] == '0');
boolean b317_5 = (buffer[i + 317] == '8');
boolean b317_6 = (buffer[i + 317] == 'B');
boolean b317_7 = (buffer[i + 317] == '1');
boolean b317_8 = (buffer[i + 317] == 'A');
boolean b317_9 = (buffer[i + 317] == '3');
boolean b317_10 = (buffer[i + 317] == '6');
boolean b317_11 = (buffer[i + 317] == 'c');
boolean b317_12 = (buffer[i + 317] == '/');
boolean b317_13 = (buffer[i + 317] == 'i');
boolean b317_14 = (buffer[i + 317] == 'w');
boolean b317_15 = (buffer[i + 317] == 'e');
boolean b317_16 = (buffer[i + 317] == 'r');
boolean b317_17 = (buffer[i + 317] == 'T');
boolean b317_18 = (buffer[i + 317] == 'F');
boolean b317_19 = (buffer[i + 317] == 'd');
boolean b317_20 = (buffer[i + 317] == 's');
boolean b317_21 = (buffer[i + 317] == '.');
boolean b317_22 = (buffer[i + 317] == 'y');
boolean b317_23 = (buffer[i + 317] == 'm');
boolean b317_24 = (buffer[i + 317] == 'U');
boolean b317_25 = (buffer[i + 317] == 'p');
boolean b317_26 = (buffer[i + 317] == 'x');
boolean b317_27 = (buffer[i + 317] == 'z');
boolean b317_28 = (buffer[i + 317] == 'C');
boolean b317_29 = (buffer[i + 317] == ':');
boolean b317_30 = (buffer[i + 317] == 'O');
boolean b317_31 = (buffer[i + 317] == 't');
boolean b317_32 = (buffer[i + 317] == '2');
boolean b317_33 = (buffer[i + 317] == 'g');
boolean b317_34 = (buffer[i + 317] == '-');
boolean b317_35 = (buffer[i + 317] == 'I');
boolean b317_36 = (buffer[i + 317] == 'n');
boolean b317_37 = (buffer[i + 317] == '4');
boolean b317_38 = (buffer[i + 317] == 'o');
boolean b317_39 = (buffer[i + 317] == 'P');
boolean b317_40 = (buffer[i + 317] == '9');
boolean b317_41 = (buffer[i + 317] == '7');
boolean b317_42 = (buffer[i + 317] == 'a');
boolean b317_43 = (buffer[i + 317] == 'M');
boolean b317_44 = (buffer[i + 317] == 'E');
boolean b317_45 = (buffer[i + 317] == 'f');
boolean b317_46 = (buffer[i + 317] == 'v');
boolean b318_1 = (buffer[i + 318] == 'u');
boolean b318_2 = (buffer[i + 318] == '9');
boolean b318_3 = (buffer[i + 318] == '8');
boolean b318_4 = (buffer[i + 318] == ' ');
boolean b318_5 = (buffer[i + 318] == '|');
boolean b318_6 = (buffer[i + 318] == 'w');
boolean b318_7 = (buffer[i + 318] == '0');
boolean b318_8 = (buffer[i + 318] == 'f');
boolean b318_9 = (buffer[i + 318] == 'c');
boolean b318_10 = (buffer[i + 318] == 't');
boolean b318_11 = (buffer[i + 318] == 'l');
boolean b318_12 = (buffer[i + 318] == 'r');
boolean b318_13 = (buffer[i + 318] == 'C');
boolean b318_14 = (buffer[i + 318] == 'e');
boolean b318_15 = (buffer[i + 318] == 'p');
boolean b318_16 = (buffer[i + 318] == 'P');
boolean b318_17 = (buffer[i + 318] == '3');
boolean b318_18 = (buffer[i + 318] == 'j');
boolean b318_19 = (buffer[i + 318] == 'b');
boolean b318_20 = (buffer[i + 318] == 's');
boolean b318_21 = (buffer[i + 318] == 'y');
boolean b318_22 = (buffer[i + 318] == 'd');
boolean b318_23 = (buffer[i + 318] == '.');
boolean b318_24 = (buffer[i + 318] == 'm');
boolean b318_25 = (buffer[i + 318] == 'U');
boolean b318_26 = (buffer[i + 318] == '=');
boolean b318_27 = (buffer[i + 318] == 'h');
boolean b318_28 = (buffer[i + 318] == 'i');
boolean b318_29 = (buffer[i + 318] == 'o');
boolean b318_30 = (buffer[i + 318] == 'a');
boolean b318_31 = (buffer[i + 318] == '2');
boolean b318_32 = (buffer[i + 318] == 'W');
boolean b318_33 = (buffer[i + 318] == 'q');
boolean b318_34 = (buffer[i + 318] == 'B');
boolean b318_35 = (buffer[i + 318] == 'A');
boolean b318_36 = (buffer[i + 318] == 'N');
boolean b318_37 = (buffer[i + 318] == 'n');
boolean b318_38 = (buffer[i + 318] == '1');
boolean b318_39 = (buffer[i + 318] == 'T');
boolean b318_40 = (buffer[i + 318] == '/');
boolean b318_41 = (buffer[i + 318] == '7');
boolean b318_42 = (buffer[i + 318] == 'g');
boolean b318_43 = (buffer[i + 318] == '6');
boolean b319_1 = (buffer[i + 319] == 't');
boolean b319_2 = (buffer[i + 319] == '0');
boolean b319_3 = (buffer[i + 319] == '|');
boolean b319_4 = (buffer[i + 319] == '1');
boolean b319_5 = (buffer[i + 319] == 'C');
boolean b319_6 = (buffer[i + 319] == 'A');
boolean b319_7 = (buffer[i + 319] == '3');
boolean b319_8 = (buffer[i + 319] == 's');
boolean b319_9 = (buffer[i + 319] == '_');
boolean b319_10 = (buffer[i + 319] == 'e');
boolean b319_11 = (buffer[i + 319] == 'p');
boolean b319_12 = (buffer[i + 319] == ' ');
boolean b319_13 = (buffer[i + 319] == 'd');
boolean b319_14 = (buffer[i + 319] == 'f');
boolean b319_15 = (buffer[i + 319] == '-');
boolean b319_16 = (buffer[i + 319] == '9');
boolean b319_17 = (buffer[i + 319] == 'r');
boolean b319_18 = (buffer[i + 319] == '/');
boolean b319_19 = (buffer[i + 319] == 'F');
boolean b319_20 = (buffer[i + 319] == 'a');
boolean b319_21 = (buffer[i + 319] == 'm');
boolean b319_22 = (buffer[i + 319] == 'y');
boolean b319_23 = (buffer[i + 319] == 'b');
boolean b319_24 = (buffer[i + 319] == '.');
boolean b319_25 = (buffer[i + 319] == 'u');
boolean b319_26 = (buffer[i + 319] == 'M');
boolean b319_27 = (buffer[i + 319] == 'l');
boolean b319_28 = (buffer[i + 319] == 'n');
boolean b319_29 = (buffer[i + 319] == 'O');
boolean b319_30 = (buffer[i + 319] == 'R');
boolean b319_31 = (buffer[i + 319] == 'B');
boolean b319_32 = (buffer[i + 319] == 'c');
boolean b319_33 = (buffer[i + 319] == 'o');
boolean b319_34 = (buffer[i + 319] == '2');
boolean b319_35 = (buffer[i + 319] == '=');
boolean b319_36 = (buffer[i + 319] == 'g');
boolean b319_37 = (buffer[i + 319] == '5');
boolean b319_38 = (buffer[i + 319] == 'V');
boolean b319_39 = (buffer[i + 319] == 'i');
boolean b319_40 = (buffer[i + 319] == 'P');
boolean b319_41 = (buffer[i + 319] == 'H');
boolean b319_42 = (buffer[i + 319] == '4');
boolean b319_43 = (buffer[i + 319] == 'D');
boolean b319_44 = (buffer[i + 319] == 'z');
boolean b320_1 = (buffer[i + 320] == 'a');
boolean b320_2 = (buffer[i + 320] == ' ');
boolean b320_3 = (buffer[i + 320] == '|');
boolean b320_4 = (buffer[i + 320] == '0');
boolean b320_5 = (buffer[i + 320] == 'B');
boolean b320_6 = (buffer[i + 320] == '1');
boolean b320_7 = (buffer[i + 320] == '9');
boolean b320_8 = (buffer[i + 320] == 'D');
boolean b320_9 = (buffer[i + 320] == '2');
boolean b320_10 = (buffer[i + 320] == 'A');
boolean b320_11 = (buffer[i + 320] == 'O');
boolean b320_12 = (buffer[i + 320] == 'G');
boolean b320_13 = (buffer[i + 320] == '8');
boolean b320_14 = (buffer[i + 320] == 'C');
boolean b320_15 = (buffer[i + 320] == 'o');
boolean b320_16 = (buffer[i + 320] == 'd');
boolean b320_17 = (buffer[i + 320] == 's');
boolean b320_18 = (buffer[i + 320] == '/');
boolean b320_19 = (buffer[i + 320] == 'F');
boolean b320_20 = (buffer[i + 320] == '.');
boolean b320_21 = (buffer[i + 320] == 'm');
boolean b320_22 = (buffer[i + 320] == 'y');
boolean b320_23 = (buffer[i + 320] == 'r');
boolean b320_24 = (buffer[i + 320] == 'b');
boolean b320_25 = (buffer[i + 320] == '_');
boolean b320_26 = (buffer[i + 320] == 'l');
boolean b320_27 = (buffer[i + 320] == 'e');
boolean b320_28 = (buffer[i + 320] == 'S');
boolean b320_29 = (buffer[i + 320] == '7');
boolean b320_30 = (buffer[i + 320] == 'p');
boolean b320_31 = (buffer[i + 320] == 't');
boolean b320_32 = (buffer[i + 320] == 'c');
boolean b320_33 = (buffer[i + 320] == '3');
boolean b320_34 = (buffer[i + 320] == 'i');
boolean b320_35 = (buffer[i + 320] == ',');
boolean b320_36 = (buffer[i + 320] == '+');
boolean b320_37 = (buffer[i + 320] == 'W');
boolean b320_38 = (buffer[i + 320] == 'g');
boolean b320_39 = (buffer[i + 320] == '#');
boolean b320_40 = (buffer[i + 320] == '-');
boolean b320_41 = (buffer[i + 320] == '5');
boolean b320_42 = (buffer[i + 320] == 'n');
boolean b320_43 = (buffer[i + 320] == 'T');
boolean b320_44 = (buffer[i + 320] == '*');
boolean b320_45 = (buffer[i + 320] == '6');
boolean b320_46 = (buffer[i + 320] == 'U');
boolean b320_47 = (buffer[i + 320] == 'E');
boolean b320_48 = (buffer[i + 320] == 'v');
boolean b320_49 = (buffer[i + 320] == '(');
boolean b321_1 = (buffer[i + 321] == 'n');
boolean b321_2 = (buffer[i + 321] == '1');
boolean b321_3 = (buffer[i + 321] == ' ');
boolean b321_4 = (buffer[i + 321] == '4');
boolean b321_5 = (buffer[i + 321] == '0');
boolean b321_6 = (buffer[i + 321] == '2');
boolean b321_7 = (buffer[i + 321] == '|');
boolean b321_8 = (buffer[i + 321] == '8');
boolean b321_9 = (buffer[i + 321] == 'B');
boolean b321_10 = (buffer[i + 321] == 'c');
boolean b321_11 = (buffer[i + 321] == 'o');
boolean b321_12 = (buffer[i + 321] == '/');
boolean b321_13 = (buffer[i + 321] == 'g');
boolean b321_14 = (buffer[i + 321] == 'S');
boolean b321_15 = (buffer[i + 321] == 's');
boolean b321_16 = (buffer[i + 321] == 'E');
boolean b321_17 = (buffer[i + 321] == '7');
boolean b321_18 = (buffer[i + 321] == 't');
boolean b321_19 = (buffer[i + 321] == '.');
boolean b321_20 = (buffer[i + 321] == 'y');
boolean b321_21 = (buffer[i + 321] == '_');
boolean b321_22 = (buffer[i + 321] == 'd');
boolean b321_23 = (buffer[i + 321] == 'b');
boolean b321_24 = (buffer[i + 321] == 'e');
boolean b321_25 = (buffer[i + 321] == 'm');
boolean b321_26 = (buffer[i + 321] == 'r');
boolean b321_27 = (buffer[i + 321] == 'D');
boolean b321_28 = (buffer[i + 321] == '5');
boolean b321_29 = (buffer[i + 321] == 'I');
boolean b321_30 = (buffer[i + 321] == '9');
boolean b321_31 = (buffer[i + 321] == 'l');
boolean b321_32 = (buffer[i + 321] == 'a');
boolean b321_33 = (buffer[i + 321] == '=');
boolean b321_34 = (buffer[i + 321] == '3');
boolean b321_35 = (buffer[i + 321] == 'w');
boolean b321_36 = (buffer[i + 321] == '>');
boolean b321_37 = (buffer[i + 321] == '(');
boolean b321_38 = (buffer[i + 321] == 'f');
boolean b321_39 = (buffer[i + 321] == '6');
boolean b321_40 = (buffer[i + 321] == ':');
boolean b321_41 = (buffer[i + 321] == 'i');
boolean b321_42 = (buffer[i + 321] == 'T');
boolean b321_43 = (buffer[i + 321] == ')');
boolean b321_44 = (buffer[i + 321] == 'C');
boolean b321_45 = (buffer[i + 321] == 'M');
boolean b321_46 = (buffer[i + 321] == 'u');
boolean b321_47 = (buffer[i + 321] == '-');
boolean b322_1 = (buffer[i + 322] == 'y');
boolean b322_2 = (buffer[i + 322] == 'A');
boolean b322_3 = (buffer[i + 322] == '|');
boolean b322_4 = (buffer[i + 322] == '0');
boolean b322_5 = (buffer[i + 322] == '1');
boolean b322_6 = (buffer[i + 322] == '3');
boolean b322_7 = (buffer[i + 322] == '4');
boolean b322_8 = (buffer[i + 322] == 'F');
boolean b322_9 = (buffer[i + 322] == ' ');
boolean b322_10 = (buffer[i + 322] == 'C');
boolean b322_11 = (buffer[i + 322] == '9');
boolean b322_12 = (buffer[i + 322] == 's');
boolean b322_13 = (buffer[i + 322] == 'c');
boolean b322_14 = (buffer[i + 322] == 'K');
boolean b322_15 = (buffer[i + 322] == 'e');
boolean b322_16 = (buffer[i + 322] == '/');
boolean b322_17 = (buffer[i + 322] == 'i');
boolean b322_18 = (buffer[i + 322] == 'B');
boolean b322_19 = (buffer[i + 322] == 'E');
boolean b322_20 = (buffer[i + 322] == '8');
boolean b322_21 = (buffer[i + 322] == 'o');
boolean b322_22 = (buffer[i + 322] == 'w');
boolean b322_23 = (buffer[i + 322] == 'd');
boolean b322_24 = (buffer[i + 322] == 'r');
boolean b322_25 = (buffer[i + 322] == 'b');
boolean b322_26 = (buffer[i + 322] == '_');
boolean b322_27 = (buffer[i + 322] == 'm');
boolean b322_28 = (buffer[i + 322] == '.');
boolean b322_29 = (buffer[i + 322] == 'p');
boolean b322_30 = (buffer[i + 322] == '-');
boolean b322_31 = (buffer[i + 322] == 'a');
boolean b322_32 = (buffer[i + 322] == '2');
boolean b322_33 = (buffer[i + 322] == '6');
boolean b322_34 = (buffer[i + 322] == 'n');
boolean b322_35 = (buffer[i + 322] == 'l');
boolean b322_36 = (buffer[i + 322] == '5');
boolean b322_37 = (buffer[i + 322] == '(');
boolean b322_38 = (buffer[i + 322] == 't');
boolean b322_39 = (buffer[i + 322] == ')');
boolean b322_40 = (buffer[i + 322] == 'D');
boolean b322_41 = (buffer[i + 322] == ':');
boolean b322_42 = (buffer[i + 322] == 'P');
boolean b322_43 = (buffer[i + 322] == 'k');
boolean b322_44 = (buffer[i + 322] == '7');
boolean b322_45 = (buffer[i + 322] == 'N');
boolean b322_46 = (buffer[i + 322] == 'S');
boolean b323_1 = (buffer[i + 323] == 'w');
boolean b323_2 = (buffer[i + 323] == ' ');
boolean b323_3 = (buffer[i + 323] == 'C');
boolean b323_4 = (buffer[i + 323] == '0');
boolean b323_5 = (buffer[i + 323] == 'f');
boolean b323_6 = (buffer[i + 323] == '2');
boolean b323_7 = (buffer[i + 323] == 'A');
boolean b323_8 = (buffer[i + 323] == 'B');
boolean b323_9 = (buffer[i + 323] == '3');
boolean b323_10 = (buffer[i + 323] == 'D');
boolean b323_11 = (buffer[i + 323] == 's');
boolean b323_12 = (buffer[i + 323] == 'F');
boolean b323_13 = (buffer[i + 323] == '!');
boolean b323_14 = (buffer[i + 323] == '9');
boolean b323_15 = (buffer[i + 323] == '1');
boolean b323_16 = (buffer[i + 323] == '|');
boolean b323_17 = (buffer[i + 323] == '/');
boolean b323_18 = (buffer[i + 323] == 'n');
boolean b323_19 = (buffer[i + 323] == 'S');
boolean b323_20 = (buffer[i + 323] == 't');
boolean b323_21 = (buffer[i + 323] == 'r');
boolean b323_22 = (buffer[i + 323] == 'H');
boolean b323_23 = (buffer[i + 323] == '5');
boolean b323_24 = (buffer[i + 323] == 'c');
boolean b323_25 = (buffer[i + 323] == 'E');
boolean b323_26 = (buffer[i + 323] == 'a');
boolean b323_27 = (buffer[i + 323] == '.');
boolean b323_28 = (buffer[i + 323] == 'b');
boolean b323_29 = (buffer[i + 323] == 'e');
boolean b323_30 = (buffer[i + 323] == 'm');
boolean b323_31 = (buffer[i + 323] == 'd');
boolean b323_32 = (buffer[i + 323] == 'y');
boolean b323_33 = (buffer[i + 323] == '_');
boolean b323_34 = (buffer[i + 323] == 'p');
boolean b323_35 = (buffer[i + 323] == 'l');
boolean b323_36 = (buffer[i + 323] == 'M');
boolean b323_37 = (buffer[i + 323] == '=');
boolean b323_38 = (buffer[i + 323] == 'i');
boolean b323_39 = (buffer[i + 323] == 'o');
boolean b323_40 = (buffer[i + 323] == 'G');
boolean b323_41 = (buffer[i + 323] == '7');
boolean b323_42 = (buffer[i + 323] == '8');
boolean b323_43 = (buffer[i + 323] == '4');
boolean b323_44 = (buffer[i + 323] == 'I');
boolean b323_45 = (buffer[i + 323] == '6');
boolean b323_46 = (buffer[i + 323] == 'j');
boolean b323_47 = (buffer[i + 323] == 'g');
boolean b324_1 = (buffer[i + 324] == 'a');
boolean b324_2 = (buffer[i + 324] == 'C');
boolean b324_3 = (buffer[i + 324] == '3');
boolean b324_4 = (buffer[i + 324] == '0');
boolean b324_5 = (buffer[i + 324] == ' ');
boolean b324_6 = (buffer[i + 324] == '|');
boolean b324_7 = (buffer[i + 324] == 'r');
boolean b324_8 = (buffer[i + 324] == 'E');
boolean b324_9 = (buffer[i + 324] == 't');
boolean b324_10 = (buffer[i + 324] == 'p');
boolean b324_11 = (buffer[i + 324] == 'l');
boolean b324_12 = (buffer[i + 324] == '_');
boolean b324_13 = (buffer[i + 324] == 'c');
boolean b324_14 = (buffer[i + 324] == '9');
boolean b324_15 = (buffer[i + 324] == '/');
boolean b324_16 = (buffer[i + 324] == 'e');
boolean b324_17 = (buffer[i + 324] == 'i');
boolean b324_18 = (buffer[i + 324] == 'o');
boolean b324_19 = (buffer[i + 324] == 'M');
boolean b324_20 = (buffer[i + 324] == 'v');
boolean b324_21 = (buffer[i + 324] == 'A');
boolean b324_22 = (buffer[i + 324] == 'F');
boolean b324_23 = (buffer[i + 324] == '2');
boolean b324_24 = (buffer[i + 324] == 'd');
boolean b324_25 = (buffer[i + 324] == '.');
boolean b324_26 = (buffer[i + 324] == 'm');
boolean b324_27 = (buffer[i + 324] == 's');
boolean b324_28 = (buffer[i + 324] == 'y');
boolean b324_29 = (buffer[i + 324] == 'b');
boolean b324_30 = (buffer[i + 324] == 'g');
boolean b324_31 = (buffer[i + 324] == '<');
boolean b324_32 = (buffer[i + 324] == 'S');
boolean b324_33 = (buffer[i + 324] == 'u');
boolean b324_34 = (buffer[i + 324] == 'U');
boolean b324_35 = (buffer[i + 324] == 'n');
boolean b324_36 = (buffer[i + 324] == '-');
boolean b324_37 = (buffer[i + 324] == 'W');
boolean b324_38 = (buffer[i + 324] == 'w');
boolean b324_39 = (buffer[i + 324] == 'D');
boolean b324_40 = (buffer[i + 324] == ')');
boolean b324_41 = (buffer[i + 324] == 'G');
boolean b324_42 = (buffer[i + 324] == 'B');
boolean b324_43 = (buffer[i + 324] == '1');
boolean b324_44 = (buffer[i + 324] == '4');
boolean b324_45 = (buffer[i + 324] == 'H');
boolean b324_46 = (buffer[i + 324] == 'T');
boolean b325_1 = (buffer[i + 325] == 'y');
boolean b325_2 = (buffer[i + 325] == '|');
boolean b325_3 = (buffer[i + 325] == '0');
boolean b325_4 = (buffer[i + 325] == ' ');
boolean b325_5 = (buffer[i + 325] == 'B');
boolean b325_6 = (buffer[i + 325] == 'o');
boolean b325_7 = (buffer[i + 325] == '1');
boolean b325_8 = (buffer[i + 325] == 'C');
boolean b325_9 = (buffer[i + 325] == 't');
boolean b325_10 = (buffer[i + 325] == 'A');
boolean b325_11 = (buffer[i + 325] == '3');
boolean b325_12 = (buffer[i + 325] == '8');
boolean b325_13 = (buffer[i + 325] == 'F');
boolean b325_14 = (buffer[i + 325] == '9');
boolean b325_15 = (buffer[i + 325] == 'c');
boolean b325_16 = (buffer[i + 325] == 'x');
boolean b325_17 = (buffer[i + 325] == 'e');
boolean b325_18 = (buffer[i + 325] == 'i');
boolean b325_19 = (buffer[i + 325] == 'w');
boolean b325_20 = (buffer[i + 325] == 's');
boolean b325_21 = (buffer[i + 325] == 'l');
boolean b325_22 = (buffer[i + 325] == 'r');
boolean b325_23 = (buffer[i + 325] == '/');
boolean b325_24 = (buffer[i + 325] == 'p');
boolean b325_25 = (buffer[i + 325] == 'n');
boolean b325_26 = (buffer[i + 325] == 'b');
boolean b325_27 = (buffer[i + 325] == 'd');
boolean b325_28 = (buffer[i + 325] == '_');
boolean b325_29 = (buffer[i + 325] == 'f');
boolean b325_30 = (buffer[i + 325] == '.');
boolean b325_31 = (buffer[i + 325] == 'a');
boolean b325_32 = (buffer[i + 325] == 'm');
boolean b325_33 = (buffer[i + 325] == '2');
boolean b325_34 = (buffer[i + 325] == 'h');
boolean b325_35 = (buffer[i + 325] == 'I');
boolean b325_36 = (buffer[i + 325] == 'T');
boolean b325_37 = (buffer[i + 325] == '-');
boolean b325_38 = (buffer[i + 325] == ',');
boolean b325_39 = (buffer[i + 325] == '{');
boolean b325_40 = (buffer[i + 325] == '?');
boolean b325_41 = (buffer[i + 325] == 'D');
boolean b325_42 = (buffer[i + 325] == 'z');
boolean b325_43 = (buffer[i + 325] == '=');
boolean b325_44 = (buffer[i + 325] == ':');
boolean b325_45 = (buffer[i + 325] == 'H');
boolean b325_46 = (buffer[i + 325] == '5');
boolean b325_47 = (buffer[i + 325] == '4');
boolean b325_48 = (buffer[i + 325] == '6');
boolean b325_49 = (buffer[i + 325] == 'g');
boolean b325_50 = (buffer[i + 325] == 'E');
boolean b326_1 = (buffer[i + 326] == 'w');
boolean b326_2 = (buffer[i + 326] == '8');
boolean b326_3 = (buffer[i + 326] == ' ');
boolean b326_4 = (buffer[i + 326] == 'C');
boolean b326_5 = (buffer[i + 326] == 'F');
boolean b326_6 = (buffer[i + 326] == '1');
boolean b326_7 = (buffer[i + 326] == '4');
boolean b326_8 = (buffer[i + 326] == 'm');
boolean b326_9 = (buffer[i + 326] == '^');
boolean b326_10 = (buffer[i + 326] == '3');
boolean b326_11 = (buffer[i + 326] == 'B');
boolean b326_12 = (buffer[i + 326] == '0');
boolean b326_13 = (buffer[i + 326] == 'D');
boolean b326_14 = (buffer[i + 326] == 'a');
boolean b326_15 = (buffer[i + 326] == 'A');
boolean b326_16 = (buffer[i + 326] == '2');
boolean b326_17 = (buffer[i + 326] == '6');
boolean b326_18 = (buffer[i + 326] == '@');
boolean b326_19 = (buffer[i + 326] == 'r');
boolean b326_20 = (buffer[i + 326] == '|');
boolean b326_21 = (buffer[i + 326] == '9');
boolean b326_22 = (buffer[i + 326] == 'f');
boolean b326_23 = (buffer[i + 326] == 'x');
boolean b326_24 = (buffer[i + 326] == 's');
boolean b326_25 = (buffer[i + 326] == 'l');
boolean b326_26 = (buffer[i + 326] == 'e');
boolean b326_27 = (buffer[i + 326] == '/');
boolean b326_28 = (buffer[i + 326] == 'I');
boolean b326_29 = (buffer[i + 326] == 'i');
boolean b326_30 = (buffer[i + 326] == 't');
boolean b326_31 = (buffer[i + 326] == 'p');
boolean b326_32 = (buffer[i + 326] == 'b');
boolean b326_33 = (buffer[i + 326] == 'y');
boolean b326_34 = (buffer[i + 326] == '_');
boolean b326_35 = (buffer[i + 326] == 'd');
boolean b326_36 = (buffer[i + 326] == '.');
boolean b326_37 = (buffer[i + 326] == 'q');
boolean b326_38 = (buffer[i + 326] == 'c');
boolean b326_39 = (buffer[i + 326] == 'n');
boolean b326_40 = (buffer[i + 326] == 'E');
boolean b326_41 = (buffer[i + 326] == 'o');
boolean b326_42 = (buffer[i + 326] == 'k');
boolean b326_43 = (buffer[i + 326] == 'h');
boolean b326_44 = (buffer[i + 326] == 'H');
boolean b326_45 = (buffer[i + 326] == '7');
boolean b326_46 = (buffer[i + 326] == 'g');
boolean b326_47 = (buffer[i + 326] == '5');
boolean b327_1 = (buffer[i + 327] == 'h');
boolean b327_2 = (buffer[i + 327] == '9');
boolean b327_3 = (buffer[i + 327] == '|');
boolean b327_4 = (buffer[i + 327] == '0');
boolean b327_5 = (buffer[i + 327] == 'E');
boolean b327_6 = (buffer[i + 327] == ' ');
boolean b327_7 = (buffer[i + 327] == 'F');
boolean b327_8 = (buffer[i + 327] == '1');
boolean b327_9 = (buffer[i + 327] == 'o');
boolean b327_10 = (buffer[i + 327] == 'D');
boolean b327_11 = (buffer[i + 327] == 'd');
boolean b327_12 = (buffer[i + 327] == 'm');
boolean b327_13 = (buffer[i + 327] == 'a');
boolean b327_14 = (buffer[i + 327] == '/');
boolean b327_15 = (buffer[i + 327] == 's');
boolean b327_16 = (buffer[i + 327] == 'e');
boolean b327_17 = (buffer[i + 327] == 'b');
boolean b327_18 = (buffer[i + 327] == 'S');
boolean b327_19 = (buffer[i + 327] == 't');
boolean b327_20 = (buffer[i + 327] == 'f');
boolean b327_21 = (buffer[i + 327] == 'A');
boolean b327_22 = (buffer[i + 327] == 'C');
boolean b327_23 = (buffer[i + 327] == 'q');
boolean b327_24 = (buffer[i + 327] == '3');
boolean b327_25 = (buffer[i + 327] == 'n');
boolean b327_26 = (buffer[i + 327] == 'l');
boolean b327_27 = (buffer[i + 327] == 'r');
boolean b327_28 = (buffer[i + 327] == '.');
boolean b327_29 = (buffer[i + 327] == 'i');
boolean b327_30 = (buffer[i + 327] == '_');
boolean b327_31 = (buffer[i + 327] == 'p');
boolean b327_32 = (buffer[i + 327] == 'c');
boolean b327_33 = (buffer[i + 327] == 'y');
boolean b327_34 = (buffer[i + 327] == ':');
boolean b327_35 = (buffer[i + 327] == '5');
boolean b327_36 = (buffer[i + 327] == '6');
boolean b327_37 = (buffer[i + 327] == '2');
boolean b327_38 = (buffer[i + 327] == 'B');
boolean b327_39 = (buffer[i + 327] == 'R');
boolean b327_40 = (buffer[i + 327] == 'v');
boolean b327_41 = (buffer[i + 327] == '+');
boolean b327_42 = (buffer[i + 327] == 'k');
boolean b327_43 = (buffer[i + 327] == 'H');
boolean b327_44 = (buffer[i + 327] == 'W');
boolean b327_45 = (buffer[i + 327] == '7');
boolean b327_46 = (buffer[i + 327] == 'L');
boolean b327_47 = (buffer[i + 327] == ')');
boolean b327_48 = (buffer[i + 327] == 'U');
boolean b327_49 = (buffer[i + 327] == 'T');
boolean b327_50 = (buffer[i + 327] == 'M');
boolean b327_51 = (buffer[i + 327] == 'g');
boolean b328_1 = (buffer[i + 328] == '2');
boolean b328_2 = (buffer[i + 328] == 'o');
boolean b328_3 = (buffer[i + 328] == '1');
boolean b328_4 = (buffer[i + 328] == ' ');
boolean b328_5 = (buffer[i + 328] == 'E');
boolean b328_6 = (buffer[i + 328] == 'F');
boolean b328_7 = (buffer[i + 328] == '^');
boolean b328_8 = (buffer[i + 328] == 'V');
boolean b328_9 = (buffer[i + 328] == '0');
boolean b328_10 = (buffer[i + 328] == '!');
boolean b328_11 = (buffer[i + 328] == '3');
boolean b328_12 = (buffer[i + 328] == '|');
boolean b328_13 = (buffer[i + 328] == 'B');
boolean b328_14 = (buffer[i + 328] == 'A');
boolean b328_15 = (buffer[i + 328] == '8');
boolean b328_16 = (buffer[i + 328] == '9');
boolean b328_17 = (buffer[i + 328] == 'p');
boolean b328_18 = (buffer[i + 328] == '/');
boolean b328_19 = (buffer[i + 328] == 'm');
boolean b328_20 = (buffer[i + 328] == 'c');
boolean b328_21 = (buffer[i + 328] == 'a');
boolean b328_22 = (buffer[i + 328] == 'i');
boolean b328_23 = (buffer[i + 328] == 'd');
boolean b328_24 = (buffer[i + 328] == 'e');
boolean b328_25 = (buffer[i + 328] == '%');
boolean b328_26 = (buffer[i + 328] == 'O');
boolean b328_27 = (buffer[i + 328] == 'u');
boolean b328_28 = (buffer[i + 328] == 'S');
boolean b328_29 = (buffer[i + 328] == 'r');
boolean b328_30 = (buffer[i + 328] == 't');
boolean b328_31 = (buffer[i + 328] == 'g');
boolean b328_32 = (buffer[i + 328] == '_');
boolean b328_33 = (buffer[i + 328] == 's');
boolean b328_34 = (buffer[i + 328] == '.');
boolean b328_35 = (buffer[i + 328] == 'n');
boolean b328_36 = (buffer[i + 328] == 'y');
boolean b328_37 = (buffer[i + 328] == 'b');
boolean b328_38 = (buffer[i + 328] == 'l');
boolean b328_39 = (buffer[i + 328] == 'D');
boolean b328_40 = (buffer[i + 328] == 'U');
boolean b328_41 = (buffer[i + 328] == 'H');
boolean b328_42 = (buffer[i + 328] == '-');
boolean b328_43 = (buffer[i + 328] == '6');
boolean b328_44 = (buffer[i + 328] == 'h');
boolean b328_45 = (buffer[i + 328] == 'f');
boolean b328_46 = (buffer[i + 328] == 'C');
boolean b328_47 = (buffer[i + 328] == 'M');
boolean b328_48 = (buffer[i + 328] == ',');
boolean b328_49 = (buffer[i + 328] == 'v');
boolean b328_50 = (buffer[i + 328] == '?');
boolean b328_51 = (buffer[i + 328] == 'k');
boolean b328_52 = (buffer[i + 328] == '4');
boolean b328_53 = (buffer[i + 328] == 'R');
boolean b328_54 = (buffer[i + 328] == 'T');
boolean b328_55 = (buffer[i + 328] == '7');
boolean b329_1 = (buffer[i + 329] == '|');
boolean b329_2 = (buffer[i + 329] == 'c');
boolean b329_3 = (buffer[i + 329] == '1');
boolean b329_4 = (buffer[i + 329] == 'F');
boolean b329_5 = (buffer[i + 329] == 'B');
boolean b329_6 = (buffer[i + 329] == ' ');
boolean b329_7 = (buffer[i + 329] == 'C');
boolean b329_8 = (buffer[i + 329] == '0');
boolean b329_9 = (buffer[i + 329] == 'A');
boolean b329_10 = (buffer[i + 329] == 'E');
boolean b329_11 = (buffer[i + 329] == '4');
boolean b329_12 = (buffer[i + 329] == '5');
boolean b329_13 = (buffer[i + 329] == '7');
boolean b329_14 = (buffer[i + 329] == '2');
boolean b329_15 = (buffer[i + 329] == '3');
boolean b329_16 = (buffer[i + 329] == '6');
boolean b329_17 = (buffer[i + 329] == 't');
boolean b329_18 = (buffer[i + 329] == 'a');
boolean b329_19 = (buffer[i + 329] == 'e');
boolean b329_20 = (buffer[i + 329] == 'm');
boolean b329_21 = (buffer[i + 329] == 's');
boolean b329_22 = (buffer[i + 329] == 'l');
boolean b329_23 = (buffer[i + 329] == 'p');
boolean b329_24 = (buffer[i + 329] == 'f');
boolean b329_25 = (buffer[i + 329] == '/');
boolean b329_26 = (buffer[i + 329] == 'i');
boolean b329_27 = (buffer[i + 329] == 'g');
boolean b329_28 = (buffer[i + 329] == 'r');
boolean b329_29 = (buffer[i + 329] == 'S');
boolean b329_30 = (buffer[i + 329] == 'P');
boolean b329_31 = (buffer[i + 329] == '.');
boolean b329_32 = (buffer[i + 329] == 'o');
boolean b329_33 = (buffer[i + 329] == 'n');
boolean b329_34 = (buffer[i + 329] == '8');
boolean b329_35 = (buffer[i + 329] == '_');
boolean b329_36 = (buffer[i + 329] == 'd');
boolean b329_37 = (buffer[i + 329] == 'b');
boolean b329_38 = (buffer[i + 329] == 'y');
boolean b329_39 = (buffer[i + 329] == 'x');
boolean b329_40 = (buffer[i + 329] == '>');
boolean b329_41 = (buffer[i + 329] == 'h');
boolean b329_42 = (buffer[i + 329] == 'q');
boolean b329_43 = (buffer[i + 329] == ':');
boolean b329_44 = (buffer[i + 329] == 'w');
boolean b329_45 = (buffer[i + 329] == 'W');
boolean b329_46 = (buffer[i + 329] == ',');
boolean b329_47 = (buffer[i + 329] == 'H');
boolean b329_48 = (buffer[i + 329] == 'v');
boolean b329_49 = (buffer[i + 329] == 'D');
boolean b329_50 = (buffer[i + 329] == 'R');
boolean b329_51 = (buffer[i + 329] == 'M');
boolean b329_52 = (buffer[i + 329] == '9');
boolean b329_53 = (buffer[i + 329] == 'G');
boolean b329_54 = (buffer[i + 329] == 'z');
boolean b329_55 = (buffer[i + 329] == '(');
boolean b329_56 = (buffer[i + 329] == 'U');
boolean b329_57 = (buffer[i + 329] == '@');
boolean b330_1 = (buffer[i + 330] == '0');
boolean b330_2 = (buffer[i + 330] == 'a');
boolean b330_3 = (buffer[i + 330] == 'C');
boolean b330_4 = (buffer[i + 330] == '|');
boolean b330_5 = (buffer[i + 330] == '7');
boolean b330_6 = (buffer[i + 330] == '9');
boolean b330_7 = (buffer[i + 330] == '1');
boolean b330_8 = (buffer[i + 330] == ' ');
boolean b330_9 = (buffer[i + 330] == '8');
boolean b330_10 = (buffer[i + 330] == 'B');
boolean b330_11 = (buffer[i + 330] == 'E');
boolean b330_12 = (buffer[i + 330] == '%');
boolean b330_13 = (buffer[i + 330] == '4');
boolean b330_14 = (buffer[i + 330] == 's');
boolean b330_15 = (buffer[i + 330] == 'e');
boolean b330_16 = (buffer[i + 330] == 'f');
boolean b330_17 = (buffer[i + 330] == 'l');
boolean b330_18 = (buffer[i + 330] == 'd');
boolean b330_19 = (buffer[i + 330] == 'c');
boolean b330_20 = (buffer[i + 330] == '/');
boolean b330_21 = (buffer[i + 330] == 'p');
boolean b330_22 = (buffer[i + 330] == 'S');
boolean b330_23 = (buffer[i + 330] == 'o');
boolean b330_24 = (buffer[i + 330] == 'W');
boolean b330_25 = (buffer[i + 330] == 'F');
boolean b330_26 = (buffer[i + 330] == 'x');
boolean b330_27 = (buffer[i + 330] == '6');
boolean b330_28 = (buffer[i + 330] == 'r');
boolean b330_29 = (buffer[i + 330] == 'A');
boolean b330_30 = (buffer[i + 330] == 'R');
boolean b330_31 = (buffer[i + 330] == 'i');
boolean b330_32 = (buffer[i + 330] == 't');
boolean b330_33 = (buffer[i + 330] == 'n');
boolean b330_34 = (buffer[i + 330] == '3');
boolean b330_35 = (buffer[i + 330] == 'v');
boolean b330_36 = (buffer[i + 330] == 'b');
boolean b330_37 = (buffer[i + 330] == 'm');
boolean b330_38 = (buffer[i + 330] == 'u');
boolean b330_39 = (buffer[i + 330] == 'y');
boolean b330_40 = (buffer[i + 330] == '.');
boolean b330_41 = (buffer[i + 330] == '_');
boolean b330_42 = (buffer[i + 330] == 'w');
boolean b330_43 = (buffer[i + 330] == '5');
boolean b330_44 = (buffer[i + 330] == '<');
boolean b330_45 = (buffer[i + 330] == '-');
boolean b330_46 = (buffer[i + 330] == '2');
boolean b330_47 = (buffer[i + 330] == '=');
boolean b330_48 = (buffer[i + 330] == 'g');
boolean b330_49 = (buffer[i + 330] == 'T');
boolean b330_50 = (buffer[i + 330] == ':');
boolean b330_51 = (buffer[i + 330] == 'z');
boolean b330_52 = (buffer[i + 330] == 'M');
boolean b330_53 = (buffer[i + 330] == 'h');
boolean b330_54 = (buffer[i + 330] == 'k');
boolean b330_55 = (buffer[i + 330] == 'U');
boolean b331_1 = (buffer[i + 331] == '0');
boolean b331_2 = (buffer[i + 331] == 'r');
boolean b331_3 = (buffer[i + 331] == 'C');
boolean b331_4 = (buffer[i + 331] == ' ');
boolean b331_5 = (buffer[i + 331] == 'n');
boolean b331_6 = (buffer[i + 331] == 'E');
boolean b331_7 = (buffer[i + 331] == 'h');
boolean b331_8 = (buffer[i + 331] == 'D');
boolean b331_9 = (buffer[i + 331] == '|');
boolean b331_10 = (buffer[i + 331] == 'B');
boolean b331_11 = (buffer[i + 331] == '9');
boolean b331_12 = (buffer[i + 331] == '1');
boolean b331_13 = (buffer[i + 331] == 'A');
boolean b331_14 = (buffer[i + 331] == '3');
boolean b331_15 = (buffer[i + 331] == 'O');
boolean b331_16 = (buffer[i + 331] == 'G');
boolean b331_17 = (buffer[i + 331] == '8');
boolean b331_18 = (buffer[i + 331] == '/');
boolean b331_19 = (buffer[i + 331] == 'a');
boolean b331_20 = (buffer[i + 331] == 'd');
boolean b331_21 = (buffer[i + 331] == 'e');
boolean b331_22 = (buffer[i + 331] == 'o');
boolean b331_23 = (buffer[i + 331] == 'F');
boolean b331_24 = (buffer[i + 331] == 'f');
boolean b331_25 = (buffer[i + 331] == 's');
boolean b331_26 = (buffer[i + 331] == 'l');
boolean b331_27 = (buffer[i + 331] == 'v');
boolean b331_28 = (buffer[i + 331] == 'i');
boolean b331_29 = (buffer[i + 331] == 'm');
boolean b331_30 = (buffer[i + 331] == 'c');
boolean b331_31 = (buffer[i + 331] == 't');
boolean b331_32 = (buffer[i + 331] == 'w');
boolean b331_33 = (buffer[i + 331] == '4');
boolean b331_34 = (buffer[i + 331] == 'p');
boolean b331_35 = (buffer[i + 331] == 'b');
boolean b331_36 = (buffer[i + 331] == 'g');
boolean b331_37 = (buffer[i + 331] == '_');
boolean b331_38 = (buffer[i + 331] == '.');
boolean b331_39 = (buffer[i + 331] == 'y');
boolean b331_40 = (buffer[i + 331] == '5');
boolean b331_41 = (buffer[i + 331] == 'j');
boolean b331_42 = (buffer[i + 331] == '2');
boolean b331_43 = (buffer[i + 331] == 'U');
boolean b331_44 = (buffer[i + 331] == 'H');
boolean b331_45 = (buffer[i + 331] == 'T');
boolean b331_46 = (buffer[i + 331] == 'S');
boolean b331_47 = (buffer[i + 331] == ':');
boolean b331_48 = (buffer[i + 331] == 'u');
boolean b331_49 = (buffer[i + 331] == '-');
boolean b331_50 = (buffer[i + 331] == '7');
boolean b331_51 = (buffer[i + 331] == '6');
boolean b331_52 = (buffer[i + 331] == 'z');
boolean b331_53 = (buffer[i + 331] == 'I');
boolean b331_54 = (buffer[i + 331] == 'q');
boolean b332_1 = (buffer[i + 332] == ' ');
boolean b332_2 = (buffer[i + 332] == 'e');
boolean b332_3 = (buffer[i + 332] == '0');
boolean b332_4 = (buffer[i + 332] == '2');
boolean b332_5 = (buffer[i + 332] == '^');
boolean b332_6 = (buffer[i + 332] == '1');
boolean b332_7 = (buffer[i + 332] == '|');
boolean b332_8 = (buffer[i + 332] == ']');
boolean b332_9 = (buffer[i + 332] == '8');
boolean b332_10 = (buffer[i + 332] == 'E');
boolean b332_11 = (buffer[i + 332] == 'C');
boolean b332_12 = (buffer[i + 332] == 'B');
boolean b332_13 = (buffer[i + 332] == '3');
boolean b332_14 = (buffer[i + 332] == '5');
boolean b332_15 = (buffer[i + 332] == 'D');
boolean b332_16 = (buffer[i + 332] == '6');
boolean b332_17 = (buffer[i + 332] == 'A');
boolean b332_18 = (buffer[i + 332] == '9');
boolean b332_19 = (buffer[i + 332] == 'p');
boolean b332_20 = (buffer[i + 332] == 'o');
boolean b332_21 = (buffer[i + 332] == 'a');
boolean b332_22 = (buffer[i + 332] == 'c');
boolean b332_23 = (buffer[i + 332] == 'U');
boolean b332_24 = (buffer[i + 332] == 'i');
boolean b332_25 = (buffer[i + 332] == 'w');
boolean b332_26 = (buffer[i + 332] == 't');
boolean b332_27 = (buffer[i + 332] == 'M');
boolean b332_28 = (buffer[i + 332] == 'r');
boolean b332_29 = (buffer[i + 332] == '.');
boolean b332_30 = (buffer[i + 332] == 'F');
boolean b332_31 = (buffer[i + 332] == 'b');
boolean b332_32 = (buffer[i + 332] == '7');
boolean b332_33 = (buffer[i + 332] == '/');
boolean b332_34 = (buffer[i + 332] == 'l');
boolean b332_35 = (buffer[i + 332] == 'n');
boolean b332_36 = (buffer[i + 332] == 'v');
boolean b332_37 = (buffer[i + 332] == 'S');
boolean b332_38 = (buffer[i + 332] == 's');
boolean b332_39 = (buffer[i + 332] == 'd');
boolean b332_40 = (buffer[i + 332] == 'y');
boolean b332_41 = (buffer[i + 332] == 'm');
boolean b332_42 = (buffer[i + 332] == '_');
boolean b332_43 = (buffer[i + 332] == 'q');
boolean b332_44 = (buffer[i + 332] == 'f');
boolean b332_45 = (buffer[i + 332] == 'u');
boolean b332_46 = (buffer[i + 332] == 'V');
boolean b332_47 = (buffer[i + 332] == '-');
boolean b332_48 = (buffer[i + 332] == 'W');
boolean b332_49 = (buffer[i + 332] == 'I');
boolean b332_50 = (buffer[i + 332] == 'N');
boolean b332_51 = (buffer[i + 332] == '<');
boolean b332_52 = (buffer[i + 332] == 'R');
boolean b332_53 = (buffer[i + 332] == 'T');
boolean b332_54 = (buffer[i + 332] == 'x');
boolean b332_55 = (buffer[i + 332] == 'P');
boolean b332_56 = (buffer[i + 332] == 'h');
boolean b332_57 = (buffer[i + 332] == 'H');
boolean b332_58 = (buffer[i + 332] == '4');
boolean b332_59 = (buffer[i + 332] == 'k');
boolean b333_1 = (buffer[i + 333] == '0');
boolean b333_2 = (buffer[i + 333] == '|');
boolean b333_3 = (buffer[i + 333] == 's');
boolean b333_4 = (buffer[i + 333] == 'B');
boolean b333_5 = (buffer[i + 333] == ' ');
boolean b333_6 = (buffer[i + 333] == '9');
boolean b333_7 = (buffer[i + 333] == '1');
boolean b333_8 = (buffer[i + 333] == '^');
boolean b333_9 = (buffer[i + 333] == 'D');
boolean b333_10 = (buffer[i + 333] == 'C');
boolean b333_11 = (buffer[i + 333] == '7');
boolean b333_12 = (buffer[i + 333] == '@');
boolean b333_13 = (buffer[i + 333] == 'p');
boolean b333_14 = (buffer[i + 333] == 'N');
boolean b333_15 = (buffer[i + 333] == '3');
boolean b333_16 = (buffer[i + 333] == '4');
boolean b333_17 = (buffer[i + 333] == 'F');
boolean b333_18 = (buffer[i + 333] == 'M');
boolean b333_19 = (buffer[i + 333] == 'x');
boolean b333_20 = (buffer[i + 333] == 'c');
boolean b333_21 = (buffer[i + 333] == '/');
boolean b333_22 = (buffer[i + 333] == 'f');
boolean b333_23 = (buffer[i + 333] == 'S');
boolean b333_24 = (buffer[i + 333] == 'd');
boolean b333_25 = (buffer[i + 333] == 'r');
boolean b333_26 = (buffer[i + 333] == 'm');
boolean b333_27 = (buffer[i + 333] == 'o');
boolean b333_28 = (buffer[i + 333] == 'e');
boolean b333_29 = (buffer[i + 333] == 'l');
boolean b333_30 = (buffer[i + 333] == 'i');
boolean b333_31 = (buffer[i + 333] == 'u');
boolean b333_32 = (buffer[i + 333] == 'U');
boolean b333_33 = (buffer[i + 333] == 't');
boolean b333_34 = (buffer[i + 333] == 'A');
boolean b333_35 = (buffer[i + 333] == '8');
boolean b333_36 = (buffer[i + 333] == 'a');
boolean b333_37 = (buffer[i + 333] == '*');
boolean b333_38 = (buffer[i + 333] == 'E');
boolean b333_39 = (buffer[i + 333] == 'b');
boolean b333_40 = (buffer[i + 333] == '_');
boolean b333_41 = (buffer[i + 333] == 'n');
boolean b333_42 = (buffer[i + 333] == 'q');
boolean b333_43 = (buffer[i + 333] == '.');
boolean b333_44 = (buffer[i + 333] == '%');
boolean b333_45 = (buffer[i + 333] == '2');
boolean b333_46 = (buffer[i + 333] == 'h');
boolean b333_47 = (buffer[i + 333] == 'T');
boolean b333_48 = (buffer[i + 333] == 'g');
boolean b333_49 = (buffer[i + 333] == 'w');
boolean b333_50 = (buffer[i + 333] == '=');
boolean b333_51 = (buffer[i + 333] == '-');
boolean b333_52 = (buffer[i + 333] == '5');
boolean b333_53 = (buffer[i + 333] == ':');
boolean b333_54 = (buffer[i + 333] == 'H');
boolean b333_55 = (buffer[i + 333] == '6');
boolean b333_56 = (buffer[i + 333] == 'W');
boolean b334_1 = (buffer[i + 334] == '0');
boolean b334_2 = (buffer[i + 334] == '8');
boolean b334_3 = (buffer[i + 334] == 'h');
boolean b334_4 = (buffer[i + 334] == 'B');
boolean b334_5 = (buffer[i + 334] == ' ');
boolean b334_6 = (buffer[i + 334] == 'C');
boolean b334_7 = (buffer[i + 334] == '2');
boolean b334_8 = (buffer[i + 334] == '|');
boolean b334_9 = (buffer[i + 334] == '@');
boolean b334_10 = (buffer[i + 334] == 'K');
boolean b334_11 = (buffer[i + 334] == '9');
boolean b334_12 = (buffer[i + 334] == 'E');
boolean b334_13 = (buffer[i + 334] == '^');
boolean b334_14 = (buffer[i + 334] == '1');
boolean b334_15 = (buffer[i + 334] == 'A');
boolean b334_16 = (buffer[i + 334] == 'c');
boolean b334_17 = (buffer[i + 334] == '3');
boolean b334_18 = (buffer[i + 334] == 'r');
boolean b334_19 = (buffer[i + 334] == 'F');
boolean b334_20 = (buffer[i + 334] == '!');
boolean b334_21 = (buffer[i + 334] == 's');
boolean b334_22 = (buffer[i + 334] == 't');
boolean b334_23 = (buffer[i + 334] == 'd');
boolean b334_24 = (buffer[i + 334] == '_');
boolean b334_25 = (buffer[i + 334] == 'x');
boolean b334_26 = (buffer[i + 334] == 'p');
boolean b334_27 = (buffer[i + 334] == 'a');
boolean b334_28 = (buffer[i + 334] == '/');
boolean b334_29 = (buffer[i + 334] == 'I');
boolean b334_30 = (buffer[i + 334] == 'e');
boolean b334_31 = (buffer[i + 334] == 'i');
boolean b334_32 = (buffer[i + 334] == 'S');
boolean b334_33 = (buffer[i + 334] == 'm');
boolean b334_34 = (buffer[i + 334] == 'n');
boolean b334_35 = (buffer[i + 334] == 'o');
boolean b334_36 = (buffer[i + 334] == 'f');
boolean b334_37 = (buffer[i + 334] == 'v');
boolean b334_38 = (buffer[i + 334] == 'l');
boolean b334_39 = (buffer[i + 334] == '-');
boolean b334_40 = (buffer[i + 334] == '6');
boolean b334_41 = (buffer[i + 334] == 'g');
boolean b334_42 = (buffer[i + 334] == 'b');
boolean b334_43 = (buffer[i + 334] == 'y');
boolean b334_44 = (buffer[i + 334] == '.');
boolean b334_45 = (buffer[i + 334] == 'u');
boolean b334_46 = (buffer[i + 334] == '7');
boolean b334_47 = (buffer[i + 334] == 'U');
boolean b334_48 = (buffer[i + 334] == 'j');
boolean b334_49 = (buffer[i + 334] == 'T');
boolean b334_50 = (buffer[i + 334] == 'O');
boolean b334_51 = (buffer[i + 334] == 'P');
boolean b334_52 = (buffer[i + 334] == ',');
boolean b334_53 = (buffer[i + 334] == '5');
boolean b334_54 = (buffer[i + 334] == 'D');
boolean b334_55 = (buffer[i + 334] == '=');
boolean b334_56 = (buffer[i + 334] == 'w');
boolean b334_57 = (buffer[i + 334] == '?');
boolean b334_58 = (buffer[i + 334] == 'H');
boolean b334_59 = (buffer[i + 334] == '4');
boolean b334_60 = (buffer[i + 334] == 'W');
boolean b334_61 = (buffer[i + 334] == 'Q');
boolean b335_1 = (buffer[i + 335] == ' ');
boolean b335_2 = (buffer[i + 335] == '5');
boolean b335_3 = (buffer[i + 335] == 'o');
boolean b335_4 = (buffer[i + 335] == '|');
boolean b335_5 = (buffer[i + 335] == '0');
boolean b335_6 = (buffer[i + 335] == 'C');
boolean b335_7 = (buffer[i + 335] == '6');
boolean b335_8 = (buffer[i + 335] == '?');
boolean b335_9 = (buffer[i + 335] == 'F');
boolean b335_10 = (buffer[i + 335] == 'E');
boolean b335_11 = (buffer[i + 335] == '2');
boolean b335_12 = (buffer[i + 335] == '8');
boolean b335_13 = (buffer[i + 335] == '[');
boolean b335_14 = (buffer[i + 335] == 'B');
boolean b335_15 = (buffer[i + 335] == '9');
boolean b335_16 = (buffer[i + 335] == '1');
boolean b335_17 = (buffer[i + 335] == '7');
boolean b335_18 = (buffer[i + 335] == 'D');
boolean b335_19 = (buffer[i + 335] == 'A');
boolean b335_20 = (buffer[i + 335] == 'c');
boolean b335_21 = (buffer[i + 335] == 'l');
boolean b335_22 = (buffer[i + 335] == 'I');
boolean b335_23 = (buffer[i + 335] == 'm');
boolean b335_24 = (buffer[i + 335] == 'p');
boolean b335_25 = (buffer[i + 335] == '/');
boolean b335_26 = (buffer[i + 335] == '_');
boolean b335_27 = (buffer[i + 335] == 'f');
boolean b335_28 = (buffer[i + 335] == 'e');
boolean b335_29 = (buffer[i + 335] == 'O');
boolean b335_30 = (buffer[i + 335] == 'U');
boolean b335_31 = (buffer[i + 335] == 's');
boolean b335_32 = (buffer[i + 335] == 'k');
boolean b335_33 = (buffer[i + 335] == 'b');
boolean b335_34 = (buffer[i + 335] == 'K');
boolean b335_35 = (buffer[i + 335] == 't');
boolean b335_36 = (buffer[i + 335] == 'i');
boolean b335_37 = (buffer[i + 335] == '3');
boolean b335_38 = (buffer[i + 335] == 'd');
boolean b335_39 = (buffer[i + 335] == '+');
boolean b335_40 = (buffer[i + 335] == 'r');
boolean b335_41 = (buffer[i + 335] == 'a');
boolean b335_42 = (buffer[i + 335] == 'n');
boolean b335_43 = (buffer[i + 335] == 'R');
boolean b335_44 = (buffer[i + 335] == '.');
boolean b335_45 = (buffer[i + 335] == 'x');
boolean b335_46 = (buffer[i + 335] == 'u');
boolean b335_47 = (buffer[i + 335] == 'M');
boolean b335_48 = (buffer[i + 335] == 'z');
boolean b335_49 = (buffer[i + 335] == '>');
boolean b335_50 = (buffer[i + 335] == '4');
boolean b335_51 = (buffer[i + 335] == 'H');
boolean b335_52 = (buffer[i + 335] == '-');
boolean b335_53 = (buffer[i + 335] == '<');
boolean b335_54 = (buffer[i + 335] == 'h');
boolean b335_55 = (buffer[i + 335] == ')');
boolean b335_56 = (buffer[i + 335] == '(');
boolean b335_57 = (buffer[i + 335] == 'v');
boolean b335_58 = (buffer[i + 335] == 'N');
boolean b335_59 = (buffer[i + 335] == 'g');
boolean b335_60 = (buffer[i + 335] == 'w');
boolean b335_61 = (buffer[i + 335] == 'L');
boolean b335_62 = (buffer[i + 335] == 'S');
boolean b336_1 = (buffer[i + 336] == '0');
boolean b336_2 = (buffer[i + 336] == ' ');
boolean b336_3 = (buffer[i + 336] == 'r');
boolean b336_4 = (buffer[i + 336] == 'C');
boolean b336_5 = (buffer[i + 336] == '?');
boolean b336_6 = (buffer[i + 336] == '7');
boolean b336_7 = (buffer[i + 336] == '|');
boolean b336_8 = (buffer[i + 336] == 'F');
boolean b336_9 = (buffer[i + 336] == 'B');
boolean b336_10 = (buffer[i + 336] == '3');
boolean b336_11 = (buffer[i + 336] == 'S');
boolean b336_12 = (buffer[i + 336] == '8');
boolean b336_13 = (buffer[i + 336] == 'E');
boolean b336_14 = (buffer[i + 336] == 's');
boolean b336_15 = (buffer[i + 336] == 'o');
boolean b336_16 = (buffer[i + 336] == '9');
boolean b336_17 = (buffer[i + 336] == 'L');
boolean b336_18 = (buffer[i + 336] == 'p');
boolean b336_19 = (buffer[i + 336] == 'u');
boolean b336_20 = (buffer[i + 336] == 'e');
boolean b336_21 = (buffer[i + 336] == 'f');
boolean b336_22 = (buffer[i + 336] == 'd');
boolean b336_23 = (buffer[i + 336] == '/');
boolean b336_24 = (buffer[i + 336] == 'c');
boolean b336_25 = (buffer[i + 336] == 'x');
boolean b336_26 = (buffer[i + 336] == 'N');
boolean b336_27 = (buffer[i + 336] == 'a');
boolean b336_28 = (buffer[i + 336] == 'n');
boolean b336_29 = (buffer[i + 336] == '_');
boolean b336_30 = (buffer[i + 336] == 't');
boolean b336_31 = (buffer[i + 336] == '2');
boolean b336_32 = (buffer[i + 336] == '[');
boolean b336_33 = (buffer[i + 336] == 'i');
boolean b336_34 = (buffer[i + 336] == 'A');
boolean b336_35 = (buffer[i + 336] == '1');
boolean b336_36 = (buffer[i + 336] == 'v');
boolean b336_37 = (buffer[i + 336] == 'm');
boolean b336_38 = (buffer[i + 336] == 'y');
boolean b336_39 = (buffer[i + 336] == '-');
boolean b336_40 = (buffer[i + 336] == 'j');
boolean b336_41 = (buffer[i + 336] == 'g');
boolean b336_42 = (buffer[i + 336] == 'b');
boolean b336_43 = (buffer[i + 336] == '.');
boolean b336_44 = (buffer[i + 336] == 'l');
boolean b336_45 = (buffer[i + 336] == '<');
boolean b336_46 = (buffer[i + 336] == 'M');
boolean b336_47 = (buffer[i + 336] == 'W');
boolean b336_48 = (buffer[i + 336] == 'T');
boolean b336_49 = (buffer[i + 336] == 'z');
boolean b336_50 = (buffer[i + 336] == 'q');
boolean b336_51 = (buffer[i + 336] == ':');
boolean b336_52 = (buffer[i + 336] == '4');
boolean b336_53 = (buffer[i + 336] == '6');
boolean b336_54 = (buffer[i + 336] == '5');
boolean b336_55 = (buffer[i + 336] == 'w');
boolean b336_56 = (buffer[i + 336] == 'P');
boolean b336_57 = (buffer[i + 336] == 'Q');
boolean b336_58 = (buffer[i + 336] == 'U');
boolean b337_1 = (buffer[i + 337] == '0');
boolean b337_2 = (buffer[i + 337] == '8');
boolean b337_3 = (buffer[i + 337] == 'i');
boolean b337_4 = (buffer[i + 337] == 'D');
boolean b337_5 = (buffer[i + 337] == '1');
boolean b337_6 = (buffer[i + 337] == ' ');
boolean b337_7 = (buffer[i + 337] == '|');
boolean b337_8 = (buffer[i + 337] == 'E');
boolean b337_9 = (buffer[i + 337] == '2');
boolean b337_10 = (buffer[i + 337] == '3');
boolean b337_11 = (buffer[i + 337] == '9');
boolean b337_12 = (buffer[i + 337] == 'C');
boolean b337_13 = (buffer[i + 337] == 'F');
boolean b337_14 = (buffer[i + 337] == 'A');
boolean b337_15 = (buffer[i + 337] == 'm');
boolean b337_16 = (buffer[i + 337] == 'g');
boolean b337_17 = (buffer[i + 337] == 'B');
boolean b337_18 = (buffer[i + 337] == '4');
boolean b337_19 = (buffer[i + 337] == '@');
boolean b337_20 = (buffer[i + 337] == 'l');
boolean b337_21 = (buffer[i + 337] == 'b');
boolean b337_22 = (buffer[i + 337] == 'x');
boolean b337_23 = (buffer[i + 337] == 'u');
boolean b337_24 = (buffer[i + 337] == 'o');
boolean b337_25 = (buffer[i + 337] == 'c');
boolean b337_26 = (buffer[i + 337] == 's');
boolean b337_27 = (buffer[i + 337] == 'a');
boolean b337_28 = (buffer[i + 337] == 'f');
boolean b337_29 = (buffer[i + 337] == '_');
boolean b337_30 = (buffer[i + 337] == 'p');
boolean b337_31 = (buffer[i + 337] == 'I');
boolean b337_32 = (buffer[i + 337] == '/');
boolean b337_33 = (buffer[i + 337] == 'd');
boolean b337_34 = (buffer[i + 337] == 'v');
boolean b337_35 = (buffer[i + 337] == 'S');
boolean b337_36 = (buffer[i + 337] == 'r');
boolean b337_37 = (buffer[i + 337] == 'K');
boolean b337_38 = (buffer[i + 337] == 'y');
boolean b337_39 = (buffer[i + 337] == '%');
boolean b337_40 = (buffer[i + 337] == '-');
boolean b337_41 = (buffer[i + 337] == 't');
boolean b337_42 = (buffer[i + 337] == 'w');
boolean b337_43 = (buffer[i + 337] == 'Y');
boolean b337_44 = (buffer[i + 337] == 'e');
boolean b337_45 = (buffer[i + 337] == 'G');
boolean b337_46 = (buffer[i + 337] == 'H');
boolean b337_47 = (buffer[i + 337] == 'n');
boolean b337_48 = (buffer[i + 337] == 'q');
boolean b337_49 = (buffer[i + 337] == '.');
boolean b337_50 = (buffer[i + 337] == 'U');
boolean b337_51 = (buffer[i + 337] == 'h');
boolean b337_52 = (buffer[i + 337] == 'M');
boolean b337_53 = (buffer[i + 337] == 'k');
boolean b337_54 = (buffer[i + 337] == '=');
boolean b337_55 = (buffer[i + 337] == 'j');
boolean b337_56 = (buffer[i + 337] == '5');
boolean b337_57 = (buffer[i + 337] == '7');
boolean b337_58 = (buffer[i + 337] == '6');
boolean b337_59 = (buffer[i + 337] == ':');
boolean b337_60 = (buffer[i + 337] == 'N');
boolean b337_61 = (buffer[i + 337] == 'O');
boolean b337_62 = (buffer[i + 337] == 'R');
boolean b338_1 = (buffer[i + 338] == ' ');
boolean b338_2 = (buffer[i + 338] == '0');
boolean b338_3 = (buffer[i + 338] == 'z');
boolean b338_4 = (buffer[i + 338] == '|');
boolean b338_5 = (buffer[i + 338] == '2');
boolean b338_6 = (buffer[i + 338] == '8');
boolean b338_7 = (buffer[i + 338] == '6');
boolean b338_8 = (buffer[i + 338] == '/');
boolean b338_9 = (buffer[i + 338] == '9');
boolean b338_10 = (buffer[i + 338] == 'B');
boolean b338_11 = (buffer[i + 338] == 'D');
boolean b338_12 = (buffer[i + 338] == '^');
boolean b338_13 = (buffer[i + 338] == 'E');
boolean b338_14 = (buffer[i + 338] == '[');
boolean b338_15 = (buffer[i + 338] == 'V');
boolean b338_16 = (buffer[i + 338] == '7');
boolean b338_17 = (buffer[i + 338] == 'F');
boolean b338_18 = (buffer[i + 338] == 'G');
boolean b338_19 = (buffer[i + 338] == 'A');
boolean b338_20 = (buffer[i + 338] == 'y');
boolean b338_21 = (buffer[i + 338] == 'T');
boolean b338_22 = (buffer[i + 338] == 'i');
boolean b338_23 = (buffer[i + 338] == '1');
boolean b338_24 = (buffer[i + 338] == '3');
boolean b338_25 = (buffer[i + 338] == 'C');
boolean b338_26 = (buffer[i + 338] == 'L');
boolean b338_27 = (buffer[i + 338] == 'e');
boolean b338_28 = (buffer[i + 338] == 'l');
boolean b338_29 = (buffer[i + 338] == 'a');
boolean b338_30 = (buffer[i + 338] == 'b');
boolean b338_31 = (buffer[i + 338] == 'd');
boolean b338_32 = (buffer[i + 338] == 'c');
boolean b338_33 = (buffer[i + 338] == 'f');
boolean b338_34 = (buffer[i + 338] == 'm');
boolean b338_35 = (buffer[i + 338] == 'O');
boolean b338_36 = (buffer[i + 338] == 'p');
boolean b338_37 = (buffer[i + 338] == '_');
boolean b338_38 = (buffer[i + 338] == 't');
boolean b338_39 = (buffer[i + 338] == 'r');
boolean b338_40 = (buffer[i + 338] == 's');
boolean b338_41 = (buffer[i + 338] == 'n');
boolean b338_42 = (buffer[i + 338] == 'w');
boolean b338_43 = (buffer[i + 338] == '.');
boolean b338_44 = (buffer[i + 338] == 'o');
boolean b338_45 = (buffer[i + 338] == 'S');
boolean b338_46 = (buffer[i + 338] == 'P');
boolean b338_47 = (buffer[i + 338] == 'v');
boolean b338_48 = (buffer[i + 338] == 'u');
boolean b338_49 = (buffer[i + 338] == 'g');
boolean b338_50 = (buffer[i + 338] == 'k');
boolean b338_51 = (buffer[i + 338] == 'U');
boolean b338_52 = (buffer[i + 338] == '-');
boolean b338_53 = (buffer[i + 338] == '=');
boolean b338_54 = (buffer[i + 338] == ')');
boolean b338_55 = (buffer[i + 338] == '5');
boolean b338_56 = (buffer[i + 338] == ',');
boolean b338_57 = (buffer[i + 338] == 'h');
boolean b338_58 = (buffer[i + 338] == ':');
boolean b338_59 = (buffer[i + 338] == '*');
boolean b338_60 = (buffer[i + 338] == 'W');
boolean b338_61 = (buffer[i + 338] == 'I');
boolean b338_62 = (buffer[i + 338] == 'R');
boolean b338_63 = (buffer[i + 338] == 'x');
boolean b338_64 = (buffer[i + 338] == '4');
boolean b338_65 = (buffer[i + 338] == '@');
boolean b339_1 = (buffer[i + 339] == '0');
boolean b339_2 = (buffer[i + 339] == ' ');
boolean b339_3 = (buffer[i + 339] == 'o');
boolean b339_4 = (buffer[i + 339] == '8');
boolean b339_5 = (buffer[i + 339] == 'D');
boolean b339_6 = (buffer[i + 339] == '9');
boolean b339_7 = (buffer[i + 339] == 'v');
boolean b339_8 = (buffer[i + 339] == '5');
boolean b339_9 = (buffer[i + 339] == '_');
boolean b339_10 = (buffer[i + 339] == '3');
boolean b339_11 = (buffer[i + 339] == 'E');
boolean b339_12 = (buffer[i + 339] == '|');
boolean b339_13 = (buffer[i + 339] == '^');
boolean b339_14 = (buffer[i + 339] == '1');
boolean b339_15 = (buffer[i + 339] == 'H');
boolean b339_16 = (buffer[i + 339] == 's');
boolean b339_17 = (buffer[i + 339] == 'n');
boolean b339_18 = (buffer[i + 339] == 'e');
boolean b339_19 = (buffer[i + 339] == '2');
boolean b339_20 = (buffer[i + 339] == 'R');
boolean b339_21 = (buffer[i + 339] == 'r');
boolean b339_22 = (buffer[i + 339] == 't');
boolean b339_23 = (buffer[i + 339] == 'd');
boolean b339_24 = (buffer[i + 339] == 'a');
boolean b339_25 = (buffer[i + 339] == 'p');
boolean b339_26 = (buffer[i + 339] == 'C');
boolean b339_27 = (buffer[i + 339] == 'i');
boolean b339_28 = (buffer[i + 339] == 'm');
boolean b339_29 = (buffer[i + 339] == 'l');
boolean b339_30 = (buffer[i + 339] == 'B');
boolean b339_31 = (buffer[i + 339] == 'L');
boolean b339_32 = (buffer[i + 339] == 'N');
boolean b339_33 = (buffer[i + 339] == 'f');
boolean b339_34 = (buffer[i + 339] == 'q');
boolean b339_35 = (buffer[i + 339] == '/');
boolean b339_36 = (buffer[i + 339] == 'h');
boolean b339_37 = (buffer[i + 339] == 'g');
boolean b339_38 = (buffer[i + 339] == 'x');
boolean b339_39 = (buffer[i + 339] == 'F');
boolean b339_40 = (buffer[i + 339] == 'b');
boolean b339_41 = (buffer[i + 339] == 'A');
boolean b339_42 = (buffer[i + 339] == 'c');
boolean b339_43 = (buffer[i + 339] == '.');
boolean b339_44 = (buffer[i + 339] == '4');
boolean b339_45 = (buffer[i + 339] == 'Q');
boolean b339_46 = (buffer[i + 339] == 'y');
boolean b339_47 = (buffer[i + 339] == 'T');
boolean b339_48 = (buffer[i + 339] == 'u');
boolean b339_49 = (buffer[i + 339] == '-');
boolean b339_50 = (buffer[i + 339] == '%');
boolean b339_51 = (buffer[i + 339] == '=');
boolean b339_52 = (buffer[i + 339] == '6');
boolean b339_53 = (buffer[i + 339] == 'P');
boolean b339_54 = (buffer[i + 339] == 'w');
boolean b339_55 = (buffer[i + 339] == 'W');
boolean b339_56 = (buffer[i + 339] == 'k');
boolean b339_57 = (buffer[i + 339] == ':');
boolean b339_58 = (buffer[i + 339] == '7');
boolean b339_59 = (buffer[i + 339] == 'J');
boolean b339_60 = (buffer[i + 339] == 'U');
boolean b339_61 = (buffer[i + 339] == 'G');
boolean b339_62 = (buffer[i + 339] == 'O');
boolean b339_63 = (buffer[i + 339] == 'I');
boolean b339_64 = (buffer[i + 339] == '(');
boolean b340_1 = (buffer[i + 340] == '6');
boolean b340_2 = (buffer[i + 340] == '0');
boolean b340_3 = (buffer[i + 340] == 'n');
boolean b340_4 = (buffer[i + 340] == 'B');
boolean b340_5 = (buffer[i + 340] == 'C');
boolean b340_6 = (buffer[i + 340] == ' ');
boolean b340_7 = (buffer[i + 340] == '9');
boolean b340_8 = (buffer[i + 340] == 'i');
boolean b340_9 = (buffer[i + 340] == '|');
boolean b340_10 = (buffer[i + 340] == '4');
boolean b340_11 = (buffer[i + 340] == 'F');
boolean b340_12 = (buffer[i + 340] == 'V');
boolean b340_13 = (buffer[i + 340] == '@');
boolean b340_14 = (buffer[i + 340] == '1');
boolean b340_15 = (buffer[i + 340] == 'A');
boolean b340_16 = (buffer[i + 340] == '2');
boolean b340_17 = (buffer[i + 340] == 'I');
boolean b340_18 = (buffer[i + 340] == 'W');
boolean b340_19 = (buffer[i + 340] == 'q');
boolean b340_20 = (buffer[i + 340] == '3');
boolean b340_21 = (buffer[i + 340] == 'd');
boolean b340_22 = (buffer[i + 340] == 'h');
boolean b340_23 = (buffer[i + 340] == 'O');
boolean b340_24 = (buffer[i + 340] == 'o');
boolean b340_25 = (buffer[i + 340] == 'g');
boolean b340_26 = (buffer[i + 340] == 'p');
boolean b340_27 = (buffer[i + 340] == 's');
boolean b340_28 = (buffer[i + 340] == '/');
boolean b340_29 = (buffer[i + 340] == 'x');
boolean b340_30 = (buffer[i + 340] == 'l');
boolean b340_31 = (buffer[i + 340] == 'c');
boolean b340_32 = (buffer[i + 340] == 'D');
boolean b340_33 = (buffer[i + 340] == 'a');
boolean b340_34 = (buffer[i + 340] == '_');
boolean b340_35 = (buffer[i + 340] == 'e');
boolean b340_36 = (buffer[i + 340] == 'r');
boolean b340_37 = (buffer[i + 340] == 'v');
boolean b340_38 = (buffer[i + 340] == 'u');
boolean b340_39 = (buffer[i + 340] == 'w');
boolean b340_40 = (buffer[i + 340] == 'm');
boolean b340_41 = (buffer[i + 340] == 'S');
boolean b340_42 = (buffer[i + 340] == 't');
boolean b340_43 = (buffer[i + 340] == '.');
boolean b340_44 = (buffer[i + 340] == ']');
boolean b340_45 = (buffer[i + 340] == 'U');
boolean b340_46 = (buffer[i + 340] == 'R');
boolean b340_47 = (buffer[i + 340] == 'E');
boolean b340_48 = (buffer[i + 340] == '5');
boolean b340_49 = (buffer[i + 340] == 'f');
boolean b340_50 = (buffer[i + 340] == 'b');
boolean b340_51 = (buffer[i + 340] == 'P');
boolean b340_52 = (buffer[i + 340] == 'N');
boolean b340_53 = (buffer[i + 340] == '7');
boolean b340_54 = (buffer[i + 340] == '-');
boolean b340_55 = (buffer[i + 340] == '+');
boolean b340_56 = (buffer[i + 340] == 'k');
boolean b340_57 = (buffer[i + 340] == '*');
boolean b340_58 = (buffer[i + 340] == '8');
boolean b340_59 = (buffer[i + 340] == ':');
boolean b340_60 = (buffer[i + 340] == '=');
boolean b340_61 = (buffer[i + 340] == 'M');
boolean b340_62 = (buffer[i + 340] == 'y');
boolean b340_63 = (buffer[i + 340] == 'K');
boolean b340_64 = (buffer[i + 340] == '?');
boolean b340_65 = (buffer[i + 340] == 'G');
boolean b341_1 = (buffer[i + 341] == ' ');
boolean b341_2 = (buffer[i + 341] == '0');
boolean b341_3 = (buffer[i + 341] == 'g');
boolean b341_4 = (buffer[i + 341] == 'D');
boolean b341_5 = (buffer[i + 341] == 'F');
boolean b341_6 = (buffer[i + 341] == 'A');
boolean b341_7 = (buffer[i + 341] == '9');
boolean b341_8 = (buffer[i + 341] == 'e');
boolean b341_9 = (buffer[i + 341] == '6');
boolean b341_10 = (buffer[i + 341] == '3');
boolean b341_11 = (buffer[i + 341] == '|');
boolean b341_12 = (buffer[i + 341] == 'E');
boolean b341_13 = (buffer[i + 341] == 'C');
boolean b341_14 = (buffer[i + 341] == 'V');
boolean b341_15 = (buffer[i + 341] == '-');
boolean b341_16 = (buffer[i + 341] == '8');
boolean b341_17 = (buffer[i + 341] == 'B');
boolean b341_18 = (buffer[i + 341] == 'J');
boolean b341_19 = (buffer[i + 341] == 'l');
boolean b341_20 = (buffer[i + 341] == '%');
boolean b341_21 = (buffer[i + 341] == '4');
boolean b341_22 = (buffer[i + 341] == 'M');
boolean b341_23 = (buffer[i + 341] == 'o');
boolean b341_24 = (buffer[i + 341] == 'i');
boolean b341_25 = (buffer[i + 341] == 'p');
boolean b341_26 = (buffer[i + 341] == 'h');
boolean b341_27 = (buffer[i + 341] == 's');
boolean b341_28 = (buffer[i + 341] == 'a');
boolean b341_29 = (buffer[i + 341] == 'T');
boolean b341_30 = (buffer[i + 341] == 'c');
boolean b341_31 = (buffer[i + 341] == 'U');
boolean b341_32 = (buffer[i + 341] == 'O');
boolean b341_33 = (buffer[i + 341] == 'S');
boolean b341_34 = (buffer[i + 341] == 't');
boolean b341_35 = (buffer[i + 341] == 'r');
boolean b341_36 = (buffer[i + 341] == 'b');
boolean b341_37 = (buffer[i + 341] == 'k');
boolean b341_38 = (buffer[i + 341] == 'P');
boolean b341_39 = (buffer[i + 341] == 'd');
boolean b341_40 = (buffer[i + 341] == '/');
boolean b341_41 = (buffer[i + 341] == '2');
boolean b341_42 = (buffer[i + 341] == 'n');
boolean b341_43 = (buffer[i + 341] == 'x');
boolean b341_44 = (buffer[i + 341] == 'R');
boolean b341_45 = (buffer[i + 341] == 'w');
boolean b341_46 = (buffer[i + 341] == '1');
boolean b341_47 = (buffer[i + 341] == '5');
boolean b341_48 = (buffer[i + 341] == 'f');
boolean b341_49 = (buffer[i + 341] == 'H');
boolean b341_50 = (buffer[i + 341] == 'N');
boolean b341_51 = (buffer[i + 341] == 'm');
boolean b341_52 = (buffer[i + 341] == 'u');
boolean b341_53 = (buffer[i + 341] == '.');
boolean b341_54 = (buffer[i + 341] == '_');
boolean b341_55 = (buffer[i + 341] == '>');
boolean b341_56 = (buffer[i + 341] == '=');
boolean b341_57 = (buffer[i + 341] == 'y');
boolean b341_58 = (buffer[i + 341] == '7');
boolean b341_59 = (buffer[i + 341] == 'K');
boolean b341_60 = (buffer[i + 341] == ':');
boolean b341_61 = (buffer[i + 341] == 'I');
boolean b341_62 = (buffer[i + 341] == 'v');
boolean b341_63 = (buffer[i + 341] == 'j');
boolean b341_64 = (buffer[i + 341] == 'q');
boolean b341_65 = (buffer[i + 341] == '&');
boolean b341_66 = (buffer[i + 341] == '{');
boolean b341_67 = (buffer[i + 341] == '(');
boolean b341_68 = (buffer[i + 341] == '?');
boolean b341_69 = (buffer[i + 341] == '*');
boolean b342_1 = (buffer[i + 342] == '0');
boolean b342_2 = (buffer[i + 342] == 'A');
boolean b342_3 = (buffer[i + 342] == ' ');
boolean b342_4 = (buffer[i + 342] == '|');
boolean b342_5 = (buffer[i + 342] == 'o');
boolean b342_6 = (buffer[i + 342] == 'E');
boolean b342_7 = (buffer[i + 342] == 'B');
boolean b342_8 = (buffer[i + 342] == '3');
boolean b342_9 = (buffer[i + 342] == '2');
boolean b342_10 = (buffer[i + 342] == 'w');
boolean b342_11 = (buffer[i + 342] == 'F');
boolean b342_12 = (buffer[i + 342] == '4');
boolean b342_13 = (buffer[i + 342] == '7');
boolean b342_14 = (buffer[i + 342] == '8');
boolean b342_15 = (buffer[i + 342] == 'V');
boolean b342_16 = (buffer[i + 342] == '-');
boolean b342_17 = (buffer[i + 342] == 'K');
boolean b342_18 = (buffer[i + 342] == 'l');
boolean b342_19 = (buffer[i + 342] == 'a');
boolean b342_20 = (buffer[i + 342] == '1');
boolean b342_21 = (buffer[i + 342] == '+');
boolean b342_22 = (buffer[i + 342] == 'O');
boolean b342_23 = (buffer[i + 342] == 'G');
boolean b342_24 = (buffer[i + 342] == 't');
boolean b342_25 = (buffer[i + 342] == 'n');
boolean b342_26 = (buffer[i + 342] == '/');
boolean b342_27 = (buffer[i + 342] == 'e');
boolean b342_28 = (buffer[i + 342] == 'h');
boolean b342_29 = (buffer[i + 342] == 'd');
boolean b342_30 = (buffer[i + 342] == 's');
boolean b342_31 = (buffer[i + 342] == 'm');
boolean b342_32 = (buffer[i + 342] == 'S');
boolean b342_33 = (buffer[i + 342] == 'N');
boolean b342_34 = (buffer[i + 342] == 'U');
boolean b342_35 = (buffer[i + 342] == 'C');
boolean b342_36 = (buffer[i + 342] == 'c');
boolean b342_37 = (buffer[i + 342] == 'i');
boolean b342_38 = (buffer[i + 342] == 'v');
boolean b342_39 = (buffer[i + 342] == 'r');
boolean b342_40 = (buffer[i + 342] == 'p');
boolean b342_41 = (buffer[i + 342] == 'u');
boolean b342_42 = (buffer[i + 342] == 'g');
boolean b342_43 = (buffer[i + 342] == 'H');
boolean b342_44 = (buffer[i + 342] == 'P');
boolean b342_45 = (buffer[i + 342] == 'x');
boolean b342_46 = (buffer[i + 342] == '5');
boolean b342_47 = (buffer[i + 342] == 'T');
boolean b342_48 = (buffer[i + 342] == 'b');
boolean b342_49 = (buffer[i + 342] == '_');
boolean b342_50 = (buffer[i + 342] == 'y');
boolean b342_51 = (buffer[i + 342] == '.');
boolean b342_52 = (buffer[i + 342] == 'f');
boolean b342_53 = (buffer[i + 342] == '<');
boolean b342_54 = (buffer[i + 342] == '(');
boolean b342_55 = (buffer[i + 342] == '=');
boolean b342_56 = (buffer[i + 342] == 'k');
boolean b342_57 = (buffer[i + 342] == '9');
boolean b342_58 = (buffer[i + 342] == '6');
boolean b342_59 = (buffer[i + 342] == 'q');
boolean b342_60 = (buffer[i + 342] == ':');
boolean b342_61 = (buffer[i + 342] == 'z');
boolean b342_62 = (buffer[i + 342] == '{');
boolean b342_63 = (buffer[i + 342] == 'W');
boolean b342_64 = (buffer[i + 342] == 'I');
boolean b342_65 = (buffer[i + 342] == 'R');
boolean b342_66 = (buffer[i + 342] == ')');
boolean b342_67 = (buffer[i + 342] == 'M');
boolean b343_1 = (buffer[i + 343] == '0');
boolean b343_2 = (buffer[i + 343] == 'h');
boolean b343_3 = (buffer[i + 343] == 't');
boolean b343_4 = (buffer[i + 343] == '8');
boolean b343_5 = (buffer[i + 343] == '3');
boolean b343_6 = (buffer[i + 343] == ' ');
boolean b343_7 = (buffer[i + 343] == '1');
boolean b343_8 = (buffer[i + 343] == 's');
boolean b343_9 = (buffer[i + 343] == 'Q');
boolean b343_10 = (buffer[i + 343] == '|');
boolean b343_11 = (buffer[i + 343] == 'F');
boolean b343_12 = (buffer[i + 343] == '4');
boolean b343_13 = (buffer[i + 343] == '9');
boolean b343_14 = (buffer[i + 343] == 'C');
boolean b343_15 = (buffer[i + 343] == 'u');
boolean b343_16 = (buffer[i + 343] == '5');
boolean b343_17 = (buffer[i + 343] == 'L');
boolean b343_18 = (buffer[i + 343] == 'A');
boolean b343_19 = (buffer[i + 343] == 'c');
boolean b343_20 = (buffer[i + 343] == 'd');
boolean b343_21 = (buffer[i + 343] == '@');
boolean b343_22 = (buffer[i + 343] == '2');
boolean b343_23 = (buffer[i + 343] == 'B');
boolean b343_24 = (buffer[i + 343] == 'e');
boolean b343_25 = (buffer[i + 343] == 'm');
boolean b343_26 = (buffer[i + 343] == 'n');
boolean b343_27 = (buffer[i + 343] == '/');
boolean b343_28 = (buffer[i + 343] == 'a');
boolean b343_29 = (buffer[i + 343] == 'S');
boolean b343_30 = (buffer[i + 343] == 'i');
boolean b343_31 = (buffer[i + 343] == 'p');
boolean b343_32 = (buffer[i + 343] == 'I');
boolean b343_33 = (buffer[i + 343] == 'N');
boolean b343_34 = (buffer[i + 343] == 'T');
boolean b343_35 = (buffer[i + 343] == 'v');
boolean b343_36 = (buffer[i + 343] == '_');
boolean b343_37 = (buffer[i + 343] == 'w');
boolean b343_38 = (buffer[i + 343] == 'V');
boolean b343_39 = (buffer[i + 343] == 'b');
boolean b343_40 = (buffer[i + 343] == 'l');
boolean b343_41 = (buffer[i + 343] == 'g');
boolean b343_42 = (buffer[i + 343] == 'P');
boolean b343_43 = (buffer[i + 343] == 'D');
boolean b343_44 = (buffer[i + 343] == '7');
boolean b343_45 = (buffer[i + 343] == 'x');
boolean b343_46 = (buffer[i + 343] == 'y');
boolean b343_47 = (buffer[i + 343] == 'r');
boolean b343_48 = (buffer[i + 343] == 'o');
boolean b343_49 = (buffer[i + 343] == 'H');
boolean b343_50 = (buffer[i + 343] == 'E');
boolean b343_51 = (buffer[i + 343] == 'K');
boolean b343_52 = (buffer[i + 343] == 'j');
boolean b343_53 = (buffer[i + 343] == 'k');
boolean b343_54 = (buffer[i + 343] == 'f');
boolean b343_55 = (buffer[i + 343] == '.');
boolean b343_56 = (buffer[i + 343] == '\'');
boolean b343_57 = (buffer[i + 343] == 'G');
boolean b343_58 = (buffer[i + 343] == '-');
boolean b343_59 = (buffer[i + 343] == 'U');
boolean b343_60 = (buffer[i + 343] == ':');
boolean b343_61 = (buffer[i + 343] == 'W');
boolean b343_62 = (buffer[i + 343] == '<');
boolean b343_63 = (buffer[i + 343] == '?');
boolean b343_64 = (buffer[i + 343] == '(');
boolean b343_65 = (buffer[i + 343] == '6');
boolean b343_66 = (buffer[i + 343] == '*');
boolean b344_1 = (buffer[i + 344] == ' ');
boolean b344_2 = (buffer[i + 344] == 'h');
boolean b344_3 = (buffer[i + 344] == '1');
boolean b344_4 = (buffer[i + 344] == '0');
boolean b344_5 = (buffer[i + 344] == 'i');
boolean b344_6 = (buffer[i + 344] == '8');
boolean b344_7 = (buffer[i + 344] == '|');
boolean b344_8 = (buffer[i + 344] == 'o');
boolean b344_9 = (buffer[i + 344] == '<');
boolean b344_10 = (buffer[i + 344] == 'D');
boolean b344_11 = (buffer[i + 344] == 'J');
boolean b344_12 = (buffer[i + 344] == 'F');
boolean b344_13 = (buffer[i + 344] == 's');
boolean b344_14 = (buffer[i + 344] == '9');
boolean b344_15 = (buffer[i + 344] == 'A');
boolean b344_16 = (buffer[i + 344] == '6');
boolean b344_17 = (buffer[i + 344] == 'M');
boolean b344_18 = (buffer[i + 344] == 'f');
boolean b344_19 = (buffer[i + 344] == 'm');
boolean b344_20 = (buffer[i + 344] == 'P');
boolean b344_21 = (buffer[i + 344] == 'c');
boolean b344_22 = (buffer[i + 344] == '3');
boolean b344_23 = (buffer[i + 344] == '4');
boolean b344_24 = (buffer[i + 344] == 'C');
boolean b344_25 = (buffer[i + 344] == 'p');
boolean b344_26 = (buffer[i + 344] == 'a');
boolean b344_27 = (buffer[i + 344] == '_');
boolean b344_28 = (buffer[i + 344] == 'w');
boolean b344_29 = (buffer[i + 344] == 'u');
boolean b344_30 = (buffer[i + 344] == 'l');
boolean b344_31 = (buffer[i + 344] == '/');
boolean b344_32 = (buffer[i + 344] == 'd');
boolean b344_33 = (buffer[i + 344] == 'O');
boolean b344_34 = (buffer[i + 344] == 'e');
boolean b344_35 = (buffer[i + 344] == 'n');
boolean b344_36 = (buffer[i + 344] == 'E');
boolean b344_37 = (buffer[i + 344] == 'I');
boolean b344_38 = (buffer[i + 344] == 'U');
boolean b344_39 = (buffer[i + 344] == 'T');
boolean b344_40 = (buffer[i + 344] == 'r');
boolean b344_41 = (buffer[i + 344] == 'g');
boolean b344_42 = (buffer[i + 344] == 't');
boolean b344_43 = (buffer[i + 344] == 'v');
boolean b344_44 = (buffer[i + 344] == 'b');
boolean b344_45 = (buffer[i + 344] == '2');
boolean b344_46 = (buffer[i + 344] == 'V');
boolean b344_47 = (buffer[i + 344] == '-');
boolean b344_48 = (buffer[i + 344] == '~');
boolean b344_49 = (buffer[i + 344] == 'R');
boolean b344_50 = (buffer[i + 344] == 'z');
boolean b344_51 = (buffer[i + 344] == 'S');
boolean b344_52 = (buffer[i + 344] == '.');
boolean b344_53 = (buffer[i + 344] == 'k');
boolean b344_54 = (buffer[i + 344] == 'y');
boolean b344_55 = (buffer[i + 344] == 'q');
boolean b344_56 = (buffer[i + 344] == '\'');
boolean b344_57 = (buffer[i + 344] == '%');
boolean b344_58 = (buffer[i + 344] == '=');
boolean b344_59 = (buffer[i + 344] == ':');
boolean b344_60 = (buffer[i + 344] == 'N');
boolean b344_61 = (buffer[i + 344] == 'H');
boolean b344_62 = (buffer[i + 344] == '5');
boolean b344_63 = (buffer[i + 344] == 'G');
boolean b344_64 = (buffer[i + 344] == '7');
boolean b344_65 = (buffer[i + 344] == ',');
boolean b344_66 = (buffer[i + 344] == 'j');
boolean b344_67 = (buffer[i + 344] == 'x');
boolean b344_68 = (buffer[i + 344] == '#');
boolean b344_69 = (buffer[i + 344] == 'W');
boolean b344_70 = (buffer[i + 344] == 'B');
boolean b344_71 = (buffer[i + 344] == '!');
boolean b344_72 = (buffer[i + 344] == 'Q');
boolean b345_1 = (buffer[i + 345] == '0');
boolean b345_2 = (buffer[i + 345] == 'h');
boolean b345_3 = (buffer[i + 345] == ' ');
boolean b345_4 = (buffer[i + 345] == 't');
boolean b345_5 = (buffer[i + 345] == 'D');
boolean b345_6 = (buffer[i + 345] == 'F');
boolean b345_7 = (buffer[i + 345] == '9');
boolean b345_8 = (buffer[i + 345] == 'C');
boolean b345_9 = (buffer[i + 345] == '2');
boolean b345_10 = (buffer[i + 345] == 'u');
boolean b345_11 = (buffer[i + 345] == '|');
boolean b345_12 = (buffer[i + 345] == '4');
boolean b345_13 = (buffer[i + 345] == '^');
boolean b345_14 = (buffer[i + 345] == '8');
boolean b345_15 = (buffer[i + 345] == 'X');
boolean b345_16 = (buffer[i + 345] == ']');
boolean b345_17 = (buffer[i + 345] == 'e');
boolean b345_18 = (buffer[i + 345] == '7');
boolean b345_19 = (buffer[i + 345] == 'N');
boolean b345_20 = (buffer[i + 345] == 'm');
boolean b345_21 = (buffer[i + 345] == 'c');
boolean b345_22 = (buffer[i + 345] == 'i');
boolean b345_23 = (buffer[i + 345] == '/');
boolean b345_24 = (buffer[i + 345] == 'J');
boolean b345_25 = (buffer[i + 345] == '6');
boolean b345_26 = (buffer[i + 345] == 'y');
boolean b345_27 = (buffer[i + 345] == 'A');
boolean b345_28 = (buffer[i + 345] == '!');
boolean b345_29 = (buffer[i + 345] == '1');
boolean b345_30 = (buffer[i + 345] == 'l');
boolean b345_31 = (buffer[i + 345] == 'a');
boolean b345_32 = (buffer[i + 345] == 'R');
boolean b345_33 = (buffer[i + 345] == 'w');
boolean b345_34 = (buffer[i + 345] == 'p');
boolean b345_35 = (buffer[i + 345] == 'd');
boolean b345_36 = (buffer[i + 345] == 'n');
boolean b345_37 = (buffer[i + 345] == 'U');
boolean b345_38 = (buffer[i + 345] == 'x');
boolean b345_39 = (buffer[i + 345] == 'v');
boolean b345_40 = (buffer[i + 345] == 'O');
boolean b345_41 = (buffer[i + 345] == 'S');
boolean b345_42 = (buffer[i + 345] == 's');
boolean b345_43 = (buffer[i + 345] == 'I');
boolean b345_44 = (buffer[i + 345] == '_');
boolean b345_45 = (buffer[i + 345] == 'r');
boolean b345_46 = (buffer[i + 345] == '&');
boolean b345_47 = (buffer[i + 345] == 'b');
boolean b345_48 = (buffer[i + 345] == 'o');
boolean b345_49 = (buffer[i + 345] == '.');
boolean b345_50 = (buffer[i + 345] == 'g');
boolean b345_51 = (buffer[i + 345] == 'f');
boolean b345_52 = (buffer[i + 345] == 'M');
boolean b345_53 = (buffer[i + 345] == 'T');
boolean b345_54 = (buffer[i + 345] == 'B');
boolean b345_55 = (buffer[i + 345] == '-');
boolean b345_56 = (buffer[i + 345] == 'G');
boolean b345_57 = (buffer[i + 345] == '5');
boolean b345_58 = (buffer[i + 345] == 'k');
boolean b345_59 = (buffer[i + 345] == 'q');
boolean b345_60 = (buffer[i + 345] == 'K');
boolean b345_61 = (buffer[i + 345] == '(');
boolean b345_62 = (buffer[i + 345] == 'j');
boolean b345_63 = (buffer[i + 345] == '*');
boolean b345_64 = (buffer[i + 345] == '3');
boolean b345_65 = (buffer[i + 345] == '>');
boolean b345_66 = (buffer[i + 345] == 'P');
boolean b345_67 = (buffer[i + 345] == '+');
boolean b345_68 = (buffer[i + 345] == 'E');
boolean b345_69 = (buffer[i + 345] == '=');
boolean b345_70 = (buffer[i + 345] == '@');
boolean b345_71 = (buffer[i + 345] == ':');
boolean b346_1 = (buffer[i + 346] == '0');
boolean b346_2 = (buffer[i + 346] == 'h');
boolean b346_3 = (buffer[i + 346] == 'w');
boolean b346_4 = (buffer[i + 346] == '7');
boolean b346_5 = (buffer[i + 346] == 'F');
boolean b346_6 = (buffer[i + 346] == '8');
boolean b346_7 = (buffer[i + 346] == ' ');
boolean b346_8 = (buffer[i + 346] == '9');
boolean b346_9 = (buffer[i + 346] == '|');
boolean b346_10 = (buffer[i + 346] == 'r');
boolean b346_11 = (buffer[i + 346] == 'X');
boolean b346_12 = (buffer[i + 346] == 'U');
boolean b346_13 = (buffer[i + 346] == '3');
boolean b346_14 = (buffer[i + 346] == 'B');
boolean b346_15 = (buffer[i + 346] == '2');
boolean b346_16 = (buffer[i + 346] == '-');
boolean b346_17 = (buffer[i + 346] == '1');
boolean b346_18 = (buffer[i + 346] == 'A');
boolean b346_19 = (buffer[i + 346] == 'O');
boolean b346_20 = (buffer[i + 346] == 'i');
boolean b346_21 = (buffer[i + 346] == 'e');
boolean b346_22 = (buffer[i + 346] == 'o');
boolean b346_23 = (buffer[i + 346] == 'l');
boolean b346_24 = (buffer[i + 346] == 'L');
boolean b346_25 = (buffer[i + 346] == 'P');
boolean b346_26 = (buffer[i + 346] == 'b');
boolean b346_27 = (buffer[i + 346] == 'E');
boolean b346_28 = (buffer[i + 346] == 'C');
boolean b346_29 = (buffer[i + 346] == 'y');
boolean b346_30 = (buffer[i + 346] == 's');
boolean b346_31 = (buffer[i + 346] == 'd');
boolean b346_32 = (buffer[i + 346] == '/');
boolean b346_33 = (buffer[i + 346] == 'm');
boolean b346_34 = (buffer[i + 346] == 'R');
boolean b346_35 = (buffer[i + 346] == 'p');
boolean b346_36 = (buffer[i + 346] == 'c');
boolean b346_37 = (buffer[i + 346] == '_');
boolean b346_38 = (buffer[i + 346] == 'T');
boolean b346_39 = (buffer[i + 346] == 'N');
boolean b346_40 = (buffer[i + 346] == 'I');
boolean b346_41 = (buffer[i + 346] == 'f');
boolean b346_42 = (buffer[i + 346] == 't');
boolean b346_43 = (buffer[i + 346] == 'v');
boolean b346_44 = (buffer[i + 346] == 'a');
boolean b346_45 = (buffer[i + 346] == '.');
boolean b346_46 = (buffer[i + 346] == 'n');
boolean b346_47 = (buffer[i + 346] == 'g');
boolean b346_48 = (buffer[i + 346] == 'u');
boolean b346_49 = (buffer[i + 346] == 'M');
boolean b346_50 = (buffer[i + 346] == 'x');
boolean b346_51 = (buffer[i + 346] == 'k');
boolean b346_52 = (buffer[i + 346] == 'S');
boolean b346_53 = (buffer[i + 346] == 'G');
boolean b346_54 = (buffer[i + 346] == '<');
boolean b346_55 = (buffer[i + 346] == ':');
boolean b346_56 = (buffer[i + 346] == 'D');
boolean b346_57 = (buffer[i + 346] == '5');
boolean b346_58 = (buffer[i + 346] == '6');
boolean b346_59 = (buffer[i + 346] == '=');
boolean b346_60 = (buffer[i + 346] == '#');
boolean b346_61 = (buffer[i + 346] == '4');
boolean b346_62 = (buffer[i + 346] == 'W');
boolean b347_1 = (buffer[i + 347] == ' ');
boolean b347_2 = (buffer[i + 347] == 'p');
boolean b347_3 = (buffer[i + 347] == '0');
boolean b347_4 = (buffer[i + 347] == '1');
boolean b347_5 = (buffer[i + 347] == 'o');
boolean b347_6 = (buffer[i + 347] == '|');
boolean b347_7 = (buffer[i + 347] == '5');
boolean b347_8 = (buffer[i + 347] == 'F');
boolean b347_9 = (buffer[i + 347] == 'c');
boolean b347_10 = (buffer[i + 347] == 'A');
boolean b347_11 = (buffer[i + 347] == '~');
boolean b347_12 = (buffer[i + 347] == '8');
boolean b347_13 = (buffer[i + 347] == 'X');
boolean b347_14 = (buffer[i + 347] == '9');
boolean b347_15 = (buffer[i + 347] == '2');
boolean b347_16 = (buffer[i + 347] == 'B');
boolean b347_17 = (buffer[i + 347] == 'P');
boolean b347_18 = (buffer[i + 347] == 'n');
boolean b347_19 = (buffer[i + 347] == '!');
boolean b347_20 = (buffer[i + 347] == 'C');
boolean b347_21 = (buffer[i + 347] == 'm');
boolean b347_22 = (buffer[i + 347] == 'e');
boolean b347_23 = (buffer[i + 347] == 'u');
boolean b347_24 = (buffer[i + 347] == 'U');
boolean b347_25 = (buffer[i + 347] == '4');
boolean b347_26 = (buffer[i + 347] == 'h');
boolean b347_27 = (buffer[i + 347] == '-');
boolean b347_28 = (buffer[i + 347] == 'l');
boolean b347_29 = (buffer[i + 347] == 'i');
boolean b347_30 = (buffer[i + 347] == 'w');
boolean b347_31 = (buffer[i + 347] == 'a');
boolean b347_32 = (buffer[i + 347] == '/');
boolean b347_33 = (buffer[i + 347] == 's');
boolean b347_34 = (buffer[i + 347] == 't');
boolean b347_35 = (buffer[i + 347] == 'f');
boolean b347_36 = (buffer[i + 347] == 'G');
boolean b347_37 = (buffer[i + 347] == 'I');
boolean b347_38 = (buffer[i + 347] == 'D');
boolean b347_39 = (buffer[i + 347] == 'O');
boolean b347_40 = (buffer[i + 347] == 'S');
boolean b347_41 = (buffer[i + 347] == 'V');
boolean b347_42 = (buffer[i + 347] == 'v');
boolean b347_43 = (buffer[i + 347] == 'r');
boolean b347_44 = (buffer[i + 347] == 'd');
boolean b347_45 = (buffer[i + 347] == '_');
boolean b347_46 = (buffer[i + 347] == 'x');
boolean b347_47 = (buffer[i + 347] == 'y');
boolean b347_48 = (buffer[i + 347] == 'T');
boolean b347_49 = (buffer[i + 347] == 'g');
boolean b347_50 = (buffer[i + 347] == 'b');
boolean b347_51 = (buffer[i + 347] == '6');
boolean b347_52 = (buffer[i + 347] == 'M');
boolean b347_53 = (buffer[i + 347] == 'Q');
boolean b347_54 = (buffer[i + 347] == 'k');
boolean b347_55 = (buffer[i + 347] == '.');
boolean b347_56 = (buffer[i + 347] == 'N');
boolean b347_57 = (buffer[i + 347] == '3');
boolean b347_58 = (buffer[i + 347] == '>');
boolean b347_59 = (buffer[i + 347] == 'E');
boolean b347_60 = (buffer[i + 347] == '%');
boolean b347_61 = (buffer[i + 347] == ':');
boolean b347_62 = (buffer[i + 347] == '*');
boolean b347_63 = (buffer[i + 347] == 'W');
boolean b347_64 = (buffer[i + 347] == 'H');
boolean b347_65 = (buffer[i + 347] == ',');
boolean b347_66 = (buffer[i + 347] == '?');
boolean b347_67 = (buffer[i + 347] == 'L');
boolean b347_68 = (buffer[i + 347] == '=');
boolean b347_69 = (buffer[i + 347] == 'R');
boolean b347_70 = (buffer[i + 347] == '7');
boolean b347_71 = (buffer[i + 347] == 'q');
boolean b347_72 = (buffer[i + 347] == '(');
boolean b348_1 = (buffer[i + 348] == '0');
boolean b348_2 = (buffer[i + 348] == 'M');
boolean b348_3 = (buffer[i + 348] == 'h');
boolean b348_4 = (buffer[i + 348] == ' ');
boolean b348_5 = (buffer[i + 348] == 'r');
boolean b348_6 = (buffer[i + 348] == 'F');
boolean b348_7 = (buffer[i + 348] == '1');
boolean b348_8 = (buffer[i + 348] == '9');
boolean b348_9 = (buffer[i + 348] == '8');
boolean b348_10 = (buffer[i + 348] == '|');
boolean b348_11 = (buffer[i + 348] == 'e');
boolean b348_12 = (buffer[i + 348] == 'X');
boolean b348_13 = (buffer[i + 348] == 'B');
boolean b348_14 = (buffer[i + 348] == '4');
boolean b348_15 = (buffer[i + 348] == 'o');
boolean b348_16 = (buffer[i + 348] == 'P');
boolean b348_17 = (buffer[i + 348] == 'a');
boolean b348_18 = (buffer[i + 348] == '=');
boolean b348_19 = (buffer[i + 348] == 'O');
boolean b348_20 = (buffer[i + 348] == 'Q');
boolean b348_21 = (buffer[i + 348] == 'T');
boolean b348_22 = (buffer[i + 348] == 'W');
boolean b348_23 = (buffer[i + 348] == 'c');
boolean b348_24 = (buffer[i + 348] == 'p');
boolean b348_25 = (buffer[i + 348] == 'm');
boolean b348_26 = (buffer[i + 348] == 'i');
boolean b348_27 = (buffer[i + 348] == 'R');
boolean b348_28 = (buffer[i + 348] == '5');
boolean b348_29 = (buffer[i + 348] == 's');
boolean b348_30 = (buffer[i + 348] == 'G');
boolean b348_31 = (buffer[i + 348] == 'A');
boolean b348_32 = (buffer[i + 348] == '2');
boolean b348_33 = (buffer[i + 348] == '@');
boolean b348_34 = (buffer[i + 348] == 't');
boolean b348_35 = (buffer[i + 348] == 'f');
boolean b348_36 = (buffer[i + 348] == '7');
boolean b348_37 = (buffer[i + 348] == 'C');
boolean b348_38 = (buffer[i + 348] == 'n');
boolean b348_39 = (buffer[i + 348] == 'b');
boolean b348_40 = (buffer[i + 348] == '/');
boolean b348_41 = (buffer[i + 348] == 'y');
boolean b348_42 = (buffer[i + 348] == 'd');
boolean b348_43 = (buffer[i + 348] == 'w');
boolean b348_44 = (buffer[i + 348] == 'E');
boolean b348_45 = (buffer[i + 348] == 'v');
boolean b348_46 = (buffer[i + 348] == 'N');
boolean b348_47 = (buffer[i + 348] == 'S');
boolean b348_48 = (buffer[i + 348] == 'l');
boolean b348_49 = (buffer[i + 348] == '_');
boolean b348_50 = (buffer[i + 348] == '3');
boolean b348_51 = (buffer[i + 348] == 'u');
boolean b348_52 = (buffer[i + 348] == '%');
boolean b348_53 = (buffer[i + 348] == 'J');
boolean b348_54 = (buffer[i + 348] == 'H');
boolean b348_55 = (buffer[i + 348] == 'g');
boolean b348_56 = (buffer[i + 348] == '.');
boolean b348_57 = (buffer[i + 348] == '-');
boolean b348_58 = (buffer[i + 348] == 'j');
boolean b348_59 = (buffer[i + 348] == 'x');
boolean b348_60 = (buffer[i + 348] == 'L');
boolean b348_61 = (buffer[i + 348] == 'k');
boolean b348_62 = (buffer[i + 348] == 'z');
boolean b348_63 = (buffer[i + 348] == '<');
boolean b348_64 = (buffer[i + 348] == 'I');
boolean b348_65 = (buffer[i + 348] == 'q');
boolean b348_66 = (buffer[i + 348] == '?');
boolean b348_67 = (buffer[i + 348] == '6');
boolean b348_68 = (buffer[i + 348] == ':');
boolean b348_69 = (buffer[i + 348] == 'D');
boolean b348_70 = (buffer[i + 348] == '(');
boolean b349_1 = (buffer[i + 349] == '0');
boolean b349_2 = (buffer[i + 349] == 'B');
boolean b349_3 = (buffer[i + 349] == 'y');
boolean b349_4 = (buffer[i + 349] == 'A');
boolean b349_5 = (buffer[i + 349] == 'k');
boolean b349_6 = (buffer[i + 349] == 'F');
boolean b349_7 = (buffer[i + 349] == '|');
boolean b349_8 = (buffer[i + 349] == 'C');
boolean b349_9 = (buffer[i + 349] == ' ');
boolean b349_10 = (buffer[i + 349] == '9');
boolean b349_11 = (buffer[i + 349] == '/');
boolean b349_12 = (buffer[i + 349] == 'G');
boolean b349_13 = (buffer[i + 349] == '1');
boolean b349_14 = (buffer[i + 349] == '%');
boolean b349_15 = (buffer[i + 349] == 'E');
boolean b349_16 = (buffer[i + 349] == '8');
boolean b349_17 = (buffer[i + 349] == 'm');
boolean b349_18 = (buffer[i + 349] == 'i');
boolean b349_19 = (buffer[i + 349] == 'b');
boolean b349_20 = (buffer[i + 349] == '=');
boolean b349_21 = (buffer[i + 349] == 'M');
boolean b349_22 = (buffer[i + 349] == 'R');
boolean b349_23 = (buffer[i + 349] == 'J');
boolean b349_24 = (buffer[i + 349] == 'h');
boolean b349_25 = (buffer[i + 349] == 'o');
boolean b349_26 = (buffer[i + 349] == 's');
boolean b349_27 = (buffer[i + 349] == 'a');
boolean b349_28 = (buffer[i + 349] == '2');
boolean b349_29 = (buffer[i + 349] == 'd');
boolean b349_30 = (buffer[i + 349] == 'D');
boolean b349_31 = (buffer[i + 349] == 'e');
boolean b349_32 = (buffer[i + 349] == 'N');
boolean b349_33 = (buffer[i + 349] == '3');
boolean b349_34 = (buffer[i + 349] == 'l');
boolean b349_35 = (buffer[i + 349] == 'c');
boolean b349_36 = (buffer[i + 349] == 'r');
boolean b349_37 = (buffer[i + 349] == 'j');
boolean b349_38 = (buffer[i + 349] == 'P');
boolean b349_39 = (buffer[i + 349] == 'n');
boolean b349_40 = (buffer[i + 349] == 'L');
boolean b349_41 = (buffer[i + 349] == '5');
boolean b349_42 = (buffer[i + 349] == 'U');
boolean b349_43 = (buffer[i + 349] == 'p');
boolean b349_44 = (buffer[i + 349] == 't');
boolean b349_45 = (buffer[i + 349] == 'T');
boolean b349_46 = (buffer[i + 349] == '_');
boolean b349_47 = (buffer[i + 349] == 'f');
boolean b349_48 = (buffer[i + 349] == 'g');
boolean b349_49 = (buffer[i + 349] == 'v');
boolean b349_50 = (buffer[i + 349] == 'w');
boolean b349_51 = (buffer[i + 349] == '+');
boolean b349_52 = (buffer[i + 349] == 'I');
boolean b349_53 = (buffer[i + 349] == '?');
boolean b349_54 = (buffer[i + 349] == 'z');
boolean b349_55 = (buffer[i + 349] == '-');
boolean b349_56 = (buffer[i + 349] == 'u');
boolean b349_57 = (buffer[i + 349] == 'H');
boolean b349_58 = (buffer[i + 349] == 'Y');
boolean b349_59 = (buffer[i + 349] == '.');
boolean b349_60 = (buffer[i + 349] == 'q');
boolean b349_61 = (buffer[i + 349] == 'x');
boolean b349_62 = (buffer[i + 349] == 'V');
boolean b349_63 = (buffer[i + 349] == '7');
boolean b349_64 = (buffer[i + 349] == 'O');
boolean b349_65 = (buffer[i + 349] == '<');
boolean b349_66 = (buffer[i + 349] == '*');
boolean b349_67 = (buffer[i + 349] == 'X');
boolean b349_68 = (buffer[i + 349] == '#');
boolean b349_69 = (buffer[i + 349] == ':');
boolean b349_70 = (buffer[i + 349] == '&');
boolean b349_71 = (buffer[i + 349] == '6');
boolean b349_72 = (buffer[i + 349] == '4');
boolean b349_73 = (buffer[i + 349] == 'Q');
boolean b349_74 = (buffer[i + 349] == 'K');
boolean b350_1 = (buffer[i + 350] == '|');
boolean b350_2 = (buffer[i + 350] == 'N');
boolean b350_3 = (buffer[i + 350] == ' ');
boolean b350_4 = (buffer[i + 350] == 's');
boolean b350_5 = (buffer[i + 350] == 'b');
boolean b350_6 = (buffer[i + 350] == '1');
boolean b350_7 = (buffer[i + 350] == '0');
boolean b350_8 = (buffer[i + 350] == 'i');
boolean b350_9 = (buffer[i + 350] == 'C');
boolean b350_10 = (buffer[i + 350] == '8');
boolean b350_11 = (buffer[i + 350] == 'F');
boolean b350_12 = (buffer[i + 350] == 't');
boolean b350_13 = (buffer[i + 350] == '3');
boolean b350_14 = (buffer[i + 350] == 'E');
boolean b350_15 = (buffer[i + 350] == '2');
boolean b350_16 = (buffer[i + 350] == 'A');
boolean b350_17 = (buffer[i + 350] == '.');
boolean b350_18 = (buffer[i + 350] == 'G');
boolean b350_19 = (buffer[i + 350] == 'p');
boolean b350_20 = (buffer[i + 350] == 'B');
boolean b350_21 = (buffer[i + 350] == 'D');
boolean b350_22 = (buffer[i + 350] == 'n');
boolean b350_23 = (buffer[i + 350] == 'S');
boolean b350_24 = (buffer[i + 350] == 'c');
boolean b350_25 = (buffer[i + 350] == '=');
boolean b350_26 = (buffer[i + 350] == 'e');
boolean b350_27 = (buffer[i + 350] == 'P');
boolean b350_28 = (buffer[i + 350] == 'a');
boolean b350_29 = (buffer[i + 350] == 'y');
boolean b350_30 = (buffer[i + 350] == 'm');
boolean b350_31 = (buffer[i + 350] == '/');
boolean b350_32 = (buffer[i + 350] == 'Y');
boolean b350_33 = (buffer[i + 350] == '@');
boolean b350_34 = (buffer[i + 350] == 'r');
boolean b350_35 = (buffer[i + 350] == 'U');
boolean b350_36 = (buffer[i + 350] == 'o');
boolean b350_37 = (buffer[i + 350] == 'h');
boolean b350_38 = (buffer[i + 350] == '6');
boolean b350_39 = (buffer[i + 350] == 'M');
boolean b350_40 = (buffer[i + 350] == '9');
boolean b350_41 = (buffer[i + 350] == 'd');
boolean b350_42 = (buffer[i + 350] == 'l');
boolean b350_43 = (buffer[i + 350] == 'w');
boolean b350_44 = (buffer[i + 350] == 'f');
boolean b350_45 = (buffer[i + 350] == 'O');
boolean b350_46 = (buffer[i + 350] == 'R');
boolean b350_47 = (buffer[i + 350] == 'I');
boolean b350_48 = (buffer[i + 350] == '_');
boolean b350_49 = (buffer[i + 350] == 'v');
boolean b350_50 = (buffer[i + 350] == '?');
boolean b350_51 = (buffer[i + 350] == 'x');
boolean b350_52 = (buffer[i + 350] == 'g');
boolean b350_53 = (buffer[i + 350] == '^');
boolean b350_54 = (buffer[i + 350] == '-');
boolean b350_55 = (buffer[i + 350] == 'W');
boolean b350_56 = (buffer[i + 350] == 'k');
boolean b350_57 = (buffer[i + 350] == 'u');
boolean b350_58 = (buffer[i + 350] == 'V');
boolean b350_59 = (buffer[i + 350] == 'T');
boolean b350_60 = (buffer[i + 350] == 'X');
boolean b350_61 = (buffer[i + 350] == '5');
boolean b350_62 = (buffer[i + 350] == 'j');
boolean b350_63 = (buffer[i + 350] == 'q');
boolean b350_64 = (buffer[i + 350] == '7');
boolean b350_65 = (buffer[i + 350] == 'L');
boolean b350_66 = (buffer[i + 350] == '%');
boolean b350_67 = (buffer[i + 350] == '>');
boolean b350_68 = (buffer[i + 350] == 'H');
boolean b350_69 = (buffer[i + 350] == '<');
boolean b350_70 = (buffer[i + 350] == '}');
boolean b350_71 = (buffer[i + 350] == 'Z');
boolean b350_72 = (buffer[i + 350] == '#');
boolean b350_73 = (buffer[i + 350] == 'z');
boolean b350_74 = (buffer[i + 350] == ')');
boolean b350_75 = (buffer[i + 350] == '4');
boolean b350_76 = (buffer[i + 350] == 'K');
boolean b351_1 = (buffer[i + 351] == 'D');
boolean b351_2 = (buffer[i + 351] == '|');
boolean b351_3 = (buffer[i + 351] == 'F');
boolean b351_4 = (buffer[i + 351] == 'M');
boolean b351_5 = (buffer[i + 351] == 'e');
boolean b351_6 = (buffer[i + 351] == ' ');
boolean b351_7 = (buffer[i + 351] == 'n');
boolean b351_8 = (buffer[i + 351] == '9');
boolean b351_9 = (buffer[i + 351] == 'N');
boolean b351_10 = (buffer[i + 351] == '5');
boolean b351_11 = (buffer[i + 351] == 'B');
boolean b351_12 = (buffer[i + 351] == '1');
boolean b351_13 = (buffer[i + 351] == 'E');
boolean b351_14 = (buffer[i + 351] == 'K');
boolean b351_15 = (buffer[i + 351] == '3');
boolean b351_16 = (buffer[i + 351] == '8');
boolean b351_17 = (buffer[i + 351] == '0');
boolean b351_18 = (buffer[i + 351] == 'V');
boolean b351_19 = (buffer[i + 351] == 'P');
boolean b351_20 = (buffer[i + 351] == 'p');
boolean b351_21 = (buffer[i + 351] == 'r');
boolean b351_22 = (buffer[i + 351] == 'g');
boolean b351_23 = (buffer[i + 351] == 'u');
boolean b351_24 = (buffer[i + 351] == 'd');
boolean b351_25 = (buffer[i + 351] == '=');
boolean b351_26 = (buffer[i + 351] == 't');
boolean b351_27 = (buffer[i + 351] == 'T');
boolean b351_28 = (buffer[i + 351] == 'i');
boolean b351_29 = (buffer[i + 351] == 'a');
boolean b351_30 = (buffer[i + 351] == 'A');
boolean b351_31 = (buffer[i + 351] == 'I');
boolean b351_32 = (buffer[i + 351] == '.');
boolean b351_33 = (buffer[i + 351] == '-');
boolean b351_34 = (buffer[i + 351] == 'o');
boolean b351_35 = (buffer[i + 351] == 's');
boolean b351_36 = (buffer[i + 351] == '2');
boolean b351_37 = (buffer[i + 351] == '7');
boolean b351_38 = (buffer[i + 351] == 'm');
boolean b351_39 = (buffer[i + 351] == '/');
boolean b351_40 = (buffer[i + 351] == 'f');
boolean b351_41 = (buffer[i + 351] == '_');
boolean b351_42 = (buffer[i + 351] == 'y');
boolean b351_43 = (buffer[i + 351] == 'h');
boolean b351_44 = (buffer[i + 351] == 'w');
boolean b351_45 = (buffer[i + 351] == 'l');
boolean b351_46 = (buffer[i + 351] == 'k');
boolean b351_47 = (buffer[i + 351] == 'S');
boolean b351_48 = (buffer[i + 351] == 'b');
boolean b351_49 = (buffer[i + 351] == 'v');
boolean b351_50 = (buffer[i + 351] == 'C');
boolean b351_51 = (buffer[i + 351] == 'G');
boolean b351_52 = (buffer[i + 351] == 'U');
boolean b351_53 = (buffer[i + 351] == '%');
boolean b351_54 = (buffer[i + 351] == 'c');
boolean b351_55 = (buffer[i + 351] == '?');
boolean b351_56 = (buffer[i + 351] == 'q');
boolean b351_57 = (buffer[i + 351] == 'H');
boolean b351_58 = (buffer[i + 351] == 'L');
boolean b351_59 = (buffer[i + 351] == 'R');
boolean b351_60 = (buffer[i + 351] == 'X');
boolean b351_61 = (buffer[i + 351] == 'W');
boolean b351_62 = (buffer[i + 351] == '<');
boolean b351_63 = (buffer[i + 351] == '(');
boolean b351_64 = (buffer[i + 351] == 'Z');
boolean b351_65 = (buffer[i + 351] == 'z');
boolean b351_66 = (buffer[i + 351] == 'x');
boolean b351_67 = (buffer[i + 351] == ':');
boolean b351_68 = (buffer[i + 351] == 'j');
boolean b351_69 = (buffer[i + 351] == '[');
boolean b351_70 = (buffer[i + 351] == '4');
boolean b352_1 = (buffer[i + 352] == 'r');
boolean b352_2 = (buffer[i + 352] == '1');
boolean b352_3 = (buffer[i + 352] == 'T');
boolean b352_4 = (buffer[i + 352] == 'o');
boolean b352_5 = (buffer[i + 352] == ' ');
boolean b352_6 = (buffer[i + 352] == 't');
boolean b352_7 = (buffer[i + 352] == '0');
boolean b352_8 = (buffer[i + 352] == 'g');
boolean b352_9 = (buffer[i + 352] == 'F');
boolean b352_10 = (buffer[i + 352] == 'u');
boolean b352_11 = (buffer[i + 352] == '|');
boolean b352_12 = (buffer[i + 352] == 'D');
boolean b352_13 = (buffer[i + 352] == 'm');
boolean b352_14 = (buffer[i + 352] == 'C');
boolean b352_15 = (buffer[i + 352] == '8');
boolean b352_16 = (buffer[i + 352] == '7');
boolean b352_17 = (buffer[i + 352] == '9');
boolean b352_18 = (buffer[i + 352] == '2');
boolean b352_19 = (buffer[i + 352] == '4');
boolean b352_20 = (buffer[i + 352] == 'A');
boolean b352_21 = (buffer[i + 352] == 'a');
boolean b352_22 = (buffer[i + 352] == 'p');
boolean b352_23 = (buffer[i + 352] == 'e');
boolean b352_24 = (buffer[i + 352] == 'i');
boolean b352_25 = (buffer[i + 352] == 's');
boolean b352_26 = (buffer[i + 352] == '=');
boolean b352_27 = (buffer[i + 352] == 'U');
boolean b352_28 = (buffer[i + 352] == 'E');
boolean b352_29 = (buffer[i + 352] == 'n');
boolean b352_30 = (buffer[i + 352] == 'L');
boolean b352_31 = (buffer[i + 352] == 'N');
boolean b352_32 = (buffer[i + 352] == 'b');
boolean b352_33 = (buffer[i + 352] == 'S');
boolean b352_34 = (buffer[i + 352] == '.');
boolean b352_35 = (buffer[i + 352] == '3');
boolean b352_36 = (buffer[i + 352] == 'x');
boolean b352_37 = (buffer[i + 352] == '%');
boolean b352_38 = (buffer[i + 352] == 'B');
boolean b352_39 = (buffer[i + 352] == 'M');
boolean b352_40 = (buffer[i + 352] == 'l');
boolean b352_41 = (buffer[i + 352] == 'd');
boolean b352_42 = (buffer[i + 352] == 'h');
boolean b352_43 = (buffer[i + 352] == '/');
boolean b352_44 = (buffer[i + 352] == 'v');
boolean b352_45 = (buffer[i + 352] == 'c');
boolean b352_46 = (buffer[i + 352] == 'w');
boolean b352_47 = (buffer[i + 352] == 'R');
boolean b352_48 = (buffer[i + 352] == 'O');
boolean b352_49 = (buffer[i + 352] == 'f');
boolean b352_50 = (buffer[i + 352] == 'Y');
boolean b352_51 = (buffer[i + 352] == 'q');
boolean b352_52 = (buffer[i + 352] == '_');
boolean b352_53 = (buffer[i + 352] == '+');
boolean b352_54 = (buffer[i + 352] == 'W');
boolean b352_55 = (buffer[i + 352] == 'V');
boolean b352_56 = (buffer[i + 352] == '-');
boolean b352_57 = (buffer[i + 352] == 'P');
boolean b352_58 = (buffer[i + 352] == '?');
boolean b352_59 = (buffer[i + 352] == 'G');
boolean b352_60 = (buffer[i + 352] == 'H');
boolean b352_61 = (buffer[i + 352] == 'y');
boolean b352_62 = (buffer[i + 352] == 'k');
boolean b352_63 = (buffer[i + 352] == '@');
boolean b352_64 = (buffer[i + 352] == '5');
boolean b352_65 = (buffer[i + 352] == 'Q');
boolean b352_66 = (buffer[i + 352] == 'J');
boolean b352_67 = (buffer[i + 352] == 'I');
boolean b352_68 = (buffer[i + 352] == '!');
boolean b352_69 = (buffer[i + 352] == ':');
boolean b352_70 = (buffer[i + 352] == 'z');
boolean b352_71 = (buffer[i + 352] == '6');
boolean b352_72 = (buffer[i + 352] == 'Z');
boolean b353_1 = (buffer[i + 353] == 'i');
boolean b353_2 = (buffer[i + 353] == 'G');
boolean b353_3 = (buffer[i + 353] == '0');
boolean b353_4 = (buffer[i + 353] == 'R');
boolean b353_5 = (buffer[i + 353] == 'P');
boolean b353_6 = (buffer[i + 353] == 'u');
boolean b353_7 = (buffer[i + 353] == 'z');
boolean b353_8 = (buffer[i + 353] == 'a');
boolean b353_9 = (buffer[i + 353] == 'g');
boolean b353_10 = (buffer[i + 353] == 's');
boolean b353_11 = (buffer[i + 353] == '|');
boolean b353_12 = (buffer[i + 353] == ' ');
boolean b353_13 = (buffer[i + 353] == 'C');
boolean b353_14 = (buffer[i + 353] == 'L');
boolean b353_15 = (buffer[i + 353] == 'F');
boolean b353_16 = (buffer[i + 353] == '4');
boolean b353_17 = (buffer[i + 353] == 'p');
boolean b353_18 = (buffer[i + 353] == '9');
boolean b353_19 = (buffer[i + 353] == '8');
boolean b353_20 = (buffer[i + 353] == '/');
boolean b353_21 = (buffer[i + 353] == '2');
boolean b353_22 = (buffer[i + 353] == '1');
boolean b353_23 = (buffer[i + 353] == 'w');
boolean b353_24 = (buffer[i + 353] == '?');
boolean b353_25 = (buffer[i + 353] == 'S');
boolean b353_26 = (buffer[i + 353] == 'B');
boolean b353_27 = (buffer[i + 353] == 'n');
boolean b353_28 = (buffer[i + 353] == 'D');
boolean b353_29 = (buffer[i + 353] == 't');
boolean b353_30 = (buffer[i + 353] == 'f');
boolean b353_31 = (buffer[i + 353] == '=');
boolean b353_32 = (buffer[i + 353] == 'r');
boolean b353_33 = (buffer[i + 353] == 'V');
boolean b353_34 = (buffer[i + 353] == 'E');
boolean b353_35 = (buffer[i + 353] == 'U');
boolean b353_36 = (buffer[i + 353] == 'A');
boolean b353_37 = (buffer[i + 353] == 'o');
boolean b353_38 = (buffer[i + 353] == 'd');
boolean b353_39 = (buffer[i + 353] == 'M');
boolean b353_40 = (buffer[i + 353] == 'c');
boolean b353_41 = (buffer[i + 353] == 'v');
boolean b353_42 = (buffer[i + 353] == '3');
boolean b353_43 = (buffer[i + 353] == '.');
boolean b353_44 = (buffer[i + 353] == 'O');
boolean b353_45 = (buffer[i + 353] == '6');
boolean b353_46 = (buffer[i + 353] == 'l');
boolean b353_47 = (buffer[i + 353] == 'b');
boolean b353_48 = (buffer[i + 353] == 'm');
boolean b353_49 = (buffer[i + 353] == 'e');
boolean b353_50 = (buffer[i + 353] == 'T');
boolean b353_51 = (buffer[i + 353] == '-');
boolean b353_52 = (buffer[i + 353] == 'N');
boolean b353_53 = (buffer[i + 353] == 'x');
boolean b353_54 = (buffer[i + 353] == 'W');
boolean b353_55 = (buffer[i + 353] == 'J');
boolean b353_56 = (buffer[i + 353] == 'h');
boolean b353_57 = (buffer[i + 353] == 'y');
boolean b353_58 = (buffer[i + 353] == 'q');
boolean b353_59 = (buffer[i + 353] == 'I');
boolean b353_60 = (buffer[i + 353] == '[');
boolean b353_61 = (buffer[i + 353] == '5');
boolean b353_62 = (buffer[i + 353] == '_');
boolean b353_63 = (buffer[i + 353] == 'H');
boolean b353_64 = (buffer[i + 353] == 'k');
boolean b353_65 = (buffer[i + 353] == ',');
boolean b353_66 = (buffer[i + 353] == '<');
boolean b353_67 = (buffer[i + 353] == 'Y');
boolean b353_68 = (buffer[i + 353] == 'K');
boolean b353_69 = (buffer[i + 353] == '%');
boolean b353_70 = (buffer[i + 353] == ':');
boolean b353_71 = (buffer[i + 353] == '+');
boolean b353_72 = (buffer[i + 353] == 'j');
boolean b353_73 = (buffer[i + 353] == '7');
boolean b353_74 = (buffer[i + 353] == '(');
boolean b353_75 = (buffer[i + 353] == ')');
boolean b353_76 = (buffer[i + 353] == '&');
boolean b354_1 = (buffer[i + 354] == 'v');
boolean b354_2 = (buffer[i + 354] == 'q');
boolean b354_3 = (buffer[i + 354] == 'e');
boolean b354_4 = (buffer[i + 354] == ' ');
boolean b354_5 = (buffer[i + 354] == 'a');
boolean b354_6 = (buffer[i + 354] == 't');
boolean b354_7 = (buffer[i + 354] == 'A');
boolean b354_8 = (buffer[i + 354] == 's');
boolean b354_9 = (buffer[i + 354] == 'h');
boolean b354_10 = (buffer[i + 354] == 'l');
boolean b354_11 = (buffer[i + 354] == '0');
boolean b354_12 = (buffer[i + 354] == 'o');
boolean b354_13 = (buffer[i + 354] == 'F');
boolean b354_14 = (buffer[i + 354] == 'D');
boolean b354_15 = (buffer[i + 354] == '|');
boolean b354_16 = (buffer[i + 354] == '2');
boolean b354_17 = (buffer[i + 354] == '1');
boolean b354_18 = (buffer[i + 354] == 'B');
boolean b354_19 = (buffer[i + 354] == '9');
boolean b354_20 = (buffer[i + 354] == 'b');
boolean b354_21 = (buffer[i + 354] == 'u');
boolean b354_22 = (buffer[i + 354] == '8');
boolean b354_23 = (buffer[i + 354] == '/');
boolean b354_24 = (buffer[i + 354] == '3');
boolean b354_25 = (buffer[i + 354] == 'c');
boolean b354_26 = (buffer[i + 354] == 'S');
boolean b354_27 = (buffer[i + 354] == 'p');
boolean b354_28 = (buffer[i + 354] == 'g');
boolean b354_29 = (buffer[i + 354] == '=');
boolean b354_30 = (buffer[i + 354] == 'O');
boolean b354_31 = (buffer[i + 354] == 'W');
boolean b354_32 = (buffer[i + 354] == 'E');
boolean b354_33 = (buffer[i + 354] == 'P');
boolean b354_34 = (buffer[i + 354] == 'w');
boolean b354_35 = (buffer[i + 354] == '@');
boolean b354_36 = (buffer[i + 354] == 'r');
boolean b354_37 = (buffer[i + 354] == 'I');
boolean b354_38 = (buffer[i + 354] == 'L');
boolean b354_39 = (buffer[i + 354] == 'N');
boolean b354_40 = (buffer[i + 354] == '-');
boolean b354_41 = (buffer[i + 354] == 'n');
boolean b354_42 = (buffer[i + 354] == '_');
boolean b354_43 = (buffer[i + 354] == 'i');
boolean b354_44 = (buffer[i + 354] == 'm');
boolean b354_45 = (buffer[i + 354] == 'd');
boolean b354_46 = (buffer[i + 354] == 'f');
boolean b354_47 = (buffer[i + 354] == 'U');
boolean b354_48 = (buffer[i + 354] == 'R');
boolean b354_49 = (buffer[i + 354] == 'Y');
boolean b354_50 = (buffer[i + 354] == 'x');
boolean b354_51 = (buffer[i + 354] == 'G');
boolean b354_52 = (buffer[i + 354] == 'J');
boolean b354_53 = (buffer[i + 354] == '?');
boolean b354_54 = (buffer[i + 354] == 'z');
boolean b354_55 = (buffer[i + 354] == 'y');
boolean b354_56 = (buffer[i + 354] == 'C');
boolean b354_57 = (buffer[i + 354] == 'k');
boolean b354_58 = (buffer[i + 354] == 'j');
boolean b354_59 = (buffer[i + 354] == '7');
boolean b354_60 = (buffer[i + 354] == 'M');
boolean b354_61 = (buffer[i + 354] == 'V');
boolean b354_62 = (buffer[i + 354] == '.');
boolean b354_63 = (buffer[i + 354] == 'T');
boolean b354_64 = (buffer[i + 354] == '[');
boolean b354_65 = (buffer[i + 354] == 'H');
boolean b354_66 = (buffer[i + 354] == '%');
boolean b354_67 = (buffer[i + 354] == '>');
boolean b354_68 = (buffer[i + 354] == 'Z');
boolean b354_69 = (buffer[i + 354] == '4');
boolean b354_70 = (buffer[i + 354] == '*');
boolean b354_71 = (buffer[i + 354] == '5');
boolean b354_72 = (buffer[i + 354] == ':');
boolean b354_73 = (buffer[i + 354] == '&');
boolean b355_1 = (buffer[i + 355] == 'e');
boolean b355_2 = (buffer[i + 355] == 'a');
boolean b355_3 = (buffer[i + 355] == 't');
boolean b355_4 = (buffer[i + 355] == '0');
boolean b355_5 = (buffer[i + 355] == 'm');
boolean b355_6 = (buffer[i + 355] == 'W');
boolean b355_7 = (buffer[i + 355] == 'N');
boolean b355_8 = (buffer[i + 355] == 'P');
boolean b355_9 = (buffer[i + 355] == 'l');
boolean b355_10 = (buffer[i + 355] == 'h');
boolean b355_11 = (buffer[i + 355] == 'r');
boolean b355_12 = (buffer[i + 355] == 'A');
boolean b355_13 = (buffer[i + 355] == 'p');
boolean b355_14 = (buffer[i + 355] == 's');
boolean b355_15 = (buffer[i + 355] == 'i');
boolean b355_16 = (buffer[i + 355] == 'n');
boolean b355_17 = (buffer[i + 355] == '7');
boolean b355_18 = (buffer[i + 355] == '.');
boolean b355_19 = (buffer[i + 355] == 'F');
boolean b355_20 = (buffer[i + 355] == ' ');
boolean b355_21 = (buffer[i + 355] == 'E');
boolean b355_22 = (buffer[i + 355] == '2');
boolean b355_23 = (buffer[i + 355] == '|');
boolean b355_24 = (buffer[i + 355] == '%');
boolean b355_25 = (buffer[i + 355] == 'o');
boolean b355_26 = (buffer[i + 355] == '9');
boolean b355_27 = (buffer[i + 355] == 'B');
boolean b355_28 = (buffer[i + 355] == 'b');
boolean b355_29 = (buffer[i + 355] == '-');
boolean b355_30 = (buffer[i + 355] == '1');
boolean b355_31 = (buffer[i + 355] == 'C');
boolean b355_32 = (buffer[i + 355] == '=');
boolean b355_33 = (buffer[i + 355] == 'c');
boolean b355_34 = (buffer[i + 355] == 'D');
boolean b355_35 = (buffer[i + 355] == 'U');
boolean b355_36 = (buffer[i + 355] == '5');
boolean b355_37 = (buffer[i + 355] == '3');
boolean b355_38 = (buffer[i + 355] == 'f');
boolean b355_39 = (buffer[i + 355] == 'R');
boolean b355_40 = (buffer[i + 355] == 'q');
boolean b355_41 = (buffer[i + 355] == '4');
boolean b355_42 = (buffer[i + 355] == '/');
boolean b355_43 = (buffer[i + 355] == ',');
boolean b355_44 = (buffer[i + 355] == 'u');
boolean b355_45 = (buffer[i + 355] == 'w');
boolean b355_46 = (buffer[i + 355] == '_');
boolean b355_47 = (buffer[i + 355] == 'v');
boolean b355_48 = (buffer[i + 355] == 'g');
boolean b355_49 = (buffer[i + 355] == 'd');
boolean b355_50 = (buffer[i + 355] == 'M');
boolean b355_51 = (buffer[i + 355] == 'x');
boolean b355_52 = (buffer[i + 355] == 'S');
boolean b355_53 = (buffer[i + 355] == 'I');
boolean b355_54 = (buffer[i + 355] == '?');
boolean b355_55 = (buffer[i + 355] == 'H');
boolean b355_56 = (buffer[i + 355] == 'G');
boolean b355_57 = (buffer[i + 355] == 'j');
boolean b355_58 = (buffer[i + 355] == '8');
boolean b355_59 = (buffer[i + 355] == 'Q');
boolean b355_60 = (buffer[i + 355] == 'k');
boolean b355_61 = (buffer[i + 355] == 'T');
boolean b355_62 = (buffer[i + 355] == ']');
boolean b355_63 = (buffer[i + 355] == 'y');
boolean b355_64 = (buffer[i + 355] == 'L');
boolean b355_65 = (buffer[i + 355] == 'O');
boolean b355_66 = (buffer[i + 355] == '<');
boolean b355_67 = (buffer[i + 355] == '>');
boolean b355_68 = (buffer[i + 355] == 'z');
boolean b355_69 = (buffer[i + 355] == ':');
boolean b355_70 = (buffer[i + 355] == '6');
boolean b355_71 = (buffer[i + 355] == 'K');
boolean b355_72 = (buffer[i + 355] == 'V');
boolean b355_73 = (buffer[i + 355] == 'J');
boolean b356_1 = (buffer[i + 356] == 's');
boolean b356_2 = (buffer[i + 356] == 'z');
boolean b356_3 = (buffer[i + 356] == 'I');
boolean b356_4 = (buffer[i + 356] == '0');
boolean b356_5 = (buffer[i + 356] == 'W');
boolean b356_6 = (buffer[i + 356] == 'o');
boolean b356_7 = (buffer[i + 356] == 't');
boolean b356_8 = (buffer[i + 356] == 'e');
boolean b356_9 = (buffer[i + 356] == 'c');
boolean b356_10 = (buffer[i + 356] == 'a');
boolean b356_11 = (buffer[i + 356] == ' ');
boolean b356_12 = (buffer[i + 356] == 'b');
boolean b356_13 = (buffer[i + 356] == 'A');
boolean b356_14 = (buffer[i + 356] == 'm');
boolean b356_15 = (buffer[i + 356] == 'u');
boolean b356_16 = (buffer[i + 356] == 'l');
boolean b356_17 = (buffer[i + 356] == 'v');
boolean b356_18 = (buffer[i + 356] == '|');
boolean b356_19 = (buffer[i + 356] == '.');
boolean b356_20 = (buffer[i + 356] == '8');
boolean b356_21 = (buffer[i + 356] == 'B');
boolean b356_22 = (buffer[i + 356] == 'C');
boolean b356_23 = (buffer[i + 356] == '3');
boolean b356_24 = (buffer[i + 356] == 'F');
boolean b356_25 = (buffer[i + 356] == 'N');
boolean b356_26 = (buffer[i + 356] == '9');
boolean b356_27 = (buffer[i + 356] == '>');
boolean b356_28 = (buffer[i + 356] == 'n');
boolean b356_29 = (buffer[i + 356] == 'i');
boolean b356_30 = (buffer[i + 356] == 'H');
boolean b356_31 = (buffer[i + 356] == '2');
boolean b356_32 = (buffer[i + 356] == 'f');
boolean b356_33 = (buffer[i + 356] == '@');
boolean b356_34 = (buffer[i + 356] == 'd');
boolean b356_35 = (buffer[i + 356] == '-');
boolean b356_36 = (buffer[i + 356] == 'p');
boolean b356_37 = (buffer[i + 356] == 'D');
boolean b356_38 = (buffer[i + 356] == '5');
boolean b356_39 = (buffer[i + 356] == 'E');
boolean b356_40 = (buffer[i + 356] == '=');
boolean b356_41 = (buffer[i + 356] == 'r');
boolean b356_42 = (buffer[i + 356] == '1');
boolean b356_43 = (buffer[i + 356] == 'T');
boolean b356_44 = (buffer[i + 356] == '+');
boolean b356_45 = (buffer[i + 356] == 'S');
boolean b356_46 = (buffer[i + 356] == 'q');
boolean b356_47 = (buffer[i + 356] == '!');
boolean b356_48 = (buffer[i + 356] == '7');
boolean b356_49 = (buffer[i + 356] == '~');
boolean b356_50 = (buffer[i + 356] == 'g');
boolean b356_51 = (buffer[i + 356] == 'O');
boolean b356_52 = (buffer[i + 356] == '/');
boolean b356_53 = (buffer[i + 356] == '_');
boolean b356_54 = (buffer[i + 356] == 'w');
boolean b356_55 = (buffer[i + 356] == 'k');
boolean b356_56 = (buffer[i + 356] == 'L');
boolean b356_57 = (buffer[i + 356] == 'h');
boolean b356_58 = (buffer[i + 356] == '%');
boolean b356_59 = (buffer[i + 356] == 'y');
boolean b356_60 = (buffer[i + 356] == 'P');
boolean b356_61 = (buffer[i + 356] == '?');
boolean b356_62 = (buffer[i + 356] == 'j');
boolean b356_63 = (buffer[i + 356] == '[');
boolean b356_64 = (buffer[i + 356] == '6');
boolean b356_65 = (buffer[i + 356] == 'G');
boolean b356_66 = (buffer[i + 356] == 'x');
boolean b356_67 = (buffer[i + 356] == '*');
boolean b356_68 = (buffer[i + 356] == 'R');
boolean b356_69 = (buffer[i + 356] == '4');
boolean b356_70 = (buffer[i + 356] == 'M');
boolean b356_71 = (buffer[i + 356] == '<');
boolean b356_72 = (buffer[i + 356] == 'J');
boolean b356_73 = (buffer[i + 356] == 'U');
boolean b356_74 = (buffer[i + 356] == '\'');
boolean b356_75 = (buffer[i + 356] == 'X');
boolean b356_76 = (buffer[i + 356] == ')');
boolean b356_77 = (buffer[i + 356] == ':');
boolean b356_78 = (buffer[i + 356] == '#');
boolean b356_79 = (buffer[i + 356] == '&');
boolean b356_80 = (buffer[i + 356] == 'Y');
boolean b356_81 = (buffer[i + 356] == 'K');
boolean b356_82 = (buffer[i + 356] == '(');
boolean b357_1 = (buffer[i + 357] == '|');
boolean b357_2 = (buffer[i + 357] == 'w');
boolean b357_3 = (buffer[i + 357] == 'n');
boolean b357_4 = (buffer[i + 357] == ' ');
boolean b357_5 = (buffer[i + 357] == 'H');
boolean b357_6 = (buffer[i + 357] == 't');
boolean b357_7 = (buffer[i + 357] == 'z');
boolean b357_8 = (buffer[i + 357] == 'C');
boolean b357_9 = (buffer[i + 357] == 'r');
boolean b357_10 = (buffer[i + 357] == 'c');
boolean b357_11 = (buffer[i + 357] == 'g');
boolean b357_12 = (buffer[i + 357] == 'I');
boolean b357_13 = (buffer[i + 357] == 'a');
boolean b357_14 = (buffer[i + 357] == 'A');
boolean b357_15 = (buffer[i + 357] == 'o');
boolean b357_16 = (buffer[i + 357] == '*');
boolean b357_17 = (buffer[i + 357] == 'l');
boolean b357_18 = (buffer[i + 357] == 'e');
boolean b357_19 = (buffer[i + 357] == 's');
boolean b357_20 = (buffer[i + 357] == 'v');
boolean b357_21 = (buffer[i + 357] == '/');
boolean b357_22 = (buffer[i + 357] == 'D');
boolean b357_23 = (buffer[i + 357] == '0');
boolean b357_24 = (buffer[i + 357] == '6');
boolean b357_25 = (buffer[i + 357] == 'F');
boolean b357_26 = (buffer[i + 357] == '5');
boolean b357_27 = (buffer[i + 357] == 'E');
boolean b357_28 = (buffer[i + 357] == 'T');
boolean b357_29 = (buffer[i + 357] == '3');
boolean b357_30 = (buffer[i + 357] == '8');
boolean b357_31 = (buffer[i + 357] == '_');
boolean b357_32 = (buffer[i + 357] == 'f');
boolean b357_33 = (buffer[i + 357] == '.');
boolean b357_34 = (buffer[i + 357] == 'd');
boolean b357_35 = (buffer[i + 357] == 'i');
boolean b357_36 = (buffer[i + 357] == '-');
boolean b357_37 = (buffer[i + 357] == 'j');
boolean b357_38 = (buffer[i + 357] == '=');
boolean b357_39 = (buffer[i + 357] == 'S');
boolean b357_40 = (buffer[i + 357] == 'k');
boolean b357_41 = (buffer[i + 357] == 'm');
boolean b357_42 = (buffer[i + 357] == 'b');
boolean b357_43 = (buffer[i + 357] == '+');
boolean b357_44 = (buffer[i + 357] == 'u');
boolean b357_45 = (buffer[i + 357] == 'y');
boolean b357_46 = (buffer[i + 357] == 'P');
boolean b357_47 = (buffer[i + 357] == ',');
boolean b357_48 = (buffer[i + 357] == '4');
boolean b357_49 = (buffer[i + 357] == 'h');
boolean b357_50 = (buffer[i + 357] == '?');
boolean b357_51 = (buffer[i + 357] == 'p');
boolean b357_52 = (buffer[i + 357] == 'x');
boolean b357_53 = (buffer[i + 357] == '2');
boolean b357_54 = (buffer[i + 357] == 'V');
boolean b357_55 = (buffer[i + 357] == '9');
boolean b357_56 = (buffer[i + 357] == 'W');
boolean b357_57 = (buffer[i + 357] == 'O');
boolean b357_58 = (buffer[i + 357] == 'N');
boolean b357_59 = (buffer[i + 357] == 'R');
boolean b357_60 = (buffer[i + 357] == '~');
boolean b357_61 = (buffer[i + 357] == 'U');
boolean b357_62 = (buffer[i + 357] == '1');
boolean b357_63 = (buffer[i + 357] == 'B');
boolean b357_64 = (buffer[i + 357] == 'G');
boolean b357_65 = (buffer[i + 357] == 'Y');
boolean b357_66 = (buffer[i + 357] == 'M');
boolean b357_67 = (buffer[i + 357] == 'X');
boolean b357_68 = (buffer[i + 357] == 'Z');
boolean b357_69 = (buffer[i + 357] == '<');
boolean b357_70 = (buffer[i + 357] == '%');
boolean b357_71 = (buffer[i + 357] == '&');
boolean b357_72 = (buffer[i + 357] == 'J');
boolean b357_73 = (buffer[i + 357] == 'L');
boolean b357_74 = (buffer[i + 357] == '(');
boolean b357_75 = (buffer[i + 357] == 'K');
boolean b357_76 = (buffer[i + 357] == '$');
boolean b358_1 = (buffer[i + 358] == '2');
boolean b358_2 = (buffer[i + 358] == 's');
boolean b358_3 = (buffer[i + 358] == 'f');
boolean b358_4 = (buffer[i + 358] == '0');
boolean b358_5 = (buffer[i + 358] == 'A');
boolean b358_6 = (buffer[i + 358] == 'e');
boolean b358_7 = (buffer[i + 358] == 'u');
boolean b358_8 = (buffer[i + 358] == 'S');
boolean b358_9 = (buffer[i + 358] == 'r');
boolean b358_10 = (buffer[i + 358] == '3');
boolean b358_11 = (buffer[i + 358] == 't');
boolean b358_12 = (buffer[i + 358] == 'g');
boolean b358_13 = (buffer[i + 358] == 'B');
boolean b358_14 = (buffer[i + 358] == 'y');
boolean b358_15 = (buffer[i + 358] == 'w');
boolean b358_16 = (buffer[i + 358] == 'c');
boolean b358_17 = (buffer[i + 358] == 'l');
boolean b358_18 = (buffer[i + 358] == 'd');
boolean b358_19 = (buffer[i + 358] == 'i');
boolean b358_20 = (buffer[i + 358] == 'H');
boolean b358_21 = (buffer[i + 358] == 'k');
boolean b358_22 = (buffer[i + 358] == '4');
boolean b358_23 = (buffer[i + 358] == ' ');
boolean b358_24 = (buffer[i + 358] == '8');
boolean b358_25 = (buffer[i + 358] == '.');
boolean b358_26 = (buffer[i + 358] == 'M');
boolean b358_27 = (buffer[i + 358] == 'b');
boolean b358_28 = (buffer[i + 358] == '|');
boolean b358_29 = (buffer[i + 358] == 'L');
boolean b358_30 = (buffer[i + 358] == '+');
boolean b358_31 = (buffer[i + 358] == 'F');
boolean b358_32 = (buffer[i + 358] == '7');
boolean b358_33 = (buffer[i + 358] == '5');
boolean b358_34 = (buffer[i + 358] == 'T');
boolean b358_35 = (buffer[i + 358] == '9');
boolean b358_36 = (buffer[i + 358] == '6');
boolean b358_37 = (buffer[i + 358] == 'o');
boolean b358_38 = (buffer[i + 358] == '-');
boolean b358_39 = (buffer[i + 358] == '1');
boolean b358_40 = (buffer[i + 358] == '=');
boolean b358_41 = (buffer[i + 358] == 'D');
boolean b358_42 = (buffer[i + 358] == 'E');
boolean b358_43 = (buffer[i + 358] == ',');
boolean b358_44 = (buffer[i + 358] == 'p');
boolean b358_45 = (buffer[i + 358] == 'P');
boolean b358_46 = (buffer[i + 358] == 'n');
boolean b358_47 = (buffer[i + 358] == 'O');
boolean b358_48 = (buffer[i + 358] == 'C');
boolean b358_49 = (buffer[i + 358] == '`');
boolean b358_50 = (buffer[i + 358] == '/');
boolean b358_51 = (buffer[i + 358] == 'a');
boolean b358_52 = (buffer[i + 358] == '?');
boolean b358_53 = (buffer[i + 358] == 'x');
boolean b358_54 = (buffer[i + 358] == 'h');
boolean b358_55 = (buffer[i + 358] == 'm');
boolean b358_56 = (buffer[i + 358] == 'v');
boolean b358_57 = (buffer[i + 358] == 'I');
boolean b358_58 = (buffer[i + 358] == 'R');
boolean b358_59 = (buffer[i + 358] == '_');
boolean b358_60 = (buffer[i + 358] == 'q');
boolean b358_61 = (buffer[i + 358] == 'V');
boolean b358_62 = (buffer[i + 358] == 'N');
boolean b358_63 = (buffer[i + 358] == 'U');
boolean b358_64 = (buffer[i + 358] == '!');
boolean b358_65 = (buffer[i + 358] == 'K');
boolean b358_66 = (buffer[i + 358] == 'W');
boolean b358_67 = (buffer[i + 358] == 'Q');
boolean b358_68 = (buffer[i + 358] == 'X');
boolean b358_69 = (buffer[i + 358] == '%');
boolean b358_70 = (buffer[i + 358] == '$');
boolean b358_71 = (buffer[i + 358] == 'G');
boolean b358_72 = (buffer[i + 358] == '>');
boolean b358_73 = (buffer[i + 358] == 'z');
boolean b358_74 = (buffer[i + 358] == '&');
boolean b358_75 = (buffer[i + 358] == '<');
boolean b358_76 = (buffer[i + 358] == 'j');
boolean b358_77 = (buffer[i + 358] == 'Z');
boolean b359_1 = (buffer[i + 359] == '4');
boolean b359_2 = (buffer[i + 359] == 'x');
boolean b359_3 = (buffer[i + 359] == 'o');
boolean b359_4 = (buffer[i + 359] == '2');
boolean b359_5 = (buffer[i + 359] == 'T');
boolean b359_6 = (buffer[i + 359] == '|');
boolean b359_7 = (buffer[i + 359] == 'p');
boolean b359_8 = (buffer[i + 359] == 'a');
boolean b359_9 = (buffer[i + 359] == 'A');
boolean b359_10 = (buffer[i + 359] == 'F');
boolean b359_11 = (buffer[i + 359] == ' ');
boolean b359_12 = (buffer[i + 359] == 'i');
boolean b359_13 = (buffer[i + 359] == 'e');
boolean b359_14 = (buffer[i + 359] == '0');
boolean b359_15 = (buffer[i + 359] == 'k');
boolean b359_16 = (buffer[i + 359] == 'h');
boolean b359_17 = (buffer[i + 359] == 'r');
boolean b359_18 = (buffer[i + 359] == '1');
boolean b359_19 = (buffer[i + 359] == 't');
boolean b359_20 = (buffer[i + 359] == 'w');
boolean b359_21 = (buffer[i + 359] == 'n');
boolean b359_22 = (buffer[i + 359] == 'E');
boolean b359_23 = (buffer[i + 359] == 'O');
boolean b359_24 = (buffer[i + 359] == 'b');
boolean b359_25 = (buffer[i + 359] == '.');
boolean b359_26 = (buffer[i + 359] == 's');
boolean b359_27 = (buffer[i + 359] == 'R');
boolean b359_28 = (buffer[i + 359] == '^');
boolean b359_29 = (buffer[i + 359] == '<');
boolean b359_30 = (buffer[i + 359] == '+');
boolean b359_31 = (buffer[i + 359] == 'D');
boolean b359_32 = (buffer[i + 359] == '9');
boolean b359_33 = (buffer[i + 359] == 'M');
boolean b359_34 = (buffer[i + 359] == '3');
boolean b359_35 = (buffer[i + 359] == 'P');
boolean b359_36 = (buffer[i + 359] == 'B');
boolean b359_37 = (buffer[i + 359] == 'V');
boolean b359_38 = (buffer[i + 359] == 'd');
boolean b359_39 = (buffer[i + 359] == '@');
boolean b359_40 = (buffer[i + 359] == 'g');
boolean b359_41 = (buffer[i + 359] == '6');
boolean b359_42 = (buffer[i + 359] == 'm');
boolean b359_43 = (buffer[i + 359] == 'l');
boolean b359_44 = (buffer[i + 359] == '=');
boolean b359_45 = (buffer[i + 359] == 'y');
boolean b359_46 = (buffer[i + 359] == 'L');
boolean b359_47 = (buffer[i + 359] == 'N');
boolean b359_48 = (buffer[i + 359] == 'C');
boolean b359_49 = (buffer[i + 359] == 'G');
boolean b359_50 = (buffer[i + 359] == '5');
boolean b359_51 = (buffer[i + 359] == '7');
boolean b359_52 = (buffer[i + 359] == '/');
boolean b359_53 = (buffer[i + 359] == 'f');
boolean b359_54 = (buffer[i + 359] == '_');
boolean b359_55 = (buffer[i + 359] == 'v');
boolean b359_56 = (buffer[i + 359] == 'c');
boolean b359_57 = (buffer[i + 359] == 'u');
boolean b359_58 = (buffer[i + 359] == 'q');
boolean b359_59 = (buffer[i + 359] == 'z');
boolean b359_60 = (buffer[i + 359] == 'W');
boolean b359_61 = (buffer[i + 359] == '8');
boolean b359_62 = (buffer[i + 359] == '*');
boolean b359_63 = (buffer[i + 359] == 'S');
boolean b359_64 = (buffer[i + 359] == '?');
boolean b359_65 = (buffer[i + 359] == '%');
boolean b359_66 = (buffer[i + 359] == '~');
boolean b359_67 = (buffer[i + 359] == '-');
boolean b359_68 = (buffer[i + 359] == 'K');
boolean b359_69 = (buffer[i + 359] == 'I');
boolean b359_70 = (buffer[i + 359] == 'H');
boolean b359_71 = (buffer[i + 359] == 'Y');
boolean b359_72 = (buffer[i + 359] == 'J');
boolean b359_73 = (buffer[i + 359] == ',');
boolean b359_74 = (buffer[i + 359] == 'X');
boolean b359_75 = (buffer[i + 359] == 'U');
boolean b359_76 = (buffer[i + 359] == ']');
boolean b359_77 = (buffer[i + 359] == '\'');
boolean b359_78 = (buffer[i + 359] == 'j');
boolean b359_79 = (buffer[i + 359] == '$');
boolean b359_80 = (buffer[i + 359] == ':');
boolean b359_81 = (buffer[i + 359] == '&');
boolean b359_82 = (buffer[i + 359] == '>');
boolean b359_83 = (buffer[i + 359] == ')');
boolean b359_84 = (buffer[i + 359] == '(');
boolean b360_1 = (buffer[i + 360] == ' ');
boolean b360_2 = (buffer[i + 360] == '.');
boolean b360_3 = (buffer[i + 360] == '|');
boolean b360_4 = (buffer[i + 360] == 'I');
boolean b360_5 = (buffer[i + 360] == '3');
boolean b360_6 = (buffer[i + 360] == 'h');
boolean b360_7 = (buffer[i + 360] == 'U');
boolean b360_8 = (buffer[i + 360] == 's');
boolean b360_9 = (buffer[i + 360] == 'T');
boolean b360_10 = (buffer[i + 360] == 'o');
boolean b360_11 = (buffer[i + 360] == 'v');
boolean b360_12 = (buffer[i + 360] == 'd');
boolean b360_13 = (buffer[i + 360] == 'i');
boolean b360_14 = (buffer[i + 360] == 'O');
boolean b360_15 = (buffer[i + 360] == 'r');
boolean b360_16 = (buffer[i + 360] == '0');
boolean b360_17 = (buffer[i + 360] == 'k');
boolean b360_18 = (buffer[i + 360] == 't');
boolean b360_19 = (buffer[i + 360] == 'a');
boolean b360_20 = (buffer[i + 360] == 'w');
boolean b360_21 = (buffer[i + 360] == '1');
boolean b360_22 = (buffer[i + 360] == 'A');
boolean b360_23 = (buffer[i + 360] == 'P');
boolean b360_24 = (buffer[i + 360] == 'c');
boolean b360_25 = (buffer[i + 360] == 'L');
boolean b360_26 = (buffer[i + 360] == 'l');
boolean b360_27 = (buffer[i + 360] == 'e');
boolean b360_28 = (buffer[i + 360] == 'p');
boolean b360_29 = (buffer[i + 360] == '/');
boolean b360_30 = (buffer[i + 360] == 'n');
boolean b360_31 = (buffer[i + 360] == '+');
boolean b360_32 = (buffer[i + 360] == 'N');
boolean b360_33 = (buffer[i + 360] == 'D');
boolean b360_34 = (buffer[i + 360] == '8');
boolean b360_35 = (buffer[i + 360] == '2');
boolean b360_36 = (buffer[i + 360] == '@');
boolean b360_37 = (buffer[i + 360] == 'R');
boolean b360_38 = (buffer[i + 360] == '%');
boolean b360_39 = (buffer[i + 360] == 'S');
boolean b360_40 = (buffer[i + 360] == 'm');
boolean b360_41 = (buffer[i + 360] == '=');
boolean b360_42 = (buffer[i + 360] == 'F');
boolean b360_43 = (buffer[i + 360] == 'E');
boolean b360_44 = (buffer[i + 360] == '<');
boolean b360_45 = (buffer[i + 360] == 'M');
boolean b360_46 = (buffer[i + 360] == '5');
boolean b360_47 = (buffer[i + 360] == 'z');
boolean b360_48 = (buffer[i + 360] == 'G');
boolean b360_49 = (buffer[i + 360] == 'W');
boolean b360_50 = (buffer[i + 360] == 'K');
boolean b360_51 = (buffer[i + 360] == 'H');
boolean b360_52 = (buffer[i + 360] == 'b');
boolean b360_53 = (buffer[i + 360] == '\'');
boolean b360_54 = (buffer[i + 360] == 'f');
boolean b360_55 = (buffer[i + 360] == '_');
boolean b360_56 = (buffer[i + 360] == 'Y');
boolean b360_57 = (buffer[i + 360] == '-');
boolean b360_58 = (buffer[i + 360] == 'g');
boolean b360_59 = (buffer[i + 360] == 'u');
boolean b360_60 = (buffer[i + 360] == 'C');
boolean b360_61 = (buffer[i + 360] == '?');
boolean b360_62 = (buffer[i + 360] == 'y');
boolean b360_63 = (buffer[i + 360] == 'V');
boolean b360_64 = (buffer[i + 360] == '~');
boolean b360_65 = (buffer[i + 360] == ',');
boolean b360_66 = (buffer[i + 360] == 'B');
boolean b360_67 = (buffer[i + 360] == 'X');
boolean b360_68 = (buffer[i + 360] == 'x');
boolean b360_69 = (buffer[i + 360] == 'j');
boolean b360_70 = (buffer[i + 360] == 'Z');
boolean b360_71 = (buffer[i + 360] == '7');
boolean b360_72 = (buffer[i + 360] == 'J');
boolean b360_73 = (buffer[i + 360] == '4');
boolean b360_74 = (buffer[i + 360] == '9');
boolean b360_75 = (buffer[i + 360] == 'q');
boolean b360_76 = (buffer[i + 360] == ':');
boolean b360_77 = (buffer[i + 360] == '&');
boolean b360_78 = (buffer[i + 360] == '(');
boolean b360_79 = (buffer[i + 360] == '6');
boolean b361_1 = (buffer[i + 361] == '0');
boolean b361_2 = (buffer[i + 361] == 'h');
boolean b361_3 = (buffer[i + 361] == 'S');
boolean b361_4 = (buffer[i + 361] == 'A');
boolean b361_5 = (buffer[i + 361] == 'U');
boolean b361_6 = (buffer[i + 361] == 'F');
boolean b361_7 = (buffer[i + 361] == 'o');
boolean b361_8 = (buffer[i + 361] == 'e');
boolean b361_9 = (buffer[i + 361] == '5');
boolean b361_10 = (buffer[i + 361] == 'P');
boolean b361_11 = (buffer[i + 361] == 'p');
boolean b361_12 = (buffer[i + 361] == 'a');
boolean b361_13 = (buffer[i + 361] == ' ');
boolean b361_14 = (buffer[i + 361] == 'B');
boolean b361_15 = (buffer[i + 361] == 'v');
boolean b361_16 = (buffer[i + 361] == 'w');
boolean b361_17 = (buffer[i + 361] == 'r');
boolean b361_18 = (buffer[i + 361] == 'x');
boolean b361_19 = (buffer[i + 361] == 'd');
boolean b361_20 = (buffer[i + 361] == '2');
boolean b361_21 = (buffer[i + 361] == 'O');
boolean b361_22 = (buffer[i + 361] == 'k');
boolean b361_23 = (buffer[i + 361] == 'l');
boolean b361_24 = (buffer[i + 361] == '3');
boolean b361_25 = (buffer[i + 361] == 'L');
boolean b361_26 = (buffer[i + 361] == 'i');
boolean b361_27 = (buffer[i + 361] == 'u');
boolean b361_28 = (buffer[i + 361] == 'j');
boolean b361_29 = (buffer[i + 361] == '8');
boolean b361_30 = (buffer[i + 361] == '.');
boolean b361_31 = (buffer[i + 361] == 'C');
boolean b361_32 = (buffer[i + 361] == '/');
boolean b361_33 = (buffer[i + 361] == 'm');
boolean b361_34 = (buffer[i + 361] == '|');
boolean b361_35 = (buffer[i + 361] == '9');
boolean b361_36 = (buffer[i + 361] == '4');
boolean b361_37 = (buffer[i + 361] == '1');
boolean b361_38 = (buffer[i + 361] == 'E');
boolean b361_39 = (buffer[i + 361] == 't');
boolean b361_40 = (buffer[i + 361] == '7');
boolean b361_41 = (buffer[i + 361] == 's');
boolean b361_42 = (buffer[i + 361] == 'I');
boolean b361_43 = (buffer[i + 361] == 'D');
boolean b361_44 = (buffer[i + 361] == 'n');
boolean b361_45 = (buffer[i + 361] == '=');
boolean b361_46 = (buffer[i + 361] == 'G');
boolean b361_47 = (buffer[i + 361] == 'J');
boolean b361_48 = (buffer[i + 361] == 'T');
boolean b361_49 = (buffer[i + 361] == 'Y');
boolean b361_50 = (buffer[i + 361] == 'g');
boolean b361_51 = (buffer[i + 361] == 'M');
boolean b361_52 = (buffer[i + 361] == 'c');
boolean b361_53 = (buffer[i + 361] == 'b');
boolean b361_54 = (buffer[i + 361] == 'f');
boolean b361_55 = (buffer[i + 361] == 'R');
boolean b361_56 = (buffer[i + 361] == 'q');
boolean b361_57 = (buffer[i + 361] == '%');
boolean b361_58 = (buffer[i + 361] == '*');
boolean b361_59 = (buffer[i + 361] == '?');
boolean b361_60 = (buffer[i + 361] == 'V');
boolean b361_61 = (buffer[i + 361] == 'z');
boolean b361_62 = (buffer[i + 361] == 'N');
boolean b361_63 = (buffer[i + 361] == 'X');
boolean b361_64 = (buffer[i + 361] == 'H');
boolean b361_65 = (buffer[i + 361] == 'W');
boolean b361_66 = (buffer[i + 361] == '_');
boolean b361_67 = (buffer[i + 361] == 'y');
boolean b361_68 = (buffer[i + 361] == '-');
boolean b361_69 = (buffer[i + 361] == ',');
boolean b361_70 = (buffer[i + 361] == 'K');
boolean b361_71 = (buffer[i + 361] == '&');
boolean b361_72 = (buffer[i + 361] == ')');
boolean b361_73 = (buffer[i + 361] == '6');
boolean b361_74 = (buffer[i + 361] == ':');
boolean b362_1 = (buffer[i + 362] == '0');
boolean b362_2 = (buffer[i + 362] == 's');
boolean b362_3 = (buffer[i + 362] == 'D');
boolean b362_4 = (buffer[i + 362] == 'I');
boolean b362_5 = (buffer[i + 362] == '|');
boolean b362_6 = (buffer[i + 362] == 'C');
boolean b362_7 = (buffer[i + 362] == 'E');
boolean b362_8 = (buffer[i + 362] == 'r');
boolean b362_9 = (buffer[i + 362] == 'e');
boolean b362_10 = (buffer[i + 362] == 'O');
boolean b362_11 = (buffer[i + 362] == 't');
boolean b362_12 = (buffer[i + 362] == 'i');
boolean b362_13 = (buffer[i + 362] == '4');
boolean b362_14 = (buffer[i + 362] == 'c');
boolean b362_15 = (buffer[i + 362] == 'o');
boolean b362_16 = (buffer[i + 362] == 'w');
boolean b362_17 = (buffer[i + 362] == 'h');
boolean b362_18 = (buffer[i + 362] == 'a');
boolean b362_19 = (buffer[i + 362] == 'g');
boolean b362_20 = (buffer[i + 362] == 'n');
boolean b362_21 = (buffer[i + 362] == '3');
boolean b362_22 = (buffer[i + 362] == 'A');
boolean b362_23 = (buffer[i + 362] == 'N');
boolean b362_24 = (buffer[i + 362] == 'k');
boolean b362_25 = (buffer[i + 362] == 'l');
boolean b362_26 = (buffer[i + 362] == 'v');
boolean b362_27 = (buffer[i + 362] == 'm');
boolean b362_28 = (buffer[i + 362] == '.');
boolean b362_29 = (buffer[i + 362] == 'K');
boolean b362_30 = (buffer[i + 362] == '5');
boolean b362_31 = (buffer[i + 362] == '8');
boolean b362_32 = (buffer[i + 362] == '6');
boolean b362_33 = (buffer[i + 362] == 'M');
boolean b362_34 = (buffer[i + 362] == '9');
boolean b362_35 = (buffer[i + 362] == 'f');
boolean b362_36 = (buffer[i + 362] == '2');
boolean b362_37 = (buffer[i + 362] == 'B');
boolean b362_38 = (buffer[i + 362] == '/');
boolean b362_39 = (buffer[i + 362] == 'P');
boolean b362_40 = (buffer[i + 362] == ' ');
boolean b362_41 = (buffer[i + 362] == '@');
boolean b362_42 = (buffer[i + 362] == 'W');
boolean b362_43 = (buffer[i + 362] == 'T');
boolean b362_44 = (buffer[i + 362] == 'u');
boolean b362_45 = (buffer[i + 362] == 'F');
boolean b362_46 = (buffer[i + 362] == '7');
boolean b362_47 = (buffer[i + 362] == 'S');
boolean b362_48 = (buffer[i + 362] == '=');
boolean b362_49 = (buffer[i + 362] == 'R');
boolean b362_50 = (buffer[i + 362] == 'H');
boolean b362_51 = (buffer[i + 362] == '>');
boolean b362_52 = (buffer[i + 362] == 'd');
boolean b362_53 = (buffer[i + 362] == 'G');
boolean b362_54 = (buffer[i + 362] == '1');
boolean b362_55 = (buffer[i + 362] == 'L');
boolean b362_56 = (buffer[i + 362] == 'p');
boolean b362_57 = (buffer[i + 362] == 'x');
boolean b362_58 = (buffer[i + 362] == 'q');
boolean b362_59 = (buffer[i + 362] == '?');
boolean b362_60 = (buffer[i + 362] == 'X');
boolean b362_61 = (buffer[i + 362] == 'U');
boolean b362_62 = (buffer[i + 362] == '-');
boolean b362_63 = (buffer[i + 362] == 'j');
boolean b362_64 = (buffer[i + 362] == 'y');
boolean b362_65 = (buffer[i + 362] == '%');
boolean b362_66 = (buffer[i + 362] == '*');
boolean b362_67 = (buffer[i + 362] == '_');
boolean b362_68 = (buffer[i + 362] == 'b');
boolean b362_69 = (buffer[i + 362] == '<');
boolean b362_70 = (buffer[i + 362] == 'V');
boolean b362_71 = (buffer[i + 362] == 'z');
boolean b362_72 = (buffer[i + 362] == 'Q');
boolean b362_73 = (buffer[i + 362] == ':');
boolean b362_74 = (buffer[i + 362] == '(');
boolean b363_1 = (buffer[i + 363] == '|');
boolean b363_2 = (buffer[i + 363] == 'q');
boolean b363_3 = (buffer[i + 363] == 'T');
boolean b363_4 = (buffer[i + 363] == ' ');
boolean b363_5 = (buffer[i + 363] == 'e');
boolean b363_6 = (buffer[i + 363] == 't');
boolean b363_7 = (buffer[i + 363] == 'R');
boolean b363_8 = (buffer[i + 363] == 'r');
boolean b363_9 = (buffer[i + 363] == 'N');
boolean b363_10 = (buffer[i + 363] == 'n');
boolean b363_11 = (buffer[i + 363] == 'a');
boolean b363_12 = (buffer[i + 363] == '0');
boolean b363_13 = (buffer[i + 363] == '!');
boolean b363_14 = (buffer[i + 363] == 'x');
boolean b363_15 = (buffer[i + 363] == '[');
boolean b363_16 = (buffer[i + 363] == 'i');
boolean b363_17 = (buffer[i + 363] == 'y');
boolean b363_18 = (buffer[i + 363] == 'k');
boolean b363_19 = (buffer[i + 363] == '4');
boolean b363_20 = (buffer[i + 363] == 'A');
boolean b363_21 = (buffer[i + 363] == 'G');
boolean b363_22 = (buffer[i + 363] == 's');
boolean b363_23 = (buffer[i + 363] == 'z');
boolean b363_24 = (buffer[i + 363] == '*');
boolean b363_25 = (buffer[i + 363] == 'l');
boolean b363_26 = (buffer[i + 363] == 'd');
boolean b363_27 = (buffer[i + 363] == 'u');
boolean b363_28 = (buffer[i + 363] == '/');
boolean b363_29 = (buffer[i + 363] == 'g');
boolean b363_30 = (buffer[i + 363] == '>');
boolean b363_31 = (buffer[i + 363] == 'S');
boolean b363_32 = (buffer[i + 363] == 'h');
boolean b363_33 = (buffer[i + 363] == '?');
boolean b363_34 = (buffer[i + 363] == 'E');
boolean b363_35 = (buffer[i + 363] == 'P');
boolean b363_36 = (buffer[i + 363] == '1');
boolean b363_37 = (buffer[i + 363] == '6');
boolean b363_38 = (buffer[i + 363] == 'w');
boolean b363_39 = (buffer[i + 363] == '+');
boolean b363_40 = (buffer[i + 363] == 'F');
boolean b363_41 = (buffer[i + 363] == 'f');
boolean b363_42 = (buffer[i + 363] == '@');
boolean b363_43 = (buffer[i + 363] == '.');
boolean b363_44 = (buffer[i + 363] == 'D');
boolean b363_45 = (buffer[i + 363] == 'L');
boolean b363_46 = (buffer[i + 363] == 'o');
boolean b363_47 = (buffer[i + 363] == 'p');
boolean b363_48 = (buffer[i + 363] == '=');
boolean b363_49 = (buffer[i + 363] == 'Q');
boolean b363_50 = (buffer[i + 363] == 'I');
boolean b363_51 = (buffer[i + 363] == 'm');
boolean b363_52 = (buffer[i + 363] == 'c');
boolean b363_53 = (buffer[i + 363] == 'K');
boolean b363_54 = (buffer[i + 363] == '%');
boolean b363_55 = (buffer[i + 363] == '\'');
boolean b363_56 = (buffer[i + 363] == 'B');
boolean b363_57 = (buffer[i + 363] == '2');
boolean b363_58 = (buffer[i + 363] == '&');
boolean b363_59 = (buffer[i + 363] == '3');
boolean b363_60 = (buffer[i + 363] == 'b');
boolean b363_61 = (buffer[i + 363] == '_');
boolean b363_62 = (buffer[i + 363] == '-');
boolean b363_63 = (buffer[i + 363] == 'j');
boolean b363_64 = (buffer[i + 363] == ']');
boolean b363_65 = (buffer[i + 363] == '~');
boolean b363_66 = (buffer[i + 363] == 'C');
boolean b363_67 = (buffer[i + 363] == 'O');
boolean b363_68 = (buffer[i + 363] == '`');
boolean b363_69 = (buffer[i + 363] == 'M');
boolean b363_70 = (buffer[i + 363] == 'v');
boolean b363_71 = (buffer[i + 363] == 'H');
boolean b363_72 = (buffer[i + 363] == '}');
boolean b363_73 = (buffer[i + 363] == 'Y');
boolean b363_74 = (buffer[i + 363] == 'U');
boolean b363_75 = (buffer[i + 363] == 'Z');
boolean b363_76 = (buffer[i + 363] == 'V');
boolean b363_77 = (buffer[i + 363] == ')');
boolean b363_78 = (buffer[i + 363] == ':');
boolean b363_79 = (buffer[i + 363] == '(');
boolean b363_80 = (buffer[i + 363] == '#');
boolean b363_81 = (buffer[i + 363] == '{');
boolean b363_82 = (buffer[i + 363] == '7');
boolean b363_83 = (buffer[i + 363] == '5');
if(b363_4) {
pattern_id = 0;
}
if(b359_11 && b360_78 && b361_72 && b362_40 && b363_81) {
pattern_id = 1;
}
if(b340_6 && b341_15 && b342_16 && b343_15 && b344_13 && b345_17 && b346_16 && b347_9 && b348_15 && b349_17 && b350_19 && b351_21 && b352_23 && b353_10 && b354_8 && b355_29 && b356_36 && b357_9 && b358_37 && b359_40 && b360_15 && b361_12 && b362_27 && b363_4) {
pattern_id = 2;
}
if(b359_11 && b360_2 && b361_2 && b362_11 && b363_8) {
pattern_id = 3;
}
if(b360_1 && b361_30 && b362_56 && b363_25) {
pattern_id = 4;
}
if(b355_20 && b356_52 && b357_5 && b358_34 && b359_5 && b360_23 && b361_32 && b362_54 && b363_43) {
pattern_id = 5;
}
if(b360_1 && b361_38 && b362_33 && b363_40) {
pattern_id = 6;
}
if(b358_23 && b359_70 && b360_9 && b361_48 && b362_39 && b363_28) {
pattern_id = 7;
}
if(b343_6 && b344_61 && b345_53 && b346_38 && b347_17 && b348_40 && b349_13 && b350_17 && b351_17 && b352_11 && b353_3 && b354_14 && b355_20 && b356_4 && b357_14 && b358_28 && b359_70 && b360_10 && b361_41 && b362_11 && b363_78) {
pattern_id = 8;
}
if(b173_1 && b174_3 && b175_3 && b176_3 && b177_2 && b178_3 && b179_3 && b180_3 && b181_2 && b182_3 && b183_1 && b184_3 && b185_1 && b186_2 && b187_3 && b188_2 && b189_4 && b190_4 && b191_4 && b192_4 && b193_5 && b194_5 && b195_5 && b196_5 && b197_4 && b198_5 && b199_5 && b200_3 && b201_1 && b202_6 && b203_1 && b204_1 && b205_5 && b206_5 && b207_4 && b208_6 && b209_5 && b210_5 && b211_4 && b212_6 && b213_6 && b214_6 && b215_5 && b216_5 && b217_6 && b218_6 && b219_7 && b220_6 && b221_6 && b222_6 && b223_6 && b224_6 && b225_6 && b226_7 && b227_7 && b228_7 && b229_6 && b230_6 && b231_8 && b232_6 && b233_8 && b234_10 && b235_8 && b236_6 && b237_8 && b238_8 && b239_8 && b240_9 && b241_7 && b242_8 && b243_7 && b244_3 && b245_8 && b246_5 && b247_6 && b248_7 && b249_8 && b250_6 && b251_7 && b252_7 && b253_7 && b254_6 && b255_9 && b256_9 && b257_4 && b258_10 && b259_9 && b260_3 && b261_9 && b262_1 && b263_12 && b264_10 && b265_9 && b266_8 && b267_10 && b268_1 && b269_13 && b270_12 && b271_12 && b272_2 && b273_10 && b274_15 && b275_13 && b276_11 && b277_9 && b278_15 && b279_13 && b280_17 && b281_16 && b282_15 && b283_10 && b284_2 && b285_17 && b286_18 && b287_17 && b288_8 && b289_1 && b290_6 && b291_20 && b292_18 && b293_8 && b294_19 && b295_16 && b296_18 && b297_18 && b298_9 && b299_21 && b300_4 && b301_19 && b302_17 && b303_2 && b304_9 && b305_12 && b306_22 && b307_26 && b308_26 && b309_11 && b310_3 && b311_25 && b312_20 && b313_7 && b314_2 && b315_32 && b316_37 && b317_29 && b318_31 && b319_37 && b320_20 && b321_5 && b322_39 && b323_2 && b324_41 && b325_17 && b326_38 && b327_42 && b328_2 && b329_25 && b330_46 && b331_1 && b332_6 && b333_1 && b334_1 && b335_16 && b336_1 && b337_5 && b338_1 && b339_39 && b340_8 && b341_35 && b342_27 && b343_54 && b344_8 && b345_38 && b346_32 && b347_15 && b348_28 && b349_59 && b350_7 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 9;
}
if(b318_4 && b319_41 && b320_43 && b321_42 && b322_42 && b323_17 && b324_43 && b325_30 && b326_6 && b327_3 && b328_9 && b329_49 && b330_8 && b331_1 && b332_17 && b333_2 && b334_47 && b335_31 && b336_20 && b337_36 && b338_52 && b339_41 && b340_25 && b341_8 && b342_25 && b343_3 && b344_59 && b345_3 && b346_49 && b347_5 && b348_62 && b349_18 && b350_42 && b351_45 && b352_21 && b353_20 && b354_71 && b355_18 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 10;
}
if(b356_11 && b357_72 && b358_51 && b359_55 && b360_19 && b361_32 && b362_54 && b363_43) {
pattern_id = 11;
}
if(b357_4 && b358_15 && b359_16 && b360_27 && b361_17 && b362_9 && b363_4) {
pattern_id = 12;
}
if(b350_3 && b351_2 && b352_7 && b353_16 && b354_4 && b355_58 && b356_31 && b357_4 && b358_4 && b359_18 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 13;
}
if(b358_64 && b359_39 && b360_3 && b361_20 && b362_21 && b363_1) {
pattern_id = 14;
}
if(b363_54) {
pattern_id = 15;
}
if(b361_57 && b362_54 && b363_27) {
pattern_id = 16;
}
if(b361_57 && b362_36 && b363_12) {
pattern_id = 17;
}
if(b356_58 && b357_53 && b358_33 && b359_4 && b360_27 && b361_28 && b362_2 && b363_47) {
pattern_id = 18;
}
if(b351_53 && b352_35 && b353_28 && b354_66 && b355_22 && b356_20 && b357_70 && b358_1 && b359_32 && b360_31 && b361_57 && b362_46 && b363_56) {
pattern_id = 19;
}
if(b347_60 && b348_31 && b349_40 && b350_65 && b351_52 && b352_33 && b353_34 && b354_48 && b355_52 && b356_60 && b357_59 && b358_47 && b359_10 && b360_4 && b361_25 && b362_7 && b363_54) {
pattern_id = 20;
}
if(b355_24 && b356_13 && b357_46 && b358_45 && b359_31 && b360_22 && b361_48 && b362_22 && b363_54) {
pattern_id = 21;
}
if(b344_57 && b345_8 && b346_19 && b347_52 && b348_2 && b349_64 && b350_2 && b351_19 && b352_47 && b353_44 && b354_51 && b355_39 && b356_13 && b357_66 && b358_31 && b359_69 && b360_25 && b361_38 && b362_47 && b363_54) {
pattern_id = 22;
}
if(b333_44 && b334_6 && b335_29 && b336_46 && b337_52 && b338_35 && b339_32 && b340_51 && b341_44 && b342_22 && b343_57 && b344_49 && b345_27 && b346_49 && b347_8 && b348_64 && b349_40 && b350_14 && b351_47 && b352_11 && b353_16 && b354_11 && b355_23 && b356_66 && b357_30 && b358_36 && b359_6 && b360_73 && b361_37 && b362_5 && b363_54) {
pattern_id = 23;
}
if(b350_66 && b351_50 && b352_48 && b353_39 && b354_33 && b355_35 && b356_43 && b357_27 && b358_58 && b359_47 && b360_22 && b361_51 && b362_7 && b363_54) {
pattern_id = 24;
}
if(b355_24 && b356_22 && b357_57 && b358_26 && b359_63 && b360_23 && b361_38 && b362_6 && b363_54) {
pattern_id = 25;
}
if(b353_69 && b354_14 && b355_4 && b356_58 && b357_30 && b358_13 && b359_5 && b360_26 && b361_57 && b362_3 && b363_66) {
pattern_id = 26;
}
if(b353_69 && b354_65 && b355_65 && b356_70 && b357_27 && b358_41 && b359_27 && b360_4 && b361_60 && b362_7 && b363_54) {
pattern_id = 27;
}
if(b354_66 && b355_55 && b356_51 && b357_66 && b358_42 && b359_35 && b360_22 && b361_48 && b362_50 && b363_54) {
pattern_id = 28;
}
if(b350_66 && b351_58 && b352_48 && b353_13 && b354_7 && b355_64 && b356_13 && b357_46 && b358_45 && b359_31 && b360_22 && b361_48 && b362_22 && b363_54) {
pattern_id = 29;
}
if(b351_53 && b352_30 && b353_44 && b354_51 && b355_65 && b356_25 && b357_39 && b358_42 && b359_27 && b360_63 && b361_38 && b362_49 && b363_54) {
pattern_id = 30;
}
if(b358_69 && b359_35 && b360_22 && b361_48 && b362_50 && b363_54) {
pattern_id = 31;
}
if(b355_24 && b356_60 && b357_14 && b358_34 && b359_70 && b360_43 && b361_63 && b362_43 && b363_54) {
pattern_id = 32;
}
if(b357_70 && b358_45 && b359_31 && b360_42 && b361_68 && b362_54 && b363_43) {
pattern_id = 33;
}
if(b351_53 && b352_57 && b353_4 && b354_30 && b355_56 && b356_68 && b357_14 && b358_26 && b359_31 && b360_22 && b361_48 && b362_22 && b363_54) {
pattern_id = 34;
}
if(b350_66 && b351_19 && b352_47 && b353_44 && b354_51 && b355_39 && b356_13 && b357_66 && b358_31 && b359_69 && b360_25 && b361_38 && b362_47 && b363_54) {
pattern_id = 35;
}
if(b339_50 && b340_51 && b341_44 && b342_22 && b343_57 && b344_49 && b345_27 && b346_49 && b347_8 && b348_64 && b349_40 && b350_14 && b351_47 && b352_11 && b353_16 && b354_11 && b355_23 && b356_75 && b357_30 && b358_36 && b359_6 && b360_73 && b361_37 && b362_5 && b363_54) {
pattern_id = 36;
}
if(b356_58 && b357_46 && b358_58 && b359_23 && b360_45 && b361_10 && b362_43 && b363_54) {
pattern_id = 37;
}
if(b350_66 && b351_19 && b352_33 && b353_39 && b354_12 && b355_49 && b356_15 && b357_17 && b358_6 && b359_35 && b360_19 && b361_39 && b362_17 && b363_54) {
pattern_id = 38;
}
if(b356_58 && b357_46 && b358_63 && b359_36 && b360_25 && b361_42 && b362_6 && b363_54) {
pattern_id = 39;
}
if(b351_53 && b352_33 && b353_57 && b354_8 && b355_3 && b356_8 && b357_41 && b358_41 && b359_17 && b360_13 && b361_15 && b362_9 && b363_54) {
pattern_id = 40;
}
if(b352_37 && b353_25 && b354_55 && b355_14 && b356_7 && b357_18 && b358_55 && b359_27 && b360_10 && b361_7 && b362_11 && b363_54) {
pattern_id = 41;
}
if(b358_69 && b359_5 && b360_43 && b361_51 && b362_39 && b363_54) {
pattern_id = 42;
}
if(b359_65 && b360_9 && b361_51 && b362_39 && b363_54) {
pattern_id = 43;
}
if(b354_66 && b355_35 && b356_45 && b357_27 && b358_58 && b359_31 && b360_22 && b361_48 && b362_22 && b363_54) {
pattern_id = 44;
}
if(b352_37 && b353_35 && b354_26 && b355_21 && b356_68 && b357_22 && b358_47 && b359_33 && b360_22 && b361_42 && b362_23 && b363_54) {
pattern_id = 45;
}
if(b354_66 && b355_35 && b356_45 && b357_27 && b358_58 && b359_47 && b360_22 && b361_51 && b362_7 && b363_54) {
pattern_id = 46;
}
if(b351_53 && b352_27 && b353_25 && b354_32 && b355_39 && b356_60 && b357_59 && b358_47 && b359_10 && b360_4 && b361_25 && b362_7 && b363_54) {
pattern_id = 47;
}
if(b356_58 && b357_56 && b358_57 && b359_47 && b360_33 && b361_42 && b362_49 && b363_54) {
pattern_id = 48;
}
if(b348_52 && b349_26 && b350_26 && b351_26 && b352_52 && b353_1 && b354_41 && b355_3 && b356_8 && b357_9 && b358_16 && b359_13 && b360_28 && b361_39 && b362_2 && b363_54) {
pattern_id = 49;
}
if(b357_71 && b358_51 && b359_53 && b360_54 && b361_26 && b362_52 && b363_48) {
pattern_id = 50;
}
if(b354_73 && b355_28 && b356_6 && b357_17 && b358_51 && b359_57 && b360_8 && b361_12 && b362_52 && b363_46) {
pattern_id = 51;
}
if(b345_46 && b346_31 && b347_22 && b348_48 && b349_51 && b350_31 && b351_35 && b352_53 && b353_40 && b354_15 && b355_37 && b356_13 && b357_4 && b358_33 && b359_48 && b360_3 && b361_58 && b362_28 && b363_24) {
pattern_id = 52;
}
if(b357_71 && b358_19 && b359_21 && b360_18 && b361_26 && b362_56 && b363_48) {
pattern_id = 53;
}
if(b356_79 && b357_51 && b358_16 && b359_21 && b360_19 && b361_33 && b362_9 && b363_48) {
pattern_id = 54;
}
if(b359_81 && b360_8 && b361_22 && b362_54 && b363_48) {
pattern_id = 55;
}
if(b356_79 && b357_19 && b358_11 && b359_17 && b360_13 && b361_44 && b362_19 && b363_48) {
pattern_id = 56;
}
if(b360_78 && b361_72 && b362_40 && b363_81) {
pattern_id = 57;
}
if(b347_72 && b348_51 && b349_39 && b350_56 && b351_7 && b352_4 && b353_23 && b354_41 && b355_20 && b356_17 && b357_18 && b358_9 && b359_26 && b360_13 && b361_7 && b362_20 && b363_77) {
pattern_id = 58;
}
if(b359_84 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 59;
}
if(b359_83 && b360_77 && b361_19 && b362_11 && b363_48) {
pattern_id = 60;
}
if(b333_37 && b334_5 && b335_18 && b336_15 && b337_20 && b338_20 && b339_2 && b340_42 && b341_35 && b342_5 && b343_52 && b344_26 && b345_36 && b346_7 && b347_42 && b348_7 && b349_59 && b350_61 && b351_6 && b352_56 && b353_12 && b354_56 && b355_25 && b356_28 && b357_3 && b358_6 && b359_56 && b360_18 && b361_8 && b362_52 && b363_43) {
pattern_id = 61;
}
if(b356_67 && b357_64 && b358_47 && b359_36 && b360_66 && b361_25 && b362_7 && b363_24) {
pattern_id = 62;
}
if(b357_16 && b358_20 && b359_22 && b360_25 && b361_25 && b362_10 && b363_24) {
pattern_id = 63;
}
if(b359_62 && b360_3 && b361_1 && b362_36 && b363_1) {
pattern_id = 64;
}
if(b358_30 && b359_30 && b360_31 && b361_12 && b362_11 && b363_32) {
pattern_id = 65;
}
if(b342_21 && b343_10 && b344_4 && b345_25 && b346_7 && b347_4 && b348_1 && b349_7 && b350_33 && b351_2 && b352_2 && b353_16 && b354_4 && b355_34 && b356_42 && b357_4 && b358_4 && b359_4 && b360_1 && b361_37 && b362_34 && b363_1) {
pattern_id = 66;
}
if(b314_24 && b315_4 && b316_45 && b317_32 && b318_5 && b319_39 && b320_42 && b321_15 && b322_38 && b323_26 && b324_11 && b325_21 && b326_26 && b327_27 && b328_13 && b329_19 && b330_53 && b331_19 && b332_36 && b333_30 && b334_35 && b335_40 && b336_7 && b337_9 && b338_5 && b339_12 && b340_59 && b341_66 && b342_4 && b343_22 && b344_45 && b345_11 && b346_2 && b347_29 && b348_42 && b349_31 && b350_45 && b351_7 && b352_67 && b353_27 && b354_8 && b355_3 && b356_10 && b357_17 && b358_17 && b359_6 && b360_35 && b361_20 && b362_5 && b363_78) {
pattern_id = 67;
}
if(b352_56 && b353_51 && b354_20 && b355_2 && b356_9 && b357_40 && b358_7 && b359_7 && b360_57 && b361_19 && b362_12 && b363_8) {
pattern_id = 68;
}
if(b348_57 && b349_28 && b350_7 && b351_12 && b352_35 && b353_43 && b354_54 && b355_15 && b356_36 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 69;
}
if(b354_40 && b355_38 && b356_41 && b357_15 && b358_37 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 70;
}
if(b357_36 && b358_2 && b359_3 && b360_19 && b361_13 && b362_65 && b363_47) {
pattern_id = 71;
}
if(b363_43) {
pattern_id = 72;
}
if(b359_25 && b360_38 && b361_20 && b362_1 && b363_43) {
pattern_id = 73;
}
if(b362_28 && b363_43) {
pattern_id = 74;
}
if(b359_25 && b360_2 && b361_30 && b362_28 && b363_28) {
pattern_id = 75;
}
if(b361_30 && b362_28 && b363_28) {
pattern_id = 76;
}
if(b355_18 && b356_19 && b357_21 && b358_25 && b359_25 && b360_29 && b361_30 && b362_28 && b363_28) {
pattern_id = 77;
}
if(b356_19 && b357_33 && b358_28 && b359_50 && b360_60 && b361_34 && b362_28 && b363_43) {
pattern_id = 78;
}
if(b344_52 && b345_31 && b346_26 && b347_33 && b348_15 && b349_34 && b350_57 && b351_26 && b352_23 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 79;
}
if(b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 80;
}
if(b359_25 && b360_19 && b361_41 && b362_56 && b363_43) {
pattern_id = 81;
}
if(b346_45 && b347_31 && b348_29 && b349_43 && b350_1 && b351_15 && b352_20 && b353_12 && b354_24 && b355_12 && b356_11 && b357_53 && b358_22 && b359_6 && b360_33 && b361_4 && b362_43 && b363_20) {
pattern_id = 82;
}
if(b359_25 && b360_52 && b361_12 && b362_11 && b363_33) {
pattern_id = 83;
}
if(b356_19 && b357_42 && b358_51 && b359_19 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 84;
}
if(b360_2 && b361_53 && b362_12 && b363_10) {
pattern_id = 85;
}
if(b360_2 && b361_52 && b362_52 && b363_11) {
pattern_id = 86;
}
if(b358_25 && b359_56 && b360_40 && b361_19 && b362_59 && b363_58) {
pattern_id = 87;
}
if(b356_19 && b357_10 && b358_55 && b359_38 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 88;
}
if(b360_2 && b361_52 && b362_20 && b363_41) {
pattern_id = 89;
}
if(b359_25 && b360_24 && b361_7 && b362_27 && b363_62) {
pattern_id = 90;
}
if(b344_52 && b345_21 && b346_22 && b347_21 && b348_56 && b349_19 && b350_34 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 91;
}
if(b348_56 && b349_35 && b350_34 && b351_5 && b352_21 && b353_29 && b354_3 && b355_21 && b356_16 && b357_18 && b358_55 && b359_13 && b360_30 && b361_39 && b362_23 && b363_31) {
pattern_id = 92;
}
if(b359_25 && b360_24 && b361_41 && b362_56 && b363_43) {
pattern_id = 93;
}
if(b356_19 && b357_34 && b358_37 && b359_56 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 94;
}
if(b360_2 && b361_8 && b362_27 && b363_41) {
pattern_id = 95;
}
if(b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 96;
}
if(b339_43 && b340_35 && b341_43 && b342_27 && b343_6 && b344_61 && b345_53 && b346_38 && b347_17 && b348_40 && b349_13 && b350_17 && b351_17 && b352_11 && b353_3 && b354_14 && b355_20 && b356_4 && b357_14 && b358_28 && b359_70 && b360_10 && b361_41 && b362_11 && b363_78) {
pattern_id = 97;
}
if(b324_25 && b325_17 && b326_23 && b327_16 && b328_4 && b329_47 && b330_49 && b331_45 && b332_55 && b333_21 && b334_14 && b335_44 && b336_35 && b337_7 && b338_2 && b339_5 && b340_6 && b341_2 && b342_2 && b343_10 && b344_38 && b345_42 && b346_21 && b347_43 && b348_57 && b349_4 && b350_52 && b351_5 && b352_29 && b353_29 && b354_72 && b355_20 && b356_70 && b357_15 && b358_73 && b359_12 && b360_26 && b361_23 && b362_18 && b363_28) {
pattern_id = 98;
}
if(b357_33 && b358_6 && b359_2 && b360_27 && b361_71 && b362_17 && b363_48) {
pattern_id = 99;
}
if(b353_43 && b354_3 && b355_51 && b356_8 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 100;
}
if(b356_19 && b357_32 && b358_37 && b359_17 && b360_20 && b361_12 && b362_8 && b363_26) {
pattern_id = 101;
}
if(b360_2 && b361_50 && b362_12 && b363_41) {
pattern_id = 102;
}
if(b356_19 && b357_11 && b358_19 && b359_53 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 103;
}
if(b352_34 && b353_9 && b354_43 && b355_38 && b356_61 && b357_13 && b358_16 && b359_19 && b360_13 && b361_7 && b362_20 && b363_48) {
pattern_id = 104;
}
if(b355_18 && b356_57 && b357_6 && b358_51 && b359_56 && b360_24 && b361_8 && b362_2 && b363_22) {
pattern_id = 105;
}
if(b356_19 && b357_49 && b358_11 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 106;
}
if(b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 107;
}
if(b352_34 && b353_56 && b354_6 && b355_5 && b356_16 && b357_21 && b358_25 && b359_25 && b360_2 && b361_30 && b362_28 && b363_43) {
pattern_id = 108;
}
if(b356_19 && b357_49 && b358_11 && b359_42 && b360_26 && b361_59 && b362_1 && b363_43) {
pattern_id = 109;
}
if(b355_18 && b356_57 && b357_6 && b358_44 && b359_8 && b360_8 && b361_41 && b362_16 && b363_26) {
pattern_id = 110;
}
if(b360_2 && b361_2 && b362_11 && b363_8) {
pattern_id = 111;
}
if(b360_2 && b361_2 && b362_11 && b363_38) {
pattern_id = 112;
}
if(b346_45 && b347_26 && b348_34 && b349_50 && b350_50 && b351_50 && b352_24 && b353_54 && b354_3 && b355_28 && b356_30 && b357_35 && b358_11 && b359_26 && b360_42 && b361_26 && b362_25 && b363_5) {
pattern_id = 113;
}
if(b360_2 && b361_26 && b362_52 && b363_11) {
pattern_id = 114;
}
if(b359_25 && b360_13 && b361_19 && b362_18 && b363_33) {
pattern_id = 115;
}
if(b346_45 && b347_29 && b348_42 && b349_35 && b350_1 && b351_15 && b352_20 && b353_12 && b354_24 && b355_12 && b356_11 && b357_53 && b358_22 && b359_6 && b360_12 && b361_12 && b362_11 && b363_11) {
pattern_id = 116;
}
if(b360_2 && b361_26 && b362_52 && b363_2) {
pattern_id = 117;
}
if(b359_25 && b360_13 && b361_19 && b362_58 && b363_33) {
pattern_id = 118;
}
if(b269_16 && b270_14 && b271_14 && b272_11 && b273_9 && b274_16 && b275_11 && b276_15 && b277_16 && b278_17 && b279_15 && b280_18 && b281_18 && b282_4 && b283_10 && b284_18 && b285_12 && b286_5 && b287_22 && b288_7 && b289_22 && b290_17 && b291_23 && b292_9 && b293_24 && b294_20 && b295_18 && b296_18 && b297_21 && b298_21 && b299_23 && b300_4 && b301_3 && b302_21 && b303_6 && b304_4 && b305_27 && b306_12 && b307_30 && b308_18 && b309_26 && b310_26 && b311_14 && b312_12 && b313_32 && b314_26 && b315_7 && b316_40 && b317_38 && b318_22 && b319_39 && b320_42 && b321_13 && b322_41 && b323_2 && b324_30 && b325_42 && b326_29 && b327_31 && b328_48 && b329_6 && b330_18 && b331_21 && b332_44 && b333_29 && b334_27 && b335_35 && b336_20 && b337_7 && b338_2 && b339_5 && b340_6 && b341_2 && b342_2 && b343_10 && b344_38 && b345_42 && b346_21 && b347_43 && b348_57 && b349_4 && b350_52 && b351_5 && b352_29 && b353_29 && b354_72 && b355_20 && b356_70 && b357_15 && b358_73 && b359_12 && b360_26 && b361_23 && b362_18 && b363_28) {
pattern_id = 119;
}
if(b359_25 && b360_69 && b361_44 && b362_25 && b363_47) {
pattern_id = 120;
}
if(b355_18 && b356_62 && b357_51 && b358_6 && b359_40 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 121;
}
if(b360_2 && b361_28 && b362_56 && b363_29) {
pattern_id = 122;
}
if(b356_19 && b357_37 && b358_44 && b359_40 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 123;
}
if(b360_2 && b361_28 && b362_2 && b363_47) {
pattern_id = 124;
}
if(b333_43 && b334_38 && b335_41 && b336_36 && b337_27 && b338_22 && b339_40 && b340_36 && b341_28 && b342_30 && b343_30 && b344_30 && b345_48 && b346_51 && b347_55 && b348_23 && b349_25 && b350_30 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 125;
}
if(b361_30 && b362_25 && b363_26) {
pattern_id = 126;
}
if(b360_2 && b361_33 && b362_15 && b363_26) {
pattern_id = 127;
}
if(b359_25 && b360_30 && b361_41 && b362_35 && b363_28) {
pattern_id = 128;
}
if(b353_43 && b354_27 && b355_20 && b356_30 && b357_28 && b358_34 && b359_35 && b360_29 && b361_37 && b362_28 && b363_36) {
pattern_id = 129;
}
if(b348_56 && b349_43 && b350_28 && b351_23 && b352_25 && b353_49 && b354_7 && b355_16 && b356_29 && b357_41 && b358_51 && b359_19 && b360_13 && b361_7 && b362_20 && b363_22) {
pattern_id = 130;
}
if(b356_19 && b357_51 && b358_18 && b359_53 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 131;
}
if(b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 132;
}
if(b326_36 && b327_31 && b328_44 && b329_23 && b330_8 && b331_44 && b332_53 && b333_47 && b334_51 && b335_25 && b336_35 && b337_49 && b338_23 && b339_12 && b340_2 && b341_4 && b342_3 && b343_1 && b344_15 && b345_11 && b346_12 && b347_33 && b348_11 && b349_36 && b350_54 && b351_30 && b352_8 && b353_49 && b354_41 && b355_3 && b356_77 && b357_4 && b358_47 && b359_7 && b360_27 && b361_17 && b362_18 && b363_28) {
pattern_id = 133;
}
if(b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 134;
}
if(b324_25 && b325_24 && b326_43 && b327_31 && b328_50 && b329_2 && b330_53 && b331_19 && b332_36 && b333_28 && b334_55 && b335_45 && b336_24 && b337_51 && b338_29 && b339_7 && b340_35 && b341_65 && b342_41 && b343_47 && b344_30 && b345_11 && b346_13 && b347_38 && b348_4 && b349_28 && b350_7 && b351_6 && b352_35 && b353_28 && b354_4 && b355_17 && b356_22 && b357_4 && b358_10 && b359_31 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 135;
}
if(b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_52 && b363_48) {
pattern_id = 136;
}
if(b336_43 && b337_30 && b338_57 && b339_25 && b340_64 && b341_48 && b342_25 && b343_28 && b344_19 && b345_17 && b346_59 && b347_64 && b348_17 && b349_50 && b350_56 && b351_5 && b352_61 && b353_49 && b354_42 && b355_71 && b356_8 && b357_45 && b358_17 && b359_3 && b360_58 && b361_50 && b362_9 && b363_8) {
pattern_id = 137;
}
if(b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_56 && b363_48) {
pattern_id = 138;
}
if(b355_18 && b356_36 && b357_49 && b358_44 && b359_64 && b360_40 && b361_12 && b362_14 && b363_48) {
pattern_id = 139;
}
if(b352_34 && b353_17 && b354_9 && b355_13 && b356_61 && b357_41 && b358_6 && b359_19 && b360_6 && b361_7 && b362_52 && b363_48) {
pattern_id = 140;
}
if(b348_56 && b349_43 && b350_37 && b351_20 && b352_58 && b353_17 && b354_9 && b355_13 && b356_40 && b357_9 && b358_6 && b359_56 && b360_27 && b361_26 && b362_56 && b363_6) {
pattern_id = 141;
}
if(b349_59 && b350_19 && b351_43 && b352_22 && b353_24 && b354_21 && b355_14 && b356_8 && b357_9 && b358_59 && b359_56 && b360_10 && b361_19 && b362_9 && b363_48) {
pattern_id = 142;
}
if(b361_30 && b362_56 && b363_25) {
pattern_id = 143;
}
if(b356_19 && b357_51 && b358_9 && b359_12 && b360_30 && b361_39 && b362_9 && b363_8) {
pattern_id = 144;
}
if(b361_30 && b362_8 && b363_11) {
pattern_id = 145;
}
if(b272_12 && b273_13 && b274_8 && b275_15 && b276_9 && b277_17 && b278_12 && b279_19 && b280_19 && b281_10 && b282_17 && b283_15 && b284_19 && b285_4 && b286_5 && b287_23 && b288_5 && b289_20 && b290_18 && b291_16 && b292_20 && b293_25 && b294_21 && b295_1 && b296_19 && b297_16 && b298_22 && b299_11 && b300_7 && b301_7 && b302_22 && b303_29 && b304_26 && b305_23 && b306_25 && b307_5 && b308_28 && b309_5 && b310_27 && b311_30 && b312_14 && b313_33 && b314_1 && b315_21 && b316_22 && b317_38 && b318_37 && b319_18 && b320_44 && b321_7 && b322_4 && b323_10 && b324_5 && b325_3 && b326_15 && b327_3 && b328_40 && b329_21 && b330_15 && b331_2 && b332_47 && b333_34 && b334_41 && b335_28 && b336_28 && b337_41 && b338_58 && b339_2 && b340_61 && b341_23 && b342_61 && b343_30 && b344_30 && b345_30 && b346_44 && b347_32 && b348_28 && b349_59 && b350_7 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 146;
}
if(b357_33 && b358_9 && b359_16 && b360_10 && b361_41 && b362_11 && b363_22) {
pattern_id = 147;
}
if(b360_2 && b361_17 && b362_27 && b363_47) {
pattern_id = 148;
}
if(b361_30 && b362_8 && b363_47) {
pattern_id = 149;
}
if(b361_30 && b362_8 && b363_6) {
pattern_id = 150;
}
if(b359_25 && b360_8 && b361_16 && b362_35 && b363_33) {
pattern_id = 151;
}
if(b360_2 && b361_16 && b362_27 && b363_41) {
pattern_id = 152;
}
if(b360_2 && b361_16 && b362_27 && b363_23) {
pattern_id = 153;
}
if(b356_19 && b357_2 && b358_15 && b359_20 && b360_55 && b361_12 && b362_14 && b363_25) {
pattern_id = 154;
}
if(b357_33 && b358_15 && b359_20 && b360_20 && b361_12 && b362_14 && b363_25) {
pattern_id = 155;
}
if(b219_8 && b220_7 && b221_7 && b222_7 && b223_7 && b224_7 && b225_7 && b226_8 && b227_5 && b228_8 && b229_7 && b230_3 && b231_1 && b232_8 && b233_1 && b234_1 && b235_9 && b236_3 && b237_3 && b238_5 && b239_9 && b240_5 && b241_4 && b242_9 && b243_8 && b244_1 && b245_3 && b246_7 && b247_7 && b248_8 && b249_9 && b250_7 && b251_8 && b252_8 && b253_8 && b254_8 && b255_10 && b256_10 && b257_8 && b258_11 && b259_6 && b260_2 && b261_10 && b262_3 && b263_3 && b264_11 && b265_4 && b266_8 && b267_11 && b268_10 && b269_14 && b270_1 && b271_13 && b272_9 && b273_11 && b274_5 && b275_14 && b276_13 && b277_15 && b278_7 && b279_17 && b280_7 && b281_17 && b282_11 && b283_4 && b284_17 && b285_19 && b286_19 && b287_9 && b288_21 && b289_12 && b290_10 && b291_16 && b292_4 && b293_22 && b294_5 && b295_3 && b296_20 && b297_2 && b298_20 && b299_4 && b300_14 && b301_6 && b302_18 && b303_27 && b304_25 && b305_21 && b306_17 && b307_1 && b308_25 && b309_3 && b310_24 && b311_28 && b312_21 && b313_15 && b314_10 && b315_33 && b316_38 && b317_12 && b318_17 && b319_24 && b320_4 && b321_3 && b322_37 && b323_24 && b324_18 && b325_32 && b326_31 && b327_13 && b328_30 && b329_26 && b330_36 && b331_26 && b332_2 && b333_2 && b334_17 && b335_14 && b336_7 && b337_6 && b338_61 && b339_17 && b340_21 && b341_57 && b342_3 && b343_17 && b344_5 && b345_47 && b346_10 && b347_31 && b348_5 && b349_3 && b350_74 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 156;
}
if(b360_2 && b361_61 && b362_12 && b363_47) {
pattern_id = 157;
}
if(b355_18 && b356_2 && b357_15 && b358_17 && b359_43 && b360_19 && b361_17 && b362_52 && b363_28) {
pattern_id = 158;
}
if(b363_28) {
pattern_id = 159;
}
if(b361_32 && b362_65 && b363_54) {
pattern_id = 160;
}
if(b360_29 && b361_57 && b362_1 && b363_12) {
pattern_id = 161;
}
if(b358_50 && b359_62 && b360_2 && b361_26 && b362_52 && b363_52) {
pattern_id = 162;
}
if(b356_52 && b357_16 && b358_25 && b359_26 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 163;
}
if(b359_52 && b360_2 && b361_30 && b362_28 && b363_43) {
pattern_id = 164;
}
if(b357_21 && b358_25 && b359_25 && b360_29 && b361_30 && b362_28 && b363_28) {
pattern_id = 165;
}
if(b354_23 && b355_18 && b356_37 && b357_39 && b358_59 && b359_63 && b360_18 && b361_7 && b362_8 && b363_5) {
pattern_id = 166;
}
if(b354_23 && b355_18 && b356_24 && b357_63 && b358_48 && b359_69 && b360_30 && b361_19 && b362_9 && b363_14) {
pattern_id = 167;
}
if(b350_31 && b351_32 && b352_32 && b353_8 && b354_8 && b355_10 && b356_53 && b357_49 && b358_19 && b359_26 && b360_18 && b361_7 && b362_8 && b363_17) {
pattern_id = 168;
}
if(b353_20 && b354_62 && b355_33 && b356_10 && b357_10 && b358_54 && b359_13 && b360_29 && b361_59 && b362_35 && b363_48) {
pattern_id = 169;
}
if(b328_18 && b329_31 && b330_19 && b331_22 && b332_31 && b333_36 && b334_38 && b335_35 && b336_23 && b337_26 && b338_22 && b339_22 && b340_35 && b341_31 && b342_30 && b343_24 && b344_40 && b345_52 && b346_22 && b347_44 && b348_40 && b349_26 && b350_8 && b351_26 && b352_23 && b353_35 && b354_8 && b355_1 && b356_41 && b357_66 && b358_37 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 170;
}
if(b355_42 && b356_19 && b357_49 && b358_19 && b359_26 && b360_18 && b361_7 && b362_8 && b363_17) {
pattern_id = 171;
}
if(b354_23 && b355_18 && b356_28 && b357_19 && b358_16 && b359_3 && b360_30 && b361_54 && b362_12 && b363_29) {
pattern_id = 172;
}
if(b358_50 && b359_25 && b360_28 && b361_8 && b362_8 && b363_41) {
pattern_id = 173;
}
if(b351_39 && b352_34 && b353_10 && b354_1 && b355_16 && b356_52 && b357_18 && b358_46 && b359_19 && b360_15 && b361_26 && b362_9 && b363_22) {
pattern_id = 174;
}
if(b356_52 && b357_21 && b358_50 && b359_52 && b360_29 && b361_32 && b362_38 && b363_28) {
pattern_id = 175;
}
if(b357_21 && b358_4 && b359_25 && b360_58 && b361_26 && b362_35 && b363_33) {
pattern_id = 176;
}
if(b353_20 && b354_11 && b355_42 && b356_11 && b357_5 && b358_34 && b359_5 && b360_23 && b361_32 && b362_54 && b363_43) {
pattern_id = 177;
}
if(b356_52 && b357_23 && b358_4 && b359_14 && b360_2 && b361_28 && b362_56 && b363_29) {
pattern_id = 178;
}
if(b341_40 && b342_20 && b343_27 && b344_16 && b345_47 && b346_16 && b347_7 && b348_28 && b349_16 && b350_38 && b351_8 && b352_19 && b353_73 && b354_11 && b355_36 && b356_42 && b357_53 && b358_35 && b359_24 && b360_16 && b361_37 && b362_14 && b363_12) {
pattern_id = 179;
}
if(b352_43 && b353_22 && b354_17 && b355_42 && b356_32 && b357_18 && b358_6 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 180;
}
if(b352_43 && b353_22 && b354_17 && b355_42 && b356_32 && b357_15 && b358_9 && b359_42 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 181;
}
if(b361_32 && b362_36 && b363_12) {
pattern_id = 182;
}
if(b347_32 && b348_50 && b349_72 && b350_52 && b351_40 && b352_64 && b353_57 && b354_23 && b355_11 && b356_23 && b357_48 && b358_3 && b359_34 && b360_5 && b361_36 && b362_30 && b363_29) {
pattern_id = 183;
}
if(b362_38 && b363_33) {
pattern_id = 184;
}
if(b358_50 && b359_64 && b360_2 && b361_28 && b362_2 && b363_47) {
pattern_id = 185;
}
if(b359_52 && b360_61 && b361_51 && b362_48 && b363_44) {
pattern_id = 186;
}
if(b359_52 && b360_61 && b361_54 && b362_48 && b363_11) {
pattern_id = 187;
}
if(b353_20 && b354_53 && b355_48 && b356_54 && b357_19 && b358_59 && b359_17 && b360_12 && b361_45 && b362_14 && b363_8) {
pattern_id = 188;
}
if(b360_29 && b361_59 && b362_44 && b363_48) {
pattern_id = 189;
}
if(b351_39 && b352_20 && b353_50 && b354_40 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 190;
}
if(b347_32 && b348_31 && b349_45 && b350_54 && b351_22 && b352_23 && b353_27 && b354_3 && b355_11 && b356_10 && b357_6 && b358_6 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 191;
}
if(b353_20 && b354_7 && b355_49 && b356_14 && b357_35 && b358_46 && b359_16 && b360_18 && b361_33 && b362_25 && b363_61) {
pattern_id = 192;
}
if(b356_52 && b357_14 && b358_46 && b359_10 && b360_10 && b361_17 && b362_27 && b363_57) {
pattern_id = 193;
}
if(b355_42 && b356_13 && b357_3 && b358_14 && b359_10 && b360_10 && b361_17 && b362_27 && b363_57) {
pattern_id = 194;
}
if(b351_39 && b352_14 && b353_25 && b354_60 && b355_2 && b356_29 && b357_17 && b358_11 && b359_3 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 195;
}
if(b352_43 && b353_13 && b354_61 && b355_52 && b356_52 && b357_27 && b358_46 && b359_19 && b360_15 && b361_26 && b362_9 && b363_22) {
pattern_id = 196;
}
if(b348_40 && b349_8 && b350_28 && b351_21 && b352_23 && b353_46 && b354_10 && b355_25 && b356_52 && b357_13 && b358_18 && b359_38 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 197;
}
if(b348_40 && b349_8 && b350_37 && b351_21 && b352_4 && b353_48 && b354_3 && b355_52 && b356_8 && b357_6 && b358_7 && b359_7 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 198;
}
if(b351_39 && b352_14 && b353_37 && b354_41 && b355_14 && b356_6 && b357_17 && b358_6 && b359_70 && b360_27 && b361_23 && b362_56 && b363_28) {
pattern_id = 199;
}
if(b346_32 && b347_20 && b348_15 && b349_39 && b350_12 && b351_5 && b352_29 && b353_29 && b354_13 && b355_15 && b356_16 && b357_6 && b358_6 && b359_17 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 200;
}
if(b356_52 && b357_22 && b358_13 && b359_1 && b360_49 && b361_8 && b362_68 && b363_28) {
pattern_id = 201;
}
if(b342_26 && b343_43 && b344_26 && b345_4 && b346_44 && b347_50 && b348_17 && b349_26 && b350_26 && b351_3 && b352_10 && b353_27 && b354_25 && b355_3 && b356_29 && b357_15 && b358_46 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 202;
}
if(b343_27 && b344_10 && b345_22 && b346_10 && b347_22 && b348_23 && b349_44 && b350_36 && b351_21 && b352_61 && b353_14 && b354_43 && b355_14 && b356_7 && b357_35 && b358_46 && b359_40 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 203;
}
if(b345_23 && b346_5 && b347_29 && b348_48 && b349_31 && b350_59 && b351_34 && b352_12 && b353_37 && b354_34 && b355_16 && b356_16 && b357_15 && b358_51 && b359_38 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 204;
}
if(b348_40 && b349_6 && b350_36 && b351_21 && b352_13 && b353_63 && b354_5 && b355_16 && b356_34 && b357_17 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 205;
}
if(b347_32 && b348_6 && b349_25 && b350_34 && b351_38 && b352_52 && b353_55 && b354_26 && b355_33 && b356_41 && b357_35 && b358_44 && b359_19 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 206;
}
if(b346_32 && b347_8 && b348_15 && b349_36 && b350_30 && b351_41 && b352_55 && b353_26 && b354_26 && b355_33 && b356_41 && b357_35 && b358_44 && b359_19 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 207;
}
if(b352_43 && b353_15 && b354_6 && b355_13 && b356_45 && b357_13 && b358_56 && b359_13 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 208;
}
if(b349_11 && b350_11 && b351_26 && b352_22 && b353_25 && b354_5 && b355_47 && b356_8 && b357_8 && b358_8 && b359_35 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 209;
}
if(b349_11 && b350_11 && b351_26 && b352_22 && b353_25 && b354_5 && b355_47 && b356_8 && b357_8 && b358_61 && b359_35 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 210;
}
if(b354_23 && b355_56 && b356_5 && b357_56 && b358_42 && b359_36 && b360_2 && b361_38 && b362_60 && b363_34) {
pattern_id = 211;
}
if(b353_20 && b354_51 && b355_6 && b356_5 && b357_27 && b358_13 && b359_25 && b360_43 && b361_63 && b362_7 && b363_33) {
pattern_id = 212;
}
if(b344_31 && b345_56 && b346_23 && b347_5 && b348_39 && b349_27 && b350_42 && b351_3 && b352_10 && b353_27 && b354_25 && b355_3 && b356_29 && b357_15 && b358_46 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 213;
}
if(b358_50 && b359_70 && b360_32 && b361_4 && b362_39 && b363_36) {
pattern_id = 214;
}
if(b305_5 && b306_8 && b307_15 && b308_9 && b309_9 && b310_11 && b311_1 && b312_8 && b313_17 && b314_23 && b315_20 && b316_25 && b317_25 && b318_27 && b319_11 && b320_3 && b321_6 && b322_32 && b323_16 && b324_5 && b325_19 && b326_29 && b327_11 && b328_30 && b329_41 && b330_47 && b331_12 && b332_1 && b333_46 && b334_30 && b335_36 && b336_41 && b337_51 && b338_38 && b339_51 && b340_14 && b341_1 && b342_30 && b343_19 && b344_40 && b345_48 && b346_23 && b347_28 && b348_26 && b349_39 && b350_52 && b351_25 && b352_29 && b353_37 && b354_67 && b355_66 && b356_52 && b357_35 && b358_3 && b359_17 && b360_19 && b361_33 && b362_9 && b363_30) {
pattern_id = 215;
}
if(b346_32 && b347_37 && b348_47 && b349_4 && b350_27 && b351_31 && b352_33 && b353_64 && b354_3 && b355_9 && b356_8 && b357_6 && b358_37 && b359_21 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 216;
}
if(b337_32 && b338_61 && b339_17 && b340_27 && b341_34 && b342_19 && b343_40 && b344_30 && b345_23 && b346_40 && b347_18 && b348_29 && b349_44 && b350_28 && b351_45 && b352_40 && b353_54 && b354_43 && b355_68 && b356_10 && b357_9 && b358_18 && b359_25 && b360_19 && b361_41 && b362_56 && b363_14) {
pattern_id = 217;
}
if(b343_27 && b344_37 && b345_36 && b346_42 && b347_22 && b348_5 && b349_27 && b350_24 && b351_26 && b352_24 && b353_41 && b354_3 && b355_59 && b356_15 && b357_18 && b358_9 && b359_45 && b360_2 && b361_28 && b362_2 && b363_47) {
pattern_id = 218;
}
if(b354_23 && b355_73 && b356_60 && b357_36 && b358_76 && b359_8 && b360_29 && b361_28 && b362_2 && b363_33) {
pattern_id = 219;
}
if(b357_21 && b358_29 && b359_60 && b360_48 && b361_12 && b362_11 && b363_5) {
pattern_id = 220;
}
if(b350_31 && b351_58 && b352_23 && b353_29 && b354_8 && b355_56 && b356_6 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_22 && b363_48) {
pattern_id = 221;
}
if(b352_43 && b353_39 && b354_5 && b355_33 && b356_57 && b357_35 && b358_46 && b359_13 && b360_4 && b361_44 && b362_35 && b363_46) {
pattern_id = 222;
}
if(b352_43 && b353_39 && b354_8 && b355_5 && b356_70 && b357_13 && b358_2 && b359_15 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 223;
}
if(b359_52 && b360_32 && b361_5 && b362_55 && b363_28) {
pattern_id = 224;
}
if(b353_20 && b354_39 && b355_1 && b356_1 && b357_19 && b358_7 && b359_26 && b360_9 && b361_8 && b362_2 && b363_6) {
pattern_id = 225;
}
if(b350_31 && b351_9 && b352_23 && b353_23 && b354_8 && b355_42 && b356_50 && b357_13 && b358_11 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 226;
}
if(b349_11 && b350_2 && b351_5 && b352_46 && b353_10 && b354_23 && b355_48 && b356_10 && b357_6 && b358_6 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 227;
}
if(b359_52 && b360_23 && b361_55 && b362_23 && b363_28) {
pattern_id = 228;
}
if(b341_40 && b342_44 && b343_29 && b344_38 && b345_42 && b346_21 && b347_43 && b348_40 && b349_38 && b350_23 && b351_50 && b352_48 && b353_34 && b354_36 && b355_11 && b356_60 && b357_13 && b358_12 && b359_13 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 229;
}
if(b343_27 && b344_72 && b345_10 && b346_44 && b347_28 && b348_26 && b349_44 && b350_29 && b351_50 && b352_42 && b353_49 && b354_25 && b355_60 && b356_52 && b357_3 && b358_19 && b359_41 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 230;
}
if(b340_28 && b341_44 && b342_22 && b343_18 && b344_10 && b345_41 && b346_32 && b347_9 && b348_55 && b349_18 && b350_54 && b351_48 && b352_24 && b353_27 && b354_23 && b355_14 && b356_8 && b357_13 && b358_9 && b359_56 && b360_6 && b361_30 && b362_56 && b363_25) {
pattern_id = 231;
}
if(b341_40 && b342_65 && b343_24 && b344_21 && b345_48 && b346_43 && b347_22 && b348_5 && b349_18 && b350_26 && b351_35 && b352_43 && b353_26 && b354_36 && b355_25 && b356_54 && b357_19 && b358_6 && b359_17 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 232;
}
if(b344_31 && b345_32 && b346_21 && b347_9 && b348_15 && b349_49 && b350_26 && b351_21 && b352_24 && b353_49 && b354_8 && b355_42 && b356_70 && b357_13 && b358_19 && b359_43 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 233;
}
if(b343_27 && b344_49 && b345_17 && b346_36 && b347_5 && b348_45 && b349_31 && b350_34 && b351_28 && b352_23 && b353_10 && b354_23 && b355_65 && b356_45 && b357_75 && b358_6 && b359_45 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 234;
}
if(b345_23 && b346_52 && b347_8 && b348_46 && b349_25 && b350_44 && b351_28 && b352_6 && b353_1 && b354_25 && b355_2 && b356_7 && b357_35 && b358_37 && b359_21 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 235;
}
if(b350_31 && b351_47 && b352_54 && b353_34 && b354_45 && b355_15 && b356_7 && b357_39 && b358_6 && b359_17 && b360_11 && b361_23 && b362_9 && b363_6) {
pattern_id = 236;
}
if(b343_27 && b344_51 && b345_31 && b346_33 && b347_2 && b348_48 && b349_31 && b350_48 && b351_35 && b352_42 && b353_37 && b354_34 && b355_33 && b356_6 && b357_34 && b358_6 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 237;
}
if(b336_23 && b337_35 && b338_27 && b339_21 && b340_37 && b341_8 && b342_39 && b343_38 && b344_26 && b345_45 && b346_20 && b347_31 && b348_39 && b349_34 && b350_26 && b351_35 && b352_52 && b353_55 && b354_8 && b355_33 && b356_41 && b357_35 && b358_44 && b359_19 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 238;
}
if(b350_31 && b351_47 && b352_23 && b353_32 && b354_1 && b355_1 && b356_41 && b357_41 && b358_51 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 239;
}
if(b354_23 && b355_52 && b356_8 && b357_6 && b358_7 && b359_7 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 240;
}
if(b340_28 && b341_33 && b342_28 && b343_48 && b344_25 && b345_5 && b346_20 && b347_33 && b348_24 && b349_34 && b350_28 && b351_42 && b352_57 && b353_32 && b354_12 && b355_49 && b356_15 && b357_10 && b358_11 && b359_26 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 241;
}
if(b327_14 && b328_28 && b329_26 && b330_32 && b331_21 && b332_1 && b333_23 && b334_30 && b335_40 && b336_36 && b337_44 && b338_39 && b339_35 && b340_15 && b341_39 && b342_31 && b343_30 && b344_35 && b345_23 && b346_51 && b347_18 && b348_15 && b349_50 && b350_42 && b351_5 && b352_41 && b353_9 && b354_3 && b355_42 && b356_36 && b357_18 && b358_9 && b359_26 && b360_40 && b361_53 && b362_8 && b363_28) {
pattern_id = 242;
}
if(b333_21 && b334_32 && b335_36 && b336_30 && b337_44 && b338_45 && b339_42 && b340_24 && b341_25 && b342_27 && b343_27 && b344_21 && b345_50 && b346_20 && b347_32 && b348_55 && b349_25 && b350_17 && b351_5 && b352_36 && b353_49 && b354_23 && b355_52 && b356_29 && b357_6 && b358_6 && b359_63 && b360_24 && b361_7 && b362_56 && b363_5) {
pattern_id = 243;
}
if(b328_18 && b329_29 && b330_31 && b331_31 && b332_2 && b333_23 && b334_30 && b335_40 && b336_36 && b337_44 && b338_39 && b339_35 && b340_15 && b341_39 && b342_31 && b343_30 && b344_35 && b345_23 && b346_51 && b347_18 && b348_15 && b349_50 && b350_42 && b351_5 && b352_41 && b353_9 && b354_3 && b355_42 && b356_36 && b357_18 && b358_9 && b359_26 && b360_40 && b361_53 && b362_8 && b363_28) {
pattern_id = 244;
}
if(b329_25 && b330_22 && b331_28 && b332_26 && b333_28 && b334_32 && b335_28 && b336_3 && b337_34 && b338_27 && b339_21 && b340_28 && b341_38 && b342_41 && b343_39 && b344_30 && b345_22 && b346_30 && b347_26 && b348_26 && b349_39 && b350_52 && b351_39 && b352_44 && b353_1 && b354_3 && b355_45 && b356_9 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 245;
}
if(b315_6 && b316_9 && b317_13 && b318_10 && b319_10 && b320_17 && b321_12 && b322_14 && b323_18 && b324_18 && b325_19 && b326_25 && b327_16 && b328_23 && b329_27 && b330_15 && b331_18 && b332_27 && b333_28 && b334_33 && b335_33 && b336_20 && b337_36 && b338_40 && b339_36 && b340_8 && b341_25 && b342_26 && b343_32 && b344_35 && b345_42 && b346_35 && b347_29 && b348_5 && b349_31 && b350_41 && b351_39 && b352_55 && b353_1 && b354_3 && b355_45 && b356_22 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 246;
}
if(b307_6 && b308_8 && b309_1 && b310_5 && b311_5 && b312_1 && b313_9 && b314_13 && b315_7 && b316_10 && b317_14 && b318_11 && b319_10 && b320_16 && b321_13 && b322_15 && b323_17 && b324_19 && b325_17 && b326_8 && b327_17 && b328_24 && b329_28 && b330_14 && b331_7 && b332_24 && b333_13 && b334_28 && b335_22 && b336_28 && b337_26 && b338_36 && b339_27 && b340_36 && b341_8 && b342_29 && b343_3 && b344_29 && b345_4 && b346_22 && b347_43 && b348_26 && b349_27 && b350_42 && b351_39 && b352_55 && b353_1 && b354_3 && b355_45 && b356_22 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 247;
}
if(b299_6 && b300_5 && b301_4 && b302_5 && b303_5 && b304_6 && b305_5 && b306_4 && b307_7 && b308_9 && b309_5 && b310_6 && b311_5 && b312_1 && b313_9 && b314_13 && b315_7 && b316_10 && b317_14 && b318_11 && b319_10 && b320_16 && b321_13 && b322_15 && b323_17 && b324_19 && b325_17 && b326_8 && b327_17 && b328_24 && b329_28 && b330_14 && b331_7 && b332_24 && b333_13 && b334_28 && b335_22 && b336_28 && b337_26 && b338_36 && b339_27 && b340_36 && b341_8 && b342_29 && b343_3 && b344_29 && b345_4 && b346_22 && b347_43 && b348_26 && b349_27 && b350_42 && b351_39 && b352_55 && b353_1 && b354_3 && b355_45 && b356_22 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 248;
}
if(b322_16 && b323_19 && b324_17 && b325_9 && b326_26 && b327_15 && b328_18 && b329_29 && b330_2 && b331_29 && b332_19 && b333_29 && b334_30 && b335_31 && b336_23 && b337_37 && b338_41 && b339_3 && b340_39 && b341_19 && b342_27 && b343_20 && b344_41 && b345_17 && b346_32 && b347_17 && b348_51 && b349_26 && b350_37 && b351_39 && b352_55 && b353_1 && b354_3 && b355_45 && b356_22 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 249;
}
if(b320_18 && b321_14 && b322_17 && b323_20 && b324_16 && b325_20 && b326_27 && b327_18 && b328_21 && b329_20 && b330_21 && b331_26 && b332_2 && b333_3 && b334_28 && b335_34 && b336_28 && b337_24 && b338_42 && b339_29 && b340_35 && b341_39 && b342_42 && b343_24 && b344_31 && b345_41 && b346_21 && b347_31 && b348_5 && b349_35 && b350_37 && b351_39 && b352_55 && b353_1 && b354_3 && b355_45 && b356_22 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 250;
}
if(b351_39 && b352_33 && b353_17 && b354_5 && b355_5 && b356_39 && b357_52 && b358_16 && b359_7 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 251;
}
if(b336_23 && b337_35 && b338_38 && b339_3 && b340_36 && b341_8 && b342_35 && b343_29 && b344_46 && b345_41 && b346_32 && b347_37 && b348_38 && b349_26 && b350_12 && b351_29 && b352_29 && b353_29 && b354_30 && b355_11 && b356_34 && b357_18 && b358_9 && b359_25 && b360_19 && b361_41 && b362_27 && b363_14) {
pattern_id = 252;
}
if(b344_31 && b345_41 && b346_42 && b347_43 && b348_11 && b349_27 && b350_30 && b351_28 && b352_29 && b353_9 && b354_26 && b355_3 && b356_10 && b357_6 && b358_19 && b359_26 && b360_18 && b361_26 && b362_14 && b363_22) {
pattern_id = 253;
}
if(b354_23 && b355_61 && b356_51 && b357_46 && b358_39 && b359_14 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 254;
}
if(b324_15 && b325_36 && b326_26 && b327_26 && b328_24 && b329_32 && b330_21 && b331_31 && b332_24 && b333_56 && b334_19 && b335_47 && b336_23 && b337_14 && b338_31 && b339_28 && b340_8 && b341_42 && b342_37 && b343_8 && b344_42 && b345_45 && b346_44 && b347_34 && b348_26 && b349_25 && b350_22 && b351_39 && b352_20 && b353_38 && b354_45 && b355_19 && b356_29 && b357_9 && b358_2 && b359_19 && b360_7 && b361_41 && b362_9 && b363_8) {
pattern_id = 255;
}
if(b324_15 && b325_36 && b326_26 && b327_26 && b328_24 && b329_32 && b330_21 && b331_31 && b332_24 && b333_56 && b334_19 && b335_47 && b336_23 && b337_14 && b338_31 && b339_28 && b340_8 && b341_42 && b342_37 && b343_8 && b344_42 && b345_45 && b346_44 && b347_34 && b348_26 && b349_25 && b350_22 && b351_39 && b352_59 && b353_49 && b354_6 && b355_65 && b356_28 && b357_18 && b358_34 && b359_13 && b360_30 && b361_12 && b362_20 && b363_6) {
pattern_id = 256;
}
if(b331_18 && b332_53 && b333_28 && b334_38 && b335_28 && b336_15 && b337_30 && b338_38 && b339_27 && b340_18 && b341_5 && b342_67 && b343_27 && b344_15 && b345_35 && b346_33 && b347_29 && b348_38 && b349_18 && b350_4 && b351_26 && b352_1 && b353_8 && b354_6 && b355_15 && b356_6 && b357_3 && b358_50 && b359_75 && b360_8 && b361_8 && b362_8 && b363_22) {
pattern_id = 257;
}
if(b354_23 && b355_61 && b356_29 && b357_6 && b358_17 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 258;
}
if(b346_32 && b347_24 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_13 && b354_10 && b355_2 && b356_1 && b357_19 && b358_6 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 259;
}
if(b356_52 && b357_61 && b358_44 && b359_40 && b360_39 && b361_15 && b362_8 && b363_28) {
pattern_id = 260;
}
if(b345_23 && b346_12 && b347_2 && b348_48 && b349_25 && b350_28 && b351_24 && b352_33 && b353_40 && b354_36 && b355_15 && b356_36 && b357_6 && b358_39 && b359_18 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 261;
}
if(b348_40 && b349_62 && b350_4 && b351_47 && b352_23 && b353_29 && b354_56 && b355_25 && b356_6 && b357_40 && b358_19 && b359_13 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 262;
}
if(b356_52 && b357_56 && b358_42 && b359_36 && b360_57 && b361_42 && b362_23 && b363_40) {
pattern_id = 263;
}
if(b352_43 && b353_54 && b354_3 && b355_28 && b356_28 && b357_18 && b358_15 && b359_26 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 264;
}
if(b349_11 && b350_60 && b351_47 && b352_65 && b353_14 && b354_56 && b355_25 && b356_28 && b357_32 && b358_19 && b359_40 && b360_2 && b361_18 && b362_27 && b363_25) {
pattern_id = 265;
}
if(b359_52 && b360_56 && b361_12 && b362_37 && b363_56) {
pattern_id = 266;
}
if(b356_52 && b357_31 && b358_51 && b359_38 && b360_40 && b361_26 && b362_20 && b363_28) {
pattern_id = 267;
}
if(b348_40 && b349_46 && b350_30 && b351_29 && b352_24 && b353_27 && b354_25 && b355_38 && b356_50 && b357_9 && b358_6 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 268;
}
if(b354_23 && b355_46 && b356_14 && b357_18 && b358_55 && b359_54 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 269;
}
if(b338_8 && b339_9 && b340_26 && b341_35 && b342_37 && b343_35 && b344_26 && b345_4 && b346_21 && b347_32 && b348_35 && b349_25 && b350_34 && b351_38 && b352_52 && b353_32 && b354_3 && b355_14 && b356_15 && b357_17 && b358_11 && b359_26 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 270;
}
if(b338_8 && b339_9 && b340_26 && b341_35 && b342_37 && b343_35 && b344_26 && b345_4 && b346_21 && b347_32 && b348_35 && b349_25 && b350_34 && b351_38 && b352_52 && b353_32 && b354_3 && b355_14 && b356_15 && b357_17 && b358_11 && b359_26 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 271;
}
if(b344_31 && b345_44 && b346_35 && b347_43 && b348_26 && b349_49 && b350_28 && b351_26 && b352_23 && b353_20 && b354_12 && b355_11 && b356_34 && b357_18 && b358_9 && b359_26 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 272;
}
if(b344_31 && b345_44 && b346_35 && b347_43 && b348_26 && b349_49 && b350_28 && b351_26 && b352_23 && b353_20 && b354_12 && b355_11 && b356_34 && b357_18 && b358_9 && b359_26 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 273;
}
if(b342_26 && b343_36 && b344_25 && b345_45 && b346_20 && b347_42 && b348_17 && b349_44 && b350_26 && b351_39 && b352_1 && b353_49 && b354_28 && b355_15 && b356_1 && b357_6 && b358_6 && b359_17 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 274;
}
if(b342_26 && b343_36 && b344_25 && b345_45 && b346_20 && b347_42 && b348_17 && b349_44 && b350_26 && b351_39 && b352_1 && b353_49 && b354_28 && b355_15 && b356_1 && b357_6 && b358_6 && b359_17 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 275;
}
if(b337_32 && b338_37 && b339_25 && b340_36 && b341_24 && b342_38 && b343_28 && b344_42 && b345_17 && b346_32 && b347_43 && b348_11 && b349_48 && b350_8 && b351_35 && b352_6 && b353_32 && b354_5 && b355_3 && b356_29 && b357_15 && b358_46 && b359_26 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 276;
}
if(b337_32 && b338_37 && b339_25 && b340_36 && b341_24 && b342_38 && b343_28 && b344_42 && b345_17 && b346_32 && b347_43 && b348_11 && b349_48 && b350_8 && b351_35 && b352_6 && b353_32 && b354_5 && b355_3 && b356_29 && b357_15 && b358_46 && b359_26 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 277;
}
if(b354_23 && b355_46 && b356_17 && b357_6 && b358_19 && b359_54 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 278;
}
if(b335_25 && b336_29 && b337_34 && b338_38 && b339_27 && b340_34 && b341_36 && b342_37 && b343_26 && b344_31 && b345_44 && b346_43 && b347_34 && b348_26 && b349_46 && b350_28 && b351_23 && b352_6 && b353_20 && b354_5 && b355_44 && b356_7 && b357_49 && b358_37 && b359_17 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 279;
}
if(b345_23 && b346_37 && b347_42 && b348_34 && b349_18 && b350_48 && b351_48 && b352_24 && b353_27 && b354_23 && b355_14 && b356_57 && b357_6 && b358_55 && b359_43 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 280;
}
if(b345_23 && b346_37 && b347_42 && b348_34 && b349_18 && b350_48 && b351_48 && b352_24 && b353_27 && b354_23 && b355_14 && b356_57 && b357_6 && b358_55 && b359_43 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 281;
}
if(b350_31 && b351_41 && b352_44 && b353_29 && b354_43 && b355_46 && b356_29 && b357_3 && b358_3 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 282;
}
if(b344_31 && b345_44 && b346_43 && b347_34 && b348_26 && b349_46 && b350_19 && b351_49 && b352_6 && b353_20 && b354_5 && b355_33 && b356_9 && b357_18 && b358_2 && b359_26 && b360_2 && b361_52 && b362_20 && b363_41) {
pattern_id = 283;
}
if(b343_27 && b344_27 && b345_39 && b346_42 && b347_29 && b348_49 && b349_43 && b350_49 && b351_26 && b352_43 && b353_10 && b354_3 && b355_11 && b356_17 && b357_35 && b358_16 && b359_13 && b360_2 && b361_52 && b362_20 && b363_41) {
pattern_id = 284;
}
if(b343_27 && b344_27 && b345_39 && b346_42 && b347_29 && b348_49 && b349_43 && b350_49 && b351_26 && b352_43 && b353_10 && b354_3 && b355_11 && b356_17 && b357_35 && b358_16 && b359_13 && b360_2 && b361_41 && b362_11 && b363_47) {
pattern_id = 285;
}
if(b342_26 && b343_36 && b344_43 && b345_4 && b346_20 && b347_45 && b348_24 && b349_49 && b350_12 && b351_39 && b352_25 && b353_49 && b354_36 && b355_47 && b356_29 && b357_10 && b358_6 && b359_26 && b360_2 && b361_52 && b362_20 && b363_41) {
pattern_id = 286;
}
if(b344_31 && b345_44 && b346_43 && b347_34 && b348_26 && b349_46 && b350_19 && b351_49 && b352_6 && b353_20 && b354_8 && b355_47 && b356_9 && b357_13 && b358_16 && b359_43 && b360_2 && b361_52 && b362_20 && b363_41) {
pattern_id = 287;
}
if(b343_27 && b344_27 && b345_39 && b346_42 && b347_29 && b348_49 && b349_43 && b350_49 && b351_26 && b352_43 && b353_23 && b354_36 && b355_15 && b356_7 && b357_18 && b358_11 && b359_3 && b360_2 && b361_52 && b362_20 && b363_41) {
pattern_id = 288;
}
if(b355_42 && b356_53 && b357_20 && b358_11 && b359_12 && b360_55 && b361_17 && b362_56 && b363_52) {
pattern_id = 289;
}
if(b352_43 && b353_8 && b354_17 && b355_49 && b356_29 && b357_19 && b358_44 && b359_34 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 290;
}
if(b351_39 && b352_21 && b353_22 && b354_45 && b355_15 && b356_1 && b357_51 && b358_10 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 291;
}
if(b355_42 && b356_10 && b357_62 && b358_2 && b359_19 && b360_19 && b361_39 && b362_2 && b363_28) {
pattern_id = 292;
}
if(b346_32 && b347_31 && b348_17 && b349_29 && b350_41 && b351_41 && b352_1 && b353_29 && b354_3 && b355_5 && b356_36 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_20 && b363_48) {
pattern_id = 293;
}
if(b359_52 && b360_19 && b361_53 && b362_36 && b363_28) {
pattern_id = 294;
}
if(b353_20 && b354_5 && b355_33 && b356_7 && b357_35 && b358_56 && b359_13 && b360_2 && b361_23 && b362_15 && b363_29) {
pattern_id = 295;
}
if(b321_12 && b322_31 && b323_24 && b324_33 && b325_25 && b326_26 && b327_19 && b328_22 && b329_39 && b330_45 && b331_32 && b332_36 && b333_3 && b334_39 && b335_35 && b336_20 && b337_26 && b338_38 && b339_49 && b340_49 && b341_23 && b342_39 && b343_58 && b344_13 && b345_48 && b346_33 && b347_22 && b348_57 && b349_18 && b350_22 && b351_5 && b352_36 && b353_1 && b354_8 && b355_3 && b356_8 && b357_3 && b358_11 && b359_67 && b360_54 && b361_26 && b362_25 && b363_5) {
pattern_id = 296;
}
if(b357_21 && b358_51 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 297;
}
if(b350_31 && b351_29 && b352_41 && b353_62 && b354_44 && b355_1 && b356_14 && b357_42 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 298;
}
if(b356_52 && b357_13 && b358_18 && b359_56 && b360_62 && b361_52 && b362_25 && b363_5) {
pattern_id = 299;
}
if(b356_52 && b357_13 && b358_18 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 300;
}
if(b345_23 && b346_44 && b347_44 && b348_42 && b349_46 && b350_57 && b351_35 && b352_23 && b353_32 && b354_62 && b355_13 && b356_57 && b357_51 && b358_52 && b359_21 && b360_19 && b361_33 && b362_9 && b363_48) {
pattern_id = 301;
}
if(b344_31 && b345_31 && b346_31 && b347_21 && b348_23 && b349_48 && b350_8 && b351_39 && b352_45 && b353_37 && b354_41 && b355_3 && b356_8 && b357_3 && b358_11 && b359_26 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 302;
}
if(b339_35 && b340_33 && b341_39 && b342_31 && b343_24 && b344_35 && b345_4 && b346_22 && b347_43 && b348_40 && b349_27 && b350_41 && b351_38 && b352_24 && b353_27 && b354_23 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 303;
}
if(b340_28 && b341_28 && b342_29 && b343_25 && b344_5 && b345_36 && b346_16 && b347_33 && b348_11 && b349_36 && b350_49 && b351_39 && b352_45 && b353_37 && b354_41 && b355_38 && b356_29 && b357_11 && b358_50 && b359_8 && b360_12 && b361_33 && b362_56 && b363_38) {
pattern_id = 304;
}
if(b354_23 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 305;
}
if(b353_20 && b354_5 && b355_49 && b356_14 && b357_35 && b358_46 && b359_25 && b360_28 && b361_2 && b362_56 && b363_59) {
pattern_id = 306;
}
if(b351_39 && b352_21 && b353_38 && b354_44 && b355_15 && b356_28 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_35 && b363_48) {
pattern_id = 307;
}
if(b355_42 && b356_10 && b357_34 && b358_55 && b359_12 && b360_30 && b361_30 && b362_56 && b363_25) {
pattern_id = 308;
}
if(b337_32 && b338_29 && b339_23 && b340_40 && b341_24 && b342_25 && b343_27 && b344_42 && b345_17 && b346_33 && b347_2 && b348_48 && b349_27 && b350_12 && b351_5 && b352_25 && b353_20 && b354_9 && b355_1 && b356_10 && b357_34 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 309;
}
if(b356_52 && b357_13 && b358_18 && b359_42 && b360_13 && b361_44 && b362_67 && b363_28) {
pattern_id = 310;
}
if(b346_32 && b347_31 && b348_42 && b349_17 && b350_8 && b351_7 && b352_52 && b353_40 && b354_12 && b355_5 && b356_14 && b357_18 && b358_46 && b359_19 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 311;
}
if(b349_11 && b350_28 && b351_24 && b352_13 && b353_1 && b354_41 && b355_46 && b356_8 && b357_34 && b358_19 && b359_19 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 312;
}
if(b348_40 && b349_27 && b350_41 && b351_38 && b352_24 && b353_27 && b354_42 && b355_1 && b356_14 && b357_42 && b358_6 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 313;
}
if(b352_43 && b353_8 && b354_45 && b355_5 && b356_29 && b357_3 && b358_59 && b359_53 && b360_13 && b361_23 && b362_9 && b363_22) {
pattern_id = 314;
}
if(b349_11 && b350_28 && b351_24 && b352_13 && b353_1 && b354_41 && b355_46 && b356_57 && b357_18 && b358_17 && b359_7 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 315;
}
if(b346_32 && b347_31 && b348_42 && b349_17 && b350_8 && b351_7 && b352_52 && b353_46 && b354_43 && b355_33 && b356_8 && b357_3 && b358_2 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 316;
}
if(b347_32 && b348_17 && b349_29 && b350_30 && b351_28 && b352_29 && b353_62 && b354_10 && b355_25 && b356_50 && b357_15 && b358_7 && b359_19 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 317;
}
if(b345_23 && b346_44 && b347_44 && b348_25 && b349_18 && b350_22 && b351_41 && b352_22 && b353_8 && b354_8 && b355_14 && b356_54 && b357_15 && b358_9 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 318;
}
if(b346_32 && b347_31 && b348_42 && b349_17 && b350_8 && b351_7 && b352_52 && b353_17 && b354_36 && b355_1 && b356_17 && b357_35 && b358_6 && b359_20 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 319;
}
if(b345_23 && b346_44 && b347_44 && b348_25 && b349_18 && b350_22 && b351_41 && b352_25 && b353_49 && b354_6 && b355_3 && b356_29 && b357_3 && b358_12 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 320;
}
if(b348_40 && b349_27 && b350_41 && b351_38 && b352_24 && b353_27 && b354_42 && b355_14 && b356_7 && b357_13 && b358_11 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 321;
}
if(b344_31 && b345_31 && b346_31 && b347_21 && b348_26 && b349_39 && b350_48 && b351_26 && b352_23 && b353_48 && b354_27 && b355_9 && b356_10 && b357_6 && b358_6 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 322;
}
if(b339_35 && b340_33 && b341_39 && b342_31 && b343_30 && b344_35 && b345_44 && b346_42 && b347_22 && b348_25 && b349_43 && b350_42 && b351_29 && b352_6 && b353_49 && b354_8 && b355_46 && b356_14 && b357_35 && b358_2 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 323;
}
if(b341_40 && b342_19 && b343_20 && b344_19 && b345_22 && b346_46 && b347_45 && b348_34 && b349_43 && b350_42 && b351_41 && b352_13 && b353_1 && b354_8 && b355_33 && b356_53 && b357_3 && b358_6 && b359_20 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 324;
}
if(b346_32 && b347_31 && b348_42 && b349_17 && b350_8 && b351_7 && b352_52 && b353_29 && b354_27 && b355_9 && b356_53 && b357_3 && b358_6 && b359_20 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 325;
}
if(b345_23 && b346_44 && b347_44 && b348_25 && b349_18 && b350_22 && b351_28 && b352_25 && b353_29 && b354_36 && b355_2 && b356_7 && b357_15 && b358_9 && b359_26 && b360_2 && b361_11 && b362_16 && b363_26) {
pattern_id = 326;
}
if(b353_20 && b354_5 && b355_49 && b356_14 && b357_35 && b358_46 && b359_43 && b360_10 && b361_50 && b362_12 && b363_10) {
pattern_id = 327;
}
if(b343_27 && b344_26 && b345_35 && b346_33 && b347_29 && b348_29 && b349_27 && b350_19 && b351_28 && b352_43 && b353_30 && b354_27 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 328;
}
if(b356_52 && b357_13 && b358_18 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 329;
}
if(b338_8 && b339_24 && b340_21 && b341_27 && b342_19 && b343_25 && b344_25 && b345_30 && b346_21 && b347_33 && b348_40 && b349_35 && b350_36 && b351_7 && b352_49 && b353_1 && b354_28 && b355_42 && b356_1 && b357_35 && b358_11 && b359_13 && b360_2 && b361_52 && b362_2 && b363_52) {
pattern_id = 330;
}
if(b328_18 && b329_18 && b330_18 && b331_27 && b332_25 && b333_27 && b334_18 && b335_32 && b336_14 && b337_32 && b338_27 && b339_34 && b340_38 && b341_24 && b342_40 && b343_25 && b344_34 && b345_36 && b346_42 && b347_32 && b348_23 && b349_27 && b350_12 && b351_29 && b352_40 && b353_37 && b354_28 && b355_46 && b356_7 && b357_45 && b358_44 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 331;
}
if(b357_21 && b358_51 && b359_53 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 332;
}
if(b348_40 && b349_27 && b350_44 && b351_21 && b352_34 && b353_17 && b354_9 && b355_13 && b356_61 && b357_7 && b358_37 && b359_21 && b360_27 && b361_26 && b362_52 && b363_48) {
pattern_id = 333;
}
if(b350_31 && b351_29 && b352_8 && b353_20 && b354_27 && b355_9 && b356_15 && b357_11 && b358_19 && b359_21 && b360_2 && b361_52 && b362_8 && b363_14) {
pattern_id = 334;
}
if(b348_40 && b349_27 && b350_52 && b351_5 && b352_29 && b353_29 && b354_36 && b355_44 && b356_28 && b357_3 && b358_6 && b359_17 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 335;
}
if(b355_42 && b356_10 && b357_11 && b358_17 && b359_12 && b360_40 && b361_11 && b362_2 && b363_5) {
pattern_id = 336;
}
if(b355_42 && b356_10 && b357_17 && b358_27 && b359_57 && b360_40 && b361_30 && b362_56 && b363_25) {
pattern_id = 337;
}
if(b354_23 && b355_2 && b356_16 && b357_18 && b358_9 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 338;
}
if(b353_20 && b354_5 && b355_9 && b356_29 && b357_42 && b358_51 && b359_24 && b360_19 && b361_30 && b362_56 && b363_25) {
pattern_id = 339;
}
if(b349_11 && b350_28 && b351_45 && b352_24 && b353_47 && b354_5 && b355_28 && b356_10 && b357_33 && b358_44 && b359_43 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 340;
}
if(b350_31 && b351_29 && b352_40 && b353_1 && b354_3 && b355_16 && b356_32 && b357_15 && b358_9 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 341;
}
if(b355_42 && b356_10 && b357_17 && b358_14 && b359_8 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 342;
}
if(b342_26 && b343_28 && b344_35 && b345_35 && b346_10 && b347_5 && b348_26 && b349_29 && b350_31 && b351_35 && b352_13 && b353_10 && b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 343;
}
if(b343_27 && b344_26 && b345_36 && b346_31 && b347_43 && b348_15 && b349_18 && b350_41 && b351_39 && b352_25 && b353_48 && b354_8 && b355_42 && b356_1 && b357_45 && b358_46 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 344;
}
if(b355_42 && b356_10 && b357_3 && b358_46 && b359_3 && b360_59 && b361_44 && b362_14 && b363_5) {
pattern_id = 345;
}
if(b357_21 && b358_51 && b359_21 && b360_10 && b361_44 && b362_64 && b363_28) {
pattern_id = 346;
}
if(b357_21 && b358_51 && b359_21 && b360_8 && b361_30 && b362_56 && b363_25) {
pattern_id = 347;
}
if(b356_52 && b357_13 && b358_46 && b359_26 && b360_2 && b361_11 && b362_25 && b363_33) {
pattern_id = 348;
}
if(b354_23 && b355_2 && b356_36 && b357_18 && b358_53 && b359_13 && b360_24 && b361_30 && b362_56 && b363_25) {
pattern_id = 349;
}
if(b356_52 && b357_13 && b358_44 && b359_12 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 350;
}
if(b353_20 && b354_5 && b355_13 && b356_29 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_52 && b363_48) {
pattern_id = 351;
}
if(b359_52 && b360_19 && b361_11 && b362_12 && b363_28) {
pattern_id = 352;
}
if(b353_20 && b354_5 && b355_13 && b356_29 && b357_21 && b358_2 && b359_19 && b360_19 && b361_39 && b362_44 && b363_22) {
pattern_id = 353;
}
if(b351_39 && b352_21 && b353_17 && b354_27 && b355_42 && b356_50 && b357_18 && b358_37 && b359_12 && b360_28 && b361_30 && b362_63 && b363_22) {
pattern_id = 354;
}
if(b352_43 && b353_8 && b354_27 && b355_13 && b356_53 && b357_19 && b358_11 && b359_8 && b360_2 && b361_41 && b362_11 && b363_51) {
pattern_id = 355;
}
if(b348_40 && b349_27 && b350_19 && b351_20 && b352_40 && b353_1 && b354_25 && b355_2 && b356_7 && b357_35 && b358_37 && b359_21 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 356;
}
if(b357_21 && b358_51 && b359_17 && b360_24 && b361_2 && b362_12 && b363_5) {
pattern_id = 357;
}
if(b355_42 && b356_10 && b357_9 && b358_12 && b359_26 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 358;
}
if(b355_42 && b356_10 && b357_9 && b358_12 && b359_26 && b360_2 && b361_52 && b362_27 && b363_26) {
pattern_id = 359;
}
if(b345_23 && b346_44 && b347_43 && b348_65 && b349_56 && b350_8 && b351_49 && b352_4 && b353_20 && b354_25 && b355_25 && b356_6 && b357_40 && b358_19 && b359_13 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 360;
}
if(b348_40 && b349_27 && b350_34 && b351_56 && b352_10 && b353_1 && b354_1 && b355_25 && b356_52 && b357_20 && b358_9 && b359_26 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 361;
}
if(b353_20 && b354_5 && b355_14 && b356_53 && b357_2 && b358_6 && b359_24 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 362;
}
if(b352_43 && b353_8 && b354_8 && b355_46 && b356_54 && b357_18 && b358_27 && b359_1 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 363;
}
if(b321_12 && b322_31 && b323_11 && b324_10 && b325_25 && b326_26 && b327_19 && b328_32 && b329_2 && b330_17 && b331_28 && b332_2 && b333_41 && b334_22 && b335_25 && b336_14 && b337_38 && b338_40 && b339_22 && b340_35 && b341_51 && b342_49 && b343_37 && b344_34 && b345_47 && b346_32 && b347_25 && b348_49 && b349_1 && b350_48 && b351_15 && b352_7 && b353_42 && b354_17 && b355_26 && b356_52 && b357_44 && b358_44 && b359_38 && b360_19 && b361_39 && b362_9 && b363_28) {
pattern_id = 364;
}
if(b357_21 && b358_51 && b359_19 && b360_72 && b361_41 && b362_38 && b363_70) {
pattern_id = 365;
}
if(b353_20 && b354_5 && b355_3 && b356_6 && b357_41 && b358_19 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 366;
}
if(b352_43 && b353_8 && b354_21 && b355_60 && b356_7 && b357_35 && b358_37 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 367;
}
if(b335_25 && b336_27 && b337_23 && b338_38 && b339_36 && b340_34 && b341_39 && b342_19 && b343_3 && b344_26 && b345_23 && b346_44 && b347_23 && b348_34 && b349_24 && b350_48 && b351_23 && b352_25 && b353_49 && b354_36 && b355_46 && b356_32 && b357_35 && b358_17 && b359_13 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 368;
}
if(b338_8 && b339_24 && b340_38 && b341_34 && b342_28 && b343_24 && b344_35 && b345_4 && b346_20 && b347_9 && b348_17 && b349_44 && b350_26 && b351_32 && b352_45 && b353_9 && b354_43 && b355_54 && b356_60 && b357_14 && b358_8 && b359_63 && b360_49 && b361_21 && b362_49 && b363_44) {
pattern_id = 369;
}
if(b339_35 && b340_33 && b341_52 && b342_24 && b343_2 && b344_34 && b345_36 && b346_42 && b347_29 && b348_23 && b349_27 && b350_12 && b351_28 && b352_4 && b353_27 && b354_42 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 370;
}
if(b352_43 && b353_8 && b354_21 && b355_3 && b356_57 && b357_15 && b358_9 && b359_26 && b360_2 && b361_11 && b362_16 && b363_26) {
pattern_id = 371;
}
if(b351_39 && b352_21 && b353_6 && b354_6 && b355_25 && b356_57 && b357_6 && b358_55 && b359_43 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 372;
}
if(b339_35 && b340_33 && b341_62 && b342_36 && b343_2 && b344_34 && b345_21 && b346_51 && b347_55 && b348_11 && b349_61 && b350_26 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 373;
}
if(b344_31 && b345_31 && b346_43 && b347_29 && b348_17 && b349_44 && b350_8 && b351_54 && b352_43 && b353_10 && b354_55 && b355_14 && b356_7 && b357_18 && b358_55 && b359_8 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 374;
}
if(b353_20 && b354_5 && b355_45 && b356_1 && b357_6 && b358_51 && b359_19 && b360_8 && b361_30 && b362_56 && b363_25) {
pattern_id = 375;
}
if(b352_43 && b353_8 && b354_34 && b355_14 && b356_7 && b357_13 && b358_11 && b359_26 && b360_2 && b361_11 && b362_25 && b363_33) {
pattern_id = 376;
}
if(b351_39 && b352_21 && b353_53 && b354_40 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 377;
}
if(b356_52 && b357_13 && b358_53 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 378;
}
if(b348_40 && b349_19 && b350_31 && b351_28 && b352_29 && b353_38 && b354_3 && b355_51 && b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 379;
}
if(b344_31 && b345_47 && b346_32 && b347_18 && b348_40 && b349_50 && b350_8 && b351_7 && b352_1 && b353_8 && b354_36 && b355_42 && b356_7 && b357_44 && b358_18 && b359_3 && b360_2 && b361_17 && b362_18 && b363_8) {
pattern_id = 380;
}
if(b353_20 && b354_20 && b355_42 && b356_36 && b357_40 && b358_12 && b359_52 && b360_9 && b361_20 && b362_1 && b363_57) {
pattern_id = 381;
}
if(b356_52 && b357_42 && b358_50 && b359_26 && b360_6 && b361_7 && b362_9 && b363_28) {
pattern_id = 382;
}
if(b349_11 && b350_5 && b351_36 && b352_43 && b353_47 && b354_16 && b355_29 && b356_29 && b357_3 && b358_16 && b359_43 && b360_59 && b361_19 && b362_9 && b363_28) {
pattern_id = 383;
}
if(b357_21 && b358_27 && b359_8 && b360_24 && b361_22 && b362_44 && b363_47) {
pattern_id = 384;
}
if(b359_52 && b360_52 && b361_12 && b362_2 && b363_32) {
pattern_id = 385;
}
if(b353_20 && b354_20 && b355_28 && b356_35 && b357_49 && b358_19 && b359_26 && b360_18 && b361_30 && b362_2 && b363_32) {
pattern_id = 386;
}
if(b352_43 && b353_47 && b354_20 && b355_29 && b356_57 && b357_35 && b358_2 && b359_19 && b360_2 && b361_41 && b362_17 && b363_33) {
pattern_id = 387;
}
if(b350_31 && b351_48 && b352_32 && b353_51 && b354_9 && b355_15 && b356_1 && b357_6 && b358_17 && b359_3 && b360_58 && b361_30 && b362_2 && b363_32) {
pattern_id = 388;
}
if(b350_31 && b351_48 && b352_32 && b353_51 && b354_9 && b355_15 && b356_1 && b357_6 && b358_2 && b359_55 && b360_24 && b361_30 && b362_2 && b363_32) {
pattern_id = 389;
}
if(b350_31 && b351_48 && b352_32 && b353_51 && b354_9 && b355_25 && b356_1 && b357_6 && b358_2 && b359_55 && b360_24 && b361_30 && b362_2 && b363_32) {
pattern_id = 390;
}
if(b349_11 && b350_5 && b351_48 && b352_56 && b353_56 && b354_12 && b355_14 && b356_7 && b357_19 && b358_56 && b359_56 && b360_2 && b361_41 && b362_17 && b363_33) {
pattern_id = 391;
}
if(b354_23 && b355_28 && b356_12 && b357_36 && b358_9 && b359_13 && b360_28 && b361_30 && b362_2 && b363_32) {
pattern_id = 392;
}
if(b351_39 && b352_32 && b353_47 && b354_40 && b355_11 && b356_8 && b357_51 && b358_17 && b359_3 && b360_58 && b361_30 && b362_2 && b363_32) {
pattern_id = 393;
}
if(b351_39 && b352_32 && b353_47 && b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 394;
}
if(b349_11 && b350_5 && b351_48 && b352_52 && b353_10 && b354_44 && b355_15 && b356_16 && b357_35 && b358_6 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 395;
}
if(b349_11 && b350_5 && b351_48 && b352_25 && b353_20 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 396;
}
if(b350_31 && b351_48 && b352_32 && b353_10 && b354_42 && b355_38 && b356_6 && b357_9 && b358_7 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 397;
}
if(b355_42 && b356_12 && b357_34 && b358_19 && b359_17 && b360_2 && b361_2 && b362_11 && b363_8) {
pattern_id = 398;
}
if(b349_11 && b350_5 && b351_5 && b352_6 && b353_8 && b354_23 && b355_25 && b356_41 && b357_34 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 399;
}
if(b352_43 && b353_47 && b354_43 && b355_48 && b356_9 && b357_15 && b358_46 && b359_53 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 400;
}
if(b285_9 && b286_10 && b287_17 && b288_8 && b289_23 && b290_19 && b291_24 && b292_18 && b293_26 && b294_22 && b295_19 && b296_10 && b297_2 && b298_23 && b299_24 && b300_4 && b301_7 && b302_23 && b303_30 && b304_11 && b305_22 && b306_27 && b307_29 && b308_2 && b309_4 && b310_28 && b311_32 && b312_3 && b313_34 && b314_37 && b315_4 && b316_4 && b317_37 && b318_41 && b319_3 && b320_41 && b321_44 && b322_3 && b323_15 && b324_44 && b325_7 && b326_20 && b327_35 && b328_46 && b329_1 && b330_7 && b331_50 && b332_6 && b333_2 && b334_53 && b335_6 && b336_7 && b337_5 && b338_64 && b339_52 && b340_9 && b341_47 && b342_35 && b343_10 && b344_3 && b345_12 && b346_4 && b347_6 && b348_28 && b349_8 && b350_1 && b351_12 && b352_71 && b353_16 && b354_15 && b355_22 && b356_48 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 401;
}
if(b348_40 && b349_19 && b350_8 && b351_7 && b352_43 && b353_32 && b354_3 && b355_2 && b356_34 && b357_31 && b358_19 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 402;
}
if(b357_21 && b358_27 && b359_12 && b360_30 && b361_32 && b362_2 && b363_32) {
pattern_id = 403;
}
if(b346_32 && b347_50 && b348_26 && b349_54 && b350_41 && b351_48 && b352_2 && b353_51 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 404;
}
if(b341_40 && b342_48 && b343_30 && b344_50 && b345_4 && b346_44 && b347_28 && b348_61 && b349_24 && b350_12 && b351_26 && b352_22 && b353_32 && b354_3 && b355_33 && b356_8 && b357_35 && b358_56 && b359_13 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 405;
}
if(b337_32 && b338_30 && b339_29 && b340_24 && b341_3 && b342_16 && b343_3 && b344_40 && b345_31 && b346_26 && b347_31 && b348_58 && b349_25 && b350_4 && b351_39 && b352_29 && b353_45 && b354_71 && b355_49 && b356_62 && b357_62 && b358_32 && b359_12 && b360_21 && b361_29 && b362_21 && b363_37) {
pattern_id = 406;
}
if(b352_43 && b353_47 && b354_41 && b355_28 && b356_32 && b357_15 && b358_9 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 407;
}
if(b355_42 && b356_12 && b357_15 && b358_37 && b359_15 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 408;
}
if(b351_39 && b352_32 && b353_37 && b354_12 && b355_60 && b356_14 && b357_13 && b358_9 && b359_15 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 409;
}
if(b354_23 && b355_28 && b356_6 && b357_15 && b358_11 && b359_16 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 410;
}
if(b348_40 && b349_19 && b350_36 && b351_42 && b352_41 && b353_27 && b354_23 && b355_28 && b356_6 && b357_45 && b358_6 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 411;
}
if(b352_43 && b353_47 && b354_8 && b355_48 && b356_15 && b357_18 && b358_2 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 412;
}
if(b353_20 && b354_20 && b355_14 && b356_16 && b357_35 && b358_2 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 413;
}
if(b356_52 && b357_42 && b358_2 && b359_42 && b360_26 && b361_30 && b362_56 && b363_25) {
pattern_id = 414;
}
if(b336_23 && b337_21 && b338_48 && b339_46 && b340_54 && b341_27 && b342_27 && b343_40 && b344_30 && b345_23 && b346_30 && b347_22 && b348_17 && b349_36 && b350_24 && b351_43 && b352_34 && b353_8 && b354_8 && b355_13 && b356_61 && b357_3 && b358_6 && b359_20 && b360_8 && b361_26 && b362_52 && b363_48) {
pattern_id = 415;
}
if(b333_21 && b334_16 && b335_37 && b336_31 && b337_42 && b338_27 && b339_40 && b340_43 && b341_8 && b342_45 && b343_24 && b344_31 && b345_8 && b346_2 && b347_31 && b348_38 && b349_48 && b350_26 && b351_30 && b352_41 && b353_48 && b354_43 && b355_16 && b356_60 && b357_13 && b358_2 && b359_26 && b360_20 && b361_7 && b362_8 && b363_26) {
pattern_id = 416;
}
if(b348_40 && b349_35 && b350_28 && b351_54 && b352_42 && b353_49 && b354_23 && b355_13 && b356_34 && b357_32 && b358_59 && b359_13 && b360_54 && b361_12 && b362_57 && b363_61) {
pattern_id = 417;
}
if(b348_40 && b349_35 && b350_28 && b351_54 && b352_42 && b353_49 && b354_45 && b355_46 && b356_32 && b357_18 && b358_6 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 418;
}
if(b351_39 && b352_45 && b353_8 && b354_25 && b355_10 && b356_8 && b357_41 && b358_12 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 419;
}
if(b352_43 && b353_40 && b354_5 && b355_9 && b356_53 && b357_41 && b358_51 && b359_15 && b360_27 && b361_30 && b362_56 && b363_25) {
pattern_id = 420;
}
if(b355_42 && b356_9 && b357_13 && b358_17 && b359_13 && b360_30 && b361_19 && b362_18 && b363_8) {
pattern_id = 421;
}
if(b346_32 && b347_9 && b348_17 && b349_34 && b350_26 && b351_7 && b352_41 && b353_8 && b354_36 && b355_29 && b356_10 && b357_34 && b358_55 && b359_12 && b360_30 && b361_30 && b362_56 && b363_25) {
pattern_id = 422;
}
if(b351_39 && b352_45 && b353_8 && b354_10 && b355_1 && b356_28 && b357_34 && b358_51 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 423;
}
if(b346_32 && b347_9 && b348_17 && b349_34 && b350_26 && b351_7 && b352_41 && b353_8 && b354_36 && b355_46 && b356_10 && b357_34 && b358_55 && b359_12 && b360_30 && b361_30 && b362_56 && b363_25) {
pattern_id = 424;
}
if(b345_23 && b346_36 && b347_31 && b348_48 && b349_31 && b350_22 && b351_24 && b352_21 && b353_32 && b354_42 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_11 && b362_25 && b363_33) {
pattern_id = 425;
}
if(b346_32 && b347_9 && b348_17 && b349_34 && b350_26 && b351_7 && b352_41 && b353_49 && b354_36 && b355_46 && b356_10 && b357_34 && b358_55 && b359_12 && b360_30 && b361_30 && b362_56 && b363_25) {
pattern_id = 426;
}
if(b357_21 && b358_16 && b359_8 && b360_40 && b361_11 && b362_18 && b363_22) {
pattern_id = 427;
}
if(b352_43 && b353_40 && b354_5 && b355_5 && b356_36 && b357_13 && b358_2 && b359_64 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 428;
}
if(b354_23 && b355_33 && b356_10 && b357_9 && b358_27 && b359_3 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 429;
}
if(b355_42 && b356_9 && b357_13 && b358_9 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 430;
}
if(b353_20 && b354_25 && b355_2 && b356_41 && b357_6 && b358_10 && b359_4 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 431;
}
if(b352_43 && b353_40 && b354_5 && b355_3 && b356_10 && b357_17 && b358_37 && b359_40 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 432;
}
if(b354_23 && b355_33 && b356_10 && b357_6 && b358_12 && b359_45 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 433;
}
if(b356_52 && b357_10 && b358_51 && b359_19 && b360_13 && b361_44 && b362_35 && b363_46) {
pattern_id = 434;
}
if(b348_40 && b349_35 && b350_5 && b351_21 && b352_1 && b353_57 && b354_23 && b355_33 && b356_12 && b357_9 && b358_6 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 435;
}
if(b347_32 && b348_23 && b349_35 && b350_5 && b351_28 && b352_40 && b353_46 && b354_23 && b355_5 && b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 436;
}
if(b335_25 && b336_24 && b337_33 && b338_8 && b339_43 && b340_43 && b341_40 && b342_36 && b343_48 && b344_35 && b345_51 && b346_20 && b347_49 && b348_40 && b349_24 && b350_12 && b351_38 && b352_40 && b353_20 && b354_25 && b355_16 && b356_32 && b357_31 && b358_12 && b359_12 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 437;
}
if(b353_20 && b354_25 && b355_1 && b356_41 && b357_19 && b358_56 && b359_17 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 438;
}
if(b345_23 && b346_36 && b347_35 && b348_17 && b349_43 && b350_19 && b351_38 && b352_21 && b353_27 && b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 439;
}
if(b352_43 && b353_40 && b354_46 && b355_33 && b356_10 && b357_10 && b358_54 && b359_13 && b360_2 && b361_33 && b362_18 && b363_47) {
pattern_id = 440;
}
if(b337_32 && b338_32 && b339_33 && b340_21 && b341_23 && b342_36 && b343_8 && b344_31 && b345_21 && b346_41 && b347_21 && b348_48 && b349_26 && b350_29 && b351_7 && b352_6 && b353_8 && b354_50 && b355_33 && b356_57 && b357_18 && b358_16 && b359_15 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 441;
}
if(b345_23 && b346_36 && b347_35 && b348_42 && b349_25 && b350_24 && b351_35 && b352_43 && b353_49 && b354_50 && b355_2 && b356_14 && b357_51 && b358_17 && b359_13 && b360_19 && b361_11 && b362_56 && b363_28) {
pattern_id = 442;
}
if(b324_15 && b325_15 && b326_22 && b327_11 && b328_2 && b329_2 && b330_14 && b331_18 && b332_2 && b333_19 && b334_27 && b335_23 && b336_18 && b337_20 && b338_27 && b339_24 && b340_26 && b341_25 && b342_26 && b343_24 && b344_19 && b345_31 && b346_20 && b347_28 && b348_40 && b349_27 && b350_19 && b351_20 && b352_40 && b353_1 && b354_25 && b355_2 && b356_7 && b357_35 && b358_37 && b359_21 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 443;
}
if(b328_18 && b329_2 && b330_16 && b331_20 && b332_20 && b333_20 && b334_21 && b335_25 && b336_20 && b337_22 && b338_29 && b339_28 && b340_26 && b341_19 && b342_27 && b343_28 && b344_25 && b345_34 && b346_32 && b347_22 && b348_25 && b349_27 && b350_8 && b351_45 && b352_43 && b353_9 && b354_3 && b355_3 && b356_32 && b357_35 && b358_17 && b359_13 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 444;
}
if(b317_12 && b318_9 && b319_14 && b320_16 && b321_11 && b322_13 && b323_11 && b324_15 && b325_17 && b326_23 && b327_13 && b328_19 && b329_23 && b330_17 && b331_21 && b332_21 && b333_13 && b334_26 && b335_25 && b336_18 && b337_23 && b338_30 && b339_29 && b340_8 && b341_27 && b342_28 && b343_27 && b344_26 && b345_35 && b346_33 && b347_29 && b348_38 && b349_11 && b350_28 && b351_24 && b352_41 && b353_40 && b354_12 && b355_16 && b356_7 && b357_18 && b358_46 && b359_19 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 445;
}
if(b316_8 && b317_11 && b318_8 && b319_13 && b320_15 && b321_10 && b322_12 && b323_17 && b324_16 && b325_16 && b326_14 && b327_12 && b328_17 && b329_22 && b330_15 && b331_19 && b332_19 && b333_13 && b334_28 && b335_24 && b336_19 && b337_21 && b338_28 && b339_27 && b340_27 && b341_26 && b342_26 && b343_28 && b344_32 && b345_20 && b346_20 && b347_18 && b348_40 && b349_27 && b350_19 && b351_20 && b352_40 && b353_1 && b354_25 && b355_2 && b356_7 && b357_35 && b358_37 && b359_21 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 446;
}
if(b327_14 && b328_20 && b329_24 && b330_18 && b331_22 && b332_22 && b333_3 && b334_28 && b335_28 && b336_25 && b337_27 && b338_34 && b339_25 && b340_30 && b341_8 && b342_30 && b343_27 && b344_21 && b345_39 && b346_26 && b347_22 && b348_17 && b349_39 && b350_4 && b351_39 && b352_32 && b353_49 && b354_5 && b355_16 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 447;
}
if(b331_18 && b332_22 && b333_22 && b334_23 && b335_3 && b336_24 && b337_26 && b338_8 && b339_18 && b340_29 && b341_28 && b342_31 && b343_31 && b344_30 && b345_17 && b346_30 && b347_32 && b348_25 && b349_27 && b350_8 && b351_7 && b352_49 && b353_32 && b354_5 && b355_5 && b356_8 && b357_19 && b358_6 && b359_19 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 448;
}
if(b331_18 && b332_22 && b333_22 && b334_23 && b335_3 && b336_24 && b337_26 && b338_8 && b339_18 && b340_29 && b341_28 && b342_31 && b343_31 && b344_30 && b345_17 && b346_30 && b347_32 && b348_24 && b349_27 && b350_34 && b351_46 && b352_25 && b353_20 && b354_45 && b355_1 && b356_7 && b357_13 && b358_19 && b359_43 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 449;
}
if(b348_40 && b349_35 && b350_44 && b351_24 && b352_4 && b353_40 && b354_8 && b355_42 && b356_8 && b357_52 && b358_44 && b359_13 && b360_11 && b361_12 && b362_25 && b363_28) {
pattern_id = 450;
}
if(b327_14 && b328_20 && b329_24 && b330_18 && b331_22 && b332_22 && b333_3 && b334_28 && b335_28 && b336_25 && b337_30 && b338_27 && b339_7 && b340_33 && b341_19 && b342_26 && b343_20 && b344_5 && b345_42 && b346_35 && b347_28 && b348_17 && b349_3 && b350_36 && b351_20 && b352_23 && b353_27 && b354_3 && b355_49 && b356_32 && b357_35 && b358_17 && b359_13 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 451;
}
if(b336_23 && b337_25 && b338_33 && b339_23 && b340_24 && b341_30 && b342_30 && b343_27 && b344_34 && b345_38 && b346_35 && b347_22 && b348_45 && b349_27 && b350_42 && b351_39 && b352_23 && b353_53 && b354_27 && b355_11 && b356_9 && b357_13 && b358_17 && b359_56 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 452;
}
if(b347_32 && b348_23 && b349_47 && b350_41 && b351_34 && b352_45 && b353_10 && b354_23 && b355_14 && b356_28 && b357_35 && b358_44 && b359_7 && b360_27 && b361_39 && b362_2 && b363_28) {
pattern_id = 453;
}
if(b335_25 && b336_24 && b337_28 && b338_31 && b339_3 && b340_31 && b341_27 && b342_26 && b343_8 && b344_35 && b345_22 && b346_35 && b347_2 && b348_11 && b349_44 && b350_4 && b351_39 && b352_23 && b353_41 && b354_5 && b355_9 && b356_15 && b357_13 && b358_11 && b359_13 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 454;
}
if(b333_21 && b334_16 && b335_27 && b336_22 && b337_24 && b338_32 && b339_16 && b340_28 && b341_27 && b342_25 && b343_30 && b344_25 && b345_34 && b346_21 && b347_34 && b348_29 && b349_11 && b350_44 && b351_28 && b352_40 && b353_49 && b354_3 && b355_51 && b356_29 && b357_19 && b358_11 && b359_26 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 455;
}
if(b327_14 && b328_20 && b329_24 && b330_18 && b331_22 && b332_22 && b333_3 && b334_28 && b335_31 && b336_28 && b337_3 && b338_36 && b339_25 && b340_35 && b341_34 && b342_30 && b343_27 && b344_41 && b345_17 && b346_42 && b347_34 && b348_11 && b349_17 && b350_19 && b351_24 && b352_24 && b353_32 && b354_3 && b355_33 && b356_7 && b357_15 && b358_9 && b359_45 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 456;
}
if(b353_20 && b354_25 && b355_38 && b356_50 && b357_2 && b358_19 && b359_59 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 457;
}
if(b334_28 && b335_20 && b336_21 && b337_3 && b338_31 && b339_18 && b340_28 && b341_28 && b342_29 && b343_25 && b344_5 && b345_36 && b346_20 && b347_33 && b348_34 && b349_36 && b350_28 && b351_26 && b352_4 && b353_32 && b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 458;
}
if(b329_25 && b330_19 && b331_24 && b332_24 && b333_24 && b334_30 && b335_25 && b336_27 && b337_33 && b338_34 && b339_27 && b340_3 && b341_24 && b342_30 && b343_3 && b344_40 && b345_31 && b346_42 && b347_5 && b348_5 && b349_11 && b350_4 && b351_26 && b352_21 && b353_32 && b354_6 && b355_14 && b356_7 && b357_15 && b358_44 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 459;
}
if(b352_43 && b353_40 && b354_28 && b355_38 && b356_6 && b357_9 && b358_7 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 460;
}
if(b355_42 && b356_9 && b357_11 && b358_19 && b359_67 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 461;
}
if(b344_31 && b345_21 && b346_47 && b347_29 && b348_57 && b349_19 && b350_8 && b351_7 && b352_43 && b353_8 && b354_45 && b355_5 && b356_29 && b357_3 && b358_50 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 462;
}
if(b337_32 && b338_32 && b339_37 && b340_8 && b341_15 && b342_48 && b343_30 && b344_35 && b345_23 && b346_44 && b347_44 && b348_45 && b349_31 && b350_34 && b351_26 && b352_43 && b353_9 && b354_3 && b355_3 && b356_10 && b357_34 && b358_2 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 463;
}
if(b348_40 && b349_35 && b350_52 && b351_28 && b352_56 && b353_47 && b354_43 && b355_16 && b356_52 && b357_10 && b358_12 && b359_12 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 464;
}
if(b349_11 && b350_24 && b351_22 && b352_24 && b353_51 && b354_20 && b355_15 && b356_28 && b357_21 && b358_16 && b359_40 && b360_13 && b361_52 && b362_11 && b363_25) {
pattern_id = 465;
}
if(b326_27 && b327_32 && b328_31 && b329_26 && b330_45 && b331_35 && b332_24 && b333_41 && b334_28 && b335_20 && b336_41 && b337_3 && b338_32 && b339_22 && b340_30 && b341_68 && b342_19 && b343_19 && b344_42 && b345_22 && b346_22 && b347_18 && b348_18 && b349_26 && b350_26 && b351_26 && b352_3 && b353_8 && b354_8 && b355_60 && b356_45 && b357_18 && b358_11 && b359_19 && b360_13 && b361_44 && b362_19 && b363_22) {
pattern_id = 466;
}
if(b344_31 && b345_21 && b346_47 && b347_29 && b348_57 && b349_19 && b350_8 && b351_7 && b352_43 && b353_40 && b354_12 && b355_16 && b356_1 && b357_15 && b358_17 && b359_13 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 467;
}
if(b349_11 && b350_24 && b351_22 && b352_24 && b353_51 && b354_20 && b355_15 && b356_28 && b357_21 && b358_16 && b359_26 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 468;
}
if(b353_20 && b354_25 && b355_48 && b356_29 && b357_36 && b358_27 && b359_12 && b360_30 && b361_32 && b362_63 && b363_63) {
pattern_id = 469;
}
if(b353_20 && b354_25 && b355_48 && b356_29 && b357_36 && b358_27 && b359_12 && b360_30 && b361_32 && b362_25 && b363_22) {
pattern_id = 470;
}
if(b353_20 && b354_25 && b355_48 && b356_29 && b357_36 && b358_27 && b359_12 && b360_30 && b361_32 && b362_2 && b363_32) {
pattern_id = 471;
}
if(b355_42 && b356_9 && b357_11 && b358_19 && b359_67 && b360_12 && b361_7 && b362_2 && b363_28) {
pattern_id = 472;
}
if(b347_32 && b348_23 && b349_48 && b350_8 && b351_61 && b352_23 && b353_47 && b354_21 && b355_13 && b356_34 && b357_13 && b358_11 && b359_13 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 473;
}
if(b357_21 && b358_16 && b359_40 && b360_13 && b361_52 && b362_2 && b363_46) {
pattern_id = 474;
}
if(b352_43 && b353_40 && b354_28 && b355_15 && b356_32 && b357_15 && b358_9 && b359_57 && b360_40 && b361_30 && b362_56 && b363_25) {
pattern_id = 475;
}
if(b351_39 && b352_45 && b353_9 && b354_43 && b355_38 && b356_6 && b357_9 && b358_7 && b359_42 && b360_2 && b361_11 && b362_25 && b363_33) {
pattern_id = 476;
}
if(b356_52 && b357_10 && b358_12 && b359_12 && b360_40 && b361_12 && b362_12 && b363_25) {
pattern_id = 477;
}
if(b356_52 && b357_10 && b358_12 && b359_12 && b360_28 && b361_17 && b362_15 && b363_52) {
pattern_id = 478;
}
if(b347_32 && b348_23 && b349_48 && b350_8 && b351_20 && b352_1 && b353_37 && b354_25 && b355_54 && b356_25 && b357_15 && b358_16 && b359_53 && b360_13 && b361_23 && b362_9 && b363_48) {
pattern_id = 479;
}
if(b351_39 && b352_45 && b353_9 && b354_43 && b355_13 && b356_41 && b357_15 && b358_16 && b359_64 && b360_3 && b361_20 && b362_13 && b363_1) {
pattern_id = 480;
}
if(b352_43 && b353_40 && b354_28 && b355_15 && b356_7 && b357_18 && b358_2 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 481;
}
if(b356_52 && b357_10 && b358_12 && b359_12 && b360_20 && b361_17 && b362_18 && b363_47) {
pattern_id = 482;
}
if(b332_33 && b333_20 && b334_3 && b335_41 && b336_37 && b337_55 && b338_29 && b339_7 && b340_33 && b341_42 && b342_38 && b343_55 && b344_5 && b345_36 && b346_41 && b347_66 && b348_17 && b349_27 && b350_19 && b351_40 && b352_43 && b353_46 && b354_12 && b355_48 && b356_29 && b357_3 && b358_25 && b359_78 && b360_8 && b361_11 && b362_59 && b363_48) {
pattern_id = 483;
}
if(b351_39 && b352_45 && b353_56 && b354_5 && b355_16 && b356_50 && b357_18 && b358_44 && b359_20 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 484;
}
if(b352_43 && b353_40 && b354_9 && b355_2 && b356_7 && b357_42 && b358_37 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 485;
}
if(b349_11 && b350_24 && b351_43 && b352_21 && b353_29 && b354_9 && b355_1 && b356_10 && b357_34 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 486;
}
if(b346_32 && b347_9 && b348_3 && b349_31 && b350_24 && b351_46 && b352_34 && b353_8 && b354_25 && b355_3 && b356_29 && b357_15 && b358_46 && b359_64 && b360_13 && b361_26 && b362_52 && b363_48) {
pattern_id = 487;
}
if(b353_20 && b354_25 && b355_10 && b356_8 && b357_10 && b358_21 && b359_64 && b360_13 && b361_26 && b362_52 && b363_48) {
pattern_id = 488;
}
if(b352_43 && b353_40 && b354_9 && b355_1 && b356_9 && b357_40 && b358_7 && b359_7 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 489;
}
if(b355_42 && b356_9 && b357_49 && b358_19 && b359_7 && b360_2 && b361_26 && b362_20 && b363_16) {
pattern_id = 490;
}
if(b352_43 && b353_40 && b354_9 && b355_15 && b356_36 && b357_10 && b358_3 && b359_40 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 491;
}
if(b346_32 && b347_9 && b348_48 && b349_27 && b350_4 && b351_35 && b352_43 && b353_48 && b354_55 && b355_14 && b356_46 && b357_17 && b358_25 && b359_56 && b360_26 && b361_12 && b362_2 && b363_22) {
pattern_id = 492;
}
if(b348_40 && b349_35 && b350_42 && b351_29 && b352_25 && b353_10 && b354_43 && b355_38 && b356_29 && b357_18 && b358_18 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 493;
}
if(b356_52 && b357_10 && b358_55 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 494;
}
if(b351_39 && b352_45 && b353_48 && b354_45 && b355_18 && b356_36 && b357_49 && b358_44 && b359_64 && b360_24 && b361_33 && b362_52 && b363_48) {
pattern_id = 495;
}
if(b351_39 && b352_45 && b353_48 && b354_45 && b355_54 && b356_17 && b357_18 && b358_9 && b359_26 && b360_13 && b361_7 && b362_20 && b363_48) {
pattern_id = 496;
}
if(b354_23 && b355_33 && b356_6 && b357_34 && b358_6 && b359_25 && b360_28 && b361_2 && b362_56 && b363_59) {
pattern_id = 497;
}
if(b351_39 && b352_45 && b353_37 && b354_10 && b355_9 && b356_8 && b357_10 && b358_11 && b359_1 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 498;
}
if(b351_39 && b352_45 && b353_37 && b354_44 && b355_5 && b356_8 && b357_9 && b358_16 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 499;
}
if(b343_27 && b344_21 && b345_48 && b346_33 && b347_2 && b348_26 && b349_34 && b350_26 && b351_21 && b352_34 && b353_8 && b354_25 && b355_3 && b356_29 && b357_15 && b358_46 && b359_64 && b360_13 && b361_26 && b362_52 && b363_48) {
pattern_id = 500;
}
if(b350_31 && b351_54 && b352_4 && b353_48 && b354_27 && b355_15 && b356_16 && b357_18 && b358_9 && b359_64 && b360_13 && b361_26 && b362_52 && b363_48) {
pattern_id = 501;
}
if(b352_43 && b353_40 && b354_12 && b355_16 && b356_32 && b357_35 && b358_12 && b359_25 && b360_24 && b361_7 && b362_20 && b363_41) {
pattern_id = 502;
}
if(b352_43 && b353_40 && b354_12 && b355_16 && b356_32 && b357_35 && b358_12 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 503;
}
if(b347_32 && b348_23 && b349_25 && b350_22 && b351_40 && b352_24 && b353_9 && b354_23 && b355_33 && b356_57 && b357_18 && b358_16 && b359_15 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 504;
}
if(b341_40 && b342_36 && b343_48 && b344_35 && b345_51 && b346_20 && b347_49 && b348_40 && b349_24 && b350_12 && b351_38 && b352_40 && b353_20 && b354_25 && b355_16 && b356_32 && b357_31 && b358_12 && b359_12 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 505;
}
if(b346_32 && b347_9 && b348_15 && b349_39 && b350_44 && b351_28 && b352_8 && b353_20 && b354_43 && b355_5 && b356_36 && b357_15 && b358_9 && b359_19 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 506;
}
if(b346_32 && b347_9 && b348_15 && b349_39 && b350_44 && b351_28 && b352_8 && b353_62 && b354_28 && b355_1 && b356_34 && b357_10 && b358_37 && b359_42 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 507;
}
if(b341_40 && b342_36 && b343_48 && b344_35 && b345_4 && b346_21 && b347_18 && b348_34 && b349_11 && b350_8 && b351_38 && b352_8 && b353_20 && b354_5 && b355_45 && b356_10 && b357_9 && b358_18 && b359_26 && b360_2 && b361_28 && b362_56 && b363_29) {
pattern_id = 508;
}
if(b333_21 && b334_16 && b335_3 && b336_28 && b337_41 && b338_27 && b339_38 && b340_42 && b341_6 && b342_29 && b343_25 && b344_5 && b345_36 && b346_32 && b347_9 && b348_15 && b349_39 && b350_12 && b351_5 && b352_36 && b353_29 && b354_7 && b355_49 && b356_14 && b357_35 && b358_46 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 509;
}
if(b355_42 && b356_9 && b357_15 && b358_2 && b359_34 && b360_75 && b361_32 && b362_12 && b363_10) {
pattern_id = 510;
}
if(b354_23 && b355_33 && b356_6 && b357_44 && b358_46 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 511;
}
if(b352_43 && b353_40 && b354_12 && b355_44 && b356_28 && b357_6 && b358_6 && b359_17 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 512;
}
if(b354_23 && b355_33 && b356_6 && b357_44 && b358_46 && b359_19 && b360_27 && b361_17 && b362_38 && b363_33) {
pattern_id = 513;
}
if(b351_39 && b352_45 && b353_32 && b354_55 && b355_13 && b356_7 && b357_31 && b358_39 && b359_54 && b360_8 && b361_8 && b362_25 && b363_25) {
pattern_id = 514;
}
if(b344_31 && b345_21 && b346_10 && b347_47 && b348_29 && b349_44 && b350_28 && b351_45 && b352_24 && b353_48 && b354_5 && b355_48 && b356_8 && b357_49 && b358_51 && b359_21 && b360_12 && b361_23 && b362_9 && b363_8) {
pattern_id = 515;
}
if(b339_35 && b340_31 && b341_35 && b342_50 && b343_8 && b344_42 && b345_31 && b346_23 && b347_29 && b348_25 && b349_27 && b350_52 && b351_5 && b352_42 && b353_8 && b354_41 && b355_49 && b356_16 && b357_18 && b358_9 && b359_25 && b360_19 && b361_41 && b362_56 && b363_14) {
pattern_id = 516;
}
if(b353_20 && b354_25 && b355_14 && b356_25 && b357_18 && b358_15 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 517;
}
if(b349_11 && b350_24 && b351_35 && b352_57 && b353_8 && b354_8 && b355_14 && b356_54 && b357_15 && b358_9 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 518;
}
if(b351_39 && b352_45 && b353_10 && b354_26 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 519;
}
if(b360_29 && b361_52 && b362_2 && b363_32) {
pattern_id = 520;
}
if(b355_42 && b356_9 && b357_6 && b358_2 && b359_26 && b360_2 && b361_26 && b362_52 && b363_52) {
pattern_id = 521;
}
if(b353_20 && b354_25 && b355_47 && b356_1 && b357_17 && b358_37 && b359_40 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 522;
}
if(b351_39 && b352_45 && b353_41 && b354_8 && b355_47 && b356_29 && b357_18 && b358_15 && b359_4 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 523;
}
if(b353_20 && b354_25 && b355_47 && b356_1 && b357_2 && b358_6 && b359_24 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 524;
}
if(b349_11 && b350_24 && b351_49 && b352_25 && b353_23 && b354_3 && b355_28 && b356_52 && b357_20 && b358_6 && b359_17 && b360_8 && b361_26 && b362_15 && b363_10) {
pattern_id = 525;
}
if(b353_20 && b354_25 && b355_45 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 526;
}
if(b355_42 && b356_9 && b357_45 && b358_27 && b359_13 && b360_15 && b361_52 && b362_15 && b363_47) {
pattern_id = 527;
}
if(b347_32 && b348_42 && b349_27 && b350_12 && b351_29 && b352_34 && b353_17 && b354_9 && b355_13 && b356_61 && b357_13 && b358_16 && b359_19 && b360_13 && b361_7 && b362_20 && b363_48) {
pattern_id = 528;
}
if(b350_31 && b351_24 && b352_21 && b353_29 && b354_5 && b355_42 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 529;
}
if(b345_23 && b346_31 && b347_31 && b348_41 && b349_41 && b350_41 && b351_29 && b352_6 && b353_8 && b354_25 && b355_25 && b356_36 && b357_35 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 530;
}
if(b343_27 && b344_32 && b345_31 && b346_29 && b347_7 && b348_42 && b349_27 && b350_12 && b351_29 && b352_29 && b353_37 && b354_6 && b355_15 && b356_32 && b357_35 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 531;
}
if(b357_21 && b358_18 && b359_24 && b360_35 && b361_16 && b362_16 && b363_38) {
pattern_id = 532;
}
if(b351_39 && b352_41 && b353_47 && b354_42 && b355_5 && b356_59 && b357_19 && b358_60 && b359_43 && b360_2 && b361_26 && b362_20 && b363_52) {
pattern_id = 533;
}
if(b351_39 && b352_41 && b353_47 && b354_44 && b355_2 && b356_28 && b357_21 && b358_18 && b359_24 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 534;
}
if(b352_43 && b353_38 && b354_25 && b355_28 && b356_6 && b357_13 && b358_9 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 535;
}
if(b352_43 && b353_38 && b354_25 && b355_38 && b356_6 && b357_9 && b358_7 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 536;
}
if(b357_21 && b358_18 && b359_56 && b360_8 && b361_2 && b362_15 && b363_47) {
pattern_id = 537;
}
if(b353_20 && b354_45 && b355_49 && b356_29 && b357_10 && b358_12 && b359_12 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 538;
}
if(b360_29 && b361_19 && b362_9 && b363_28) {
pattern_id = 539;
}
if(b346_32 && b347_44 && b348_11 && b349_47 && b350_28 && b351_23 && b352_40 && b353_29 && b354_62 && b355_2 && b356_1 && b357_51 && b358_53 && b359_64 && b360_11 && b361_8 && b362_8 && b363_48) {
pattern_id = 540;
}
if(b345_23 && b346_31 && b347_22 && b348_35 && b349_27 && b350_57 && b351_45 && b352_6 && b353_62 && b354_9 && b355_1 && b356_10 && b357_34 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 541;
}
if(b352_43 && b353_38 && b354_3 && b355_38 && b356_29 && b357_3 && b358_6 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 542;
}
if(b348_40 && b349_29 && b350_26 && b351_45 && b352_42 && b353_37 && b354_44 && b355_1 && b356_36 && b357_13 && b358_12 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 543;
}
if(b354_23 && b355_49 && b356_32 && b357_35 && b358_9 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 544;
}
if(b355_42 && b356_34 && b357_35 && b358_3 && b359_53 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 545;
}
if(b357_21 && b358_18 && b359_12 && b360_54 && b361_54 && b362_2 && b363_28) {
pattern_id = 546;
}
if(b350_31 && b351_24 && b352_24 && b353_32 && b354_3 && b355_33 && b356_7 && b357_15 && b358_9 && b359_45 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 547;
}
if(b347_32 && b348_42 && b349_18 && b350_34 && b351_5 && b352_45 && b353_29 && b354_12 && b355_11 && b356_59 && b357_51 && b358_9 && b359_3 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 548;
}
if(b354_23 && b355_49 && b356_14 && b357_21 && b358_18 && b359_13 && b360_40 && b361_12 && b362_8 && b363_52) {
pattern_id = 549;
}
if(b359_52 && b360_12 && b361_33 && b362_2 && b363_12) {
pattern_id = 550;
}
if(b351_39 && b352_41 && b353_27 && b354_3 && b355_45 && b356_1 && b357_2 && b358_6 && b359_24 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 551;
}
if(b351_39 && b352_41 && b353_27 && b354_8 && b355_3 && b356_6 && b357_15 && b358_17 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 552;
}
if(b359_52 && b360_12 && b361_7 && b362_14 && b363_28) {
pattern_id = 553;
}
if(b354_23 && b355_49 && b356_6 && b357_10 && b358_50 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 554;
}
if(b351_39 && b352_41 && b353_37 && b354_25 && b355_42 && b356_36 && b357_13 && b358_16 && b359_15 && b360_19 && b361_50 && b362_9 && b363_22) {
pattern_id = 555;
}
if(b351_39 && b352_41 && b353_37 && b354_25 && b355_44 && b356_14 && b357_18 && b358_46 && b359_19 && b360_2 && b361_19 && b362_36 && b363_38) {
pattern_id = 556;
}
if(b346_32 && b347_44 && b348_15 && b349_35 && b350_57 && b351_38 && b352_23 && b353_27 && b354_6 && b355_18 && b356_36 && b357_49 && b358_44 && b359_64 && b360_15 && b361_44 && b362_52 && b363_48) {
pattern_id = 557;
}
if(b348_40 && b349_29 && b350_36 && b351_5 && b352_41 && b353_1 && b354_6 && b355_47 && b356_6 && b357_6 && b358_6 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 558;
}
if(b353_20 && b354_45 && b355_25 && b356_14 && b357_10 && b358_3 && b359_40 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 559;
}
if(b353_20 && b354_45 && b355_25 && b356_14 && b357_17 && b358_37 && b359_40 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 560;
}
if(b352_43 && b353_38 && b354_12 && b355_14 && b356_7 && b357_44 && b358_3 && b359_53 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 561;
}
if(b351_39 && b352_41 && b353_37 && b354_8 && b355_3 && b356_15 && b357_32 && b358_3 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 562;
}
if(b348_40 && b349_29 && b350_36 && b351_44 && b352_29 && b353_46 && b354_12 && b355_2 && b356_34 && b357_33 && b358_51 && b359_26 && b360_28 && b361_59 && b362_56 && b363_48) {
pattern_id = 563;
}
if(b351_39 && b352_41 && b353_37 && b354_34 && b355_16 && b356_16 && b357_15 && b358_51 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 564;
}
if(b339_35 && b340_21 && b341_27 && b342_42 && b343_37 && b344_31 && b345_47 && b346_20 && b347_18 && b348_40 && b349_26 && b350_26 && b351_29 && b352_1 && b353_40 && b354_9 && b355_54 && b356_9 && b357_15 && b358_46 && b359_19 && b360_27 && b361_18 && b362_11 && b363_48) {
pattern_id = 565;
}
if(b353_20 && b354_45 && b355_44 && b356_14 && b357_51 && b358_6 && b359_21 && b360_11 && b361_30 && b362_56 && b363_25) {
pattern_id = 566;
}
if(b353_20 && b354_45 && b355_47 && b356_54 && b357_19 && b358_2 && b359_17 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 567;
}
if(b355_42 && b356_8 && b357_10 && b358_54 && b359_3 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 568;
}
if(b343_27 && b344_34 && b345_21 && b346_30 && b347_9 && b348_5 && b349_18 && b350_19 && b351_26 && b352_25 && b353_20 && b354_3 && b355_33 && b356_54 && b357_13 && b358_9 && b359_13 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 569;
}
if(b348_40 && b349_31 && b350_41 && b351_28 && b352_6 && b353_62 && b354_5 && b355_33 && b356_7 && b357_35 && b358_37 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 570;
}
if(b349_11 && b350_26 && b351_24 && b352_24 && b353_29 && b354_42 && b355_15 && b356_14 && b357_13 && b358_12 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 571;
}
if(b353_20 && b354_3 && b355_49 && b356_29 && b357_6 && b358_11 && b359_8 && b360_58 && b361_30 && b362_56 && b363_25) {
pattern_id = 572;
}
if(b304_26 && b305_21 && b306_23 && b307_28 && b308_1 && b309_22 && b310_25 && b311_30 && b312_3 && b313_30 && b314_33 && b315_34 && b316_39 && b317_12 && b318_38 && b319_24 && b320_6 && b321_7 && b322_4 && b323_10 && b324_5 && b325_3 && b326_15 && b327_3 && b328_46 && b329_32 && b330_33 && b331_31 && b332_2 && b333_41 && b334_22 && b335_52 && b336_48 && b337_38 && b338_36 && b339_18 && b340_59 && b341_1 && b342_24 && b343_24 && b344_67 && b345_4 && b346_32 && b347_26 && b348_34 && b349_17 && b350_42 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 573;
}
if(b353_20 && b354_3 && b355_5 && b356_36 && b357_15 && b358_15 && b359_13 && b360_15 && b361_59 && b362_3 && b363_56) {
pattern_id = 574;
}
if(b352_43 && b353_49 && b354_44 && b355_13 && b356_6 && b357_2 && b358_6 && b359_17 && b360_61 && b361_43 && b362_37 && b363_48) {
pattern_id = 575;
}
if(b352_43 && b353_49 && b354_44 && b355_44 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 576;
}
if(b351_39 && b352_23 && b353_48 && b354_21 && b355_5 && b356_10 && b357_35 && b358_17 && b359_25 && b360_54 && b361_52 && b362_19 && b363_16) {
pattern_id = 577;
}
if(b341_40 && b342_27 && b343_26 && b344_31 && b345_31 && b346_31 && b347_21 && b348_26 && b349_39 && b350_31 && b351_29 && b352_8 && b353_9 && b354_36 && b355_1 && b356_50 && b357_13 && b358_11 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 578;
}
if(b350_31 && b351_5 && b352_29 && b353_29 && b354_3 && b355_11 && b356_53 && b357_42 && b358_7 && b359_40 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 579;
}
if(b352_43 && b353_49 && b354_41 && b355_47 && b356_29 && b357_9 && b358_37 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 580;
}
if(b353_20 && b354_3 && b355_16 && b356_17 && b357_35 && b358_9 && b359_3 && b360_30 && b361_30 && b362_56 && b363_25) {
pattern_id = 581;
}
if(b353_20 && b354_3 && b355_16 && b356_17 && b357_15 && b358_7 && b359_19 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 582;
}
if(b349_11 && b350_26 && b351_7 && b352_44 && b353_37 && b354_21 && b355_3 && b356_19 && b357_42 && b358_51 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 583;
}
if(b345_23 && b346_21 && b347_43 && b348_5 && b349_25 && b350_34 && b351_39 && b352_64 && b353_3 && b354_11 && b355_1 && b356_41 && b357_9 && b358_37 && b359_17 && b360_2 && b361_28 && b362_2 && b363_47) {
pattern_id = 584;
}
if(b355_42 && b356_8 && b357_19 && b358_54 && b359_3 && b360_28 && b361_30 && b362_56 && b363_25) {
pattern_id = 585;
}
if(b354_23 && b355_1 && b356_1 && b357_49 && b358_37 && b359_7 && b360_2 && b361_11 && b362_25 && b363_33) {
pattern_id = 586;
}
if(b349_11 && b350_26 && b351_26 && b352_45 && b353_20 && b354_43 && b355_16 && b356_8 && b357_6 && b358_18 && b359_25 && b360_24 && b361_7 && b362_20 && b363_41) {
pattern_id = 587;
}
if(b355_42 && b356_8 && b357_6 && b358_16 && b359_52 && b360_40 && b361_7 && b362_11 && b363_26) {
pattern_id = 588;
}
if(b353_20 && b354_3 && b355_3 && b356_9 && b357_21 && b358_44 && b359_8 && b360_8 && b361_41 && b362_16 && b363_26) {
pattern_id = 589;
}
if(b353_20 && b354_3 && b355_3 && b356_9 && b357_21 && b358_2 && b359_16 && b360_19 && b361_19 && b362_15 && b363_38) {
pattern_id = 590;
}
if(b352_43 && b353_49 && b354_1 && b355_1 && b356_28 && b357_6 && b358_2 && b359_1 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 591;
}
if(b345_23 && b346_21 && b347_42 && b348_11 && b349_36 && b350_29 && b351_26 && b352_42 && b353_1 && b354_41 && b355_48 && b356_32 && b357_15 && b358_9 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 592;
}
if(b341_40 && b342_27 && b343_37 && b344_13 && b345_23 && b346_44 && b347_43 && b348_23 && b349_24 && b350_8 && b351_26 && b352_23 && b353_53 && b354_6 && b355_46 && b356_46 && b357_44 && b358_6 && b359_17 && b360_62 && b361_30 && b362_56 && b363_25) {
pattern_id = 593;
}
if(b350_31 && b351_5 && b352_36 && b353_8 && b354_43 && b355_11 && b356_52 && b357_19 && b358_6 && b359_8 && b360_15 && b361_52 && b362_17 && b363_28) {
pattern_id = 594;
}
if(b334_28 && b335_28 && b336_25 && b337_27 && b338_34 && b339_25 && b340_30 && b341_8 && b342_30 && b343_27 && b344_13 && b345_17 && b346_10 && b347_42 && b348_48 && b349_31 && b350_12 && b351_39 && b352_33 && b353_27 && b354_12 && b355_25 && b356_36 && b357_39 && b358_6 && b359_17 && b360_11 && b361_23 && b362_9 && b363_6) {
pattern_id = 595;
}
if(b332_33 && b333_28 && b334_25 && b335_41 && b336_37 && b337_30 && b338_28 && b339_18 && b340_27 && b341_40 && b342_30 && b343_24 && b344_40 && b345_39 && b346_23 && b347_22 && b348_34 && b349_11 && b350_59 && b351_21 && b352_4 && b353_6 && b354_20 && b355_9 && b356_8 && b357_39 && b358_54 && b359_3 && b360_10 && b361_39 && b362_9 && b363_8) {
pattern_id = 596;
}
if(b341_40 && b342_27 && b343_45 && b344_21 && b345_2 && b346_44 && b347_18 && b348_55 && b349_31 && b350_31 && b351_58 && b352_4 && b353_9 && b354_12 && b355_16 && b356_24 && b357_9 && b358_55 && b359_25 && b360_19 && b361_41 && b362_56 && b363_33) {
pattern_id = 597;
}
if(b346_32 && b347_22 && b348_59 && b349_35 && b350_37 && b351_29 && b352_29 && b353_9 && b354_3 && b355_42 && b356_41 && b357_15 && b358_37 && b359_19 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 598;
}
if(b345_23 && b346_21 && b347_46 && b348_23 && b349_24 && b350_28 && b351_7 && b352_8 && b353_49 && b354_23 && b355_11 && b356_6 && b357_15 && b358_11 && b359_25 && b360_19 && b361_41 && b362_56 && b363_33) {
pattern_id = 599;
}
if(b356_52 && b357_18 && b358_53 && b359_13 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 600;
}
if(b344_31 && b345_17 && b346_50 && b347_22 && b348_23 && b349_11 && b350_4 && b351_43 && b352_4 && b353_23 && b354_23 && b355_33 && b356_6 && b357_3 && b358_3 && b359_12 && b360_58 && b361_32 && b362_14 && b363_8) {
pattern_id = 601;
}
if(b352_43 && b353_49 && b354_54 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 602;
}
if(b352_43 && b353_49 && b354_54 && b355_28 && b356_6 && b357_13 && b358_9 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 603;
}
if(b354_23 && b355_1 && b356_2 && b357_41 && b358_51 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 604;
}
if(b349_11 && b350_44 && b351_29 && b352_51 && b353_48 && b354_5 && b355_16 && b356_10 && b357_11 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 605;
}
if(b348_40 && b349_47 && b350_28 && b351_56 && b352_13 && b353_8 && b354_41 && b355_2 && b356_50 && b357_18 && b358_9 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 606;
}
if(b354_23 && b355_38 && b356_10 && b357_52 && b358_2 && b359_57 && b360_15 && b361_15 && b362_9 && b363_17) {
pattern_id = 607;
}
if(b346_32 && b347_35 && b348_23 && b349_48 && b350_8 && b351_33 && b352_32 && b353_1 && b354_41 && b355_42 && b356_8 && b357_10 && b358_54 && b359_3 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 608;
}
if(b350_31 && b351_40 && b352_23 && b353_49 && b354_45 && b355_54 && b356_41 && b357_18 && b358_60 && b359_44 && b360_6 && b361_39 && b362_11 && b363_47) {
pattern_id = 609;
}
if(b348_40 && b349_47 && b350_8 && b351_45 && b352_23 && b353_43 && b354_5 && b355_14 && b356_36 && b357_52 && b358_52 && b359_53 && b360_13 && b361_23 && b362_9 && b363_48) {
pattern_id = 610;
}
if(b355_42 && b356_32 && b357_35 && b358_17 && b359_13 && b360_40 && b361_12 && b362_12 && b363_25) {
pattern_id = 611;
}
if(b352_43 && b353_30 && b354_43 && b355_9 && b356_8 && b357_41 && b358_51 && b359_12 && b360_26 && b361_30 && b362_56 && b363_25) {
pattern_id = 612;
}
if(b350_31 && b351_40 && b352_24 && b353_46 && b354_3 && b355_14 && b356_19 && b357_35 && b358_46 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 613;
}
if(b355_42 && b356_32 && b357_35 && b358_17 && b359_13 && b360_8 && b361_30 && b362_56 && b363_25) {
pattern_id = 614;
}
if(b351_39 && b352_49 && b353_1 && b354_10 && b355_1 && b356_1 && b357_18 && b358_6 && b359_15 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 615;
}
if(b357_21 && b358_3 && b359_12 && b360_30 && b361_50 && b362_9 && b363_8) {
pattern_id = 616;
}
if(b355_42 && b356_32 && b357_17 && b358_6 && b359_2 && b360_54 && b361_7 && b362_8 && b363_51) {
pattern_id = 617;
}
if(b354_23 && b355_38 && b356_16 && b357_44 && b358_44 && b359_38 && b360_19 && b361_39 && b362_9 && b363_28) {
pattern_id = 618;
}
if(b356_52 && b357_32 && b358_37 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 619;
}
if(b355_42 && b356_32 && b357_15 && b358_9 && b359_42 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 620;
}
if(b351_39 && b352_49 && b353_37 && b354_36 && b355_5 && b356_31 && b357_9 && b358_51 && b359_20 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 621;
}
if(b355_42 && b356_32 && b357_15 && b358_9 && b359_42 && b360_40 && b361_12 && b362_12 && b363_25) {
pattern_id = 622;
}
if(b354_23 && b355_38 && b356_6 && b357_9 && b358_7 && b359_42 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 623;
}
if(b284_16 && b285_18 && b286_11 && b287_19 && b288_20 && b289_10 && b290_14 && b291_21 && b292_19 && b293_21 && b294_4 && b295_17 && b296_19 && b297_4 && b298_19 && b299_22 && b300_19 && b301_21 && b302_10 && b303_26 && b304_24 && b305_6 && b306_12 && b307_3 && b308_3 && b309_3 && b310_2 && b311_27 && b312_4 && b313_28 && b314_32 && b315_7 && b316_23 && b317_15 && b318_37 && b319_1 && b320_40 && b321_42 && b322_1 && b323_34 && b324_16 && b325_44 && b326_3 && b327_13 && b328_17 && b329_23 && b330_17 && b331_28 && b332_22 && b333_36 && b334_22 && b335_36 && b336_15 && b337_47 && b338_8 && b339_3 && b340_31 && b341_34 && b342_27 && b343_3 && b344_47 && b345_42 && b346_42 && b347_43 && b348_11 && b349_27 && b350_30 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 624;
}
if(b340_28 && b341_48 && b342_5 && b343_47 && b344_29 && b345_20 && b346_32 && b347_33 && b348_11 && b349_27 && b350_34 && b351_54 && b352_42 && b353_43 && b354_27 && b355_10 && b356_36 && b357_50 && b358_6 && b359_42 && b360_19 && b361_26 && b362_25 && b363_48) {
pattern_id = 625;
}
if(b353_20 && b354_46 && b355_25 && b356_66 && b357_2 && b358_6 && b359_24 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 626;
}
if(b353_20 && b354_46 && b355_25 && b356_66 && b357_2 && b358_6 && b359_24 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 627;
}
if(b352_43 && b353_30 && b354_27 && b355_37 && b356_4 && b357_9 && b358_6 && b359_40 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 628;
}
if(b352_43 && b353_30 && b354_27 && b355_41 && b356_10 && b357_9 && b358_6 && b359_40 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 629;
}
if(b352_43 && b353_30 && b354_27 && b355_33 && b356_6 && b357_44 && b358_46 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 630;
}
if(b351_39 && b352_49 && b353_17 && b354_36 && b355_1 && b356_14 && b357_13 && b358_18 && b359_42 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 631;
}
if(b351_39 && b352_49 && b353_17 && b354_8 && b355_11 && b356_17 && b357_13 && b358_18 && b359_42 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 632;
}
if(b352_43 && b353_30 && b354_36 && b355_15 && b356_8 && b357_3 && b358_18 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 633;
}
if(b348_40 && b349_47 && b350_34 && b351_38 && b352_14 && b353_37 && b354_44 && b355_13 && b356_6 && b357_19 && b358_6 && b359_25 && b360_19 && b361_41 && b362_56 && b363_14) {
pattern_id = 634;
}
if(b342_26 && b343_54 && b344_40 && b345_20 && b346_53 && b347_22 && b348_34 && b349_4 && b350_12 && b351_26 && b352_21 && b353_40 && b354_9 && b355_5 && b356_8 && b357_3 && b358_11 && b359_25 && b360_19 && b361_41 && b362_56 && b363_14) {
pattern_id = 635;
}
if(b357_21 && b358_3 && b359_19 && b360_28 && b361_30 && b362_56 && b363_25) {
pattern_id = 636;
}
if(b356_52 && b357_32 && b358_11 && b359_7 && b360_2 && b361_11 && b362_25 && b363_33) {
pattern_id = 637;
}
if(b350_31 && b351_40 && b352_10 && b353_27 && b354_25 && b355_3 && b356_29 && b357_15 && b358_46 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 638;
}
if(b355_42 && b356_50 && b357_13 && b358_11 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 639;
}
if(b354_23 && b355_48 && b356_10 && b357_6 && b358_6 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 640;
}
if(b354_23 && b355_48 && b356_12 && b357_15 && b358_37 && b359_15 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 641;
}
if(b353_20 && b354_28 && b355_33 && b356_1 && b357_50 && b358_51 && b359_43 && b360_28 && b361_2 && b362_18 && b363_48) {
pattern_id = 642;
}
if(b353_20 && b354_28 && b355_49 && b356_29 && b357_50 && b358_51 && b359_43 && b360_28 && b361_2 && b362_18 && b363_48) {
pattern_id = 643;
}
if(b351_39 && b352_8 && b353_49 && b354_41 && b355_1 && b356_41 && b357_13 && b358_11 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 644;
}
if(b349_11 && b350_52 && b351_5 && b352_4 && b353_1 && b354_27 && b355_18 && b356_36 && b357_49 && b358_44 && b359_64 && b360_52 && b361_19 && b362_8 && b363_48) {
pattern_id = 645;
}
if(b348_40 && b349_48 && b350_26 && b351_34 && b352_24 && b353_17 && b354_23 && b355_48 && b356_8 && b357_15 && b358_19 && b359_7 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 646;
}
if(b351_39 && b352_8 && b353_49 && b354_6 && b355_18 && b356_10 && b357_19 && b358_44 && b359_64 && b360_40 && b361_12 && b362_14 && b363_48) {
pattern_id = 647;
}
if(b348_40 && b349_48 && b350_26 && b351_26 && b352_34 && b353_17 && b354_9 && b355_13 && b356_61 && b357_35 && b358_46 && b359_55 && b360_13 && b361_39 && b362_9 && b363_48) {
pattern_id = 648;
}
if(b353_20 && b354_28 && b355_1 && b356_7 && b357_21 && b358_52 && b359_38 && b360_19 && b361_39 && b362_18 && b363_48) {
pattern_id = 649;
}
if(b354_23 && b355_48 && b356_8 && b357_6 && b358_50 && b359_64 && b360_11 && b361_8 && b362_8 && b363_48) {
pattern_id = 650;
}
if(b354_23 && b355_48 && b356_8 && b357_6 && b358_10 && b359_4 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 651;
}
if(b343_27 && b344_41 && b345_17 && b346_42 && b347_45 && b348_29 && b349_44 && b350_28 && b351_26 && b352_10 && b353_10 && b354_62 && b355_13 && b356_57 && b357_51 && b358_52 && b359_21 && b360_19 && b361_33 && b362_9 && b363_48) {
pattern_id = 652;
}
if(b353_20 && b354_28 && b355_1 && b356_7 && b357_34 && b358_37 && b359_56 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 653;
}
if(b346_32 && b347_49 && b348_55 && b349_31 && b350_12 && b351_41 && b352_1 && b353_29 && b354_3 && b355_5 && b356_36 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_20 && b363_48) {
pattern_id = 654;
}
if(b356_52 && b357_11 && b358_17 && b359_12 && b360_40 && b361_11 && b362_2 && b363_5) {
pattern_id = 655;
}
if(b353_20 && b354_28 && b355_9 && b356_6 && b357_42 && b358_51 && b359_43 && b360_2 && b361_12 && b362_2 && b363_11) {
pattern_id = 656;
}
if(b353_20 && b354_28 && b355_9 && b356_6 && b357_42 && b358_51 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 657;
}
if(b353_20 && b354_28 && b355_9 && b356_6 && b357_42 && b358_51 && b359_43 && b360_2 && b361_26 && b362_20 && b363_52) {
pattern_id = 658;
}
if(b352_43 && b353_9 && b354_10 && b355_25 && b356_12 && b357_13 && b358_17 && b359_26 && b360_2 && b361_28 && b362_2 && b363_11) {
pattern_id = 659;
}
if(b353_20 && b354_28 && b355_9 && b356_6 && b357_42 && b358_51 && b359_43 && b360_8 && b361_30 && b362_56 && b363_25) {
pattern_id = 660;
}
if(b352_43 && b353_9 && b354_44 && b355_29 && b356_31 && b357_36 && b358_27 && b359_4 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 661;
}
if(b353_20 && b354_28 && b355_25 && b356_2 && b357_35 && b358_17 && b359_8 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 662;
}
if(b347_32 && b348_55 && b349_36 && b350_28 && b351_20 && b352_42 && b353_1 && b354_25 && b355_14 && b356_52 && b357_19 && b358_55 && b359_43 && b360_5 && b361_52 && b362_15 && b363_51) {
pattern_id = 663;
}
if(b356_52 && b357_11 && b358_11 && b359_25 && b360_69 && b361_11 && b362_19 && b363_33) {
pattern_id = 664;
}
if(b350_31 && b351_22 && b352_10 && b353_49 && b354_8 && b355_3 && b356_12 && b357_15 && b358_37 && b359_15 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 665;
}
if(b351_39 && b352_8 && b353_6 && b354_3 && b355_14 && b356_7 && b357_42 && b358_37 && b359_3 && b360_17 && b361_30 && b362_56 && b363_25) {
pattern_id = 666;
}
if(b348_40 && b349_48 && b350_57 && b351_5 && b352_25 && b353_29 && b354_8 && b355_1 && b356_41 && b357_20 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 667;
}
if(b356_52 && b357_49 && b358_51 && b359_21 && b360_12 && b361_23 && b362_9 && b363_8) {
pattern_id = 668;
}
if(b353_20 && b354_9 && b355_1 && b356_10 && b357_34 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 669;
}
if(b354_23 && b355_10 && b356_8 && b357_17 && b358_17 && b359_3 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 670;
}
if(b352_43 && b353_56 && b354_3 && b355_9 && b356_36 && b357_15 && b358_7 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 671;
}
if(b357_21 && b358_54 && b359_12 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 672;
}
if(b355_42 && b356_57 && b357_15 && b358_55 && b359_13 && b360_29 && b361_54 && b362_11 && b363_47) {
pattern_id = 673;
}
if(b355_42 && b356_57 && b357_15 && b358_55 && b359_13 && b360_29 && b361_16 && b362_16 && b363_38) {
pattern_id = 674;
}
if(b356_52 && b357_49 && b358_2 && b359_2 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 675;
}
if(b357_21 && b358_54 && b359_19 && b360_58 && b361_17 && b362_9 && b363_47) {
pattern_id = 676;
}
if(b352_43 && b353_56 && b354_6 && b355_15 && b356_14 && b357_13 && b358_12 && b359_13 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 677;
}
if(b353_20 && b354_9 && b355_3 && b356_14 && b357_17 && b358_2 && b359_56 && b360_15 && b361_26 && b362_56 && b363_6) {
pattern_id = 678;
}
if(b347_32 && b348_3 && b349_44 && b350_30 && b351_45 && b352_25 && b353_40 && b354_36 && b355_15 && b356_36 && b357_6 && b358_52 && b359_25 && b360_2 && b361_32 && b362_28 && b363_43) {
pattern_id = 679;
}
if(b355_42 && b356_57 && b357_6 && b358_2 && b359_13 && b360_19 && b361_17 && b362_14 && b363_32) {
pattern_id = 680;
}
if(b352_43 && b353_56 && b354_6 && b355_14 && b356_8 && b357_13 && b358_9 && b359_56 && b360_6 && b361_59 && b362_62 && b363_52) {
pattern_id = 681;
}
if(b345_23 && b346_2 && b347_34 && b348_29 && b349_31 && b350_28 && b351_21 && b352_45 && b353_56 && b354_53 && b355_1 && b356_66 && b357_10 && b358_17 && b359_57 && b360_12 && b361_8 && b362_48 && b363_68) {
pattern_id = 682;
}
if(b351_39 && b352_42 && b353_29 && b354_6 && b355_13 && b356_6 && b357_34 && b358_27 && b359_56 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 683;
}
if(b353_20 && b354_43 && b355_28 && b356_29 && b357_17 && b358_17 && b359_7 && b360_40 && b361_30 && b362_56 && b363_25) {
pattern_id = 684;
}
if(b359_52 && b360_13 && b361_52 && b362_18 && b363_6) {
pattern_id = 685;
}
if(b352_43 && b353_1 && b354_25 && b355_9 && b356_6 && b357_44 && b358_18 && b359_26 && b360_62 && b361_44 && b362_14 && b363_26) {
pattern_id = 686;
}
if(b349_11 && b350_8 && b351_24 && b352_45 && b353_37 && b354_41 && b355_3 && b356_10 && b357_10 && b358_11 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 687;
}
if(b336_23 && b337_3 && b338_27 && b339_49 && b340_35 && b341_35 && b342_39 && b343_48 && b344_40 && b345_49 && b346_47 && b347_29 && b348_35 && b349_53 && b350_28 && b351_54 && b352_6 && b353_1 && b354_12 && b355_16 && b356_40 && b357_44 && b358_11 && b359_12 && b360_26 && b361_26 && b362_11 && b363_17) {
pattern_id = 688;
}
if(b355_42 && b356_29 && b357_35 && b358_2 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 689;
}
if(b345_23 && b346_20 && b347_29 && b348_29 && b349_27 && b350_41 && b351_38 && b352_22 && b353_23 && b354_45 && b355_42 && b356_10 && b357_10 && b358_54 && b359_40 && b360_2 && b361_2 && b362_11 && b363_8) {
pattern_id = 690;
}
if(b349_11 && b350_8 && b351_28 && b352_25 && b353_8 && b354_45 && b355_5 && b356_36 && b357_2 && b358_18 && b359_52 && b360_19 && b361_8 && b362_57 && b363_47) {
pattern_id = 691;
}
if(b344_31 && b345_22 && b346_20 && b347_33 && b348_17 && b349_29 && b350_30 && b351_20 && b352_46 && b353_38 && b354_23 && b355_2 && b356_8 && b357_52 && b358_44 && b359_4 && b360_2 && b361_2 && b362_11 && b363_8) {
pattern_id = 692;
}
if(b349_11 && b350_8 && b351_28 && b352_25 && b353_8 && b354_45 && b355_5 && b356_36 && b357_2 && b358_18 && b359_52 && b360_19 && b361_44 && b362_15 && b363_6) {
pattern_id = 693;
}
if(b346_32 && b347_29 && b348_26 && b349_26 && b350_19 && b351_21 && b352_4 && b353_29 && b354_3 && b355_33 && b356_7 && b357_21 && b358_51 && b359_38 && b360_40 && b361_26 && b362_20 && b363_28) {
pattern_id = 694;
}
if(b331_18 && b332_24 && b333_30 && b334_21 && b335_24 && b336_3 && b337_24 && b338_38 && b339_18 && b340_31 && b341_34 && b342_26 && b343_28 && b344_32 && b345_20 && b346_20 && b347_18 && b348_40 && b349_12 && b350_42 && b351_34 && b352_32 && b353_8 && b354_10 && b355_12 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 695;
}
if(b333_21 && b334_31 && b335_36 && b336_14 && b337_30 && b338_39 && b339_3 && b340_42 && b341_8 && b342_36 && b343_3 && b344_31 && b345_31 && b346_31 && b347_21 && b348_26 && b349_39 && b350_31 && b351_47 && b352_24 && b353_29 && b354_3 && b355_12 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 696;
}
if(b352_43 && b353_1 && b354_43 && b355_14 && b356_1 && b357_13 && b358_55 && b359_7 && b360_26 && b361_8 && b362_2 && b363_28) {
pattern_id = 697;
}
if(b323_17 && b324_17 && b325_18 && b326_24 && b327_15 && b328_21 && b329_20 && b330_21 && b331_26 && b332_2 && b333_3 && b334_28 && b335_28 && b336_25 && b337_27 && b338_22 && b339_21 && b340_28 && b341_26 && b342_5 && b343_37 && b344_5 && b345_4 && b346_3 && b347_5 && b348_5 && b349_5 && b350_4 && b351_39 && b352_45 && b353_37 && b354_45 && b355_1 && b356_12 && b357_9 && b358_15 && b359_26 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 698;
}
if(b327_14 && b328_22 && b329_26 && b330_14 && b331_25 && b332_21 && b333_26 && b334_26 && b335_21 && b336_20 && b337_26 && b338_8 && b339_16 && b340_21 && b341_37 && b342_26 && b343_28 && b344_13 && b345_34 && b346_32 && b347_44 && b348_15 && b349_35 && b350_4 && b351_39 && b352_45 && b353_37 && b354_45 && b355_1 && b356_12 && b357_9 && b358_15 && b359_26 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 699;
}
if(b350_31 && b351_28 && b352_62 && b353_37 && b354_41 && b355_28 && b356_6 && b357_13 && b358_9 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 700;
}
if(b349_11 && b350_8 && b351_38 && b352_21 && b353_9 && b354_3 && b355_19 && b356_6 && b357_17 && b358_19 && b359_3 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 701;
}
if(b351_39 && b352_24 && b353_48 && b354_5 && b355_48 && b356_8 && b357_41 && b358_51 && b359_7 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 702;
}
if(b350_31 && b351_28 && b352_13 && b353_8 && b354_28 && b355_1 && b356_14 && b357_13 && b358_44 && b359_25 && b360_27 && b361_18 && b362_9 && b363_33) {
pattern_id = 703;
}
if(b321_12 && b322_17 && b323_30 && b324_1 && b325_49 && b326_26 && b327_25 && b328_33 && b329_25 && b330_33 && b331_19 && b332_22 && b333_30 && b334_35 && b335_42 && b336_27 && b337_20 && b338_8 && b339_17 && b340_35 && b341_45 && b342_26 && b343_7 && b344_31 && b345_9 && b346_32 && b347_57 && b348_40 && b349_19 && b350_34 && b351_39 && b352_45 && b353_37 && b354_41 && b355_3 && b356_10 && b357_34 && b358_37 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 704;
}
if(b356_52 && b357_35 && b358_55 && b359_8 && b360_58 && b361_8 && b362_2 && b363_28) {
pattern_id = 705;
}
if(b347_32 && b348_26 && b349_17 && b350_28 && b351_22 && b352_23 && b353_10 && b354_23 && b355_5 && b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 706;
}
if(b348_40 && b349_18 && b350_30 && b351_29 && b352_8 && b353_49 && b354_8 && b355_42 && b356_17 && b357_35 && b358_6 && b359_20 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 707;
}
if(b348_40 && b349_18 && b350_30 && b351_22 && b352_43 && b353_10 && b354_25 && b355_11 && b356_29 && b357_51 && b358_11 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 708;
}
if(b357_21 && b358_19 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 709;
}
if(b356_52 && b357_35 && b358_46 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 710;
}
if(b357_21 && b358_19 && b359_21 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 711;
}
if(b347_32 && b348_26 && b349_39 && b350_24 && b351_39 && b352_25 && b353_49 && b354_41 && b355_49 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_26 && b362_20 && b363_52) {
pattern_id = 712;
}
if(b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 713;
}
if(b338_8 && b339_27 && b340_3 && b341_39 && b342_27 && b343_45 && b344_52 && b345_31 && b346_30 && b347_2 && b348_59 && b349_53 && b350_8 && b351_7 && b352_49 && b353_37 && b354_29 && b355_33 && b356_6 && b357_3 && b358_3 && b359_12 && b360_58 && b361_22 && b362_9 && b363_17) {
pattern_id = 714;
}
if(b336_23 && b337_3 && b338_41 && b339_23 && b340_35 && b341_43 && b342_51 && b343_28 && b344_13 && b345_34 && b346_50 && b347_66 && b348_26 && b349_39 && b350_44 && b351_34 && b352_26 && b353_40 && b354_36 && b355_1 && b356_10 && b357_6 && b358_6 && b359_7 && b360_15 && b361_7 && b362_14 && b363_61) {
pattern_id = 715;
}
if(b342_26 && b343_30 && b344_35 && b345_35 && b346_21 && b347_46 && b348_56 && b349_27 && b350_4 && b351_20 && b352_36 && b353_24 && b354_43 && b355_16 && b356_32 && b357_15 && b358_40 && b359_17 && b360_27 && b361_27 && b362_2 && b363_5) {
pattern_id = 716;
}
if(b336_23 && b337_3 && b338_41 && b339_23 && b340_35 && b341_43 && b342_51 && b343_28 && b344_13 && b345_34 && b346_50 && b347_66 && b348_26 && b349_39 && b350_44 && b351_34 && b352_26 && b353_10 && b354_6 && b355_2 && b356_41 && b357_6 && b358_7 && b359_7 && b360_17 && b361_8 && b362_64 && b363_61) {
pattern_id = 717;
}
if(b339_35 && b340_8 && b341_42 && b342_29 && b343_24 && b344_67 && b345_49 && b346_44 && b347_33 && b348_24 && b349_61 && b350_50 && b351_28 && b352_29 && b353_30 && b354_12 && b355_32 && b356_7 && b357_19 && b358_6 && b359_17 && b360_15 && b361_7 && b362_8 && b363_61) {
pattern_id = 718;
}
if(b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 719;
}
if(b303_16 && b304_17 && b305_18 && b306_26 && b307_29 && b308_30 && b309_28 && b310_27 && b311_11 && b312_24 && b313_8 && b314_36 && b315_34 && b316_15 && b317_39 && b318_40 && b319_4 && b320_20 && b321_5 && b322_3 && b323_4 && b324_39 && b325_4 && b326_12 && b327_21 && b328_12 && b329_47 && b330_23 && b331_25 && b332_26 && b333_53 && b334_5 && b335_59 && b336_15 && b337_24 && b338_49 && b339_29 && b340_35 && b341_53 && b342_36 && b343_48 && b344_19 && b345_11 && b346_1 && b347_38 && b348_4 && b349_1 && b350_16 && b351_2 && b352_27 && b353_10 && b354_3 && b355_11 && b356_35 && b357_14 && b358_12 && b359_13 && b360_30 && b361_39 && b362_73 && b363_4) {
pattern_id = 720;
}
if(b353_20 && b354_43 && b355_16 && b356_34 && b357_18 && b358_53 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 721;
}
if(b333_21 && b334_31 && b335_42 && b336_22 && b337_44 && b338_63 && b339_43 && b340_26 && b341_26 && b342_40 && b343_63 && b344_34 && b345_20 && b346_44 && b347_29 && b348_48 && b349_20 && b350_42 && b351_28 && b352_32 && b353_17 && b354_21 && b355_11 && b356_36 && b357_17 && b358_6 && b359_54 && b360_67 && b361_51 && b362_39 && b363_35) {
pattern_id = 722;
}
if(b354_23 && b355_15 && b356_28 && b357_32 && b358_37 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 723;
}
if(b346_32 && b347_29 && b348_38 && b349_47 && b350_36 && b351_32 && b352_22 && b353_56 && b354_27 && b355_54 && b356_14 && b357_18 && b358_2 && b359_26 && b360_19 && b361_50 && b362_9 && b363_48) {
pattern_id = 724;
}
if(b355_42 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_18 && b362_27 && b363_25) {
pattern_id = 725;
}
if(b355_42 && b356_29 && b357_3 && b358_3 && b359_3 && b360_35 && b361_16 && b362_16 && b363_38) {
pattern_id = 726;
}
if(b351_39 && b352_24 && b353_27 && b354_46 && b355_25 && b356_1 && b357_9 && b358_16 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 727;
}
if(b350_31 && b351_28 && b352_29 && b353_30 && b354_12 && b355_14 && b356_41 && b357_10 && b358_54 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 728;
}
if(b355_42 && b356_29 && b357_3 && b358_19 && b359_19 && b360_2 && b361_8 && b362_27 && b363_27) {
pattern_id = 729;
}
if(b354_23 && b355_15 && b356_28 && b357_51 && b358_7 && b359_19 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 730;
}
if(b350_31 && b351_28 && b352_29 && b353_17 && b354_21 && b355_3 && b356_19 && b357_42 && b358_51 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 731;
}
if(b353_20 && b354_43 && b355_16 && b356_36 && b357_44 && b358_11 && b359_4 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 732;
}
if(b349_11 && b350_8 && b351_7 && b352_22 && b353_6 && b354_6 && b355_22 && b356_19 && b357_42 && b358_51 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 733;
}
if(b349_11 && b350_8 && b351_7 && b352_25 && b353_49 && b354_36 && b355_3 && b356_19 && b357_35 && b358_46 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 734;
}
if(b358_50 && b359_12 && b360_30 && b361_41 && b362_11 && b363_33) {
pattern_id = 735;
}
if(b356_52 && b357_35 && b358_46 && b359_26 && b360_18 && b361_12 && b362_25 && b363_25) {
pattern_id = 736;
}
if(b347_32 && b348_26 && b349_39 && b350_4 && b351_26 && b352_21 && b353_46 && b354_10 && b355_18 && b356_10 && b357_19 && b358_54 && b359_2 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 737;
}
if(b349_11 && b350_8 && b351_7 && b352_25 && b353_29 && b354_5 && b355_9 && b356_16 && b357_18 && b358_9 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 738;
}
if(b337_32 && b338_22 && b339_17 && b340_27 && b341_34 && b342_19 && b343_40 && b344_30 && b345_17 && b346_10 && b347_45 && b348_55 && b349_27 && b350_12 && b351_5 && b352_52 && b353_40 && b354_10 && b355_15 && b356_8 && b357_3 && b358_11 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 739;
}
if(b346_32 && b347_29 && b348_38 && b349_26 && b350_12 && b351_29 && b352_22 && b353_1 && b354_62 && b355_13 && b356_57 && b357_51 && b358_52 && b359_12 && b360_12 && b361_51 && b362_24 && b363_48) {
pattern_id = 740;
}
if(b354_23 && b355_15 && b356_28 && b357_6 && b358_9 && b359_8 && b360_30 && b361_8 && b362_11 && b363_28) {
pattern_id = 741;
}
if(b358_50 && b359_12 && b360_10 && b361_44 && b362_62 && b363_47) {
pattern_id = 742;
}
if(b350_31 && b351_28 && b352_22 && b353_20 && b354_53 && b355_33 && b356_16 && b357_35 && b358_6 && b359_21 && b360_18 && b361_45 && b362_2 && b363_47) {
pattern_id = 743;
}
if(b353_20 && b354_43 && b355_13 && b356_9 && b357_49 && b358_51 && b359_19 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 744;
}
if(b355_42 && b356_29 && b357_19 && b358_60 && b359_43 && b360_28 && b361_23 && b362_44 && b363_22) {
pattern_id = 745;
}
if(b344_31 && b345_22 && b346_30 && b347_33 && b348_17 && b349_17 && b350_19 && b351_45 && b352_23 && b353_10 && b354_23 && b355_40 && b356_15 && b357_18 && b358_9 && b359_45 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 746;
}
if(b354_23 && b355_57 && b356_16 && b357_3 && b358_44 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 747;
}
if(b354_23 && b355_57 && b356_6 && b357_9 && b358_12 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 748;
}
if(b354_23 && b355_57 && b356_6 && b357_20 && b358_3 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 749;
}
if(b344_31 && b345_62 && b346_30 && b347_32 && b348_42 && b349_18 && b350_4 && b351_29 && b352_32 && b353_46 && b354_3 && b355_18 && b356_62 && b357_19 && b358_52 && b359_19 && b360_62 && b361_11 && b362_9 && b363_48) {
pattern_id = 750;
}
if(b353_20 && b354_58 && b355_14 && b356_52 && b357_37 && b358_60 && b359_57 && b360_27 && b361_17 && b362_64 && b363_62) {
pattern_id = 751;
}
if(b355_42 && b356_62 && b357_19 && b358_44 && b359_52 && b360_8 && b361_44 && b362_56 && b363_28) {
pattern_id = 752;
}
if(b356_52 && b357_40 && b358_2 && b359_8 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 753;
}
if(b360_29 && b361_22 && b362_2 && b363_32) {
pattern_id = 754;
}
if(b347_32 && b348_48 && b349_11 && b350_28 && b351_40 && b352_52 && b353_46 && b354_42 && b355_2 && b356_34 && b357_34 && b358_37 && b359_21 && b360_2 && b361_18 && b362_56 && b363_16) {
pattern_id = 755;
}
if(b350_31 && b351_45 && b352_21 && b353_10 && b354_6 && b355_9 && b356_29 && b357_3 && b358_6 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 756;
}
if(b356_52 && b357_17 && b358_18 && b359_25 && b360_19 && b361_41 && b362_56 && b363_14) {
pattern_id = 757;
}
if(b350_31 && b351_45 && b352_23 && b353_30 && b354_6 && b355_46 && b356_14 && b357_13 && b358_19 && b359_21 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 758;
}
if(b357_21 && b358_17 && b359_13 && b360_11 && b361_8 && b362_25 && b363_28) {
pattern_id = 759;
}
if(b338_8 && b339_29 && b340_8 && b341_36 && b342_39 && b343_28 && b344_40 && b345_26 && b346_32 && b347_22 && b348_42 && b349_18 && b350_12 && b351_34 && b352_1 && b353_20 && b354_3 && b355_49 && b356_29 && b357_6 && b358_37 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 760;
}
if(b348_40 && b349_34 && b350_8 && b351_48 && b352_1 && b353_8 && b354_36 && b355_63 && b356_52 && b357_17 && b358_19 && b359_24 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 761;
}
if(b347_32 && b348_48 && b349_18 && b350_22 && b351_46 && b352_23 && b353_27 && b354_45 && b355_25 && b356_41 && b357_19 && b358_6 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 762;
}
if(b346_32 && b347_28 && b348_26 && b349_26 && b350_12 && b351_29 && b352_25 && b353_20 && b354_12 && b355_44 && b356_7 && b357_21 && b358_2 && b359_12 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 763;
}
if(b351_39 && b352_40 && b353_1 && b354_8 && b355_3 && b356_8 && b357_3 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 764;
}
if(b353_20 && b354_10 && b355_15 && b356_1 && b357_6 && b358_9 && b359_13 && b360_24 && b361_30 && b362_56 && b363_25) {
pattern_id = 765;
}
if(b319_18 && b320_26 && b321_11 && b322_31 && b323_31 && b324_25 && b325_17 && b326_23 && b327_16 && b328_4 && b329_47 && b330_49 && b331_45 && b332_55 && b333_21 && b334_14 && b335_44 && b336_35 && b337_7 && b338_2 && b339_5 && b340_6 && b341_2 && b342_2 && b343_10 && b344_38 && b345_42 && b346_21 && b347_43 && b348_57 && b349_4 && b350_52 && b351_5 && b352_29 && b353_29 && b354_72 && b355_20 && b356_70 && b357_15 && b358_73 && b359_12 && b360_26 && b361_23 && b362_18 && b363_28) {
pattern_id = 766;
}
if(b353_20 && b354_10 && b355_25 && b356_10 && b357_34 && b358_6 && b359_17 && b360_2 && b361_52 && b362_56 && b363_25) {
pattern_id = 767;
}
if(b351_39 && b352_40 && b353_37 && b354_5 && b355_49 && b356_36 && b357_13 && b358_12 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 768;
}
if(b349_11 && b350_42 && b351_34 && b352_45 && b353_64 && b354_55 && b355_33 && b356_41 && b357_45 && b358_44 && b359_19 && b360_2 && b361_17 && b362_18 && b363_8) {
pattern_id = 769;
}
if(b356_52 && b357_17 && b358_37 && b359_40 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 770;
}
if(b355_42 && b356_16 && b357_15 && b358_12 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 771;
}
if(b349_11 && b350_42 && b351_34 && b352_8 && b353_1 && b354_25 && b355_45 && b356_6 && b357_9 && b358_21 && b359_26 && b360_2 && b361_26 && b362_20 && b363_16) {
pattern_id = 772;
}
if(b353_20 && b354_10 && b355_25 && b356_50 && b357_35 && b358_46 && b359_25 && b360_19 && b361_41 && b362_56 && b363_14) {
pattern_id = 773;
}
if(b354_23 && b355_9 && b356_6 && b357_11 && b358_19 && b359_21 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 774;
}
if(b353_20 && b354_10 && b355_25 && b356_50 && b357_35 && b358_46 && b359_25 && b360_6 && b361_39 && b362_27 && b363_33) {
pattern_id = 775;
}
if(b354_23 && b355_9 && b356_6 && b357_11 && b358_19 && b359_21 && b360_2 && b361_27 && b362_12 && b363_14) {
pattern_id = 776;
}
if(b349_11 && b350_42 && b351_34 && b352_8 && b353_37 && b354_41 && b355_18 && b356_10 && b357_19 && b358_44 && b359_2 && b360_61 && b361_42 && b362_52 && b363_48) {
pattern_id = 777;
}
if(b355_42 && b356_16 && b357_45 && b358_9 && b359_12 && b360_8 && b361_30 && b362_56 && b363_25) {
pattern_id = 778;
}
if(b348_40 && b349_17 && b350_31 && b351_40 && b352_52 && b353_46 && b354_42 && b355_2 && b356_34 && b357_34 && b358_37 && b359_21 && b360_2 && b361_18 && b362_56 && b363_16) {
pattern_id = 779;
}
if(b334_28 && b335_23 && b336_10 && b337_18 && b338_24 && b339_33 && b340_49 && b341_21 && b342_41 && b343_54 && b344_44 && b345_36 && b346_33 && b347_21 && b348_14 && b349_56 && b350_57 && b351_70 && b352_29 && b353_30 && b354_24 && b355_41 && b356_14 && b357_48 && b358_22 && b359_34 && b360_54 && b361_17 && b362_8 && b363_28) {
pattern_id = 780;
}
if(b356_52 && b357_41 && b358_51 && b359_24 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 781;
}
if(b355_42 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_53 && b362_15 && b363_14) {
pattern_id = 782;
}
if(b351_39 && b352_13 && b353_8 && b354_43 && b355_9 && b356_32 && b357_35 && b358_17 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 783;
}
if(b354_23 && b355_5 && b356_10 && b357_35 && b358_17 && b359_12 && b360_18 && b361_30 && b362_56 && b363_25) {
pattern_id = 784;
}
if(b352_43 && b353_48 && b354_5 && b355_15 && b356_16 && b357_17 && b358_19 && b359_26 && b360_18 && b361_30 && b362_56 && b363_25) {
pattern_id = 785;
}
if(b355_42 && b356_14 && b357_13 && b358_19 && b359_43 && b360_40 && b361_12 && b362_20 && b363_28) {
pattern_id = 786;
}
if(b351_39 && b352_13 && b353_8 && b354_43 && b355_9 && b356_28 && b357_18 && b358_15 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 787;
}
if(b351_39 && b352_13 && b353_8 && b354_43 && b355_9 && b356_17 && b357_35 && b358_6 && b359_20 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 788;
}
if(b352_43 && b353_48 && b354_5 && b355_15 && b356_16 && b357_2 && b358_22 && b359_41 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 789;
}
if(b339_35 && b340_40 && b341_28 && b342_18 && b343_40 && b344_27 && b345_30 && b346_22 && b347_49 && b348_49 && b349_47 && b350_8 && b351_45 && b352_23 && b353_10 && b354_23 && b355_25 && b356_41 && b357_34 && b358_6 && b359_17 && b360_2 && b361_23 && b362_15 && b363_29) {
pattern_id = 790;
}
if(b357_21 && b358_55 && b359_8 && b360_30 && b361_30 && b362_2 && b363_32) {
pattern_id = 791;
}
if(b352_43 && b353_48 && b354_3 && b355_14 && b356_1 && b357_13 && b358_12 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 792;
}
if(b353_20 && b354_44 && b355_15 && b356_28 && b357_18 && b358_9 && b359_38 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 793;
}
if(b344_31 && b345_20 && b346_20 && b347_18 && b348_26 && b349_26 && b350_12 && b351_29 && b352_6 && b353_10 && b354_23 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 794;
}
if(b352_43 && b353_48 && b354_43 && b355_14 && b356_9 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_26 && b363_48) {
pattern_id = 795;
}
if(b353_20 && b354_44 && b355_60 && b356_29 && b357_17 && b358_37 && b359_40 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 796;
}
if(b353_20 && b354_44 && b355_60 && b356_36 && b357_17 && b358_37 && b359_40 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 797;
}
if(b353_20 && b354_44 && b355_9 && b356_6 && b357_11 && b358_25 && b359_7 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 798;
}
if(b357_21 && b358_55 && b359_42 && b360_2 && b361_28 && b362_56 && b363_29) {
pattern_id = 799;
}
if(b352_43 && b353_48 && b354_44 && b355_14 && b356_7 && b357_34 && b358_37 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 800;
}
if(b345_23 && b346_33 && b347_5 && b348_42 && b349_11 && b350_42 && b351_34 && b352_4 && b353_64 && b354_46 && b355_2 && b356_1 && b357_49 && b358_37 && b359_21 && b360_2 && b361_28 && b362_56 && b363_29) {
pattern_id = 801;
}
if(b359_52 && b360_40 && b361_7 && b362_52 && b363_61) {
pattern_id = 802;
}
if(b345_23 && b346_33 && b347_5 && b348_42 && b349_46 && b350_28 && b351_21 && b352_6 && b353_1 && b354_25 && b355_9 && b356_8 && b357_19 && b358_38 && b359_8 && b360_59 && b361_39 && b362_17 && b363_62) {
pattern_id = 803;
}
if(b348_40 && b349_17 && b350_36 && b351_24 && b352_52 && b353_9 && b354_54 && b355_15 && b356_36 && b357_31 && b358_2 && b359_19 && b360_19 && b361_39 && b362_44 && b363_22) {
pattern_id = 804;
}
if(b352_43 && b353_48 && b354_12 && b355_49 && b356_15 && b357_17 && b358_6 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 805;
}
if(b351_39 && b352_13 && b353_37 && b354_45 && b355_44 && b356_16 && b357_18 && b358_2 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 806;
}
if(b351_39 && b352_13 && b353_37 && b354_41 && b355_15 && b356_7 && b357_15 && b358_9 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 807;
}
if(b355_42 && b356_14 && b357_9 && b358_11 && b359_40 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 808;
}
if(b349_11 && b350_30 && b351_35 && b352_21 && b353_38 && b354_25 && b355_42 && b356_1 && b357_13 && b358_55 && b359_7 && b360_26 && b361_8 && b362_2 && b363_28) {
pattern_id = 809;
}
if(b338_8 && b339_28 && b340_27 && b341_28 && b342_29 && b343_19 && b344_31 && b345_42 && b346_44 && b347_21 && b348_24 && b349_34 && b350_26 && b351_35 && b352_43 && b353_8 && b354_45 && b355_33 && b356_7 && b357_18 && b358_2 && b359_19 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 810;
}
if(b353_20 && b354_44 && b355_14 && b356_10 && b357_34 && b358_16 && b359_26 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 811;
}
if(b357_21 && b358_55 && b359_26 && b360_12 && b361_12 && b362_14 && b363_28) {
pattern_id = 812;
}
if(b351_39 && b352_13 && b353_6 && b354_43 && b355_1 && b356_12 && b357_17 && b358_51 && b359_56 && b360_17 && b361_52 && b362_18 && b363_6) {
pattern_id = 813;
}
if(b350_31 && b351_38 && b352_10 && b353_46 && b354_6 && b355_15 && b356_34 && b357_35 && b358_3 && b359_53 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 814;
}
if(b352_43 && b353_48 && b354_55 && b355_9 && b356_6 && b357_11 && b358_25 && b359_7 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 815;
}
if(b354_23 && b355_16 && b356_10 && b357_41 && b358_6 && b359_26 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 816;
}
if(b351_39 && b352_29 && b353_8 && b354_6 && b355_13 && b356_10 && b357_45 && b358_25 && b359_16 && b360_18 && b361_33 && b362_25 && b363_33) {
pattern_id = 817;
}
if(b329_25 && b330_33 && b331_30 && b332_20 && b333_26 && b334_33 && b335_28 && b336_3 && b337_25 && b338_27 && b339_10 && b340_28 && b341_12 && b342_45 && b343_24 && b344_21 && b345_52 && b346_44 && b347_9 && b348_5 && b349_25 && b350_31 && b351_34 && b352_1 && b353_38 && b354_3 && b355_11 && b356_34 && b357_19 && b358_44 && b359_56 && b360_2 && b361_19 && b362_36 && b363_38) {
pattern_id = 818;
}
if(b354_23 && b355_16 && b356_34 && b357_10 && b358_12 && b359_12 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 819;
}
if(b341_40 && b342_25 && b343_24 && b344_13 && b345_42 && b346_48 && b347_33 && b348_49 && b349_18 && b350_4 && b351_41 && b352_22 && b353_32 && b354_12 && b355_28 && b356_29 && b357_3 && b358_12 && b359_54 && b360_62 && b361_7 && b362_44 && b363_61) {
pattern_id = 820;
}
if(b359_52 && b360_30 && b361_8 && b362_16 && b363_28) {
pattern_id = 821;
}
if(b346_32 && b347_18 && b348_11 && b349_50 && b350_31 && b351_29 && b352_41 && b353_38 && b354_42 && b355_3 && b356_41 && b357_18 && b358_6 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 822;
}
if(b340_28 && b341_42 && b342_27 && b343_37 && b344_31 && b345_31 && b346_23 && b347_28 && b348_49 && b349_47 && b350_8 && b351_45 && b352_23 && b353_62 && b354_43 && b355_16 && b356_32 && b357_15 && b358_39 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 823;
}
if(b346_32 && b347_18 && b348_11 && b349_50 && b350_31 && b351_22 && b352_23 && b353_29 && b354_42 && b355_3 && b356_41 && b357_18 && b358_6 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 824;
}
if(b356_52 && b357_3 && b358_6 && b359_20 && b360_12 && b361_8 && b362_2 && b363_18) {
pattern_id = 825;
}
if(b355_42 && b356_28 && b357_18 && b358_15 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 826;
}
if(b282_16 && b283_11 && b284_4 && b285_21 && b286_21 && b287_21 && b288_21 && b289_21 && b290_1 && b291_13 && b292_8 && b293_21 && b294_4 && b295_17 && b296_19 && b297_4 && b298_19 && b299_22 && b300_19 && b301_21 && b302_10 && b303_26 && b304_24 && b305_6 && b306_12 && b307_3 && b308_3 && b309_3 && b310_2 && b311_27 && b312_4 && b313_28 && b314_32 && b315_7 && b316_23 && b317_15 && b318_37 && b319_1 && b320_40 && b321_42 && b322_1 && b323_34 && b324_16 && b325_44 && b326_3 && b327_13 && b328_17 && b329_23 && b330_17 && b331_28 && b332_22 && b333_36 && b334_22 && b335_36 && b336_15 && b337_47 && b338_8 && b339_3 && b340_31 && b341_34 && b342_27 && b343_3 && b344_47 && b345_42 && b346_42 && b347_43 && b348_11 && b349_27 && b350_30 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 827;
}
if(b351_39 && b352_29 && b353_49 && b354_34 && b355_14 && b356_34 && b357_18 && b358_2 && b359_15 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 828;
}
if(b356_52 && b357_3 && b358_6 && b359_20 && b360_59 && b361_41 && b362_9 && b363_8) {
pattern_id = 829;
}
if(b344_31 && b345_36 && b346_21 && b347_30 && b348_51 && b349_26 && b350_26 && b351_21 && b352_58 && b353_59 && b354_44 && b355_2 && b356_50 && b357_18 && b358_40 && b359_25 && b360_2 && b361_32 && b362_28 && b363_43) {
pattern_id = 830;
}
if(b350_31 && b351_7 && b352_4 && b353_10 && b354_43 && b355_48 && b356_28 && b357_13 && b358_17 && b359_25 && b360_69 && b361_11 && b362_19 && b363_33) {
pattern_id = 831;
}
if(b346_32 && b347_18 && b348_15 && b349_44 && b350_26 && b351_41 && b352_4 && b353_41 && b354_3 && b355_11 && b356_17 && b357_35 && b358_6 && b359_20 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 832;
}
if(b353_20 && b354_41 && b355_25 && b356_7 && b357_35 && b358_3 && b359_45 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 833;
}
if(b331_18 && b332_35 && b333_27 && b334_37 && b335_40 && b336_20 && b337_33 && b338_22 && b339_21 && b340_34 && b341_24 && b342_25 && b343_54 && b344_52 && b345_34 && b346_2 && b347_2 && b348_66 && b349_27 && b350_19 && b351_26 && b352_43 && b353_46 && b354_12 && b355_48 && b356_29 && b357_3 && b358_25 && b359_78 && b360_8 && b361_11 && b362_59 && b363_48) {
pattern_id = 834;
}
if(b341_40 && b342_25 && b343_31 && b344_2 && b345_55 && b346_21 && b347_46 && b348_24 && b349_34 && b350_36 && b351_28 && b352_6 && b353_10 && b354_25 && b355_2 && b356_28 && b357_11 && b358_6 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 835;
}
if(b348_40 && b349_39 && b350_19 && b351_43 && b352_56 && b353_48 && b354_5 && b355_15 && b356_16 && b357_17 && b358_19 && b359_26 && b360_18 && b361_30 && b362_56 && b363_25) {
pattern_id = 836;
}
if(b348_40 && b349_39 && b350_19 && b351_43 && b352_56 && b353_17 && b354_21 && b355_28 && b356_16 && b357_35 && b358_2 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 837;
}
if(b351_39 && b352_29 && b353_17 && b354_9 && b355_29 && b356_7 && b357_18 && b358_2 && b359_19 && b360_57 && b361_52 && b362_19 && b363_16) {
pattern_id = 838;
}
if(b354_23 && b355_16 && b356_36 && b357_49 && b358_44 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 839;
}
if(b350_31 && b351_7 && b352_25 && b353_39 && b354_5 && b355_16 && b356_10 && b357_11 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 840;
}
if(b351_39 && b352_29 && b353_10 && b354_43 && b355_15 && b356_1 && b357_17 && b358_37 && b359_40 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 841;
}
if(b348_40 && b349_39 && b350_4 && b351_26 && b352_23 && b353_46 && b354_3 && b355_5 && b356_8 && b357_6 && b358_9 && b359_45 && b360_2 && b361_12 && b362_52 && b363_47) {
pattern_id = 842;
}
if(b352_43 && b353_27 && b354_6 && b355_14 && b356_59 && b357_3 && b358_16 && b359_1 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 843;
}
if(b347_32 && b348_15 && b349_19 && b350_62 && b351_5 && b352_45 && b353_29 && b354_8 && b355_18 && b356_29 && b357_3 && b358_16 && b359_25 && b360_28 && b361_2 && b362_56 && b363_19) {
pattern_id = 844;
}
if(b350_31 && b351_34 && b352_49 && b353_30 && b354_3 && b355_11 && b356_1 && b357_31 && b358_46 && b359_13 && b360_20 && b361_59 && b362_26 && b363_48) {
pattern_id = 845;
}
if(b333_21 && b334_35 && b335_27 && b336_21 && b337_3 && b338_32 && b339_18 && b340_27 && b341_30 && b342_19 && b343_26 && b344_31 && b345_21 && b346_47 && b347_29 && b348_40 && b349_37 && b350_41 && b351_46 && b352_47 && b353_58 && b354_39 && b355_25 && b356_7 && b357_35 && b358_3 && b359_45 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 846;
}
if(b332_33 && b333_27 && b334_36 && b335_27 && b336_33 && b337_25 && b338_27 && b339_16 && b340_31 && b341_28 && b342_25 && b343_27 && b344_21 && b345_50 && b346_20 && b347_32 && b348_58 && b349_29 && b350_56 && b351_59 && b352_51 && b353_52 && b354_12 && b355_3 && b356_29 && b357_32 && b358_14 && b359_25 && b360_27 && b361_18 && b362_9 && b363_33) {
pattern_id = 847;
}
if(b347_32 && b348_15 && b349_39 && b350_34 && b351_5 && b352_51 && b353_6 && b354_3 && b355_14 && b356_7 && b357_18 && b358_46 && b359_38 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 848;
}
if(b348_40 && b349_25 && b350_19 && b351_21 && b352_4 && b353_40 && b354_44 && b355_48 && b356_41 && b357_36 && b358_2 && b359_19 && b360_19 && b361_39 && b362_44 && b363_22) {
pattern_id = 849;
}
if(b353_20 && b354_12 && b355_13 && b356_7 && b357_35 && b358_46 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 850;
}
if(b347_32 && b348_15 && b349_43 && b350_12 && b351_28 && b352_4 && b353_27 && b354_8 && b355_46 && b356_32 && b357_15 && b358_9 && b359_42 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 851;
}
if(b354_23 && b355_25 && b356_41 && b357_34 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 852;
}
if(b346_32 && b347_5 && b348_5 && b349_29 && b350_26 && b351_21 && b352_25 && b353_20 && b354_25 && b355_10 && b356_8 && b357_10 && b358_21 && b359_26 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 853;
}
if(b346_32 && b347_5 && b348_5 && b349_29 && b350_26 && b351_21 && b352_25 && b353_20 && b354_43 && b355_5 && b356_36 && b357_15 && b358_9 && b359_19 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 854;
}
if(b346_32 && b347_5 && b348_5 && b349_29 && b350_26 && b351_21 && b352_25 && b353_20 && b354_12 && b355_11 && b356_34 && b357_18 && b358_9 && b359_26 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 855;
}
if(b351_39 && b352_4 && b353_41 && b354_3 && b355_11 && b356_32 && b357_17 && b358_37 && b359_20 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 856;
}
if(b355_42 && b356_6 && b357_2 && b358_2 && b359_67 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 857;
}
if(b353_20 && b354_27 && b355_29 && b356_28 && b357_18 && b358_15 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 858;
}
if(b352_43 && b353_17 && b354_62 && b355_2 && b356_1 && b357_49 && b358_53 && b359_64 && b360_28 && b361_17 && b362_52 && b363_48) {
pattern_id = 859;
}
if(b351_39 && b352_22 && b353_8 && b354_25 && b355_60 && b356_10 && b357_11 && b358_6 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 860;
}
if(b355_42 && b356_36 && b357_13 && b358_12 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 861;
}
if(b349_11 && b350_19 && b351_29 && b352_8 && b353_49 && b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 862;
}
if(b341_40 && b342_40 && b343_28 && b344_41 && b345_17 && b346_32 && b347_29 && b348_38 && b349_29 && b350_26 && b351_66 && b352_52 && b353_56 && b354_6 && b355_5 && b356_53 && b357_32 && b358_19 && b359_43 && b360_27 && b361_41 && b362_36 && b363_28) {
pattern_id = 863;
}
if(b352_43 && b353_17 && b354_5 && b355_48 && b356_8 && b357_17 && b358_37 && b359_40 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 864;
}
if(b355_42 && b356_36 && b357_13 && b358_17 && b359_26 && b360_57 && b361_52 && b362_19 && b363_16) {
pattern_id = 865;
}
if(b350_31 && b351_20 && b352_21 && b353_32 && b354_8 && b355_1 && b356_53 && b357_52 && b358_55 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 866;
}
if(b352_43 && b353_17 && b354_5 && b355_11 && b356_7 && b357_3 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 867;
}
if(b352_43 && b353_17 && b354_5 && b355_14 && b356_1 && b357_2 && b358_18 && b359_25 && b360_28 && b361_2 && b362_56 && b363_59) {
pattern_id = 868;
}
if(b347_32 && b348_24 && b349_27 && b350_4 && b351_35 && b352_46 && b353_37 && b354_36 && b355_49 && b356_19 && b357_10 && b358_12 && b359_12 && b360_2 && b361_39 && b362_27 && b363_47) {
pattern_id = 869;
}
if(b342_26 && b343_31 && b344_44 && b345_42 && b346_21 && b347_43 && b348_45 && b349_31 && b350_34 && b351_39 && b352_22 && b353_47 && b354_8 && b355_1 && b356_41 && b357_20 && b358_6 && b359_17 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 870;
}
if(b346_32 && b347_2 && b348_23 && b349_27 && b350_41 && b351_38 && b352_24 && b353_27 && b354_23 && b355_9 && b356_6 && b357_11 && b358_19 && b359_21 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 871;
}
if(b355_42 && b356_36 && b357_18 && b358_9 && b359_43 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 872;
}
if(b354_23 && b355_13 && b356_8 && b357_9 && b358_17 && b359_25 && b360_27 && b361_18 && b362_9 && b363_33) {
pattern_id = 873;
}
if(b358_50 && b359_7 && b360_27 && b361_17 && b362_25 && b363_33) {
pattern_id = 874;
}
if(b351_39 && b352_22 && b353_49 && b354_36 && b355_9 && b356_1 && b357_49 && b358_37 && b359_7 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 875;
}
if(b350_31 && b351_20 && b352_49 && b353_38 && b354_43 && b355_14 && b356_36 && b357_13 && b358_17 && b359_45 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 876;
}
if(b349_11 && b350_19 && b351_40 && b352_41 && b353_1 && b354_8 && b355_13 && b356_10 && b357_17 && b358_14 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 877;
}
if(b353_20 && b354_27 && b355_48 && b356_36 && b357_41 && b358_51 && b359_12 && b360_26 && b361_30 && b362_56 && b363_25) {
pattern_id = 878;
}
if(b360_29 && b361_11 && b362_17 && b363_41) {
pattern_id = 879;
}
if(b350_31 && b351_20 && b352_42 && b353_1 && b354_10 && b355_28 && b356_6 && b357_13 && b358_9 && b359_38 && b360_2 && b361_33 && b362_52 && b363_60) {
pattern_id = 880;
}
if(b344_31 && b345_34 && b346_2 && b347_29 && b348_48 && b349_19 && b350_36 && b351_29 && b352_1 && b353_38 && b354_42 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 881;
}
if(b344_31 && b345_34 && b346_2 && b347_5 && b348_34 && b349_25 && b350_65 && b351_28 && b352_32 && b353_32 && b354_5 && b355_11 && b356_59 && b357_21 && b358_52 && b359_57 && b360_8 && b361_8 && b362_8 && b363_48) {
pattern_id = 882;
}
if(b356_52 && b357_51 && b358_54 && b359_7 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 883;
}
if(b356_52 && b357_51 && b358_54 && b359_7 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 884;
}
if(b352_43 && b353_17 && b354_9 && b355_13 && b356_7 && b357_18 && b358_2 && b359_19 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 885;
}
if(b343_27 && b344_25 && b345_22 && b346_36 && b347_33 && b348_40 && b349_46 && b350_49 && b351_26 && b352_24 && b353_62 && b354_25 && b355_16 && b356_32 && b357_21 && b358_4 && b359_14 && b360_2 && b361_26 && b362_20 && b363_41) {
pattern_id = 886;
}
if(b352_43 && b353_17 && b354_43 && b355_49 && b356_52 && b357_51 && b358_19 && b359_38 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 887;
}
if(b346_32 && b347_2 && b348_26 && b349_39 && b350_52 && b351_32 && b352_21 && b353_10 && b354_9 && b355_51 && b356_61 && b357_13 && b358_16 && b359_19 && b360_13 && b361_7 && b362_20 && b363_48) {
pattern_id = 888;
}
if(b355_42 && b356_36 && b357_35 && b358_46 && b359_40 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 889;
}
if(b351_39 && b352_22 && b353_1 && b354_41 && b355_48 && b356_19 && b357_49 && b358_11 && b359_42 && b360_26 && b361_59 && b362_8 && b363_48) {
pattern_id = 890;
}
if(b352_43 && b353_17 && b354_43 && b355_16 && b356_50 && b357_50 && b358_60 && b359_57 && b360_27 && b361_17 && b362_64 && b363_48) {
pattern_id = 891;
}
if(b337_32 && b338_36 && b339_27 && b340_29 && b341_48 && b342_37 && b343_47 && b344_48 && b345_29 && b346_32 && b347_26 && b348_15 && b349_50 && b350_48 && b351_26 && b352_4 && b353_62 && b354_10 && b355_25 && b356_50 && b357_35 && b358_46 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 892;
}
if(b341_40 && b342_40 && b343_40 && b344_13 && b345_23 && b346_35 && b347_5 && b348_5 && b349_44 && b350_28 && b351_45 && b352_43 && b353_5 && b354_30 && b355_39 && b356_43 && b357_14 && b358_29 && b359_54 && b360_33 && b361_38 && b362_33 && b363_67) {
pattern_id = 893;
}
if(b327_14 && b328_17 && b329_22 && b330_38 && b331_36 && b332_24 && b333_41 && b334_21 && b335_25 && b336_21 && b337_36 && b338_29 && b339_28 && b340_35 && b341_45 && b342_5 && b343_47 && b344_53 && b345_23 && b346_30 && b347_9 && b348_5 && b349_18 && b350_19 && b351_26 && b352_43 && b353_40 && b354_12 && b355_16 && b356_7 && b357_18 && b358_46 && b359_19 && b360_2 && b361_2 && b362_11 && b363_22) {
pattern_id = 894;
}
if(b330_20 && b331_34 && b332_34 && b333_31 && b334_41 && b335_36 && b336_28 && b337_26 && b338_8 && b339_33 && b340_36 && b341_28 && b342_31 && b343_24 && b344_28 && b345_48 && b346_10 && b347_54 && b348_40 && b349_26 && b350_24 && b351_21 && b352_24 && b353_17 && b354_6 && b355_42 && b356_7 && b357_9 && b358_6 && b359_13 && b360_2 && b361_18 && b362_27 && b363_22) {
pattern_id = 895;
}
if(b325_23 && b326_31 && b327_26 && b328_27 && b329_27 && b330_31 && b331_5 && b332_38 && b333_21 && b334_3 && b335_24 && b336_40 && b337_33 && b338_42 && b339_28 && b340_28 && b341_27 && b342_36 && b343_47 && b344_5 && b345_34 && b346_42 && b347_32 && b348_34 && b349_31 && b350_4 && b351_26 && b352_43 && b353_10 && b354_3 && b355_3 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_2 && b362_11 && b363_22) {
pattern_id = 896;
}
if(b305_5 && b306_5 && b307_9 && b308_12 && b309_12 && b310_7 && b311_8 && b312_1 && b313_9 && b314_16 && b315_12 && b316_18 && b317_14 && b318_18 && b319_20 && b320_18 && b321_15 && b322_13 && b323_21 && b324_17 && b325_24 && b326_30 && b327_14 && b328_23 && b329_19 && b330_35 && b331_28 && b332_22 && b333_28 && b334_21 && b335_26 && b336_19 && b337_30 && b338_31 && b339_24 && b340_42 && b341_8 && b342_49 && b343_31 && b344_40 && b345_22 && b346_46 && b347_34 && b348_11 && b349_36 && b350_48 && b351_40 && b352_46 && b353_62 && b354_21 && b355_13 && b356_16 && b357_15 && b358_51 && b359_38 && b360_2 && b361_2 && b362_11 && b363_22) {
pattern_id = 897;
}
if(b355_42 && b356_36 && b357_17 && b358_7 && b359_26 && b360_40 && b361_12 && b362_12 && b363_25) {
pattern_id = 898;
}
if(b351_39 && b352_22 && b353_37 && b354_10 && b355_9 && b356_53 && b357_19 && b358_2 && b359_12 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 899;
}
if(b336_23 && b337_30 && b338_44 && b339_29 && b340_30 && b341_24 && b342_24 && b343_27 && b344_20 && b345_48 && b346_23 && b347_28 && b348_49 && b349_52 && b350_12 && b351_41 && b352_33 && b353_25 && b354_37 && b355_46 && b356_17 && b357_53 && b358_25 && b359_14 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 900;
}
if(b347_32 && b348_24 && b349_25 && b350_19 && b351_46 && b352_36 && b353_42 && b354_23 && b355_13 && b356_6 && b357_51 && b358_19 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 901;
}
if(b347_32 && b348_24 && b349_25 && b350_19 && b351_20 && b352_36 && b353_32 && b354_23 && b355_13 && b356_6 && b357_51 && b358_19 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 902;
}
if(b354_23 && b355_13 && b356_6 && b357_51 && b358_7 && b359_7 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 903;
}
if(b359_52 && b360_28 && b361_7 && b362_2 && b363_6) {
pattern_id = 904;
}
if(b353_20 && b354_27 && b355_25 && b356_1 && b357_6 && b358_38 && b359_58 && b360_59 && b361_8 && b362_8 && b363_17) {
pattern_id = 905;
}
if(b345_23 && b346_35 && b347_5 && b348_29 && b349_44 && b350_17 && b351_29 && b352_25 && b353_17 && b354_50 && b355_54 && b356_32 && b357_15 && b358_9 && b359_57 && b360_40 && b361_42 && b362_3 && b363_48) {
pattern_id = 906;
}
if(b354_23 && b355_13 && b356_6 && b357_19 && b358_11 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 907;
}
if(b354_23 && b355_13 && b356_6 && b357_19 && b358_11 && b359_52 && b360_27 && b361_52 && b362_17 && b363_46) {
pattern_id = 908;
}
if(b353_20 && b354_27 && b355_25 && b356_1 && b357_6 && b358_10 && b359_4 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 909;
}
if(b349_11 && b350_19 && b351_34 && b352_25 && b353_29 && b354_24 && b355_22 && b356_19 && b357_18 && b358_53 && b359_13 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 910;
}
if(b352_43 && b353_17 && b354_27 && b355_49 && b356_1 && b357_10 && b358_12 && b359_12 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 911;
}
if(b355_42 && b356_36 && b357_9 && b358_19 && b359_21 && b360_18 && b361_8 && b362_20 && b363_70) {
pattern_id = 912;
}
if(b350_31 && b351_20 && b352_1 && b353_1 && b354_41 && b355_3 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 913;
}
if(b352_43 && b353_17 && b354_36 && b355_15 && b356_17 && b357_41 && b358_2 && b359_40 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 914;
}
if(b352_43 && b353_17 && b354_36 && b355_9 && b356_52 && b357_18 && b358_17 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 915;
}
if(b348_40 && b349_43 && b350_34 && b351_34 && b352_45 && b353_49 && b354_8 && b355_14 && b356_53 && b357_42 && b358_7 && b359_40 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 916;
}
if(b351_39 && b352_22 && b353_32 && b354_12 && b355_33 && b356_8 && b357_19 && b358_2 && b359_12 && b360_18 && b361_30 && b362_56 && b363_25) {
pattern_id = 917;
}
if(b344_31 && b345_34 && b346_10 && b347_5 && b348_42 && b349_56 && b350_24 && b351_26 && b352_25 && b353_20 && b354_46 && b355_15 && b356_16 && b357_18 && b358_59 && b359_3 && b360_15 && b361_19 && b362_9 && b363_8) {
pattern_id = 918;
}
if(b358_50 && b359_7 && b360_15 && b361_7 && b362_24 && b363_28) {
pattern_id = 919;
}
if(b355_42 && b356_36 && b357_19 && b358_18 && b359_3 && b360_24 && b361_52 && b362_19 && b363_16) {
pattern_id = 920;
}
if(b352_43 && b353_17 && b354_8 && b355_44 && b356_28 && b357_13 && b358_55 && b359_12 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 921;
}
if(b304_26 && b305_28 && b306_24 && b307_31 && b308_27 && b309_1 && b310_15 && b311_31 && b312_5 && b313_13 && b314_35 && b315_3 && b316_41 && b317_17 && b318_39 && b319_40 && b320_18 && b321_2 && b322_28 && b323_15 && b324_6 && b325_3 && b326_13 && b327_6 && b328_9 && b329_9 && b330_4 && b331_43 && b332_38 && b333_28 && b334_18 && b335_52 && b336_34 && b337_16 && b338_27 && b339_17 && b340_42 && b341_60 && b342_3 && b343_61 && b344_41 && b345_17 && b346_42 && b347_32 && b348_7 && b349_59 && b350_40 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 922;
}
if(b343_27 && b344_25 && b345_10 && b346_26 && b347_28 && b348_26 && b349_26 && b350_37 && b351_5 && b352_1 && b353_20 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 923;
}
if(b348_40 && b349_43 && b350_57 && b351_21 && b352_45 && b353_56 && b354_5 && b355_14 && b356_8 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_18 && b363_48) {
pattern_id = 924;
}
if(b351_39 && b352_51 && b353_6 && b354_3 && b355_11 && b356_59 && b357_50 && b358_55 && b359_26 && b360_8 && b361_45 && b362_28 && b363_43) {
pattern_id = 925;
}
if(b349_11 && b350_63 && b351_23 && b352_23 && b353_32 && b354_55 && b355_54 && b356_17 && b357_18 && b358_9 && b359_26 && b360_13 && b361_7 && b362_20 && b363_48) {
pattern_id = 926;
}
if(b348_40 && b349_60 && b350_57 && b351_28 && b352_45 && b353_64 && b354_40 && b355_11 && b356_8 && b357_51 && b358_17 && b359_45 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 927;
}
if(b349_11 && b350_63 && b351_23 && b352_24 && b353_40 && b354_57 && b355_14 && b356_7 && b357_15 && b358_9 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 928;
}
if(b350_31 && b351_56 && b352_10 && b353_1 && b354_57 && b355_14 && b356_7 && b357_15 && b358_9 && b359_13 && b360_2 && b361_52 && b362_35 && b363_29) {
pattern_id = 929;
}
if(b348_40 && b349_36 && b350_6 && b351_66 && b352_22 && b353_32 && b354_23 && b355_11 && b356_42 && b357_52 && b358_6 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 930;
}
if(b343_27 && b344_40 && b345_31 && b346_46 && b347_44 && b348_15 && b349_17 && b350_64 && b351_10 && b352_7 && b353_53 && b354_59 && b355_36 && b356_4 && b357_33 && b358_76 && b359_7 && b360_58 && b361_59 && b362_57 && b363_48) {
pattern_id = 931;
}
if(b360_29 && b361_17 && b362_9 && b363_28) {
pattern_id = 932;
}
if(b354_23 && b355_11 && b356_8 && b357_13 && b358_18 && b359_25 && b360_28 && b361_2 && b362_56 && b363_59) {
pattern_id = 933;
}
if(b331_18 && b332_28 && b333_28 && b334_27 && b335_38 && b336_23 && b337_26 && b338_42 && b339_33 && b340_28 && b341_27 && b342_27 && b343_28 && b344_40 && b345_21 && b346_2 && b347_17 && b348_5 && b349_25 && b350_41 && b351_23 && b352_45 && b353_29 && b354_48 && b355_1 && b356_1 && b357_44 && b358_17 && b359_19 && b360_2 && b361_28 && b362_2 && b363_47) {
pattern_id = 934;
}
if(b350_31 && b351_21 && b352_23 && b353_8 && b354_45 && b355_46 && b356_12 && b357_15 && b358_18 && b359_45 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 935;
}
if(b351_39 && b352_1 && b353_49 && b354_5 && b355_49 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 936;
}
if(b353_20 && b354_36 && b355_1 && b356_10 && b357_34 && b358_55 && b359_13 && b360_2 && b361_8 && b362_27 && b363_25) {
pattern_id = 937;
}
if(b352_43 && b353_32 && b354_3 && b355_2 && b356_34 && b357_41 && b358_2 && b359_40 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 938;
}
if(b353_20 && b354_36 && b355_1 && b356_12 && b357_15 && b358_11 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 939;
}
if(b355_42 && b356_41 && b357_18 && b358_18 && b359_12 && b360_15 && b361_8 && b362_14 && b363_6) {
pattern_id = 940;
}
if(b351_39 && b352_1 && b353_49 && b354_45 && b355_15 && b356_41 && b357_18 && b358_16 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 941;
}
if(b351_39 && b352_1 && b353_49 && b354_28 && b355_15 && b356_1 && b357_6 && b358_6 && b359_17 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 942;
}
if(b351_39 && b352_1 && b353_49 && b354_28 && b355_15 && b356_1 && b357_6 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 943;
}
if(b351_39 && b352_1 && b353_49 && b354_28 && b355_15 && b356_1 && b357_6 && b358_6 && b359_17 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 944;
}
if(b352_43 && b353_32 && b354_3 && b355_13 && b356_6 && b357_9 && b358_11 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 945;
}
if(b348_40 && b349_36 && b350_26 && b351_20 && b352_4 && b353_32 && b354_6 && b355_18 && b356_36 && b357_49 && b358_44 && b359_64 && b360_17 && b361_8 && b362_64 && b363_48) {
pattern_id = 946;
}
if(b354_23 && b355_11 && b356_8 && b357_19 && b358_6 && b359_19 && b360_28 && b361_12 && b362_2 && b363_22) {
pattern_id = 947;
}
if(b350_31 && b351_21 && b352_23 && b353_10 && b354_27 && b355_25 && b356_28 && b357_34 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 948;
}
if(b353_20 && b354_36 && b355_48 && b356_15 && b357_18 && b358_2 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 949;
}
if(b359_52 && b360_15 && b361_22 && b362_2 && b363_32) {
pattern_id = 950;
}
if(b354_23 && b355_11 && b356_6 && b357_42 && b358_37 && b359_19 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 951;
}
if(b353_20 && b354_36 && b355_25 && b356_12 && b357_15 && b358_11 && b359_26 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 952;
}
if(b355_42 && b356_41 && b357_15 && b358_37 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 953;
}
if(b358_50 && b359_17 && b360_28 && b361_59 && b362_26 && b363_48) {
pattern_id = 954;
}
if(b352_43 && b353_32 && b354_27 && b355_33 && b356_35 && b357_3 && b358_17 && b359_3 && b360_58 && b361_30 && b362_56 && b363_25) {
pattern_id = 955;
}
if(b353_20 && b354_36 && b355_13 && b356_9 && b357_36 && b358_2 && b359_42 && b360_52 && b361_30 && b362_56 && b363_25) {
pattern_id = 956;
}
if(b354_23 && b355_11 && b356_36 && b357_41 && b358_59 && b359_58 && b360_59 && b361_8 && b362_8 && b363_17) {
pattern_id = 957;
}
if(b360_29 && b361_17 && b362_2 && b363_32) {
pattern_id = 958;
}
if(b348_40 && b349_36 && b350_4 && b351_35 && b352_43 && b353_30 && b354_3 && b355_1 && b356_34 && b357_21 && b358_2 && b359_19 && b360_15 && b361_8 && b362_18 && b363_51) {
pattern_id = 959;
}
if(b356_52 && b357_9 && b358_15 && b359_56 && b360_58 && b361_26 && b362_32 && b363_12) {
pattern_id = 960;
}
if(b351_39 && b352_1 && b353_23 && b354_34 && b355_45 && b356_1 && b357_49 && b358_6 && b359_43 && b360_26 && b361_30 && b362_56 && b363_25) {
pattern_id = 961;
}
if(b358_50 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 962;
}
if(b358_50 && b359_26 && b360_29 && b361_59 && b362_24 && b363_48) {
pattern_id = 963;
}
if(b341_40 && b342_30 && b343_28 && b344_19 && b345_34 && b346_23 && b347_22 && b348_29 && b349_11 && b350_8 && b351_35 && b352_21 && b353_17 && b354_43 && b355_42 && b356_1 && b357_9 && b358_16 && b359_16 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 964;
}
if(b336_23 && b337_26 && b338_29 && b339_28 && b340_26 && b341_19 && b342_27 && b343_8 && b344_31 && b345_42 && b346_21 && b347_31 && b348_5 && b349_35 && b350_37 && b351_39 && b352_51 && b353_6 && b354_3 && b355_11 && b356_59 && b357_49 && b358_19 && b359_19 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 965;
}
if(b354_23 && b355_14 && b356_9 && b357_9 && b358_19 && b359_7 && b360_18 && b361_41 && b362_38 && b363_4) {
pattern_id = 966;
}
if(b344_31 && b345_42 && b346_36 && b347_43 && b348_26 && b349_43 && b350_12 && b351_35 && b352_43 && b353_13 && b354_51 && b355_53 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 967;
}
if(b343_27 && b344_13 && b345_21 && b346_10 && b347_29 && b348_24 && b349_44 && b350_4 && b351_39 && b352_9 && b353_17 && b354_5 && b355_49 && b356_14 && b357_10 && b358_12 && b359_12 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 968;
}
if(b344_31 && b345_42 && b346_36 && b347_43 && b348_26 && b349_43 && b350_12 && b351_35 && b352_43 && b353_40 && b354_12 && b355_16 && b356_17 && b357_18 && b358_9 && b359_19 && b360_2 && b361_53 && b362_18 && b363_22) {
pattern_id = 969;
}
if(b344_31 && b345_42 && b346_36 && b347_43 && b348_26 && b349_43 && b350_12 && b351_35 && b352_43 && b353_40 && b354_27 && b355_14 && b356_57 && b357_15 && b358_2 && b359_19 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 970;
}
if(b338_8 && b339_16 && b340_31 && b341_35 && b342_37 && b343_31 && b344_42 && b345_42 && b346_32 && b347_29 && b348_26 && b349_26 && b350_28 && b351_24 && b352_13 && b353_1 && b354_41 && b355_42 && b356_12 && b357_34 && b358_19 && b359_17 && b360_2 && b361_2 && b362_11 && b363_8) {
pattern_id = 971;
}
if(b335_25 && b336_14 && b337_25 && b338_39 && b339_27 && b340_26 && b341_34 && b342_30 && b343_27 && b344_5 && b345_22 && b346_30 && b347_31 && b348_42 && b349_17 && b350_8 && b351_7 && b352_43 && b353_38 && b354_3 && b355_38 && b356_10 && b357_44 && b358_17 && b359_19 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 972;
}
if(b330_20 && b331_25 && b332_22 && b333_25 && b334_31 && b335_24 && b336_30 && b337_26 && b338_8 && b339_27 && b340_8 && b341_27 && b342_19 && b343_20 && b344_19 && b345_22 && b346_46 && b347_32 && b348_26 && b349_26 && b350_30 && b351_32 && b352_41 && b353_46 && b354_10 && b355_54 && b356_57 && b357_6 && b358_11 && b359_7 && b360_29 && b361_19 && b362_12 && b363_8) {
pattern_id = 973;
}
if(b351_39 && b352_25 && b353_40 && b354_36 && b355_15 && b356_36 && b357_6 && b358_2 && b359_52 && b360_28 && b361_8 && b362_8 && b363_25) {
pattern_id = 974;
}
if(b343_27 && b344_13 && b345_21 && b346_10 && b347_29 && b348_24 && b349_44 && b350_4 && b351_39 && b352_22 && b353_37 && b354_8 && b355_3 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 975;
}
if(b338_8 && b339_16 && b340_31 && b341_35 && b342_37 && b343_31 && b344_42 && b345_42 && b346_32 && b347_2 && b348_5 && b349_25 && b350_51 && b351_42 && b352_43 && b353_23 && b354_24 && b355_13 && b356_41 && b357_15 && b358_53 && b359_45 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 976;
}
if(b345_23 && b346_30 && b347_9 && b348_5 && b349_18 && b350_19 && b351_26 && b352_25 && b353_20 && b354_36 && b355_1 && b356_36 && b357_15 && b358_2 && b359_19 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 977;
}
if(b347_32 && b348_29 && b349_35 && b350_34 && b351_28 && b352_22 && b353_29 && b354_8 && b355_42 && b356_1 && b357_13 && b358_55 && b359_7 && b360_26 && b361_8 && b362_2 && b363_28) {
pattern_id = 978;
}
if(b335_25 && b336_14 && b337_25 && b338_39 && b339_27 && b340_26 && b341_34 && b342_30 && b343_27 && b344_13 && b345_31 && b346_33 && b347_2 && b348_48 && b349_31 && b350_4 && b351_39 && b352_45 && b353_29 && b354_28 && b355_44 && b356_8 && b357_19 && b358_11 && b359_24 && b360_2 && b361_26 && b362_52 && b363_52) {
pattern_id = 979;
}
if(b336_23 && b337_26 && b338_32 && b339_21 && b340_8 && b341_25 && b342_24 && b343_8 && b344_31 && b345_42 && b346_44 && b347_21 && b348_24 && b349_34 && b350_26 && b351_35 && b352_43 && b353_38 && b354_3 && b355_3 && b356_10 && b357_35 && b358_17 && b359_26 && b360_2 && b361_26 && b362_52 && b363_52) {
pattern_id = 980;
}
if(b329_25 && b330_14 && b331_30 && b332_28 && b333_30 && b334_26 && b335_35 && b336_14 && b337_32 && b338_40 && b339_24 && b340_40 && b341_25 && b342_18 && b343_24 && b344_13 && b345_23 && b346_30 && b347_22 && b348_17 && b349_36 && b350_24 && b351_43 && b352_43 && b353_23 && b354_3 && b355_28 && b356_57 && b357_35 && b358_11 && b359_26 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 981;
}
if(b338_8 && b339_16 && b340_31 && b341_35 && b342_37 && b343_31 && b344_42 && b345_42 && b346_32 && b347_34 && b348_15 && b349_25 && b350_42 && b351_35 && b352_43 && b353_9 && b354_3 && b355_3 && b356_34 && b357_9 && b358_56 && b359_26 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 982;
}
if(b339_35 && b340_27 && b341_30 && b342_39 && b343_30 && b344_25 && b345_4 && b346_30 && b347_32 && b348_34 && b349_25 && b350_36 && b351_45 && b352_25 && b353_20 && b354_41 && b355_1 && b356_54 && b357_34 && b358_2 && b359_21 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 983;
}
if(b344_31 && b345_42 && b346_36 && b347_43 && b348_26 && b349_43 && b350_12 && b351_35 && b352_43 && b353_6 && b354_27 && b355_9 && b356_6 && b357_13 && b358_18 && b359_21 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 984;
}
if(b350_31 && b351_35 && b352_41 && b353_47 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 985;
}
if(b352_43 && b353_10 && b354_3 && b355_42 && b356_50 && b357_13 && b358_11 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 986;
}
if(b357_21 && b358_2 && b359_13 && b360_19 && b361_17 && b362_14 && b363_32) {
pattern_id = 987;
}
if(b353_20 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 988;
}
if(b352_43 && b353_10 && b354_3 && b355_2 && b356_41 && b357_10 && b358_54 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 989;
}
if(b353_20 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 990;
}
if(b353_20 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 991;
}
if(b354_23 && b355_14 && b356_8 && b357_13 && b358_9 && b359_56 && b360_6 && b361_30 && b362_56 && b363_25) {
pattern_id = 992;
}
if(b353_20 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_15 && b362_11 && b363_22) {
pattern_id = 993;
}
if(b351_39 && b352_25 && b353_49 && b354_5 && b355_11 && b356_9 && b357_49 && b358_35 && b359_51 && b360_2 && b361_15 && b362_11 && b363_22) {
pattern_id = 994;
}
if(b351_39 && b352_25 && b353_49 && b354_5 && b355_11 && b356_9 && b357_49 && b358_52 && b359_24 && b360_18 && b361_44 && b362_53 && b363_48) {
pattern_id = 995;
}
if(b354_23 && b355_14 && b356_8 && b357_13 && b358_9 && b359_56 && b360_6 && b361_59 && b362_58 && b363_48) {
pattern_id = 996;
}
if(b333_21 && b334_21 && b335_28 && b336_27 && b337_36 && b338_32 && b339_36 && b340_64 && b341_64 && b342_55 && b343_57 && b344_8 && b345_48 && b346_47 && b347_28 && b348_11 && b349_70 && b350_52 && b351_34 && b352_26 && b353_76 && b354_2 && b355_14 && b356_40 && b357_3 && b358_74 && b359_53 && b360_10 && b361_17 && b362_27 && b363_48) {
pattern_id = 997;
}
if(b347_32 && b348_29 && b349_31 && b350_24 && b351_34 && b352_29 && b353_38 && b354_23 && b355_48 && b356_10 && b357_41 && b358_6 && b359_18 && b360_2 && b361_26 && b362_20 && b363_41) {
pattern_id = 998;
}
if(b351_39 && b352_25 && b353_49 && b354_41 && b355_49 && b356_32 && b357_15 && b358_9 && b359_42 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 999;
}
if(b351_39 && b352_25 && b353_49 && b354_41 && b355_49 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_52 && b362_35 && b363_51) {
pattern_id = 1000;
}
if(b348_40 && b349_26 && b350_26 && b351_7 && b352_41 && b353_48 && b354_3 && b355_14 && b356_1 && b357_13 && b358_12 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1001;
}
if(b352_43 && b353_10 && b354_3 && b355_16 && b356_34 && b357_6 && b358_6 && b359_42 && b360_28 && b361_30 && b362_56 && b363_25) {
pattern_id = 1002;
}
if(b350_31 && b351_35 && b352_23 && b353_27 && b354_8 && b355_1 && b356_36 && b357_15 && b358_2 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1003;
}
if(b327_14 && b328_33 && b329_19 && b330_23 && b331_38 && b332_19 && b333_46 && b334_26 && b335_8 && b336_19 && b337_26 && b338_27 && b339_21 && b340_3 && b341_28 && b342_31 && b343_24 && b344_58 && b345_52 && b346_18 && b347_69 && b348_44 && b349_58 && b350_45 && b351_58 && b352_28 && b353_76 && b354_46 && b355_25 && b356_41 && b357_41 && b358_51 && b359_19 && b360_41 && b361_11 && b362_11 && b363_47) {
pattern_id = 1004;
}
if(b352_43 && b353_10 && b354_3 && b355_11 && b356_17 && b357_18 && b358_9 && b359_67 && b360_13 && b361_44 && b362_35 && b363_46) {
pattern_id = 1005;
}
if(b350_31 && b351_35 && b352_23 && b353_32 && b354_1 && b355_1 && b356_41 && b357_36 && b358_2 && b359_19 && b360_19 && b361_39 && b362_44 && b363_22) {
pattern_id = 1006;
}
if(b352_43 && b353_10 && b354_3 && b355_11 && b356_17 && b357_35 && b358_16 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1007;
}
if(b352_43 && b353_10 && b354_3 && b355_11 && b356_17 && b357_35 && b358_16 && b359_13 && b360_2 && b361_11 && b362_16 && b363_26) {
pattern_id = 1008;
}
if(b340_28 && b341_27 && b342_27 && b343_47 && b344_43 && b345_22 && b346_36 && b347_22 && b348_29 && b349_11 && b350_62 && b351_29 && b352_44 && b353_8 && b354_8 && b355_33 && b356_41 && b357_35 && b358_44 && b359_19 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1009;
}
if(b355_42 && b356_1 && b357_18 && b358_9 && b359_55 && b360_26 && b361_8 && b362_11 && b363_28) {
pattern_id = 1010;
}
if(b344_31 && b345_42 && b346_21 && b347_43 && b348_45 && b349_34 && b350_26 && b351_26 && b352_43 && b353_25 && b354_3 && b355_11 && b356_17 && b357_17 && b358_6 && b359_19 && b360_43 && b361_18 && b362_9 && b363_52) {
pattern_id = 1011;
}
if(b341_40 && b342_30 && b343_24 && b344_40 && b345_39 && b346_23 && b347_22 && b348_34 && b349_11 && b350_23 && b351_5 && b352_1 && b353_41 && b354_10 && b355_1 && b356_7 && b357_66 && b358_51 && b359_21 && b360_19 && b361_50 && b362_9 && b363_8) {
pattern_id = 1012;
}
if(b350_31 && b351_35 && b352_23 && b353_32 && b354_1 && b355_9 && b356_8 && b357_6 && b358_50 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 1013;
}
if(b320_18 && b321_15 && b322_15 && b323_21 && b324_20 && b325_21 && b326_26 && b327_19 && b328_18 && b329_2 && b330_23 && b331_29 && b332_29 && b333_31 && b334_34 && b335_36 && b336_21 && b337_38 && b338_43 && b339_16 && b340_35 && b341_35 && b342_38 && b343_40 && b344_34 && b345_4 && b346_21 && b347_46 && b348_11 && b349_35 && b350_17 && b351_52 && b352_22 && b353_46 && b354_12 && b355_2 && b356_34 && b357_39 && b358_6 && b359_17 && b360_11 && b361_23 && b362_9 && b363_6) {
pattern_id = 1014;
}
if(b352_43 && b353_10 && b354_3 && b355_11 && b356_17 && b357_17 && b358_6 && b359_19 && b360_29 && b361_52 && b362_15 && b363_10) {
pattern_id = 1015;
}
if(b330_20 && b331_25 && b332_2 && b333_25 && b334_37 && b335_21 && b336_20 && b337_41 && b338_8 && b339_16 && b340_38 && b341_42 && b342_27 && b343_45 && b344_26 && b345_20 && b346_35 && b347_28 && b348_11 && b349_26 && b350_17 && b351_11 && b352_38 && b353_37 && b354_5 && b355_11 && b356_34 && b357_39 && b358_6 && b359_17 && b360_11 && b361_23 && b362_9 && b363_6) {
pattern_id = 1016;
}
if(b352_43 && b353_10 && b354_3 && b355_3 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_2 && b362_11 && b363_22) {
pattern_id = 1017;
}
if(b350_31 && b351_35 && b352_23 && b353_29 && b354_27 && b355_2 && b356_1 && b357_19 && b358_15 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1018;
}
if(b354_23 && b355_14 && b356_8 && b357_6 && b358_7 && b359_7 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 1019;
}
if(b357_21 && b358_2 && b359_13 && b360_18 && b361_27 && b362_56 && b363_28) {
pattern_id = 1020;
}
if(b351_39 && b352_25 && b353_9 && b354_45 && b355_63 && b356_28 && b357_13 && b358_55 && b359_3 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1021;
}
if(b356_52 && b357_19 && b358_54 && b359_16 && b360_29 && b361_32 && b362_68 && b363_16) {
pattern_id = 1022;
}
if(b355_42 && b356_1 && b357_49 && b358_37 && b359_7 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1023;
}
if(b352_43 && b353_10 && b354_9 && b355_25 && b356_36 && b357_51 && b358_6 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1024;
}
if(b349_11 && b350_4 && b351_43 && b352_4 && b353_17 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 1025;
}
if(b351_39 && b352_25 && b353_56 && b354_12 && b355_44 && b356_7 && b357_42 && b358_37 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1026;
}
if(b351_39 && b352_25 && b353_56 && b354_12 && b355_45 && b356_9 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 1027;
}
if(b350_31 && b351_35 && b352_42 && b353_37 && b354_34 && b355_13 && b356_57 && b357_15 && b358_11 && b359_3 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1028;
}
if(b346_32 && b347_33 && b348_26 && b349_17 && b350_19 && b351_45 && b352_23 && b353_10 && b354_6 && b355_48 && b356_15 && b357_18 && b358_2 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1029;
}
if(b347_32 && b348_29 && b349_18 && b350_30 && b351_20 && b352_40 && b353_49 && b354_8 && b355_3 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1030;
}
if(b345_23 && b346_30 && b347_29 && b348_34 && b349_31 && b350_31 && b351_5 && b352_8 && b353_20 && b354_8 && b355_25 && b356_15 && b357_9 && b358_16 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 1031;
}
if(b349_11 && b350_4 && b351_28 && b352_6 && b353_49 && b354_23 && b355_15 && b356_29 && b357_19 && b358_51 && b359_42 && b360_28 && b361_23 && b362_9 && b363_22) {
pattern_id = 1032;
}
if(b330_20 && b331_25 && b332_24 && b333_33 && b334_30 && b335_25 && b336_33 && b337_15 && b338_29 && b339_37 && b340_35 && b341_27 && b342_26 && b343_39 && b344_26 && b345_36 && b346_46 && b347_22 && b348_5 && b349_26 && b350_31 && b351_54 && b352_21 && b353_10 && b354_3 && b355_33 && b356_6 && b357_9 && b358_1 && b359_18 && b360_2 && b361_50 && b362_12 && b363_41) {
pattern_id = 1033;
}
if(b357_21 && b358_2 && b359_12 && b360_18 && b361_8 && b362_36 && b363_28) {
pattern_id = 1034;
}
if(b353_20 && b354_8 && b355_9 && b356_66 && b357_2 && b358_6 && b359_24 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 1035;
}
if(b338_8 && b339_16 && b340_30 && b341_43 && b342_10 && b343_24 && b344_44 && b345_49 && b346_31 && b347_28 && b348_48 && b349_11 && b350_28 && b351_24 && b352_13 && b353_1 && b354_41 && b355_54 && b356_9 && b357_15 && b358_55 && b359_42 && b360_19 && b361_44 && b362_52 && b363_48) {
pattern_id = 1036;
}
if(b348_40 && b349_26 && b350_30 && b351_29 && b352_1 && b353_29 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1037;
}
if(b352_43 && b353_10 && b354_44 && b355_14 && b356_1 && b357_18 && b358_46 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1038;
}
if(b354_23 && b355_14 && b356_28 && b357_15 && b358_9 && b359_15 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 1039;
}
if(b351_39 && b352_25 && b353_27 && b354_12 && b355_11 && b356_55 && b357_18 && b358_9 && b359_59 && b360_2 && b361_52 && b362_27 && b363_26) {
pattern_id = 1040;
}
if(b340_28 && b341_27 && b342_5 && b343_28 && b344_25 && b345_23 && b346_30 && b347_5 && b348_17 && b349_43 && b350_42 && b351_5 && b352_6 && b353_20 && b354_8 && b355_25 && b356_10 && b357_51 && b358_9 && b359_3 && b360_59 && b361_39 && b362_9 && b363_8) {
pattern_id = 1041;
}
if(b350_31 && b351_35 && b352_4 && b353_30 && b354_6 && b355_45 && b356_10 && b357_9 && b358_6 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 1042;
}
if(b352_43 && b353_10 && b354_12 && b355_57 && b356_6 && b357_44 && b358_9 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1043;
}
if(b351_39 && b352_25 && b353_37 && b354_58 && b355_25 && b356_15 && b357_9 && b358_46 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 1044;
}
if(b353_20 && b354_8 && b355_25 && b356_15 && b357_9 && b358_16 && b359_13 && b360_2 && b361_28 && b362_2 && b363_47) {
pattern_id = 1045;
}
if(b351_39 && b352_25 && b353_17 && b354_5 && b355_5 && b356_41 && b357_44 && b358_17 && b359_13 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 1046;
}
if(b348_40 && b349_26 && b350_19 && b351_28 && b352_29 && b353_62 && b354_25 && b355_9 && b356_29 && b357_18 && b358_46 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1047;
}
if(b348_40 && b349_26 && b350_19 && b351_28 && b352_22 && b353_49 && b354_23 && b355_11 && b356_8 && b357_51 && b358_17 && b359_54 && b360_54 && b361_26 && b362_25 && b363_5) {
pattern_id = 1048;
}
if(b348_40 && b349_26 && b350_63 && b351_45 && b352_43 && b353_38 && b354_20 && b355_46 && b356_7 && b357_45 && b358_44 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1049;
}
if(b325_23 && b326_24 && b327_23 && b328_27 && b329_26 && b330_28 && b331_2 && b332_2 && b333_29 && b334_21 && b335_24 && b336_20 && b337_20 && b338_28 && b339_35 && b340_40 && b341_23 && b342_29 && b343_15 && b344_30 && b345_17 && b346_30 && b347_32 && b348_23 && b349_24 && b350_26 && b351_54 && b352_62 && b353_62 && b354_44 && b355_1 && b356_19 && b357_41 && b358_37 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1050;
}
if(b356_52 && b357_19 && b358_9 && b359_56 && b360_6 && b361_12 && b362_52 && b363_51) {
pattern_id = 1051;
}
if(b352_43 && b353_10 && b354_36 && b355_1 && b356_1 && b357_44 && b358_17 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1052;
}
if(b325_23 && b326_24 && b327_27 && b328_49 && b329_14 && b330_40 && b331_34 && b332_56 && b333_13 && b334_57 && b335_24 && b336_27 && b337_36 && b338_29 && b339_28 && b340_60 && b341_46 && b342_3 && b343_49 && b344_39 && b345_53 && b346_25 && b347_32 && b348_7 && b349_59 && b350_6 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 1053;
}
if(b358_50 && b359_26 && b360_18 && b361_12 && b362_11 && b363_33) {
pattern_id = 1054;
}
if(b352_43 && b353_10 && b354_6 && b355_2 && b356_7 && b357_9 && b358_6 && b359_7 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 1055;
}
if(b349_11 && b350_4 && b351_26 && b352_21 && b353_29 && b354_8 && b355_33 && b356_6 && b357_3 && b358_3 && b359_12 && b360_58 && b361_30 && b362_56 && b363_25) {
pattern_id = 1056;
}
if(b350_31 && b351_35 && b352_6 && b353_8 && b354_6 && b355_44 && b356_1 && b357_21 && b358_52 && b359_81 && b360_24 && b361_33 && b362_56 && b363_48) {
pattern_id = 1057;
}
if(b354_23 && b355_14 && b356_7 && b357_15 && b358_9 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1058;
}
if(b348_40 && b349_26 && b350_12 && b351_34 && b352_1 && b353_49 && b354_23 && b355_2 && b356_50 && b357_15 && b358_9 && b359_8 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1059;
}
if(b347_32 && b348_29 && b349_44 && b350_36 && b351_21 && b352_23 && b353_20 && b354_5 && b355_48 && b356_6 && b357_9 && b358_51 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 1060;
}
if(b355_42 && b356_1 && b357_6 && b358_37 && b359_17 && b360_62 && b361_30 && b362_56 && b363_25) {
pattern_id = 1061;
}
if(b348_40 && b349_26 && b350_57 && b351_20 && b352_22 && b353_62 && b354_44 && b355_1 && b356_14 && b357_42 && b358_9 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1062;
}
if(b352_43 && b353_10 && b354_21 && b355_13 && b356_36 && b357_15 && b358_9 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1063;
}
if(b345_23 && b346_30 && b347_23 && b348_24 && b349_43 && b350_36 && b351_21 && b352_6 && b353_20 && b354_25 && b355_25 && b356_14 && b357_41 && b358_37 && b359_21 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1064;
}
if(b353_20 && b354_8 && b355_44 && b356_41 && b357_20 && b358_6 && b359_45 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1065;
}
if(b360_29 && b361_41 && b362_16 && b363_52) {
pattern_id = 1066;
}
if(b354_23 && b355_14 && b356_54 && b357_19 && b358_9 && b359_55 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1067;
}
if(b351_39 && b352_6 && b353_8 && b354_10 && b355_60 && b356_12 && b357_13 && b358_17 && b359_15 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1068;
}
if(b359_52 && b360_18 && b361_52 && b362_2 && b363_32) {
pattern_id = 1069;
}
if(b346_32 && b347_34 && b348_11 && b349_35 && b350_37 && b351_7 && b352_4 && b353_29 && b354_3 && b355_42 && b356_14 && b357_13 && b358_19 && b359_21 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1070;
}
if(b345_23 && b346_42 && b347_22 && b348_23 && b349_24 && b350_22 && b351_34 && b352_6 && b353_49 && b354_23 && b355_13 && b356_41 && b357_35 && b358_46 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1071;
}
if(b355_42 && b356_7 && b357_18 && b358_2 && b359_19 && b360_57 && b361_52 && b362_19 && b363_16) {
pattern_id = 1072;
}
if(b351_39 && b352_6 && b353_49 && b354_8 && b355_3 && b356_35 && b357_10 && b358_12 && b359_12 && b360_29 && b361_58 && b362_59 && b363_24) {
pattern_id = 1073;
}
if(b355_42 && b356_7 && b357_18 && b358_2 && b359_19 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 1074;
}
if(b351_39 && b352_6 && b353_49 && b354_8 && b355_3 && b356_19 && b357_42 && b358_51 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1075;
}
if(b355_42 && b356_7 && b357_18 && b358_2 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1076;
}
if(b355_42 && b356_7 && b357_18 && b358_2 && b359_19 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1077;
}
if(b356_52 && b357_6 && b358_6 && b359_26 && b360_18 && b361_52 && b362_19 && b363_16) {
pattern_id = 1078;
}
if(b349_11 && b350_12 && b351_5 && b352_36 && b353_29 && b354_25 && b355_25 && b356_15 && b357_3 && b358_11 && b359_13 && b360_15 && b361_30 && b362_56 && b363_25) {
pattern_id = 1079;
}
if(b345_23 && b346_42 && b347_26 && b348_26 && b349_39 && b350_22 && b351_5 && b352_1 && b353_20 && b354_6 && b355_10 && b356_15 && b357_41 && b358_27 && b359_64 && b360_13 && b361_33 && b362_19 && b363_48) {
pattern_id = 1080;
}
if(b350_31 && b351_26 && b352_13 && b353_17 && b354_23 && b355_15 && b356_14 && b357_13 && b358_12 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1081;
}
if(b355_42 && b356_7 && b357_41 && b358_44 && b359_26 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1082;
}
if(b319_18 && b320_31 && b321_11 && b322_43 && b323_29 && b324_35 && b325_23 && b326_30 && b327_9 && b328_51 && b329_19 && b330_33 && b331_38 && b332_56 && b333_33 && b334_33 && b335_21 && b336_2 && b337_46 && b338_21 && b339_47 && b340_51 && b341_40 && b342_20 && b343_55 && b344_3 && b345_11 && b346_1 && b347_38 && b348_4 && b349_1 && b350_16 && b351_2 && b352_27 && b353_10 && b354_3 && b355_11 && b356_35 && b357_14 && b358_12 && b359_13 && b360_30 && b361_39 && b362_73 && b363_4) {
pattern_id = 1083;
}
if(b340_28 && b341_34 && b342_5 && b343_25 && b344_21 && b345_31 && b346_42 && b347_27 && b348_42 && b349_25 && b350_24 && b351_35 && b352_43 && b353_1 && b354_41 && b355_49 && b356_8 && b357_52 && b358_25 && b359_78 && b360_8 && b361_11 && b362_59 && b363_28) {
pattern_id = 1084;
}
if(b354_23 && b355_3 && b356_6 && b357_3 && b358_12 && b359_78 && b360_13 && b361_30 && b362_63 && b363_22) {
pattern_id = 1085;
}
if(b354_23 && b355_3 && b356_41 && b357_13 && b358_16 && b359_13 && b360_2 && b361_12 && b362_57 && b363_26) {
pattern_id = 1086;
}
if(b330_20 && b331_31 && b332_28 && b333_36 && b334_16 && b335_28 && b336_23 && b337_35 && b338_38 && b339_24 && b340_36 && b341_34 && b342_3 && b343_49 && b344_39 && b345_53 && b346_25 && b347_32 && b348_7 && b349_59 && b350_6 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 1087;
}
if(b347_32 && b348_34 && b349_36 && b350_28 && b351_7 && b352_25 && b353_46 && b354_5 && b355_3 && b356_29 && b357_15 && b358_46 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1088;
}
if(b348_40 && b349_44 && b350_34 && b351_24 && b352_22 && b353_32 && b354_23 && b355_3 && b356_41 && b357_34 && b358_6 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 1089;
}
if(b356_52 && b357_6 && b358_2 && b359_19 && b360_2 && b361_53 && b362_18 && b363_6) {
pattern_id = 1090;
}
if(b350_31 && b351_26 && b352_6 && b353_8 && b354_34 && b355_1 && b356_12 && b357_6 && b358_37 && b359_7 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1091;
}
if(b347_32 && b348_34 && b349_56 && b350_34 && b351_48 && b352_21 && b353_20 && b354_8 && b355_3 && b356_10 && b357_6 && b358_7 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1092;
}
if(b351_39 && b352_6 && b353_53 && b354_6 && b355_42 && b356_41 && b357_18 && b358_51 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1093;
}
if(b351_39 && b352_6 && b353_53 && b354_6 && b355_22 && b356_57 && b357_6 && b358_55 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1094;
}
if(b357_21 && b358_7 && b359_50 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 1095;
}
if(b357_21 && b358_7 && b359_43 && b360_2 && b361_2 && b362_11 && b363_51) {
pattern_id = 1096;
}
if(b353_20 && b354_21 && b355_9 && b356_7 && b357_9 && b358_51 && b359_24 && b360_10 && b361_12 && b362_8 && b363_26) {
pattern_id = 1097;
}
if(b357_21 && b358_7 && b359_7 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 1098;
}
if(b349_11 && b350_57 && b351_20 && b352_41 && b353_8 && b354_6 && b355_1 && b356_52 && b357_35 && b358_18 && b359_3 && b360_2 && b361_26 && b362_56 && b363_25) {
pattern_id = 1099;
}
if(b346_32 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_20 && b354_44 && b355_63 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1100;
}
if(b346_32 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_20 && b354_27 && b355_2 && b356_41 && b357_13 && b358_55 && b359_25 && b360_28 && b361_2 && b362_56 && b363_33) {
pattern_id = 1101;
}
if(b351_39 && b352_10 && b353_17 && b354_45 && b355_2 && b356_7 && b357_18 && b358_27 && b359_25 && b360_68 && b361_33 && b362_25 && b363_33) {
pattern_id = 1102;
}
if(b353_20 && b354_21 && b355_13 && b356_16 && b357_15 && b358_51 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1103;
}
if(b353_20 && b354_21 && b355_13 && b356_16 && b357_15 && b358_51 && b359_38 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1104;
}
if(b354_23 && b355_44 && b356_36 && b357_17 && b358_37 && b359_8 && b360_12 && b361_30 && b362_56 && b363_25) {
pattern_id = 1105;
}
if(b350_31 && b351_23 && b352_22 && b353_46 && b354_12 && b355_2 && b356_34 && b357_21 && b358_55 && b359_3 && b360_12 && b361_27 && b362_25 && b363_5) {
pattern_id = 1106;
}
if(b351_39 && b352_10 && b353_17 && b354_10 && b355_25 && b356_10 && b357_34 && b358_6 && b359_17 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1107;
}
if(b348_40 && b349_56 && b350_19 && b351_45 && b352_4 && b353_8 && b354_45 && b355_15 && b356_14 && b357_13 && b358_12 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1108;
}
if(b343_27 && b344_29 && b345_42 && b346_21 && b347_43 && b348_49 && b349_56 && b350_19 && b351_24 && b352_21 && b353_29 && b354_3 && b355_46 && b356_10 && b357_34 && b358_55 && b359_12 && b360_30 && b361_30 && b362_56 && b363_25) {
pattern_id = 1109;
}
if(b342_26 && b343_15 && b344_13 && b345_17 && b346_10 && b347_45 && b348_51 && b349_43 && b350_41 && b351_29 && b352_6 && b353_49 && b354_42 && b355_13 && b356_10 && b357_19 && b358_2 && b359_20 && b360_12 && b361_30 && b362_56 && b363_25) {
pattern_id = 1110;
}
if(b351_39 && b352_10 && b353_10 && b354_3 && b355_11 && b356_29 && b357_3 && b358_3 && b359_3 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1111;
}
if(b354_23 && b355_44 && b356_1 && b357_18 && b358_9 && b359_26 && b360_2 && b361_11 && b362_16 && b363_26) {
pattern_id = 1112;
}
if(b354_23 && b355_44 && b356_1 && b357_18 && b358_9 && b359_26 && b360_2 && b361_18 && b362_27 && b363_25) {
pattern_id = 1113;
}
if(b348_40 && b349_56 && b350_4 && b351_26 && b352_4 && b353_32 && b354_3 && b355_60 && b356_8 && b357_18 && b358_44 && b359_13 && b360_15 && b361_30 && b362_56 && b363_25) {
pattern_id = 1114;
}
if(b277_10 && b278_9 && b279_1 && b280_12 && b281_10 && b282_5 && b283_1 && b284_11 && b285_12 && b286_12 && b287_12 && b288_14 && b289_14 && b290_14 && b291_5 && b292_11 && b293_15 && b294_3 && b295_3 && b296_14 && b297_4 && b298_2 && b299_16 && b300_4 && b301_13 && b302_11 && b303_17 && b304_19 && b305_20 && b306_3 && b307_22 && b308_22 && b309_20 && b310_14 && b311_18 && b312_14 && b313_23 && b314_23 && b315_27 && b316_34 && b317_13 && b318_23 && b319_33 && b320_23 && b321_13 && b322_3 && b323_4 && b324_39 && b325_4 && b326_12 && b327_21 && b328_12 && b329_7 && b330_23 && b331_5 && b332_35 && b333_28 && b334_16 && b335_35 && b336_33 && b337_24 && b338_41 && b339_57 && b340_6 && b341_59 && b342_27 && b343_24 && b344_25 && b345_55 && b346_18 && b347_28 && b348_26 && b349_49 && b350_26 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1115;
}
if(b356_52 && b357_44 && b358_11 && b359_12 && b360_26 && b361_30 && b362_56 && b363_25) {
pattern_id = 1116;
}
if(b342_26 && b343_15 && b344_42 && b345_22 && b346_23 && b347_33 && b348_39 && b349_27 && b350_34 && b351_39 && b352_28 && b353_8 && b354_54 && b355_1 && b356_16 && b357_63 && b358_51 && b359_17 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1117;
}
if(b361_32 && b362_26 && b363_36) {
pattern_id = 1118;
}
if(b350_31 && b351_49 && b352_18 && b353_21 && b354_23 && b355_5 && b356_15 && b357_6 && b358_51 && b359_24 && b360_13 && b361_18 && b362_18 && b363_28) {
pattern_id = 1119;
}
if(b343_27 && b344_43 && b345_9 && b346_15 && b347_32 && b348_25 && b349_56 && b350_12 && b351_29 && b352_32 && b353_1 && b354_50 && b355_2 && b356_52 && b357_62 && b358_46 && b359_53 && b360_5 && b361_52 && b362_11 && b363_28) {
pattern_id = 1120;
}
if(b341_40 && b342_38 && b343_24 && b344_40 && b345_22 && b346_41 && b347_29 && b348_23 && b349_27 && b350_31 && b351_28 && b352_29 && b353_38 && b354_3 && b355_51 && b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 1121;
}
if(b347_32 && b348_45 && b349_18 && b350_24 && b351_26 && b352_24 && b353_48 && b354_62 && b355_13 && b356_57 && b357_51 && b358_52 && b359_12 && b360_30 && b361_54 && b362_15 && b363_48) {
pattern_id = 1122;
}
if(b352_43 && b353_41 && b354_43 && b355_1 && b356_54 && b357_36 && b358_2 && b359_3 && b360_59 && b361_17 && b362_14 && b363_5) {
pattern_id = 1123;
}
if(b345_23 && b346_43 && b347_29 && b348_11 && b349_50 && b350_48 && b351_48 && b352_1 && b353_37 && b354_5 && b355_49 && b356_9 && b357_13 && b358_2 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1124;
}
if(b352_43 && b353_41 && b354_43 && b355_1 && b356_54 && b357_31 && b358_2 && b359_3 && b360_59 && b361_17 && b362_14 && b363_5) {
pattern_id = 1125;
}
if(b351_39 && b352_44 && b353_1 && b354_3 && b355_45 && b356_9 && b357_15 && b358_18 && b359_13 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 1126;
}
if(b350_31 && b351_49 && b352_24 && b353_49 && b354_34 && b355_38 && b356_6 && b357_9 && b358_7 && b359_42 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1127;
}
if(b338_8 && b339_7 && b340_8 && b341_8 && b342_10 && b343_8 && b344_8 && b345_10 && b346_10 && b347_9 && b348_11 && b349_11 && b350_12 && b351_5 && b352_13 && b353_17 && b354_10 && b355_2 && b356_7 && b357_18 && b358_25 && b359_16 && b360_18 && b361_33 && b362_25 && b363_33) {
pattern_id = 1128;
}
if(b350_31 && b351_49 && b352_24 && b353_49 && b354_34 && b355_3 && b356_6 && b357_51 && b358_19 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1129;
}
if(b349_11 && b350_49 && b351_28 && b352_4 && b353_46 && b354_5 && b355_3 && b356_29 && b357_15 && b358_46 && b359_25 && b360_28 && b361_2 && b362_56 && b363_59) {
pattern_id = 1130;
}
if(b356_52 && b357_20 && b358_19 && b359_7 && b360_2 && b361_28 && b362_56 && b363_29) {
pattern_id = 1131;
}
if(b350_31 && b351_49 && b352_24 && b353_32 && b354_5 && b355_9 && b356_10 && b357_6 && b358_37 && b359_17 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1132;
}
if(b351_39 && b352_44 && b353_1 && b354_8 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1133;
}
if(b350_31 && b351_49 && b352_29 && b353_40 && b354_1 && b355_15 && b356_8 && b357_2 && b358_6 && b359_17 && b360_2 && b361_28 && b362_18 && b363_8) {
pattern_id = 1134;
}
if(b352_43 && b353_41 && b354_27 && b355_2 && b356_1 && b357_19 && b358_15 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1135;
}
if(b355_42 && b356_54 && b357_29 && b358_38 && b359_42 && b360_8 && b361_56 && b362_25 && b363_28) {
pattern_id = 1136;
}
if(b353_20 && b354_34 && b355_37 && b356_7 && b357_20 && b358_51 && b359_17 && b360_8 && b361_30 && b362_56 && b363_51) {
pattern_id = 1137;
}
if(b353_20 && b354_34 && b355_37 && b356_54 && b357_49 && b358_37 && b359_25 && b360_12 && b361_23 && b362_25 && b363_33) {
pattern_id = 1138;
}
if(b356_52 && b357_2 && b358_51 && b359_12 && b360_8 && b361_30 && b362_56 && b363_25) {
pattern_id = 1139;
}
if(b354_23 && b355_45 && b356_10 && b357_45 && b358_38 && b359_24 && b360_10 && b361_12 && b362_8 && b363_26) {
pattern_id = 1140;
}
if(b350_31 && b351_44 && b352_21 && b353_57 && b354_40 && b355_28 && b356_6 && b357_13 && b358_9 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1141;
}
if(b340_28 && b341_45 && b342_19 && b343_46 && b344_47 && b345_47 && b346_22 && b347_31 && b348_5 && b349_29 && b350_31 && b351_44 && b352_21 && b353_57 && b354_40 && b355_28 && b356_6 && b357_13 && b358_9 && b359_38 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1142;
}
if(b352_43 && b353_23 && b354_3 && b355_28 && b356_35 && b357_41 && b358_51 && b359_7 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1143;
}
if(b339_35 && b340_39 && b341_8 && b342_48 && b343_27 && b344_41 && b345_48 && b346_22 && b347_49 && b348_48 && b349_31 && b350_48 && b351_29 && b352_29 && b353_8 && b354_10 && b355_63 && b356_7 && b357_35 && b358_16 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1144;
}
if(b350_31 && b351_44 && b352_23 && b353_47 && b354_42 && b355_14 && b356_7 && b357_15 && b358_9 && b359_13 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1145;
}
if(b351_39 && b352_46 && b353_49 && b354_20 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 1146;
}
if(b351_39 && b352_46 && b353_49 && b354_20 && b355_2 && b356_34 && b357_41 && b358_19 && b359_21 && b360_2 && b361_44 && b362_2 && b363_41) {
pattern_id = 1147;
}
if(b353_20 && b354_34 && b355_1 && b356_12 && b357_13 && b358_17 && b359_12 && b360_47 && b361_8 && b362_8 && b363_28) {
pattern_id = 1148;
}
if(b350_31 && b351_44 && b352_23 && b353_47 && b354_25 && b355_2 && b356_41 && b357_6 && b358_38 && b359_43 && b360_13 && b361_39 && b362_9 && b363_28) {
pattern_id = 1149;
}
if(b355_42 && b356_54 && b357_18 && b358_27 && b359_56 && b360_19 && b361_17 && b362_11 && b363_28) {
pattern_id = 1150;
}
if(b352_43 && b353_23 && b354_3 && b355_28 && b356_34 && b357_35 && b358_2 && b359_19 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1151;
}
if(b354_23 && b355_45 && b356_8 && b357_42 && b358_18 && b359_17 && b360_13 && b361_15 && b362_9 && b363_8) {
pattern_id = 1152;
}
if(b352_43 && b353_23 && b354_3 && b355_28 && b356_32 && b357_35 && b358_46 && b359_38 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1153;
}
if(b356_52 && b357_2 && b358_6 && b359_24 && b360_58 && b361_12 && b362_12 && b363_22) {
pattern_id = 1154;
}
if(b275_12 && b276_10 && b277_13 && b278_14 && b279_16 && b280_16 && b281_15 && b282_14 && b283_13 && b284_15 && b285_16 && b286_17 && b287_18 && b288_19 && b289_5 && b290_3 && b291_3 && b292_14 && b293_8 && b294_6 && b295_15 && b296_6 && b297_17 && b298_17 && b299_19 && b300_14 && b301_17 && b302_5 && b303_23 && b304_9 && b305_23 && b306_10 && b307_25 && b308_6 && b309_10 && b310_22 && b311_2 && b312_2 && b313_27 && b314_4 && b315_2 && b316_10 && b317_36 && b318_37 && b319_10 && b320_32 && b321_18 && b322_17 && b323_39 && b324_35 && b325_44 && b326_3 && b327_22 && b328_38 && b329_32 && b330_14 && b331_21 && b332_7 && b333_1 && b334_54 && b335_1 && b336_1 && b337_14 && b338_4 && b339_60 && b340_27 && b341_8 && b342_39 && b343_58 && b344_15 && b345_50 && b346_21 && b347_18 && b348_34 && b349_69 && b350_3 && b351_4 && b352_4 && b353_7 && b354_43 && b355_9 && b356_16 && b357_13 && b358_50 && b359_1 && b360_2 && b361_1 && b362_40 && b363_79) {
pattern_id = 1155;
}
if(b353_20 && b354_34 && b355_1 && b356_12 && b357_49 && b358_44 && b359_64 && b360_15 && b361_8 && b362_25 && b363_48) {
pattern_id = 1156;
}
if(b351_39 && b352_46 && b353_49 && b354_20 && b355_13 && b356_16 && b357_44 && b358_2 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 1157;
}
if(b351_39 && b352_46 && b353_49 && b354_20 && b355_13 && b356_16 && b357_44 && b358_2 && b359_25 && b360_27 && b361_18 && b362_9 && b363_33) {
pattern_id = 1158;
}
if(b350_31 && b351_44 && b352_23 && b353_47 && b354_27 && b355_9 && b356_15 && b357_19 && b358_52 && b359_8 && b360_52 && b361_7 && b362_44 && b363_6) {
pattern_id = 1159;
}
if(b349_11 && b350_43 && b351_5 && b352_32 && b353_17 && b354_10 && b355_44 && b356_1 && b357_50 && b358_2 && b359_56 && b360_15 && b361_26 && b362_56 && b363_6) {
pattern_id = 1160;
}
if(b352_43 && b353_23 && b354_3 && b355_28 && b356_1 && b357_18 && b358_46 && b359_38 && b360_40 && b361_12 && b362_12 && b363_25) {
pattern_id = 1161;
}
if(b351_39 && b352_46 && b353_49 && b354_20 && b355_14 && b356_36 && b357_35 && b358_9 && b359_26 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1162;
}
if(b352_43 && b353_23 && b354_3 && b355_28 && b356_1 && b357_6 && b358_51 && b359_19 && b360_29 && b361_59 && b362_12 && b363_48) {
pattern_id = 1163;
}
if(b353_20 && b354_34 && b355_48 && b356_15 && b357_18 && b358_2 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1164;
}
if(b351_39 && b352_46 && b353_56 && b354_3 && b355_11 && b356_8 && b357_13 && b358_55 && b359_12 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1165;
}
if(b350_31 && b351_44 && b352_42 && b353_49 && b354_36 && b355_1 && b356_10 && b357_41 && b358_19 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 1166;
}
if(b350_31 && b351_44 && b352_42 && b353_37 && b354_43 && b355_14 && b356_53 && b357_9 && b358_51 && b359_20 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1167;
}
if(b349_11 && b350_43 && b351_43 && b352_4 && b353_1 && b354_8 && b355_46 && b356_41 && b357_13 && b358_15 && b359_25 && b360_24 && b361_50 && b362_12 && b363_33) {
pattern_id = 1168;
}
if(b347_32 && b348_43 && b349_18 && b350_22 && b351_33 && b352_45 && b353_51 && b354_8 && b355_2 && b356_14 && b357_51 && b358_17 && b359_13 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1169;
}
if(b351_39 && b352_46 && b353_1 && b354_41 && b355_49 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1170;
}
if(b338_8 && b339_54 && b340_8 && b341_42 && b342_29 && b343_48 && b344_28 && b345_42 && b346_32 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_20 && b354_8 && b355_1 && b356_10 && b357_9 && b358_16 && b359_16 && b360_61 && b361_2 && b362_25 && b363_48) {
pattern_id = 1171;
}
if(b347_32 && b348_43 && b349_25 && b350_34 && b351_46 && b352_23 && b353_32 && b354_8 && b355_18 && b356_36 && b357_49 && b358_44 && b359_64 && b360_40 && b361_12 && b362_14 && b363_48) {
pattern_id = 1172;
}
if(b355_42 && b356_54 && b357_51 && b358_38 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 1173;
}
if(b354_23 && b355_45 && b356_36 && b357_36 && b358_51 && b359_38 && b360_40 && b361_26 && b362_20 && b363_28) {
pattern_id = 1174;
}
if(b353_20 && b354_34 && b355_13 && b356_35 && b357_10 && b358_37 && b359_21 && b360_18 && b361_8 && b362_20 && b363_6) {
pattern_id = 1175;
}
if(b352_43 && b353_23 && b354_27 && b355_29 && b356_29 && b357_3 && b358_16 && b359_43 && b360_59 && b361_19 && b362_9 && b363_22) {
pattern_id = 1176;
}
if(b345_23 && b346_3 && b347_2 && b348_57 && b349_18 && b350_22 && b351_54 && b352_40 && b353_6 && b354_45 && b355_1 && b356_1 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_52 && b363_48) {
pattern_id = 1177;
}
if(b355_42 && b356_54 && b357_51 && b358_38 && b359_78 && b360_8 && b361_7 && b362_20 && b363_28) {
pattern_id = 1178;
}
if(b359_52 && b360_20 && b361_17 && b362_18 && b363_47) {
pattern_id = 1179;
}
if(b355_42 && b356_54 && b357_9 && b358_37 && b359_3 && b360_18 && b361_32 && b362_26 && b363_59) {
pattern_id = 1180;
}
if(b353_20 && b354_34 && b355_14 && b356_53 && b357_32 && b358_11 && b359_7 && b360_2 && b361_26 && b362_20 && b363_16) {
pattern_id = 1181;
}
if(b353_20 && b354_34 && b355_14 && b356_53 && b357_32 && b358_11 && b359_7 && b360_2 && b361_23 && b362_15 && b363_29) {
pattern_id = 1182;
}
if(b352_43 && b353_23 && b354_8 && b355_46 && b356_14 && b357_13 && b358_19 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1183;
}
if(b344_31 && b345_33 && b346_30 && b347_29 && b348_29 && b349_27 && b350_17 && b351_24 && b352_40 && b353_46 && b354_23 && b355_6 && b356_45 && b357_18 && b358_9 && b359_55 && b360_13 && b361_52 && b362_9 && b363_48) {
pattern_id = 1184;
}
if(b356_52 && b357_2 && b358_15 && b359_20 && b360_57 && b361_41 && b362_58 && b363_25) {
pattern_id = 1185;
}
if(b352_43 && b353_23 && b354_34 && b355_45 && b356_10 && b357_34 && b358_55 && b359_12 && b360_30 && b361_30 && b362_56 && b363_25) {
pattern_id = 1186;
}
if(b352_43 && b353_23 && b354_34 && b355_45 && b356_12 && b357_15 && b358_51 && b359_17 && b360_12 && b361_30 && b362_56 && b363_25) {
pattern_id = 1187;
}
if(b344_31 && b345_33 && b346_3 && b347_30 && b348_39 && b349_25 && b350_28 && b351_21 && b352_41 && b353_20 && b354_27 && b355_2 && b356_1 && b357_19 && b358_15 && b359_38 && b360_2 && b361_39 && b362_57 && b363_6) {
pattern_id = 1188;
}
if(b356_52 && b357_2 && b358_15 && b359_20 && b360_20 && b361_12 && b362_12 && b363_22) {
pattern_id = 1189;
}
if(b361_32 && b362_57 && b363_28) {
pattern_id = 1190;
}
if(b355_42 && b356_66 && b357_11 && b358_19 && b359_67 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 1191;
}
if(b356_52 && b357_7 && b358_55 && b359_43 && b360_2 && b361_52 && b362_19 && b363_16) {
pattern_id = 1192;
}
if(b360_29 && b361_61 && b362_2 && b363_32) {
pattern_id = 1193;
}
if(b359_52 && b360_64 && b361_54 && b362_11 && b363_47) {
pattern_id = 1194;
}
if(b356_52 && b357_60 && b358_46 && b359_3 && b360_52 && b361_7 && b362_52 && b363_17) {
pattern_id = 1195;
}
if(b358_50 && b359_66 && b360_15 && b361_7 && b362_15 && b363_6) {
pattern_id = 1196;
}
if(b363_12) {
pattern_id = 1197;
}
if(b261_2 && b262_2 && b263_2 && b264_2 && b265_2 && b266_2 && b267_2 && b268_2 && b269_2 && b270_2 && b271_2 && b272_2 && b273_2 && b274_2 && b275_2 && b276_2 && b277_2 && b278_2 && b279_2 && b280_4 && b281_4 && b282_3 && b283_4 && b284_1 && b285_4 && b286_4 && b287_3 && b288_5 && b289_5 && b290_4 && b291_4 && b292_4 && b293_6 && b294_5 && b295_3 && b296_4 && b297_4 && b298_2 && b299_7 && b300_2 && b301_3 && b302_6 && b303_6 && b304_4 && b305_6 && b306_3 && b307_3 && b308_4 && b309_3 && b310_2 && b311_6 && b312_3 && b313_4 && b314_14 && b315_3 && b316_3 && b317_4 && b318_5 && b319_2 && b320_3 && b321_5 && b322_19 && b323_16 && b324_4 && b325_2 && b326_12 && b327_22 && b328_4 && b329_8 && b330_27 && b331_4 && b332_3 && b333_35 && b334_8 && b335_39 && b336_7 && b337_1 && b338_7 && b339_2 && b340_2 && b341_46 && b342_3 && b343_1 && b344_45 && b345_3 && b346_1 && b347_4 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_61 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_50 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 1198;
}
if(b362_1 && b363_12) {
pattern_id = 1199;
}
if(b338_2 && b339_14 && b340_16 && b341_10 && b342_12 && b343_16 && b344_16 && b345_18 && b346_6 && b347_14 && b348_17 && b349_19 && b350_24 && b351_24 && b352_23 && b353_30 && b354_28 && b355_10 && b356_29 && b357_37 && b358_21 && b359_43 && b360_40 && b361_44 && b362_15 && b363_47) {
pattern_id = 1200;
}
if(b332_3 && b333_7 && b334_7 && b335_37 && b336_52 && b337_56 && b338_7 && b339_58 && b340_58 && b341_7 && b342_19 && b343_39 && b344_21 && b345_35 && b346_21 && b347_35 && b348_55 && b349_24 && b350_8 && b351_68 && b352_62 && b353_46 && b354_44 && b355_16 && b356_6 && b357_51 && b358_60 && b359_17 && b360_8 && b361_39 && b362_44 && b363_70) {
pattern_id = 1201;
}
if(b328_9 && b329_12 && b330_34 && b331_33 && b332_11 && b333_17 && b334_40 && b335_16 && b336_39 && b337_2 && b338_24 && b339_26 && b340_48 && b341_15 && b342_12 && b343_44 && b344_16 && b345_57 && b346_16 && b347_16 && b348_7 && b349_10 && b350_20 && b351_33 && b352_19 && b353_61 && b354_13 && b355_17 && b356_13 && b357_48 && b358_42 && b359_18 && b360_5 && b361_9 && b362_3 && b363_12) {
pattern_id = 1202;
}
if(b331_1 && b332_9 && b333_2 && b334_1 && b335_11 && b336_2 && b337_1 && b338_23 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_23 && b345_3 && b346_1 && b347_51 && b348_10 && b349_43 && b350_57 && b351_48 && b352_40 && b353_1 && b354_25 && b355_23 && b356_13 && b357_48 && b358_28 && b359_30 && b360_3 && b361_1 && b362_32 && b363_1) {
pattern_id = 1203;
}
if(b358_4 && b359_8 && b360_49 && b361_37 && b362_25 && b363_35) {
pattern_id = 1204;
}
if(b363_36) {
pattern_id = 1205;
}
if(b342_20 && b343_6 && b344_18 && b345_22 && b346_23 && b347_22 && b348_10 && b349_28 && b350_10 && b351_2 && b352_25 && b353_11 && b354_16 && b355_26 && b356_18 && b357_4 && b358_16 && b359_3 && b360_28 && b361_26 && b362_9 && b363_26) {
pattern_id = 1206;
}
if(b360_21 && b361_20 && b362_21 && b363_19) {
pattern_id = 1207;
}
if(b355_30 && b356_62 && b357_1 && b358_41 && b359_14 && b360_1 && b361_43 && b362_34 && b363_1) {
pattern_id = 1208;
}
if(b329_3 && b330_4 && b331_3 && b332_3 && b333_5 && b334_4 && b335_5 && b336_2 && b337_1 && b338_5 && b339_2 && b340_5 && b341_4 && b342_3 && b343_4 && b344_4 && b345_3 && b346_6 && b347_7 && b348_4 && b349_8 && b350_7 && b351_2 && b352_10 && b353_14 && b354_15 && b355_21 && b356_21 && b357_1 && b358_29 && b359_28 && b360_3 && b361_14 && b362_1 && b363_1) {
pattern_id = 1209;
}
if(b328_3 && b329_1 && b330_3 && b331_1 && b332_1 && b333_4 && b334_1 && b335_4 && b336_5 && b337_5 && b338_4 && b339_5 && b340_4 && b341_1 && b342_7 && b343_5 && b344_1 && b345_6 && b346_5 && b347_6 && b348_7 && b349_7 && b350_9 && b351_8 && b352_5 && b353_13 && b354_14 && b355_20 && b356_20 && b357_23 && b358_28 && b359_18 && b360_3 && b361_31 && b362_1 && b363_1) {
pattern_id = 1210;
}
if(b361_20 && b362_1 && b363_12) {
pattern_id = 1211;
}
if(b357_53 && b358_1 && b359_14 && b360_3 && b361_20 && b362_1 && b363_1) {
pattern_id = 1212;
}
if(b339_19 && b340_16 && b341_46 && b342_3 && b343_57 && b344_8 && b345_48 && b346_31 && b347_50 && b348_41 && b349_31 && b350_3 && b351_43 && b352_21 && b353_17 && b354_27 && b355_63 && b356_11 && b357_9 && b358_4 && b359_14 && b360_18 && b361_26 && b362_20 && b363_29) {
pattern_id = 1213;
}
if(b328_1 && b329_1 && b330_1 && b331_1 && b332_1 && b333_1 && b334_1 && b335_1 && b336_1 && b337_1 && b338_1 && b339_1 && b340_1 && b341_1 && b342_1 && b343_1 && b344_1 && b345_1 && b346_1 && b347_1 && b348_1 && b349_1 && b350_1 && b351_1 && b352_1 && b353_1 && b354_1 && b355_1 && b356_1 && b357_1 && b358_1 && b359_1 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 1214;
}
if(b352_18 && b353_11 && b354_59 && b355_31 && b356_18 && b357_49 && b358_11 && b359_19 && b360_28 && b361_74 && b362_38 && b363_28) {
pattern_id = 1215;
}
if(b361_24 && b362_1 && b363_57) {
pattern_id = 1216;
}
if(b361_24 && b362_1 && b363_82) {
pattern_id = 1217;
}
if(b324_3 && b325_2 && b326_4 && b327_2 && b328_4 && b329_5 && b330_7 && b331_4 && b332_6 && b333_1 && b334_8 && b335_8 && b336_7 && b337_8 && b338_9 && b339_2 && b340_2 && b341_9 && b342_4 && b343_9 && b344_9 && b345_11 && b346_5 && b347_10 && b348_10 && b349_12 && b350_13 && b351_2 && b352_14 && b353_3 && b354_15 && b355_8 && b356_18 && b357_25 && b358_32 && b359_11 && b360_33 && b361_1 && b362_5 && b363_35) {
pattern_id = 1218;
}
if(b361_36 && b362_1 && b363_59) {
pattern_id = 1219;
}
if(b357_48 && b358_41 && b359_40 && b360_13 && b361_54 && b362_11 && b363_22) {
pattern_id = 1220;
}
if(b360_46 && b361_24 && b362_1 && b363_4) {
pattern_id = 1221;
}
if(b355_36 && b356_38 && b357_23 && b358_23 && b359_50 && b360_2 && b361_40 && b362_28 && b363_36) {
pattern_id = 1222;
}
if(b361_29 && b362_30 && b363_37) {
pattern_id = 1223;
}
if(b351_16 && b352_17 && b353_11 && b354_24 && b355_12 && b356_11 && b357_29 && b358_13 && b359_6 && b360_44 && b361_45 && b362_51 && b363_33) {
pattern_id = 1224;
}
if(b324_14 && b325_4 && b326_20 && b327_10 && b328_9 && b329_6 && b330_1 && b331_1 && b332_1 && b333_6 && b334_7 && b335_1 && b336_1 && b337_5 && b338_1 && b339_26 && b340_16 && b341_1 && b342_1 && b343_1 && b344_7 && b345_32 && b346_9 && b347_3 && b348_1 && b349_7 && b350_35 && b351_2 && b352_7 && b353_3 && b354_15 && b355_26 && b356_11 && b357_1 && b358_42 && b359_48 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 1225;
}
if(b362_69 && b363_13) {
pattern_id = 1226;
}
if(b351_62 && b352_68 && b353_51 && b354_40 && b355_49 && b356_8 && b357_34 && b358_33 && b359_14 && b360_74 && b361_68 && b362_62 && b363_30) {
pattern_id = 1227;
}
if(b302_13 && b303_16 && b304_8 && b305_19 && b306_16 && b307_20 && b308_21 && b309_1 && b310_17 && b311_17 && b312_15 && b313_15 && b314_29 && b315_25 && b316_11 && b317_31 && b318_21 && b319_27 && b320_27 && b321_36 && b322_23 && b323_38 && b324_20 && b325_39 && b326_41 && b327_40 && b328_24 && b329_28 && b330_16 && b331_26 && b332_20 && b333_49 && b334_8 && b335_37 && b336_34 && b337_7 && b338_57 && b339_27 && b340_21 && b341_39 && b342_27 && b343_26 && b344_7 && b345_64 && b346_14 && b347_6 && b348_43 && b349_18 && b350_41 && b351_26 && b352_42 && b353_11 && b354_24 && b355_12 && b356_18 && b357_62 && b358_44 && b359_2 && b360_3 && b361_24 && b362_37 && b363_1) {
pattern_id = 1228;
}
if(b346_54 && b347_32 && b348_29 && b349_35 && b350_34 && b351_28 && b352_22 && b353_29 && b354_67 && b355_66 && b356_47 && b357_22 && b358_47 && b359_48 && b360_9 && b361_49 && b362_39 && b363_34) {
pattern_id = 1229;
}
if(b359_29 && b360_61 && b361_18 && b362_27 && b363_25) {
pattern_id = 1230;
}
if(b357_69 && b358_47 && b359_36 && b360_72 && b361_38 && b362_6 && b363_3) {
pattern_id = 1231;
}
if(b362_69 && b363_7) {
pattern_id = 1232;
}
if(b353_66 && b354_26 && b355_7 && b356_13 && b357_46 && b358_67 && b359_75 && b360_14 && b361_48 && b362_7 && b363_30) {
pattern_id = 1233;
}
if(b351_62 && b352_33 && b353_50 && b354_48 && b355_21 && b356_13 && b357_66 && b358_67 && b359_75 && b360_14 && b361_48 && b362_7 && b363_30) {
pattern_id = 1234;
}
if(b349_65 && b350_23 && b351_54 && b352_47 && b353_1 && b354_33 && b355_3 && b356_27 && b357_51 && b358_9 && b359_3 && b360_40 && b361_11 && b362_11 && b363_79) {
pattern_id = 1235;
}
if(b350_69 && b351_29 && b352_22 && b353_17 && b354_10 && b355_1 && b356_7 && b357_4 && b358_15 && b359_12 && b360_12 && b361_39 && b362_17 && b363_48) {
pattern_id = 1236;
}
if(b275_8 && b276_7 && b277_1 && b278_8 && b279_10 && b280_10 && b281_9 && b282_8 && b283_8 && b284_10 && b285_9 && b286_10 && b287_10 && b288_12 && b289_4 && b290_12 && b291_14 && b292_7 && b293_13 && b294_13 && b295_10 && b296_13 && b297_11 && b298_11 && b299_15 && b300_13 && b301_7 && b302_8 && b303_15 && b304_14 && b305_1 && b306_1 && b307_4 && b308_16 && b309_18 && b310_3 && b311_11 && b312_14 && b313_17 && b314_8 && b315_11 && b316_31 && b317_2 && b318_17 && b319_31 && b320_3 && b321_35 && b322_17 && b323_31 && b324_9 && b325_34 && b326_20 && b327_24 && b328_14 && b329_1 && b330_7 && b331_34 && b332_54 && b333_2 && b334_17 && b335_14 && b336_7 && b337_51 && b338_27 && b339_27 && b340_25 && b341_26 && b342_24 && b343_10 && b344_22 && b345_27 && b346_9 && b347_4 && b348_24 && b349_61 && b350_70 && b351_62 && b352_43 && b353_10 && b354_6 && b355_63 && b356_16 && b357_18 && b358_72 && b359_29 && b360_12 && b361_26 && b362_26 && b363_30) {
pattern_id = 1237;
}
if(b335_53 && b336_22 && b337_3 && b338_47 && b339_2 && b340_8 && b341_39 && b342_55 && b343_10 && b344_45 && b345_9 && b346_9 && b347_64 && b348_26 && b349_29 && b350_26 && b351_4 && b352_23 && b353_26 && b354_3 && b355_3 && b356_7 && b357_18 && b358_9 && b359_6 && b360_35 && b361_20 && b362_5 && b363_30) {
pattern_id = 1238;
}
if(b336_45 && b337_51 && b338_38 && b339_28 && b340_30 && b341_55 && b342_53 && b343_39 && b344_8 && b345_35 && b346_29 && b347_58 && b348_63 && b349_27 && b350_19 && b351_20 && b352_40 && b353_49 && b354_6 && b355_23 && b356_31 && b357_23 && b358_28 && b359_56 && b360_10 && b361_19 && b362_9 && b363_48) {
pattern_id = 1239;
}
if(b336_45 && b337_51 && b338_38 && b339_28 && b340_30 && b341_55 && b342_53 && b343_39 && b344_8 && b345_35 && b346_29 && b347_58 && b348_63 && b349_26 && b350_24 && b351_21 && b352_24 && b353_17 && b354_6 && b355_67 && b356_18 && b357_23 && b358_5 && b359_6 && b360_11 && b361_12 && b362_8 && b363_4) {
pattern_id = 1240;
}
if(b324_31 && b325_34 && b326_30 && b327_12 && b328_38 && b329_40 && b330_44 && b331_7 && b332_2 && b333_36 && b334_23 && b335_49 && b336_45 && b337_15 && b338_27 && b339_22 && b340_33 && b341_1 && b342_28 && b343_3 && b344_42 && b345_34 && b346_16 && b347_22 && b348_65 && b349_56 && b350_8 && b351_49 && b352_26 && b353_11 && b354_16 && b355_22 && b356_18 && b357_9 && b358_6 && b359_53 && b360_15 && b361_8 && b362_2 && b363_32) {
pattern_id = 1241;
}
if(b357_69 && b358_19 && b359_53 && b360_15 && b361_12 && b362_27 && b363_5) {
pattern_id = 1242;
}
if(b300_12 && b301_4 && b302_12 && b303_14 && b304_16 && b305_17 && b306_14 && b307_5 && b308_17 && b309_13 && b310_15 && b311_16 && b312_4 && b313_21 && b314_25 && b315_4 && b316_30 && b317_30 && b318_25 && b319_30 && b320_3 && b321_6 && b322_36 && b323_16 && b324_23 && b325_3 && b326_11 && b327_39 && b328_26 && b329_45 && b330_22 && b331_6 && b332_52 && b333_2 && b334_7 && b335_2 && b336_7 && b337_9 && b338_2 && b339_15 && b340_15 && b341_33 && b342_4 && b343_22 && b344_62 && b345_11 && b346_15 && b347_3 && b348_13 && b349_15 && b350_14 && b351_9 && b352_11 && b353_21 && b354_71 && b355_23 && b356_31 && b357_23 && b358_29 && b359_23 && b360_60 && b361_70 && b362_7 && b363_44) {
pattern_id = 1243;
}
if(b332_51 && b333_2 && b334_53 && b335_6 && b336_7 && b337_7 && b338_55 && b339_26 && b340_9 && b341_11 && b342_46 && b343_14 && b344_7 && b345_65 && b346_40 && b347_38 && b348_60 && b349_15 && b350_69 && b351_2 && b352_64 && b353_13 && b354_15 && b355_23 && b356_38 && b357_8 && b358_28 && b359_6 && b360_46 && b361_31 && b362_5 && b363_30) {
pattern_id = 1244;
}
if(b355_32 && b356_11 && b357_5 && b358_34 && b359_5 && b360_23 && b361_32 && b362_54 && b363_43) {
pattern_id = 1245;
}
if(b342_55 && b343_6 && b344_7 && b345_9 && b346_15 && b347_6 && b348_17 && b349_43 && b350_19 && b351_45 && b352_23 && b353_29 && b354_15 && b355_22 && b356_31 && b357_4 && b358_10 && b359_36 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 1246;
}
if(b358_40 && b359_14 && b360_33 && b361_45 && b362_1 && b363_20) {
pattern_id = 1247;
}
if(b352_26 && b353_3 && b354_14 && b355_32 && b356_4 && b357_14 && b358_40 && b359_14 && b360_33 && b361_45 && b362_1 && b363_20) {
pattern_id = 1248;
}
if(b349_20 && b350_7 && b351_1 && b352_26 && b353_3 && b354_7 && b355_31 && b356_16 && b357_35 && b358_44 && b359_24 && b360_10 && b361_12 && b362_8 && b363_26) {
pattern_id = 1249;
}
if(b362_48 && b363_48) {
pattern_id = 1250;
}
if(b348_18 && b349_20 && b350_25 && b351_25 && b352_26 && b353_31 && b354_29 && b355_32 && b356_40 && b357_38 && b358_40 && b359_44 && b360_41 && b361_45 && b362_48 && b363_48) {
pattern_id = 1251;
}
if(b337_54 && b338_65 && b339_18 && b340_37 && b341_28 && b342_18 && b343_64 && b344_44 && b345_31 && b346_30 && b347_22 && b348_67 && b349_72 && b350_48 && b351_24 && b352_23 && b353_40 && b354_12 && b355_49 && b356_8 && b357_74 && b358_70 && b359_54 && b360_23 && b361_21 && b362_47 && b363_3) {
pattern_id = 1252;
}
if(b314_45 && b315_41 && b316_1 && b317_46 && b318_30 && b319_27 && b320_49 && b321_13 && b322_15 && b323_20 && b324_12 && b325_32 && b326_14 && b327_51 && b328_22 && b329_2 && b330_41 && b331_54 && b332_45 && b333_27 && b334_22 && b335_28 && b336_14 && b337_29 && b338_49 && b339_25 && b340_31 && b341_67 && b342_66 && b343_63 && b344_13 && b345_4 && b346_10 && b347_29 && b348_24 && b349_26 && b350_42 && b351_29 && b352_25 && b353_56 && b354_3 && b355_14 && b356_82 && b357_76 && b358_59 && b359_35 && b360_14 && b361_3 && b362_43 && b363_15) {
pattern_id = 1253;
}
if(b356_40 && b357_46 && b358_22 && b359_48 && b360_50 && b361_24 && b362_43 && b363_48) {
pattern_id = 1254;
}
if(b363_30) {
pattern_id = 1255;
}
if(b355_67 && b356_40 && b357_1 && b358_33 && b359_48 && b360_3 && b361_18 && b362_18 && b363_57) {
pattern_id = 1256;
}
if(b354_53 && b355_54 && b356_61 && b357_50 && b358_52 && b359_64 && b360_61 && b361_59 && b362_59 && b363_33) {
pattern_id = 1257;
}
if(b349_53 && b350_21 && b351_5 && b352_40 && b353_49 && b354_6 && b355_1 && b356_37 && b357_15 && b358_16 && b359_57 && b360_40 && b361_8 && b362_20 && b363_6) {
pattern_id = 1258;
}
if(b351_55 && b352_28 && b353_38 && b354_43 && b355_3 && b356_37 && b357_15 && b358_16 && b359_57 && b360_40 && b361_8 && b362_20 && b363_6) {
pattern_id = 1259;
}
if(b351_55 && b352_57 && b353_8 && b354_28 && b355_1 && b356_45 && b357_18 && b358_9 && b359_55 && b360_13 && b361_52 && b362_9 && b363_22) {
pattern_id = 1260;
}
if(b355_54 && b356_45 && b357_28 && b358_58 && b359_22 && b360_32 && b361_46 && b362_61 && b363_7) {
pattern_id = 1261;
}
if(b355_54 && b356_14 && b357_18 && b358_2 && b359_26 && b360_19 && b361_50 && b362_9 && b363_48) {
pattern_id = 1262;
}
if(b360_61 && b361_16 && b362_56 && b363_62) {
pattern_id = 1263;
}
if(b353_24 && b354_34 && b355_13 && b356_35 && b357_10 && b358_2 && b359_67 && b360_12 && b361_27 && b362_27 && b363_47) {
pattern_id = 1264;
}
if(b351_55 && b352_46 && b353_17 && b354_40 && b355_10 && b356_7 && b357_41 && b358_17 && b359_67 && b360_15 && b361_8 && b362_20 && b363_26) {
pattern_id = 1265;
}
if(b351_55 && b352_46 && b353_17 && b354_40 && b355_14 && b356_7 && b357_13 && b358_9 && b359_19 && b360_57 && b361_15 && b362_9 && b363_8) {
pattern_id = 1266;
}
if(b352_58 && b353_23 && b354_27 && b355_29 && b356_1 && b357_6 && b358_37 && b359_7 && b360_57 && b361_15 && b362_9 && b363_8) {
pattern_id = 1267;
}
if(b350_50 && b351_44 && b352_22 && b353_51 && b354_21 && b355_16 && b356_9 && b357_49 && b358_6 && b359_56 && b360_17 && b361_7 && b362_44 && b363_6) {
pattern_id = 1268;
}
if(b352_58 && b353_23 && b354_27 && b355_29 && b356_15 && b357_19 && b358_9 && b359_67 && b360_28 && b361_17 && b362_15 && b363_47) {
pattern_id = 1269;
}
if(b352_58 && b353_23 && b354_27 && b355_29 && b356_17 && b357_18 && b358_9 && b359_67 && b360_12 && b361_26 && b362_35 && b363_41) {
pattern_id = 1270;
}
if(b352_58 && b353_23 && b354_27 && b355_29 && b356_17 && b357_18 && b358_9 && b359_67 && b360_13 && b361_44 && b362_35 && b363_46) {
pattern_id = 1271;
}
if(b349_53 && b350_43 && b351_20 && b352_56 && b353_41 && b354_3 && b355_11 && b356_29 && b357_32 && b358_14 && b359_67 && b360_26 && b361_26 && b362_20 && b363_18) {
pattern_id = 1272;
}
if(b363_42) {
pattern_id = 1273;
}
if(b362_41 && b363_42) {
pattern_id = 1274;
}
if(b343_21 && b344_20 && b345_24 && b346_24 && b347_1 && b348_27 && b349_30 && b350_32 && b351_4 && b352_33 && b353_2 && b354_4 && b355_34 && b356_3 && b357_39 && b358_45 && b359_46 && b360_22 && b361_49 && b362_40 && b363_48) {
pattern_id = 1275;
}
if(b329_57 && b330_4 && b331_6 && b332_18 && b333_5 && b334_1 && b335_37 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_73 && b362_13 && b363_1) {
pattern_id = 1276;
}
if(b363_20) {
pattern_id = 1277;
}
if(b354_7 && b355_12 && b356_13 && b357_14 && b358_5 && b359_9 && b360_22 && b361_4 && b362_22 && b363_20) {
pattern_id = 1278;
}
if(b348_31 && b349_4 && b350_16 && b351_30 && b352_20 && b353_36 && b354_7 && b355_12 && b356_13 && b357_14 && b358_5 && b359_9 && b360_22 && b361_4 && b362_22 && b363_20) {
pattern_id = 1279;
}
if(b333_34 && b334_15 && b335_19 && b336_34 && b337_14 && b338_19 && b339_41 && b340_15 && b341_6 && b342_2 && b343_18 && b344_15 && b345_27 && b346_18 && b347_10 && b348_31 && b349_4 && b350_16 && b351_30 && b352_20 && b353_36 && b354_7 && b355_12 && b356_13 && b357_14 && b358_5 && b359_9 && b360_22 && b361_4 && b362_22 && b363_20) {
pattern_id = 1280;
}
if(b332_17 && b333_4 && b334_6 && b335_18 && b336_13 && b337_13 && b338_18 && b339_15 && b340_17 && b341_18 && b342_17 && b343_17 && b344_17 && b345_19 && b346_19 && b347_17 && b348_20 && b349_22 && b350_23 && b351_27 && b352_27 && b353_33 && b354_31 && b355_12 && b356_21 && b357_8 && b358_41 && b359_22 && b360_42 && b361_46 && b362_50 && b363_50) {
pattern_id = 1281;
}
if(b353_36 && b354_18 && b355_31 && b356_72 && b357_68 && b358_41 && b359_9 && b360_9 && b361_38 && b362_4 && b363_76) {
pattern_id = 1282;
}
if(b351_30 && b352_12 && b353_39 && b354_37 && b355_7 && b356_3 && b357_39 && b358_34 && b359_27 && b360_22 && b361_48 && b362_10 && b363_7) {
pattern_id = 1283;
}
if(b356_13 && b357_22 && b358_26 && b359_27 && b360_14 && b361_31 && b362_29 && b363_31) {
pattern_id = 1284;
}
if(b360_22 && b361_25 && b362_55 && b363_67) {
pattern_id = 1285;
}
if(b360_22 && b361_10 && b362_10 && b363_35) {
pattern_id = 1286;
}
if(b360_22 && b361_10 && b362_39 && b363_34) {
pattern_id = 1287;
}
if(b358_5 && b359_35 && b360_23 && b361_38 && b362_23 && b363_44) {
pattern_id = 1288;
}
if(b351_30 && b352_47 && b353_68 && b354_7 && b355_34 && b356_70 && b357_12 && b358_62 && b359_54 && b360_48 && b361_38 && b362_43 && b363_61) {
pattern_id = 1289;
}
if(b343_18 && b344_49 && b345_60 && b346_5 && b347_40 && b348_10 && b349_1 && b350_7 && b351_2 && b352_1 && b353_37 && b354_12 && b355_3 && b356_18 && b357_23 && b358_4 && b359_6 && b360_15 && b361_7 && b362_15 && b363_6) {
pattern_id = 1290;
}
if(b360_22 && b361_5 && b362_43 && b363_71) {
pattern_id = 1291;
}
if(b352_20 && b353_35 && b354_63 && b355_55 && b356_39 && b357_58 && b358_34 && b359_69 && b360_60 && b361_4 && b362_43 && b363_34) {
pattern_id = 1292;
}
if(b356_13 && b357_61 && b358_34 && b359_70 && b360_4 && b361_62 && b362_45 && b363_67) {
pattern_id = 1293;
}
if(b319_6 && b320_32 && b321_10 && b322_15 && b323_34 && b324_9 && b325_37 && b326_40 && b327_25 && b328_20 && b329_32 && b330_18 && b331_28 && b332_35 && b333_48 && b334_8 && b335_37 && b336_34 && b337_7 && b338_1 && b339_27 && b340_21 && b341_8 && b342_25 && b343_3 && b344_5 && b345_4 && b346_29 && b347_65 && b348_4 && b349_66 && b350_1 && b351_15 && b352_38 && b353_11 && b354_2 && b355_32 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1294;
}
if(b332_17 && b333_20 && b334_16 && b335_28 && b336_18 && b337_41 && b338_52 && b339_31 && b340_33 && b341_42 && b342_42 && b343_15 && b344_26 && b345_50 && b346_21 && b347_61 && b348_4 && b349_31 && b350_22 && b351_33 && b352_10 && b353_10 && b354_15 && b355_37 && b356_21 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1295;
}
if(b250_3 && b251_3 && b252_3 && b253_3 && b254_4 && b255_4 && b256_4 && b257_4 && b258_5 && b259_4 && b260_5 && b261_5 && b262_6 && b263_5 && b264_5 && b265_6 && b266_5 && b267_4 && b268_6 && b269_6 && b270_5 && b271_5 && b272_5 && b273_6 && b274_8 && b275_7 && b276_6 && b277_9 && b278_7 && b279_9 && b280_9 && b281_8 && b282_7 && b283_1 && b284_8 && b285_9 && b286_7 && b287_7 && b288_10 && b289_10 && b290_8 && b291_10 && b292_8 && b293_10 && b294_9 && b295_8 && b296_9 && b297_6 && b298_5 && b299_12 && b300_9 && b301_1 && b302_5 && b303_10 && b304_14 && b305_2 && b306_9 && b307_16 && b308_6 && b309_16 && b310_12 && b311_4 && b312_9 && b313_18 && b314_24 && b315_21 && b316_1 && b317_26 && b318_10 && b319_18 && b320_30 && b321_31 && b322_31 && b323_38 && b324_35 && b325_2 && b326_10 && b327_38 && b328_12 && b329_42 && b330_47 && b331_1 && b332_29 && b333_35 && b334_52 && b335_36 && b336_37 && b337_27 && b338_49 && b339_18 && b340_28 && b341_25 && b342_25 && b343_41 && b344_65 && b345_63 && b346_32 && b347_62 && b348_10 && b349_33 && b350_20 && b351_2 && b352_51 && b353_31 && b354_11 && b355_18 && b356_38 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1296;
}
if(b328_14 && b329_2 && b330_19 && b331_21 && b332_19 && b333_33 && b334_8 && b335_37 && b336_34 && b337_6 && b338_5 && b339_1 && b340_9 && b341_69 && b342_26 && b343_66 && b344_7 && b345_1 && b346_56 && b347_1 && b348_1 && b349_4 && b350_1 && b351_52 && b352_20 && b353_51 && b354_56 && b355_8 && b356_73 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 1297;
}
if(b355_12 && b356_9 && b357_44 && b358_46 && b359_13 && b360_18 && b361_26 && b362_57 && b363_62) {
pattern_id = 1298;
}
if(b342_2 && b343_2 && b344_2 && b345_2 && b346_2 && b347_1 && b348_2 && b349_3 && b350_3 && b351_4 && b352_4 && b353_6 && b354_6 && b355_10 && b356_11 && b357_12 && b358_2 && b359_11 && b360_14 && b361_11 && b362_9 && b363_10) {
pattern_id = 1299;
}
if(b358_5 && b359_42 && b360_19 && b361_44 && b362_52 && b363_11) {
pattern_id = 1300;
}
if(b356_13 && b357_9 && b358_12 && b359_57 && b360_40 && b361_8 && b362_20 && b363_6) {
pattern_id = 1301;
}
if(b337_14 && b338_48 && b339_22 && b340_22 && b341_8 && b342_25 && b343_3 && b344_5 && b345_21 && b346_44 && b347_34 && b348_26 && b349_25 && b350_22 && b351_6 && b352_10 && b353_27 && b354_8 && b355_44 && b356_9 && b357_10 && b358_6 && b359_26 && b360_8 && b361_54 && b362_44 && b363_25) {
pattern_id = 1302;
}
if(b347_10 && b348_51 && b349_44 && b350_37 && b351_34 && b352_1 && b353_1 && b354_54 && b355_2 && b356_7 && b357_35 && b358_37 && b359_21 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1303;
}
if(b341_6 && b342_41 && b343_3 && b344_2 && b345_48 && b346_10 && b347_29 && b348_62 && b349_27 && b350_12 && b351_28 && b352_4 && b353_27 && b354_15 && b355_37 && b356_13 && b357_1 && b358_23 && b359_36 && b360_19 && b361_41 && b362_12 && b363_52) {
pattern_id = 1304;
}
if(b358_13 && b359_22 && b360_22 && b361_60 && b362_4 && b363_31) {
pattern_id = 1305;
}
if(b362_37 && b363_69) {
pattern_id = 1306;
}
if(b351_11 && b352_31 && b353_12 && b354_15 && b355_4 && b356_4 && b357_4 && b358_4 && b359_4 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 1307;
}
if(b349_2 && b350_2 && b351_2 && b352_2 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_4 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 1308;
}
if(b358_13 && b359_27 && b360_22 && b361_3 && b362_4 && b363_45) {
pattern_id = 1309;
}
if(b351_11 && b352_27 && b353_59 && b354_38 && b355_34 && b356_11 && b357_67 && b358_24 && b359_41 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1310;
}
if(b341_17 && b342_19 && b343_20 && b344_1 && b345_21 && b346_22 && b347_21 && b348_25 && b349_27 && b350_22 && b351_24 && b352_5 && b353_37 && b354_36 && b355_20 && b356_32 && b357_35 && b358_17 && b359_13 && b360_30 && b361_12 && b362_27 && b363_5) {
pattern_id = 1311;
}
if(b354_18 && b355_2 && b356_7 && b357_6 && b358_17 && b359_13 && b360_45 && b361_12 && b362_12 && b363_25) {
pattern_id = 1312;
}
if(b356_21 && b357_1 && b358_4 && b359_14 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 1313;
}
if(b360_60 && b361_4 && b362_55 && b363_4) {
pattern_id = 1314;
}
if(b360_60 && b361_4 && b362_39 && b363_20) {
pattern_id = 1315;
}
if(b340_5 && b341_13 && b342_35 && b343_14 && b344_24 && b345_8 && b346_28 && b347_20 && b348_37 && b349_8 && b350_9 && b351_50 && b352_14 && b353_13 && b354_56 && b355_31 && b356_22 && b357_8 && b358_48 && b359_48 && b360_60 && b361_31 && b362_6 && b363_66) {
pattern_id = 1316;
}
if(b361_31 && b362_7 && b363_45) {
pattern_id = 1317;
}
if(b330_3 && b331_23 && b332_23 && b333_23 && b334_29 && b335_29 && b336_26 && b337_29 && b338_11 && b339_30 && b340_5 && b341_32 && b342_33 && b343_33 && b344_36 && b345_8 && b346_38 && b347_37 && b348_19 && b349_32 && b350_23 && b351_41 && b352_9 && b353_14 && b354_47 && b355_52 && b356_30 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1318;
}
if(b342_35 && b343_11 && b344_38 && b345_41 && b346_40 && b347_39 && b348_46 && b349_46 && b350_21 && b351_13 && b352_14 && b353_4 && b354_49 && b355_8 && b356_43 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1319;
}
if(b342_35 && b343_11 && b344_38 && b345_41 && b346_40 && b347_39 && b348_46 && b349_46 && b350_14 && b351_9 && b352_14 && b353_4 && b354_49 && b355_8 && b356_43 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1320;
}
if(b339_26 && b340_11 && b341_31 && b342_32 && b343_32 && b344_33 && b345_19 && b346_37 && b347_36 && b348_44 && b349_45 && b350_45 && b351_1 && b352_38 && b353_13 && b354_14 && b355_52 && b356_25 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1321;
}
if(b339_26 && b340_11 && b341_31 && b342_32 && b343_32 && b344_33 && b345_19 && b346_37 && b347_36 && b348_44 && b349_45 && b350_45 && b351_1 && b352_38 && b353_13 && b354_37 && b355_7 && b356_3 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1322;
}
if(b339_26 && b340_11 && b341_31 && b342_32 && b343_32 && b344_33 && b345_19 && b346_37 && b347_40 && b348_44 && b349_45 && b350_45 && b351_1 && b352_38 && b353_13 && b354_37 && b355_7 && b356_3 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1323;
}
if(b333_10 && b334_19 && b335_30 && b336_11 && b337_31 && b338_35 && b339_32 && b340_34 && b341_33 && b342_6 && b343_34 && b344_39 && b345_43 && b346_39 && b347_36 && b348_47 && b349_46 && b350_46 && b351_13 && b352_9 && b353_4 && b354_32 && b355_52 && b356_30 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1324;
}
if(b339_26 && b340_11 && b341_31 && b342_32 && b343_32 && b344_33 && b345_19 && b346_37 && b347_41 && b348_44 && b349_22 && b350_47 && b351_3 && b352_50 && b353_39 && b354_7 && b355_53 && b356_56 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1325;
}
if(b332_11 && b333_17 && b334_24 && b335_22 && b336_11 && b337_12 && b338_35 && b339_31 && b340_32 && b341_5 && b342_34 && b343_29 && b344_37 && b345_40 && b346_39 && b347_38 && b348_31 && b349_45 && b350_16 && b351_47 && b352_48 && b353_35 && b354_48 && b355_31 && b356_39 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1326;
}
if(b333_10 && b334_19 && b335_26 && b336_11 && b337_8 && b338_21 && b339_5 && b340_15 && b341_29 && b342_2 && b343_29 && b344_33 && b345_37 && b346_34 && b347_20 && b348_44 && b349_38 && b350_16 && b351_47 && b352_33 && b353_54 && b354_30 && b355_39 && b356_37 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1327;
}
if(b333_10 && b334_19 && b335_26 && b336_11 && b337_8 && b338_21 && b339_5 && b340_15 && b341_29 && b342_2 && b343_29 && b344_33 && b345_37 && b346_34 && b347_20 && b348_44 && b349_42 && b350_23 && b351_13 && b352_47 && b353_52 && b354_7 && b355_50 && b356_39 && b357_1 && b358_1 && b359_61 && b360_1 && b361_20 && b362_34 && b363_1) {
pattern_id = 1328;
}
if(b361_31 && b362_33 && b363_44) {
pattern_id = 1329;
}
if(b357_8 && b358_47 && b359_47 && b360_32 && b361_38 && b362_6 && b363_3) {
pattern_id = 1330;
}
if(b360_60 && b361_21 && b362_39 && b363_73) {
pattern_id = 1331;
}
if(b358_48 && b359_27 && b360_43 && b361_4 && b362_43 && b363_34) {
pattern_id = 1332;
}
if(b361_31 && b362_42 && b363_44) {
pattern_id = 1333;
}
if(b359_48 && b360_49 && b361_43 && b362_40 && b363_4) {
pattern_id = 1334;
}
if(b350_9 && b351_28 && b352_54 && b353_49 && b354_20 && b355_55 && b356_29 && b357_6 && b358_2 && b359_10 && b360_13 && b361_23 && b362_9 && b363_48) {
pattern_id = 1335;
}
if(b345_8 && b346_20 && b347_18 && b348_23 && b349_25 && b350_3 && b351_9 && b352_23 && b353_29 && b354_34 && b355_25 && b356_41 && b357_40 && b358_43 && b359_11 && b360_4 && b361_44 && b362_14 && b363_43) {
pattern_id = 1336;
}
if(b347_20 && b348_15 && b349_17 && b350_30 && b351_29 && b352_29 && b353_38 && b354_4 && b355_33 && b356_6 && b357_41 && b358_44 && b359_43 && b360_27 && b361_39 && b362_9 && b363_26) {
pattern_id = 1337;
}
if(b349_8 && b350_36 && b351_7 && b352_29 && b353_49 && b354_25 && b355_3 && b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 1338;
}
if(b341_13 && b342_5 && b343_26 && b344_42 && b345_17 && b346_46 && b347_34 && b348_57 && b349_30 && b350_8 && b351_35 && b352_22 && b353_37 && b354_8 && b355_15 && b356_7 && b357_35 && b358_37 && b359_21 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1339;
}
if(b348_37 && b349_25 && b350_22 && b351_26 && b352_23 && b353_27 && b354_6 && b355_29 && b356_39 && b357_3 && b358_16 && b359_3 && b360_12 && b361_26 && b362_20 && b363_29) {
pattern_id = 1340;
}
if(b350_9 && b351_34 && b352_29 && b353_29 && b354_3 && b355_16 && b356_7 && b357_36 && b358_29 && b359_13 && b360_30 && b361_50 && b362_11 && b363_32) {
pattern_id = 1341;
}
if(b339_26 && b340_24 && b341_42 && b342_24 && b343_24 && b344_35 && b345_4 && b346_16 && b347_67 && b348_11 && b349_39 && b350_52 && b351_26 && b352_42 && b353_70 && b354_4 && b355_30 && b356_23 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1342;
}
if(b338_25 && b339_3 && b340_3 && b341_34 && b342_27 && b343_26 && b344_42 && b345_55 && b346_24 && b347_22 && b348_38 && b349_48 && b350_12 && b351_43 && b352_69 && b353_12 && b354_17 && b355_36 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1343;
}
if(b346_28 && b347_5 && b348_38 && b349_44 && b350_26 && b351_7 && b352_6 && b353_51 && b354_38 && b355_1 && b356_28 && b357_11 && b358_11 && b359_16 && b360_76 && b361_13 && b362_54 && b363_37) {
pattern_id = 1344;
}
if(b345_8 && b346_22 && b347_18 && b348_34 && b349_31 && b350_22 && b351_26 && b352_56 && b353_14 && b354_3 && b355_16 && b356_50 && b357_6 && b358_54 && b359_80 && b360_1 && b361_37 && b362_32 && b363_37) {
pattern_id = 1345;
}
if(b338_25 && b339_3 && b340_3 && b341_34 && b342_27 && b343_26 && b344_42 && b345_55 && b346_24 && b347_22 && b348_38 && b349_48 && b350_12 && b351_43 && b352_69 && b353_12 && b354_16 && b355_4 && b356_42 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1346;
}
if(b346_28 && b347_5 && b348_38 && b349_44 && b350_26 && b351_7 && b352_6 && b353_51 && b354_38 && b355_1 && b356_28 && b357_11 && b358_11 && b359_16 && b360_76 && b361_13 && b362_21 && b363_12) {
pattern_id = 1347;
}
if(b340_5 && b341_23 && b342_25 && b343_3 && b344_34 && b345_36 && b346_42 && b347_27 && b348_60 && b349_31 && b350_22 && b351_22 && b352_6 && b353_56 && b354_72 && b355_20 && b356_64 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1348;
}
if(b346_28 && b347_5 && b348_38 && b349_44 && b350_26 && b351_7 && b352_6 && b353_51 && b354_38 && b355_1 && b356_28 && b357_11 && b358_11 && b359_16 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1349;
}
if(b339_26 && b340_24 && b341_42 && b342_24 && b343_24 && b344_35 && b345_4 && b346_16 && b347_48 && b348_5 && b349_27 && b350_22 && b351_35 && b352_49 && b353_49 && b354_36 && b355_29 && b356_39 && b357_3 && b358_16 && b359_3 && b360_12 && b361_26 && b362_20 && b363_29) {
pattern_id = 1350;
}
if(b352_14 && b353_37 && b354_41 && b355_3 && b356_8 && b357_3 && b358_11 && b359_67 && b360_9 && b361_67 && b362_56 && b363_5) {
pattern_id = 1351;
}
if(b339_26 && b340_24 && b341_42 && b342_24 && b343_24 && b344_35 && b345_4 && b346_16 && b347_48 && b348_41 && b349_43 && b350_26 && b351_2 && b352_35 && b353_36 && b354_4 && b355_22 && b356_4 && b357_1 && b358_19 && b359_42 && b360_19 && b361_50 && b362_9 && b363_28) {
pattern_id = 1352;
}
if(b335_6 && b336_15 && b337_47 && b338_38 && b339_18 && b340_3 && b341_34 && b342_16 && b343_34 && b344_54 && b345_34 && b346_21 && b347_6 && b348_50 && b349_4 && b350_3 && b351_36 && b352_7 && b353_11 && b354_6 && b355_1 && b356_66 && b357_6 && b358_50 && b359_7 && b360_26 && b361_12 && b362_12 && b363_10) {
pattern_id = 1353;
}
if(b317_28 && b318_29 && b319_28 && b320_31 && b321_24 && b322_34 && b323_20 && b324_36 && b325_36 && b326_33 && b327_31 && b328_24 && b329_1 && b330_34 && b331_13 && b332_1 && b333_45 && b334_1 && b335_4 && b336_36 && b337_3 && b338_31 && b339_18 && b340_24 && b341_40 && b342_59 && b343_15 && b344_5 && b345_21 && b346_51 && b347_34 && b348_26 && b349_17 && b350_26 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1354;
}
if(b348_37 && b349_25 && b350_22 && b351_26 && b352_23 && b353_27 && b354_6 && b355_29 && b356_43 && b357_45 && b358_44 && b359_13 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1355;
}
if(b330_3 && b331_22 && b332_35 && b333_33 && b334_30 && b335_42 && b336_30 && b337_40 && b338_21 && b339_46 && b340_26 && b341_8 && b342_4 && b343_5 && b344_15 && b345_11 && b346_7 && b347_31 && b348_24 && b349_43 && b350_42 && b351_28 && b352_45 && b353_8 && b354_6 && b355_15 && b356_6 && b357_3 && b358_50 && b359_2 && b360_57 && b361_26 && b362_14 && b363_2) {
pattern_id = 1356;
}
if(b348_37 && b349_25 && b350_22 && b351_26 && b352_23 && b353_27 && b354_6 && b355_29 && b356_7 && b357_45 && b358_44 && b359_13 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1357;
}
if(b346_28 && b347_5 && b348_15 && b349_5 && b350_8 && b351_5 && b352_69 && b353_12 && b354_25 && b355_2 && b356_9 && b357_49 && b358_6 && b359_44 && b360_24 && b361_52 && b362_36 && b363_48) {
pattern_id = 1358;
}
if(b325_8 && b326_19 && b327_9 && b328_2 && b329_17 && b330_4 && b331_1 && b332_18 && b333_5 && b334_1 && b335_15 && b336_2 && b337_1 && b338_9 && b339_2 && b340_2 && b341_7 && b342_3 && b343_1 && b344_14 && b345_3 && b346_1 && b347_14 && b348_4 && b349_1 && b350_40 && b351_2 && b352_39 && b353_17 && b354_36 && b355_25 && b356_50 && b357_47 && b358_45 && b359_44 && b360_29 && b361_53 && b362_12 && b363_10) {
pattern_id = 1359;
}
if(b338_25 && b339_21 && b340_24 && b341_23 && b342_24 && b343_10 && b344_4 && b345_5 && b346_7 && b347_3 && b348_31 && b349_7 && b350_39 && b351_20 && b352_1 && b353_37 && b354_28 && b355_43 && b356_11 && b357_46 && b358_40 && b359_52 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 1360;
}
if(b280_2 && b281_2 && b282_2 && b283_2 && b284_2 && b285_2 && b286_2 && b287_2 && b288_2 && b289_2 && b290_2 && b291_2 && b292_2 && b293_2 && b294_2 && b295_2 && b296_2 && b297_2 && b298_2 && b299_2 && b300_2 && b301_2 && b302_2 && b303_2 && b304_2 && b305_2 && b306_2 && b307_2 && b308_2 && b309_2 && b310_2 && b311_2 && b312_2 && b313_2 && b314_2 && b315_2 && b316_2 && b317_3 && b318_3 && b319_2 && b320_3 && b321_2 && b322_3 && b323_3 && b324_4 && b325_4 && b326_5 && b327_5 && b328_4 && b329_7 && b330_1 && b331_4 && b332_11 && b333_9 && b334_5 && b335_12 && b336_1 && b337_6 && b338_13 && b339_4 && b340_6 && b341_7 && b342_12 && b343_6 && b344_12 && b345_6 && b346_7 && b347_8 && b348_6 && b349_9 && b350_11 && b351_3 && b352_11 && b353_20 && b354_20 && b355_15 && b356_28 && b357_21 && b358_2 && b359_16 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1361;
}
if(b360_33 && b361_38 && b362_55 && b363_34) {
pattern_id = 1362;
}
if(b358_41 && b359_22 && b360_25 && b361_38 && b362_43 && b363_34) {
pattern_id = 1363;
}
if(b357_22 && b358_42 && b359_46 && b360_43 && b361_48 && b362_7 && b363_4) {
pattern_id = 1364;
}
if(b356_37 && b357_27 && b358_8 && b359_48 && b360_37 && b361_42 && b362_37 && b363_34) {
pattern_id = 1365;
}
if(b358_41 && b359_22 && b360_67 && b361_48 && b362_31 && b363_82) {
pattern_id = 1366;
}
if(b352_12 && b353_59 && b354_26 && b355_61 && b356_4 && b357_23 && b358_4 && b359_14 && b360_16 && b361_1 && b362_1 && b363_36) {
pattern_id = 1367;
}
if(b323_10 && b324_1 && b325_9 && b326_14 && b327_3 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 1368;
}
if(b340_47 && b341_1 && b342_11 && b343_28 && b344_42 && b345_31 && b346_23 && b347_1 && b348_11 && b349_36 && b350_34 && b351_34 && b352_1 && b353_65 && b354_4 && b355_2 && b356_12 && b357_15 && b358_9 && b359_19 && b360_13 && b361_44 && b362_19 && b363_43) {
pattern_id = 1369;
}
if(b305_8 && b306_3 && b307_8 && b308_11 && b309_6 && b310_4 && b311_7 && b312_5 && b313_11 && b314_15 && b315_11 && b316_17 && b317_2 && b318_17 && b319_6 && b320_3 && b321_3 && b322_22 && b323_26 && b324_7 && b325_25 && b326_29 && b327_25 && b328_31 && b329_1 && b330_34 && b331_13 && b332_7 && b333_5 && b334_16 && b335_41 && b336_28 && b337_47 && b338_44 && b339_22 && b340_6 && b341_51 && b342_19 && b343_53 && b344_34 && b345_3 && b346_31 && b347_29 && b348_5 && b349_31 && b350_24 && b351_26 && b352_4 && b353_32 && b354_55 && b355_20 && b356_22 && b357_54 && b358_8 && b359_11 && b360_13 && b361_44 && b362_40 && b363_28) {
pattern_id = 1370;
}
if(b323_25 && b324_5 && b325_24 && b326_19 && b327_9 && b328_30 && b329_32 && b330_19 && b331_22 && b332_34 && b333_5 && b334_30 && b335_40 && b336_3 && b337_24 && b338_39 && b339_12 && b340_20 && b341_6 && b342_4 && b343_6 && b344_49 && b345_48 && b346_22 && b347_34 && b348_4 && b349_36 && b350_26 && b351_56 && b352_10 && b353_49 && b354_8 && b355_3 && b356_11 && b357_41 && b358_19 && b359_26 && b360_8 && b361_26 && b362_20 && b363_29) {
pattern_id = 1371;
}
if(b316_14 && b317_3 && b318_15 && b319_17 && b320_15 && b321_18 && b322_21 && b323_24 && b324_18 && b325_21 && b326_3 && b327_16 && b328_29 && b329_28 && b330_23 && b331_2 && b332_7 && b333_15 && b334_15 && b335_4 && b336_2 && b337_3 && b338_41 && b339_7 && b340_33 && b341_19 && b342_37 && b343_20 && b344_1 && b345_35 && b346_20 && b347_43 && b348_11 && b349_35 && b350_12 && b351_34 && b352_1 && b353_57 && b354_4 && b355_14 && b356_59 && b357_3 && b358_11 && b359_8 && b360_68 && b361_13 && b362_12 && b363_10) {
pattern_id = 1372;
}
if(b360_43 && b361_48 && b362_49 && b363_9) {
pattern_id = 1373;
}
if(b357_27 && b358_68 && b359_9 && b360_45 && b361_42 && b362_23 && b363_34) {
pattern_id = 1374;
}
if(b350_14 && b351_60 && b352_28 && b353_13 && b354_47 && b355_61 && b356_39 && b357_31 && b358_8 && b359_71 && b360_39 && b361_48 && b362_7 && b363_69) {
pattern_id = 1375;
}
if(b360_43 && b361_63 && b362_39 && b363_9) {
pattern_id = 1376;
}
if(b352_28 && b353_62 && b354_15 && b355_4 && b356_4 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_30 && b363_1) {
pattern_id = 1377;
}
if(b359_22 && b360_15 && b361_17 && b362_15 && b363_8) {
pattern_id = 1378;
}
if(b342_6 && b343_45 && b344_42 && b345_17 && b346_46 && b347_44 && b348_11 && b349_29 && b350_3 && b351_4 && b352_4 && b353_38 && b354_21 && b355_9 && b356_8 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 1379;
}
if(b289_18 && b290_3 && b291_3 && b292_4 && b293_4 && b294_19 && b295_2 && b296_3 && b297_3 && b298_4 && b299_18 && b300_4 && b301_3 && b302_4 && b303_2 && b304_27 && b305_2 && b306_2 && b307_3 && b308_6 && b309_25 && b310_3 && b311_4 && b312_2 && b313_7 && b314_34 && b315_4 && b316_3 && b317_4 && b318_5 && b319_38 && b320_3 && b321_5 && b322_4 && b323_16 && b324_8 && b325_2 && b326_12 && b327_4 && b328_12 && b329_50 && b330_4 && b331_1 && b332_3 && b333_2 && b334_4 && b335_4 && b336_1 && b337_1 && b338_4 && b339_60 && b340_9 && b341_2 && b342_1 && b343_10 && b344_12 && b345_11 && b346_1 && b347_3 && b348_10 && b349_6 && b350_1 && b351_17 && b352_7 && b353_11 && b354_32 && b355_23 && b356_4 && b357_23 && b358_28 && b359_27 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 1380;
}
if(b361_6 && b362_6 && b363_4) {
pattern_id = 1381;
}
if(b359_10 && b360_43 && b361_48 && b362_6 && b363_71) {
pattern_id = 1382;
}
if(b360_42 && b361_42 && b362_23 && b363_44) {
pattern_id = 1383;
}
if(b357_25 && b358_58 && b359_23 && b360_45 && b361_66 && b362_43 && b363_75) {
pattern_id = 1384;
}
if(b351_3 && b352_3 && b353_5 && b354_4 && b355_8 && b356_6 && b357_9 && b358_11 && b359_11 && b360_10 && b361_11 && b362_9 && b363_10) {
pattern_id = 1385;
}
if(b359_10 && b360_9 && b361_10 && b362_10 && b363_9) {
pattern_id = 1386;
}
if(b348_6 && b349_31 && b350_8 && b351_7 && b352_6 && b353_49 && b354_45 && b355_21 && b356_1 && b357_10 && b358_51 && b359_43 && b360_19 && b361_39 && b362_15 && b363_8) {
pattern_id = 1387;
}
if(b360_42 && b361_17 && b362_18 && b363_29) {
pattern_id = 1388;
}
if(b356_24 && b357_9 && b358_37 && b359_42 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1389;
}
if(b361_46 && b362_7 && b363_3) {
pattern_id = 1390;
}
if(b360_48 && b361_38 && b362_43 && b363_4) {
pattern_id = 1391;
}
if(b350_18 && b351_13 && b352_3 && b353_12 && b354_23 && b355_20 && b356_30 && b357_28 && b358_34 && b359_35 && b360_29 && b361_37 && b362_28 && b363_36) {
pattern_id = 1392;
}
if(b337_45 && b338_13 && b339_47 && b340_6 && b341_40 && b342_3 && b343_49 && b344_39 && b345_53 && b346_25 && b347_32 && b348_7 && b349_59 && b350_6 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1393;
}
if(b309_23 && b310_21 && b311_23 && b312_3 && b313_9 && b314_2 && b315_10 && b316_15 && b317_17 && b318_16 && b319_18 && b320_6 && b321_19 && b322_5 && b323_16 && b324_4 && b325_41 && b326_3 && b327_4 && b328_14 && b329_1 && b330_29 && b331_30 && b332_22 && b333_28 && b334_26 && b335_35 && b336_51 && b337_6 && b338_59 && b339_35 && b340_57 && b341_11 && b342_1 && b343_43 && b344_1 && b345_1 && b346_18 && b347_6 && b348_31 && b349_35 && b350_24 && b351_5 && b352_22 && b353_29 && b354_40 && b355_64 && b356_10 && b357_3 && b358_12 && b359_57 && b360_19 && b361_50 && b362_9 && b363_78) {
pattern_id = 1394;
}
if(b102_2 && b103_2 && b104_2 && b105_1 && b106_2 && b107_2 && b108_2 && b109_2 && b110_2 && b111_2 && b112_2 && b113_1 && b114_2 && b115_2 && b116_2 && b117_2 && b118_2 && b119_2 && b120_2 && b121_2 && b122_2 && b123_2 && b124_2 && b125_2 && b126_2 && b127_3 && b128_3 && b129_3 && b130_3 && b131_3 && b132_2 && b133_3 && b134_1 && b135_3 && b136_3 && b137_3 && b138_3 && b139_3 && b140_3 && b141_2 && b142_2 && b143_3 && b144_3 && b145_1 && b146_1 && b147_3 && b148_3 && b149_3 && b150_3 && b151_3 && b152_3 && b153_3 && b154_3 && b155_3 && b156_2 && b157_2 && b158_2 && b159_3 && b160_3 && b161_3 && b162_3 && b163_3 && b164_3 && b165_3 && b166_3 && b167_1 && b168_3 && b169_3 && b170_3 && b171_2 && b172_3 && b173_3 && b174_4 && b175_4 && b176_4 && b177_3 && b178_4 && b179_4 && b180_4 && b181_3 && b182_4 && b183_3 && b184_4 && b185_4 && b186_4 && b187_4 && b188_3 && b189_5 && b190_2 && b191_5 && b192_5 && b193_2 && b194_1 && b195_6 && b196_6 && b197_5 && b198_2 && b199_7 && b200_6 && b201_6 && b202_4 && b203_7 && b204_8 && b205_8 && b206_7 && b207_7 && b208_9 && b209_8 && b210_8 && b211_7 && b212_8 && b213_8 && b214_9 && b215_1 && b216_7 && b217_9 && b218_8 && b219_11 && b220_10 && b221_10 && b222_1 && b223_9 && b224_2 && b225_9 && b226_11 && b227_3 && b228_9 && b229_10 && b230_8 && b231_11 && b232_10 && b233_1 && b234_14 && b235_12 && b236_9 && b237_9 && b238_11 && b239_7 && b240_12 && b241_9 && b242_12 && b243_1 && b244_10 && b245_11 && b246_10 && b247_3 && b248_11 && b249_13 && b250_2 && b251_12 && b252_5 && b253_12 && b254_11 && b255_13 && b256_1 && b257_11 && b258_15 && b259_13 && b260_13 && b261_14 && b262_13 && b263_3 && b264_15 && b265_14 && b266_14 && b267_2 && b268_16 && b269_16 && b270_16 && b271_17 && b272_14 && b273_7 && b274_10 && b275_18 && b276_17 && b277_3 && b278_22 && b279_20 && b280_23 && b281_21 && b282_19 && b283_3 && b284_23 && b285_23 && b286_25 && b287_6 && b288_23 && b289_27 && b290_23 && b291_26 && b292_23 && b293_7 && b294_25 && b295_5 && b296_26 && b297_23 && b298_4 && b299_7 && b300_23 && b301_5 && b302_4 && b303_27 && b304_5 && b305_33 && b306_29 && b307_14 && b308_36 && b309_30 && b310_4 && b311_1 && b312_24 && b313_32 && b314_1 && b315_14 && b316_21 && b317_16 && b318_23 && b319_10 && b320_17 && b321_7 && b322_4 && b323_10 && b324_5 && b325_3 && b326_15 && b327_3 && b328_46 && b329_18 && b330_19 && b331_7 && b332_2 && b333_51 && b334_6 && b335_3 && b336_28 && b337_41 && b338_39 && b339_3 && b340_30 && b341_60 && b342_3 && b343_26 && b344_8 && b345_55 && b346_36 && b347_31 && b348_23 && b349_24 && b350_26 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1395;
}
if(b185_3 && b186_3 && b187_2 && b188_1 && b189_3 && b190_3 && b191_3 && b192_2 && b193_3 && b194_3 && b195_3 && b196_3 && b197_3 && b198_3 && b199_3 && b200_4 && b201_3 && b202_4 && b203_4 && b204_4 && b205_3 && b206_4 && b207_3 && b208_4 && b209_4 && b210_3 && b211_3 && b212_4 && b213_4 && b214_4 && b215_2 && b216_3 && b217_4 && b218_4 && b219_5 && b220_4 && b221_4 && b222_4 && b223_4 && b224_5 && b225_4 && b226_5 && b227_5 && b228_1 && b229_4 && b230_4 && b231_4 && b232_5 && b233_5 && b234_6 && b235_5 && b236_5 && b237_4 && b238_4 && b239_5 && b240_5 && b241_1 && b242_5 && b243_5 && b244_4 && b245_5 && b246_4 && b247_5 && b248_5 && b249_6 && b250_1 && b251_6 && b252_5 && b253_5 && b254_6 && b255_7 && b256_7 && b257_7 && b258_7 && b259_7 && b260_8 && b261_7 && b262_9 && b263_9 && b264_8 && b265_8 && b266_2 && b267_7 && b268_9 && b269_2 && b270_9 && b271_9 && b272_6 && b273_4 && b274_12 && b275_10 && b276_3 && b277_4 && b278_12 && b279_14 && b280_15 && b281_12 && b282_12 && b283_11 && b284_14 && b285_9 && b286_14 && b287_16 && b288_3 && b289_17 && b290_3 && b291_3 && b292_14 && b293_8 && b294_6 && b295_15 && b296_6 && b297_15 && b298_16 && b299_4 && b300_7 && b301_15 && b302_15 && b303_21 && b304_21 && b305_21 && b306_18 && b307_24 && b308_24 && b309_5 && b310_14 && b311_21 && b312_6 && b313_22 && b314_8 && b315_7 && b316_11 && b317_21 && b318_29 && b319_17 && b320_38 && b321_7 && b322_4 && b323_10 && b324_5 && b325_3 && b326_15 && b327_3 && b328_46 && b329_18 && b330_19 && b331_7 && b332_2 && b333_51 && b334_6 && b335_3 && b336_28 && b337_41 && b338_39 && b339_3 && b340_30 && b341_60 && b342_3 && b343_26 && b344_8 && b345_55 && b346_36 && b347_31 && b348_23 && b349_24 && b350_26 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1396;
}
if(b192_3 && b193_4 && b194_4 && b195_4 && b196_4 && b197_1 && b198_4 && b199_4 && b200_5 && b201_4 && b202_5 && b203_5 && b204_5 && b205_4 && b206_5 && b207_1 && b208_5 && b209_1 && b210_4 && b211_3 && b212_5 && b213_5 && b214_5 && b215_4 && b216_4 && b217_5 && b218_5 && b219_6 && b220_5 && b221_5 && b222_5 && b223_5 && b224_1 && b225_5 && b226_6 && b227_6 && b228_5 && b229_5 && b230_2 && b231_5 && b232_6 && b233_6 && b234_7 && b235_1 && b236_1 && b237_5 && b238_5 && b239_2 && b240_6 && b241_4 && b242_6 && b243_6 && b244_6 && b245_6 && b246_5 && b247_6 && b248_2 && b249_7 && b250_5 && b251_5 && b252_6 && b253_6 && b254_7 && b255_8 && b256_8 && b257_4 && b258_8 && b259_8 && b260_2 && b261_6 && b262_7 && b263_10 && b264_6 && b265_3 && b266_9 && b267_8 && b268_6 && b269_11 && b270_10 && b271_10 && b272_7 && b273_9 && b274_13 && b275_11 && b276_9 && b277_6 && b278_13 && b279_15 && b280_3 && b281_13 && b282_13 && b283_5 && b284_2 && b285_14 && b286_15 && b287_17 && b288_18 && b289_16 && b290_5 && b291_18 && b292_15 && b293_18 && b294_14 && b295_3 && b296_16 && b297_2 && b298_2 && b299_18 && b300_2 && b301_3 && b302_16 && b303_2 && b304_22 && b305_1 && b306_19 && b307_1 && b308_25 && b309_3 && b310_9 && b311_22 && b312_19 && b313_25 && b314_1 && b315_15 && b316_35 && b317_21 && b318_9 && b319_33 && b320_21 && b321_7 && b322_4 && b323_10 && b324_5 && b325_3 && b326_15 && b327_3 && b328_46 && b329_18 && b330_19 && b331_7 && b332_2 && b333_51 && b334_6 && b335_3 && b336_28 && b337_41 && b338_39 && b339_3 && b340_30 && b341_60 && b342_3 && b343_26 && b344_8 && b345_55 && b346_36 && b347_31 && b348_23 && b349_24 && b350_26 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1397;
}
if(b198_6 && b199_6 && b200_5 && b201_5 && b202_5 && b203_1 && b204_7 && b205_7 && b206_7 && b207_6 && b208_8 && b209_7 && b210_7 && b211_6 && b212_5 && b213_1 && b214_8 && b215_1 && b216_1 && b217_8 && b218_2 && b219_10 && b220_9 && b221_9 && b222_9 && b223_8 && b224_9 && b225_8 && b226_10 && b227_9 && b228_7 && b229_9 && b230_1 && b231_10 && b232_5 && b233_11 && b234_13 && b235_11 && b236_8 && b237_10 && b238_10 && b239_11 && b240_7 && b241_2 && b242_11 && b243_9 && b244_9 && b245_10 && b246_9 && b247_10 && b248_10 && b249_12 && b250_10 && b251_11 && b252_10 && b253_3 && b254_6 && b255_7 && b256_7 && b257_7 && b258_7 && b259_12 && b260_12 && b261_13 && b262_12 && b263_16 && b264_14 && b265_13 && b266_3 && b267_3 && b268_15 && b269_20 && b270_3 && b271_3 && b272_17 && b273_15 && b274_5 && b275_17 && b276_13 && b277_21 && b278_21 && b279_6 && b280_23 && b281_20 && b282_11 && b283_16 && b284_22 && b285_3 && b286_24 && b287_2 && b288_3 && b289_26 && b290_9 && b291_3 && b292_20 && b293_4 && b294_24 && b295_19 && b296_25 && b297_16 && b298_22 && b299_11 && b300_22 && b301_4 && b302_27 && b303_33 && b304_11 && b305_32 && b306_19 && b307_34 && b308_35 && b309_29 && b310_33 && b311_18 && b312_5 && b313_25 && b314_42 && b315_38 && b316_40 && b317_16 && b318_29 && b319_8 && b320_15 && b321_38 && b322_38 && b323_27 && b324_13 && b325_6 && b326_8 && b327_3 && b328_9 && b329_49 && b330_8 && b331_1 && b332_17 && b333_2 && b334_6 && b335_3 && b336_28 && b337_47 && b338_27 && b339_42 && b340_42 && b341_24 && b342_5 && b343_26 && b344_59 && b345_3 && b346_28 && b347_28 && b348_15 && b349_26 && b350_26 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1398;
}
if(b276_12 && b277_14 && b278_12 && b279_6 && b280_17 && b281_15 && b282_14 && b283_13 && b284_15 && b285_16 && b286_17 && b287_18 && b288_19 && b289_5 && b290_3 && b291_3 && b292_14 && b293_8 && b294_6 && b295_15 && b296_6 && b297_19 && b298_18 && b299_1 && b300_18 && b301_20 && b302_16 && b303_25 && b304_23 && b305_18 && b306_15 && b307_27 && b308_2 && b309_24 && b310_23 && b311_26 && b312_14 && b313_1 && b314_10 && b315_27 && b316_8 && b317_37 && b318_23 && b319_2 && b320_3 && b321_5 && b322_40 && b323_2 && b324_4 && b325_10 && b326_20 && b327_43 && b328_2 && b329_21 && b330_32 && b331_47 && b332_1 && b333_20 && b334_3 && b335_28 && b336_24 && b337_53 && b338_22 && b339_25 && b340_43 && b341_39 && b342_50 && b343_26 && b344_32 && b345_36 && b346_30 && b347_55 && b348_15 && b349_36 && b350_52 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1399;
}
if(b339_61 && b340_47 && b341_29 && b342_3 && b343_27 && b344_3 && b345_9 && b346_13 && b347_25 && b348_28 && b349_71 && b350_64 && b351_16 && b352_17 && b353_43 && b354_46 && b355_44 && b356_28 && b357_10 && b358_11 && b359_12 && b360_10 && b361_44 && b362_2 && b363_22) {
pattern_id = 1400;
}
if(b355_56 && b356_39 && b357_28 && b358_23 && b359_52 && b360_5 && b361_1 && b362_1 && b363_36) {
pattern_id = 1401;
}
if(b358_71 && b359_22 && b360_9 && b361_13 && b362_38 && b363_33) {
pattern_id = 1402;
}
if(b348_30 && b349_15 && b350_59 && b351_6 && b352_43 && b353_24 && b354_17 && b355_20 && b356_30 && b357_28 && b358_34 && b359_35 && b360_29 && b361_37 && b362_28 && b363_36) {
pattern_id = 1403;
}
if(b346_53 && b347_59 && b348_21 && b349_9 && b350_37 && b351_26 && b352_6 && b353_17 && b354_15 && b355_37 && b356_13 && b357_4 && b358_1 && b359_10 && b360_1 && b361_20 && b362_45 && b363_1) {
pattern_id = 1404;
}
if(b350_18 && b351_13 && b352_3 && b353_12 && b354_50 && b355_20 && b356_30 && b357_28 && b358_34 && b359_35 && b360_29 && b361_37 && b362_28 && b363_12) {
pattern_id = 1405;
}
if(b351_51 && b352_28 && b353_50 && b354_33 && b355_39 && b356_51 && b357_46 && b358_42 && b359_27 && b360_9 && b361_42 && b362_7 && b363_31) {
pattern_id = 1406;
}
if(b361_46 && b362_23 && b363_3) {
pattern_id = 1407;
}
if(b356_65 && b357_58 && b358_63 && b359_5 && b360_43 && b361_25 && b362_55 && b363_20) {
pattern_id = 1408;
}
if(b348_30 && b349_32 && b350_35 && b351_27 && b352_28 && b353_14 && b354_38 && b355_12 && b356_11 && b357_8 && b358_47 && b359_47 && b360_32 && b361_38 && b362_6 && b363_3) {
pattern_id = 1409;
}
if(b353_2 && b354_39 && b355_35 && b356_43 && b357_27 && b358_29 && b359_46 && b360_22 && b361_13 && b362_10 && b363_53) {
pattern_id = 1410;
}
if(b357_64 && b358_47 && b359_36 && b360_66 && b361_25 && b362_7 && b363_31) {
pattern_id = 1411;
}
if(b355_56 && b356_51 && b357_22 && b358_77 && b359_69 && b360_25 && b361_25 && b362_22 && b363_48) {
pattern_id = 1412;
}
if(b351_51 && b352_72 && b353_59 && b354_33 && b355_65 && b356_81 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 1413;
}
if(b353_2 && b354_5 && b355_3 && b356_8 && b357_8 && b358_9 && b359_8 && b360_8 && b361_2 && b362_9 && b363_8) {
pattern_id = 1414;
}
if(b353_2 && b354_3 && b355_3 && b356_3 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_3 && b363_1) {
pattern_id = 1415;
}
if(b359_49 && b360_6 && b361_1 && b362_2 && b363_6) {
pattern_id = 1416;
}
if(b355_56 && b356_41 && b357_15 && b358_7 && b359_7 && b360_3 && b361_24 && b362_3 && b363_1) {
pattern_id = 1417;
}
if(b320_12 && b321_7 && b322_8 && b323_12 && b324_5 && b325_3 && b326_7 && b327_6 && b328_3 && b329_4 && b330_4 && b331_16 && b332_7 && b333_17 && b334_19 && b335_1 && b336_1 && b337_18 && b338_1 && b339_14 && b340_11 && b341_11 && b342_23 && b343_10 && b344_12 && b345_6 && b346_7 && b347_3 && b348_14 && b349_9 && b350_6 && b351_3 && b352_11 && b353_2 && b354_15 && b355_19 && b356_24 && b357_4 && b358_4 && b359_1 && b360_1 && b361_37 && b362_45 && b363_1) {
pattern_id = 1418;
}
if(b360_51 && b361_38 && b362_22 && b363_44) {
pattern_id = 1419;
}
if(b357_5 && b358_42 && b359_9 && b360_33 && b361_32 && b362_28 && b363_28) {
pattern_id = 1420;
}
if(b355_55 && b356_39 && b357_73 && b358_29 && b359_23 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1421;
}
if(b360_51 && b361_38 && b362_55 && b363_67) {
pattern_id = 1422;
}
if(b360_51 && b361_38 && b362_55 && b363_35) {
pattern_id = 1423;
}
if(b359_70 && b360_51 && b361_60 && b362_54 && b363_78) {
pattern_id = 1424;
}
if(b359_70 && b360_9 && b361_48 && b362_39 && b363_28) {
pattern_id = 1425;
}
if(b358_20 && b359_5 && b360_9 && b361_10 && b362_38 && b363_36) {
pattern_id = 1426;
}
if(b326_44 && b327_49 && b328_54 && b329_30 && b330_20 && b331_12 && b332_29 && b333_7 && b334_5 && b335_11 && b336_1 && b337_1 && b338_1 && b339_62 && b340_63 && b341_11 && b342_1 && b343_43 && b344_1 && b345_1 && b346_18 && b347_6 && b348_37 && b349_25 && b350_22 && b351_26 && b352_23 && b353_27 && b354_6 && b355_29 && b356_56 && b357_18 && b358_46 && b359_40 && b360_18 && b361_2 && b362_73 && b363_4) {
pattern_id = 1427;
}
if(b315_10 && b316_15 && b317_17 && b318_16 && b319_18 && b320_6 && b321_19 && b322_5 && b323_16 && b324_4 && b325_10 && b326_20 && b327_22 && b328_2 && b329_33 && b330_32 && b331_21 && b332_35 && b333_33 && b334_39 && b335_35 && b336_38 && b337_30 && b338_27 && b339_12 && b340_20 && b341_6 && b342_4 && b343_6 && b344_42 && b345_17 && b346_50 && b347_34 && b348_40 && b349_61 && b350_30 && b351_45 && b352_11 && b353_3 && b354_7 && b355_23 && b356_30 && b357_57 && b358_8 && b359_5 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1428;
}
if(b347_64 && b348_17 && b349_50 && b350_56 && b351_13 && b352_61 && b353_49 && b354_4 && b355_71 && b356_8 && b357_45 && b358_17 && b359_3 && b360_58 && b361_50 && b362_9 && b363_8) {
pattern_id = 1429;
}
if(b356_30 && b357_18 && b358_17 && b359_43 && b360_10 && b361_30 && b362_28 && b363_43) {
pattern_id = 1430;
}
if(b231_6 && b232_5 && b233_7 && b234_8 && b235_6 && b236_1 && b237_6 && b238_6 && b239_6 && b240_7 && b241_5 && b242_7 && b243_2 && b244_7 && b245_7 && b246_6 && b247_2 && b248_6 && b249_4 && b250_3 && b251_3 && b252_3 && b253_3 && b254_4 && b255_4 && b256_4 && b257_4 && b258_9 && b259_3 && b260_9 && b261_8 && b262_10 && b263_11 && b264_9 && b265_1 && b266_10 && b267_9 && b268_3 && b269_12 && b270_11 && b271_11 && b272_8 && b273_2 && b274_14 && b275_2 && b276_2 && b277_12 && b278_2 && b279_7 && b280_12 && b281_14 && b282_12 && b283_12 && b284_14 && b285_15 && b286_16 && b287_1 && b288_17 && b289_9 && b290_1 && b291_9 && b292_16 && b293_19 && b294_18 && b295_4 && b296_13 && b297_14 && b298_8 && b299_10 && b300_7 && b301_4 && b302_5 && b303_22 && b304_5 && b305_4 && b306_20 && b307_5 && b308_4 && b309_18 && b310_3 && b311_24 && b312_1 && b313_26 && b314_31 && b315_29 && b316_5 && b317_33 && b318_14 && b319_28 && b320_31 && b321_40 && b322_9 && b323_36 && b324_18 && b325_42 && b326_29 && b327_26 && b328_38 && b329_18 && b330_20 && b331_14 && b332_29 && b333_1 && b334_5 && b335_56 && b336_24 && b337_24 && b338_34 && b339_25 && b340_33 && b341_34 && b342_37 && b343_39 && b344_30 && b345_17 && b346_9 && b347_57 && b348_13 && b349_7 && b350_3 && b351_31 && b352_29 && b353_38 && b354_55 && b355_20 && b356_56 && b357_35 && b358_27 && b359_17 && b360_19 && b361_17 && b362_64 && b363_77) {
pattern_id = 1431;
}
if(b228_6 && b229_2 && b230_5 && b231_7 && b232_7 && b233_1 && b234_9 && b235_7 && b236_5 && b237_7 && b238_7 && b239_7 && b240_8 && b241_6 && b242_8 && b243_2 && b244_7 && b245_7 && b246_6 && b247_2 && b248_6 && b249_4 && b250_3 && b251_3 && b252_3 && b253_3 && b254_4 && b255_4 && b256_4 && b257_4 && b258_9 && b259_3 && b260_9 && b261_8 && b262_10 && b263_11 && b264_9 && b265_1 && b266_10 && b267_9 && b268_3 && b269_12 && b270_11 && b271_11 && b272_8 && b273_2 && b274_14 && b275_2 && b276_2 && b277_12 && b278_2 && b279_7 && b280_12 && b281_14 && b282_12 && b283_12 && b284_14 && b285_15 && b286_16 && b287_1 && b288_17 && b289_9 && b290_1 && b291_9 && b292_16 && b293_19 && b294_18 && b295_4 && b296_13 && b297_14 && b298_8 && b299_10 && b300_7 && b301_4 && b302_5 && b303_22 && b304_5 && b305_4 && b306_20 && b307_5 && b308_4 && b309_18 && b310_3 && b311_24 && b312_1 && b313_26 && b314_31 && b315_29 && b316_5 && b317_33 && b318_14 && b319_28 && b320_31 && b321_40 && b322_9 && b323_36 && b324_18 && b325_42 && b326_29 && b327_26 && b328_38 && b329_18 && b330_20 && b331_14 && b332_29 && b333_1 && b334_5 && b335_56 && b336_24 && b337_24 && b338_34 && b339_25 && b340_33 && b341_34 && b342_37 && b343_39 && b344_30 && b345_17 && b346_9 && b347_57 && b348_13 && b349_7 && b350_3 && b351_31 && b352_29 && b353_38 && b354_55 && b355_20 && b356_56 && b357_35 && b358_27 && b359_17 && b360_19 && b361_17 && b362_64 && b363_77) {
pattern_id = 1432;
}
if(b341_49 && b342_5 && b343_8 && b344_42 && b345_71 && b346_7 && b347_21 && b348_39 && b349_47 && b350_24 && b351_5 && b352_18 && b353_16 && b354_36 && b355_48 && b356_28 && b357_24 && b358_33 && b359_24 && b360_68 && b361_24 && b362_19 && b363_43) {
pattern_id = 1433;
}
if(b335_51 && b336_15 && b337_26 && b338_38 && b339_12 && b340_20 && b341_6 && b342_3 && b343_22 && b344_4 && b345_11 && b346_36 && b347_26 && b348_11 && b349_35 && b350_56 && b351_28 && b352_22 && b353_43 && b354_45 && b355_63 && b356_28 && b357_34 && b358_46 && b359_26 && b360_2 && b361_7 && b362_8 && b363_29) {
pattern_id = 1434;
}
if(b334_58 && b335_3 && b336_14 && b337_41 && b338_4 && b339_10 && b340_15 && b341_11 && b342_3 && b343_22 && b344_4 && b345_7 && b346_45 && b347_7 && b348_50 && b349_59 && b350_6 && b351_12 && b352_35 && b353_43 && b354_16 && b355_22 && b356_23 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1435;
}
if(b332_57 && b333_27 && b334_21 && b335_35 && b336_7 && b337_10 && b338_19 && b339_12 && b340_6 && b341_36 && b342_28 && b343_55 && b344_35 && b345_31 && b346_33 && b347_22 && b348_65 && b349_56 && b350_26 && b351_21 && b352_61 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1436;
}
if(b324_45 && b325_6 && b326_24 && b327_19 && b328_12 && b329_15 && b330_29 && b331_9 && b332_1 && b333_41 && b334_27 && b335_23 && b336_20 && b337_48 && b338_48 && b339_18 && b340_36 && b341_57 && b342_51 && b343_26 && b344_34 && b345_4 && b346_42 && b347_43 && b348_17 && b349_35 && b350_26 && b351_32 && b352_45 && b353_37 && b354_62 && b355_68 && b356_10 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1437;
}
if(b328_41 && b329_32 && b330_14 && b331_31 && b332_7 && b333_15 && b334_15 && b335_4 && b336_2 && b337_26 && b338_27 && b339_24 && b340_36 && b341_30 && b342_28 && b343_55 && b344_32 && b345_36 && b346_30 && b347_33 && b348_11 && b349_27 && b350_34 && b351_54 && b352_42 && b353_43 && b354_12 && b355_11 && b356_50 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1438;
}
if(b328_41 && b329_32 && b330_14 && b331_31 && b332_7 && b333_15 && b334_15 && b335_4 && b336_2 && b337_26 && b338_27 && b339_24 && b340_36 && b341_30 && b342_28 && b343_55 && b344_35 && b345_31 && b346_33 && b347_22 && b348_65 && b349_56 && b350_26 && b351_21 && b352_61 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1439;
}
if(b325_45 && b326_41 && b327_15 && b328_30 && b329_1 && b330_34 && b331_13 && b332_7 && b333_5 && b334_21 && b335_28 && b336_27 && b337_36 && b338_32 && b339_36 && b340_43 && b341_52 && b342_30 && b343_55 && b344_35 && b345_31 && b346_33 && b347_22 && b348_65 && b349_56 && b350_26 && b351_21 && b352_61 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1440;
}
if(b327_43 && b328_2 && b329_21 && b330_32 && b331_9 && b332_13 && b333_34 && b334_8 && b335_1 && b336_14 && b337_44 && b338_29 && b339_21 && b340_31 && b341_26 && b342_9 && b343_55 && b344_35 && b345_31 && b346_33 && b347_22 && b348_65 && b349_56 && b350_26 && b351_21 && b352_61 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1441;
}
if(b326_44 && b327_9 && b328_33 && b329_17 && b330_4 && b331_14 && b332_17 && b333_2 && b334_5 && b335_31 && b336_20 && b337_27 && b338_39 && b339_42 && b340_22 && b341_9 && b342_12 && b343_55 && b344_35 && b345_31 && b346_33 && b347_22 && b348_65 && b349_56 && b350_26 && b351_21 && b352_61 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1442;
}
if(b288_4 && b289_2 && b290_2 && b291_3 && b292_3 && b293_5 && b294_3 && b295_3 && b296_3 && b297_2 && b298_5 && b299_3 && b300_3 && b301_3 && b302_3 && b303_4 && b304_5 && b305_4 && b306_2 && b307_5 && b308_7 && b309_10 && b310_4 && b311_4 && b312_2 && b313_8 && b314_11 && b315_5 && b316_7 && b317_4 && b318_7 && b319_12 && b320_7 && b321_5 && b322_9 && b323_4 && b324_4 && b325_4 && b326_21 && b327_4 && b328_4 && b329_8 && b330_1 && b331_4 && b332_18 && b333_1 && b334_5 && b335_5 && b336_1 && b337_7 && b338_24 && b339_12 && b340_2 && b341_2 && b342_3 && b343_14 && b344_4 && b345_3 && b346_1 && b347_3 && b348_10 && b349_38 && b350_1 && b351_17 && b352_7 && b353_11 && b354_9 && b355_23 && b356_4 && b357_23 && b358_28 && b359_25 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 1443;
}
if(b353_59 && b354_14 && b355_46 && b356_70 && b357_14 && b358_67 && b359_75 && b360_4 && b361_62 && b362_22 && b363_48) {
pattern_id = 1444;
}
if(b358_57 && b359_47 && b360_33 && b361_38 && b362_60 && b363_4) {
pattern_id = 1445;
}
if(b351_31 && b352_31 && b353_50 && b354_32 && b355_39 && b356_25 && b357_14 && b358_48 && b359_69 && b360_14 && b361_62 && b362_22 && b363_45) {
pattern_id = 1446;
}
if(b358_57 && b359_47 && b360_63 && b361_42 && b362_43 && b363_34) {
pattern_id = 1447;
}
if(b356_3 && b357_39 && b358_8 && b359_35 && b360_32 && b361_46 && b362_49 && b363_49) {
pattern_id = 1448;
}
if(b346_40 && b347_18 && b348_42 && b349_31 && b350_51 && b351_6 && b352_4 && b353_30 && b354_4 && b355_42 && b356_9 && b357_11 && b358_19 && b359_67 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 1449;
}
if(b289_6 && b290_5 && b291_6 && b292_5 && b293_1 && b294_7 && b295_4 && b296_5 && b297_6 && b298_7 && b299_8 && b300_6 && b301_6 && b302_7 && b303_6 && b304_10 && b305_9 && b306_3 && b307_10 && b308_13 && b309_10 && b310_4 && b311_9 && b312_6 && b313_8 && b314_18 && b315_17 && b316_22 && b317_19 && b318_4 && b319_19 && b320_26 && b321_11 && b322_22 && b323_16 && b324_4 && b325_10 && b326_3 && b327_4 && b328_39 && b329_1 && b330_42 && b331_32 && b332_25 && b333_43 && b334_42 && b335_21 && b336_27 && b337_25 && b338_50 && b339_42 && b340_24 && b341_39 && b342_27 && b343_55 && b344_21 && b345_48 && b346_33 && b347_6 && b348_1 && b349_4 && b350_3 && b351_17 && b352_12 && b353_11 && b354_64 && b355_11 && b356_4 && b357_23 && b358_11 && b359_76 && b360_3 && b361_20 && b362_21 && b363_1) {
pattern_id = 1450;
}
if(b353_59 && b354_41 && b355_47 && b356_10 && b357_17 && b358_19 && b359_38 && b360_1 && b361_5 && b362_49 && b363_45) {
pattern_id = 1451;
}
if(b351_31 && b352_29 && b353_41 && b354_5 && b355_9 && b356_29 && b357_34 && b358_23 && b359_43 && b360_10 && b361_50 && b362_12 && b363_10) {
pattern_id = 1452;
}
if(b359_72 && b360_14 && b361_42 && b362_23 && b363_4) {
pattern_id = 1453;
}
if(b344_11 && b345_40 && b346_40 && b347_56 && b348_4 && b349_68 && b350_5 && b351_28 && b352_70 && b353_12 && b354_5 && b355_28 && b356_9 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1454;
}
if(b345_24 && b346_19 && b347_37 && b348_46 && b349_9 && b350_72 && b351_7 && b352_5 && b353_72 && b354_12 && b355_28 && b356_1 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1455;
}
if(b291_19 && b292_17 && b293_20 && b294_19 && b295_4 && b296_17 && b297_16 && b298_8 && b299_4 && b300_7 && b301_16 && b302_3 && b303_18 && b304_4 && b305_22 && b306_21 && b307_2 && b308_2 && b309_10 && b310_22 && b311_2 && b312_2 && b313_27 && b314_4 && b315_30 && b316_36 && b317_35 && b318_36 && b319_12 && b320_39 && b321_18 && b322_15 && b323_11 && b324_9 && b325_33 && b326_20 && b327_37 && b328_9 && b329_6 && b330_5 && b331_3 && b332_1 && b333_1 && b334_54 && b335_1 && b336_1 && b337_14 && b338_4 && b339_59 && b340_23 && b341_61 && b342_33 && b343_6 && b344_68 && b345_4 && b346_21 && b347_33 && b348_34 && b349_33 && b350_3 && b351_63 && b352_29 && b353_6 && b354_10 && b355_9 && b356_76 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1456;
}
if(b354_52 && b355_65 && b356_3 && b357_58 && b358_23 && b359_6 && b360_5 && b361_4 && b362_5 && b363_80) {
pattern_id = 1457;
}
if(b348_53 && b349_64 && b350_47 && b351_9 && b352_11 && b353_21 && b354_11 && b355_23 && b356_78 && b357_20 && b358_46 && b359_56 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1458;
}
if(b359_68 && b360_15 && b361_26 && b362_2 && b363_7) {
pattern_id = 1459;
}
if(b360_25 && b361_42 && b362_47 && b363_3) {
pattern_id = 1460;
}
if(b360_25 && b361_21 && b362_6 && b363_53) {
pattern_id = 1461;
}
if(b359_46 && b360_14 && b361_31 && b362_29 && b363_4) {
pattern_id = 1462;
}
if(b359_46 && b360_14 && b361_46 && b362_4 && b363_9) {
pattern_id = 1463;
}
if(b360_25 && b361_3 && b362_61 && b363_56) {
pattern_id = 1464;
}
if(b355_64 && b356_29 && b357_3 && b358_7 && b359_2 && b360_3 && b361_20 && b362_1 && b363_1) {
pattern_id = 1465;
}
if(b356_56 && b357_15 && b358_16 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1466;
}
if(b352_30 && b353_37 && b354_25 && b355_2 && b356_7 && b357_35 && b358_37 && b359_21 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1467;
}
if(b352_30 && b353_37 && b354_28 && b355_15 && b356_28 && b357_4 && b358_3 && b359_8 && b360_13 && b361_23 && b362_9 && b363_26) {
pattern_id = 1468;
}
if(b338_26 && b339_3 && b340_25 && b341_24 && b342_25 && b343_6 && b344_18 && b345_31 && b346_20 && b347_28 && b348_11 && b349_29 && b350_3 && b351_40 && b352_4 && b353_32 && b354_4 && b355_44 && b356_1 && b357_18 && b358_9 && b359_11 && b360_53 && b361_41 && b362_18 && b363_55) {
pattern_id = 1469;
}
if(b349_40 && b350_36 && b351_22 && b352_24 && b353_27 && b354_4 && b355_15 && b356_28 && b357_10 && b358_37 && b359_17 && b360_15 && b361_8 && b362_14 && b363_6) {
pattern_id = 1470;
}
if(b234_2 && b235_2 && b236_2 && b237_1 && b238_2 && b239_2 && b240_2 && b241_2 && b242_2 && b243_2 && b244_2 && b245_2 && b246_1 && b247_2 && b248_2 && b249_2 && b250_2 && b251_1 && b252_1 && b253_2 && b254_2 && b255_2 && b256_2 && b257_2 && b258_3 && b259_2 && b260_3 && b261_2 && b262_4 && b263_2 && b264_3 && b265_4 && b266_3 && b267_2 && b268_4 && b269_4 && b270_3 && b271_2 && b272_3 && b273_4 && b274_4 && b275_4 && b276_2 && b277_5 && b278_2 && b279_5 && b280_3 && b281_3 && b282_2 && b283_5 && b284_4 && b285_4 && b286_5 && b287_3 && b288_7 && b289_1 && b290_3 && b291_3 && b292_4 && b293_4 && b294_5 && b295_2 && b296_3 && b297_3 && b298_4 && b299_9 && b300_4 && b301_3 && b302_4 && b303_2 && b304_11 && b305_2 && b306_2 && b307_3 && b308_6 && b309_13 && b310_3 && b311_4 && b312_2 && b313_7 && b314_2 && b315_4 && b316_3 && b317_4 && b318_5 && b319_25 && b320_3 && b321_5 && b322_4 && b323_16 && b324_27 && b325_2 && b326_12 && b327_4 && b328_12 && b329_19 && b330_4 && b331_1 && b332_3 && b333_2 && b334_18 && b335_4 && b336_1 && b337_1 && b338_4 && b339_2 && b340_9 && b341_2 && b342_1 && b343_10 && b344_56 && b345_11 && b346_1 && b347_3 && b348_10 && b349_26 && b350_1 && b351_17 && b352_7 && b353_11 && b354_5 && b355_23 && b356_4 && b357_23 && b358_28 && b359_77 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 1471;
}
if(b355_50 && b356_35 && b357_39 && b358_42 && b359_9 && b360_37 && b361_31 && b362_50 && b363_4) {
pattern_id = 1472;
}
if(b332_27 && b333_34 && b334_29 && b335_61 && b336_2 && b337_13 && b338_62 && b339_62 && b340_61 && b341_60 && b342_3 && b343_62 && b344_49 && b345_17 && b346_44 && b347_44 && b348_11 && b349_17 && b350_28 && b351_45 && b352_34 && b353_40 && b354_12 && b355_5 && b356_27 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1473;
}
if(b351_4 && b352_20 && b353_59 && b354_38 && b355_20 && b356_24 && b357_59 && b358_47 && b359_33 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1474;
}
if(b333_18 && b334_15 && b335_22 && b336_17 && b337_6 && b338_17 && b339_20 && b340_23 && b341_22 && b342_4 && b343_5 && b344_15 && b345_11 && b346_7 && b347_6 && b348_36 && b349_8 && b350_1 && b351_39 && b352_10 && b353_10 && b354_36 && b355_42 && b356_15 && b357_10 && b358_27 && b359_52 && b360_18 && b361_12 && b362_12 && b363_25) {
pattern_id = 1475;
}
if(b360_45 && b361_43 && b362_43 && b363_69) {
pattern_id = 1476;
}
if(b346_49 && b347_37 && b348_21 && b349_55 && b350_39 && b351_30 && b352_59 && b353_59 && b354_56 && b355_29 && b356_22 && b357_57 && b358_47 && b359_68 && b360_4 && b361_38 && b362_62 && b363_36) {
pattern_id = 1477;
}
if(b359_33 && b360_50 && b361_31 && b362_10 && b363_45) {
pattern_id = 1478;
}
if(b361_51 && b362_29 && b363_44) {
pattern_id = 1479;
}
if(b359_33 && b360_50 && b361_43 && b362_40 && b363_4) {
pattern_id = 1480;
}
if(b359_33 && b360_50 && b361_43 && b362_40 && b363_43) {
pattern_id = 1481;
}
if(b360_45 && b361_21 && b362_3 && b363_34) {
pattern_id = 1482;
}
if(b360_45 && b361_21 && b362_70 && b363_34) {
pattern_id = 1483;
}
if(b360_45 && b361_3 && b362_53 && b363_4) {
pattern_id = 1484;
}
if(b362_33 && b363_75) {
pattern_id = 1485;
}
if(b354_60 && b355_2 && b356_66 && b357_36 && b358_18 && b359_3 && b360_18 && b361_19 && b362_15 && b363_6) {
pattern_id = 1486;
}
if(b347_52 && b348_26 && b349_35 && b350_34 && b351_34 && b352_25 && b353_37 && b354_46 && b355_3 && b356_11 && b357_56 && b358_19 && b359_21 && b360_12 && b361_7 && b362_16 && b363_22) {
pattern_id = 1487;
}
if(b354_60 && b355_25 && b356_34 && b357_18 && b358_40 && b359_38 && b360_27 && b361_53 && b362_44 && b363_29) {
pattern_id = 1488;
}
if(b189_6 && b190_5 && b191_6 && b192_6 && b193_6 && b194_6 && b195_7 && b196_4 && b197_6 && b198_7 && b199_1 && b200_1 && b201_7 && b202_8 && b203_8 && b204_9 && b205_9 && b206_8 && b207_8 && b208_10 && b209_9 && b210_9 && b211_4 && b212_5 && b213_9 && b214_1 && b215_3 && b216_8 && b217_10 && b218_9 && b219_12 && b220_11 && b221_1 && b222_10 && b223_7 && b224_8 && b225_3 && b226_12 && b227_10 && b228_4 && b229_4 && b230_9 && b231_12 && b232_11 && b233_12 && b234_15 && b235_8 && b236_10 && b237_9 && b238_12 && b239_12 && b240_13 && b241_10 && b242_13 && b243_10 && b244_4 && b245_12 && b246_11 && b247_3 && b248_12 && b249_14 && b250_11 && b251_13 && b252_11 && b253_3 && b254_2 && b255_4 && b256_12 && b257_12 && b258_16 && b259_14 && b260_3 && b261_14 && b262_14 && b263_2 && b264_7 && b265_15 && b266_15 && b267_16 && b268_13 && b269_21 && b270_3 && b271_18 && b272_18 && b273_4 && b274_3 && b275_19 && b276_18 && b277_14 && b278_12 && b279_6 && b280_2 && b281_22 && b282_20 && b283_3 && b284_21 && b285_24 && b286_5 && b287_16 && b288_24 && b289_20 && b290_20 && b291_27 && b292_24 && b293_4 && b294_26 && b295_23 && b296_6 && b297_4 && b298_9 && b299_29 && b300_24 && b301_25 && b302_15 && b303_34 && b304_31 && b305_25 && b306_3 && b307_19 && b308_13 && b309_31 && b310_14 && b311_25 && b312_2 && b313_38 && b314_25 && b315_39 && b316_27 && b317_9 && b318_34 && b319_3 && b320_2 && b321_19 && b322_45 && b323_25 && b324_46 && b325_4 && b326_4 && b327_46 && b328_53 && b329_6 && b330_34 && b331_38 && b332_3 && b333_43 && b334_17 && b335_5 && b336_6 && b337_9 && b338_9 && b339_12 && b340_20 && b341_17 && b342_4 && b343_6 && b344_17 && b345_17 && b346_31 && b347_29 && b348_17 && b349_9 && b350_9 && b351_5 && b352_29 && b353_29 && b354_3 && b355_11 && b356_11 && b357_46 && b358_48 && b359_11 && b360_79 && b361_30 && b362_1 && b363_77) {
pattern_id = 1489;
}
if(b299_20 && b300_6 && b301_18 && b302_1 && b303_24 && b304_14 && b305_24 && b306_10 && b307_10 && b308_13 && b309_10 && b310_4 && b311_12 && b312_17 && b313_3 && b314_4 && b315_31 && b316_10 && b317_23 && b318_15 && b319_20 && b320_31 && b321_41 && b322_25 && b323_35 && b324_16 && b325_2 && b326_10 && b327_38 && b328_12 && b329_6 && b330_52 && b331_46 && b332_49 && b333_38 && b334_5 && b335_50 && b336_43 && b337_1 && b338_23 && b339_12 && b340_20 && b341_17 && b342_4 && b343_6 && b344_69 && b345_22 && b346_46 && b347_44 && b348_15 && b349_50 && b350_4 && b351_6 && b352_31 && b353_50 && b354_15 && b355_22 && b356_26 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1490;
}
if(b315_22 && b316_10 && b317_27 && b318_28 && b319_27 && b320_26 && b321_32 && b322_3 && b323_6 && b324_22 && b325_2 && b326_10 && b327_28 && b328_9 && b329_6 && b330_4 && b331_42 && b332_9 && b333_2 && b334_6 && b335_3 && b336_37 && b337_30 && b338_29 && b339_22 && b340_8 && b341_36 && b342_18 && b343_24 && b344_7 && b345_9 && b346_8 && b347_1 && b348_50 && b349_2 && b350_1 && b351_11 && b352_1 && b353_6 && b354_6 && b355_44 && b356_1 && b357_1 && b358_1 && b359_10 && b360_3 && b361_4 && b362_7 && b363_3) {
pattern_id = 1491;
}
if(b356_25 && b357_14 && b358_26 && b359_22 && b360_32 && b361_4 && b362_33 && b363_34) {
pattern_id = 1492;
}
if(b359_47 && b360_4 && b361_31 && b362_29 && b363_4) {
pattern_id = 1493;
}
if(b360_32 && b361_25 && b362_47 && b363_3) {
pattern_id = 1494;
}
if(b355_7 && b356_51 && b357_28 && b358_57 && b359_10 && b360_56 && b361_13 && b362_66 && b363_4) {
pattern_id = 1495;
}
if(b359_47 && b360_7 && b361_51 && b362_43 && b363_67) {
pattern_id = 1496;
}
if(b355_7 && b356_8 && b357_6 && b358_8 && b359_7 && b360_6 && b361_8 && b362_8 && b363_5) {
pattern_id = 1497;
}
if(b348_19 && b349_21 && b350_26 && b351_26 && b352_23 && b353_32 && b354_30 && b355_28 && b356_8 && b357_19 && b358_6 && b359_9 && b360_15 && b361_33 && b362_18 && b363_26) {
pattern_id = 1498;
}
if(b352_48 && b353_17 && b354_3 && b355_11 && b356_10 && b357_21 && b358_39 && b359_14 && b360_3 && b361_20 && b362_1 && b363_1) {
pattern_id = 1499;
}
if(b328_26 && b329_28 && b330_2 && b331_30 && b332_34 && b333_28 && b334_5 && b335_19 && b336_18 && b337_30 && b338_28 && b339_27 && b340_31 && b341_28 && b342_24 && b343_30 && b344_8 && b345_36 && b346_30 && b347_1 && b348_19 && b349_39 && b350_26 && b351_33 && b352_60 && b353_37 && b354_21 && b355_11 && b356_11 && b357_12 && b358_46 && b359_26 && b360_18 && b361_12 && b362_25 && b363_25) {
pattern_id = 1500;
}
if(b356_51 && b357_44 && b358_11 && b359_23 && b360_54 && b361_14 && b362_15 && b363_14) {
pattern_id = 1501;
}
if(b320_11 && b321_7 && b322_8 && b323_12 && b324_5 && b325_13 && b326_11 && b327_6 && b328_15 && b329_14 && b330_4 && b331_15 && b332_7 && b333_17 && b334_19 && b335_1 && b336_8 && b337_17 && b338_1 && b339_4 && b340_16 && b341_11 && b342_22 && b343_10 && b344_12 && b345_6 && b346_7 && b347_8 && b348_13 && b349_9 && b350_10 && b351_36 && b352_11 && b353_44 && b354_15 && b355_19 && b356_24 && b357_4 && b358_31 && b359_36 && b360_1 && b361_29 && b362_36 && b363_1) {
pattern_id = 1502;
}
if(b357_46 && b358_5 && b359_27 && b360_9 && b361_42 && b362_22 && b363_45) {
pattern_id = 1503;
}
if(b360_23 && b361_4 && b362_47 && b363_31) {
pattern_id = 1504;
}
if(b359_35 && b360_22 && b361_3 && b362_47 && b363_4) {
pattern_id = 1505;
}
if(b341_38 && b342_2 && b343_29 && b344_51 && b345_3 && b346_53 && b347_5 && b348_15 && b349_29 && b350_30 && b351_29 && b352_29 && b353_22 && b354_19 && b355_58 && b356_64 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1506;
}
if(b351_19 && b352_20 && b353_25 && b354_26 && b355_20 && b356_34 && b357_34 && b358_18 && b359_39 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1507;
}
if(b343_42 && b344_15 && b345_41 && b346_52 && b347_6 && b348_32 && b349_1 && b350_1 && b351_28 && b352_13 && b353_8 && b354_28 && b355_1 && b356_1 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1508;
}
if(b357_46 && b358_5 && b359_5 && b360_3 && b361_20 && b362_1 && b363_1) {
pattern_id = 1509;
}
if(b358_45 && b359_48 && b360_37 && b361_12 && b362_11 && b363_26) {
pattern_id = 1510;
}
if(b354_33 && b355_55 && b356_25 && b357_37 && b358_16 && b359_42 && b360_26 && b361_16 && b362_52 && b363_44) {
pattern_id = 1511;
}
if(b341_38 && b342_43 && b343_42 && b344_27 && b345_27 && b346_12 && b347_48 && b348_54 && b349_46 && b350_35 && b351_47 && b352_28 && b353_4 && b354_29 && b355_28 && b356_6 && b357_15 && b358_12 && b359_12 && b360_27 && b361_33 && b362_18 && b363_10) {
pattern_id = 1512;
}
if(b362_39 && b363_53) {
pattern_id = 1513;
}
if(b360_23 && b361_21 && b362_23 && b363_21) {
pattern_id = 1514;
}
if(b360_23 && b361_21 && b362_47 && b363_3) {
pattern_id = 1515;
}
if(b358_45 && b359_23 && b360_39 && b361_48 && b362_40 && b363_28) {
pattern_id = 1516;
}
if(b336_56 && b337_61 && b338_45 && b339_47 && b340_6 && b341_40 && b342_3 && b343_49 && b344_39 && b345_53 && b346_25 && b347_32 && b348_7 && b349_59 && b350_7 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 1517;
}
if(b286_8 && b287_8 && b288_11 && b289_11 && b290_9 && b291_11 && b292_1 && b293_1 && b294_11 && b295_1 && b296_10 && b297_9 && b298_10 && b299_13 && b300_10 && b301_5 && b302_9 && b303_11 && b304_15 && b305_14 && b306_10 && b307_17 && b308_13 && b309_17 && b310_3 && b311_4 && b312_10 && b313_8 && b314_3 && b315_23 && b316_27 && b317_28 && b318_29 && b319_28 && b320_31 && b321_24 && b322_34 && b323_20 && b324_36 && b325_36 && b326_33 && b327_31 && b328_24 && b329_43 && b330_8 && b331_29 && b332_45 && b333_29 && b334_22 && b335_36 && b336_18 && b337_27 && b338_39 && b339_22 && b340_28 && b341_48 && b342_5 && b343_47 && b344_19 && b345_55 && b346_31 && b347_31 && b348_34 && b349_27 && b350_1 && b351_15 && b352_38 && b353_11 && b354_4 && b355_28 && b356_6 && b357_44 && b358_46 && b359_38 && b360_19 && b361_17 && b362_64 && b363_48) {
pattern_id = 1518;
}
if(b357_46 && b358_58 && b359_69 && b360_63 && b361_51 && b362_47 && b363_21) {
pattern_id = 1519;
}
if(b356_60 && b357_59 && b358_57 && b359_37 && b360_45 && b361_3 && b362_53 && b363_4) {
pattern_id = 1520;
}
if(b361_10 && b362_61 && b363_3) {
pattern_id = 1521;
}
if(b361_10 && b362_42 && b363_44) {
pattern_id = 1522;
}
if(b342_44 && b343_28 && b344_13 && b345_42 && b346_3 && b347_5 && b348_5 && b349_29 && b350_4 && b351_6 && b352_47 && b353_49 && b354_25 && b355_25 && b356_41 && b357_34 && b358_6 && b359_38 && b360_1 && b361_21 && b362_20 && b363_4) {
pattern_id = 1523;
}
if(b348_16 && b349_18 && b350_22 && b351_22 && b352_24 && b353_27 && b354_28 && b355_20 && b356_32 && b357_9 && b358_37 && b359_42 && b360_1 && b361_43 && b362_9 && b363_25) {
pattern_id = 1524;
}
if(b353_4 && b354_56 && b355_8 && b356_43 && b357_4 && b358_34 && b359_23 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1525;
}
if(b355_39 && b356_39 && b357_14 && b358_41 && b359_31 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1526;
}
if(b355_39 && b356_39 && b357_14 && b358_41 && b359_71 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1527;
}
if(b358_58 && b359_22 && b360_32 && b361_4 && b362_33 && b363_34) {
pattern_id = 1528;
}
if(b360_37 && b361_38 && b362_47 && b363_3) {
pattern_id = 1529;
}
if(b360_37 && b361_38 && b362_43 && b363_7) {
pattern_id = 1530;
}
if(b355_39 && b356_39 && b357_54 && b358_29 && b359_23 && b360_48 && b361_13 && b362_38 && b363_4) {
pattern_id = 1531;
}
if(b359_27 && b360_42 && b361_14 && b362_40 && b363_12) {
pattern_id = 1532;
}
if(b360_37 && b361_42 && b362_45 && b363_40) {
pattern_id = 1533;
}
if(b361_55 && b362_33 && b363_44) {
pattern_id = 1534;
}
if(b359_27 && b360_45 && b361_43 && b362_4 && b363_7) {
pattern_id = 1535;
}
if(b360_37 && b361_62 && b362_45 && b363_7) {
pattern_id = 1536;
}
if(b359_27 && b360_32 && b361_6 && b362_49 && b363_4) {
pattern_id = 1537;
}
if(b360_37 && b361_62 && b362_43 && b363_67) {
pattern_id = 1538;
}
if(b361_55 && b362_72 && b363_31) {
pattern_id = 1539;
}
if(b360_37 && b361_3 && b362_7 && b363_3) {
pattern_id = 1540;
}
if(b357_59 && b358_6 && b359_56 && b360_27 && b361_26 && b362_56 && b363_6) {
pattern_id = 1541;
}
if(b340_46 && b341_8 && b342_52 && b343_24 && b344_40 && b345_17 && b346_10 && b347_61 && b348_4 && b349_57 && b350_59 && b351_27 && b352_57 && b353_20 && b354_17 && b355_18 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1542;
}
if(b335_43 && b336_20 && b337_15 && b338_44 && b339_22 && b340_35 && b341_50 && b342_35 && b343_6 && b344_24 && b345_48 && b346_46 && b347_34 && b348_5 && b349_25 && b350_42 && b351_6 && b352_57 && b353_8 && b354_8 && b355_14 && b356_54 && b357_15 && b358_9 && b359_38 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1543;
}
if(b353_4 && b354_3 && b355_5 && b356_6 && b357_6 && b358_6 && b359_6 && b360_5 && b361_4 && b362_5 && b363_4) {
pattern_id = 1544;
}
if(b308_10 && b309_4 && b310_2 && b311_4 && b312_4 && b313_10 && b314_4 && b315_5 && b316_3 && b317_2 && b318_13 && b319_3 && b320_4 && b321_5 && b322_3 && b323_22 && b324_6 && b325_3 && b326_12 && b327_3 && b328_5 && b329_1 && b330_1 && b331_1 && b332_7 && b333_9 && b334_8 && b335_5 && b336_1 && b337_7 && b338_5 && b339_12 && b340_2 && b341_2 && b342_4 && b343_1 && b344_7 && b345_1 && b346_1 && b347_6 && b348_56 && b349_7 && b350_7 && b351_17 && b352_11 && b353_28 && b354_15 && b355_4 && b356_4 && b357_1 && b358_29 && b359_6 && b360_16 && b361_1 && b362_5 && b363_45) {
pattern_id = 1545;
}
if(b351_47 && b352_20 && b353_39 && b354_38 && b355_20 && b356_24 && b357_59 && b358_47 && b359_33 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1546;
}
if(b357_39 && b358_42 && b359_9 && b360_37 && b361_31 && b362_50 && b363_4) {
pattern_id = 1547;
}
if(b332_37 && b333_38 && b334_15 && b335_43 && b336_4 && b337_46 && b338_1 && b339_35 && b340_6 && b341_49 && b342_47 && b343_34 && b344_20 && b345_23 && b346_17 && b347_55 && b348_7 && b349_7 && b350_7 && b351_1 && b352_5 && b353_3 && b354_7 && b355_23 && b356_30 && b357_15 && b358_2 && b359_19 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1548;
}
if(b354_26 && b355_21 && b356_13 && b357_59 && b358_48 && b359_70 && b360_3 && b361_20 && b362_1 && b363_1) {
pattern_id = 1549;
}
if(b351_47 && b352_28 && b353_52 && b354_14 && b355_20 && b356_24 && b357_59 && b358_47 && b359_33 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1550;
}
if(b357_39 && b358_57 && b359_35 && b360_29 && b361_20 && b362_28 && b363_12) {
pattern_id = 1551;
}
if(b360_39 && b361_42 && b362_43 && b363_34) {
pattern_id = 1552;
}
if(b355_52 && b356_3 && b357_28 && b358_42 && b359_11 && b360_39 && b361_38 && b362_43 && b363_66) {
pattern_id = 1553;
}
if(b351_47 && b352_48 && b353_39 && b354_38 && b355_20 && b356_24 && b357_59 && b358_47 && b359_33 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1554;
}
if(b360_39 && b361_3 && b362_50 && b363_62) {
pattern_id = 1555;
}
if(b362_47 && b363_3) {
pattern_id = 1556;
}
if(b360_39 && b361_48 && b362_22 && b363_3) {
pattern_id = 1557;
}
if(b358_8 && b359_5 && b360_22 && b361_48 && b362_61 && b363_31) {
pattern_id = 1558;
}
if(b360_39 && b361_48 && b362_10 && b363_7) {
pattern_id = 1559;
}
if(b337_35 && b338_21 && b339_62 && b340_46 && b341_1 && b342_32 && b343_19 && b344_40 && b345_17 && b346_21 && b347_18 && b348_29 && b349_24 && b350_36 && b351_26 && b352_5 && b353_30 && b354_36 && b355_25 && b356_14 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 1560;
}
if(b360_39 && b361_48 && b362_10 && b363_74) {
pattern_id = 1561;
}
if(b355_52 && b356_73 && b357_63 && b358_8 && b359_48 && b360_37 && b361_42 && b362_37 && b363_34) {
pattern_id = 1562;
}
if(b358_8 && b359_71 && b360_39 && b361_43 && b362_4 && b363_7) {
pattern_id = 1563;
}
if(b360_39 && b361_49 && b362_47 && b363_3) {
pattern_id = 1564;
}
if(b336_11 && b337_44 && b338_39 && b339_7 && b340_35 && b341_35 && b342_3 && b343_42 && b344_40 && b345_17 && b346_46 && b347_34 && b348_4 && b349_65 && b350_19 && b351_45 && b352_23 && b353_8 && b354_8 && b355_1 && b356_27 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1565;
}
if(b348_47 && b349_31 && b350_34 && b351_49 && b352_23 && b353_32 && b354_15 && b355_37 && b356_13 && b357_1 && b358_23 && b359_13 && b360_45 && b361_27 && b362_25 && b363_5) {
pattern_id = 1566;
}
if(b331_46 && b332_2 && b333_33 && b334_39 && b335_6 && b336_15 && b337_24 && b338_50 && b339_27 && b340_35 && b341_11 && b342_8 && b343_18 && b344_1 && b345_9 && b346_1 && b347_6 && b348_25 && b349_31 && b350_41 && b351_28 && b352_21 && b353_17 && b354_10 && b355_2 && b356_28 && b357_63 && b358_5 && b359_68 && b360_3 && b361_24 && b362_3 && b363_1) {
pattern_id = 1567;
}
if(b356_45 && b357_49 && b358_19 && b359_7 && b360_28 && b361_26 && b362_20 && b363_29) {
pattern_id = 1568;
}
if(b338_45 && b339_29 && b340_35 && b341_8 && b342_40 && b343_46 && b344_71 && b345_70 && b346_60 && b347_71 && b348_17 && b349_54 && b350_6 && b351_15 && b352_19 && b353_3 && b354_16 && b355_14 && b356_9 && b357_20 && b358_2 && b359_38 && b360_27 && b361_29 && b362_34 && b363_12) {
pattern_id = 1569;
}
if(b350_23 && b351_34 && b352_40 && b353_8 && b354_36 && b355_6 && b356_29 && b357_3 && b358_18 && b359_26 && b360_2 && b361_62 && b362_9 && b363_6) {
pattern_id = 1570;
}
if(b358_8 && b359_19 && b360_10 && b361_7 && b362_19 && b363_7) {
pattern_id = 1571;
}
if(b333_23 && b334_45 && b335_33 && b336_40 && b337_44 && b338_32 && b339_22 && b340_59 && b341_1 && b342_43 && b343_28 && b344_28 && b345_58 && b346_27 && b347_47 && b348_11 && b349_9 && b350_76 && b351_5 && b352_61 && b353_46 && b354_12 && b355_48 && b356_50 && b357_18 && b358_9 && b359_11 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1572;
}
if(b340_41 && b341_52 && b342_48 && b343_52 && b344_34 && b345_21 && b346_42 && b347_6 && b348_50 && b349_4 && b350_3 && b351_36 && b352_7 && b353_11 && b354_29 && b355_54 && b356_15 && b357_6 && b358_3 && b359_67 && b360_34 && b361_59 && b362_37 && b363_33) {
pattern_id = 1573;
}
if(b320_28 && b321_46 && b322_25 && b323_46 && b324_16 && b325_15 && b326_30 && b327_3 && b328_11 && b329_9 && b330_8 && b331_42 && b332_3 && b333_2 && b334_55 && b335_8 && b336_19 && b337_41 && b338_33 && b339_49 && b340_58 && b341_68 && b342_7 && b343_63 && b344_51 && b345_56 && b346_5 && b347_57 && b348_17 && b349_1 && b350_58 && b351_10 && b352_72 && b353_25 && b354_18 && b355_50 && b356_12 && b357_53 && b358_18 && b359_21 && b360_70 && b361_63 && b362_4 && b363_29) {
pattern_id = 1574;
}
if(b345_53 && b346_27 && b347_56 && b348_25 && b349_27 && b350_22 && b351_52 && b352_9 && b353_8 && b354_25 && b355_3 && b356_51 && b357_9 && b358_14 && b359_35 && b360_14 && b361_65 && b362_7 && b363_7) {
pattern_id = 1575;
}
if(b354_63 && b355_21 && b356_68 && b357_66 && b358_40 && b359_2 && b360_18 && b361_8 && b362_8 && b363_51) {
pattern_id = 1576;
}
if(b355_61 && b356_3 && b357_66 && b358_42 && b359_54 && b360_70 && b361_21 && b362_23 && b363_34) {
pattern_id = 1577;
}
if(b348_21 && b349_23 && b350_27 && b351_28 && b352_29 && b353_9 && b354_33 && b355_11 && b356_6 && b357_4 && b358_27 && b359_45 && b360_1 && b361_47 && b362_12 && b363_51) {
pattern_id = 1578;
}
if(b361_48 && b362_10 && b363_35) {
pattern_id = 1579;
}
if(b357_28 && b358_47 && b359_54 && b360_60 && b361_64 && b362_22 && b363_7) {
pattern_id = 1580;
}
if(b359_5 && b360_37 && b361_4 && b362_6 && b363_34) {
pattern_id = 1581;
}
if(b338_21 && b339_21 && b340_33 && b341_42 && b342_30 && b343_54 && b344_34 && b345_45 && b346_16 && b347_59 && b348_38 && b349_35 && b350_36 && b351_24 && b352_24 && b353_27 && b354_28 && b355_69 && b356_11 && b357_8 && b358_54 && b359_57 && b360_30 && b361_22 && b362_9 && b363_26) {
pattern_id = 1582;
}
if(b343_34 && b344_40 && b345_31 && b346_46 && b347_33 && b348_35 && b349_31 && b350_34 && b351_33 && b352_28 && b353_27 && b354_25 && b355_25 && b356_34 && b357_35 && b358_46 && b359_40 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1583;
}
if(b349_45 && b350_34 && b351_29 && b352_29 && b353_10 && b354_10 && b355_2 && b356_7 && b357_18 && b358_28 && b359_34 && b360_22 && b361_34 && b362_40 && b363_40) {
pattern_id = 1584;
}
if(b360_7 && b361_42 && b362_3 && b363_45) {
pattern_id = 1585;
}
if(b353_35 && b354_39 && b355_52 && b356_73 && b357_63 && b358_8 && b359_48 && b360_37 && b361_42 && b362_37 && b363_34) {
pattern_id = 1586;
}
if(b354_47 && b355_8 && b356_37 && b357_14 && b358_34 && b359_22 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1587;
}
if(b360_7 && b361_3 && b362_7 && b363_7) {
pattern_id = 1588;
}
if(b359_75 && b360_39 && b361_38 && b362_49 && b363_4) {
pattern_id = 1589;
}
if(b334_47 && b335_62 && b336_13 && b337_62 && b338_1 && b339_3 && b340_50 && b341_24 && b342_24 && b343_24 && b344_67 && b345_70 && b346_26 && b347_22 && b348_38 && b349_47 && b350_36 && b351_34 && b352_41 && b353_10 && b354_62 && b355_3 && b356_55 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1590;
}
if(b355_35 && b356_45 && b357_27 && b358_58 && b359_70 && b360_14 && b361_3 && b362_43 && b363_4) {
pattern_id = 1591;
}
if(b343_59 && b344_51 && b345_68 && b346_34 && b347_6 && b348_32 && b349_1 && b350_1 && b351_28 && b352_13 && b353_8 && b354_28 && b355_1 && b356_1 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1592;
}
if(b360_7 && b361_3 && b362_49 && b363_4) {
pattern_id = 1593;
}
if(b354_47 && b355_14 && b356_8 && b357_9 && b358_38 && b359_9 && b360_58 && b361_8 && b362_20 && b363_6) {
pattern_id = 1594;
}
if(b344_38 && b345_42 && b346_21 && b347_43 && b348_57 && b349_4 && b350_52 && b351_5 && b352_29 && b353_29 && b354_72 && b355_20 && b356_21 && b357_73 && b358_45 && b359_54 && b360_52 && b361_53 && b362_15 && b363_6) {
pattern_id = 1595;
}
if(b333_32 && b334_21 && b335_28 && b336_3 && b337_40 && b338_19 && b339_37 && b340_35 && b341_42 && b342_24 && b343_60 && b344_1 && b345_56 && b346_22 && b347_5 && b348_55 && b349_34 && b350_26 && b351_6 && b352_48 && b353_48 && b354_5 && b355_10 && b356_10 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1596;
}
if(b334_47 && b335_31 && b336_20 && b337_36 && b338_52 && b339_41 && b340_25 && b341_8 && b342_25 && b343_3 && b344_59 && b345_3 && b346_53 && b347_5 && b348_15 && b349_48 && b350_42 && b351_5 && b352_5 && b353_17 && b354_5 && b355_48 && b356_8 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1597;
}
if(b334_47 && b335_31 && b336_20 && b337_36 && b338_52 && b339_41 && b340_25 && b341_8 && b342_25 && b343_3 && b344_59 && b345_3 && b346_49 && b347_31 && b348_62 && b349_18 && b350_42 && b351_45 && b352_21 && b353_20 && b354_71 && b355_18 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1598;
}
if(b273_5 && b274_7 && b275_1 && b276_5 && b277_8 && b278_6 && b279_8 && b280_8 && b281_7 && b282_6 && b283_14 && b284_2 && b285_20 && b286_11 && b287_20 && b288_21 && b289_19 && b290_8 && b291_22 && b292_15 && b293_18 && b294_14 && b295_3 && b296_18 && b297_20 && b298_17 && b299_15 && b300_20 && b301_17 && b302_19 && b303_29 && b304_17 && b305_26 && b306_13 && b307_29 && b308_6 && b309_15 && b310_10 && b311_12 && b312_3 && b313_31 && b314_18 && b315_35 && b316_14 && b317_3 && b318_38 && b319_2 && b320_20 && b321_5 && b322_3 && b323_9 && b324_42 && b325_2 && b326_3 && b327_44 && b328_22 && b329_33 && b330_18 && b331_22 && b332_25 && b333_3 && b334_5 && b335_58 && b336_48 && b337_6 && b338_7 && b339_43 && b340_16 && b341_11 && b342_8 && b343_23 && b344_7 && b345_3 && b346_38 && b347_43 && b348_26 && b349_29 && b350_26 && b351_7 && b352_6 && b353_20 && b354_69 && b355_18 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1599;
}
if(b305_35 && b306_19 && b307_29 && b308_38 && b309_33 && b310_36 && b311_38 && b312_5 && b313_22 && b314_44 && b315_40 && b316_7 && b317_43 && b318_29 && b319_44 && b320_34 && b321_31 && b322_35 && b323_26 && b324_15 && b325_47 && b326_36 && b327_4 && b328_4 && b329_55 && b330_19 && b331_22 && b332_41 && b333_13 && b334_27 && b335_35 && b336_33 && b337_21 && b338_28 && b339_18 && b340_9 && b341_10 && b342_7 && b343_10 && b344_1 && b345_52 && b346_29 && b347_10 && b348_24 && b349_43 && b350_74 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1600;
}
if(b289_13 && b290_11 && b291_13 && b292_10 && b293_12 && b294_12 && b295_9 && b296_12 && b297_10 && b298_7 && b299_14 && b300_2 && b301_11 && b302_11 && b303_13 && b304_17 && b305_16 && b306_13 && b307_7 && b308_20 && b309_11 && b310_14 && b311_4 && b312_3 && b313_20 && b314_27 && b315_24 && b316_29 && b317_25 && b318_30 && b319_1 && b320_34 && b321_23 && b322_35 && b323_29 && b324_6 && b325_11 && b326_11 && b327_3 && b328_4 && b329_45 && b330_31 && b331_5 && b332_13 && b333_45 && b334_8 && b335_37 && b336_9 && b337_7 && b338_1 && b339_55 && b340_8 && b341_42 && b342_43 && b343_3 && b344_42 && b345_34 && b346_45 && b347_63 && b348_26 && b349_39 && b350_68 && b351_26 && b352_6 && b353_17 && b354_48 && b355_1 && b356_46 && b357_44 && b358_6 && b359_26 && b360_18 && b361_30 && b362_30 && b363_77) {
pattern_id = 1601;
}
if(b291_25 && b292_18 && b293_13 && b294_23 && b295_20 && b296_20 && b297_22 && b298_8 && b299_10 && b300_7 && b301_15 && b302_15 && b303_31 && b304_11 && b305_29 && b306_6 && b307_9 && b308_27 && b309_19 && b310_11 && b311_33 && b312_9 && b313_4 && b314_2 && b315_36 && b316_40 && b317_38 && b318_24 && b319_11 && b320_1 && b321_18 && b322_17 && b323_28 && b324_11 && b325_17 && b326_20 && b327_24 && b328_13 && b329_1 && b330_52 && b331_46 && b332_49 && b333_38 && b334_5 && b335_17 && b336_43 && b337_1 && b338_4 && b339_10 && b340_4 && b341_11 && b342_63 && b343_30 && b344_35 && b345_35 && b346_22 && b347_30 && b348_29 && b349_9 && b350_2 && b351_27 && b352_5 && b353_45 && b354_62 && b355_4 && b356_76 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1602;
}
if(b274_6 && b275_6 && b276_4 && b277_7 && b278_5 && b279_7 && b280_7 && b281_1 && b282_5 && b283_6 && b284_12 && b285_12 && b286_13 && b287_14 && b288_16 && b289_15 && b290_8 && b291_17 && b292_5 && b293_16 && b294_16 && b295_13 && b296_3 && b297_4 && b298_15 && b299_17 && b300_16 && b301_14 && b302_14 && b303_19 && b304_20 && b305_9 && b306_3 && b307_23 && b308_23 && b309_3 && b310_19 && b311_19 && b312_18 && b313_7 && b314_30 && b315_28 && b316_27 && b317_3 && b318_32 && b319_29 && b320_37 && b321_39 && b322_7 && b323_16 && b324_3 && b325_5 && b326_20 && b327_6 && b328_29 && b329_48 && b330_50 && b331_42 && b332_13 && b333_43 && b334_1 && b335_55 && b336_2 && b337_45 && b338_27 && b339_42 && b340_56 && b341_23 && b342_26 && b343_22 && b344_4 && b345_29 && b346_1 && b347_3 && b348_7 && b349_1 && b350_6 && b351_6 && b352_9 && b353_1 && b354_36 && b355_1 && b356_32 && b357_15 && b358_53 && b359_52 && b360_35 && b361_24 && b362_28 && b363_12) {
pattern_id = 1603;
}
if(b275_20 && b276_20 && b277_13 && b278_1 && b279_21 && b280_25 && b281_25 && b282_12 && b283_11 && b284_14 && b285_26 && b286_3 && b287_27 && b288_26 && b289_28 && b290_25 && b291_17 && b292_7 && b293_30 && b294_27 && b295_25 && b296_28 && b297_3 && b298_6 && b299_31 && b300_25 && b301_4 && b302_27 && b303_33 && b304_11 && b305_32 && b306_19 && b307_5 && b308_37 && b309_32 && b310_4 && b311_36 && b312_9 && b313_35 && b314_4 && b315_19 && b316_24 && b317_2 && b318_4 && b319_17 && b320_48 && b321_40 && b322_44 && b323_27 && b324_4 && b325_30 && b326_6 && b327_47 && b328_4 && b329_53 && b330_15 && b331_30 && b332_59 && b333_27 && b334_28 && b335_11 && b336_1 && b337_5 && b338_2 && b339_1 && b340_14 && b341_2 && b342_20 && b343_6 && b344_12 && b345_22 && b346_10 && b347_22 && b348_35 && b349_25 && b350_51 && b351_39 && b352_16 && b353_43 && b354_11 && b355_18 && b356_42 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1604;
}
if(b202_7 && b203_6 && b204_6 && b205_6 && b206_6 && b207_5 && b208_7 && b209_6 && b210_6 && b211_5 && b212_7 && b213_7 && b214_7 && b215_6 && b216_6 && b217_7 && b218_7 && b219_9 && b220_8 && b221_8 && b222_8 && b223_7 && b224_8 && b225_2 && b226_9 && b227_8 && b228_5 && b229_8 && b230_7 && b231_9 && b232_9 && b233_7 && b234_12 && b235_10 && b236_7 && b237_9 && b238_9 && b239_7 && b240_11 && b241_1 && b242_5 && b243_5 && b244_4 && b245_5 && b246_8 && b247_9 && b248_9 && b249_11 && b250_9 && b251_10 && b252_6 && b253_11 && b254_4 && b255_12 && b256_11 && b257_10 && b258_14 && b259_3 && b260_4 && b261_12 && b262_6 && b263_15 && b264_13 && b265_12 && b266_13 && b267_15 && b268_14 && b269_17 && b270_15 && b271_3 && b272_16 && b273_14 && b274_16 && b275_11 && b276_16 && b277_20 && b278_20 && b279_6 && b280_22 && b281_19 && b282_18 && b283_18 && b284_2 && b285_22 && b286_23 && b287_15 && b288_22 && b289_9 && b290_22 && b291_4 && b292_6 && b293_28 && b294_23 && b295_19 && b296_24 && b297_6 && b298_21 && b299_28 && b300_21 && b301_24 && b302_4 && b303_32 && b304_28 && b305_31 && b306_28 && b307_32 && b308_13 && b309_17 && b310_30 && b311_33 && b312_3 && b313_37 && b314_1 && b315_37 && b316_38 && b317_16 && b318_28 && b319_18 && b320_41 && b321_34 && b322_44 && b323_27 && b324_3 && b325_48 && b326_20 && b327_4 && b328_39 && b329_6 && b330_1 && b331_13 && b332_7 && b333_54 && b334_35 && b335_31 && b336_30 && b337_59 && b338_1 && b339_42 && b340_22 && b341_8 && b342_36 && b343_53 && b344_5 && b345_34 && b346_45 && b347_44 && b348_41 && b349_39 && b350_41 && b351_7 && b352_25 && b353_43 && b354_12 && b355_11 && b356_50 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1605;
}
if(b213_5 && b214_5 && b215_4 && b216_4 && b217_5 && b218_5 && b219_6 && b220_5 && b221_5 && b222_5 && b223_5 && b224_1 && b225_5 && b226_6 && b227_6 && b228_5 && b229_5 && b230_2 && b231_5 && b232_6 && b233_10 && b234_7 && b235_1 && b236_1 && b237_5 && b238_5 && b239_2 && b240_6 && b241_4 && b242_6 && b243_6 && b244_6 && b245_6 && b246_5 && b247_6 && b248_2 && b249_7 && b250_5 && b251_5 && b252_6 && b253_6 && b254_7 && b255_8 && b256_8 && b257_4 && b258_13 && b259_8 && b260_2 && b261_6 && b262_7 && b263_10 && b264_6 && b265_3 && b266_9 && b267_8 && b268_6 && b269_11 && b270_10 && b271_10 && b272_7 && b273_9 && b274_13 && b275_11 && b276_9 && b277_2 && b278_13 && b279_15 && b280_3 && b281_13 && b282_13 && b283_5 && b284_2 && b285_14 && b286_15 && b287_17 && b288_18 && b289_16 && b290_5 && b291_18 && b292_15 && b293_14 && b294_14 && b295_3 && b296_16 && b297_2 && b298_2 && b299_18 && b300_2 && b301_3 && b302_16 && b303_2 && b304_2 && b305_1 && b306_17 && b307_1 && b308_29 && b309_27 && b310_5 && b311_13 && b312_23 && b313_13 && b314_7 && b315_11 && b316_42 && b317_3 && b318_30 && b319_11 && b320_30 && b321_31 && b322_17 && b323_24 && b324_1 && b325_9 && b326_29 && b327_9 && b328_35 && b329_25 && b330_26 && b331_49 && b332_25 && b333_49 && b334_56 && b335_52 && b336_21 && b337_24 && b338_39 && b339_28 && b340_54 && b341_52 && b342_39 && b343_40 && b344_34 && b345_36 && b346_36 && b347_5 && b348_42 && b349_31 && b350_41 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_20 && b359_3 && b360_8 && b361_39 && b362_73 && b363_4) {
pattern_id = 1606;
}
if(b307_18 && b308_17 && b309_9 && b310_13 && b311_13 && b312_11 && b313_19 && b314_23 && b315_7 && b316_23 && b317_29 && b318_4 && b319_29 && b320_30 && b321_24 && b322_24 && b323_26 && b324_15 && b325_7 && b326_6 && b327_6 && b328_12 && b329_14 && b330_9 && b331_9 && b332_48 && b333_30 && b334_34 && b335_38 && b336_15 && b337_42 && b338_40 && b339_2 && b340_52 && b341_29 && b342_3 && b343_16 && b344_52 && b345_29 && b346_9 && b347_57 && b348_13 && b349_9 && b350_15 && b351_17 && b352_5 && b353_42 && b354_18 && b355_23 && b356_11 && b357_52 && b358_24 && b359_41 && b360_3 && b361_20 && b362_34 && b363_1) {
pattern_id = 1607;
}
if(b338_51 && b339_16 && b340_35 && b341_35 && b342_16 && b343_18 && b344_41 && b345_17 && b346_46 && b347_34 && b348_68 && b349_9 && b350_46 && b351_52 && b352_22 && b353_38 && b354_5 && b355_3 && b356_8 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1608;
}
if(b339_60 && b340_27 && b341_8 && b342_39 && b343_58 && b344_15 && b345_50 && b346_21 && b347_18 && b348_34 && b349_69 && b350_3 && b351_27 && b352_24 && b353_53 && b354_14 && b355_9 && b356_16 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1609;
}
if(b332_23 && b333_3 && b334_30 && b335_40 && b336_39 && b337_14 && b338_49 && b339_18 && b340_3 && b341_34 && b342_60 && b343_6 && b344_38 && b345_42 && b346_21 && b347_43 && b348_57 && b349_4 && b350_52 && b351_5 && b352_29 && b353_29 && b354_72 && b355_20 && b356_70 && b357_15 && b358_73 && b359_12 && b360_26 && b361_23 && b362_18 && b363_28) {
pattern_id = 1610;
}
if(b339_60 && b340_27 && b341_8 && b342_39 && b343_58 && b344_15 && b345_50 && b346_21 && b347_18 && b348_34 && b349_69 && b350_3 && b351_40 && b352_4 && b353_32 && b354_6 && b355_15 && b356_1 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1611;
}
if(b333_32 && b334_21 && b335_28 && b336_3 && b337_40 && b338_19 && b339_37 && b340_35 && b341_42 && b342_24 && b343_60 && b344_1 && b345_2 && b346_21 && b347_28 && b348_48 && b349_25 && b350_3 && b351_54 && b352_1 && b353_8 && b354_54 && b355_63 && b356_55 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1612;
}
if(b341_31 && b342_30 && b343_24 && b344_40 && b345_55 && b346_18 && b347_49 && b348_11 && b349_39 && b350_12 && b351_67 && b352_5 && b353_46 && b354_55 && b355_16 && b356_66 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1613;
}
if(b343_59 && b344_13 && b345_17 && b346_10 && b347_27 && b348_31 && b349_48 && b350_26 && b351_7 && b352_6 && b353_70 && b354_4 && b355_13 && b356_12 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1614;
}
if(b347_24 && b348_29 && b349_31 && b350_34 && b351_33 && b352_20 && b353_9 && b354_3 && b355_16 && b356_7 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 1615;
}
if(b334_47 && b335_31 && b336_20 && b337_36 && b338_52 && b339_41 && b340_25 && b341_8 && b342_25 && b343_3 && b344_7 && b345_64 && b346_18 && b347_1 && b348_32 && b349_1 && b350_1 && b351_30 && b352_30 && b353_59 && b354_68 && b355_21 && b356_68 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1616;
}
if(b341_31 && b342_30 && b343_24 && b344_40 && b345_55 && b346_18 && b347_49 && b348_11 && b349_39 && b350_12 && b351_2 && b352_35 && b353_36 && b354_4 && b355_22 && b356_4 && b357_1 && b358_48 && b359_80 && b360_3 && b361_9 && b362_6 && b363_1) {
pattern_id = 1617;
}
if(b331_43 && b332_38 && b333_28 && b334_18 && b335_52 && b336_34 && b337_16 && b338_27 && b339_17 && b340_42 && b341_11 && b342_8 && b343_18 && b344_1 && b345_9 && b346_1 && b347_6 && b348_69 && b349_32 && b350_23 && b351_6 && b352_14 && b353_56 && b354_3 && b355_33 && b356_55 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1618;
}
if(b338_51 && b339_16 && b340_35 && b341_35 && b342_16 && b343_18 && b344_41 && b345_17 && b346_46 && b347_34 && b348_10 && b349_33 && b350_16 && b351_6 && b352_18 && b353_3 && b354_15 && b355_34 && b356_10 && b357_6 && b358_51 && b359_48 && b360_6 && b361_12 && b362_1 && b363_22) {
pattern_id = 1619;
}
if(b335_30 && b336_14 && b337_44 && b338_39 && b339_49 && b340_15 && b341_3 && b342_27 && b343_26 && b344_42 && b345_11 && b346_13 && b347_10 && b348_4 && b349_28 && b350_7 && b351_2 && b352_28 && b353_39 && b354_32 && b355_39 && b356_80 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1620;
}
if(b333_32 && b334_21 && b335_28 && b336_3 && b337_40 && b338_19 && b339_37 && b340_35 && b341_42 && b342_24 && b343_10 && b344_22 && b345_27 && b346_7 && b347_15 && b348_1 && b349_7 && b350_39 && b351_28 && b352_29 && b353_38 && b354_8 && b355_13 && b356_10 && b357_9 && b358_21 && b359_11 && b360_45 && b361_42 && b362_39 && b363_4) {
pattern_id = 1621;
}
if(b340_45 && b341_27 && b342_27 && b343_47 && b344_47 && b345_27 && b346_47 && b347_22 && b348_38 && b349_44 && b350_1 && b351_15 && b352_20 && b353_12 && b354_16 && b355_4 && b356_18 && b357_66 && b358_37 && b359_59 && b360_13 && b361_23 && b362_25 && b363_11) {
pattern_id = 1622;
}
if(b284_24 && b285_27 && b286_23 && b287_19 && b288_27 && b289_22 && b290_28 && b291_13 && b292_16 && b293_31 && b294_3 && b295_27 && b296_20 && b297_4 && b298_14 && b299_7 && b300_4 && b301_11 && b302_11 && b303_13 && b304_17 && b305_16 && b306_13 && b307_7 && b308_20 && b309_11 && b310_14 && b311_4 && b312_3 && b313_20 && b314_27 && b315_24 && b316_29 && b317_25 && b318_30 && b319_1 && b320_34 && b321_23 && b322_35 && b323_29 && b324_6 && b325_11 && b326_11 && b327_3 && b328_4 && b329_51 && b330_22 && b331_53 && b332_10 && b333_5 && b334_40 && b335_44 && b336_1 && b337_7 && b338_24 && b339_30 && b340_9 && b341_1 && b342_63 && b343_30 && b344_35 && b345_35 && b346_22 && b347_30 && b348_29 && b349_9 && b350_2 && b351_27 && b352_5 && b353_61 && b354_62 && b355_30 && b356_76 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1623;
}
if(b276_14 && b277_22 && b278_23 && b279_14 && b280_24 && b281_24 && b282_21 && b283_18 && b284_8 && b285_25 && b286_6 && b287_26 && b288_25 && b289_3 && b290_24 && b291_3 && b292_3 && b293_29 && b294_15 && b295_24 && b296_13 && b297_24 && b298_27 && b299_30 && b300_9 && b301_22 && b302_28 && b303_7 && b304_9 && b305_34 && b306_18 && b307_15 && b308_9 && b309_5 && b310_33 && b311_18 && b312_14 && b313_39 && b314_10 && b315_11 && b316_27 && b317_9 && b318_34 && b319_3 && b320_2 && b321_45 && b322_46 && b323_44 && b324_8 && b325_4 && b326_45 && b327_28 && b328_9 && b329_1 && b330_34 && b331_10 && b332_7 && b333_5 && b334_60 && b335_36 && b336_28 && b337_33 && b338_44 && b339_54 && b340_27 && b341_1 && b342_33 && b343_34 && b344_1 && b345_57 && b346_45 && b347_4 && b348_10 && b349_33 && b350_20 && b351_2 && b352_5 && b353_25 && b354_61 && b355_30 && b356_76 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1624;
}
if(b310_34 && b311_7 && b312_5 && b313_11 && b314_43 && b315_23 && b316_47 && b317_15 && b318_37 && b319_1 && b320_3 && b321_34 && b322_2 && b323_2 && b324_23 && b325_3 && b326_20 && b327_50 && b328_2 && b329_54 && b330_31 && b331_26 && b332_34 && b333_36 && b334_28 && b335_50 && b336_43 && b337_1 && b338_1 && b339_64 && b340_31 && b341_23 && b342_31 && b343_31 && b344_26 && b345_4 && b346_20 && b347_50 && b348_48 && b349_31 && b350_1 && b351_15 && b352_38 && b353_11 && b354_4 && b355_50 && b356_45 && b357_12 && b358_42 && b359_11 && b360_34 && b361_30 && b362_1 && b363_77) {
pattern_id = 1625;
}
if(b312_25 && b313_12 && b314_23 && b315_32 && b316_46 && b317_8 && b318_42 && b319_10 && b320_42 && b321_18 && b322_3 && b323_9 && b324_21 && b325_4 && b326_16 && b327_4 && b328_12 && b329_51 && b330_23 && b331_52 && b332_24 && b333_29 && b334_38 && b335_41 && b336_23 && b337_18 && b338_43 && b339_1 && b340_6 && b341_67 && b342_36 && b343_48 && b344_19 && b345_34 && b346_44 && b347_34 && b348_26 && b349_19 && b350_42 && b351_5 && b352_11 && b353_42 && b354_18 && b355_23 && b356_76 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1626;
}
if(b329_56 && b330_14 && b331_21 && b332_28 && b333_51 && b334_15 && b335_59 && b336_20 && b337_47 && b338_38 && b339_12 && b340_20 && b341_6 && b342_3 && b343_22 && b344_4 && b345_11 && b346_49 && b347_5 && b348_62 && b349_18 && b350_42 && b351_45 && b352_21 && b353_20 && b354_69 && b355_18 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1627;
}
if(b320_46 && b321_15 && b322_15 && b323_21 && b324_36 && b325_10 && b326_46 && b327_16 && b328_35 && b329_17 && b330_4 && b331_14 && b332_17 && b333_5 && b334_7 && b335_5 && b336_7 && b337_60 && b338_45 && b339_63 && b340_41 && b341_54 && b342_64 && b343_26 && b344_34 && b345_4 && b346_36 && b347_1 && b348_70 && b349_21 && b350_36 && b351_65 && b352_24 && b353_46 && b354_10 && b355_2 && b356_76 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1628;
}
if(b328_40 && b329_21 && b330_15 && b331_2 && b332_47 && b333_34 && b334_41 && b335_28 && b336_28 && b337_41 && b338_4 && b339_10 && b340_15 && b341_1 && b342_9 && b343_1 && b344_7 && b345_19 && b346_21 && b347_30 && b348_13 && b349_36 && b350_28 && b351_7 && b352_41 && b353_50 && b354_3 && b355_14 && b356_7 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1629;
}
if(b330_55 && b331_25 && b332_2 && b333_25 && b334_39 && b335_19 && b336_41 && b337_44 && b338_41 && b339_22 && b340_9 && b341_10 && b342_2 && b343_6 && b344_45 && b345_1 && b346_9 && b347_40 && b348_11 && b349_27 && b350_34 && b351_54 && b352_42 && b353_5 && b354_36 && b355_25 && b356_7 && b357_18 && b358_16 && b359_19 && b360_3 && b361_24 && b362_37 && b363_1) {
pattern_id = 1630;
}
if(b327_48 && b328_33 && b329_19 && b330_28 && b331_49 && b332_17 && b333_48 && b334_30 && b335_42 && b336_30 && b337_7 && b338_24 && b339_41 && b340_6 && b341_41 && b342_1 && b343_10 && b344_51 && b345_17 && b346_46 && b347_44 && b348_15 && b349_36 && b350_8 && b351_33 && b352_14 && b353_46 && b354_43 && b355_1 && b356_28 && b357_6 && b358_38 && b359_60 && b360_13 && b361_44 && b362_21 && b363_57) {
pattern_id = 1631;
}
if(b337_50 && b338_40 && b339_18 && b340_36 && b341_15 && b342_2 && b343_41 && b344_34 && b345_36 && b346_42 && b347_6 && b348_50 && b349_4 && b350_3 && b351_36 && b352_7 && b353_11 && b354_47 && b355_14 && b356_8 && b357_9 && b358_51 && b359_40 && b360_27 && b361_44 && b362_11 && b363_22) {
pattern_id = 1632;
}
if(b338_51 && b339_16 && b340_35 && b341_35 && b342_16 && b343_18 && b344_41 && b345_17 && b346_46 && b347_34 && b348_10 && b349_33 && b350_16 && b351_6 && b352_18 && b353_3 && b354_15 && b355_72 && b356_29 && b357_6 && b358_9 && b359_57 && b360_11 && b361_26 && b362_18 && b363_10) {
pattern_id = 1633;
}
if(b335_30 && b336_14 && b337_44 && b338_39 && b339_49 && b340_15 && b341_3 && b342_27 && b343_26 && b344_42 && b345_11 && b346_13 && b347_10 && b348_4 && b349_28 && b350_7 && b351_2 && b352_45 && b353_37 && b354_36 && b355_1 && b356_35 && b357_51 && b358_9 && b359_3 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1634;
}
if(b331_43 && b332_38 && b333_28 && b334_18 && b335_52 && b336_34 && b337_16 && b338_27 && b339_17 && b340_42 && b341_11 && b342_8 && b343_18 && b344_1 && b345_9 && b346_1 && b347_6 && b348_25 && b349_27 && b350_24 && b351_21 && b352_4 && b353_29 && b354_3 && b355_14 && b356_7 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1635;
}
if(b350_35 && b351_35 && b352_23 && b353_32 && b354_40 && b355_12 && b356_50 && b357_18 && b358_46 && b359_19 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1636;
}
if(b349_42 && b350_4 && b351_5 && b352_1 && b353_51 && b354_7 && b355_48 && b356_8 && b357_3 && b358_11 && b359_6 && b360_5 && b361_4 && b362_5 && b363_4) {
pattern_id = 1637;
}
if(b341_31 && b342_30 && b343_24 && b344_40 && b345_55 && b346_18 && b347_49 && b348_11 && b349_39 && b350_12 && b351_2 && b352_35 && b353_36 && b354_15 && b355_20 && b356_71 && b357_39 && b358_48 && b359_27 && b360_4 && b361_10 && b362_43 && b363_30) {
pattern_id = 1638;
}
if(b324_34 && b325_20 && b326_26 && b327_27 && b328_42 && b329_9 && b330_48 && b331_21 && b332_35 && b333_33 && b334_8 && b335_37 && b336_34 && b337_7 && b338_1 && b339_30 && b340_36 && b341_23 && b342_25 && b343_3 && b344_8 && b345_58 && b346_45 && b347_10 && b348_9 && b349_9 && b350_20 && b351_21 && b352_4 && b353_23 && b354_8 && b355_1 && b356_41 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1639;
}
if(b334_47 && b335_31 && b336_20 && b337_36 && b338_52 && b339_41 && b340_25 && b341_8 && b342_25 && b343_3 && b344_7 && b345_64 && b346_18 && b347_6 && b348_4 && b349_57 && b350_12 && b351_26 && b352_22 && b353_26 && b354_36 && b355_25 && b356_54 && b357_19 && b358_6 && b359_17 && b360_29 && b361_37 && b362_28 && b363_12) {
pattern_id = 1640;
}
if(b333_32 && b334_21 && b335_28 && b336_3 && b337_40 && b338_19 && b339_37 && b340_35 && b341_42 && b342_24 && b343_10 && b344_22 && b345_27 && b346_9 && b347_1 && b348_53 && b349_27 && b350_49 && b351_29 && b352_2 && b353_43 && b354_16 && b355_18 && b356_42 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1641;
}
if(b335_30 && b336_14 && b337_44 && b338_39 && b339_49 && b340_15 && b341_3 && b342_27 && b343_26 && b344_42 && b345_11 && b346_13 && b347_10 && b348_10 && b349_9 && b350_39 && b351_28 && b352_45 && b353_32 && b354_12 && b355_14 && b356_6 && b357_32 && b358_11 && b359_11 && b360_66 && b361_42 && b362_43 && b363_31) {
pattern_id = 1642;
}
if(b331_43 && b332_38 && b333_28 && b334_18 && b335_52 && b336_34 && b337_16 && b338_27 && b339_17 && b340_42 && b341_11 && b342_8 && b343_18 && b344_7 && b345_3 && b346_49 && b347_5 && b348_62 && b349_18 && b350_6 && b351_45 && b352_21 && b353_20 && b354_69 && b355_18 && b356_4 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1643;
}
if(b318_25 && b319_8 && b320_27 && b321_26 && b322_30 && b323_7 && b324_30 && b325_17 && b326_39 && b327_19 && b328_12 && b329_15 && b330_29 && b331_9 && b332_1 && b333_18 && b334_35 && b335_48 && b336_33 && b337_20 && b338_28 && b339_24 && b340_28 && b341_21 && b342_51 && b343_1 && b344_1 && b345_61 && b346_36 && b347_5 && b348_25 && b349_43 && b350_28 && b351_26 && b352_24 && b353_47 && b354_10 && b355_1 && b356_18 && b357_29 && b358_13 && b359_11 && b360_35 && b361_1 && b362_5 && b363_77) {
pattern_id = 1644;
}
if(b313_16 && b314_9 && b315_11 && b316_17 && b317_34 && b318_35 && b319_36 && b320_27 && b321_1 && b322_38 && b323_16 && b324_3 && b325_10 && b326_20 && b327_6 && b328_47 && b329_32 && b330_51 && b331_28 && b332_34 && b333_29 && b334_27 && b335_25 && b336_52 && b337_49 && b338_2 && b339_2 && b340_9 && b341_41 && b342_14 && b343_10 && b344_21 && b345_48 && b346_33 && b347_2 && b348_17 && b349_44 && b350_8 && b351_48 && b352_40 && b353_49 && b354_15 && b355_22 && b356_26 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1645;
}
if(b273_5 && b274_7 && b275_1 && b276_5 && b277_8 && b278_6 && b279_8 && b280_8 && b281_7 && b282_6 && b283_5 && b284_7 && b285_8 && b286_6 && b287_6 && b288_9 && b289_9 && b290_7 && b291_9 && b292_7 && b293_9 && b294_10 && b295_7 && b296_8 && b297_9 && b298_2 && b299_11 && b300_8 && b301_9 && b302_1 && b303_3 && b304_8 && b305_1 && b306_1 && b307_14 && b308_6 && b309_15 && b310_10 && b311_12 && b312_3 && b313_16 && b314_4 && b315_19 && b316_24 && b317_2 && b318_4 && b319_26 && b320_28 && b321_29 && b322_19 && b323_2 && b324_14 && b325_30 && b326_12 && b327_3 && b328_11 && b329_5 && b330_4 && b331_4 && b332_48 && b333_30 && b334_34 && b335_38 && b336_15 && b337_42 && b338_40 && b339_2 && b340_52 && b341_29 && b342_3 && b343_13 && b344_52 && b345_1 && b346_9 && b347_57 && b348_13 && b349_7 && b350_3 && b351_5 && b352_29 && b353_51 && b354_47 && b355_52 && b356_76 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1646;
}
if(b274_6 && b275_6 && b276_4 && b277_7 && b278_5 && b279_7 && b280_7 && b281_1 && b282_5 && b283_6 && b284_6 && b285_5 && b286_4 && b287_2 && b288_5 && b289_8 && b290_6 && b291_8 && b292_1 && b293_9 && b294_9 && b295_6 && b296_7 && b297_8 && b298_9 && b299_7 && b300_2 && b301_8 && b302_6 && b303_9 && b304_5 && b305_12 && b306_6 && b307_13 && b308_5 && b309_14 && b310_9 && b311_7 && b312_4 && b313_6 && b314_21 && b315_4 && b316_7 && b317_24 && b318_5 && b319_7 && b320_5 && b321_7 && b322_9 && b323_36 && b324_32 && b325_35 && b326_40 && b327_6 && b328_16 && b329_31 && b330_1 && b331_9 && b332_13 && b333_4 && b334_8 && b335_1 && b336_47 && b337_3 && b338_41 && b339_23 && b340_24 && b341_45 && b342_30 && b343_6 && b344_60 && b345_53 && b346_7 && b347_14 && b348_56 && b349_1 && b350_1 && b351_15 && b352_38 && b353_11 && b354_4 && b355_1 && b356_28 && b357_36 && b358_63 && b359_63 && b360_3 && b361_20 && b362_34 && b363_1) {
pattern_id = 1647;
}
if(b334_47 && b335_31 && b336_20 && b337_36 && b338_52 && b339_41 && b340_25 && b341_8 && b342_25 && b343_3 && b344_7 && b345_64 && b346_18 && b347_6 && b348_4 && b349_32 && b350_45 && b351_14 && b352_67 && b353_36 && b354_39 && b355_26 && b356_38 && b357_1 && b358_1 && b359_10 && b360_3 && b361_65 && b362_7 && b363_56) {
pattern_id = 1648;
}
if(b330_55 && b331_25 && b332_2 && b333_25 && b334_39 && b335_19 && b336_41 && b337_44 && b338_41 && b339_22 && b340_9 && b341_10 && b342_2 && b343_10 && b344_1 && b345_19 && b346_21 && b347_34 && b348_47 && b349_56 && b350_19 && b351_20 && b352_4 && b353_32 && b354_6 && b355_20 && b356_70 && b357_13 && b358_46 && b359_8 && b360_58 && b361_8 && b362_8 && b363_28) {
pattern_id = 1649;
}
if(b251_4 && b252_4 && b253_3 && b254_5 && b255_5 && b256_5 && b257_5 && b258_6 && b259_5 && b260_6 && b261_6 && b262_7 && b263_6 && b264_6 && b265_3 && b266_6 && b267_5 && b268_1 && b269_7 && b270_6 && b271_6 && b272_6 && b273_2 && b274_9 && b275_9 && b276_2 && b277_4 && b278_2 && b279_11 && b280_11 && b281_2 && b282_9 && b283_4 && b284_8 && b285_11 && b286_11 && b287_11 && b288_13 && b289_3 && b290_13 && b291_15 && b292_2 && b293_14 && b294_14 && b295_11 && b296_6 && b297_5 && b298_13 && b299_3 && b300_2 && b301_12 && b302_3 && b303_8 && b304_18 && b305_2 && b306_3 && b307_21 && b308_5 && b309_1 && b310_5 && b311_1 && b312_16 && b313_22 && b314_2 && b315_26 && b316_33 && b317_2 && b318_17 && b319_31 && b320_3 && b321_3 && b322_15 && b323_18 && b324_6 && b325_33 && b326_21 && b327_3 && b328_4 && b329_30 && b330_28 && b331_21 && b332_38 && b333_33 && b334_35 && b335_25 && b336_31 && b337_49 && b338_9 && b339_43 && b340_14 && b341_9 && b342_14 && b343_6 && b344_46 && b345_17 && b346_10 && b347_33 && b348_26 && b349_25 && b350_22 && b351_39 && b352_2 && b353_22 && b354_62 && b355_36 && b356_31 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1650;
}
if(b332_23 && b333_3 && b334_30 && b335_40 && b336_39 && b337_14 && b338_49 && b339_18 && b340_3 && b341_34 && b342_4 && b343_5 && b344_15 && b345_11 && b346_7 && b347_39 && b348_24 && b349_31 && b350_34 && b351_29 && b352_11 && b353_61 && b354_56 && b355_23 && b356_26 && b357_33 && b358_36 && b359_1 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1651;
}
if(b340_45 && b341_27 && b342_27 && b343_47 && b344_47 && b345_27 && b346_47 && b347_22 && b348_38 && b349_44 && b350_1 && b351_15 && b352_20 && b353_11 && b354_4 && b355_59 && b356_15 && b357_35 && b358_16 && b359_15 && b360_18 && b361_26 && b362_27 && b363_5) {
pattern_id = 1652;
}
if(b332_23 && b333_3 && b334_30 && b335_40 && b336_39 && b337_14 && b338_49 && b339_18 && b340_3 && b341_34 && b342_4 && b343_5 && b344_15 && b345_11 && b346_7 && b347_69 && b348_17 && b349_3 && b350_54 && b351_1 && b352_4 && b353_23 && b354_41 && b355_1 && b356_41 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1653;
}
if(b341_31 && b342_30 && b343_24 && b344_40 && b345_55 && b346_18 && b347_49 && b348_11 && b349_39 && b350_12 && b351_2 && b352_35 && b353_36 && b354_15 && b355_20 && b356_45 && b357_27 && b358_68 && b359_6 && b360_35 && b361_6 && b362_5 && b363_36) {
pattern_id = 1654;
}
if(b342_34 && b343_8 && b344_34 && b345_45 && b346_16 && b347_10 && b348_55 && b349_31 && b350_22 && b351_26 && b352_11 && b353_42 && b354_7 && b355_23 && b356_11 && b357_61 && b358_3 && b359_8 && b360_8 && b361_7 && b362_35 && b363_6) {
pattern_id = 1655;
}
if(b324_34 && b325_20 && b326_26 && b327_27 && b328_42 && b329_9 && b330_48 && b331_21 && b332_35 && b333_33 && b334_8 && b335_37 && b336_34 && b337_7 && b338_1 && b339_60 && b340_26 && b341_39 && b342_19 && b343_3 && b344_34 && b345_42 && b346_7 && b347_44 && b348_15 && b349_50 && b350_22 && b351_45 && b352_4 && b353_8 && b354_45 && b355_1 && b356_41 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1656;
}
if(b315_8 && b316_11 && b317_15 && b318_12 && b319_15 && b320_10 && b321_13 && b322_15 && b323_18 && b324_9 && b325_2 && b326_10 && b327_21 && b328_12 && b329_6 && b330_24 && b331_21 && b332_31 && b333_33 && b334_18 && b335_28 && b336_28 && b337_33 && b338_40 && b339_2 && b340_41 && b341_8 && b342_36 && b343_15 && b344_40 && b345_22 && b346_42 && b347_47 && b348_4 && b349_4 && b350_22 && b351_29 && b352_40 && b353_57 && b354_54 && b355_1 && b356_41 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1657;
}
if(b336_58 && b337_26 && b338_27 && b339_21 && b340_54 && b341_6 && b342_42 && b343_24 && b344_35 && b345_4 && b346_9 && b347_57 && b348_31 && b349_7 && b350_3 && b351_61 && b352_24 && b353_27 && b354_65 && b355_3 && b356_7 && b357_51 && b358_48 && b359_43 && b360_13 && b361_8 && b362_20 && b363_6) {
pattern_id = 1658;
}
if(b335_30 && b336_14 && b337_44 && b338_39 && b339_49 && b340_15 && b341_3 && b342_27 && b343_26 && b344_42 && b345_11 && b346_13 && b347_10 && b348_10 && b349_9 && b350_71 && b351_34 && b352_40 && b353_46 && b354_5 && b355_11 && b356_34 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1659;
}
if(b337_50 && b338_40 && b339_18 && b340_36 && b341_15 && b342_2 && b343_41 && b344_34 && b345_36 && b346_42 && b347_6 && b348_50 && b349_4 && b350_1 && b351_6 && b352_21 && b353_10 && b354_5 && b355_38 && b356_10 && b357_2 && b358_6 && b359_24 && b360_2 && b361_52 && b362_15 && b363_51) {
pattern_id = 1660;
}
if(b317_24 && b318_20 && b319_10 && b320_23 && b321_47 && b322_2 && b323_47 && b324_16 && b325_25 && b326_30 && b327_3 && b328_11 && b329_9 && b330_4 && b331_4 && b332_31 && b333_32 && b334_61 && b335_12 && b336_57 && b337_15 && b338_47 && b339_60 && b340_26 && b341_61 && b342_46 && b343_44 && b344_29 && b345_35 && b346_62 && b347_8 && b348_59 && b349_73 && b350_68 && b351_19 && b352_62 && b353_6 && b354_55 && b355_71 && b356_37 && b357_32 && b358_16 && b359_34 && b360_9 && b361_29 && b362_44 && b363_83) {
pattern_id = 1661;
}
if(b340_45 && b341_27 && b342_27 && b343_47 && b344_47 && b345_27 && b346_47 && b347_22 && b348_38 && b349_44 && b350_1 && b351_15 && b352_20 && b353_11 && b354_4 && b355_68 && b356_4 && b357_23 && b358_2 && b359_9 && b360_58 && b361_8 && b362_20 && b363_6) {
pattern_id = 1662;
}
if(b347_24 && b348_29 && b349_31 && b350_34 && b351_33 && b352_20 && b353_9 && b354_3 && b355_16 && b356_7 && b357_1 && b358_10 && b359_9 && b360_3 && b361_42 && b362_6 && b363_49) {
pattern_id = 1663;
}
if(b352_27 && b353_10 && b354_3 && b355_11 && b356_28 && b357_13 && b358_55 && b359_13 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1664;
}
if(b315_8 && b316_11 && b317_15 && b318_12 && b319_3 && b320_9 && b321_27 && b322_3 && b323_7 && b324_30 && b325_17 && b326_39 && b327_19 && b328_12 && b329_15 && b330_29 && b331_4 && b332_4 && b333_1 && b334_8 && b335_47 && b336_15 && b337_36 && b338_33 && b339_18 && b340_38 && b341_27 && b342_4 && b343_22 && b344_4 && b345_11 && b346_5 && b347_23 && b348_23 && b349_5 && b350_8 && b351_7 && b352_8 && b353_11 && b354_16 && b355_4 && b356_18 && b357_39 && b358_16 && b359_8 && b360_30 && b361_44 && b362_9 && b363_8) {
pattern_id = 1665;
}
if(b353_33 && b354_32 && b355_39 && b356_45 && b357_12 && b358_47 && b359_47 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1666;
}
if(b360_63 && b361_55 && b362_45 && b363_73) {
pattern_id = 1667;
}
if(b332_46 && b333_36 && b334_33 && b335_24 && b336_33 && b337_36 && b338_27 && b339_2 && b340_37 && b341_46 && b342_51 && b343_22 && b344_1 && b345_41 && b346_21 && b347_43 && b348_45 && b349_31 && b350_34 && b351_6 && b352_48 && b353_27 && b354_40 && b355_64 && b356_29 && b357_3 && b358_6 && b359_25 && b360_2 && b361_30 && b362_28 && b363_43) {
pattern_id = 1668;
}
if(b350_58 && b351_5 && b352_1 && b353_10 && b354_43 && b355_25 && b356_28 && b357_31 && b358_26 && b359_8 && b360_28 && b361_11 && b362_9 && b363_8) {
pattern_id = 1669;
}
if(b344_46 && b345_48 && b346_23 && b347_23 && b348_25 && b349_31 && b350_3 && b351_47 && b352_23 && b353_32 && b354_43 && b355_2 && b356_16 && b357_4 && b358_62 && b359_57 && b360_40 && b361_53 && b362_9 && b363_8) {
pattern_id = 1670;
}
if(b328_8 && b329_1 && b330_1 && b331_6 && b332_7 && b333_7 && b334_8 && b335_6 && b336_1 && b337_6 && b338_10 && b339_1 && b340_6 && b341_10 && b342_7 && b343_6 && b344_6 && b345_5 && b346_9 && b347_11 && b348_10 && b349_13 && b350_15 && b351_6 && b352_15 && b353_18 && b354_4 && b355_19 && b356_26 && b357_4 && b358_24 && b359_32 && b360_1 && b361_6 && b362_34 && b363_1) {
pattern_id = 1671;
}
if(b356_5 && b357_5 && b358_5 && b359_5 && b360_4 && b361_3 && b362_4 && b363_3) {
pattern_id = 1672;
}
if(b358_66 && b359_69 && b360_32 && b361_43 && b362_4 && b363_7) {
pattern_id = 1673;
}
if(b354_31 && b355_39 && b356_13 && b357_19 && b358_2 && b359_13 && b360_40 && b361_53 && b362_25 && b363_17) {
pattern_id = 1674;
}
if(b354_31 && b355_2 && b356_1 && b357_49 && b358_19 && b359_21 && b360_58 && b361_48 && b362_15 && b363_10) {
pattern_id = 1675;
}
if(b346_62 && b347_22 && b348_39 && b349_74 && b350_8 && b351_26 && b352_9 && b353_37 && b354_36 && b355_5 && b356_21 && b357_15 && b358_7 && b359_21 && b360_12 && b361_12 && b362_8 && b363_17) {
pattern_id = 1676;
}
if(b340_18 && b341_8 && b342_18 && b343_19 && b344_8 && b345_20 && b346_21 && b347_19 && b348_24 && b349_26 && b350_29 && b351_11 && b352_31 && b353_13 && b354_35 && b355_9 && b356_10 && b357_41 && b358_10 && b359_17 && b360_47 && b361_30 && b362_52 && b363_5) {
pattern_id = 1677;
}
if(b348_22 && b349_24 && b350_28 && b351_26 && b352_25 && b353_35 && b354_27 && b355_20 && b356_35 && b357_4 && b358_5 && b359_11 && b360_32 && b361_8 && b362_11 && b363_38) {
pattern_id = 1678;
}
if(b356_5 && b357_35 && b358_46 && b359_49 && b360_19 && b361_39 && b362_9 && b363_30) {
pattern_id = 1679;
}
if(b355_6 && b356_7 && b357_7 && b358_7 && b359_7 && b360_1 && b361_5 && b362_2 && b363_5) {
pattern_id = 1680;
}
if(b348_12 && b349_55 && b350_9 && b351_50 && b352_14 && b353_13 && b354_56 && b355_31 && b356_22 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 1681;
}
if(b349_67 && b350_54 && b351_3 && b352_4 && b353_32 && b354_34 && b355_2 && b356_41 && b357_34 && b358_6 && b359_38 && b360_57 && b361_6 && b362_15 && b363_8) {
pattern_id = 1682;
}
if(b360_67 && b361_31 && b362_42 && b363_44) {
pattern_id = 1683;
}
if(b357_67 && b358_42 && b359_74 && b360_60 && b361_64 && b362_30 && b363_12) {
pattern_id = 1684;
}
if(b360_67 && b361_51 && b362_29 && b363_44) {
pattern_id = 1685;
}
if(b360_67 && b361_48 && b362_23 && b363_44) {
pattern_id = 1686;
}
if(b345_15 && b346_11 && b347_13 && b348_12 && b349_14 && b350_17 && b351_12 && b352_16 && b353_21 && b354_21 && b355_24 && b356_23 && b357_23 && b358_4 && b359_6 && b360_35 && b361_36 && b362_5 && b363_10) {
pattern_id = 1687;
}
if(b360_56 && b361_51 && b362_47 && b363_21) {
pattern_id = 1688;
}
if(b349_58 && b350_55 && b351_59 && b352_6 && b353_8 && b354_31 && b355_41 && b356_64 && b357_65 && b358_66 && b359_27 && b360_18 && b361_12 && b362_42 && b363_19) {
pattern_id = 1689;
}
if(b351_69 && b352_13 && b353_8 && b354_8 && b355_14 && b356_9 && b357_13 && b358_46 && b359_52 && b360_21 && b361_30 && b362_1 && b363_64) {
pattern_id = 1690;
}
if(b328_7 && b329_1 && b330_1 && b331_6 && b332_7 && b333_7 && b334_8 && b335_6 && b336_1 && b337_6 && b338_10 && b339_1 && b340_6 && b341_10 && b342_7 && b343_6 && b344_6 && b345_5 && b346_9 && b347_11 && b348_10 && b349_1 && b350_14 && b351_6 && b352_15 && b353_18 && b354_4 && b355_19 && b356_13 && b357_4 && b358_24 && b359_32 && b360_1 && b361_6 && b362_34 && b363_1) {
pattern_id = 1691;
}
if(b326_9 && b327_3 && b328_13 && b329_8 && b330_8 && b331_1 && b332_4 && b333_5 && b334_2 && b335_15 && b336_2 && b337_1 && b338_7 && b339_2 && b340_11 && b341_12 && b342_3 && b343_14 && b344_6 && b345_3 && b346_6 && b347_14 && b348_10 && b349_6 && b350_1 && b351_17 && b352_19 && b353_12 && b354_18 && b355_4 && b356_11 && b357_23 && b358_36 && b359_11 && b360_34 && b361_35 && b362_5 && b363_40) {
pattern_id = 1692;
}
if(b358_59 && b359_14 && b360_16 && b361_1 && b362_1 && b363_48) {
pattern_id = 1693;
}
if(b349_46 && b350_16 && b351_23 && b352_6 && b353_56 && b354_56 && b355_10 && b356_10 && b357_3 && b358_12 && b359_13 && b360_7 && b361_17 && b362_25 && b363_33) {
pattern_id = 1694;
}
if(b349_46 && b350_27 && b351_57 && b352_57 && b353_14 && b354_37 && b355_27 && b356_63 && b357_17 && b358_19 && b359_24 && b360_12 && b361_26 && b362_8 && b363_64) {
pattern_id = 1695;
}
if(b360_55 && b361_55 && b362_55 && b363_44) {
pattern_id = 1696;
}
if(b355_46 && b356_9 && b357_15 && b358_46 && b359_53 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1697;
}
if(b356_53 && b357_51 && b358_18 && b359_53 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1698;
}
if(b338_37 && b339_25 && b340_36 && b341_24 && b342_38 && b343_28 && b344_42 && b345_17 && b346_32 && b347_33 && b348_3 && b349_25 && b350_19 && b351_20 && b352_24 && b353_27 && b354_28 && b355_46 && b356_9 && b357_13 && b358_9 && b359_19 && b360_2 && b361_33 && b362_52 && b363_60) {
pattern_id = 1699;
}
if(b353_8 && b354_4 && b355_28 && b356_11 && b357_10 && b358_23 && b359_38 && b360_1 && b361_8 && b362_40 && b363_41) {
pattern_id = 1700;
}
if(b347_31 && b348_18 && b349_58 && b350_55 && b351_64 && b352_13 && b353_8 && b354_31 && b355_59 && b356_26 && b357_66 && b358_41 && b359_75 && b360_62 && b361_21 && b362_3 && b363_29) {
pattern_id = 1701;
}
if(b322_31 && b323_37 && b324_27 && b325_17 && b326_25 && b327_16 && b328_20 && b329_17 && b330_8 && b331_3 && b332_17 && b333_18 && b334_51 && b335_29 && b336_2 && b337_28 && b338_39 && b339_3 && b340_40 && b341_1 && b342_44 && b343_18 && b344_63 && b345_43 && b346_39 && b347_10 && b348_4 && b349_50 && b350_37 && b351_5 && b352_1 && b353_49 && b354_4 && b355_31 && b356_51 && b357_22 && b358_57 && b359_49 && b360_14 && b361_13 && b362_48 && b363_4) {
pattern_id = 1702;
}
if(b348_17 && b349_19 && b350_24 && b351_24 && b352_23 && b353_30 && b354_28 && b355_10 && b356_29 && b357_37 && b358_21 && b359_43 && b360_40 && b361_44 && b362_15 && b363_47) {
pattern_id = 1703;
}
if(b332_21 && b333_39 && b334_16 && b335_38 && b336_20 && b337_28 && b338_49 && b339_36 && b340_8 && b341_63 && b342_56 && b343_40 && b344_19 && b345_36 && b346_22 && b347_2 && b348_65 && b349_36 && b350_4 && b351_26 && b352_10 && b353_41 && b354_34 && b355_2 && b356_12 && b357_10 && b358_18 && b359_13 && b360_54 && b361_50 && b362_17 && b363_16) {
pattern_id = 1704;
}
if(b358_51 && b359_24 && b360_10 && b361_27 && b362_11 && b363_78) {
pattern_id = 1705;
}
if(b356_10 && b357_10 && b358_11 && b359_12 && b360_11 && b361_12 && b362_11 && b363_5) {
pattern_id = 1706;
}
if(b344_26 && b345_35 && b346_31 && b347_59 && b348_45 && b349_31 && b350_22 && b351_26 && b352_30 && b353_1 && b354_8 && b355_3 && b356_8 && b357_3 && b358_6 && b359_17 && b360_3 && b361_20 && b362_31 && b363_1) {
pattern_id = 1707;
}
if(b342_19 && b343_30 && b344_19 && b345_11 && b346_13 && b347_10 && b348_10 && b349_4 && b350_41 && b351_24 && b352_28 && b353_53 && b354_6 && b355_1 && b356_41 && b357_3 && b358_51 && b359_43 && b360_22 && b361_11 && b362_56 && b363_33) {
pattern_id = 1708;
}
if(b349_27 && b350_8 && b351_38 && b352_11 && b353_42 && b354_7 && b355_23 && b356_13 && b357_34 && b358_18 && b359_49 && b360_19 && b361_33 && b362_9 && b363_33) {
pattern_id = 1709;
}
if(b342_19 && b343_30 && b344_19 && b345_11 && b346_13 && b347_10 && b348_10 && b349_48 && b350_36 && b351_29 && b352_46 && b353_8 && b354_55 && b355_54 && b356_14 && b357_18 && b358_2 && b359_26 && b360_19 && b361_50 && b362_9 && b363_48) {
pattern_id = 1710;
}
if(b359_8 && b360_26 && b361_26 && b362_26 && b363_5) {
pattern_id = 1711;
}
if(b353_8 && b354_10 && b355_15 && b356_17 && b357_18 && b358_23 && b359_19 && b360_13 && b361_28 && b362_19 && b363_27) {
pattern_id = 1712;
}
if(b349_27 && b350_42 && b351_45 && b352_52 && b353_40 && b354_12 && b355_16 && b356_1 && b357_6 && b358_9 && b359_8 && b360_13 && b361_44 && b362_11 && b363_22) {
pattern_id = 1713;
}
if(b354_5 && b355_9 && b356_16 && b357_31 && b358_2 && b359_3 && b360_59 && b361_17 && b362_14 && b363_5) {
pattern_id = 1714;
}
if(b349_27 && b350_42 && b351_45 && b352_52 && b353_29 && b354_5 && b355_28 && b356_53 && b357_10 && b358_37 && b359_43 && b360_59 && b361_33 && b362_20 && b363_22) {
pattern_id = 1715;
}
if(b351_29 && b352_40 && b353_46 && b354_42 && b355_3 && b356_10 && b357_42 && b358_59 && b359_7 && b360_15 && b361_26 && b362_26 && b363_22) {
pattern_id = 1716;
}
if(b354_5 && b355_9 && b356_16 && b357_31 && b358_11 && b359_8 && b360_52 && b361_23 && b362_9 && b363_22) {
pattern_id = 1717;
}
if(b355_2 && b356_16 && b357_17 && b358_59 && b359_55 && b360_13 && b361_8 && b362_16 && b363_22) {
pattern_id = 1718;
}
if(b353_8 && b354_10 && b355_9 && b356_57 && b357_6 && b358_11 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1719;
}
if(b359_8 && b360_26 && b361_39 && b362_9 && b363_8) {
pattern_id = 1720;
}
if(b350_28 && b351_45 && b352_6 && b353_49 && b354_36 && b355_20 && b356_34 && b357_13 && b358_11 && b359_8 && b360_52 && b361_12 && b362_2 && b363_5) {
pattern_id = 1721;
}
if(b353_8 && b354_10 && b355_3 && b356_8 && b357_9 && b358_23 && b359_19 && b360_19 && b361_53 && b362_25 && b363_5) {
pattern_id = 1722;
}
if(b354_5 && b355_9 && b356_7 && b357_18 && b358_9 && b359_11 && b360_59 && b361_41 && b362_9 && b363_8) {
pattern_id = 1723;
}
if(b352_21 && b353_27 && b354_6 && b355_15 && b356_34 && b357_34 && b358_37 && b359_26 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1724;
}
if(b349_27 && b350_19 && b351_20 && b352_40 && b353_1 && b354_25 && b355_2 && b356_7 && b357_35 && b358_37 && b359_21 && b360_29 && b361_41 && b362_27 && b363_16) {
pattern_id = 1725;
}
if(b340_33 && b341_25 && b342_40 && b343_40 && b344_5 && b345_21 && b346_44 && b347_34 && b348_26 && b349_25 && b350_22 && b351_39 && b352_36 && b353_51 && b354_44 && b355_14 && b356_28 && b357_41 && b358_2 && b359_40 && b360_15 && b361_11 && b362_36 && b363_47) {
pattern_id = 1726;
}
if(b335_41 && b336_50 && b337_54 && b338_4 && b339_19 && b340_16 && b341_11 && b342_1 && b343_45 && b344_7 && b345_9 && b346_15 && b347_1 && b348_50 && b349_2 && b350_1 && b351_40 && b352_49 && b353_31 && b354_26 && b355_3 && b356_41 && b357_35 && b358_46 && b359_40 && b360_3 && b361_24 && b362_37 && b363_1) {
pattern_id = 1727;
}
if(b350_28 && b351_26 && b352_6 && b353_8 && b354_25 && b355_10 && b356_14 && b357_18 && b358_46 && b359_19 && b360_3 && b361_24 && b362_37 && b363_1) {
pattern_id = 1728;
}
if(b349_27 && b350_57 && b351_26 && b352_42 && b353_37 && b354_36 && b355_15 && b356_2 && b357_18 && b358_18 && b359_54 && b360_17 && b361_8 && b362_64 && b363_22) {
pattern_id = 1729;
}
if(b347_31 && b348_51 && b349_44 && b350_36 && b351_41 && b352_22 && b353_32 && b354_3 && b355_13 && b356_8 && b357_3 && b358_18 && b359_54 && b360_54 && b361_26 && b362_25 && b363_5) {
pattern_id = 1730;
}
if(b356_12 && b357_13 && b358_16 && b359_15 && b360_12 && b361_7 && b362_15 && b363_8) {
pattern_id = 1731;
}
if(b350_5 && b351_5 && b352_6 && b353_8 && b354_5 && b355_9 && b356_14 && b357_15 && b358_2 && b359_19 && b360_12 && b361_7 && b362_20 && b363_5) {
pattern_id = 1732;
}
if(b350_5 && b351_28 && b352_29 && b353_11 && b354_11 && b355_4 && b356_18 && b357_42 && b358_19 && b359_21 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 1733;
}
if(b340_50 && b341_19 && b342_5 && b343_39 && b344_2 && b345_17 && b346_44 && b347_44 && b348_11 && b349_36 && b350_22 && b351_29 && b352_13 && b353_49 && b354_16 && b355_32 && b356_56 && b357_15 && b358_16 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1734;
}
if(b341_36 && b342_18 && b343_48 && b344_44 && b345_2 && b346_21 && b347_31 && b348_42 && b349_31 && b350_34 && b351_7 && b352_21 && b353_48 && b354_3 && b355_22 && b356_40 && b357_59 && b358_6 && b359_53 && b360_15 && b361_8 && b362_2 && b363_32) {
pattern_id = 1735;
}
if(b359_24 && b360_18 && b361_41 && b362_11 && b363_48) {
pattern_id = 1736;
}
if(b356_9 && b357_13 && b358_17 && b359_13 && b360_30 && b361_19 && b362_18 && b363_8) {
pattern_id = 1737;
}
if(b360_24 && b361_12 && b362_11 && b363_4) {
pattern_id = 1738;
}
if(b360_24 && b361_19 && b362_28 && b363_43) {
pattern_id = 1739;
}
if(b347_9 && b348_3 && b349_27 && b350_34 && b351_35 && b352_23 && b353_29 && b354_4 && b355_32 && b356_11 && b357_1 && b358_1 && b359_4 && b360_1 && b361_20 && b362_36 && b363_1) {
pattern_id = 1740;
}
if(b353_40 && b354_9 && b355_1 && b356_9 && b357_40 && b358_12 && b359_17 && b360_10 && b361_27 && b362_56 && b363_22) {
pattern_id = 1741;
}
if(b358_16 && b359_43 && b360_13 && b361_8 && b362_20 && b363_6) {
pattern_id = 1742;
}
if(b322_13 && b323_35 && b324_27 && b325_18 && b326_35 && b327_34 && b328_21 && b329_36 && b330_36 && b331_17 && b332_9 && b333_1 && b334_27 && b335_7 && b336_39 && b337_33 && b338_6 && b339_33 && b340_49 && b341_15 && b342_20 && b343_7 && b344_21 && b345_51 && b346_16 && b347_14 && b348_50 && b349_63 && b350_64 && b351_33 && b352_7 && b353_3 && b354_5 && b355_2 && b356_4 && b357_23 && b358_10 && b359_24 && b360_71 && b361_12 && b362_54 && b363_36) {
pattern_id = 1743;
}
if(b357_10 && b358_55 && b359_38 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1744;
}
if(b355_33 && b356_14 && b357_34 && b358_10 && b359_4 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1745;
}
if(b354_25 && b355_5 && b356_34 && b357_31 && b358_9 && b359_3 && b360_10 && b361_39 && b362_2 && b363_32) {
pattern_id = 1746;
}
if(b354_25 && b355_25 && b356_14 && b357_41 && b358_51 && b359_21 && b360_12 && b361_42 && b362_52 && b363_48) {
pattern_id = 1747;
}
if(b352_45 && b353_37 && b354_41 && b355_16 && b356_8 && b357_10 && b358_11 && b359_54 && b360_12 && b361_12 && b362_11 && b363_11) {
pattern_id = 1748;
}
if(b329_2 && b330_23 && b331_5 && b332_35 && b333_28 && b334_16 && b335_35 && b336_29 && b337_33 && b338_29 && b339_22 && b340_33 && b341_11 && b342_9 && b343_4 && b344_7 && b345_21 && b346_22 && b347_21 && b348_25 && b349_27 && b350_22 && b351_24 && b352_26 && b353_41 && b354_3 && b355_11 && b356_1 && b357_35 && b358_37 && b359_21 && b360_3 && b361_20 && b362_34 && b363_1) {
pattern_id = 1749;
}
if(b355_33 && b356_6 && b357_3 && b358_46 && b359_13 && b360_24 && b361_39 && b362_9 && b363_26) {
pattern_id = 1750;
}
if(b339_42 && b340_24 && b341_42 && b342_25 && b343_24 && b344_21 && b345_4 && b346_21 && b347_44 && b348_56 && b349_9 && b350_12 && b351_28 && b352_13 && b353_49 && b354_23 && b355_49 && b356_10 && b357_6 && b358_6 && b359_6 && b360_5 && b361_4 && b362_5 && b363_4) {
pattern_id = 1751;
}
if(b353_40 && b354_12 && b355_16 && b356_28 && b357_18 && b358_16 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1752;
}
if(b352_45 && b353_37 && b354_41 && b355_3 && b356_8 && b357_3 && b358_11 && b359_19 && b360_62 && b361_11 && b362_9 && b363_48) {
pattern_id = 1753;
}
if(b353_40 && b354_12 && b355_16 && b356_17 && b357_18 && b358_9 && b359_19 && b360_3 && b361_20 && b362_31 && b363_1) {
pattern_id = 1754;
}
if(b358_16 && b359_17 && b360_27 && b361_12 && b362_11 && b363_5) {
pattern_id = 1755;
}
if(b349_35 && b350_34 && b351_5 && b352_21 && b353_29 && b354_3 && b355_20 && b356_34 && b357_13 && b358_11 && b359_8 && b360_52 && b361_12 && b362_2 && b363_5) {
pattern_id = 1756;
}
if(b352_45 && b353_32 && b354_3 && b355_2 && b356_7 && b357_18 && b358_23 && b359_19 && b360_19 && b361_53 && b362_25 && b363_5) {
pattern_id = 1757;
}
if(b357_10 && b358_2 && b359_19 && b360_62 && b361_11 && b362_9 && b363_48) {
pattern_id = 1758;
}
if(b344_21 && b345_4 && b346_50 && b347_45 && b348_15 && b349_56 && b350_12 && b351_20 && b352_10 && b353_29 && b354_62 && b355_14 && b356_7 && b357_13 && b358_9 && b359_19 && b360_55 && b361_23 && b362_15 && b363_29) {
pattern_id = 1759;
}
if(b333_20 && b334_22 && b335_45 && b336_14 && b337_38 && b338_40 && b339_43 && b340_21 && b341_35 && b342_37 && b343_20 && b344_32 && b345_30 && b346_10 && b347_55 && b348_29 && b349_56 && b350_5 && b351_28 && b352_29 && b353_38 && b354_3 && b355_51 && b356_36 && b357_15 && b358_44 && b359_57 && b360_26 && b361_12 && b362_11 && b363_5) {
pattern_id = 1760;
}
if(b331_30 && b332_36 && b333_3 && b334_5 && b335_31 && b336_20 && b337_36 && b338_47 && b339_18 && b340_36 && b341_11 && b342_8 && b343_18 && b344_7 && b345_3 && b346_36 && b347_31 && b348_38 && b349_39 && b350_36 && b351_26 && b352_5 && b353_30 && b354_43 && b355_16 && b356_34 && b357_4 && b358_55 && b359_3 && b360_12 && b361_27 && b362_25 && b363_5) {
pattern_id = 1761;
}
if(b300_26 && b301_30 && b302_23 && b303_17 && b304_35 && b305_37 && b306_17 && b307_7 && b308_36 && b309_1 && b310_16 && b311_5 && b312_26 && b313_12 && b314_20 && b315_29 && b316_22 && b317_45 && b318_12 && b319_20 && b320_21 && b321_24 && b322_30 && b323_43 && b324_3 && b325_15 && b326_2 && b327_35 && b328_20 && b329_8 && b330_18 && b331_49 && b332_39 && b333_55 && b334_17 && b335_37 && b336_39 && b337_27 && b338_33 && b339_8 && b340_35 && b341_15 && b342_36 && b343_1 && b344_62 && b345_25 && b346_16 && b347_57 && b348_32 && b349_29 && b350_24 && b351_37 && b352_23 && b353_30 && b354_25 && b355_36 && b356_48 && b357_23 && b358_27 && b359_25 && b360_6 && b361_39 && b362_27 && b363_25) {
pattern_id = 1762;
}
if(b356_9 && b357_45 && b358_27 && b359_13 && b360_15 && b361_52 && b362_15 && b363_47) {
pattern_id = 1763;
}
if(b356_9 && b357_1 && b358_10 && b359_9 && b360_1 && b361_9 && b362_6 && b363_1) {
pattern_id = 1764;
}
if(b358_18 && b359_18 && b360_5 && b361_2 && b362_17 && b363_15) {
pattern_id = 1765;
}
if(b358_18 && b359_8 && b360_12 && b361_7 && b362_2 && b363_48) {
pattern_id = 1766;
}
if(b353_38 && b354_5 && b355_3 && b356_10 && b357_11 && b358_6 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1767;
}
if(b352_41 && b353_8 && b354_6 && b355_2 && b356_36 && b357_15 && b358_2 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1768;
}
if(b356_34 && b357_13 && b358_11 && b359_8 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1769;
}
if(b337_33 && b338_30 && b339_9 && b340_21 && b341_8 && b342_24 && b343_28 && b344_5 && b345_30 && b346_30 && b347_45 && b348_26 && b349_17 && b350_19 && b351_34 && b352_1 && b353_29 && b354_45 && b355_25 && b356_9 && b357_19 && b358_60 && b359_43 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1770;
}
if(b354_45 && b355_28 && b356_10 && b357_31 && b358_11 && b359_8 && b360_52 && b361_23 && b362_9 && b363_22) {
pattern_id = 1771;
}
if(b350_41 && b351_48 && b352_21 && b353_62 && b354_6 && b355_2 && b356_12 && b357_17 && b358_6 && b359_26 && b360_28 && b361_12 && b362_14 && b363_5) {
pattern_id = 1772;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_35 && b335_27 && b336_21 && b337_20 && b338_22 && b339_17 && b340_35 && b341_54 && b342_5 && b343_41 && b344_52 && b345_47 && b346_21 && b347_49 && b348_26 && b349_39 && b350_48 && b351_40 && b352_40 && b353_8 && b354_1 && b355_25 && b356_41 && b357_31 && b358_16 && b359_16 && b360_19 && b361_44 && b362_19 && b363_5) {
pattern_id = 1773;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_35 && b335_27 && b336_21 && b337_20 && b338_22 && b339_17 && b340_35 && b341_54 && b342_5 && b343_41 && b344_52 && b345_47 && b346_21 && b347_49 && b348_26 && b349_39 && b350_48 && b351_28 && b352_29 && b353_10 && b354_6 && b355_2 && b356_28 && b357_6 && b358_19 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1774;
}
if(b338_31 && b339_40 && b340_40 && b341_27 && b342_49 && b343_48 && b344_18 && b345_51 && b346_23 && b347_29 && b348_38 && b349_31 && b350_48 && b351_34 && b352_8 && b353_43 && b354_20 && b355_1 && b356_50 && b357_35 && b358_46 && b359_54 && b360_26 && b361_7 && b362_18 && b363_26) {
pattern_id = 1775;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_15 && b337_28 && b338_33 && b339_29 && b340_8 && b341_42 && b342_27 && b343_36 && b344_8 && b345_50 && b346_45 && b347_22 && b348_38 && b349_29 && b350_48 && b351_40 && b352_40 && b353_8 && b354_1 && b355_25 && b356_41 && b357_31 && b358_16 && b359_16 && b360_19 && b361_44 && b362_19 && b363_5) {
pattern_id = 1776;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_15 && b337_28 && b338_33 && b339_29 && b340_8 && b341_42 && b342_27 && b343_36 && b344_8 && b345_50 && b346_45 && b347_22 && b348_38 && b349_29 && b350_48 && b351_28 && b352_29 && b353_10 && b354_6 && b355_2 && b356_28 && b357_6 && b358_19 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1777;
}
if(b340_21 && b341_36 && b342_31 && b343_8 && b344_27 && b345_48 && b346_41 && b347_35 && b348_48 && b349_18 && b350_22 && b351_5 && b352_52 && b353_37 && b354_28 && b355_18 && b356_8 && b357_3 && b358_18 && b359_54 && b360_26 && b361_7 && b362_18 && b363_26) {
pattern_id = 1778;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_32 && b330_16 && b331_24 && b332_34 && b333_30 && b334_34 && b335_28 && b336_29 && b337_24 && b338_49 && b339_43 && b340_36 && b341_8 && b342_30 && b343_15 && b344_19 && b345_17 && b346_37 && b347_33 && b348_51 && b349_19 && b350_4 && b351_5 && b352_6 && b353_62 && b354_12 && b355_38 && b356_53 && b357_41 && b358_51 && b359_26 && b360_18 && b361_8 && b362_8 && b363_22) {
pattern_id = 1779;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_24 && b338_33 && b339_33 && b340_30 && b341_24 && b342_25 && b343_24 && b344_27 && b345_42 && b346_46 && b347_31 && b348_24 && b349_26 && b350_37 && b351_34 && b352_6 && b353_43 && b354_20 && b355_1 && b356_50 && b357_35 && b358_46 && b359_54 && b360_26 && b361_7 && b362_18 && b363_26) {
pattern_id = 1780;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_3 && b340_49 && b341_48 && b342_18 && b343_30 && b344_35 && b345_17 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_18 && b356_8 && b357_3 && b358_18 && b359_54 && b360_26 && b361_7 && b362_18 && b363_26) {
pattern_id = 1781;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_31 && b341_34 && b342_37 && b343_54 && b344_5 && b345_17 && b346_10 && b347_45 && b348_42 && b349_18 && b350_44 && b351_40 && b352_34 && b353_38 && b354_43 && b355_38 && b356_32 && b357_18 && b358_9 && b359_13 && b360_30 && b361_52 && b362_9 && b363_22) {
pattern_id = 1782;
}
if(b337_33 && b338_30 && b339_28 && b340_27 && b341_54 && b342_39 && b343_24 && b344_21 && b345_4 && b346_20 && b347_35 && b348_26 && b349_31 && b350_34 && b351_41 && b352_41 && b353_1 && b354_46 && b355_38 && b356_19 && b357_9 && b358_6 && b359_56 && b360_18 && b361_26 && b362_35 && b363_17) {
pattern_id = 1783;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_28 && b342_48 && b343_48 && b344_40 && b345_4 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1784;
}
if(b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_49 && b338_29 && b339_23 && b340_21 && b341_54 && b342_36 && b343_48 && b344_30 && b345_10 && b346_33 && b347_18 && b348_49 && b349_48 && b350_34 && b351_34 && b352_10 && b353_17 && b354_42 && b355_3 && b356_6 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1785;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_9 && b348_15 && b349_34 && b350_57 && b351_38 && b352_29 && b353_10 && b354_42 && b355_3 && b356_6 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1786;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_44 && b348_11 && b349_34 && b350_26 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1787;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_44 && b347_44 && b348_42 && b349_46 && b350_52 && b351_21 && b352_4 && b353_6 && b354_27 && b355_1 && b356_34 && b357_31 && b358_16 && b359_3 && b360_26 && b361_27 && b362_27 && b363_10) {
pattern_id = 1788;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_55 && b344_26 && b345_35 && b346_31 && b347_45 && b348_15 && b349_19 && b350_62 && b351_5 && b352_45 && b353_29 && b354_42 && b355_3 && b356_6 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1789;
}
if(b335_38 && b336_42 && b337_15 && b338_40 && b339_9 && b340_36 && b341_8 && b342_40 && b343_19 && b344_26 && b345_4 && b346_45 && b347_31 && b348_42 && b349_29 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 1790;
}
if(b335_38 && b336_42 && b337_15 && b338_40 && b339_9 && b340_36 && b341_8 && b342_40 && b343_19 && b344_26 && b345_4 && b346_45 && b347_31 && b348_42 && b349_29 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 1791;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_44 && b347_44 && b348_42 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_21 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 1792;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_31 && b346_31 && b347_44 && b348_49 && b349_43 && b350_34 && b351_28 && b352_4 && b353_32 && b354_43 && b355_3 && b356_59 && b357_31 && b358_46 && b359_57 && b360_40 && b361_53 && b362_9 && b363_8) {
pattern_id = 1793;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_19 && b343_20 && b344_32 && b345_44 && b346_35 && b347_43 && b348_26 && b349_25 && b350_34 && b351_28 && b352_6 && b353_57 && b354_42 && b355_16 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 1794;
}
if(b336_22 && b337_21 && b338_34 && b339_16 && b340_34 && b341_35 && b342_27 && b343_31 && b344_21 && b345_31 && b346_42 && b347_55 && b348_17 && b349_29 && b350_41 && b351_41 && b352_22 && b353_32 && b354_43 && b355_25 && b356_41 && b357_35 && b358_11 && b359_45 && b360_55 && b361_17 && b362_18 && b363_38) {
pattern_id = 1795;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_2 && b348_5 && b349_18 && b350_36 && b351_21 && b352_24 && b353_29 && b354_55 && b355_46 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 1796;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_19 && b343_20 && b344_32 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_8 && b361_26 && b362_11 && b363_5) {
pattern_id = 1797;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_23 && b348_38 && b349_18 && b350_63 && b351_23 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1798;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1799;
}
if(b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_43 && b340_33 && b341_19 && b342_24 && b343_24 && b344_40 && b345_44 && b346_33 && b347_31 && b348_29 && b349_44 && b350_26 && b351_21 && b352_52 && b353_17 && b354_36 && b355_25 && b356_36 && b357_13 && b358_12 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1800;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_19 && b343_40 && b344_42 && b345_17 && b346_10 && b347_45 && b348_25 && b349_27 && b350_4 && b351_26 && b352_23 && b353_32 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1801;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_28 && b342_18 && b343_3 && b344_34 && b345_45 && b346_37 && b347_21 && b348_45 && b349_18 && b350_26 && b351_44 && b352_52 && b353_17 && b354_36 && b355_25 && b356_36 && b357_13 && b358_12 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1802;
}
if(b338_31 && b339_40 && b340_40 && b341_27 && b342_49 && b343_47 && b344_34 && b345_34 && b346_36 && b347_31 && b348_34 && b349_59 && b350_28 && b351_45 && b352_6 && b353_49 && b354_36 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 1803;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_31 && b346_23 && b347_34 && b348_11 && b349_36 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 1804;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_31 && b346_23 && b347_34 && b348_11 && b349_36 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 1805;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_55 && b344_26 && b345_30 && b346_42 && b347_22 && b348_5 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_21 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 1806;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_28 && b344_30 && b345_4 && b346_21 && b347_43 && b348_49 && b349_43 && b350_34 && b351_28 && b352_4 && b353_32 && b354_43 && b355_3 && b356_59 && b357_31 && b358_46 && b359_57 && b360_40 && b361_53 && b362_9 && b363_8) {
pattern_id = 1807;
}
if(b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_43 && b340_33 && b341_19 && b342_24 && b343_24 && b344_40 && b345_44 && b346_35 && b347_43 && b348_26 && b349_25 && b350_34 && b351_28 && b352_6 && b353_57 && b354_42 && b355_16 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 1808;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_44 && b347_28 && b348_34 && b349_31 && b350_34 && b351_41 && b352_22 && b353_32 && b354_43 && b355_25 && b356_41 && b357_35 && b358_11 && b359_45 && b360_55 && b361_17 && b362_18 && b363_38) {
pattern_id = 1809;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_28 && b342_18 && b343_3 && b344_34 && b345_45 && b346_37 && b347_2 && b348_5 && b349_18 && b350_36 && b351_21 && b352_24 && b353_29 && b354_55 && b355_46 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 1810;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_31 && b346_23 && b347_34 && b348_11 && b349_36 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 1811;
}
if(b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_43 && b340_33 && b341_19 && b342_24 && b343_24 && b344_40 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_8 && b361_26 && b362_11 && b363_5) {
pattern_id = 1812;
}
if(b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_49 && b338_29 && b339_29 && b340_42 && b341_8 && b342_39 && b343_36 && b344_13 && b345_36 && b346_44 && b347_2 && b348_29 && b349_24 && b350_36 && b351_26 && b352_52 && b353_17 && b354_36 && b355_25 && b356_36 && b357_13 && b358_12 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1813;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_36 && b342_27 && b343_41 && b344_5 && b345_36 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1814;
}
if(b335_38 && b336_42 && b337_15 && b338_40 && b339_9 && b340_36 && b341_8 && b342_40 && b343_19 && b344_26 && b345_4 && b346_45 && b347_9 && b348_17 && b349_39 && b350_24 && b351_5 && b352_40 && b353_62 && b354_8 && b355_3 && b356_10 && b357_6 && b358_19 && b359_26 && b360_18 && b361_26 && b362_14 && b363_22) {
pattern_id = 1815;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_30 && b342_5 && b343_25 && b344_19 && b345_17 && b346_46 && b347_34 && b348_49 && b349_25 && b350_22 && b351_41 && b352_45 && b353_37 && b354_10 && b355_44 && b356_14 && b357_3 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1816;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_24 && b337_24 && b338_34 && b339_28 && b340_35 && b341_42 && b342_24 && b343_36 && b344_8 && b345_36 && b346_37 && b347_44 && b348_11 && b349_34 && b350_26 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1817;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_42 && b340_24 && b341_51 && b342_31 && b343_24 && b344_35 && b345_4 && b346_37 && b347_5 && b348_38 && b349_46 && b350_30 && b351_49 && b352_24 && b353_49 && b354_34 && b355_46 && b356_41 && b357_18 && b358_44 && b359_26 && b360_13 && b361_39 && b362_9 && b363_22) {
pattern_id = 1818;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_42 && b340_24 && b341_51 && b342_31 && b343_24 && b344_35 && b345_4 && b346_37 && b347_5 && b348_38 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1819;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_21 && b346_22 && b347_21 && b348_25 && b349_31 && b350_22 && b351_26 && b352_52 && b353_37 && b354_41 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1820;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_55 && b344_21 && b345_48 && b346_33 && b347_21 && b348_11 && b349_39 && b350_12 && b351_41 && b352_4 && b353_27 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1821;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_21 && b346_22 && b347_21 && b348_25 && b349_31 && b350_22 && b351_26 && b352_52 && b353_37 && b354_41 && b355_46 && b356_41 && b357_18 && b358_44 && b359_26 && b360_13 && b361_39 && b362_9 && b363_22) {
pattern_id = 1822;
}
if(b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_43 && b340_31 && b341_23 && b342_31 && b343_25 && b344_34 && b345_36 && b346_42 && b347_45 && b348_15 && b349_39 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 1823;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_24 && b337_24 && b338_34 && b339_28 && b340_35 && b341_42 && b342_24 && b343_36 && b344_8 && b345_36 && b346_37 && b347_23 && b348_38 && b349_18 && b350_63 && b351_23 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1824;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_24 && b337_24 && b338_34 && b339_28 && b340_35 && b341_42 && b342_24 && b343_36 && b344_8 && b345_36 && b346_37 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1825;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_36 && b347_5 && b348_25 && b349_43 && b350_28 && b351_21 && b352_23 && b353_62 && b354_12 && b355_9 && b356_34 && b357_31 && b358_56 && b359_8 && b360_26 && b361_27 && b362_9 && b363_22) {
pattern_id = 1826;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_36 && b343_47 && b344_34 && b345_31 && b346_42 && b347_22 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1827;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_30 && b342_39 && b343_24 && b344_26 && b345_4 && b346_21 && b347_45 && b348_25 && b349_27 && b350_4 && b351_26 && b352_23 && b353_32 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1828;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_19 && b344_40 && b345_17 && b346_44 && b347_34 && b348_11 && b349_46 && b350_30 && b351_49 && b352_24 && b353_49 && b354_34 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1829;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_36 && b343_47 && b344_34 && b345_31 && b346_42 && b347_22 && b348_49 && b349_17 && b350_49 && b351_28 && b352_23 && b353_23 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1830;
}
if(b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_43 && b340_31 && b341_35 && b342_27 && b343_28 && b344_42 && b345_17 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1831;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_42 && b340_36 && b341_8 && b342_19 && b343_3 && b344_34 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1832;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_35 && b346_21 && b347_35 && b348_26 && b349_39 && b350_26 && b351_41 && b352_45 && b353_37 && b354_10 && b355_44 && b356_14 && b357_3 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1833;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_20 && b344_34 && b345_51 && b346_20 && b347_18 && b348_11 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1834;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_55 && b344_32 && b345_17 && b346_41 && b347_29 && b348_38 && b349_31 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 1835;
}
if(b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_43 && b340_21 && b341_23 && b342_49 && b343_20 && b344_34 && b345_51 && b346_21 && b347_43 && b348_5 && b349_31 && b350_41 && b351_41 && b352_1 && b353_49 && b354_27 && b355_33 && b356_10 && b357_6 && b358_59 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 1836;
}
if(b335_38 && b336_42 && b337_15 && b338_40 && b339_9 && b340_36 && b341_8 && b342_40 && b343_19 && b344_26 && b345_4 && b346_45 && b347_44 && b348_5 && b349_25 && b350_19 && b351_41 && b352_45 && b353_37 && b354_10 && b355_44 && b356_14 && b357_3 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1837;
}
if(b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_44 && b335_38 && b336_3 && b337_24 && b338_36 && b339_9 && b340_31 && b341_23 && b342_18 && b343_15 && b344_19 && b345_36 && b346_37 && b347_49 && b348_5 && b349_25 && b350_57 && b351_20 && b352_52 && b353_30 && b354_36 && b355_25 && b356_14 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1838;
}
if(b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_43 && b340_21 && b341_35 && b342_5 && b343_31 && b344_27 && b345_21 && b346_22 && b347_28 && b348_51 && b349_17 && b350_22 && b351_35 && b352_52 && b353_30 && b354_36 && b355_25 && b356_14 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1839;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_44 && b348_11 && b349_34 && b350_26 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1840;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_35 && b346_10 && b347_5 && b348_24 && b349_46 && b350_52 && b351_21 && b352_4 && b353_6 && b354_27 && b355_1 && b356_34 && b357_31 && b358_16 && b359_3 && b360_26 && b361_27 && b362_27 && b363_10) {
pattern_id = 1841;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_55 && b344_32 && b345_45 && b346_22 && b347_2 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1842;
}
if(b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_20 && b344_40 && b345_48 && b346_35 && b347_45 && b348_25 && b349_27 && b350_4 && b351_26 && b352_23 && b353_32 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1843;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_35 && b346_10 && b347_5 && b348_24 && b349_46 && b350_30 && b351_49 && b352_24 && b353_49 && b354_34 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1844;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_55 && b344_32 && b345_45 && b346_22 && b347_2 && b348_49 && b349_17 && b350_49 && b351_28 && b352_23 && b353_23 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1845;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_22 && b347_50 && b348_58 && b349_31 && b350_24 && b351_26 && b352_52 && b353_30 && b354_36 && b355_25 && b356_14 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1846;
}
if(b339_23 && b340_50 && b341_51 && b342_30 && b343_36 && b344_40 && b345_17 && b346_35 && b347_9 && b348_17 && b349_44 && b350_17 && b351_24 && b352_1 && b353_37 && b354_27 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 1847;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_31 && b347_43 && b348_15 && b349_43 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 1848;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_31 && b347_43 && b348_15 && b349_43 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 1849;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_35 && b346_10 && b347_5 && b348_24 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_21 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 1850;
}
if(b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_55 && b344_32 && b345_45 && b346_22 && b347_2 && b348_49 && b349_43 && b350_34 && b351_28 && b352_4 && b353_32 && b354_43 && b355_3 && b356_59 && b357_31 && b358_46 && b359_57 && b360_40 && b361_53 && b362_9 && b363_8) {
pattern_id = 1851;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_35 && b347_43 && b348_26 && b349_25 && b350_34 && b351_28 && b352_6 && b353_57 && b354_42 && b355_16 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 1852;
}
if(b335_38 && b336_42 && b337_15 && b338_40 && b339_9 && b340_36 && b341_8 && b342_40 && b343_19 && b344_26 && b345_4 && b346_45 && b347_44 && b348_5 && b349_25 && b350_19 && b351_41 && b352_22 && b353_32 && b354_43 && b355_25 && b356_41 && b357_35 && b358_11 && b359_45 && b360_55 && b361_17 && b362_18 && b363_38) {
pattern_id = 1853;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_2 && b348_5 && b349_18 && b350_36 && b351_21 && b352_24 && b353_29 && b354_55 && b355_46 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 1854;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_31 && b347_43 && b348_15 && b349_43 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 1855;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_8 && b361_26 && b362_11 && b363_5) {
pattern_id = 1856;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1857;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 1858;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_23 && b348_38 && b349_18 && b350_63 && b351_23 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1859;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1860;
}
if(b341_39 && b342_48 && b343_25 && b344_13 && b345_44 && b346_10 && b347_22 && b348_24 && b349_35 && b350_28 && b351_26 && b352_34 && b353_49 && b354_50 && b355_1 && b356_9 && b357_44 && b358_11 && b359_13 && b360_55 && b361_19 && b362_52 && b363_25) {
pattern_id = 1861;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_42 && b343_24 && b344_35 && b345_17 && b346_10 && b347_31 && b348_34 && b349_31 && b350_48 && b351_38 && b352_44 && b353_1 && b354_3 && b355_45 && b356_53 && b357_19 && b358_7 && b359_7 && b360_28 && b361_7 && b362_8 && b363_6) {
pattern_id = 1862;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_41 && b337_44 && b338_41 && b339_18 && b340_36 && b341_28 && b342_24 && b343_24 && b344_27 && b345_45 && b346_21 && b347_2 && b348_48 && b349_18 && b350_24 && b351_29 && b352_6 && b353_1 && b354_12 && b355_16 && b356_53 && b357_51 && b358_51 && b359_56 && b360_17 && b361_12 && b362_19 && b363_5) {
pattern_id = 1863;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_41 && b337_44 && b338_41 && b339_18 && b340_36 && b341_28 && b342_24 && b343_24 && b344_27 && b345_45 && b346_21 && b347_2 && b348_48 && b349_18 && b350_24 && b351_29 && b352_6 && b353_1 && b354_12 && b355_16 && b356_53 && b357_19 && b358_7 && b359_7 && b360_28 && b361_7 && b362_8 && b363_6) {
pattern_id = 1864;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_41 && b337_44 && b338_41 && b339_18 && b340_36 && b341_28 && b342_24 && b343_24 && b344_27 && b345_45 && b346_21 && b347_2 && b348_48 && b349_18 && b350_24 && b351_29 && b352_6 && b353_1 && b354_12 && b355_16 && b356_53 && b357_6 && b358_9 && b359_12 && b360_58 && b361_50 && b362_9 && b363_8) {
pattern_id = 1865;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_37 && b340_35 && b341_42 && b342_27 && b343_47 && b344_26 && b345_4 && b346_21 && b347_45 && b348_29 && b349_39 && b350_28 && b351_20 && b352_25 && b353_56 && b354_12 && b355_3 && b356_53 && b357_19 && b358_7 && b359_7 && b360_28 && b361_7 && b362_8 && b363_6) {
pattern_id = 1866;
}
if(b335_38 && b336_42 && b337_15 && b338_40 && b339_9 && b340_36 && b341_8 && b342_40 && b343_19 && b344_26 && b345_4 && b346_45 && b347_21 && b348_17 && b349_5 && b350_26 && b351_41 && b352_45 && b353_37 && b354_10 && b355_44 && b356_14 && b357_3 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1867;
}
if(b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_49 && b338_44 && b339_40 && b340_27 && b341_23 && b342_18 && b343_24 && b344_42 && b345_17 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1868;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_25 && b340_38 && b341_36 && b342_18 && b343_30 && b344_13 && b345_2 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1869;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_25 && b342_41 && b343_47 && b344_41 && b345_17 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1870;
}
if(b336_22 && b337_21 && b338_34 && b339_16 && b340_34 && b341_35 && b342_27 && b343_31 && b344_21 && b345_31 && b346_42 && b347_55 && b348_24 && b349_56 && b350_34 && b351_22 && b352_23 && b353_62 && b354_44 && b355_2 && b356_1 && b357_6 && b358_6 && b359_17 && b360_55 && b361_23 && b362_15 && b363_29) {
pattern_id = 1871;
}
if(b336_22 && b337_21 && b338_34 && b339_16 && b340_34 && b341_35 && b342_27 && b343_31 && b344_21 && b345_31 && b346_42 && b347_55 && b348_24 && b349_56 && b350_34 && b351_22 && b352_23 && b353_62 && b354_8 && b355_3 && b356_10 && b357_6 && b358_19 && b359_26 && b360_18 && b361_26 && b362_14 && b363_22) {
pattern_id = 1872;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_39 && b343_24 && b344_18 && b345_45 && b346_21 && b347_33 && b348_3 && b349_46 && b350_30 && b351_49 && b352_24 && b353_49 && b354_34 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1873;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_21 && b340_35 && b341_48 && b342_39 && b343_24 && b344_13 && b345_2 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1874;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_35 && b342_27 && b343_41 && b344_5 && b345_42 && b346_42 && b347_22 && b348_5 && b349_46 && b350_30 && b351_49 && b352_24 && b353_49 && b354_34 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1875;
}
if(b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_49 && b338_39 && b339_18 && b340_25 && b341_24 && b342_30 && b343_3 && b344_34 && b345_45 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1876;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_45 && b346_21 && b347_49 && b348_26 && b349_26 && b350_12 && b351_5 && b352_1 && b353_62 && b354_8 && b355_3 && b356_10 && b357_6 && b358_19 && b359_26 && b360_18 && b361_26 && b362_14 && b363_22) {
pattern_id = 1877;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_49 && b346_10 && b347_22 && b348_48 && b349_25 && b350_24 && b351_29 && b352_6 && b353_49 && b354_42 && b355_5 && b356_10 && b357_19 && b358_11 && b359_13 && b360_15 && b361_19 && b362_9 && b363_41) {
pattern_id = 1878;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_35 && b342_27 && b343_25 && b344_8 && b345_39 && b346_21 && b347_45 && b348_25 && b349_27 && b350_4 && b351_26 && b352_23 && b353_32 && b354_42 && b355_49 && b356_10 && b357_6 && b358_51 && b359_24 && b360_19 && b361_41 && b362_9 && b363_22) {
pattern_id = 1879;
}
if(b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_49 && b338_39 && b339_18 && b340_3 && b341_28 && b342_31 && b343_24 && b344_27 && b345_42 && b346_2 && b347_31 && b348_42 && b349_25 && b350_43 && b351_41 && b352_45 && b353_37 && b354_10 && b355_44 && b356_14 && b357_3 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1880;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_45 && b346_21 && b347_2 && b348_23 && b349_27 && b350_12 && b351_41 && b352_24 && b353_48 && b354_27 && b355_25 && b356_41 && b357_6 && b358_59 && b359_56 && b360_6 && b361_8 && b362_14 && b363_18) {
pattern_id = 1881;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_39 && b343_24 && b344_13 && b345_10 && b346_33 && b347_22 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_10 && b357_10 && b358_11 && b359_12 && b360_11 && b361_26 && b362_11 && b363_17) {
pattern_id = 1882;
}
if(b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_43 && b337_26 && b338_27 && b339_17 && b340_21 && b341_54 && b342_19 && b343_26 && b344_32 && b345_44 && b346_36 && b347_5 && b348_25 && b349_43 && b350_28 && b351_21 && b352_23 && b353_62 && b354_12 && b355_9 && b356_34 && b357_31 && b358_56 && b359_8 && b360_26 && b361_27 && b362_9 && b363_22) {
pattern_id = 1883;
}
if(b337_33 && b338_30 && b339_28 && b340_27 && b341_54 && b342_39 && b343_24 && b344_25 && b345_21 && b346_44 && b347_34 && b348_56 && b349_26 && b350_26 && b351_7 && b352_41 && b353_62 && b354_12 && b355_9 && b356_34 && b357_31 && b358_56 && b359_8 && b360_26 && b361_27 && b362_9 && b363_22) {
pattern_id = 1884;
}
if(b341_39 && b342_48 && b343_25 && b344_13 && b345_44 && b346_10 && b347_22 && b348_24 && b349_35 && b350_28 && b351_26 && b352_34 && b353_10 && b354_3 && b355_3 && b356_53 && b357_10 && b358_37 && b359_43 && b360_59 && b361_33 && b362_20 && b363_22) {
pattern_id = 1885;
}
if(b336_22 && b337_21 && b338_34 && b339_16 && b340_34 && b341_35 && b342_27 && b343_31 && b344_21 && b345_31 && b346_42 && b347_55 && b348_29 && b349_31 && b350_12 && b351_41 && b352_40 && b353_37 && b354_25 && b355_2 && b356_16 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1886;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_42 && b346_35 && b347_22 && b348_23 && b349_18 && b350_44 && b351_42 && b352_52 && b353_27 && b354_3 && b355_45 && b356_53 && b357_41 && b358_51 && b359_26 && b360_18 && b361_8 && b362_8 && b363_22) {
pattern_id = 1887;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_27 && b342_41 && b343_8 && b344_25 && b345_17 && b346_46 && b347_44 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_10 && b357_10 && b358_11 && b359_12 && b360_11 && b361_26 && b362_11 && b363_17) {
pattern_id = 1888;
}
if(b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_52 && b345_42 && b346_3 && b347_29 && b348_34 && b349_35 && b350_37 && b351_41 && b352_13 && b353_41 && b354_43 && b355_1 && b356_54 && b357_31 && b358_55 && b359_8 && b360_8 && b361_39 && b362_9 && b363_8) {
pattern_id = 1889;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_30 && b343_37 && b344_5 && b345_4 && b346_36 && b347_26 && b348_49 && b349_26 && b350_22 && b351_29 && b352_22 && b353_10 && b354_9 && b355_25 && b356_7 && b357_31 && b358_55 && b359_8 && b360_8 && b361_39 && b362_9 && b363_8) {
pattern_id = 1890;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_48 && b340_3 && b341_35 && b342_27 && b343_41 && b344_5 && b345_42 && b346_42 && b347_22 && b348_5 && b349_46 && b350_30 && b351_49 && b352_24 && b353_49 && b354_34 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1891;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_19 && b337_47 && b338_39 && b339_18 && b340_25 && b341_24 && b342_30 && b343_3 && b344_34 && b345_45 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1892;
}
if(b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_49 && b338_47 && b339_24 && b340_30 && b341_24 && b342_29 && b343_28 && b344_42 && b345_17 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1893;
}
if(b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_43 && b339_7 && b340_33 && b341_19 && b342_37 && b343_20 && b344_26 && b345_4 && b346_21 && b347_45 && b348_35 && b349_25 && b350_34 && b351_41 && b352_40 && b353_37 && b354_25 && b355_2 && b356_16 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 1894;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_27 && b337_33 && b338_34 && b339_27 && b340_3 && b341_53 && b342_39 && b343_24 && b344_41 && b345_22 && b346_30 && b347_34 && b348_11 && b349_36 && b350_48 && b351_23 && b352_25 && b353_49 && b354_36 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1895;
}
if(b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_27 && b335_38 && b336_37 && b337_3 && b338_41 && b339_43 && b340_38 && b341_42 && b342_39 && b343_24 && b344_41 && b345_22 && b346_30 && b347_34 && b348_11 && b349_36 && b350_48 && b351_23 && b352_25 && b353_49 && b354_36 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 1896;
}
if(b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_27 && b337_23 && b338_38 && b339_36 && b340_43 && b341_35 && b342_27 && b343_35 && b344_8 && b345_58 && b346_21 && b347_45 && b348_29 && b349_56 && b350_34 && b351_21 && b352_4 && b353_9 && b354_5 && b355_3 && b356_8 && b357_31 && b358_9 && b359_13 && b360_28 && b361_52 && b362_18 && b363_6) {
pattern_id = 1897;
}
if(b317_19 && b318_19 && b319_21 && b320_17 && b321_21 && b322_24 && b323_29 && b324_10 && b325_15 && b326_14 && b327_19 && b328_32 && b329_26 && b330_33 && b331_25 && b332_26 && b333_36 && b334_34 && b335_35 && b336_33 && b337_27 && b338_38 && b339_18 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_28 && b352_29 && b353_10 && b354_6 && b355_2 && b356_28 && b357_6 && b358_19 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1898;
}
if(b321_22 && b322_25 && b323_30 && b324_27 && b325_28 && b326_19 && b327_16 && b328_17 && b329_2 && b330_2 && b331_31 && b332_42 && b333_30 && b334_34 && b335_31 && b336_30 && b337_27 && b338_41 && b339_22 && b340_8 && b341_28 && b342_24 && b343_24 && b344_52 && b345_22 && b346_46 && b347_33 && b348_34 && b349_27 && b350_22 && b351_26 && b352_24 && b353_8 && b354_6 && b355_1 && b356_53 && b357_15 && b358_3 && b359_53 && b360_26 && b361_26 && b362_20 && b363_5) {
pattern_id = 1899;
}
if(b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_31 && b335_42 && b336_14 && b337_41 && b338_29 && b339_17 && b340_42 && b341_24 && b342_19 && b343_3 && b344_34 && b345_49 && b346_20 && b347_18 && b348_29 && b349_44 && b350_28 && b351_7 && b352_6 && b353_1 && b354_5 && b355_3 && b356_8 && b357_31 && b358_37 && b359_21 && b360_26 && b361_26 && b362_20 && b363_5) {
pattern_id = 1900;
}
if(b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_44 && b346_10 && b347_49 && b348_34 && b349_59 && b350_24 && b351_43 && b352_23 && b353_40 && b354_57 && b355_46 && b356_34 && b357_34 && b358_17 && b359_54 && b360_18 && b361_8 && b362_57 && b363_6) {
pattern_id = 1901;
}
if(b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_36 && b338_49 && b339_22 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_28 && b352_29 && b353_10 && b354_6 && b355_2 && b356_28 && b357_6 && b358_19 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 1902;
}
if(b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_35 && b342_42 && b343_3 && b344_52 && b345_22 && b346_46 && b347_33 && b348_34 && b349_27 && b350_22 && b351_26 && b352_24 && b353_8 && b354_6 && b355_1 && b356_53 && b357_15 && b358_3 && b359_53 && b360_26 && b361_26 && b362_20 && b363_5) {
pattern_id = 1903;
}
if(b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_54 && b342_39 && b343_41 && b344_42 && b345_49 && b346_20 && b347_18 && b348_29 && b349_44 && b350_28 && b351_7 && b352_6 && b353_1 && b354_5 && b355_3 && b356_8 && b357_31 && b358_37 && b359_21 && b360_26 && b361_26 && b362_20 && b363_5) {
pattern_id = 1904;
}
if(b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_21 && b335_42 && b336_27 && b337_29 && b338_48 && b339_22 && b340_30 && b341_53 && b342_39 && b343_24 && b344_41 && b345_22 && b346_30 && b347_34 && b348_11 && b349_36 && b350_48 && b351_40 && b352_40 && b353_8 && b354_1 && b355_25 && b356_41 && b357_31 && b358_16 && b359_16 && b360_19 && b361_44 && b362_19 && b363_5) {
pattern_id = 1905;
}
if(b355_49 && b356_8 && b357_19 && b358_16 && b359_17 && b360_13 && b361_53 && b362_9 && b363_4) {
pattern_id = 1906;
}
if(b348_42 && b349_31 && b350_4 && b351_54 && b352_1 && b353_1 && b354_27 && b355_3 && b356_29 && b357_15 && b358_46 && b359_44 && b360_3 && b361_20 && b362_31 && b363_1) {
pattern_id = 1907;
}
if(b360_12 && b361_26 && b362_52 && b363_48) {
pattern_id = 1908;
}
if(b357_34 && b358_19 && b359_13 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1909;
}
if(b357_34 && b358_46 && b359_26 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1910;
}
if(b358_18 && b359_3 && b360_41 && b361_8 && b362_57 && b363_6) {
pattern_id = 1911;
}
if(b352_41 && b353_37 && b354_25 && b355_3 && b356_6 && b357_34 && b358_6 && b359_7 && b360_2 && b361_53 && b362_11 && b363_8) {
pattern_id = 1912;
}
if(b345_35 && b346_22 && b347_9 && b348_51 && b349_17 && b350_26 && b351_7 && b352_6 && b353_43 && b354_45 && b355_25 && b356_14 && b357_13 && b358_19 && b359_21 && b360_3 && b361_20 && b362_31 && b363_1) {
pattern_id = 1913;
}
if(b346_31 && b347_5 && b348_23 && b349_56 && b350_30 && b351_5 && b352_29 && b353_29 && b354_62 && b355_9 && b356_6 && b357_10 && b358_51 && b359_19 && b360_13 && b361_7 && b362_20 && b363_48) {
pattern_id = 1914;
}
if(b351_24 && b352_4 && b353_23 && b354_41 && b355_9 && b356_6 && b357_13 && b358_18 && b359_25 && b360_24 && b361_7 && b362_20 && b363_41) {
pattern_id = 1915;
}
if(b352_41 && b353_37 && b354_34 && b355_16 && b356_16 && b357_15 && b358_51 && b359_38 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1916;
}
if(b354_45 && b355_11 && b356_6 && b357_51 && b358_23 && b359_19 && b360_19 && b361_53 && b362_25 && b363_5) {
pattern_id = 1917;
}
if(b346_21 && b347_9 && b348_3 && b349_25 && b350_3 && b351_2 && b352_18 && b353_21 && b354_15 && b355_20 && b356_44 && b357_4 && b358_30 && b359_11 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 1918;
}
if(b348_11 && b349_35 && b350_37 && b351_34 && b352_5 && b353_11 && b354_16 && b355_22 && b356_18 && b357_43 && b358_23 && b359_30 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 1919;
}
if(b339_18 && b340_22 && b341_19 && b342_5 && b343_6 && b344_21 && b345_26 && b346_26 && b347_22 && b348_5 && b349_35 && b350_36 && b351_20 && b352_11 && b353_3 && b354_7 && b355_23 && b356_46 && b357_44 && b358_19 && b359_19 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 1920;
}
if(b343_24 && b344_25 && b345_30 && b346_29 && b347_27 && b348_34 && b349_25 && b350_1 && b351_15 && b352_20 && b353_11 && b354_4 && b355_2 && b356_49 && b357_33 && b358_49 && b359_52 && b360_52 && b361_26 && b362_20 && b363_28) {
pattern_id = 1921;
}
if(b358_6 && b359_17 && b360_15 && b361_7 && b362_8 && b363_4) {
pattern_id = 1922;
}
if(b338_27 && b339_7 && b340_33 && b341_19 && b342_54 && b343_54 && b344_29 && b345_36 && b346_36 && b347_34 && b348_26 && b349_25 && b350_22 && b351_63 && b352_22 && b353_65 && b354_5 && b355_43 && b356_9 && b357_47 && b358_21 && b359_73 && b360_27 && b361_69 && b362_8 && b363_77) {
pattern_id = 1923;
}
if(b356_8 && b357_52 && b358_6 && b359_56 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1924;
}
if(b360_27 && b361_18 && b362_56 && b363_10) {
pattern_id = 1925;
}
if(b351_5 && b352_36 && b353_17 && b354_41 && b355_20 && b356_9 && b357_45 && b358_27 && b359_13 && b360_15 && b361_52 && b362_15 && b363_47) {
pattern_id = 1926;
}
if(b348_35 && b349_27 && b350_24 && b351_5 && b352_32 && b353_37 && b354_12 && b355_60 && b356_19 && b357_10 && b358_37 && b359_42 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1927;
}
if(b352_49 && b353_8 && b354_8 && b355_3 && b356_34 && b357_34 && b358_37 && b359_26 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1928;
}
if(b358_3 && b359_12 && b360_24 && b361_22 && b362_9 && b363_10) {
pattern_id = 1929;
}
if(b351_40 && b352_24 && b353_46 && b354_3 && b355_46 && b356_14 && b357_13 && b358_46 && b359_8 && b360_58 && b361_8 && b362_8 && b363_61) {
pattern_id = 1930;
}
if(b355_38 && b356_29 && b357_17 && b358_6 && b359_21 && b360_19 && b361_33 && b362_9 && b363_48) {
pattern_id = 1931;
}
if(b339_33 && b340_8 && b341_19 && b342_27 && b343_26 && b344_26 && b345_20 && b346_21 && b347_68 && b348_6 && b349_56 && b350_22 && b351_5 && b352_1 && b353_8 && b354_10 && b355_31 && b356_8 && b357_9 && b358_6 && b359_42 && b360_10 && b361_44 && b362_64 && b363_61) {
pattern_id = 1932;
}
if(b347_35 && b348_26 && b349_34 && b350_26 && b351_7 && b352_21 && b353_48 && b354_3 && b355_32 && b356_10 && b357_6 && b358_37 && b359_42 && b360_2 && b361_28 && b362_18 && b363_8) {
pattern_id = 1933;
}
if(b347_35 && b348_26 && b349_34 && b350_26 && b351_7 && b352_21 && b353_48 && b354_3 && b355_32 && b356_1 && b357_35 && b358_11 && b359_13 && b360_2 && b361_28 && b362_18 && b363_8) {
pattern_id = 1934;
}
if(b326_22 && b327_29 && b328_38 && b329_19 && b330_33 && b331_19 && b332_41 && b333_28 && b334_55 && b335_4 && b336_31 && b337_9 && b338_4 && b339_33 && b340_38 && b341_19 && b342_18 && b343_36 && b344_27 && b345_42 && b346_21 && b347_34 && b348_51 && b349_43 && b350_17 && b351_65 && b352_24 && b353_17 && b354_15 && b355_22 && b356_31 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1935;
}
if(b354_46 && b355_15 && b356_16 && b357_18 && b358_28 && b359_34 && b360_22 && b361_34 && b362_38 && b363_28) {
pattern_id = 1936;
}
if(b327_20 && b328_2 && b329_28 && b330_37 && b331_49 && b332_39 && b333_36 && b334_22 && b335_41 && b336_7 && b337_10 && b338_10 && b339_12 && b340_6 && b341_42 && b342_19 && b343_25 && b344_34 && b345_69 && b346_9 && b347_15 && b348_32 && b349_7 && b350_27 && b351_58 && b352_27 && b353_2 && b354_15 && b355_22 && b356_31 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1937;
}
if(b349_47 && b350_36 && b351_21 && b352_10 && b353_48 && b354_23 && b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1938;
}
if(b347_35 && b348_15 && b349_36 && b350_57 && b351_38 && b352_52 && b353_38 && b354_3 && b355_3 && b356_10 && b357_35 && b358_17 && b359_26 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1939;
}
if(b343_54 && b344_8 && b345_45 && b346_48 && b347_21 && b348_42 && b349_18 && b350_4 && b351_20 && b352_40 && b353_8 && b354_55 && b355_18 && b356_36 && b357_49 && b358_44 && b359_64 && b360_54 && b361_26 && b362_52 && b363_48) {
pattern_id = 1940;
}
if(b316_13 && b317_16 && b318_14 && b319_10 && b320_3 && b321_6 && b322_20 && b323_2 && b324_23 && b325_14 && b326_3 && b327_24 && b328_14 && b329_1 && b330_8 && b331_32 && b332_21 && b333_25 && b334_34 && b335_36 && b336_28 && b337_16 && b338_4 && b339_10 && b340_15 && b341_11 && b342_3 && b343_19 && b344_2 && b345_10 && b346_46 && b347_54 && b348_4 && b349_18 && b350_4 && b351_6 && b352_21 && b353_46 && b354_36 && b355_1 && b356_10 && b357_34 && b358_14 && b359_11 && b360_54 && b361_17 && b362_9 && b363_5) {
pattern_id = 1941;
}
if(b358_3 && b359_17 && b360_13 && b361_19 && b362_18 && b363_17) {
pattern_id = 1942;
}
if(b349_47 && b350_34 && b351_34 && b352_13 && b353_31 && b354_66 && b355_22 && b356_4 && b357_58 && b358_37 && b359_42 && b360_27 && b361_30 && b362_28 && b363_78) {
pattern_id = 1943;
}
if(b323_5 && b324_7 && b325_6 && b326_8 && b327_3 && b328_11 && b329_9 && b330_8 && b331_11 && b332_3 && b333_5 && b334_11 && b335_5 && b336_2 && b337_11 && b338_2 && b339_2 && b340_7 && b341_2 && b342_3 && b343_13 && b344_4 && b345_3 && b346_8 && b347_3 && b348_4 && b349_10 && b350_7 && b351_6 && b352_17 && b353_3 && b354_4 && b355_26 && b356_4 && b357_4 && b358_35 && b359_14 && b360_1 && b361_35 && b362_1 && b363_1) {
pattern_id = 1944;
}
if(b357_32 && b358_11 && b359_7 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 1945;
}
if(b357_32 && b358_11 && b359_7 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1946;
}
if(b357_32 && b358_11 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1947;
}
if(b356_32 && b357_44 && b358_17 && b359_43 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1948;
}
if(b329_24 && b330_38 && b331_5 && b332_22 && b333_33 && b334_31 && b335_3 && b336_28 && b337_6 && b338_17 && b339_27 && b340_3 && b341_39 && b342_44 && b343_47 && b344_8 && b345_38 && b346_29 && b347_8 && b348_15 && b349_36 && b350_35 && b351_59 && b352_30 && b353_74 && b354_21 && b355_11 && b356_16 && b357_47 && b358_23 && b359_16 && b360_10 && b361_41 && b362_11 && b363_77) {
pattern_id = 1949;
}
if(b358_12 && b359_23 && b360_15 && b361_12 && b362_26 && b363_5) {
pattern_id = 1950;
}
if(b349_48 && b350_28 && b351_26 && b352_23 && b353_43 && b354_27 && b355_10 && b356_36 && b357_1 && b358_10 && b359_10 && b360_3 && b361_26 && b362_52 && b363_48) {
pattern_id = 1951;
}
if(b348_55 && b349_27 && b350_12 && b351_5 && b352_34 && b353_17 && b354_9 && b355_13 && b356_18 && b357_29 && b358_31 && b359_6 && b360_15 && b361_8 && b362_19 && b363_48) {
pattern_id = 1952;
}
if(b353_9 && b354_3 && b355_14 && b356_15 && b357_3 && b358_18 && b359_16 && b360_27 && b361_26 && b362_11 && b363_13) {
pattern_id = 1953;
}
if(b355_48 && b356_8 && b357_6 && b358_16 && b359_43 && b360_13 && b361_8 && b362_20 && b363_6) {
pattern_id = 1954;
}
if(b347_49 && b348_15 && b349_25 && b350_52 && b351_45 && b352_23 && b353_6 && b354_8 && b355_1 && b356_41 && b357_10 && b358_37 && b359_21 && b360_18 && b361_8 && b362_20 && b363_6) {
pattern_id = 1955;
}
if(b358_12 && b359_17 && b360_19 && b361_44 && b362_11 && b363_4) {
pattern_id = 1956;
}
if(b355_48 && b356_1 && b357_6 && b358_2 && b359_13 && b360_19 && b361_17 && b362_14 && b363_32) {
pattern_id = 1957;
}
if(b331_7 && b332_8 && b333_8 && b334_8 && b335_9 && b336_8 && b337_6 && b338_11 && b339_8 && b340_6 && b341_5 && b342_11 && b343_6 && b344_10 && b345_12 && b346_7 && b347_8 && b348_6 && b349_9 && b350_11 && b351_10 && b352_5 && b353_19 && b354_18 && b355_20 && b356_24 && b357_26 && b358_23 && b359_32 && b360_16 && b361_34 && b362_35 && b363_36) {
pattern_id = 1958;
}
if(b359_16 && b360_19 && b361_18 && b362_1 && b363_8) {
pattern_id = 1959;
}
if(b360_6 && b361_26 && b362_1 && b363_12) {
pattern_id = 1960;
}
if(b360_6 && b361_7 && b362_2 && b363_6) {
pattern_id = 1961;
}
if(b357_49 && b358_37 && b359_26 && b360_18 && b361_26 && b362_52 && b363_48) {
pattern_id = 1962;
}
if(b342_28 && b343_3 && b344_42 && b345_34 && b346_55 && b347_32 && b348_43 && b349_50 && b350_43 && b351_32 && b352_21 && b353_40 && b354_21 && b355_16 && b356_8 && b357_6 && b358_19 && b359_2 && b360_2 && b361_52 && b362_15 && b363_51) {
pattern_id = 1963;
}
if(b341_26 && b342_24 && b343_3 && b344_25 && b345_11 && b346_13 && b347_10 && b348_4 && b349_28 && b350_11 && b351_6 && b352_18 && b353_15 && b354_15 && b355_30 && b356_19 && b357_44 && b358_2 && b359_8 && b360_2 && b361_50 && b362_15 && b363_70) {
pattern_id = 1964;
}
if(b354_9 && b355_3 && b356_7 && b357_51 && b358_28 && b359_34 && b360_22 && b361_34 && b362_38 && b363_28) {
pattern_id = 1965;
}
if(b356_57 && b357_6 && b358_11 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1966;
}
if(b352_24 && b353_25 && b354_27 && b355_63 && b356_81 && b357_18 && b358_17 && b359_3 && b360_58 && b361_50 && b362_9 && b363_8) {
pattern_id = 1967;
}
if(b356_29 && b357_10 && b358_55 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1968;
}
if(b359_12 && b360_6 && b361_12 && b362_26 && b363_5) {
pattern_id = 1969;
}
if(b346_20 && b347_21 && b348_55 && b349_9 && b350_4 && b351_21 && b352_45 && b353_31 && b354_58 && b355_2 && b356_17 && b357_13 && b358_2 && b359_56 && b360_15 && b361_26 && b362_56 && b363_6) {
pattern_id = 1970;
}
if(b355_15 && b356_28 && b357_34 && b358_6 && b359_2 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1971;
}
if(b297_12 && b298_12 && b299_4 && b300_14 && b301_6 && b302_5 && b303_6 && b304_17 && b305_18 && b306_15 && b307_15 && b308_2 && b309_19 && b310_16 && b311_7 && b312_3 && b313_20 && b314_28 && b315_14 && b316_32 && b317_3 && b318_15 && b319_32 && b320_35 && b321_22 && b322_31 && b323_20 && b324_1 && b325_38 && b326_19 && b327_16 && b328_45 && b329_46 && b330_19 && b331_22 && b332_45 && b333_41 && b334_22 && b335_40 && b336_38 && b337_6 && b338_56 && b339_2 && b340_8 && b341_39 && b342_49 && b343_15 && b344_13 && b345_17 && b346_10 && b347_65 && b348_4 && b349_17 && b350_36 && b351_35 && b352_6 && b353_32 && b354_5 && b355_11 && b356_76 && b357_20 && b358_51 && b359_43 && b360_59 && b361_8 && b362_2 && b363_79) {
pattern_id = 1972;
}
if(b345_22 && b346_46 && b347_33 && b348_34 && b349_27 && b350_42 && b351_45 && b352_43 && b353_6 && b354_27 && b355_48 && b356_41 && b357_13 && b358_18 && b359_13 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1973;
}
if(b344_5 && b345_34 && b346_16 && b347_30 && b348_3 && b349_25 && b350_54 && b351_28 && b352_25 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 1974;
}
if(b359_12 && b360_28 && b361_39 && b362_44 && b363_14) {
pattern_id = 1975;
}
if(b363_63) {
pattern_id = 1976;
}
if(b348_58 && b349_27 && b350_49 && b351_29 && b352_25 && b353_40 && b354_36 && b355_15 && b356_36 && b357_6 && b358_28 && b359_34 && b360_22 && b361_34 && b362_38 && b363_28) {
pattern_id = 1977;
}
if(b358_21 && b359_12 && b360_26 && b361_23 && b362_27 && b363_5) {
pattern_id = 1978;
}
if(b361_23 && b362_13 && b363_19) {
pattern_id = 1979;
}
if(b357_17 && b358_22 && b359_1 && b360_19 && b361_19 && b362_2 && b363_25) {
pattern_id = 1980;
}
if(b349_34 && b350_41 && b351_41 && b352_40 && b353_1 && b354_20 && b355_11 && b356_10 && b357_9 && b358_14 && b359_54 && b360_28 && b361_12 && b362_11 && b363_32) {
pattern_id = 1981;
}
if(b352_40 && b353_30 && b354_8 && b355_3 && b356_41 && b357_18 && b358_51 && b359_42 && b360_3 && b361_20 && b362_32 && b363_1) {
pattern_id = 1982;
}
if(b353_46 && b354_43 && b355_28 && b356_19 && b357_35 && b358_46 && b359_56 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 1983;
}
if(b359_43 && b360_13 && b361_41 && b362_11 && b363_11) {
pattern_id = 1984;
}
if(b355_9 && b356_6 && b357_11 && b358_12 && b359_13 && b360_12 && b361_13 && b362_12 && b363_10) {
pattern_id = 1985;
}
if(b353_46 && b354_12 && b355_48 && b356_50 && b357_18 && b358_18 && b359_73 && b360_18 && b361_17 && b362_44 && b363_5) {
pattern_id = 1986;
}
if(b349_34 && b350_36 && b351_22 && b352_24 && b353_27 && b354_4 && b355_15 && b356_28 && b357_10 && b358_37 && b359_17 && b360_15 && b361_8 && b362_14 && b363_6) {
pattern_id = 1987;
}
if(b357_17 && b358_37 && b359_40 && b360_13 && b361_44 && b362_48 && b363_12) {
pattern_id = 1988;
}
if(b351_45 && b352_4 && b353_9 && b354_43 && b355_16 && b356_36 && b357_15 && b358_2 && b359_19 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 1989;
}
if(b355_9 && b356_6 && b357_11 && b358_19 && b359_21 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 1990;
}
if(b350_42 && b351_34 && b352_8 && b353_1 && b354_41 && b355_23 && b356_23 && b357_14 && b358_28 && b359_11 && b360_15 && b361_7 && b362_15 && b363_6) {
pattern_id = 1991;
}
if(b358_17 && b359_17 && b360_17 && b361_17 && b362_1 && b363_14) {
pattern_id = 1992;
}
if(b357_17 && b358_2 && b359_65 && b360_35 && b361_1 && b362_62 && b363_25) {
pattern_id = 1993;
}
if(b329_22 && b330_4 && b331_1 && b332_3 && b333_5 && b334_1 && b335_14 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 1994;
}
if(b356_14 && b357_13 && b358_16 && b359_47 && b360_19 && b361_33 && b362_9 && b363_48) {
pattern_id = 1995;
}
if(b343_25 && b344_26 && b345_22 && b346_23 && b347_1 && b348_35 && b349_36 && b350_36 && b351_38 && b352_11 && b353_42 && b354_7 && b355_23 && b356_11 && b357_1 && b358_1 && b359_4 && b360_1 && b361_40 && b362_6 && b363_1) {
pattern_id = 1996;
}
if(b339_28 && b340_33 && b341_24 && b342_18 && b343_3 && b344_8 && b345_11 && b346_13 && b347_10 && b348_10 && b349_25 && b350_19 && b351_35 && b352_63 && b353_38 && b354_43 && b355_48 && b356_29 && b357_19 && b358_17 && b359_13 && b360_2 && b361_52 && b362_15 && b363_51) {
pattern_id = 1997;
}
if(b356_14 && b357_13 && b358_2 && b359_16 && b360_13 && b361_44 && b362_9 && b363_48) {
pattern_id = 1998;
}
if(b341_51 && b342_29 && b343_8 && b344_54 && b345_42 && b346_45 && b347_21 && b348_42 && b349_28 && b350_17 && b351_35 && b352_41 && b353_37 && b354_42 && b355_33 && b356_6 && b357_34 && b358_6 && b359_54 && b360_8 && b361_26 && b362_71 && b363_5) {
pattern_id = 1999;
}
if(b341_51 && b342_29 && b343_8 && b344_54 && b345_42 && b346_45 && b347_21 && b348_42 && b349_28 && b350_17 && b351_49 && b352_21 && b353_46 && b354_43 && b355_49 && b356_10 && b357_6 && b358_6 && b359_54 && b360_58 && b361_8 && b362_15 && b363_51) {
pattern_id = 2000;
}
if(b335_23 && b336_22 && b337_26 && b338_20 && b339_16 && b340_43 && b341_27 && b342_29 && b343_48 && b344_27 && b345_31 && b346_31 && b347_21 && b348_26 && b349_39 && b350_17 && b351_35 && b352_41 && b353_37 && b354_42 && b355_33 && b356_6 && b357_34 && b358_6 && b359_54 && b360_8 && b361_26 && b362_71 && b363_5) {
pattern_id = 2001;
}
if(b357_41 && b358_37 && b359_59 && b360_13 && b361_23 && b362_25 && b363_11) {
pattern_id = 2002;
}
if(b345_20 && b346_29 && b347_31 && b348_23 && b349_35 && b350_36 && b351_23 && b352_29 && b353_29 && b354_23 && b355_9 && b356_6 && b357_11 && b358_19 && b359_21 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 2003;
}
if(b351_38 && b352_61 && b353_41 && b354_3 && b355_11 && b356_1 && b357_35 && b358_37 && b359_21 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2004;
}
if(b345_20 && b346_29 && b347_42 && b348_11 && b349_36 && b350_4 && b351_28 && b352_4 && b353_27 && b354_15 && b355_17 && b356_22 && b357_1 && b358_1 && b359_25 && b360_46 && b361_30 && b362_36 && b363_43) {
pattern_id = 2005;
}
if(b349_39 && b350_28 && b351_38 && b352_23 && b353_31 && b354_8 && b355_33 && b356_41 && b357_18 && b358_6 && b359_21 && b360_8 && b361_2 && b362_15 && b363_6) {
pattern_id = 2006;
}
if(b199_2 && b200_2 && b201_2 && b202_2 && b203_2 && b204_2 && b205_2 && b206_2 && b207_2 && b208_2 && b209_2 && b210_2 && b211_2 && b212_2 && b213_2 && b214_2 && b215_2 && b216_2 && b217_2 && b218_2 && b219_2 && b220_2 && b221_1 && b222_2 && b223_2 && b224_2 && b225_2 && b226_2 && b227_2 && b228_2 && b229_2 && b230_2 && b231_2 && b232_2 && b233_2 && b234_3 && b235_3 && b236_3 && b237_2 && b238_3 && b239_3 && b240_3 && b241_3 && b242_3 && b243_3 && b244_3 && b245_3 && b246_2 && b247_3 && b248_3 && b249_3 && b250_1 && b251_2 && b252_2 && b253_2 && b254_3 && b255_3 && b256_3 && b257_3 && b258_4 && b259_3 && b260_4 && b261_4 && b262_5 && b263_4 && b264_4 && b265_5 && b266_4 && b267_3 && b268_5 && b269_5 && b270_4 && b271_4 && b272_4 && b273_4 && b274_5 && b275_5 && b276_3 && b277_6 && b278_4 && b279_6 && b280_6 && b281_6 && b282_4 && b283_3 && b284_5 && b285_7 && b286_1 && b287_5 && b288_8 && b289_7 && b290_3 && b291_7 && b292_6 && b293_8 && b294_8 && b295_5 && b296_6 && b297_7 && b298_8 && b299_10 && b300_7 && b301_7 && b302_8 && b303_2 && b304_13 && b305_11 && b306_3 && b307_12 && b308_15 && b309_4 && b310_4 && b311_11 && b312_5 && b313_15 && b314_20 && b315_18 && b316_23 && b317_3 && b318_26 && b319_12 && b320_3 && b321_28 && b322_10 && b323_2 && b324_23 && b325_33 && b326_20 && b327_8 && b328_17 && b329_39 && b330_4 && b331_40 && b332_11 && b333_5 && b334_7 && b335_11 && b336_7 && b337_6 && b338_42 && b339_27 && b340_21 && b341_34 && b342_28 && b343_6 && b344_58 && b345_3 && b346_9 && b347_7 && b348_37 && b349_9 && b350_15 && b351_36 && b352_11 && b353_22 && b354_27 && b355_51 && b356_18 && b357_26 && b358_48 && b359_11 && b360_35 && b361_20 && b362_5 && b363_30) {
pattern_id = 2007;
}
if(b358_46 && b359_56 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 2008;
}
if(b357_3 && b358_6 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 2009;
}
if(b342_25 && b343_24 && b344_28 && b345_3 && b346_11 && b347_52 && b348_60 && b349_57 && b350_12 && b351_26 && b352_22 && b353_4 && b354_3 && b355_40 && b356_15 && b357_18 && b358_2 && b359_19 && b360_3 && b361_20 && b362_31 && b363_1) {
pattern_id = 2010;
}
if(b346_46 && b347_22 && b348_43 && b349_46 && b350_37 && b351_34 && b352_10 && b353_38 && b354_43 && b355_16 && b356_29 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2011;
}
if(b348_38 && b349_31 && b350_43 && b351_41 && b352_1 && b353_1 && b354_28 && b355_10 && b356_7 && b357_19 && b358_40 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 2012;
}
if(b348_38 && b349_31 && b350_43 && b351_41 && b352_25 && b353_46 && b354_5 && b355_47 && b356_8 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2013;
}
if(b356_28 && b357_18 && b358_15 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2014;
}
if(b355_16 && b356_8 && b357_2 && b358_2 && b359_13 && b360_15 && b361_15 && b362_9 && b363_8) {
pattern_id = 2015;
}
if(b350_22 && b351_5 && b352_46 && b353_10 && b354_10 && b355_1 && b356_7 && b357_6 && b358_6 && b359_17 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 2016;
}
if(b353_27 && b354_43 && b355_48 && b356_50 && b357_13 && b358_54 && b359_24 && b360_13 && b361_39 && b362_14 && b363_32) {
pattern_id = 2017;
}
if(b343_26 && b344_8 && b345_4 && b346_7 && b347_5 && b348_38 && b349_9 && b350_4 && b351_42 && b352_25 && b353_29 && b354_3 && b355_5 && b356_11 && b357_10 && b358_37 && b359_21 && b360_8 && b361_7 && b362_25 && b363_5) {
pattern_id = 2018;
}
if(b361_7 && b362_56 && b363_48) {
pattern_id = 2019;
}
if(b352_22 && b353_8 && b354_8 && b355_14 && b356_11 && b357_36 && b358_16 && b359_15 && b360_26 && b361_12 && b362_44 && b363_22) {
pattern_id = 2020;
}
if(b351_20 && b352_21 && b353_10 && b354_8 && b355_20 && b356_35 && b357_35 && b358_2 && b359_26 && b360_36 && b361_26 && b362_2 && b363_22) {
pattern_id = 2021;
}
if(b353_17 && b354_5 && b355_14 && b356_1 && b357_4 && b358_38 && b359_26 && b360_19 && b361_26 && b362_20 && b363_6) {
pattern_id = 2022;
}
if(b353_17 && b354_5 && b355_14 && b356_1 && b357_4 && b358_38 && b359_26 && b360_19 && b361_39 && b362_18 && b363_10) {
pattern_id = 2023;
}
if(b354_27 && b355_2 && b356_1 && b357_19 && b358_23 && b359_20 && b360_6 && b361_1 && b362_1 && b363_6) {
pattern_id = 2024;
}
if(b343_31 && b344_26 && b345_42 && b346_30 && b347_30 && b348_15 && b349_36 && b350_41 && b351_25 && b352_8 && b353_3 && b354_11 && b355_49 && b356_60 && b357_13 && b358_70 && b359_79 && b360_20 && b361_1 && b362_8 && b363_44) {
pattern_id = 2025;
}
if(b333_13 && b334_16 && b335_20 && b336_14 && b337_15 && b338_20 && b339_16 && b340_19 && b341_19 && b342_19 && b343_20 && b344_19 && b345_23 && b346_20 && b347_18 && b348_23 && b349_26 && b350_31 && b351_24 && b352_32 && b353_40 && b354_12 && b355_16 && b356_28 && b357_18 && b358_16 && b359_19 && b360_2 && b361_26 && b362_20 && b363_52) {
pattern_id = 2026;
}
if(b355_13 && b356_34 && b357_32 && b358_59 && b359_13 && b360_54 && b361_12 && b362_57 && b363_61) {
pattern_id = 2027;
}
if(b347_2 && b348_3 && b349_4 && b350_4 && b351_5 && b352_5 && b353_7 && b354_3 && b355_11 && b356_6 && b357_4 && b358_2 && b359_13 && b360_15 && b361_15 && b362_9 && b363_8) {
pattern_id = 2028;
}
if(b360_28 && b361_26 && b362_20 && b363_29) {
pattern_id = 2029;
}
if(b356_36 && b357_17 && b358_7 && b359_40 && b360_41 && b361_62 && b362_22 && b363_67) {
pattern_id = 2030;
}
if(b350_19 && b351_7 && b352_8 && b353_12 && b354_64 && b355_62 && b356_19 && b357_33 && b358_65 && b359_26 && b360_1 && b361_23 && b362_13 && b363_19) {
pattern_id = 2031;
}
if(b360_28 && b361_7 && b362_20 && b363_29) {
pattern_id = 2032;
}
if(b359_7 && b360_10 && b361_41 && b362_11 && b363_48) {
pattern_id = 2033;
}
if(b357_51 && b358_9 && b359_12 && b360_11 && b361_12 && b362_11 && b363_5) {
pattern_id = 2034;
}
if(b356_36 && b357_9 && b358_37 && b359_7 && b360_54 && b361_26 && b362_20 && b363_26) {
pattern_id = 2035;
}
if(b345_34 && b346_10 && b347_5 && b348_34 && b349_25 && b350_24 && b351_34 && b352_40 && b353_33 && b354_3 && b355_11 && b356_1 && b357_35 && b358_37 && b359_21 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 2036;
}
if(b355_13 && b356_41 && b357_15 && b358_11 && b359_3 && b360_18 && b361_67 && b362_56 && b363_5) {
pattern_id = 2037;
}
if(b360_28 && b361_41 && b362_1 && b363_48) {
pattern_id = 2038;
}
if(b331_34 && b332_38 && b333_50 && b334_8 && b335_11 && b336_31 && b337_7 && b338_40 && b339_25 && b340_30 && b341_24 && b342_24 && b343_10 && b344_45 && b345_9 && b346_7 && b347_57 && b348_13 && b349_7 && b350_28 && b351_35 && b352_41 && b353_31 && b354_46 && b355_44 && b356_28 && b357_10 && b358_11 && b359_12 && b360_10 && b361_44 && b362_74 && b363_77) {
pattern_id = 2039;
}
if(b352_22 && b353_10 && b354_46 && b355_15 && b356_16 && b357_18 && b358_40 && b359_6 && b360_35 && b361_20 && b362_5 && b363_68) {
pattern_id = 2040;
}
if(b358_44 && b359_57 && b360_52 && b361_23 && b362_12 && b363_52) {
pattern_id = 2041;
}
if(b354_2 && b355_2 && b356_2 && b357_2 && b358_2 && b359_2 && b360_2 && b361_2 && b362_2 && b363_2) {
pattern_id = 2042;
}
if(b360_15 && b361_1 && b362_1 && b363_6) {
pattern_id = 2043;
}
if(b355_11 && b356_10 && b357_3 && b358_12 && b359_13 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2044;
}
if(b352_1 && b353_8 && b354_34 && b355_15 && b356_28 && b357_33 && b358_44 && b359_16 && b360_28 && b361_59 && b362_68 && b363_48) {
pattern_id = 2045;
}
if(b356_41 && b357_10 && b358_55 && b359_38 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 2046;
}
if(b353_32 && b354_25 && b355_13 && b356_7 && b357_4 && b358_11 && b359_3 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 2047;
}
if(b325_22 && b326_26 && b327_20 && b328_25 && b329_15 && b330_3 && b331_25 && b332_22 && b333_25 && b334_31 && b335_24 && b336_30 && b337_39 && b338_5 && b339_1 && b340_30 && b341_28 && b342_25 && b343_41 && b344_29 && b345_31 && b346_47 && b347_22 && b348_52 && b349_33 && b350_21 && b351_53 && b352_18 && b353_21 && b354_52 && b355_2 && b356_17 && b357_13 && b358_2 && b359_56 && b360_15 && b361_26 && b362_56 && b363_6) {
pattern_id = 2048;
}
if(b348_5 && b349_31 && b350_4 && b351_34 && b352_40 && b353_41 && b354_42 && b355_10 && b356_6 && b357_19 && b358_11 && b359_54 && b360_24 && b361_7 && b362_20 && b363_41) {
pattern_id = 2049;
}
if(b353_32 && b354_3 && b355_14 && b356_6 && b357_17 && b358_56 && b359_13 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2050;
}
if(b343_47 && b344_34 && b345_4 && b346_48 && b347_43 && b348_38 && b349_9 && b350_1 && b351_36 && b352_18 && b353_11 && b354_14 && b355_53 && b356_68 && b357_27 && b358_48 && b359_5 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 2051;
}
if(b360_15 && b361_8 && b362_16 && b363_6) {
pattern_id = 2052;
}
if(b357_9 && b358_55 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2053;
}
if(b360_15 && b361_7 && b362_15 && b363_6) {
pattern_id = 2054;
}
if(b348_5 && b349_25 && b350_36 && b351_26 && b352_11 && b353_3 && b354_11 && b355_23 && b356_41 && b357_15 && b358_37 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2055;
}
if(b336_3 && b337_24 && b338_38 && b339_27 && b340_3 && b341_28 && b342_55 && b343_59 && b344_20 && b345_5 && b346_18 && b347_48 && b348_44 && b349_70 && b350_12 && b351_28 && b352_22 && b353_31 && b354_8 && b355_3 && b356_10 && b357_6 && b358_74 && b359_21 && b360_10 && b361_33 && b362_9 && b363_48) {
pattern_id = 2056;
}
if(b344_40 && b345_48 && b346_42 && b347_29 && b348_38 && b349_27 && b350_25 && b351_20 && b352_40 && b353_37 && b354_28 && b355_15 && b356_28 && b357_71 && b358_17 && b359_3 && b360_58 && b361_26 && b362_20 && b363_48) {
pattern_id = 2057;
}
if(b354_36 && b355_3 && b356_1 && b357_51 && b358_28 && b359_34 && b360_22 && b361_34 && b362_38 && b363_28) {
pattern_id = 2058;
}
if(b319_17 && b320_3 && b321_5 && b322_4 && b323_16 && b324_1 && b325_2 && b326_12 && b327_4 && b328_12 && b329_26 && b330_4 && b331_1 && b332_3 && b333_2 && b334_21 && b335_4 && b336_1 && b337_1 && b338_4 && b339_18 && b340_9 && b341_2 && b342_1 && b343_10 && b344_40 && b345_11 && b346_1 && b347_3 && b348_10 && b349_36 && b350_1 && b351_17 && b352_7 && b353_11 && b354_12 && b355_23 && b356_4 && b357_23 && b358_28 && b359_17 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2059;
}
if(b349_26 && b350_48 && b351_29 && b352_40 && b353_1 && b354_1 && b355_1 && b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 2060;
}
if(b350_4 && b351_41 && b352_6 && b353_8 && b354_8 && b355_60 && b356_19 && b357_51 && b358_54 && b359_7 && b360_61 && b361_26 && b362_52 && b363_48) {
pattern_id = 2061;
}
if(b358_2 && b359_8 && b360_18 && b361_7 && b362_8 && b363_16) {
pattern_id = 2062;
}
if(b345_42 && b346_36 && b347_43 && b348_11 && b349_31 && b350_22 && b351_41 && b352_6 && b353_56 && b354_21 && b355_5 && b356_12 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2063;
}
if(b342_30 && b343_19 && b344_40 && b345_17 && b346_21 && b347_18 && b348_29 && b349_24 && b350_36 && b351_26 && b352_52 && b353_1 && b354_41 && b355_15 && b356_7 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2064;
}
if(b358_2 && b359_13 && b360_19 && b361_17 && b362_14 && b363_32) {
pattern_id = 2065;
}
if(b349_26 && b350_26 && b351_54 && b352_10 && b353_32 && b354_3 && b355_46 && b356_1 && b357_35 && b358_11 && b359_13 && b360_65 && b361_13 && b362_15 && b363_18) {
pattern_id = 2066;
}
if(b357_19 && b358_6 && b359_43 && b360_27 && b361_52 && b362_11 && b363_4) {
pattern_id = 2067;
}
if(b358_2 && b359_13 && b360_30 && b361_19 && b362_27 && b363_5) {
pattern_id = 2068;
}
if(b357_19 && b358_6 && b359_21 && b360_12 && b361_41 && b362_64 && b363_22) {
pattern_id = 2069;
}
if(b354_8 && b355_1 && b356_28 && b357_34 && b358_7 && b359_57 && b360_30 && b361_12 && b362_27 && b363_5) {
pattern_id = 2070;
}
if(b332_38 && b333_28 && b334_34 && b335_38 && b336_7 && b337_57 && b338_25 && b339_12 && b340_65 && b341_11 && b342_13 && b343_14 && b344_1 && b345_18 && b346_28 && b347_6 && b348_37 && b349_25 && b350_22 && b351_26 && b352_11 && b353_73 && b354_56 && b355_23 && b356_10 && b357_10 && b358_11 && b359_26 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2071;
}
if(b349_26 && b350_26 && b351_21 && b352_44 && b353_46 && b354_3 && b355_3 && b356_52 && b357_33 && b358_25 && b359_25 && b360_2 && b361_30 && b362_28 && b363_43) {
pattern_id = 2072;
}
if(b350_4 && b351_5 && b352_6 && b353_50 && b354_43 && b355_5 && b356_8 && b357_15 && b358_7 && b359_19 && b360_3 && b361_20 && b362_31 && b363_1) {
pattern_id = 2073;
}
if(b353_10 && b354_9 && b355_1 && b356_16 && b357_17 && b358_23 && b359_24 && b360_10 && b361_27 && b362_20 && b363_26) {
pattern_id = 2074;
}
if(b358_2 && b359_12 && b360_24 && b361_22 && b362_9 && b363_10) {
pattern_id = 2075;
}
if(b340_27 && b341_24 && b342_18 && b343_24 && b344_35 && b345_21 && b346_21 && b347_45 && b348_61 && b349_31 && b350_29 && b351_45 && b352_4 && b353_9 && b354_28 && b355_1 && b356_41 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2076;
}
if(b339_16 && b340_8 && b341_19 && b342_27 && b343_26 && b344_21 && b345_17 && b346_37 && b347_33 && b348_23 && b349_36 && b350_26 && b351_5 && b352_29 && b353_10 && b354_9 && b355_25 && b356_7 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2077;
}
if(b354_8 && b355_15 && b356_14 && b357_51 && b358_17 && b359_13 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2078;
}
if(b358_2 && b359_15 && b360_13 && b361_23 && b362_25 && b363_23) {
pattern_id = 2079;
}
if(b355_14 && b356_16 && b357_18 && b358_6 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2080;
}
if(b352_25 && b353_46 && b354_12 && b355_45 && b356_57 && b357_6 && b358_11 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2081;
}
if(b361_41 && b362_27 && b363_22) {
pattern_id = 2082;
}
if(b358_2 && b359_21 && b360_19 && b361_33 && b362_9 && b363_48) {
pattern_id = 2083;
}
if(b348_29 && b349_25 && b350_30 && b351_5 && b352_52 && b353_48 && b354_5 && b355_48 && b356_29 && b357_10 && b358_59 && b359_56 && b360_10 && b361_19 && b362_9 && b363_36) {
pattern_id = 2084;
}
if(b340_27 && b341_23 && b342_41 && b343_8 && b344_5 && b345_49 && b346_21 && b347_46 && b348_34 && b349_27 && b350_4 && b351_28 && b352_36 && b353_43 && b354_25 && b355_25 && b356_14 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2085;
}
if(b354_8 && b355_13 && b356_6 && b357_15 && b358_3 && b359_20 && b360_10 && b361_17 && b362_24 && b363_22) {
pattern_id = 2086;
}
if(b339_16 && b340_36 && b341_30 && b342_55 && b343_27 && b344_42 && b345_17 && b346_30 && b347_34 && b348_17 && b349_26 && b350_19 && b351_32 && b352_44 && b353_6 && b354_10 && b355_16 && b356_54 && b357_18 && b358_27 && b359_25 && b360_24 && b361_7 && b362_27 && b363_28) {
pattern_id = 2087;
}
if(b355_14 && b356_7 && b357_13 && b358_11 && b359_13 && b360_40 && b361_8 && b362_20 && b363_6) {
pattern_id = 2088;
}
if(b356_1 && b357_6 && b358_37 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2089;
}
if(b357_19 && b358_11 && b359_17 && b360_27 && b361_12 && b362_27 && b363_28) {
pattern_id = 2090;
}
if(b357_19 && b358_14 && b359_21 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2091;
}
if(b351_35 && b352_61 && b353_10 && b354_62 && b355_2 && b356_16 && b357_17 && b358_59 && b359_57 && b360_8 && b361_8 && b362_8 && b363_22) {
pattern_id = 2092;
}
if(b316_11 && b317_22 && b318_20 && b319_24 && b320_16 && b321_23 && b322_27 && b323_11 && b324_12 && b325_31 && b326_37 && b327_30 && b328_22 && b329_20 && b330_21 && b331_22 && b332_28 && b333_33 && b334_24 && b335_36 && b336_28 && b337_41 && b338_27 && b339_21 && b340_3 && b341_28 && b342_18 && b343_55 && b344_26 && b345_59 && b346_37 && b347_34 && b348_17 && b349_19 && b350_42 && b351_5 && b352_52 && b353_38 && b354_3 && b355_38 && b356_28 && b357_31 && b358_7 && b359_7 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 2093;
}
if(b323_11 && b324_28 && b325_20 && b326_36 && b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_21 && b333_42 && b334_27 && b335_38 && b336_37 && b337_49 && b338_47 && b339_18 && b340_36 && b341_24 && b342_52 && b343_46 && b344_27 && b345_59 && b346_48 && b347_22 && b348_51 && b349_31 && b350_48 && b351_26 && b352_61 && b353_17 && b354_3 && b355_14 && b356_53 && b357_11 && b358_6 && b359_19 && b360_55 && b361_44 && b362_8 && b363_47) {
pattern_id = 2094;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_19 && b332_43 && b333_36 && b334_23 && b335_23 && b336_43 && b337_34 && b338_27 && b339_21 && b340_8 && b341_48 && b342_50 && b343_36 && b344_55 && b345_10 && b346_21 && b347_23 && b348_11 && b349_46 && b350_12 && b351_42 && b352_22 && b353_49 && b354_8 && b355_46 && b356_28 && b357_15 && b358_59 && b359_58 && b360_59 && b361_8 && b362_44 && b363_5) {
pattern_id = 2095;
}
if(b327_15 && b328_36 && b329_21 && b330_40 && b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_27 && b337_48 && b338_29 && b339_23 && b340_40 && b341_54 && b342_30 && b343_46 && b344_13 && b345_49 && b346_43 && b347_22 && b348_5 && b349_18 && b350_44 && b351_42 && b352_52 && b353_58 && b354_21 && b355_1 && b356_15 && b357_18 && b358_59 && b359_19 && b360_62 && b361_11 && b362_9 && b363_22) {
pattern_id = 2096;
}
if(b314_9 && b315_13 && b316_11 && b317_21 && b318_22 && b319_23 && b320_21 && b321_15 && b322_26 && b323_31 && b324_16 && b325_29 && b326_26 && b327_27 && b328_32 && b329_26 && b330_33 && b331_31 && b332_2 && b333_25 && b334_34 && b335_41 && b336_44 && b337_29 && b338_40 && b339_46 && b340_27 && b341_53 && b342_40 && b343_28 && b344_40 && b345_31 && b346_23 && b347_28 && b348_11 && b349_34 && b350_48 && b351_20 && b352_10 && b353_10 && b354_9 && b355_46 && b356_41 && b357_18 && b358_16 && b359_3 && b360_11 && b361_8 && b362_8 && b363_17) {
pattern_id = 2097;
}
if(b314_9 && b315_13 && b316_11 && b317_21 && b318_22 && b319_23 && b320_21 && b321_15 && b322_26 && b323_31 && b324_16 && b325_29 && b326_26 && b327_27 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_44 && b336_20 && b337_47 && b338_29 && b339_40 && b340_30 && b341_8 && b342_49 && b343_31 && b344_40 && b345_48 && b346_35 && b347_31 && b348_55 && b349_27 && b350_12 && b351_28 && b352_4 && b353_27 && b354_42 && b355_3 && b356_6 && b357_31 && b358_18 && b359_24 && b360_26 && b361_26 && b362_20 && b363_18) {
pattern_id = 2098;
}
if(b317_20 && b318_21 && b319_8 && b320_20 && b321_22 && b322_25 && b323_30 && b324_27 && b325_28 && b326_29 && b327_25 && b328_30 && b329_19 && b330_28 && b331_5 && b332_21 && b333_29 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_53 && b342_29 && b343_30 && b344_13 && b345_31 && b346_26 && b347_28 && b348_11 && b349_46 && b350_34 && b351_5 && b352_45 && b353_49 && b354_43 && b355_47 && b356_8 && b357_9 && b358_59 && b359_19 && b360_15 && b361_12 && b362_14 && b363_5) {
pattern_id = 2099;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_29 && b328_35 && b329_17 && b330_15 && b331_2 && b332_35 && b333_36 && b334_38 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_51 && b343_24 && b344_35 && b345_31 && b346_26 && b347_28 && b348_11 && b349_46 && b350_34 && b351_5 && b352_45 && b353_49 && b354_43 && b355_47 && b356_8 && b357_9 && b358_59 && b359_19 && b360_15 && b361_12 && b362_14 && b363_5) {
pattern_id = 2100;
}
if(b331_25 && b332_40 && b333_3 && b334_44 && b335_38 && b336_42 && b337_15 && b338_40 && b339_9 && b340_8 && b341_42 && b342_24 && b343_24 && b344_40 && b345_36 && b346_44 && b347_28 && b348_49 && b349_36 && b350_26 && b351_20 && b352_45 && b353_8 && b354_6 && b355_18 && b356_17 && b357_13 && b358_17 && b359_12 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 2101;
}
if(b329_21 && b330_39 && b331_25 && b332_29 && b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_31 && b341_34 && b342_37 && b343_54 && b344_5 && b345_17 && b346_10 && b347_45 && b348_42 && b349_18 && b350_44 && b351_40 && b352_34 && b353_38 && b354_43 && b355_38 && b356_32 && b357_18 && b358_9 && b359_13 && b360_30 && b361_52 && b362_9 && b363_22) {
pattern_id = 2102;
}
if(b333_3 && b334_43 && b335_31 && b336_43 && b337_33 && b338_30 && b339_28 && b340_27 && b341_54 && b342_39 && b343_24 && b344_21 && b345_4 && b346_20 && b347_35 && b348_26 && b349_31 && b350_34 && b351_41 && b352_41 && b353_1 && b354_46 && b355_38 && b356_19 && b357_9 && b358_6 && b359_56 && b360_18 && b361_26 && b362_35 && b363_17) {
pattern_id = 2103;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_43 && b341_28 && b342_18 && b343_3 && b344_34 && b345_45 && b346_37 && b347_21 && b348_45 && b349_18 && b350_26 && b351_44 && b352_52 && b353_17 && b354_36 && b355_25 && b356_36 && b357_13 && b358_12 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2104;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_27 && b338_48 && b339_22 && b340_22 && b341_53 && b342_42 && b343_47 && b344_26 && b345_36 && b346_42 && b347_45 && b348_29 && b349_56 && b350_34 && b351_21 && b352_4 && b353_9 && b354_5 && b355_3 && b356_8 && b357_31 && b358_9 && b359_13 && b360_28 && b361_52 && b362_18 && b363_6) {
pattern_id = 2105;
}
if(b320_17 && b321_20 && b322_12 && b323_27 && b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_27 && b337_23 && b338_38 && b339_36 && b340_43 && b341_35 && b342_27 && b343_35 && b344_8 && b345_58 && b346_21 && b347_45 && b348_29 && b349_56 && b350_34 && b351_21 && b352_4 && b353_9 && b354_5 && b355_3 && b356_8 && b357_31 && b358_9 && b359_13 && b360_28 && b361_52 && b362_18 && b363_6) {
pattern_id = 2106;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_32 && b339_3 && b340_3 && b341_48 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_44 && b348_11 && b349_34 && b350_26 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2107;
}
if(b326_24 && b327_33 && b328_33 && b329_31 && b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_54 && b342_36 && b343_48 && b344_35 && b345_51 && b346_45 && b347_31 && b348_42 && b349_29 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 2108;
}
if(b326_24 && b327_33 && b328_33 && b329_31 && b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_54 && b342_36 && b343_48 && b344_35 && b345_51 && b346_45 && b347_31 && b348_42 && b349_29 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 2109;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_30 && b342_5 && b343_26 && b344_18 && b345_49 && b346_44 && b347_44 && b348_42 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_21 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 2110;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_31 && b341_23 && b342_25 && b343_54 && b344_52 && b345_31 && b346_31 && b347_44 && b348_49 && b349_43 && b350_34 && b351_28 && b352_4 && b353_32 && b354_43 && b355_3 && b356_59 && b357_31 && b358_46 && b359_57 && b360_40 && b361_53 && b362_9 && b363_8) {
pattern_id = 2111;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_25 && b338_44 && b339_17 && b340_49 && b341_53 && b342_19 && b343_20 && b344_32 && b345_44 && b346_35 && b347_43 && b348_26 && b349_25 && b350_34 && b351_28 && b352_6 && b353_57 && b354_42 && b355_16 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 2112;
}
if(b327_15 && b328_36 && b329_21 && b330_40 && b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_49 && b343_19 && b344_8 && b345_36 && b346_41 && b347_55 && b348_17 && b349_29 && b350_41 && b351_41 && b352_22 && b353_32 && b354_43 && b355_25 && b356_41 && b357_35 && b358_11 && b359_45 && b360_55 && b361_17 && b362_18 && b363_38) {
pattern_id = 2113;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_32 && b339_3 && b340_3 && b341_48 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_2 && b348_5 && b349_18 && b350_36 && b351_21 && b352_24 && b353_29 && b354_55 && b355_46 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 2114;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_25 && b338_44 && b339_17 && b340_49 && b341_53 && b342_19 && b343_20 && b344_32 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_8 && b361_26 && b362_11 && b363_5) {
pattern_id = 2115;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_32 && b339_3 && b340_3 && b341_48 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_23 && b348_38 && b349_18 && b350_63 && b351_23 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2116;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_32 && b339_3 && b340_3 && b341_48 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2117;
}
if(b329_21 && b330_39 && b331_25 && b332_29 && b333_24 && b334_42 && b335_23 && b336_14 && b337_29 && b338_39 && b339_18 && b340_26 && b341_30 && b342_19 && b343_3 && b344_27 && b345_21 && b346_22 && b347_18 && b348_35 && b349_59 && b350_28 && b351_45 && b352_6 && b353_49 && b354_36 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 2118;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_31 && b341_23 && b342_25 && b343_54 && b344_52 && b345_31 && b346_23 && b347_34 && b348_11 && b349_36 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 2119;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_31 && b341_23 && b342_25 && b343_54 && b344_52 && b345_31 && b346_23 && b347_34 && b348_11 && b349_36 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 2120;
}
if(b323_11 && b324_28 && b325_20 && b326_36 && b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_37 && b339_42 && b340_24 && b341_42 && b342_52 && b343_55 && b344_26 && b345_30 && b346_42 && b347_22 && b348_5 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_21 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 2121;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_32 && b339_3 && b340_3 && b341_48 && b342_51 && b343_28 && b344_30 && b345_4 && b346_21 && b347_43 && b348_49 && b349_43 && b350_34 && b351_28 && b352_4 && b353_32 && b354_43 && b355_3 && b356_59 && b357_31 && b358_46 && b359_57 && b360_40 && b361_53 && b362_9 && b363_8) {
pattern_id = 2122;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_20 && b336_15 && b337_47 && b338_33 && b339_43 && b340_33 && b341_19 && b342_24 && b343_24 && b344_40 && b345_44 && b346_35 && b347_43 && b348_26 && b349_25 && b350_34 && b351_28 && b352_6 && b353_57 && b354_42 && b355_16 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 2123;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_30 && b342_5 && b343_26 && b344_18 && b345_49 && b346_44 && b347_28 && b348_34 && b349_31 && b350_34 && b351_41 && b352_22 && b353_32 && b354_43 && b355_25 && b356_41 && b357_35 && b358_11 && b359_45 && b360_55 && b361_17 && b362_18 && b363_38) {
pattern_id = 2124;
}
if(b320_17 && b321_20 && b322_12 && b323_27 && b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_24 && b337_24 && b338_41 && b339_33 && b340_43 && b341_28 && b342_18 && b343_3 && b344_34 && b345_45 && b346_37 && b347_2 && b348_5 && b349_18 && b350_36 && b351_21 && b352_24 && b353_29 && b354_55 && b355_46 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 2125;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_31 && b341_23 && b342_25 && b343_54 && b344_52 && b345_31 && b346_23 && b347_34 && b348_11 && b349_36 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 2126;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_20 && b336_15 && b337_47 && b338_33 && b339_43 && b340_33 && b341_19 && b342_24 && b343_24 && b344_40 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_8 && b361_26 && b362_11 && b363_5) {
pattern_id = 2127;
}
if(b326_24 && b327_33 && b328_33 && b329_31 && b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_54 && b342_36 && b343_48 && b344_35 && b345_51 && b346_45 && b347_9 && b348_17 && b349_39 && b350_24 && b351_5 && b352_40 && b353_62 && b354_8 && b355_3 && b356_10 && b357_6 && b358_19 && b359_26 && b360_18 && b361_26 && b362_14 && b363_22) {
pattern_id = 2128;
}
if(b315_15 && b316_20 && b317_20 && b318_23 && b319_13 && b320_24 && b321_25 && b322_12 && b323_33 && b324_7 && b325_17 && b326_31 && b327_32 && b328_21 && b329_17 && b330_41 && b331_30 && b332_20 && b333_41 && b334_36 && b335_44 && b336_24 && b337_24 && b338_34 && b339_28 && b340_35 && b341_42 && b342_24 && b343_36 && b344_8 && b345_36 && b346_37 && b347_44 && b348_11 && b349_34 && b350_26 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2129;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_16 && b335_3 && b336_28 && b337_28 && b338_43 && b339_42 && b340_24 && b341_51 && b342_31 && b343_24 && b344_35 && b345_4 && b346_37 && b347_5 && b348_38 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2130;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_20 && b336_15 && b337_47 && b338_33 && b339_43 && b340_31 && b341_23 && b342_31 && b343_25 && b344_34 && b345_36 && b346_42 && b347_45 && b348_15 && b349_39 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 2131;
}
if(b315_15 && b316_20 && b317_20 && b318_23 && b319_13 && b320_24 && b321_25 && b322_12 && b323_33 && b324_7 && b325_17 && b326_31 && b327_32 && b328_21 && b329_17 && b330_41 && b331_30 && b332_20 && b333_41 && b334_36 && b335_44 && b336_24 && b337_24 && b338_34 && b339_28 && b340_35 && b341_42 && b342_24 && b343_36 && b344_8 && b345_36 && b346_37 && b347_23 && b348_38 && b349_18 && b350_63 && b351_23 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2132;
}
if(b315_15 && b316_20 && b317_20 && b318_23 && b319_13 && b320_24 && b321_25 && b322_12 && b323_33 && b324_7 && b325_17 && b326_31 && b327_32 && b328_21 && b329_17 && b330_41 && b331_30 && b332_20 && b333_41 && b334_36 && b335_44 && b336_24 && b337_24 && b338_34 && b339_28 && b340_35 && b341_42 && b342_24 && b343_36 && b344_8 && b345_36 && b346_37 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2133;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_32 && b339_3 && b340_3 && b341_48 && b342_51 && b343_20 && b344_34 && b345_51 && b346_20 && b347_18 && b348_11 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2134;
}
if(b323_11 && b324_28 && b325_20 && b326_36 && b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_37 && b339_42 && b340_24 && b341_42 && b342_52 && b343_55 && b344_32 && b345_17 && b346_41 && b347_29 && b348_38 && b349_31 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 2135;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_25 && b338_44 && b339_17 && b340_49 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_44 && b348_11 && b349_34 && b350_26 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2136;
}
if(b330_14 && b331_39 && b332_38 && b333_43 && b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_44 && b346_36 && b347_5 && b348_38 && b349_47 && b350_17 && b351_24 && b352_1 && b353_37 && b354_27 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 2137;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_30 && b342_5 && b343_26 && b344_18 && b345_49 && b346_31 && b347_43 && b348_15 && b349_43 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 2138;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_30 && b342_5 && b343_26 && b344_18 && b345_49 && b346_31 && b347_43 && b348_15 && b349_43 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_12 && b361_12 && b362_11 && b363_5) {
pattern_id = 2139;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_31 && b341_23 && b342_25 && b343_54 && b344_52 && b345_35 && b346_10 && b347_5 && b348_24 && b349_46 && b350_19 && b351_21 && b352_24 && b353_37 && b354_36 && b355_15 && b356_7 && b357_45 && b358_59 && b359_21 && b360_24 && b361_2 && b362_18 && b363_8) {
pattern_id = 2140;
}
if(b323_11 && b324_28 && b325_20 && b326_36 && b327_11 && b328_37 && b329_20 && b330_14 && b331_37 && b332_28 && b333_28 && b334_26 && b335_20 && b336_27 && b337_41 && b338_37 && b339_42 && b340_24 && b341_42 && b342_52 && b343_55 && b344_32 && b345_45 && b346_22 && b347_2 && b348_49 && b349_43 && b350_34 && b351_28 && b352_4 && b353_32 && b354_43 && b355_3 && b356_59 && b357_31 && b358_46 && b359_57 && b360_40 && b361_53 && b362_9 && b363_8) {
pattern_id = 2141;
}
if(b320_17 && b321_20 && b322_12 && b323_27 && b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_24 && b337_24 && b338_41 && b339_33 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_35 && b347_43 && b348_26 && b349_25 && b350_34 && b351_28 && b352_6 && b353_57 && b354_42 && b355_16 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 2142;
}
if(b326_24 && b327_33 && b328_33 && b329_31 && b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_54 && b342_36 && b343_48 && b344_35 && b345_51 && b346_45 && b347_44 && b348_5 && b349_25 && b350_19 && b351_41 && b352_22 && b353_32 && b354_43 && b355_25 && b356_41 && b357_35 && b358_11 && b359_45 && b360_55 && b361_17 && b362_18 && b363_38) {
pattern_id = 2143;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_25 && b338_44 && b339_17 && b340_49 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_2 && b348_5 && b349_18 && b350_36 && b351_21 && b352_24 && b353_29 && b354_55 && b355_46 && b356_17 && b357_13 && b358_9 && b359_56 && b360_6 && b361_12 && b362_8 && b363_57) {
pattern_id = 2144;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_30 && b342_5 && b343_26 && b344_18 && b345_49 && b346_31 && b347_43 && b348_15 && b349_43 && b350_48 && b351_35 && b352_24 && b353_29 && b354_3 && b355_46 && b356_36 && b357_9 && b358_19 && b359_3 && b360_15 && b361_26 && b362_11 && b363_17) {
pattern_id = 2145;
}
if(b320_17 && b321_20 && b322_12 && b323_27 && b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_24 && b337_24 && b338_41 && b339_33 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_29 && b348_34 && b349_31 && b350_48 && b351_20 && b352_1 && b353_1 && b354_12 && b355_11 && b356_29 && b357_6 && b358_14 && b359_54 && b360_8 && b361_26 && b362_11 && b363_5) {
pattern_id = 2146;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_25 && b338_44 && b339_17 && b340_49 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_23 && b348_38 && b349_18 && b350_63 && b351_23 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2147;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_25 && b338_44 && b339_17 && b340_49 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_23 && b348_24 && b349_29 && b350_28 && b351_26 && b352_23 && b353_62 && b354_36 && b355_1 && b356_1 && b357_15 && b358_17 && b359_57 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2148;
}
if(b327_15 && b328_36 && b329_21 && b330_40 && b331_20 && b332_31 && b333_26 && b334_21 && b335_26 && b336_3 && b337_44 && b338_36 && b339_42 && b340_33 && b341_34 && b342_49 && b343_19 && b344_8 && b345_36 && b346_41 && b347_55 && b348_24 && b349_56 && b350_34 && b351_22 && b352_23 && b353_62 && b354_8 && b355_3 && b356_10 && b357_6 && b358_19 && b359_26 && b360_18 && b361_26 && b362_14 && b363_22) {
pattern_id = 2149;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_31 && b341_23 && b342_25 && b343_54 && b344_52 && b345_45 && b346_21 && b347_49 && b348_26 && b349_26 && b350_12 && b351_5 && b352_1 && b353_62 && b354_8 && b355_3 && b356_10 && b357_6 && b358_19 && b359_26 && b360_18 && b361_26 && b362_14 && b363_22) {
pattern_id = 2150;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_28 && b338_28 && b339_24 && b340_43 && b341_28 && b342_48 && b343_48 && b344_40 && b345_4 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2151;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_49 && b341_19 && b342_19 && b343_55 && b344_26 && b345_35 && b346_31 && b347_45 && b348_15 && b349_19 && b350_62 && b351_5 && b352_45 && b353_29 && b354_42 && b355_3 && b356_6 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2152;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_28 && b338_28 && b339_24 && b340_43 && b341_36 && b342_27 && b343_41 && b344_5 && b345_36 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2153;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_28 && b338_28 && b339_24 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_22 && b347_50 && b348_58 && b349_31 && b350_24 && b351_26 && b352_52 && b353_30 && b354_36 && b355_25 && b356_14 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2154;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_49 && b341_19 && b342_19 && b343_55 && b344_34 && b345_36 && b346_30 && b347_23 && b348_5 && b349_31 && b350_48 && b351_7 && b352_4 && b353_29 && b354_42 && b355_13 && b356_15 && b357_42 && b358_17 && b359_12 && b360_8 && b361_2 && b362_9 && b363_26) {
pattern_id = 2155;
}
if(b328_33 && b329_38 && b330_14 && b331_38 && b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_36 && b344_18 && b345_30 && b346_44 && b347_55 && b348_29 && b349_31 && b350_12 && b351_41 && b352_40 && b353_37 && b354_25 && b355_2 && b356_16 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2156;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_36 && b335_21 && b336_27 && b337_49 && b338_47 && b339_24 && b340_30 && b341_24 && b342_29 && b343_28 && b344_42 && b345_17 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2157;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_27 && b336_44 && b337_27 && b338_43 && b339_7 && b340_33 && b341_19 && b342_37 && b343_20 && b344_26 && b345_4 && b346_21 && b347_45 && b348_35 && b349_25 && b350_34 && b351_41 && b352_40 && b353_37 && b354_25 && b355_2 && b356_16 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2158;
}
if(b314_9 && b315_13 && b316_11 && b317_21 && b318_22 && b319_23 && b320_21 && b321_15 && b322_26 && b323_21 && b324_16 && b325_24 && b326_38 && b327_13 && b328_30 && b329_35 && b330_16 && b331_26 && b332_21 && b333_40 && b334_33 && b335_41 && b336_14 && b337_49 && b338_29 && b339_23 && b340_21 && b341_54 && b342_36 && b343_48 && b344_30 && b345_10 && b346_33 && b347_18 && b348_49 && b349_48 && b350_34 && b351_34 && b352_10 && b353_17 && b354_42 && b355_3 && b356_6 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2159;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_27 && b336_44 && b337_27 && b338_37 && b339_28 && b340_33 && b341_27 && b342_51 && b343_28 && b344_32 && b345_35 && b346_37 && b347_9 && b348_15 && b349_34 && b350_57 && b351_38 && b352_29 && b353_10 && b354_42 && b355_3 && b356_6 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2160;
}
if(b311_7 && b312_6 && b313_12 && b314_17 && b315_14 && b316_19 && b317_23 && b318_20 && b319_9 && b320_23 && b321_24 && b322_29 && b323_24 && b324_1 && b325_9 && b326_34 && b327_20 && b328_38 && b329_18 && b330_41 && b331_29 && b332_21 && b333_3 && b334_44 && b335_38 && b336_3 && b337_24 && b338_36 && b339_9 && b340_31 && b341_23 && b342_18 && b343_15 && b344_19 && b345_36 && b346_37 && b347_49 && b348_5 && b349_25 && b350_57 && b351_20 && b352_52 && b353_30 && b354_36 && b355_25 && b356_14 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2161;
}
if(b316_11 && b317_22 && b318_20 && b319_24 && b320_16 && b321_23 && b322_27 && b323_11 && b324_12 && b325_22 && b326_26 && b327_31 && b328_20 && b329_18 && b330_32 && b331_37 && b332_44 && b333_29 && b334_27 && b335_26 && b336_37 && b337_27 && b338_40 && b339_43 && b340_21 && b341_35 && b342_5 && b343_31 && b344_27 && b345_21 && b346_22 && b347_28 && b348_51 && b349_17 && b350_22 && b351_35 && b352_52 && b353_30 && b354_36 && b355_25 && b356_14 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2162;
}
if(b314_9 && b315_13 && b316_11 && b317_21 && b318_22 && b319_23 && b320_21 && b321_15 && b322_26 && b323_21 && b324_16 && b325_24 && b326_38 && b327_13 && b328_30 && b329_35 && b330_16 && b331_26 && b332_21 && b333_40 && b334_33 && b335_41 && b336_14 && b337_49 && b338_44 && b339_40 && b340_27 && b341_23 && b342_18 && b343_24 && b344_42 && b345_17 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2163;
}
if(b315_15 && b316_20 && b317_20 && b318_23 && b319_13 && b320_24 && b321_25 && b322_12 && b323_33 && b324_7 && b325_17 && b326_31 && b327_32 && b328_21 && b329_17 && b330_41 && b331_24 && b332_34 && b333_36 && b334_24 && b335_23 && b336_27 && b337_26 && b338_43 && b339_25 && b340_38 && b341_36 && b342_18 && b343_30 && b344_13 && b345_2 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2164;
}
if(b317_20 && b318_21 && b319_8 && b320_20 && b321_22 && b322_25 && b323_30 && b324_27 && b325_28 && b326_19 && b327_16 && b328_17 && b329_2 && b330_2 && b331_31 && b332_42 && b333_22 && b334_38 && b335_41 && b336_29 && b337_15 && b338_29 && b339_16 && b340_43 && b341_25 && b342_41 && b343_47 && b344_41 && b345_17 && b346_37 && b347_35 && b348_48 && b349_27 && b350_49 && b351_34 && b352_1 && b353_62 && b354_45 && b355_1 && b356_32 && b357_35 && b358_46 && b359_12 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2165;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_34 && b339_24 && b340_27 && b341_53 && b342_19 && b343_40 && b344_42 && b345_17 && b346_10 && b347_45 && b348_25 && b349_27 && b350_4 && b351_26 && b352_23 && b353_32 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2166;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_51 && b342_19 && b343_8 && b344_52 && b345_21 && b346_22 && b347_21 && b348_25 && b349_31 && b350_22 && b351_26 && b352_52 && b353_37 && b354_41 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2167;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_40 && b341_28 && b342_30 && b343_55 && b344_21 && b345_48 && b346_33 && b347_21 && b348_11 && b349_39 && b350_12 && b351_41 && b352_4 && b353_27 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2168;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_34 && b339_24 && b340_27 && b341_53 && b342_36 && b343_47 && b344_34 && b345_31 && b346_42 && b347_22 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2169;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_15 && b338_29 && b339_16 && b340_43 && b341_30 && b342_39 && b343_24 && b344_26 && b345_4 && b346_21 && b347_45 && b348_25 && b349_27 && b350_4 && b351_26 && b352_23 && b353_32 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2170;
}
if(b320_17 && b321_20 && b322_12 && b323_27 && b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_37 && b337_27 && b338_40 && b339_43 && b340_21 && b341_23 && b342_49 && b343_20 && b344_34 && b345_51 && b346_21 && b347_43 && b348_5 && b349_31 && b350_41 && b351_41 && b352_1 && b353_49 && b354_27 && b355_33 && b356_10 && b357_6 && b358_59 && b359_8 && b360_12 && b361_33 && b362_12 && b363_10) {
pattern_id = 2171;
}
if(b324_27 && b325_1 && b326_24 && b327_28 && b328_23 && b329_37 && b330_37 && b331_25 && b332_42 && b333_25 && b334_30 && b335_24 && b336_24 && b337_27 && b338_38 && b339_9 && b340_40 && b341_28 && b342_30 && b343_55 && b344_32 && b345_45 && b346_22 && b347_2 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2172;
}
if(b316_11 && b317_22 && b318_20 && b319_24 && b320_16 && b321_23 && b322_27 && b323_11 && b324_12 && b325_22 && b326_26 && b327_31 && b328_20 && b329_18 && b330_32 && b331_37 && b332_41 && b333_36 && b334_21 && b335_44 && b336_41 && b337_44 && b338_41 && b339_18 && b340_36 && b341_28 && b342_24 && b343_24 && b344_27 && b345_45 && b346_21 && b347_2 && b348_48 && b349_18 && b350_24 && b351_29 && b352_6 && b353_1 && b354_12 && b355_16 && b356_53 && b357_51 && b358_51 && b359_56 && b360_17 && b361_12 && b362_19 && b363_5) {
pattern_id = 2173;
}
if(b328_33 && b329_38 && b330_14 && b331_38 && b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_36 && b344_19 && b345_31 && b346_30 && b347_55 && b348_24 && b349_56 && b350_34 && b351_22 && b352_23 && b353_62 && b354_44 && b355_2 && b356_1 && b357_6 && b358_6 && b359_17 && b360_55 && b361_23 && b362_15 && b363_29) {
pattern_id = 2174;
}
if(b326_24 && b327_33 && b328_33 && b329_31 && b330_18 && b331_35 && b332_41 && b333_3 && b334_24 && b335_40 && b336_20 && b337_30 && b338_32 && b339_24 && b340_42 && b341_54 && b342_31 && b343_28 && b344_13 && b345_49 && b346_10 && b347_22 && b348_48 && b349_25 && b350_24 && b351_29 && b352_6 && b353_49 && b354_42 && b355_5 && b356_10 && b357_19 && b358_11 && b359_13 && b360_15 && b361_19 && b362_9 && b363_41) {
pattern_id = 2175;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_33 && b335_41 && b336_14 && b337_49 && b338_39 && b339_18 && b340_3 && b341_28 && b342_31 && b343_24 && b344_27 && b345_42 && b346_2 && b347_31 && b348_42 && b349_25 && b350_43 && b351_41 && b352_45 && b353_37 && b354_10 && b355_44 && b356_14 && b357_3 && b358_59 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2176;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_34 && b339_24 && b340_27 && b341_53 && b342_39 && b343_24 && b344_13 && b345_10 && b346_33 && b347_22 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_10 && b357_10 && b358_11 && b359_12 && b360_11 && b361_26 && b362_11 && b363_17) {
pattern_id = 2177;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_15 && b338_29 && b339_16 && b340_43 && b341_27 && b342_41 && b343_8 && b344_25 && b345_17 && b346_46 && b347_44 && b348_49 && b349_17 && b350_28 && b351_35 && b352_6 && b353_49 && b354_36 && b355_46 && b356_10 && b357_10 && b358_11 && b359_12 && b360_11 && b361_26 && b362_11 && b363_17) {
pattern_id = 2178;
}
if(b335_31 && b336_38 && b337_26 && b338_43 && b339_23 && b340_50 && b341_51 && b342_30 && b343_36 && b344_40 && b345_17 && b346_35 && b347_9 && b348_17 && b349_44 && b350_48 && b351_21 && b352_51 && b353_43 && b354_5 && b355_49 && b356_34 && b357_31 && b358_16 && b359_3 && b360_26 && b361_27 && b362_27 && b363_10) {
pattern_id = 2179;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_21 && b335_42 && b336_27 && b337_49 && b338_29 && b339_29 && b340_42 && b341_8 && b342_39 && b343_36 && b344_13 && b345_36 && b346_44 && b347_2 && b348_29 && b349_24 && b350_36 && b351_26 && b352_52 && b353_17 && b354_36 && b355_25 && b356_36 && b357_13 && b358_12 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2180;
}
if(b320_17 && b321_20 && b322_12 && b323_27 && b324_24 && b325_26 && b326_8 && b327_15 && b328_32 && b329_28 && b330_15 && b331_34 && b332_22 && b333_36 && b334_22 && b335_26 && b336_14 && b337_47 && b338_29 && b339_43 && b340_31 && b341_35 && b342_27 && b343_28 && b344_42 && b345_17 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2181;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_31 && b336_28 && b337_27 && b338_43 && b339_42 && b340_36 && b341_8 && b342_19 && b343_3 && b344_34 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2182;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_31 && b336_28 && b337_27 && b338_43 && b339_42 && b340_36 && b341_8 && b342_19 && b343_3 && b344_34 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_2 && b359_56 && b360_6 && b361_8 && b362_27 && b363_11) {
pattern_id = 2183;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_40 && b339_17 && b340_33 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2184;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_26 && b338_41 && b339_24 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2185;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_26 && b338_41 && b339_24 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_2 && b359_56 && b360_6 && b361_8 && b362_27 && b363_11) {
pattern_id = 2186;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_31 && b336_28 && b337_27 && b338_43 && b339_37 && b340_35 && b341_42 && b342_27 && b343_47 && b344_26 && b345_4 && b346_21 && b347_45 && b348_29 && b349_39 && b350_28 && b351_20 && b352_25 && b353_56 && b354_12 && b355_3 && b356_53 && b357_19 && b358_7 && b359_7 && b360_28 && b361_7 && b362_8 && b363_6) {
pattern_id = 2187;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_31 && b336_28 && b337_27 && b338_43 && b339_21 && b340_35 && b341_48 && b342_39 && b343_24 && b344_13 && b345_2 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2188;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_21 && b335_42 && b336_27 && b337_49 && b338_39 && b339_18 && b340_49 && b341_35 && b342_27 && b343_8 && b344_2 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_2 && b359_56 && b360_6 && b361_8 && b362_27 && b363_11) {
pattern_id = 2189;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_21 && b335_42 && b336_27 && b337_49 && b338_39 && b339_18 && b340_25 && b341_24 && b342_30 && b343_3 && b344_34 && b345_45 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2190;
}
if(b325_20 && b326_33 && b327_15 && b328_34 && b329_36 && b330_36 && b331_29 && b332_38 && b333_40 && b334_18 && b335_28 && b336_18 && b337_25 && b338_29 && b339_22 && b340_34 && b341_27 && b342_25 && b343_28 && b344_52 && b345_45 && b346_21 && b347_2 && b348_23 && b349_27 && b350_12 && b351_41 && b352_24 && b353_48 && b354_27 && b355_25 && b356_41 && b357_6 && b358_59 && b359_56 && b360_6 && b361_8 && b362_14 && b363_18) {
pattern_id = 2191;
}
if(b328_33 && b329_38 && b330_14 && b331_38 && b332_39 && b333_39 && b334_33 && b335_31 && b336_29 && b337_36 && b338_27 && b339_25 && b340_31 && b341_28 && b342_24 && b343_36 && b344_13 && b345_36 && b346_44 && b347_55 && b348_29 && b349_31 && b350_12 && b351_41 && b352_40 && b353_37 && b354_25 && b355_2 && b356_16 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2192;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_40 && b339_17 && b340_33 && b341_53 && b342_30 && b343_37 && b344_5 && b345_4 && b346_36 && b347_26 && b348_49 && b349_26 && b350_22 && b351_29 && b352_22 && b353_10 && b354_9 && b355_25 && b356_7 && b357_31 && b358_55 && b359_8 && b360_8 && b361_39 && b362_9 && b363_8) {
pattern_id = 2193;
}
if(b316_11 && b317_22 && b318_20 && b319_24 && b320_16 && b321_23 && b322_27 && b323_11 && b324_12 && b325_22 && b326_26 && b327_31 && b328_20 && b329_18 && b330_32 && b331_37 && b332_38 && b333_41 && b334_27 && b335_44 && b336_19 && b337_47 && b338_39 && b339_18 && b340_25 && b341_24 && b342_30 && b343_3 && b344_34 && b345_45 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2194;
}
if(b319_8 && b320_22 && b321_15 && b322_28 && b323_31 && b324_29 && b325_32 && b326_24 && b327_30 && b328_29 && b329_19 && b330_21 && b331_30 && b332_21 && b333_33 && b334_24 && b335_31 && b336_28 && b337_27 && b338_43 && b339_7 && b340_33 && b341_19 && b342_37 && b343_20 && b344_26 && b345_4 && b346_21 && b347_45 && b348_35 && b349_25 && b350_34 && b351_41 && b352_40 && b353_37 && b354_25 && b355_2 && b356_16 && b357_31 && b358_3 && b359_43 && b360_19 && b361_15 && b362_15 && b363_8) {
pattern_id = 2195;
}
if(b314_9 && b315_13 && b316_11 && b317_21 && b318_22 && b319_23 && b320_21 && b321_15 && b322_26 && b323_21 && b324_16 && b325_24 && b326_38 && b327_13 && b328_30 && b329_35 && b330_14 && b331_5 && b332_21 && b333_40 && b334_45 && b335_35 && b336_44 && b337_49 && b338_29 && b339_29 && b340_42 && b341_8 && b342_39 && b343_36 && b344_13 && b345_36 && b346_44 && b347_2 && b348_29 && b349_24 && b350_36 && b351_26 && b352_52 && b353_17 && b354_36 && b355_25 && b356_36 && b357_13 && b358_12 && b359_8 && b360_18 && b361_26 && b362_15 && b363_10) {
pattern_id = 2196;
}
if(b316_11 && b317_22 && b318_20 && b319_24 && b320_16 && b321_23 && b322_27 && b323_11 && b324_12 && b325_22 && b326_26 && b327_31 && b328_20 && b329_18 && b330_32 && b331_37 && b332_38 && b333_41 && b334_27 && b335_26 && b336_19 && b337_41 && b338_28 && b339_43 && b340_31 && b341_35 && b342_27 && b343_28 && b344_42 && b345_17 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2197;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_21 && b335_42 && b336_27 && b337_29 && b338_48 && b339_22 && b340_30 && b341_53 && b342_29 && b343_47 && b344_8 && b345_34 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2198;
}
if(b317_20 && b318_21 && b319_8 && b320_20 && b321_22 && b322_25 && b323_30 && b324_27 && b325_28 && b326_19 && b327_16 && b328_17 && b329_2 && b330_2 && b331_31 && b332_42 && b333_3 && b334_34 && b335_41 && b336_29 && b337_23 && b338_38 && b339_29 && b340_43 && b341_39 && b342_39 && b343_48 && b344_25 && b345_44 && b346_30 && b347_18 && b348_17 && b349_43 && b350_4 && b351_43 && b352_4 && b353_29 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2199;
}
if(b315_15 && b316_20 && b317_20 && b318_23 && b319_13 && b320_24 && b321_25 && b322_12 && b323_33 && b324_7 && b325_17 && b326_31 && b327_32 && b328_21 && b329_17 && b330_41 && b331_25 && b332_35 && b333_36 && b334_24 && b335_46 && b336_30 && b337_20 && b338_43 && b339_21 && b340_35 && b341_48 && b342_39 && b343_24 && b344_13 && b345_2 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2200;
}
if(b314_9 && b315_13 && b316_11 && b317_21 && b318_22 && b319_23 && b320_21 && b321_15 && b322_26 && b323_21 && b324_16 && b325_24 && b326_38 && b327_13 && b328_30 && b329_35 && b330_14 && b331_5 && b332_21 && b333_40 && b334_45 && b335_35 && b336_44 && b337_49 && b338_39 && b339_18 && b340_25 && b341_24 && b342_30 && b343_3 && b344_34 && b345_45 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2201;
}
if(b321_15 && b322_1 && b323_11 && b324_25 && b325_27 && b326_32 && b327_12 && b328_33 && b329_35 && b330_28 && b331_21 && b332_19 && b333_20 && b334_27 && b335_35 && b336_29 && b337_26 && b338_41 && b339_24 && b340_34 && b341_52 && b342_24 && b343_40 && b344_52 && b345_45 && b346_21 && b347_2 && b348_23 && b349_27 && b350_12 && b351_41 && b352_24 && b353_48 && b354_27 && b355_25 && b356_41 && b357_6 && b358_59 && b359_56 && b360_6 && b361_8 && b362_14 && b363_18) {
pattern_id = 2202;
}
if(b318_20 && b319_22 && b320_17 && b321_19 && b322_23 && b323_28 && b324_26 && b325_20 && b326_34 && b327_27 && b328_24 && b329_23 && b330_19 && b331_19 && b332_26 && b333_40 && b334_21 && b335_42 && b336_27 && b337_29 && b338_48 && b339_22 && b340_30 && b341_53 && b342_30 && b343_37 && b344_5 && b345_4 && b346_36 && b347_26 && b348_49 && b349_26 && b350_22 && b351_29 && b352_22 && b353_10 && b354_9 && b355_25 && b356_7 && b357_31 && b358_55 && b359_8 && b360_8 && b361_39 && b362_9 && b363_8) {
pattern_id = 2203;
}
if(b312_1 && b313_13 && b314_9 && b315_16 && b316_21 && b317_1 && b318_24 && b319_8 && b320_25 && b321_26 && b322_15 && b323_34 && b324_13 && b325_31 && b326_30 && b327_30 && b328_33 && b329_33 && b330_2 && b331_37 && b332_45 && b333_33 && b334_38 && b335_44 && b336_19 && b337_47 && b338_39 && b339_18 && b340_25 && b341_24 && b342_30 && b343_3 && b344_34 && b345_45 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2204;
}
if(b312_1 && b313_13 && b314_9 && b315_16 && b316_21 && b317_1 && b318_24 && b319_8 && b320_25 && b321_26 && b322_15 && b323_34 && b324_13 && b325_31 && b326_30 && b327_30 && b328_27 && b329_33 && b330_32 && b331_2 && b332_45 && b333_3 && b334_22 && b335_28 && b336_22 && b337_49 && b338_39 && b339_18 && b340_25 && b341_24 && b342_30 && b343_3 && b344_34 && b345_45 && b346_37 && b347_33 && b348_38 && b349_27 && b350_19 && b351_35 && b352_42 && b353_37 && b354_6 && b355_46 && b356_41 && b357_18 && b358_44 && b359_40 && b360_15 && b361_7 && b362_44 && b363_47) {
pattern_id = 2205;
}
if(b330_14 && b331_39 && b332_38 && b333_43 && b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_44 && b346_48 && b347_34 && b348_48 && b349_59 && b350_41 && b351_21 && b352_4 && b353_17 && b354_42 && b355_2 && b356_28 && b357_31 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2206;
}
if(b335_31 && b336_38 && b337_26 && b338_43 && b339_23 && b340_50 && b341_51 && b342_30 && b343_36 && b344_40 && b345_17 && b346_35 && b347_9 && b348_17 && b349_44 && b350_48 && b351_23 && b352_6 && b353_46 && b354_62 && b355_15 && b356_1 && b357_31 && b358_55 && b359_8 && b360_8 && b361_39 && b362_9 && b363_8) {
pattern_id = 2207;
}
if(b322_12 && b323_32 && b324_27 && b325_30 && b326_35 && b327_17 && b328_19 && b329_21 && b330_41 && b331_2 && b332_2 && b333_13 && b334_16 && b335_41 && b336_30 && b337_29 && b338_48 && b339_22 && b340_30 && b341_21 && b342_51 && b343_20 && b344_40 && b345_48 && b346_35 && b347_45 && b348_25 && b349_27 && b350_4 && b351_26 && b352_23 && b353_32 && b354_42 && b355_11 && b356_8 && b357_51 && b358_37 && b359_24 && b360_69 && b361_8 && b362_14 && b363_6) {
pattern_id = 2208;
}
if(b342_30 && b343_46 && b344_13 && b345_49 && b346_31 && b347_50 && b348_25 && b349_26 && b350_48 && b351_35 && b352_61 && b353_10 && b354_6 && b355_1 && b356_14 && b357_33 && b358_21 && b359_26 && b360_12 && b361_16 && b362_8 && b363_6) {
pattern_id = 2209;
}
if(b337_26 && b338_20 && b339_16 && b340_43 && b341_19 && b342_24 && b343_15 && b344_42 && b345_22 && b346_23 && b347_55 && b348_24 && b349_56 && b350_4 && b351_43 && b352_41 && b353_49 && b354_46 && b355_1 && b356_41 && b357_9 && b358_6 && b359_38 && b360_18 && b361_18 && b362_20 && b363_22) {
pattern_id = 2210;
}
if(b331_25 && b332_40 && b333_3 && b334_23 && b335_33 && b336_37 && b337_26 && b338_37 && b339_21 && b340_35 && b341_25 && b342_36 && b343_28 && b344_42 && b345_44 && b346_10 && b347_49 && b348_34 && b349_59 && b350_24 && b351_43 && b352_23 && b353_40 && b354_57 && b355_46 && b356_34 && b357_34 && b358_17 && b359_54 && b360_18 && b361_8 && b362_57 && b363_6) {
pattern_id = 2211;
}
if(b124_2 && b125_1 && b126_1 && b127_2 && b128_2 && b129_2 && b130_2 && b131_2 && b132_1 && b133_2 && b134_2 && b135_2 && b136_2 && b137_2 && b138_2 && b139_2 && b140_2 && b141_1 && b142_1 && b143_2 && b144_2 && b145_2 && b146_2 && b147_2 && b148_2 && b149_2 && b150_2 && b151_2 && b152_2 && b153_2 && b154_2 && b155_2 && b156_1 && b157_1 && b158_2 && b159_2 && b160_2 && b161_2 && b162_2 && b163_2 && b164_2 && b165_2 && b166_2 && b167_2 && b168_2 && b169_2 && b170_2 && b171_1 && b172_2 && b173_2 && b174_2 && b175_2 && b176_2 && b177_1 && b178_2 && b179_2 && b180_2 && b181_1 && b182_2 && b183_2 && b184_2 && b185_2 && b186_2 && b187_1 && b188_2 && b189_2 && b190_2 && b191_2 && b192_1 && b193_2 && b194_2 && b195_2 && b196_2 && b197_2 && b198_2 && b199_2 && b200_3 && b201_1 && b202_3 && b203_3 && b204_3 && b205_3 && b206_3 && b207_1 && b208_3 && b209_3 && b210_2 && b211_1 && b212_3 && b213_3 && b214_3 && b215_3 && b216_1 && b217_1 && b218_2 && b219_4 && b220_3 && b221_3 && b222_1 && b223_3 && b224_4 && b225_3 && b226_4 && b227_4 && b228_4 && b229_2 && b230_3 && b231_1 && b232_4 && b233_4 && b234_5 && b235_2 && b236_2 && b237_1 && b238_2 && b239_3 && b240_2 && b241_2 && b242_2 && b243_2 && b244_5 && b245_2 && b246_1 && b247_2 && b248_2 && b249_5 && b250_2 && b251_1 && b252_1 && b253_2 && b254_5 && b255_2 && b256_2 && b257_2 && b258_3 && b259_1 && b260_3 && b261_2 && b262_4 && b263_2 && b264_3 && b265_4 && b266_3 && b267_2 && b268_4 && b269_9 && b270_3 && b271_2 && b272_3 && b273_4 && b274_1 && b275_4 && b276_2 && b277_5 && b278_2 && b279_13 && b280_3 && b281_3 && b282_2 && b283_5 && b284_8 && b285_4 && b286_5 && b287_3 && b288_7 && b289_1 && b290_3 && b291_3 && b292_4 && b293_4 && b294_15 && b295_2 && b296_3 && b297_3 && b298_4 && b299_11 && b300_4 && b301_3 && b302_4 && b303_2 && b304_20 && b305_2 && b306_2 && b307_3 && b308_6 && b309_21 && b310_3 && b311_4 && b312_2 && b313_7 && b314_23 && b315_4 && b316_3 && b317_4 && b318_5 && b319_17 && b320_3 && b321_5 && b322_4 && b323_16 && b324_16 && b325_2 && b326_12 && b327_4 && b328_12 && b329_6 && b330_4 && b331_1 && b332_3 && b333_2 && b334_31 && b335_4 && b336_1 && b337_1 && b338_4 && b339_23 && b340_9 && b341_2 && b342_1 && b343_10 && b344_27 && b345_11 && b346_1 && b347_3 && b348_10 && b349_43 && b350_1 && b351_17 && b352_7 && b353_11 && b354_25 && b355_23 && b356_4 && b357_23 && b358_28 && b359_44 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2212;
}
if(b314_9 && b315_4 && b316_3 && b317_4 && b318_5 && b319_11 && b320_3 && b321_5 && b322_4 && b323_16 && b324_12 && b325_2 && b326_12 && b327_4 && b328_12 && b329_18 && b330_4 && b331_1 && b332_3 && b333_2 && b334_23 && b335_4 && b336_1 && b337_1 && b338_4 && b339_23 && b340_9 && b341_2 && b342_1 && b343_10 && b344_29 && b345_11 && b346_1 && b347_3 && b348_10 && b349_26 && b350_1 && b351_17 && b352_7 && b353_11 && b354_3 && b355_23 && b356_4 && b357_23 && b358_28 && b359_17 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2213;
}
if(b299_4 && b300_4 && b301_3 && b302_4 && b303_2 && b304_7 && b305_2 && b306_2 && b307_3 && b308_6 && b309_7 && b310_3 && b311_4 && b312_2 && b313_7 && b314_8 && b315_4 && b316_3 && b317_4 && b318_5 && b319_10 && b320_3 && b321_5 && b322_4 && b323_16 && b324_11 && b325_2 && b326_12 && b327_4 && b328_12 && b329_19 && b330_4 && b331_1 && b332_3 && b333_2 && b334_22 && b335_4 && b336_1 && b337_1 && b338_4 && b339_18 && b340_9 && b341_2 && b342_1 && b343_10 && b344_27 && b345_11 && b346_1 && b347_3 && b348_10 && b349_27 && b350_1 && b351_17 && b352_7 && b353_11 && b354_10 && b355_23 && b356_4 && b357_23 && b358_28 && b359_13 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2214;
}
if(b289_4 && b290_3 && b291_3 && b292_4 && b293_4 && b294_4 && b295_2 && b296_3 && b297_3 && b298_4 && b299_5 && b300_4 && b301_3 && b302_4 && b303_2 && b304_8 && b305_2 && b306_2 && b307_3 && b308_6 && b309_9 && b310_3 && b311_4 && b312_2 && b313_7 && b314_10 && b315_4 && b316_3 && b317_4 && b318_5 && b319_10 && b320_3 && b321_5 && b322_4 && b323_16 && b324_9 && b325_2 && b326_12 && b327_4 && b328_12 && b329_19 && b330_4 && b331_1 && b332_3 && b333_2 && b334_24 && b335_4 && b336_1 && b337_1 && b338_4 && b339_24 && b340_9 && b341_2 && b342_1 && b343_10 && b344_30 && b345_11 && b346_1 && b347_3 && b348_10 && b349_31 && b350_1 && b351_17 && b352_7 && b353_11 && b354_36 && b355_23 && b356_4 && b357_23 && b358_28 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2215;
}
if(b309_6 && b310_3 && b311_4 && b312_2 && b313_7 && b314_7 && b315_4 && b316_3 && b317_4 && b318_5 && b319_9 && b320_3 && b321_5 && b322_4 && b323_16 && b324_10 && b325_2 && b326_12 && b327_4 && b328_12 && b329_18 && b330_4 && b331_1 && b332_3 && b333_2 && b334_21 && b335_4 && b336_1 && b337_1 && b338_4 && b339_16 && b340_9 && b341_2 && b342_1 && b343_10 && b344_28 && b345_11 && b346_1 && b347_3 && b348_10 && b349_25 && b350_1 && b351_17 && b352_7 && b353_11 && b354_36 && b355_23 && b356_4 && b357_23 && b358_28 && b359_38 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2216;
}
if(b304_6 && b305_2 && b306_2 && b307_3 && b308_6 && b309_5 && b310_3 && b311_4 && b312_2 && b313_7 && b314_6 && b315_4 && b316_3 && b317_4 && b318_5 && b319_8 && b320_3 && b321_5 && b322_4 && b323_16 && b324_9 && b325_2 && b326_12 && b327_4 && b328_12 && b329_18 && b330_4 && b331_1 && b332_3 && b333_2 && b334_18 && b335_4 && b336_1 && b337_1 && b338_4 && b339_22 && b340_9 && b341_2 && b342_1 && b343_10 && b344_27 && b345_11 && b346_1 && b347_3 && b348_10 && b349_37 && b350_1 && b351_17 && b352_7 && b353_11 && b354_12 && b355_23 && b356_4 && b357_23 && b358_28 && b359_24 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2217;
}
if(b356_7 && b357_13 && b358_21 && b359_13 && b360_18 && b361_2 && b362_12 && b363_22) {
pattern_id = 2218;
}
if(b353_29 && b354_25 && b355_13 && b356_34 && b357_13 && b358_11 && b359_8 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2219;
}
if(b354_6 && b355_1 && b356_16 && b357_3 && b358_6 && b359_19 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 2220;
}
if(b352_6 && b353_49 && b354_50 && b355_3 && b356_6 && b357_38 && b358_69 && b359_14 && b360_33 && b361_57 && b362_1 && b363_20) {
pattern_id = 2221;
}
if(b356_7 && b357_32 && b358_11 && b359_7 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 2222;
}
if(b257_1 && b258_1 && b259_1 && b260_1 && b261_1 && b262_1 && b263_1 && b264_1 && b265_1 && b266_1 && b267_1 && b268_1 && b269_1 && b270_1 && b271_1 && b272_1 && b273_1 && b274_1 && b275_1 && b276_1 && b277_1 && b278_1 && b279_1 && b280_1 && b281_1 && b282_1 && b283_1 && b284_1 && b285_1 && b286_1 && b287_1 && b288_1 && b289_1 && b290_1 && b291_1 && b292_1 && b293_1 && b294_1 && b295_1 && b296_1 && b297_1 && b298_1 && b299_1 && b300_1 && b301_1 && b302_1 && b303_1 && b304_1 && b305_1 && b306_1 && b307_1 && b308_1 && b309_1 && b310_1 && b311_1 && b312_1 && b313_1 && b314_1 && b315_1 && b316_1 && b317_1 && b318_1 && b319_1 && b320_1 && b321_1 && b322_1 && b323_1 && b324_1 && b325_1 && b326_1 && b327_1 && b328_2 && b329_2 && b330_2 && b331_2 && b332_2 && b333_3 && b334_3 && b335_3 && b336_3 && b337_3 && b338_3 && b339_3 && b340_3 && b341_3 && b342_5 && b343_3 && b344_5 && b345_4 && b346_3 && b347_5 && b348_5 && b349_5 && b350_8 && b351_7 && b352_8 && b353_10 && b354_12 && b355_2 && b356_16 && b357_17 && b358_19 && b359_26 && b360_24 && b361_7 && b362_15 && b363_25) {
pattern_id = 2223;
}
if(b353_29 && b354_43 && b355_5 && b356_8 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 2224;
}
if(b348_34 && b349_18 && b350_19 && b351_34 && b352_26 && b353_9 && b354_3 && b355_3 && b356_9 && b357_15 && b358_55 && b359_8 && b360_30 && b361_19 && b362_15 && b363_58) {
pattern_id = 2225;
}
if(b354_6 && b355_25 && b356_11 && b357_19 && b358_7 && b359_11 && b360_15 && b361_7 && b362_15 && b363_6) {
pattern_id = 2226;
}
if(b350_12 && b351_21 && b352_10 && b353_27 && b354_25 && b355_2 && b356_7 && b357_18 && b358_23 && b359_19 && b360_19 && b361_53 && b362_25 && b363_5) {
pattern_id = 2227;
}
if(b361_39 && b362_8 && b363_17) {
pattern_id = 2228;
}
if(b352_6 && b353_10 && b354_6 && b355_15 && b356_1 && b357_13 && b358_44 && b359_12 && b360_2 && b361_19 && b362_25 && b363_25) {
pattern_id = 2229;
}
if(b353_6 && b354_45 && b355_13 && b356_34 && b357_13 && b358_11 && b359_8 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2230;
}
if(b357_44 && b358_18 && b359_7 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2231;
}
if(b360_59 && b361_26 && b362_52 && b363_48) {
pattern_id = 2232;
}
if(b347_23 && b348_26 && b349_29 && b350_25 && b351_17 && b352_11 && b353_21 && b354_22 && b355_23 && b356_41 && b357_15 && b358_37 && b359_19 && b360_3 && b361_20 && b362_34 && b363_1) {
pattern_id = 2233;
}
if(b359_57 && b360_30 && b361_12 && b362_27 && b363_5) {
pattern_id = 2234;
}
if(b349_56 && b350_4 && b351_5 && b352_1 && b353_62 && b354_6 && b355_2 && b356_12 && b357_17 && b358_6 && b359_26 && b360_28 && b361_12 && b362_14 && b363_5) {
pattern_id = 2235;
}
if(b347_23 && b348_29 && b349_31 && b350_34 && b351_7 && b352_21 && b353_48 && b354_3 && b355_20 && b356_7 && b357_15 && b358_37 && b359_11 && b360_26 && b361_7 && b362_20 && b363_29) {
pattern_id = 2236;
}
if(b357_20 && b358_6 && b359_17 && b360_8 && b361_26 && b362_15 && b363_10) {
pattern_id = 2237;
}
if(b355_47 && b356_6 && b357_35 && b358_16 && b359_13 && b360_40 && b361_12 && b362_12 && b363_25) {
pattern_id = 2238;
}
if(b360_11 && b361_17 && b362_35 && b363_17) {
pattern_id = 2239;
}
if(b358_15 && b359_14 && b360_16 && b361_16 && b362_1 && b363_12) {
pattern_id = 2240;
}
if(b353_23 && b354_5 && b355_15 && b356_7 && b357_46 && b358_19 && b359_21 && b360_58 && b361_56 && b362_8 && b363_17) {
pattern_id = 2241;
}
if(b360_20 && b361_12 && b362_20 && b363_18) {
pattern_id = 2242;
}
if(b358_15 && b359_16 && b360_16 && b361_1 && b362_11 && b363_13) {
pattern_id = 2243;
}
if(b353_23 && b354_9 && b355_25 && b356_29 && b357_19 && b358_28 && b359_34 && b360_22 && b361_34 && b362_38 && b363_28) {
pattern_id = 2244;
}
if(b332_25 && b333_30 && b334_34 && b335_38 && b336_15 && b337_42 && b338_43 && b339_3 && b340_26 && b341_8 && b342_25 && b343_10 && b344_45 && b345_14 && b346_7 && b347_15 && b348_32 && b349_7 && b350_34 && b351_5 && b352_21 && b353_38 && b354_44 && b355_1 && b356_19 && b357_18 && b358_55 && b359_43 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 2245;
}
if(b357_2 && b358_2 && b359_16 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 2246;
}
if(b347_46 && b348_24 && b349_46 && b350_28 && b351_49 && b352_21 && b353_1 && b354_10 && b355_2 && b356_12 && b357_17 && b358_6 && b359_42 && b360_27 && b361_19 && b362_12 && b363_11) {
pattern_id = 2247;
}
if(b353_53 && b354_27 && b355_46 && b356_9 && b357_41 && b358_18 && b359_26 && b360_6 && b361_8 && b362_25 && b363_25) {
pattern_id = 2248;
}
if(b354_50 && b355_13 && b356_53 && b357_18 && b358_46 && b359_57 && b360_40 && b361_19 && b362_2 && b363_10) {
pattern_id = 2249;
}
if(b353_53 && b354_27 && b355_46 && b356_32 && b357_35 && b358_17 && b359_13 && b360_26 && b361_26 && b362_2 && b363_6) {
pattern_id = 2250;
}
if(b349_61 && b350_19 && b351_41 && b352_1 && b353_49 && b354_28 && b355_49 && b356_8 && b357_17 && b358_6 && b359_19 && b360_27 && b361_22 && b362_9 && b363_17) {
pattern_id = 2251;
}
if(b354_50 && b355_13 && b356_53 && b357_9 && b358_6 && b359_40 && b360_15 && b361_8 && b362_18 && b363_26) {
pattern_id = 2252;
}
if(b353_53 && b354_27 && b355_46 && b356_41 && b357_18 && b358_12 && b359_20 && b360_15 && b361_26 && b362_11 && b363_5) {
pattern_id = 2253;
}
if(b309_8 && b310_3 && b311_4 && b312_2 && b313_7 && b314_7 && b315_4 && b316_3 && b317_4 && b318_5 && b319_9 && b320_3 && b321_5 && b322_4 && b323_16 && b324_13 && b325_2 && b326_12 && b327_4 && b328_12 && b329_20 && b330_4 && b331_1 && b332_3 && b333_2 && b334_23 && b335_4 && b336_1 && b337_1 && b338_4 && b339_16 && b340_9 && b341_2 && b342_1 && b343_10 && b344_2 && b345_11 && b346_1 && b347_3 && b348_10 && b349_31 && b350_1 && b351_17 && b352_7 && b353_11 && b354_10 && b355_23 && b356_4 && b357_23 && b358_28 && b359_43 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2254;
}
if(b334_25 && b335_4 && b336_1 && b337_1 && b338_4 && b339_25 && b340_9 && b341_2 && b342_1 && b343_10 && b344_27 && b345_11 && b346_1 && b347_3 && b348_10 && b349_36 && b350_1 && b351_17 && b352_7 && b353_11 && b354_3 && b355_23 && b356_4 && b357_23 && b358_28 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2255;
}
if(b314_12 && b315_4 && b316_3 && b317_4 && b318_5 && b319_11 && b320_3 && b321_5 && b322_4 && b323_16 && b324_12 && b325_2 && b326_12 && b327_4 && b328_12 && b329_21 && b330_4 && b331_1 && b332_3 && b333_2 && b334_26 && b335_4 && b336_1 && b337_1 && b338_4 && b339_21 && b340_9 && b341_2 && b342_1 && b343_10 && b344_5 && b345_11 && b346_1 && b347_3 && b348_10 && b349_39 && b350_1 && b351_17 && b352_7 && b353_11 && b354_6 && b355_23 && b356_4 && b357_23 && b358_28 && b359_53 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2256;
}
if(b332_40 && b333_27 && b334_50 && b335_50 && b336_48 && b337_14 && b338_30 && b339_17 && b340_16 && b341_34 && b342_40 && b343_40 && b344_62 && b345_5 && b346_23 && b347_34 && b348_37 && b349_47 && b350_16 && b351_47 && b352_66 && b353_59 && b354_68 && b355_22 && b356_1 && b357_51 && b358_42 && b359_72 && b360_23 && b361_25 && b362_47 && b363_10) {
pattern_id = 2257;
}
if(b358_14 && b359_7 && b360_13 && b361_1 && b362_14 && b363_11) {
pattern_id = 2258;
}
if(b344_50 && b345_33 && b346_23 && b347_42 && b348_26 && b349_31 && b350_43 && b351_40 && b352_4 && b353_32 && b354_21 && b355_5 && b356_6 && b357_11 && b358_51 && b359_53 && b360_2 && b361_11 && b362_17 && b363_47) {
pattern_id = 2259;
}
if(b342_62 && b343_64 && b344_35 && b345_17 && b346_3 && b347_1 && b348_64 && b349_17 && b350_28 && b351_22 && b352_23 && b353_75 && b354_62 && b355_14 && b356_41 && b357_10 && b358_40 && b359_6 && b360_35 && b361_20 && b362_5 && b363_28) {
pattern_id = 2260;
}
if(b303_2 && b304_4 && b305_4 && b306_3 && b307_3 && b308_4 && b309_3 && b310_2 && b311_4 && b312_3 && b313_4 && b314_3 && b315_3 && b316_3 && b317_4 && b318_4 && b319_2 && b320_4 && b321_3 && b322_4 && b323_4 && b324_5 && b325_3 && b326_12 && b327_6 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2261;
}
if(b309_4 && b310_2 && b311_4 && b312_3 && b313_4 && b314_3 && b315_3 && b316_3 && b317_4 && b318_4 && b319_2 && b320_4 && b321_3 && b322_4 && b323_4 && b324_5 && b325_3 && b326_12 && b327_6 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2262;
}
if(b0_1 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_1 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_1 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1 && b23_1 && b24_1 && b25_1 && b26_1 && b27_1 && b28_1 && b29_1 && b30_1 && b31_1 && b32_1 && b33_1 && b34_1 && b35_1 && b36_1 && b37_1 && b38_1 && b39_1 && b40_1 && b41_1 && b42_1 && b43_1 && b44_1 && b45_1 && b46_1 && b47_1 && b48_1 && b49_1 && b50_1 && b51_1 && b52_1 && b53_1 && b54_1 && b55_1 && b56_1 && b57_1 && b58_1 && b59_1 && b60_1 && b61_1 && b62_1 && b63_1 && b64_1 && b65_1 && b66_1 && b67_1 && b68_1 && b69_1 && b70_1 && b71_1 && b72_1 && b73_1 && b74_1 && b75_1 && b76_1 && b77_1 && b78_1 && b79_1 && b80_1 && b81_1 && b82_1 && b83_1 && b84_1 && b85_1 && b86_1 && b87_1 && b88_1 && b89_1 && b90_1 && b91_1 && b92_1 && b93_1 && b94_1 && b95_1 && b96_1 && b97_1 && b98_1 && b99_1 && b100_1 && b101_1 && b102_1 && b103_1 && b104_1 && b105_1 && b106_1 && b107_1 && b108_1 && b109_1 && b110_1 && b111_1 && b112_1 && b113_1 && b114_1 && b115_1 && b116_1 && b117_1 && b118_1 && b119_1 && b120_1 && b121_1 && b122_1 && b123_1 && b124_1 && b125_1 && b126_1 && b127_1 && b128_1 && b129_1 && b130_1 && b131_1 && b132_1 && b133_1 && b134_1 && b135_1 && b136_1 && b137_1 && b138_1 && b139_1 && b140_1 && b141_1 && b142_1 && b143_1 && b144_1 && b145_1 && b146_1 && b147_1 && b148_1 && b149_1 && b150_1 && b151_1 && b152_1 && b153_1 && b154_1 && b155_1 && b156_1 && b157_1 && b158_1 && b159_1 && b160_1 && b161_1 && b162_1 && b163_1 && b164_1 && b165_1 && b166_1 && b167_1 && b168_1 && b169_1 && b170_1 && b171_1 && b172_1 && b173_1 && b174_1 && b175_1 && b176_1 && b177_1 && b178_1 && b179_1 && b180_1 && b181_1 && b182_1 && b183_1 && b184_1 && b185_1 && b186_1 && b187_1 && b188_1 && b189_1 && b190_1 && b191_1 && b192_1 && b193_1 && b194_1 && b195_1 && b196_1 && b197_1 && b198_1 && b199_1 && b200_1 && b201_1 && b202_1 && b203_1 && b204_1 && b205_1 && b206_1 && b207_1 && b208_1 && b209_1 && b210_1 && b211_1 && b212_1 && b213_1 && b214_1 && b215_1 && b216_1 && b217_1 && b218_1 && b219_1 && b220_1 && b221_1 && b222_1 && b223_1 && b224_1 && b225_1 && b226_1 && b227_1 && b228_1 && b229_1 && b230_1 && b231_1 && b232_1 && b233_1 && b234_1 && b235_1 && b236_1 && b237_1 && b238_1 && b239_1 && b240_1 && b241_1 && b242_1 && b243_1 && b244_1 && b245_1 && b246_1 && b247_1 && b248_1 && b249_1 && b250_1 && b251_1 && b252_1 && b253_1 && b254_1 && b255_1 && b256_1 && b257_2 && b258_2 && b259_2 && b260_2 && b261_3 && b262_3 && b263_3 && b264_2 && b265_3 && b266_3 && b267_2 && b268_3 && b269_3 && b270_2 && b271_3 && b272_3 && b273_3 && b274_3 && b275_3 && b276_2 && b277_4 && b278_3 && b279_4 && b280_5 && b281_5 && b282_2 && b283_3 && b284_3 && b285_6 && b286_3 && b287_3 && b288_3 && b289_3 && b290_2 && b291_5 && b292_2 && b293_2 && b294_6 && b295_4 && b296_3 && b297_5 && b298_6 && b299_7 && b300_3 && b301_5 && b302_4 && b303_8 && b304_9 && b305_7 && b306_2 && b307_5 && b308_4 && b309_11 && b310_4 && b311_4 && b312_2 && b313_8 && b314_3 && b315_9 && b316_7 && b317_5 && b318_7 && b319_12 && b320_4 && b321_9 && b322_9 && b323_4 && b324_4 && b325_4 && b326_12 && b327_8 && b328_4 && b329_8 && b330_1 && b331_4 && b332_3 && b333_10 && b334_5 && b335_5 && b336_1 && b337_6 && b338_2 && b339_44 && b340_6 && b341_2 && b342_1 && b343_6 && b344_4 && b345_29 && b346_9 && b347_53 && b348_10 && b349_16 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_37 && b362_1 && b363_1) {
pattern_id = 2263;
}
if(b315_4 && b316_3 && b317_4 && b318_4 && b319_2 && b320_4 && b321_3 && b322_4 && b323_4 && b324_5 && b325_3 && b326_12 && b327_6 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_19 && b354_4 && b355_4 && b356_26 && b357_4 && b358_4 && b359_9 && b360_1 && b361_1 && b362_37 && b363_1) {
pattern_id = 2264;
}
if(b339_12 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2265;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2266;
}
if(b339_12 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_2 && b352_28 && b353_34 && b354_32 && b355_21 && b356_39 && b357_27 && b358_42 && b359_22 && b360_43 && b361_38 && b362_7 && b363_34) {
pattern_id = 2267;
}
if(b280_3 && b281_3 && b282_2 && b283_3 && b284_3 && b285_3 && b286_3 && b287_3 && b288_3 && b289_3 && b290_2 && b291_3 && b292_3 && b293_3 && b294_3 && b295_3 && b296_3 && b297_2 && b298_3 && b299_3 && b300_3 && b301_3 && b302_3 && b303_3 && b304_5 && b305_4 && b306_2 && b307_4 && b308_5 && b309_4 && b310_2 && b311_4 && b312_4 && b313_5 && b314_4 && b315_5 && b316_3 && b317_2 && b318_6 && b319_3 && b320_4 && b321_5 && b322_3 && b323_11 && b324_6 && b325_3 && b326_12 && b327_3 && b328_4 && b329_1 && b330_1 && b331_1 && b332_7 && b333_14 && b334_8 && b335_5 && b336_1 && b337_7 && b338_21 && b339_12 && b340_2 && b341_2 && b342_4 && b343_6 && b344_7 && b345_1 && b346_1 && b347_6 && b348_7 && b349_7 && b350_7 && b351_17 && b352_11 && b353_42 && b354_15 && b355_4 && b356_4 && b357_1 && b358_24 && b359_6 && b360_16 && b361_1 && b362_5 && b363_36) {
pattern_id = 2268;
}
if(b327_3 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_23 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2269;
}
if(b327_3 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_23 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_21 && b363_1) {
pattern_id = 2270;
}
if(b327_3 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_23 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_31 && b363_1) {
pattern_id = 2271;
}
if(b342_4 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_22 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2272;
}
if(b327_3 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_5 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_30 && b363_1) {
pattern_id = 2273;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_31 && b363_1) {
pattern_id = 2274;
}
if(b315_4 && b316_3 && b317_4 && b318_4 && b319_2 && b320_4 && b321_3 && b322_4 && b323_4 && b324_5 && b325_7 && b326_6 && b327_6 && b328_46 && b329_34 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2275;
}
if(b339_12 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_13 && b350_6 && b351_6 && b352_12 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2276;
}
if(b277_3 && b278_3 && b279_3 && b280_5 && b281_3 && b282_2 && b283_3 && b284_3 && b285_5 && b286_3 && b287_4 && b288_6 && b289_3 && b290_2 && b291_3 && b292_2 && b293_7 && b294_6 && b295_4 && b296_3 && b297_3 && b298_6 && b299_7 && b300_3 && b301_5 && b302_4 && b303_7 && b304_9 && b305_4 && b306_2 && b307_5 && b308_4 && b309_10 && b310_3 && b311_5 && b312_4 && b313_4 && b314_3 && b315_3 && b316_3 && b317_4 && b318_4 && b319_2 && b320_4 && b321_3 && b322_4 && b323_4 && b324_5 && b325_3 && b326_12 && b327_6 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_11 && b339_2 && b340_2 && b341_47 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2277;
}
if(b357_1 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2278;
}
if(b336_7 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_4 && b343_50 && b344_7 && b345_1 && b346_1 && b347_1 && b348_1 && b349_1 && b350_1 && b351_13 && b352_11 && b353_3 && b354_11 && b355_20 && b356_4 && b357_23 && b358_28 && b359_39 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2279;
}
if(b342_4 && b343_1 && b344_4 && b345_3 && b346_1 && b347_4 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2280;
}
if(b342_4 && b343_1 && b344_4 && b345_3 && b346_1 && b347_4 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_21 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_18 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2281;
}
if(b342_4 && b343_1 && b344_4 && b345_3 && b346_1 && b347_4 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_42 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_18 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2282;
}
if(b348_10 && b349_1 && b350_7 && b351_6 && b352_7 && b353_22 && b354_4 && b355_58 && b356_64 && b357_4 && b358_5 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2283;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_4 && b362_1 && b363_1) {
pattern_id = 2284;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_4 && b362_36 && b363_1) {
pattern_id = 2285;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_4 && b362_13 && b363_1) {
pattern_id = 2286;
}
if(b348_10 && b349_1 && b350_7 && b351_6 && b352_7 && b353_22 && b354_4 && b355_58 && b356_64 && b357_4 && b358_5 && b359_50 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2287;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_4 && b362_30 && b363_1) {
pattern_id = 2288;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_4 && b362_34 && b363_1) {
pattern_id = 2289;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_4 && b362_37 && b363_1) {
pattern_id = 2290;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_14 && b362_31 && b363_1) {
pattern_id = 2291;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_14 && b362_6 && b363_1) {
pattern_id = 2292;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_38 && b362_13 && b363_1) {
pattern_id = 2293;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_41 && b360_1 && b361_6 && b362_21 && b363_1) {
pattern_id = 2294;
}
if(b327_3 && b328_9 && b329_8 && b330_8 && b331_1 && b332_6 && b333_5 && b334_2 && b335_17 && b336_2 && b337_2 && b338_7 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_30 && b363_1) {
pattern_id = 2295;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_51 && b360_1 && b361_29 && b362_31 && b363_1) {
pattern_id = 2296;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_42 && b357_4 && b358_24 && b359_51 && b360_1 && b361_35 && b362_34 && b363_1) {
pattern_id = 2297;
}
if(b353_11 && b354_11 && b355_4 && b356_11 && b357_23 && b358_39 && b359_11 && b360_34 && b361_40 && b362_5 && b363_72) {
pattern_id = 2298;
}
if(b357_1 && b358_4 && b359_14 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2299;
}
if(b356_18 && b357_23 && b358_4 && b359_11 && b360_16 && b361_37 && b362_5 && b363_28) {
pattern_id = 2300;
}
if(b356_18 && b357_23 && b358_4 && b359_11 && b360_16 && b361_37 && b362_5 && b363_66) {
pattern_id = 2301;
}
if(b343_10 && b344_4 && b345_1 && b346_7 && b347_3 && b348_7 && b349_7 && b350_55 && b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_37 && b362_31 && b363_1) {
pattern_id = 2302;
}
if(b357_1 && b358_4 && b359_14 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2303;
}
if(b353_11 && b354_11 && b355_4 && b356_11 && b357_23 && b358_10 && b359_11 && b360_16 && b361_43 && b362_5 && b363_47) {
pattern_id = 2304;
}
if(b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_69 && b357_4 && b358_35 && b359_34 && b360_1 && b361_6 && b362_21 && b363_1) {
pattern_id = 2305;
}
if(b353_11 && b354_11 && b355_4 && b356_11 && b357_23 && b358_33 && b359_11 && b360_42 && b361_40 && b362_5 && b363_32) {
pattern_id = 2306;
}
if(b353_11 && b354_11 && b355_4 && b356_11 && b357_62 && b358_4 && b359_6 && b360_72 && b361_6 && b362_4 && b363_40) {
pattern_id = 2307;
}
if(b348_10 && b349_1 && b350_7 && b351_6 && b352_19 && b353_19 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_6 && b362_45 && b363_1) {
pattern_id = 2308;
}
if(b315_4 && b316_3 && b317_4 && b318_4 && b319_5 && b320_4 && b321_3 && b322_4 && b323_23 && b324_5 && b325_3 && b326_2 && b327_6 && b328_9 && b329_8 && b330_8 && b331_3 && b332_3 && b333_5 && b334_1 && b335_2 && b336_2 && b337_1 && b338_6 && b339_2 && b340_2 && b341_2 && b342_3 && b343_14 && b344_4 && b345_3 && b346_1 && b347_7 && b348_4 && b349_1 && b350_10 && b351_6 && b352_7 && b353_3 && b354_4 && b355_31 && b356_4 && b357_4 && b358_4 && b359_50 && b360_1 && b361_1 && b362_31 && b363_1) {
pattern_id = 2309;
}
if(b336_7 && b337_1 && b338_2 && b339_2 && b340_32 && b341_10 && b342_3 && b343_65 && b344_45 && b345_3 && b346_61 && b347_70 && b348_4 && b349_30 && b350_16 && b351_6 && b352_71 && b353_21 && b354_4 && b355_41 && b356_13 && b357_4 && b358_5 && b359_18 && b360_1 && b361_24 && b362_13 && b363_1) {
pattern_id = 2310;
}
if(b315_4 && b316_3 && b317_4 && b318_4 && b319_43 && b320_47 && b321_3 && b322_10 && b323_23 && b324_5 && b325_47 && b326_47 && b327_6 && b328_16 && b329_52 && b330_8 && b331_12 && b332_58 && b333_5 && b334_14 && b335_10 && b336_2 && b337_13 && b338_55 && b339_2 && b340_53 && b341_12 && b342_3 && b343_16 && b344_16 && b345_3 && b346_4 && b347_12 && b348_4 && b349_30 && b350_11 && b351_6 && b352_18 && b353_42 && b354_4 && b355_31 && b356_39 && b357_4 && b358_24 && b359_9 && b360_1 && b361_37 && b362_36 && b363_1) {
pattern_id = 2311;
}
if(b342_4 && b343_1 && b344_4 && b345_3 && b346_27 && b347_4 && b348_10 && b349_59 && b350_17 && b351_2 && b352_38 && b353_16 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2312;
}
if(b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2313;
}
if(b356_18 && b357_23 && b358_4 && b359_6 && b360_2 && b361_28 && b362_2 && b363_47) {
pattern_id = 2314;
}
if(b277_3 && b278_3 && b279_3 && b280_3 && b281_9 && b282_1 && b283_7 && b284_9 && b285_10 && b286_9 && b287_9 && b288_5 && b289_12 && b290_10 && b291_12 && b292_9 && b293_11 && b294_3 && b295_5 && b296_11 && b297_2 && b298_7 && b299_1 && b300_11 && b301_10 && b302_10 && b303_12 && b304_16 && b305_15 && b306_11 && b307_14 && b308_18 && b309_13 && b310_7 && b311_14 && b312_12 && b313_7 && b314_25 && b315_9 && b316_27 && b317_3 && b318_20 && b319_17 && b320_32 && b321_33 && b322_3 && b323_6 && b324_23 && b325_2 && b326_27 && b327_15 && b328_20 && b329_28 && b330_31 && b331_34 && b332_26 && b333_3 && b334_28 && b335_38 && b336_20 && b337_28 && b338_29 && b339_48 && b340_30 && b341_34 && b342_1 && b343_55 && b344_66 && b345_42 && b346_9 && b347_15 && b348_32 && b349_7 && b350_67 && b351_62 && b352_43 && b353_10 && b354_25 && b355_11 && b356_29 && b357_51 && b358_11 && b359_82 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2315;
}
if(b359_6 && b360_16 && b361_1 && b362_5 && b363_69) {
pattern_id = 2316;
}
if(b359_6 && b360_16 && b361_1 && b362_5 && b363_3) {
pattern_id = 2317;
}
if(b263_2 && b264_2 && b265_7 && b266_7 && b267_14 && b268_4 && b269_19 && b270_2 && b271_7 && b272_15 && b273_4 && b274_18 && b275_3 && b276_3 && b277_15 && b278_2 && b279_3 && b280_14 && b281_2 && b282_12 && b283_5 && b284_3 && b285_3 && b286_6 && b287_19 && b288_7 && b289_20 && b290_2 && b291_4 && b292_12 && b293_7 && b294_5 && b295_3 && b296_3 && b297_2 && b298_26 && b299_3 && b300_3 && b301_3 && b302_3 && b303_19 && b304_5 && b305_4 && b306_2 && b307_4 && b308_34 && b309_4 && b310_2 && b311_4 && b312_4 && b313_12 && b314_4 && b315_5 && b316_3 && b317_2 && b318_10 && b319_3 && b320_4 && b321_5 && b322_3 && b323_21 && b324_6 && b325_3 && b326_12 && b327_3 && b328_27 && b329_1 && b330_1 && b331_1 && b332_7 && b333_20 && b334_8 && b335_5 && b336_1 && b337_7 && b338_38 && b339_12 && b340_2 && b341_2 && b342_4 && b343_30 && b344_7 && b345_1 && b346_1 && b347_6 && b348_15 && b349_7 && b350_7 && b351_17 && b352_11 && b353_27 && b354_15 && b355_4 && b356_4 && b357_1 && b358_75 && b359_6 && b360_16 && b361_1 && b362_5 && b363_28) {
pattern_id = 2318;
}
if(b352_11 && b353_3 && b354_11 && b355_23 && b356_41 && b357_15 && b358_37 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2319;
}
if(b348_10 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2320;
}
if(b348_10 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_24 && b362_6 && b363_1) {
pattern_id = 2321;
}
if(b348_10 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_24 && b362_3 && b363_1) {
pattern_id = 2322;
}
if(b348_10 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_36 && b362_54 && b363_1) {
pattern_id = 2323;
}
if(b348_10 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_29 && b362_54 && b363_1) {
pattern_id = 2324;
}
if(b354_15 && b355_4 && b356_42 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2325;
}
if(b354_15 && b355_4 && b356_42 && b357_4 && b358_4 && b359_18 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2326;
}
if(b351_2 && b352_7 && b353_22 && b354_4 && b355_4 && b356_31 && b357_4 && b358_4 && b359_14 && b360_1 && b361_37 && b362_13 && b363_1) {
pattern_id = 2327;
}
if(b354_15 && b355_4 && b356_42 && b357_4 && b358_4 && b359_4 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2328;
}
if(b315_4 && b316_3 && b317_7 && b318_4 && b319_2 && b320_9 && b321_3 && b322_4 && b323_9 && b324_5 && b325_3 && b326_7 && b327_6 && b328_9 && b329_12 && b330_8 && b331_1 && b332_16 && b333_5 && b334_1 && b335_17 && b336_2 && b337_1 && b338_6 && b339_2 && b340_2 && b341_7 && b342_3 && b343_1 && b344_15 && b345_3 && b346_1 && b347_16 && b348_4 && b349_1 && b350_9 && b351_6 && b352_7 && b353_28 && b354_4 && b355_4 && b356_39 && b357_4 && b358_4 && b359_10 && b360_1 && b361_37 && b362_1 && b363_1) {
pattern_id = 2329;
}
if(b318_5 && b319_2 && b320_6 && b321_3 && b322_4 && b323_6 && b324_5 && b325_3 && b326_10 && b327_6 && b328_9 && b329_11 && b330_8 && b331_1 && b332_14 && b333_5 && b334_1 && b335_7 && b336_2 && b337_1 && b338_16 && b339_2 && b340_2 && b341_16 && b342_3 && b343_1 && b344_14 && b345_3 && b346_1 && b347_10 && b348_4 && b349_1 && b350_20 && b351_6 && b352_7 && b353_13 && b354_4 && b355_4 && b356_37 && b357_4 && b358_4 && b359_22 && b360_1 && b361_1 && b362_45 && b363_1) {
pattern_id = 2330;
}
if(b327_3 && b328_9 && b329_3 && b330_8 && b331_1 && b332_13 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_31 && b357_4 && b358_4 && b359_4 && b360_1 && b361_38 && b362_31 && b363_1) {
pattern_id = 2331;
}
if(b339_12 && b340_2 && b341_46 && b342_3 && b343_7 && b344_4 && b345_3 && b346_1 && b347_12 && b348_4 && b349_1 && b350_7 && b351_6 && b352_14 && b353_13 && b354_4 && b355_31 && b356_22 && b357_4 && b358_48 && b359_48 && b360_1 && b361_31 && b362_6 && b363_1) {
pattern_id = 2332;
}
if(b360_3 && b361_1 && b362_54 && b363_1) {
pattern_id = 2333;
}
if(b335_4 && b336_1 && b337_5 && b338_4 && b339_14 && b340_9 && b341_4 && b342_7 && b343_6 && b344_24 && b345_5 && b346_7 && b347_12 && b348_1 && b349_9 && b350_14 && b351_16 && b352_11 && b353_60 && b354_15 && b355_19 && b356_24 && b357_4 && b358_31 && b359_10 && b360_1 && b361_6 && b362_45 && b363_1) {
pattern_id = 2334;
}
if(b330_4 && b331_1 && b332_6 && b333_2 && b334_18 && b335_21 && b336_15 && b337_16 && b338_22 && b339_17 && b340_21 && b341_11 && b342_8 && b343_18 && b344_7 && b345_3 && b346_25 && b347_22 && b348_5 && b349_17 && b350_8 && b351_35 && b352_25 && b353_1 && b354_12 && b355_16 && b356_11 && b357_34 && b358_6 && b359_21 && b360_13 && b361_8 && b362_52 && b363_43) {
pattern_id = 2335;
}
if(b357_1 && b358_4 && b359_4 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2336;
}
if(b342_4 && b343_1 && b344_45 && b345_3 && b346_1 && b347_4 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_16 && b354_4 && b355_58 && b356_31 && b357_4 && b358_4 && b359_18 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2337;
}
if(b360_3 && b361_1 && b362_36 && b363_1) {
pattern_id = 2338;
}
if(b335_4 && b336_1 && b337_9 && b338_4 && b339_16 && b340_37 && b341_11 && b342_1 && b343_4 && b344_7 && b345_42 && b346_21 && b347_43 && b348_45 && b349_31 && b350_44 && b351_26 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2339;
}
if(b330_4 && b331_1 && b332_13 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_17 && b342_3 && b343_1 && b344_16 && b345_3 && b346_27 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2340;
}
if(b354_15 && b355_4 && b356_23 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2341;
}
if(b354_15 && b355_4 && b356_23 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2342;
}
if(b357_1 && b358_4 && b359_34 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2343;
}
if(b342_4 && b343_1 && b344_22 && b345_3 && b346_15 && b347_16 && b348_4 && b349_16 && b350_15 && b351_6 && b352_15 && b353_45 && b354_4 && b355_4 && b356_31 && b357_4 && b358_5 && b359_14 && b360_1 && b361_1 && b362_30 && b363_1) {
pattern_id = 2344;
}
if(b320_3 && b321_5 && b322_6 && b323_2 && b324_8 && b325_3 && b326_3 && b327_7 && b328_15 && b329_1 && b330_12 && b331_9 && b332_3 && b333_15 && b334_5 && b335_10 && b336_1 && b337_6 && b338_17 && b339_4 && b340_9 && b341_20 && b342_4 && b343_1 && b344_22 && b345_3 && b346_27 && b347_3 && b348_4 && b349_6 && b350_10 && b351_2 && b352_37 && b353_11 && b354_11 && b355_37 && b356_11 && b357_27 && b358_4 && b359_11 && b360_42 && b361_29 && b362_5 && b363_54) {
pattern_id = 2345;
}
if(b336_7 && b337_1 && b338_24 && b339_12 && b340_2 && b341_58 && b342_5 && b343_10 && b344_4 && b345_57 && b346_9 && b347_18 && b348_15 && b349_55 && b350_8 && b351_20 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2346;
}
if(b338_4 && b339_1 && b340_20 && b341_11 && b342_19 && b343_31 && b344_5 && b345_11 && b346_1 && b347_12 && b348_10 && b349_50 && b350_8 && b351_20 && b352_13 && b353_8 && b354_41 && b355_15 && b356_10 && b357_1 && b358_4 && b359_34 && b360_3 && b361_52 && b362_15 && b363_51) {
pattern_id = 2347;
}
if(b330_4 && b331_1 && b332_13 && b333_2 && b334_27 && b335_57 && b336_52 && b337_7 && b338_2 && b339_26 && b340_9 && b341_51 && b342_37 && b343_19 && b344_40 && b345_48 && b346_30 && b347_5 && b348_35 && b349_44 && b350_4 && b351_20 && b352_35 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2348;
}
if(b319_3 && b320_4 && b321_34 && b322_3 && b323_5 && b324_9 && b325_24 && b326_20 && b327_4 && b328_16 && b329_1 && b330_18 && b331_22 && b332_22 && b333_31 && b334_33 && b335_28 && b336_28 && b337_41 && b338_40 && b339_12 && b340_2 && b341_7 && b342_4 && b343_25 && b344_54 && b345_66 && b346_20 && b347_9 && b348_34 && b349_56 && b350_34 && b351_5 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2349;
}
if(b330_4 && b331_1 && b332_13 && b333_2 && b334_34 && b335_31 && b336_1 && b337_7 && b338_2 && b339_58 && b340_9 && b341_25 && b342_5 && b343_40 && b344_30 && b345_48 && b346_30 && b347_21 && b348_10 && b349_1 && b350_15 && b351_2 && b352_13 && b353_49 && b354_15 && b355_4 && b356_31 && b357_1 && b358_7 && b359_15 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2350;
}
if(b330_4 && b331_1 && b332_13 && b333_2 && b334_34 && b335_31 && b336_35 && b337_7 && b338_2 && b339_58 && b340_9 && b341_25 && b342_5 && b343_40 && b344_30 && b345_48 && b346_30 && b347_21 && b348_10 && b349_1 && b350_15 && b351_2 && b352_13 && b353_49 && b354_15 && b355_4 && b356_31 && b357_1 && b358_7 && b359_15 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2351;
}
if(b344_7 && b345_1 && b346_13 && b347_6 && b348_38 && b349_26 && b350_6 && b351_2 && b352_7 && b353_36 && b354_15 && b355_28 && b356_6 && b357_52 && b358_37 && b359_21 && b360_26 && b361_26 && b362_20 && b363_5) {
pattern_id = 2352;
}
if(b351_2 && b352_7 && b353_42 && b354_15 && b355_40 && b356_4 && b357_20 && b358_28 && b359_14 && b360_35 && b361_34 && b362_56 && b363_25) {
pattern_id = 2353;
}
if(b344_7 && b345_1 && b346_13 && b347_6 && b348_65 && b349_25 && b350_49 && b351_2 && b352_7 && b353_21 && b354_15 && b355_10 && b356_15 && b357_1 && b358_4 && b359_34 && b360_3 && b361_52 && b362_15 && b363_51) {
pattern_id = 2354;
}
if(b336_7 && b337_1 && b338_24 && b339_12 && b340_39 && b341_64 && b342_59 && b343_10 && b344_4 && b345_25 && b346_9 && b347_44 && b348_41 && b349_39 && b350_41 && b351_7 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2355;
}
if(b336_7 && b337_1 && b338_24 && b339_12 && b340_39 && b341_45 && b342_10 && b343_10 && b344_4 && b345_57 && b346_9 && b347_49 && b348_3 && b349_37 && b350_52 && b351_40 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2356;
}
if(b335_4 && b336_1 && b337_10 && b338_4 && b339_54 && b340_39 && b341_45 && b342_4 && b343_1 && b344_64 && b345_11 && b346_44 && b347_54 && b348_43 && b349_17 && b350_6 && b351_15 && b352_17 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2357;
}
if(b318_5 && b319_2 && b320_33 && b321_7 && b322_22 && b323_1 && b324_38 && b325_2 && b326_12 && b327_45 && b328_12 && b329_2 && b330_2 && b331_25 && b332_26 && b333_30 && b334_34 && b335_59 && b336_7 && b337_1 && b338_13 && b339_12 && b340_21 && b341_24 && b342_19 && b343_25 && b344_8 && b345_36 && b346_31 && b347_26 && b348_15 && b349_26 && b350_12 && b351_5 && b352_25 && b353_10 && b354_15 && b355_4 && b356_31 && b357_1 && b358_54 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2358;
}
if(b334_8 && b335_5 && b336_10 && b337_7 && b338_42 && b339_54 && b340_39 && b341_11 && b342_1 && b343_4 && b344_7 && b345_29 && b346_6 && b347_51 && b348_1 && b349_44 && b350_36 && b351_23 && b352_1 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2359;
}
if(b334_8 && b335_5 && b336_10 && b337_7 && b338_42 && b339_54 && b340_39 && b341_11 && b342_1 && b343_4 && b344_7 && b345_45 && b346_21 && b347_54 && b348_51 && b349_36 && b350_8 && b351_22 && b352_4 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2360;
}
if(b319_3 && b320_4 && b321_34 && b322_3 && b323_1 && b324_38 && b325_19 && b326_20 && b327_4 && b328_16 && b329_1 && b330_18 && b331_22 && b332_22 && b333_31 && b334_33 && b335_28 && b336_28 && b337_41 && b338_40 && b339_12 && b340_2 && b341_7 && b342_4 && b343_25 && b344_54 && b345_66 && b346_20 && b347_9 && b348_34 && b349_56 && b350_34 && b351_5 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2361;
}
if(b333_2 && b334_1 && b335_37 && b336_7 && b337_42 && b338_42 && b339_54 && b340_9 && b341_2 && b342_57 && b343_10 && b344_67 && b345_22 && b346_44 && b347_5 && b348_24 && b349_18 && b350_62 && b351_28 && b352_21 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2362;
}
if(b330_4 && b331_1 && b332_13 && b333_2 && b334_56 && b335_60 && b336_55 && b337_7 && b338_2 && b339_5 && b340_9 && b341_52 && b342_30 && b343_40 && b344_29 && b345_50 && b346_20 && b347_27 && b348_5 && b349_3 && b350_28 && b351_65 && b352_21 && b353_27 && b354_15 && b355_4 && b356_31 && b357_1 && b358_9 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2363;
}
if(b357_1 && b358_4 && b359_1 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2364;
}
if(b354_15 && b355_4 && b356_69 && b357_4 && b358_4 && b359_18 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2365;
}
if(b360_3 && b361_1 && b362_13 && b363_1) {
pattern_id = 2366;
}
if(b345_11 && b346_1 && b347_25 && b348_10 && b349_1 && b350_73 && b351_65 && b352_7 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2367;
}
if(b335_4 && b336_1 && b337_18 && b338_4 && b339_23 && b340_49 && b341_52 && b342_40 && b343_10 && b344_4 && b345_25 && b346_9 && b347_33 && b348_11 && b349_34 && b350_44 && b351_28 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2368;
}
if(b336_7 && b337_1 && b338_64 && b339_12 && b340_25 && b341_23 && b342_5 && b343_20 && b344_7 && b345_1 && b346_57 && b347_6 && b348_25 && b349_3 && b350_44 && b351_26 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2369;
}
if(b336_7 && b337_1 && b338_64 && b339_12 && b340_22 && b341_27 && b342_18 && b343_2 && b344_7 && b345_1 && b346_57 && b347_6 && b348_29 && b349_3 && b350_12 && b351_5 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2370;
}
if(b335_4 && b336_1 && b337_18 && b338_4 && b339_27 && b340_3 && b341_39 && b342_5 && b343_10 && b344_4 && b345_25 && b346_9 && b347_21 && b348_29 && b349_39 && b350_28 && b351_38 && b352_23 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2371;
}
if(b337_7 && b338_2 && b339_44 && b340_9 && b341_24 && b342_25 && b343_54 && b344_8 && b345_11 && b346_1 && b347_25 && b348_10 && b349_61 && b350_51 && b351_23 && b352_70 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2372;
}
if(b337_7 && b338_2 && b339_44 && b340_9 && b341_63 && b342_19 && b343_35 && b344_26 && b345_11 && b346_1 && b347_57 && b348_10 && b349_39 && b350_4 && b351_12 && b352_11 && b353_3 && b354_69 && b355_23 && b356_28 && b357_13 && b358_55 && b359_13 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2373;
}
if(b335_4 && b336_1 && b337_18 && b338_4 && b339_56 && b340_33 && b341_35 && b342_19 && b343_10 && b344_4 && b345_57 && b346_9 && b347_18 && b348_15 && b349_55 && b350_8 && b351_20 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2374;
}
if(b343_10 && b344_4 && b345_12 && b346_9 && b347_21 && b348_17 && b349_18 && b350_42 && b351_2 && b352_7 && b353_42 && b354_15 && b355_48 && b356_4 && b357_20 && b358_28 && b359_14 && b360_35 && b361_34 && b362_56 && b363_25) {
pattern_id = 2375;
}
if(b346_9 && b347_3 && b348_14 && b349_7 && b350_34 && b351_5 && b352_46 && b353_29 && b354_15 && b355_4 && b356_31 && b357_1 && b358_9 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2376;
}
if(b357_1 && b358_4 && b359_50 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2377;
}
if(b356_18 && b357_23 && b358_33 && b359_11 && b360_16 && b361_1 && b362_5 && b363_30) {
pattern_id = 2378;
}
if(b333_2 && b334_1 && b335_2 && b336_2 && b337_9 && b338_9 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_61 && b351_6 && b352_18 && b353_18 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2379;
}
if(b348_10 && b349_1 && b350_61 && b351_6 && b352_18 && b353_18 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2380;
}
if(b360_3 && b361_1 && b362_30 && b363_1) {
pattern_id = 2381;
}
if(b336_7 && b337_1 && b338_55 && b339_12 && b340_33 && b341_42 && b342_24 && b343_30 && b344_55 && b345_11 && b346_1 && b347_7 && b348_10 && b349_26 && b350_24 && b351_28 && b352_49 && b353_1 && b354_15 && b355_4 && b356_31 && b357_1 && b358_9 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2382;
}
if(b333_2 && b334_1 && b335_2 && b336_7 && b337_28 && b338_29 && b339_16 && b340_42 && b341_16 && b342_4 && b343_1 && b344_64 && b345_11 && b346_2 && b347_5 && b348_25 && b349_31 && b350_44 && b351_26 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2383;
}
if(b336_7 && b337_1 && b338_55 && b339_12 && b340_49 && b341_52 && b342_25 && b343_26 && b344_54 && b345_11 && b346_1 && b347_7 && b348_10 && b349_31 && b350_49 && b351_28 && b352_40 && b353_10 && b354_15 && b355_4 && b356_31 && b357_1 && b358_19 && b359_21 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2384;
}
if(b334_8 && b335_5 && b336_54 && b337_7 && b338_36 && b339_29 && b340_10 && b341_2 && b342_1 && b343_10 && b344_4 && b345_25 && b346_9 && b347_44 && b348_41 && b349_39 && b350_41 && b351_7 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2385;
}
if(b325_2 && b326_12 && b327_35 && b328_12 && b329_21 && b330_17 && b331_19 && b332_39 && b333_28 && b334_8 && b335_5 && b336_8 && b337_7 && b338_40 && b339_24 && b340_49 && b341_8 && b342_28 && b343_48 && b344_29 && b345_42 && b346_21 && b347_18 && b348_51 && b349_17 && b350_5 && b351_5 && b352_1 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2386;
}
if(b328_12 && b329_8 && b330_43 && b331_9 && b332_38 && b333_31 && b334_26 && b335_24 && b336_18 && b337_7 && b338_2 && b339_26 && b340_9 && b341_30 && b342_19 && b343_26 && b344_42 && b345_39 && b346_21 && b347_18 && b348_48 && b349_18 && b350_22 && b351_5 && b352_21 && b353_11 && b354_11 && b355_37 && b356_18 && b357_42 && b358_19 && b359_59 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2387;
}
if(b333_2 && b334_1 && b335_2 && b336_7 && b337_41 && b338_48 && b339_17 && b340_25 && b341_28 && b342_4 && b343_1 && b344_64 && b345_11 && b346_2 && b347_5 && b348_25 && b349_31 && b350_41 && b351_7 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2388;
}
if(b334_8 && b335_5 && b336_54 && b337_7 && b338_42 && b339_54 && b340_3 && b341_28 && b342_38 && b343_10 && b344_4 && b345_25 && b346_9 && b347_33 && b348_11 && b349_34 && b350_44 && b351_28 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2389;
}
if(b348_10 && b349_1 && b350_61 && b351_2 && b352_36 && b353_1 && b354_50 && b355_28 && b356_57 && b357_1 && b358_4 && b359_34 && b360_3 && b361_52 && b362_15 && b363_51) {
pattern_id = 2390;
}
if(b348_10 && b349_1 && b350_61 && b351_2 && b352_36 && b353_1 && b354_50 && b355_28 && b356_57 && b357_1 && b358_4 && b359_34 && b360_3 && b361_44 && b362_9 && b363_6) {
pattern_id = 2391;
}
if(b345_11 && b346_1 && b347_7 && b348_10 && b349_54 && b350_28 && b351_45 && b352_24 && b353_46 && b354_15 && b355_4 && b356_31 && b357_1 && b358_9 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2392;
}
if(b333_2 && b334_1 && b335_7 && b336_7 && b337_25 && b338_29 && b339_21 && b340_36 && b341_52 && b342_30 && b343_10 && b344_4 && b345_25 && b346_9 && b347_49 && b348_15 && b349_44 && b350_41 && b351_7 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2393;
}
if(b343_10 && b344_4 && b345_25 && b346_9 && b347_44 && b348_26 && b349_26 && b350_56 && b351_10 && b352_16 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2394;
}
if(b343_10 && b344_4 && b345_25 && b346_9 && b347_49 && b348_15 && b349_25 && b350_5 && b351_65 && b352_4 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2395;
}
if(b334_8 && b335_5 && b336_53 && b337_7 && b338_49 && b339_38 && b340_48 && b341_9 && b342_8 && b343_13 && b344_7 && b345_1 && b346_58 && b347_6 && b348_42 && b349_3 && b350_22 && b351_24 && b352_29 && b353_10 && b354_15 && b355_4 && b356_31 && b357_1 && b358_11 && b359_55 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2396;
}
if(b330_4 && b331_1 && b332_16 && b333_2 && b334_48 && b335_28 && b336_42 && b337_44 && b338_41 && b339_24 && b340_9 && b341_2 && b342_2 && b343_10 && b344_26 && b345_36 && b346_44 && b347_18 && b348_26 && b349_5 && b350_36 && b351_45 && b352_24 && b353_40 && b354_15 && b355_4 && b356_31 && b357_1 && b358_2 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2397;
}
if(b343_10 && b344_4 && b345_25 && b346_9 && b347_21 && b348_29 && b349_56 && b350_19 && b351_24 && b352_6 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2398;
}
if(b332_7 && b333_1 && b334_40 && b335_4 && b336_28 && b337_41 && b338_57 && b339_3 && b340_27 && b341_34 && b342_4 && b343_1 && b344_6 && b345_11 && b346_30 && b347_26 && b348_17 && b349_35 && b350_56 && b351_7 && b352_23 && b353_29 && b354_15 && b355_4 && b356_31 && b357_1 && b358_46 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2399;
}
if(b325_2 && b326_12 && b327_36 && b328_12 && b329_23 && b330_23 && b331_2 && b332_26 && b333_36 && b334_38 && b335_4 && b336_1 && b337_8 && b338_4 && b339_21 && b340_24 && b341_23 && b342_31 && b343_8 && b344_2 && b345_48 && b346_3 && b347_22 && b348_5 && b349_19 && b350_36 && b351_21 && b352_41 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2400;
}
if(b354_15 && b355_4 && b356_64 && b357_1 && b358_44 && b359_57 && b360_52 && b361_23 && b362_12 && b363_52) {
pattern_id = 2401;
}
if(b337_7 && b338_2 && b339_52 && b340_9 && b341_35 && b342_37 && b343_19 && b344_29 && b345_42 && b346_2 && b347_6 && b348_1 && b349_33 && b350_1 && b351_29 && b352_6 && b353_56 && b354_15 && b355_4 && b356_31 && b357_1 && b358_16 && b359_2 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2402;
}
if(b343_10 && b344_4 && b345_25 && b346_9 && b347_33 && b348_43 && b349_56 && b350_19 && b351_24 && b352_6 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2403;
}
if(b332_7 && b333_1 && b334_40 && b335_4 && b336_30 && b337_27 && b338_50 && b339_24 && b340_40 && b341_24 && b342_4 && b343_1 && b344_64 && b345_11 && b346_35 && b347_5 && b348_42 && b349_54 && b350_36 && b351_7 && b352_23 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2404;
}
if(b326_20 && b327_4 && b328_43 && b329_1 && b330_38 && b331_34 && b332_39 && b333_36 && b334_22 && b335_28 && b336_7 && b337_1 && b338_11 && b339_12 && b340_39 && b341_24 && b342_25 && b343_28 && b344_25 && b345_34 && b346_48 && b347_2 && b348_42 && b349_27 && b350_12 && b351_5 && b352_1 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2405;
}
if(b343_10 && b344_4 && b345_25 && b346_9 && b347_30 && b348_15 && b349_34 && b350_44 && b351_49 && b352_1 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2406;
}
if(b360_3 && b361_1 && b362_46 && b363_1) {
pattern_id = 2407;
}
if(b353_11 && b354_11 && b355_17 && b356_18 && b357_13 && b358_7 && b359_19 && b360_6 && b361_7 && b362_8 && b363_22) {
pattern_id = 2408;
}
if(b332_7 && b333_1 && b334_46 && b335_4 && b336_42 && b337_3 && b338_49 && b339_28 && b340_33 && b341_30 && b342_56 && b343_10 && b344_4 && b345_18 && b346_9 && b347_5 && b348_24 && b349_31 && b350_22 && b351_24 && b352_29 && b353_10 && b354_15 && b355_4 && b356_31 && b357_1 && b358_27 && b359_13 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2409;
}
if(b333_2 && b334_1 && b335_17 && b336_7 && b337_21 && b338_44 && b339_37 && b340_48 && b341_46 && b342_46 && b343_7 && b344_7 && b345_1 && b346_57 && b347_6 && b348_62 && b349_27 && b350_19 && b351_26 && b352_4 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2410;
}
if(b342_4 && b343_1 && b344_64 && b345_11 && b346_47 && b347_29 && b348_55 && b349_27 && b350_4 && b351_48 && b352_42 && b353_43 && b354_12 && b355_11 && b356_50 && b357_1 && b358_4 && b359_34 && b360_3 && b361_7 && b362_8 && b363_29) {
pattern_id = 2411;
}
if(b333_2 && b334_1 && b335_17 && b336_7 && b337_20 && b338_44 && b339_7 && b340_35 && b341_27 && b342_50 && b343_47 && b344_7 && b345_1 && b346_57 && b347_6 && b348_29 && b349_3 && b350_12 && b351_5 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2412;
}
if(b332_7 && b333_1 && b334_46 && b335_4 && b336_37 && b337_27 && b338_41 && b339_37 && b340_24 && b341_9 && b342_58 && b343_10 && b344_4 && b345_25 && b346_9 && b347_44 && b348_41 && b349_39 && b350_41 && b351_7 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2413;
}
if(b335_4 && b336_1 && b337_57 && b338_4 && b339_28 && b340_62 && b341_51 && b342_5 && b343_26 && b344_34 && b345_26 && b346_9 && b347_3 && b348_14 && b349_7 && b350_7 && b351_17 && b352_7 && b353_8 && b354_15 && b355_4 && b356_31 && b357_1 && b358_18 && b359_13 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2414;
}
if(b336_7 && b337_1 && b338_16 && b339_12 && b340_3 && b341_28 && b342_38 && b343_7 && b344_4 && b345_1 && b346_15 && b347_6 && b348_1 && b349_33 && b350_1 && b351_29 && b352_6 && b353_56 && b354_15 && b355_4 && b356_31 && b357_1 && b358_16 && b359_2 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2415;
}
if(b343_10 && b344_4 && b345_18 && b346_9 && b347_33 && b348_24 && b349_24 && b350_26 && b351_21 && b352_21 && b353_46 && b354_15 && b355_4 && b356_31 && b357_1 && b358_9 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2416;
}
if(b333_2 && b334_1 && b335_17 && b336_7 && b337_41 && b338_44 && b339_3 && b340_42 && b341_24 && b342_20 && b343_16 && b344_7 && b345_1 && b346_57 && b347_6 && b348_38 && b349_25 && b350_54 && b351_28 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_42 && b358_19 && b359_59 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2417;
}
if(b353_11 && b354_11 && b355_17 && b356_18 && b357_20 && b358_6 && b359_17 && b360_8 && b361_26 && b362_15 && b363_10) {
pattern_id = 2418;
}
if(b327_3 && b328_9 && b329_34 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_16 && b341_58 && b342_3 && b343_14 && b344_64 && b345_3 && b346_28 && b347_20 && b348_4 && b349_71 && b350_20 && b351_6 && b352_14 && b353_21 && b354_4 && b355_19 && b356_37 && b357_4 && b358_39 && b359_34 && b360_1 && b361_1 && b362_7 && b363_1) {
pattern_id = 2419;
}
if(b327_3 && b328_9 && b329_34 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_58 && b341_9 && b342_3 && b343_14 && b344_24 && b345_3 && b346_1 && b347_15 && b348_4 && b349_16 && b350_40 && b351_6 && b352_15 && b353_15 && b354_4 && b355_19 && b356_48 && b357_4 && b358_5 && b359_41 && b360_1 && b361_73 && b362_46 && b363_1) {
pattern_id = 2420;
}
if(b327_3 && b328_9 && b329_34 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_32 && b341_58 && b342_3 && b343_44 && b344_62 && b345_3 && b346_5 && b347_8 && b348_4 && b349_6 && b350_64 && b351_6 && b352_14 && b353_73 && b354_4 && b355_70 && b356_31 && b357_4 && b358_13 && b359_32 && b360_1 && b361_29 && b362_36 && b363_1) {
pattern_id = 2421;
}
if(b315_4 && b316_3 && b317_5 && b318_4 && b319_2 && b320_7 && b321_3 && b322_4 && b323_7 && b324_5 && b325_3 && b326_11 && b327_6 && b328_9 && b329_7 && b330_8 && b331_1 && b332_15 && b333_5 && b334_1 && b335_10 && b336_2 && b337_1 && b338_17 && b339_2 && b340_14 && b341_2 && b342_3 && b343_7 && b344_3 && b345_3 && b346_17 && b347_15 && b348_4 && b349_13 && b350_13 && b351_6 && b352_2 && b353_16 && b354_4 && b355_30 && b356_38 && b357_4 && b358_39 && b359_41 && b360_1 && b361_37 && b362_46 && b363_1) {
pattern_id = 2422;
}
if(b345_11 && b346_1 && b347_12 && b348_4 && b349_15 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2423;
}
if(b360_3 && b361_1 && b362_31 && b363_1) {
pattern_id = 2424;
}
if(b319_3 && b320_4 && b321_8 && b322_3 && b323_13 && b324_6 && b325_3 && b326_16 && b327_6 && b328_15 && b329_8 && b330_8 && b331_1 && b332_9 && b333_2 && b334_20 && b335_4 && b336_1 && b337_9 && b338_1 && b339_4 && b340_2 && b341_1 && b342_1 && b343_4 && b344_7 && b345_28 && b346_9 && b347_3 && b348_32 && b349_9 && b350_10 && b351_17 && b352_5 && b353_3 && b354_22 && b355_23 && b356_47 && b357_1 && b358_4 && b359_4 && b360_1 && b361_29 && b362_1 && b363_1) {
pattern_id = 2425;
}
if(b341_11 && b342_1 && b343_4 && b344_7 && b345_21 && b346_20 && b347_18 && b348_38 && b349_27 && b350_30 && b351_42 && b352_29 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2426;
}
if(b345_11 && b346_1 && b347_12 && b348_10 && b349_29 && b350_28 && b351_26 && b352_21 && b353_40 && b354_10 && b355_44 && b356_12 && b357_1 && b358_4 && b359_34 && b360_3 && b361_53 && b362_12 && b363_23) {
pattern_id = 2427;
}
if(b345_11 && b346_1 && b347_12 && b348_10 && b349_47 && b350_26 && b351_7 && b352_42 && b353_49 && b354_10 && b355_44 && b356_10 && b357_1 && b358_4 && b359_34 && b360_3 && b361_52 && b362_15 && b363_51) {
pattern_id = 2428;
}
if(b342_4 && b343_1 && b344_6 && b345_11 && b346_22 && b347_26 && b348_34 && b349_24 && b350_26 && b351_28 && b352_8 && b353_56 && b354_15 && b355_4 && b356_31 && b357_1 && b358_16 && b359_56 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2429;
}
if(b342_4 && b343_1 && b344_6 && b345_11 && b346_10 && b347_22 && b348_29 && b349_44 && b350_42 && b351_5 && b352_25 && b353_10 && b354_15 && b355_4 && b356_31 && b357_1 && b358_2 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2430;
}
if(b329_1 && b330_1 && b331_17 && b332_7 && b333_3 && b334_30 && b335_40 && b336_36 && b337_3 && b338_32 && b339_18 && b340_27 && b341_11 && b342_1 && b343_4 && b344_7 && b345_42 && b346_21 && b347_43 && b348_45 && b349_31 && b350_44 && b351_26 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2431;
}
if(b341_11 && b342_1 && b343_4 && b344_7 && b345_4 && b346_3 && b347_29 && b348_38 && b349_5 && b350_24 && b351_29 && b352_13 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2432;
}
if(b342_4 && b343_1 && b344_14 && b345_3 && b346_15 && b347_15 && b348_4 && b349_33 && b350_13 && b351_6 && b352_35 && b353_3 && b354_4 && b355_22 && b356_20 && b357_4 && b358_10 && b359_50 && b360_1 && b361_20 && b362_6 && b363_1) {
pattern_id = 2433;
}
if(b340_9 && b341_2 && b342_57 && b343_10 && b344_26 && b345_34 && b346_35 && b347_28 && b348_11 && b349_56 && b350_19 && b351_24 && b352_6 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2434;
}
if(b326_20 && b327_4 && b328_16 && b329_1 && b330_18 && b331_22 && b332_22 && b333_31 && b334_33 && b335_28 && b336_28 && b337_41 && b338_40 && b339_12 && b340_2 && b341_7 && b342_4 && b343_25 && b344_54 && b345_66 && b346_20 && b347_9 && b348_34 && b349_56 && b350_34 && b351_5 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2435;
}
if(b341_11 && b342_1 && b343_13 && b344_7 && b345_50 && b346_22 && b347_28 && b348_26 && b349_3 && b350_36 && b351_7 && b352_70 && b353_37 && b354_15 && b355_4 && b356_31 && b357_1 && b358_44 && b359_20 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2436;
}
if(b341_11 && b342_1 && b343_13 && b344_7 && b345_62 && b346_20 && b347_31 && b348_38 && b349_48 && b350_54 && b351_65 && b352_23 && b353_48 && b354_15 && b355_4 && b356_31 && b357_1 && b358_19 && b359_21 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2437;
}
if(b340_9 && b341_2 && b342_57 && b343_10 && b344_19 && b345_31 && b346_20 && b347_18 && b348_11 && b349_39 && b350_5 && b351_43 && b352_21 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2438;
}
if(b340_9 && b341_2 && b342_57 && b343_10 && b344_35 && b345_31 && b346_46 && b347_5 && b348_29 && b349_31 && b350_56 && b351_45 && b352_4 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2439;
}
if(b331_9 && b332_3 && b333_6 && b334_8 && b335_31 && b336_33 && b337_33 && b338_22 && b339_16 && b340_33 && b341_19 && b342_37 && b343_25 && b344_7 && b345_1 && b346_57 && b347_6 && b348_25 && b349_3 && b350_49 && b351_7 && b352_45 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2440;
}
if(b333_2 && b334_1 && b335_15 && b336_7 && b337_41 && b338_22 && b339_25 && b340_42 && b341_35 && b342_5 && b343_26 && b344_5 && b345_21 && b346_9 && b347_3 && b348_14 && b349_7 && b350_4 && b351_34 && b352_36 && b353_53 && b354_15 && b355_4 && b356_31 && b357_1 && b358_7 && b359_26 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2441;
}
if(b331_9 && b332_3 && b333_6 && b334_8 && b335_35 && b336_33 && b337_41 && b338_29 && b339_17 && b340_16 && b341_2 && b342_20 && b343_12 && b344_7 && b345_1 && b346_57 && b347_6 && b348_29 && b349_3 && b350_12 && b351_5 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2442;
}
if(b341_11 && b342_1 && b343_13 && b344_7 && b345_39 && b346_30 && b347_22 && b348_35 && b349_25 && b350_34 && b351_42 && b352_4 && b353_6 && b354_15 && b355_4 && b356_31 && b357_1 && b358_9 && b359_57 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2443;
}
if(b328_12 && b329_8 && b330_29 && b331_4 && b332_3 && b333_1 && b334_5 && b335_5 && b336_1 && b337_6 && b338_2 && b339_14 && b340_6 && b341_16 && b342_46 && b343_6 && b344_4 && b345_12 && b346_7 && b347_3 && b348_1 && b349_9 && b350_7 && b351_17 && b352_5 && b353_19 && b354_11 && b355_23 && b356_41 && b357_15 && b358_37 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2444;
}
if(b355_23 && b356_4 && b357_14 && b358_28 && b359_11 && b360_1 && b361_13 && b362_40 && b363_4) {
pattern_id = 2445;
}
if(b357_1 && b358_4 && b359_9 && b360_3 && b361_30 && b362_56 && b363_25) {
pattern_id = 2446;
}
if(b348_10 && b349_1 && b350_16 && b351_2 && b352_20 && b353_9 && b354_6 && b355_15 && b356_34 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 2447;
}
if(b330_4 && b331_1 && b332_17 && b333_2 && b334_15 && b335_40 && b336_3 && b337_27 && b338_20 && b339_12 && b340_2 && b341_6 && b342_3 && b343_22 && b344_6 && b345_3 && b346_1 && b347_10 && b348_4 && b349_28 && b350_7 && b351_6 && b352_18 && b353_3 && b354_4 && b355_22 && b356_4 && b357_4 && b358_1 && b359_14 && b360_1 && b361_9 && b362_37 && b363_1) {
pattern_id = 2448;
}
if(b346_9 && b347_3 && b348_31 && b349_7 && b350_9 && b351_21 && b352_4 && b353_37 && b354_6 && b355_23 && b356_4 && b357_14 && b358_28 && b359_33 && b360_28 && b361_17 && b362_15 && b363_29) {
pattern_id = 2449;
}
if(b343_10 && b344_4 && b345_27 && b346_9 && b347_20 && b348_5 && b349_25 && b350_36 && b351_26 && b352_11 && b353_3 && b354_14 && b355_20 && b356_4 && b357_14 && b358_28 && b359_33 && b360_28 && b361_17 && b362_15 && b363_29) {
pattern_id = 2450;
}
if(b344_7 && b345_1 && b346_18 && b347_6 && b348_37 && b349_7 && b350_13 && b351_30 && b352_11 && b353_38 && b354_5 && b355_1 && b356_14 && b357_15 && b358_46 && b359_6 && b360_16 && b361_4 && b362_5 && b363_7) {
pattern_id = 2451;
}
if(b358_28 && b359_14 && b360_22 && b361_34 && b362_3 && b363_28) {
pattern_id = 2452;
}
if(b351_2 && b352_7 && b353_36 && b354_15 && b355_8 && b356_41 && b357_15 && b358_53 && b359_45 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 2453;
}
if(b335_4 && b336_1 && b337_14 && b338_4 && b339_20 && b340_35 && b341_48 && b342_27 && b343_47 && b344_34 && b345_45 && b346_9 && b347_57 && b348_31 && b349_7 && b350_3 && b351_21 && b352_23 && b353_10 && b354_15 && b355_37 && b356_13 && b357_1 && b358_50 && b359_48 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 2454;
}
if(b329_1 && b330_1 && b331_13 && b332_7 && b333_20 && b334_3 && b335_28 && b336_3 && b337_36 && b338_20 && b339_14 && b340_7 && b341_9 && b342_9 && b343_10 && b344_4 && b345_25 && b346_9 && b347_44 && b348_41 && b349_39 && b350_41 && b351_7 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2455;
}
if(b330_4 && b331_1 && b332_17 && b333_2 && b334_3 && b335_41 && b336_30 && b337_41 && b338_44 && b339_48 && b340_40 && b341_28 && b342_20 && b343_22 && b344_7 && b345_1 && b346_57 && b347_6 && b348_38 && b349_25 && b350_54 && b351_28 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_42 && b358_19 && b359_59 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2456;
}
if(b343_10 && b344_4 && b345_27 && b346_9 && b347_26 && b348_11 && b349_34 && b350_19 && b351_2 && b352_7 && b353_36 && b354_15 && b355_40 && b356_15 && b357_35 && b358_11 && b359_13 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 2457;
}
if(b340_9 && b341_2 && b342_2 && b343_10 && b344_2 && b345_22 && b346_31 && b347_31 && b348_34 && b349_27 && b350_5 && b351_29 && b352_25 && b353_49 && b354_15 && b355_4 && b356_31 && b357_1 && b358_16 && b359_21 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2458;
}
if(b330_4 && b331_1 && b332_17 && b333_2 && b334_35 && b335_20 && b336_15 && b337_40 && b338_5 && b339_10 && b340_14 && b341_15 && b342_31 && b343_8 && b344_7 && b345_1 && b346_57 && b347_6 && b348_59 && b349_39 && b350_4 && b351_17 && b352_2 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2459;
}
if(b328_12 && b329_8 && b330_29 && b331_9 && b332_19 && b333_25 && b334_35 && b335_31 && b336_15 && b337_25 && b338_32 && b339_18 && b340_36 && b341_46 && b342_4 && b343_1 && b344_16 && b345_11 && b346_31 && b347_47 && b348_38 && b349_29 && b350_22 && b351_35 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2460;
}
if(b339_12 && b340_2 && b341_6 && b342_4 && b343_8 && b344_26 && b345_30 && b346_42 && b347_33 && b348_11 && b349_35 && b350_36 && b351_7 && b352_41 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2461;
}
if(b333_2 && b334_1 && b335_19 && b336_7 && b337_26 && b338_34 && b339_16 && b340_25 && b341_35 && b342_19 && b343_39 && b344_44 && b345_17 && b346_10 && b347_6 && b348_1 && b349_33 && b350_1 && b351_23 && b352_1 && b353_46 && b354_15 && b355_4 && b356_31 && b357_1 && b358_44 && b359_16 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2462;
}
if(b339_12 && b340_2 && b341_6 && b342_4 && b343_8 && b344_8 && b345_10 && b346_42 && b347_26 && b348_39 && b349_34 && b350_36 && b351_34 && b352_41 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2463;
}
if(b351_2 && b352_7 && b353_26 && b354_4 && b355_30 && b356_4 && b357_4 && b358_4 && b359_50 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2464;
}
if(b360_3 && b361_1 && b362_37 && b363_1) {
pattern_id = 2465;
}
if(b319_3 && b320_4 && b321_9 && b322_3 && b323_14 && b324_6 && b325_3 && b326_16 && b327_6 && b328_15 && b329_8 && b330_8 && b331_1 && b332_12 && b333_2 && b334_11 && b335_4 && b336_1 && b337_9 && b338_1 && b339_4 && b340_2 && b341_1 && b342_1 && b343_23 && b344_7 && b345_7 && b346_9 && b347_3 && b348_32 && b349_9 && b350_10 && b351_17 && b352_5 && b353_3 && b354_18 && b355_23 && b356_26 && b357_1 && b358_4 && b359_4 && b360_1 && b361_29 && b362_1 && b363_1) {
pattern_id = 2466;
}
if(b328_12 && b329_8 && b330_10 && b331_9 && b332_41 && b333_3 && b334_34 && b335_31 && b336_15 && b337_20 && b338_48 && b339_22 && b340_8 && b341_23 && b342_25 && b343_10 && b344_4 && b345_25 && b346_9 && b347_18 && b348_26 && b349_35 && b350_28 && b351_65 && b352_23 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2467;
}
if(b272_8 && b273_2 && b274_19 && b275_4 && b276_19 && b277_3 && b278_3 && b279_3 && b280_3 && b281_23 && b282_4 && b283_10 && b284_3 && b285_4 && b286_26 && b287_2 && b288_3 && b289_20 && b290_3 && b291_22 && b292_3 && b293_7 && b294_6 && b295_2 && b296_27 && b297_2 && b298_2 && b299_7 && b300_4 && b301_7 && b302_3 && b303_7 && b304_4 && b305_2 && b306_30 && b307_4 && b308_4 && b309_10 && b310_3 && b311_21 && b312_4 && b313_4 && b314_3 && b315_4 && b316_1 && b317_2 && b318_7 && b319_2 && b320_3 && b321_25 && b322_3 && b323_4 && b324_4 && b325_2 && b326_16 && b327_3 && b328_9 && b329_8 && b330_8 && b331_1 && b332_16 && b333_2 && b334_33 && b335_4 && b336_1 && b337_1 && b338_4 && b339_24 && b340_9 && b341_2 && b342_1 && b343_10 && b344_13 && b345_11 && b346_1 && b347_3 && b348_10 && b349_44 && b350_1 && b351_17 && b352_7 && b353_11 && b354_3 && b355_23 && b356_4 && b357_23 && b358_28 && b359_17 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2468;
}
if(b326_20 && b327_4 && b328_13 && b329_1 && b330_21 && b331_28 && b332_35 && b333_30 && b334_34 && b335_27 && b336_27 && b337_36 && b338_22 && b339_17 && b340_33 && b341_11 && b342_1 && b343_4 && b344_7 && b345_35 && b346_29 && b347_18 && b348_17 && b349_34 && b350_8 && b351_29 && b352_25 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2469;
}
if(b297_2 && b298_2 && b299_25 && b300_2 && b301_16 && b302_24 && b303_6 && b304_28 && b305_10 && b306_3 && b307_17 && b308_14 && b309_3 && b310_29 && b311_34 && b312_3 && b313_34 && b314_5 && b315_3 && b316_44 && b317_28 && b318_4 && b319_42 && b320_19 && b321_3 && b322_36 && b323_4 && b324_5 && b325_46 && b326_6 && b327_6 && b328_52 && b329_7 && b330_8 && b331_40 && b332_17 && b333_5 && b334_17 && b335_9 && b336_2 && b337_9 && b338_11 && b339_2 && b340_16 && b341_5 && b342_3 && b343_22 && b344_12 && b345_3 && b346_13 && b347_8 && b348_4 && b349_41 && b350_7 && b351_6 && b352_64 && b353_16 && b354_4 && b355_37 && b356_39 && b357_4 && b358_10 && b359_22 && b360_1 && b361_24 && b362_7 && b363_1) {
pattern_id = 2470;
}
if(b297_2 && b298_2 && b299_25 && b300_2 && b301_16 && b302_24 && b303_6 && b304_28 && b305_10 && b306_3 && b307_17 && b308_14 && b309_3 && b310_29 && b311_10 && b312_3 && b313_34 && b314_3 && b315_3 && b316_44 && b317_28 && b318_4 && b319_42 && b320_5 && b321_3 && b322_6 && b323_12 && b324_5 && b325_46 && b326_45 && b327_6 && b328_52 && b329_5 && b330_8 && b331_33 && b332_12 && b333_5 && b334_59 && b335_9 && b336_2 && b337_10 && b338_17 && b339_2 && b340_10 && b341_4 && b342_3 && b343_16 && b344_15 && b345_3 && b346_61 && b347_59 && b348_4 && b349_72 && b350_16 && b351_6 && b352_64 && b353_36 && b354_4 && b355_41 && b356_22 && b357_4 && b358_22 && b359_36 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 2471;
}
if(b337_7 && b338_2 && b339_26 && b340_9 && b341_19 && b342_5 && b343_40 && b344_21 && b345_31 && b346_46 && b347_34 && b348_24 && b349_50 && b350_22 && b351_38 && b352_23 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2472;
}
if(b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_50 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2473;
}
if(b345_11 && b346_1 && b347_38 && b348_4 && b349_1 && b350_16 && b351_6 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_74 && b359_21 && b360_10 && b361_33 && b362_9 && b363_48) {
pattern_id = 2474;
}
if(b261_6 && b262_4 && b263_8 && b264_7 && b265_7 && b266_8 && b267_3 && b268_8 && b269_10 && b270_8 && b271_8 && b272_1 && b273_8 && b274_11 && b275_2 && b276_8 && b277_10 && b278_11 && b279_12 && b280_14 && b281_11 && b282_11 && b283_10 && b284_13 && b285_4 && b286_4 && b287_15 && b288_17 && b289_16 && b290_16 && b291_18 && b292_13 && b293_17 && b294_17 && b295_14 && b296_15 && b297_14 && b298_3 && b299_10 && b300_17 && b301_15 && b302_15 && b303_20 && b304_8 && b305_21 && b306_17 && b307_1 && b308_24 && b309_22 && b310_20 && b311_20 && b312_3 && b313_24 && b314_4 && b315_19 && b316_24 && b317_2 && b318_33 && b319_35 && b320_4 && b321_7 && b322_4 && b323_10 && b324_5 && b325_3 && b326_15 && b327_3 && b328_46 && b329_32 && b330_33 && b331_5 && b332_2 && b333_20 && b334_22 && b335_36 && b336_15 && b337_47 && b338_58 && b339_2 && b340_31 && b341_19 && b342_5 && b343_8 && b344_34 && b345_11 && b346_1 && b347_38 && b348_4 && b349_1 && b350_16 && b351_2 && b352_27 && b353_10 && b354_3 && b355_11 && b356_35 && b357_14 && b358_12 && b359_13 && b360_30 && b361_39 && b362_73 && b363_4) {
pattern_id = 2475;
}
if(b193_2 && b194_7 && b195_8 && b196_5 && b197_2 && b198_8 && b199_3 && b200_7 && b201_8 && b202_8 && b203_9 && b204_10 && b205_10 && b206_9 && b207_2 && b208_11 && b209_6 && b210_10 && b211_5 && b212_9 && b213_10 && b214_2 && b215_7 && b216_9 && b217_11 && b218_1 && b219_13 && b220_12 && b221_11 && b222_3 && b223_1 && b224_10 && b225_2 && b226_4 && b227_11 && b228_4 && b229_11 && b230_10 && b231_4 && b232_12 && b233_13 && b234_8 && b235_13 && b236_11 && b237_11 && b238_5 && b239_2 && b240_14 && b241_11 && b242_14 && b243_11 && b244_11 && b245_5 && b246_12 && b247_11 && b248_13 && b249_15 && b250_12 && b251_13 && b252_12 && b253_13 && b254_6 && b255_9 && b256_9 && b257_4 && b258_10 && b259_9 && b260_3 && b261_9 && b262_1 && b263_12 && b264_10 && b265_9 && b266_8 && b267_10 && b268_1 && b269_13 && b270_12 && b271_12 && b272_2 && b273_10 && b274_15 && b275_13 && b276_11 && b277_9 && b278_15 && b279_13 && b280_17 && b281_16 && b282_15 && b283_10 && b284_2 && b285_17 && b286_18 && b287_17 && b288_8 && b289_1 && b290_6 && b291_20 && b292_18 && b293_8 && b294_19 && b295_16 && b296_18 && b297_18 && b298_9 && b299_21 && b300_4 && b301_19 && b302_17 && b303_2 && b304_9 && b305_12 && b306_22 && b307_26 && b308_26 && b309_11 && b310_3 && b311_25 && b312_20 && b313_7 && b314_2 && b315_32 && b316_37 && b317_29 && b318_38 && b319_34 && b320_20 && b321_5 && b322_39 && b323_2 && b324_41 && b325_17 && b326_38 && b327_42 && b328_2 && b329_25 && b330_46 && b331_1 && b332_6 && b333_1 && b334_1 && b335_16 && b336_1 && b337_5 && b338_1 && b339_39 && b340_8 && b341_35 && b342_27 && b343_54 && b344_8 && b345_38 && b346_32 && b347_4 && b348_32 && b349_59 && b350_7 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2476;
}
if(b232_3 && b233_9 && b234_11 && b235_4 && b236_2 && b237_3 && b238_2 && b239_10 && b240_10 && b241_8 && b242_10 && b243_7 && b244_8 && b245_9 && b246_7 && b247_8 && b248_8 && b249_10 && b250_1 && b251_9 && b252_9 && b253_9 && b254_9 && b255_11 && b256_11 && b257_3 && b258_12 && b259_10 && b260_10 && b261_2 && b262_3 && b263_13 && b264_12 && b265_10 && b266_11 && b267_12 && b268_11 && b269_15 && b270_13 && b271_7 && b272_10 && b273_12 && b274_10 && b275_2 && b276_14 && b277_3 && b278_16 && b279_18 && b280_3 && b281_15 && b282_9 && b283_4 && b284_8 && b285_11 && b286_11 && b287_11 && b288_13 && b289_3 && b290_13 && b291_15 && b292_2 && b293_23 && b294_14 && b295_11 && b296_6 && b297_5 && b298_13 && b299_3 && b300_2 && b301_17 && b302_5 && b303_28 && b304_18 && b305_25 && b306_12 && b307_19 && b308_19 && b309_4 && b310_4 && b311_29 && b312_22 && b313_29 && b314_14 && b315_16 && b316_12 && b317_21 && b318_31 && b319_23 && b320_41 && b321_43 && b322_9 && b323_40 && b324_16 && b325_15 && b326_42 && b327_9 && b328_18 && b329_14 && b330_1 && b331_1 && b332_18 && b333_7 && b334_7 && b335_5 && b336_52 && b337_6 && b338_17 && b339_27 && b340_36 && b341_8 && b342_52 && b343_48 && b344_67 && b345_23 && b346_13 && b347_55 && b348_67 && b349_19 && b350_61 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2477;
}
if(b329_1 && b330_1 && b331_8 && b332_1 && b333_1 && b334_15 && b335_4 && b336_32 && b337_43 && b338_27 && b339_16 && b340_44 && b341_11 && b342_1 && b343_43 && b344_1 && b345_1 && b346_18 && b347_1 && b348_6 && b349_6 && b350_3 && b351_3 && b352_28 && b353_12 && b354_11 && b355_58 && b356_11 && b357_25 && b358_31 && b359_11 && b360_42 && b361_43 && b362_5 && b363_58) {
pattern_id = 2478;
}
if(b347_6 && b348_1 && b349_30 && b350_3 && b351_17 && b352_20 && b353_11 && b354_20 && b355_44 && b356_29 && b357_17 && b358_18 && b359_38 && b360_19 && b361_39 && b362_9 && b363_78) {
pattern_id = 2479;
}
if(b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_1 && b358_7 && b359_57 && b360_13 && b361_19 && b362_73 && b363_4) {
pattern_id = 2480;
}
if(b327_3 && b328_9 && b329_49 && b330_4 && b331_30 && b332_26 && b333_25 && b334_35 && b335_42 && b336_44 && b337_3 && b338_41 && b339_18 && b340_3 && b341_8 && b342_10 && b343_8 && b344_7 && b345_1 && b346_58 && b347_6 && b348_42 && b349_3 && b350_22 && b351_24 && b352_29 && b353_10 && b354_15 && b355_4 && b356_31 && b357_1 && b358_11 && b359_55 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2481;
}
if(b327_3 && b328_9 && b329_49 && b330_4 && b331_48 && b332_35 && b333_30 && b334_37 && b335_28 && b336_3 && b337_26 && b338_29 && b339_29 && b340_16 && b341_2 && b342_20 && b343_1 && b344_7 && b345_1 && b346_57 && b347_6 && b348_38 && b349_25 && b350_54 && b351_28 && b352_22 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2482;
}
if(b330_4 && b331_1 && b332_10 && b333_2 && b334_27 && b335_24 && b336_18 && b337_36 && b338_44 && b339_25 && b340_36 && b341_24 && b342_19 && b343_3 && b344_5 && b345_48 && b346_46 && b347_33 && b348_10 && b349_1 && b350_15 && b351_2 && b352_45 && b353_37 && b354_15 && b355_4 && b356_31 && b357_1 && b358_16 && b359_56 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2483;
}
if(b325_2 && b326_12 && b327_5 && b328_12 && b329_36 && b330_7 && b331_41 && b332_38 && b333_45 && b334_14 && b335_31 && b336_49 && b337_48 && b338_6 && b339_8 && b340_22 && b341_57 && b342_25 && b343_10 && b344_4 && b345_27 && b346_9 && b347_9 && b348_48 && b349_25 && b350_57 && b351_24 && b352_49 && b353_32 && b354_12 && b355_16 && b356_7 && b357_1 && b358_4 && b359_34 && b360_3 && b361_44 && b362_9 && b363_6) {
pattern_id = 2484;
}
if(b330_4 && b331_1 && b332_10 && b333_2 && b334_3 && b335_41 && b336_36 && b337_3 && b338_41 && b339_37 && b340_50 && b341_8 && b342_5 && b343_3 && b344_2 && b345_17 && b346_10 && b347_33 && b348_10 && b349_1 && b350_15 && b351_2 && b352_45 && b353_37 && b354_15 && b355_4 && b356_31 && b357_1 && b358_16 && b359_56 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2485;
}
if(b336_7 && b337_1 && b338_13 && b339_12 && b340_27 && b341_30 && b342_19 && b343_47 && b344_5 && b345_55 && b346_21 && b347_28 && b348_11 && b349_48 && b350_28 && b351_7 && b352_6 && b353_49 && b354_15 && b355_4 && b356_31 && b357_1 && b358_9 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2486;
}
if(b334_8 && b335_5 && b336_8 && b337_6 && b338_2 && b339_1 && b340_6 && b341_2 && b342_1 && b343_6 && b344_4 && b345_1 && b346_7 && b347_3 && b348_50 && b349_7 && b350_4 && b351_43 && b352_4 && b353_23 && b354_4 && b355_49 && b356_10 && b357_6 && b358_51 && b359_24 && b360_19 && b361_41 && b362_9 && b363_22) {
pattern_id = 2487;
}
if(b333_2 && b334_1 && b335_9 && b336_7 && b337_53 && b338_48 && b339_56 && b340_38 && b341_34 && b342_39 && b343_15 && b344_13 && b345_4 && b346_46 && b347_22 && b348_34 && b349_63 && b350_64 && b351_37 && b352_11 && b353_3 && b354_69 && b355_23 && b356_29 && b357_3 && b358_3 && b359_3 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2488;
}
if(b334_8 && b335_5 && b336_8 && b337_7 && b338_38 && b339_36 && b340_35 && b341_24 && b342_31 && b343_28 && b344_41 && b345_17 && b346_35 && b347_31 && b348_5 && b349_34 && b350_36 && b351_23 && b352_1 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2489;
}
if(b357_1 && b358_39 && b359_14 && b360_1 && b361_1 && b362_30 && b363_1) {
pattern_id = 2490;
}
if(b315_4 && b316_4 && b317_4 && b318_4 && b319_4 && b320_6 && b321_3 && b322_5 && b323_6 && b324_5 && b325_7 && b326_10 && b327_6 && b328_3 && b329_11 && b330_8 && b331_12 && b332_14 && b333_5 && b334_14 && b335_7 && b336_2 && b337_5 && b338_16 && b339_2 && b340_14 && b341_16 && b342_3 && b343_7 && b344_14 && b345_3 && b346_17 && b347_10 && b348_4 && b349_13 && b350_20 && b351_6 && b352_2 && b353_13 && b354_4 && b355_30 && b356_37 && b357_4 && b358_39 && b359_22 && b360_1 && b361_37 && b362_45 && b363_1) {
pattern_id = 2491;
}
if(b333_2 && b334_14 && b335_5 && b336_7 && b337_44 && b338_22 && b339_28 && b340_19 && b341_64 && b342_19 && b343_53 && b344_29 && b345_50 && b346_21 && b347_9 && b348_23 && b349_48 && b350_43 && b351_29 && b352_62 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2492;
}
if(b333_2 && b334_14 && b335_5 && b336_7 && b337_41 && b338_39 && b339_24 && b340_49 && b341_48 && b342_37 && b343_19 && b344_21 && b345_48 && b346_46 && b347_42 && b348_11 && b349_36 && b350_12 && b351_5 && b352_1 && b353_11 && b354_11 && b355_37 && b356_18 && b357_42 && b358_19 && b359_59 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2493;
}
if(b333_2 && b334_14 && b335_5 && b336_7 && b337_23 && b338_44 && b339_37 && b340_39 && b341_23 && b342_37 && b343_41 && b344_5 && b345_10 && b346_3 && b347_22 && b348_41 && b349_35 && b350_24 && b351_35 && b352_46 && b353_11 && b354_11 && b355_37 && b356_18 && b357_15 && b358_9 && b359_40 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2494;
}
if(b324_6 && b325_7 && b326_6 && b327_3 && b328_24 && b329_36 && b330_38 && b331_19 && b332_28 && b333_24 && b334_31 && b335_35 && b336_15 && b337_30 && b338_29 && b339_29 && b340_30 && b341_28 && b342_39 && b343_24 && b344_13 && b345_11 && b346_1 && b347_25 && b348_10 && b349_17 && b350_36 && b351_34 && b352_4 && b353_11 && b354_11 && b355_37 && b356_18 && b357_10 && b358_37 && b359_42 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2495;
}
if(b327_3 && b328_3 && b329_3 && b330_4 && b331_7 && b332_2 && b333_29 && b334_26 && b335_20 && b336_20 && b337_47 && b338_38 && b339_18 && b340_36 && b341_46 && b342_37 && b343_3 && b344_16 && b345_9 && b346_13 && b347_12 && b348_10 && b349_1 && b350_15 && b351_2 && b352_45 && b353_7 && b354_15 && b355_4 && b356_31 && b357_1 && b358_16 && b359_56 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2496;
}
if(b335_4 && b336_35 && b337_9 && b338_4 && b339_17 && b340_33 && b341_34 && b342_5 && b343_24 && b344_67 && b345_2 && b346_20 && b347_50 && b348_26 && b349_44 && b350_8 && b351_34 && b352_29 && b353_30 && b354_46 && b355_30 && b356_69 && b357_1 && b358_4 && b359_34 && b360_3 && b361_52 && b362_15 && b363_51) {
pattern_id = 2497;
}
if(b322_3 && b323_15 && b324_23 && b325_2 && b326_30 && b327_27 && b328_21 && b329_2 && b330_54 && b331_28 && b332_35 && b333_48 && b334_39 && b335_40 && b336_20 && b337_25 && b338_22 && b339_25 && b340_8 && b341_8 && b342_25 && b343_3 && b344_7 && b345_1 && b346_57 && b347_6 && b348_38 && b349_31 && b350_12 && b351_70 && b352_71 && b353_11 && b354_11 && b355_37 && b356_18 && b357_3 && b358_6 && b359_19 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2498;
}
if(b291_16 && b292_21 && b293_27 && b294_5 && b295_5 && b296_21 && b297_4 && b298_14 && b299_26 && b300_2 && b301_19 && b302_25 && b303_6 && b304_29 && b305_13 && b306_3 && b307_32 && b308_32 && b309_3 && b310_28 && b311_36 && b312_3 && b313_6 && b314_39 && b315_3 && b316_45 && b317_32 && b318_4 && b319_34 && b320_7 && b321_3 && b322_32 && b323_41 && b324_5 && b325_11 && b326_10 && b327_6 && b328_43 && b329_13 && b330_8 && b331_42 && b332_9 && b333_5 && b334_17 && b335_17 && b336_2 && b337_9 && b338_5 && b339_2 && b340_16 && b341_7 && b342_3 && b343_65 && b344_64 && b345_3 && b346_13 && b347_70 && b348_4 && b349_28 && b350_10 && b351_6 && b352_35 && b353_61 && b354_4 && b355_37 && b356_23 && b357_4 && b358_10 && b359_1 && b360_1 && b361_73 && b362_34 && b363_1) {
pattern_id = 2499;
}
if(b315_4 && b316_4 && b317_9 && b318_4 && b319_5 && b320_4 && b321_3 && b322_5 && b323_3 && b324_5 && b325_10 && b326_17 && b327_6 && b328_3 && b329_15 && b330_8 && b331_3 && b332_3 && b333_5 && b334_14 && b335_6 && b336_2 && b337_14 && b338_7 && b339_2 && b340_14 && b341_10 && b342_3 && b343_14 && b344_4 && b345_3 && b346_17 && b347_20 && b348_4 && b349_4 && b350_38 && b351_6 && b352_2 && b353_42 && b354_4 && b355_31 && b356_4 && b357_4 && b358_39 && b359_48 && b360_1 && b361_4 && b362_32 && b363_1) {
pattern_id = 2500;
}
if(b360_3 && b361_37 && b362_21 && b363_1) {
pattern_id = 2501;
}
if(b341_11 && b342_20 && b343_5 && b344_7 && b345_54 && b346_20 && b347_34 && b348_21 && b349_25 && b350_34 && b351_21 && b352_23 && b353_27 && b354_6 && b355_20 && b356_36 && b357_9 && b358_37 && b359_19 && b360_10 && b361_52 && b362_15 && b363_25) {
pattern_id = 2502;
}
if(b309_4 && b310_30 && b311_35 && b312_3 && b313_4 && b314_25 && b315_3 && b316_4 && b317_37 && b318_4 && b319_4 && b320_29 && b321_3 && b322_4 && b323_42 && b324_5 && b325_3 && b326_21 && b327_6 && b328_3 && b329_11 && b330_8 && b331_1 && b332_4 && b333_5 && b334_40 && b335_17 && b336_2 && b337_57 && b338_55 && b339_2 && b340_53 && b341_58 && b342_3 && b343_44 && b344_64 && b345_3 && b346_58 && b347_70 && b348_4 && b349_1 && b350_10 && b351_6 && b352_7 && b353_13 && b354_4 && b355_70 && b356_64 && b357_4 && b358_36 && b359_41 && b360_1 && b361_73 && b362_32 && b363_1) {
pattern_id = 2503;
}
if(b354_15 && b355_30 && b356_64 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2504;
}
if(b345_11 && b346_17 && b347_51 && b348_4 && b349_1 && b350_13 && b351_6 && b352_7 && b353_22 && b354_4 && b355_4 && b356_4 && b357_4 && b358_33 && b359_18 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2505;
}
if(b354_15 && b355_30 && b356_64 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2506;
}
if(b354_15 && b355_30 && b356_64 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2507;
}
if(b354_15 && b355_30 && b356_64 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_21 && b363_1) {
pattern_id = 2508;
}
if(b357_1 && b358_39 && b359_41 && b360_1 && b361_1 && b362_21 && b363_1) {
pattern_id = 2509;
}
if(b354_15 && b355_30 && b356_48 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2510;
}
if(b354_15 && b355_30 && b356_48 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2511;
}
if(b354_15 && b355_30 && b356_48 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2512;
}
if(b354_15 && b355_30 && b356_48 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_21 && b363_1) {
pattern_id = 2513;
}
if(b303_2 && b304_28 && b305_30 && b306_3 && b307_3 && b308_31 && b309_3 && b310_30 && b311_33 && b312_3 && b313_35 && b314_30 && b315_3 && b316_28 && b317_41 && b318_4 && b319_2 && b320_19 && b321_3 && b322_5 && b323_9 && b324_5 && b325_7 && b326_10 && b327_6 && b328_3 && b329_13 && b330_8 && b331_51 && b332_32 && b333_5 && b334_14 && b335_2 && b336_2 && b337_1 && b338_5 && b339_2 && b340_14 && b341_9 && b342_3 && b343_7 && b344_45 && b345_3 && b346_1 && b347_15 && b348_4 && b349_13 && b350_75 && b351_6 && b352_2 && b353_42 && b354_4 && b355_17 && b356_20 && b357_4 && b358_22 && b359_51 && b360_1 && b361_36 && b362_46 && b363_1) {
pattern_id = 2514;
}
if(b309_4 && b310_30 && b311_32 && b312_3 && b313_4 && b314_41 && b315_3 && b316_4 && b317_37 && b318_4 && b319_4 && b320_33 && b321_3 && b322_33 && b323_41 && b324_5 && b325_3 && b326_5 && b327_6 && b328_3 && b329_15 && b330_8 && b331_12 && b332_13 && b333_5 && b334_14 && b335_17 && b336_2 && b337_58 && b338_16 && b339_2 && b340_14 && b341_47 && b342_3 && b343_1 && b344_45 && b345_3 && b346_17 && b347_51 && b348_4 && b349_13 && b350_15 && b351_6 && b352_7 && b353_21 && b354_4 && b355_30 && b356_69 && b357_4 && b358_39 && b359_34 && b360_1 && b361_40 && b362_31 && b363_1) {
pattern_id = 2515;
}
if(b354_15 && b355_30 && b356_20 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2516;
}
if(b354_15 && b355_30 && b356_20 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2517;
}
if(b339_12 && b340_14 && b341_16 && b342_3 && b343_1 && b344_22 && b345_3 && b346_1 && b347_15 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_42 && b354_4 && b355_4 && b356_42 && b357_4 && b358_22 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2518;
}
if(b354_15 && b355_30 && b356_20 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2519;
}
if(b348_10 && b349_13 && b350_10 && b351_6 && b352_7 && b353_42 && b354_4 && b355_4 && b356_23 && b357_4 && b358_4 && b359_14 && b360_1 && b361_36 && b362_1 && b363_1) {
pattern_id = 2520;
}
if(b354_15 && b355_30 && b356_20 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_21 && b363_1) {
pattern_id = 2521;
}
if(b345_11 && b346_17 && b347_12 && b348_4 && b349_13 && b350_64 && b351_6 && b352_28 && b353_18 && b354_4 && b355_21 && b356_26 && b357_4 && b358_42 && b359_32 && b360_1 && b361_38 && b362_34 && b363_1) {
pattern_id = 2522;
}
if(b345_11 && b346_17 && b347_16 && b348_4 && b349_13 && b350_64 && b351_6 && b352_28 && b353_18 && b354_4 && b355_21 && b356_26 && b357_4 && b358_42 && b359_32 && b360_1 && b361_38 && b362_34 && b363_1) {
pattern_id = 2523;
}
if(b339_12 && b340_16 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_18 && b353_26 && b354_4 && b355_19 && b356_24 && b357_4 && b358_22 && b359_36 && b360_1 && b361_6 && b362_13 && b363_1) {
pattern_id = 2524;
}
if(b348_10 && b349_28 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_4 && b362_3 && b363_1) {
pattern_id = 2525;
}
if(b279_12 && b280_6 && b281_3 && b282_11 && b283_10 && b284_3 && b285_12 && b286_5 && b287_3 && b288_5 && b289_20 && b290_2 && b291_4 && b292_27 && b293_17 && b294_5 && b295_15 && b296_8 && b297_4 && b298_2 && b299_18 && b300_2 && b301_29 && b302_25 && b303_6 && b304_18 && b305_3 && b306_3 && b307_17 && b308_4 && b309_3 && b310_36 && b311_33 && b312_3 && b313_4 && b314_11 && b315_3 && b316_26 && b317_8 && b318_4 && b319_43 && b320_7 && b321_3 && b322_20 && b323_45 && b324_5 && b325_13 && b326_5 && b327_6 && b328_43 && b329_7 && b330_8 && b331_17 && b332_6 && b333_5 && b334_12 && b335_7 && b336_2 && b337_11 && b338_16 && b339_2 && b340_53 && b341_13 && b342_3 && b343_13 && b344_3 && b345_3 && b346_14 && b347_20 && b348_4 && b349_30 && b350_16 && b351_6 && b352_28 && b353_34 && b354_4 && b355_58 && b356_26 && b357_4 && b358_4 && b359_61 && b360_1 && b361_20 && b362_22 && b363_1) {
pattern_id = 2526;
}
if(b351_2 && b352_18 && b353_3 && b354_15 && b355_65 && b356_45 && b357_1 && b358_10 && b359_9 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 2527;
}
if(b344_7 && b345_9 && b346_17 && b347_1 && b348_32 && b349_4 && b350_3 && b351_36 && b352_7 && b353_11 && b354_26 && b355_31 && b356_13 && b357_58 && b358_62 && b359_22 && b360_37 && b361_13 && b362_10 && b363_9) {
pattern_id = 2528;
}
if(b217_3 && b218_3 && b219_3 && b220_3 && b221_2 && b222_3 && b223_2 && b224_3 && b225_3 && b226_3 && b227_3 && b228_3 && b229_3 && b230_3 && b231_3 && b232_3 && b233_3 && b234_4 && b235_4 && b236_4 && b237_3 && b238_2 && b239_4 && b240_4 && b241_1 && b242_4 && b243_4 && b244_4 && b245_4 && b246_3 && b247_4 && b248_4 && b249_4 && b250_4 && b251_5 && b252_2 && b253_4 && b254_6 && b255_6 && b256_6 && b257_6 && b258_2 && b259_6 && b260_7 && b261_6 && b262_8 && b263_7 && b264_6 && b265_6 && b266_7 && b267_6 && b268_7 && b269_8 && b270_7 && b271_7 && b272_4 && b273_7 && b274_10 && b275_1 && b276_3 && b277_11 && b278_10 && b279_12 && b280_13 && b281_2 && b282_10 && b283_9 && b284_6 && b285_13 && b286_6 && b287_13 && b288_15 && b289_2 && b290_15 && b291_16 && b292_12 && b293_6 && b294_3 && b295_12 && b296_6 && b297_13 && b298_14 && b299_3 && b300_15 && b301_8 && b302_6 && b303_18 && b304_5 && b305_21 && b306_12 && b307_12 && b308_15 && b309_4 && b310_18 && b311_12 && b312_17 && b313_21 && b314_4 && b315_1 && b316_27 && b317_32 && b318_31 && b319_3 && b320_36 && b321_37 && b322_37 && b323_5 && b324_40 && b325_40 && b326_20 && b327_37 && b328_1 && b329_1 && b330_15 && b331_9 && b332_4 && b333_45 && b334_8 && b335_39 && b336_7 && b337_9 && b338_5 && b339_12 && b340_3 && b341_11 && b342_9 && b343_22 && b344_7 && b345_67 && b346_9 && b347_15 && b348_32 && b349_7 && b350_12 && b351_2 && b352_18 && b353_21 && b354_4 && b355_37 && b356_13 && b357_4 && b358_1 && b359_4 && b360_1 && b361_20 && b362_36 && b363_1) {
pattern_id = 2529;
}
if(b317_2 && b318_31 && b319_34 && b320_3 && b321_38 && b322_24 && b323_16 && b324_23 && b325_33 && b326_20 && b327_41 && b328_12 && b329_14 && b330_46 && b331_9 && b332_20 && b333_26 && b334_6 && b335_54 && b336_7 && b337_9 && b338_5 && b339_12 && b340_55 && b341_11 && b342_9 && b343_22 && b344_7 && b345_31 && b346_10 && b347_20 && b348_15 && b349_7 && b350_15 && b351_36 && b352_11 && b353_71 && b354_15 && b355_22 && b356_31 && b357_1 && b358_18 && b359_13 && b360_3 && b361_20 && b362_36 && b363_1) {
pattern_id = 2530;
}
if(b346_9 && b347_15 && b348_50 && b349_7 && b350_44 && b351_28 && b352_40 && b353_49 && b354_41 && b355_2 && b356_14 && b357_18 && b358_40 && b359_62 && b360_2 && b361_12 && b362_2 && b363_47) {
pattern_id = 2531;
}
if(b346_9 && b347_15 && b348_50 && b349_7 && b350_44 && b351_28 && b352_40 && b353_49 && b354_41 && b355_2 && b356_14 && b357_18 && b358_40 && b359_62 && b360_2 && b361_8 && b362_57 && b363_5) {
pattern_id = 2532;
}
if(b346_9 && b347_15 && b348_50 && b349_7 && b350_44 && b351_28 && b352_40 && b353_49 && b354_41 && b355_2 && b356_14 && b357_18 && b358_40 && b359_62 && b360_2 && b361_26 && b362_52 && b363_52) {
pattern_id = 2533;
}
if(b356_18 && b357_53 && b358_10 && b359_6 && b360_26 && b361_26 && b362_2 && b363_6) {
pattern_id = 2534;
}
if(b320_3 && b321_6 && b322_7 && b323_2 && b324_4 && b325_13 && b326_3 && b327_8 && b328_1 && b329_1 && b330_13 && b331_9 && b332_4 && b333_16 && b334_5 && b335_5 && b336_8 && b337_6 && b338_23 && b339_19 && b340_9 && b341_21 && b342_4 && b343_22 && b344_23 && b345_3 && b346_1 && b347_8 && b348_4 && b349_13 && b350_15 && b351_2 && b352_19 && b353_11 && b354_16 && b355_41 && b356_11 && b357_23 && b358_31 && b359_11 && b360_21 && b361_20 && b362_5 && b363_19) {
pattern_id = 2535;
}
if(b338_4 && b339_19 && b340_1 && b341_11 && b342_52 && b343_30 && b344_30 && b345_17 && b346_59 && b347_40 && b348_11 && b349_39 && b350_41 && b351_5 && b352_1 && b353_13 && b354_10 && b355_15 && b356_8 && b357_3 && b358_11 && b359_25 && b360_24 && b361_7 && b362_20 && b363_41) {
pattern_id = 2536;
}
if(b327_3 && b328_1 && b329_34 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_16 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_21 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2537;
}
if(b351_2 && b352_18 && b353_19 && b354_4 && b355_26 && b356_69 && b357_4 && b358_24 && b359_31 && b360_1 && b361_4 && b362_37 && b363_1) {
pattern_id = 2538;
}
if(b347_6 && b348_32 && b349_10 && b350_3 && b351_36 && b352_7 && b353_11 && b354_56 && b355_10 && b356_41 && b357_15 && b358_55 && b359_13 && b360_3 && b361_20 && b362_45 && b363_1) {
pattern_id = 2539;
}
if(b304_5 && b305_13 && b306_7 && b307_5 && b308_16 && b309_2 && b310_4 && b311_6 && b312_7 && b313_7 && b314_22 && b315_4 && b316_6 && b317_8 && b318_5 && b319_7 && b320_29 && b321_30 && b322_4 && b323_16 && b324_3 && b325_5 && b326_20 && b327_32 && b328_12 && b329_15 && b330_29 && b331_9 && b332_49 && b333_14 && b334_49 && b335_4 && b336_31 && b337_4 && b338_4 && b339_52 && b340_53 && b341_9 && b342_1 && b343_10 && b344_22 && b345_54 && b346_9 && b347_28 && b348_10 && b349_33 && b350_16 && b351_2 && b352_7 && b353_18 && b354_15 && b355_22 && b356_26 && b357_4 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2540;
}
if(b360_3 && b361_20 && b362_45 && b363_1) {
pattern_id = 2541;
}
if(b347_6 && b348_32 && b349_6 && b350_1 && b351_50 && b352_4 && b353_27 && b354_46 && b355_15 && b356_50 && b357_1 && b358_1 && b359_22 && b360_3 && b361_39 && b362_57 && b363_6) {
pattern_id = 2542;
}
if(b339_12 && b340_20 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_18 && b353_26 && b354_4 && b355_19 && b356_24 && b357_4 && b358_22 && b359_36 && b360_1 && b361_6 && b362_13 && b363_1) {
pattern_id = 2543;
}
if(b348_10 && b349_33 && b350_10 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_29 && b362_30 && b363_1) {
pattern_id = 2544;
}
if(b339_12 && b340_20 && b341_16 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_9 && b353_61 && b354_4 && b355_30 && b356_23 && b357_4 && b358_24 && b359_32 && b360_1 && b361_9 && b362_21 && b363_1) {
pattern_id = 2545;
}
if(b279_12 && b280_27 && b281_5 && b282_11 && b283_10 && b284_3 && b285_12 && b286_5 && b287_3 && b288_5 && b289_20 && b290_2 && b291_4 && b292_27 && b293_17 && b294_5 && b295_15 && b296_8 && b297_4 && b298_2 && b299_18 && b300_2 && b301_29 && b302_25 && b303_6 && b304_18 && b305_3 && b306_3 && b307_17 && b308_4 && b309_3 && b310_36 && b311_33 && b312_3 && b313_4 && b314_11 && b315_3 && b316_26 && b317_8 && b318_4 && b319_43 && b320_7 && b321_3 && b322_20 && b323_45 && b324_5 && b325_13 && b326_5 && b327_6 && b328_43 && b329_7 && b330_8 && b331_17 && b332_6 && b333_5 && b334_12 && b335_7 && b336_2 && b337_11 && b338_16 && b339_2 && b340_53 && b341_13 && b342_3 && b343_13 && b344_3 && b345_3 && b346_14 && b347_20 && b348_4 && b349_30 && b350_16 && b351_6 && b352_28 && b353_34 && b354_4 && b355_58 && b356_26 && b357_4 && b358_4 && b359_61 && b360_1 && b361_20 && b362_22 && b363_1) {
pattern_id = 2546;
}
if(b291_16 && b292_23 && b293_32 && b294_5 && b295_28 && b296_23 && b297_4 && b298_23 && b299_7 && b300_2 && b301_19 && b302_31 && b303_6 && b304_34 && b305_36 && b306_3 && b307_32 && b308_39 && b309_3 && b310_19 && b311_36 && b312_3 && b313_6 && b314_39 && b315_3 && b316_6 && b317_4 && b318_4 && b319_7 && b320_4 && b321_3 && b322_33 && b323_6 && b324_5 && b325_11 && b326_21 && b327_6 && b328_11 && b329_8 && b330_8 && b331_14 && b332_3 && b333_5 && b334_17 && b335_50 && b336_2 && b337_10 && b338_7 && b339_2 && b340_20 && b341_41 && b342_3 && b343_5 && b344_64 && b345_3 && b346_13 && b347_4 && b348_4 && b349_33 && b350_6 && b351_6 && b352_35 && b353_3 && b354_4 && b355_37 && b356_23 && b357_4 && b358_10 && b359_4 && b360_1 && b361_24 && b362_30 && b363_1) {
pattern_id = 2547;
}
if(b312_4 && b313_6 && b314_5 && b315_3 && b316_6 && b317_8 && b318_4 && b319_7 && b320_10 && b321_3 && b322_6 && b323_7 && b324_5 && b325_11 && b326_15 && b327_6 && b328_11 && b329_9 && b330_8 && b331_14 && b332_17 && b333_5 && b334_17 && b335_19 && b336_2 && b337_1 && b338_2 && b339_2 && b340_20 && b341_6 && b342_3 && b343_5 && b344_15 && b345_3 && b346_13 && b347_10 && b348_4 && b349_33 && b350_16 && b351_6 && b352_35 && b353_36 && b354_4 && b355_37 && b356_13 && b357_4 && b358_10 && b359_9 && b360_1 && b361_24 && b362_22 && b363_1) {
pattern_id = 2548;
}
if(b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 2549;
}
if(b359_6 && b360_5 && b361_4 && b362_5 && b363_28) {
pattern_id = 2550;
}
if(b351_2 && b352_35 && b353_36 && b354_15 && b355_28 && b356_36 && b357_13 && b358_2 && b359_26 && b360_3 && b361_1 && b362_22 && b363_1) {
pattern_id = 2551;
}
if(b331_9 && b332_13 && b333_34 && b334_8 && b335_36 && b336_3 && b337_25 && b338_4 && b339_19 && b340_32 && b341_11 && b342_30 && b343_30 && b344_35 && b345_58 && b346_2 && b347_5 && b348_48 && b349_31 && b350_1 && b351_36 && b352_28 && b353_11 && b354_25 && b355_1 && b356_41 && b357_6 && b358_28 && b359_4 && b360_43 && b361_34 && b362_56 && b363_25) {
pattern_id = 2552;
}
if(b348_10 && b349_33 && b350_20 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_30 && b363_1) {
pattern_id = 2553;
}
if(b331_9 && b332_13 && b333_4 && b334_5 && b335_11 && b336_1 && b337_7 && b338_60 && b339_27 && b340_3 && b341_39 && b342_5 && b343_37 && b344_13 && b345_3 && b346_39 && b347_48 && b348_4 && b349_41 && b350_17 && b351_17 && b352_11 && b353_3 && b354_14 && b355_20 && b356_4 && b357_14 && b358_28 && b359_70 && b360_10 && b361_41 && b362_11 && b363_78) {
pattern_id = 2554;
}
if(b323_16 && b324_3 && b325_5 && b326_3 && b327_37 && b328_9 && b329_1 && b330_16 && b331_28 && b332_34 && b333_28 && b334_34 && b335_41 && b336_37 && b337_44 && b338_53 && b339_30 && b340_24 && b341_23 && b342_56 && b343_30 && b344_35 && b345_50 && b346_56 && b347_22 && b348_34 && b349_27 && b350_8 && b351_45 && b352_25 && b353_43 && b354_54 && b355_15 && b356_36 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2555;
}
if(b326_20 && b327_24 && b328_13 && b329_6 && b330_46 && b331_1 && b332_7 && b333_22 && b334_31 && b335_21 && b336_20 && b337_47 && b338_29 && b339_28 && b340_35 && b341_56 && b342_7 && b343_48 && b344_8 && b345_58 && b346_20 && b347_18 && b348_55 && b349_52 && b350_22 && b351_40 && b352_4 && b353_43 && b354_54 && b355_15 && b356_36 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2556;
}
if(b327_3 && b328_11 && b329_5 && b330_8 && b331_42 && b332_3 && b333_2 && b334_36 && b335_36 && b336_44 && b337_44 && b338_41 && b339_24 && b340_40 && b341_8 && b342_55 && b343_14 && b344_8 && b345_42 && b346_42 && b347_9 && b348_15 && b349_6 && b350_36 && b351_21 && b352_13 && b353_43 && b354_54 && b355_15 && b356_36 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2557;
}
if(b323_16 && b324_3 && b325_5 && b326_3 && b327_37 && b328_9 && b329_1 && b330_16 && b331_28 && b332_34 && b333_28 && b334_34 && b335_41 && b336_37 && b337_44 && b338_53 && b339_53 && b340_24 && b341_27 && b342_24 && b343_28 && b344_30 && b345_55 && b346_34 && b347_22 && b348_23 && b349_31 && b350_8 && b351_20 && b352_6 && b353_43 && b354_54 && b355_15 && b356_36 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2558;
}
if(b324_6 && b325_11 && b326_11 && b327_6 && b328_1 && b329_8 && b330_4 && b331_24 && b332_24 && b333_29 && b334_30 && b335_42 && b336_27 && b337_15 && b338_27 && b339_51 && b340_51 && b341_23 && b342_30 && b343_3 && b344_26 && b345_30 && b346_34 && b347_22 && b348_23 && b349_31 && b350_8 && b351_20 && b352_6 && b353_43 && b354_54 && b355_15 && b356_36 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2559;
}
if(b334_8 && b335_37 && b336_9 && b337_6 && b338_5 && b339_1 && b340_9 && b341_48 && b342_37 && b343_40 && b344_34 && b345_36 && b346_44 && b347_21 && b348_11 && b349_20 && b350_26 && b351_66 && b352_23 && b353_43 && b354_3 && b355_51 && b356_8 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2560;
}
if(b351_2 && b352_35 && b353_26 && b354_4 && b355_22 && b356_4 && b357_1 && b358_2 && b359_55 && b360_3 && b361_24 && b362_22 && b363_1) {
pattern_id = 2561;
}
if(b360_3 && b361_24 && b362_37 && b363_1) {
pattern_id = 2562;
}
if(b306_12 && b307_19 && b308_19 && b309_4 && b310_4 && b311_15 && b312_13 && b313_10 && b314_26 && b315_3 && b316_28 && b317_21 && b318_7 && b319_3 && b320_33 && b321_9 && b322_3 && b323_2 && b324_37 && b325_18 && b326_39 && b327_11 && b328_2 && b329_44 && b330_14 && b331_4 && b332_50 && b333_47 && b334_5 && b335_2 && b336_43 && b337_5 && b338_54 && b339_12 && b340_2 && b341_4 && b342_3 && b343_1 && b344_15 && b345_11 && b346_18 && b347_9 && b348_23 && b349_31 && b350_19 && b351_26 && b352_69 && b353_12 && b354_70 && b355_42 && b356_67 && b357_1 && b358_4 && b359_31 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2563;
}
if(b350_1 && b351_15 && b352_38 && b353_11 && b354_4 && b355_38 && b356_29 && b357_17 && b358_6 && b359_21 && b360_19 && b361_33 && b362_9 && b363_48) {
pattern_id = 2564;
}
if(b316_27 && b317_9 && b318_34 && b319_3 && b320_2 && b321_1 && b322_31 && b323_30 && b324_16 && b325_43 && b326_20 && b327_37 && b328_1 && b329_1 && b330_2 && b331_2 && b332_43 && b333_31 && b334_31 && b335_57 && b336_15 && b337_7 && b338_5 && b339_19 && b340_6 && b341_10 && b342_7 && b343_10 && b344_1 && b345_51 && b346_20 && b347_28 && b348_11 && b349_39 && b350_28 && b351_38 && b352_23 && b353_31 && b354_15 && b355_22 && b356_31 && b357_1 && b358_48 && b359_80 && b360_3 && b361_9 && b362_6 && b363_1) {
pattern_id = 2565;
}
if(b289_2 && b290_26 && b291_28 && b292_3 && b293_10 && b294_7 && b295_26 && b296_29 && b297_25 && b298_28 && b299_29 && b300_1 && b301_26 && b302_29 && b303_2 && b304_32 && b305_8 && b306_12 && b307_17 && b308_4 && b309_19 && b310_35 && b311_21 && b312_2 && b313_6 && b314_3 && b315_29 && b316_4 && b317_42 && b318_43 && b319_4 && b320_40 && b321_2 && b322_5 && b323_29 && b324_3 && b325_37 && b326_32 && b327_16 && b328_24 && b329_18 && b330_45 && b331_1 && b332_3 && b333_7 && b334_16 && b335_50 && b336_31 && b337_44 && b338_5 && b339_24 && b340_2 && b341_16 && b342_48 && b343_10 && b344_22 && b345_8 && b346_7 && b347_15 && b348_6 && b349_7 && b350_30 && b351_5 && b352_6 && b353_56 && b354_12 && b355_49 && b356_25 && b357_13 && b358_55 && b359_13 && b360_3 && b361_24 && b362_7 && b363_1) {
pattern_id = 2566;
}
if(b285_4 && b286_20 && b287_4 && b288_5 && b289_20 && b290_2 && b291_16 && b292_9 && b293_4 && b294_6 && b295_3 && b296_6 && b297_7 && b298_4 && b299_7 && b300_3 && b301_8 && b302_20 && b303_2 && b304_4 && b305_4 && b306_12 && b307_15 && b308_6 && b309_10 && b310_2 && b311_2 && b312_17 && b313_4 && b314_2 && b315_5 && b316_3 && b317_2 && b318_9 && b319_3 && b320_4 && b321_5 && b322_3 && b323_30 && b324_6 && b325_3 && b326_12 && b327_3 && b328_23 && b329_1 && b330_1 && b331_1 && b332_1 && b333_52 && b334_19 && b335_1 && b336_1 && b337_1 && b338_4 && b339_40 && b340_9 && b341_2 && b342_1 && b343_10 && b344_34 && b345_11 && b346_1 && b347_3 && b348_10 && b349_48 && b350_1 && b351_17 && b352_7 && b353_11 && b354_43 && b355_23 && b356_4 && b357_23 && b358_28 && b359_21 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2567;
}
if(b279_12 && b280_20 && b281_3 && b282_11 && b283_10 && b284_3 && b285_12 && b286_5 && b287_3 && b288_5 && b289_20 && b290_2 && b291_4 && b292_27 && b293_17 && b294_5 && b295_15 && b296_8 && b297_4 && b298_2 && b299_18 && b300_2 && b301_29 && b302_25 && b303_6 && b304_18 && b305_3 && b306_3 && b307_17 && b308_4 && b309_3 && b310_36 && b311_33 && b312_3 && b313_4 && b314_11 && b315_3 && b316_26 && b317_8 && b318_4 && b319_43 && b320_7 && b321_3 && b322_20 && b323_45 && b324_5 && b325_13 && b326_5 && b327_6 && b328_43 && b329_7 && b330_8 && b331_17 && b332_6 && b333_5 && b334_12 && b335_7 && b336_2 && b337_11 && b338_16 && b339_2 && b340_53 && b341_13 && b342_3 && b343_13 && b344_3 && b345_3 && b346_14 && b347_20 && b348_4 && b349_30 && b350_16 && b351_6 && b352_28 && b353_34 && b354_4 && b355_58 && b356_26 && b357_4 && b358_4 && b359_61 && b360_1 && b361_20 && b362_22 && b363_1) {
pattern_id = 2568;
}
if(b351_2 && b352_19 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2569;
}
if(b348_10 && b349_72 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_29 && b362_21 && b363_1) {
pattern_id = 2570;
}
if(b348_10 && b349_72 && b350_13 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_30 && b363_1) {
pattern_id = 2571;
}
if(b267_3 && b268_12 && b269_17 && b270_4 && b271_15 && b272_13 && b273_9 && b274_2 && b275_16 && b276_9 && b277_18 && b278_18 && b279_6 && b280_20 && b281_6 && b282_11 && b283_16 && b284_20 && b285_12 && b286_14 && b287_24 && b288_5 && b289_24 && b290_20 && b291_4 && b292_22 && b293_27 && b294_5 && b295_21 && b296_22 && b297_4 && b298_24 && b299_27 && b300_2 && b301_22 && b302_26 && b303_6 && b304_30 && b305_10 && b306_3 && b307_32 && b308_32 && b309_3 && b310_29 && b311_32 && b312_3 && b313_36 && b314_40 && b315_3 && b316_44 && b317_9 && b318_4 && b319_42 && b320_29 && b321_3 && b322_7 && b323_41 && b324_5 && b325_47 && b326_45 && b327_6 && b328_52 && b329_15 && b330_8 && b331_51 && b332_32 && b333_5 && b334_59 && b335_17 && b336_2 && b337_18 && b338_16 && b339_2 && b340_10 && b341_10 && b342_3 && b343_12 && b344_64 && b345_3 && b346_61 && b347_70 && b348_4 && b349_72 && b350_64 && b351_6 && b352_19 && b353_34 && b354_4 && b355_70 && b356_48 && b357_4 && b358_22 && b359_51 && b360_1 && b361_36 && b362_46 && b363_1) {
pattern_id = 2572;
}
if(b315_4 && b316_44 && b317_9 && b318_4 && b319_42 && b320_29 && b321_3 && b322_7 && b323_41 && b324_5 && b325_47 && b326_45 && b327_6 && b328_52 && b329_12 && b330_8 && b331_51 && b332_32 && b333_5 && b334_59 && b335_17 && b336_2 && b337_18 && b338_16 && b339_2 && b340_10 && b341_10 && b342_3 && b343_12 && b344_64 && b345_3 && b346_61 && b347_70 && b348_4 && b349_72 && b350_64 && b351_6 && b352_19 && b353_16 && b354_4 && b355_70 && b356_48 && b357_4 && b358_22 && b359_51 && b360_1 && b361_36 && b362_46 && b363_1) {
pattern_id = 2573;
}
if(b339_12 && b340_10 && b341_13 && b342_3 && b343_12 && b344_6 && b345_3 && b346_61 && b347_15 && b348_4 && b349_16 && b350_7 && b351_6 && b352_16 && b353_22 && b354_4 && b355_31 && b356_31 && b357_4 && b358_5 && b359_50 && b360_1 && b361_43 && b362_45 && b363_1) {
pattern_id = 2574;
}
if(b357_1 && b358_22 && b359_48 && b360_1 && b361_36 && b362_6 && b363_1) {
pattern_id = 2575;
}
if(b348_10 && b349_72 && b350_14 && b351_6 && b352_7 && b353_15 && b354_4 && b355_41 && b356_31 && b357_4 && b358_4 && b359_51 && b360_1 && b361_20 && b362_46 && b363_1) {
pattern_id = 2576;
}
if(b306_12 && b307_10 && b308_14 && b309_3 && b310_31 && b311_4 && b312_3 && b313_36 && b314_37 && b315_3 && b316_44 && b317_6 && b318_4 && b319_7 && b320_19 && b321_3 && b322_36 && b323_41 && b324_5 && b325_47 && b326_11 && b327_6 && b328_52 && b329_5 && b330_8 && b331_33 && b332_30 && b333_5 && b334_17 && b335_9 && b336_2 && b337_18 && b338_11 && b339_2 && b340_48 && b341_6 && b342_3 && b343_12 && b344_36 && b345_3 && b346_61 && b347_10 && b348_4 && b349_41 && b350_16 && b351_6 && b352_19 && b353_13 && b354_4 && b355_41 && b356_21 && b357_4 && b358_1 && b359_14 && b360_1 && b361_37 && b362_45 && b363_1) {
pattern_id = 2577;
}
if(b357_1 && b358_33 && b359_1 && b360_1 && b361_20 && b362_1 && b363_1) {
pattern_id = 2578;
}
if(b354_15 && b355_36 && b356_38 && b357_4 && b358_4 && b359_1 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2579;
}
if(b329_1 && b330_43 && b331_10 && b332_1 && b333_45 && b334_46 && b335_4 && b336_18 && b337_27 && b338_39 && b339_16 && b340_35 && b341_11 && b342_9 && b343_44 && b344_1 && b345_9 && b346_14 && b347_1 && b348_32 && b349_63 && b350_1 && b351_31 && b352_29 && b353_29 && b354_15 && b355_22 && b356_48 && b357_4 && b358_33 && b359_31 && b360_1 && b361_20 && b362_31 && b363_1) {
pattern_id = 2580;
}
if(b347_6 && b348_28 && b349_8 && b350_1 && b351_32 && b352_34 && b353_43 && b354_15 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2581;
}
if(b347_6 && b348_28 && b349_8 && b350_1 && b351_32 && b352_34 && b353_20 && b354_15 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2582;
}
if(b350_1 && b351_10 && b352_14 && b353_11 && b354_8 && b355_1 && b356_9 && b357_44 && b358_9 && b359_13 && b360_3 && b361_9 && b362_6 && b363_1) {
pattern_id = 2583;
}
if(b321_7 && b322_36 && b323_10 && b324_5 && b325_3 && b326_12 && b327_6 && b328_1 && b329_8 && b330_8 && b331_1 && b332_3 && b333_2 && b334_3 && b335_4 && b336_1 && b337_1 && b338_4 && b339_27 && b340_9 && b341_2 && b342_1 && b343_10 && b344_53 && b345_11 && b346_1 && b347_3 && b348_10 && b349_18 && b350_1 && b351_17 && b352_7 && b353_11 && b354_6 && b355_23 && b356_4 && b357_23 && b358_28 && b359_82 && b360_3 && b361_1 && b362_1 && b363_1) {
pattern_id = 2584;
}
if(b339_12 && b340_1 && b341_2 && b342_3 && b343_43 && b344_70 && b345_3 && b346_13 && b347_70 && b348_4 && b349_33 && b350_64 && b351_6 && b352_35 && b353_73 && b354_4 && b355_37 && b356_48 && b357_4 && b358_10 && b359_51 && b360_1 && b361_24 && b362_46 && b363_1) {
pattern_id = 2585;
}
if(b291_16 && b292_26 && b293_15 && b294_5 && b295_28 && b296_31 && b297_4 && b298_23 && b299_32 && b300_2 && b301_28 && b302_6 && b303_6 && b304_34 && b305_36 && b306_3 && b307_19 && b308_33 && b309_3 && b310_19 && b311_33 && b312_3 && b313_6 && b314_3 && b315_3 && b316_28 && b317_10 && b318_4 && b319_7 && b320_41 && b321_3 && b322_6 && b323_45 && b324_5 && b325_11 && b326_12 && b327_6 && b328_11 && b329_8 && b330_8 && b331_14 && b332_3 && b333_5 && b334_17 && b335_50 && b336_2 && b337_10 && b338_7 && b339_2 && b340_20 && b341_41 && b342_3 && b343_5 && b344_64 && b345_3 && b346_13 && b347_4 && b348_4 && b349_33 && b350_6 && b351_6 && b352_35 && b353_3 && b354_4 && b355_37 && b356_23 && b357_4 && b358_10 && b359_32 && b360_1 && b361_24 && b362_34 && b363_1) {
pattern_id = 2586;
}
if(b339_12 && b340_1 && b341_47 && b342_3 && b343_43 && b344_70 && b345_3 && b346_13 && b347_70 && b348_4 && b349_33 && b350_64 && b351_6 && b352_35 && b353_73 && b354_4 && b355_37 && b356_48 && b357_4 && b358_10 && b359_51 && b360_1 && b361_24 && b362_46 && b363_1) {
pattern_id = 2587;
}
if(b315_4 && b316_26 && b317_9 && b318_4 && b319_2 && b320_4 && b321_3 && b322_33 && b323_25 && b324_5 && b325_3 && b326_12 && b327_6 && b328_43 && b329_5 && b330_8 && b331_1 && b332_3 && b333_5 && b334_40 && b335_11 && b336_2 && b337_1 && b338_2 && b339_2 && b340_20 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_4 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_16 && b353_16 && b354_4 && b355_4 && b356_4 && b357_4 && b358_32 && b359_9 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2588;
}
if(b351_2 && b352_16 && b353_36 && b354_4 && b355_58 && b356_37 && b357_4 && b358_35 && b359_36 && b360_1 && b361_43 && b362_6 && b363_1) {
pattern_id = 2589;
}
if(b351_2 && b352_16 && b353_26 && b354_4 && b355_4 && b356_20 && b357_4 && b358_1 && b359_9 && b360_1 && b361_20 && b362_22 && b363_1) {
pattern_id = 2590;
}
if(b348_10 && b349_63 && b350_20 && b351_6 && b352_18 && b353_21 && b354_15 && b355_15 && b356_34 && b357_1 && b358_1 && b359_4 && b360_1 && b361_24 && b362_22 && b363_1) {
pattern_id = 2591;
}
if(b352_11 && b353_73 && b354_18 && b355_20 && b356_38 && b357_8 && b358_28 && b359_17 && b360_18 && b361_15 && b362_56 && b363_10) {
pattern_id = 2592;
}
if(b348_10 && b349_63 && b350_20 && b351_6 && b352_64 && b353_13 && b354_15 && b355_11 && b356_7 && b357_1 && b358_4 && b359_31 && b360_1 && b361_24 && b362_6 && b363_1) {
pattern_id = 2593;
}
if(b333_2 && b334_46 && b335_6 && b336_2 && b337_57 && b338_25 && b339_12 && b340_5 && b341_22 && b342_1 && b343_7 && b344_7 && b345_18 && b346_28 && b347_6 && b348_37 && b349_21 && b350_7 && b351_36 && b352_11 && b353_73 && b354_56 && b355_23 && b356_22 && b357_66 && b358_4 && b359_34 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2594;
}
if(b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2595;
}
if(b338_4 && b339_58 && b340_5 && b341_11 && b342_42 && b343_24 && b344_7 && b345_18 && b346_28 && b347_6 && b348_34 && b349_7 && b350_64 && b351_50 && b352_11 && b353_25 && b354_60 && b355_23 && b356_48 && b357_8 && b358_28 && b359_63 && b360_3 && b361_40 && b362_6 && b363_1) {
pattern_id = 2596;
}
if(b320_3 && b321_17 && b322_8 && b323_2 && b324_22 && b325_13 && b326_3 && b327_7 && b328_13 && b329_1 && b330_26 && b331_9 && b332_32 && b333_17 && b334_5 && b335_9 && b336_8 && b337_6 && b338_17 && b339_30 && b340_9 && b341_43 && b342_4 && b343_44 && b344_12 && b345_3 && b346_5 && b347_8 && b348_4 && b349_6 && b350_20 && b351_2 && b352_36 && b353_11 && b354_59 && b355_19 && b356_11 && b357_25 && b358_31 && b359_11 && b360_42 && b361_14 && b362_5 && b363_14) {
pattern_id = 2597;
}
if(b325_2 && b326_2 && b327_4 && b328_4 && b329_8 && b330_1 && b331_4 && b332_3 && b333_11 && b334_5 && b335_5 && b336_1 && b337_6 && b338_2 && b339_1 && b340_6 && b341_2 && b342_1 && b343_6 && b344_4 && b345_1 && b346_7 && b347_3 && b348_1 && b349_9 && b350_7 && b351_12 && b352_11 && b353_24 && b354_15 && b355_4 && b356_4 && b357_4 && b358_4 && b359_18 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2598;
}
if(b357_1 && b358_24 && b359_14 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2599;
}
if(b357_1 && b358_24 && b359_14 && b360_1 && b361_1 && b362_36 && b363_1) {
pattern_id = 2600;
}
if(b324_6 && b325_12 && b326_12 && b327_6 && b328_9 && b329_13 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_16 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_25 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2601;
}
if(b319_3 && b320_13 && b321_5 && b322_9 && b323_15 && b324_2 && b325_2 && b326_18 && b327_3 && b328_3 && b329_3 && b330_8 && b331_17 && b332_3 && b333_5 && b334_14 && b335_6 && b336_7 && b337_19 && b338_4 && b339_14 && b340_14 && b341_1 && b342_14 && b343_1 && b344_1 && b345_29 && b346_28 && b347_6 && b348_33 && b349_7 && b350_6 && b351_12 && b352_5 && b353_19 && b354_11 && b355_20 && b356_42 && b357_8 && b358_28 && b359_39 && b360_3 && b361_37 && b362_54 && b363_1) {
pattern_id = 2602;
}
if(b357_1 && b358_24 && b359_18 && b360_1 && b361_29 && b362_1 && b363_1) {
pattern_id = 2603;
}
if(b341_11 && b342_14 && b343_22 && b344_1 && b345_29 && b346_1 && b347_6 && b348_4 && b349_7 && b350_6 && b351_37 && b352_5 && b353_18 && b354_17 && b355_20 && b356_37 && b357_23 && b358_28 && b359_11 && b360_3 && b361_1 && b362_31 && b363_1) {
pattern_id = 2604;
}
if(b249_4 && b250_8 && b251_2 && b252_6 && b253_10 && b254_10 && b255_10 && b256_9 && b257_9 && b258_7 && b259_11 && b260_11 && b261_11 && b262_11 && b263_14 && b264_7 && b265_11 && b266_12 && b267_13 && b268_13 && b269_18 && b270_4 && b271_16 && b272_14 && b273_9 && b274_17 && b275_9 && b276_9 && b277_19 && b278_19 && b279_6 && b280_21 && b281_13 && b282_11 && b283_17 && b284_21 && b285_12 && b286_22 && b287_25 && b288_5 && b289_25 && b290_21 && b291_4 && b292_14 && b293_17 && b294_5 && b295_22 && b296_23 && b297_4 && b298_25 && b299_28 && b300_2 && b301_23 && b302_6 && b303_6 && b304_2 && b305_27 && b306_3 && b307_33 && b308_33 && b309_3 && b310_32 && b311_35 && b312_3 && b313_14 && b314_21 && b315_3 && b316_2 && b317_37 && b318_4 && b319_43 && b320_6 && b321_3 && b322_10 && b323_43 && b324_5 && b325_8 && b326_5 && b327_6 && b328_46 && b329_34 && b330_8 && b331_8 && b332_58 && b333_5 && b334_54 && b335_37 && b336_2 && b337_2 && b338_9 && b339_2 && b340_5 && b341_41 && b342_3 && b343_43 && b344_12 && b345_3 && b346_28 && b347_15 && b348_4 && b349_16 && b350_64 && b351_6 && b352_15 && b353_36 && b354_4 && b355_31 && b356_22 && b357_4 && b358_24 && b359_51 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2605;
}
if(b349_7 && b350_10 && b351_10 && b352_5 && b353_22 && b354_24 && b355_23 && b356_71 && b357_1 && b358_35 && b359_22 && b360_1 && b361_4 && b362_36 && b363_1) {
pattern_id = 2606;
}
if(b339_12 && b340_58 && b341_47 && b342_3 && b343_7 && b344_14 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_18 && b353_61 && b354_4 && b355_4 && b356_69 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2607;
}
if(b333_2 && b334_2 && b335_2 && b336_2 && b337_2 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_3 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_6 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2608;
}
if(b339_12 && b340_58 && b341_9 && b342_3 && b343_7 && b344_14 && b345_3 && b346_1 && b347_3 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_16 && b354_4 && b355_4 && b356_42 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2609;
}
if(b343_10 && b344_6 && b345_14 && b346_7 && b347_3 && b348_14 && b349_7 && b350_3 && b351_6 && b352_5 && b353_12 && b354_4 && b355_20 && b356_11 && b357_4 && b358_23 && b359_11 && b360_1 && b361_13 && b362_40 && b363_4) {
pattern_id = 2610;
}
if(b325_2 && b326_2 && b327_2 && b328_4 && b329_4 && b330_5 && b331_4 && b332_4 && b333_6 && b334_5 && b335_6 && b336_6 && b337_6 && b338_6 && b339_6 && b340_6 && b341_5 && b342_8 && b343_6 && b344_6 && b345_7 && b346_7 && b347_8 && b348_8 && b349_9 && b350_10 && b351_8 && b352_5 && b353_15 && b354_16 && b355_20 && b356_13 && b357_8 && b358_28 && b359_29 && b360_3 && b361_6 && b362_7 && b363_1) {
pattern_id = 2611;
}
if(b344_7 && b345_14 && b346_8 && b347_6 && b348_16 && b349_32 && b350_18 && b351_2 && b352_7 && b353_28 && b354_4 && b355_4 && b356_13 && b357_4 && b358_39 && b359_9 && b360_1 && b361_1 && b362_22 && b363_1) {
pattern_id = 2612;
}
if(b333_2 && b334_2 && b335_19 && b336_2 && b337_5 && b338_2 && b339_2 && b340_58 && b341_2 && b342_3 && b343_14 && b344_45 && b345_3 && b346_13 && b347_10 && b348_4 && b349_16 && b350_7 && b351_6 && b352_9 && b353_21 && b354_4 && b355_17 && b356_23 && b357_4 && b358_24 && b359_61 && b360_1 && b361_37 && b362_1 && b363_1) {
pattern_id = 2613;
}
if(b333_2 && b334_2 && b335_19 && b336_2 && b337_5 && b338_2 && b339_2 && b340_58 && b341_2 && b342_3 && b343_14 && b344_45 && b345_3 && b346_61 && b347_59 && b348_4 && b349_16 && b350_7 && b351_6 && b352_9 && b353_21 && b354_4 && b355_17 && b356_26 && b357_4 && b358_24 && b359_61 && b360_1 && b361_37 && b362_1 && b363_1) {
pattern_id = 2614;
}
if(b333_2 && b334_2 && b335_19 && b336_2 && b337_5 && b338_2 && b339_2 && b340_58 && b341_2 && b342_3 && b343_14 && b344_45 && b345_3 && b346_58 && b347_70 && b348_4 && b349_16 && b350_7 && b351_6 && b352_9 && b353_21 && b354_4 && b355_22 && b356_69 && b357_4 && b358_24 && b359_61 && b360_1 && b361_37 && b362_1 && b363_1) {
pattern_id = 2615;
}
if(b333_2 && b334_2 && b335_19 && b336_2 && b337_5 && b338_2 && b339_2 && b340_58 && b341_2 && b342_3 && b343_50 && b344_15 && b345_3 && b346_58 && b347_15 && b348_4 && b349_16 && b350_7 && b351_6 && b352_9 && b353_21 && b354_4 && b355_27 && b356_69 && b357_4 && b358_24 && b359_61 && b360_1 && b361_37 && b362_1 && b363_1) {
pattern_id = 2616;
}
if(b317_2 && b318_2 && b319_2 && b320_2 && b321_2 && b322_2 && b323_2 && b324_2 && b325_3 && b326_3 && b327_4 && b328_6 && b329_6 && b330_6 && b331_1 && b332_1 && b333_1 && b334_7 && b335_4 && b336_2 && b337_7 && b338_2 && b339_4 && b340_6 && b341_7 && b342_9 && b343_6 && b344_4 && b345_9 && b346_9 && b347_1 && b348_10 && b349_1 && b350_11 && b351_6 && b352_12 && b353_3 && b354_4 && b355_22 && b356_23 && b357_4 && b358_13 && b359_10 && b360_1 && b361_6 && b362_31 && b363_1) {
pattern_id = 2617;
}
if(b315_4 && b316_12 && b317_4 && b318_4 && b319_16 && b320_4 && b321_3 && b322_11 && b323_4 && b324_5 && b325_14 && b326_12 && b327_6 && b328_16 && b329_8 && b330_8 && b331_11 && b332_3 && b333_5 && b334_11 && b335_5 && b336_2 && b337_11 && b338_2 && b339_2 && b340_7 && b341_2 && b342_3 && b343_13 && b344_4 && b345_3 && b346_8 && b347_3 && b348_4 && b349_10 && b350_7 && b351_6 && b352_17 && b353_3 && b354_4 && b355_26 && b356_4 && b357_4 && b358_35 && b359_14 && b360_1 && b361_35 && b362_1 && b363_1) {
pattern_id = 2618;
}
if(b321_7 && b322_11 && b323_4 && b324_5 && b325_14 && b326_12 && b327_6 && b328_16 && b329_8 && b330_8 && b331_11 && b332_3 && b333_5 && b334_11 && b335_5 && b336_2 && b337_11 && b338_2 && b339_2 && b340_7 && b341_2 && b342_3 && b343_13 && b344_4 && b345_3 && b346_8 && b347_3 && b348_4 && b349_10 && b350_7 && b351_6 && b352_17 && b353_3 && b354_4 && b355_26 && b356_4 && b357_4 && b358_35 && b359_14 && b360_1 && b361_35 && b362_1 && b363_1) {
pattern_id = 2619;
}
if(b332_7 && b333_6 && b334_1 && b335_1 && b336_16 && b337_1 && b338_1 && b339_6 && b340_2 && b341_1 && b342_6 && b343_4 && b344_1 && b345_8 && b346_1 && b347_1 && b348_6 && b349_6 && b350_3 && b351_3 && b352_9 && b353_12 && b354_13 && b355_19 && b356_18 && b357_21 && b358_27 && b359_12 && b360_30 && b361_32 && b362_2 && b363_32) {
pattern_id = 2620;
}
if(b351_2 && b352_17 && b353_36 && b354_4 && b355_4 && b356_31 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2621;
}
if(b318_5 && b319_16 && b320_5 && b321_3 && b322_7 && b323_12 && b324_5 && b325_5 && b326_12 && b327_6 && b328_55 && b329_12 && b330_8 && b331_6 && b332_4 && b333_5 && b334_46 && b335_7 && b336_2 && b337_11 && b338_7 && b339_2 && b340_2 && b341_21 && b342_3 && b343_16 && b344_15 && b345_3 && b346_5 && b347_4 && b348_4 && b349_6 && b350_40 && b351_6 && b352_19 && b353_42 && b354_4 && b355_34 && b356_69 && b357_4 && b358_5 && b359_4 && b360_1 && b361_73 && b362_37 && b363_1) {
pattern_id = 2622;
}
if(b357_1 && b358_35 && b359_22 && b360_1 && b361_35 && b362_31 && b363_1) {
pattern_id = 2623;
}
if(b315_4 && b316_5 && b317_10 && b318_4 && b319_4 && b320_14 && b321_3 && b322_10 && b323_4 && b324_5 && b325_7 && b326_10 && b327_6 && b328_14 && b329_16 && b330_8 && b331_12 && b332_11 && b333_5 && b334_6 && b335_5 && b336_2 && b337_5 && b338_24 && b339_2 && b340_15 && b341_9 && b342_3 && b343_7 && b344_24 && b345_3 && b346_28 && b347_3 && b348_4 && b349_13 && b350_13 && b351_6 && b352_20 && b353_45 && b354_4 && b355_30 && b356_22 && b357_4 && b358_48 && b359_14 && b360_1 && b361_37 && b362_21 && b363_1) {
pattern_id = 2624;
}
if(b267_3 && b268_8 && b269_22 && b270_4 && b271_15 && b272_19 && b273_9 && b274_20 && b275_21 && b276_9 && b277_14 && b278_24 && b279_6 && b280_26 && b281_16 && b282_11 && b283_19 && b284_21 && b285_12 && b286_4 && b287_28 && b288_5 && b289_18 && b290_27 && b291_4 && b292_25 && b293_27 && b294_5 && b295_25 && b296_30 && b297_4 && b298_29 && b299_32 && b300_2 && b301_27 && b302_30 && b303_6 && b304_33 && b305_6 && b306_3 && b307_10 && b308_3 && b309_3 && b310_36 && b311_35 && b312_3 && b313_40 && b314_14 && b315_3 && b316_43 && b317_44 && b318_4 && b319_42 && b320_13 && b321_3 && b322_11 && b323_3 && b324_5 && b325_50 && b326_6 && b327_6 && b328_13 && b329_5 && b330_8 && b331_33 && b332_15 && b333_5 && b334_15 && b335_2 && b336_2 && b337_8 && b338_23 && b339_2 && b340_5 && b341_12 && b342_3 && b343_12 && b344_6 && b345_3 && b346_18 && b347_14 && b348_4 && b349_15 && b350_6 && b351_6 && b352_20 && b353_22 && b354_4 && b355_41 && b356_37 && b357_4 && b358_5 && b359_50 && b360_1 && b361_38 && b362_54 && b363_1) {
pattern_id = 2625;
}
if(b345_11 && b346_18 && b347_14 && b348_10 && b349_9 && b350_23 && b351_23 && b352_25 && b353_29 && b354_5 && b355_15 && b356_28 && b357_13 && b358_27 && b359_43 && b360_27 && b361_13 && b362_47 && b363_46) {
pattern_id = 2626;
}
if(b348_10 && b349_4 && b350_16 && b351_6 && b352_71 && b353_16 && b354_4 && b355_27 && b356_13 && b357_4 && b358_31 && b359_4 && b360_1 && b361_9 && b362_32 && b363_1) {
pattern_id = 2627;
}
if(b345_11 && b346_18 && b347_10 && b348_4 && b349_63 && b350_75 && b351_6 && b352_38 && b353_36 && b354_4 && b355_19 && b356_31 && b357_4 && b358_13 && b359_32 && b360_1 && b361_40 && b362_30 && b363_1) {
pattern_id = 2628;
}
if(b315_4 && b316_5 && b317_8 && b318_4 && b319_6 && b320_10 && b321_3 && b322_2 && b323_7 && b324_5 && b325_10 && b326_15 && b327_6 && b328_14 && b329_9 && b330_8 && b331_13 && b332_17 && b333_5 && b334_15 && b335_19 && b336_2 && b337_14 && b338_19 && b339_2 && b340_15 && b341_6 && b342_3 && b343_18 && b344_15 && b345_3 && b346_18 && b347_10 && b348_4 && b349_4 && b350_16 && b351_6 && b352_20 && b353_36 && b354_4 && b355_12 && b356_13 && b357_4 && b358_5 && b359_9 && b360_1 && b361_4 && b362_22 && b363_1) {
pattern_id = 2629;
}
if(b303_2 && b304_3 && b305_3 && b306_3 && b307_2 && b308_3 && b309_3 && b310_2 && b311_3 && b312_3 && b313_3 && b314_3 && b315_3 && b316_3 && b317_4 && b318_4 && b319_2 && b320_4 && b321_3 && b322_4 && b323_4 && b324_5 && b325_3 && b326_6 && b327_6 && b328_9 && b329_8 && b330_8 && b331_1 && b332_3 && b333_5 && b334_1 && b335_5 && b336_2 && b337_1 && b338_2 && b339_2 && b340_2 && b341_2 && b342_3 && b343_1 && b344_4 && b345_3 && b346_1 && b347_4 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_22 && b354_15 && b355_20 && b356_11 && b357_4 && b358_23 && b359_6 && b360_16 && b361_20 && b362_5 && b363_11) {
pattern_id = 2630;
}
if(b315_4 && b316_5 && b317_6 && b318_4 && b319_5 && b320_8 && b321_3 && b322_2 && b323_8 && b324_5 && b325_8 && b326_13 && b327_6 && b328_14 && b329_5 && b330_8 && b331_3 && b332_15 && b333_5 && b334_15 && b335_14 && b336_2 && b337_12 && b338_11 && b339_2 && b340_15 && b341_17 && b342_3 && b343_14 && b344_10 && b345_3 && b346_18 && b347_16 && b348_4 && b349_8 && b350_21 && b351_6 && b352_20 && b353_26 && b354_4 && b355_31 && b356_37 && b357_4 && b358_5 && b359_36 && b360_1 && b361_31 && b362_3 && b363_1) {
pattern_id = 2631;
}
if(b351_2 && b352_38 && b353_3 && b354_4 && b355_30 && b356_48 && b357_4 && b358_48 && b359_31 && b360_1 && b361_29 && b362_1 && b363_1) {
pattern_id = 2632;
}
if(b351_2 && b352_38 && b353_3 && b354_4 && b355_27 && b356_38 && b357_4 && b358_48 && b359_31 && b360_1 && b361_29 && b362_1 && b363_1) {
pattern_id = 2633;
}
if(b357_1 && b358_13 && b359_1 && b360_1 && b361_14 && b362_13 && b363_1) {
pattern_id = 2634;
}
if(b319_3 && b320_5 && b321_4 && b322_3 && b323_2 && b324_6 && b325_5 && b326_7 && b327_3 && b328_10 && b329_1 && b330_9 && b331_10 && b332_1 && b333_10 && b334_6 && b335_1 && b336_12 && b337_10 && b338_1 && b339_11 && b340_7 && b341_1 && b342_1 && b343_12 && b344_1 && b345_14 && b346_14 && b347_1 && b348_7 && b349_10 && b350_1 && b351_15 && b352_11 && b353_13 && b354_19 && b355_23 && b356_32 && b357_1 && b358_13 && b359_32 && b360_1 && b361_37 && b362_1 && b363_1) {
pattern_id = 2635;
}
if(b322_3 && b323_8 && b324_21 && b325_2 && b326_28 && b327_3 && b328_6 && b329_10 && b330_8 && b331_23 && b332_30 && b333_5 && b334_19 && b335_9 && b336_2 && b337_13 && b338_16 && b339_2 && b340_32 && b341_41 && b342_3 && b343_23 && b344_14 && b345_3 && b346_14 && b347_8 && b348_4 && b349_6 && b350_11 && b351_6 && b352_9 && b353_15 && b354_4 && b355_19 && b356_24 && b357_4 && b358_31 && b359_51 && b360_1 && b361_43 && b362_54 && b363_1) {
pattern_id = 2636;
}
if(b325_2 && b326_4 && b327_4 && b328_12 && b329_30 && b330_30 && b331_9 && b332_9 && b333_6 && b334_5 && b335_10 && b336_35 && b337_7 && b338_46 && b339_45 && b340_46 && b341_38 && b342_4 && b343_23 && b344_6 && b345_3 && b346_13 && b347_16 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_48 && b359_31 && b360_1 && b361_29 && b362_1 && b363_1) {
pattern_id = 2637;
}
if(b315_4 && b316_43 && b317_40 && b318_4 && b319_2 && b320_45 && b321_3 && b322_40 && b323_14 && b324_5 && b325_14 && b326_17 && b327_6 && b328_6 && b329_7 && b330_8 && b331_14 && b332_32 && b333_5 && b334_7 && b335_37 && b336_2 && b337_56 && b338_19 && b339_2 && b340_11 && b341_12 && b342_3 && b343_11 && b344_14 && b345_3 && b346_61 && b347_3 && b348_4 && b349_2 && b350_16 && b351_6 && b352_19 && b353_13 && b354_4 && b355_26 && b356_69 && b357_4 && b358_39 && b359_1 && b360_1 && b361_35 && b362_31 && b363_1) {
pattern_id = 2638;
}
if(b335_4 && b336_4 && b337_4 && b338_1 && b339_4 && b340_2 && b341_1 && b342_6 && b343_4 && b344_1 && b345_5 && b346_4 && b347_1 && b348_6 && b349_6 && b350_3 && b351_3 && b352_9 && b353_12 && b354_13 && b355_19 && b356_18 && b357_21 && b358_27 && b359_12 && b360_30 && b361_32 && b362_2 && b363_32) {
pattern_id = 2639;
}
if(b309_4 && b310_22 && b311_37 && b312_3 && b313_28 && b314_26 && b315_3 && b316_2 && b317_32 && b318_4 && b319_43 && b320_41 && b321_3 && b322_2 && b323_15 && b324_5 && b325_8 && b326_21 && b327_6 && b328_39 && b329_12 && b330_8 && b331_8 && b332_14 && b333_5 && b334_54 && b335_16 && b336_2 && b337_14 && b338_23 && b339_2 && b340_32 && b341_10 && b342_3 && b343_14 && b344_23 && b345_3 && b346_56 && b347_3 && b348_4 && b349_30 && b350_75 && b351_6 && b352_14 && b353_16 && b354_4 && b355_34 && b356_31 && b357_4 && b358_41 && b359_50 && b360_1 && b361_14 && b362_7 && b363_1) {
pattern_id = 2640;
}
if(b309_4 && b310_22 && b311_25 && b312_3 && b313_28 && b314_38 && b315_3 && b316_2 && b317_32 && b318_4 && b319_43 && b320_6 && b321_3 && b322_10 && b323_25 && b324_5 && b325_8 && b326_5 && b327_6 && b328_39 && b329_14 && b330_8 && b331_3 && b332_58 && b333_5 && b334_15 && b335_16 && b336_2 && b337_17 && b338_24 && b339_2 && b340_4 && b341_46 && b342_3 && b343_23 && b344_3 && b345_3 && b346_18 && b347_4 && b348_4 && b349_8 && b350_14 && b351_6 && b352_14 && b353_36 && b354_4 && b355_12 && b356_4 && b357_4 && b358_5 && b359_14 && b360_1 && b361_4 && b362_1 && b363_1) {
pattern_id = 2641;
}
if(b339_12 && b340_32 && b341_47 && b342_3 && b343_23 && b344_3 && b345_3 && b346_5 && b347_12 && b348_4 && b349_28 && b350_75 && b351_6 && b352_15 && b353_18 && b354_4 && b355_22 && b356_20 && b357_4 && b358_39 && b359_50 && b360_1 && b361_36 && b362_46 && b363_1) {
pattern_id = 2642;
}
if(b330_4 && b331_8 && b332_9 && b333_2 && b334_9 && b335_4 && b336_4 && b337_4 && b338_1 && b339_4 && b340_2 && b341_1 && b342_6 && b343_4 && b344_1 && b345_5 && b346_8 && b347_1 && b348_6 && b349_6 && b350_3 && b351_3 && b352_9 && b353_12 && b354_13 && b355_19 && b356_18 && b357_21 && b358_27 && b359_12 && b360_30 && b361_32 && b362_2 && b363_32) {
pattern_id = 2643;
}
if(b339_12 && b340_32 && b341_13 && b342_3 && b343_14 && b344_64 && b345_3 && b346_57 && b347_59 && b348_4 && b349_72 && b350_64 && b351_6 && b352_20 && b353_3 && b354_4 && b355_34 && b356_21 && b357_4 && b358_41 && b359_4 && b360_1 && b361_9 && b362_54 && b363_1) {
pattern_id = 2644;
}
if(b341_11 && b342_6 && b343_4 && b344_1 && b345_5 && b346_8 && b347_1 && b348_6 && b349_6 && b350_3 && b351_3 && b352_9 && b353_12 && b354_13 && b355_19 && b356_18 && b357_21 && b358_27 && b359_12 && b360_30 && b361_32 && b362_2 && b363_32) {
pattern_id = 2645;
}
if(b331_9 && b332_10 && b333_4 && b334_5 && b335_11 && b336_10 && b337_7 && b338_12 && b339_10 && b340_9 && b341_13 && b342_1 && b343_6 && b344_6 && b345_14 && b346_9 && b347_8 && b348_10 && b349_6 && b350_16 && b351_6 && b352_15 && b353_18 && b354_15 && b355_19 && b356_18 && b357_25 && b358_33 && b359_11 && b360_34 && b361_35 && b362_5 && b363_37) {
pattern_id = 2646;
}
if(b338_4 && b339_11 && b340_4 && b341_1 && b342_13 && b343_11 && b344_7 && b345_16 && b346_12 && b347_6 && b348_6 && b349_15 && b350_1 && b351_4 && b352_11 && b353_18 && b354_22 && b355_20 && b356_24 && b357_27 && b358_28 && b359_33 && b360_3 && b361_35 && b362_37 && b363_1) {
pattern_id = 2647;
}
if(b334_8 && b335_10 && b336_9 && b337_7 && b338_8 && b339_9 && b340_9 && b341_12 && b342_7 && b343_10 && b344_11 && b345_13 && b346_9 && b347_12 && b348_8 && b349_9 && b350_11 && b351_11 && b352_5 && b353_19 && b354_19 && b355_23 && b356_27 && b357_1 && b358_24 && b359_32 && b360_1 && b361_6 && b362_36 && b363_1) {
pattern_id = 2648;
}
if(b329_1 && b330_11 && b331_10 && b332_7 && b333_12 && b334_13 && b335_16 && b336_7 && b337_12 && b338_2 && b339_12 && b340_13 && b341_11 && b342_14 && b343_13 && b344_7 && b345_6 && b346_9 && b347_3 && b348_14 && b349_9 && b350_10 && b351_8 && b352_5 && b353_13 && b354_24 && b355_23 && b356_33 && b357_1 && b358_24 && b359_32 && b360_1 && b361_1 && b362_32 && b363_1) {
pattern_id = 2649;
}
if(b328_12 && b329_10 && b330_10 && b331_9 && b332_10 && b333_2 && b334_12 && b335_14 && b336_7 && b337_6 && b338_14 && b339_12 && b340_11 && b341_13 && b342_4 && b343_5 && b344_7 && b345_8 && b346_8 && b347_1 && b348_13 && b349_13 && b350_3 && b351_16 && b352_18 && b353_12 && b354_22 && b355_27 && b356_11 && b357_25 && b358_10 && b359_11 && b360_34 && b361_1 && b362_5 && b363_39) {
pattern_id = 2650;
}
if(b330_4 && b331_6 && b332_12 && b333_2 && b334_10 && b335_13 && b336_11 && b337_9 && b338_4 && b339_11 && b340_10 && b341_1 && b342_14 && b343_5 && b344_1 && b345_8 && b346_13 && b347_1 && b348_1 && b349_2 && b350_1 && b351_14 && b352_11 && b353_19 && b354_22 && b355_20 && b356_31 && b357_29 && b358_23 && b359_36 && b360_34 && b361_34 && b362_39 && b363_38) {
pattern_id = 2651;
}
if(b334_8 && b335_10 && b336_9 && b337_7 && b338_15 && b339_13 && b340_12 && b341_14 && b342_15 && b343_7 && b344_7 && b345_5 && b346_15 && b347_1 && b348_9 && b349_16 && b350_1 && b351_18 && b352_11 && b353_3 && b354_18 && b355_20 && b356_20 && b357_30 && b358_28 && b359_37 && b360_3 && b361_37 && b362_7 && b363_1) {
pattern_id = 2652;
}
if(b320_3 && b321_16 && b322_18 && b323_16 && b324_12 && b325_2 && b326_21 && b327_21 && b328_4 && b329_4 && b330_25 && b331_4 && b332_30 && b333_17 && b334_5 && b335_9 && b336_8 && b337_6 && b338_17 && b339_39 && b340_6 && b341_2 && b342_13 && b343_6 && b344_12 && b345_6 && b346_7 && b347_20 && b348_50 && b349_7 && b350_53 && b351_12 && b352_11 && b353_13 && b354_11 && b355_20 && b356_20 && b357_55 && b358_28 && b359_10 && b360_3 && b361_35 && b362_3 && b363_1) {
pattern_id = 2653;
}
if(b327_3 && b328_5 && b329_5 && b330_4 && b331_5 && b332_5 && b333_2 && b334_6 && b335_7 && b336_2 && b337_1 && b338_7 && b339_2 && b340_7 && b341_6 && b342_4 && b343_7 && b344_7 && b345_8 && b346_8 && b347_1 && b348_9 && b349_10 && b350_1 && b351_9 && b352_11 && b353_3 && b354_17 && b355_20 && b356_22 && b357_24 && b358_28 && b359_10 && b360_3 && b361_1 && b362_30 && b363_1) {
pattern_id = 2654;
}
if(b342_4 && b343_50 && b344_12 && b345_3 && b346_14 && b347_16 && b348_4 && b349_2 && b350_11 && b351_6 && b352_64 && b353_3 && b354_4 && b355_41 && b356_21 && b357_4 && b358_4 && b359_34 && b360_1 && b361_1 && b362_13 && b363_1) {
pattern_id = 2655;
}
if(b339_12 && b340_11 && b341_41 && b342_3 && b343_11 && b344_64 && b345_3 && b346_8 && b347_25 && b348_4 && b349_63 && b350_61 && b351_6 && b352_2 && b353_45 && b354_4 && b355_17 && b356_39 && b357_4 && b358_24 && b359_22 && b360_1 && b361_37 && b362_30 && b363_1) {
pattern_id = 2656;
}
if(b350_1 && b351_3 && b352_28 && b353_11 && b354_26 && b355_50 && b356_21 && b357_1 && b358_22 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2657;
}
if(b342_4 && b343_11 && b344_12 && b345_3 && b346_1 && b347_4 && b348_4 && b349_1 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_54 && b363_1) {
pattern_id = 2658;
}
if(b333_2 && b334_19 && b335_9 && b336_2 && b337_13 && b338_24 && b339_2 && b340_11 && b341_5 && b342_3 && b343_11 && b344_22 && b345_3 && b346_5 && b347_8 && b348_4 && b349_6 && b350_13 && b351_6 && b352_9 && b353_15 && b354_4 && b355_19 && b356_23 && b357_4 && b358_31 && b359_10 && b360_1 && b361_6 && b362_21 && b363_1) {
pattern_id = 2659;
}
if(b348_10 && b349_6 && b350_11 && b351_6 && b352_9 && b353_16 && b354_4 && b355_19 && b356_24 && b357_4 && b358_31 && b359_31 && b360_1 && b361_1 && b362_32 && b363_1) {
pattern_id = 2660;
}
if(b336_7 && b337_13 && b338_17 && b339_2 && b340_11 && b341_9 && b342_3 && b343_11 && b344_12 && b345_3 && b346_5 && b347_51 && b348_4 && b349_6 && b350_11 && b351_6 && b352_9 && b353_26 && b354_4 && b355_4 && b356_20 && b357_4 && b358_31 && b359_10 && b360_1 && b361_6 && b362_32 && b363_1) {
pattern_id = 2661;
}
if(b349_7 && b350_11 && b351_3 && b352_5 && b353_15 && b354_7 && b355_23 && b356_74 && b357_1 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2662;
}
if(b336_7 && b337_13 && b338_17 && b339_2 && b340_11 && b341_6 && b342_4 && b343_56 && b344_7 && b345_1 && b346_1 && b347_1 && b348_1 && b349_1 && b350_1 && b351_27 && b352_3 && b353_67 && b354_33 && b355_39 && b356_51 && b357_66 && b358_45 && b359_5 && b360_3 && b361_1 && b362_54 && b363_1) {
pattern_id = 2663;
}
if(b303_2 && b304_12 && b305_10 && b306_3 && b307_11 && b308_14 && b309_3 && b310_8 && b311_10 && b312_3 && b313_14 && b314_19 && b315_3 && b316_16 && b317_18 && b318_4 && b319_19 && b320_19 && b321_3 && b322_4 && b323_4 && b324_5 && b325_3 && b326_12 && b327_6 && b328_6 && b329_10 && b330_8 && b331_23 && b332_30 && b333_5 && b334_19 && b335_9 && b336_2 && b337_13 && b338_17 && b339_2 && b340_11 && b341_5 && b342_3 && b343_11 && b344_12 && b345_3 && b346_5 && b347_8 && b348_4 && b349_6 && b350_11 && b351_6 && b352_9 && b353_15 && b354_4 && b355_19 && b356_24 && b357_4 && b358_24 && b359_61 && b360_1 && b361_6 && b362_45 && b363_1) {
pattern_id = 2664;
}
if(b315_4 && b316_16 && b317_18 && b318_4 && b319_19 && b320_19 && b321_3 && b322_8 && b323_12 && b324_5 && b325_13 && b326_5 && b327_6 && b328_6 && b329_4 && b330_8 && b331_23 && b332_30 && b333_5 && b334_19 && b335_9 && b336_2 && b337_13 && b338_17 && b339_2 && b340_11 && b341_5 && b342_3 && b343_11 && b344_12 && b345_3 && b346_5 && b347_8 && b348_4 && b349_6 && b350_11 && b351_6 && b352_9 && b353_15 && b354_4 && b355_19 && b356_24 && b357_4 && b358_31 && b359_10 && b360_1 && b361_6 && b362_45 && b363_1) {
pattern_id = 2665;
}
if(b345_11 && b346_5 && b347_8 && b348_4 && b349_6 && b350_11 && b351_6 && b352_9 && b353_15 && b354_4 && b355_19 && b356_24 && b357_4 && b358_31 && b359_10 && b360_1 && b361_6 && b362_45 && b363_1) {
pattern_id = 2666;
}
if(b336_7 && b337_13 && b338_17 && b339_2 && b340_11 && b341_5 && b342_4 && b343_51 && b344_15 && b345_5 && b346_49 && b347_3 && b348_56 && b349_1 && b350_16 && b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_31 && b359_36 && b360_1 && b361_1 && b362_21 && b363_1) {
pattern_id = 2667;
}
if(b356_18 && b357_25 && b358_31 && b359_6 && b360_39 && b361_51 && b362_37 && b363_54) {
pattern_id = 2668;
}
if(b343_10 && b344_12 && b345_6 && b346_9 && b347_40 && b348_2 && b349_2 && b350_13 && b351_2 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2669;
}
if(b356_18 && b357_25 && b358_31 && b359_6 && b360_39 && b361_51 && b362_37 && b363_22) {
pattern_id = 2670;
}
if(b341_11 && b342_11 && b343_11 && b344_7 && b345_41 && b346_49 && b347_16 && b348_10 && b349_63 && b350_13 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2671;
}
if(b341_11 && b342_11 && b343_11 && b344_7 && b345_41 && b346_49 && b347_16 && b348_10 && b349_63 && b350_61 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2672;
}
if(b341_11 && b342_11 && b343_11 && b344_7 && b345_41 && b346_49 && b347_16 && b348_10 && b349_4 && b350_7 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2673;
}
if(b353_11 && b354_13 && b355_19 && b356_18 && b357_39 && b358_26 && b359_36 && b360_3 && b361_4 && b362_1 && b363_1) {
pattern_id = 2674;
}
if(b341_11 && b342_11 && b343_11 && b344_7 && b345_41 && b346_49 && b347_16 && b348_10 && b349_4 && b350_15 && b351_6 && b352_7 && b353_3 && b354_4 && b355_4 && b356_4 && b357_4 && b358_4 && b359_14 && b360_1 && b361_1 && b362_1 && b363_1) {
pattern_id = 2675;
}
if(b363_65) {
pattern_id = 2676;
}
}

}