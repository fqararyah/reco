#include "pattern_matcher.h"


void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx){
shift_loop:for(int i=0; i< buffer_size - parallelism; i++){
#pragma HLS UNROLL
buffer[i] = buffer[i+parallelism];
}
fill_loop:for(int i=0;i<parallelism; i++){
#pragma HLS UNROLL
buffer[buffer_size - parallelism + i] = chunk((start_indx + i) * 8 + 7, (start_indx + i) * 8);
}
}

void match(ap_uint<16> &pattern_id, char buffer[buffer_size]) {
for(int i=0; i<parallelism; i++){
#pragma HLS UNROLL
boolean b0_1 = (buffer[i] == '|');
boolean b0_2 = (buffer[i] == 'p');
boolean b0_3 = (buffer[i] == 'M');
boolean b0_4 = (buffer[i] == 'C');
boolean b0_5 = (buffer[i] == '/');
boolean b0_6 = (buffer[i] == 'U');
boolean b0_7 = (buffer[i] == 'A');
boolean b0_8 = (buffer[i] == '*');
boolean b0_9 = (buffer[i] == 'd');
boolean b0_10 = (buffer[i] == 's');
boolean b0_11 = (buffer[i] == 'c');
boolean b0_12 = (buffer[i] == '%');
boolean b0_13 = (buffer[i] == '.');
boolean b0_14 = (buffer[i] == 'S');
boolean b1_1 = (buffer[i + 1] == '8');
boolean b1_2 = (buffer[i + 1] == '|');
boolean b1_3 = (buffer[i + 1] == 'c');
boolean b1_4 = (buffer[i + 1] == 'A');
boolean b1_5 = (buffer[i + 1] == 'x');
boolean b1_6 = (buffer[i + 1] == 'F');
boolean b1_7 = (buffer[i + 1] == '/');
boolean b1_8 = (buffer[i + 1] == 's');
boolean b1_9 = (buffer[i + 1] == 'o');
boolean b1_10 = (buffer[i + 1] == 'S');
boolean b1_11 = (buffer[i + 1] == ' ');
boolean b1_12 = (buffer[i + 1] == 'i');
boolean b1_13 = (buffer[i + 1] == 'd');
boolean b1_14 = (buffer[i + 1] == 'b');
boolean b1_15 = (buffer[i + 1] == 'y');
boolean b1_16 = (buffer[i + 1] == 't');
boolean b1_17 = (buffer[i + 1] == 'C');
boolean b1_18 = (buffer[i + 1] == 'U');
boolean b1_19 = (buffer[i + 1] == 'l');
boolean b1_20 = (buffer[i + 1] == '1');
boolean b1_21 = (buffer[i + 1] == '0');
boolean b1_22 = (buffer[i + 1] == 'H');
boolean b1_23 = (buffer[i + 1] == '7');
boolean b1_24 = (buffer[i + 1] == 'u');
boolean b2_1 = (buffer[i + 2] == '5');
boolean b2_2 = (buffer[i + 2] == '|');
boolean b2_3 = (buffer[i + 2] == 'E');
boolean b2_4 = (buffer[i + 2] == 'c');
boolean b2_5 = (buffer[i + 2] == 'I');
boolean b2_6 = (buffer[i + 2] == 'F');
boolean b2_7 = (buffer[i + 2] == '_');
boolean b2_8 = (buffer[i + 2] == 'f');
boolean b2_9 = (buffer[i + 2] == '/');
boolean b2_10 = (buffer[i + 2] == 'U');
boolean b2_11 = (buffer[i + 2] == 'e');
boolean b2_12 = (buffer[i + 2] == 'o');
boolean b2_13 = (buffer[i + 2] == '3');
boolean b2_14 = (buffer[i + 2] == 'A');
boolean b2_15 = (buffer[i + 2] == 'i');
boolean b2_16 = (buffer[i + 2] == '0');
boolean b2_17 = (buffer[i + 2] == 'D');
boolean b2_18 = (buffer[i + 2] == 'R');
boolean b2_19 = (buffer[i + 2] == 'b');
boolean b2_20 = (buffer[i + 2] == 'd');
boolean b2_21 = (buffer[i + 2] == 'm');
boolean b2_22 = (buffer[i + 2] == 's');
boolean b2_23 = (buffer[i + 2] == 'x');
boolean b2_24 = (buffer[i + 2] == 'O');
boolean b2_25 = (buffer[i + 2] == 'H');
boolean b2_26 = (buffer[i + 2] == 'a');
boolean b2_27 = (buffer[i + 2] == '<');
boolean b2_28 = (buffer[i + 2] == '7');
boolean b2_29 = (buffer[i + 2] == '6');
boolean b2_30 = (buffer[i + 2] == 'n');
boolean b2_31 = (buffer[i + 2] == '9');
boolean b2_32 = (buffer[i + 2] == 'S');
boolean b2_33 = (buffer[i + 2] == 'C');
boolean b3_1 = (buffer[i + 3] == ' ');
boolean b3_2 = (buffer[i + 3] == 'C');
boolean b3_3 = (buffer[i + 3] == 'B');
boolean b3_4 = (buffer[i + 3] == 's');
boolean b3_5 = (buffer[i + 3] == 'L');
boolean b3_6 = (buffer[i + 3] == '0');
boolean b3_7 = (buffer[i + 3] == 'f');
boolean b3_8 = (buffer[i + 3] == 'S');
boolean b3_9 = (buffer[i + 3] == 'd');
boolean b3_10 = (buffer[i + 3] == '/');
boolean b3_11 = (buffer[i + 3] == 'c');
boolean b3_12 = (buffer[i + 3] == '_');
boolean b3_13 = (buffer[i + 3] == 'r');
boolean b3_14 = (buffer[i + 3] == 'n');
boolean b3_15 = (buffer[i + 3] == '2');
boolean b3_16 = (buffer[i + 3] == '|');
boolean b3_17 = (buffer[i + 3] == 'A');
boolean b3_18 = (buffer[i + 3] == 't');
boolean b3_19 = (buffer[i + 3] == 'a');
boolean b3_20 = (buffer[i + 3] == 'F');
boolean b3_21 = (buffer[i + 3] == 'x');
boolean b3_22 = (buffer[i + 3] == 'o');
boolean b3_23 = (buffer[i + 3] == 'e');
boolean b3_24 = (buffer[i + 3] == 'm');
boolean b3_25 = (buffer[i + 3] == 'b');
boolean b3_26 = (buffer[i + 3] == '.');
boolean b3_27 = (buffer[i + 3] == 'y');
boolean b3_28 = (buffer[i + 3] == '<');
boolean b3_29 = (buffer[i + 3] == 'M');
boolean b3_30 = (buffer[i + 3] == 'v');
boolean b3_31 = (buffer[i + 3] == '3');
boolean b3_32 = (buffer[i + 3] == 'q');
boolean b3_33 = (buffer[i + 3] == '6');
boolean b3_34 = (buffer[i + 3] == '5');
boolean b3_35 = (buffer[i + 3] == '1');
boolean b3_36 = (buffer[i + 3] == 'P');
boolean b3_37 = (buffer[i + 3] == 'E');
boolean b3_38 = (buffer[i + 3] == 'j');
boolean b3_39 = (buffer[i + 3] == 'U');
boolean b4_1 = (buffer[i + 4] == '8');
boolean b4_2 = (buffer[i + 4] == 'D');
boolean b4_3 = (buffer[i + 4] == '|');
boolean b4_4 = (buffer[i + 4] == 'm');
boolean b4_5 = (buffer[i + 4] == ' ');
boolean b4_6 = (buffer[i + 4] == '0');
boolean b4_7 = (buffer[i + 4] == 'F');
boolean b4_8 = (buffer[i + 4] == 'i');
boolean b4_9 = (buffer[i + 4] == 'E');
boolean b4_10 = (buffer[i + 4] == 'o');
boolean b4_11 = (buffer[i + 4] == 'c');
boolean b4_12 = (buffer[i + 4] == 'f');
boolean b4_13 = (buffer[i + 4] == 'I');
boolean b4_14 = (buffer[i + 4] == '/');
boolean b4_15 = (buffer[i + 4] == 'v');
boolean b4_16 = (buffer[i + 4] == 's');
boolean b4_17 = (buffer[i + 4] == 'S');
boolean b4_18 = (buffer[i + 4] == '-');
boolean b4_19 = (buffer[i + 4] == 'p');
boolean b4_20 = (buffer[i + 4] == 't');
boolean b4_21 = (buffer[i + 4] == 'w');
boolean b4_22 = (buffer[i + 4] == '1');
boolean b4_23 = (buffer[i + 4] == 'A');
boolean b4_24 = (buffer[i + 4] == 'e');
boolean b4_25 = (buffer[i + 4] == 'd');
boolean b4_26 = (buffer[i + 4] == 'u');
boolean b4_27 = (buffer[i + 4] == 'a');
boolean b4_28 = (buffer[i + 4] == 'G');
boolean b4_29 = (buffer[i + 4] == 'l');
boolean b4_30 = (buffer[i + 4] == '_');
boolean b4_31 = (buffer[i + 4] == 'y');
boolean b4_32 = (buffer[i + 4] == 'b');
boolean b4_33 = (buffer[i + 4] == 'U');
boolean b4_34 = (buffer[i + 4] == 'h');
boolean b4_35 = (buffer[i + 4] == 'M');
boolean b4_36 = (buffer[i + 4] == 'r');
boolean b4_37 = (buffer[i + 4] == 'k');
boolean b4_38 = (buffer[i + 4] == '3');
boolean b4_39 = (buffer[i + 4] == '=');
boolean b4_40 = (buffer[i + 4] == '4');
boolean b4_41 = (buffer[i + 4] == '2');
boolean b4_42 = (buffer[i + 4] == '7');
boolean b4_43 = (buffer[i + 4] == 'O');
boolean b4_44 = (buffer[i + 4] == 'R');
boolean b4_45 = (buffer[i + 4] == 'n');
boolean b5_1 = (buffer[i + 5] == '0');
boolean b5_2 = (buffer[i + 5] == ' ');
boolean b5_3 = (buffer[i + 5] == '/');
boolean b5_4 = (buffer[i + 5] == '|');
boolean b5_5 = (buffer[i + 5] == 'V');
boolean b5_6 = (buffer[i + 5] == 'y');
boolean b5_7 = (buffer[i + 5] == 'F');
boolean b5_8 = (buffer[i + 5] == 'C');
boolean b5_9 = (buffer[i + 5] == 'L');
boolean b5_10 = (buffer[i + 5] == '3');
boolean b5_11 = (buffer[i + 5] == 'd');
boolean b5_12 = (buffer[i + 5] == 'T');
boolean b5_13 = (buffer[i + 5] == 'c');
boolean b5_14 = (buffer[i + 5] == 'f');
boolean b5_15 = (buffer[i + 5] == 'O');
boolean b5_16 = (buffer[i + 5] == '_');
boolean b5_17 = (buffer[i + 5] == 't');
boolean b5_18 = (buffer[i + 5] == 'r');
boolean b5_19 = (buffer[i + 5] == 'e');
boolean b5_20 = (buffer[i + 5] == 'a');
boolean b5_21 = (buffer[i + 5] == 'A');
boolean b5_22 = (buffer[i + 5] == 'o');
boolean b5_23 = (buffer[i + 5] == 'S');
boolean b5_24 = (buffer[i + 5] == 'm');
boolean b5_25 = (buffer[i + 5] == 'p');
boolean b5_26 = (buffer[i + 5] == 'E');
boolean b5_27 = (buffer[i + 5] == 'b');
boolean b5_28 = (buffer[i + 5] == 'u');
boolean b5_29 = (buffer[i + 5] == 's');
boolean b5_30 = (buffer[i + 5] == '.');
boolean b5_31 = (buffer[i + 5] == 'U');
boolean b5_32 = (buffer[i + 5] == '-');
boolean b5_33 = (buffer[i + 5] == 'i');
boolean b5_34 = (buffer[i + 5] == 'v');
boolean b5_35 = (buffer[i + 5] == 'n');
boolean b5_36 = (buffer[i + 5] == 'w');
boolean b5_37 = (buffer[i + 5] == '2');
boolean b5_38 = (buffer[i + 5] == '9');
boolean b5_39 = (buffer[i + 5] == '5');
boolean b5_40 = (buffer[i + 5] == 'g');
boolean b5_41 = (buffer[i + 5] == '7');
boolean b5_42 = (buffer[i + 5] == 'x');
boolean b5_43 = (buffer[i + 5] == '4');
boolean b5_44 = (buffer[i + 5] == '@');
boolean b5_45 = (buffer[i + 5] == 'h');
boolean b5_46 = (buffer[i + 5] == 'I');
boolean b6_1 = (buffer[i + 6] == ' ');
boolean b6_2 = (buffer[i + 6] == '8');
boolean b6_3 = (buffer[i + 6] == 'v');
boolean b6_4 = (buffer[i + 6] == '_');
boolean b6_5 = (buffer[i + 6] == 'E');
boolean b6_6 = (buffer[i + 6] == '^');
boolean b6_7 = (buffer[i + 6] == '1');
boolean b6_8 = (buffer[i + 6] == '|');
boolean b6_9 = (buffer[i + 6] == 's');
boolean b6_10 = (buffer[i + 6] == 'e');
boolean b6_11 = (buffer[i + 6] == 'R');
boolean b6_12 = (buffer[i + 6] == 'r');
boolean b6_13 = (buffer[i + 6] == 'p');
boolean b6_14 = (buffer[i + 6] == 'o');
boolean b6_15 = (buffer[i + 6] == 'D');
boolean b6_16 = (buffer[i + 6] == 'd');
boolean b6_17 = (buffer[i + 6] == 'C');
boolean b6_18 = (buffer[i + 6] == 'N');
boolean b6_19 = (buffer[i + 6] == 'f');
boolean b6_20 = (buffer[i + 6] == 'i');
boolean b6_21 = (buffer[i + 6] == 'm');
boolean b6_22 = (buffer[i + 6] == '/');
boolean b6_23 = (buffer[i + 6] == 'a');
boolean b6_24 = (buffer[i + 6] == 'g');
boolean b6_25 = (buffer[i + 6] == 'l');
boolean b6_26 = (buffer[i + 6] == 'x');
boolean b6_27 = (buffer[i + 6] == 'b');
boolean b6_28 = (buffer[i + 6] == 'A');
boolean b6_29 = (buffer[i + 6] == 'c');
boolean b6_30 = (buffer[i + 6] == '.');
boolean b6_31 = (buffer[i + 6] == 'h');
boolean b6_32 = (buffer[i + 6] == '0');
boolean b6_33 = (buffer[i + 6] == 'T');
boolean b6_34 = (buffer[i + 6] == 't');
boolean b6_35 = (buffer[i + 6] == '2');
boolean b6_36 = (buffer[i + 6] == '-');
boolean b6_37 = (buffer[i + 6] == '%');
boolean b6_38 = (buffer[i + 6] == 'w');
boolean b6_39 = (buffer[i + 6] == 'k');
boolean b6_40 = (buffer[i + 6] == '4');
boolean b6_41 = (buffer[i + 6] == 'y');
boolean b6_42 = (buffer[i + 6] == 'U');
boolean b6_43 = (buffer[i + 6] == '6');
boolean b6_44 = (buffer[i + 6] == 'n');
boolean b6_45 = (buffer[i + 6] == 'G');
boolean b6_46 = (buffer[i + 6] == '3');
boolean b6_47 = (buffer[i + 6] == 'O');
boolean b6_48 = (buffer[i + 6] == '7');
boolean b7_1 = (buffer[i + 7] == '0');
boolean b7_2 = (buffer[i + 7] == 'i');
boolean b7_3 = (buffer[i + 7] == '|');
boolean b7_4 = (buffer[i + 7] == 'B');
boolean b7_5 = (buffer[i + 7] == 'V');
boolean b7_6 = (buffer[i + 7] == ' ');
boolean b7_7 = (buffer[i + 7] == '2');
boolean b7_8 = (buffer[i + 7] == 'W');
boolean b7_9 = (buffer[i + 7] == 'q');
boolean b7_10 = (buffer[i + 7] == 'h');
boolean b7_11 = (buffer[i + 7] == 'O');
boolean b7_12 = (buffer[i + 7] == 'o');
boolean b7_13 = (buffer[i + 7] == 'g');
boolean b7_14 = (buffer[i + 7] == 'F');
boolean b7_15 = (buffer[i + 7] == '/');
boolean b7_16 = (buffer[i + 7] == 'A');
boolean b7_17 = (buffer[i + 7] == 'c');
boolean b7_18 = (buffer[i + 7] == '_');
boolean b7_19 = (buffer[i + 7] == 'd');
boolean b7_20 = (buffer[i + 7] == 'p');
boolean b7_21 = (buffer[i + 7] == 'r');
boolean b7_22 = (buffer[i + 7] == 's');
boolean b7_23 = (buffer[i + 7] == 'v');
boolean b7_24 = (buffer[i + 7] == 'u');
boolean b7_25 = (buffer[i + 7] == 'e');
boolean b7_26 = (buffer[i + 7] == 'l');
boolean b7_27 = (buffer[i + 7] == 't');
boolean b7_28 = (buffer[i + 7] == '.');
boolean b7_29 = (buffer[i + 7] == 'm');
boolean b7_30 = (buffer[i + 7] == 'C');
boolean b7_31 = (buffer[i + 7] == 'U');
boolean b7_32 = (buffer[i + 7] == 'a');
boolean b7_33 = (buffer[i + 7] == 'x');
boolean b7_34 = (buffer[i + 7] == 'E');
boolean b7_35 = (buffer[i + 7] == 'b');
boolean b7_36 = (buffer[i + 7] == 'f');
boolean b7_37 = (buffer[i + 7] == 'P');
boolean b7_38 = (buffer[i + 7] == '3');
boolean b7_39 = (buffer[i + 7] == 'R');
boolean b7_40 = (buffer[i + 7] == 'n');
boolean b7_41 = (buffer[i + 7] == '-');
boolean b7_42 = (buffer[i + 7] == 'w');
boolean b7_43 = (buffer[i + 7] == '5');
boolean b7_44 = (buffer[i + 7] == '4');
boolean b7_45 = (buffer[i + 7] == '6');
boolean b7_46 = (buffer[i + 7] == '1');
boolean b7_47 = (buffer[i + 7] == 'D');
boolean b7_48 = (buffer[i + 7] == '8');
boolean b7_49 = (buffer[i + 7] == 'S');
boolean b7_50 = (buffer[i + 7] == 'y');
boolean b7_51 = (buffer[i + 7] == '?');
boolean b7_52 = (buffer[i + 7] == ':');
boolean b8_1 = (buffer[i + 8] == '0');
boolean b8_2 = (buffer[i + 8] == ' ');
boolean b8_3 = (buffer[i + 8] == 'e');
boolean b8_4 = (buffer[i + 8] == '|');
boolean b8_5 = (buffer[i + 8] == 'E');
boolean b8_6 = (buffer[i + 8] == 'V');
boolean b8_7 = (buffer[i + 8] == '-');
boolean b8_8 = (buffer[i + 8] == '3');
boolean b8_9 = (buffer[i + 8] == 'B');
boolean b8_10 = (buffer[i + 8] == 'l');
boolean b8_11 = (buffer[i + 8] == 'M');
boolean b8_12 = (buffer[i + 8] == 'o');
boolean b8_13 = (buffer[i + 8] == 'i');
boolean b8_14 = (buffer[i + 8] == 'F');
boolean b8_15 = (buffer[i + 8] == 'a');
boolean b8_16 = (buffer[i + 8] == 'T');
boolean b8_17 = (buffer[i + 8] == 's');
boolean b8_18 = (buffer[i + 8] == 'c');
boolean b8_19 = (buffer[i + 8] == 'U');
boolean b8_20 = (buffer[i + 8] == 'S');
boolean b8_21 = (buffer[i + 8] == 'r');
boolean b8_22 = (buffer[i + 8] == 'b');
boolean b8_23 = (buffer[i + 8] == 't');
boolean b8_24 = (buffer[i + 8] == 'p');
boolean b8_25 = (buffer[i + 8] == '/');
boolean b8_26 = (buffer[i + 8] == 'n');
boolean b8_27 = (buffer[i + 8] == 'A');
boolean b8_28 = (buffer[i + 8] == 'P');
boolean b8_29 = (buffer[i + 8] == 'x');
boolean b8_30 = (buffer[i + 8] == 'R');
boolean b8_31 = (buffer[i + 8] == 'D');
boolean b8_32 = (buffer[i + 8] == '6');
boolean b8_33 = (buffer[i + 8] == 'C');
boolean b8_34 = (buffer[i + 8] == 'w');
boolean b8_35 = (buffer[i + 8] == 'd');
boolean b8_36 = (buffer[i + 8] == 'f');
boolean b8_37 = (buffer[i + 8] == 'N');
boolean b8_38 = (buffer[i + 8] == 'u');
boolean b8_39 = (buffer[i + 8] == '_');
boolean b8_40 = (buffer[i + 8] == 'm');
boolean b8_41 = (buffer[i + 8] == '1');
boolean b8_42 = (buffer[i + 8] == '>');
boolean b8_43 = (buffer[i + 8] == 'g');
boolean b8_44 = (buffer[i + 8] == 'h');
boolean b8_45 = (buffer[i + 8] == '7');
boolean b8_46 = (buffer[i + 8] == 'v');
boolean b8_47 = (buffer[i + 8] == '8');
boolean b8_48 = (buffer[i + 8] == 'q');
boolean b8_49 = (buffer[i + 8] == '5');
boolean b8_50 = (buffer[i + 8] == '2');
boolean b8_51 = (buffer[i + 8] == 'j');
boolean b8_52 = (buffer[i + 8] == '4');
boolean b8_53 = (buffer[i + 8] == 'H');
boolean b9_1 = (buffer[i + 9] == 'A');
boolean b9_2 = (buffer[i + 9] == ' ');
boolean b9_3 = (buffer[i + 9] == '|');
boolean b9_4 = (buffer[i + 9] == 'E');
boolean b9_5 = (buffer[i + 9] == 'w');
boolean b9_6 = (buffer[i + 9] == 'B');
boolean b9_7 = (buffer[i + 9] == '7');
boolean b9_8 = (buffer[i + 9] == 'V');
boolean b9_9 = (buffer[i + 9] == '-');
boolean b9_10 = (buffer[i + 9] == '4');
boolean b9_11 = (buffer[i + 9] == 'l');
boolean b9_12 = (buffer[i + 9] == 'a');
boolean b9_13 = (buffer[i + 9] == '1');
boolean b9_14 = (buffer[i + 9] == '+');
boolean b9_15 = (buffer[i + 9] == 'o');
boolean b9_16 = (buffer[i + 9] == '8');
boolean b9_17 = (buffer[i + 9] == 't');
boolean b9_18 = (buffer[i + 9] == '0');
boolean b9_19 = (buffer[i + 9] == 'n');
boolean b9_20 = (buffer[i + 9] == 'd');
boolean b9_21 = (buffer[i + 9] == 's');
boolean b9_22 = (buffer[i + 9] == '/');
boolean b9_23 = (buffer[i + 9] == 'S');
boolean b9_24 = (buffer[i + 9] == 'C');
boolean b9_25 = (buffer[i + 9] == 'c');
boolean b9_26 = (buffer[i + 9] == 'i');
boolean b9_27 = (buffer[i + 9] == 'v');
boolean b9_28 = (buffer[i + 9] == 'r');
boolean b9_29 = (buffer[i + 9] == 'e');
boolean b9_30 = (buffer[i + 9] == 'g');
boolean b9_31 = (buffer[i + 9] == 'h');
boolean b9_32 = (buffer[i + 9] == 'H');
boolean b9_33 = (buffer[i + 9] == 'P');
boolean b9_34 = (buffer[i + 9] == 'x');
boolean b9_35 = (buffer[i + 9] == 'O');
boolean b9_36 = (buffer[i + 9] == 'm');
boolean b9_37 = (buffer[i + 9] == 'F');
boolean b9_38 = (buffer[i + 9] == 'b');
boolean b9_39 = (buffer[i + 9] == 'p');
boolean b9_40 = (buffer[i + 9] == 'y');
boolean b9_41 = (buffer[i + 9] == 'u');
boolean b9_42 = (buffer[i + 9] == '_');
boolean b9_43 = (buffer[i + 9] == '<');
boolean b9_44 = (buffer[i + 9] == '(');
boolean b9_45 = (buffer[i + 9] == '=');
boolean b9_46 = (buffer[i + 9] == 'U');
boolean b9_47 = (buffer[i + 9] == 'f');
boolean b9_48 = (buffer[i + 9] == '9');
boolean b9_49 = (buffer[i + 9] == '.');
boolean b9_50 = (buffer[i + 9] == '5');
boolean b9_51 = (buffer[i + 9] == '3');
boolean b9_52 = (buffer[i + 9] == 'q');
boolean b9_53 = (buffer[i + 9] == '{');
boolean b9_54 = (buffer[i + 9] == 'R');
boolean b10_1 = (buffer[i + 10] == 'h');
boolean b10_2 = (buffer[i + 10] == '0');
boolean b10_3 = (buffer[i + 10] == '8');
boolean b10_4 = (buffer[i + 10] == 's');
boolean b10_5 = (buffer[i + 10] == '|');
boolean b10_6 = (buffer[i + 10] == 'F');
boolean b10_7 = (buffer[i + 10] == '1');
boolean b10_8 = (buffer[i + 10] == 'u');
boolean b10_9 = (buffer[i + 10] == '5');
boolean b10_10 = (buffer[i + 10] == 'c');
boolean b10_11 = (buffer[i + 10] == 'd');
boolean b10_12 = (buffer[i + 10] == ' ');
boolean b10_13 = (buffer[i + 10] == '@');
boolean b10_14 = (buffer[i + 10] == '2');
boolean b10_15 = (buffer[i + 10] == 'e');
boolean b10_16 = (buffer[i + 10] == 'm');
boolean b10_17 = (buffer[i + 10] == '3');
boolean b10_18 = (buffer[i + 10] == 'n');
boolean b10_19 = (buffer[i + 10] == '/');
boolean b10_20 = (buffer[i + 10] == 'S');
boolean b10_21 = (buffer[i + 10] == 'i');
boolean b10_22 = (buffer[i + 10] == 'I');
boolean b10_23 = (buffer[i + 10] == 'T');
boolean b10_24 = (buffer[i + 10] == 'v');
boolean b10_25 = (buffer[i + 10] == 'a');
boolean b10_26 = (buffer[i + 10] == '_');
boolean b10_27 = (buffer[i + 10] == 'p');
boolean b10_28 = (buffer[i + 10] == 'V');
boolean b10_29 = (buffer[i + 10] == 'w');
boolean b10_30 = (buffer[i + 10] == 'P');
boolean b10_31 = (buffer[i + 10] == 'l');
boolean b10_32 = (buffer[i + 10] == 'A');
boolean b10_33 = (buffer[i + 10] == 'x');
boolean b10_34 = (buffer[i + 10] == 'C');
boolean b10_35 = (buffer[i + 10] == 'y');
boolean b10_36 = (buffer[i + 10] == 'r');
boolean b10_37 = (buffer[i + 10] == 'o');
boolean b10_38 = (buffer[i + 10] == 't');
boolean b10_39 = (buffer[i + 10] == 'H');
boolean b10_40 = (buffer[i + 10] == 'E');
boolean b10_41 = (buffer[i + 10] == 'K');
boolean b10_42 = (buffer[i + 10] == 'j');
boolean b10_43 = (buffer[i + 10] == 'D');
boolean b10_44 = (buffer[i + 10] == 'f');
boolean b10_45 = (buffer[i + 10] == '\'');
boolean b10_46 = (buffer[i + 10] == 'G');
boolean b10_47 = (buffer[i + 10] == 'g');
boolean b10_48 = (buffer[i + 10] == 'b');
boolean b10_49 = (buffer[i + 10] == '9');
boolean b10_50 = (buffer[i + 10] == 'U');
boolean b10_51 = (buffer[i + 10] == '-');
boolean b10_52 = (buffer[i + 10] == 'k');
boolean b10_53 = (buffer[i + 10] == ':');
boolean b10_54 = (buffer[i + 10] == '?');
boolean b10_55 = (buffer[i + 10] == '(');
boolean b10_56 = (buffer[i + 10] == 'B');
boolean b10_57 = (buffer[i + 10] == '6');
boolean b10_58 = (buffer[i + 10] == '4');
boolean b11_1 = (buffer[i + 11] == 'h');
boolean b11_2 = (buffer[i + 11] == '1');
boolean b11_3 = (buffer[i + 11] == '0');
boolean b11_4 = (buffer[i + 11] == ' ');
boolean b11_5 = (buffer[i + 11] == 'o');
boolean b11_6 = (buffer[i + 11] == 'J');
boolean b11_7 = (buffer[i + 11] == '|');
boolean b11_8 = (buffer[i + 11] == 's');
boolean b11_9 = (buffer[i + 11] == '6');
boolean b11_10 = (buffer[i + 11] == '8');
boolean b11_11 = (buffer[i + 11] == 'f');
boolean b11_12 = (buffer[i + 11] == 'm');
boolean b11_13 = (buffer[i + 11] == 'P');
boolean b11_14 = (buffer[i + 11] == 'c');
boolean b11_15 = (buffer[i + 11] == 'p');
boolean b11_16 = (buffer[i + 11] == 'a');
boolean b11_17 = (buffer[i + 11] == 'A');
boolean b11_18 = (buffer[i + 11] == '_');
boolean b11_19 = (buffer[i + 11] == '3');
boolean b11_20 = (buffer[i + 11] == '/');
boolean b11_21 = (buffer[i + 11] == 'd');
boolean b11_22 = (buffer[i + 11] == 'i');
boolean b11_23 = (buffer[i + 11] == 'O');
boolean b11_24 = (buffer[i + 11] == 'e');
boolean b11_25 = (buffer[i + 11] == 'n');
boolean b11_26 = (buffer[i + 11] == 'U');
boolean b11_27 = (buffer[i + 11] == 'T');
boolean b11_28 = (buffer[i + 11] == 't');
boolean b11_29 = (buffer[i + 11] == 'v');
boolean b11_30 = (buffer[i + 11] == 'b');
boolean b11_31 = (buffer[i + 11] == 'D');
boolean b11_32 = (buffer[i + 11] == 'C');
boolean b11_33 = (buffer[i + 11] == 'F');
boolean b11_34 = (buffer[i + 11] == 'V');
boolean b11_35 = (buffer[i + 11] == '-');
boolean b11_36 = (buffer[i + 11] == '2');
boolean b11_37 = (buffer[i + 11] == 'u');
boolean b11_38 = (buffer[i + 11] == 'w');
boolean b11_39 = (buffer[i + 11] == 'r');
boolean b11_40 = (buffer[i + 11] == '~');
boolean b11_41 = (buffer[i + 11] == 'z');
boolean b11_42 = (buffer[i + 11] == 'S');
boolean b11_43 = (buffer[i + 11] == 'I');
boolean b11_44 = (buffer[i + 11] == '.');
boolean b11_45 = (buffer[i + 11] == 'y');
boolean b11_46 = (buffer[i + 11] == 'R');
boolean b11_47 = (buffer[i + 11] == 'g');
boolean b11_48 = (buffer[i + 11] == '%');
boolean b11_49 = (buffer[i + 11] == ':');
boolean b11_50 = (buffer[i + 11] == 'H');
boolean b11_51 = (buffer[i + 11] == '7');
boolean b11_52 = (buffer[i + 11] == 'l');
boolean b11_53 = (buffer[i + 11] == 'x');
boolean b11_54 = (buffer[i + 11] == 'q');
boolean b11_55 = (buffer[i + 11] == '9');
boolean b11_56 = (buffer[i + 11] == 'B');
boolean b11_57 = (buffer[i + 11] == '!');
boolean b11_58 = (buffer[i + 11] == 'Q');
boolean b12_1 = (buffer[i + 12] == 'h');
boolean b12_2 = (buffer[i + 12] == ' ');
boolean b12_3 = (buffer[i + 12] == 'D');
boolean b12_4 = (buffer[i + 12] == 'u');
boolean b12_5 = (buffer[i + 12] == '^');
boolean b12_6 = (buffer[i + 12] == 'X');
boolean b12_7 = (buffer[i + 12] == ']');
boolean b12_8 = (buffer[i + 12] == 'e');
boolean b12_9 = (buffer[i + 12] == '|');
boolean b12_10 = (buffer[i + 12] == '7');
boolean b12_11 = (buffer[i + 12] == '8');
boolean b12_12 = (buffer[i + 12] == 'C');
boolean b12_13 = (buffer[i + 12] == 'm');
boolean b12_14 = (buffer[i + 12] == 'c');
boolean b12_15 = (buffer[i + 12] == 'i');
boolean b12_16 = (buffer[i + 12] == '/');
boolean b12_17 = (buffer[i + 12] == 'J');
boolean b12_18 = (buffer[i + 12] == '6');
boolean b12_19 = (buffer[i + 12] == 'y');
boolean b12_20 = (buffer[i + 12] == 'A');
boolean b12_21 = (buffer[i + 12] == '1');
boolean b12_22 = (buffer[i + 12] == 'l');
boolean b12_23 = (buffer[i + 12] == '0');
boolean b12_24 = (buffer[i + 12] == 'a');
boolean b12_25 = (buffer[i + 12] == 't');
boolean b12_26 = (buffer[i + 12] == 'w');
boolean b12_27 = (buffer[i + 12] == 'n');
boolean b12_28 = (buffer[i + 12] == 'U');
boolean b12_29 = (buffer[i + 12] == 'p');
boolean b12_30 = (buffer[i + 12] == 'x');
boolean b12_31 = (buffer[i + 12] == 'N');
boolean b12_32 = (buffer[i + 12] == 'S');
boolean b12_33 = (buffer[i + 12] == 'I');
boolean b12_34 = (buffer[i + 12] == '_');
boolean b12_35 = (buffer[i + 12] == 'd');
boolean b12_36 = (buffer[i + 12] == 'r');
boolean b12_37 = (buffer[i + 12] == 'v');
boolean b12_38 = (buffer[i + 12] == 's');
boolean b12_39 = (buffer[i + 12] == '&');
boolean b12_40 = (buffer[i + 12] == 'b');
boolean b12_41 = (buffer[i + 12] == 'o');
boolean b12_42 = (buffer[i + 12] == '.');
boolean b12_43 = (buffer[i + 12] == 'g');
boolean b12_44 = (buffer[i + 12] == 'f');
boolean b12_45 = (buffer[i + 12] == 'T');
boolean b12_46 = (buffer[i + 12] == 'B');
boolean b12_47 = (buffer[i + 12] == '-');
boolean b12_48 = (buffer[i + 12] == 'G');
boolean b12_49 = (buffer[i + 12] == 'K');
boolean b12_50 = (buffer[i + 12] == 'j');
boolean b12_51 = (buffer[i + 12] == '3');
boolean b12_52 = (buffer[i + 12] == '5');
boolean b12_53 = (buffer[i + 12] == '2');
boolean b12_54 = (buffer[i + 12] == 'O');
boolean b12_55 = (buffer[i + 12] == 'E');
boolean b12_56 = (buffer[i + 12] == '4');
boolean b12_57 = (buffer[i + 12] == '9');
boolean b12_58 = (buffer[i + 12] == '@');
boolean b12_59 = (buffer[i + 12] == 'R');
boolean b12_60 = (buffer[i + 12] == 'k');
boolean b12_61 = (buffer[i + 12] == 'F');
boolean b12_62 = (buffer[i + 12] == ':');
boolean b13_1 = (buffer[i + 13] == 'h');
boolean b13_2 = (buffer[i + 13] == '0');
boolean b13_3 = (buffer[i + 13] == '7');
boolean b13_4 = (buffer[i + 13] == 'r');
boolean b13_5 = (buffer[i + 13] == '9');
boolean b13_6 = (buffer[i + 13] == '|');
boolean b13_7 = (buffer[i + 13] == 'X');
boolean b13_8 = (buffer[i + 13] == 'U');
boolean b13_9 = (buffer[i + 13] == '2');
boolean b13_10 = (buffer[i + 13] == '-');
boolean b13_11 = (buffer[i + 13] == 'A');
boolean b13_12 = (buffer[i + 13] == '8');
boolean b13_13 = (buffer[i + 13] == ' ');
boolean b13_14 = (buffer[i + 13] == 'i');
boolean b13_15 = (buffer[i + 13] == 'e');
boolean b13_16 = (buffer[i + 13] == 'o');
boolean b13_17 = (buffer[i + 13] == 'l');
boolean b13_18 = (buffer[i + 13] == 'L');
boolean b13_19 = (buffer[i + 13] == 'b');
boolean b13_20 = (buffer[i + 13] == 'y');
boolean b13_21 = (buffer[i + 13] == 'F');
boolean b13_22 = (buffer[i + 13] == 's');
boolean b13_23 = (buffer[i + 13] == 'w');
boolean b13_24 = (buffer[i + 13] == 'd');
boolean b13_25 = (buffer[i + 13] == 'R');
boolean b13_26 = (buffer[i + 13] == 'p');
boolean b13_27 = (buffer[i + 13] == 'c');
boolean b13_28 = (buffer[i + 13] == '_');
boolean b13_29 = (buffer[i + 13] == 'I');
boolean b13_30 = (buffer[i + 13] == 'N');
boolean b13_31 = (buffer[i + 13] == 'f');
boolean b13_32 = (buffer[i + 13] == 'm');
boolean b13_33 = (buffer[i + 13] == '/');
boolean b13_34 = (buffer[i + 13] == 'v');
boolean b13_35 = (buffer[i + 13] == 'a');
boolean b13_36 = (buffer[i + 13] == 't');
boolean b13_37 = (buffer[i + 13] == '.');
boolean b13_38 = (buffer[i + 13] == 'u');
boolean b13_39 = (buffer[i + 13] == 'g');
boolean b13_40 = (buffer[i + 13] == 'M');
boolean b13_41 = (buffer[i + 13] == 'C');
boolean b13_42 = (buffer[i + 13] == 'n');
boolean b13_43 = (buffer[i + 13] == 'x');
boolean b13_44 = (buffer[i + 13] == '3');
boolean b13_45 = (buffer[i + 13] == 'P');
boolean b13_46 = (buffer[i + 13] == 'S');
boolean b13_47 = (buffer[i + 13] == 'E');
boolean b13_48 = (buffer[i + 13] == 'G');
boolean b13_49 = (buffer[i + 13] == 'O');
boolean b13_50 = (buffer[i + 13] == '<');
boolean b13_51 = (buffer[i + 13] == 'T');
boolean b13_52 = (buffer[i + 13] == ':');
boolean b13_53 = (buffer[i + 13] == 'B');
boolean b13_54 = (buffer[i + 13] == 'k');
boolean b13_55 = (buffer[i + 13] == '5');
boolean b13_56 = (buffer[i + 13] == '6');
boolean b13_57 = (buffer[i + 13] == '=');
boolean b13_58 = (buffer[i + 13] == '1');
boolean b13_59 = (buffer[i + 13] == '#');
boolean b13_60 = (buffer[i + 13] == '4');
boolean b13_61 = (buffer[i + 13] == 'W');
boolean b14_1 = (buffer[i + 14] == ' ');
boolean b14_2 = (buffer[i + 14] == 'p');
boolean b14_3 = (buffer[i + 14] == '0');
boolean b14_4 = (buffer[i + 14] == '1');
boolean b14_5 = (buffer[i + 14] == 'c');
boolean b14_6 = (buffer[i + 14] == '8');
boolean b14_7 = (buffer[i + 14] == 'X');
boolean b14_8 = (buffer[i + 14] == '|');
boolean b14_9 = (buffer[i + 14] == '9');
boolean b14_10 = (buffer[i + 14] == 'n');
boolean b14_11 = (buffer[i + 14] == '!');
boolean b14_12 = (buffer[i + 14] == 'C');
boolean b14_13 = (buffer[i + 14] == 'm');
boolean b14_14 = (buffer[i + 14] == 'e');
boolean b14_15 = (buffer[i + 14] == 'u');
boolean b14_16 = (buffer[i + 14] == 'U');
boolean b14_17 = (buffer[i + 14] == 'h');
boolean b14_18 = (buffer[i + 14] == '-');
boolean b14_19 = (buffer[i + 14] == 'l');
boolean b14_20 = (buffer[i + 14] == 'F');
boolean b14_21 = (buffer[i + 14] == 'o');
boolean b14_22 = (buffer[i + 14] == 'i');
boolean b14_23 = (buffer[i + 14] == 'w');
boolean b14_24 = (buffer[i + 14] == 'a');
boolean b14_25 = (buffer[i + 14] == '5');
boolean b14_26 = (buffer[i + 14] == '/');
boolean b14_27 = (buffer[i + 14] == 's');
boolean b14_28 = (buffer[i + 14] == 't');
boolean b14_29 = (buffer[i + 14] == 'f');
boolean b14_30 = (buffer[i + 14] == 'G');
boolean b14_31 = (buffer[i + 14] == 'O');
boolean b14_32 = (buffer[i + 14] == 'S');
boolean b14_33 = (buffer[i + 14] == 'V');
boolean b14_34 = (buffer[i + 14] == 'v');
boolean b14_35 = (buffer[i + 14] == 'r');
boolean b14_36 = (buffer[i + 14] == 'd');
boolean b14_37 = (buffer[i + 14] == '_');
boolean b14_38 = (buffer[i + 14] == '2');
boolean b14_39 = (buffer[i + 14] == 'x');
boolean b14_40 = (buffer[i + 14] == 'T');
boolean b14_41 = (buffer[i + 14] == 'g');
boolean b14_42 = (buffer[i + 14] == 'b');
boolean b14_43 = (buffer[i + 14] == 'I');
boolean b14_44 = (buffer[i + 14] == '6');
boolean b14_45 = (buffer[i + 14] == 'A');
boolean b14_46 = (buffer[i + 14] == 'M');
boolean b14_47 = (buffer[i + 14] == 'N');
boolean b14_48 = (buffer[i + 14] == '3');
boolean b14_49 = (buffer[i + 14] == 'y');
boolean b14_50 = (buffer[i + 14] == '.');
boolean b14_51 = (buffer[i + 14] == '>');
boolean b14_52 = (buffer[i + 14] == 'E');
boolean b14_53 = (buffer[i + 14] == '%');
boolean b14_54 = (buffer[i + 14] == 'P');
boolean b14_55 = (buffer[i + 14] == 'B');
boolean b14_56 = (buffer[i + 14] == ':');
boolean b14_57 = (buffer[i + 14] == 'H');
boolean b14_58 = (buffer[i + 14] == '4');
boolean b14_59 = (buffer[i + 14] == '?');
boolean b14_60 = (buffer[i + 14] == 'k');
boolean b14_61 = (buffer[i + 14] == 'D');
boolean b14_62 = (buffer[i + 14] == 'L');
boolean b14_63 = (buffer[i + 14] == '=');
boolean b14_64 = (buffer[i + 14] == '7');
boolean b14_65 = (buffer[i + 14] == 'q');
boolean b14_66 = (buffer[i + 14] == '(');
boolean b15_1 = (buffer[i + 15] == 'M');
boolean b15_2 = (buffer[i + 15] == 'h');
boolean b15_3 = (buffer[i + 15] == ' ');
boolean b15_4 = (buffer[i + 15] == 'F');
boolean b15_5 = (buffer[i + 15] == '|');
boolean b15_6 = (buffer[i + 15] == 'e');
boolean b15_7 = (buffer[i + 15] == '9');
boolean b15_8 = (buffer[i + 15] == 'X');
boolean b15_9 = (buffer[i + 15] == '8');
boolean b15_10 = (buffer[i + 15] == 'o');
boolean b15_11 = (buffer[i + 15] == 'P');
boolean b15_12 = (buffer[i + 15] == 'a');
boolean b15_13 = (buffer[i + 15] == '=');
boolean b15_14 = (buffer[i + 15] == 'O');
boolean b15_15 = (buffer[i + 15] == '4');
boolean b15_16 = (buffer[i + 15] == 'T');
boolean b15_17 = (buffer[i + 15] == 'W');
boolean b15_18 = (buffer[i + 15] == 'c');
boolean b15_19 = (buffer[i + 15] == 'p');
boolean b15_20 = (buffer[i + 15] == 'm');
boolean b15_21 = (buffer[i + 15] == 'i');
boolean b15_22 = (buffer[i + 15] == 'R');
boolean b15_23 = (buffer[i + 15] == '0');
boolean b15_24 = (buffer[i + 15] == '5');
boolean b15_25 = (buffer[i + 15] == 's');
boolean b15_26 = (buffer[i + 15] == 'G');
boolean b15_27 = (buffer[i + 15] == 'r');
boolean b15_28 = (buffer[i + 15] == 'A');
boolean b15_29 = (buffer[i + 15] == 't');
boolean b15_30 = (buffer[i + 15] == 'f');
boolean b15_31 = (buffer[i + 15] == '7');
boolean b15_32 = (buffer[i + 15] == 'C');
boolean b15_33 = (buffer[i + 15] == 'n');
boolean b15_34 = (buffer[i + 15] == 'b');
boolean b15_35 = (buffer[i + 15] == '/');
boolean b15_36 = (buffer[i + 15] == 'y');
boolean b15_37 = (buffer[i + 15] == 'd');
boolean b15_38 = (buffer[i + 15] == 'w');
boolean b15_39 = (buffer[i + 15] == 'E');
boolean b15_40 = (buffer[i + 15] == 'v');
boolean b15_41 = (buffer[i + 15] == 'N');
boolean b15_42 = (buffer[i + 15] == 'S');
boolean b15_43 = (buffer[i + 15] == 'l');
boolean b15_44 = (buffer[i + 15] == '_');
boolean b15_45 = (buffer[i + 15] == '3');
boolean b15_46 = (buffer[i + 15] == 'J');
boolean b15_47 = (buffer[i + 15] == 'H');
boolean b15_48 = (buffer[i + 15] == 'g');
boolean b15_49 = (buffer[i + 15] == '-');
boolean b15_50 = (buffer[i + 15] == '1');
boolean b15_51 = (buffer[i + 15] == 'u');
boolean b15_52 = (buffer[i + 15] == 'x');
boolean b15_53 = (buffer[i + 15] == 'L');
boolean b15_54 = (buffer[i + 15] == 'j');
boolean b15_55 = (buffer[i + 15] == '.');
boolean b15_56 = (buffer[i + 15] == 'k');
boolean b15_57 = (buffer[i + 15] == 'z');
boolean b15_58 = (buffer[i + 15] == '<');
boolean b15_59 = (buffer[i + 15] == 'I');
boolean b15_60 = (buffer[i + 15] == '2');
boolean b15_61 = (buffer[i + 15] == '%');
boolean b15_62 = (buffer[i + 15] == ':');
boolean b15_63 = (buffer[i + 15] == 'q');
boolean b15_64 = (buffer[i + 15] == '6');
boolean b16_1 = (buffer[i + 16] == 'B');
boolean b16_2 = (buffer[i + 16] == 'y');
boolean b16_3 = (buffer[i + 16] == 'A');
boolean b16_4 = (buffer[i + 16] == '0');
boolean b16_5 = (buffer[i + 16] == 'F');
boolean b16_6 = (buffer[i + 16] == '/');
boolean b16_7 = (buffer[i + 16] == ' ');
boolean b16_8 = (buffer[i + 16] == '%');
boolean b16_9 = (buffer[i + 16] == 'E');
boolean b16_10 = (buffer[i + 16] == '8');
boolean b16_11 = (buffer[i + 16] == 'm');
boolean b16_12 = (buffer[i + 16] == 'i');
boolean b16_13 = (buffer[i + 16] == 'b');
boolean b16_14 = (buffer[i + 16] == '=');
boolean b16_15 = (buffer[i + 16] == 'M');
boolean b16_16 = (buffer[i + 16] == '|');
boolean b16_17 = (buffer[i + 16] == 'J');
boolean b16_18 = (buffer[i + 16] == 'h');
boolean b16_19 = (buffer[i + 16] == 'o');
boolean b16_20 = (buffer[i + 16] == 's');
boolean b16_21 = (buffer[i + 16] == 'a');
boolean b16_22 = (buffer[i + 16] == '2');
boolean b16_23 = (buffer[i + 16] == 'd');
boolean b16_24 = (buffer[i + 16] == 'D');
boolean b16_25 = (buffer[i + 16] == 'C');
boolean b16_26 = (buffer[i + 16] == 'e');
boolean b16_27 = (buffer[i + 16] == 'N');
boolean b16_28 = (buffer[i + 16] == 'l');
boolean b16_29 = (buffer[i + 16] == 'c');
boolean b16_30 = (buffer[i + 16] == 'r');
boolean b16_31 = (buffer[i + 16] == 'L');
boolean b16_32 = (buffer[i + 16] == '5');
boolean b16_33 = (buffer[i + 16] == 'U');
boolean b16_34 = (buffer[i + 16] == 'p');
boolean b16_35 = (buffer[i + 16] == 't');
boolean b16_36 = (buffer[i + 16] == 'T');
boolean b16_37 = (buffer[i + 16] == 'P');
boolean b16_38 = (buffer[i + 16] == '_');
boolean b16_39 = (buffer[i + 16] == 'R');
boolean b16_40 = (buffer[i + 16] == 'f');
boolean b16_41 = (buffer[i + 16] == 'n');
boolean b16_42 = (buffer[i + 16] == 'g');
boolean b16_43 = (buffer[i + 16] == 'v');
boolean b16_44 = (buffer[i + 16] == 'w');
boolean b16_45 = (buffer[i + 16] == '+');
boolean b16_46 = (buffer[i + 16] == 'I');
boolean b16_47 = (buffer[i + 16] == '?');
boolean b16_48 = (buffer[i + 16] == 'z');
boolean b16_49 = (buffer[i + 16] == 'j');
boolean b16_50 = (buffer[i + 16] == '-');
boolean b16_51 = (buffer[i + 16] == 'u');
boolean b16_52 = (buffer[i + 16] == 'H');
boolean b16_53 = (buffer[i + 16] == 'Y');
boolean b16_54 = (buffer[i + 16] == '.');
boolean b16_55 = (buffer[i + 16] == 'q');
boolean b16_56 = (buffer[i + 16] == 'x');
boolean b16_57 = (buffer[i + 16] == 'V');
boolean b16_58 = (buffer[i + 16] == 'k');
boolean b16_59 = (buffer[i + 16] == '3');
boolean b16_60 = (buffer[i + 16] == 'O');
boolean b16_61 = (buffer[i + 16] == '1');
boolean b16_62 = (buffer[i + 16] == '<');
boolean b16_63 = (buffer[i + 16] == '9');
boolean b16_64 = (buffer[i + 16] == '7');
boolean b16_65 = (buffer[i + 16] == 'X');
boolean b16_66 = (buffer[i + 16] == '#');
boolean b16_67 = (buffer[i + 16] == ':');
boolean b16_68 = (buffer[i + 16] == '&');
boolean b16_69 = (buffer[i + 16] == '6');
boolean b16_70 = (buffer[i + 16] == '4');
boolean b16_71 = (buffer[i + 16] == 'K');
boolean b17_1 = (buffer[i + 17] == 'N');
boolean b17_2 = (buffer[i + 17] == ' ');
boolean b17_3 = (buffer[i + 17] == 's');
boolean b17_4 = (buffer[i + 17] == 'b');
boolean b17_5 = (buffer[i + 17] == '1');
boolean b17_6 = (buffer[i + 17] == '0');
boolean b17_7 = (buffer[i + 17] == 'F');
boolean b17_8 = (buffer[i + 17] == 't');
boolean b17_9 = (buffer[i + 17] == '.');
boolean b17_10 = (buffer[i + 17] == '|');
boolean b17_11 = (buffer[i + 17] == 'G');
boolean b17_12 = (buffer[i + 17] == 'p');
boolean b17_13 = (buffer[i + 17] == 'n');
boolean b17_14 = (buffer[i + 17] == 'S');
boolean b17_15 = (buffer[i + 17] == 'c');
boolean b17_16 = (buffer[i + 17] == '=');
boolean b17_17 = (buffer[i + 17] == 'e');
boolean b17_18 = (buffer[i + 17] == 'P');
boolean b17_19 = (buffer[i + 17] == 'a');
boolean b17_20 = (buffer[i + 17] == 'y');
boolean b17_21 = (buffer[i + 17] == 'm');
boolean b17_22 = (buffer[i + 17] == '8');
boolean b17_23 = (buffer[i + 17] == '/');
boolean b17_24 = (buffer[i + 17] == 'Y');
boolean b17_25 = (buffer[i + 17] == '@');
boolean b17_26 = (buffer[i + 17] == 'r');
boolean b17_27 = (buffer[i + 17] == 'U');
boolean b17_28 = (buffer[i + 17] == 'o');
boolean b17_29 = (buffer[i + 17] == 'h');
boolean b17_30 = (buffer[i + 17] == 'A');
boolean b17_31 = (buffer[i + 17] == 'M');
boolean b17_32 = (buffer[i + 17] == 'C');
boolean b17_33 = (buffer[i + 17] == '3');
boolean b17_34 = (buffer[i + 17] == 'd');
boolean b17_35 = (buffer[i + 17] == 'l');
boolean b17_36 = (buffer[i + 17] == 'w');
boolean b17_37 = (buffer[i + 17] == 'f');
boolean b17_38 = (buffer[i + 17] == 'O');
boolean b17_39 = (buffer[i + 17] == 'E');
boolean b17_40 = (buffer[i + 17] == 'D');
boolean b17_41 = (buffer[i + 17] == 'R');
boolean b17_42 = (buffer[i + 17] == 'I');
boolean b17_43 = (buffer[i + 17] == '_');
boolean b17_44 = (buffer[i + 17] == 'i');
boolean b17_45 = (buffer[i + 17] == 'v');
boolean b17_46 = (buffer[i + 17] == '?');
boolean b17_47 = (buffer[i + 17] == 'x');
boolean b17_48 = (buffer[i + 17] == '-');
boolean b17_49 = (buffer[i + 17] == 'W');
boolean b17_50 = (buffer[i + 17] == 'g');
boolean b17_51 = (buffer[i + 17] == 'V');
boolean b17_52 = (buffer[i + 17] == 'u');
boolean b17_53 = (buffer[i + 17] == 'X');
boolean b17_54 = (buffer[i + 17] == '5');
boolean b17_55 = (buffer[i + 17] == 'j');
boolean b17_56 = (buffer[i + 17] == 'q');
boolean b17_57 = (buffer[i + 17] == 'L');
boolean b17_58 = (buffer[i + 17] == '%');
boolean b17_59 = (buffer[i + 17] == 'k');
boolean b17_60 = (buffer[i + 17] == 'T');
boolean b17_61 = (buffer[i + 17] == '7');
boolean b17_62 = (buffer[i + 17] == '<');
boolean b17_63 = (buffer[i + 17] == 'Z');
boolean b17_64 = (buffer[i + 17] == '#');
boolean b17_65 = (buffer[i + 17] == '2');
boolean b17_66 = (buffer[i + 17] == 'z');
boolean b17_67 = (buffer[i + 17] == '6');
boolean b17_68 = (buffer[i + 17] == '4');
boolean b17_69 = (buffer[i + 17] == 'B');
boolean b17_70 = (buffer[i + 17] == 'K');
boolean b18_1 = (buffer[i + 18] == '|');
boolean b18_2 = (buffer[i + 18] == 'F');
boolean b18_3 = (buffer[i + 18] == 'M');
boolean b18_4 = (buffer[i + 18] == 'e');
boolean b18_5 = (buffer[i + 18] == ' ');
boolean b18_6 = (buffer[i + 18] == 'B');
boolean b18_7 = (buffer[i + 18] == '1');
boolean b18_8 = (buffer[i + 18] == 'E');
boolean b18_9 = (buffer[i + 18] == 'V');
boolean b18_10 = (buffer[i + 18] == 'P');
boolean b18_11 = (buffer[i + 18] == 'p');
boolean b18_12 = (buffer[i + 18] == 'r');
boolean b18_13 = (buffer[i + 18] == 'g');
boolean b18_14 = (buffer[i + 18] == 'u');
boolean b18_15 = (buffer[i + 18] == 'd');
boolean b18_16 = (buffer[i + 18] == '=');
boolean b18_17 = (buffer[i + 18] == 't');
boolean b18_18 = (buffer[i + 18] == '8');
boolean b18_19 = (buffer[i + 18] == 'i');
boolean b18_20 = (buffer[i + 18] == 'N');
boolean b18_21 = (buffer[i + 18] == 'a');
boolean b18_22 = (buffer[i + 18] == '0');
boolean b18_23 = (buffer[i + 18] == 'A');
boolean b18_24 = (buffer[i + 18] == 'I');
boolean b18_25 = (buffer[i + 18] == '.');
boolean b18_26 = (buffer[i + 18] == '-');
boolean b18_27 = (buffer[i + 18] == 'T');
boolean b18_28 = (buffer[i + 18] == 'o');
boolean b18_29 = (buffer[i + 18] == '7');
boolean b18_30 = (buffer[i + 18] == 's');
boolean b18_31 = (buffer[i + 18] == '3');
boolean b18_32 = (buffer[i + 18] == 'm');
boolean b18_33 = (buffer[i + 18] == '/');
boolean b18_34 = (buffer[i + 18] == 'f');
boolean b18_35 = (buffer[i + 18] == '_');
boolean b18_36 = (buffer[i + 18] == 'y');
boolean b18_37 = (buffer[i + 18] == 'h');
boolean b18_38 = (buffer[i + 18] == 'w');
boolean b18_39 = (buffer[i + 18] == 'D');
boolean b18_40 = (buffer[i + 18] == 'S');
boolean b18_41 = (buffer[i + 18] == 'n');
boolean b18_42 = (buffer[i + 18] == 'b');
boolean b18_43 = (buffer[i + 18] == 'v');
boolean b18_44 = (buffer[i + 18] == 'C');
boolean b18_45 = (buffer[i + 18] == 'l');
boolean b18_46 = (buffer[i + 18] == 'G');
boolean b18_47 = (buffer[i + 18] == 'c');
boolean b18_48 = (buffer[i + 18] == '?');
boolean b18_49 = (buffer[i + 18] == 'q');
boolean b18_50 = (buffer[i + 18] == 'k');
boolean b18_51 = (buffer[i + 18] == 'H');
boolean b18_52 = (buffer[i + 18] == 'L');
boolean b18_53 = (buffer[i + 18] == 'X');
boolean b18_54 = (buffer[i + 18] == '2');
boolean b18_55 = (buffer[i + 18] == 'R');
boolean b18_56 = (buffer[i + 18] == 'W');
boolean b18_57 = (buffer[i + 18] == '5');
boolean b18_58 = (buffer[i + 18] == 'U');
boolean b18_59 = (buffer[i + 18] == '<');
boolean b18_60 = (buffer[i + 18] == '%');
boolean b18_61 = (buffer[i + 18] == '(');
boolean b18_62 = (buffer[i + 18] == 'Z');
boolean b18_63 = (buffer[i + 18] == 'K');
boolean b18_64 = (buffer[i + 18] == 'x');
boolean b18_65 = (buffer[i + 18] == 'z');
boolean b18_66 = (buffer[i + 18] == ':');
boolean b18_67 = (buffer[i + 18] == '9');
boolean b18_68 = (buffer[i + 18] == '[');
boolean b18_69 = (buffer[i + 18] == '4');
boolean b19_1 = (buffer[i + 19] == '1');
boolean b19_2 = (buffer[i + 19] == 'T');
boolean b19_3 = (buffer[i + 19] == 'o');
boolean b19_4 = (buffer[i + 19] == ' ');
boolean b19_5 = (buffer[i + 19] == 't');
boolean b19_6 = (buffer[i + 19] == '0');
boolean b19_7 = (buffer[i + 19] == 'F');
boolean b19_8 = (buffer[i + 19] == 'm');
boolean b19_9 = (buffer[i + 19] == '7');
boolean b19_10 = (buffer[i + 19] == '|');
boolean b19_11 = (buffer[i + 19] == 'A');
boolean b19_12 = (buffer[i + 19] == 'a');
boolean b19_13 = (buffer[i + 19] == 'p');
boolean b19_14 = (buffer[i + 19] == 'e');
boolean b19_15 = (buffer[i + 19] == 'i');
boolean b19_16 = (buffer[i + 19] == 's');
boolean b19_17 = (buffer[i + 19] == '=');
boolean b19_18 = (buffer[i + 19] == 'E');
boolean b19_19 = (buffer[i + 19] == '9');
boolean b19_20 = (buffer[i + 19] == 'n');
boolean b19_21 = (buffer[i + 19] == 'L');
boolean b19_22 = (buffer[i + 19] == 'N');
boolean b19_23 = (buffer[i + 19] == 'D');
boolean b19_24 = (buffer[i + 19] == 'b');
boolean b19_25 = (buffer[i + 19] == 'S');
boolean b19_26 = (buffer[i + 19] == '.');
boolean b19_27 = (buffer[i + 19] == '2');
boolean b19_28 = (buffer[i + 19] == 'x');
boolean b19_29 = (buffer[i + 19] == 'B');
boolean b19_30 = (buffer[i + 19] == 'u');
boolean b19_31 = (buffer[i + 19] == 'r');
boolean b19_32 = (buffer[i + 19] == 'l');
boolean b19_33 = (buffer[i + 19] == 'g');
boolean b19_34 = (buffer[i + 19] == 'd');
boolean b19_35 = (buffer[i + 19] == 'h');
boolean b19_36 = (buffer[i + 19] == '/');
boolean b19_37 = (buffer[i + 19] == 'v');
boolean b19_38 = (buffer[i + 19] == 'c');
boolean b19_39 = (buffer[i + 19] == 'w');
boolean b19_40 = (buffer[i + 19] == 'R');
boolean b19_41 = (buffer[i + 19] == 'C');
boolean b19_42 = (buffer[i + 19] == 'Y');
boolean b19_43 = (buffer[i + 19] == 'q');
boolean b19_44 = (buffer[i + 19] == 'f');
boolean b19_45 = (buffer[i + 19] == '_');
boolean b19_46 = (buffer[i + 19] == '+');
boolean b19_47 = (buffer[i + 19] == 'W');
boolean b19_48 = (buffer[i + 19] == '-');
boolean b19_49 = (buffer[i + 19] == 'P');
boolean b19_50 = (buffer[i + 19] == 'O');
boolean b19_51 = (buffer[i + 19] == '?');
boolean b19_52 = (buffer[i + 19] == 'G');
boolean b19_53 = (buffer[i + 19] == 'V');
boolean b19_54 = (buffer[i + 19] == 'U');
boolean b19_55 = (buffer[i + 19] == 'y');
boolean b19_56 = (buffer[i + 19] == '@');
boolean b19_57 = (buffer[i + 19] == '5');
boolean b19_58 = (buffer[i + 19] == 'Q');
boolean b19_59 = (buffer[i + 19] == 'k');
boolean b19_60 = (buffer[i + 19] == '4');
boolean b19_61 = (buffer[i + 19] == '%');
boolean b19_62 = (buffer[i + 19] == '3');
boolean b19_63 = (buffer[i + 19] == 'I');
boolean b19_64 = (buffer[i + 19] == '!');
boolean b19_65 = (buffer[i + 19] == 'z');
boolean b19_66 = (buffer[i + 19] == ':');
boolean b19_67 = (buffer[i + 19] == '8');
boolean b19_68 = (buffer[i + 19] == '6');
boolean b19_69 = (buffer[i + 19] == 'Z');
boolean b20_1 = (buffer[i + 20] == 'G');
boolean b20_2 = (buffer[i + 20] == '0');
boolean b20_3 = (buffer[i + 20] == 'R');
boolean b20_4 = (buffer[i + 20] == 'P');
boolean b20_5 = (buffer[i + 20] == 'u');
boolean b20_6 = (buffer[i + 20] == 'z');
boolean b20_7 = (buffer[i + 20] == 'a');
boolean b20_8 = (buffer[i + 20] == 'g');
boolean b20_9 = (buffer[i + 20] == 's');
boolean b20_10 = (buffer[i + 20] == '|');
boolean b20_11 = (buffer[i + 20] == ' ');
boolean b20_12 = (buffer[i + 20] == '4');
boolean b20_13 = (buffer[i + 20] == 'p');
boolean b20_14 = (buffer[i + 20] == '8');
boolean b20_15 = (buffer[i + 20] == '2');
boolean b20_16 = (buffer[i + 20] == '9');
boolean b20_17 = (buffer[i + 20] == 'w');
boolean b20_18 = (buffer[i + 20] == 'S');
boolean b20_19 = (buffer[i + 20] == 'n');
boolean b20_20 = (buffer[i + 20] == 't');
boolean b20_21 = (buffer[i + 20] == 'f');
boolean b20_22 = (buffer[i + 20] == '=');
boolean b20_23 = (buffer[i + 20] == 'r');
boolean b20_24 = (buffer[i + 20] == 'E');
boolean b20_25 = (buffer[i + 20] == 'U');
boolean b20_26 = (buffer[i + 20] == 'o');
boolean b20_27 = (buffer[i + 20] == 'C');
boolean b20_28 = (buffer[i + 20] == 'd');
boolean b20_29 = (buffer[i + 20] == 'M');
boolean b20_30 = (buffer[i + 20] == 'c');
boolean b20_31 = (buffer[i + 20] == 'v');
boolean b20_32 = (buffer[i + 20] == '3');
boolean b20_33 = (buffer[i + 20] == '/');
boolean b20_34 = (buffer[i + 20] == '.');
boolean b20_35 = (buffer[i + 20] == 'L');
boolean b20_36 = (buffer[i + 20] == 'V');
boolean b20_37 = (buffer[i + 20] == 'A');
boolean b20_38 = (buffer[i + 20] == 'i');
boolean b20_39 = (buffer[i + 20] == 'F');
boolean b20_40 = (buffer[i + 20] == 'l');
boolean b20_41 = (buffer[i + 20] == 'b');
boolean b20_42 = (buffer[i + 20] == 'm');
boolean b20_43 = (buffer[i + 20] == 'e');
boolean b20_44 = (buffer[i + 20] == 'T');
boolean b20_45 = (buffer[i + 20] == '-');
boolean b20_46 = (buffer[i + 20] == 'N');
boolean b20_47 = (buffer[i + 20] == 'x');
boolean b20_48 = (buffer[i + 20] == 'W');
boolean b20_49 = (buffer[i + 20] == 'J');
boolean b20_50 = (buffer[i + 20] == 'h');
boolean b20_51 = (buffer[i + 20] == '?');
boolean b20_52 = (buffer[i + 20] == 'q');
boolean b20_53 = (buffer[i + 20] == 'I');
boolean b20_54 = (buffer[i + 20] == '[');
boolean b20_55 = (buffer[i + 20] == 'B');
boolean b20_56 = (buffer[i + 20] == 'y');
boolean b20_57 = (buffer[i + 20] == '_');
boolean b20_58 = (buffer[i + 20] == '1');
boolean b20_59 = (buffer[i + 20] == 'H');
boolean b20_60 = (buffer[i + 20] == 'D');
boolean b20_61 = (buffer[i + 20] == 'k');
boolean b20_62 = (buffer[i + 20] == ',');
boolean b20_63 = (buffer[i + 20] == '<');
boolean b20_64 = (buffer[i + 20] == 'Y');
boolean b20_65 = (buffer[i + 20] == 'K');
boolean b20_66 = (buffer[i + 20] == 'O');
boolean b20_67 = (buffer[i + 20] == '%');
boolean b20_68 = (buffer[i + 20] == ':');
boolean b20_69 = (buffer[i + 20] == 'j');
boolean b20_70 = (buffer[i + 20] == '6');
boolean b20_71 = (buffer[i + 20] == '7');
boolean b20_72 = (buffer[i + 20] == ')');
boolean b20_73 = (buffer[i + 20] == '5');
boolean b20_74 = (buffer[i + 20] == '&');
boolean b21_1 = (buffer[i + 21] == 'q');
boolean b21_2 = (buffer[i + 21] == 'e');
boolean b21_3 = (buffer[i + 21] == ' ');
boolean b21_4 = (buffer[i + 21] == 'a');
boolean b21_5 = (buffer[i + 21] == 't');
boolean b21_6 = (buffer[i + 21] == 'A');
boolean b21_7 = (buffer[i + 21] == 's');
boolean b21_8 = (buffer[i + 21] == 'h');
boolean b21_9 = (buffer[i + 21] == 'l');
boolean b21_10 = (buffer[i + 21] == '0');
boolean b21_11 = (buffer[i + 21] == 'F');
boolean b21_12 = (buffer[i + 21] == '9');
boolean b21_13 = (buffer[i + 21] == 'u');
boolean b21_14 = (buffer[i + 21] == '8');
boolean b21_15 = (buffer[i + 21] == '/');
boolean b21_16 = (buffer[i + 21] == 'B');
boolean b21_17 = (buffer[i + 21] == 'c');
boolean b21_18 = (buffer[i + 21] == 'S');
boolean b21_19 = (buffer[i + 21] == 'p');
boolean b21_20 = (buffer[i + 21] == 'g');
boolean b21_21 = (buffer[i + 21] == '=');
boolean b21_22 = (buffer[i + 21] == 'O');
boolean b21_23 = (buffer[i + 21] == 'E');
boolean b21_24 = (buffer[i + 21] == '3');
boolean b21_25 = (buffer[i + 21] == 'P');
boolean b21_26 = (buffer[i + 21] == 'w');
boolean b21_27 = (buffer[i + 21] == '@');
boolean b21_28 = (buffer[i + 21] == 'r');
boolean b21_29 = (buffer[i + 21] == '2');
boolean b21_30 = (buffer[i + 21] == 'I');
boolean b21_31 = (buffer[i + 21] == 'o');
boolean b21_32 = (buffer[i + 21] == '|');
boolean b21_33 = (buffer[i + 21] == 'L');
boolean b21_34 = (buffer[i + 21] == 'N');
boolean b21_35 = (buffer[i + 21] == '-');
boolean b21_36 = (buffer[i + 21] == 'n');
boolean b21_37 = (buffer[i + 21] == '1');
boolean b21_38 = (buffer[i + 21] == 'D');
boolean b21_39 = (buffer[i + 21] == 'b');
boolean b21_40 = (buffer[i + 21] == '_');
boolean b21_41 = (buffer[i + 21] == 'i');
boolean b21_42 = (buffer[i + 21] == 'm');
boolean b21_43 = (buffer[i + 21] == 'd');
boolean b21_44 = (buffer[i + 21] == 'f');
boolean b21_45 = (buffer[i + 21] == 'Y');
boolean b21_46 = (buffer[i + 21] == 'x');
boolean b21_47 = (buffer[i + 21] == 'G');
boolean b21_48 = (buffer[i + 21] == '?');
boolean b21_49 = (buffer[i + 21] == 'y');
boolean b21_50 = (buffer[i + 21] == 'C');
boolean b21_51 = (buffer[i + 21] == 'k');
boolean b21_52 = (buffer[i + 21] == 'j');
boolean b21_53 = (buffer[i + 21] == 'v');
boolean b21_54 = (buffer[i + 21] == 'M');
boolean b21_55 = (buffer[i + 21] == 'V');
boolean b21_56 = (buffer[i + 21] == 'U');
boolean b21_57 = (buffer[i + 21] == '.');
boolean b21_58 = (buffer[i + 21] == 'T');
boolean b21_59 = (buffer[i + 21] == '[');
boolean b21_60 = (buffer[i + 21] == 'z');
boolean b21_61 = (buffer[i + 21] == 'W');
boolean b21_62 = (buffer[i + 21] == 'R');
boolean b21_63 = (buffer[i + 21] == 'H');
boolean b21_64 = (buffer[i + 21] == '%');
boolean b21_65 = (buffer[i + 21] == '>');
boolean b21_66 = (buffer[i + 21] == '4');
boolean b21_67 = (buffer[i + 21] == 'J');
boolean b21_68 = (buffer[i + 21] == '&');
boolean b21_69 = (buffer[i + 21] == ':');
boolean b21_70 = (buffer[i + 21] == '5');
boolean b21_71 = (buffer[i + 21] == 'Z');
boolean b21_72 = (buffer[i + 21] == '7');
boolean b22_1 = (buffer[i + 22] == 'a');
boolean b22_2 = (buffer[i + 22] == 't');
boolean b22_3 = (buffer[i + 22] == '0');
boolean b22_4 = (buffer[i + 22] == 'm');
boolean b22_5 = (buffer[i + 22] == 'W');
boolean b22_6 = (buffer[i + 22] == 'N');
boolean b22_7 = (buffer[i + 22] == 'P');
boolean b22_8 = (buffer[i + 22] == 'l');
boolean b22_9 = (buffer[i + 22] == 'h');
boolean b22_10 = (buffer[i + 22] == 'r');
boolean b22_11 = (buffer[i + 22] == 'A');
boolean b22_12 = (buffer[i + 22] == 'p');
boolean b22_13 = (buffer[i + 22] == 's');
boolean b22_14 = (buffer[i + 22] == 'e');
boolean b22_15 = (buffer[i + 22] == 'i');
boolean b22_16 = (buffer[i + 22] == 'n');
boolean b22_17 = (buffer[i + 22] == '7');
boolean b22_18 = (buffer[i + 22] == '.');
boolean b22_19 = (buffer[i + 22] == 'F');
boolean b22_20 = (buffer[i + 22] == '|');
boolean b22_21 = (buffer[i + 22] == '%');
boolean b22_22 = (buffer[i + 22] == ' ');
boolean b22_23 = (buffer[i + 22] == 'o');
boolean b22_24 = (buffer[i + 22] == 'b');
boolean b22_25 = (buffer[i + 22] == '-');
boolean b22_26 = (buffer[i + 22] == '=');
boolean b22_27 = (buffer[i + 22] == 'E');
boolean b22_28 = (buffer[i + 22] == 'c');
boolean b22_29 = (buffer[i + 22] == '9');
boolean b22_30 = (buffer[i + 22] == 'D');
boolean b22_31 = (buffer[i + 22] == 'U');
boolean b22_32 = (buffer[i + 22] == '5');
boolean b22_33 = (buffer[i + 22] == 'f');
boolean b22_34 = (buffer[i + 22] == '2');
boolean b22_35 = (buffer[i + 22] == 'R');
boolean b22_36 = (buffer[i + 22] == 'q');
boolean b22_37 = (buffer[i + 22] == 'B');
boolean b22_38 = (buffer[i + 22] == '1');
boolean b22_39 = (buffer[i + 22] == '/');
boolean b22_40 = (buffer[i + 22] == ',');
boolean b22_41 = (buffer[i + 22] == 'u');
boolean b22_42 = (buffer[i + 22] == 'w');
boolean b22_43 = (buffer[i + 22] == '_');
boolean b22_44 = (buffer[i + 22] == 'v');
boolean b22_45 = (buffer[i + 22] == 'g');
boolean b22_46 = (buffer[i + 22] == '3');
boolean b22_47 = (buffer[i + 22] == 'd');
boolean b22_48 = (buffer[i + 22] == 'M');
boolean b22_49 = (buffer[i + 22] == 'x');
boolean b22_50 = (buffer[i + 22] == 'S');
boolean b22_51 = (buffer[i + 22] == 'I');
boolean b22_52 = (buffer[i + 22] == 'H');
boolean b22_53 = (buffer[i + 22] == '?');
boolean b22_54 = (buffer[i + 22] == 'G');
boolean b22_55 = (buffer[i + 22] == 'j');
boolean b22_56 = (buffer[i + 22] == '4');
boolean b22_57 = (buffer[i + 22] == 'C');
boolean b22_58 = (buffer[i + 22] == '8');
boolean b22_59 = (buffer[i + 22] == 'Q');
boolean b22_60 = (buffer[i + 22] == 'k');
boolean b22_61 = (buffer[i + 22] == 'T');
boolean b22_62 = (buffer[i + 22] == ']');
boolean b22_63 = (buffer[i + 22] == 'y');
boolean b22_64 = (buffer[i + 22] == 'O');
boolean b22_65 = (buffer[i + 22] == 'L');
boolean b22_66 = (buffer[i + 22] == '<');
boolean b22_67 = (buffer[i + 22] == '>');
boolean b22_68 = (buffer[i + 22] == 'z');
boolean b22_69 = (buffer[i + 22] == ':');
boolean b22_70 = (buffer[i + 22] == 'K');
boolean b22_71 = (buffer[i + 22] == 'V');
boolean b22_72 = (buffer[i + 22] == 'J');
boolean b23_1 = (buffer[i + 23] == 'z');
boolean b23_2 = (buffer[i + 23] == 'I');
boolean b23_3 = (buffer[i + 23] == '0');
boolean b23_4 = (buffer[i + 23] == 'W');
boolean b23_5 = (buffer[i + 23] == 'o');
boolean b23_6 = (buffer[i + 23] == 't');
boolean b23_7 = (buffer[i + 23] == 'e');
boolean b23_8 = (buffer[i + 23] == 'c');
boolean b23_9 = (buffer[i + 23] == 'a');
boolean b23_10 = (buffer[i + 23] == ' ');
boolean b23_11 = (buffer[i + 23] == 'b');
boolean b23_12 = (buffer[i + 23] == 'A');
boolean b23_13 = (buffer[i + 23] == 'm');
boolean b23_14 = (buffer[i + 23] == 'u');
boolean b23_15 = (buffer[i + 23] == 'l');
boolean b23_16 = (buffer[i + 23] == 'v');
boolean b23_17 = (buffer[i + 23] == '|');
boolean b23_18 = (buffer[i + 23] == '.');
boolean b23_19 = (buffer[i + 23] == 'F');
boolean b23_20 = (buffer[i + 23] == 'N');
boolean b23_21 = (buffer[i + 23] == '>');
boolean b23_22 = (buffer[i + 23] == '3');
boolean b23_23 = (buffer[i + 23] == 'i');
boolean b23_24 = (buffer[i + 23] == 'H');
boolean b23_25 = (buffer[i + 23] == '8');
boolean b23_26 = (buffer[i + 23] == 'd');
boolean b23_27 = (buffer[i + 23] == '-');
boolean b23_28 = (buffer[i + 23] == 's');
boolean b23_29 = (buffer[i + 23] == 'p');
boolean b23_30 = (buffer[i + 23] == 'f');
boolean b23_31 = (buffer[i + 23] == 'n');
boolean b23_32 = (buffer[i + 23] == '=');
boolean b23_33 = (buffer[i + 23] == 'E');
boolean b23_34 = (buffer[i + 23] == 'r');
boolean b23_35 = (buffer[i + 23] == '1');
boolean b23_36 = (buffer[i + 23] == 'T');
boolean b23_37 = (buffer[i + 23] == '5');
boolean b23_38 = (buffer[i + 23] == '+');
boolean b23_39 = (buffer[i + 23] == 'S');
boolean b23_40 = (buffer[i + 23] == 'q');
boolean b23_41 = (buffer[i + 23] == 'D');
boolean b23_42 = (buffer[i + 23] == '7');
boolean b23_43 = (buffer[i + 23] == '~');
boolean b23_44 = (buffer[i + 23] == 'O');
boolean b23_45 = (buffer[i + 23] == '/');
boolean b23_46 = (buffer[i + 23] == '_');
boolean b23_47 = (buffer[i + 23] == 'w');
boolean b23_48 = (buffer[i + 23] == 'k');
boolean b23_49 = (buffer[i + 23] == 'L');
boolean b23_50 = (buffer[i + 23] == 'h');
boolean b23_51 = (buffer[i + 23] == 'g');
boolean b23_52 = (buffer[i + 23] == '%');
boolean b23_53 = (buffer[i + 23] == 'y');
boolean b23_54 = (buffer[i + 23] == 'P');
boolean b23_55 = (buffer[i + 23] == '?');
boolean b23_56 = (buffer[i + 23] == 'j');
boolean b23_57 = (buffer[i + 23] == 'C');
boolean b23_58 = (buffer[i + 23] == '[');
boolean b23_59 = (buffer[i + 23] == '2');
boolean b23_60 = (buffer[i + 23] == '6');
boolean b23_61 = (buffer[i + 23] == 'G');
boolean b23_62 = (buffer[i + 23] == 'x');
boolean b23_63 = (buffer[i + 23] == '*');
boolean b23_64 = (buffer[i + 23] == 'R');
boolean b23_65 = (buffer[i + 23] == '4');
boolean b23_66 = (buffer[i + 23] == 'B');
boolean b23_67 = (buffer[i + 23] == 'M');
boolean b23_68 = (buffer[i + 23] == '<');
boolean b23_69 = (buffer[i + 23] == 'J');
boolean b23_70 = (buffer[i + 23] == 'U');
boolean b23_71 = (buffer[i + 23] == '\'');
boolean b23_72 = (buffer[i + 23] == 'X');
boolean b23_73 = (buffer[i + 23] == '!');
boolean b23_74 = (buffer[i + 23] == '9');
boolean b23_75 = (buffer[i + 23] == '#');
boolean b23_76 = (buffer[i + 23] == '&');
boolean b23_77 = (buffer[i + 23] == 'Y');
boolean b23_78 = (buffer[i + 23] == 'K');
boolean b24_1 = (buffer[i + 24] == 'w');
boolean b24_2 = (buffer[i + 24] == 'n');
boolean b24_3 = (buffer[i + 24] == ' ');
boolean b24_4 = (buffer[i + 24] == 'H');
boolean b24_5 = (buffer[i + 24] == 't');
boolean b24_6 = (buffer[i + 24] == 'z');
boolean b24_7 = (buffer[i + 24] == 'C');
boolean b24_8 = (buffer[i + 24] == '|');
boolean b24_9 = (buffer[i + 24] == 'r');
boolean b24_10 = (buffer[i + 24] == 'c');
boolean b24_11 = (buffer[i + 24] == 'g');
boolean b24_12 = (buffer[i + 24] == 'I');
boolean b24_13 = (buffer[i + 24] == 'a');
boolean b24_14 = (buffer[i + 24] == 'A');
boolean b24_15 = (buffer[i + 24] == 'o');
boolean b24_16 = (buffer[i + 24] == '*');
boolean b24_17 = (buffer[i + 24] == 'l');
boolean b24_18 = (buffer[i + 24] == 'e');
boolean b24_19 = (buffer[i + 24] == 's');
boolean b24_20 = (buffer[i + 24] == 'v');
boolean b24_21 = (buffer[i + 24] == '/');
boolean b24_22 = (buffer[i + 24] == 'D');
boolean b24_23 = (buffer[i + 24] == '0');
boolean b24_24 = (buffer[i + 24] == 'E');
boolean b24_25 = (buffer[i + 24] == 'T');
boolean b24_26 = (buffer[i + 24] == '8');
boolean b24_27 = (buffer[i + 24] == '_');
boolean b24_28 = (buffer[i + 24] == 'f');
boolean b24_29 = (buffer[i + 24] == '.');
boolean b24_30 = (buffer[i + 24] == 'd');
boolean b24_31 = (buffer[i + 24] == 'i');
boolean b24_32 = (buffer[i + 24] == '-');
boolean b24_33 = (buffer[i + 24] == 'j');
boolean b24_34 = (buffer[i + 24] == '=');
boolean b24_35 = (buffer[i + 24] == 'S');
boolean b24_36 = (buffer[i + 24] == '3');
boolean b24_37 = (buffer[i + 24] == 'k');
boolean b24_38 = (buffer[i + 24] == 'm');
boolean b24_39 = (buffer[i + 24] == 'b');
boolean b24_40 = (buffer[i + 24] == '+');
boolean b24_41 = (buffer[i + 24] == 'u');
boolean b24_42 = (buffer[i + 24] == 'y');
boolean b24_43 = (buffer[i + 24] == 'P');
boolean b24_44 = (buffer[i + 24] == '4');
boolean b24_45 = (buffer[i + 24] == 'h');
boolean b24_46 = (buffer[i + 24] == '?');
boolean b24_47 = (buffer[i + 24] == 'p');
boolean b24_48 = (buffer[i + 24] == 'x');
boolean b24_49 = (buffer[i + 24] == '2');
boolean b24_50 = (buffer[i + 24] == 'V');
boolean b24_51 = (buffer[i + 24] == 'W');
boolean b24_52 = (buffer[i + 24] == 'O');
boolean b24_53 = (buffer[i + 24] == 'N');
boolean b24_54 = (buffer[i + 24] == 'R');
boolean b24_55 = (buffer[i + 24] == '~');
boolean b24_56 = (buffer[i + 24] == 'U');
boolean b24_57 = (buffer[i + 24] == '1');
boolean b24_58 = (buffer[i + 24] == 'B');
boolean b24_59 = (buffer[i + 24] == 'G');
boolean b24_60 = (buffer[i + 24] == 'Y');
boolean b24_61 = (buffer[i + 24] == 'M');
boolean b24_62 = (buffer[i + 24] == 'F');
boolean b24_63 = (buffer[i + 24] == 'X');
boolean b24_64 = (buffer[i + 24] == 'Z');
boolean b24_65 = (buffer[i + 24] == '<');
boolean b24_66 = (buffer[i + 24] == '%');
boolean b24_67 = (buffer[i + 24] == ',');
boolean b24_68 = (buffer[i + 24] == '&');
boolean b24_69 = (buffer[i + 24] == 'J');
boolean b24_70 = (buffer[i + 24] == 'L');
boolean b24_71 = (buffer[i + 24] == '(');
boolean b24_72 = (buffer[i + 24] == 'K');
boolean b24_73 = (buffer[i + 24] == '6');
boolean b25_1 = (buffer[i + 25] == 's');
boolean b25_2 = (buffer[i + 25] == 'f');
boolean b25_3 = (buffer[i + 25] == '0');
boolean b25_4 = (buffer[i + 25] == 'A');
boolean b25_5 = (buffer[i + 25] == 'e');
boolean b25_6 = (buffer[i + 25] == 'u');
boolean b25_7 = (buffer[i + 25] == 'S');
boolean b25_8 = (buffer[i + 25] == 'r');
boolean b25_9 = (buffer[i + 25] == '3');
boolean b25_10 = (buffer[i + 25] == 't');
boolean b25_11 = (buffer[i + 25] == 'g');
boolean b25_12 = (buffer[i + 25] == 'B');
boolean b25_13 = (buffer[i + 25] == 'y');
boolean b25_14 = (buffer[i + 25] == 'w');
boolean b25_15 = (buffer[i + 25] == 'c');
boolean b25_16 = (buffer[i + 25] == 'l');
boolean b25_17 = (buffer[i + 25] == 'd');
boolean b25_18 = (buffer[i + 25] == 'i');
boolean b25_19 = (buffer[i + 25] == 'H');
boolean b25_20 = (buffer[i + 25] == 'k');
boolean b25_21 = (buffer[i + 25] == '4');
boolean b25_22 = (buffer[i + 25] == ' ');
boolean b25_23 = (buffer[i + 25] == '8');
boolean b25_24 = (buffer[i + 25] == '.');
boolean b25_25 = (buffer[i + 25] == 'M');
boolean b25_26 = (buffer[i + 25] == 'b');
boolean b25_27 = (buffer[i + 25] == '+');
boolean b25_28 = (buffer[i + 25] == 'F');
boolean b25_29 = (buffer[i + 25] == '|');
boolean b25_30 = (buffer[i + 25] == 'T');
boolean b25_31 = (buffer[i + 25] == 'o');
boolean b25_32 = (buffer[i + 25] == '-');
boolean b25_33 = (buffer[i + 25] == '=');
boolean b25_34 = (buffer[i + 25] == 'E');
boolean b25_35 = (buffer[i + 25] == ',');
boolean b25_36 = (buffer[i + 25] == 'p');
boolean b25_37 = (buffer[i + 25] == '5');
boolean b25_38 = (buffer[i + 25] == 'P');
boolean b25_39 = (buffer[i + 25] == 'n');
boolean b25_40 = (buffer[i + 25] == 'O');
boolean b25_41 = (buffer[i + 25] == 'L');
boolean b25_42 = (buffer[i + 25] == 'C');
boolean b25_43 = (buffer[i + 25] == '2');
boolean b25_44 = (buffer[i + 25] == '`');
boolean b25_45 = (buffer[i + 25] == 'D');
boolean b25_46 = (buffer[i + 25] == '/');
boolean b25_47 = (buffer[i + 25] == 'a');
boolean b25_48 = (buffer[i + 25] == '?');
boolean b25_49 = (buffer[i + 25] == 'x');
boolean b25_50 = (buffer[i + 25] == 'h');
boolean b25_51 = (buffer[i + 25] == 'm');
boolean b25_52 = (buffer[i + 25] == 'v');
boolean b25_53 = (buffer[i + 25] == '9');
boolean b25_54 = (buffer[i + 25] == 'I');
boolean b25_55 = (buffer[i + 25] == 'R');
boolean b25_56 = (buffer[i + 25] == '_');
boolean b25_57 = (buffer[i + 25] == 'q');
boolean b25_58 = (buffer[i + 25] == 'V');
boolean b25_59 = (buffer[i + 25] == 'N');
boolean b25_60 = (buffer[i + 25] == 'U');
boolean b25_61 = (buffer[i + 25] == '!');
boolean b25_62 = (buffer[i + 25] == 'K');
boolean b25_63 = (buffer[i + 25] == 'W');
boolean b25_64 = (buffer[i + 25] == '1');
boolean b25_65 = (buffer[i + 25] == 'Q');
boolean b25_66 = (buffer[i + 25] == 'X');
boolean b25_67 = (buffer[i + 25] == '6');
boolean b25_68 = (buffer[i + 25] == '%');
boolean b25_69 = (buffer[i + 25] == '$');
boolean b25_70 = (buffer[i + 25] == 'G');
boolean b25_71 = (buffer[i + 25] == '&');
boolean b25_72 = (buffer[i + 25] == '7');
boolean b25_73 = (buffer[i + 25] == 'j');
boolean b25_74 = (buffer[i + 25] == 'Z');
boolean b26_1 = (buffer[i + 26] == 'x');
boolean b26_2 = (buffer[i + 26] == 'o');
boolean b26_3 = (buffer[i + 26] == '2');
boolean b26_4 = (buffer[i + 26] == 'T');
boolean b26_5 = (buffer[i + 26] == '|');
boolean b26_6 = (buffer[i + 26] == 'p');
boolean b26_7 = (buffer[i + 26] == 'a');
boolean b26_8 = (buffer[i + 26] == 'A');
boolean b26_9 = (buffer[i + 26] == 'F');
boolean b26_10 = (buffer[i + 26] == ' ');
boolean b26_11 = (buffer[i + 26] == 'i');
boolean b26_12 = (buffer[i + 26] == 'e');
boolean b26_13 = (buffer[i + 26] == '4');
boolean b26_14 = (buffer[i + 26] == '0');
boolean b26_15 = (buffer[i + 26] == 'k');
boolean b26_16 = (buffer[i + 26] == 'h');
boolean b26_17 = (buffer[i + 26] == 'r');
boolean b26_18 = (buffer[i + 26] == '1');
boolean b26_19 = (buffer[i + 26] == 't');
boolean b26_20 = (buffer[i + 26] == 'w');
boolean b26_21 = (buffer[i + 26] == 'n');
boolean b26_22 = (buffer[i + 26] == 'E');
boolean b26_23 = (buffer[i + 26] == 'O');
boolean b26_24 = (buffer[i + 26] == 'b');
boolean b26_25 = (buffer[i + 26] == '.');
boolean b26_26 = (buffer[i + 26] == 'R');
boolean b26_27 = (buffer[i + 26] == '+');
boolean b26_28 = (buffer[i + 26] == 'D');
boolean b26_29 = (buffer[i + 26] == '9');
boolean b26_30 = (buffer[i + 26] == 'M');
boolean b26_31 = (buffer[i + 26] == '3');
boolean b26_32 = (buffer[i + 26] == 'P');
boolean b26_33 = (buffer[i + 26] == 'V');
boolean b26_34 = (buffer[i + 26] == 'd');
boolean b26_35 = (buffer[i + 26] == '@');
boolean b26_36 = (buffer[i + 26] == 's');
boolean b26_37 = (buffer[i + 26] == 'g');
boolean b26_38 = (buffer[i + 26] == 'm');
boolean b26_39 = (buffer[i + 26] == 'l');
boolean b26_40 = (buffer[i + 26] == '=');
boolean b26_41 = (buffer[i + 26] == 'y');
boolean b26_42 = (buffer[i + 26] == 'L');
boolean b26_43 = (buffer[i + 26] == 'N');
boolean b26_44 = (buffer[i + 26] == 'C');
boolean b26_45 = (buffer[i + 26] == 'G');
boolean b26_46 = (buffer[i + 26] == '5');
boolean b26_47 = (buffer[i + 26] == '7');
boolean b26_48 = (buffer[i + 26] == '6');
boolean b26_49 = (buffer[i + 26] == '/');
boolean b26_50 = (buffer[i + 26] == '_');
boolean b26_51 = (buffer[i + 26] == 'v');
boolean b26_52 = (buffer[i + 26] == 'c');
boolean b26_53 = (buffer[i + 26] == 'u');
boolean b26_54 = (buffer[i + 26] == 'q');
boolean b26_55 = (buffer[i + 26] == 'z');
boolean b26_56 = (buffer[i + 26] == 'W');
boolean b26_57 = (buffer[i + 26] == '8');
boolean b26_58 = (buffer[i + 26] == '*');
boolean b26_59 = (buffer[i + 26] == 'S');
boolean b26_60 = (buffer[i + 26] == '?');
boolean b26_61 = (buffer[i + 26] == '%');
boolean b26_62 = (buffer[i + 26] == '~');
boolean b26_63 = (buffer[i + 26] == 'B');
boolean b26_64 = (buffer[i + 26] == 'f');
boolean b26_65 = (buffer[i + 26] == '-');
boolean b26_66 = (buffer[i + 26] == 'K');
boolean b26_67 = (buffer[i + 26] == 'I');
boolean b26_68 = (buffer[i + 26] == 'H');
boolean b26_69 = (buffer[i + 26] == 'Y');
boolean b26_70 = (buffer[i + 26] == 'J');
boolean b26_71 = (buffer[i + 26] == ',');
boolean b26_72 = (buffer[i + 26] == 'X');
boolean b26_73 = (buffer[i + 26] == 'U');
boolean b26_74 = (buffer[i + 26] == 'j');
boolean b26_75 = (buffer[i + 26] == '$');
boolean b26_76 = (buffer[i + 26] == ':');
boolean b26_77 = (buffer[i + 26] == '&');
boolean b26_78 = (buffer[i + 26] == ')');
boolean b26_79 = (buffer[i + 26] == '(');
boolean b26_80 = (buffer[i + 26] == '<');
boolean b27_1 = (buffer[i + 27] == '.');
boolean b27_2 = (buffer[i + 27] == '|');
boolean b27_3 = (buffer[i + 27] == ' ');
boolean b27_4 = (buffer[i + 27] == 'I');
boolean b27_5 = (buffer[i + 27] == '3');
boolean b27_6 = (buffer[i + 27] == 'h');
boolean b27_7 = (buffer[i + 27] == 'U');
boolean b27_8 = (buffer[i + 27] == 's');
boolean b27_9 = (buffer[i + 27] == 'T');
boolean b27_10 = (buffer[i + 27] == 'o');
boolean b27_11 = (buffer[i + 27] == 'v');
boolean b27_12 = (buffer[i + 27] == 'd');
boolean b27_13 = (buffer[i + 27] == 'i');
boolean b27_14 = (buffer[i + 27] == 'O');
boolean b27_15 = (buffer[i + 27] == 'r');
boolean b27_16 = (buffer[i + 27] == '0');
boolean b27_17 = (buffer[i + 27] == 'k');
boolean b27_18 = (buffer[i + 27] == 't');
boolean b27_19 = (buffer[i + 27] == 'a');
boolean b27_20 = (buffer[i + 27] == 'w');
boolean b27_21 = (buffer[i + 27] == '1');
boolean b27_22 = (buffer[i + 27] == 'A');
boolean b27_23 = (buffer[i + 27] == 'P');
boolean b27_24 = (buffer[i + 27] == 'c');
boolean b27_25 = (buffer[i + 27] == 'L');
boolean b27_26 = (buffer[i + 27] == 'l');
boolean b27_27 = (buffer[i + 27] == 'e');
boolean b27_28 = (buffer[i + 27] == 'p');
boolean b27_29 = (buffer[i + 27] == '/');
boolean b27_30 = (buffer[i + 27] == 'n');
boolean b27_31 = (buffer[i + 27] == '+');
boolean b27_32 = (buffer[i + 27] == 'N');
boolean b27_33 = (buffer[i + 27] == '2');
boolean b27_34 = (buffer[i + 27] == '@');
boolean b27_35 = (buffer[i + 27] == 'R');
boolean b27_36 = (buffer[i + 27] == '%');
boolean b27_37 = (buffer[i + 27] == 'S');
boolean b27_38 = (buffer[i + 27] == 'm');
boolean b27_39 = (buffer[i + 27] == '=');
boolean b27_40 = (buffer[i + 27] == 'E');
boolean b27_41 = (buffer[i + 27] == '<');
boolean b27_42 = (buffer[i + 27] == 'M');
boolean b27_43 = (buffer[i + 27] == '5');
boolean b27_44 = (buffer[i + 27] == 'z');
boolean b27_45 = (buffer[i + 27] == 'G');
boolean b27_46 = (buffer[i + 27] == 'W');
boolean b27_47 = (buffer[i + 27] == 'K');
boolean b27_48 = (buffer[i + 27] == 'F');
boolean b27_49 = (buffer[i + 27] == 'H');
boolean b27_50 = (buffer[i + 27] == 'b');
boolean b27_51 = (buffer[i + 27] == '\'');
boolean b27_52 = (buffer[i + 27] == 'f');
boolean b27_53 = (buffer[i + 27] == '_');
boolean b27_54 = (buffer[i + 27] == 'Y');
boolean b27_55 = (buffer[i + 27] == '-');
boolean b27_56 = (buffer[i + 27] == 'g');
boolean b27_57 = (buffer[i + 27] == 'u');
boolean b27_58 = (buffer[i + 27] == 'C');
boolean b27_59 = (buffer[i + 27] == 'D');
boolean b27_60 = (buffer[i + 27] == '?');
boolean b27_61 = (buffer[i + 27] == 'y');
boolean b27_62 = (buffer[i + 27] == 'V');
boolean b27_63 = (buffer[i + 27] == '~');
boolean b27_64 = (buffer[i + 27] == ',');
boolean b27_65 = (buffer[i + 27] == 'B');
boolean b27_66 = (buffer[i + 27] == 'X');
boolean b27_67 = (buffer[i + 27] == '8');
boolean b27_68 = (buffer[i + 27] == 'Z');
boolean b27_69 = (buffer[i + 27] == 'J');
boolean b27_70 = (buffer[i + 27] == 'j');
boolean b27_71 = (buffer[i + 27] == '4');
boolean b27_72 = (buffer[i + 27] == '9');
boolean b27_73 = (buffer[i + 27] == 'q');
boolean b27_74 = (buffer[i + 27] == ':');
boolean b27_75 = (buffer[i + 27] == '&');
boolean b27_76 = (buffer[i + 27] == '(');
boolean b27_77 = (buffer[i + 27] == 'x');
boolean b28_1 = (buffer[i + 28] == 'h');
boolean b28_2 = (buffer[i + 28] == '0');
boolean b28_3 = (buffer[i + 28] == 'S');
boolean b28_4 = (buffer[i + 28] == 'A');
boolean b28_5 = (buffer[i + 28] == 'U');
boolean b28_6 = (buffer[i + 28] == 'F');
boolean b28_7 = (buffer[i + 28] == 'o');
boolean b28_8 = (buffer[i + 28] == 'e');
boolean b28_9 = (buffer[i + 28] == '5');
boolean b28_10 = (buffer[i + 28] == 'P');
boolean b28_11 = (buffer[i + 28] == 'p');
boolean b28_12 = (buffer[i + 28] == 'a');
boolean b28_13 = (buffer[i + 28] == ' ');
boolean b28_14 = (buffer[i + 28] == 'B');
boolean b28_15 = (buffer[i + 28] == 'v');
boolean b28_16 = (buffer[i + 28] == 'w');
boolean b28_17 = (buffer[i + 28] == 'r');
boolean b28_18 = (buffer[i + 28] == 'x');
boolean b28_19 = (buffer[i + 28] == 'd');
boolean b28_20 = (buffer[i + 28] == '2');
boolean b28_21 = (buffer[i + 28] == 'O');
boolean b28_22 = (buffer[i + 28] == 'k');
boolean b28_23 = (buffer[i + 28] == 'l');
boolean b28_24 = (buffer[i + 28] == '3');
boolean b28_25 = (buffer[i + 28] == 'L');
boolean b28_26 = (buffer[i + 28] == 'i');
boolean b28_27 = (buffer[i + 28] == 'u');
boolean b28_28 = (buffer[i + 28] == 'j');
boolean b28_29 = (buffer[i + 28] == '8');
boolean b28_30 = (buffer[i + 28] == '.');
boolean b28_31 = (buffer[i + 28] == 'C');
boolean b28_32 = (buffer[i + 28] == '/');
boolean b28_33 = (buffer[i + 28] == 'm');
boolean b28_34 = (buffer[i + 28] == '4');
boolean b28_35 = (buffer[i + 28] == '9');
boolean b28_36 = (buffer[i + 28] == '|');
boolean b28_37 = (buffer[i + 28] == '1');
boolean b28_38 = (buffer[i + 28] == 't');
boolean b28_39 = (buffer[i + 28] == '7');
boolean b28_40 = (buffer[i + 28] == 's');
boolean b28_41 = (buffer[i + 28] == 'E');
boolean b28_42 = (buffer[i + 28] == 'I');
boolean b28_43 = (buffer[i + 28] == 'D');
boolean b28_44 = (buffer[i + 28] == 'n');
boolean b28_45 = (buffer[i + 28] == '=');
boolean b28_46 = (buffer[i + 28] == 'G');
boolean b28_47 = (buffer[i + 28] == 'J');
boolean b28_48 = (buffer[i + 28] == 'T');
boolean b28_49 = (buffer[i + 28] == 'Y');
boolean b28_50 = (buffer[i + 28] == 'g');
boolean b28_51 = (buffer[i + 28] == 'M');
boolean b28_52 = (buffer[i + 28] == 'c');
boolean b28_53 = (buffer[i + 28] == 'f');
boolean b28_54 = (buffer[i + 28] == 'R');
boolean b28_55 = (buffer[i + 28] == 'b');
boolean b28_56 = (buffer[i + 28] == 'q');
boolean b28_57 = (buffer[i + 28] == '%');
boolean b28_58 = (buffer[i + 28] == '*');
boolean b28_59 = (buffer[i + 28] == '?');
boolean b28_60 = (buffer[i + 28] == 'V');
boolean b28_61 = (buffer[i + 28] == 'z');
boolean b28_62 = (buffer[i + 28] == 'N');
boolean b28_63 = (buffer[i + 28] == 'X');
boolean b28_64 = (buffer[i + 28] == 'H');
boolean b28_65 = (buffer[i + 28] == 'W');
boolean b28_66 = (buffer[i + 28] == '_');
boolean b28_67 = (buffer[i + 28] == 'y');
boolean b28_68 = (buffer[i + 28] == '-');
boolean b28_69 = (buffer[i + 28] == ',');
boolean b28_70 = (buffer[i + 28] == '&');
boolean b28_71 = (buffer[i + 28] == ')');
boolean b28_72 = (buffer[i + 28] == ':');
boolean b29_1 = (buffer[i + 29] == 's');
boolean b29_2 = (buffer[i + 29] == 'D');
boolean b29_3 = (buffer[i + 29] == '0');
boolean b29_4 = (buffer[i + 29] == 'I');
boolean b29_5 = (buffer[i + 29] == '|');
boolean b29_6 = (buffer[i + 29] == 'C');
boolean b29_7 = (buffer[i + 29] == 'E');
boolean b29_8 = (buffer[i + 29] == 'r');
boolean b29_9 = (buffer[i + 29] == 'e');
boolean b29_10 = (buffer[i + 29] == 'O');
boolean b29_11 = (buffer[i + 29] == 't');
boolean b29_12 = (buffer[i + 29] == 'i');
boolean b29_13 = (buffer[i + 29] == '4');
boolean b29_14 = (buffer[i + 29] == 'c');
boolean b29_15 = (buffer[i + 29] == 'o');
boolean b29_16 = (buffer[i + 29] == 'w');
boolean b29_17 = (buffer[i + 29] == 'h');
boolean b29_18 = (buffer[i + 29] == 'a');
boolean b29_19 = (buffer[i + 29] == 'g');
boolean b29_20 = (buffer[i + 29] == 'n');
boolean b29_21 = (buffer[i + 29] == '3');
boolean b29_22 = (buffer[i + 29] == 'A');
boolean b29_23 = (buffer[i + 29] == 'N');
boolean b29_24 = (buffer[i + 29] == 'k');
boolean b29_25 = (buffer[i + 29] == 'l');
boolean b29_26 = (buffer[i + 29] == 'v');
boolean b29_27 = (buffer[i + 29] == 'm');
boolean b29_28 = (buffer[i + 29] == '.');
boolean b29_29 = (buffer[i + 29] == 'K');
boolean b29_30 = (buffer[i + 29] == '6');
boolean b29_31 = (buffer[i + 29] == 'M');
boolean b29_32 = (buffer[i + 29] == '2');
boolean b29_33 = (buffer[i + 29] == 'B');
boolean b29_34 = (buffer[i + 29] == '/');
boolean b29_35 = (buffer[i + 29] == ' ');
boolean b29_36 = (buffer[i + 29] == '@');
boolean b29_37 = (buffer[i + 29] == 'W');
boolean b29_38 = (buffer[i + 29] == 'T');
boolean b29_39 = (buffer[i + 29] == 'u');
boolean b29_40 = (buffer[i + 29] == 'S');
boolean b29_41 = (buffer[i + 29] == '=');
boolean b29_42 = (buffer[i + 29] == 'R');
boolean b29_43 = (buffer[i + 29] == '>');
boolean b29_44 = (buffer[i + 29] == 'd');
boolean b29_45 = (buffer[i + 29] == '9');
boolean b29_46 = (buffer[i + 29] == 'G');
boolean b29_47 = (buffer[i + 29] == '5');
boolean b29_48 = (buffer[i + 29] == '8');
boolean b29_49 = (buffer[i + 29] == 'L');
boolean b29_50 = (buffer[i + 29] == 'p');
boolean b29_51 = (buffer[i + 29] == 'f');
boolean b29_52 = (buffer[i + 29] == 'x');
boolean b29_53 = (buffer[i + 29] == '1');
boolean b29_54 = (buffer[i + 29] == 'q');
boolean b29_55 = (buffer[i + 29] == '?');
boolean b29_56 = (buffer[i + 29] == 'X');
boolean b29_57 = (buffer[i + 29] == 'H');
boolean b29_58 = (buffer[i + 29] == 'U');
boolean b29_59 = (buffer[i + 29] == '-');
boolean b29_60 = (buffer[i + 29] == 'j');
boolean b29_61 = (buffer[i + 29] == 'y');
boolean b29_62 = (buffer[i + 29] == 'F');
boolean b29_63 = (buffer[i + 29] == '%');
boolean b29_64 = (buffer[i + 29] == '*');
boolean b29_65 = (buffer[i + 29] == '_');
boolean b29_66 = (buffer[i + 29] == 'P');
boolean b29_67 = (buffer[i + 29] == 'b');
boolean b29_68 = (buffer[i + 29] == '7');
boolean b29_69 = (buffer[i + 29] == '<');
boolean b29_70 = (buffer[i + 29] == 'V');
boolean b29_71 = (buffer[i + 29] == 'z');
boolean b29_72 = (buffer[i + 29] == 'Q');
boolean b29_73 = (buffer[i + 29] == ':');
boolean b30_1 = (buffer[i + 30] == 'q');
boolean b30_2 = (buffer[i + 30] == '|');
boolean b30_3 = (buffer[i + 30] == 'T');
boolean b30_4 = (buffer[i + 30] == ' ');
boolean b30_5 = (buffer[i + 30] == 'e');
boolean b30_6 = (buffer[i + 30] == 't');
boolean b30_7 = (buffer[i + 30] == 'R');
boolean b30_8 = (buffer[i + 30] == 'r');
boolean b30_9 = (buffer[i + 30] == 'N');
boolean b30_10 = (buffer[i + 30] == 'n');
boolean b30_11 = (buffer[i + 30] == 'a');
boolean b30_12 = (buffer[i + 30] == '0');
boolean b30_13 = (buffer[i + 30] == '!');
boolean b30_14 = (buffer[i + 30] == 'x');
boolean b30_15 = (buffer[i + 30] == '[');
boolean b30_16 = (buffer[i + 30] == 'i');
boolean b30_17 = (buffer[i + 30] == 'y');
boolean b30_18 = (buffer[i + 30] == 'k');
boolean b30_19 = (buffer[i + 30] == '4');
boolean b30_20 = (buffer[i + 30] == 'A');
boolean b30_21 = (buffer[i + 30] == 'G');
boolean b30_22 = (buffer[i + 30] == 's');
boolean b30_23 = (buffer[i + 30] == 'z');
boolean b30_24 = (buffer[i + 30] == '*');
boolean b30_25 = (buffer[i + 30] == 'l');
boolean b30_26 = (buffer[i + 30] == 'd');
boolean b30_27 = (buffer[i + 30] == 'u');
boolean b30_28 = (buffer[i + 30] == '/');
boolean b30_29 = (buffer[i + 30] == 'g');
boolean b30_30 = (buffer[i + 30] == '>');
boolean b30_31 = (buffer[i + 30] == 'S');
boolean b30_32 = (buffer[i + 30] == 'h');
boolean b30_33 = (buffer[i + 30] == '?');
boolean b30_34 = (buffer[i + 30] == 'E');
boolean b30_35 = (buffer[i + 30] == '1');
boolean b30_36 = (buffer[i + 30] == 'f');
boolean b30_37 = (buffer[i + 30] == '@');
boolean b30_38 = (buffer[i + 30] == '.');
boolean b30_39 = (buffer[i + 30] == 'D');
boolean b30_40 = (buffer[i + 30] == 'L');
boolean b30_41 = (buffer[i + 30] == 'o');
boolean b30_42 = (buffer[i + 30] == 'p');
boolean b30_43 = (buffer[i + 30] == '=');
boolean b30_44 = (buffer[i + 30] == 'Q');
boolean b30_45 = (buffer[i + 30] == 'm');
boolean b30_46 = (buffer[i + 30] == 'w');
boolean b30_47 = (buffer[i + 30] == 'c');
boolean b30_48 = (buffer[i + 30] == 'K');
boolean b30_49 = (buffer[i + 30] == 'P');
boolean b30_50 = (buffer[i + 30] == '\'');
boolean b30_51 = (buffer[i + 30] == 'B');
boolean b30_52 = (buffer[i + 30] == '2');
boolean b30_53 = (buffer[i + 30] == '&');
boolean b30_54 = (buffer[i + 30] == 'F');
boolean b30_55 = (buffer[i + 30] == '3');
boolean b30_56 = (buffer[i + 30] == 'b');
boolean b30_57 = (buffer[i + 30] == '_');
boolean b30_58 = (buffer[i + 30] == '-');
boolean b30_59 = (buffer[i + 30] == 'j');
boolean b30_60 = (buffer[i + 30] == ']');
boolean b30_61 = (buffer[i + 30] == '~');
boolean b30_62 = (buffer[i + 30] == 'C');
boolean b30_63 = (buffer[i + 30] == 'O');
boolean b30_64 = (buffer[i + 30] == '%');
boolean b30_65 = (buffer[i + 30] == '`');
boolean b30_66 = (buffer[i + 30] == 'M');
boolean b30_67 = (buffer[i + 30] == 'v');
boolean b30_68 = (buffer[i + 30] == 'H');
boolean b30_69 = (buffer[i + 30] == '}');
boolean b30_70 = (buffer[i + 30] == 'Y');
boolean b30_71 = (buffer[i + 30] == 'U');
boolean b30_72 = (buffer[i + 30] == 'Z');
boolean b30_73 = (buffer[i + 30] == 'V');
boolean b30_74 = (buffer[i + 30] == ')');
boolean b30_75 = (buffer[i + 30] == ':');
boolean b30_76 = (buffer[i + 30] == '(');
boolean b30_77 = (buffer[i + 30] == '#');
boolean b30_78 = (buffer[i + 30] == '6');
boolean b30_79 = (buffer[i + 30] == '{');
boolean b30_80 = (buffer[i + 30] == '7');
if(b30_4) {
pattern_id = 0;
}
if(b26_10 && b27_76 && b28_71 && b29_35 && b30_79) {
pattern_id = 1;
}
if(b7_6 && b8_7 && b9_9 && b10_8 && b11_8 && b12_8 && b13_10 && b14_5 && b15_10 && b16_11 && b17_12 && b18_12 && b19_14 && b20_9 && b21_7 && b22_25 && b23_29 && b24_9 && b25_31 && b26_37 && b27_15 && b28_12 && b29_27 && b30_4) {
pattern_id = 2;
}
if(b26_10 && b27_1 && b28_1 && b29_11 && b30_8) {
pattern_id = 3;
}
if(b27_3 && b28_30 && b29_50 && b30_25) {
pattern_id = 4;
}
if(b22_22 && b23_45 && b24_4 && b25_30 && b26_4 && b27_23 && b28_32 && b29_53 && b30_38) {
pattern_id = 5;
}
if(b27_3 && b28_41 && b29_31 && b30_54) {
pattern_id = 6;
}
if(b25_22 && b26_68 && b27_9 && b28_48 && b29_66 && b30_28) {
pattern_id = 7;
}
if(b10_12 && b11_50 && b12_45 && b13_51 && b14_54 && b15_35 && b16_61 && b17_9 && b18_22 && b19_10 && b20_2 && b21_38 && b22_22 && b23_3 && b24_14 && b25_29 && b26_68 && b27_10 && b28_40 && b29_11 && b30_75) {
pattern_id = 8;
}
if(b23_10 && b24_69 && b25_47 && b26_51 && b27_19 && b28_32 && b29_53 && b30_38) {
pattern_id = 9;
}
if(b24_3 && b25_14 && b26_16 && b27_27 && b28_17 && b29_9 && b30_4) {
pattern_id = 10;
}
if(b17_2 && b18_1 && b19_6 && b20_12 && b21_3 && b22_58 && b23_59 && b24_3 && b25_3 && b26_18 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 11;
}
if(b25_61 && b26_35 && b27_2 && b28_20 && b29_21 && b30_2) {
pattern_id = 12;
}
if(b30_64) {
pattern_id = 13;
}
if(b28_57 && b29_53 && b30_27) {
pattern_id = 14;
}
if(b28_57 && b29_32 && b30_12) {
pattern_id = 15;
}
if(b23_52 && b24_49 && b25_37 && b26_3 && b27_27 && b28_28 && b29_1 && b30_42) {
pattern_id = 16;
}
if(b18_60 && b19_62 && b20_60 && b21_64 && b22_34 && b23_25 && b24_66 && b25_43 && b26_29 && b27_31 && b28_57 && b29_68 && b30_51) {
pattern_id = 17;
}
if(b14_53 && b15_28 && b16_31 && b17_57 && b18_58 && b19_25 && b20_24 && b21_62 && b22_50 && b23_54 && b24_54 && b25_40 && b26_9 && b27_4 && b28_25 && b29_7 && b30_64) {
pattern_id = 18;
}
if(b22_21 && b23_12 && b24_43 && b25_38 && b26_28 && b27_22 && b28_48 && b29_22 && b30_64) {
pattern_id = 19;
}
if(b11_48 && b12_12 && b13_49 && b14_46 && b15_1 && b16_60 && b17_1 && b18_10 && b19_40 && b20_66 && b21_47 && b22_35 && b23_12 && b24_61 && b25_28 && b26_67 && b27_25 && b28_41 && b29_40 && b30_64) {
pattern_id = 20;
}
if(b0_12 && b1_17 && b2_24 && b3_29 && b4_35 && b5_15 && b6_18 && b7_37 && b8_30 && b9_35 && b10_46 && b11_46 && b12_20 && b13_40 && b14_20 && b15_59 && b16_31 && b17_39 && b18_40 && b19_10 && b20_12 && b21_10 && b22_20 && b23_62 && b24_26 && b25_67 && b26_5 && b27_71 && b28_37 && b29_5 && b30_64) {
pattern_id = 21;
}
if(b17_58 && b18_44 && b19_50 && b20_29 && b21_25 && b22_31 && b23_36 && b24_24 && b25_55 && b26_43 && b27_22 && b28_51 && b29_7 && b30_64) {
pattern_id = 22;
}
if(b22_21 && b23_57 && b24_52 && b25_25 && b26_59 && b27_23 && b28_41 && b29_6 && b30_64) {
pattern_id = 23;
}
if(b20_67 && b21_38 && b22_3 && b23_52 && b24_26 && b25_12 && b26_4 && b27_26 && b28_57 && b29_2 && b30_62) {
pattern_id = 24;
}
if(b20_67 && b21_63 && b22_64 && b23_67 && b24_24 && b25_45 && b26_26 && b27_4 && b28_60 && b29_7 && b30_64) {
pattern_id = 25;
}
if(b21_64 && b22_52 && b23_44 && b24_61 && b25_34 && b26_32 && b27_22 && b28_48 && b29_57 && b30_64) {
pattern_id = 26;
}
if(b17_58 && b18_52 && b19_50 && b20_27 && b21_6 && b22_65 && b23_12 && b24_43 && b25_38 && b26_28 && b27_22 && b28_48 && b29_22 && b30_64) {
pattern_id = 27;
}
if(b18_60 && b19_21 && b20_66 && b21_47 && b22_64 && b23_20 && b24_35 && b25_34 && b26_26 && b27_62 && b28_41 && b29_42 && b30_64) {
pattern_id = 28;
}
if(b25_68 && b26_32 && b27_22 && b28_48 && b29_57 && b30_64) {
pattern_id = 29;
}
if(b22_21 && b23_54 && b24_14 && b25_30 && b26_68 && b27_40 && b28_63 && b29_38 && b30_64) {
pattern_id = 30;
}
if(b24_66 && b25_38 && b26_28 && b27_48 && b28_68 && b29_53 && b30_38) {
pattern_id = 31;
}
if(b18_60 && b19_49 && b20_3 && b21_22 && b22_54 && b23_64 && b24_14 && b25_25 && b26_28 && b27_22 && b28_48 && b29_22 && b30_64) {
pattern_id = 32;
}
if(b17_58 && b18_10 && b19_40 && b20_66 && b21_47 && b22_35 && b23_12 && b24_61 && b25_28 && b26_67 && b27_25 && b28_41 && b29_40 && b30_64) {
pattern_id = 33;
}
if(b6_37 && b7_37 && b8_30 && b9_35 && b10_46 && b11_46 && b12_20 && b13_40 && b14_20 && b15_59 && b16_31 && b17_39 && b18_40 && b19_10 && b20_12 && b21_10 && b22_20 && b23_72 && b24_26 && b25_67 && b26_5 && b27_71 && b28_37 && b29_5 && b30_64) {
pattern_id = 34;
}
if(b23_52 && b24_43 && b25_55 && b26_23 && b27_42 && b28_10 && b29_38 && b30_64) {
pattern_id = 35;
}
if(b17_58 && b18_10 && b19_25 && b20_29 && b21_31 && b22_47 && b23_14 && b24_17 && b25_5 && b26_32 && b27_19 && b28_38 && b29_17 && b30_64) {
pattern_id = 36;
}
if(b23_52 && b24_43 && b25_60 && b26_63 && b27_25 && b28_42 && b29_6 && b30_64) {
pattern_id = 37;
}
if(b18_60 && b19_25 && b20_56 && b21_7 && b22_2 && b23_7 && b24_38 && b25_45 && b26_17 && b27_13 && b28_15 && b29_9 && b30_64) {
pattern_id = 38;
}
if(b19_61 && b20_18 && b21_49 && b22_13 && b23_6 && b24_18 && b25_51 && b26_26 && b27_10 && b28_7 && b29_11 && b30_64) {
pattern_id = 39;
}
if(b25_68 && b26_4 && b27_40 && b28_51 && b29_66 && b30_64) {
pattern_id = 40;
}
if(b26_61 && b27_9 && b28_51 && b29_66 && b30_64) {
pattern_id = 41;
}
if(b21_64 && b22_31 && b23_39 && b24_24 && b25_55 && b26_28 && b27_22 && b28_48 && b29_22 && b30_64) {
pattern_id = 42;
}
if(b19_61 && b20_25 && b21_18 && b22_27 && b23_64 && b24_22 && b25_40 && b26_30 && b27_22 && b28_42 && b29_23 && b30_64) {
pattern_id = 43;
}
if(b21_64 && b22_31 && b23_39 && b24_24 && b25_55 && b26_43 && b27_22 && b28_51 && b29_7 && b30_64) {
pattern_id = 44;
}
if(b18_60 && b19_54 && b20_18 && b21_23 && b22_35 && b23_54 && b24_54 && b25_40 && b26_9 && b27_4 && b28_25 && b29_7 && b30_64) {
pattern_id = 45;
}
if(b23_52 && b24_51 && b25_54 && b26_43 && b27_59 && b28_42 && b29_42 && b30_64) {
pattern_id = 46;
}
if(b15_61 && b16_20 && b17_17 && b18_17 && b19_45 && b20_38 && b21_36 && b22_2 && b23_7 && b24_9 && b25_15 && b26_12 && b27_28 && b28_38 && b29_1 && b30_64) {
pattern_id = 47;
}
if(b24_68 && b25_47 && b26_64 && b27_52 && b28_26 && b29_44 && b30_43) {
pattern_id = 48;
}
if(b21_68 && b22_24 && b23_5 && b24_17 && b25_47 && b26_53 && b27_8 && b28_12 && b29_44 && b30_41) {
pattern_id = 49;
}
if(b12_39 && b13_24 && b14_14 && b15_43 && b16_45 && b17_23 && b18_30 && b19_46 && b20_30 && b21_32 && b22_46 && b23_12 && b24_3 && b25_37 && b26_44 && b27_2 && b28_58 && b29_28 && b30_24) {
pattern_id = 50;
}
if(b24_68 && b25_18 && b26_21 && b27_18 && b28_26 && b29_50 && b30_43) {
pattern_id = 51;
}
if(b23_76 && b24_47 && b25_15 && b26_21 && b27_19 && b28_33 && b29_9 && b30_43) {
pattern_id = 52;
}
if(b26_77 && b27_8 && b28_22 && b29_53 && b30_43) {
pattern_id = 53;
}
if(b23_76 && b24_19 && b25_10 && b26_17 && b27_13 && b28_44 && b29_19 && b30_43) {
pattern_id = 54;
}
if(b27_76 && b28_71 && b29_35 && b30_79) {
pattern_id = 55;
}
if(b14_66 && b15_51 && b16_41 && b17_59 && b18_41 && b19_3 && b20_17 && b21_36 && b22_22 && b23_16 && b24_18 && b25_8 && b26_36 && b27_13 && b28_7 && b29_20 && b30_74) {
pattern_id = 56;
}
if(b26_79 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 57;
}
if(b26_78 && b27_75 && b28_19 && b29_11 && b30_43) {
pattern_id = 58;
}
if(b0_8 && b1_11 && b2_17 && b3_22 && b4_29 && b5_6 && b6_1 && b7_27 && b8_21 && b9_15 && b10_42 && b11_16 && b12_27 && b13_13 && b14_34 && b15_50 && b16_54 && b17_54 && b18_5 && b19_48 && b20_11 && b21_50 && b22_23 && b23_31 && b24_2 && b25_5 && b26_52 && b27_18 && b28_8 && b29_44 && b30_38) {
pattern_id = 59;
}
if(b23_63 && b24_59 && b25_40 && b26_63 && b27_65 && b28_25 && b29_7 && b30_24) {
pattern_id = 60;
}
if(b24_16 && b25_19 && b26_22 && b27_25 && b28_25 && b29_10 && b30_24) {
pattern_id = 61;
}
if(b26_58 && b27_2 && b28_2 && b29_32 && b30_2) {
pattern_id = 62;
}
if(b25_27 && b26_27 && b27_31 && b28_12 && b29_11 && b30_32) {
pattern_id = 63;
}
if(b9_14 && b10_5 && b11_3 && b12_18 && b13_13 && b14_4 && b15_23 && b16_16 && b17_25 && b18_1 && b19_1 && b20_12 && b21_3 && b22_30 && b23_35 && b24_3 && b25_3 && b26_3 && b27_3 && b28_37 && b29_45 && b30_2) {
pattern_id = 64;
}
if(b19_48 && b20_45 && b21_39 && b22_1 && b23_8 && b24_37 && b25_6 && b26_6 && b27_55 && b28_19 && b29_12 && b30_8) {
pattern_id = 65;
}
if(b15_49 && b16_22 && b17_6 && b18_7 && b19_62 && b20_34 && b21_60 && b22_15 && b23_29 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 66;
}
if(b21_35 && b22_33 && b23_34 && b24_15 && b25_31 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 67;
}
if(b24_32 && b25_1 && b26_2 && b27_19 && b28_13 && b29_63 && b30_42) {
pattern_id = 68;
}
if(b30_38) {
pattern_id = 69;
}
if(b26_25 && b27_36 && b28_20 && b29_3 && b30_38) {
pattern_id = 70;
}
if(b29_28 && b30_38) {
pattern_id = 71;
}
if(b26_25 && b27_1 && b28_30 && b29_28 && b30_28) {
pattern_id = 72;
}
if(b28_30 && b29_28 && b30_28) {
pattern_id = 73;
}
if(b22_18 && b23_18 && b24_21 && b25_24 && b26_25 && b27_29 && b28_30 && b29_28 && b30_28) {
pattern_id = 74;
}
if(b23_18 && b24_29 && b25_29 && b26_46 && b27_58 && b28_36 && b29_28 && b30_38) {
pattern_id = 75;
}
if(b11_44 && b12_24 && b13_19 && b14_27 && b15_10 && b16_28 && b17_52 && b18_17 && b19_14 && b20_34 && b21_17 && b22_23 && b23_13 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 76;
}
if(b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 77;
}
if(b26_25 && b27_19 && b28_40 && b29_50 && b30_38) {
pattern_id = 78;
}
if(b13_37 && b14_24 && b15_25 && b16_34 && b17_10 && b18_31 && b19_11 && b20_11 && b21_24 && b22_11 && b23_10 && b24_49 && b25_21 && b26_5 && b27_59 && b28_4 && b29_38 && b30_20) {
pattern_id = 79;
}
if(b26_25 && b27_50 && b28_12 && b29_11 && b30_33) {
pattern_id = 80;
}
if(b23_18 && b24_39 && b25_47 && b26_19 && b27_2 && b28_20 && b29_32 && b30_2) {
pattern_id = 81;
}
if(b27_1 && b28_55 && b29_12 && b30_10) {
pattern_id = 82;
}
if(b27_1 && b28_52 && b29_44 && b30_11) {
pattern_id = 83;
}
if(b25_24 && b26_52 && b27_38 && b28_19 && b29_55 && b30_53) {
pattern_id = 84;
}
if(b23_18 && b24_10 && b25_51 && b26_34 && b27_2 && b28_20 && b29_32 && b30_2) {
pattern_id = 85;
}
if(b27_1 && b28_52 && b29_20 && b30_36) {
pattern_id = 86;
}
if(b26_25 && b27_24 && b28_7 && b29_27 && b30_58) {
pattern_id = 87;
}
if(b11_44 && b12_14 && b13_16 && b14_13 && b15_55 && b16_13 && b17_26 && b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_3 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 88;
}
if(b15_55 && b16_29 && b17_26 && b18_4 && b19_12 && b20_20 && b21_2 && b22_27 && b23_15 && b24_18 && b25_51 && b26_12 && b27_30 && b28_38 && b29_23 && b30_31) {
pattern_id = 89;
}
if(b26_25 && b27_24 && b28_40 && b29_50 && b30_38) {
pattern_id = 90;
}
if(b23_18 && b24_30 && b25_31 && b26_52 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 91;
}
if(b27_1 && b28_8 && b29_27 && b30_36) {
pattern_id = 92;
}
if(b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 93;
}
if(b6_30 && b7_25 && b8_29 && b9_29 && b10_12 && b11_50 && b12_45 && b13_51 && b14_54 && b15_35 && b16_61 && b17_9 && b18_22 && b19_10 && b20_2 && b21_38 && b22_22 && b23_3 && b24_14 && b25_29 && b26_68 && b27_10 && b28_40 && b29_11 && b30_75) {
pattern_id = 94;
}
if(b24_29 && b25_5 && b26_1 && b27_27 && b28_70 && b29_17 && b30_43) {
pattern_id = 95;
}
if(b20_34 && b21_2 && b22_49 && b23_7 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 96;
}
if(b23_18 && b24_28 && b25_31 && b26_17 && b27_20 && b28_12 && b29_8 && b30_26) {
pattern_id = 97;
}
if(b27_1 && b28_50 && b29_12 && b30_36) {
pattern_id = 98;
}
if(b23_18 && b24_11 && b25_18 && b26_64 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 99;
}
if(b19_26 && b20_8 && b21_41 && b22_33 && b23_55 && b24_13 && b25_15 && b26_19 && b27_13 && b28_7 && b29_20 && b30_43) {
pattern_id = 100;
}
if(b22_18 && b23_50 && b24_5 && b25_47 && b26_52 && b27_24 && b28_8 && b29_1 && b30_22) {
pattern_id = 101;
}
if(b23_18 && b24_45 && b25_10 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 102;
}
if(b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 103;
}
if(b19_26 && b20_50 && b21_5 && b22_4 && b23_15 && b24_21 && b25_24 && b26_25 && b27_1 && b28_30 && b29_28 && b30_38) {
pattern_id = 104;
}
if(b23_18 && b24_45 && b25_10 && b26_38 && b27_26 && b28_59 && b29_3 && b30_38) {
pattern_id = 105;
}
if(b22_18 && b23_50 && b24_5 && b25_36 && b26_7 && b27_8 && b28_40 && b29_16 && b30_26) {
pattern_id = 106;
}
if(b27_1 && b28_1 && b29_11 && b30_8) {
pattern_id = 107;
}
if(b27_1 && b28_1 && b29_11 && b30_46) {
pattern_id = 108;
}
if(b13_37 && b14_17 && b15_29 && b16_44 && b17_46 && b18_44 && b19_15 && b20_48 && b21_2 && b22_24 && b23_24 && b24_31 && b25_10 && b26_36 && b27_48 && b28_26 && b29_25 && b30_5) {
pattern_id = 109;
}
if(b27_1 && b28_26 && b29_44 && b30_11) {
pattern_id = 110;
}
if(b26_25 && b27_13 && b28_19 && b29_18 && b30_33) {
pattern_id = 111;
}
if(b13_37 && b14_22 && b15_37 && b16_29 && b17_10 && b18_31 && b19_11 && b20_11 && b21_24 && b22_11 && b23_10 && b24_49 && b25_21 && b26_5 && b27_12 && b28_12 && b29_11 && b30_11) {
pattern_id = 112;
}
if(b27_1 && b28_26 && b29_44 && b30_1) {
pattern_id = 113;
}
if(b26_25 && b27_13 && b28_19 && b29_54 && b30_33) {
pattern_id = 114;
}
if(b26_25 && b27_70 && b28_44 && b29_25 && b30_42) {
pattern_id = 115;
}
if(b22_18 && b23_56 && b24_47 && b25_5 && b26_37 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 116;
}
if(b27_1 && b28_28 && b29_50 && b30_29) {
pattern_id = 117;
}
if(b23_18 && b24_33 && b25_36 && b26_37 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 118;
}
if(b27_1 && b28_28 && b29_1 && b30_42) {
pattern_id = 119;
}
if(b0_13 && b1_19 && b2_26 && b3_30 && b4_27 && b5_33 && b6_27 && b7_21 && b8_15 && b9_21 && b10_21 && b11_52 && b12_41 && b13_54 && b14_50 && b15_18 && b16_19 && b17_21 && b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_3 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 120;
}
if(b28_30 && b29_25 && b30_26) {
pattern_id = 121;
}
if(b27_1 && b28_33 && b29_15 && b30_26) {
pattern_id = 122;
}
if(b26_25 && b27_30 && b28_40 && b29_51 && b30_28) {
pattern_id = 123;
}
if(b20_34 && b21_19 && b22_22 && b23_24 && b24_25 && b25_30 && b26_32 && b27_29 && b28_37 && b29_28 && b30_35) {
pattern_id = 124;
}
if(b15_55 && b16_34 && b17_19 && b18_14 && b19_16 && b20_43 && b21_6 && b22_16 && b23_23 && b24_38 && b25_47 && b26_19 && b27_13 && b28_7 && b29_20 && b30_22) {
pattern_id = 125;
}
if(b23_18 && b24_47 && b25_17 && b26_64 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 126;
}
if(b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 127;
}
if(b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 128;
}
if(b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_44 && b30_43) {
pattern_id = 129;
}
if(b3_26 && b4_19 && b5_45 && b6_13 && b7_51 && b8_36 && b9_19 && b10_25 && b11_12 && b12_8 && b13_57 && b14_57 && b15_12 && b16_44 && b17_59 && b18_4 && b19_55 && b20_43 && b21_40 && b22_70 && b23_7 && b24_42 && b25_16 && b26_2 && b27_56 && b28_50 && b29_9 && b30_8) {
pattern_id = 130;
}
if(b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_50 && b30_43) {
pattern_id = 131;
}
if(b22_18 && b23_29 && b24_45 && b25_36 && b26_60 && b27_38 && b28_12 && b29_14 && b30_43) {
pattern_id = 132;
}
if(b19_26 && b20_13 && b21_8 && b22_12 && b23_55 && b24_38 && b25_5 && b26_19 && b27_6 && b28_7 && b29_44 && b30_43) {
pattern_id = 133;
}
if(b15_55 && b16_34 && b17_29 && b18_11 && b19_51 && b20_13 && b21_8 && b22_12 && b23_32 && b24_9 && b25_5 && b26_52 && b27_27 && b28_26 && b29_50 && b30_6) {
pattern_id = 134;
}
if(b16_54 && b17_12 && b18_37 && b19_13 && b20_51 && b21_13 && b22_13 && b23_7 && b24_9 && b25_56 && b26_52 && b27_10 && b28_19 && b29_9 && b30_43) {
pattern_id = 135;
}
if(b28_30 && b29_50 && b30_25) {
pattern_id = 136;
}
if(b23_18 && b24_47 && b25_8 && b26_11 && b27_30 && b28_38 && b29_9 && b30_8) {
pattern_id = 137;
}
if(b28_30 && b29_8 && b30_11) {
pattern_id = 138;
}
if(b24_29 && b25_8 && b26_16 && b27_10 && b28_40 && b29_11 && b30_22) {
pattern_id = 139;
}
if(b27_1 && b28_17 && b29_27 && b30_42) {
pattern_id = 140;
}
if(b28_30 && b29_8 && b30_42) {
pattern_id = 141;
}
if(b28_30 && b29_8 && b30_6) {
pattern_id = 142;
}
if(b26_25 && b27_8 && b28_16 && b29_51 && b30_33) {
pattern_id = 143;
}
if(b27_1 && b28_16 && b29_27 && b30_36) {
pattern_id = 144;
}
if(b27_1 && b28_16 && b29_27 && b30_23) {
pattern_id = 145;
}
if(b23_18 && b24_1 && b25_14 && b26_20 && b27_53 && b28_12 && b29_14 && b30_25) {
pattern_id = 146;
}
if(b24_29 && b25_14 && b26_20 && b27_20 && b28_12 && b29_14 && b30_25) {
pattern_id = 147;
}
if(b27_1 && b28_61 && b29_12 && b30_42) {
pattern_id = 148;
}
if(b22_18 && b23_1 && b24_15 && b25_16 && b26_39 && b27_19 && b28_17 && b29_44 && b30_28) {
pattern_id = 149;
}
if(b30_28) {
pattern_id = 150;
}
if(b28_32 && b29_63 && b30_64) {
pattern_id = 151;
}
if(b27_29 && b28_57 && b29_3 && b30_12) {
pattern_id = 152;
}
if(b25_46 && b26_58 && b27_1 && b28_26 && b29_44 && b30_47) {
pattern_id = 153;
}
if(b23_45 && b24_16 && b25_24 && b26_36 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 154;
}
if(b26_49 && b27_1 && b28_30 && b29_28 && b30_38) {
pattern_id = 155;
}
if(b24_21 && b25_24 && b26_25 && b27_29 && b28_30 && b29_28 && b30_28) {
pattern_id = 156;
}
if(b21_15 && b22_18 && b23_41 && b24_35 && b25_56 && b26_59 && b27_18 && b28_7 && b29_8 && b30_5) {
pattern_id = 157;
}
if(b21_15 && b22_18 && b23_19 && b24_58 && b25_42 && b26_67 && b27_30 && b28_19 && b29_9 && b30_14) {
pattern_id = 158;
}
if(b17_23 && b18_25 && b19_24 && b20_7 && b21_7 && b22_9 && b23_46 && b24_45 && b25_18 && b26_36 && b27_18 && b28_7 && b29_8 && b30_17) {
pattern_id = 159;
}
if(b20_33 && b21_57 && b22_28 && b23_9 && b24_10 && b25_50 && b26_12 && b27_29 && b28_59 && b29_51 && b30_43) {
pattern_id = 160;
}
if(b22_39 && b23_18 && b24_45 && b25_18 && b26_36 && b27_18 && b28_7 && b29_8 && b30_17) {
pattern_id = 161;
}
if(b21_15 && b22_18 && b23_31 && b24_19 && b25_15 && b26_2 && b27_30 && b28_53 && b29_12 && b30_29) {
pattern_id = 162;
}
if(b25_46 && b26_25 && b27_28 && b28_8 && b29_8 && b30_36) {
pattern_id = 163;
}
if(b18_33 && b19_26 && b20_9 && b21_53 && b22_16 && b23_45 && b24_18 && b25_39 && b26_19 && b27_15 && b28_26 && b29_9 && b30_22) {
pattern_id = 164;
}
if(b23_45 && b24_21 && b25_46 && b26_49 && b27_29 && b28_32 && b29_34 && b30_28) {
pattern_id = 165;
}
if(b24_21 && b25_3 && b26_25 && b27_56 && b28_26 && b29_51 && b30_33) {
pattern_id = 166;
}
if(b20_33 && b21_10 && b22_39 && b23_10 && b24_4 && b25_30 && b26_4 && b27_23 && b28_32 && b29_53 && b30_38) {
pattern_id = 167;
}
if(b23_45 && b24_23 && b25_3 && b26_14 && b27_1 && b28_28 && b29_50 && b30_29) {
pattern_id = 168;
}
if(b8_25 && b9_13 && b10_19 && b11_9 && b12_40 && b13_10 && b14_25 && b15_24 && b16_10 && b17_67 && b18_67 && b19_60 && b20_71 && b21_10 && b22_32 && b23_35 && b24_49 && b25_53 && b26_24 && b27_16 && b28_37 && b29_14 && b30_12) {
pattern_id = 169;
}
if(b19_36 && b20_58 && b21_37 && b22_39 && b23_30 && b24_18 && b25_5 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 170;
}
if(b19_36 && b20_58 && b21_37 && b22_39 && b23_30 && b24_15 && b25_8 && b26_38 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 171;
}
if(b28_32 && b29_32 && b30_12) {
pattern_id = 172;
}
if(b14_26 && b15_45 && b16_70 && b17_50 && b18_34 && b19_57 && b20_56 && b21_15 && b22_10 && b23_22 && b24_44 && b25_2 && b26_31 && b27_5 && b28_34 && b29_47 && b30_29) {
pattern_id = 173;
}
if(b29_34 && b30_33) {
pattern_id = 174;
}
if(b25_46 && b26_60 && b27_1 && b28_28 && b29_1 && b30_42) {
pattern_id = 175;
}
if(b26_49 && b27_60 && b28_51 && b29_41 && b30_39) {
pattern_id = 176;
}
if(b26_49 && b27_60 && b28_53 && b29_41 && b30_11) {
pattern_id = 177;
}
if(b20_33 && b21_48 && b22_45 && b23_47 && b24_19 && b25_56 && b26_17 && b27_12 && b28_45 && b29_14 && b30_8) {
pattern_id = 178;
}
if(b27_29 && b28_59 && b29_39 && b30_43) {
pattern_id = 179;
}
if(b18_33 && b19_11 && b20_44 && b21_35 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 180;
}
if(b14_26 && b15_28 && b16_36 && b17_48 && b18_13 && b19_14 && b20_19 && b21_2 && b22_10 && b23_9 && b24_5 && b25_5 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 181;
}
if(b20_33 && b21_6 && b22_47 && b23_13 && b24_31 && b25_39 && b26_16 && b27_18 && b28_33 && b29_25 && b30_57) {
pattern_id = 182;
}
if(b23_45 && b24_14 && b25_39 && b26_9 && b27_10 && b28_17 && b29_27 && b30_52) {
pattern_id = 183;
}
if(b22_39 && b23_12 && b24_2 && b25_13 && b26_9 && b27_10 && b28_17 && b29_27 && b30_52) {
pattern_id = 184;
}
if(b18_33 && b19_41 && b20_18 && b21_54 && b22_1 && b23_23 && b24_17 && b25_10 && b26_2 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 185;
}
if(b19_36 && b20_27 && b21_55 && b22_50 && b23_45 && b24_24 && b25_39 && b26_19 && b27_15 && b28_26 && b29_9 && b30_22) {
pattern_id = 186;
}
if(b15_35 && b16_25 && b17_19 && b18_12 && b19_14 && b20_40 && b21_9 && b22_23 && b23_45 && b24_13 && b25_17 && b26_34 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 187;
}
if(b15_35 && b16_25 && b17_29 && b18_12 && b19_3 && b20_42 && b21_2 && b22_50 && b23_7 && b24_5 && b25_6 && b26_6 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 188;
}
if(b18_33 && b19_41 && b20_26 && b21_36 && b22_13 && b23_5 && b24_17 && b25_5 && b26_68 && b27_27 && b28_23 && b29_50 && b30_28) {
pattern_id = 189;
}
if(b13_33 && b14_12 && b15_10 && b16_41 && b17_8 && b18_4 && b19_20 && b20_20 && b21_11 && b22_15 && b23_15 && b24_5 && b25_5 && b26_17 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 190;
}
if(b23_45 && b24_22 && b25_12 && b26_13 && b27_46 && b28_8 && b29_67 && b30_28) {
pattern_id = 191;
}
if(b9_22 && b10_43 && b11_16 && b12_25 && b13_35 && b14_42 && b15_12 && b16_20 && b17_17 && b18_2 && b19_30 && b20_19 && b21_17 && b22_2 && b23_23 && b24_15 && b25_39 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 192;
}
if(b10_19 && b11_31 && b12_15 && b13_4 && b14_14 && b15_18 && b16_35 && b17_28 && b18_12 && b19_55 && b20_35 && b21_41 && b22_13 && b23_6 && b24_31 && b25_39 && b26_37 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 193;
}
if(b12_16 && b13_21 && b14_22 && b15_43 && b16_26 && b17_60 && b18_28 && b19_23 && b20_26 && b21_26 && b22_16 && b23_15 && b24_15 && b25_47 && b26_34 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 194;
}
if(b15_35 && b16_5 && b17_28 && b18_12 && b19_8 && b20_59 && b21_4 && b22_16 && b23_26 && b24_17 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 195;
}
if(b14_26 && b15_4 && b16_19 && b17_26 && b18_32 && b19_45 && b20_49 && b21_18 && b22_28 && b23_34 && b24_31 && b25_36 && b26_19 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 196;
}
if(b13_33 && b14_20 && b15_10 && b16_30 && b17_21 && b18_35 && b19_53 && b20_55 && b21_18 && b22_28 && b23_34 && b24_31 && b25_36 && b26_19 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 197;
}
if(b19_36 && b20_39 && b21_5 && b22_12 && b23_39 && b24_13 && b25_52 && b26_12 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 198;
}
if(b16_6 && b17_7 && b18_17 && b19_13 && b20_18 && b21_4 && b22_44 && b23_7 && b24_7 && b25_7 && b26_32 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 199;
}
if(b16_6 && b17_7 && b18_17 && b19_13 && b20_18 && b21_4 && b22_44 && b23_7 && b24_7 && b25_58 && b26_32 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 200;
}
if(b21_15 && b22_54 && b23_4 && b24_51 && b25_34 && b26_63 && b27_1 && b28_41 && b29_56 && b30_34) {
pattern_id = 201;
}
if(b20_33 && b21_47 && b22_5 && b23_4 && b24_24 && b25_12 && b26_25 && b27_40 && b28_63 && b29_7 && b30_33) {
pattern_id = 202;
}
if(b11_20 && b12_48 && b13_17 && b14_21 && b15_34 && b16_21 && b17_35 && b18_2 && b19_30 && b20_19 && b21_17 && b22_2 && b23_23 && b24_15 && b25_39 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 203;
}
if(b25_46 && b26_68 && b27_32 && b28_4 && b29_66 && b30_35) {
pattern_id = 204;
}
if(b13_33 && b14_43 && b15_42 && b16_3 && b17_18 && b18_24 && b19_25 && b20_61 && b21_2 && b22_8 && b23_7 && b24_5 && b25_31 && b26_21 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 205;
}
if(b4_14 && b5_46 && b6_44 && b7_22 && b8_23 && b9_12 && b10_31 && b11_52 && b12_16 && b13_29 && b14_10 && b15_25 && b16_35 && b17_19 && b18_45 && b19_32 && b20_48 && b21_41 && b22_68 && b23_9 && b24_9 && b25_17 && b26_25 && b27_19 && b28_40 && b29_50 && b30_14) {
pattern_id = 206;
}
if(b10_19 && b11_43 && b12_27 && b13_36 && b14_14 && b15_27 && b16_21 && b17_15 && b18_17 && b19_15 && b20_31 && b21_2 && b22_59 && b23_14 && b24_18 && b25_8 && b26_41 && b27_1 && b28_28 && b29_1 && b30_42) {
pattern_id = 207;
}
if(b21_15 && b22_72 && b23_54 && b24_32 && b25_73 && b26_7 && b27_29 && b28_28 && b29_1 && b30_33) {
pattern_id = 208;
}
if(b24_21 && b25_41 && b26_56 && b27_45 && b28_12 && b29_11 && b30_5) {
pattern_id = 209;
}
if(b17_23 && b18_52 && b19_14 && b20_20 && b21_7 && b22_54 && b23_5 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_22 && b30_43) {
pattern_id = 210;
}
if(b19_36 && b20_29 && b21_4 && b22_28 && b23_50 && b24_31 && b25_39 && b26_12 && b27_4 && b28_44 && b29_51 && b30_41) {
pattern_id = 211;
}
if(b19_36 && b20_29 && b21_7 && b22_4 && b23_67 && b24_13 && b25_1 && b26_15 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 212;
}
if(b26_49 && b27_32 && b28_5 && b29_49 && b30_28) {
pattern_id = 213;
}
if(b20_33 && b21_34 && b22_14 && b23_28 && b24_19 && b25_6 && b26_36 && b27_9 && b28_8 && b29_1 && b30_6) {
pattern_id = 214;
}
if(b17_23 && b18_20 && b19_14 && b20_17 && b21_7 && b22_39 && b23_51 && b24_13 && b25_10 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 215;
}
if(b16_6 && b17_1 && b18_4 && b19_39 && b20_9 && b21_15 && b22_45 && b23_9 && b24_5 && b25_5 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 216;
}
if(b26_49 && b27_23 && b28_54 && b29_23 && b30_28) {
pattern_id = 217;
}
if(b8_25 && b9_33 && b10_20 && b11_26 && b12_38 && b13_15 && b14_35 && b15_35 && b16_37 && b17_14 && b18_44 && b19_50 && b20_24 && b21_28 && b22_10 && b23_54 && b24_13 && b25_11 && b26_12 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 218;
}
if(b10_19 && b11_58 && b12_4 && b13_35 && b14_19 && b15_21 && b16_35 && b17_20 && b18_44 && b19_35 && b20_43 && b21_17 && b22_60 && b23_45 && b24_2 && b25_18 && b26_48 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 219;
}
if(b7_15 && b8_30 && b9_35 && b10_32 && b11_31 && b12_32 && b13_33 && b14_5 && b15_48 && b16_12 && b17_48 && b18_42 && b19_15 && b20_19 && b21_15 && b22_13 && b23_7 && b24_13 && b25_8 && b26_52 && b27_6 && b28_30 && b29_50 && b30_25) {
pattern_id = 220;
}
if(b8_25 && b9_54 && b10_15 && b11_14 && b12_41 && b13_34 && b14_14 && b15_27 && b16_12 && b17_17 && b18_30 && b19_36 && b20_55 && b21_28 && b22_23 && b23_47 && b24_19 && b25_5 && b26_17 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 221;
}
if(b11_20 && b12_59 && b13_15 && b14_5 && b15_10 && b16_43 && b17_17 && b18_12 && b19_15 && b20_43 && b21_7 && b22_39 && b23_67 && b24_13 && b25_18 && b26_39 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 222;
}
if(b10_19 && b11_46 && b12_8 && b13_27 && b14_21 && b15_40 && b16_26 && b17_26 && b18_19 && b19_14 && b20_9 && b21_15 && b22_64 && b23_39 && b24_72 && b25_5 && b26_41 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 223;
}
if(b12_16 && b13_46 && b14_20 && b15_41 && b16_19 && b17_37 && b18_19 && b19_5 && b20_38 && b21_17 && b22_1 && b23_6 && b24_31 && b25_31 && b26_21 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 224;
}
if(b17_23 && b18_40 && b19_47 && b20_24 && b21_43 && b22_15 && b23_6 && b24_35 && b25_5 && b26_17 && b27_11 && b28_23 && b29_9 && b30_6) {
pattern_id = 225;
}
if(b10_19 && b11_42 && b12_24 && b13_32 && b14_2 && b15_43 && b16_26 && b17_43 && b18_30 && b19_35 && b20_26 && b21_26 && b22_28 && b23_5 && b24_30 && b25_5 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 226;
}
if(b3_10 && b4_17 && b5_19 && b6_12 && b7_23 && b8_3 && b9_28 && b10_28 && b11_16 && b12_36 && b13_14 && b14_24 && b15_34 && b16_28 && b17_17 && b18_30 && b19_45 && b20_49 && b21_7 && b22_28 && b23_34 && b24_31 && b25_36 && b26_19 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 227;
}
if(b17_23 && b18_40 && b19_14 && b20_23 && b21_53 && b22_14 && b23_34 && b24_38 && b25_47 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 228;
}
if(b21_15 && b22_50 && b23_7 && b24_5 && b25_6 && b26_6 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 229;
}
if(b7_15 && b8_20 && b9_31 && b10_37 && b11_15 && b12_3 && b13_14 && b14_27 && b15_19 && b16_28 && b17_19 && b18_36 && b19_49 && b20_23 && b21_31 && b22_47 && b23_14 && b24_10 && b25_10 && b26_36 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 230;
}
if(b0_5 && b1_10 && b2_15 && b3_18 && b4_24 && b5_23 && b6_29 && b7_12 && b8_24 && b9_29 && b10_19 && b11_14 && b12_43 && b13_14 && b14_26 && b15_48 && b16_19 && b17_9 && b18_4 && b19_28 && b20_43 && b21_15 && b22_50 && b23_23 && b24_5 && b25_5 && b26_59 && b27_24 && b28_7 && b29_50 && b30_5) {
pattern_id = 231;
}
if(b18_33 && b19_25 && b20_13 && b21_4 && b22_4 && b23_33 && b24_48 && b25_15 && b26_6 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 232;
}
if(b3_10 && b4_17 && b5_17 && b6_14 && b7_21 && b8_3 && b9_24 && b10_20 && b11_34 && b12_32 && b13_33 && b14_43 && b15_33 && b16_20 && b17_8 && b18_21 && b19_20 && b20_20 && b21_22 && b22_10 && b23_26 && b24_18 && b25_8 && b26_25 && b27_19 && b28_40 && b29_27 && b30_14) {
pattern_id = 233;
}
if(b11_20 && b12_32 && b13_36 && b14_35 && b15_6 && b16_21 && b17_21 && b18_19 && b19_20 && b20_8 && b21_18 && b22_2 && b23_9 && b24_5 && b25_18 && b26_36 && b27_18 && b28_26 && b29_14 && b30_22) {
pattern_id = 234;
}
if(b21_15 && b22_61 && b23_44 && b24_43 && b25_64 && b26_14 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 235;
}
if(b21_15 && b22_61 && b23_23 && b24_5 && b25_16 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 236;
}
if(b13_33 && b14_16 && b15_19 && b16_23 && b17_19 && b18_17 && b19_14 && b20_27 && b21_9 && b22_1 && b23_28 && b24_19 && b25_5 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 237;
}
if(b23_45 && b24_56 && b25_36 && b26_37 && b27_37 && b28_15 && b29_8 && b30_28) {
pattern_id = 238;
}
if(b12_16 && b13_8 && b14_2 && b15_43 && b16_19 && b17_19 && b18_15 && b19_25 && b20_30 && b21_28 && b22_15 && b23_29 && b24_5 && b25_64 && b26_18 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 239;
}
if(b15_35 && b16_57 && b17_3 && b18_40 && b19_14 && b20_20 && b21_50 && b22_23 && b23_5 && b24_37 && b25_18 && b26_12 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 240;
}
if(b23_45 && b24_51 && b25_34 && b26_63 && b27_55 && b28_42 && b29_23 && b30_54) {
pattern_id = 241;
}
if(b19_36 && b20_48 && b21_2 && b22_24 && b23_31 && b24_18 && b25_14 && b26_36 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 242;
}
if(b16_6 && b17_53 && b18_40 && b19_58 && b20_35 && b21_50 && b22_23 && b23_31 && b24_28 && b25_18 && b26_37 && b27_1 && b28_18 && b29_27 && b30_25) {
pattern_id = 243;
}
if(b26_49 && b27_54 && b28_12 && b29_33 && b30_51) {
pattern_id = 244;
}
if(b23_45 && b24_27 && b25_47 && b26_34 && b27_38 && b28_26 && b29_20 && b30_28) {
pattern_id = 245;
}
if(b15_35 && b16_38 && b17_21 && b18_21 && b19_15 && b20_19 && b21_17 && b22_33 && b23_51 && b24_9 && b25_5 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 246;
}
if(b21_15 && b22_43 && b23_13 && b24_18 && b25_51 && b26_50 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 247;
}
if(b5_3 && b6_4 && b7_20 && b8_21 && b9_26 && b10_24 && b11_16 && b12_25 && b13_15 && b14_26 && b15_30 && b16_19 && b17_26 && b18_32 && b19_45 && b20_23 && b21_2 && b22_13 && b23_14 && b24_17 && b25_10 && b26_36 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 248;
}
if(b5_3 && b6_4 && b7_20 && b8_21 && b9_26 && b10_24 && b11_16 && b12_25 && b13_15 && b14_26 && b15_30 && b16_19 && b17_26 && b18_32 && b19_45 && b20_23 && b21_2 && b22_13 && b23_14 && b24_17 && b25_10 && b26_36 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 249;
}
if(b11_20 && b12_34 && b13_26 && b14_35 && b15_21 && b16_43 && b17_19 && b18_17 && b19_14 && b20_33 && b21_31 && b22_10 && b23_26 && b24_18 && b25_8 && b26_36 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 250;
}
if(b11_20 && b12_34 && b13_26 && b14_35 && b15_21 && b16_43 && b17_19 && b18_17 && b19_14 && b20_33 && b21_31 && b22_10 && b23_26 && b24_18 && b25_8 && b26_36 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 251;
}
if(b9_22 && b10_26 && b11_15 && b12_36 && b13_14 && b14_34 && b15_12 && b16_35 && b17_17 && b18_33 && b19_31 && b20_43 && b21_20 && b22_15 && b23_28 && b24_5 && b25_5 && b26_17 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 252;
}
if(b9_22 && b10_26 && b11_15 && b12_36 && b13_14 && b14_34 && b15_12 && b16_35 && b17_17 && b18_33 && b19_31 && b20_43 && b21_20 && b22_15 && b23_28 && b24_5 && b25_5 && b26_17 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 253;
}
if(b4_14 && b5_16 && b6_13 && b7_21 && b8_13 && b9_27 && b10_25 && b11_28 && b12_8 && b13_33 && b14_35 && b15_6 && b16_42 && b17_44 && b18_30 && b19_5 && b20_23 && b21_4 && b22_2 && b23_23 && b24_15 && b25_39 && b26_36 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 254;
}
if(b4_14 && b5_16 && b6_13 && b7_21 && b8_13 && b9_27 && b10_25 && b11_28 && b12_8 && b13_33 && b14_35 && b15_6 && b16_42 && b17_44 && b18_30 && b19_5 && b20_23 && b21_4 && b22_2 && b23_23 && b24_15 && b25_39 && b26_36 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 255;
}
if(b21_15 && b22_43 && b23_16 && b24_5 && b25_18 && b26_50 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 256;
}
if(b2_9 && b3_12 && b4_15 && b5_17 && b6_20 && b7_18 && b8_22 && b9_26 && b10_18 && b11_20 && b12_34 && b13_34 && b14_28 && b15_21 && b16_38 && b17_19 && b18_14 && b19_5 && b20_33 && b21_4 && b22_41 && b23_6 && b24_45 && b25_31 && b26_17 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 257;
}
if(b12_16 && b13_28 && b14_34 && b15_29 && b16_12 && b17_43 && b18_42 && b19_15 && b20_19 && b21_15 && b22_13 && b23_50 && b24_5 && b25_51 && b26_39 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 258;
}
if(b12_16 && b13_28 && b14_34 && b15_29 && b16_12 && b17_43 && b18_42 && b19_15 && b20_19 && b21_15 && b22_13 && b23_50 && b24_5 && b25_51 && b26_39 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 259;
}
if(b17_23 && b18_35 && b19_37 && b20_20 && b21_41 && b22_43 && b23_23 && b24_2 && b25_2 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 260;
}
if(b11_20 && b12_34 && b13_34 && b14_28 && b15_21 && b16_38 && b17_12 && b18_43 && b19_5 && b20_33 && b21_4 && b22_28 && b23_8 && b24_18 && b25_1 && b26_36 && b27_1 && b28_52 && b29_20 && b30_36) {
pattern_id = 261;
}
if(b10_19 && b11_18 && b12_37 && b13_36 && b14_22 && b15_44 && b16_34 && b17_45 && b18_17 && b19_36 && b20_9 && b21_2 && b22_10 && b23_16 && b24_31 && b25_15 && b26_12 && b27_1 && b28_52 && b29_20 && b30_36) {
pattern_id = 262;
}
if(b10_19 && b11_18 && b12_37 && b13_36 && b14_22 && b15_44 && b16_34 && b17_45 && b18_17 && b19_36 && b20_9 && b21_2 && b22_10 && b23_16 && b24_31 && b25_15 && b26_12 && b27_1 && b28_40 && b29_11 && b30_42) {
pattern_id = 263;
}
if(b9_22 && b10_26 && b11_29 && b12_25 && b13_14 && b14_37 && b15_19 && b16_43 && b17_8 && b18_33 && b19_16 && b20_43 && b21_28 && b22_44 && b23_23 && b24_10 && b25_5 && b26_36 && b27_1 && b28_52 && b29_20 && b30_36) {
pattern_id = 264;
}
if(b11_20 && b12_34 && b13_34 && b14_28 && b15_21 && b16_38 && b17_12 && b18_43 && b19_5 && b20_33 && b21_7 && b22_44 && b23_8 && b24_13 && b25_15 && b26_39 && b27_1 && b28_52 && b29_20 && b30_36) {
pattern_id = 265;
}
if(b10_19 && b11_18 && b12_37 && b13_36 && b14_22 && b15_44 && b16_34 && b17_45 && b18_17 && b19_36 && b20_17 && b21_28 && b22_15 && b23_6 && b24_18 && b25_10 && b26_2 && b27_1 && b28_52 && b29_20 && b30_36) {
pattern_id = 266;
}
if(b22_39 && b23_46 && b24_20 && b25_10 && b26_11 && b27_53 && b28_17 && b29_50 && b30_47) {
pattern_id = 267;
}
if(b19_36 && b20_7 && b21_37 && b22_47 && b23_23 && b24_19 && b25_36 && b26_31 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 268;
}
if(b18_33 && b19_12 && b20_58 && b21_43 && b22_15 && b23_28 && b24_47 && b25_9 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 269;
}
if(b22_39 && b23_9 && b24_57 && b25_1 && b26_19 && b27_19 && b28_38 && b29_1 && b30_28) {
pattern_id = 270;
}
if(b13_33 && b14_24 && b15_12 && b16_23 && b17_34 && b18_35 && b19_31 && b20_20 && b21_2 && b22_4 && b23_29 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_20 && b30_43) {
pattern_id = 271;
}
if(b26_49 && b27_19 && b28_55 && b29_32 && b30_28) {
pattern_id = 272;
}
if(b20_33 && b21_4 && b22_28 && b23_6 && b24_31 && b25_52 && b26_12 && b27_1 && b28_23 && b29_15 && b30_29) {
pattern_id = 273;
}
if(b24_21 && b25_47 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 274;
}
if(b17_23 && b18_21 && b19_34 && b20_57 && b21_42 && b22_14 && b23_13 && b24_39 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 275;
}
if(b23_45 && b24_13 && b25_17 && b26_52 && b27_61 && b28_52 && b29_25 && b30_5) {
pattern_id = 276;
}
if(b23_45 && b24_13 && b25_17 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 277;
}
if(b12_16 && b13_35 && b14_36 && b15_37 && b16_38 && b17_52 && b18_30 && b19_14 && b20_23 && b21_57 && b22_12 && b23_50 && b24_47 && b25_48 && b26_21 && b27_19 && b28_33 && b29_9 && b30_43) {
pattern_id = 278;
}
if(b11_20 && b12_24 && b13_24 && b14_13 && b15_18 && b16_42 && b17_44 && b18_33 && b19_38 && b20_26 && b21_36 && b22_2 && b23_7 && b24_2 && b25_10 && b26_36 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 279;
}
if(b6_22 && b7_32 && b8_35 && b9_36 && b10_15 && b11_25 && b12_25 && b13_16 && b14_35 && b15_35 && b16_21 && b17_34 && b18_32 && b19_15 && b20_19 && b21_15 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 280;
}
if(b7_15 && b8_15 && b9_20 && b10_16 && b11_22 && b12_27 && b13_10 && b14_27 && b15_6 && b16_30 && b17_45 && b18_33 && b19_38 && b20_26 && b21_36 && b22_33 && b23_23 && b24_11 && b25_46 && b26_7 && b27_12 && b28_33 && b29_50 && b30_46) {
pattern_id = 281;
}
if(b21_15 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 282;
}
if(b20_33 && b21_4 && b22_47 && b23_13 && b24_31 && b25_39 && b26_25 && b27_28 && b28_1 && b29_50 && b30_55) {
pattern_id = 283;
}
if(b18_33 && b19_12 && b20_28 && b21_42 && b22_15 && b23_31 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_51 && b30_43) {
pattern_id = 284;
}
if(b22_39 && b23_9 && b24_30 && b25_51 && b26_11 && b27_30 && b28_30 && b29_50 && b30_25) {
pattern_id = 285;
}
if(b4_14 && b5_20 && b6_16 && b7_29 && b8_13 && b9_19 && b10_19 && b11_28 && b12_8 && b13_32 && b14_2 && b15_43 && b16_21 && b17_8 && b18_4 && b19_16 && b20_33 && b21_8 && b22_14 && b23_9 && b24_30 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 286;
}
if(b23_45 && b24_13 && b25_17 && b26_38 && b27_13 && b28_44 && b29_65 && b30_28) {
pattern_id = 287;
}
if(b13_33 && b14_24 && b15_37 && b16_11 && b17_44 && b18_41 && b19_45 && b20_30 && b21_31 && b22_4 && b23_13 && b24_18 && b25_39 && b26_19 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 288;
}
if(b16_6 && b17_19 && b18_15 && b19_8 && b20_38 && b21_36 && b22_43 && b23_7 && b24_30 && b25_18 && b26_19 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 289;
}
if(b15_35 && b16_21 && b17_34 && b18_32 && b19_15 && b20_19 && b21_40 && b22_14 && b23_13 && b24_39 && b25_5 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 290;
}
if(b19_36 && b20_7 && b21_43 && b22_4 && b23_23 && b24_2 && b25_56 && b26_64 && b27_13 && b28_23 && b29_9 && b30_22) {
pattern_id = 291;
}
if(b16_6 && b17_19 && b18_15 && b19_8 && b20_38 && b21_36 && b22_43 && b23_50 && b24_18 && b25_16 && b26_6 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 292;
}
if(b13_33 && b14_24 && b15_37 && b16_11 && b17_44 && b18_41 && b19_45 && b20_40 && b21_41 && b22_28 && b23_7 && b24_2 && b25_1 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 293;
}
if(b14_26 && b15_12 && b16_23 && b17_21 && b18_19 && b19_20 && b20_57 && b21_9 && b22_23 && b23_51 && b24_15 && b25_6 && b26_19 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 294;
}
if(b12_16 && b13_35 && b14_36 && b15_20 && b16_12 && b17_13 && b18_35 && b19_13 && b20_7 && b21_7 && b22_13 && b23_47 && b24_15 && b25_8 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 295;
}
if(b13_33 && b14_24 && b15_37 && b16_11 && b17_44 && b18_41 && b19_45 && b20_13 && b21_28 && b22_14 && b23_16 && b24_31 && b25_5 && b26_20 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 296;
}
if(b12_16 && b13_35 && b14_36 && b15_20 && b16_12 && b17_13 && b18_35 && b19_16 && b20_43 && b21_5 && b22_2 && b23_23 && b24_2 && b25_11 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 297;
}
if(b15_35 && b16_21 && b17_34 && b18_32 && b19_15 && b20_19 && b21_40 && b22_13 && b23_6 && b24_13 && b25_10 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 298;
}
if(b11_20 && b12_24 && b13_24 && b14_13 && b15_21 && b16_41 && b17_43 && b18_17 && b19_14 && b20_42 && b21_19 && b22_8 && b23_9 && b24_5 && b25_5 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 299;
}
if(b6_22 && b7_32 && b8_35 && b9_36 && b10_21 && b11_25 && b12_34 && b13_36 && b14_14 && b15_20 && b16_34 && b17_35 && b18_21 && b19_5 && b20_43 && b21_7 && b22_43 && b23_13 && b24_31 && b25_1 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 300;
}
if(b8_25 && b9_12 && b10_11 && b11_12 && b12_15 && b13_42 && b14_37 && b15_29 && b16_34 && b17_35 && b18_35 && b19_8 && b20_38 && b21_7 && b22_28 && b23_46 && b24_2 && b25_5 && b26_20 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 301;
}
if(b13_33 && b14_24 && b15_37 && b16_11 && b17_44 && b18_41 && b19_45 && b20_20 && b21_19 && b22_8 && b23_46 && b24_2 && b25_5 && b26_20 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 302;
}
if(b12_16 && b13_35 && b14_36 && b15_20 && b16_12 && b17_13 && b18_19 && b19_16 && b20_20 && b21_28 && b22_1 && b23_6 && b24_15 && b25_8 && b26_36 && b27_1 && b28_11 && b29_16 && b30_26) {
pattern_id = 303;
}
if(b20_33 && b21_4 && b22_47 && b23_13 && b24_31 && b25_39 && b26_39 && b27_10 && b28_50 && b29_12 && b30_10) {
pattern_id = 304;
}
if(b10_19 && b11_16 && b12_35 && b13_32 && b14_22 && b15_25 && b16_21 && b17_12 && b18_19 && b19_36 && b20_21 && b21_19 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 305;
}
if(b23_45 && b24_13 && b25_17 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 306;
}
if(b5_3 && b6_23 && b7_19 && b8_17 && b9_12 && b10_16 && b11_15 && b12_22 && b13_15 && b14_27 && b15_35 && b16_29 && b17_28 && b18_41 && b19_44 && b20_38 && b21_20 && b22_39 && b23_28 && b24_31 && b25_10 && b26_12 && b27_1 && b28_52 && b29_1 && b30_47) {
pattern_id = 307;
}
if(b24_21 && b25_47 && b26_64 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 308;
}
if(b15_35 && b16_21 && b17_37 && b18_12 && b19_26 && b20_13 && b21_8 && b22_12 && b23_55 && b24_6 && b25_31 && b26_21 && b27_27 && b28_26 && b29_44 && b30_43) {
pattern_id = 309;
}
if(b17_23 && b18_21 && b19_33 && b20_33 && b21_19 && b22_8 && b23_14 && b24_11 && b25_18 && b26_21 && b27_1 && b28_52 && b29_8 && b30_14) {
pattern_id = 310;
}
if(b15_35 && b16_21 && b17_50 && b18_4 && b19_20 && b20_20 && b21_28 && b22_41 && b23_31 && b24_2 && b25_5 && b26_17 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 311;
}
if(b22_39 && b23_9 && b24_11 && b25_16 && b26_11 && b27_38 && b28_11 && b29_1 && b30_5) {
pattern_id = 312;
}
if(b22_39 && b23_9 && b24_17 && b25_26 && b26_53 && b27_38 && b28_30 && b29_50 && b30_25) {
pattern_id = 313;
}
if(b21_15 && b22_1 && b23_15 && b24_18 && b25_8 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 314;
}
if(b20_33 && b21_4 && b22_8 && b23_23 && b24_39 && b25_47 && b26_24 && b27_19 && b28_30 && b29_50 && b30_25) {
pattern_id = 315;
}
if(b16_6 && b17_19 && b18_45 && b19_15 && b20_41 && b21_4 && b22_24 && b23_9 && b24_29 && b25_36 && b26_39 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 316;
}
if(b17_23 && b18_21 && b19_32 && b20_38 && b21_2 && b22_16 && b23_30 && b24_15 && b25_8 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 317;
}
if(b22_39 && b23_9 && b24_17 && b25_13 && b26_7 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 318;
}
if(b9_22 && b10_25 && b11_25 && b12_35 && b13_4 && b14_21 && b15_21 && b16_23 && b17_23 && b18_30 && b19_8 && b20_9 && b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 319;
}
if(b10_19 && b11_16 && b12_27 && b13_24 && b14_35 && b15_10 && b16_12 && b17_34 && b18_33 && b19_16 && b20_42 && b21_7 && b22_39 && b23_28 && b24_42 && b25_39 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 320;
}
if(b22_39 && b23_9 && b24_2 && b25_39 && b26_2 && b27_57 && b28_44 && b29_14 && b30_5) {
pattern_id = 321;
}
if(b24_21 && b25_47 && b26_21 && b27_10 && b28_44 && b29_61 && b30_28) {
pattern_id = 322;
}
if(b24_21 && b25_47 && b26_21 && b27_8 && b28_30 && b29_50 && b30_25) {
pattern_id = 323;
}
if(b23_45 && b24_13 && b25_39 && b26_36 && b27_1 && b28_11 && b29_25 && b30_33) {
pattern_id = 324;
}
if(b21_15 && b22_1 && b23_29 && b24_18 && b25_49 && b26_12 && b27_24 && b28_30 && b29_50 && b30_25) {
pattern_id = 325;
}
if(b23_45 && b24_13 && b25_36 && b26_11 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 326;
}
if(b20_33 && b21_4 && b22_12 && b23_23 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_44 && b30_43) {
pattern_id = 327;
}
if(b26_49 && b27_19 && b28_11 && b29_12 && b30_28) {
pattern_id = 328;
}
if(b20_33 && b21_4 && b22_12 && b23_23 && b24_21 && b25_1 && b26_19 && b27_19 && b28_38 && b29_39 && b30_22) {
pattern_id = 329;
}
if(b18_33 && b19_12 && b20_13 && b21_19 && b22_39 && b23_51 && b24_18 && b25_31 && b26_11 && b27_28 && b28_30 && b29_60 && b30_22) {
pattern_id = 330;
}
if(b19_36 && b20_7 && b21_19 && b22_12 && b23_46 && b24_19 && b25_10 && b26_7 && b27_1 && b28_40 && b29_11 && b30_45) {
pattern_id = 331;
}
if(b15_35 && b16_21 && b17_12 && b18_11 && b19_32 && b20_38 && b21_17 && b22_1 && b23_6 && b24_31 && b25_31 && b26_21 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 332;
}
if(b24_21 && b25_47 && b26_17 && b27_24 && b28_1 && b29_12 && b30_5) {
pattern_id = 333;
}
if(b22_39 && b23_9 && b24_9 && b25_11 && b26_36 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 334;
}
if(b22_39 && b23_9 && b24_9 && b25_11 && b26_36 && b27_1 && b28_52 && b29_27 && b30_26) {
pattern_id = 335;
}
if(b12_16 && b13_35 && b14_35 && b15_63 && b16_51 && b17_44 && b18_43 && b19_3 && b20_33 && b21_17 && b22_23 && b23_5 && b24_37 && b25_18 && b26_12 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 336;
}
if(b15_35 && b16_21 && b17_26 && b18_49 && b19_30 && b20_38 && b21_53 && b22_23 && b23_45 && b24_20 && b25_8 && b26_36 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 337;
}
if(b20_33 && b21_4 && b22_13 && b23_46 && b24_1 && b25_5 && b26_24 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 338;
}
if(b19_36 && b20_7 && b21_7 && b22_43 && b23_47 && b24_18 && b25_26 && b26_13 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 339;
}
if(b24_21 && b25_47 && b26_19 && b27_69 && b28_40 && b29_34 && b30_67) {
pattern_id = 340;
}
if(b20_33 && b21_4 && b22_2 && b23_5 && b24_38 && b25_18 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 341;
}
if(b19_36 && b20_7 && b21_13 && b22_60 && b23_6 && b24_31 && b25_31 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 342;
}
if(b2_9 && b3_19 && b4_26 && b5_17 && b6_31 && b7_18 && b8_35 && b9_12 && b10_38 && b11_16 && b12_16 && b13_35 && b14_15 && b15_29 && b16_18 && b17_43 && b18_14 && b19_16 && b20_43 && b21_28 && b22_43 && b23_30 && b24_31 && b25_16 && b26_12 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 343;
}
if(b5_3 && b6_23 && b7_24 && b8_23 && b9_31 && b10_15 && b11_25 && b12_25 && b13_14 && b14_5 && b15_12 && b16_35 && b17_17 && b18_25 && b19_38 && b20_8 && b21_41 && b22_53 && b23_54 && b24_14 && b25_7 && b26_59 && b27_46 && b28_21 && b29_42 && b30_39) {
pattern_id = 344;
}
if(b6_22 && b7_32 && b8_38 && b9_17 && b10_1 && b11_24 && b12_27 && b13_36 && b14_22 && b15_18 && b16_21 && b17_8 && b18_19 && b19_3 && b20_19 && b21_40 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 345;
}
if(b19_36 && b20_7 && b21_13 && b22_2 && b23_50 && b24_15 && b25_8 && b26_36 && b27_1 && b28_11 && b29_16 && b30_26) {
pattern_id = 346;
}
if(b18_33 && b19_12 && b20_5 && b21_5 && b22_23 && b23_50 && b24_5 && b25_51 && b26_39 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 347;
}
if(b6_22 && b7_32 && b8_46 && b9_25 && b10_1 && b11_24 && b12_14 && b13_54 && b14_50 && b15_6 && b16_56 && b17_17 && b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_3 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 348;
}
if(b11_20 && b12_24 && b13_34 && b14_22 && b15_12 && b16_35 && b17_44 && b18_47 && b19_36 && b20_9 && b21_49 && b22_13 && b23_6 && b24_18 && b25_51 && b26_7 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 349;
}
if(b20_33 && b21_4 && b22_42 && b23_28 && b24_5 && b25_47 && b26_19 && b27_8 && b28_30 && b29_50 && b30_25) {
pattern_id = 350;
}
if(b19_36 && b20_7 && b21_26 && b22_13 && b23_6 && b24_13 && b25_10 && b26_36 && b27_1 && b28_11 && b29_25 && b30_33) {
pattern_id = 351;
}
if(b18_33 && b19_12 && b20_47 && b21_35 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 352;
}
if(b23_45 && b24_13 && b25_49 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 353;
}
if(b15_35 && b16_13 && b17_23 && b18_19 && b19_20 && b20_28 && b21_2 && b22_49 && b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 354;
}
if(b11_20 && b12_40 && b13_33 && b14_10 && b15_35 && b16_44 && b17_44 && b18_41 && b19_31 && b20_7 && b21_28 && b22_39 && b23_6 && b24_41 && b25_17 && b26_2 && b27_1 && b28_17 && b29_18 && b30_8) {
pattern_id = 355;
}
if(b20_33 && b21_39 && b22_39 && b23_29 && b24_37 && b25_11 && b26_49 && b27_9 && b28_20 && b29_3 && b30_52) {
pattern_id = 356;
}
if(b23_45 && b24_39 && b25_46 && b26_36 && b27_6 && b28_7 && b29_9 && b30_28) {
pattern_id = 357;
}
if(b16_6 && b17_4 && b18_54 && b19_36 && b20_41 && b21_29 && b22_25 && b23_23 && b24_2 && b25_15 && b26_39 && b27_57 && b28_19 && b29_9 && b30_28) {
pattern_id = 358;
}
if(b24_21 && b25_26 && b26_7 && b27_24 && b28_22 && b29_39 && b30_42) {
pattern_id = 359;
}
if(b26_49 && b27_50 && b28_12 && b29_1 && b30_32) {
pattern_id = 360;
}
if(b20_33 && b21_39 && b22_24 && b23_27 && b24_45 && b25_18 && b26_36 && b27_18 && b28_30 && b29_1 && b30_32) {
pattern_id = 361;
}
if(b19_36 && b20_41 && b21_39 && b22_25 && b23_50 && b24_31 && b25_1 && b26_19 && b27_1 && b28_40 && b29_17 && b30_33) {
pattern_id = 362;
}
if(b17_23 && b18_42 && b19_24 && b20_45 && b21_8 && b22_15 && b23_28 && b24_5 && b25_16 && b26_2 && b27_56 && b28_30 && b29_1 && b30_32) {
pattern_id = 363;
}
if(b17_23 && b18_42 && b19_24 && b20_45 && b21_8 && b22_15 && b23_28 && b24_5 && b25_1 && b26_51 && b27_24 && b28_30 && b29_1 && b30_32) {
pattern_id = 364;
}
if(b17_23 && b18_42 && b19_24 && b20_45 && b21_8 && b22_23 && b23_28 && b24_5 && b25_1 && b26_51 && b27_24 && b28_30 && b29_1 && b30_32) {
pattern_id = 365;
}
if(b16_6 && b17_4 && b18_42 && b19_48 && b20_50 && b21_31 && b22_13 && b23_6 && b24_19 && b25_52 && b26_52 && b27_1 && b28_40 && b29_17 && b30_33) {
pattern_id = 366;
}
if(b21_15 && b22_24 && b23_11 && b24_32 && b25_8 && b26_12 && b27_28 && b28_30 && b29_1 && b30_32) {
pattern_id = 367;
}
if(b18_33 && b19_24 && b20_41 && b21_35 && b22_10 && b23_7 && b24_47 && b25_16 && b26_2 && b27_56 && b28_30 && b29_1 && b30_32) {
pattern_id = 368;
}
if(b18_33 && b19_24 && b20_41 && b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 369;
}
if(b16_6 && b17_4 && b18_42 && b19_45 && b20_9 && b21_42 && b22_15 && b23_15 && b24_31 && b25_5 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 370;
}
if(b16_6 && b17_4 && b18_42 && b19_16 && b20_33 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 371;
}
if(b17_23 && b18_42 && b19_24 && b20_9 && b21_40 && b22_33 && b23_5 && b24_9 && b25_6 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 372;
}
if(b22_39 && b23_11 && b24_30 && b25_18 && b26_17 && b27_1 && b28_1 && b29_11 && b30_8) {
pattern_id = 373;
}
if(b16_6 && b17_4 && b18_4 && b19_5 && b20_7 && b21_15 && b22_23 && b23_34 && b24_30 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 374;
}
if(b19_36 && b20_41 && b21_41 && b22_45 && b23_8 && b24_15 && b25_39 && b26_64 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 375;
}
if(b15_35 && b16_13 && b17_44 && b18_41 && b19_36 && b20_23 && b21_2 && b22_1 && b23_26 && b24_27 && b25_18 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 376;
}
if(b24_21 && b25_26 && b26_11 && b27_30 && b28_32 && b29_1 && b30_32) {
pattern_id = 377;
}
if(b13_33 && b14_42 && b15_21 && b16_48 && b17_34 && b18_42 && b19_1 && b20_45 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 378;
}
if(b8_25 && b9_38 && b10_21 && b11_41 && b12_25 && b13_35 && b14_19 && b15_56 && b16_18 && b17_8 && b18_17 && b19_13 && b20_23 && b21_2 && b22_28 && b23_7 && b24_31 && b25_52 && b26_12 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 379;
}
if(b4_14 && b5_27 && b6_25 && b7_12 && b8_43 && b9_9 && b10_38 && b11_39 && b12_24 && b13_19 && b14_24 && b15_54 && b16_19 && b17_3 && b18_33 && b19_20 && b20_70 && b21_70 && b22_47 && b23_56 && b24_57 && b25_72 && b26_11 && b27_21 && b28_29 && b29_21 && b30_78) {
pattern_id = 380;
}
if(b19_36 && b20_41 && b21_36 && b22_24 && b23_30 && b24_15 && b25_8 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 381;
}
if(b22_39 && b23_11 && b24_15 && b25_31 && b26_15 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 382;
}
if(b18_33 && b19_24 && b20_26 && b21_31 && b22_60 && b23_13 && b24_13 && b25_8 && b26_15 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 383;
}
if(b21_15 && b22_24 && b23_5 && b24_15 && b25_10 && b26_16 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 384;
}
if(b15_35 && b16_13 && b17_28 && b18_36 && b19_34 && b20_19 && b21_15 && b22_24 && b23_5 && b24_42 && b25_5 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 385;
}
if(b19_36 && b20_41 && b21_7 && b22_45 && b23_14 && b24_18 && b25_1 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 386;
}
if(b20_33 && b21_39 && b22_13 && b23_15 && b24_31 && b25_1 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 387;
}
if(b23_45 && b24_39 && b25_1 && b26_38 && b27_26 && b28_30 && b29_50 && b30_25) {
pattern_id = 388;
}
if(b3_10 && b4_32 && b5_28 && b6_41 && b7_41 && b8_17 && b9_29 && b10_31 && b11_52 && b12_16 && b13_22 && b14_14 && b15_12 && b16_30 && b17_15 && b18_37 && b19_26 && b20_7 && b21_7 && b22_12 && b23_55 && b24_2 && b25_5 && b26_20 && b27_8 && b28_26 && b29_44 && b30_43) {
pattern_id = 389;
}
if(b0_5 && b1_3 && b2_13 && b3_15 && b4_21 && b5_19 && b6_27 && b7_28 && b8_3 && b9_34 && b10_15 && b11_20 && b12_12 && b13_1 && b14_24 && b15_33 && b16_42 && b17_17 && b18_23 && b19_34 && b20_42 && b21_41 && b22_16 && b23_54 && b24_13 && b25_1 && b26_36 && b27_20 && b28_7 && b29_8 && b30_26) {
pattern_id = 390;
}
if(b15_35 && b16_29 && b17_19 && b18_47 && b19_35 && b20_43 && b21_15 && b22_12 && b23_26 && b24_28 && b25_56 && b26_12 && b27_52 && b28_12 && b29_52 && b30_57) {
pattern_id = 391;
}
if(b15_35 && b16_29 && b17_19 && b18_47 && b19_35 && b20_43 && b21_43 && b22_43 && b23_30 && b24_18 && b25_5 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 392;
}
if(b18_33 && b19_38 && b20_7 && b21_17 && b22_9 && b23_7 && b24_38 && b25_11 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 393;
}
if(b19_36 && b20_30 && b21_4 && b22_8 && b23_46 && b24_38 && b25_47 && b26_15 && b27_27 && b28_30 && b29_50 && b30_25) {
pattern_id = 394;
}
if(b22_39 && b23_8 && b24_13 && b25_16 && b26_12 && b27_30 && b28_19 && b29_18 && b30_8) {
pattern_id = 395;
}
if(b13_33 && b14_5 && b15_12 && b16_28 && b17_17 && b18_41 && b19_34 && b20_7 && b21_28 && b22_25 && b23_9 && b24_30 && b25_51 && b26_11 && b27_30 && b28_30 && b29_50 && b30_25) {
pattern_id = 396;
}
if(b18_33 && b19_38 && b20_7 && b21_9 && b22_14 && b23_31 && b24_30 && b25_47 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 397;
}
if(b13_33 && b14_5 && b15_12 && b16_28 && b17_17 && b18_41 && b19_34 && b20_7 && b21_28 && b22_43 && b23_9 && b24_30 && b25_51 && b26_11 && b27_30 && b28_30 && b29_50 && b30_25) {
pattern_id = 398;
}
if(b12_16 && b13_27 && b14_24 && b15_43 && b16_26 && b17_13 && b18_15 && b19_12 && b20_23 && b21_40 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_11 && b29_25 && b30_33) {
pattern_id = 399;
}
if(b13_33 && b14_5 && b15_12 && b16_28 && b17_17 && b18_41 && b19_34 && b20_43 && b21_28 && b22_43 && b23_9 && b24_30 && b25_51 && b26_11 && b27_30 && b28_30 && b29_50 && b30_25) {
pattern_id = 400;
}
if(b24_21 && b25_15 && b26_7 && b27_38 && b28_11 && b29_18 && b30_22) {
pattern_id = 401;
}
if(b19_36 && b20_30 && b21_4 && b22_4 && b23_29 && b24_13 && b25_1 && b26_60 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 402;
}
if(b21_15 && b22_28 && b23_9 && b24_9 && b25_26 && b26_2 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 403;
}
if(b22_39 && b23_8 && b24_13 && b25_8 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 404;
}
if(b20_33 && b21_17 && b22_1 && b23_34 && b24_5 && b25_9 && b26_3 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 405;
}
if(b19_36 && b20_30 && b21_4 && b22_2 && b23_9 && b24_17 && b25_31 && b26_37 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 406;
}
if(b21_15 && b22_28 && b23_9 && b24_5 && b25_11 && b26_41 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 407;
}
if(b23_45 && b24_10 && b25_47 && b26_19 && b27_13 && b28_44 && b29_51 && b30_41) {
pattern_id = 408;
}
if(b15_35 && b16_29 && b17_4 && b18_12 && b19_31 && b20_56 && b21_15 && b22_28 && b23_11 && b24_9 && b25_5 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 409;
}
if(b14_26 && b15_18 && b16_29 && b17_4 && b18_19 && b19_32 && b20_40 && b21_15 && b22_4 && b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 410;
}
if(b2_9 && b3_11 && b4_25 && b5_3 && b6_30 && b7_28 && b8_25 && b9_25 && b10_37 && b11_25 && b12_44 && b13_14 && b14_41 && b15_35 && b16_18 && b17_8 && b18_32 && b19_32 && b20_33 && b21_17 && b22_16 && b23_30 && b24_27 && b25_11 && b26_11 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 411;
}
if(b20_33 && b21_17 && b22_14 && b23_34 && b24_19 && b25_52 && b26_17 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 412;
}
if(b12_16 && b13_27 && b14_29 && b15_12 && b16_34 && b17_12 && b18_32 && b19_12 && b20_19 && b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 413;
}
if(b19_36 && b20_30 && b21_44 && b22_28 && b23_9 && b24_10 && b25_50 && b26_12 && b27_1 && b28_33 && b29_18 && b30_42) {
pattern_id = 414;
}
if(b4_14 && b5_13 && b6_19 && b7_19 && b8_12 && b9_25 && b10_4 && b11_20 && b12_14 && b13_31 && b14_13 && b15_43 && b16_20 && b17_20 && b18_41 && b19_5 && b20_7 && b21_46 && b22_28 && b23_50 && b24_18 && b25_15 && b26_15 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 415;
}
if(b12_16 && b13_27 && b14_29 && b15_37 && b16_19 && b17_15 && b18_30 && b19_36 && b20_43 && b21_46 && b22_1 && b23_13 && b24_47 && b25_16 && b26_12 && b27_19 && b28_11 && b29_50 && b30_28) {
pattern_id = 416;
}
if(b15_35 && b16_29 && b17_37 && b18_15 && b19_3 && b20_30 && b21_7 && b22_39 && b23_7 && b24_48 && b25_36 && b26_12 && b27_11 && b28_12 && b29_25 && b30_28) {
pattern_id = 417;
}
if(b3_10 && b4_11 && b5_14 && b6_16 && b7_12 && b8_18 && b9_21 && b10_19 && b11_24 && b12_30 && b13_26 && b14_14 && b15_40 && b16_21 && b17_35 && b18_33 && b19_14 && b20_47 && b21_19 && b22_10 && b23_8 && b24_13 && b25_16 && b26_52 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 418;
}
if(b14_26 && b15_18 && b16_40 && b17_34 && b18_28 && b19_38 && b20_9 && b21_15 && b22_13 && b23_31 && b24_31 && b25_36 && b26_6 && b27_27 && b28_38 && b29_1 && b30_28) {
pattern_id = 419;
}
if(b2_9 && b3_11 && b4_12 && b5_11 && b6_14 && b7_17 && b8_17 && b9_22 && b10_4 && b11_25 && b12_15 && b13_26 && b14_2 && b15_6 && b16_35 && b17_3 && b18_33 && b19_14 && b20_31 && b21_4 && b22_8 && b23_14 && b24_13 && b25_10 && b26_12 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 420;
}
if(b0_5 && b1_3 && b2_8 && b3_9 && b4_10 && b5_13 && b6_9 && b7_15 && b8_17 && b9_19 && b10_21 && b11_15 && b12_29 && b13_15 && b14_28 && b15_25 && b16_6 && b17_37 && b18_19 && b19_32 && b20_43 && b21_2 && b22_49 && b23_23 && b24_19 && b25_10 && b26_36 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 421;
}
if(b20_33 && b21_17 && b22_33 && b23_51 && b24_1 && b25_18 && b26_55 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 422;
}
if(b1_7 && b2_4 && b3_7 && b4_8 && b5_11 && b6_10 && b7_15 && b8_15 && b9_20 && b10_16 && b11_22 && b12_27 && b13_14 && b14_27 && b15_29 && b16_30 && b17_19 && b18_17 && b19_3 && b20_23 && b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 423;
}
if(b19_36 && b20_30 && b21_20 && b22_33 && b23_5 && b24_9 && b25_6 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 424;
}
if(b22_39 && b23_8 && b24_11 && b25_18 && b26_65 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 425;
}
if(b11_20 && b12_14 && b13_39 && b14_22 && b15_49 && b16_13 && b17_44 && b18_41 && b19_36 && b20_7 && b21_43 && b22_4 && b23_23 && b24_2 && b25_46 && b26_7 && b27_12 && b28_33 && b29_12 && b30_10) {
pattern_id = 426;
}
if(b4_14 && b5_13 && b6_24 && b7_2 && b8_7 && b9_38 && b10_21 && b11_25 && b12_16 && b13_35 && b14_36 && b15_40 && b16_26 && b17_26 && b18_17 && b19_36 && b20_8 && b21_2 && b22_2 && b23_9 && b24_30 && b25_1 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 427;
}
if(b15_35 && b16_29 && b17_50 && b18_19 && b19_48 && b20_41 && b21_41 && b22_16 && b23_45 && b24_10 && b25_11 && b26_11 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 428;
}
if(b16_6 && b17_15 && b18_13 && b19_15 && b20_45 && b21_39 && b22_15 && b23_31 && b24_21 && b25_15 && b26_37 && b27_13 && b28_52 && b29_11 && b30_25) {
pattern_id = 429;
}
if(b11_20 && b12_14 && b13_39 && b14_22 && b15_49 && b16_13 && b17_44 && b18_41 && b19_36 && b20_30 && b21_31 && b22_16 && b23_28 && b24_15 && b25_16 && b26_12 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 430;
}
if(b16_6 && b17_15 && b18_13 && b19_15 && b20_45 && b21_39 && b22_15 && b23_31 && b24_21 && b25_15 && b26_36 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 431;
}
if(b20_33 && b21_17 && b22_45 && b23_23 && b24_32 && b25_26 && b26_11 && b27_30 && b28_32 && b29_60 && b30_59) {
pattern_id = 432;
}
if(b20_33 && b21_17 && b22_45 && b23_23 && b24_32 && b25_26 && b26_11 && b27_30 && b28_32 && b29_25 && b30_22) {
pattern_id = 433;
}
if(b20_33 && b21_17 && b22_45 && b23_23 && b24_32 && b25_26 && b26_11 && b27_30 && b28_32 && b29_1 && b30_32) {
pattern_id = 434;
}
if(b22_39 && b23_8 && b24_11 && b25_18 && b26_65 && b27_12 && b28_7 && b29_1 && b30_28) {
pattern_id = 435;
}
if(b14_26 && b15_18 && b16_42 && b17_44 && b18_56 && b19_14 && b20_41 && b21_13 && b22_12 && b23_26 && b24_13 && b25_10 && b26_12 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 436;
}
if(b24_21 && b25_15 && b26_37 && b27_13 && b28_52 && b29_1 && b30_41) {
pattern_id = 437;
}
if(b19_36 && b20_30 && b21_20 && b22_15 && b23_30 && b24_15 && b25_8 && b26_53 && b27_38 && b28_30 && b29_50 && b30_25) {
pattern_id = 438;
}
if(b18_33 && b19_38 && b20_8 && b21_41 && b22_33 && b23_5 && b24_9 && b25_6 && b26_38 && b27_1 && b28_11 && b29_25 && b30_33) {
pattern_id = 439;
}
if(b23_45 && b24_10 && b25_11 && b26_11 && b27_38 && b28_12 && b29_12 && b30_25) {
pattern_id = 440;
}
if(b23_45 && b24_10 && b25_11 && b26_11 && b27_28 && b28_17 && b29_15 && b30_47) {
pattern_id = 441;
}
if(b14_26 && b15_18 && b16_42 && b17_44 && b18_11 && b19_31 && b20_26 && b21_17 && b22_53 && b23_20 && b24_15 && b25_15 && b26_64 && b27_13 && b28_23 && b29_9 && b30_43) {
pattern_id = 442;
}
if(b18_33 && b19_38 && b20_8 && b21_41 && b22_12 && b23_34 && b24_15 && b25_15 && b26_60 && b27_2 && b28_20 && b29_13 && b30_2) {
pattern_id = 443;
}
if(b19_36 && b20_30 && b21_20 && b22_15 && b23_6 && b24_18 && b25_1 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 444;
}
if(b23_45 && b24_10 && b25_11 && b26_11 && b27_20 && b28_17 && b29_18 && b30_42) {
pattern_id = 445;
}
if(b18_33 && b19_38 && b20_50 && b21_4 && b22_16 && b23_51 && b24_18 && b25_36 && b26_20 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 446;
}
if(b19_36 && b20_30 && b21_8 && b22_1 && b23_6 && b24_39 && b25_31 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 447;
}
if(b16_6 && b17_15 && b18_37 && b19_12 && b20_20 && b21_8 && b22_14 && b23_9 && b24_30 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 448;
}
if(b13_33 && b14_5 && b15_2 && b16_26 && b17_15 && b18_50 && b19_26 && b20_7 && b21_17 && b22_2 && b23_23 && b24_15 && b25_39 && b26_60 && b27_13 && b28_26 && b29_44 && b30_43) {
pattern_id = 449;
}
if(b20_33 && b21_17 && b22_9 && b23_7 && b24_10 && b25_20 && b26_60 && b27_13 && b28_26 && b29_44 && b30_43) {
pattern_id = 450;
}
if(b19_36 && b20_30 && b21_8 && b22_14 && b23_8 && b24_37 && b25_6 && b26_6 && b27_12 && b28_12 && b29_11 && b30_5) {
pattern_id = 451;
}
if(b22_39 && b23_8 && b24_45 && b25_18 && b26_6 && b27_1 && b28_26 && b29_20 && b30_16) {
pattern_id = 452;
}
if(b19_36 && b20_30 && b21_8 && b22_15 && b23_29 && b24_10 && b25_2 && b26_37 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 453;
}
if(b13_33 && b14_5 && b15_43 && b16_21 && b17_3 && b18_30 && b19_36 && b20_42 && b21_49 && b22_13 && b23_40 && b24_17 && b25_24 && b26_52 && b27_26 && b28_12 && b29_1 && b30_22) {
pattern_id = 454;
}
if(b15_35 && b16_29 && b17_35 && b18_21 && b19_16 && b20_9 && b21_41 && b22_33 && b23_23 && b24_18 && b25_17 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 455;
}
if(b23_45 && b24_10 && b25_51 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 456;
}
if(b18_33 && b19_38 && b20_42 && b21_43 && b22_18 && b23_29 && b24_45 && b25_36 && b26_60 && b27_24 && b28_33 && b29_44 && b30_43) {
pattern_id = 457;
}
if(b18_33 && b19_38 && b20_42 && b21_43 && b22_53 && b23_16 && b24_18 && b25_8 && b26_36 && b27_13 && b28_7 && b29_20 && b30_43) {
pattern_id = 458;
}
if(b21_15 && b22_28 && b23_5 && b24_30 && b25_5 && b26_25 && b27_28 && b28_1 && b29_50 && b30_55) {
pattern_id = 459;
}
if(b18_33 && b19_38 && b20_26 && b21_9 && b22_8 && b23_7 && b24_10 && b25_10 && b26_13 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 460;
}
if(b18_33 && b19_38 && b20_26 && b21_42 && b22_4 && b23_7 && b24_9 && b25_15 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 461;
}
if(b10_19 && b11_14 && b12_41 && b13_32 && b14_2 && b15_21 && b16_28 && b17_17 && b18_12 && b19_26 && b20_7 && b21_17 && b22_2 && b23_23 && b24_15 && b25_39 && b26_60 && b27_13 && b28_26 && b29_44 && b30_43) {
pattern_id = 462;
}
if(b17_23 && b18_47 && b19_3 && b20_42 && b21_19 && b22_15 && b23_15 && b24_18 && b25_8 && b26_60 && b27_13 && b28_26 && b29_44 && b30_43) {
pattern_id = 463;
}
if(b19_36 && b20_30 && b21_31 && b22_16 && b23_30 && b24_31 && b25_11 && b26_25 && b27_24 && b28_7 && b29_20 && b30_36) {
pattern_id = 464;
}
if(b19_36 && b20_30 && b21_31 && b22_16 && b23_30 && b24_31 && b25_11 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 465;
}
if(b14_26 && b15_18 && b16_19 && b17_13 && b18_34 && b19_15 && b20_8 && b21_15 && b22_28 && b23_50 && b24_18 && b25_15 && b26_15 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 466;
}
if(b8_25 && b9_25 && b10_37 && b11_25 && b12_44 && b13_14 && b14_41 && b15_35 && b16_18 && b17_8 && b18_32 && b19_32 && b20_33 && b21_17 && b22_16 && b23_30 && b24_27 && b25_11 && b26_11 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 467;
}
if(b13_33 && b14_5 && b15_10 && b16_41 && b17_37 && b18_19 && b19_33 && b20_33 && b21_41 && b22_4 && b23_29 && b24_15 && b25_8 && b26_19 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 468;
}
if(b13_33 && b14_5 && b15_10 && b16_41 && b17_37 && b18_19 && b19_33 && b20_57 && b21_20 && b22_14 && b23_26 && b24_10 && b25_31 && b26_38 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 469;
}
if(b8_25 && b9_25 && b10_37 && b11_25 && b12_25 && b13_15 && b14_10 && b15_29 && b16_6 && b17_44 && b18_32 && b19_33 && b20_33 && b21_4 && b22_42 && b23_9 && b24_9 && b25_17 && b26_36 && b27_1 && b28_28 && b29_50 && b30_29) {
pattern_id = 470;
}
if(b0_5 && b1_3 && b2_12 && b3_14 && b4_20 && b5_19 && b6_26 && b7_27 && b8_27 && b9_20 && b10_16 && b11_22 && b12_27 && b13_33 && b14_5 && b15_10 && b16_41 && b17_8 && b18_4 && b19_28 && b20_20 && b21_6 && b22_47 && b23_13 && b24_31 && b25_39 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 471;
}
if(b22_39 && b23_8 && b24_15 && b25_1 && b26_31 && b27_73 && b28_32 && b29_12 && b30_10) {
pattern_id = 472;
}
if(b21_15 && b22_28 && b23_5 && b24_41 && b25_39 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 473;
}
if(b19_36 && b20_30 && b21_31 && b22_41 && b23_31 && b24_5 && b25_5 && b26_17 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 474;
}
if(b21_15 && b22_28 && b23_5 && b24_41 && b25_39 && b26_19 && b27_27 && b28_17 && b29_34 && b30_33) {
pattern_id = 475;
}
if(b18_33 && b19_38 && b20_23 && b21_49 && b22_12 && b23_6 && b24_27 && b25_64 && b26_50 && b27_8 && b28_8 && b29_25 && b30_25) {
pattern_id = 476;
}
if(b11_20 && b12_14 && b13_4 && b14_49 && b15_25 && b16_35 && b17_19 && b18_45 && b19_15 && b20_42 && b21_4 && b22_45 && b23_7 && b24_45 && b25_47 && b26_21 && b27_12 && b28_23 && b29_9 && b30_8) {
pattern_id = 477;
}
if(b6_22 && b7_17 && b8_21 && b9_40 && b10_4 && b11_28 && b12_24 && b13_17 && b14_22 && b15_20 && b16_21 && b17_50 && b18_4 && b19_35 && b20_7 && b21_36 && b22_47 && b23_15 && b24_18 && b25_8 && b26_25 && b27_19 && b28_40 && b29_50 && b30_14) {
pattern_id = 478;
}
if(b20_33 && b21_17 && b22_13 && b23_20 && b24_18 && b25_14 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 479;
}
if(b16_6 && b17_15 && b18_30 && b19_49 && b20_7 && b21_7 && b22_13 && b23_47 && b24_15 && b25_8 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 480;
}
if(b18_33 && b19_38 && b20_9 && b21_18 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 481;
}
if(b27_29 && b28_52 && b29_1 && b30_32) {
pattern_id = 482;
}
if(b22_39 && b23_8 && b24_5 && b25_1 && b26_36 && b27_1 && b28_26 && b29_44 && b30_47) {
pattern_id = 483;
}
if(b20_33 && b21_17 && b22_44 && b23_28 && b24_17 && b25_31 && b26_37 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 484;
}
if(b18_33 && b19_38 && b20_31 && b21_7 && b22_44 && b23_23 && b24_18 && b25_14 && b26_3 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 485;
}
if(b20_33 && b21_17 && b22_44 && b23_28 && b24_1 && b25_5 && b26_24 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 486;
}
if(b16_6 && b17_15 && b18_43 && b19_16 && b20_17 && b21_2 && b22_24 && b23_45 && b24_20 && b25_5 && b26_17 && b27_8 && b28_26 && b29_15 && b30_10) {
pattern_id = 487;
}
if(b20_33 && b21_17 && b22_42 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 488;
}
if(b22_39 && b23_8 && b24_42 && b25_26 && b26_12 && b27_15 && b28_52 && b29_15 && b30_42) {
pattern_id = 489;
}
if(b14_26 && b15_37 && b16_21 && b17_8 && b18_21 && b19_26 && b20_13 && b21_8 && b22_12 && b23_55 && b24_13 && b25_15 && b26_19 && b27_13 && b28_7 && b29_20 && b30_43) {
pattern_id = 490;
}
if(b17_23 && b18_15 && b19_12 && b20_20 && b21_4 && b22_39 && b23_23 && b24_2 && b25_2 && b26_2 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 491;
}
if(b12_16 && b13_24 && b14_24 && b15_36 && b16_32 && b17_34 && b18_21 && b19_5 && b20_7 && b21_17 && b22_23 && b23_29 && b24_31 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 492;
}
if(b10_19 && b11_21 && b12_24 && b13_20 && b14_25 && b15_37 && b16_21 && b17_8 && b18_21 && b19_20 && b20_26 && b21_5 && b22_15 && b23_30 && b24_31 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 493;
}
if(b24_21 && b25_17 && b26_24 && b27_33 && b28_16 && b29_16 && b30_46) {
pattern_id = 494;
}
if(b18_33 && b19_34 && b20_41 && b21_40 && b22_4 && b23_53 && b24_19 && b25_57 && b26_39 && b27_1 && b28_26 && b29_20 && b30_47) {
pattern_id = 495;
}
if(b18_33 && b19_34 && b20_41 && b21_42 && b22_1 && b23_31 && b24_21 && b25_17 && b26_24 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 496;
}
if(b19_36 && b20_28 && b21_17 && b22_24 && b23_5 && b24_13 && b25_8 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 497;
}
if(b19_36 && b20_28 && b21_17 && b22_33 && b23_5 && b24_9 && b25_6 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 498;
}
if(b24_21 && b25_17 && b26_52 && b27_8 && b28_1 && b29_15 && b30_42) {
pattern_id = 499;
}
if(b20_33 && b21_43 && b22_47 && b23_23 && b24_10 && b25_11 && b26_11 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 500;
}
if(b27_29 && b28_19 && b29_9 && b30_28) {
pattern_id = 501;
}
if(b13_33 && b14_36 && b15_6 && b16_40 && b17_19 && b18_14 && b19_32 && b20_20 && b21_57 && b22_1 && b23_28 && b24_47 && b25_49 && b26_60 && b27_11 && b28_8 && b29_8 && b30_43) {
pattern_id = 502;
}
if(b12_16 && b13_24 && b14_14 && b15_30 && b16_21 && b17_52 && b18_45 && b19_5 && b20_57 && b21_8 && b22_14 && b23_9 && b24_30 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 503;
}
if(b19_36 && b20_28 && b21_2 && b22_33 && b23_23 && b24_2 && b25_5 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 504;
}
if(b15_35 && b16_23 && b17_17 && b18_45 && b19_35 && b20_26 && b21_42 && b22_14 && b23_29 && b24_13 && b25_11 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 505;
}
if(b21_15 && b22_47 && b23_30 && b24_31 && b25_8 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 506;
}
if(b22_39 && b23_26 && b24_31 && b25_2 && b26_64 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 507;
}
if(b24_21 && b25_17 && b26_11 && b27_52 && b28_53 && b29_1 && b30_28) {
pattern_id = 508;
}
if(b17_23 && b18_15 && b19_15 && b20_23 && b21_2 && b22_28 && b23_6 && b24_15 && b25_8 && b26_41 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 509;
}
if(b14_26 && b15_37 && b16_12 && b17_26 && b18_4 && b19_38 && b20_20 && b21_31 && b22_10 && b23_53 && b24_47 && b25_8 && b26_2 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 510;
}
if(b21_15 && b22_47 && b23_13 && b24_21 && b25_17 && b26_12 && b27_38 && b28_12 && b29_8 && b30_47) {
pattern_id = 511;
}
if(b26_49 && b27_12 && b28_33 && b29_1 && b30_12) {
pattern_id = 512;
}
if(b18_33 && b19_34 && b20_19 && b21_2 && b22_42 && b23_28 && b24_1 && b25_5 && b26_24 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 513;
}
if(b18_33 && b19_34 && b20_19 && b21_7 && b22_2 && b23_5 && b24_15 && b25_16 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 514;
}
if(b26_49 && b27_12 && b28_7 && b29_14 && b30_28) {
pattern_id = 515;
}
if(b21_15 && b22_47 && b23_5 && b24_10 && b25_46 && b26_7 && b27_12 && b28_33 && b29_12 && b30_10) {
pattern_id = 516;
}
if(b18_33 && b19_34 && b20_26 && b21_17 && b22_39 && b23_29 && b24_13 && b25_15 && b26_15 && b27_19 && b28_50 && b29_9 && b30_22) {
pattern_id = 517;
}
if(b18_33 && b19_34 && b20_26 && b21_17 && b22_41 && b23_13 && b24_18 && b25_39 && b26_19 && b27_1 && b28_19 && b29_32 && b30_46) {
pattern_id = 518;
}
if(b13_33 && b14_36 && b15_10 && b16_29 && b17_52 && b18_32 && b19_14 && b20_19 && b21_5 && b22_18 && b23_29 && b24_45 && b25_36 && b26_60 && b27_15 && b28_44 && b29_44 && b30_43) {
pattern_id = 519;
}
if(b15_35 && b16_23 && b17_28 && b18_4 && b19_34 && b20_38 && b21_5 && b22_44 && b23_5 && b24_5 && b25_5 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 520;
}
if(b20_33 && b21_43 && b22_23 && b23_13 && b24_10 && b25_2 && b26_37 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 521;
}
if(b20_33 && b21_43 && b22_23 && b23_13 && b24_17 && b25_31 && b26_37 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 522;
}
if(b19_36 && b20_28 && b21_31 && b22_13 && b23_6 && b24_41 && b25_2 && b26_64 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 523;
}
if(b18_33 && b19_34 && b20_26 && b21_7 && b22_2 && b23_14 && b24_28 && b25_2 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 524;
}
if(b15_35 && b16_23 && b17_28 && b18_38 && b19_20 && b20_40 && b21_31 && b22_1 && b23_26 && b24_29 && b25_47 && b26_36 && b27_28 && b28_59 && b29_50 && b30_43) {
pattern_id = 525;
}
if(b18_33 && b19_34 && b20_26 && b21_26 && b22_16 && b23_15 && b24_15 && b25_47 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 526;
}
if(b6_22 && b7_19 && b8_17 && b9_30 && b10_29 && b11_20 && b12_40 && b13_14 && b14_10 && b15_35 && b16_20 && b17_17 && b18_21 && b19_31 && b20_30 && b21_8 && b22_53 && b23_8 && b24_15 && b25_39 && b26_19 && b27_27 && b28_18 && b29_11 && b30_43) {
pattern_id = 527;
}
if(b20_33 && b21_43 && b22_41 && b23_13 && b24_47 && b25_5 && b26_21 && b27_11 && b28_30 && b29_50 && b30_25) {
pattern_id = 528;
}
if(b20_33 && b21_43 && b22_44 && b23_47 && b24_19 && b25_1 && b26_17 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 529;
}
if(b22_39 && b23_7 && b24_10 && b25_50 && b26_2 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 530;
}
if(b10_19 && b11_24 && b12_14 && b13_22 && b14_5 && b15_27 && b16_12 && b17_12 && b18_17 && b19_16 && b20_33 && b21_2 && b22_28 && b23_47 && b24_13 && b25_8 && b26_12 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 531;
}
if(b15_35 && b16_26 && b17_34 && b18_19 && b19_5 && b20_57 && b21_4 && b22_28 && b23_6 && b24_31 && b25_31 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 532;
}
if(b16_6 && b17_17 && b18_15 && b19_15 && b20_20 && b21_40 && b22_15 && b23_13 && b24_13 && b25_11 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 533;
}
if(b20_33 && b21_2 && b22_47 && b23_23 && b24_5 && b25_10 && b26_7 && b27_56 && b28_30 && b29_50 && b30_25) {
pattern_id = 534;
}
if(b20_33 && b21_2 && b22_4 && b23_29 && b24_15 && b25_14 && b26_12 && b27_15 && b28_59 && b29_2 && b30_51) {
pattern_id = 535;
}
if(b19_36 && b20_43 && b21_42 && b22_12 && b23_5 && b24_1 && b25_5 && b26_17 && b27_60 && b28_43 && b29_33 && b30_43) {
pattern_id = 536;
}
if(b19_36 && b20_43 && b21_42 && b22_41 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 537;
}
if(b18_33 && b19_14 && b20_42 && b21_13 && b22_4 && b23_9 && b24_31 && b25_16 && b26_25 && b27_52 && b28_52 && b29_19 && b30_16) {
pattern_id = 538;
}
if(b8_25 && b9_29 && b10_18 && b11_20 && b12_24 && b13_24 && b14_13 && b15_21 && b16_41 && b17_23 && b18_21 && b19_33 && b20_8 && b21_28 && b22_14 && b23_51 && b24_13 && b25_10 && b26_12 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 539;
}
if(b17_23 && b18_4 && b19_20 && b20_20 && b21_2 && b22_10 && b23_46 && b24_39 && b25_6 && b26_37 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 540;
}
if(b19_36 && b20_43 && b21_36 && b22_44 && b23_23 && b24_9 && b25_31 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 541;
}
if(b20_33 && b21_2 && b22_16 && b23_16 && b24_31 && b25_8 && b26_2 && b27_30 && b28_30 && b29_50 && b30_25) {
pattern_id = 542;
}
if(b20_33 && b21_2 && b22_16 && b23_16 && b24_15 && b25_6 && b26_19 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 543;
}
if(b16_6 && b17_17 && b18_41 && b19_37 && b20_26 && b21_13 && b22_2 && b23_18 && b24_39 && b25_47 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 544;
}
if(b12_16 && b13_15 && b14_35 && b15_27 && b16_19 && b17_26 && b18_33 && b19_57 && b20_2 && b21_10 && b22_14 && b23_34 && b24_9 && b25_31 && b26_17 && b27_1 && b28_28 && b29_1 && b30_42) {
pattern_id = 545;
}
if(b22_39 && b23_7 && b24_19 && b25_50 && b26_2 && b27_28 && b28_30 && b29_50 && b30_25) {
pattern_id = 546;
}
if(b21_15 && b22_14 && b23_28 && b24_45 && b25_31 && b26_6 && b27_1 && b28_11 && b29_25 && b30_33) {
pattern_id = 547;
}
if(b16_6 && b17_17 && b18_17 && b19_38 && b20_33 && b21_41 && b22_16 && b23_7 && b24_5 && b25_17 && b26_25 && b27_24 && b28_7 && b29_20 && b30_36) {
pattern_id = 548;
}
if(b22_39 && b23_7 && b24_5 && b25_15 && b26_49 && b27_38 && b28_7 && b29_11 && b30_26) {
pattern_id = 549;
}
if(b20_33 && b21_2 && b22_2 && b23_8 && b24_21 && b25_36 && b26_7 && b27_8 && b28_40 && b29_16 && b30_26) {
pattern_id = 550;
}
if(b20_33 && b21_2 && b22_2 && b23_8 && b24_21 && b25_1 && b26_16 && b27_19 && b28_19 && b29_15 && b30_46) {
pattern_id = 551;
}
if(b19_36 && b20_43 && b21_53 && b22_14 && b23_31 && b24_5 && b25_1 && b26_13 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 552;
}
if(b12_16 && b13_15 && b14_34 && b15_6 && b16_30 && b17_20 && b18_17 && b19_35 && b20_38 && b21_36 && b22_45 && b23_30 && b24_15 && b25_8 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 553;
}
if(b8_25 && b9_29 && b10_29 && b11_8 && b12_16 && b13_35 && b14_35 && b15_18 && b16_18 && b17_44 && b18_17 && b19_14 && b20_47 && b21_5 && b22_43 && b23_40 && b24_41 && b25_5 && b26_17 && b27_61 && b28_30 && b29_50 && b30_25) {
pattern_id = 554;
}
if(b17_23 && b18_4 && b19_28 && b20_7 && b21_41 && b22_10 && b23_45 && b24_19 && b25_5 && b26_7 && b27_15 && b28_52 && b29_17 && b30_28) {
pattern_id = 555;
}
if(b1_7 && b2_11 && b3_21 && b4_27 && b5_24 && b6_13 && b7_26 && b8_3 && b9_21 && b10_19 && b11_8 && b12_8 && b13_4 && b14_34 && b15_43 && b16_26 && b17_8 && b18_33 && b19_25 && b20_19 && b21_31 && b22_23 && b23_29 && b24_35 && b25_5 && b26_17 && b27_11 && b28_23 && b29_9 && b30_6) {
pattern_id = 556;
}
if(b8_25 && b9_29 && b10_33 && b11_14 && b12_1 && b13_35 && b14_10 && b15_48 && b16_26 && b17_23 && b18_52 && b19_3 && b20_8 && b21_31 && b22_16 && b23_19 && b24_9 && b25_51 && b26_25 && b27_19 && b28_40 && b29_50 && b30_33) {
pattern_id = 557;
}
if(b13_33 && b14_14 && b15_52 && b16_29 && b17_29 && b18_21 && b19_20 && b20_8 && b21_2 && b22_39 && b23_34 && b24_15 && b25_31 && b26_19 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 558;
}
if(b12_16 && b13_15 && b14_39 && b15_18 && b16_18 && b17_19 && b18_41 && b19_33 && b20_43 && b21_15 && b22_10 && b23_5 && b24_15 && b25_10 && b26_25 && b27_19 && b28_40 && b29_50 && b30_33) {
pattern_id = 559;
}
if(b23_45 && b24_18 && b25_49 && b26_12 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 560;
}
if(b11_20 && b12_8 && b13_43 && b14_14 && b15_18 && b16_6 && b17_3 && b18_37 && b19_3 && b20_17 && b21_15 && b22_28 && b23_5 && b24_2 && b25_2 && b26_11 && b27_56 && b28_32 && b29_14 && b30_8) {
pattern_id = 561;
}
if(b19_36 && b20_43 && b21_60 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 562;
}
if(b19_36 && b20_43 && b21_60 && b22_24 && b23_5 && b24_13 && b25_8 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 563;
}
if(b21_15 && b22_14 && b23_1 && b24_38 && b25_47 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 564;
}
if(b16_6 && b17_37 && b18_21 && b19_43 && b20_42 && b21_4 && b22_16 && b23_9 && b24_11 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 565;
}
if(b15_35 && b16_40 && b17_19 && b18_49 && b19_8 && b20_7 && b21_36 && b22_1 && b23_51 && b24_18 && b25_8 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 566;
}
if(b21_15 && b22_33 && b23_9 && b24_48 && b25_1 && b26_53 && b27_15 && b28_15 && b29_9 && b30_17) {
pattern_id = 567;
}
if(b13_33 && b14_29 && b15_18 && b16_42 && b17_44 && b18_26 && b19_24 && b20_38 && b21_36 && b22_39 && b23_7 && b24_10 && b25_50 && b26_2 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 568;
}
if(b17_23 && b18_34 && b19_14 && b20_43 && b21_43 && b22_53 && b23_34 && b24_18 && b25_57 && b26_40 && b27_6 && b28_38 && b29_11 && b30_42) {
pattern_id = 569;
}
if(b15_35 && b16_40 && b17_44 && b18_45 && b19_14 && b20_34 && b21_4 && b22_13 && b23_29 && b24_48 && b25_48 && b26_64 && b27_13 && b28_23 && b29_9 && b30_43) {
pattern_id = 570;
}
if(b22_39 && b23_30 && b24_31 && b25_16 && b26_12 && b27_38 && b28_12 && b29_12 && b30_25) {
pattern_id = 571;
}
if(b19_36 && b20_21 && b21_41 && b22_8 && b23_7 && b24_38 && b25_47 && b26_11 && b27_26 && b28_30 && b29_50 && b30_25) {
pattern_id = 572;
}
if(b17_23 && b18_34 && b19_15 && b20_40 && b21_2 && b22_13 && b23_18 && b24_31 && b25_39 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 573;
}
if(b22_39 && b23_30 && b24_31 && b25_16 && b26_12 && b27_8 && b28_30 && b29_50 && b30_25) {
pattern_id = 574;
}
if(b18_33 && b19_44 && b20_38 && b21_9 && b22_14 && b23_28 && b24_18 && b25_5 && b26_15 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 575;
}
if(b24_21 && b25_2 && b26_11 && b27_30 && b28_50 && b29_9 && b30_8) {
pattern_id = 576;
}
if(b22_39 && b23_30 && b24_17 && b25_5 && b26_1 && b27_52 && b28_7 && b29_8 && b30_45) {
pattern_id = 577;
}
if(b21_15 && b22_33 && b23_15 && b24_41 && b25_36 && b26_34 && b27_19 && b28_38 && b29_9 && b30_28) {
pattern_id = 578;
}
if(b23_45 && b24_28 && b25_31 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 579;
}
if(b22_39 && b23_30 && b24_15 && b25_8 && b26_38 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 580;
}
if(b18_33 && b19_44 && b20_26 && b21_28 && b22_4 && b23_59 && b24_9 && b25_47 && b26_20 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 581;
}
if(b22_39 && b23_30 && b24_15 && b25_8 && b26_38 && b27_38 && b28_12 && b29_12 && b30_25) {
pattern_id = 582;
}
if(b21_15 && b22_33 && b23_5 && b24_9 && b25_6 && b26_38 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 583;
}
if(b7_15 && b8_36 && b9_15 && b10_36 && b11_37 && b12_13 && b13_33 && b14_27 && b15_6 && b16_21 && b17_26 && b18_47 && b19_35 && b20_34 && b21_19 && b22_9 && b23_29 && b24_46 && b25_5 && b26_38 && b27_19 && b28_26 && b29_25 && b30_43) {
pattern_id = 584;
}
if(b20_33 && b21_44 && b22_23 && b23_62 && b24_1 && b25_5 && b26_24 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 585;
}
if(b20_33 && b21_44 && b22_23 && b23_62 && b24_1 && b25_5 && b26_24 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 586;
}
if(b19_36 && b20_21 && b21_19 && b22_46 && b23_3 && b24_9 && b25_5 && b26_37 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 587;
}
if(b19_36 && b20_21 && b21_19 && b22_56 && b23_9 && b24_9 && b25_5 && b26_37 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 588;
}
if(b19_36 && b20_21 && b21_19 && b22_28 && b23_5 && b24_41 && b25_39 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 589;
}
if(b18_33 && b19_44 && b20_13 && b21_28 && b22_14 && b23_13 && b24_13 && b25_17 && b26_38 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 590;
}
if(b18_33 && b19_44 && b20_13 && b21_7 && b22_10 && b23_16 && b24_13 && b25_17 && b26_38 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 591;
}
if(b19_36 && b20_21 && b21_28 && b22_15 && b23_7 && b24_2 && b25_17 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 592;
}
if(b15_35 && b16_40 && b17_26 && b18_32 && b19_41 && b20_26 && b21_42 && b22_12 && b23_5 && b24_19 && b25_5 && b26_25 && b27_19 && b28_40 && b29_50 && b30_14) {
pattern_id = 593;
}
if(b9_22 && b10_44 && b11_39 && b12_13 && b13_48 && b14_14 && b15_29 && b16_3 && b17_8 && b18_17 && b19_12 && b20_30 && b21_8 && b22_4 && b23_7 && b24_2 && b25_10 && b26_25 && b27_19 && b28_40 && b29_50 && b30_14) {
pattern_id = 594;
}
if(b24_21 && b25_2 && b26_19 && b27_28 && b28_30 && b29_50 && b30_25) {
pattern_id = 595;
}
if(b23_45 && b24_28 && b25_10 && b26_6 && b27_1 && b28_11 && b29_25 && b30_33) {
pattern_id = 596;
}
if(b17_23 && b18_34 && b19_30 && b20_19 && b21_17 && b22_2 && b23_23 && b24_15 && b25_39 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 597;
}
if(b22_39 && b23_51 && b24_13 && b25_10 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 598;
}
if(b21_15 && b22_45 && b23_9 && b24_5 && b25_5 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 599;
}
if(b21_15 && b22_45 && b23_11 && b24_15 && b25_31 && b26_15 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 600;
}
if(b20_33 && b21_20 && b22_28 && b23_28 && b24_46 && b25_47 && b26_39 && b27_28 && b28_1 && b29_18 && b30_43) {
pattern_id = 601;
}
if(b20_33 && b21_20 && b22_47 && b23_23 && b24_46 && b25_47 && b26_39 && b27_28 && b28_1 && b29_18 && b30_43) {
pattern_id = 602;
}
if(b18_33 && b19_33 && b20_43 && b21_36 && b22_14 && b23_34 && b24_13 && b25_10 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 603;
}
if(b16_6 && b17_50 && b18_4 && b19_3 && b20_38 && b21_19 && b22_18 && b23_29 && b24_45 && b25_36 && b26_60 && b27_50 && b28_19 && b29_8 && b30_43) {
pattern_id = 604;
}
if(b15_35 && b16_42 && b17_17 && b18_28 && b19_15 && b20_13 && b21_15 && b22_45 && b23_7 && b24_15 && b25_18 && b26_6 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 605;
}
if(b18_33 && b19_33 && b20_43 && b21_5 && b22_18 && b23_9 && b24_19 && b25_36 && b26_60 && b27_38 && b28_12 && b29_14 && b30_43) {
pattern_id = 606;
}
if(b15_35 && b16_42 && b17_17 && b18_17 && b19_26 && b20_13 && b21_8 && b22_12 && b23_55 && b24_31 && b25_39 && b26_51 && b27_13 && b28_38 && b29_9 && b30_43) {
pattern_id = 607;
}
if(b20_33 && b21_20 && b22_14 && b23_6 && b24_21 && b25_48 && b26_34 && b27_19 && b28_38 && b29_18 && b30_43) {
pattern_id = 608;
}
if(b21_15 && b22_45 && b23_7 && b24_5 && b25_46 && b26_60 && b27_11 && b28_8 && b29_8 && b30_43) {
pattern_id = 609;
}
if(b21_15 && b22_45 && b23_7 && b24_5 && b25_9 && b26_3 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 610;
}
if(b10_19 && b11_47 && b12_8 && b13_36 && b14_37 && b15_25 && b16_35 && b17_19 && b18_17 && b19_30 && b20_9 && b21_57 && b22_12 && b23_50 && b24_47 && b25_48 && b26_21 && b27_19 && b28_33 && b29_9 && b30_43) {
pattern_id = 611;
}
if(b20_33 && b21_20 && b22_14 && b23_6 && b24_30 && b25_31 && b26_52 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 612;
}
if(b13_33 && b14_41 && b15_48 && b16_26 && b17_8 && b18_35 && b19_31 && b20_20 && b21_2 && b22_4 && b23_29 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_20 && b30_43) {
pattern_id = 613;
}
if(b23_45 && b24_11 && b25_16 && b26_11 && b27_38 && b28_11 && b29_1 && b30_5) {
pattern_id = 614;
}
if(b20_33 && b21_20 && b22_8 && b23_5 && b24_39 && b25_47 && b26_39 && b27_1 && b28_12 && b29_1 && b30_11) {
pattern_id = 615;
}
if(b20_33 && b21_20 && b22_8 && b23_5 && b24_39 && b25_47 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 616;
}
if(b20_33 && b21_20 && b22_8 && b23_5 && b24_39 && b25_47 && b26_39 && b27_1 && b28_26 && b29_20 && b30_47) {
pattern_id = 617;
}
if(b19_36 && b20_8 && b21_9 && b22_23 && b23_11 && b24_13 && b25_16 && b26_36 && b27_1 && b28_28 && b29_1 && b30_11) {
pattern_id = 618;
}
if(b20_33 && b21_20 && b22_8 && b23_5 && b24_39 && b25_47 && b26_39 && b27_8 && b28_30 && b29_50 && b30_25) {
pattern_id = 619;
}
if(b19_36 && b20_8 && b21_42 && b22_25 && b23_59 && b24_32 && b25_26 && b26_3 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 620;
}
if(b20_33 && b21_20 && b22_23 && b23_1 && b24_31 && b25_16 && b26_7 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 621;
}
if(b14_26 && b15_48 && b16_30 && b17_19 && b18_11 && b19_35 && b20_38 && b21_17 && b22_13 && b23_45 && b24_19 && b25_51 && b26_39 && b27_5 && b28_52 && b29_15 && b30_45) {
pattern_id = 622;
}
if(b23_45 && b24_11 && b25_10 && b26_25 && b27_70 && b28_11 && b29_19 && b30_33) {
pattern_id = 623;
}
if(b17_23 && b18_13 && b19_30 && b20_43 && b21_7 && b22_2 && b23_11 && b24_15 && b25_31 && b26_15 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 624;
}
if(b18_33 && b19_33 && b20_5 && b21_2 && b22_13 && b23_6 && b24_39 && b25_31 && b26_2 && b27_17 && b28_30 && b29_50 && b30_25) {
pattern_id = 625;
}
if(b15_35 && b16_42 && b17_52 && b18_4 && b19_16 && b20_20 && b21_7 && b22_14 && b23_34 && b24_20 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 626;
}
if(b23_45 && b24_45 && b25_47 && b26_21 && b27_12 && b28_23 && b29_9 && b30_8) {
pattern_id = 627;
}
if(b20_33 && b21_8 && b22_14 && b23_9 && b24_30 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 628;
}
if(b21_15 && b22_9 && b23_7 && b24_17 && b25_16 && b26_2 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 629;
}
if(b19_36 && b20_50 && b21_2 && b22_8 && b23_29 && b24_15 && b25_6 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 630;
}
if(b24_21 && b25_50 && b26_11 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 631;
}
if(b22_39 && b23_50 && b24_15 && b25_51 && b26_12 && b27_29 && b28_53 && b29_11 && b30_42) {
pattern_id = 632;
}
if(b22_39 && b23_50 && b24_15 && b25_51 && b26_12 && b27_29 && b28_16 && b29_16 && b30_46) {
pattern_id = 633;
}
if(b23_45 && b24_45 && b25_1 && b26_1 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 634;
}
if(b24_21 && b25_50 && b26_19 && b27_56 && b28_17 && b29_9 && b30_42) {
pattern_id = 635;
}
if(b19_36 && b20_50 && b21_5 && b22_15 && b23_13 && b24_13 && b25_11 && b26_12 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 636;
}
if(b20_33 && b21_8 && b22_2 && b23_13 && b24_17 && b25_1 && b26_52 && b27_15 && b28_26 && b29_50 && b30_6) {
pattern_id = 637;
}
if(b14_26 && b15_2 && b16_35 && b17_21 && b18_45 && b19_16 && b20_30 && b21_28 && b22_15 && b23_29 && b24_5 && b25_48 && b26_25 && b27_1 && b28_32 && b29_28 && b30_38) {
pattern_id = 638;
}
if(b22_39 && b23_50 && b24_5 && b25_1 && b26_12 && b27_19 && b28_17 && b29_14 && b30_32) {
pattern_id = 639;
}
if(b19_36 && b20_50 && b21_5 && b22_13 && b23_7 && b24_13 && b25_8 && b26_52 && b27_6 && b28_59 && b29_59 && b30_47) {
pattern_id = 640;
}
if(b12_16 && b13_1 && b14_28 && b15_25 && b16_26 && b17_19 && b18_12 && b19_38 && b20_50 && b21_48 && b22_14 && b23_62 && b24_10 && b25_16 && b26_53 && b27_12 && b28_8 && b29_41 && b30_65) {
pattern_id = 641;
}
if(b18_33 && b19_35 && b20_20 && b21_5 && b22_12 && b23_5 && b24_30 && b25_26 && b26_52 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 642;
}
if(b20_33 && b21_41 && b22_24 && b23_23 && b24_17 && b25_16 && b26_6 && b27_38 && b28_30 && b29_50 && b30_25) {
pattern_id = 643;
}
if(b26_49 && b27_13 && b28_52 && b29_18 && b30_6) {
pattern_id = 644;
}
if(b19_36 && b20_38 && b21_17 && b22_8 && b23_5 && b24_41 && b25_17 && b26_36 && b27_61 && b28_44 && b29_14 && b30_26) {
pattern_id = 645;
}
if(b16_6 && b17_44 && b18_15 && b19_38 && b20_26 && b21_36 && b22_2 && b23_9 && b24_10 && b25_10 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 646;
}
if(b3_10 && b4_8 && b5_19 && b6_36 && b7_25 && b8_21 && b9_28 && b10_37 && b11_39 && b12_42 && b13_39 && b14_22 && b15_30 && b16_47 && b17_19 && b18_47 && b19_5 && b20_38 && b21_31 && b22_16 && b23_32 && b24_41 && b25_10 && b26_11 && b27_26 && b28_26 && b29_11 && b30_17) {
pattern_id = 647;
}
if(b22_39 && b23_23 && b24_31 && b25_1 && b26_7 && b27_12 && b28_33 && b29_12 && b30_10) {
pattern_id = 648;
}
if(b12_16 && b13_14 && b14_22 && b15_25 && b16_21 && b17_34 && b18_32 && b19_13 && b20_17 && b21_43 && b22_39 && b23_9 && b24_10 && b25_50 && b26_37 && b27_1 && b28_1 && b29_11 && b30_8) {
pattern_id = 649;
}
if(b16_6 && b17_44 && b18_19 && b19_16 && b20_7 && b21_43 && b22_4 && b23_29 && b24_1 && b25_17 && b26_49 && b27_19 && b28_8 && b29_52 && b30_42) {
pattern_id = 650;
}
if(b11_20 && b12_15 && b13_14 && b14_27 && b15_12 && b16_23 && b17_21 && b18_11 && b19_39 && b20_28 && b21_15 && b22_1 && b23_7 && b24_48 && b25_36 && b26_3 && b27_1 && b28_1 && b29_11 && b30_8) {
pattern_id = 651;
}
if(b16_6 && b17_44 && b18_19 && b19_16 && b20_7 && b21_43 && b22_4 && b23_29 && b24_1 && b25_17 && b26_49 && b27_19 && b28_44 && b29_15 && b30_6) {
pattern_id = 652;
}
if(b13_33 && b14_22 && b15_21 && b16_20 && b17_12 && b18_12 && b19_3 && b20_20 && b21_2 && b22_28 && b23_6 && b24_21 && b25_47 && b26_34 && b27_38 && b28_26 && b29_20 && b30_28) {
pattern_id = 653;
}
if(b0_5 && b1_12 && b2_15 && b3_4 && b4_19 && b5_18 && b6_14 && b7_27 && b8_3 && b9_25 && b10_38 && b11_20 && b12_24 && b13_24 && b14_13 && b15_21 && b16_41 && b17_23 && b18_40 && b19_15 && b20_20 && b21_2 && b22_11 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 654;
}
if(b19_36 && b20_38 && b21_41 && b22_13 && b23_28 && b24_13 && b25_51 && b26_6 && b27_26 && b28_8 && b29_1 && b30_28) {
pattern_id = 655;
}
if(b17_23 && b18_19 && b19_59 && b20_26 && b21_36 && b22_24 && b23_5 && b24_13 && b25_8 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 656;
}
if(b16_6 && b17_44 && b18_32 && b19_12 && b20_8 && b21_2 && b22_19 && b23_5 && b24_17 && b25_18 && b26_2 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 657;
}
if(b18_33 && b19_15 && b20_42 && b21_4 && b22_45 && b23_7 && b24_38 && b25_47 && b26_6 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 658;
}
if(b17_23 && b18_19 && b19_8 && b20_7 && b21_20 && b22_14 && b23_13 && b24_13 && b25_36 && b26_25 && b27_27 && b28_18 && b29_9 && b30_33) {
pattern_id = 659;
}
if(b23_45 && b24_31 && b25_51 && b26_7 && b27_56 && b28_8 && b29_1 && b30_28) {
pattern_id = 660;
}
if(b14_26 && b15_21 && b16_11 && b17_19 && b18_13 && b19_14 && b20_9 && b21_15 && b22_4 && b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 661;
}
if(b15_35 && b16_12 && b17_21 && b18_21 && b19_33 && b20_43 && b21_7 && b22_39 && b23_16 && b24_31 && b25_5 && b26_20 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 662;
}
if(b15_35 && b16_12 && b17_21 && b18_13 && b19_36 && b20_9 && b21_17 && b22_10 && b23_23 && b24_47 && b25_10 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 663;
}
if(b24_21 && b25_18 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 664;
}
if(b23_45 && b24_31 && b25_39 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 665;
}
if(b24_21 && b25_18 && b26_21 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 666;
}
if(b14_26 && b15_21 && b16_41 && b17_15 && b18_33 && b19_16 && b20_43 && b21_36 && b22_47 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_26 && b29_20 && b30_47) {
pattern_id = 667;
}
if(b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 668;
}
if(b5_3 && b6_20 && b7_40 && b8_35 && b9_29 && b10_33 && b11_44 && b12_24 && b13_22 && b14_2 && b15_52 && b16_47 && b17_44 && b18_41 && b19_44 && b20_26 && b21_21 && b22_28 && b23_5 && b24_2 && b25_2 && b26_11 && b27_56 && b28_22 && b29_9 && b30_17) {
pattern_id = 669;
}
if(b3_10 && b4_8 && b5_35 && b6_16 && b7_25 && b8_29 && b9_49 && b10_25 && b11_8 && b12_29 && b13_43 && b14_59 && b15_21 && b16_41 && b17_37 && b18_28 && b19_17 && b20_30 && b21_28 && b22_14 && b23_9 && b24_5 && b25_5 && b26_6 && b27_15 && b28_7 && b29_14 && b30_57) {
pattern_id = 670;
}
if(b9_22 && b10_21 && b11_25 && b12_35 && b13_15 && b14_39 && b15_55 && b16_21 && b17_3 && b18_11 && b19_28 && b20_51 && b21_41 && b22_16 && b23_30 && b24_15 && b25_33 && b26_17 && b27_27 && b28_27 && b29_1 && b30_5) {
pattern_id = 671;
}
if(b3_10 && b4_8 && b5_35 && b6_16 && b7_25 && b8_29 && b9_49 && b10_25 && b11_8 && b12_29 && b13_43 && b14_59 && b15_21 && b16_41 && b17_37 && b18_28 && b19_17 && b20_9 && b21_5 && b22_1 && b23_34 && b24_5 && b25_6 && b26_6 && b27_17 && b28_8 && b29_61 && b30_57) {
pattern_id = 672;
}
if(b6_22 && b7_2 && b8_26 && b9_20 && b10_15 && b11_53 && b12_42 && b13_35 && b14_27 && b15_19 && b16_56 && b17_46 && b18_19 && b19_20 && b20_21 && b21_31 && b22_26 && b23_6 && b24_19 && b25_5 && b26_17 && b27_15 && b28_7 && b29_8 && b30_57) {
pattern_id = 673;
}
if(b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 674;
}
if(b20_33 && b21_41 && b22_16 && b23_26 && b24_18 && b25_49 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 675;
}
if(b0_5 && b1_12 && b2_30 && b3_9 && b4_24 && b5_42 && b6_30 && b7_20 && b8_44 && b9_39 && b10_54 && b11_24 && b12_13 && b13_35 && b14_22 && b15_43 && b16_14 && b17_35 && b18_19 && b19_24 && b20_13 && b21_13 && b22_10 && b23_29 && b24_17 && b25_5 && b26_50 && b27_66 && b28_51 && b29_66 && b30_49) {
pattern_id = 676;
}
if(b21_15 && b22_15 && b23_31 && b24_28 && b25_31 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 677;
}
if(b13_33 && b14_22 && b15_33 && b16_40 && b17_28 && b18_25 && b19_13 && b20_50 && b21_19 && b22_53 && b23_13 && b24_18 && b25_1 && b26_36 && b27_19 && b28_50 && b29_9 && b30_43) {
pattern_id = 678;
}
if(b22_39 && b23_23 && b24_2 && b25_2 && b26_2 && b27_1 && b28_18 && b29_27 && b30_25) {
pattern_id = 679;
}
if(b22_39 && b23_23 && b24_2 && b25_2 && b26_2 && b27_33 && b28_16 && b29_16 && b30_46) {
pattern_id = 680;
}
if(b18_33 && b19_15 && b20_19 && b21_44 && b22_23 && b23_28 && b24_9 && b25_15 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 681;
}
if(b17_23 && b18_19 && b19_20 && b20_21 && b21_31 && b22_13 && b23_34 && b24_10 && b25_50 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 682;
}
if(b22_39 && b23_23 && b24_2 && b25_18 && b26_19 && b27_1 && b28_8 && b29_27 && b30_27) {
pattern_id = 683;
}
if(b21_15 && b22_15 && b23_31 && b24_47 && b25_6 && b26_19 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 684;
}
if(b17_23 && b18_19 && b19_20 && b20_13 && b21_13 && b22_2 && b23_18 && b24_39 && b25_47 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 685;
}
if(b20_33 && b21_41 && b22_16 && b23_29 && b24_41 && b25_10 && b26_3 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 686;
}
if(b16_6 && b17_44 && b18_41 && b19_13 && b20_5 && b21_5 && b22_34 && b23_18 && b24_39 && b25_47 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 687;
}
if(b16_6 && b17_44 && b18_41 && b19_16 && b20_43 && b21_28 && b22_2 && b23_18 && b24_31 && b25_39 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 688;
}
if(b25_46 && b26_11 && b27_30 && b28_40 && b29_11 && b30_33) {
pattern_id = 689;
}
if(b23_45 && b24_31 && b25_39 && b26_36 && b27_18 && b28_12 && b29_25 && b30_25) {
pattern_id = 690;
}
if(b14_26 && b15_21 && b16_41 && b17_3 && b18_17 && b19_12 && b20_40 && b21_9 && b22_18 && b23_9 && b24_19 && b25_50 && b26_1 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 691;
}
if(b16_6 && b17_44 && b18_41 && b19_16 && b20_20 && b21_4 && b22_8 && b23_15 && b24_18 && b25_8 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 692;
}
if(b4_14 && b5_33 && b6_44 && b7_22 && b8_23 && b9_12 && b10_31 && b11_52 && b12_8 && b13_4 && b14_37 && b15_48 && b16_21 && b17_8 && b18_4 && b19_45 && b20_30 && b21_9 && b22_15 && b23_7 && b24_2 && b25_10 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 693;
}
if(b13_33 && b14_22 && b15_33 && b16_20 && b17_8 && b18_21 && b19_13 && b20_38 && b21_57 && b22_12 && b23_50 && b24_47 && b25_48 && b26_11 && b27_12 && b28_51 && b29_24 && b30_43) {
pattern_id = 694;
}
if(b21_15 && b22_15 && b23_31 && b24_5 && b25_8 && b26_7 && b27_30 && b28_8 && b29_11 && b30_28) {
pattern_id = 695;
}
if(b25_46 && b26_11 && b27_10 && b28_44 && b29_59 && b30_42) {
pattern_id = 696;
}
if(b17_23 && b18_19 && b19_13 && b20_33 && b21_48 && b22_28 && b23_15 && b24_31 && b25_5 && b26_21 && b27_18 && b28_45 && b29_1 && b30_42) {
pattern_id = 697;
}
if(b20_33 && b21_41 && b22_12 && b23_8 && b24_45 && b25_47 && b26_19 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 698;
}
if(b22_39 && b23_23 && b24_19 && b25_57 && b26_39 && b27_28 && b28_23 && b29_39 && b30_22) {
pattern_id = 699;
}
if(b11_20 && b12_15 && b13_22 && b14_27 && b15_12 && b16_11 && b17_12 && b18_45 && b19_14 && b20_9 && b21_15 && b22_36 && b23_14 && b24_18 && b25_8 && b26_41 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 700;
}
if(b21_15 && b22_55 && b23_15 && b24_2 && b25_36 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 701;
}
if(b21_15 && b22_55 && b23_5 && b24_9 && b25_11 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 702;
}
if(b21_15 && b22_55 && b23_5 && b24_20 && b25_2 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 703;
}
if(b11_20 && b12_50 && b13_22 && b14_26 && b15_37 && b16_12 && b17_3 && b18_21 && b19_24 && b20_40 && b21_2 && b22_18 && b23_56 && b24_19 && b25_48 && b26_19 && b27_61 && b28_11 && b29_9 && b30_43) {
pattern_id = 704;
}
if(b20_33 && b21_52 && b22_13 && b23_45 && b24_33 && b25_57 && b26_53 && b27_27 && b28_17 && b29_61 && b30_58) {
pattern_id = 705;
}
if(b22_39 && b23_56 && b24_19 && b25_36 && b26_49 && b27_8 && b28_44 && b29_50 && b30_28) {
pattern_id = 706;
}
if(b23_45 && b24_37 && b25_1 && b26_7 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 707;
}
if(b27_29 && b28_22 && b29_1 && b30_32) {
pattern_id = 708;
}
if(b14_26 && b15_43 && b16_6 && b17_19 && b18_34 && b19_45 && b20_40 && b21_40 && b22_1 && b23_26 && b24_30 && b25_31 && b26_21 && b27_1 && b28_18 && b29_50 && b30_16) {
pattern_id = 709;
}
if(b17_23 && b18_45 && b19_12 && b20_9 && b21_5 && b22_8 && b23_23 && b24_2 && b25_5 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 710;
}
if(b23_45 && b24_17 && b25_17 && b26_25 && b27_19 && b28_40 && b29_50 && b30_14) {
pattern_id = 711;
}
if(b17_23 && b18_45 && b19_14 && b20_21 && b21_5 && b22_43 && b23_13 && b24_13 && b25_18 && b26_21 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 712;
}
if(b24_21 && b25_16 && b26_12 && b27_11 && b28_8 && b29_25 && b30_28) {
pattern_id = 713;
}
if(b5_3 && b6_25 && b7_2 && b8_22 && b9_28 && b10_25 && b11_39 && b12_19 && b13_33 && b14_14 && b15_37 && b16_12 && b17_8 && b18_28 && b19_31 && b20_33 && b21_2 && b22_47 && b23_23 && b24_5 && b25_31 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 714;
}
if(b15_35 && b16_28 && b17_44 && b18_42 && b19_31 && b20_7 && b21_28 && b22_63 && b23_45 && b24_17 && b25_18 && b26_24 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 715;
}
if(b14_26 && b15_43 && b16_12 && b17_13 && b18_50 && b19_14 && b20_19 && b21_43 && b22_23 && b23_34 && b24_19 && b25_5 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 716;
}
if(b13_33 && b14_19 && b15_21 && b16_20 && b17_8 && b18_21 && b19_16 && b20_33 && b21_31 && b22_41 && b23_6 && b24_21 && b25_1 && b26_11 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 717;
}
if(b18_33 && b19_32 && b20_38 && b21_7 && b22_2 && b23_7 && b24_2 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 718;
}
if(b20_33 && b21_9 && b22_15 && b23_28 && b24_5 && b25_8 && b26_12 && b27_24 && b28_30 && b29_50 && b30_25) {
pattern_id = 719;
}
if(b20_33 && b21_9 && b22_23 && b23_9 && b24_30 && b25_5 && b26_17 && b27_1 && b28_52 && b29_50 && b30_25) {
pattern_id = 720;
}
if(b18_33 && b19_32 && b20_26 && b21_4 && b22_47 && b23_29 && b24_13 && b25_11 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 721;
}
if(b16_6 && b17_35 && b18_28 && b19_38 && b20_61 && b21_49 && b22_28 && b23_34 && b24_42 && b25_36 && b26_19 && b27_1 && b28_17 && b29_18 && b30_8) {
pattern_id = 722;
}
if(b23_45 && b24_17 && b25_31 && b26_37 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 723;
}
if(b22_39 && b23_15 && b24_15 && b25_11 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 724;
}
if(b16_6 && b17_35 && b18_28 && b19_33 && b20_38 && b21_17 && b22_42 && b23_5 && b24_9 && b25_20 && b26_36 && b27_1 && b28_26 && b29_20 && b30_16) {
pattern_id = 725;
}
if(b20_33 && b21_9 && b22_23 && b23_51 && b24_31 && b25_39 && b26_25 && b27_19 && b28_40 && b29_50 && b30_14) {
pattern_id = 726;
}
if(b21_15 && b22_8 && b23_5 && b24_11 && b25_18 && b26_21 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 727;
}
if(b20_33 && b21_9 && b22_23 && b23_51 && b24_31 && b25_39 && b26_25 && b27_6 && b28_38 && b29_27 && b30_33) {
pattern_id = 728;
}
if(b21_15 && b22_8 && b23_5 && b24_11 && b25_18 && b26_21 && b27_1 && b28_27 && b29_12 && b30_14) {
pattern_id = 729;
}
if(b16_6 && b17_35 && b18_28 && b19_33 && b20_26 && b21_36 && b22_18 && b23_9 && b24_19 && b25_36 && b26_1 && b27_60 && b28_42 && b29_44 && b30_43) {
pattern_id = 730;
}
if(b22_39 && b23_15 && b24_42 && b25_8 && b26_11 && b27_8 && b28_30 && b29_50 && b30_25) {
pattern_id = 731;
}
if(b15_35 && b16_11 && b17_23 && b18_34 && b19_45 && b20_40 && b21_40 && b22_1 && b23_26 && b24_30 && b25_31 && b26_21 && b27_1 && b28_18 && b29_50 && b30_16) {
pattern_id = 732;
}
if(b1_7 && b2_21 && b3_31 && b4_40 && b5_10 && b6_19 && b7_36 && b8_52 && b9_41 && b10_44 && b11_30 && b12_27 && b13_32 && b14_13 && b15_15 && b16_51 && b17_52 && b18_69 && b19_20 && b20_21 && b21_24 && b22_56 && b23_13 && b24_44 && b25_21 && b26_31 && b27_52 && b28_17 && b29_8 && b30_28) {
pattern_id = 733;
}
if(b23_45 && b24_38 && b25_47 && b26_24 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 734;
}
if(b22_39 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_55 && b29_15 && b30_14) {
pattern_id = 735;
}
if(b18_33 && b19_8 && b20_7 && b21_41 && b22_8 && b23_30 && b24_31 && b25_16 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 736;
}
if(b21_15 && b22_4 && b23_9 && b24_31 && b25_16 && b26_11 && b27_18 && b28_30 && b29_50 && b30_25) {
pattern_id = 737;
}
if(b19_36 && b20_42 && b21_4 && b22_15 && b23_15 && b24_17 && b25_18 && b26_36 && b27_18 && b28_30 && b29_50 && b30_25) {
pattern_id = 738;
}
if(b22_39 && b23_13 && b24_13 && b25_18 && b26_39 && b27_38 && b28_12 && b29_20 && b30_28) {
pattern_id = 739;
}
if(b18_33 && b19_8 && b20_7 && b21_41 && b22_8 && b23_31 && b24_18 && b25_14 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 740;
}
if(b18_33 && b19_8 && b20_7 && b21_41 && b22_8 && b23_16 && b24_31 && b25_5 && b26_20 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 741;
}
if(b19_36 && b20_42 && b21_4 && b22_15 && b23_15 && b24_1 && b25_21 && b26_48 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 742;
}
if(b6_22 && b7_29 && b8_15 && b9_11 && b10_31 && b11_18 && b12_22 && b13_16 && b14_41 && b15_44 && b16_40 && b17_44 && b18_45 && b19_14 && b20_9 && b21_15 && b22_23 && b23_34 && b24_30 && b25_5 && b26_17 && b27_1 && b28_23 && b29_15 && b30_29) {
pattern_id = 743;
}
if(b24_21 && b25_51 && b26_7 && b27_30 && b28_30 && b29_1 && b30_32) {
pattern_id = 744;
}
if(b19_36 && b20_42 && b21_2 && b22_13 && b23_28 && b24_13 && b25_11 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 745;
}
if(b20_33 && b21_42 && b22_15 && b23_31 && b24_18 && b25_8 && b26_34 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 746;
}
if(b11_20 && b12_13 && b13_14 && b14_10 && b15_21 && b16_20 && b17_8 && b18_21 && b19_5 && b20_9 && b21_15 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 747;
}
if(b19_36 && b20_42 && b21_41 && b22_13 && b23_8 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_26 && b30_43) {
pattern_id = 748;
}
if(b20_33 && b21_42 && b22_60 && b23_23 && b24_17 && b25_31 && b26_37 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 749;
}
if(b20_33 && b21_42 && b22_60 && b23_29 && b24_17 && b25_31 && b26_37 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 750;
}
if(b20_33 && b21_42 && b22_8 && b23_5 && b24_11 && b25_24 && b26_6 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 751;
}
if(b24_21 && b25_51 && b26_38 && b27_1 && b28_28 && b29_50 && b30_29) {
pattern_id = 752;
}
if(b19_36 && b20_42 && b21_42 && b22_13 && b23_6 && b24_30 && b25_31 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 753;
}
if(b12_16 && b13_32 && b14_21 && b15_37 && b16_6 && b17_35 && b18_28 && b19_3 && b20_61 && b21_44 && b22_1 && b23_28 && b24_45 && b25_31 && b26_21 && b27_1 && b28_28 && b29_50 && b30_29) {
pattern_id = 754;
}
if(b26_49 && b27_38 && b28_7 && b29_44 && b30_57) {
pattern_id = 755;
}
if(b12_16 && b13_32 && b14_21 && b15_37 && b16_38 && b17_19 && b18_12 && b19_5 && b20_38 && b21_17 && b22_8 && b23_7 && b24_19 && b25_32 && b26_7 && b27_57 && b28_38 && b29_17 && b30_58) {
pattern_id = 756;
}
if(b15_35 && b16_11 && b17_28 && b18_15 && b19_45 && b20_8 && b21_60 && b22_15 && b23_29 && b24_27 && b25_1 && b26_19 && b27_19 && b28_38 && b29_39 && b30_22) {
pattern_id = 757;
}
if(b19_36 && b20_42 && b21_31 && b22_47 && b23_14 && b24_17 && b25_5 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 758;
}
if(b18_33 && b19_8 && b20_26 && b21_43 && b22_41 && b23_15 && b24_18 && b25_1 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 759;
}
if(b18_33 && b19_8 && b20_26 && b21_36 && b22_15 && b23_6 && b24_15 && b25_8 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 760;
}
if(b22_39 && b23_13 && b24_9 && b25_10 && b26_37 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 761;
}
if(b16_6 && b17_21 && b18_30 && b19_12 && b20_28 && b21_17 && b22_39 && b23_28 && b24_13 && b25_51 && b26_6 && b27_26 && b28_8 && b29_1 && b30_28) {
pattern_id = 762;
}
if(b5_3 && b6_21 && b7_22 && b8_15 && b9_20 && b10_10 && b11_20 && b12_38 && b13_35 && b14_13 && b15_19 && b16_28 && b17_17 && b18_30 && b19_36 && b20_7 && b21_43 && b22_28 && b23_6 && b24_18 && b25_1 && b26_19 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 763;
}
if(b20_33 && b21_42 && b22_13 && b23_9 && b24_30 && b25_15 && b26_36 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 764;
}
if(b24_21 && b25_51 && b26_36 && b27_12 && b28_12 && b29_14 && b30_28) {
pattern_id = 765;
}
if(b18_33 && b19_8 && b20_5 && b21_41 && b22_14 && b23_11 && b24_17 && b25_47 && b26_52 && b27_17 && b28_52 && b29_18 && b30_6) {
pattern_id = 766;
}
if(b17_23 && b18_32 && b19_30 && b20_40 && b21_5 && b22_15 && b23_26 && b24_31 && b25_2 && b26_64 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 767;
}
if(b19_36 && b20_42 && b21_49 && b22_8 && b23_5 && b24_11 && b25_24 && b26_6 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 768;
}
if(b21_15 && b22_16 && b23_9 && b24_38 && b25_5 && b26_36 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 769;
}
if(b18_33 && b19_20 && b20_7 && b21_5 && b22_12 && b23_9 && b24_42 && b25_24 && b26_16 && b27_18 && b28_33 && b29_25 && b30_33) {
pattern_id = 770;
}
if(b21_15 && b22_16 && b23_26 && b24_10 && b25_11 && b26_11 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 771;
}
if(b8_25 && b9_19 && b10_15 && b11_8 && b12_38 && b13_38 && b14_27 && b15_44 && b16_12 && b17_3 && b18_35 && b19_13 && b20_23 && b21_31 && b22_24 && b23_23 && b24_2 && b25_11 && b26_50 && b27_61 && b28_7 && b29_39 && b30_57) {
pattern_id = 772;
}
if(b26_49 && b27_30 && b28_8 && b29_16 && b30_28) {
pattern_id = 773;
}
if(b13_33 && b14_10 && b15_6 && b16_44 && b17_23 && b18_21 && b19_34 && b20_28 && b21_40 && b22_2 && b23_34 && b24_18 && b25_5 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 774;
}
if(b7_15 && b8_26 && b9_29 && b10_29 && b11_20 && b12_24 && b13_17 && b14_19 && b15_44 && b16_40 && b17_44 && b18_45 && b19_14 && b20_57 && b21_41 && b22_16 && b23_30 && b24_15 && b25_64 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 775;
}
if(b13_33 && b14_10 && b15_6 && b16_44 && b17_23 && b18_13 && b19_14 && b20_20 && b21_40 && b22_2 && b23_34 && b24_18 && b25_5 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 776;
}
if(b23_45 && b24_2 && b25_5 && b26_20 && b27_12 && b28_8 && b29_1 && b30_18) {
pattern_id = 777;
}
if(b22_39 && b23_31 && b24_18 && b25_14 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 778;
}
if(b18_33 && b19_20 && b20_43 && b21_26 && b22_13 && b23_26 && b24_18 && b25_1 && b26_15 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 779;
}
if(b23_45 && b24_2 && b25_5 && b26_20 && b27_57 && b28_40 && b29_9 && b30_8) {
pattern_id = 780;
}
if(b11_20 && b12_27 && b13_15 && b14_23 && b15_51 && b16_20 && b17_17 && b18_12 && b19_51 && b20_53 && b21_42 && b22_1 && b23_51 && b24_18 && b25_33 && b26_25 && b27_1 && b28_32 && b29_28 && b30_38) {
pattern_id = 781;
}
if(b17_23 && b18_41 && b19_3 && b20_9 && b21_41 && b22_45 && b23_31 && b24_13 && b25_16 && b26_25 && b27_70 && b28_11 && b29_19 && b30_33) {
pattern_id = 782;
}
if(b13_33 && b14_10 && b15_10 && b16_35 && b17_17 && b18_35 && b19_3 && b20_31 && b21_2 && b22_10 && b23_16 && b24_31 && b25_5 && b26_20 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 783;
}
if(b20_33 && b21_36 && b22_23 && b23_6 && b24_31 && b25_2 && b26_41 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 784;
}
if(b8_25 && b9_19 && b10_27 && b11_1 && b12_47 && b13_15 && b14_39 && b15_19 && b16_28 && b17_28 && b18_19 && b19_5 && b20_9 && b21_17 && b22_1 && b23_31 && b24_11 && b25_5 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 785;
}
if(b15_35 && b16_41 && b17_12 && b18_37 && b19_48 && b20_42 && b21_4 && b22_15 && b23_15 && b24_17 && b25_18 && b26_36 && b27_18 && b28_30 && b29_50 && b30_25) {
pattern_id = 786;
}
if(b15_35 && b16_41 && b17_12 && b18_37 && b19_48 && b20_13 && b21_13 && b22_24 && b23_15 && b24_31 && b25_1 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 787;
}
if(b18_33 && b19_20 && b20_13 && b21_8 && b22_25 && b23_6 && b24_18 && b25_1 && b26_19 && b27_55 && b28_52 && b29_19 && b30_16) {
pattern_id = 788;
}
if(b21_15 && b22_16 && b23_29 && b24_45 && b25_36 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 789;
}
if(b17_23 && b18_41 && b19_16 && b20_29 && b21_4 && b22_16 && b23_9 && b24_11 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 790;
}
if(b18_33 && b19_20 && b20_9 && b21_41 && b22_15 && b23_28 && b24_17 && b25_31 && b26_37 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 791;
}
if(b15_35 && b16_41 && b17_3 && b18_17 && b19_14 && b20_40 && b21_2 && b22_4 && b23_7 && b24_5 && b25_8 && b26_41 && b27_1 && b28_12 && b29_44 && b30_42) {
pattern_id = 792;
}
if(b19_36 && b20_19 && b21_5 && b22_13 && b23_53 && b24_2 && b25_15 && b26_13 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 793;
}
if(b14_26 && b15_10 && b16_13 && b17_55 && b18_4 && b19_38 && b20_20 && b21_7 && b22_18 && b23_23 && b24_2 && b25_15 && b26_25 && b27_28 && b28_1 && b29_50 && b30_19) {
pattern_id = 794;
}
if(b17_23 && b18_28 && b19_44 && b20_21 && b21_2 && b22_10 && b23_28 && b24_27 && b25_39 && b26_12 && b27_20 && b28_59 && b29_26 && b30_43) {
pattern_id = 795;
}
if(b0_5 && b1_9 && b2_8 && b3_7 && b4_8 && b5_13 && b6_10 && b7_22 && b8_18 && b9_12 && b10_18 && b11_20 && b12_14 && b13_39 && b14_22 && b15_35 && b16_49 && b17_34 && b18_50 && b19_40 && b20_52 && b21_34 && b22_23 && b23_6 && b24_31 && b25_2 && b26_41 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 796;
}
if(b14_26 && b15_10 && b16_41 && b17_26 && b18_4 && b19_43 && b20_5 && b21_2 && b22_13 && b23_6 && b24_18 && b25_39 && b26_34 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 797;
}
if(b15_35 && b16_19 && b17_12 && b18_12 && b19_3 && b20_30 && b21_42 && b22_45 && b23_34 && b24_32 && b25_1 && b26_19 && b27_19 && b28_38 && b29_39 && b30_22) {
pattern_id = 798;
}
if(b20_33 && b21_31 && b22_12 && b23_6 && b24_31 && b25_39 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 799;
}
if(b14_26 && b15_10 && b16_34 && b17_8 && b18_19 && b19_3 && b20_19 && b21_7 && b22_43 && b23_30 && b24_15 && b25_8 && b26_38 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 800;
}
if(b21_15 && b22_23 && b23_34 && b24_30 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 801;
}
if(b13_33 && b14_21 && b15_27 && b16_23 && b17_17 && b18_12 && b19_16 && b20_33 && b21_17 && b22_9 && b23_7 && b24_10 && b25_20 && b26_36 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 802;
}
if(b13_33 && b14_21 && b15_27 && b16_23 && b17_17 && b18_12 && b19_16 && b20_33 && b21_41 && b22_4 && b23_29 && b24_15 && b25_8 && b26_19 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 803;
}
if(b13_33 && b14_21 && b15_27 && b16_23 && b17_17 && b18_12 && b19_16 && b20_33 && b21_31 && b22_10 && b23_26 && b24_18 && b25_8 && b26_36 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 804;
}
if(b18_33 && b19_3 && b20_31 && b21_2 && b22_10 && b23_30 && b24_17 && b25_31 && b26_20 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 805;
}
if(b22_39 && b23_5 && b24_1 && b25_1 && b26_65 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 806;
}
if(b20_33 && b21_19 && b22_25 && b23_31 && b24_18 && b25_14 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 807;
}
if(b19_36 && b20_13 && b21_57 && b22_1 && b23_28 && b24_45 && b25_49 && b26_60 && b27_28 && b28_17 && b29_44 && b30_43) {
pattern_id = 808;
}
if(b18_33 && b19_13 && b20_7 && b21_17 && b22_60 && b23_9 && b24_11 && b25_5 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 809;
}
if(b22_39 && b23_29 && b24_13 && b25_11 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 810;
}
if(b16_6 && b17_12 && b18_21 && b19_33 && b20_43 && b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 811;
}
if(b8_25 && b9_39 && b10_25 && b11_47 && b12_8 && b13_33 && b14_22 && b15_33 && b16_23 && b17_17 && b18_64 && b19_45 && b20_50 && b21_5 && b22_4 && b23_46 && b24_28 && b25_18 && b26_39 && b27_27 && b28_40 && b29_32 && b30_28) {
pattern_id = 812;
}
if(b19_36 && b20_13 && b21_4 && b22_45 && b23_7 && b24_17 && b25_31 && b26_37 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 813;
}
if(b22_39 && b23_29 && b24_13 && b25_16 && b26_36 && b27_55 && b28_52 && b29_19 && b30_16) {
pattern_id = 814;
}
if(b17_23 && b18_11 && b19_12 && b20_23 && b21_7 && b22_14 && b23_46 && b24_48 && b25_51 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 815;
}
if(b19_36 && b20_13 && b21_4 && b22_10 && b23_6 && b24_2 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 816;
}
if(b19_36 && b20_13 && b21_4 && b22_13 && b23_28 && b24_1 && b25_17 && b26_25 && b27_28 && b28_1 && b29_50 && b30_55) {
pattern_id = 817;
}
if(b14_26 && b15_19 && b16_21 && b17_3 && b18_30 && b19_39 && b20_26 && b21_28 && b22_47 && b23_18 && b24_10 && b25_11 && b26_11 && b27_1 && b28_38 && b29_27 && b30_42) {
pattern_id = 818;
}
if(b9_22 && b10_27 && b11_30 && b12_38 && b13_15 && b14_35 && b15_40 && b16_26 && b17_26 && b18_33 && b19_13 && b20_41 && b21_7 && b22_14 && b23_34 && b24_20 && b25_5 && b26_17 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 819;
}
if(b13_33 && b14_2 && b15_18 && b16_21 && b17_34 && b18_32 && b19_15 && b20_19 && b21_15 && b22_8 && b23_5 && b24_11 && b25_18 && b26_21 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 820;
}
if(b22_39 && b23_29 && b24_18 && b25_8 && b26_39 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 821;
}
if(b21_15 && b22_12 && b23_7 && b24_9 && b25_16 && b26_25 && b27_27 && b28_18 && b29_9 && b30_33) {
pattern_id = 822;
}
if(b25_46 && b26_6 && b27_27 && b28_17 && b29_25 && b30_33) {
pattern_id = 823;
}
if(b18_33 && b19_13 && b20_43 && b21_28 && b22_8 && b23_28 && b24_45 && b25_31 && b26_6 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 824;
}
if(b17_23 && b18_11 && b19_44 && b20_28 && b21_41 && b22_13 && b23_29 && b24_13 && b25_16 && b26_41 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 825;
}
if(b16_6 && b17_12 && b18_34 && b19_34 && b20_38 && b21_7 && b22_12 && b23_9 && b24_17 && b25_13 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 826;
}
if(b20_33 && b21_19 && b22_45 && b23_29 && b24_38 && b25_47 && b26_11 && b27_26 && b28_30 && b29_50 && b30_25) {
pattern_id = 827;
}
if(b27_29 && b28_11 && b29_17 && b30_36) {
pattern_id = 828;
}
if(b17_23 && b18_11 && b19_35 && b20_38 && b21_9 && b22_24 && b23_5 && b24_13 && b25_8 && b26_34 && b27_1 && b28_33 && b29_44 && b30_56) {
pattern_id = 829;
}
if(b11_20 && b12_29 && b13_1 && b14_22 && b15_43 && b16_13 && b17_28 && b18_21 && b19_31 && b20_28 && b21_40 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 830;
}
if(b11_20 && b12_29 && b13_1 && b14_21 && b15_29 && b16_19 && b17_57 && b18_19 && b19_24 && b20_23 && b21_4 && b22_10 && b23_53 && b24_21 && b25_48 && b26_53 && b27_8 && b28_8 && b29_8 && b30_43) {
pattern_id = 831;
}
if(b23_45 && b24_47 && b25_50 && b26_6 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 832;
}
if(b23_45 && b24_47 && b25_50 && b26_6 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 833;
}
if(b19_36 && b20_13 && b21_8 && b22_12 && b23_6 && b24_18 && b25_1 && b26_19 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 834;
}
if(b10_19 && b11_15 && b12_15 && b13_27 && b14_27 && b15_35 && b16_38 && b17_45 && b18_17 && b19_15 && b20_57 && b21_17 && b22_16 && b23_30 && b24_21 && b25_3 && b26_14 && b27_1 && b28_26 && b29_20 && b30_36) {
pattern_id = 835;
}
if(b19_36 && b20_13 && b21_41 && b22_47 && b23_45 && b24_47 && b25_18 && b26_34 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 836;
}
if(b13_33 && b14_2 && b15_21 && b16_41 && b17_50 && b18_25 && b19_12 && b20_9 && b21_8 && b22_49 && b23_55 && b24_13 && b25_15 && b26_19 && b27_13 && b28_7 && b29_20 && b30_43) {
pattern_id = 837;
}
if(b22_39 && b23_29 && b24_31 && b25_39 && b26_37 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 838;
}
if(b18_33 && b19_13 && b20_38 && b21_36 && b22_45 && b23_18 && b24_45 && b25_10 && b26_38 && b27_26 && b28_59 && b29_8 && b30_43) {
pattern_id = 839;
}
if(b19_36 && b20_13 && b21_41 && b22_16 && b23_51 && b24_46 && b25_57 && b26_53 && b27_27 && b28_17 && b29_61 && b30_43) {
pattern_id = 840;
}
if(b4_14 && b5_25 && b6_20 && b7_33 && b8_36 && b9_26 && b10_36 && b11_40 && b12_21 && b13_33 && b14_17 && b15_10 && b16_44 && b17_43 && b18_17 && b19_3 && b20_57 && b21_9 && b22_23 && b23_51 && b24_31 && b25_39 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 841;
}
if(b8_25 && b9_39 && b10_31 && b11_8 && b12_16 && b13_26 && b14_21 && b15_27 && b16_35 && b17_19 && b18_45 && b19_36 && b20_4 && b21_22 && b22_35 && b23_36 && b24_14 && b25_41 && b26_50 && b27_59 && b28_41 && b29_31 && b30_63) {
pattern_id = 842;
}
if(b22_39 && b23_29 && b24_17 && b25_6 && b26_36 && b27_38 && b28_12 && b29_12 && b30_25) {
pattern_id = 843;
}
if(b18_33 && b19_13 && b20_26 && b21_9 && b22_8 && b23_46 && b24_19 && b25_1 && b26_11 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 844;
}
if(b3_10 && b4_19 && b5_22 && b6_25 && b7_26 && b8_13 && b9_17 && b10_19 && b11_13 && b12_41 && b13_17 && b14_19 && b15_44 && b16_46 && b17_8 && b18_35 && b19_25 && b20_18 && b21_30 && b22_43 && b23_16 && b24_49 && b25_24 && b26_14 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 845;
}
if(b14_26 && b15_19 && b16_19 && b17_12 && b18_50 && b19_28 && b20_32 && b21_15 && b22_12 && b23_5 && b24_47 && b25_18 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 846;
}
if(b14_26 && b15_19 && b16_19 && b17_12 && b18_11 && b19_28 && b20_23 && b21_15 && b22_12 && b23_5 && b24_47 && b25_18 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 847;
}
if(b21_15 && b22_12 && b23_5 && b24_47 && b25_6 && b26_6 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 848;
}
if(b26_49 && b27_28 && b28_7 && b29_1 && b30_6) {
pattern_id = 849;
}
if(b20_33 && b21_19 && b22_23 && b23_28 && b24_5 && b25_32 && b26_54 && b27_57 && b28_8 && b29_8 && b30_17) {
pattern_id = 850;
}
if(b12_16 && b13_26 && b14_21 && b15_25 && b16_35 && b17_9 && b18_21 && b19_16 && b20_13 && b21_46 && b22_53 && b23_30 && b24_15 && b25_8 && b26_53 && b27_38 && b28_42 && b29_2 && b30_43) {
pattern_id = 851;
}
if(b21_15 && b22_12 && b23_5 && b24_19 && b25_10 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 852;
}
if(b21_15 && b22_12 && b23_5 && b24_19 && b25_10 && b26_49 && b27_27 && b28_52 && b29_17 && b30_41) {
pattern_id = 853;
}
if(b20_33 && b21_19 && b22_23 && b23_28 && b24_5 && b25_9 && b26_3 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 854;
}
if(b16_6 && b17_12 && b18_28 && b19_16 && b20_20 && b21_24 && b22_34 && b23_18 && b24_18 && b25_49 && b26_12 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 855;
}
if(b19_36 && b20_13 && b21_19 && b22_47 && b23_28 && b24_10 && b25_11 && b26_11 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 856;
}
if(b22_39 && b23_29 && b24_9 && b25_18 && b26_21 && b27_18 && b28_8 && b29_20 && b30_67) {
pattern_id = 857;
}
if(b17_23 && b18_11 && b19_31 && b20_38 && b21_36 && b22_2 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 858;
}
if(b19_36 && b20_13 && b21_28 && b22_15 && b23_16 && b24_38 && b25_1 && b26_37 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 859;
}
if(b19_36 && b20_13 && b21_28 && b22_8 && b23_45 && b24_18 && b25_16 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 860;
}
if(b15_35 && b16_34 && b17_26 && b18_28 && b19_38 && b20_43 && b21_7 && b22_13 && b23_46 && b24_39 && b25_6 && b26_37 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 861;
}
if(b18_33 && b19_13 && b20_23 && b21_31 && b22_28 && b23_7 && b24_19 && b25_1 && b26_11 && b27_18 && b28_30 && b29_50 && b30_25) {
pattern_id = 862;
}
if(b11_20 && b12_29 && b13_4 && b14_21 && b15_37 && b16_51 && b17_15 && b18_17 && b19_16 && b20_33 && b21_44 && b22_15 && b23_15 && b24_18 && b25_56 && b26_2 && b27_15 && b28_19 && b29_9 && b30_8) {
pattern_id = 863;
}
if(b25_46 && b26_6 && b27_15 && b28_7 && b29_24 && b30_28) {
pattern_id = 864;
}
if(b22_39 && b23_29 && b24_19 && b25_17 && b26_2 && b27_24 && b28_52 && b29_19 && b30_16) {
pattern_id = 865;
}
if(b19_36 && b20_13 && b21_7 && b22_41 && b23_31 && b24_13 && b25_51 && b26_11 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 866;
}
if(b10_19 && b11_15 && b12_4 && b13_19 && b14_19 && b15_21 && b16_20 && b17_29 && b18_4 && b19_31 && b20_33 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 867;
}
if(b15_35 && b16_34 && b17_52 && b18_12 && b19_38 && b20_50 && b21_4 && b22_13 && b23_7 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_18 && b30_43) {
pattern_id = 868;
}
if(b18_33 && b19_43 && b20_5 && b21_2 && b22_10 && b23_53 && b24_46 && b25_51 && b26_36 && b27_8 && b28_45 && b29_28 && b30_38) {
pattern_id = 869;
}
if(b16_6 && b17_56 && b18_14 && b19_14 && b20_23 && b21_49 && b22_53 && b23_16 && b24_18 && b25_8 && b26_36 && b27_13 && b28_7 && b29_20 && b30_43) {
pattern_id = 870;
}
if(b15_35 && b16_55 && b17_52 && b18_19 && b19_38 && b20_61 && b21_35 && b22_10 && b23_7 && b24_47 && b25_16 && b26_41 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 871;
}
if(b16_6 && b17_56 && b18_14 && b19_15 && b20_30 && b21_51 && b22_13 && b23_6 && b24_15 && b25_8 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 872;
}
if(b17_23 && b18_49 && b19_30 && b20_38 && b21_51 && b22_13 && b23_6 && b24_15 && b25_8 && b26_12 && b27_1 && b28_52 && b29_51 && b30_29) {
pattern_id = 873;
}
if(b15_35 && b16_30 && b17_5 && b18_64 && b19_13 && b20_23 && b21_15 && b22_10 && b23_35 && b24_48 && b25_5 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 874;
}
if(b10_19 && b11_39 && b12_24 && b13_42 && b14_36 && b15_10 && b16_11 && b17_61 && b18_57 && b19_6 && b20_47 && b21_72 && b22_32 && b23_3 && b24_29 && b25_73 && b26_6 && b27_56 && b28_59 && b29_52 && b30_43) {
pattern_id = 875;
}
if(b27_29 && b28_17 && b29_9 && b30_28) {
pattern_id = 876;
}
if(b21_15 && b22_10 && b23_7 && b24_13 && b25_17 && b26_25 && b27_28 && b28_1 && b29_50 && b30_55) {
pattern_id = 877;
}
if(b17_23 && b18_12 && b19_14 && b20_7 && b21_43 && b22_43 && b23_11 && b24_15 && b25_17 && b26_41 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 878;
}
if(b18_33 && b19_31 && b20_43 && b21_4 && b22_47 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 879;
}
if(b20_33 && b21_28 && b22_14 && b23_9 && b24_30 && b25_51 && b26_12 && b27_1 && b28_8 && b29_27 && b30_25) {
pattern_id = 880;
}
if(b19_36 && b20_23 && b21_2 && b22_1 && b23_26 && b24_38 && b25_1 && b26_37 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 881;
}
if(b20_33 && b21_28 && b22_14 && b23_11 && b24_15 && b25_10 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 882;
}
if(b22_39 && b23_34 && b24_18 && b25_17 && b26_11 && b27_15 && b28_8 && b29_14 && b30_6) {
pattern_id = 883;
}
if(b18_33 && b19_31 && b20_43 && b21_43 && b22_15 && b23_34 && b24_18 && b25_15 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 884;
}
if(b18_33 && b19_31 && b20_43 && b21_20 && b22_15 && b23_28 && b24_5 && b25_5 && b26_17 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 885;
}
if(b18_33 && b19_31 && b20_43 && b21_20 && b22_15 && b23_28 && b24_5 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 886;
}
if(b18_33 && b19_31 && b20_43 && b21_20 && b22_15 && b23_28 && b24_5 && b25_5 && b26_17 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 887;
}
if(b19_36 && b20_23 && b21_2 && b22_12 && b23_5 && b24_9 && b25_10 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 888;
}
if(b15_35 && b16_30 && b17_17 && b18_11 && b19_3 && b20_23 && b21_5 && b22_18 && b23_29 && b24_45 && b25_36 && b26_60 && b27_17 && b28_8 && b29_61 && b30_43) {
pattern_id = 889;
}
if(b21_15 && b22_10 && b23_7 && b24_19 && b25_5 && b26_19 && b27_28 && b28_12 && b29_1 && b30_22) {
pattern_id = 890;
}
if(b17_23 && b18_12 && b19_14 && b20_9 && b21_19 && b22_23 && b23_31 && b24_30 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 891;
}
if(b20_33 && b21_28 && b22_45 && b23_14 && b24_18 && b25_1 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 892;
}
if(b26_49 && b27_15 && b28_22 && b29_1 && b30_32) {
pattern_id = 893;
}
if(b21_15 && b22_10 && b23_5 && b24_39 && b25_31 && b26_19 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 894;
}
if(b20_33 && b21_28 && b22_23 && b23_11 && b24_15 && b25_10 && b26_36 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 895;
}
if(b22_39 && b23_34 && b24_15 && b25_31 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 896;
}
if(b25_46 && b26_17 && b27_28 && b28_59 && b29_26 && b30_43) {
pattern_id = 897;
}
if(b19_36 && b20_23 && b21_19 && b22_28 && b23_27 && b24_2 && b25_16 && b26_2 && b27_56 && b28_30 && b29_50 && b30_25) {
pattern_id = 898;
}
if(b20_33 && b21_28 && b22_12 && b23_8 && b24_32 && b25_1 && b26_38 && b27_50 && b28_30 && b29_50 && b30_25) {
pattern_id = 899;
}
if(b21_15 && b22_10 && b23_29 && b24_38 && b25_56 && b26_54 && b27_57 && b28_8 && b29_8 && b30_17) {
pattern_id = 900;
}
if(b27_29 && b28_17 && b29_1 && b30_32) {
pattern_id = 901;
}
if(b15_35 && b16_30 && b17_3 && b18_30 && b19_36 && b20_21 && b21_2 && b22_14 && b23_26 && b24_21 && b25_1 && b26_19 && b27_15 && b28_8 && b29_18 && b30_45) {
pattern_id = 902;
}
if(b23_45 && b24_9 && b25_14 && b26_52 && b27_56 && b28_26 && b29_30 && b30_12) {
pattern_id = 903;
}
if(b18_33 && b19_31 && b20_17 && b21_26 && b22_42 && b23_28 && b24_45 && b25_5 && b26_39 && b27_26 && b28_30 && b29_50 && b30_25) {
pattern_id = 904;
}
if(b25_46 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 905;
}
if(b25_46 && b26_36 && b27_29 && b28_59 && b29_24 && b30_43) {
pattern_id = 906;
}
if(b8_25 && b9_21 && b10_25 && b11_12 && b12_29 && b13_17 && b14_14 && b15_25 && b16_6 && b17_44 && b18_30 && b19_12 && b20_13 && b21_41 && b22_39 && b23_28 && b24_9 && b25_15 && b26_16 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 907;
}
if(b3_10 && b4_16 && b5_20 && b6_21 && b7_20 && b8_10 && b9_29 && b10_4 && b11_20 && b12_38 && b13_15 && b14_24 && b15_27 && b16_29 && b17_29 && b18_33 && b19_43 && b20_5 && b21_2 && b22_10 && b23_53 && b24_45 && b25_18 && b26_19 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 908;
}
if(b21_15 && b22_13 && b23_8 && b24_9 && b25_18 && b26_6 && b27_18 && b28_40 && b29_34 && b30_4) {
pattern_id = 909;
}
if(b11_20 && b12_38 && b13_27 && b14_35 && b15_21 && b16_34 && b17_8 && b18_30 && b19_36 && b20_27 && b21_47 && b22_51 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 910;
}
if(b10_19 && b11_8 && b12_14 && b13_4 && b14_22 && b15_19 && b16_35 && b17_3 && b18_33 && b19_7 && b20_13 && b21_4 && b22_47 && b23_13 && b24_10 && b25_11 && b26_11 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 911;
}
if(b11_20 && b12_38 && b13_27 && b14_35 && b15_21 && b16_34 && b17_8 && b18_30 && b19_36 && b20_30 && b21_31 && b22_16 && b23_16 && b24_18 && b25_8 && b26_19 && b27_1 && b28_55 && b29_18 && b30_22) {
pattern_id = 912;
}
if(b11_20 && b12_38 && b13_27 && b14_35 && b15_21 && b16_34 && b17_8 && b18_30 && b19_36 && b20_30 && b21_19 && b22_13 && b23_50 && b24_15 && b25_1 && b26_19 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 913;
}
if(b5_3 && b6_9 && b7_17 && b8_21 && b9_26 && b10_27 && b11_28 && b12_38 && b13_33 && b14_22 && b15_21 && b16_20 && b17_19 && b18_15 && b19_8 && b20_38 && b21_36 && b22_39 && b23_11 && b24_30 && b25_18 && b26_17 && b27_1 && b28_1 && b29_11 && b30_8) {
pattern_id = 914;
}
if(b2_9 && b3_4 && b4_11 && b5_18 && b6_20 && b7_20 && b8_23 && b9_21 && b10_19 && b11_22 && b12_15 && b13_22 && b14_24 && b15_37 && b16_11 && b17_44 && b18_41 && b19_36 && b20_28 && b21_2 && b22_33 && b23_9 && b24_41 && b25_16 && b26_19 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 915;
}
if(b18_33 && b19_16 && b20_30 && b21_28 && b22_15 && b23_29 && b24_5 && b25_1 && b26_49 && b27_28 && b28_8 && b29_8 && b30_25) {
pattern_id = 916;
}
if(b10_19 && b11_8 && b12_14 && b13_4 && b14_22 && b15_19 && b16_35 && b17_3 && b18_33 && b19_13 && b20_26 && b21_7 && b22_2 && b23_23 && b24_2 && b25_2 && b26_2 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 917;
}
if(b5_3 && b6_9 && b7_17 && b8_21 && b9_26 && b10_27 && b11_28 && b12_38 && b13_33 && b14_2 && b15_27 && b16_19 && b17_47 && b18_36 && b19_36 && b20_17 && b21_24 && b22_12 && b23_34 && b24_15 && b25_49 && b26_41 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 918;
}
if(b12_16 && b13_22 && b14_5 && b15_27 && b16_12 && b17_12 && b18_17 && b19_16 && b20_33 && b21_28 && b22_14 && b23_29 && b24_15 && b25_1 && b26_19 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 919;
}
if(b14_26 && b15_25 && b16_29 && b17_26 && b18_19 && b19_13 && b20_20 && b21_7 && b22_39 && b23_28 && b24_13 && b25_51 && b26_6 && b27_26 && b28_8 && b29_1 && b30_28) {
pattern_id = 920;
}
if(b2_9 && b3_4 && b4_11 && b5_18 && b6_20 && b7_20 && b8_23 && b9_21 && b10_19 && b11_8 && b12_24 && b13_32 && b14_2 && b15_43 && b16_26 && b17_3 && b18_33 && b19_38 && b20_20 && b21_20 && b22_41 && b23_7 && b24_19 && b25_10 && b26_24 && b27_1 && b28_26 && b29_44 && b30_47) {
pattern_id = 921;
}
if(b3_10 && b4_16 && b5_13 && b6_12 && b7_2 && b8_24 && b9_17 && b10_4 && b11_20 && b12_38 && b13_35 && b14_13 && b15_19 && b16_28 && b17_17 && b18_30 && b19_36 && b20_28 && b21_2 && b22_2 && b23_9 && b24_31 && b25_16 && b26_36 && b27_1 && b28_26 && b29_44 && b30_47) {
pattern_id = 922;
}
if(b5_3 && b6_9 && b7_17 && b8_21 && b9_26 && b10_27 && b11_28 && b12_38 && b13_33 && b14_28 && b15_10 && b16_19 && b17_35 && b18_30 && b19_36 && b20_8 && b21_2 && b22_2 && b23_26 && b24_9 && b25_52 && b26_36 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 923;
}
if(b6_22 && b7_22 && b8_18 && b9_28 && b10_21 && b11_15 && b12_25 && b13_22 && b14_26 && b15_29 && b16_19 && b17_28 && b18_45 && b19_16 && b20_33 && b21_36 && b22_14 && b23_47 && b24_30 && b25_1 && b26_21 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 924;
}
if(b11_20 && b12_38 && b13_27 && b14_35 && b15_21 && b16_34 && b17_8 && b18_30 && b19_36 && b20_5 && b21_19 && b22_8 && b23_5 && b24_13 && b25_17 && b26_21 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 925;
}
if(b17_23 && b18_30 && b19_34 && b20_41 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 926;
}
if(b19_36 && b20_9 && b21_2 && b22_39 && b23_51 && b24_13 && b25_10 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 927;
}
if(b24_21 && b25_1 && b26_12 && b27_19 && b28_17 && b29_14 && b30_32) {
pattern_id = 928;
}
if(b20_33 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 929;
}
if(b19_36 && b20_9 && b21_2 && b22_1 && b23_34 && b24_10 && b25_50 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 930;
}
if(b20_33 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 931;
}
if(b20_33 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 932;
}
if(b21_15 && b22_13 && b23_7 && b24_13 && b25_8 && b26_52 && b27_6 && b28_30 && b29_50 && b30_25) {
pattern_id = 933;
}
if(b20_33 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_15 && b29_11 && b30_22) {
pattern_id = 934;
}
if(b18_33 && b19_16 && b20_43 && b21_4 && b22_10 && b23_8 && b24_45 && b25_53 && b26_47 && b27_1 && b28_15 && b29_11 && b30_22) {
pattern_id = 935;
}
if(b18_33 && b19_16 && b20_43 && b21_4 && b22_10 && b23_8 && b24_45 && b25_48 && b26_24 && b27_18 && b28_44 && b29_46 && b30_43) {
pattern_id = 936;
}
if(b21_15 && b22_13 && b23_7 && b24_13 && b25_8 && b26_52 && b27_6 && b28_59 && b29_54 && b30_43) {
pattern_id = 937;
}
if(b0_5 && b1_8 && b2_11 && b3_19 && b4_36 && b5_13 && b6_31 && b7_51 && b8_48 && b9_45 && b10_46 && b11_5 && b12_41 && b13_39 && b14_19 && b15_6 && b16_68 && b17_50 && b18_28 && b19_17 && b20_74 && b21_1 && b22_13 && b23_32 && b24_2 && b25_71 && b26_64 && b27_10 && b28_17 && b29_27 && b30_43) {
pattern_id = 938;
}
if(b14_26 && b15_25 && b16_26 && b17_15 && b18_28 && b19_20 && b20_28 && b21_15 && b22_45 && b23_9 && b24_38 && b25_5 && b26_18 && b27_1 && b28_26 && b29_20 && b30_36) {
pattern_id = 939;
}
if(b18_33 && b19_16 && b20_43 && b21_36 && b22_47 && b23_30 && b24_15 && b25_8 && b26_38 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 940;
}
if(b18_33 && b19_16 && b20_43 && b21_36 && b22_47 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_52 && b29_51 && b30_45) {
pattern_id = 941;
}
if(b15_35 && b16_20 && b17_17 && b18_41 && b19_34 && b20_42 && b21_2 && b22_13 && b23_28 && b24_13 && b25_11 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 942;
}
if(b19_36 && b20_9 && b21_2 && b22_16 && b23_26 && b24_5 && b25_5 && b26_38 && b27_28 && b28_30 && b29_50 && b30_25) {
pattern_id = 943;
}
if(b17_23 && b18_30 && b19_14 && b20_19 && b21_7 && b22_14 && b23_29 && b24_15 && b25_1 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 944;
}
if(b19_36 && b20_9 && b21_2 && b22_10 && b23_16 && b24_18 && b25_8 && b26_65 && b27_13 && b28_44 && b29_51 && b30_41) {
pattern_id = 945;
}
if(b17_23 && b18_30 && b19_14 && b20_23 && b21_53 && b22_14 && b23_34 && b24_32 && b25_1 && b26_19 && b27_19 && b28_38 && b29_39 && b30_22) {
pattern_id = 946;
}
if(b19_36 && b20_9 && b21_2 && b22_10 && b23_16 && b24_31 && b25_15 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 947;
}
if(b19_36 && b20_9 && b21_2 && b22_10 && b23_16 && b24_31 && b25_15 && b26_12 && b27_1 && b28_11 && b29_16 && b30_26) {
pattern_id = 948;
}
if(b7_15 && b8_17 && b9_29 && b10_36 && b11_29 && b12_15 && b13_27 && b14_14 && b15_25 && b16_6 && b17_55 && b18_21 && b19_37 && b20_7 && b21_7 && b22_28 && b23_34 && b24_31 && b25_36 && b26_19 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 949;
}
if(b22_39 && b23_28 && b24_18 && b25_8 && b26_51 && b27_26 && b28_8 && b29_11 && b30_28) {
pattern_id = 950;
}
if(b11_20 && b12_38 && b13_15 && b14_35 && b15_40 && b16_28 && b17_17 && b18_17 && b19_36 && b20_18 && b21_2 && b22_10 && b23_16 && b24_17 && b25_5 && b26_19 && b27_40 && b28_18 && b29_9 && b30_47) {
pattern_id = 951;
}
if(b8_25 && b9_21 && b10_15 && b11_39 && b12_37 && b13_17 && b14_14 && b15_29 && b16_6 && b17_14 && b18_4 && b19_31 && b20_31 && b21_9 && b22_14 && b23_6 && b24_61 && b25_47 && b26_21 && b27_19 && b28_50 && b29_9 && b30_8) {
pattern_id = 952;
}
if(b17_23 && b18_30 && b19_14 && b20_23 && b21_53 && b22_8 && b23_7 && b24_5 && b25_46 && b26_7 && b27_12 && b28_33 && b29_12 && b30_10) {
pattern_id = 953;
}
if(b19_36 && b20_9 && b21_2 && b22_10 && b23_16 && b24_17 && b25_5 && b26_19 && b27_29 && b28_52 && b29_15 && b30_10) {
pattern_id = 954;
}
if(b19_36 && b20_9 && b21_2 && b22_2 && b23_23 && b24_2 && b25_2 && b26_2 && b27_1 && b28_1 && b29_11 && b30_22) {
pattern_id = 955;
}
if(b17_23 && b18_30 && b19_14 && b20_20 && b21_19 && b22_1 && b23_28 && b24_19 && b25_14 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 956;
}
if(b21_15 && b22_13 && b23_7 && b24_5 && b25_6 && b26_6 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 957;
}
if(b24_21 && b25_1 && b26_12 && b27_18 && b28_27 && b29_50 && b30_28) {
pattern_id = 958;
}
if(b18_33 && b19_16 && b20_8 && b21_43 && b22_63 && b23_31 && b24_13 && b25_51 && b26_2 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 959;
}
if(b23_45 && b24_19 && b25_50 && b26_16 && b27_29 && b28_32 && b29_67 && b30_16) {
pattern_id = 960;
}
if(b22_39 && b23_28 && b24_45 && b25_31 && b26_6 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 961;
}
if(b19_36 && b20_9 && b21_8 && b22_23 && b23_29 && b24_47 && b25_5 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 962;
}
if(b16_6 && b17_3 && b18_37 && b19_3 && b20_13 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 963;
}
if(b18_33 && b19_16 && b20_50 && b21_31 && b22_41 && b23_6 && b24_39 && b25_31 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 964;
}
if(b18_33 && b19_16 && b20_50 && b21_31 && b22_42 && b23_8 && b24_15 && b25_17 && b26_12 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 965;
}
if(b17_23 && b18_30 && b19_35 && b20_26 && b21_26 && b22_12 && b23_50 && b24_15 && b25_10 && b26_2 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 966;
}
if(b13_33 && b14_27 && b15_21 && b16_11 && b17_12 && b18_45 && b19_14 && b20_9 && b21_5 && b22_45 && b23_14 && b24_18 && b25_1 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 967;
}
if(b14_26 && b15_25 && b16_12 && b17_21 && b18_11 && b19_32 && b20_43 && b21_7 && b22_2 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 968;
}
if(b12_16 && b13_22 && b14_22 && b15_29 && b16_26 && b17_23 && b18_4 && b19_33 && b20_33 && b21_7 && b22_23 && b23_14 && b24_9 && b25_15 && b26_12 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 969;
}
if(b16_6 && b17_3 && b18_19 && b19_5 && b20_43 && b21_15 && b22_15 && b23_23 && b24_19 && b25_47 && b26_38 && b27_28 && b28_23 && b29_9 && b30_22) {
pattern_id = 970;
}
if(b24_21 && b25_1 && b26_11 && b27_18 && b28_8 && b29_32 && b30_28) {
pattern_id = 971;
}
if(b20_33 && b21_7 && b22_8 && b23_62 && b24_1 && b25_5 && b26_24 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 972;
}
if(b5_3 && b6_9 && b7_26 && b8_29 && b9_5 && b10_15 && b11_30 && b12_42 && b13_24 && b14_19 && b15_43 && b16_6 && b17_19 && b18_15 && b19_8 && b20_38 && b21_36 && b22_53 && b23_8 && b24_15 && b25_51 && b26_38 && b27_19 && b28_44 && b29_44 && b30_43) {
pattern_id = 973;
}
if(b15_35 && b16_20 && b17_21 && b18_21 && b19_31 && b20_20 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 974;
}
if(b19_36 && b20_9 && b21_42 && b22_13 && b23_28 && b24_18 && b25_39 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 975;
}
if(b21_15 && b22_13 && b23_31 && b24_15 && b25_8 && b26_15 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 976;
}
if(b18_33 && b19_16 && b20_19 && b21_31 && b22_10 && b23_48 && b24_18 && b25_8 && b26_55 && b27_1 && b28_52 && b29_27 && b30_26) {
pattern_id = 977;
}
if(b7_15 && b8_17 && b9_15 && b10_25 && b11_15 && b12_16 && b13_22 && b14_21 && b15_12 && b16_34 && b17_35 && b18_4 && b19_5 && b20_33 && b21_7 && b22_23 && b23_9 && b24_47 && b25_8 && b26_2 && b27_57 && b28_38 && b29_9 && b30_8) {
pattern_id = 978;
}
if(b17_23 && b18_30 && b19_3 && b20_21 && b21_5 && b22_42 && b23_9 && b24_9 && b25_5 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 979;
}
if(b19_36 && b20_9 && b21_31 && b22_55 && b23_5 && b24_41 && b25_8 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 980;
}
if(b18_33 && b19_16 && b20_26 && b21_52 && b22_23 && b23_14 && b24_9 && b25_39 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 981;
}
if(b20_33 && b21_7 && b22_23 && b23_14 && b24_9 && b25_15 && b26_12 && b27_1 && b28_28 && b29_1 && b30_42) {
pattern_id = 982;
}
if(b18_33 && b19_16 && b20_13 && b21_4 && b22_4 && b23_34 && b24_41 && b25_16 && b26_12 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 983;
}
if(b15_35 && b16_20 && b17_12 && b18_19 && b19_20 && b20_57 && b21_17 && b22_8 && b23_23 && b24_18 && b25_39 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 984;
}
if(b15_35 && b16_20 && b17_12 && b18_19 && b19_13 && b20_43 && b21_15 && b22_10 && b23_7 && b24_47 && b25_16 && b26_50 && b27_52 && b28_26 && b29_25 && b30_5) {
pattern_id = 985;
}
if(b15_35 && b16_20 && b17_56 && b18_45 && b19_36 && b20_28 && b21_39 && b22_43 && b23_6 && b24_42 && b25_36 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 986;
}
if(b23_45 && b24_19 && b25_8 && b26_52 && b27_6 && b28_12 && b29_44 && b30_45) {
pattern_id = 987;
}
if(b19_36 && b20_9 && b21_28 && b22_14 && b23_28 && b24_41 && b25_16 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 988;
}
if(b25_46 && b26_36 && b27_18 && b28_12 && b29_11 && b30_33) {
pattern_id = 989;
}
if(b19_36 && b20_9 && b21_5 && b22_1 && b23_6 && b24_9 && b25_5 && b26_6 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 990;
}
if(b16_6 && b17_3 && b18_17 && b19_12 && b20_20 && b21_7 && b22_28 && b23_5 && b24_2 && b25_2 && b26_11 && b27_56 && b28_30 && b29_50 && b30_25) {
pattern_id = 991;
}
if(b17_23 && b18_30 && b19_5 && b20_7 && b21_5 && b22_41 && b23_28 && b24_21 && b25_48 && b26_77 && b27_24 && b28_33 && b29_50 && b30_43) {
pattern_id = 992;
}
if(b21_15 && b22_13 && b23_6 && b24_15 && b25_8 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 993;
}
if(b15_35 && b16_20 && b17_8 && b18_28 && b19_31 && b20_43 && b21_15 && b22_1 && b23_51 && b24_15 && b25_8 && b26_7 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 994;
}
if(b14_26 && b15_25 && b16_35 && b17_28 && b18_12 && b19_14 && b20_33 && b21_4 && b22_45 && b23_5 && b24_9 && b25_47 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 995;
}
if(b22_39 && b23_28 && b24_5 && b25_31 && b26_17 && b27_61 && b28_30 && b29_50 && b30_25) {
pattern_id = 996;
}
if(b15_35 && b16_20 && b17_52 && b18_11 && b19_13 && b20_57 && b21_42 && b22_14 && b23_13 && b24_39 && b25_8 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 997;
}
if(b19_36 && b20_9 && b21_13 && b22_12 && b23_29 && b24_15 && b25_8 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 998;
}
if(b12_16 && b13_22 && b14_15 && b15_19 && b16_34 && b17_28 && b18_12 && b19_5 && b20_33 && b21_17 && b22_23 && b23_13 && b24_38 && b25_31 && b26_21 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 999;
}
if(b20_33 && b21_7 && b22_41 && b23_34 && b24_20 && b25_5 && b26_41 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1000;
}
if(b27_29 && b28_40 && b29_16 && b30_47) {
pattern_id = 1001;
}
if(b21_15 && b22_13 && b23_47 && b24_19 && b25_8 && b26_51 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1002;
}
if(b18_33 && b19_5 && b20_7 && b21_9 && b22_60 && b23_11 && b24_13 && b25_16 && b26_15 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1003;
}
if(b26_49 && b27_18 && b28_52 && b29_1 && b30_32) {
pattern_id = 1004;
}
if(b13_33 && b14_28 && b15_6 && b16_29 && b17_29 && b18_41 && b19_3 && b20_20 && b21_2 && b22_39 && b23_13 && b24_13 && b25_18 && b26_21 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1005;
}
if(b12_16 && b13_36 && b14_14 && b15_18 && b16_18 && b17_13 && b18_28 && b19_5 && b20_43 && b21_15 && b22_12 && b23_34 && b24_31 && b25_39 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1006;
}
if(b22_39 && b23_6 && b24_18 && b25_1 && b26_19 && b27_55 && b28_52 && b29_19 && b30_16) {
pattern_id = 1007;
}
if(b18_33 && b19_5 && b20_43 && b21_7 && b22_2 && b23_27 && b24_10 && b25_11 && b26_11 && b27_29 && b28_58 && b29_55 && b30_24) {
pattern_id = 1008;
}
if(b22_39 && b23_6 && b24_18 && b25_1 && b26_19 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 1009;
}
if(b18_33 && b19_5 && b20_43 && b21_7 && b22_2 && b23_18 && b24_39 && b25_47 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1010;
}
if(b22_39 && b23_6 && b24_18 && b25_1 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1011;
}
if(b22_39 && b23_6 && b24_18 && b25_1 && b26_19 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1012;
}
if(b23_45 && b24_5 && b25_5 && b26_36 && b27_18 && b28_52 && b29_19 && b30_16) {
pattern_id = 1013;
}
if(b16_6 && b17_8 && b18_4 && b19_28 && b20_20 && b21_17 && b22_23 && b23_14 && b24_2 && b25_10 && b26_12 && b27_15 && b28_30 && b29_50 && b30_25) {
pattern_id = 1014;
}
if(b12_16 && b13_36 && b14_17 && b15_21 && b16_41 && b17_13 && b18_4 && b19_31 && b20_33 && b21_5 && b22_9 && b23_14 && b24_38 && b25_26 && b26_60 && b27_13 && b28_33 && b29_19 && b30_43) {
pattern_id = 1015;
}
if(b17_23 && b18_17 && b19_8 && b20_13 && b21_15 && b22_15 && b23_13 && b24_13 && b25_11 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1016;
}
if(b22_39 && b23_6 && b24_38 && b25_36 && b26_36 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1017;
}
if(b7_15 && b8_23 && b9_15 && b10_16 && b11_14 && b12_24 && b13_36 && b14_18 && b15_37 && b16_19 && b17_15 && b18_30 && b19_36 && b20_38 && b21_36 && b22_47 && b23_7 && b24_48 && b25_24 && b26_74 && b27_8 && b28_11 && b29_55 && b30_28) {
pattern_id = 1018;
}
if(b21_15 && b22_2 && b23_5 && b24_2 && b25_11 && b26_74 && b27_13 && b28_30 && b29_60 && b30_22) {
pattern_id = 1019;
}
if(b21_15 && b22_2 && b23_34 && b24_13 && b25_15 && b26_12 && b27_1 && b28_12 && b29_52 && b30_26) {
pattern_id = 1020;
}
if(b14_26 && b15_29 && b16_30 && b17_19 && b18_41 && b19_16 && b20_40 && b21_4 && b22_2 && b23_23 && b24_15 && b25_39 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1021;
}
if(b15_35 && b16_35 && b17_26 && b18_15 && b19_13 && b20_23 && b21_15 && b22_2 && b23_34 && b24_30 && b25_5 && b26_25 && b27_6 && b28_38 && b29_27 && b30_25) {
pattern_id = 1022;
}
if(b23_45 && b24_5 && b25_1 && b26_19 && b27_1 && b28_55 && b29_18 && b30_6) {
pattern_id = 1023;
}
if(b17_23 && b18_17 && b19_5 && b20_7 && b21_26 && b22_14 && b23_11 && b24_5 && b25_31 && b26_6 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1024;
}
if(b14_26 && b15_29 && b16_51 && b17_26 && b18_42 && b19_12 && b20_33 && b21_7 && b22_2 && b23_9 && b24_5 && b25_6 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1025;
}
if(b18_33 && b19_5 && b20_47 && b21_5 && b22_39 && b23_34 && b24_18 && b25_47 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1026;
}
if(b18_33 && b19_5 && b20_47 && b21_5 && b22_34 && b23_50 && b24_5 && b25_51 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1027;
}
if(b24_21 && b25_6 && b26_46 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 1028;
}
if(b24_21 && b25_6 && b26_39 && b27_1 && b28_1 && b29_11 && b30_45) {
pattern_id = 1029;
}
if(b20_33 && b21_13 && b22_8 && b23_6 && b24_9 && b25_47 && b26_24 && b27_10 && b28_12 && b29_8 && b30_26) {
pattern_id = 1030;
}
if(b24_21 && b25_6 && b26_6 && b27_12 && b28_12 && b29_11 && b30_5) {
pattern_id = 1031;
}
if(b16_6 && b17_52 && b18_11 && b19_34 && b20_7 && b21_5 && b22_14 && b23_45 && b24_31 && b25_17 && b26_2 && b27_1 && b28_26 && b29_50 && b30_25) {
pattern_id = 1032;
}
if(b13_33 && b14_15 && b15_19 && b16_23 && b17_19 && b18_17 && b19_14 && b20_33 && b21_42 && b22_63 && b23_23 && b24_2 && b25_2 && b26_2 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1033;
}
if(b13_33 && b14_15 && b15_19 && b16_23 && b17_19 && b18_17 && b19_14 && b20_33 && b21_19 && b22_1 && b23_34 && b24_13 && b25_51 && b26_25 && b27_28 && b28_1 && b29_50 && b30_33) {
pattern_id = 1034;
}
if(b18_33 && b19_30 && b20_13 && b21_43 && b22_1 && b23_6 && b24_18 && b25_26 && b26_25 && b27_77 && b28_33 && b29_25 && b30_33) {
pattern_id = 1035;
}
if(b20_33 && b21_13 && b22_12 && b23_15 && b24_15 && b25_47 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1036;
}
if(b20_33 && b21_13 && b22_12 && b23_15 && b24_15 && b25_47 && b26_34 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1037;
}
if(b21_15 && b22_41 && b23_29 && b24_17 && b25_31 && b26_7 && b27_12 && b28_30 && b29_50 && b30_25) {
pattern_id = 1038;
}
if(b17_23 && b18_14 && b19_13 && b20_40 && b21_31 && b22_1 && b23_26 && b24_21 && b25_51 && b26_2 && b27_12 && b28_27 && b29_25 && b30_5) {
pattern_id = 1039;
}
if(b18_33 && b19_30 && b20_13 && b21_9 && b22_23 && b23_9 && b24_30 && b25_5 && b26_17 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1040;
}
if(b15_35 && b16_51 && b17_12 && b18_45 && b19_3 && b20_7 && b21_43 && b22_15 && b23_13 && b24_13 && b25_11 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1041;
}
if(b10_19 && b11_37 && b12_38 && b13_15 && b14_35 && b15_44 && b16_51 && b17_12 && b18_15 && b19_12 && b20_20 && b21_2 && b22_43 && b23_9 && b24_30 && b25_51 && b26_11 && b27_30 && b28_30 && b29_50 && b30_25) {
pattern_id = 1042;
}
if(b9_22 && b10_8 && b11_8 && b12_8 && b13_4 && b14_37 && b15_51 && b16_34 && b17_34 && b18_21 && b19_5 && b20_43 && b21_40 && b22_12 && b23_9 && b24_19 && b25_1 && b26_20 && b27_12 && b28_30 && b29_50 && b30_25) {
pattern_id = 1043;
}
if(b18_33 && b19_30 && b20_9 && b21_2 && b22_10 && b23_23 && b24_2 && b25_2 && b26_2 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1044;
}
if(b21_15 && b22_41 && b23_28 && b24_18 && b25_8 && b26_36 && b27_1 && b28_11 && b29_16 && b30_26) {
pattern_id = 1045;
}
if(b21_15 && b22_41 && b23_28 && b24_18 && b25_8 && b26_36 && b27_1 && b28_18 && b29_27 && b30_25) {
pattern_id = 1046;
}
if(b15_35 && b16_51 && b17_3 && b18_17 && b19_3 && b20_23 && b21_2 && b22_60 && b23_7 && b24_18 && b25_36 && b26_12 && b27_15 && b28_30 && b29_50 && b30_25) {
pattern_id = 1047;
}
if(b23_45 && b24_41 && b25_10 && b26_11 && b27_26 && b28_30 && b29_50 && b30_25) {
pattern_id = 1048;
}
if(b9_22 && b10_8 && b11_28 && b12_15 && b13_17 && b14_27 && b15_34 && b16_21 && b17_26 && b18_33 && b19_18 && b20_7 && b21_60 && b22_14 && b23_15 && b24_58 && b25_47 && b26_17 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1049;
}
if(b28_32 && b29_26 && b30_35) {
pattern_id = 1050;
}
if(b17_23 && b18_43 && b19_27 && b20_15 && b21_15 && b22_4 && b23_14 && b24_5 && b25_47 && b26_24 && b27_13 && b28_18 && b29_18 && b30_28) {
pattern_id = 1051;
}
if(b10_19 && b11_29 && b12_53 && b13_9 && b14_26 && b15_20 && b16_51 && b17_8 && b18_21 && b19_24 && b20_38 && b21_46 && b22_1 && b23_45 && b24_57 && b25_39 && b26_64 && b27_5 && b28_52 && b29_11 && b30_28) {
pattern_id = 1052;
}
if(b8_25 && b9_27 && b10_15 && b11_39 && b12_15 && b13_31 && b14_22 && b15_18 && b16_21 && b17_23 && b18_19 && b19_20 && b20_28 && b21_2 && b22_49 && b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 1053;
}
if(b14_26 && b15_40 && b16_12 && b17_15 && b18_17 && b19_15 && b20_42 && b21_57 && b22_12 && b23_50 && b24_47 && b25_48 && b26_11 && b27_30 && b28_53 && b29_15 && b30_43) {
pattern_id = 1054;
}
if(b19_36 && b20_31 && b21_41 && b22_14 && b23_47 && b24_32 && b25_1 && b26_2 && b27_57 && b28_17 && b29_14 && b30_5) {
pattern_id = 1055;
}
if(b12_16 && b13_34 && b14_22 && b15_6 && b16_44 && b17_43 && b18_42 && b19_31 && b20_26 && b21_4 && b22_47 && b23_8 && b24_13 && b25_1 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1056;
}
if(b19_36 && b20_31 && b21_41 && b22_14 && b23_47 && b24_27 && b25_1 && b26_2 && b27_57 && b28_17 && b29_14 && b30_5) {
pattern_id = 1057;
}
if(b18_33 && b19_37 && b20_38 && b21_2 && b22_42 && b23_8 && b24_15 && b25_17 && b26_12 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 1058;
}
if(b17_23 && b18_43 && b19_15 && b20_43 && b21_26 && b22_33 && b23_5 && b24_9 && b25_6 && b26_38 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1059;
}
if(b5_3 && b6_3 && b7_2 && b8_3 && b9_5 && b10_4 && b11_5 && b12_4 && b13_4 && b14_5 && b15_6 && b16_6 && b17_8 && b18_4 && b19_8 && b20_13 && b21_9 && b22_1 && b23_6 && b24_18 && b25_24 && b26_16 && b27_18 && b28_33 && b29_25 && b30_33) {
pattern_id = 1060;
}
if(b17_23 && b18_43 && b19_15 && b20_43 && b21_26 && b22_2 && b23_5 && b24_47 && b25_18 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1061;
}
if(b16_6 && b17_45 && b18_19 && b19_3 && b20_40 && b21_4 && b22_2 && b23_23 && b24_15 && b25_39 && b26_25 && b27_28 && b28_1 && b29_50 && b30_55) {
pattern_id = 1062;
}
if(b23_45 && b24_20 && b25_18 && b26_6 && b27_1 && b28_28 && b29_50 && b30_29) {
pattern_id = 1063;
}
if(b17_23 && b18_43 && b19_15 && b20_23 && b21_4 && b22_8 && b23_9 && b24_5 && b25_31 && b26_17 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1064;
}
if(b18_33 && b19_37 && b20_38 && b21_7 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1065;
}
if(b17_23 && b18_43 && b19_20 && b20_30 && b21_53 && b22_15 && b23_7 && b24_1 && b25_5 && b26_17 && b27_1 && b28_28 && b29_18 && b30_8) {
pattern_id = 1066;
}
if(b19_36 && b20_31 && b21_19 && b22_1 && b23_28 && b24_19 && b25_14 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1067;
}
if(b22_39 && b23_47 && b24_36 && b25_32 && b26_38 && b27_8 && b28_56 && b29_25 && b30_28) {
pattern_id = 1068;
}
if(b20_33 && b21_26 && b22_46 && b23_6 && b24_20 && b25_47 && b26_17 && b27_8 && b28_30 && b29_50 && b30_45) {
pattern_id = 1069;
}
if(b20_33 && b21_26 && b22_46 && b23_47 && b24_45 && b25_31 && b26_25 && b27_12 && b28_23 && b29_25 && b30_33) {
pattern_id = 1070;
}
if(b23_45 && b24_1 && b25_47 && b26_11 && b27_8 && b28_30 && b29_50 && b30_25) {
pattern_id = 1071;
}
if(b21_15 && b22_42 && b23_9 && b24_42 && b25_32 && b26_24 && b27_10 && b28_12 && b29_8 && b30_26) {
pattern_id = 1072;
}
if(b17_23 && b18_38 && b19_12 && b20_56 && b21_35 && b22_24 && b23_5 && b24_13 && b25_8 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1073;
}
if(b7_15 && b8_34 && b9_12 && b10_35 && b11_35 && b12_40 && b13_16 && b14_24 && b15_27 && b16_23 && b17_23 && b18_38 && b19_12 && b20_56 && b21_35 && b22_24 && b23_5 && b24_13 && b25_8 && b26_34 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1074;
}
if(b19_36 && b20_17 && b21_2 && b22_24 && b23_27 && b24_38 && b25_47 && b26_6 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1075;
}
if(b6_22 && b7_42 && b8_3 && b9_38 && b10_19 && b11_47 && b12_41 && b13_16 && b14_41 && b15_43 && b16_26 && b17_43 && b18_21 && b19_20 && b20_7 && b21_9 && b22_63 && b23_6 && b24_31 && b25_15 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1076;
}
if(b17_23 && b18_38 && b19_14 && b20_41 && b21_40 && b22_13 && b23_6 && b24_15 && b25_8 && b26_12 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1077;
}
if(b18_33 && b19_39 && b20_43 && b21_39 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 1078;
}
if(b18_33 && b19_39 && b20_43 && b21_39 && b22_1 && b23_26 && b24_38 && b25_18 && b26_21 && b27_1 && b28_44 && b29_1 && b30_36) {
pattern_id = 1079;
}
if(b20_33 && b21_26 && b22_14 && b23_11 && b24_13 && b25_16 && b26_11 && b27_44 && b28_8 && b29_8 && b30_28) {
pattern_id = 1080;
}
if(b17_23 && b18_38 && b19_14 && b20_41 && b21_17 && b22_1 && b23_34 && b24_5 && b25_32 && b26_39 && b27_13 && b28_38 && b29_9 && b30_28) {
pattern_id = 1081;
}
if(b22_39 && b23_47 && b24_18 && b25_26 && b26_52 && b27_19 && b28_17 && b29_11 && b30_28) {
pattern_id = 1082;
}
if(b19_36 && b20_17 && b21_2 && b22_24 && b23_26 && b24_31 && b25_1 && b26_19 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1083;
}
if(b21_15 && b22_42 && b23_7 && b24_39 && b25_17 && b26_17 && b27_13 && b28_15 && b29_9 && b30_8) {
pattern_id = 1084;
}
if(b19_36 && b20_17 && b21_2 && b22_24 && b23_30 && b24_31 && b25_39 && b26_34 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1085;
}
if(b23_45 && b24_1 && b25_5 && b26_24 && b27_56 && b28_12 && b29_12 && b30_22) {
pattern_id = 1086;
}
if(b20_33 && b21_26 && b22_14 && b23_11 && b24_45 && b25_36 && b26_60 && b27_15 && b28_8 && b29_25 && b30_43) {
pattern_id = 1087;
}
if(b18_33 && b19_39 && b20_43 && b21_39 && b22_12 && b23_15 && b24_41 && b25_1 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 1088;
}
if(b18_33 && b19_39 && b20_43 && b21_39 && b22_12 && b23_15 && b24_41 && b25_1 && b26_25 && b27_27 && b28_18 && b29_9 && b30_33) {
pattern_id = 1089;
}
if(b17_23 && b18_38 && b19_14 && b20_41 && b21_19 && b22_8 && b23_14 && b24_19 && b25_48 && b26_7 && b27_50 && b28_7 && b29_39 && b30_6) {
pattern_id = 1090;
}
if(b16_6 && b17_36 && b18_4 && b19_24 && b20_13 && b21_9 && b22_41 && b23_28 && b24_46 && b25_1 && b26_52 && b27_15 && b28_26 && b29_50 && b30_6) {
pattern_id = 1091;
}
if(b19_36 && b20_17 && b21_2 && b22_24 && b23_28 && b24_18 && b25_39 && b26_34 && b27_38 && b28_12 && b29_12 && b30_25) {
pattern_id = 1092;
}
if(b18_33 && b19_39 && b20_43 && b21_39 && b22_13 && b23_29 && b24_31 && b25_8 && b26_36 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1093;
}
if(b19_36 && b20_17 && b21_2 && b22_24 && b23_28 && b24_5 && b25_47 && b26_19 && b27_29 && b28_59 && b29_12 && b30_43) {
pattern_id = 1094;
}
if(b20_33 && b21_26 && b22_45 && b23_14 && b24_18 && b25_1 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1095;
}
if(b18_33 && b19_39 && b20_50 && b21_2 && b22_10 && b23_7 && b24_13 && b25_51 && b26_11 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1096;
}
if(b17_23 && b18_38 && b19_35 && b20_43 && b21_28 && b22_14 && b23_9 && b24_38 && b25_18 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 1097;
}
if(b17_23 && b18_38 && b19_35 && b20_26 && b21_41 && b22_13 && b23_46 && b24_9 && b25_47 && b26_20 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1098;
}
if(b16_6 && b17_36 && b18_37 && b19_3 && b20_38 && b21_7 && b22_43 && b23_34 && b24_13 && b25_14 && b26_25 && b27_24 && b28_50 && b29_12 && b30_33) {
pattern_id = 1099;
}
if(b14_26 && b15_38 && b16_12 && b17_13 && b18_26 && b19_38 && b20_45 && b21_7 && b22_1 && b23_13 && b24_47 && b25_16 && b26_12 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1100;
}
if(b18_33 && b19_39 && b20_38 && b21_36 && b22_47 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1101;
}
if(b5_3 && b6_38 && b7_2 && b8_26 && b9_20 && b10_37 && b11_38 && b12_38 && b13_33 && b14_15 && b15_19 && b16_23 && b17_19 && b18_17 && b19_14 && b20_33 && b21_7 && b22_14 && b23_9 && b24_9 && b25_15 && b26_16 && b27_60 && b28_1 && b29_25 && b30_43) {
pattern_id = 1102;
}
if(b14_26 && b15_38 && b16_19 && b17_26 && b18_50 && b19_14 && b20_23 && b21_7 && b22_18 && b23_29 && b24_45 && b25_36 && b26_60 && b27_38 && b28_12 && b29_14 && b30_43) {
pattern_id = 1103;
}
if(b22_39 && b23_47 && b24_47 && b25_32 && b26_7 && b27_12 && b28_33 && b29_12 && b30_10) {
pattern_id = 1104;
}
if(b21_15 && b22_42 && b23_29 && b24_32 && b25_47 && b26_34 && b27_38 && b28_26 && b29_20 && b30_28) {
pattern_id = 1105;
}
if(b20_33 && b21_26 && b22_12 && b23_27 && b24_10 && b25_31 && b26_21 && b27_18 && b28_8 && b29_20 && b30_6) {
pattern_id = 1106;
}
if(b19_36 && b20_17 && b21_19 && b22_25 && b23_23 && b24_2 && b25_15 && b26_39 && b27_57 && b28_19 && b29_9 && b30_22) {
pattern_id = 1107;
}
if(b12_16 && b13_23 && b14_2 && b15_49 && b16_12 && b17_13 && b18_47 && b19_32 && b20_5 && b21_43 && b22_14 && b23_28 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_44 && b30_43) {
pattern_id = 1108;
}
if(b22_39 && b23_47 && b24_47 && b25_32 && b26_74 && b27_8 && b28_7 && b29_20 && b30_28) {
pattern_id = 1109;
}
if(b26_49 && b27_20 && b28_17 && b29_18 && b30_42) {
pattern_id = 1110;
}
if(b22_39 && b23_47 && b24_9 && b25_31 && b26_2 && b27_18 && b28_32 && b29_26 && b30_55) {
pattern_id = 1111;
}
if(b20_33 && b21_26 && b22_13 && b23_46 && b24_28 && b25_10 && b26_6 && b27_1 && b28_26 && b29_20 && b30_16) {
pattern_id = 1112;
}
if(b20_33 && b21_26 && b22_13 && b23_46 && b24_28 && b25_10 && b26_6 && b27_1 && b28_23 && b29_15 && b30_29) {
pattern_id = 1113;
}
if(b19_36 && b20_17 && b21_7 && b22_43 && b23_13 && b24_13 && b25_18 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1114;
}
if(b11_20 && b12_26 && b13_22 && b14_22 && b15_25 && b16_21 && b17_9 && b18_15 && b19_32 && b20_40 && b21_15 && b22_5 && b23_39 && b24_18 && b25_8 && b26_51 && b27_13 && b28_52 && b29_9 && b30_43) {
pattern_id = 1115;
}
if(b23_45 && b24_1 && b25_14 && b26_20 && b27_55 && b28_40 && b29_54 && b30_25) {
pattern_id = 1116;
}
if(b19_36 && b20_17 && b21_26 && b22_42 && b23_9 && b24_30 && b25_51 && b26_11 && b27_30 && b28_30 && b29_50 && b30_25) {
pattern_id = 1117;
}
if(b19_36 && b20_17 && b21_26 && b22_42 && b23_11 && b24_15 && b25_47 && b26_17 && b27_12 && b28_30 && b29_50 && b30_25) {
pattern_id = 1118;
}
if(b11_20 && b12_26 && b13_23 && b14_23 && b15_34 && b16_19 && b17_19 && b18_12 && b19_34 && b20_33 && b21_19 && b22_1 && b23_28 && b24_19 && b25_14 && b26_34 && b27_1 && b28_38 && b29_52 && b30_6) {
pattern_id = 1119;
}
if(b23_45 && b24_1 && b25_14 && b26_20 && b27_20 && b28_12 && b29_12 && b30_22) {
pattern_id = 1120;
}
if(b28_32 && b29_52 && b30_28) {
pattern_id = 1121;
}
if(b22_39 && b23_62 && b24_11 && b25_18 && b26_65 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 1122;
}
if(b23_45 && b24_6 && b25_51 && b26_39 && b27_1 && b28_52 && b29_19 && b30_16) {
pattern_id = 1123;
}
if(b27_29 && b28_61 && b29_1 && b30_32) {
pattern_id = 1124;
}
if(b26_49 && b27_63 && b28_53 && b29_11 && b30_42) {
pattern_id = 1125;
}
if(b23_45 && b24_55 && b25_39 && b26_2 && b27_50 && b28_7 && b29_44 && b30_17) {
pattern_id = 1126;
}
if(b25_46 && b26_62 && b27_15 && b28_7 && b29_15 && b30_6) {
pattern_id = 1127;
}
if(b30_12) {
pattern_id = 1128;
}
if(b29_3 && b30_12) {
pattern_id = 1129;
}
if(b5_1 && b6_7 && b7_7 && b8_8 && b9_10 && b10_9 && b11_9 && b12_10 && b13_12 && b14_9 && b15_12 && b16_13 && b17_15 && b18_15 && b19_14 && b20_21 && b21_20 && b22_9 && b23_23 && b24_33 && b25_20 && b26_39 && b27_38 && b28_44 && b29_15 && b30_42) {
pattern_id = 1130;
}
if(b25_3 && b26_7 && b27_46 && b28_37 && b29_25 && b30_49) {
pattern_id = 1131;
}
if(b30_35) {
pattern_id = 1132;
}
if(b9_13 && b10_12 && b11_11 && b12_15 && b13_17 && b14_14 && b15_5 && b16_22 && b17_22 && b18_1 && b19_16 && b20_10 && b21_29 && b22_29 && b23_17 && b24_3 && b25_15 && b26_2 && b27_28 && b28_26 && b29_9 && b30_26) {
pattern_id = 1133;
}
if(b27_21 && b28_20 && b29_21 && b30_19) {
pattern_id = 1134;
}
if(b22_38 && b23_56 && b24_8 && b25_45 && b26_14 && b27_3 && b28_43 && b29_45 && b30_2) {
pattern_id = 1135;
}
if(b28_20 && b29_3 && b30_12) {
pattern_id = 1136;
}
if(b24_49 && b25_43 && b26_14 && b27_2 && b28_20 && b29_3 && b30_2) {
pattern_id = 1137;
}
if(b6_35 && b7_7 && b8_41 && b9_2 && b10_46 && b11_5 && b12_41 && b13_24 && b14_42 && b15_36 && b16_26 && b17_2 && b18_37 && b19_12 && b20_13 && b21_19 && b22_63 && b23_10 && b24_9 && b25_3 && b26_14 && b27_18 && b28_26 && b29_20 && b30_29) {
pattern_id = 1138;
}
if(b19_27 && b20_10 && b21_72 && b22_57 && b23_17 && b24_45 && b25_10 && b26_19 && b27_28 && b28_72 && b29_34 && b30_28) {
pattern_id = 1139;
}
if(b28_24 && b29_3 && b30_52) {
pattern_id = 1140;
}
if(b28_24 && b29_3 && b30_80) {
pattern_id = 1141;
}
if(b28_34 && b29_3 && b30_55) {
pattern_id = 1142;
}
if(b24_44 && b25_45 && b26_37 && b27_13 && b28_53 && b29_11 && b30_22) {
pattern_id = 1143;
}
if(b27_43 && b28_24 && b29_3 && b30_4) {
pattern_id = 1144;
}
if(b22_32 && b23_37 && b24_23 && b25_22 && b26_46 && b27_1 && b28_39 && b29_28 && b30_35) {
pattern_id = 1145;
}
if(b28_29 && b29_47 && b30_78) {
pattern_id = 1146;
}
if(b18_18 && b19_19 && b20_10 && b21_24 && b22_11 && b23_10 && b24_36 && b25_12 && b26_5 && b27_41 && b28_45 && b29_43 && b30_33) {
pattern_id = 1147;
}
if(b29_69 && b30_13) {
pattern_id = 1148;
}
if(b18_59 && b19_64 && b20_45 && b21_35 && b22_47 && b23_7 && b24_30 && b25_37 && b26_14 && b27_72 && b28_68 && b29_59 && b30_30) {
pattern_id = 1149;
}
if(b13_50 && b14_26 && b15_25 && b16_29 && b17_26 && b18_19 && b19_13 && b20_20 && b21_65 && b22_66 && b23_73 && b24_22 && b25_40 && b26_44 && b27_9 && b28_49 && b29_66 && b30_34) {
pattern_id = 1150;
}
if(b26_80 && b27_60 && b28_18 && b29_27 && b30_25) {
pattern_id = 1151;
}
if(b24_65 && b25_40 && b26_63 && b27_69 && b28_41 && b29_6 && b30_3) {
pattern_id = 1152;
}
if(b29_69 && b30_7) {
pattern_id = 1153;
}
if(b20_63 && b21_18 && b22_6 && b23_12 && b24_43 && b25_65 && b26_73 && b27_14 && b28_48 && b29_7 && b30_30) {
pattern_id = 1154;
}
if(b18_59 && b19_25 && b20_44 && b21_62 && b22_27 && b23_12 && b24_61 && b25_65 && b26_73 && b27_14 && b28_48 && b29_7 && b30_30) {
pattern_id = 1155;
}
if(b16_62 && b17_14 && b18_47 && b19_40 && b20_38 && b21_25 && b22_2 && b23_21 && b24_47 && b25_8 && b26_2 && b27_38 && b28_11 && b29_11 && b30_76) {
pattern_id = 1156;
}
if(b17_62 && b18_21 && b19_13 && b20_13 && b21_9 && b22_14 && b23_6 && b24_3 && b25_14 && b26_11 && b27_12 && b28_38 && b29_17 && b30_43) {
pattern_id = 1157;
}
if(b2_27 && b3_9 && b4_8 && b5_34 && b6_1 && b7_2 && b8_35 && b9_45 && b10_5 && b11_36 && b12_53 && b13_6 && b14_57 && b15_21 && b16_23 && b17_17 && b18_3 && b19_14 && b20_55 && b21_2 && b22_2 && b23_6 && b24_18 && b25_8 && b26_5 && b27_33 && b28_20 && b29_5 && b30_30) {
pattern_id = 1158;
}
if(b3_28 && b4_34 && b5_17 && b6_21 && b7_26 && b8_42 && b9_43 && b10_48 && b11_5 && b12_35 && b13_20 && b14_51 && b15_58 && b16_21 && b17_12 && b18_11 && b19_32 && b20_43 && b21_5 && b22_20 && b23_59 && b24_23 && b25_29 && b26_52 && b27_10 && b28_19 && b29_9 && b30_43) {
pattern_id = 1159;
}
if(b3_28 && b4_34 && b5_17 && b6_21 && b7_26 && b8_42 && b9_43 && b10_48 && b11_5 && b12_35 && b13_20 && b14_51 && b15_58 && b16_20 && b17_15 && b18_12 && b19_15 && b20_13 && b21_5 && b22_67 && b23_17 && b24_23 && b25_4 && b26_5 && b27_11 && b28_12 && b29_8 && b30_4) {
pattern_id = 1160;
}
if(b24_65 && b25_18 && b26_64 && b27_15 && b28_12 && b29_27 && b30_5) {
pattern_id = 1161;
}
if(b22_26 && b23_10 && b24_4 && b25_30 && b26_4 && b27_23 && b28_32 && b29_53 && b30_38) {
pattern_id = 1162;
}
if(b9_45 && b10_12 && b11_7 && b12_53 && b13_9 && b14_8 && b15_12 && b16_34 && b17_12 && b18_45 && b19_14 && b20_20 && b21_32 && b22_34 && b23_59 && b24_3 && b25_9 && b26_63 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1163;
}
if(b25_33 && b26_14 && b27_59 && b28_45 && b29_3 && b30_20) {
pattern_id = 1164;
}
if(b19_17 && b20_2 && b21_38 && b22_26 && b23_3 && b24_14 && b25_33 && b26_14 && b27_59 && b28_45 && b29_3 && b30_20) {
pattern_id = 1165;
}
if(b16_14 && b17_6 && b18_39 && b19_17 && b20_2 && b21_6 && b22_57 && b23_15 && b24_31 && b25_36 && b26_24 && b27_10 && b28_12 && b29_8 && b30_26) {
pattern_id = 1166;
}
if(b29_41 && b30_43) {
pattern_id = 1167;
}
if(b15_13 && b16_14 && b17_16 && b18_16 && b19_17 && b20_22 && b21_21 && b22_26 && b23_32 && b24_34 && b25_33 && b26_40 && b27_39 && b28_45 && b29_41 && b30_43) {
pattern_id = 1168;
}
if(b4_39 && b5_44 && b6_10 && b7_23 && b8_15 && b9_11 && b10_55 && b11_30 && b12_24 && b13_22 && b14_14 && b15_64 && b16_70 && b17_43 && b18_15 && b19_14 && b20_30 && b21_31 && b22_47 && b23_7 && b24_71 && b25_69 && b26_50 && b27_23 && b28_21 && b29_40 && b30_3) {
pattern_id = 1169;
}
if(b23_32 && b24_43 && b25_21 && b26_44 && b27_47 && b28_24 && b29_38 && b30_43) {
pattern_id = 1170;
}
if(b30_30) {
pattern_id = 1171;
}
if(b22_67 && b23_32 && b24_8 && b25_37 && b26_44 && b27_2 && b28_18 && b29_18 && b30_52) {
pattern_id = 1172;
}
if(b21_48 && b22_53 && b23_55 && b24_46 && b25_48 && b26_60 && b27_60 && b28_59 && b29_55 && b30_33) {
pattern_id = 1173;
}
if(b16_47 && b17_40 && b18_4 && b19_32 && b20_43 && b21_5 && b22_14 && b23_41 && b24_15 && b25_15 && b26_53 && b27_38 && b28_8 && b29_20 && b30_6) {
pattern_id = 1174;
}
if(b18_48 && b19_18 && b20_28 && b21_41 && b22_2 && b23_41 && b24_15 && b25_15 && b26_53 && b27_38 && b28_8 && b29_20 && b30_6) {
pattern_id = 1175;
}
if(b18_48 && b19_49 && b20_7 && b21_20 && b22_14 && b23_39 && b24_18 && b25_8 && b26_51 && b27_13 && b28_52 && b29_9 && b30_22) {
pattern_id = 1176;
}
if(b22_53 && b23_39 && b24_25 && b25_55 && b26_22 && b27_32 && b28_46 && b29_58 && b30_7) {
pattern_id = 1177;
}
if(b22_53 && b23_13 && b24_18 && b25_1 && b26_36 && b27_19 && b28_50 && b29_9 && b30_43) {
pattern_id = 1178;
}
if(b27_60 && b28_16 && b29_50 && b30_58) {
pattern_id = 1179;
}
if(b20_51 && b21_26 && b22_12 && b23_27 && b24_10 && b25_1 && b26_65 && b27_12 && b28_27 && b29_27 && b30_42) {
pattern_id = 1180;
}
if(b18_48 && b19_39 && b20_13 && b21_35 && b22_9 && b23_6 && b24_38 && b25_16 && b26_65 && b27_15 && b28_8 && b29_20 && b30_26) {
pattern_id = 1181;
}
if(b18_48 && b19_39 && b20_13 && b21_35 && b22_13 && b23_6 && b24_13 && b25_8 && b26_19 && b27_55 && b28_15 && b29_9 && b30_8) {
pattern_id = 1182;
}
if(b19_51 && b20_17 && b21_19 && b22_25 && b23_28 && b24_5 && b25_31 && b26_6 && b27_55 && b28_15 && b29_9 && b30_8) {
pattern_id = 1183;
}
if(b17_46 && b18_38 && b19_13 && b20_45 && b21_13 && b22_16 && b23_8 && b24_45 && b25_5 && b26_52 && b27_17 && b28_7 && b29_39 && b30_6) {
pattern_id = 1184;
}
if(b19_51 && b20_17 && b21_19 && b22_25 && b23_14 && b24_19 && b25_8 && b26_65 && b27_28 && b28_17 && b29_15 && b30_42) {
pattern_id = 1185;
}
if(b19_51 && b20_17 && b21_19 && b22_25 && b23_16 && b24_18 && b25_8 && b26_65 && b27_12 && b28_26 && b29_51 && b30_36) {
pattern_id = 1186;
}
if(b19_51 && b20_17 && b21_19 && b22_25 && b23_16 && b24_18 && b25_8 && b26_65 && b27_13 && b28_44 && b29_51 && b30_41) {
pattern_id = 1187;
}
if(b16_47 && b17_36 && b18_11 && b19_48 && b20_31 && b21_2 && b22_10 && b23_23 && b24_28 && b25_13 && b26_65 && b27_26 && b28_26 && b29_20 && b30_18) {
pattern_id = 1188;
}
if(b30_37) {
pattern_id = 1189;
}
if(b29_36 && b30_37) {
pattern_id = 1190;
}
if(b10_13 && b11_13 && b12_17 && b13_18 && b14_1 && b15_22 && b16_24 && b17_24 && b18_3 && b19_25 && b20_1 && b21_3 && b22_30 && b23_2 && b24_35 && b25_38 && b26_42 && b27_22 && b28_49 && b29_35 && b30_43) {
pattern_id = 1191;
}
if(b30_20) {
pattern_id = 1192;
}
if(b21_6 && b22_11 && b23_12 && b24_14 && b25_4 && b26_8 && b27_22 && b28_4 && b29_22 && b30_20) {
pattern_id = 1193;
}
if(b15_28 && b16_3 && b17_30 && b18_23 && b19_11 && b20_37 && b21_6 && b22_11 && b23_12 && b24_14 && b25_4 && b26_8 && b27_22 && b28_4 && b29_22 && b30_20) {
pattern_id = 1194;
}
if(b0_7 && b1_4 && b2_14 && b3_17 && b4_23 && b5_21 && b6_28 && b7_16 && b8_27 && b9_1 && b10_32 && b11_17 && b12_20 && b13_11 && b14_45 && b15_28 && b16_3 && b17_30 && b18_23 && b19_11 && b20_37 && b21_6 && b22_11 && b23_12 && b24_14 && b25_4 && b26_8 && b27_22 && b28_4 && b29_22 && b30_20) {
pattern_id = 1195;
}
if(b20_37 && b21_16 && b22_57 && b23_69 && b24_64 && b25_45 && b26_8 && b27_9 && b28_41 && b29_4 && b30_73) {
pattern_id = 1196;
}
if(b18_23 && b19_23 && b20_29 && b21_30 && b22_6 && b23_2 && b24_35 && b25_30 && b26_26 && b27_22 && b28_48 && b29_10 && b30_7) {
pattern_id = 1197;
}
if(b23_12 && b24_22 && b25_25 && b26_26 && b27_14 && b28_31 && b29_29 && b30_31) {
pattern_id = 1198;
}
if(b27_22 && b28_25 && b29_49 && b30_63) {
pattern_id = 1199;
}
if(b27_22 && b28_10 && b29_10 && b30_49) {
pattern_id = 1200;
}
if(b27_22 && b28_10 && b29_66 && b30_34) {
pattern_id = 1201;
}
if(b25_4 && b26_32 && b27_23 && b28_41 && b29_23 && b30_39) {
pattern_id = 1202;
}
if(b18_23 && b19_40 && b20_65 && b21_6 && b22_30 && b23_67 && b24_12 && b25_59 && b26_50 && b27_45 && b28_41 && b29_38 && b30_57) {
pattern_id = 1203;
}
if(b10_32 && b11_46 && b12_49 && b13_21 && b14_32 && b15_5 && b16_4 && b17_6 && b18_1 && b19_31 && b20_26 && b21_31 && b22_2 && b23_17 && b24_23 && b25_3 && b26_5 && b27_15 && b28_7 && b29_15 && b30_6) {
pattern_id = 1204;
}
if(b27_22 && b28_5 && b29_38 && b30_68) {
pattern_id = 1205;
}
if(b19_11 && b20_25 && b21_58 && b22_52 && b23_33 && b24_53 && b25_30 && b26_67 && b27_58 && b28_4 && b29_38 && b30_34) {
pattern_id = 1206;
}
if(b23_12 && b24_56 && b25_30 && b26_68 && b27_4 && b28_62 && b29_62 && b30_63) {
pattern_id = 1207;
}
if(b22_11 && b23_8 && b24_41 && b25_39 && b26_12 && b27_18 && b28_26 && b29_52 && b30_58) {
pattern_id = 1208;
}
if(b9_1 && b10_1 && b11_1 && b12_1 && b13_1 && b14_1 && b15_1 && b16_2 && b17_2 && b18_3 && b19_3 && b20_5 && b21_5 && b22_9 && b23_10 && b24_12 && b25_1 && b26_10 && b27_14 && b28_11 && b29_9 && b30_10) {
pattern_id = 1209;
}
if(b25_4 && b26_38 && b27_19 && b28_44 && b29_44 && b30_11) {
pattern_id = 1210;
}
if(b23_12 && b24_9 && b25_11 && b26_53 && b27_38 && b28_8 && b29_20 && b30_6) {
pattern_id = 1211;
}
if(b4_23 && b5_28 && b6_34 && b7_10 && b8_3 && b9_19 && b10_38 && b11_22 && b12_14 && b13_35 && b14_28 && b15_21 && b16_19 && b17_13 && b18_5 && b19_30 && b20_19 && b21_7 && b22_41 && b23_8 && b24_10 && b25_5 && b26_36 && b27_8 && b28_53 && b29_39 && b30_25) {
pattern_id = 1212;
}
if(b14_45 && b15_51 && b16_35 && b17_29 && b18_28 && b19_31 && b20_38 && b21_60 && b22_1 && b23_6 && b24_31 && b25_31 && b26_21 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1213;
}
if(b8_27 && b9_41 && b10_38 && b11_1 && b12_41 && b13_4 && b14_22 && b15_57 && b16_21 && b17_8 && b18_19 && b19_3 && b20_19 && b21_32 && b22_46 && b23_12 && b24_8 && b25_22 && b26_63 && b27_19 && b28_40 && b29_12 && b30_47) {
pattern_id = 1214;
}
if(b25_12 && b26_22 && b27_22 && b28_60 && b29_4 && b30_31) {
pattern_id = 1215;
}
if(b29_33 && b30_66) {
pattern_id = 1216;
}
if(b18_6 && b19_22 && b20_11 && b21_32 && b22_3 && b23_3 && b24_3 && b25_3 && b26_3 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1217;
}
if(b16_1 && b17_1 && b18_1 && b19_1 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_3 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1218;
}
if(b25_12 && b26_26 && b27_22 && b28_3 && b29_4 && b30_40) {
pattern_id = 1219;
}
if(b18_6 && b19_54 && b20_53 && b21_33 && b22_30 && b23_10 && b24_63 && b25_23 && b26_48 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1220;
}
if(b8_9 && b9_12 && b10_11 && b11_4 && b12_14 && b13_16 && b14_13 && b15_20 && b16_21 && b17_13 && b18_15 && b19_4 && b20_26 && b21_28 && b22_22 && b23_30 && b24_31 && b25_16 && b26_12 && b27_30 && b28_12 && b29_27 && b30_5) {
pattern_id = 1221;
}
if(b21_16 && b22_1 && b23_6 && b24_5 && b25_16 && b26_12 && b27_42 && b28_12 && b29_12 && b30_25) {
pattern_id = 1222;
}
if(b23_66 && b24_8 && b25_3 && b26_14 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 1223;
}
if(b27_58 && b28_4 && b29_49 && b30_4) {
pattern_id = 1224;
}
if(b27_58 && b28_4 && b29_66 && b30_20) {
pattern_id = 1225;
}
if(b7_30 && b8_33 && b9_24 && b10_34 && b11_32 && b12_12 && b13_41 && b14_12 && b15_32 && b16_25 && b17_32 && b18_44 && b19_41 && b20_27 && b21_50 && b22_57 && b23_57 && b24_7 && b25_42 && b26_44 && b27_58 && b28_31 && b29_6 && b30_62) {
pattern_id = 1226;
}
if(b28_31 && b29_7 && b30_40) {
pattern_id = 1227;
}
if(b9_24 && b10_6 && b11_26 && b12_32 && b13_29 && b14_31 && b15_41 && b16_38 && b17_40 && b18_8 && b19_41 && b20_3 && b21_45 && b22_7 && b23_36 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1228;
}
if(b9_24 && b10_6 && b11_26 && b12_32 && b13_29 && b14_31 && b15_41 && b16_38 && b17_39 && b18_20 && b19_41 && b20_3 && b21_45 && b22_7 && b23_36 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1229;
}
if(b6_17 && b7_14 && b8_19 && b9_23 && b10_22 && b11_23 && b12_31 && b13_28 && b14_30 && b15_39 && b16_36 && b17_38 && b18_39 && b19_29 && b20_27 && b21_38 && b22_50 && b23_20 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1230;
}
if(b6_17 && b7_14 && b8_19 && b9_23 && b10_22 && b11_23 && b12_31 && b13_28 && b14_30 && b15_39 && b16_36 && b17_38 && b18_39 && b19_29 && b20_27 && b21_30 && b22_6 && b23_2 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1231;
}
if(b6_17 && b7_14 && b8_19 && b9_23 && b10_22 && b11_23 && b12_31 && b13_28 && b14_32 && b15_39 && b16_36 && b17_38 && b18_39 && b19_29 && b20_27 && b21_30 && b22_6 && b23_2 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1232;
}
if(b0_4 && b1_6 && b2_10 && b3_8 && b4_13 && b5_15 && b6_18 && b7_18 && b8_20 && b9_4 && b10_23 && b11_27 && b12_33 && b13_30 && b14_30 && b15_42 && b16_38 && b17_41 && b18_8 && b19_7 && b20_3 && b21_23 && b22_50 && b23_24 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1233;
}
if(b6_17 && b7_14 && b8_19 && b9_23 && b10_22 && b11_23 && b12_31 && b13_28 && b14_33 && b15_39 && b16_39 && b17_42 && b18_2 && b19_42 && b20_29 && b21_6 && b22_51 && b23_49 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1234;
}
if(b0_4 && b1_6 && b2_7 && b3_8 && b4_9 && b5_12 && b6_15 && b7_16 && b8_16 && b9_1 && b10_20 && b11_23 && b12_28 && b13_25 && b14_12 && b15_39 && b16_37 && b17_30 && b18_40 && b19_25 && b20_48 && b21_22 && b22_35 && b23_41 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1235;
}
if(b0_4 && b1_6 && b2_7 && b3_8 && b4_9 && b5_12 && b6_15 && b7_16 && b8_16 && b9_1 && b10_20 && b11_23 && b12_28 && b13_25 && b14_12 && b15_39 && b16_33 && b17_14 && b18_8 && b19_40 && b20_46 && b21_6 && b22_48 && b23_33 && b24_8 && b25_43 && b26_57 && b27_3 && b28_20 && b29_45 && b30_2) {
pattern_id = 1236;
}
if(b28_31 && b29_31 && b30_39) {
pattern_id = 1237;
}
if(b24_7 && b25_40 && b26_43 && b27_32 && b28_41 && b29_6 && b30_3) {
pattern_id = 1238;
}
if(b27_58 && b28_21 && b29_66 && b30_70) {
pattern_id = 1239;
}
if(b25_42 && b26_26 && b27_40 && b28_4 && b29_38 && b30_34) {
pattern_id = 1240;
}
if(b28_31 && b29_37 && b30_39) {
pattern_id = 1241;
}
if(b26_44 && b27_46 && b28_43 && b29_35 && b30_4) {
pattern_id = 1242;
}
if(b17_32 && b18_19 && b19_47 && b20_43 && b21_39 && b22_52 && b23_23 && b24_5 && b25_1 && b26_9 && b27_13 && b28_23 && b29_9 && b30_43) {
pattern_id = 1243;
}
if(b12_12 && b13_14 && b14_10 && b15_18 && b16_19 && b17_2 && b18_20 && b19_14 && b20_20 && b21_26 && b22_23 && b23_34 && b24_37 && b25_35 && b26_10 && b27_4 && b28_44 && b29_14 && b30_38) {
pattern_id = 1244;
}
if(b14_12 && b15_10 && b16_11 && b17_21 && b18_21 && b19_20 && b20_28 && b21_3 && b22_28 && b23_5 && b24_38 && b25_36 && b26_39 && b27_27 && b28_38 && b29_9 && b30_26) {
pattern_id = 1245;
}
if(b16_25 && b17_28 && b18_41 && b19_20 && b20_43 && b21_17 && b22_2 && b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 1246;
}
if(b8_33 && b9_15 && b10_18 && b11_28 && b12_8 && b13_42 && b14_28 && b15_49 && b16_24 && b17_44 && b18_30 && b19_13 && b20_26 && b21_7 && b22_15 && b23_6 && b24_31 && b25_31 && b26_21 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1247;
}
if(b15_32 && b16_19 && b17_13 && b18_17 && b19_14 && b20_19 && b21_5 && b22_25 && b23_33 && b24_2 && b25_15 && b26_2 && b27_12 && b28_26 && b29_20 && b30_29) {
pattern_id = 1248;
}
if(b17_32 && b18_28 && b19_20 && b20_20 && b21_2 && b22_16 && b23_6 && b24_32 && b25_41 && b26_12 && b27_30 && b28_50 && b29_11 && b30_32) {
pattern_id = 1249;
}
if(b6_17 && b7_12 && b8_26 && b9_17 && b10_15 && b11_25 && b12_25 && b13_10 && b14_62 && b15_6 && b16_41 && b17_50 && b18_17 && b19_35 && b20_68 && b21_3 && b22_38 && b23_22 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1250;
}
if(b5_8 && b6_14 && b7_40 && b8_23 && b9_29 && b10_18 && b11_28 && b12_47 && b13_18 && b14_14 && b15_33 && b16_42 && b17_8 && b18_37 && b19_66 && b20_11 && b21_37 && b22_32 && b23_3 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1251;
}
if(b13_41 && b14_21 && b15_33 && b16_35 && b17_17 && b18_41 && b19_5 && b20_45 && b21_33 && b22_14 && b23_31 && b24_11 && b25_10 && b26_16 && b27_74 && b28_13 && b29_53 && b30_78) {
pattern_id = 1252;
}
if(b12_12 && b13_16 && b14_10 && b15_29 && b16_26 && b17_13 && b18_17 && b19_48 && b20_35 && b21_2 && b22_16 && b23_51 && b24_5 && b25_50 && b26_76 && b27_3 && b28_37 && b29_30 && b30_78) {
pattern_id = 1253;
}
if(b5_8 && b6_14 && b7_40 && b8_23 && b9_29 && b10_18 && b11_28 && b12_47 && b13_18 && b14_14 && b15_33 && b16_42 && b17_8 && b18_37 && b19_66 && b20_11 && b21_29 && b22_3 && b23_35 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1254;
}
if(b13_41 && b14_21 && b15_33 && b16_35 && b17_17 && b18_41 && b19_5 && b20_45 && b21_33 && b22_14 && b23_31 && b24_11 && b25_10 && b26_16 && b27_74 && b28_13 && b29_21 && b30_12) {
pattern_id = 1255;
}
if(b7_30 && b8_12 && b9_19 && b10_38 && b11_24 && b12_27 && b13_36 && b14_18 && b15_53 && b16_26 && b17_13 && b18_13 && b19_5 && b20_50 && b21_69 && b22_22 && b23_60 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1256;
}
if(b13_41 && b14_21 && b15_33 && b16_35 && b17_17 && b18_41 && b19_5 && b20_45 && b21_33 && b22_14 && b23_31 && b24_11 && b25_10 && b26_16 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1257;
}
if(b6_17 && b7_12 && b8_26 && b9_17 && b10_15 && b11_25 && b12_25 && b13_10 && b14_40 && b15_27 && b16_21 && b17_13 && b18_30 && b19_44 && b20_43 && b21_28 && b22_25 && b23_33 && b24_2 && b25_15 && b26_2 && b27_12 && b28_26 && b29_20 && b30_29) {
pattern_id = 1258;
}
if(b19_41 && b20_26 && b21_36 && b22_2 && b23_7 && b24_2 && b25_10 && b26_65 && b27_9 && b28_67 && b29_50 && b30_5) {
pattern_id = 1259;
}
if(b6_17 && b7_12 && b8_26 && b9_17 && b10_15 && b11_25 && b12_25 && b13_10 && b14_40 && b15_36 && b16_34 && b17_17 && b18_1 && b19_62 && b20_37 && b21_3 && b22_34 && b23_3 && b24_8 && b25_18 && b26_38 && b27_19 && b28_50 && b29_9 && b30_28) {
pattern_id = 1260;
}
if(b2_33 && b3_22 && b4_45 && b5_17 && b6_10 && b7_40 && b8_23 && b9_9 && b10_23 && b11_45 && b12_29 && b13_15 && b14_8 && b15_45 && b16_3 && b17_2 && b18_54 && b19_6 && b20_10 && b21_5 && b22_14 && b23_62 && b24_5 && b25_46 && b26_6 && b27_26 && b28_12 && b29_12 && b30_10) {
pattern_id = 1261;
}
if(b15_32 && b16_19 && b17_13 && b18_17 && b19_14 && b20_19 && b21_5 && b22_25 && b23_36 && b24_42 && b25_36 && b26_12 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1262;
}
if(b15_32 && b16_19 && b17_13 && b18_17 && b19_14 && b20_19 && b21_5 && b22_25 && b23_6 && b24_42 && b25_36 && b26_12 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1263;
}
if(b13_41 && b14_21 && b15_10 && b16_58 && b17_44 && b18_4 && b19_66 && b20_11 && b21_17 && b22_1 && b23_8 && b24_45 && b25_5 && b26_40 && b27_24 && b28_52 && b29_32 && b30_43) {
pattern_id = 1264;
}
if(b5_8 && b6_12 && b7_12 && b8_12 && b9_17 && b10_5 && b11_3 && b12_3 && b13_13 && b14_3 && b15_28 && b16_16 && b17_31 && b18_11 && b19_31 && b20_26 && b21_20 && b22_40 && b23_10 && b24_43 && b25_33 && b26_49 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 1265;
}
if(b27_59 && b28_41 && b29_49 && b30_34) {
pattern_id = 1266;
}
if(b25_45 && b26_22 && b27_25 && b28_41 && b29_38 && b30_34) {
pattern_id = 1267;
}
if(b24_22 && b25_34 && b26_42 && b27_40 && b28_48 && b29_7 && b30_4) {
pattern_id = 1268;
}
if(b23_41 && b24_24 && b25_7 && b26_44 && b27_35 && b28_42 && b29_33 && b30_34) {
pattern_id = 1269;
}
if(b25_45 && b26_22 && b27_66 && b28_48 && b29_48 && b30_80) {
pattern_id = 1270;
}
if(b19_23 && b20_53 && b21_18 && b22_61 && b23_3 && b24_23 && b25_3 && b26_14 && b27_16 && b28_2 && b29_3 && b30_35) {
pattern_id = 1271;
}
if(b7_34 && b8_2 && b9_37 && b10_25 && b11_28 && b12_24 && b13_17 && b14_1 && b15_6 && b16_30 && b17_26 && b18_28 && b19_31 && b20_62 && b21_3 && b22_1 && b23_11 && b24_15 && b25_8 && b26_19 && b27_13 && b28_44 && b29_19 && b30_38) {
pattern_id = 1272;
}
if(b27_40 && b28_48 && b29_42 && b30_9) {
pattern_id = 1273;
}
if(b24_24 && b25_66 && b26_8 && b27_42 && b28_42 && b29_23 && b30_34) {
pattern_id = 1274;
}
if(b17_39 && b18_53 && b19_18 && b20_27 && b21_56 && b22_61 && b23_33 && b24_27 && b25_7 && b26_69 && b27_37 && b28_48 && b29_7 && b30_66) {
pattern_id = 1275;
}
if(b27_40 && b28_63 && b29_66 && b30_9) {
pattern_id = 1276;
}
if(b19_18 && b20_57 && b21_32 && b22_3 && b23_3 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_47 && b30_2) {
pattern_id = 1277;
}
if(b26_22 && b27_15 && b28_17 && b29_15 && b30_8) {
pattern_id = 1278;
}
if(b9_4 && b10_33 && b11_28 && b12_8 && b13_42 && b14_36 && b15_6 && b16_23 && b17_2 && b18_3 && b19_3 && b20_28 && b21_13 && b22_8 && b23_7 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1279;
}
if(b28_6 && b29_6 && b30_4) {
pattern_id = 1280;
}
if(b26_9 && b27_40 && b28_48 && b29_6 && b30_68) {
pattern_id = 1281;
}
if(b27_48 && b28_42 && b29_23 && b30_39) {
pattern_id = 1282;
}
if(b24_62 && b25_55 && b26_23 && b27_42 && b28_66 && b29_38 && b30_72) {
pattern_id = 1283;
}
if(b18_2 && b19_2 && b20_4 && b21_3 && b22_7 && b23_5 && b24_9 && b25_10 && b26_10 && b27_10 && b28_11 && b29_9 && b30_10) {
pattern_id = 1284;
}
if(b26_9 && b27_9 && b28_10 && b29_10 && b30_9) {
pattern_id = 1285;
}
if(b15_4 && b16_26 && b17_44 && b18_41 && b19_5 && b20_43 && b21_43 && b22_27 && b23_28 && b24_10 && b25_47 && b26_39 && b27_19 && b28_38 && b29_15 && b30_8) {
pattern_id = 1286;
}
if(b27_48 && b28_17 && b29_18 && b30_29) {
pattern_id = 1287;
}
if(b23_19 && b24_9 && b25_31 && b26_38 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1288;
}
if(b28_46 && b29_7 && b30_3) {
pattern_id = 1289;
}
if(b27_45 && b28_41 && b29_38 && b30_4) {
pattern_id = 1290;
}
if(b17_11 && b18_8 && b19_2 && b20_11 && b21_15 && b22_22 && b23_24 && b24_25 && b25_30 && b26_32 && b27_29 && b28_37 && b29_28 && b30_35) {
pattern_id = 1291;
}
if(b4_28 && b5_26 && b6_33 && b7_6 && b8_25 && b9_2 && b10_39 && b11_27 && b12_45 && b13_45 && b14_26 && b15_50 && b16_54 && b17_5 && b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_3 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1292;
}
if(b6_45 && b7_34 && b8_16 && b9_2 && b10_19 && b11_2 && b12_53 && b13_44 && b14_58 && b15_24 && b16_69 && b17_61 && b18_18 && b19_19 && b20_34 && b21_44 && b22_41 && b23_31 && b24_10 && b25_10 && b26_11 && b27_10 && b28_44 && b29_1 && b30_22) {
pattern_id = 1293;
}
if(b22_54 && b23_33 && b24_25 && b25_22 && b26_49 && b27_5 && b28_2 && b29_3 && b30_35) {
pattern_id = 1294;
}
if(b25_70 && b26_22 && b27_9 && b28_13 && b29_34 && b30_33) {
pattern_id = 1295;
}
if(b15_26 && b16_9 && b17_60 && b18_5 && b19_36 && b20_51 && b21_37 && b22_22 && b23_24 && b24_25 && b25_30 && b26_32 && b27_29 && b28_37 && b29_28 && b30_35) {
pattern_id = 1296;
}
if(b13_48 && b14_52 && b15_16 && b16_7 && b17_29 && b18_17 && b19_5 && b20_13 && b21_32 && b22_46 && b23_12 && b24_3 && b25_43 && b26_9 && b27_3 && b28_20 && b29_62 && b30_2) {
pattern_id = 1297;
}
if(b17_11 && b18_8 && b19_2 && b20_11 && b21_46 && b22_22 && b23_24 && b24_25 && b25_30 && b26_32 && b27_29 && b28_37 && b29_28 && b30_12) {
pattern_id = 1298;
}
if(b18_46 && b19_18 && b20_44 && b21_25 && b22_35 && b23_44 && b24_43 && b25_34 && b26_26 && b27_9 && b28_42 && b29_7 && b30_31) {
pattern_id = 1299;
}
if(b28_46 && b29_23 && b30_3) {
pattern_id = 1300;
}
if(b23_61 && b24_53 && b25_60 && b26_4 && b27_40 && b28_25 && b29_49 && b30_20) {
pattern_id = 1301;
}
if(b15_26 && b16_27 && b17_27 && b18_27 && b19_18 && b20_35 && b21_33 && b22_11 && b23_10 && b24_7 && b25_40 && b26_43 && b27_32 && b28_41 && b29_6 && b30_3) {
pattern_id = 1302;
}
if(b20_1 && b21_34 && b22_31 && b23_36 && b24_24 && b25_41 && b26_42 && b27_22 && b28_13 && b29_10 && b30_48) {
pattern_id = 1303;
}
if(b24_59 && b25_40 && b26_63 && b27_65 && b28_25 && b29_7 && b30_31) {
pattern_id = 1304;
}
if(b22_54 && b23_44 && b24_22 && b25_74 && b26_67 && b27_25 && b28_25 && b29_22 && b30_43) {
pattern_id = 1305;
}
if(b18_46 && b19_69 && b20_53 && b21_25 && b22_64 && b23_78 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1306;
}
if(b20_1 && b21_4 && b22_2 && b23_7 && b24_7 && b25_8 && b26_7 && b27_8 && b28_1 && b29_9 && b30_8) {
pattern_id = 1307;
}
if(b20_1 && b21_2 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_2) {
pattern_id = 1308;
}
if(b26_45 && b27_6 && b28_2 && b29_1 && b30_6) {
pattern_id = 1309;
}
if(b22_54 && b23_34 && b24_15 && b25_6 && b26_6 && b27_2 && b28_24 && b29_2 && b30_2) {
pattern_id = 1310;
}
if(b27_49 && b28_41 && b29_22 && b30_39) {
pattern_id = 1311;
}
if(b24_4 && b25_34 && b26_8 && b27_59 && b28_32 && b29_28 && b30_28) {
pattern_id = 1312;
}
if(b22_52 && b23_33 && b24_70 && b25_41 && b26_23 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1313;
}
if(b27_49 && b28_41 && b29_49 && b30_63) {
pattern_id = 1314;
}
if(b27_49 && b28_41 && b29_49 && b30_49) {
pattern_id = 1315;
}
if(b26_68 && b27_49 && b28_60 && b29_53 && b30_75) {
pattern_id = 1316;
}
if(b26_68 && b27_9 && b28_48 && b29_66 && b30_28) {
pattern_id = 1317;
}
if(b25_19 && b26_4 && b27_9 && b28_10 && b29_34 && b30_35) {
pattern_id = 1318;
}
if(b14_57 && b15_12 && b16_44 && b17_59 && b18_8 && b19_55 && b20_43 && b21_3 && b22_70 && b23_7 && b24_42 && b25_16 && b26_2 && b27_56 && b28_50 && b29_9 && b30_8) {
pattern_id = 1319;
}
if(b23_24 && b24_18 && b25_16 && b26_39 && b27_10 && b28_30 && b29_28 && b30_38) {
pattern_id = 1320;
}
if(b8_53 && b9_15 && b10_4 && b11_28 && b12_62 && b13_13 && b14_13 && b15_34 && b16_40 && b17_15 && b18_4 && b19_27 && b20_12 && b21_28 && b22_45 && b23_31 && b24_73 && b25_37 && b26_24 && b27_77 && b28_24 && b29_19 && b30_38) {
pattern_id = 1321;
}
if(b2_25 && b3_22 && b4_16 && b5_17 && b6_8 && b7_38 && b8_27 && b9_2 && b10_14 && b11_3 && b12_9 && b13_27 && b14_17 && b15_6 && b16_29 && b17_59 && b18_19 && b19_13 && b20_34 && b21_43 && b22_63 && b23_31 && b24_30 && b25_39 && b26_36 && b27_1 && b28_7 && b29_8 && b30_29) {
pattern_id = 1322;
}
if(b1_22 && b2_12 && b3_4 && b4_20 && b5_4 && b6_46 && b7_16 && b8_4 && b9_2 && b10_14 && b11_3 && b12_57 && b13_37 && b14_25 && b15_45 && b16_54 && b17_5 && b18_7 && b19_62 && b20_34 && b21_29 && b22_34 && b23_22 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1323;
}
if(b20_53 && b21_38 && b22_43 && b23_67 && b24_14 && b25_65 && b26_73 && b27_4 && b28_62 && b29_22 && b30_43) {
pattern_id = 1324;
}
if(b25_54 && b26_43 && b27_59 && b28_41 && b29_56 && b30_4) {
pattern_id = 1325;
}
if(b18_24 && b19_22 && b20_44 && b21_23 && b22_35 && b23_20 && b24_14 && b25_42 && b26_67 && b27_14 && b28_62 && b29_22 && b30_40) {
pattern_id = 1326;
}
if(b25_54 && b26_43 && b27_62 && b28_42 && b29_38 && b30_34) {
pattern_id = 1327;
}
if(b23_2 && b24_35 && b25_7 && b26_32 && b27_32 && b28_46 && b29_42 && b30_44) {
pattern_id = 1328;
}
if(b13_29 && b14_10 && b15_37 && b16_26 && b17_47 && b18_5 && b19_3 && b20_21 && b21_3 && b22_39 && b23_8 && b24_11 && b25_18 && b26_65 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 1329;
}
if(b20_53 && b21_36 && b22_44 && b23_9 && b24_17 && b25_18 && b26_34 && b27_3 && b28_5 && b29_42 && b30_40) {
pattern_id = 1330;
}
if(b18_24 && b19_20 && b20_31 && b21_4 && b22_8 && b23_23 && b24_30 && b25_22 && b26_39 && b27_10 && b28_50 && b29_12 && b30_10) {
pattern_id = 1331;
}
if(b26_70 && b27_14 && b28_42 && b29_23 && b30_4) {
pattern_id = 1332;
}
if(b11_6 && b12_54 && b13_29 && b14_47 && b15_3 && b16_66 && b17_4 && b18_19 && b19_65 && b20_11 && b21_4 && b22_24 && b23_8 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1333;
}
if(b12_17 && b13_49 && b14_43 && b15_41 && b16_7 && b17_64 && b18_41 && b19_4 && b20_69 && b21_31 && b22_24 && b23_28 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1334;
}
if(b21_67 && b22_64 && b23_2 && b24_53 && b25_22 && b26_5 && b27_5 && b28_4 && b29_5 && b30_77) {
pattern_id = 1335;
}
if(b15_46 && b16_60 && b17_42 && b18_20 && b19_10 && b20_15 && b21_10 && b22_20 && b23_75 && b24_20 && b25_39 && b26_52 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1336;
}
if(b26_66 && b27_15 && b28_26 && b29_1 && b30_7) {
pattern_id = 1337;
}
if(b27_25 && b28_42 && b29_40 && b30_3) {
pattern_id = 1338;
}
if(b27_25 && b28_21 && b29_6 && b30_48) {
pattern_id = 1339;
}
if(b26_42 && b27_14 && b28_31 && b29_29 && b30_4) {
pattern_id = 1340;
}
if(b26_42 && b27_14 && b28_46 && b29_4 && b30_9) {
pattern_id = 1341;
}
if(b27_25 && b28_3 && b29_58 && b30_51) {
pattern_id = 1342;
}
if(b22_65 && b23_23 && b24_2 && b25_6 && b26_1 && b27_2 && b28_20 && b29_3 && b30_2) {
pattern_id = 1343;
}
if(b23_49 && b24_15 && b25_15 && b26_7 && b27_18 && b28_26 && b29_15 && b30_10) {
pattern_id = 1344;
}
if(b19_21 && b20_26 && b21_17 && b22_1 && b23_6 && b24_31 && b25_31 && b26_21 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1345;
}
if(b19_21 && b20_26 && b21_20 && b22_15 && b23_31 && b24_3 && b25_2 && b26_7 && b27_13 && b28_23 && b29_9 && b30_26) {
pattern_id = 1346;
}
if(b5_9 && b6_14 && b7_13 && b8_13 && b9_19 && b10_12 && b11_11 && b12_24 && b13_14 && b14_19 && b15_6 && b16_23 && b17_2 && b18_34 && b19_3 && b20_23 && b21_3 && b22_41 && b23_28 && b24_18 && b25_8 && b26_10 && b27_51 && b28_40 && b29_18 && b30_50) {
pattern_id = 1347;
}
if(b16_31 && b17_28 && b18_13 && b19_15 && b20_19 && b21_3 && b22_15 && b23_31 && b24_10 && b25_31 && b26_17 && b27_15 && b28_8 && b29_14 && b30_6) {
pattern_id = 1348;
}
if(b22_48 && b23_27 && b24_35 && b25_34 && b26_8 && b27_35 && b28_31 && b29_57 && b30_4) {
pattern_id = 1349;
}
if(b18_3 && b19_11 && b20_53 && b21_33 && b22_22 && b23_19 && b24_54 && b25_40 && b26_30 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1350;
}
if(b0_3 && b1_4 && b2_5 && b3_5 && b4_5 && b5_7 && b6_11 && b7_11 && b8_11 && b9_3 && b10_17 && b11_17 && b12_9 && b13_13 && b14_8 && b15_31 && b16_25 && b17_10 && b18_33 && b19_30 && b20_9 && b21_28 && b22_39 && b23_14 && b24_10 && b25_26 && b26_49 && b27_18 && b28_12 && b29_12 && b30_25) {
pattern_id = 1351;
}
if(b27_42 && b28_43 && b29_38 && b30_66) {
pattern_id = 1352;
}
if(b13_40 && b14_43 && b15_16 && b16_50 && b17_31 && b18_23 && b19_52 && b20_53 && b21_50 && b22_25 && b23_57 && b24_52 && b25_40 && b26_66 && b27_4 && b28_41 && b29_59 && b30_35) {
pattern_id = 1353;
}
if(b26_30 && b27_47 && b28_31 && b29_10 && b30_40) {
pattern_id = 1354;
}
if(b28_51 && b29_29 && b30_39) {
pattern_id = 1355;
}
if(b26_30 && b27_47 && b28_43 && b29_35 && b30_4) {
pattern_id = 1356;
}
if(b26_30 && b27_47 && b28_43 && b29_35 && b30_38) {
pattern_id = 1357;
}
if(b27_42 && b28_21 && b29_2 && b30_34) {
pattern_id = 1358;
}
if(b27_42 && b28_21 && b29_70 && b30_34) {
pattern_id = 1359;
}
if(b27_42 && b28_3 && b29_46 && b30_4) {
pattern_id = 1360;
}
if(b29_31 && b30_72) {
pattern_id = 1361;
}
if(b21_54 && b22_1 && b23_62 && b24_32 && b25_17 && b26_2 && b27_18 && b28_19 && b29_15 && b30_6) {
pattern_id = 1362;
}
if(b14_46 && b15_21 && b16_29 && b17_26 && b18_28 && b19_16 && b20_26 && b21_44 && b22_2 && b23_10 && b24_51 && b25_18 && b26_21 && b27_12 && b28_7 && b29_16 && b30_22) {
pattern_id = 1363;
}
if(b21_54 && b22_23 && b23_26 && b24_18 && b25_33 && b26_34 && b27_27 && b28_55 && b29_39 && b30_29) {
pattern_id = 1364;
}
if(b23_20 && b24_14 && b25_25 && b26_22 && b27_32 && b28_4 && b29_31 && b30_34) {
pattern_id = 1365;
}
if(b26_43 && b27_4 && b28_31 && b29_29 && b30_4) {
pattern_id = 1366;
}
if(b27_32 && b28_25 && b29_40 && b30_3) {
pattern_id = 1367;
}
if(b22_6 && b23_44 && b24_25 && b25_54 && b26_9 && b27_54 && b28_13 && b29_64 && b30_4) {
pattern_id = 1368;
}
if(b26_43 && b27_7 && b28_51 && b29_38 && b30_63) {
pattern_id = 1369;
}
if(b22_6 && b23_7 && b24_5 && b25_7 && b26_6 && b27_6 && b28_8 && b29_8 && b30_5) {
pattern_id = 1370;
}
if(b15_14 && b16_15 && b17_17 && b18_17 && b19_14 && b20_23 && b21_22 && b22_24 && b23_7 && b24_19 && b25_5 && b26_8 && b27_15 && b28_33 && b29_18 && b30_26) {
pattern_id = 1371;
}
if(b19_50 && b20_13 && b21_2 && b22_10 && b23_9 && b24_21 && b25_64 && b26_14 && b27_2 && b28_20 && b29_3 && b30_2) {
pattern_id = 1372;
}
if(b23_44 && b24_41 && b25_10 && b26_23 && b27_52 && b28_14 && b29_15 && b30_14) {
pattern_id = 1373;
}
if(b24_43 && b25_4 && b26_26 && b27_9 && b28_42 && b29_22 && b30_40) {
pattern_id = 1374;
}
if(b27_23 && b28_4 && b29_40 && b30_31) {
pattern_id = 1375;
}
if(b26_32 && b27_22 && b28_3 && b29_40 && b30_4) {
pattern_id = 1376;
}
if(b8_28 && b9_1 && b10_20 && b11_42 && b12_2 && b13_48 && b14_21 && b15_10 && b16_23 && b17_21 && b18_21 && b19_20 && b20_58 && b21_12 && b22_58 && b23_60 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1377;
}
if(b18_10 && b19_11 && b20_18 && b21_18 && b22_22 && b23_26 && b24_30 && b25_17 && b26_35 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1378;
}
if(b10_30 && b11_17 && b12_32 && b13_46 && b14_8 && b15_60 && b16_4 && b17_10 && b18_19 && b19_8 && b20_7 && b21_20 && b22_14 && b23_28 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1379;
}
if(b24_43 && b25_4 && b26_4 && b27_2 && b28_20 && b29_3 && b30_2) {
pattern_id = 1380;
}
if(b25_38 && b26_44 && b27_35 && b28_12 && b29_11 && b30_26) {
pattern_id = 1381;
}
if(b21_25 && b22_52 && b23_20 && b24_33 && b25_15 && b26_38 && b27_26 && b28_16 && b29_44 && b30_39) {
pattern_id = 1382;
}
if(b8_28 && b9_32 && b10_30 && b11_18 && b12_20 && b13_8 && b14_40 && b15_47 && b16_38 && b17_27 && b18_40 && b19_18 && b20_3 && b21_21 && b22_24 && b23_5 && b24_15 && b25_11 && b26_11 && b27_27 && b28_33 && b29_18 && b30_10) {
pattern_id = 1383;
}
if(b29_66 && b30_48) {
pattern_id = 1384;
}
if(b27_23 && b28_21 && b29_23 && b30_21) {
pattern_id = 1385;
}
if(b27_23 && b28_21 && b29_40 && b30_3) {
pattern_id = 1386;
}
if(b25_38 && b26_23 && b27_37 && b28_48 && b29_35 && b30_28) {
pattern_id = 1387;
}
if(b3_36 && b4_43 && b5_23 && b6_33 && b7_6 && b8_25 && b9_2 && b10_39 && b11_27 && b12_45 && b13_45 && b14_26 && b15_50 && b16_54 && b17_6 && b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_8 && b25_19 && b26_2 && b27_8 && b28_38 && b29_73 && b30_4) {
pattern_id = 1388;
}
if(b24_43 && b25_55 && b26_67 && b27_62 && b28_51 && b29_40 && b30_21) {
pattern_id = 1389;
}
if(b23_54 && b24_54 && b25_54 && b26_33 && b27_42 && b28_3 && b29_46 && b30_4) {
pattern_id = 1390;
}
if(b28_10 && b29_58 && b30_3) {
pattern_id = 1391;
}
if(b28_10 && b29_37 && b30_39) {
pattern_id = 1392;
}
if(b9_33 && b10_25 && b11_8 && b12_38 && b13_23 && b14_21 && b15_27 && b16_23 && b17_3 && b18_5 && b19_40 && b20_43 && b21_17 && b22_23 && b23_34 && b24_30 && b25_5 && b26_34 && b27_3 && b28_21 && b29_20 && b30_4) {
pattern_id = 1393;
}
if(b15_11 && b16_12 && b17_13 && b18_13 && b19_15 && b20_19 && b21_20 && b22_22 && b23_30 && b24_9 && b25_31 && b26_38 && b27_3 && b28_43 && b29_9 && b30_25) {
pattern_id = 1394;
}
if(b20_3 && b21_50 && b22_7 && b23_36 && b24_3 && b25_30 && b26_23 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1395;
}
if(b22_35 && b23_33 && b24_14 && b25_45 && b26_28 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1396;
}
if(b22_35 && b23_33 && b24_14 && b25_45 && b26_69 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1397;
}
if(b25_55 && b26_22 && b27_32 && b28_4 && b29_31 && b30_34) {
pattern_id = 1398;
}
if(b27_35 && b28_41 && b29_40 && b30_3) {
pattern_id = 1399;
}
if(b27_35 && b28_41 && b29_38 && b30_7) {
pattern_id = 1400;
}
if(b22_35 && b23_33 && b24_50 && b25_41 && b26_23 && b27_45 && b28_13 && b29_34 && b30_4) {
pattern_id = 1401;
}
if(b26_26 && b27_48 && b28_14 && b29_35 && b30_12) {
pattern_id = 1402;
}
if(b27_35 && b28_42 && b29_62 && b30_54) {
pattern_id = 1403;
}
if(b28_54 && b29_31 && b30_39) {
pattern_id = 1404;
}
if(b26_26 && b27_42 && b28_43 && b29_4 && b30_7) {
pattern_id = 1405;
}
if(b27_35 && b28_62 && b29_62 && b30_7) {
pattern_id = 1406;
}
if(b26_26 && b27_32 && b28_6 && b29_42 && b30_4) {
pattern_id = 1407;
}
if(b27_35 && b28_62 && b29_38 && b30_63) {
pattern_id = 1408;
}
if(b28_54 && b29_72 && b30_31) {
pattern_id = 1409;
}
if(b27_35 && b28_3 && b29_7 && b30_3) {
pattern_id = 1410;
}
if(b24_54 && b25_5 && b26_52 && b27_27 && b28_26 && b29_50 && b30_6) {
pattern_id = 1411;
}
if(b7_39 && b8_3 && b9_47 && b10_15 && b11_39 && b12_8 && b13_4 && b14_56 && b15_3 && b16_52 && b17_60 && b18_27 && b19_49 && b20_33 && b21_37 && b22_18 && b23_3 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1412;
}
if(b2_18 && b3_23 && b4_4 && b5_22 && b6_34 && b7_25 && b8_37 && b9_24 && b10_12 && b11_32 && b12_41 && b13_42 && b14_28 && b15_27 && b16_19 && b17_35 && b18_5 && b19_49 && b20_7 && b21_7 && b22_13 && b23_47 && b24_15 && b25_8 && b26_34 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1413;
}
if(b20_3 && b21_2 && b22_4 && b23_5 && b24_5 && b25_5 && b26_5 && b27_5 && b28_4 && b29_5 && b30_4) {
pattern_id = 1414;
}
if(b18_40 && b19_11 && b20_29 && b21_33 && b22_22 && b23_19 && b24_54 && b25_40 && b26_30 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1415;
}
if(b24_35 && b25_34 && b26_8 && b27_35 && b28_31 && b29_57 && b30_4) {
pattern_id = 1416;
}
if(b21_18 && b22_27 && b23_12 && b24_54 && b25_42 && b26_68 && b27_2 && b28_20 && b29_3 && b30_2) {
pattern_id = 1417;
}
if(b18_40 && b19_18 && b20_46 && b21_38 && b22_22 && b23_19 && b24_54 && b25_40 && b26_30 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1418;
}
if(b24_35 && b25_54 && b26_32 && b27_29 && b28_20 && b29_28 && b30_12) {
pattern_id = 1419;
}
if(b27_37 && b28_42 && b29_38 && b30_34) {
pattern_id = 1420;
}
if(b22_50 && b23_2 && b24_25 && b25_34 && b26_10 && b27_37 && b28_41 && b29_38 && b30_62) {
pattern_id = 1421;
}
if(b18_40 && b19_50 && b20_29 && b21_33 && b22_22 && b23_19 && b24_54 && b25_40 && b26_30 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1422;
}
if(b27_37 && b28_3 && b29_57 && b30_58) {
pattern_id = 1423;
}
if(b29_40 && b30_3) {
pattern_id = 1424;
}
if(b27_37 && b28_48 && b29_22 && b30_3) {
pattern_id = 1425;
}
if(b25_7 && b26_4 && b27_22 && b28_48 && b29_58 && b30_31) {
pattern_id = 1426;
}
if(b27_37 && b28_48 && b29_10 && b30_7) {
pattern_id = 1427;
}
if(b4_17 && b5_12 && b6_47 && b7_39 && b8_2 && b9_23 && b10_10 && b11_39 && b12_8 && b13_15 && b14_10 && b15_25 && b16_18 && b17_28 && b18_17 && b19_4 && b20_21 && b21_28 && b22_23 && b23_13 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1428;
}
if(b27_37 && b28_48 && b29_10 && b30_71) {
pattern_id = 1429;
}
if(b22_50 && b23_70 && b24_58 && b25_7 && b26_44 && b27_35 && b28_42 && b29_33 && b30_34) {
pattern_id = 1430;
}
if(b25_7 && b26_69 && b27_37 && b28_43 && b29_4 && b30_7) {
pattern_id = 1431;
}
if(b27_37 && b28_49 && b29_40 && b30_3) {
pattern_id = 1432;
}
if(b3_8 && b4_24 && b5_18 && b6_3 && b7_25 && b8_21 && b9_2 && b10_30 && b11_39 && b12_8 && b13_42 && b14_28 && b15_3 && b16_62 && b17_12 && b18_45 && b19_14 && b20_7 && b21_7 && b22_14 && b23_21 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1433;
}
if(b15_42 && b16_26 && b17_26 && b18_43 && b19_14 && b20_23 && b21_32 && b22_46 && b23_12 && b24_8 && b25_22 && b26_12 && b27_42 && b28_27 && b29_25 && b30_5) {
pattern_id = 1434;
}
if(b23_39 && b24_45 && b25_18 && b26_6 && b27_28 && b28_26 && b29_20 && b30_29) {
pattern_id = 1435;
}
if(b5_23 && b6_25 && b7_25 && b8_3 && b9_39 && b10_35 && b11_57 && b12_58 && b13_59 && b14_65 && b15_12 && b16_48 && b17_5 && b18_31 && b19_60 && b20_2 && b21_29 && b22_13 && b23_8 && b24_20 && b25_1 && b26_34 && b27_27 && b28_29 && b29_45 && b30_12) {
pattern_id = 1436;
}
if(b17_14 && b18_28 && b19_32 && b20_7 && b21_28 && b22_5 && b23_23 && b24_2 && b25_17 && b26_36 && b27_1 && b28_62 && b29_9 && b30_6) {
pattern_id = 1437;
}
if(b25_7 && b26_19 && b27_10 && b28_7 && b29_19 && b30_7) {
pattern_id = 1438;
}
if(b0_14 && b1_24 && b2_19 && b3_38 && b4_24 && b5_13 && b6_34 && b7_52 && b8_2 && b9_32 && b10_25 && b11_38 && b12_60 && b13_47 && b14_49 && b15_6 && b16_7 && b17_70 && b18_4 && b19_55 && b20_40 && b21_31 && b22_45 && b23_51 && b24_18 && b25_8 && b26_10 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1439;
}
if(b7_49 && b8_38 && b9_38 && b10_42 && b11_24 && b12_14 && b13_36 && b14_8 && b15_45 && b16_3 && b17_2 && b18_54 && b19_6 && b20_10 && b21_21 && b22_53 && b23_14 && b24_5 && b25_2 && b26_65 && b27_67 && b28_59 && b29_33 && b30_33) {
pattern_id = 1440;
}
if(b12_45 && b13_47 && b14_47 && b15_20 && b16_21 && b17_13 && b18_58 && b19_7 && b20_7 && b21_17 && b22_2 && b23_44 && b24_9 && b25_13 && b26_32 && b27_14 && b28_65 && b29_7 && b30_7) {
pattern_id = 1441;
}
if(b21_58 && b22_27 && b23_64 && b24_61 && b25_33 && b26_1 && b27_18 && b28_8 && b29_8 && b30_45) {
pattern_id = 1442;
}
if(b22_61 && b23_2 && b24_61 && b25_34 && b26_50 && b27_68 && b28_21 && b29_23 && b30_34) {
pattern_id = 1443;
}
if(b15_16 && b16_17 && b17_18 && b18_19 && b19_20 && b20_8 && b21_25 && b22_10 && b23_5 && b24_3 && b25_26 && b26_41 && b27_3 && b28_47 && b29_12 && b30_45) {
pattern_id = 1444;
}
if(b28_48 && b29_10 && b30_49) {
pattern_id = 1445;
}
if(b24_25 && b25_40 && b26_50 && b27_58 && b28_64 && b29_22 && b30_7) {
pattern_id = 1446;
}
if(b26_4 && b27_35 && b28_4 && b29_6 && b30_34) {
pattern_id = 1447;
}
if(b5_12 && b6_12 && b7_32 && b8_26 && b9_21 && b10_44 && b11_24 && b12_36 && b13_10 && b14_52 && b15_33 && b16_29 && b17_28 && b18_15 && b19_15 && b20_19 && b21_20 && b22_69 && b23_10 && b24_7 && b25_50 && b26_53 && b27_30 && b28_22 && b29_9 && b30_26) {
pattern_id = 1448;
}
if(b10_23 && b11_39 && b12_24 && b13_42 && b14_27 && b15_30 && b16_26 && b17_26 && b18_26 && b19_18 && b20_19 && b21_17 && b22_23 && b23_26 && b24_31 && b25_39 && b26_37 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1449;
}
if(b16_36 && b17_26 && b18_21 && b19_20 && b20_9 && b21_9 && b22_1 && b23_6 && b24_18 && b25_29 && b26_31 && b27_22 && b28_36 && b29_35 && b30_54) {
pattern_id = 1450;
}
if(b27_7 && b28_42 && b29_2 && b30_40) {
pattern_id = 1451;
}
if(b20_25 && b21_34 && b22_50 && b23_70 && b24_58 && b25_7 && b26_44 && b27_35 && b28_42 && b29_33 && b30_34) {
pattern_id = 1452;
}
if(b21_56 && b22_7 && b23_41 && b24_14 && b25_30 && b26_22 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1453;
}
if(b27_7 && b28_3 && b29_7 && b30_7) {
pattern_id = 1454;
}
if(b26_73 && b27_37 && b28_41 && b29_42 && b30_4) {
pattern_id = 1455;
}
if(b1_18 && b2_32 && b3_37 && b4_44 && b5_2 && b6_14 && b7_35 && b8_13 && b9_17 && b10_15 && b11_53 && b12_58 && b13_19 && b14_14 && b15_33 && b16_40 && b17_28 && b18_28 && b19_34 && b20_9 && b21_57 && b22_2 && b23_48 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1456;
}
if(b22_31 && b23_39 && b24_24 && b25_55 && b26_68 && b27_14 && b28_3 && b29_38 && b30_4) {
pattern_id = 1457;
}
if(b10_50 && b11_42 && b12_55 && b13_25 && b14_8 && b15_60 && b16_4 && b17_10 && b18_19 && b19_8 && b20_7 && b21_20 && b22_14 && b23_28 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1458;
}
if(b27_7 && b28_3 && b29_42 && b30_4) {
pattern_id = 1459;
}
if(b21_56 && b22_13 && b23_7 && b24_9 && b25_32 && b26_8 && b27_56 && b28_8 && b29_20 && b30_6) {
pattern_id = 1460;
}
if(b11_26 && b12_38 && b13_15 && b14_35 && b15_49 && b16_3 && b17_50 && b18_4 && b19_20 && b20_20 && b21_69 && b22_22 && b23_66 && b24_70 && b25_38 && b26_50 && b27_50 && b28_55 && b29_15 && b30_6) {
pattern_id = 1461;
}
if(b0_6 && b1_8 && b2_11 && b3_13 && b4_18 && b5_21 && b6_24 && b7_25 && b8_26 && b9_17 && b10_53 && b11_4 && b12_48 && b13_16 && b14_21 && b15_48 && b16_28 && b17_17 && b18_5 && b19_50 && b20_42 && b21_4 && b22_9 && b23_9 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1462;
}
if(b1_18 && b2_22 && b3_23 && b4_36 && b5_32 && b6_28 && b7_13 && b8_3 && b9_19 && b10_38 && b11_49 && b12_2 && b13_48 && b14_21 && b15_10 && b16_42 && b17_35 && b18_4 && b19_4 && b20_13 && b21_4 && b22_45 && b23_7 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1463;
}
if(b1_18 && b2_22 && b3_23 && b4_36 && b5_32 && b6_28 && b7_13 && b8_3 && b9_19 && b10_38 && b11_49 && b12_2 && b13_40 && b14_24 && b15_57 && b16_12 && b17_35 && b18_45 && b19_12 && b20_33 && b21_70 && b22_18 && b23_3 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1464;
}
if(b5_31 && b6_9 && b7_25 && b8_21 && b9_9 && b10_32 && b11_47 && b12_8 && b13_42 && b14_28 && b15_62 && b16_7 && b17_41 && b18_58 && b19_13 && b20_28 && b21_4 && b22_2 && b23_7 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1465;
}
if(b6_42 && b7_22 && b8_3 && b9_28 && b10_51 && b11_17 && b12_43 && b13_15 && b14_10 && b15_29 && b16_67 && b17_2 && b18_27 && b19_15 && b20_47 && b21_38 && b22_8 && b23_15 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1466;
}
if(b6_42 && b7_22 && b8_3 && b9_28 && b10_51 && b11_17 && b12_43 && b13_15 && b14_10 && b15_29 && b16_67 && b17_2 && b18_34 && b19_3 && b20_23 && b21_5 && b22_15 && b23_28 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1467;
}
if(b0_6 && b1_8 && b2_11 && b3_13 && b4_18 && b5_21 && b6_24 && b7_25 && b8_26 && b9_17 && b10_53 && b11_4 && b12_1 && b13_15 && b14_19 && b15_43 && b16_19 && b17_2 && b18_47 && b19_31 && b20_7 && b21_60 && b22_63 && b23_48 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1468;
}
if(b8_19 && b9_21 && b10_15 && b11_39 && b12_47 && b13_11 && b14_41 && b15_6 && b16_41 && b17_8 && b18_66 && b19_4 && b20_40 && b21_49 && b22_16 && b23_62 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1469;
}
if(b10_50 && b11_8 && b12_8 && b13_4 && b14_18 && b15_28 && b16_42 && b17_17 && b18_41 && b19_5 && b20_68 && b21_3 && b22_12 && b23_11 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1470;
}
if(b14_16 && b15_25 && b16_26 && b17_26 && b18_26 && b19_11 && b20_8 && b21_2 && b22_16 && b23_6 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1471;
}
if(b1_18 && b2_22 && b3_23 && b4_36 && b5_32 && b6_28 && b7_13 && b8_3 && b9_19 && b10_38 && b11_7 && b12_51 && b13_11 && b14_1 && b15_60 && b16_4 && b17_10 && b18_23 && b19_21 && b20_53 && b21_71 && b22_27 && b23_64 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1472;
}
if(b8_19 && b9_21 && b10_15 && b11_39 && b12_47 && b13_11 && b14_41 && b15_6 && b16_41 && b17_8 && b18_1 && b19_62 && b20_37 && b21_3 && b22_34 && b23_3 && b24_8 && b25_42 && b26_76 && b27_2 && b28_9 && b29_6 && b30_2) {
pattern_id = 1473;
}
if(b5_31 && b6_9 && b7_25 && b8_21 && b9_9 && b10_32 && b11_47 && b12_8 && b13_42 && b14_28 && b15_5 && b16_59 && b17_30 && b18_5 && b19_27 && b20_2 && b21_32 && b22_30 && b23_9 && b24_5 && b25_47 && b26_44 && b27_6 && b28_12 && b29_3 && b30_22) {
pattern_id = 1474;
}
if(b2_10 && b3_4 && b4_24 && b5_18 && b6_36 && b7_16 && b8_43 && b9_29 && b10_18 && b11_28 && b12_9 && b13_44 && b14_45 && b15_3 && b16_22 && b17_6 && b18_1 && b19_18 && b20_29 && b21_23 && b22_35 && b23_77 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1475;
}
if(b0_6 && b1_8 && b2_11 && b3_13 && b4_18 && b5_21 && b6_24 && b7_25 && b8_26 && b9_17 && b10_5 && b11_19 && b12_20 && b13_13 && b14_38 && b15_23 && b16_16 && b17_31 && b18_19 && b19_20 && b20_28 && b21_7 && b22_12 && b23_9 && b24_9 && b25_20 && b26_10 && b27_42 && b28_42 && b29_66 && b30_4) {
pattern_id = 1476;
}
if(b7_31 && b8_17 && b9_29 && b10_36 && b11_35 && b12_20 && b13_39 && b14_14 && b15_33 && b16_35 && b17_10 && b18_31 && b19_11 && b20_11 && b21_29 && b22_3 && b23_17 && b24_61 && b25_31 && b26_55 && b27_13 && b28_23 && b29_25 && b30_11) {
pattern_id = 1477;
}
if(b4_33 && b5_29 && b6_10 && b7_21 && b8_7 && b9_1 && b10_47 && b11_24 && b12_27 && b13_36 && b14_8 && b15_45 && b16_3 && b17_2 && b18_54 && b19_6 && b20_10 && b21_56 && b22_13 && b23_7 && b24_9 && b25_47 && b26_37 && b27_27 && b28_44 && b29_11 && b30_22) {
pattern_id = 1478;
}
if(b5_31 && b6_9 && b7_25 && b8_21 && b9_9 && b10_32 && b11_47 && b12_8 && b13_42 && b14_28 && b15_5 && b16_59 && b17_30 && b18_5 && b19_27 && b20_2 && b21_32 && b22_71 && b23_23 && b24_5 && b25_8 && b26_53 && b27_11 && b28_26 && b29_18 && b30_10) {
pattern_id = 1479;
}
if(b2_10 && b3_4 && b4_24 && b5_18 && b6_36 && b7_16 && b8_43 && b9_29 && b10_18 && b11_28 && b12_9 && b13_44 && b14_45 && b15_3 && b16_22 && b17_6 && b18_1 && b19_38 && b20_26 && b21_28 && b22_14 && b23_27 && b24_47 && b25_8 && b26_2 && b27_70 && b28_8 && b29_14 && b30_6) {
pattern_id = 1480;
}
if(b17_27 && b18_30 && b19_14 && b20_23 && b21_35 && b22_11 && b23_51 && b24_18 && b25_39 && b26_19 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1481;
}
if(b16_33 && b17_3 && b18_4 && b19_31 && b20_45 && b21_6 && b22_45 && b23_7 && b24_2 && b25_10 && b26_5 && b27_5 && b28_4 && b29_5 && b30_4) {
pattern_id = 1482;
}
if(b8_19 && b9_21 && b10_15 && b11_39 && b12_47 && b13_11 && b14_41 && b15_6 && b16_41 && b17_8 && b18_1 && b19_62 && b20_37 && b21_32 && b22_22 && b23_68 && b24_35 && b25_42 && b26_26 && b27_4 && b28_10 && b29_38 && b30_30) {
pattern_id = 1483;
}
if(b1_18 && b2_22 && b3_23 && b4_36 && b5_32 && b6_28 && b7_13 && b8_3 && b9_19 && b10_38 && b11_7 && b12_51 && b13_11 && b14_8 && b15_3 && b16_52 && b17_8 && b18_17 && b19_13 && b20_55 && b21_28 && b22_23 && b23_47 && b24_19 && b25_5 && b26_17 && b27_29 && b28_37 && b29_28 && b30_12) {
pattern_id = 1484;
}
if(b0_6 && b1_8 && b2_11 && b3_13 && b4_18 && b5_21 && b6_24 && b7_25 && b8_26 && b9_17 && b10_5 && b11_19 && b12_20 && b13_6 && b14_1 && b15_46 && b16_21 && b17_45 && b18_21 && b19_1 && b20_34 && b21_29 && b22_18 && b23_35 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1485;
}
if(b2_10 && b3_4 && b4_24 && b5_18 && b6_36 && b7_16 && b8_43 && b9_29 && b10_18 && b11_28 && b12_9 && b13_44 && b14_45 && b15_5 && b16_7 && b17_31 && b18_19 && b19_38 && b20_23 && b21_31 && b22_13 && b23_5 && b24_28 && b25_10 && b26_10 && b27_65 && b28_42 && b29_38 && b30_31) {
pattern_id = 1486;
}
if(b1_18 && b2_22 && b3_23 && b4_36 && b5_32 && b6_28 && b7_13 && b8_3 && b9_19 && b10_38 && b11_7 && b12_51 && b13_11 && b14_8 && b15_3 && b16_27 && b17_38 && b18_63 && b19_63 && b20_37 && b21_34 && b22_29 && b23_37 && b24_8 && b25_43 && b26_9 && b27_2 && b28_65 && b29_7 && b30_51) {
pattern_id = 1487;
}
if(b7_31 && b8_17 && b9_29 && b10_36 && b11_35 && b12_20 && b13_39 && b14_14 && b15_33 && b16_35 && b17_10 && b18_31 && b19_11 && b20_10 && b21_3 && b22_59 && b23_14 && b24_31 && b25_15 && b26_15 && b27_18 && b28_26 && b29_27 && b30_5) {
pattern_id = 1488;
}
if(b8_19 && b9_21 && b10_15 && b11_39 && b12_47 && b13_11 && b14_41 && b15_6 && b16_41 && b17_8 && b18_1 && b19_62 && b20_37 && b21_32 && b22_22 && b23_39 && b24_24 && b25_66 && b26_5 && b27_33 && b28_6 && b29_5 && b30_35) {
pattern_id = 1489;
}
if(b9_46 && b10_4 && b11_24 && b12_36 && b13_10 && b14_45 && b15_48 && b16_26 && b17_13 && b18_17 && b19_10 && b20_32 && b21_6 && b22_20 && b23_10 && b24_56 && b25_2 && b26_7 && b27_8 && b28_7 && b29_51 && b30_6) {
pattern_id = 1490;
}
if(b3_39 && b4_16 && b5_19 && b6_12 && b7_41 && b8_27 && b9_30 && b10_15 && b11_25 && b12_25 && b13_6 && b14_48 && b15_28 && b16_16 && b17_2 && b18_56 && b19_15 && b20_19 && b21_63 && b22_2 && b23_6 && b24_47 && b25_42 && b26_39 && b27_13 && b28_8 && b29_20 && b30_6) {
pattern_id = 1491;
}
if(b2_10 && b3_4 && b4_24 && b5_18 && b6_36 && b7_16 && b8_43 && b9_29 && b10_18 && b11_28 && b12_9 && b13_44 && b14_45 && b15_5 && b16_7 && b17_63 && b18_28 && b19_32 && b20_40 && b21_4 && b22_10 && b23_26 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1492;
}
if(b4_33 && b5_29 && b6_10 && b7_21 && b8_7 && b9_1 && b10_47 && b11_24 && b12_27 && b13_36 && b14_8 && b15_45 && b16_3 && b17_10 && b18_5 && b19_12 && b20_9 && b21_4 && b22_33 && b23_9 && b24_1 && b25_5 && b26_24 && b27_1 && b28_52 && b29_15 && b30_45) {
pattern_id = 1493;
}
if(b7_31 && b8_17 && b9_29 && b10_36 && b11_35 && b12_20 && b13_39 && b14_14 && b15_33 && b16_35 && b17_10 && b18_31 && b19_11 && b20_10 && b21_3 && b22_68 && b23_3 && b24_23 && b25_1 && b26_8 && b27_56 && b28_8 && b29_20 && b30_6) {
pattern_id = 1494;
}
if(b14_16 && b15_25 && b16_26 && b17_26 && b18_26 && b19_11 && b20_8 && b21_2 && b22_16 && b23_6 && b24_8 && b25_9 && b26_8 && b27_2 && b28_42 && b29_6 && b30_44) {
pattern_id = 1495;
}
if(b19_54 && b20_9 && b21_2 && b22_10 && b23_31 && b24_13 && b25_51 && b26_12 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1496;
}
if(b20_36 && b21_23 && b22_35 && b23_39 && b24_12 && b25_40 && b26_43 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1497;
}
if(b27_62 && b28_54 && b29_62 && b30_70) {
pattern_id = 1498;
}
if(b17_51 && b18_4 && b19_31 && b20_9 && b21_41 && b22_23 && b23_31 && b24_27 && b25_25 && b26_7 && b27_28 && b28_11 && b29_9 && b30_8) {
pattern_id = 1499;
}
if(b11_34 && b12_41 && b13_17 && b14_15 && b15_20 && b16_26 && b17_2 && b18_40 && b19_14 && b20_23 && b21_41 && b22_1 && b23_15 && b24_3 && b25_59 && b26_53 && b27_38 && b28_55 && b29_9 && b30_8) {
pattern_id = 1500;
}
if(b23_4 && b24_4 && b25_4 && b26_4 && b27_4 && b28_3 && b29_4 && b30_3) {
pattern_id = 1501;
}
if(b25_63 && b26_67 && b27_32 && b28_43 && b29_4 && b30_7) {
pattern_id = 1502;
}
if(b21_61 && b22_35 && b23_12 && b24_19 && b25_1 && b26_12 && b27_38 && b28_55 && b29_25 && b30_17) {
pattern_id = 1503;
}
if(b21_61 && b22_1 && b23_28 && b24_45 && b25_18 && b26_21 && b27_56 && b28_48 && b29_15 && b30_10) {
pattern_id = 1504;
}
if(b13_61 && b14_14 && b15_34 && b16_71 && b17_44 && b18_17 && b19_7 && b20_26 && b21_28 && b22_4 && b23_66 && b24_15 && b25_6 && b26_21 && b27_12 && b28_12 && b29_8 && b30_17) {
pattern_id = 1505;
}
if(b7_8 && b8_3 && b9_11 && b10_10 && b11_5 && b12_13 && b13_15 && b14_11 && b15_19 && b16_20 && b17_20 && b18_6 && b19_22 && b20_27 && b21_27 && b22_8 && b23_9 && b24_38 && b25_9 && b26_17 && b27_44 && b28_30 && b29_44 && b30_5) {
pattern_id = 1506;
}
if(b15_17 && b16_18 && b17_19 && b18_17 && b19_16 && b20_25 && b21_19 && b22_22 && b23_27 && b24_3 && b25_4 && b26_10 && b27_32 && b28_8 && b29_11 && b30_46) {
pattern_id = 1507;
}
if(b23_4 && b24_31 && b25_39 && b26_45 && b27_19 && b28_38 && b29_9 && b30_30) {
pattern_id = 1508;
}
if(b22_5 && b23_6 && b24_6 && b25_6 && b26_6 && b27_3 && b28_5 && b29_1 && b30_5) {
pattern_id = 1509;
}
if(b15_8 && b16_50 && b17_32 && b18_44 && b19_41 && b20_27 && b21_50 && b22_57 && b23_57 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1510;
}
if(b16_65 && b17_48 && b18_2 && b19_3 && b20_23 && b21_26 && b22_1 && b23_34 && b24_30 && b25_5 && b26_34 && b27_55 && b28_6 && b29_15 && b30_8) {
pattern_id = 1511;
}
if(b27_66 && b28_31 && b29_37 && b30_39) {
pattern_id = 1512;
}
if(b24_63 && b25_34 && b26_72 && b27_58 && b28_64 && b29_47 && b30_12) {
pattern_id = 1513;
}
if(b27_66 && b28_51 && b29_29 && b30_39) {
pattern_id = 1514;
}
if(b27_66 && b28_48 && b29_23 && b30_39) {
pattern_id = 1515;
}
if(b12_6 && b13_7 && b14_7 && b15_8 && b16_8 && b17_9 && b18_7 && b19_9 && b20_15 && b21_13 && b22_21 && b23_22 && b24_23 && b25_3 && b26_5 && b27_33 && b28_34 && b29_5 && b30_10) {
pattern_id = 1516;
}
if(b27_54 && b28_51 && b29_40 && b30_21) {
pattern_id = 1517;
}
if(b16_53 && b17_49 && b18_55 && b19_5 && b20_7 && b21_61 && b22_56 && b23_60 && b24_60 && b25_63 && b26_26 && b27_18 && b28_12 && b29_37 && b30_19) {
pattern_id = 1518;
}
if(b18_68 && b19_8 && b20_7 && b21_7 && b22_13 && b23_8 && b24_13 && b25_39 && b26_49 && b27_21 && b28_30 && b29_3 && b30_60) {
pattern_id = 1519;
}
if(b25_56 && b26_14 && b27_16 && b28_2 && b29_3 && b30_43) {
pattern_id = 1520;
}
if(b16_38 && b17_30 && b18_14 && b19_5 && b20_50 && b21_50 && b22_9 && b23_9 && b24_2 && b25_11 && b26_12 && b27_7 && b28_17 && b29_25 && b30_33) {
pattern_id = 1521;
}
if(b16_38 && b17_18 && b18_51 && b19_49 && b20_35 && b21_30 && b22_37 && b23_58 && b24_17 && b25_18 && b26_24 && b27_12 && b28_26 && b29_8 && b30_60) {
pattern_id = 1522;
}
if(b27_53 && b28_54 && b29_49 && b30_39) {
pattern_id = 1523;
}
if(b22_43 && b23_8 && b24_15 && b25_39 && b26_64 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1524;
}
if(b23_46 && b24_47 && b25_17 && b26_64 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1525;
}
if(b5_16 && b6_13 && b7_21 && b8_13 && b9_27 && b10_25 && b11_28 && b12_8 && b13_33 && b14_27 && b15_2 && b16_19 && b17_12 && b18_11 && b19_15 && b20_19 && b21_20 && b22_43 && b23_8 && b24_13 && b25_8 && b26_19 && b27_1 && b28_33 && b29_44 && b30_56) {
pattern_id = 1526;
}
if(b20_7 && b21_3 && b22_24 && b23_10 && b24_10 && b25_22 && b26_34 && b27_3 && b28_8 && b29_35 && b30_36) {
pattern_id = 1527;
}
if(b14_24 && b15_13 && b16_53 && b17_49 && b18_62 && b19_8 && b20_7 && b21_61 && b22_59 && b23_74 && b24_61 && b25_45 && b26_73 && b27_61 && b28_21 && b29_2 && b30_29) {
pattern_id = 1528;
}
if(b15_12 && b16_13 && b17_15 && b18_15 && b19_14 && b20_21 && b21_20 && b22_9 && b23_23 && b24_33 && b25_20 && b26_39 && b27_38 && b28_44 && b29_15 && b30_42) {
pattern_id = 1529;
}
if(b25_47 && b26_24 && b27_10 && b28_27 && b29_11 && b30_75) {
pattern_id = 1530;
}
if(b23_9 && b24_10 && b25_10 && b26_11 && b27_11 && b28_12 && b29_11 && b30_5) {
pattern_id = 1531;
}
if(b11_16 && b12_35 && b13_24 && b14_52 && b15_40 && b16_26 && b17_13 && b18_17 && b19_21 && b20_38 && b21_7 && b22_2 && b23_7 && b24_2 && b25_5 && b26_17 && b27_2 && b28_20 && b29_48 && b30_2) {
pattern_id = 1532;
}
if(b9_12 && b10_21 && b11_12 && b12_9 && b13_44 && b14_45 && b15_5 && b16_3 && b17_34 && b18_15 && b19_18 && b20_47 && b21_5 && b22_14 && b23_34 && b24_2 && b25_47 && b26_39 && b27_22 && b28_11 && b29_50 && b30_33) {
pattern_id = 1533;
}
if(b16_21 && b17_44 && b18_32 && b19_10 && b20_32 && b21_6 && b22_20 && b23_12 && b24_30 && b25_17 && b26_45 && b27_19 && b28_33 && b29_9 && b30_33) {
pattern_id = 1534;
}
if(b9_12 && b10_21 && b11_12 && b12_9 && b13_44 && b14_45 && b15_5 && b16_42 && b17_28 && b18_21 && b19_39 && b20_7 && b21_49 && b22_53 && b23_13 && b24_18 && b25_1 && b26_36 && b27_19 && b28_50 && b29_9 && b30_43) {
pattern_id = 1535;
}
if(b26_7 && b27_26 && b28_26 && b29_26 && b30_5) {
pattern_id = 1536;
}
if(b20_7 && b21_9 && b22_15 && b23_16 && b24_18 && b25_22 && b26_19 && b27_13 && b28_28 && b29_19 && b30_27) {
pattern_id = 1537;
}
if(b16_21 && b17_35 && b18_45 && b19_45 && b20_30 && b21_31 && b22_16 && b23_28 && b24_5 && b25_8 && b26_7 && b27_13 && b28_44 && b29_11 && b30_22) {
pattern_id = 1538;
}
if(b21_4 && b22_8 && b23_15 && b24_27 && b25_1 && b26_2 && b27_57 && b28_17 && b29_14 && b30_5) {
pattern_id = 1539;
}
if(b16_21 && b17_35 && b18_45 && b19_45 && b20_20 && b21_4 && b22_24 && b23_46 && b24_10 && b25_31 && b26_39 && b27_57 && b28_33 && b29_20 && b30_22) {
pattern_id = 1540;
}
if(b18_21 && b19_32 && b20_40 && b21_40 && b22_2 && b23_9 && b24_39 && b25_56 && b26_6 && b27_15 && b28_26 && b29_26 && b30_22) {
pattern_id = 1541;
}
if(b21_4 && b22_8 && b23_15 && b24_27 && b25_10 && b26_7 && b27_50 && b28_23 && b29_9 && b30_22) {
pattern_id = 1542;
}
if(b22_1 && b23_15 && b24_17 && b25_56 && b26_51 && b27_13 && b28_8 && b29_16 && b30_22) {
pattern_id = 1543;
}
if(b20_7 && b21_9 && b22_8 && b23_50 && b24_5 && b25_10 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1544;
}
if(b26_7 && b27_26 && b28_38 && b29_9 && b30_8) {
pattern_id = 1545;
}
if(b17_19 && b18_45 && b19_5 && b20_43 && b21_28 && b22_22 && b23_26 && b24_13 && b25_10 && b26_7 && b27_50 && b28_12 && b29_1 && b30_5) {
pattern_id = 1546;
}
if(b20_7 && b21_9 && b22_2 && b23_7 && b24_9 && b25_22 && b26_19 && b27_19 && b28_55 && b29_25 && b30_5) {
pattern_id = 1547;
}
if(b21_4 && b22_8 && b23_6 && b24_18 && b25_8 && b26_10 && b27_57 && b28_40 && b29_9 && b30_8) {
pattern_id = 1548;
}
if(b19_12 && b20_19 && b21_5 && b22_15 && b23_26 && b24_30 && b25_31 && b26_36 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1549;
}
if(b16_21 && b17_12 && b18_11 && b19_32 && b20_38 && b21_17 && b22_1 && b23_6 && b24_31 && b25_31 && b26_21 && b27_29 && b28_40 && b29_27 && b30_16) {
pattern_id = 1550;
}
if(b7_32 && b8_24 && b9_39 && b10_31 && b11_22 && b12_14 && b13_35 && b14_28 && b15_21 && b16_19 && b17_13 && b18_33 && b19_28 && b20_45 && b21_42 && b22_13 && b23_31 && b24_38 && b25_1 && b26_37 && b27_15 && b28_11 && b29_32 && b30_42) {
pattern_id = 1551;
}
if(b2_26 && b3_32 && b4_39 && b5_4 && b6_35 && b7_7 && b8_4 && b9_18 && b10_33 && b11_7 && b12_53 && b13_9 && b14_1 && b15_45 && b16_1 && b17_10 && b18_34 && b19_44 && b20_22 && b21_18 && b22_2 && b23_34 && b24_31 && b25_39 && b26_37 && b27_2 && b28_24 && b29_33 && b30_2) {
pattern_id = 1552;
}
if(b17_19 && b18_17 && b19_5 && b20_7 && b21_17 && b22_9 && b23_13 && b24_18 && b25_39 && b26_19 && b27_2 && b28_24 && b29_33 && b30_2) {
pattern_id = 1553;
}
if(b16_21 && b17_52 && b18_17 && b19_35 && b20_26 && b21_28 && b22_15 && b23_1 && b24_18 && b25_17 && b26_50 && b27_17 && b28_8 && b29_61 && b30_22) {
pattern_id = 1554;
}
if(b14_24 && b15_51 && b16_35 && b17_28 && b18_35 && b19_13 && b20_23 && b21_2 && b22_12 && b23_7 && b24_2 && b25_17 && b26_50 && b27_52 && b28_26 && b29_25 && b30_5) {
pattern_id = 1555;
}
if(b23_11 && b24_13 && b25_15 && b26_15 && b27_12 && b28_7 && b29_15 && b30_8) {
pattern_id = 1556;
}
if(b17_4 && b18_4 && b19_5 && b20_7 && b21_4 && b22_8 && b23_13 && b24_15 && b25_1 && b26_19 && b27_12 && b28_7 && b29_20 && b30_5) {
pattern_id = 1557;
}
if(b17_4 && b18_19 && b19_20 && b20_10 && b21_10 && b22_3 && b23_17 && b24_39 && b25_18 && b26_21 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1558;
}
if(b7_35 && b8_10 && b9_15 && b10_48 && b11_1 && b12_8 && b13_35 && b14_36 && b15_6 && b16_30 && b17_13 && b18_21 && b19_8 && b20_43 && b21_29 && b22_26 && b23_49 && b24_15 && b25_15 && b26_7 && b27_18 && b28_26 && b29_15 && b30_10) {
pattern_id = 1559;
}
if(b8_22 && b9_11 && b10_37 && b11_30 && b12_1 && b13_15 && b14_24 && b15_37 && b16_26 && b17_26 && b18_41 && b19_12 && b20_42 && b21_2 && b22_34 && b23_32 && b24_54 && b25_5 && b26_64 && b27_15 && b28_8 && b29_1 && b30_32) {
pattern_id = 1560;
}
if(b26_24 && b27_18 && b28_40 && b29_11 && b30_43) {
pattern_id = 1561;
}
if(b23_8 && b24_13 && b25_16 && b26_12 && b27_30 && b28_19 && b29_18 && b30_8) {
pattern_id = 1562;
}
if(b27_24 && b28_12 && b29_11 && b30_4) {
pattern_id = 1563;
}
if(b27_24 && b28_19 && b29_28 && b30_38) {
pattern_id = 1564;
}
if(b14_5 && b15_2 && b16_21 && b17_26 && b18_30 && b19_14 && b20_20 && b21_3 && b22_26 && b23_10 && b24_8 && b25_43 && b26_3 && b27_3 && b28_20 && b29_32 && b30_2) {
pattern_id = 1565;
}
if(b20_30 && b21_8 && b22_14 && b23_8 && b24_37 && b25_11 && b26_17 && b27_10 && b28_27 && b29_50 && b30_22) {
pattern_id = 1566;
}
if(b25_15 && b26_39 && b27_13 && b28_8 && b29_20 && b30_6) {
pattern_id = 1567;
}
if(b24_10 && b25_51 && b26_34 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1568;
}
if(b22_28 && b23_13 && b24_30 && b25_9 && b26_3 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1569;
}
if(b21_17 && b22_4 && b23_26 && b24_27 && b25_8 && b26_2 && b27_10 && b28_38 && b29_1 && b30_32) {
pattern_id = 1570;
}
if(b21_17 && b22_23 && b23_13 && b24_38 && b25_47 && b26_21 && b27_12 && b28_42 && b29_44 && b30_43) {
pattern_id = 1571;
}
if(b19_38 && b20_26 && b21_36 && b22_16 && b23_7 && b24_10 && b25_10 && b26_50 && b27_12 && b28_12 && b29_11 && b30_11) {
pattern_id = 1572;
}
if(b22_28 && b23_5 && b24_2 && b25_39 && b26_12 && b27_24 && b28_38 && b29_9 && b30_26) {
pattern_id = 1573;
}
if(b6_29 && b7_12 && b8_26 && b9_19 && b10_15 && b11_14 && b12_25 && b13_15 && b14_36 && b15_55 && b16_7 && b17_8 && b18_19 && b19_8 && b20_43 && b21_15 && b22_47 && b23_9 && b24_5 && b25_5 && b26_5 && b27_5 && b28_4 && b29_5 && b30_4) {
pattern_id = 1574;
}
if(b20_30 && b21_31 && b22_16 && b23_31 && b24_18 && b25_15 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1575;
}
if(b19_38 && b20_26 && b21_36 && b22_2 && b23_7 && b24_2 && b25_10 && b26_19 && b27_61 && b28_11 && b29_9 && b30_43) {
pattern_id = 1576;
}
if(b20_30 && b21_31 && b22_16 && b23_16 && b24_18 && b25_8 && b26_19 && b27_2 && b28_20 && b29_48 && b30_2) {
pattern_id = 1577;
}
if(b25_15 && b26_17 && b27_27 && b28_12 && b29_11 && b30_5) {
pattern_id = 1578;
}
if(b16_29 && b17_26 && b18_4 && b19_12 && b20_20 && b21_2 && b22_22 && b23_26 && b24_13 && b25_10 && b26_7 && b27_50 && b28_12 && b29_1 && b30_5) {
pattern_id = 1579;
}
if(b19_38 && b20_23 && b21_2 && b22_1 && b23_6 && b24_18 && b25_22 && b26_19 && b27_19 && b28_55 && b29_25 && b30_5) {
pattern_id = 1580;
}
if(b24_10 && b25_1 && b26_19 && b27_61 && b28_11 && b29_9 && b30_43) {
pattern_id = 1581;
}
if(b11_14 && b12_25 && b13_43 && b14_37 && b15_10 && b16_51 && b17_8 && b18_11 && b19_30 && b20_20 && b21_57 && b22_13 && b23_6 && b24_13 && b25_8 && b26_19 && b27_53 && b28_23 && b29_15 && b30_29) {
pattern_id = 1582;
}
if(b0_11 && b1_16 && b2_23 && b3_4 && b4_31 && b5_29 && b6_30 && b7_19 && b8_21 && b9_26 && b10_11 && b11_21 && b12_22 && b13_4 && b14_50 && b15_25 && b16_51 && b17_4 && b18_19 && b19_20 && b20_28 && b21_2 && b22_49 && b23_29 && b24_15 && b25_36 && b26_53 && b27_26 && b28_12 && b29_11 && b30_5) {
pattern_id = 1583;
}
if(b23_8 && b24_42 && b25_26 && b26_12 && b27_15 && b28_52 && b29_15 && b30_42) {
pattern_id = 1584;
}
if(b23_8 && b24_8 && b25_9 && b26_8 && b27_3 && b28_9 && b29_6 && b30_2) {
pattern_id = 1585;
}
if(b25_17 && b26_18 && b27_5 && b28_1 && b29_17 && b30_15) {
pattern_id = 1586;
}
if(b25_17 && b26_7 && b27_12 && b28_7 && b29_1 && b30_43) {
pattern_id = 1587;
}
if(b20_28 && b21_4 && b22_2 && b23_9 && b24_11 && b25_5 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1588;
}
if(b19_34 && b20_7 && b21_5 && b22_1 && b23_29 && b24_15 && b25_1 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1589;
}
if(b23_26 && b24_13 && b25_10 && b26_7 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1590;
}
if(b4_25 && b5_27 && b6_4 && b7_19 && b8_3 && b9_17 && b10_25 && b11_22 && b12_22 && b13_22 && b14_37 && b15_21 && b16_11 && b17_12 && b18_28 && b19_31 && b20_20 && b21_43 && b22_23 && b23_8 && b24_19 && b25_57 && b26_39 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1591;
}
if(b21_43 && b22_24 && b23_9 && b24_27 && b25_10 && b26_7 && b27_50 && b28_23 && b29_9 && b30_22) {
pattern_id = 1592;
}
if(b17_34 && b18_42 && b19_12 && b20_57 && b21_5 && b22_1 && b23_11 && b24_17 && b25_5 && b26_36 && b27_28 && b28_12 && b29_14 && b30_5) {
pattern_id = 1593;
}
if(b5_11 && b6_27 && b7_29 && b8_17 && b9_42 && b10_37 && b11_11 && b12_44 && b13_17 && b14_22 && b15_33 && b16_26 && b17_43 && b18_28 && b19_33 && b20_34 && b21_39 && b22_14 && b23_51 && b24_31 && b25_39 && b26_50 && b27_26 && b28_7 && b29_18 && b30_26) {
pattern_id = 1594;
}
if(b7_19 && b8_22 && b9_36 && b10_4 && b11_18 && b12_41 && b13_31 && b14_29 && b15_43 && b16_12 && b17_13 && b18_4 && b19_45 && b20_26 && b21_20 && b22_18 && b23_7 && b24_2 && b25_17 && b26_50 && b27_26 && b28_7 && b29_18 && b30_26) {
pattern_id = 1595;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_14 && b7_36 && b8_36 && b9_11 && b10_21 && b11_25 && b12_8 && b13_28 && b14_27 && b15_33 && b16_21 && b17_12 && b18_30 && b19_35 && b20_26 && b21_5 && b22_18 && b23_7 && b24_2 && b25_17 && b26_50 && b27_26 && b28_7 && b29_18 && b30_26) {
pattern_id = 1596;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_17 && b8_23 && b9_26 && b10_44 && b11_22 && b12_8 && b13_4 && b14_37 && b15_37 && b16_12 && b17_37 && b18_34 && b19_26 && b20_28 && b21_41 && b22_33 && b23_30 && b24_18 && b25_8 && b26_12 && b27_30 && b28_52 && b29_9 && b30_22) {
pattern_id = 1597;
}
if(b4_25 && b5_27 && b6_21 && b7_22 && b8_39 && b9_28 && b10_15 && b11_14 && b12_25 && b13_14 && b14_29 && b15_21 && b16_26 && b17_26 && b18_35 && b19_34 && b20_38 && b21_44 && b22_33 && b23_18 && b24_9 && b25_5 && b26_52 && b27_18 && b28_26 && b29_51 && b30_17) {
pattern_id = 1598;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_35 && b14_36 && b15_37 && b16_38 && b17_50 && b18_12 && b19_3 && b20_5 && b21_19 && b22_14 && b23_26 && b24_27 && b25_15 && b26_2 && b27_26 && b28_27 && b29_27 && b30_10) {
pattern_id = 1599;
}
if(b2_20 && b3_25 && b4_4 && b5_29 && b6_4 && b7_21 && b8_3 && b9_39 && b10_10 && b11_16 && b12_25 && b13_37 && b14_24 && b15_37 && b16_23 && b17_43 && b18_11 && b19_31 && b20_38 && b21_31 && b22_10 && b23_23 && b24_5 && b25_13 && b26_50 && b27_24 && b28_1 && b29_18 && b30_8) {
pattern_id = 1600;
}
if(b2_20 && b3_25 && b4_4 && b5_29 && b6_4 && b7_21 && b8_3 && b9_39 && b10_10 && b11_16 && b12_25 && b13_37 && b14_24 && b15_37 && b16_23 && b17_43 && b18_11 && b19_31 && b20_38 && b21_31 && b22_10 && b23_23 && b24_5 && b25_13 && b26_50 && b27_12 && b28_12 && b29_11 && b30_5) {
pattern_id = 1601;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_35 && b14_36 && b15_37 && b16_38 && b17_12 && b18_12 && b19_15 && b20_26 && b21_28 && b22_15 && b23_6 && b24_42 && b25_56 && b26_21 && b27_24 && b28_1 && b29_18 && b30_8) {
pattern_id = 1602;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_24 && b13_24 && b14_36 && b15_44 && b16_34 && b17_26 && b18_19 && b19_3 && b20_23 && b21_41 && b22_2 && b23_53 && b24_27 && b25_39 && b26_53 && b27_38 && b28_55 && b29_9 && b30_8) {
pattern_id = 1603;
}
if(b3_9 && b4_32 && b5_24 && b6_9 && b7_18 && b8_21 && b9_29 && b10_27 && b11_14 && b12_24 && b13_36 && b14_50 && b15_12 && b16_23 && b17_34 && b18_35 && b19_13 && b20_23 && b21_41 && b22_23 && b23_34 && b24_31 && b25_10 && b26_41 && b27_53 && b28_17 && b29_18 && b30_46) {
pattern_id = 1604;
}
if(b5_11 && b6_27 && b7_29 && b8_17 && b9_42 && b10_36 && b11_24 && b12_29 && b13_27 && b14_24 && b15_29 && b16_54 && b17_19 && b18_45 && b19_5 && b20_43 && b21_28 && b22_43 && b23_29 && b24_9 && b25_18 && b26_2 && b27_15 && b28_26 && b29_11 && b30_17) {
pattern_id = 1605;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_24 && b13_17 && b14_28 && b15_6 && b16_30 && b17_43 && b18_11 && b19_31 && b20_38 && b21_31 && b22_10 && b23_23 && b24_5 && b25_13 && b26_50 && b27_24 && b28_1 && b29_18 && b30_8) {
pattern_id = 1606;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_24 && b13_17 && b14_28 && b15_6 && b16_30 && b17_43 && b18_11 && b19_31 && b20_38 && b21_31 && b22_10 && b23_23 && b24_5 && b25_13 && b26_50 && b27_12 && b28_12 && b29_11 && b30_5) {
pattern_id = 1607;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_35 && b14_19 && b15_29 && b16_26 && b17_26 && b18_35 && b19_13 && b20_23 && b21_41 && b22_23 && b23_34 && b24_31 && b25_10 && b26_41 && b27_53 && b28_17 && b29_18 && b30_46) {
pattern_id = 1608;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_24 && b13_17 && b14_28 && b15_6 && b16_30 && b17_43 && b18_30 && b19_15 && b20_20 && b21_2 && b22_43 && b23_29 && b24_9 && b25_18 && b26_2 && b27_15 && b28_26 && b29_11 && b30_17) {
pattern_id = 1609;
}
if(b2_20 && b3_25 && b4_4 && b5_29 && b6_4 && b7_21 && b8_3 && b9_39 && b10_10 && b11_16 && b12_25 && b13_37 && b14_5 && b15_12 && b16_41 && b17_15 && b18_4 && b19_32 && b20_57 && b21_7 && b22_2 && b23_9 && b24_5 && b25_18 && b26_36 && b27_18 && b28_26 && b29_14 && b30_22) {
pattern_id = 1610;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_14 && b13_16 && b14_13 && b15_20 && b16_26 && b17_13 && b18_17 && b19_45 && b20_26 && b21_36 && b22_43 && b23_34 && b24_18 && b25_36 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 1611;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_14 && b13_16 && b14_13 && b15_20 && b16_26 && b17_13 && b18_17 && b19_45 && b20_26 && b21_36 && b22_43 && b23_34 && b24_18 && b25_36 && b26_36 && b27_13 && b28_38 && b29_9 && b30_22) {
pattern_id = 1612;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_27 && b14_21 && b15_20 && b16_34 && b17_19 && b18_12 && b19_14 && b20_57 && b21_31 && b22_8 && b23_26 && b24_27 && b25_52 && b26_7 && b27_26 && b28_27 && b29_9 && b30_22) {
pattern_id = 1613;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_35 && b13_15 && b14_29 && b15_21 && b16_41 && b17_17 && b18_35 && b19_38 && b20_26 && b21_9 && b22_41 && b23_13 && b24_2 && b25_56 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 1614;
}
if(b2_20 && b3_25 && b4_4 && b5_29 && b6_4 && b7_21 && b8_3 && b9_39 && b10_10 && b11_16 && b12_25 && b13_37 && b14_36 && b15_27 && b16_19 && b17_12 && b18_35 && b19_38 && b20_26 && b21_9 && b22_41 && b23_13 && b24_2 && b25_56 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 1615;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_35 && b13_4 && b14_21 && b15_19 && b16_38 && b17_50 && b18_12 && b19_3 && b20_5 && b21_19 && b22_14 && b23_26 && b24_27 && b25_15 && b26_2 && b27_26 && b28_27 && b29_27 && b30_10) {
pattern_id = 1616;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_35 && b13_4 && b14_21 && b15_19 && b16_38 && b17_21 && b18_43 && b19_15 && b20_43 && b21_26 && b22_43 && b23_34 && b24_18 && b25_36 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 1617;
}
if(b6_16 && b7_35 && b8_40 && b9_21 && b10_26 && b11_39 && b12_8 && b13_26 && b14_5 && b15_12 && b16_35 && b17_9 && b18_15 && b19_31 && b20_26 && b21_19 && b22_43 && b23_29 && b24_9 && b25_18 && b26_2 && b27_15 && b28_26 && b29_11 && b30_17) {
pattern_id = 1618;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_24 && b14_35 && b15_10 && b16_34 && b17_43 && b18_11 && b19_31 && b20_38 && b21_31 && b22_10 && b23_23 && b24_5 && b25_13 && b26_50 && b27_24 && b28_1 && b29_18 && b30_8) {
pattern_id = 1619;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_24 && b14_35 && b15_10 && b16_34 && b17_43 && b18_11 && b19_31 && b20_38 && b21_31 && b22_10 && b23_23 && b24_5 && b25_13 && b26_50 && b27_12 && b28_12 && b29_11 && b30_5) {
pattern_id = 1620;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_35 && b13_4 && b14_21 && b15_19 && b16_38 && b17_12 && b18_12 && b19_15 && b20_26 && b21_28 && b22_15 && b23_6 && b24_42 && b25_56 && b26_21 && b27_24 && b28_1 && b29_18 && b30_8) {
pattern_id = 1621;
}
if(b2_20 && b3_25 && b4_4 && b5_29 && b6_4 && b7_21 && b8_3 && b9_39 && b10_10 && b11_16 && b12_25 && b13_37 && b14_36 && b15_27 && b16_19 && b17_12 && b18_35 && b19_13 && b20_23 && b21_41 && b22_23 && b23_34 && b24_31 && b25_10 && b26_41 && b27_53 && b28_17 && b29_18 && b30_46) {
pattern_id = 1622;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_24 && b14_35 && b15_10 && b16_34 && b17_43 && b18_30 && b19_15 && b20_20 && b21_2 && b22_43 && b23_29 && b24_9 && b25_18 && b26_2 && b27_15 && b28_26 && b29_11 && b30_17) {
pattern_id = 1623;
}
if(b8_35 && b9_38 && b10_16 && b11_8 && b12_34 && b13_4 && b14_14 && b15_19 && b16_29 && b17_19 && b18_17 && b19_26 && b20_43 && b21_46 && b22_14 && b23_8 && b24_41 && b25_10 && b26_12 && b27_53 && b28_19 && b29_44 && b30_25) {
pattern_id = 1624;
}
if(b2_20 && b3_25 && b4_4 && b5_29 && b6_4 && b7_21 && b8_3 && b9_39 && b10_10 && b11_16 && b12_25 && b13_37 && b14_13 && b15_12 && b16_58 && b17_17 && b18_35 && b19_38 && b20_26 && b21_9 && b22_41 && b23_13 && b24_2 && b25_56 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 1625;
}
if(b3_9 && b4_32 && b5_24 && b6_9 && b7_18 && b8_21 && b9_29 && b10_27 && b11_14 && b12_24 && b13_36 && b14_50 && b15_19 && b16_51 && b17_26 && b18_13 && b19_14 && b20_57 && b21_42 && b22_1 && b23_28 && b24_5 && b25_5 && b26_17 && b27_53 && b28_23 && b29_15 && b30_29) {
pattern_id = 1626;
}
if(b3_9 && b4_32 && b5_24 && b6_9 && b7_18 && b8_21 && b9_29 && b10_27 && b11_14 && b12_24 && b13_36 && b14_50 && b15_19 && b16_51 && b17_26 && b18_13 && b19_14 && b20_57 && b21_7 && b22_2 && b23_9 && b24_5 && b25_18 && b26_36 && b27_18 && b28_26 && b29_14 && b30_22) {
pattern_id = 1627;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_36 && b13_15 && b14_41 && b15_21 && b16_20 && b17_8 && b18_4 && b19_31 && b20_57 && b21_7 && b22_2 && b23_9 && b24_5 && b25_18 && b26_36 && b27_18 && b28_26 && b29_14 && b30_22) {
pattern_id = 1628;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_42 && b13_4 && b14_14 && b15_43 && b16_19 && b17_15 && b18_21 && b19_5 && b20_43 && b21_40 && b22_4 && b23_9 && b24_19 && b25_10 && b26_12 && b27_15 && b28_19 && b29_9 && b30_36) {
pattern_id = 1629;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_36 && b13_15 && b14_2 && b15_18 && b16_21 && b17_8 && b18_35 && b19_15 && b20_42 && b21_19 && b22_23 && b23_34 && b24_5 && b25_56 && b26_52 && b27_6 && b28_8 && b29_14 && b30_18) {
pattern_id = 1630;
}
if(b4_25 && b5_27 && b6_21 && b7_22 && b8_39 && b9_28 && b10_15 && b11_15 && b12_14 && b13_35 && b14_28 && b15_55 && b16_20 && b17_17 && b18_41 && b19_34 && b20_57 && b21_31 && b22_8 && b23_26 && b24_27 && b25_52 && b26_7 && b27_26 && b28_27 && b29_9 && b30_22) {
pattern_id = 1631;
}
if(b8_35 && b9_38 && b10_16 && b11_8 && b12_34 && b13_4 && b14_14 && b15_19 && b16_29 && b17_19 && b18_17 && b19_26 && b20_9 && b21_2 && b22_2 && b23_46 && b24_10 && b25_31 && b26_39 && b27_57 && b28_33 && b29_20 && b30_22) {
pattern_id = 1632;
}
if(b3_9 && b4_32 && b5_24 && b6_9 && b7_18 && b8_21 && b9_29 && b10_27 && b11_14 && b12_24 && b13_36 && b14_50 && b15_25 && b16_26 && b17_8 && b18_35 && b19_32 && b20_26 && b21_17 && b22_1 && b23_15 && b24_27 && b25_2 && b26_39 && b27_19 && b28_15 && b29_15 && b30_8) {
pattern_id = 1633;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_38 && b13_26 && b14_14 && b15_18 && b16_12 && b17_37 && b18_36 && b19_45 && b20_19 && b21_2 && b22_42 && b23_46 && b24_38 && b25_47 && b26_36 && b27_18 && b28_8 && b29_8 && b30_22) {
pattern_id = 1634;
}
if(b0_9 && b1_14 && b2_21 && b3_4 && b4_30 && b5_18 && b6_10 && b7_20 && b8_18 && b9_12 && b10_38 && b11_44 && b12_38 && b13_23 && b14_22 && b15_29 && b16_29 && b17_29 && b18_35 && b19_8 && b20_31 && b21_41 && b22_14 && b23_47 && b24_27 && b25_51 && b26_7 && b27_8 && b28_38 && b29_9 && b30_8) {
pattern_id = 1635;
}
if(b1_13 && b2_19 && b3_24 && b4_16 && b5_16 && b6_12 && b7_25 && b8_24 && b9_25 && b10_25 && b11_28 && b12_34 && b13_4 && b14_41 && b15_29 && b16_54 && b17_15 && b18_37 && b19_14 && b20_30 && b21_51 && b22_43 && b23_26 && b24_30 && b25_16 && b26_50 && b27_18 && b28_8 && b29_52 && b30_6) {
pattern_id = 1636;
}
if(b22_47 && b23_7 && b24_19 && b25_15 && b26_17 && b27_13 && b28_55 && b29_9 && b30_4) {
pattern_id = 1637;
}
if(b15_37 && b16_26 && b17_3 && b18_47 && b19_31 && b20_38 && b21_19 && b22_2 && b23_23 && b24_15 && b25_39 && b26_40 && b27_2 && b28_20 && b29_48 && b30_2) {
pattern_id = 1638;
}
if(b27_12 && b28_26 && b29_44 && b30_43) {
pattern_id = 1639;
}
if(b24_30 && b25_18 && b26_12 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1640;
}
if(b24_30 && b25_39 && b26_36 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1641;
}
if(b25_17 && b26_2 && b27_39 && b28_8 && b29_52 && b30_6) {
pattern_id = 1642;
}
if(b19_34 && b20_26 && b21_17 && b22_2 && b23_5 && b24_30 && b25_5 && b26_6 && b27_1 && b28_55 && b29_11 && b30_8) {
pattern_id = 1643;
}
if(b12_35 && b13_16 && b14_5 && b15_51 && b16_11 && b17_17 && b18_41 && b19_5 && b20_34 && b21_43 && b22_23 && b23_13 && b24_13 && b25_18 && b26_21 && b27_2 && b28_20 && b29_48 && b30_2) {
pattern_id = 1644;
}
if(b13_24 && b14_21 && b15_18 && b16_51 && b17_21 && b18_4 && b19_20 && b20_20 && b21_57 && b22_8 && b23_5 && b24_10 && b25_47 && b26_19 && b27_13 && b28_7 && b29_20 && b30_43) {
pattern_id = 1645;
}
if(b18_15 && b19_3 && b20_17 && b21_36 && b22_8 && b23_5 && b24_13 && b25_17 && b26_25 && b27_24 && b28_7 && b29_20 && b30_36) {
pattern_id = 1646;
}
if(b19_34 && b20_26 && b21_26 && b22_16 && b23_15 && b24_15 && b25_47 && b26_34 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1647;
}
if(b21_43 && b22_10 && b23_5 && b24_47 && b25_22 && b26_19 && b27_19 && b28_55 && b29_25 && b30_5) {
pattern_id = 1648;
}
if(b13_15 && b14_5 && b15_2 && b16_19 && b17_2 && b18_1 && b19_27 && b20_15 && b21_32 && b22_22 && b23_38 && b24_3 && b25_27 && b26_10 && b27_2 && b28_20 && b29_32 && b30_2) {
pattern_id = 1649;
}
if(b15_6 && b16_29 && b17_29 && b18_28 && b19_4 && b20_10 && b21_29 && b22_34 && b23_17 && b24_40 && b25_22 && b26_27 && b27_2 && b28_20 && b29_32 && b30_2) {
pattern_id = 1650;
}
if(b6_10 && b7_10 && b8_10 && b9_15 && b10_12 && b11_14 && b12_19 && b13_19 && b14_14 && b15_27 && b16_29 && b17_28 && b18_11 && b19_10 && b20_2 && b21_6 && b22_20 && b23_40 && b24_41 && b25_18 && b26_19 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1651;
}
if(b10_15 && b11_15 && b12_22 && b13_20 && b14_18 && b15_29 && b16_19 && b17_10 && b18_31 && b19_11 && b20_10 && b21_3 && b22_1 && b23_43 && b24_29 && b25_44 && b26_49 && b27_50 && b28_26 && b29_20 && b30_28) {
pattern_id = 1652;
}
if(b25_5 && b26_17 && b27_15 && b28_7 && b29_8 && b30_4) {
pattern_id = 1653;
}
if(b5_19 && b6_3 && b7_32 && b8_10 && b9_44 && b10_44 && b11_37 && b12_27 && b13_27 && b14_28 && b15_21 && b16_19 && b17_13 && b18_61 && b19_13 && b20_62 && b21_4 && b22_40 && b23_8 && b24_67 && b25_20 && b26_71 && b27_27 && b28_69 && b29_8 && b30_74) {
pattern_id = 1654;
}
if(b23_7 && b24_48 && b25_5 && b26_52 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1655;
}
if(b27_27 && b28_18 && b29_50 && b30_10) {
pattern_id = 1656;
}
if(b18_4 && b19_28 && b20_13 && b21_36 && b22_22 && b23_8 && b24_42 && b25_26 && b26_12 && b27_15 && b28_52 && b29_15 && b30_42) {
pattern_id = 1657;
}
if(b15_30 && b16_21 && b17_15 && b18_4 && b19_24 && b20_26 && b21_31 && b22_60 && b23_18 && b24_10 && b25_31 && b26_38 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1658;
}
if(b19_44 && b20_7 && b21_7 && b22_2 && b23_26 && b24_30 && b25_31 && b26_36 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1659;
}
if(b25_2 && b26_11 && b27_24 && b28_22 && b29_9 && b30_10) {
pattern_id = 1660;
}
if(b18_34 && b19_15 && b20_40 && b21_2 && b22_43 && b23_13 && b24_13 && b25_39 && b26_7 && b27_56 && b28_8 && b29_8 && b30_57) {
pattern_id = 1661;
}
if(b22_33 && b23_23 && b24_17 && b25_5 && b26_21 && b27_19 && b28_33 && b29_9 && b30_43) {
pattern_id = 1662;
}
if(b6_19 && b7_2 && b8_10 && b9_29 && b10_18 && b11_16 && b12_13 && b13_15 && b14_63 && b15_4 && b16_51 && b17_13 && b18_4 && b19_31 && b20_7 && b21_9 && b22_57 && b23_7 && b24_9 && b25_5 && b26_38 && b27_10 && b28_44 && b29_61 && b30_57) {
pattern_id = 1663;
}
if(b14_29 && b15_21 && b16_28 && b17_17 && b18_41 && b19_12 && b20_42 && b21_2 && b22_26 && b23_9 && b24_5 && b25_31 && b26_38 && b27_1 && b28_28 && b29_18 && b30_8) {
pattern_id = 1664;
}
if(b14_29 && b15_21 && b16_28 && b17_17 && b18_41 && b19_12 && b20_42 && b21_2 && b22_26 && b23_28 && b24_31 && b25_10 && b26_12 && b27_1 && b28_28 && b29_18 && b30_8) {
pattern_id = 1665;
}
if(b21_44 && b22_15 && b23_15 && b24_18 && b25_29 && b26_31 && b27_22 && b28_36 && b29_34 && b30_28) {
pattern_id = 1666;
}
if(b16_40 && b17_28 && b18_12 && b19_30 && b20_42 && b21_15 && b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1667;
}
if(b14_29 && b15_10 && b16_30 && b17_52 && b18_32 && b19_45 && b20_28 && b21_2 && b22_2 && b23_9 && b24_31 && b25_16 && b26_36 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1668;
}
if(b10_44 && b11_5 && b12_36 && b13_38 && b14_13 && b15_37 && b16_12 && b17_3 && b18_11 && b19_32 && b20_7 && b21_49 && b22_18 && b23_29 && b24_45 && b25_36 && b26_60 && b27_52 && b28_26 && b29_44 && b30_43) {
pattern_id = 1669;
}
if(b25_2 && b26_17 && b27_13 && b28_19 && b29_18 && b30_17) {
pattern_id = 1670;
}
if(b16_40 && b17_26 && b18_28 && b19_8 && b20_22 && b21_64 && b22_34 && b23_3 && b24_53 && b25_31 && b26_38 && b27_27 && b28_30 && b29_28 && b30_75) {
pattern_id = 1671;
}
if(b24_28 && b25_10 && b26_6 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1672;
}
if(b24_28 && b25_10 && b26_6 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1673;
}
if(b24_28 && b25_10 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1674;
}
if(b23_30 && b24_41 && b25_16 && b26_39 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1675;
}
if(b25_11 && b26_23 && b27_15 && b28_12 && b29_26 && b30_5) {
pattern_id = 1676;
}
if(b16_42 && b17_19 && b18_17 && b19_14 && b20_34 && b21_19 && b22_9 && b23_29 && b24_8 && b25_9 && b26_9 && b27_2 && b28_26 && b29_44 && b30_43) {
pattern_id = 1677;
}
if(b15_48 && b16_21 && b17_8 && b18_4 && b19_26 && b20_13 && b21_8 && b22_12 && b23_17 && b24_36 && b25_28 && b26_5 && b27_15 && b28_8 && b29_19 && b30_43) {
pattern_id = 1678;
}
if(b20_8 && b21_2 && b22_13 && b23_14 && b24_2 && b25_17 && b26_16 && b27_27 && b28_26 && b29_11 && b30_13) {
pattern_id = 1679;
}
if(b22_45 && b23_7 && b24_5 && b25_15 && b26_39 && b27_13 && b28_8 && b29_20 && b30_6) {
pattern_id = 1680;
}
if(b14_41 && b15_10 && b16_19 && b17_50 && b18_45 && b19_14 && b20_5 && b21_7 && b22_14 && b23_34 && b24_10 && b25_31 && b26_21 && b27_18 && b28_8 && b29_20 && b30_6) {
pattern_id = 1681;
}
if(b25_11 && b26_17 && b27_19 && b28_44 && b29_11 && b30_4) {
pattern_id = 1682;
}
if(b22_45 && b23_28 && b24_5 && b25_1 && b26_12 && b27_19 && b28_17 && b29_14 && b30_32) {
pattern_id = 1683;
}
if(b26_16 && b27_19 && b28_18 && b29_3 && b30_8) {
pattern_id = 1684;
}
if(b27_6 && b28_26 && b29_3 && b30_12) {
pattern_id = 1685;
}
if(b27_6 && b28_7 && b29_1 && b30_6) {
pattern_id = 1686;
}
if(b24_45 && b25_31 && b26_36 && b27_18 && b28_26 && b29_44 && b30_43) {
pattern_id = 1687;
}
if(b9_31 && b10_38 && b11_28 && b12_29 && b13_52 && b14_26 && b15_38 && b16_44 && b17_36 && b18_25 && b19_12 && b20_30 && b21_13 && b22_16 && b23_7 && b24_5 && b25_18 && b26_1 && b27_1 && b28_52 && b29_15 && b30_45) {
pattern_id = 1688;
}
if(b8_44 && b9_17 && b10_38 && b11_15 && b12_9 && b13_44 && b14_45 && b15_3 && b16_22 && b17_7 && b18_5 && b19_27 && b20_39 && b21_32 && b22_38 && b23_18 && b24_41 && b25_1 && b26_7 && b27_1 && b28_50 && b29_15 && b30_67) {
pattern_id = 1689;
}
if(b21_8 && b22_2 && b23_6 && b24_47 && b25_29 && b26_31 && b27_22 && b28_36 && b29_34 && b30_28) {
pattern_id = 1690;
}
if(b23_50 && b24_5 && b25_10 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1691;
}
if(b19_15 && b20_18 && b21_19 && b22_63 && b23_78 && b24_18 && b25_16 && b26_2 && b27_56 && b28_50 && b29_9 && b30_8) {
pattern_id = 1692;
}
if(b23_23 && b24_10 && b25_51 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1693;
}
if(b26_11 && b27_6 && b28_12 && b29_26 && b30_5) {
pattern_id = 1694;
}
if(b13_14 && b14_13 && b15_48 && b16_7 && b17_3 && b18_12 && b19_38 && b20_22 && b21_52 && b22_1 && b23_16 && b24_13 && b25_1 && b26_52 && b27_15 && b28_26 && b29_50 && b30_6) {
pattern_id = 1695;
}
if(b22_15 && b23_31 && b24_30 && b25_5 && b26_1 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1696;
}
if(b12_15 && b13_42 && b14_27 && b15_29 && b16_21 && b17_35 && b18_45 && b19_36 && b20_5 && b21_19 && b22_45 && b23_34 && b24_13 && b25_17 && b26_12 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1697;
}
if(b11_22 && b12_29 && b13_10 && b14_23 && b15_2 && b16_19 && b17_48 && b18_19 && b19_16 && b20_34 && b21_17 && b22_23 && b23_13 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1698;
}
if(b26_11 && b27_28 && b28_38 && b29_39 && b30_14) {
pattern_id = 1699;
}
if(b30_59) {
pattern_id = 1700;
}
if(b15_54 && b16_21 && b17_45 && b18_21 && b19_16 && b20_30 && b21_28 && b22_15 && b23_29 && b24_5 && b25_29 && b26_31 && b27_22 && b28_36 && b29_34 && b30_28) {
pattern_id = 1701;
}
if(b25_20 && b26_11 && b27_26 && b28_23 && b29_27 && b30_5) {
pattern_id = 1702;
}
if(b28_23 && b29_13 && b30_19) {
pattern_id = 1703;
}
if(b24_17 && b25_21 && b26_13 && b27_19 && b28_19 && b29_1 && b30_25) {
pattern_id = 1704;
}
if(b16_28 && b17_34 && b18_35 && b19_32 && b20_38 && b21_39 && b22_10 && b23_9 && b24_9 && b25_13 && b26_50 && b27_28 && b28_12 && b29_11 && b30_32) {
pattern_id = 1705;
}
if(b19_32 && b20_21 && b21_7 && b22_2 && b23_34 && b24_18 && b25_47 && b26_38 && b27_2 && b28_20 && b29_30 && b30_2) {
pattern_id = 1706;
}
if(b20_40 && b21_41 && b22_24 && b23_18 && b24_31 && b25_39 && b26_52 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1707;
}
if(b26_39 && b27_13 && b28_40 && b29_11 && b30_11) {
pattern_id = 1708;
}
if(b22_8 && b23_5 && b24_11 && b25_11 && b26_12 && b27_12 && b28_13 && b29_12 && b30_10) {
pattern_id = 1709;
}
if(b20_40 && b21_31 && b22_45 && b23_51 && b24_18 && b25_17 && b26_71 && b27_18 && b28_17 && b29_39 && b30_5) {
pattern_id = 1710;
}
if(b16_28 && b17_28 && b18_13 && b19_15 && b20_19 && b21_3 && b22_15 && b23_31 && b24_10 && b25_31 && b26_17 && b27_15 && b28_8 && b29_14 && b30_6) {
pattern_id = 1711;
}
if(b24_17 && b25_31 && b26_37 && b27_13 && b28_44 && b29_41 && b30_12) {
pattern_id = 1712;
}
if(b18_45 && b19_3 && b20_8 && b21_41 && b22_16 && b23_29 && b24_15 && b25_1 && b26_19 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1713;
}
if(b22_8 && b23_5 && b24_11 && b25_18 && b26_21 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1714;
}
if(b17_35 && b18_28 && b19_33 && b20_38 && b21_36 && b22_20 && b23_22 && b24_14 && b25_29 && b26_10 && b27_15 && b28_7 && b29_15 && b30_6) {
pattern_id = 1715;
}
if(b25_16 && b26_17 && b27_17 && b28_17 && b29_3 && b30_14) {
pattern_id = 1716;
}
if(b24_17 && b25_1 && b26_61 && b27_33 && b28_2 && b29_59 && b30_25) {
pattern_id = 1717;
}
if(b23_13 && b24_13 && b25_15 && b26_43 && b27_19 && b28_33 && b29_9 && b30_43) {
pattern_id = 1718;
}
if(b10_16 && b11_16 && b12_15 && b13_17 && b14_1 && b15_30 && b16_30 && b17_28 && b18_32 && b19_10 && b20_32 && b21_6 && b22_20 && b23_10 && b24_8 && b25_43 && b26_3 && b27_3 && b28_39 && b29_6 && b30_2) {
pattern_id = 1719;
}
if(b6_21 && b7_32 && b8_13 && b9_11 && b10_38 && b11_5 && b12_9 && b13_44 && b14_45 && b15_5 && b16_19 && b17_12 && b18_30 && b19_56 && b20_28 && b21_41 && b22_45 && b23_23 && b24_19 && b25_16 && b26_12 && b27_1 && b28_52 && b29_15 && b30_45) {
pattern_id = 1720;
}
if(b23_13 && b24_13 && b25_1 && b26_16 && b27_13 && b28_44 && b29_9 && b30_43) {
pattern_id = 1721;
}
if(b8_40 && b9_20 && b10_4 && b11_45 && b12_38 && b13_37 && b14_13 && b15_37 && b16_22 && b17_9 && b18_30 && b19_34 && b20_26 && b21_40 && b22_28 && b23_5 && b24_30 && b25_5 && b26_50 && b27_8 && b28_26 && b29_71 && b30_5) {
pattern_id = 1722;
}
if(b8_40 && b9_20 && b10_4 && b11_45 && b12_38 && b13_37 && b14_13 && b15_37 && b16_22 && b17_9 && b18_43 && b19_12 && b20_40 && b21_41 && b22_47 && b23_9 && b24_5 && b25_5 && b26_50 && b27_56 && b28_8 && b29_15 && b30_45) {
pattern_id = 1723;
}
if(b2_21 && b3_9 && b4_16 && b5_6 && b6_9 && b7_28 && b8_17 && b9_20 && b10_37 && b11_18 && b12_24 && b13_24 && b14_13 && b15_21 && b16_41 && b17_9 && b18_30 && b19_34 && b20_26 && b21_40 && b22_28 && b23_5 && b24_30 && b25_5 && b26_50 && b27_8 && b28_26 && b29_71 && b30_5) {
pattern_id = 1724;
}
if(b24_38 && b25_31 && b26_55 && b27_13 && b28_23 && b29_25 && b30_11) {
pattern_id = 1725;
}
if(b12_13 && b13_20 && b14_24 && b15_18 && b16_29 && b17_28 && b18_14 && b19_20 && b20_20 && b21_15 && b22_8 && b23_5 && b24_11 && b25_18 && b26_21 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 1726;
}
if(b18_32 && b19_55 && b20_31 && b21_2 && b22_10 && b23_28 && b24_31 && b25_31 && b26_21 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1727;
}
if(b12_13 && b13_20 && b14_34 && b15_6 && b16_30 && b17_3 && b18_19 && b19_3 && b20_19 && b21_32 && b22_17 && b23_57 && b24_8 && b25_43 && b26_25 && b27_43 && b28_30 && b29_32 && b30_38) {
pattern_id = 1728;
}
if(b16_41 && b17_19 && b18_32 && b19_14 && b20_22 && b21_7 && b22_28 && b23_34 && b24_18 && b25_5 && b26_21 && b27_8 && b28_1 && b29_15 && b30_6) {
pattern_id = 1729;
}
if(b25_39 && b26_52 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1730;
}
if(b24_2 && b25_5 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1731;
}
if(b9_19 && b10_15 && b11_38 && b12_2 && b13_7 && b14_46 && b15_53 && b16_52 && b17_8 && b18_17 && b19_13 && b20_3 && b21_2 && b22_36 && b23_14 && b24_18 && b25_1 && b26_19 && b27_2 && b28_20 && b29_48 && b30_2) {
pattern_id = 1732;
}
if(b13_42 && b14_14 && b15_38 && b16_38 && b17_29 && b18_28 && b19_30 && b20_28 && b21_41 && b22_16 && b23_23 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1733;
}
if(b15_33 && b16_26 && b17_36 && b18_35 && b19_31 && b20_38 && b21_20 && b22_9 && b23_6 && b24_19 && b25_33 && b26_7 && b27_12 && b28_33 && b29_12 && b30_10) {
pattern_id = 1734;
}
if(b15_33 && b16_26 && b17_36 && b18_35 && b19_16 && b20_40 && b21_4 && b22_44 && b23_7 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1735;
}
if(b23_31 && b24_18 && b25_14 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 1736;
}
if(b22_16 && b23_7 && b24_1 && b25_1 && b26_12 && b27_15 && b28_15 && b29_9 && b30_8) {
pattern_id = 1737;
}
if(b17_13 && b18_4 && b19_39 && b20_9 && b21_9 && b22_14 && b23_6 && b24_5 && b25_5 && b26_17 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1738;
}
if(b20_19 && b21_41 && b22_45 && b23_51 && b24_13 && b25_50 && b26_24 && b27_13 && b28_38 && b29_14 && b30_32) {
pattern_id = 1739;
}
if(b10_18 && b11_5 && b12_25 && b13_13 && b14_21 && b15_33 && b16_7 && b17_3 && b18_36 && b19_16 && b20_20 && b21_2 && b22_4 && b23_10 && b24_10 && b25_31 && b26_21 && b27_8 && b28_7 && b29_25 && b30_5) {
pattern_id = 1740;
}
if(b28_7 && b29_50 && b30_43) {
pattern_id = 1741;
}
if(b19_13 && b20_7 && b21_7 && b22_13 && b23_10 && b24_32 && b25_15 && b26_15 && b27_26 && b28_12 && b29_39 && b30_22) {
pattern_id = 1742;
}
if(b18_11 && b19_12 && b20_9 && b21_7 && b22_22 && b23_27 && b24_31 && b25_1 && b26_36 && b27_34 && b28_26 && b29_1 && b30_22) {
pattern_id = 1743;
}
if(b20_13 && b21_4 && b22_13 && b23_28 && b24_3 && b25_32 && b26_36 && b27_19 && b28_26 && b29_20 && b30_6) {
pattern_id = 1744;
}
if(b20_13 && b21_4 && b22_13 && b23_28 && b24_3 && b25_32 && b26_36 && b27_19 && b28_38 && b29_18 && b30_10) {
pattern_id = 1745;
}
if(b21_19 && b22_1 && b23_28 && b24_19 && b25_22 && b26_20 && b27_6 && b28_2 && b29_3 && b30_6) {
pattern_id = 1746;
}
if(b10_27 && b11_16 && b12_38 && b13_22 && b14_23 && b15_10 && b16_30 && b17_34 && b18_16 && b19_33 && b20_2 && b21_10 && b22_47 && b23_54 && b24_13 && b25_69 && b26_75 && b27_20 && b28_2 && b29_8 && b30_39) {
pattern_id = 1747;
}
if(b0_2 && b1_3 && b2_4 && b3_4 && b4_4 && b5_6 && b6_9 && b7_9 && b8_10 && b9_12 && b10_11 && b11_12 && b12_16 && b13_14 && b14_10 && b15_18 && b16_20 && b17_23 && b18_15 && b19_24 && b20_30 && b21_31 && b22_16 && b23_31 && b24_18 && b25_15 && b26_19 && b27_1 && b28_26 && b29_20 && b30_47) {
pattern_id = 1748;
}
if(b22_12 && b23_26 && b24_28 && b25_56 && b26_12 && b27_52 && b28_12 && b29_52 && b30_57) {
pattern_id = 1749;
}
if(b14_2 && b15_2 && b16_3 && b17_3 && b18_4 && b19_4 && b20_6 && b21_2 && b22_10 && b23_5 && b24_3 && b25_1 && b26_12 && b27_15 && b28_15 && b29_9 && b30_8) {
pattern_id = 1750;
}
if(b27_28 && b28_26 && b29_20 && b30_29) {
pattern_id = 1751;
}
if(b23_29 && b24_17 && b25_6 && b26_37 && b27_39 && b28_62 && b29_22 && b30_63) {
pattern_id = 1752;
}
if(b17_12 && b18_41 && b19_33 && b20_11 && b21_59 && b22_62 && b23_18 && b24_29 && b25_62 && b26_36 && b27_3 && b28_23 && b29_13 && b30_19) {
pattern_id = 1753;
}
if(b27_28 && b28_7 && b29_20 && b30_29) {
pattern_id = 1754;
}
if(b26_6 && b27_10 && b28_40 && b29_11 && b30_43) {
pattern_id = 1755;
}
if(b24_47 && b25_8 && b26_11 && b27_11 && b28_12 && b29_11 && b30_5) {
pattern_id = 1756;
}
if(b23_29 && b24_9 && b25_31 && b26_6 && b27_52 && b28_26 && b29_20 && b30_26) {
pattern_id = 1757;
}
if(b12_29 && b13_4 && b14_21 && b15_29 && b16_19 && b17_15 && b18_28 && b19_32 && b20_36 && b21_2 && b22_10 && b23_28 && b24_31 && b25_31 && b26_21 && b27_2 && b28_20 && b29_32 && b30_2) {
pattern_id = 1758;
}
if(b22_12 && b23_34 && b24_15 && b25_10 && b26_2 && b27_18 && b28_67 && b29_50 && b30_5) {
pattern_id = 1759;
}
if(b27_28 && b28_40 && b29_3 && b30_43) {
pattern_id = 1760;
}
if(b19_13 && b20_9 && b21_44 && b22_15 && b23_15 && b24_18 && b25_33 && b26_5 && b27_33 && b28_20 && b29_5 && b30_65) {
pattern_id = 1761;
}
if(b25_36 && b26_53 && b27_50 && b28_23 && b29_12 && b30_47) {
pattern_id = 1762;
}
if(b21_1 && b22_1 && b23_1 && b24_1 && b25_1 && b26_1 && b27_1 && b28_1 && b29_1 && b30_1) {
pattern_id = 1763;
}
if(b27_15 && b28_2 && b29_3 && b30_6) {
pattern_id = 1764;
}
if(b22_10 && b23_9 && b24_2 && b25_11 && b26_12 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1765;
}
if(b19_31 && b20_7 && b21_26 && b22_15 && b23_31 && b24_29 && b25_36 && b26_16 && b27_28 && b28_59 && b29_67 && b30_43) {
pattern_id = 1766;
}
if(b23_34 && b24_10 && b25_51 && b26_34 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1767;
}
if(b20_23 && b21_17 && b22_12 && b23_6 && b24_3 && b25_10 && b26_2 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1768;
}
if(b15_27 && b16_26 && b17_3 && b18_28 && b19_32 && b20_31 && b21_40 && b22_9 && b23_5 && b24_19 && b25_10 && b26_50 && b27_24 && b28_7 && b29_20 && b30_36) {
pattern_id = 1769;
}
if(b20_23 && b21_2 && b22_13 && b23_5 && b24_17 && b25_52 && b26_12 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1770;
}
if(b10_36 && b11_24 && b12_25 && b13_38 && b14_35 && b15_33 && b16_7 && b17_10 && b18_54 && b19_27 && b20_10 && b21_38 && b22_51 && b23_64 && b24_24 && b25_42 && b26_4 && b27_2 && b28_20 && b29_32 && b30_2) {
pattern_id = 1771;
}
if(b27_15 && b28_8 && b29_16 && b30_6) {
pattern_id = 1772;
}
if(b24_9 && b25_51 && b26_37 && b27_15 && b28_7 && b29_39 && b30_42) {
pattern_id = 1773;
}
if(b27_15 && b28_7 && b29_15 && b30_6) {
pattern_id = 1774;
}
if(b15_27 && b16_19 && b17_28 && b18_17 && b19_10 && b20_2 && b21_10 && b22_20 && b23_34 && b24_15 && b25_31 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1775;
}
if(b3_13 && b4_10 && b5_17 && b6_20 && b7_40 && b8_15 && b9_45 && b10_50 && b11_13 && b12_3 && b13_11 && b14_40 && b15_39 && b16_68 && b17_8 && b18_19 && b19_13 && b20_22 && b21_7 && b22_2 && b23_9 && b24_5 && b25_71 && b26_21 && b27_10 && b28_33 && b29_9 && b30_43) {
pattern_id = 1776;
}
if(b11_39 && b12_41 && b13_36 && b14_22 && b15_33 && b16_21 && b17_16 && b18_11 && b19_32 && b20_26 && b21_20 && b22_15 && b23_31 && b24_68 && b25_16 && b26_2 && b27_56 && b28_26 && b29_20 && b30_43) {
pattern_id = 1777;
}
if(b21_28 && b22_2 && b23_28 && b24_47 && b25_29 && b26_31 && b27_22 && b28_36 && b29_34 && b30_28) {
pattern_id = 1778;
}
if(b16_20 && b17_43 && b18_21 && b19_32 && b20_38 && b21_53 && b22_14 && b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 1779;
}
if(b17_3 && b18_35 && b19_5 && b20_7 && b21_7 && b22_60 && b23_18 && b24_47 && b25_50 && b26_6 && b27_60 && b28_26 && b29_44 && b30_43) {
pattern_id = 1780;
}
if(b25_1 && b26_7 && b27_18 && b28_7 && b29_8 && b30_16) {
pattern_id = 1781;
}
if(b12_38 && b13_27 && b14_35 && b15_6 && b16_26 && b17_13 && b18_35 && b19_5 && b20_50 && b21_13 && b22_4 && b23_11 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1782;
}
if(b9_21 && b10_10 && b11_39 && b12_8 && b13_15 && b14_10 && b15_25 && b16_18 && b17_28 && b18_17 && b19_45 && b20_38 && b21_36 && b22_15 && b23_6 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1783;
}
if(b25_1 && b26_12 && b27_19 && b28_17 && b29_14 && b30_32) {
pattern_id = 1784;
}
if(b16_20 && b17_17 && b18_47 && b19_30 && b20_23 && b21_2 && b22_43 && b23_28 && b24_31 && b25_10 && b26_12 && b27_64 && b28_13 && b29_15 && b30_18) {
pattern_id = 1785;
}
if(b24_19 && b25_5 && b26_39 && b27_27 && b28_52 && b29_11 && b30_4) {
pattern_id = 1786;
}
if(b25_1 && b26_12 && b27_30 && b28_19 && b29_27 && b30_5) {
pattern_id = 1787;
}
if(b24_19 && b25_5 && b26_21 && b27_12 && b28_40 && b29_61 && b30_22) {
pattern_id = 1788;
}
if(b21_7 && b22_14 && b23_31 && b24_30 && b25_6 && b26_53 && b27_30 && b28_12 && b29_27 && b30_5) {
pattern_id = 1789;
}
if(b16_20 && b17_17 && b18_12 && b19_37 && b20_40 && b21_2 && b22_2 && b23_45 && b24_29 && b25_24 && b26_25 && b27_1 && b28_30 && b29_28 && b30_38) {
pattern_id = 1790;
}
if(b17_3 && b18_4 && b19_5 && b20_44 && b21_41 && b22_4 && b23_7 && b24_15 && b25_6 && b26_19 && b27_2 && b28_20 && b29_48 && b30_2) {
pattern_id = 1791;
}
if(b20_9 && b21_8 && b22_14 && b23_15 && b24_17 && b25_22 && b26_24 && b27_10 && b28_27 && b29_20 && b30_26) {
pattern_id = 1792;
}
if(b25_1 && b26_11 && b27_24 && b28_22 && b29_9 && b30_10) {
pattern_id = 1793;
}
if(b7_22 && b8_13 && b9_11 && b10_15 && b11_25 && b12_14 && b13_15 && b14_37 && b15_56 && b16_26 && b17_20 && b18_45 && b19_3 && b20_8 && b21_20 && b22_14 && b23_34 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1794;
}
if(b6_9 && b7_2 && b8_10 && b9_29 && b10_18 && b11_14 && b12_8 && b13_28 && b14_27 && b15_18 && b16_30 && b17_17 && b18_4 && b19_20 && b20_9 && b21_8 && b22_23 && b23_6 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1795;
}
if(b21_7 && b22_15 && b23_13 && b24_47 && b25_16 && b26_12 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1796;
}
if(b25_1 && b26_15 && b27_13 && b28_23 && b29_25 && b30_23) {
pattern_id = 1797;
}
if(b22_13 && b23_15 && b24_18 && b25_5 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1798;
}
if(b19_16 && b20_40 && b21_31 && b22_42 && b23_50 && b24_5 && b25_10 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1799;
}
if(b28_40 && b29_27 && b30_22) {
pattern_id = 1800;
}
if(b25_1 && b26_21 && b27_19 && b28_33 && b29_9 && b30_43) {
pattern_id = 1801;
}
if(b15_25 && b16_19 && b17_21 && b18_4 && b19_45 && b20_42 && b21_4 && b22_45 && b23_23 && b24_10 && b25_56 && b26_52 && b27_10 && b28_19 && b29_9 && b30_35) {
pattern_id = 1802;
}
if(b7_22 && b8_12 && b9_41 && b10_4 && b11_22 && b12_42 && b13_15 && b14_39 && b15_29 && b16_21 && b17_3 && b18_19 && b19_28 && b20_34 && b21_17 && b22_23 && b23_13 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 1803;
}
if(b21_7 && b22_12 && b23_5 && b24_15 && b25_2 && b26_20 && b27_10 && b28_17 && b29_24 && b30_22) {
pattern_id = 1804;
}
if(b6_9 && b7_21 && b8_18 && b9_45 && b10_19 && b11_28 && b12_8 && b13_22 && b14_28 && b15_12 && b16_20 && b17_12 && b18_25 && b19_37 && b20_5 && b21_9 && b22_16 && b23_47 && b24_18 && b25_26 && b26_25 && b27_24 && b28_7 && b29_27 && b30_28) {
pattern_id = 1805;
}
if(b22_13 && b23_6 && b24_13 && b25_10 && b26_12 && b27_38 && b28_8 && b29_20 && b30_6) {
pattern_id = 1806;
}
if(b23_28 && b24_5 && b25_31 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1807;
}
if(b24_19 && b25_10 && b26_17 && b27_27 && b28_12 && b29_27 && b30_28) {
pattern_id = 1808;
}
if(b24_19 && b25_13 && b26_21 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1809;
}
if(b18_30 && b19_55 && b20_9 && b21_57 && b22_1 && b23_15 && b24_17 && b25_56 && b26_53 && b27_8 && b28_8 && b29_8 && b30_22) {
pattern_id = 1810;
}
if(b0_10 && b1_15 && b2_22 && b3_26 && b4_25 && b5_27 && b6_21 && b7_22 && b8_39 && b9_28 && b10_15 && b11_14 && b12_25 && b13_14 && b14_29 && b15_21 && b16_26 && b17_26 && b18_35 && b19_34 && b20_38 && b21_44 && b22_33 && b23_18 && b24_9 && b25_5 && b26_52 && b27_18 && b28_26 && b29_51 && b30_17) {
pattern_id = 1811;
}
if(b2_22 && b3_27 && b4_16 && b5_30 && b6_16 && b7_35 && b8_40 && b9_21 && b10_26 && b11_39 && b12_8 && b13_26 && b14_5 && b15_12 && b16_35 && b17_43 && b18_12 && b19_43 && b20_34 && b21_4 && b22_47 && b23_26 && b24_27 && b25_15 && b26_2 && b27_26 && b28_27 && b29_27 && b30_10) {
pattern_id = 1812;
}
if(b2_22 && b3_27 && b4_16 && b5_30 && b6_16 && b7_35 && b8_40 && b9_21 && b10_26 && b11_39 && b12_8 && b13_26 && b14_5 && b15_12 && b16_35 && b17_43 && b18_14 && b19_5 && b20_40 && b21_57 && b22_15 && b23_28 && b24_27 && b25_51 && b26_7 && b27_8 && b28_38 && b29_9 && b30_8) {
pattern_id = 1813;
}
if(b9_21 && b10_35 && b11_8 && b12_42 && b13_24 && b14_42 && b15_20 && b16_20 && b17_43 && b18_30 && b19_55 && b20_9 && b21_5 && b22_14 && b23_13 && b24_29 && b25_20 && b26_36 && b27_12 && b28_16 && b29_8 && b30_6) {
pattern_id = 1814;
}
if(b4_16 && b5_6 && b6_9 && b7_28 && b8_10 && b9_17 && b10_8 && b11_28 && b12_15 && b13_17 && b14_50 && b15_19 && b16_51 && b17_3 && b18_37 && b19_34 && b20_43 && b21_44 && b22_14 && b23_34 && b24_9 && b25_5 && b26_34 && b27_18 && b28_18 && b29_20 && b30_22) {
pattern_id = 1815;
}
if(b23_6 && b24_13 && b25_20 && b26_12 && b27_18 && b28_1 && b29_12 && b30_22) {
pattern_id = 1816;
}
if(b20_20 && b21_17 && b22_12 && b23_26 && b24_13 && b25_10 && b26_7 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1817;
}
if(b21_5 && b22_14 && b23_15 && b24_2 && b25_5 && b26_19 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1818;
}
if(b19_5 && b20_43 && b21_46 && b22_2 && b23_5 && b24_34 && b25_68 && b26_14 && b27_59 && b28_57 && b29_3 && b30_20) {
pattern_id = 1819;
}
if(b23_6 && b24_28 && b25_10 && b26_6 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1820;
}
if(b20_20 && b21_41 && b22_4 && b23_7 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1821;
}
if(b15_29 && b16_12 && b17_12 && b18_28 && b19_17 && b20_8 && b21_2 && b22_2 && b23_8 && b24_15 && b25_51 && b26_7 && b27_30 && b28_19 && b29_15 && b30_53) {
pattern_id = 1822;
}
if(b21_5 && b22_23 && b23_10 && b24_19 && b25_6 && b26_10 && b27_15 && b28_7 && b29_15 && b30_6) {
pattern_id = 1823;
}
if(b17_8 && b18_12 && b19_30 && b20_19 && b21_17 && b22_1 && b23_6 && b24_18 && b25_22 && b26_19 && b27_19 && b28_55 && b29_25 && b30_5) {
pattern_id = 1824;
}
if(b28_38 && b29_8 && b30_17) {
pattern_id = 1825;
}
if(b19_5 && b20_9 && b21_5 && b22_15 && b23_28 && b24_13 && b25_36 && b26_11 && b27_1 && b28_19 && b29_25 && b30_25) {
pattern_id = 1826;
}
if(b20_5 && b21_43 && b22_12 && b23_26 && b24_13 && b25_10 && b26_7 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1827;
}
if(b24_41 && b25_17 && b26_6 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 1828;
}
if(b27_57 && b28_26 && b29_44 && b30_43) {
pattern_id = 1829;
}
if(b14_15 && b15_21 && b16_23 && b17_16 && b18_22 && b19_10 && b20_15 && b21_14 && b22_20 && b23_34 && b24_15 && b25_31 && b26_19 && b27_2 && b28_20 && b29_45 && b30_2) {
pattern_id = 1830;
}
if(b26_53 && b27_30 && b28_12 && b29_27 && b30_5) {
pattern_id = 1831;
}
if(b16_51 && b17_3 && b18_4 && b19_31 && b20_57 && b21_5 && b22_1 && b23_11 && b24_17 && b25_5 && b26_36 && b27_28 && b28_12 && b29_14 && b30_5) {
pattern_id = 1832;
}
if(b14_15 && b15_25 && b16_26 && b17_26 && b18_41 && b19_12 && b20_42 && b21_2 && b22_22 && b23_6 && b24_15 && b25_31 && b26_10 && b27_26 && b28_7 && b29_20 && b30_29) {
pattern_id = 1833;
}
if(b24_20 && b25_5 && b26_17 && b27_8 && b28_26 && b29_15 && b30_10) {
pattern_id = 1834;
}
if(b22_44 && b23_5 && b24_31 && b25_15 && b26_12 && b27_38 && b28_12 && b29_12 && b30_25) {
pattern_id = 1835;
}
if(b27_11 && b28_17 && b29_51 && b30_17) {
pattern_id = 1836;
}
if(b25_14 && b26_14 && b27_16 && b28_16 && b29_3 && b30_12) {
pattern_id = 1837;
}
if(b20_17 && b21_4 && b22_15 && b23_6 && b24_43 && b25_18 && b26_21 && b27_56 && b28_56 && b29_8 && b30_17) {
pattern_id = 1838;
}
if(b27_20 && b28_12 && b29_20 && b30_18) {
pattern_id = 1839;
}
if(b25_14 && b26_16 && b27_16 && b28_2 && b29_11 && b30_13) {
pattern_id = 1840;
}
if(b20_17 && b21_8 && b22_23 && b23_23 && b24_19 && b25_29 && b26_31 && b27_22 && b28_36 && b29_34 && b30_28) {
pattern_id = 1841;
}
if(b24_1 && b25_1 && b26_16 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 1842;
}
if(b14_39 && b15_19 && b16_38 && b17_19 && b18_43 && b19_12 && b20_38 && b21_9 && b22_1 && b23_11 && b24_17 && b25_5 && b26_38 && b27_27 && b28_19 && b29_12 && b30_11) {
pattern_id = 1843;
}
if(b20_47 && b21_19 && b22_43 && b23_8 && b24_38 && b25_17 && b26_36 && b27_6 && b28_8 && b29_25 && b30_25) {
pattern_id = 1844;
}
if(b21_46 && b22_12 && b23_46 && b24_18 && b25_39 && b26_53 && b27_38 && b28_19 && b29_1 && b30_10) {
pattern_id = 1845;
}
if(b20_47 && b21_19 && b22_43 && b23_30 && b24_31 && b25_16 && b26_12 && b27_26 && b28_26 && b29_1 && b30_6) {
pattern_id = 1846;
}
if(b16_56 && b17_12 && b18_35 && b19_31 && b20_43 && b21_20 && b22_47 && b23_7 && b24_17 && b25_5 && b26_19 && b27_27 && b28_22 && b29_9 && b30_17) {
pattern_id = 1847;
}
if(b21_46 && b22_12 && b23_46 && b24_9 && b25_5 && b26_37 && b27_15 && b28_8 && b29_18 && b30_26) {
pattern_id = 1848;
}
if(b20_47 && b21_19 && b22_43 && b23_34 && b24_18 && b25_11 && b26_20 && b27_15 && b28_26 && b29_11 && b30_5) {
pattern_id = 1849;
}
if(b1_5 && b2_2 && b3_6 && b4_6 && b5_4 && b6_13 && b7_3 && b8_1 && b9_18 && b10_5 && b11_18 && b12_9 && b13_2 && b14_3 && b15_5 && b16_30 && b17_10 && b18_22 && b19_6 && b20_10 && b21_2 && b22_20 && b23_3 && b24_23 && b25_29 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1850;
}
if(b25_13 && b26_6 && b27_13 && b28_2 && b29_14 && b30_11) {
pattern_id = 1851;
}
if(b11_41 && b12_26 && b13_17 && b14_34 && b15_21 && b16_26 && b17_36 && b18_34 && b19_3 && b20_23 && b21_13 && b22_4 && b23_5 && b24_11 && b25_47 && b26_64 && b27_1 && b28_11 && b29_17 && b30_42) {
pattern_id = 1852;
}
if(b9_53 && b10_55 && b11_25 && b12_8 && b13_23 && b14_1 && b15_59 && b16_11 && b17_19 && b18_13 && b19_14 && b20_72 && b21_57 && b22_13 && b23_34 && b24_10 && b25_33 && b26_5 && b27_33 && b28_20 && b29_5 && b30_28) {
pattern_id = 1853;
}
if(b6_8 && b7_1 && b8_1 && b9_2 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1854;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1855;
}
if(b6_8 && b7_1 && b8_1 && b9_2 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_1 && b19_18 && b20_24 && b21_23 && b22_27 && b23_33 && b24_24 && b25_34 && b26_22 && b27_40 && b28_41 && b29_7 && b30_34) {
pattern_id = 1856;
}
if(b9_3 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_58 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1857;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_48 && b30_2) {
pattern_id = 1858;
}
if(b6_8 && b7_1 && b8_1 && b9_2 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_61 && b17_5 && b18_5 && b19_23 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1859;
}
if(b24_8 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1860;
}
if(b3_16 && b4_6 && b5_1 && b6_1 && b7_1 && b8_1 && b9_3 && b10_40 && b11_7 && b12_23 && b13_2 && b14_1 && b15_23 && b16_4 && b17_10 && b18_8 && b19_10 && b20_2 && b21_10 && b22_22 && b23_3 && b24_23 && b25_29 && b26_35 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1861;
}
if(b9_3 && b10_2 && b11_3 && b12_2 && b13_2 && b14_4 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1862;
}
if(b9_3 && b10_2 && b11_3 && b12_2 && b13_2 && b14_4 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_15 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_18 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1863;
}
if(b9_3 && b10_2 && b11_3 && b12_2 && b13_2 && b14_4 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_32 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_18 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1864;
}
if(b15_5 && b16_4 && b17_6 && b18_5 && b19_6 && b20_58 && b21_3 && b22_58 && b23_60 && b24_3 && b25_4 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1865;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_4 && b29_3 && b30_2) {
pattern_id = 1866;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_4 && b29_32 && b30_2) {
pattern_id = 1867;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_4 && b29_13 && b30_2) {
pattern_id = 1868;
}
if(b15_5 && b16_4 && b17_6 && b18_5 && b19_6 && b20_58 && b21_3 && b22_58 && b23_60 && b24_3 && b25_4 && b26_46 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1869;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_4 && b29_47 && b30_2) {
pattern_id = 1870;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_4 && b29_45 && b30_2) {
pattern_id = 1871;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_4 && b29_33 && b30_2) {
pattern_id = 1872;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_14 && b29_48 && b30_2) {
pattern_id = 1873;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_14 && b29_6 && b30_2) {
pattern_id = 1874;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_41 && b29_13 && b30_2) {
pattern_id = 1875;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_48 && b27_3 && b28_6 && b29_21 && b30_2) {
pattern_id = 1876;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_47 && b27_3 && b28_29 && b29_48 && b30_2) {
pattern_id = 1877;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_35 && b24_3 && b25_23 && b26_47 && b27_3 && b28_35 && b29_45 && b30_2) {
pattern_id = 1878;
}
if(b20_10 && b21_10 && b22_3 && b23_10 && b24_23 && b25_64 && b26_10 && b27_67 && b28_39 && b29_5 && b30_69) {
pattern_id = 1879;
}
if(b24_8 && b25_3 && b26_14 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 1880;
}
if(b23_17 && b24_23 && b25_3 && b26_10 && b27_16 && b28_37 && b29_5 && b30_28) {
pattern_id = 1881;
}
if(b23_17 && b24_23 && b25_3 && b26_10 && b27_16 && b28_37 && b29_5 && b30_62) {
pattern_id = 1882;
}
if(b10_5 && b11_3 && b12_23 && b13_13 && b14_3 && b15_50 && b16_16 && b17_49 && b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_37 && b29_48 && b30_2) {
pattern_id = 1883;
}
if(b24_8 && b25_3 && b26_14 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 1884;
}
if(b20_10 && b21_10 && b22_3 && b23_10 && b24_23 && b25_9 && b26_10 && b27_16 && b28_43 && b29_5 && b30_42) {
pattern_id = 1885;
}
if(b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_65 && b24_3 && b25_53 && b26_31 && b27_3 && b28_6 && b29_21 && b30_2) {
pattern_id = 1886;
}
if(b20_10 && b21_10 && b22_3 && b23_10 && b24_23 && b25_37 && b26_10 && b27_48 && b28_39 && b29_5 && b30_32) {
pattern_id = 1887;
}
if(b20_10 && b21_10 && b22_3 && b23_10 && b24_57 && b25_3 && b26_5 && b27_69 && b28_6 && b29_4 && b30_54) {
pattern_id = 1888;
}
if(b15_5 && b16_4 && b17_6 && b18_5 && b19_60 && b20_14 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_6 && b29_62 && b30_2) {
pattern_id = 1889;
}
if(b3_16 && b4_6 && b5_1 && b6_1 && b7_47 && b8_8 && b9_2 && b10_57 && b11_36 && b12_2 && b13_60 && b14_64 && b15_3 && b16_24 && b17_30 && b18_5 && b19_68 && b20_15 && b21_3 && b22_56 && b23_12 && b24_3 && b25_4 && b26_18 && b27_3 && b28_24 && b29_13 && b30_2) {
pattern_id = 1890;
}
if(b9_3 && b10_2 && b11_3 && b12_2 && b13_47 && b14_4 && b15_5 && b16_54 && b17_9 && b18_1 && b19_29 && b20_12 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1891;
}
if(b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1892;
}
if(b23_17 && b24_23 && b25_3 && b26_5 && b27_1 && b28_28 && b29_1 && b30_42) {
pattern_id = 1893;
}
if(b26_5 && b27_16 && b28_2 && b29_5 && b30_66) {
pattern_id = 1894;
}
if(b26_5 && b27_16 && b28_2 && b29_5 && b30_3) {
pattern_id = 1895;
}
if(b19_10 && b20_2 && b21_10 && b22_20 && b23_34 && b24_15 && b25_31 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1896;
}
if(b15_5 && b16_4 && b17_5 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 1897;
}
if(b15_5 && b16_4 && b17_5 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_24 && b29_6 && b30_2) {
pattern_id = 1898;
}
if(b15_5 && b16_4 && b17_5 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_24 && b29_2 && b30_2) {
pattern_id = 1899;
}
if(b15_5 && b16_4 && b17_5 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_34 && b29_53 && b30_2) {
pattern_id = 1900;
}
if(b15_5 && b16_4 && b17_5 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_29 && b29_53 && b30_2) {
pattern_id = 1901;
}
if(b21_32 && b22_3 && b23_35 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 1902;
}
if(b21_32 && b22_3 && b23_35 && b24_3 && b25_3 && b26_18 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1903;
}
if(b18_1 && b19_6 && b20_58 && b21_3 && b22_3 && b23_59 && b24_3 && b25_3 && b26_14 && b27_3 && b28_37 && b29_13 && b30_2) {
pattern_id = 1904;
}
if(b21_32 && b22_3 && b23_35 && b24_3 && b25_3 && b26_3 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1905;
}
if(b6_8 && b7_1 && b8_41 && b9_2 && b10_7 && b11_3 && b12_2 && b13_2 && b14_6 && b15_3 && b16_4 && b17_6 && b18_5 && b19_41 && b20_27 && b21_3 && b22_57 && b23_57 && b24_3 && b25_42 && b26_44 && b27_3 && b28_31 && b29_6 && b30_2) {
pattern_id = 1906;
}
if(b27_2 && b28_2 && b29_53 && b30_2) {
pattern_id = 1907;
}
if(b2_2 && b3_6 && b4_22 && b5_4 && b6_7 && b7_3 && b8_31 && b9_6 && b10_12 && b11_32 && b12_3 && b13_13 && b14_6 && b15_23 && b16_7 && b17_39 && b18_18 && b19_10 && b20_54 && b21_32 && b22_19 && b23_19 && b24_3 && b25_28 && b26_9 && b27_3 && b28_6 && b29_62 && b30_2) {
pattern_id = 1908;
}
if(b24_8 && b25_3 && b26_3 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1909;
}
if(b9_3 && b10_2 && b11_36 && b12_2 && b13_2 && b14_4 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_12 && b21_3 && b22_58 && b23_59 && b24_3 && b25_3 && b26_18 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1910;
}
if(b27_2 && b28_2 && b29_32 && b30_2) {
pattern_id = 1911;
}
if(b2_2 && b3_6 && b4_41 && b5_4 && b6_9 && b7_23 && b8_4 && b9_18 && b10_3 && b11_7 && b12_38 && b13_15 && b14_35 && b15_40 && b16_26 && b17_37 && b18_17 && b19_13 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1912;
}
if(b21_32 && b22_3 && b23_22 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1913;
}
if(b21_32 && b22_3 && b23_22 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 1914;
}
if(b24_8 && b25_3 && b26_31 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1915;
}
if(b9_3 && b10_2 && b11_19 && b12_2 && b13_9 && b14_55 && b15_3 && b16_10 && b17_65 && b18_5 && b19_67 && b20_70 && b21_3 && b22_3 && b23_59 && b24_3 && b25_4 && b26_14 && b27_3 && b28_2 && b29_47 && b30_2) {
pattern_id = 1916;
}
if(b3_16 && b4_6 && b5_10 && b6_8 && b7_1 && b8_45 && b9_15 && b10_5 && b11_3 && b12_52 && b13_6 && b14_10 && b15_10 && b16_50 && b17_44 && b18_11 && b19_10 && b20_2 && b21_66 && b22_20 && b23_23 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1917;
}
if(b5_4 && b6_32 && b7_38 && b8_4 && b9_12 && b10_27 && b11_22 && b12_9 && b13_2 && b14_6 && b15_5 && b16_44 && b17_44 && b18_11 && b19_8 && b20_7 && b21_36 && b22_15 && b23_9 && b24_8 && b25_3 && b26_31 && b27_2 && b28_52 && b29_15 && b30_45) {
pattern_id = 1918;
}
if(b11_7 && b12_23 && b13_44 && b14_8 && b15_33 && b16_20 && b17_5 && b18_1 && b19_6 && b20_37 && b21_32 && b22_24 && b23_5 && b24_48 && b25_31 && b26_21 && b27_26 && b28_26 && b29_20 && b30_5) {
pattern_id = 1919;
}
if(b18_1 && b19_6 && b20_32 && b21_32 && b22_36 && b23_3 && b24_20 && b25_29 && b26_14 && b27_33 && b28_36 && b29_50 && b30_25) {
pattern_id = 1920;
}
if(b11_7 && b12_23 && b13_44 && b14_8 && b15_63 && b16_19 && b17_45 && b18_1 && b19_6 && b20_15 && b21_32 && b22_9 && b23_14 && b24_8 && b25_3 && b26_31 && b27_2 && b28_52 && b29_15 && b30_45) {
pattern_id = 1921;
}
if(b3_16 && b4_6 && b5_10 && b6_8 && b7_42 && b8_48 && b9_52 && b10_5 && b11_3 && b12_18 && b13_6 && b14_36 && b15_36 && b16_41 && b17_34 && b18_41 && b19_16 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1922;
}
if(b3_16 && b4_6 && b5_10 && b6_8 && b7_42 && b8_34 && b9_5 && b10_5 && b11_3 && b12_52 && b13_6 && b14_41 && b15_2 && b16_49 && b17_50 && b18_34 && b19_10 && b20_2 && b21_66 && b22_20 && b23_23 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1923;
}
if(b2_2 && b3_6 && b4_38 && b5_4 && b6_38 && b7_42 && b8_34 && b9_3 && b10_2 && b11_51 && b12_9 && b13_35 && b14_60 && b15_38 && b16_11 && b17_5 && b18_31 && b19_19 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1924;
}
if(b1_2 && b2_16 && b3_31 && b4_3 && b5_36 && b6_38 && b7_42 && b8_4 && b9_18 && b10_3 && b11_7 && b12_21 && b13_12 && b14_44 && b15_23 && b16_35 && b17_28 && b18_14 && b19_31 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1925;
}
if(b1_2 && b2_16 && b3_31 && b4_3 && b5_36 && b6_38 && b7_42 && b8_4 && b9_18 && b10_3 && b11_7 && b12_36 && b13_15 && b14_60 && b15_51 && b16_30 && b17_44 && b18_13 && b19_3 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1926;
}
if(b0_1 && b1_21 && b2_13 && b3_16 && b4_21 && b5_36 && b6_38 && b7_3 && b8_1 && b9_48 && b10_5 && b11_53 && b12_15 && b13_35 && b14_21 && b15_19 && b16_12 && b17_55 && b18_19 && b19_12 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1927;
}
if(b24_8 && b25_3 && b26_13 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1928;
}
if(b21_32 && b22_3 && b23_65 && b24_3 && b25_3 && b26_18 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1929;
}
if(b27_2 && b28_2 && b29_13 && b30_2) {
pattern_id = 1930;
}
if(b12_9 && b13_2 && b14_58 && b15_5 && b16_4 && b17_66 && b18_65 && b19_6 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1931;
}
if(b2_2 && b3_6 && b4_40 && b5_4 && b6_16 && b7_36 && b8_38 && b9_39 && b10_5 && b11_3 && b12_18 && b13_6 && b14_27 && b15_6 && b16_28 && b17_37 && b18_19 && b19_13 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1932;
}
if(b3_16 && b4_6 && b5_43 && b6_8 && b7_13 && b8_12 && b9_15 && b10_11 && b11_7 && b12_23 && b13_55 && b14_8 && b15_20 && b16_2 && b17_37 && b18_17 && b19_13 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1933;
}
if(b3_16 && b4_6 && b5_43 && b6_8 && b7_10 && b8_17 && b9_11 && b10_1 && b11_7 && b12_23 && b13_55 && b14_8 && b15_25 && b16_2 && b17_8 && b18_4 && b19_16 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1934;
}
if(b2_2 && b3_6 && b4_40 && b5_4 && b6_20 && b7_40 && b8_35 && b9_15 && b10_5 && b11_3 && b12_18 && b13_6 && b14_13 && b15_25 && b16_41 && b17_19 && b18_32 && b19_14 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1935;
}
if(b4_3 && b5_1 && b6_40 && b7_3 && b8_13 && b9_19 && b10_44 && b11_5 && b12_9 && b13_2 && b14_58 && b15_5 && b16_56 && b17_47 && b18_14 && b19_65 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1936;
}
if(b4_3 && b5_1 && b6_40 && b7_3 && b8_51 && b9_12 && b10_24 && b11_16 && b12_9 && b13_2 && b14_48 && b15_5 && b16_41 && b17_3 && b18_7 && b19_10 && b20_2 && b21_66 && b22_20 && b23_31 && b24_13 && b25_51 && b26_12 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1937;
}
if(b2_2 && b3_6 && b4_40 && b5_4 && b6_39 && b7_32 && b8_21 && b9_12 && b10_5 && b11_3 && b12_52 && b13_6 && b14_10 && b15_10 && b16_50 && b17_44 && b18_11 && b19_10 && b20_2 && b21_66 && b22_20 && b23_23 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1938;
}
if(b10_5 && b11_3 && b12_56 && b13_6 && b14_13 && b15_12 && b16_12 && b17_35 && b18_1 && b19_6 && b20_32 && b21_32 && b22_45 && b23_3 && b24_20 && b25_29 && b26_14 && b27_33 && b28_36 && b29_50 && b30_25) {
pattern_id = 1939;
}
if(b13_6 && b14_3 && b15_15 && b16_16 && b17_26 && b18_4 && b19_39 && b20_20 && b21_32 && b22_3 && b23_59 && b24_8 && b25_8 && b26_53 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1940;
}
if(b24_8 && b25_3 && b26_46 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1941;
}
if(b23_17 && b24_23 && b25_37 && b26_10 && b27_16 && b28_2 && b29_5 && b30_30) {
pattern_id = 1942;
}
if(b0_1 && b1_21 && b2_1 && b3_1 && b4_41 && b5_38 && b6_1 && b7_1 && b8_1 && b9_2 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_54 && b18_5 && b19_27 && b20_16 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1943;
}
if(b15_5 && b16_4 && b17_54 && b18_5 && b19_27 && b20_16 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1944;
}
if(b27_2 && b28_2 && b29_47 && b30_2) {
pattern_id = 1945;
}
if(b3_16 && b4_6 && b5_39 && b6_8 && b7_32 && b8_26 && b9_17 && b10_21 && b11_54 && b12_9 && b13_2 && b14_25 && b15_5 && b16_20 && b17_15 && b18_19 && b19_44 && b20_38 && b21_32 && b22_3 && b23_59 && b24_8 && b25_8 && b26_2 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1946;
}
if(b0_1 && b1_21 && b2_1 && b3_16 && b4_12 && b5_20 && b6_9 && b7_27 && b8_47 && b9_3 && b10_2 && b11_51 && b12_9 && b13_1 && b14_21 && b15_20 && b16_26 && b17_37 && b18_17 && b19_13 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1947;
}
if(b3_16 && b4_6 && b5_39 && b6_8 && b7_36 && b8_38 && b9_19 && b10_18 && b11_45 && b12_9 && b13_2 && b14_25 && b15_5 && b16_26 && b17_45 && b18_19 && b19_32 && b20_9 && b21_32 && b22_3 && b23_59 && b24_8 && b25_18 && b26_21 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1948;
}
if(b1_2 && b2_16 && b3_34 && b4_3 && b5_25 && b6_25 && b7_44 && b8_1 && b9_18 && b10_5 && b11_3 && b12_18 && b13_6 && b14_36 && b15_36 && b16_41 && b17_34 && b18_41 && b19_16 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1949;
}
if(b0_1 && b1_21 && b2_1 && b3_16 && b4_20 && b5_28 && b6_44 && b7_13 && b8_15 && b9_3 && b10_2 && b11_51 && b12_9 && b13_1 && b14_21 && b15_20 && b16_26 && b17_34 && b18_41 && b19_16 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1950;
}
if(b1_2 && b2_16 && b3_34 && b4_3 && b5_36 && b6_38 && b7_40 && b8_15 && b9_27 && b10_5 && b11_3 && b12_18 && b13_6 && b14_27 && b15_6 && b16_28 && b17_37 && b18_19 && b19_13 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1951;
}
if(b15_5 && b16_4 && b17_54 && b18_1 && b19_28 && b20_38 && b21_46 && b22_24 && b23_50 && b24_8 && b25_3 && b26_31 && b27_2 && b28_52 && b29_15 && b30_45) {
pattern_id = 1952;
}
if(b15_5 && b16_4 && b17_54 && b18_1 && b19_28 && b20_38 && b21_46 && b22_24 && b23_50 && b24_8 && b25_3 && b26_31 && b27_2 && b28_44 && b29_9 && b30_6) {
pattern_id = 1953;
}
if(b12_9 && b13_2 && b14_25 && b15_5 && b16_48 && b17_19 && b18_45 && b19_15 && b20_40 && b21_32 && b22_3 && b23_59 && b24_8 && b25_8 && b26_53 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1954;
}
if(b0_1 && b1_21 && b2_29 && b3_16 && b4_11 && b5_20 && b6_12 && b7_21 && b8_38 && b9_21 && b10_5 && b11_3 && b12_18 && b13_6 && b14_41 && b15_10 && b16_35 && b17_34 && b18_41 && b19_16 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1955;
}
if(b10_5 && b11_3 && b12_18 && b13_6 && b14_36 && b15_21 && b16_20 && b17_59 && b18_57 && b19_9 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1956;
}
if(b10_5 && b11_3 && b12_18 && b13_6 && b14_41 && b15_10 && b16_19 && b17_4 && b18_65 && b19_3 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1957;
}
if(b1_2 && b2_16 && b3_33 && b4_3 && b5_40 && b6_26 && b7_43 && b8_32 && b9_51 && b10_49 && b11_7 && b12_23 && b13_56 && b14_8 && b15_37 && b16_2 && b17_13 && b18_15 && b19_20 && b20_9 && b21_32 && b22_3 && b23_59 && b24_8 && b25_10 && b26_51 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1958;
}
if(b10_5 && b11_3 && b12_18 && b13_6 && b14_13 && b15_25 && b16_51 && b17_12 && b18_15 && b19_5 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1959;
}
if(b21_32 && b22_3 && b23_60 && b24_8 && b25_36 && b26_53 && b27_50 && b28_23 && b29_12 && b30_47) {
pattern_id = 1960;
}
if(b4_3 && b5_1 && b6_43 && b7_3 && b8_21 && b9_26 && b10_10 && b11_37 && b12_38 && b13_1 && b14_8 && b15_23 && b16_59 && b17_10 && b18_21 && b19_5 && b20_50 && b21_32 && b22_3 && b23_59 && b24_8 && b25_15 && b26_1 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1961;
}
if(b10_5 && b11_3 && b12_18 && b13_6 && b14_27 && b15_38 && b16_51 && b17_12 && b18_15 && b19_5 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1962;
}
if(b10_5 && b11_3 && b12_18 && b13_6 && b14_23 && b15_10 && b16_28 && b17_37 && b18_43 && b19_31 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1963;
}
if(b27_2 && b28_2 && b29_68 && b30_2) {
pattern_id = 1964;
}
if(b20_10 && b21_10 && b22_17 && b23_17 && b24_13 && b25_6 && b26_19 && b27_6 && b28_7 && b29_8 && b30_22) {
pattern_id = 1965;
}
if(b0_1 && b1_21 && b2_28 && b3_16 && b4_32 && b5_22 && b6_24 && b7_43 && b8_41 && b9_50 && b10_7 && b11_7 && b12_23 && b13_55 && b14_8 && b15_57 && b16_21 && b17_12 && b18_17 && b19_3 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1966;
}
if(b9_3 && b10_2 && b11_51 && b12_9 && b13_39 && b14_22 && b15_48 && b16_21 && b17_3 && b18_42 && b19_35 && b20_34 && b21_31 && b22_10 && b23_51 && b24_8 && b25_3 && b26_31 && b27_2 && b28_7 && b29_8 && b30_29) {
pattern_id = 1967;
}
if(b0_1 && b1_21 && b2_28 && b3_16 && b4_29 && b5_22 && b6_3 && b7_25 && b8_17 && b9_40 && b10_36 && b11_7 && b12_23 && b13_55 && b14_8 && b15_25 && b16_2 && b17_8 && b18_4 && b19_16 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1968;
}
if(b2_2 && b3_6 && b4_42 && b5_4 && b6_21 && b7_50 && b8_40 && b9_15 && b10_18 && b11_24 && b12_19 && b13_6 && b14_3 && b15_15 && b16_16 && b17_6 && b18_22 && b19_6 && b20_7 && b21_32 && b22_3 && b23_59 && b24_8 && b25_17 && b26_12 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1969;
}
if(b3_16 && b4_6 && b5_41 && b6_8 && b7_40 && b8_15 && b9_27 && b10_7 && b11_3 && b12_23 && b13_9 && b14_8 && b15_23 && b16_59 && b17_10 && b18_21 && b19_5 && b20_50 && b21_32 && b22_3 && b23_59 && b24_8 && b25_15 && b26_1 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1970;
}
if(b10_5 && b11_3 && b12_10 && b13_6 && b14_27 && b15_19 && b16_18 && b17_17 && b18_12 && b19_12 && b20_40 && b21_32 && b22_3 && b23_59 && b24_8 && b25_8 && b26_53 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1971;
}
if(b0_1 && b1_21 && b2_28 && b3_16 && b4_20 && b5_22 && b6_14 && b7_27 && b8_13 && b9_13 && b10_9 && b11_7 && b12_23 && b13_55 && b14_8 && b15_33 && b16_19 && b17_48 && b18_19 && b19_13 && b20_10 && b21_10 && b22_46 && b23_17 && b24_39 && b25_18 && b26_55 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1972;
}
if(b20_10 && b21_10 && b22_17 && b23_17 && b24_20 && b25_5 && b26_17 && b27_8 && b28_26 && b29_15 && b30_10) {
pattern_id = 1973;
}
if(b12_9 && b13_2 && b14_6 && b15_3 && b16_9 && b17_6 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 1974;
}
if(b27_2 && b28_2 && b29_48 && b30_2) {
pattern_id = 1975;
}
if(b8_4 && b9_18 && b10_3 && b11_7 && b12_14 && b13_14 && b14_10 && b15_33 && b16_21 && b17_21 && b18_36 && b19_20 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1976;
}
if(b12_9 && b13_2 && b14_6 && b15_5 && b16_23 && b17_19 && b18_17 && b19_12 && b20_30 && b21_9 && b22_41 && b23_11 && b24_8 && b25_3 && b26_31 && b27_2 && b28_55 && b29_12 && b30_23) {
pattern_id = 1977;
}
if(b12_9 && b13_2 && b14_6 && b15_5 && b16_40 && b17_17 && b18_41 && b19_35 && b20_43 && b21_9 && b22_41 && b23_9 && b24_8 && b25_3 && b26_31 && b27_2 && b28_52 && b29_15 && b30_45) {
pattern_id = 1978;
}
if(b9_3 && b10_2 && b11_10 && b12_9 && b13_16 && b14_17 && b15_29 && b16_18 && b17_17 && b18_19 && b19_33 && b20_50 && b21_32 && b22_3 && b23_59 && b24_8 && b25_15 && b26_52 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1979;
}
if(b9_3 && b10_2 && b11_10 && b12_9 && b13_4 && b14_14 && b15_25 && b16_35 && b17_35 && b18_4 && b19_16 && b20_9 && b21_32 && b22_3 && b23_59 && b24_8 && b25_1 && b26_53 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1980;
}
if(b8_4 && b9_18 && b10_3 && b11_7 && b12_25 && b13_23 && b14_22 && b15_33 && b16_58 && b17_15 && b18_21 && b19_8 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1981;
}
if(b9_3 && b10_2 && b11_55 && b12_2 && b13_9 && b14_38 && b15_3 && b16_59 && b17_33 && b18_5 && b19_62 && b20_2 && b21_3 && b22_34 && b23_25 && b24_3 && b25_9 && b26_46 && b27_3 && b28_20 && b29_6 && b30_2) {
pattern_id = 1982;
}
if(b7_3 && b8_1 && b9_48 && b10_5 && b11_16 && b12_29 && b13_26 && b14_19 && b15_6 && b16_51 && b17_12 && b18_15 && b19_5 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1983;
}
if(b8_4 && b9_18 && b10_49 && b11_7 && b12_43 && b13_16 && b14_19 && b15_21 && b16_2 && b17_28 && b18_41 && b19_65 && b20_26 && b21_32 && b22_3 && b23_59 && b24_8 && b25_36 && b26_20 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1984;
}
if(b8_4 && b9_18 && b10_49 && b11_7 && b12_50 && b13_14 && b14_24 && b15_33 && b16_42 && b17_48 && b18_65 && b19_14 && b20_42 && b21_32 && b22_3 && b23_59 && b24_8 && b25_18 && b26_21 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1985;
}
if(b7_3 && b8_1 && b9_48 && b10_5 && b11_12 && b12_24 && b13_14 && b14_10 && b15_6 && b16_41 && b17_4 && b18_37 && b19_12 && b20_10 && b21_10 && b22_46 && b23_17 && b24_10 && b25_31 && b26_38 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1986;
}
if(b7_3 && b8_1 && b9_48 && b10_5 && b11_25 && b12_24 && b13_42 && b14_21 && b15_25 && b16_26 && b17_59 && b18_45 && b19_3 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1987;
}
if(b0_1 && b1_21 && b2_31 && b3_16 && b4_20 && b5_33 && b6_13 && b7_27 && b8_21 && b9_15 && b10_18 && b11_22 && b12_14 && b13_6 && b14_3 && b15_15 && b16_16 && b17_3 && b18_28 && b19_28 && b20_47 && b21_32 && b22_3 && b23_59 && b24_8 && b25_6 && b26_36 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1988;
}
if(b8_4 && b9_18 && b10_49 && b11_7 && b12_37 && b13_22 && b14_14 && b15_30 && b16_19 && b17_26 && b18_36 && b19_3 && b20_5 && b21_32 && b22_3 && b23_59 && b24_8 && b25_8 && b26_53 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 1989;
}
if(b22_20 && b23_3 && b24_14 && b25_29 && b26_10 && b27_3 && b28_13 && b29_35 && b30_4) {
pattern_id = 1990;
}
if(b24_8 && b25_3 && b26_8 && b27_2 && b28_30 && b29_50 && b30_25) {
pattern_id = 1991;
}
if(b15_5 && b16_4 && b17_30 && b18_1 && b19_11 && b20_8 && b21_5 && b22_15 && b23_26 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 1992;
}
if(b13_6 && b14_3 && b15_28 && b16_16 && b17_32 && b18_12 && b19_3 && b20_26 && b21_5 && b22_20 && b23_3 && b24_14 && b25_29 && b26_30 && b27_28 && b28_17 && b29_15 && b30_29) {
pattern_id = 1993;
}
if(b10_5 && b11_3 && b12_20 && b13_6 && b14_12 && b15_27 && b16_19 && b17_28 && b18_17 && b19_10 && b20_2 && b21_38 && b22_22 && b23_3 && b24_14 && b25_29 && b26_30 && b27_28 && b28_17 && b29_15 && b30_29) {
pattern_id = 1994;
}
if(b11_7 && b12_23 && b13_11 && b14_8 && b15_32 && b16_16 && b17_33 && b18_23 && b19_10 && b20_28 && b21_4 && b22_14 && b23_13 && b24_15 && b25_39 && b26_5 && b27_16 && b28_4 && b29_5 && b30_7) {
pattern_id = 1995;
}
if(b25_29 && b26_14 && b27_22 && b28_36 && b29_2 && b30_28) {
pattern_id = 1996;
}
if(b18_1 && b19_6 && b20_37 && b21_32 && b22_7 && b23_34 && b24_15 && b25_49 && b26_41 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1997;
}
if(b2_2 && b3_6 && b4_23 && b5_4 && b6_11 && b7_25 && b8_36 && b9_29 && b10_36 && b11_24 && b12_36 && b13_6 && b14_48 && b15_28 && b16_16 && b17_2 && b18_12 && b19_14 && b20_9 && b21_32 && b22_46 && b23_12 && b24_8 && b25_46 && b26_44 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 1998;
}
if(b10_5 && b11_3 && b12_20 && b13_6 && b14_17 && b15_6 && b16_28 && b17_12 && b18_1 && b19_6 && b20_37 && b21_32 && b22_36 && b23_14 && b24_31 && b25_10 && b26_12 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 1999;
}
if(b7_3 && b8_1 && b9_1 && b10_5 && b11_1 && b12_15 && b13_24 && b14_24 && b15_29 && b16_21 && b17_4 && b18_21 && b19_16 && b20_43 && b21_32 && b22_3 && b23_59 && b24_8 && b25_15 && b26_21 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2000;
}
if(b6_8 && b7_1 && b8_27 && b9_3 && b10_4 && b11_16 && b12_22 && b13_36 && b14_27 && b15_6 && b16_29 && b17_28 && b18_41 && b19_34 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2001;
}
if(b0_1 && b1_21 && b2_14 && b3_16 && b4_16 && b5_24 && b6_9 && b7_13 && b8_21 && b9_12 && b10_48 && b11_30 && b12_8 && b13_4 && b14_8 && b15_23 && b16_59 && b17_10 && b18_14 && b19_31 && b20_40 && b21_32 && b22_3 && b23_59 && b24_8 && b25_36 && b26_16 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2002;
}
if(b6_8 && b7_1 && b8_27 && b9_3 && b10_4 && b11_5 && b12_4 && b13_36 && b14_17 && b15_34 && b16_28 && b17_28 && b18_28 && b19_34 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2003;
}
if(b18_1 && b19_6 && b20_55 && b21_3 && b22_38 && b23_3 && b24_3 && b25_3 && b26_46 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2004;
}
if(b27_2 && b28_2 && b29_33 && b30_2) {
pattern_id = 2005;
}
if(b4_3 && b5_1 && b6_17 && b7_3 && b8_10 && b9_15 && b10_31 && b11_14 && b12_24 && b13_42 && b14_28 && b15_19 && b16_44 && b17_13 && b18_32 && b19_14 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2006;
}
if(b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_46 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2007;
}
if(b12_9 && b13_2 && b14_61 && b15_3 && b16_4 && b17_30 && b18_5 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_8 && b25_71 && b26_21 && b27_10 && b28_33 && b29_9 && b30_43) {
pattern_id = 2008;
}
if(b14_8 && b15_23 && b16_24 && b17_2 && b18_22 && b19_11 && b20_10 && b21_39 && b22_41 && b23_23 && b24_17 && b25_17 && b26_34 && b27_19 && b28_38 && b29_9 && b30_75) {
pattern_id = 2009;
}
if(b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_8 && b25_6 && b26_53 && b27_13 && b28_19 && b29_73 && b30_4) {
pattern_id = 2010;
}
if(b3_16 && b4_6 && b5_26 && b6_8 && b7_22 && b8_18 && b9_12 && b10_36 && b11_22 && b12_47 && b13_15 && b14_19 && b15_6 && b16_42 && b17_19 && b18_41 && b19_5 && b20_43 && b21_32 && b22_3 && b23_59 && b24_8 && b25_8 && b26_2 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2011;
}
if(b1_2 && b2_16 && b3_20 && b4_5 && b5_1 && b6_32 && b7_6 && b8_1 && b9_18 && b10_12 && b11_3 && b12_23 && b13_13 && b14_3 && b15_45 && b16_16 && b17_3 && b18_37 && b19_3 && b20_17 && b21_3 && b22_47 && b23_9 && b24_5 && b25_47 && b26_24 && b27_19 && b28_40 && b29_9 && b30_22) {
pattern_id = 2012;
}
if(b0_1 && b1_21 && b2_6 && b3_16 && b4_37 && b5_28 && b6_39 && b7_24 && b8_23 && b9_28 && b10_8 && b11_8 && b12_25 && b13_42 && b14_14 && b15_29 && b16_64 && b17_61 && b18_29 && b19_10 && b20_2 && b21_66 && b22_20 && b23_23 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2013;
}
if(b1_2 && b2_16 && b3_20 && b4_3 && b5_17 && b6_31 && b7_25 && b8_13 && b9_36 && b10_25 && b11_47 && b12_8 && b13_26 && b14_24 && b15_27 && b16_28 && b17_28 && b18_14 && b19_31 && b20_10 && b21_10 && b22_46 && b23_17 && b24_2 && b25_5 && b26_19 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2014;
}
if(b24_8 && b25_64 && b26_14 && b27_3 && b28_2 && b29_47 && b30_2) {
pattern_id = 2015;
}
if(b0_1 && b1_20 && b2_16 && b3_16 && b4_24 && b5_33 && b6_21 && b7_9 && b8_48 && b9_12 && b10_52 && b11_37 && b12_43 && b13_15 && b14_5 && b15_18 && b16_42 && b17_36 && b18_21 && b19_59 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2016;
}
if(b0_1 && b1_20 && b2_16 && b3_16 && b4_20 && b5_18 && b6_23 && b7_36 && b8_36 && b9_26 && b10_10 && b11_14 && b12_41 && b13_42 && b14_34 && b15_6 && b16_30 && b17_8 && b18_4 && b19_31 && b20_10 && b21_10 && b22_46 && b23_17 && b24_39 && b25_18 && b26_55 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2017;
}
if(b0_1 && b1_20 && b2_16 && b3_16 && b4_26 && b5_22 && b6_24 && b7_42 && b8_12 && b9_26 && b10_47 && b11_22 && b12_4 && b13_23 && b14_14 && b15_36 && b16_29 && b17_15 && b18_30 && b19_39 && b20_10 && b21_10 && b22_46 && b23_17 && b24_15 && b25_8 && b26_37 && b27_2 && b28_2 && b29_3 && b30_2) {
pattern_id = 2018;
}
if(b2_2 && b3_35 && b4_41 && b5_4 && b6_44 && b7_32 && b8_23 && b9_15 && b10_15 && b11_53 && b12_1 && b13_14 && b14_42 && b15_21 && b16_35 && b17_44 && b18_28 && b19_20 && b20_21 && b21_44 && b22_38 && b23_65 && b24_8 && b25_3 && b26_31 && b27_2 && b28_52 && b29_15 && b30_45) {
pattern_id = 2019;
}
if(b27_2 && b28_37 && b29_21 && b30_2) {
pattern_id = 2020;
}
if(b8_4 && b9_13 && b10_17 && b11_7 && b12_46 && b13_14 && b14_28 && b15_16 && b16_19 && b17_26 && b18_12 && b19_14 && b20_19 && b21_5 && b22_22 && b23_29 && b24_9 && b25_31 && b26_19 && b27_10 && b28_52 && b29_15 && b30_25) {
pattern_id = 2021;
}
if(b21_32 && b22_38 && b23_60 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2022;
}
if(b12_9 && b13_58 && b14_44 && b15_3 && b16_4 && b17_33 && b18_5 && b19_6 && b20_58 && b21_3 && b22_3 && b23_3 && b24_3 && b25_37 && b26_18 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 2023;
}
if(b21_32 && b22_38 && b23_60 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 2024;
}
if(b21_32 && b22_38 && b23_60 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 2025;
}
if(b21_32 && b22_38 && b23_60 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_21 && b30_2) {
pattern_id = 2026;
}
if(b24_8 && b25_64 && b26_48 && b27_3 && b28_2 && b29_21 && b30_2) {
pattern_id = 2027;
}
if(b21_32 && b22_38 && b23_42 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2028;
}
if(b21_32 && b22_38 && b23_42 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 2029;
}
if(b21_32 && b22_38 && b23_42 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 2030;
}
if(b21_32 && b22_38 && b23_42 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_21 && b30_2) {
pattern_id = 2031;
}
if(b21_32 && b22_38 && b23_25 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2032;
}
if(b21_32 && b22_38 && b23_25 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 2033;
}
if(b6_8 && b7_46 && b8_47 && b9_2 && b10_2 && b11_19 && b12_2 && b13_2 && b14_38 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_32 && b21_3 && b22_3 && b23_35 && b24_3 && b25_21 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2034;
}
if(b21_32 && b22_38 && b23_25 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 2035;
}
if(b15_5 && b16_61 && b17_22 && b18_5 && b19_6 && b20_32 && b21_3 && b22_3 && b23_22 && b24_3 && b25_3 && b26_14 && b27_3 && b28_34 && b29_3 && b30_2) {
pattern_id = 2036;
}
if(b21_32 && b22_38 && b23_25 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_21 && b30_2) {
pattern_id = 2037;
}
if(b12_9 && b13_58 && b14_6 && b15_3 && b16_61 && b17_61 && b18_5 && b19_18 && b20_16 && b21_3 && b22_27 && b23_74 && b24_3 && b25_34 && b26_29 && b27_3 && b28_41 && b29_45 && b30_2) {
pattern_id = 2038;
}
if(b12_9 && b13_58 && b14_55 && b15_3 && b16_61 && b17_61 && b18_5 && b19_18 && b20_16 && b21_3 && b22_27 && b23_74 && b24_3 && b25_34 && b26_29 && b27_3 && b28_41 && b29_45 && b30_2) {
pattern_id = 2039;
}
if(b6_8 && b7_7 && b8_1 && b9_2 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_5 && b19_27 && b20_55 && b21_3 && b22_19 && b23_19 && b24_3 && b25_21 && b26_63 && b27_3 && b28_6 && b29_13 && b30_2) {
pattern_id = 2040;
}
if(b15_5 && b16_22 && b17_6 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_4 && b29_2 && b30_2) {
pattern_id = 2041;
}
if(b18_1 && b19_27 && b20_2 && b21_32 && b22_64 && b23_39 && b24_8 && b25_9 && b26_8 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 2042;
}
if(b11_7 && b12_53 && b13_58 && b14_1 && b15_60 && b16_3 && b17_2 && b18_54 && b19_6 && b20_10 && b21_18 && b22_57 && b23_12 && b24_53 && b25_59 && b26_22 && b27_35 && b28_13 && b29_10 && b30_9) {
pattern_id = 2043;
}
if(b13_6 && b14_38 && b15_45 && b16_16 && b17_37 && b18_19 && b19_32 && b20_43 && b21_36 && b22_1 && b23_13 && b24_18 && b25_33 && b26_58 && b27_1 && b28_12 && b29_1 && b30_42) {
pattern_id = 2044;
}
if(b13_6 && b14_38 && b15_45 && b16_16 && b17_37 && b18_19 && b19_32 && b20_43 && b21_36 && b22_1 && b23_13 && b24_18 && b25_33 && b26_58 && b27_1 && b28_8 && b29_52 && b30_5) {
pattern_id = 2045;
}
if(b13_6 && b14_38 && b15_45 && b16_16 && b17_37 && b18_19 && b19_32 && b20_43 && b21_36 && b22_1 && b23_13 && b24_18 && b25_33 && b26_58 && b27_1 && b28_26 && b29_44 && b30_47) {
pattern_id = 2046;
}
if(b23_17 && b24_49 && b25_9 && b26_5 && b27_26 && b28_26 && b29_1 && b30_6) {
pattern_id = 2047;
}
if(b5_4 && b6_35 && b7_45 && b8_4 && b9_47 && b10_21 && b11_52 && b12_8 && b13_57 && b14_32 && b15_6 && b16_41 && b17_34 && b18_4 && b19_31 && b20_27 && b21_9 && b22_15 && b23_7 && b24_2 && b25_10 && b26_25 && b27_24 && b28_7 && b29_20 && b30_36) {
pattern_id = 2048;
}
if(b18_1 && b19_27 && b20_14 && b21_3 && b22_29 && b23_65 && b24_3 && b25_23 && b26_28 && b27_3 && b28_4 && b29_33 && b30_2) {
pattern_id = 2049;
}
if(b14_8 && b15_60 && b16_63 && b17_2 && b18_54 && b19_6 && b20_10 && b21_50 && b22_9 && b23_34 && b24_15 && b25_51 && b26_12 && b27_2 && b28_20 && b29_62 && b30_2) {
pattern_id = 2050;
}
if(b27_2 && b28_20 && b29_62 && b30_2) {
pattern_id = 2051;
}
if(b14_8 && b15_60 && b16_5 && b17_10 && b18_44 && b19_3 && b20_19 && b21_44 && b22_15 && b23_51 && b24_8 && b25_43 && b26_22 && b27_2 && b28_38 && b29_52 && b30_6) {
pattern_id = 2052;
}
if(b6_8 && b7_38 && b8_1 && b9_2 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_5 && b19_27 && b20_55 && b21_3 && b22_19 && b23_19 && b24_3 && b25_21 && b26_63 && b27_3 && b28_6 && b29_13 && b30_2) {
pattern_id = 2053;
}
if(b15_5 && b16_59 && b17_22 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_29 && b29_47 && b30_2) {
pattern_id = 2054;
}
if(b6_8 && b7_38 && b8_47 && b9_2 && b10_2 && b11_3 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_5 && b19_7 && b20_73 && b21_3 && b22_38 && b23_22 && b24_3 && b25_23 && b26_29 && b27_3 && b28_9 && b29_21 && b30_2) {
pattern_id = 2055;
}
if(b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 2056;
}
if(b26_5 && b27_5 && b28_4 && b29_5 && b30_28) {
pattern_id = 2057;
}
if(b18_1 && b19_62 && b20_37 && b21_32 && b22_24 && b23_29 && b24_13 && b25_1 && b26_36 && b27_2 && b28_2 && b29_22 && b30_2) {
pattern_id = 2058;
}
if(b15_5 && b16_59 && b17_69 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_47 && b30_2) {
pattern_id = 2059;
}
if(b1_2 && b2_13 && b3_3 && b4_5 && b5_37 && b6_32 && b7_3 && b8_36 && b9_26 && b10_31 && b11_24 && b12_27 && b13_35 && b14_13 && b15_6 && b16_14 && b17_17 && b18_64 && b19_14 && b20_34 && b21_2 && b22_49 && b23_7 && b24_8 && b25_3 && b26_28 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 2060;
}
if(b18_1 && b19_62 && b20_55 && b21_3 && b22_34 && b23_3 && b24_8 && b25_1 && b26_51 && b27_2 && b28_24 && b29_22 && b30_2) {
pattern_id = 2061;
}
if(b27_2 && b28_24 && b29_33 && b30_2) {
pattern_id = 2062;
}
if(b17_10 && b18_31 && b19_29 && b20_10 && b21_3 && b22_33 && b23_23 && b24_17 && b25_5 && b26_21 && b27_19 && b28_33 && b29_9 && b30_43) {
pattern_id = 2063;
}
if(b18_1 && b19_60 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2064;
}
if(b15_5 && b16_70 && b17_5 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_29 && b29_21 && b30_2) {
pattern_id = 2065;
}
if(b15_5 && b16_70 && b17_33 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_47 && b30_2) {
pattern_id = 2066;
}
if(b6_8 && b7_44 && b8_33 && b9_2 && b10_58 && b11_10 && b12_2 && b13_60 && b14_38 && b15_3 && b16_10 && b17_6 && b18_5 && b19_9 && b20_58 && b21_3 && b22_57 && b23_59 && b24_3 && b25_4 && b26_46 && b27_3 && b28_43 && b29_62 && b30_2) {
pattern_id = 2067;
}
if(b24_8 && b25_21 && b26_44 && b27_3 && b28_34 && b29_6 && b30_2) {
pattern_id = 2068;
}
if(b15_5 && b16_70 && b17_39 && b18_5 && b19_6 && b20_39 && b21_3 && b22_56 && b23_59 && b24_3 && b25_3 && b26_47 && b27_3 && b28_20 && b29_68 && b30_2) {
pattern_id = 2069;
}
if(b24_8 && b25_37 && b26_13 && b27_3 && b28_20 && b29_3 && b30_2) {
pattern_id = 2070;
}
if(b21_32 && b22_32 && b23_37 && b24_3 && b25_3 && b26_13 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 2071;
}
if(b14_8 && b15_24 && b16_25 && b17_10 && b18_25 && b19_26 && b20_34 && b21_32 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2072;
}
if(b14_8 && b15_24 && b16_25 && b17_10 && b18_25 && b19_26 && b20_33 && b21_32 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2073;
}
if(b17_10 && b18_57 && b19_41 && b20_10 && b21_7 && b22_14 && b23_8 && b24_41 && b25_8 && b26_12 && b27_2 && b28_9 && b29_6 && b30_2) {
pattern_id = 2074;
}
if(b6_8 && b7_45 && b8_1 && b9_2 && b10_43 && b11_56 && b12_2 && b13_44 && b14_64 && b15_3 && b16_59 && b17_61 && b18_5 && b19_62 && b20_71 && b21_3 && b22_46 && b23_42 && b24_3 && b25_9 && b26_47 && b27_3 && b28_24 && b29_68 && b30_2) {
pattern_id = 2075;
}
if(b6_8 && b7_45 && b8_49 && b9_2 && b10_43 && b11_56 && b12_2 && b13_44 && b14_64 && b15_3 && b16_59 && b17_61 && b18_5 && b19_62 && b20_71 && b21_3 && b22_46 && b23_42 && b24_3 && b25_9 && b26_47 && b27_3 && b28_24 && b29_68 && b30_2) {
pattern_id = 2076;
}
if(b18_1 && b19_9 && b20_37 && b21_3 && b22_58 && b23_41 && b24_3 && b25_53 && b26_63 && b27_3 && b28_43 && b29_6 && b30_2) {
pattern_id = 2077;
}
if(b18_1 && b19_9 && b20_55 && b21_3 && b22_3 && b23_25 && b24_3 && b25_43 && b26_8 && b27_3 && b28_20 && b29_22 && b30_2) {
pattern_id = 2078;
}
if(b15_5 && b16_64 && b17_69 && b18_5 && b19_27 && b20_15 && b21_32 && b22_15 && b23_26 && b24_8 && b25_43 && b26_3 && b27_3 && b28_24 && b29_22 && b30_2) {
pattern_id = 2079;
}
if(b19_10 && b20_71 && b21_16 && b22_22 && b23_37 && b24_7 && b25_29 && b26_17 && b27_18 && b28_15 && b29_50 && b30_10) {
pattern_id = 2080;
}
if(b15_5 && b16_64 && b17_69 && b18_5 && b19_57 && b20_27 && b21_32 && b22_10 && b23_6 && b24_8 && b25_3 && b26_28 && b27_3 && b28_24 && b29_6 && b30_2) {
pattern_id = 2081;
}
if(b0_1 && b1_23 && b2_33 && b3_1 && b4_42 && b5_8 && b6_8 && b7_30 && b8_11 && b9_18 && b10_7 && b11_7 && b12_10 && b13_41 && b14_8 && b15_32 && b16_15 && b17_6 && b18_54 && b19_10 && b20_71 && b21_50 && b22_20 && b23_57 && b24_61 && b25_3 && b26_31 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 2082;
}
if(b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 2083;
}
if(b5_4 && b6_48 && b7_30 && b8_4 && b9_30 && b10_15 && b11_7 && b12_10 && b13_41 && b14_8 && b15_29 && b16_16 && b17_61 && b18_44 && b19_10 && b20_18 && b21_54 && b22_20 && b23_42 && b24_7 && b25_29 && b26_59 && b27_2 && b28_39 && b29_6 && b30_2) {
pattern_id = 2084;
}
if(b24_8 && b25_23 && b26_14 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 2085;
}
if(b24_8 && b25_23 && b26_14 && b27_3 && b28_2 && b29_32 && b30_2) {
pattern_id = 2086;
}
if(b24_8 && b25_23 && b26_18 && b27_3 && b28_29 && b29_3 && b30_2) {
pattern_id = 2087;
}
if(b8_4 && b9_16 && b10_14 && b11_4 && b12_21 && b13_2 && b14_8 && b15_3 && b16_16 && b17_5 && b18_29 && b19_4 && b20_16 && b21_37 && b22_22 && b23_41 && b24_23 && b25_29 && b26_10 && b27_2 && b28_2 && b29_48 && b30_2) {
pattern_id = 2088;
}
if(b16_16 && b17_22 && b18_57 && b19_4 && b20_58 && b21_24 && b22_20 && b23_68 && b24_8 && b25_53 && b26_22 && b27_3 && b28_4 && b29_32 && b30_2) {
pattern_id = 2089;
}
if(b6_8 && b7_48 && b8_49 && b9_2 && b10_7 && b11_55 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_5 && b19_27 && b20_73 && b21_3 && b22_3 && b23_65 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2090;
}
if(b0_1 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_1 && b7_1 && b8_1 && b9_2 && b10_2 && b11_2 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_5 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2091;
}
if(b6_8 && b7_48 && b8_32 && b9_2 && b10_7 && b11_55 && b12_2 && b13_2 && b14_3 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_12 && b21_3 && b22_3 && b23_35 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2092;
}
if(b10_5 && b11_10 && b12_11 && b13_13 && b14_3 && b15_15 && b16_16 && b17_2 && b18_5 && b19_4 && b20_11 && b21_3 && b22_22 && b23_10 && b24_3 && b25_22 && b26_10 && b27_3 && b28_13 && b29_35 && b30_4) {
pattern_id = 2093;
}
if(b11_7 && b12_11 && b13_5 && b14_8 && b15_11 && b16_27 && b17_11 && b18_1 && b19_6 && b20_60 && b21_3 && b22_3 && b23_12 && b24_3 && b25_64 && b26_8 && b27_3 && b28_2 && b29_22 && b30_2) {
pattern_id = 2094;
}
if(b0_1 && b1_1 && b2_14 && b3_1 && b4_22 && b5_1 && b6_1 && b7_48 && b8_1 && b9_2 && b10_34 && b11_36 && b12_2 && b13_44 && b14_45 && b15_3 && b16_10 && b17_6 && b18_5 && b19_7 && b20_15 && b21_3 && b22_17 && b23_22 && b24_3 && b25_23 && b26_57 && b27_3 && b28_37 && b29_3 && b30_2) {
pattern_id = 2095;
}
if(b0_1 && b1_1 && b2_14 && b3_1 && b4_22 && b5_1 && b6_1 && b7_48 && b8_1 && b9_2 && b10_34 && b11_36 && b12_2 && b13_60 && b14_52 && b15_3 && b16_10 && b17_6 && b18_5 && b19_7 && b20_15 && b21_3 && b22_17 && b23_74 && b24_3 && b25_23 && b26_57 && b27_3 && b28_37 && b29_3 && b30_2) {
pattern_id = 2096;
}
if(b0_1 && b1_1 && b2_14 && b3_1 && b4_22 && b5_1 && b6_1 && b7_48 && b8_1 && b9_2 && b10_34 && b11_36 && b12_2 && b13_56 && b14_64 && b15_3 && b16_10 && b17_6 && b18_5 && b19_7 && b20_15 && b21_3 && b22_34 && b23_65 && b24_3 && b25_23 && b26_57 && b27_3 && b28_37 && b29_3 && b30_2) {
pattern_id = 2097;
}
if(b0_1 && b1_1 && b2_14 && b3_1 && b4_22 && b5_1 && b6_1 && b7_48 && b8_1 && b9_2 && b10_40 && b11_17 && b12_2 && b13_56 && b14_38 && b15_3 && b16_10 && b17_6 && b18_5 && b19_7 && b20_15 && b21_3 && b22_37 && b23_65 && b24_3 && b25_23 && b26_57 && b27_3 && b28_37 && b29_3 && b30_2) {
pattern_id = 2098;
}
if(b18_1 && b19_19 && b20_37 && b21_3 && b22_3 && b23_59 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2099;
}
if(b24_8 && b25_53 && b26_22 && b27_3 && b28_35 && b29_48 && b30_2) {
pattern_id = 2100;
}
if(b12_9 && b13_11 && b14_9 && b15_5 && b16_7 && b17_14 && b18_14 && b19_16 && b20_20 && b21_4 && b22_15 && b23_31 && b24_13 && b25_26 && b26_39 && b27_27 && b28_13 && b29_40 && b30_41) {
pattern_id = 2101;
}
if(b15_5 && b16_3 && b17_30 && b18_5 && b19_68 && b20_12 && b21_3 && b22_37 && b23_12 && b24_3 && b25_28 && b26_3 && b27_3 && b28_9 && b29_30 && b30_2) {
pattern_id = 2102;
}
if(b12_9 && b13_11 && b14_45 && b15_3 && b16_64 && b17_68 && b18_5 && b19_29 && b20_37 && b21_3 && b22_19 && b23_59 && b24_3 && b25_12 && b26_29 && b27_3 && b28_39 && b29_47 && b30_2) {
pattern_id = 2103;
}
if(b18_1 && b19_29 && b20_2 && b21_3 && b22_38 && b23_42 && b24_3 && b25_42 && b26_28 && b27_3 && b28_29 && b29_3 && b30_2) {
pattern_id = 2104;
}
if(b18_1 && b19_29 && b20_2 && b21_3 && b22_37 && b23_37 && b24_3 && b25_42 && b26_28 && b27_3 && b28_29 && b29_3 && b30_2) {
pattern_id = 2105;
}
if(b24_8 && b25_12 && b26_13 && b27_3 && b28_14 && b29_13 && b30_2) {
pattern_id = 2106;
}
if(b2_2 && b3_2 && b4_2 && b5_2 && b6_2 && b7_1 && b8_2 && b9_4 && b10_3 && b11_4 && b12_3 && b13_3 && b14_1 && b15_4 && b16_5 && b17_2 && b18_2 && b19_7 && b20_11 && b21_11 && b22_19 && b23_17 && b24_21 && b25_26 && b26_11 && b27_30 && b28_32 && b29_1 && b30_32) {
pattern_id = 2107;
}
if(b6_8 && b7_47 && b8_49 && b9_2 && b10_56 && b11_2 && b12_2 && b13_21 && b14_6 && b15_3 && b16_22 && b17_68 && b18_5 && b19_67 && b20_16 && b21_3 && b22_34 && b23_25 && b24_3 && b25_64 && b26_46 && b27_3 && b28_34 && b29_68 && b30_2) {
pattern_id = 2108;
}
if(b6_8 && b7_47 && b8_33 && b9_2 && b10_34 && b11_51 && b12_2 && b13_55 && b14_52 && b15_3 && b16_70 && b17_61 && b18_5 && b19_11 && b20_2 && b21_3 && b22_30 && b23_66 && b24_3 && b25_45 && b26_3 && b27_3 && b28_9 && b29_53 && b30_2) {
pattern_id = 2109;
}
if(b8_4 && b9_4 && b10_3 && b11_4 && b12_3 && b13_5 && b14_1 && b15_4 && b16_5 && b17_2 && b18_2 && b19_7 && b20_11 && b21_11 && b22_19 && b23_17 && b24_21 && b25_26 && b26_11 && b27_30 && b28_32 && b29_1 && b30_32) {
pattern_id = 2110;
}
if(b5_4 && b6_5 && b7_4 && b8_2 && b9_7 && b10_6 && b11_7 && b12_7 && b13_8 && b14_8 && b15_4 && b16_9 && b17_10 && b18_3 && b19_10 && b20_16 && b21_14 && b22_22 && b23_19 && b24_24 && b25_29 && b26_30 && b27_2 && b28_35 && b29_33 && b30_2) {
pattern_id = 2111;
}
if(b1_2 && b2_3 && b3_3 && b4_3 && b5_3 && b6_4 && b7_3 && b8_5 && b9_6 && b10_5 && b11_6 && b12_5 && b13_6 && b14_6 && b15_7 && b16_7 && b17_7 && b18_6 && b19_4 && b20_14 && b21_12 && b22_20 && b23_21 && b24_8 && b25_23 && b26_29 && b27_3 && b28_6 && b29_32 && b30_2) {
pattern_id = 2112;
}
if(b1_2 && b2_3 && b3_3 && b4_3 && b5_5 && b6_6 && b7_5 && b8_6 && b9_8 && b10_7 && b11_7 && b12_3 && b13_9 && b14_1 && b15_9 && b16_10 && b17_10 && b18_9 && b19_10 && b20_2 && b21_16 && b22_22 && b23_25 && b24_26 && b25_29 && b26_33 && b27_2 && b28_37 && b29_7 && b30_2) {
pattern_id = 2113;
}
if(b9_3 && b10_40 && b11_33 && b12_2 && b13_53 && b14_55 && b15_3 && b16_1 && b17_7 && b18_5 && b19_57 && b20_2 && b21_3 && b22_56 && b23_66 && b24_3 && b25_3 && b26_31 && b27_3 && b28_2 && b29_13 && b30_2) {
pattern_id = 2114;
}
if(b6_8 && b7_14 && b8_50 && b9_2 && b10_6 && b11_51 && b12_2 && b13_5 && b14_58 && b15_3 && b16_64 && b17_54 && b18_5 && b19_1 && b20_70 && b21_3 && b22_17 && b23_33 && b24_3 && b25_23 && b26_22 && b27_3 && b28_37 && b29_47 && b30_2) {
pattern_id = 2115;
}
if(b17_10 && b18_2 && b19_18 && b20_10 && b21_18 && b22_48 && b23_66 && b24_8 && b25_21 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2116;
}
if(b9_3 && b10_6 && b11_33 && b12_2 && b13_2 && b14_4 && b15_3 && b16_4 && b17_6 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_53 && b30_2) {
pattern_id = 2117;
}
if(b0_1 && b1_6 && b2_6 && b3_1 && b4_7 && b5_10 && b6_1 && b7_14 && b8_14 && b9_2 && b10_6 && b11_19 && b12_2 && b13_21 && b14_20 && b15_3 && b16_5 && b17_33 && b18_5 && b19_7 && b20_39 && b21_3 && b22_19 && b23_22 && b24_3 && b25_28 && b26_9 && b27_3 && b28_6 && b29_21 && b30_2) {
pattern_id = 2118;
}
if(b15_5 && b16_5 && b17_7 && b18_5 && b19_7 && b20_12 && b21_3 && b22_19 && b23_19 && b24_3 && b25_28 && b26_28 && b27_3 && b28_2 && b29_30 && b30_2) {
pattern_id = 2119;
}
if(b3_16 && b4_7 && b5_7 && b6_1 && b7_14 && b8_32 && b9_2 && b10_6 && b11_33 && b12_2 && b13_21 && b14_44 && b15_3 && b16_5 && b17_7 && b18_5 && b19_7 && b20_55 && b21_3 && b22_3 && b23_25 && b24_3 && b25_28 && b26_9 && b27_3 && b28_6 && b29_30 && b30_2) {
pattern_id = 2120;
}
if(b16_16 && b17_7 && b18_2 && b19_4 && b20_39 && b21_6 && b22_20 && b23_71 && b24_8 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2121;
}
if(b3_16 && b4_7 && b5_7 && b6_1 && b7_14 && b8_27 && b9_3 && b10_45 && b11_7 && b12_23 && b13_2 && b14_1 && b15_23 && b16_4 && b17_10 && b18_27 && b19_2 && b20_64 && b21_25 && b22_35 && b23_44 && b24_61 && b25_38 && b26_4 && b27_2 && b28_2 && b29_53 && b30_2) {
pattern_id = 2122;
}
if(b12_9 && b13_21 && b14_20 && b15_3 && b16_5 && b17_7 && b18_5 && b19_7 && b20_39 && b21_3 && b22_19 && b23_19 && b24_3 && b25_28 && b26_9 && b27_3 && b28_6 && b29_62 && b30_2) {
pattern_id = 2123;
}
if(b3_16 && b4_7 && b5_7 && b6_1 && b7_14 && b8_14 && b9_3 && b10_41 && b11_17 && b12_3 && b13_40 && b14_3 && b15_55 && b16_4 && b17_30 && b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_28 && b26_63 && b27_3 && b28_2 && b29_21 && b30_2) {
pattern_id = 2124;
}
if(b23_17 && b24_62 && b25_28 && b26_5 && b27_37 && b28_51 && b29_33 && b30_64) {
pattern_id = 2125;
}
if(b10_5 && b11_33 && b12_61 && b13_6 && b14_32 && b15_1 && b16_1 && b17_33 && b18_1 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2126;
}
if(b23_17 && b24_62 && b25_28 && b26_5 && b27_37 && b28_51 && b29_33 && b30_22) {
pattern_id = 2127;
}
if(b8_4 && b9_37 && b10_6 && b11_7 && b12_32 && b13_40 && b14_55 && b15_5 && b16_64 && b17_33 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2128;
}
if(b8_4 && b9_37 && b10_6 && b11_7 && b12_32 && b13_40 && b14_55 && b15_5 && b16_64 && b17_54 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2129;
}
if(b8_4 && b9_37 && b10_6 && b11_7 && b12_32 && b13_40 && b14_55 && b15_5 && b16_3 && b17_6 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2130;
}
if(b20_10 && b21_11 && b22_19 && b23_17 && b24_35 && b25_25 && b26_63 && b27_2 && b28_4 && b29_3 && b30_2) {
pattern_id = 2131;
}
if(b8_4 && b9_37 && b10_6 && b11_7 && b12_32 && b13_40 && b14_55 && b15_5 && b16_3 && b17_65 && b18_5 && b19_6 && b20_2 && b21_3 && b22_3 && b23_3 && b24_3 && b25_3 && b26_14 && b27_3 && b28_2 && b29_3 && b30_2) {
pattern_id = 2132;
}
if(b30_61) {
pattern_id = 2133;
}
}

}