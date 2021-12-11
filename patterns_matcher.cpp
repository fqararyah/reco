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
boolean b0_1 = (buffer[i] == 'B');
boolean b0_2 = (buffer[i] == 'l');
boolean b0_3 = (buffer[i] == 'L');
boolean b0_4 = (buffer[i] == '/');
boolean b0_5 = (buffer[i] == 'T');
boolean b0_6 = (buffer[i] == 's');
boolean b0_7 = (buffer[i] == '?');
boolean b0_8 = (buffer[i] == '_');
boolean b0_9 = (buffer[i] == 'a');
boolean b0_10 = (buffer[i] == 'u');
boolean b0_11 = (buffer[i] == 'c');
boolean b0_12 = (buffer[i] == 'Y');
boolean b0_13 = (buffer[i] == 'x');
boolean b0_14 = (buffer[i] == 'f');
boolean b0_15 = (buffer[i] == '|');
boolean b0_16 = (buffer[i] == '<');
boolean b0_17 = (buffer[i] == 'g');
boolean b0_18 = (buffer[i] == 'X');
boolean b0_19 = (buffer[i] == '=');
boolean b0_20 = (buffer[i] == 'n');
boolean b0_21 = (buffer[i] == '.');
boolean b0_22 = (buffer[i] == 'U');
boolean b0_23 = (buffer[i] == 'C');
boolean b1_1 = (buffer[i + 1] == 'N');
boolean b1_2 = (buffer[i + 1] == 'b');
boolean b1_3 = (buffer[i + 1] == 'G');
boolean b1_4 = (buffer[i + 1] == 'o');
boolean b1_5 = (buffer[i + 1] == 'd');
boolean b1_6 = (buffer[i + 1] == 'l');
boolean b1_7 = (buffer[i + 1] == 'w');
boolean b1_8 = (buffer[i + 1] == '/');
boolean b1_9 = (buffer[i + 1] == 't');
boolean b1_10 = (buffer[i + 1] == 'i');
boolean b1_11 = (buffer[i + 1] == 'C');
boolean b1_12 = (buffer[i + 1] == 'r');
boolean b1_13 = (buffer[i + 1] == 's');
boolean b1_14 = (buffer[i + 1] == 'e');
boolean b1_15 = (buffer[i + 1] == 'D');
boolean b1_16 = (buffer[i + 1] == 'A');
boolean b1_17 = (buffer[i + 1] == 'v');
boolean b1_18 = (buffer[i + 1] == '?');
boolean b1_19 = (buffer[i + 1] == 'F');
boolean b1_20 = (buffer[i + 1] == 'P');
boolean b1_21 = (buffer[i + 1] == 'c');
boolean b1_22 = (buffer[i + 1] == 'm');
boolean b1_23 = (buffer[i + 1] == ' ');
boolean b1_24 = (buffer[i + 1] == 'a');
boolean b1_25 = (buffer[i + 1] == 'f');
boolean b1_26 = (buffer[i + 1] == 'V');
boolean b1_27 = (buffer[i + 1] == 'p');
boolean b1_28 = (buffer[i + 1] == 'E');
boolean b1_29 = (buffer[i + 1] == 'W');
boolean b1_30 = (buffer[i + 1] == 'X');
boolean b1_31 = (buffer[i + 1] == 'S');
boolean b1_32 = (buffer[i + 1] == 'u');
boolean b1_33 = (buffer[i + 1] == 'q');
boolean b1_34 = (buffer[i + 1] == '8');
boolean b1_35 = (buffer[i + 1] == 'n');
boolean b1_36 = (buffer[i + 1] == '|');
boolean b1_37 = (buffer[i + 1] == '%');
boolean b1_38 = (buffer[i + 1] == 'U');
boolean b1_39 = (buffer[i + 1] == '_');
boolean b1_40 = (buffer[i + 1] == '<');
boolean b1_41 = (buffer[i + 1] == '-');
boolean b1_42 = (buffer[i + 1] == '0');
boolean b1_43 = (buffer[i + 1] == 'g');
boolean b2_1 = (buffer[i + 2] == '|');
boolean b2_2 = (buffer[i + 2] == 'F');
boolean b2_3 = (buffer[i + 2] == 'e');
boolean b2_4 = (buffer[i + 2] == 'E');
boolean b2_5 = (buffer[i + 2] == 'P');
boolean b2_6 = (buffer[i + 2] == 'p');
boolean b2_7 = (buffer[i + 2] == '8');
boolean b2_8 = (buffer[i + 2] == 'A');
boolean b2_9 = (buffer[i + 2] == 'I');
boolean b2_10 = (buffer[i + 2] == 'i');
boolean b2_11 = (buffer[i + 2] == 'g');
boolean b2_12 = (buffer[i + 2] == '_');
boolean b2_13 = (buffer[i + 2] == 'o');
boolean b2_14 = (buffer[i + 2] == 'h');
boolean b2_15 = (buffer[i + 2] == 'w');
boolean b2_16 = (buffer[i + 2] == '/');
boolean b2_17 = (buffer[i + 2] == 's');
boolean b2_18 = (buffer[i + 2] == 'a');
boolean b2_19 = (buffer[i + 2] == 'G');
boolean b2_20 = (buffer[i + 2] == 'r');
boolean b2_21 = (buffer[i + 2] == 'b');
boolean b2_22 = (buffer[i + 2] == '?');
boolean b2_23 = (buffer[i + 2] == 'u');
boolean b2_24 = (buffer[i + 2] == 'q');
boolean b2_25 = (buffer[i + 2] == 't');
boolean b2_26 = (buffer[i + 2] == 'S');
boolean b2_27 = (buffer[i + 2] == 'H');
boolean b2_28 = (buffer[i + 2] == 'l');
boolean b2_29 = (buffer[i + 2] == 'm');
boolean b2_30 = (buffer[i + 2] == '.');
boolean b2_31 = (buffer[i + 2] == 'n');
boolean b2_32 = (buffer[i + 2] == 'v');
boolean b2_33 = (buffer[i + 2] == 'f');
boolean b2_34 = (buffer[i + 2] == 'X');
boolean b2_35 = (buffer[i + 2] == 'c');
boolean b2_36 = (buffer[i + 2] == '2');
boolean b2_37 = (buffer[i + 2] == 'd');
boolean b2_38 = (buffer[i + 2] == 'R');
boolean b2_39 = (buffer[i + 2] == 'M');
boolean b2_40 = (buffer[i + 2] == '5');
boolean b2_41 = (buffer[i + 2] == '<');
boolean b2_42 = (buffer[i + 2] == 'B');
boolean b2_43 = (buffer[i + 2] == '%');
boolean b2_44 = (buffer[i + 2] == 'L');
boolean b2_45 = (buffer[i + 2] == 'C');
boolean b2_46 = (buffer[i + 2] == '3');
boolean b2_47 = (buffer[i + 2] == '[');
boolean b2_48 = (buffer[i + 2] == 'D');
boolean b2_49 = (buffer[i + 2] == 'N');
boolean b3_1 = (buffer[i + 3] == '1');
boolean b3_2 = (buffer[i + 3] == 'T');
boolean b3_3 = (buffer[i + 3] == 't');
boolean b3_4 = (buffer[i + 3] == 'A');
boolean b3_5 = (buffer[i + 3] == 'a');
boolean b3_6 = (buffer[i + 3] == 'p');
boolean b3_7 = (buffer[i + 3] == '9');
boolean b3_8 = (buffer[i + 3] == 'L');
boolean b3_9 = (buffer[i + 3] == 'D');
boolean b3_10 = (buffer[i + 3] == 'n');
boolean b3_11 = (buffer[i + 3] == '0');
boolean b3_12 = (buffer[i + 3] == 'i');
boolean b3_13 = (buffer[i + 3] == '|');
boolean b3_14 = (buffer[i + 3] == 'x');
boolean b3_15 = (buffer[i + 3] == 'B');
boolean b3_16 = (buffer[i + 3] == 'l');
boolean b3_17 = (buffer[i + 3] == 'g');
boolean b3_18 = (buffer[i + 3] == 'o');
boolean b3_19 = (buffer[i + 3] == 'h');
boolean b3_20 = (buffer[i + 3] == 'e');
boolean b3_21 = (buffer[i + 3] == 'b');
boolean b3_22 = (buffer[i + 3] == '/');
boolean b3_23 = (buffer[i + 3] == 'm');
boolean b3_24 = (buffer[i + 3] == 'r');
boolean b3_25 = (buffer[i + 3] == 'u');
boolean b3_26 = (buffer[i + 3] == 'v');
boolean b3_27 = (buffer[i + 3] == 's');
boolean b3_28 = (buffer[i + 3] == 'c');
boolean b3_29 = (buffer[i + 3] == 'w');
boolean b3_30 = (buffer[i + 3] == 'f');
boolean b3_31 = (buffer[i + 3] == 'W');
boolean b3_32 = (buffer[i + 3] == 'E');
boolean b3_33 = (buffer[i + 3] == '-');
boolean b3_34 = (buffer[i + 3] == '.');
boolean b3_35 = (buffer[i + 3] == 'P');
boolean b3_36 = (buffer[i + 3] == '?');
boolean b3_37 = (buffer[i + 3] == 'd');
boolean b3_38 = (buffer[i + 3] == 'q');
boolean b3_39 = (buffer[i + 3] == 'U');
boolean b3_40 = (buffer[i + 3] == '_');
boolean b3_41 = (buffer[i + 3] == 'y');
boolean b3_42 = (buffer[i + 3] == 'Q');
boolean b3_43 = (buffer[i + 3] == 'k');
boolean b3_44 = (buffer[i + 3] == 'C');
boolean b3_45 = (buffer[i + 3] == 'S');
boolean b3_46 = (buffer[i + 3] == 'O');
boolean b3_47 = (buffer[i + 3] == ' ');
boolean b3_48 = (buffer[i + 3] == 'N');
boolean b3_49 = (buffer[i + 3] == 'R');
boolean b3_50 = (buffer[i + 3] == '%');
boolean b3_51 = (buffer[i + 3] == '3');
boolean b3_52 = (buffer[i + 3] == '!');
boolean b3_53 = (buffer[i + 3] == '2');
boolean b3_54 = (buffer[i + 3] == '7');
boolean b3_55 = (buffer[i + 3] == '=');
boolean b3_56 = (buffer[i + 3] == '4');
boolean b3_57 = (buffer[i + 3] == 'Z');
boolean b4_1 = (buffer[i + 4] == 'G');
boolean b4_2 = (buffer[i + 4] == '0');
boolean b4_3 = (buffer[i + 4] == 'R');
boolean b4_4 = (buffer[i + 4] == 'P');
boolean b4_5 = (buffer[i + 4] == 'a');
boolean b4_6 = (buffer[i + 4] == 'g');
boolean b4_7 = (buffer[i + 4] == 's');
boolean b4_8 = (buffer[i + 4] == '|');
boolean b4_9 = (buffer[i + 4] == 'w');
boolean b4_10 = (buffer[i + 4] == ' ');
boolean b4_11 = (buffer[i + 4] == 'S');
boolean b4_12 = (buffer[i + 4] == 'p');
boolean b4_13 = (buffer[i + 4] == 'o');
boolean b4_14 = (buffer[i + 4] == 'M');
boolean b4_15 = (buffer[i + 4] == 'v');
boolean b4_16 = (buffer[i + 4] == 'n');
boolean b4_17 = (buffer[i + 4] == 'V');
boolean b4_18 = (buffer[i + 4] == 'r');
boolean b4_19 = (buffer[i + 4] == 'i');
boolean b4_20 = (buffer[i + 4] == 'b');
boolean b4_21 = (buffer[i + 4] == 'd');
boolean b4_22 = (buffer[i + 4] == 'm');
boolean b4_23 = (buffer[i + 4] == '/');
boolean b4_24 = (buffer[i + 4] == 't');
boolean b4_25 = (buffer[i + 4] == 'e');
boolean b4_26 = (buffer[i + 4] == 'T');
boolean b4_27 = (buffer[i + 4] == 'f');
boolean b4_28 = (buffer[i + 4] == 'c');
boolean b4_29 = (buffer[i + 4] == 'h');
boolean b4_30 = (buffer[i + 4] == 'x');
boolean b4_31 = (buffer[i + 4] == 'l');
boolean b4_32 = (buffer[i + 4] == 'u');
boolean b4_33 = (buffer[i + 4] == '?');
boolean b4_34 = (buffer[i + 4] == '-');
boolean b4_35 = (buffer[i + 4] == 'I');
boolean b4_36 = (buffer[i + 4] == 'F');
boolean b4_37 = (buffer[i + 4] == 'E');
boolean b4_38 = (buffer[i + 4] == 'L');
boolean b4_39 = (buffer[i + 4] == '3');
boolean b4_40 = (buffer[i + 4] == '4');
boolean b4_41 = (buffer[i + 4] == '_');
boolean b4_42 = (buffer[i + 4] == '1');
boolean b4_43 = (buffer[i + 4] == 'C');
boolean b4_44 = (buffer[i + 4] == 'U');
boolean b4_45 = (buffer[i + 4] == 'y');
boolean b4_46 = (buffer[i + 4] == 'W');
boolean b4_47 = (buffer[i + 4] == 'N');
boolean b4_48 = (buffer[i + 4] == 'D');
boolean b4_49 = (buffer[i + 4] == '<');
boolean b4_50 = (buffer[i + 4] == 'A');
boolean b4_51 = (buffer[i + 4] == 'K');
boolean b4_52 = (buffer[i + 4] == '%');
boolean b4_53 = (buffer[i + 4] == 'O');
boolean b4_54 = (buffer[i + 4] == 'B');
boolean b4_55 = (buffer[i + 4] == '.');
boolean b4_56 = (buffer[i + 4] == '=');
boolean b4_57 = (buffer[i + 4] == '2');
boolean b4_58 = (buffer[i + 4] == '8');
boolean b4_59 = (buffer[i + 4] == 'k');
boolean b4_60 = (buffer[i + 4] == '7');
boolean b5_1 = (buffer[i + 5] == 'q');
boolean b5_2 = (buffer[i + 5] == 'e');
boolean b5_3 = (buffer[i + 5] == ' ');
boolean b5_4 = (buffer[i + 5] == 'a');
boolean b5_5 = (buffer[i + 5] == 'A');
boolean b5_6 = (buffer[i + 5] == 's');
boolean b5_7 = (buffer[i + 5] == 'h');
boolean b5_8 = (buffer[i + 5] == 'l');
boolean b5_9 = (buffer[i + 5] == '0');
boolean b5_10 = (buffer[i + 5] == '/');
boolean b5_11 = (buffer[i + 5] == 'c');
boolean b5_12 = (buffer[i + 5] == 'S');
boolean b5_13 = (buffer[i + 5] == 'p');
boolean b5_14 = (buffer[i + 5] == '3');
boolean b5_15 = (buffer[i + 5] == 'B');
boolean b5_16 = (buffer[i + 5] == 'g');
boolean b5_17 = (buffer[i + 5] == 'I');
boolean b5_18 = (buffer[i + 5] == 'N');
boolean b5_19 = (buffer[i + 5] == '-');
boolean b5_20 = (buffer[i + 5] == 'E');
boolean b5_21 = (buffer[i + 5] == 'n');
boolean b5_22 = (buffer[i + 5] == 'b');
boolean b5_23 = (buffer[i + 5] == 't');
boolean b5_24 = (buffer[i + 5] == 'i');
boolean b5_25 = (buffer[i + 5] == 'm');
boolean b5_26 = (buffer[i + 5] == 'r');
boolean b5_27 = (buffer[i + 5] == 'w');
boolean b5_28 = (buffer[i + 5] == 'd');
boolean b5_29 = (buffer[i + 5] == 'o');
boolean b5_30 = (buffer[i + 5] == 'f');
boolean b5_31 = (buffer[i + 5] == 'u');
boolean b5_32 = (buffer[i + 5] == 'P');
boolean b5_33 = (buffer[i + 5] == 'x');
boolean b5_34 = (buffer[i + 5] == '_');
boolean b5_35 = (buffer[i + 5] == '?');
boolean b5_36 = (buffer[i + 5] == 'y');
boolean b5_37 = (buffer[i + 5] == 'C');
boolean b5_38 = (buffer[i + 5] == 'k');
boolean b5_39 = (buffer[i + 5] == 'j');
boolean b5_40 = (buffer[i + 5] == '|');
boolean b5_41 = (buffer[i + 5] == '1');
boolean b5_42 = (buffer[i + 5] == 'v');
boolean b5_43 = (buffer[i + 5] == 'M');
boolean b5_44 = (buffer[i + 5] == 'V');
boolean b5_45 = (buffer[i + 5] == 'G');
boolean b5_46 = (buffer[i + 5] == 'U');
boolean b5_47 = (buffer[i + 5] == '.');
boolean b5_48 = (buffer[i + 5] == '2');
boolean b5_49 = (buffer[i + 5] == 'T');
boolean b5_50 = (buffer[i + 5] == '[');
boolean b5_51 = (buffer[i + 5] == 'W');
boolean b5_52 = (buffer[i + 5] == 'z');
boolean b5_53 = (buffer[i + 5] == 'D');
boolean b5_54 = (buffer[i + 5] == 'L');
boolean b5_55 = (buffer[i + 5] == 'R');
boolean b5_56 = (buffer[i + 5] == 'O');
boolean b5_57 = (buffer[i + 5] == 'H');
boolean b5_58 = (buffer[i + 5] == '%');
boolean b5_59 = (buffer[i + 5] == 'J');
boolean b5_60 = (buffer[i + 5] == '&');
boolean b5_61 = (buffer[i + 5] == '7');
boolean b5_62 = (buffer[i + 5] == 'F');
boolean b6_1 = (buffer[i + 6] == 'a');
boolean b6_2 = (buffer[i + 6] == 't');
boolean b6_3 = (buffer[i + 6] == '0');
boolean b6_4 = (buffer[i + 6] == 'm');
boolean b6_5 = (buffer[i + 6] == 'W');
boolean b6_6 = (buffer[i + 6] == 'N');
boolean b6_7 = (buffer[i + 6] == 'P');
boolean b6_8 = (buffer[i + 6] == 'l');
boolean b6_9 = (buffer[i + 6] == 'A');
boolean b6_10 = (buffer[i + 6] == 'p');
boolean b6_11 = (buffer[i + 6] == 's');
boolean b6_12 = (buffer[i + 6] == 'e');
boolean b6_13 = (buffer[i + 6] == 'i');
boolean b6_14 = (buffer[i + 6] == 'n');
boolean b6_15 = (buffer[i + 6] == '7');
boolean b6_16 = (buffer[i + 6] == '.');
boolean b6_17 = (buffer[i + 6] == 'o');
boolean b6_18 = (buffer[i + 6] == ' ');
boolean b6_19 = (buffer[i + 6] == 'b');
boolean b6_20 = (buffer[i + 6] == '|');
boolean b6_21 = (buffer[i + 6] == 'U');
boolean b6_22 = (buffer[i + 6] == '5');
boolean b6_23 = (buffer[i + 6] == 'f');
boolean b6_24 = (buffer[i + 6] == 'R');
boolean b6_25 = (buffer[i + 6] == 'B');
boolean b6_26 = (buffer[i + 6] == '1');
boolean b6_27 = (buffer[i + 6] == 'r');
boolean b6_28 = (buffer[i + 6] == 'w');
boolean b6_29 = (buffer[i + 6] == '_');
boolean b6_30 = (buffer[i + 6] == 'u');
boolean b6_31 = (buffer[i + 6] == 'v');
boolean b6_32 = (buffer[i + 6] == '/');
boolean b6_33 = (buffer[i + 6] == '-');
boolean b6_34 = (buffer[i + 6] == 'g');
boolean b6_35 = (buffer[i + 6] == '3');
boolean b6_36 = (buffer[i + 6] == 'd');
boolean b6_37 = (buffer[i + 6] == 'c');
boolean b6_38 = (buffer[i + 6] == 'H');
boolean b6_39 = (buffer[i + 6] == '?');
boolean b6_40 = (buffer[i + 6] == 'h');
boolean b6_41 = (buffer[i + 6] == 'G');
boolean b6_42 = (buffer[i + 6] == 'j');
boolean b6_43 = (buffer[i + 6] == '4');
boolean b6_44 = (buffer[i + 6] == '2');
boolean b6_45 = (buffer[i + 6] == '8');
boolean b6_46 = (buffer[i + 6] == 'k');
boolean b6_47 = (buffer[i + 6] == 'S');
boolean b6_48 = (buffer[i + 6] == 'T');
boolean b6_49 = (buffer[i + 6] == ']');
boolean b6_50 = (buffer[i + 6] == 'E');
boolean b6_51 = (buffer[i + 6] == 'M');
boolean b6_52 = (buffer[i + 6] == 'F');
boolean b6_53 = (buffer[i + 6] == 'y');
boolean b6_54 = (buffer[i + 6] == 'C');
boolean b6_55 = (buffer[i + 6] == 'D');
boolean b6_56 = (buffer[i + 6] == '%');
boolean b6_57 = (buffer[i + 6] == 'O');
boolean b6_58 = (buffer[i + 6] == 'L');
boolean b6_59 = (buffer[i + 6] == '>');
boolean b6_60 = (buffer[i + 6] == '=');
boolean b6_61 = (buffer[i + 6] == 'x');
boolean b6_62 = (buffer[i + 6] == '9');
boolean b6_63 = (buffer[i + 6] == 'q');
boolean b6_64 = (buffer[i + 6] == 'J');
boolean b7_1 = (buffer[i + 7] == 'z');
boolean b7_2 = (buffer[i + 7] == 'I');
boolean b7_3 = (buffer[i + 7] == '0');
boolean b7_4 = (buffer[i + 7] == 'W');
boolean b7_5 = (buffer[i + 7] == 'o');
boolean b7_6 = (buffer[i + 7] == 't');
boolean b7_7 = (buffer[i + 7] == 'e');
boolean b7_8 = (buffer[i + 7] == 'c');
boolean b7_9 = (buffer[i + 7] == 'a');
boolean b7_10 = (buffer[i + 7] == 'b');
boolean b7_11 = (buffer[i + 7] == 'A');
boolean b7_12 = (buffer[i + 7] == 'm');
boolean b7_13 = (buffer[i + 7] == 'u');
boolean b7_14 = (buffer[i + 7] == 'l');
boolean b7_15 = (buffer[i + 7] == 'v');
boolean b7_16 = (buffer[i + 7] == '|');
boolean b7_17 = (buffer[i + 7] == '.');
boolean b7_18 = (buffer[i + 7] == 'N');
boolean b7_19 = (buffer[i + 7] == 'i');
boolean b7_20 = (buffer[i + 7] == 'H');
boolean b7_21 = (buffer[i + 7] == 'd');
boolean b7_22 = (buffer[i + 7] == ' ');
boolean b7_23 = (buffer[i + 7] == '-');
boolean b7_24 = (buffer[i + 7] == 's');
boolean b7_25 = (buffer[i + 7] == 'n');
boolean b7_26 = (buffer[i + 7] == 'T');
boolean b7_27 = (buffer[i + 7] == '5');
boolean b7_28 = (buffer[i + 7] == '1');
boolean b7_29 = (buffer[i + 7] == 'r');
boolean b7_30 = (buffer[i + 7] == 'S');
boolean b7_31 = (buffer[i + 7] == '7');
boolean b7_32 = (buffer[i + 7] == 'O');
boolean b7_33 = (buffer[i + 7] == '3');
boolean b7_34 = (buffer[i + 7] == '/');
boolean b7_35 = (buffer[i + 7] == '_');
boolean b7_36 = (buffer[i + 7] == 'p');
boolean b7_37 = (buffer[i + 7] == 'f');
boolean b7_38 = (buffer[i + 7] == 'w');
boolean b7_39 = (buffer[i + 7] == 'k');
boolean b7_40 = (buffer[i + 7] == 'g');
boolean b7_41 = (buffer[i + 7] == 'h');
boolean b7_42 = (buffer[i + 7] == 'E');
boolean b7_43 = (buffer[i + 7] == '%');
boolean b7_44 = (buffer[i + 7] == '?');
boolean b7_45 = (buffer[i + 7] == 'j');
boolean b7_46 = (buffer[i + 7] == 'D');
boolean b7_47 = (buffer[i + 7] == '[');
boolean b7_48 = (buffer[i + 7] == 'y');
boolean b7_49 = (buffer[i + 7] == 'L');
boolean b7_50 = (buffer[i + 7] == '6');
boolean b7_51 = (buffer[i + 7] == '2');
boolean b7_52 = (buffer[i + 7] == 'G');
boolean b7_53 = (buffer[i + 7] == 'P');
boolean b7_54 = (buffer[i + 7] == 'x');
boolean b7_55 = (buffer[i + 7] == 'F');
boolean b7_56 = (buffer[i + 7] == '*');
boolean b7_57 = (buffer[i + 7] == 'R');
boolean b7_58 = (buffer[i + 7] == '4');
boolean b7_59 = (buffer[i + 7] == 'B');
boolean b7_60 = (buffer[i + 7] == 'M');
boolean b7_61 = (buffer[i + 7] == '<');
boolean b7_62 = (buffer[i + 7] == 'J');
boolean b7_63 = (buffer[i + 7] == 'U');
boolean b7_64 = (buffer[i + 7] == '\'');
boolean b7_65 = (buffer[i + 7] == 'C');
boolean b7_66 = (buffer[i + 7] == '>');
boolean b7_67 = (buffer[i + 7] == '=');
boolean b7_68 = (buffer[i + 7] == '8');
boolean b7_69 = (buffer[i + 7] == '&');
boolean b7_70 = (buffer[i + 7] == 'K');
boolean b8_1 = (buffer[i + 8] == 'w');
boolean b8_2 = (buffer[i + 8] == 'n');
boolean b8_3 = (buffer[i + 8] == ' ');
boolean b8_4 = (buffer[i + 8] == 'H');
boolean b8_5 = (buffer[i + 8] == 't');
boolean b8_6 = (buffer[i + 8] == 'z');
boolean b8_7 = (buffer[i + 8] == 'C');
boolean b8_8 = (buffer[i + 8] == '|');
boolean b8_9 = (buffer[i + 8] == 'r');
boolean b8_10 = (buffer[i + 8] == 'c');
boolean b8_11 = (buffer[i + 8] == 'g');
boolean b8_12 = (buffer[i + 8] == 'a');
boolean b8_13 = (buffer[i + 8] == 'A');
boolean b8_14 = (buffer[i + 8] == 'o');
boolean b8_15 = (buffer[i + 8] == '*');
boolean b8_16 = (buffer[i + 8] == 'l');
boolean b8_17 = (buffer[i + 8] == 'e');
boolean b8_18 = (buffer[i + 8] == 's');
boolean b8_19 = (buffer[i + 8] == 'v');
boolean b8_20 = (buffer[i + 8] == '/');
boolean b8_21 = (buffer[i + 8] == 'D');
boolean b8_22 = (buffer[i + 8] == 'T');
boolean b8_23 = (buffer[i + 8] == '_');
boolean b8_24 = (buffer[i + 8] == 'f');
boolean b8_25 = (buffer[i + 8] == '.');
boolean b8_26 = (buffer[i + 8] == 'd');
boolean b8_27 = (buffer[i + 8] == 'i');
boolean b8_28 = (buffer[i + 8] == '-');
boolean b8_29 = (buffer[i + 8] == 'S');
boolean b8_30 = (buffer[i + 8] == '3');
boolean b8_31 = (buffer[i + 8] == '0');
boolean b8_32 = (buffer[i + 8] == 'E');
boolean b8_33 = (buffer[i + 8] == 'b');
boolean b8_34 = (buffer[i + 8] == 'I');
boolean b8_35 = (buffer[i + 8] == 'y');
boolean b8_36 = (buffer[i + 8] == '4');
boolean b8_37 = (buffer[i + 8] == 'u');
boolean b8_38 = (buffer[i + 8] == 'h');
boolean b8_39 = (buffer[i + 8] == '?');
boolean b8_40 = (buffer[i + 8] == 'p');
boolean b8_41 = (buffer[i + 8] == 'm');
boolean b8_42 = (buffer[i + 8] == 'x');
boolean b8_43 = (buffer[i + 8] == 'V');
boolean b8_44 = (buffer[i + 8] == 'P');
boolean b8_45 = (buffer[i + 8] == '2');
boolean b8_46 = (buffer[i + 8] == 'W');
boolean b8_47 = (buffer[i + 8] == 'N');
boolean b8_48 = (buffer[i + 8] == 'R');
boolean b8_49 = (buffer[i + 8] == '~');
boolean b8_50 = (buffer[i + 8] == 'U');
boolean b8_51 = (buffer[i + 8] == '1');
boolean b8_52 = (buffer[i + 8] == 'B');
boolean b8_53 = (buffer[i + 8] == 'G');
boolean b8_54 = (buffer[i + 8] == 'Y');
boolean b8_55 = (buffer[i + 8] == 'M');
boolean b8_56 = (buffer[i + 8] == 'F');
boolean b8_57 = (buffer[i + 8] == 'X');
boolean b8_58 = (buffer[i + 8] == 'k');
boolean b8_59 = (buffer[i + 8] == 'Z');
boolean b8_60 = (buffer[i + 8] == '<');
boolean b8_61 = (buffer[i + 8] == '%');
boolean b8_62 = (buffer[i + 8] == 'O');
boolean b8_63 = (buffer[i + 8] == 'j');
boolean b8_64 = (buffer[i + 8] == '&');
boolean b8_65 = (buffer[i + 8] == 'J');
boolean b8_66 = (buffer[i + 8] == 'L');
boolean b8_67 = (buffer[i + 8] == '=');
boolean b8_68 = (buffer[i + 8] == '8');
boolean b9_1 = (buffer[i + 9] == 's');
boolean b9_2 = (buffer[i + 9] == 'f');
boolean b9_3 = (buffer[i + 9] == '0');
boolean b9_4 = (buffer[i + 9] == 'A');
boolean b9_5 = (buffer[i + 9] == 'e');
boolean b9_6 = (buffer[i + 9] == 'u');
boolean b9_7 = (buffer[i + 9] == 'S');
boolean b9_8 = (buffer[i + 9] == 'r');
boolean b9_9 = (buffer[i + 9] == '3');
boolean b9_10 = (buffer[i + 9] == 't');
boolean b9_11 = (buffer[i + 9] == 'g');
boolean b9_12 = (buffer[i + 9] == 'B');
boolean b9_13 = (buffer[i + 9] == 'y');
boolean b9_14 = (buffer[i + 9] == 'w');
boolean b9_15 = (buffer[i + 9] == 'c');
boolean b9_16 = (buffer[i + 9] == 'l');
boolean b9_17 = (buffer[i + 9] == 'd');
boolean b9_18 = (buffer[i + 9] == 'i');
boolean b9_19 = (buffer[i + 9] == 'H');
boolean b9_20 = (buffer[i + 9] == 'k');
boolean b9_21 = (buffer[i + 9] == '4');
boolean b9_22 = (buffer[i + 9] == ' ');
boolean b9_23 = (buffer[i + 9] == '8');
boolean b9_24 = (buffer[i + 9] == '.');
boolean b9_25 = (buffer[i + 9] == 'M');
boolean b9_26 = (buffer[i + 9] == '+');
boolean b9_27 = (buffer[i + 9] == '|');
boolean b9_28 = (buffer[i + 9] == 'T');
boolean b9_29 = (buffer[i + 9] == 'o');
boolean b9_30 = (buffer[i + 9] == '-');
boolean b9_31 = (buffer[i + 9] == '5');
boolean b9_32 = (buffer[i + 9] == 'n');
boolean b9_33 = (buffer[i + 9] == 'L');
boolean b9_34 = (buffer[i + 9] == 'O');
boolean b9_35 = (buffer[i + 9] == 'b');
boolean b9_36 = (buffer[i + 9] == 'C');
boolean b9_37 = (buffer[i + 9] == 'D');
boolean b9_38 = (buffer[i + 9] == '/');
boolean b9_39 = (buffer[i + 9] == 'a');
boolean b9_40 = (buffer[i + 9] == '?');
boolean b9_41 = (buffer[i + 9] == 'x');
boolean b9_42 = (buffer[i + 9] == 'p');
boolean b9_43 = (buffer[i + 9] == 'h');
boolean b9_44 = (buffer[i + 9] == 'm');
boolean b9_45 = (buffer[i + 9] == '9');
boolean b9_46 = (buffer[i + 9] == 'I');
boolean b9_47 = (buffer[i + 9] == 'E');
boolean b9_48 = (buffer[i + 9] == 'R');
boolean b9_49 = (buffer[i + 9] == 'v');
boolean b9_50 = (buffer[i + 9] == '_');
boolean b9_51 = (buffer[i + 9] == 'q');
boolean b9_52 = (buffer[i + 9] == 'V');
boolean b9_53 = (buffer[i + 9] == 'U');
boolean b9_54 = (buffer[i + 9] == '=');
boolean b9_55 = (buffer[i + 9] == '!');
boolean b9_56 = (buffer[i + 9] == 'K');
boolean b9_57 = (buffer[i + 9] == 'W');
boolean b9_58 = (buffer[i + 9] == '1');
boolean b9_59 = (buffer[i + 9] == 'F');
boolean b9_60 = (buffer[i + 9] == 'Q');
boolean b9_61 = (buffer[i + 9] == 'X');
boolean b9_62 = (buffer[i + 9] == 'N');
boolean b9_63 = (buffer[i + 9] == '2');
boolean b9_64 = (buffer[i + 9] == 'P');
boolean b9_65 = (buffer[i + 9] == '%');
boolean b9_66 = (buffer[i + 9] == 'G');
boolean b9_67 = (buffer[i + 9] == 'Z');
boolean b9_68 = (buffer[i + 9] == 'j');
boolean b10_1 = (buffer[i + 10] == 'x');
boolean b10_2 = (buffer[i + 10] == 'o');
boolean b10_3 = (buffer[i + 10] == '2');
boolean b10_4 = (buffer[i + 10] == 'T');
boolean b10_5 = (buffer[i + 10] == '|');
boolean b10_6 = (buffer[i + 10] == 'p');
boolean b10_7 = (buffer[i + 10] == 'a');
boolean b10_8 = (buffer[i + 10] == 'A');
boolean b10_9 = (buffer[i + 10] == 'F');
boolean b10_10 = (buffer[i + 10] == ' ');
boolean b10_11 = (buffer[i + 10] == 'i');
boolean b10_12 = (buffer[i + 10] == 'e');
boolean b10_13 = (buffer[i + 10] == '4');
boolean b10_14 = (buffer[i + 10] == '0');
boolean b10_15 = (buffer[i + 10] == 'k');
boolean b10_16 = (buffer[i + 10] == 'h');
boolean b10_17 = (buffer[i + 10] == 'r');
boolean b10_18 = (buffer[i + 10] == '1');
boolean b10_19 = (buffer[i + 10] == 't');
boolean b10_20 = (buffer[i + 10] == 'w');
boolean b10_21 = (buffer[i + 10] == 'n');
boolean b10_22 = (buffer[i + 10] == 'E');
boolean b10_23 = (buffer[i + 10] == 'O');
boolean b10_24 = (buffer[i + 10] == 'b');
boolean b10_25 = (buffer[i + 10] == '.');
boolean b10_26 = (buffer[i + 10] == 'R');
boolean b10_27 = (buffer[i + 10] == '+');
boolean b10_28 = (buffer[i + 10] == '3');
boolean b10_29 = (buffer[i + 10] == 'P');
boolean b10_30 = (buffer[i + 10] == 'd');
boolean b10_31 = (buffer[i + 10] == '@');
boolean b10_32 = (buffer[i + 10] == 's');
boolean b10_33 = (buffer[i + 10] == 'l');
boolean b10_34 = (buffer[i + 10] == 'N');
boolean b10_35 = (buffer[i + 10] == 'C');
boolean b10_36 = (buffer[i + 10] == 'M');
boolean b10_37 = (buffer[i + 10] == 'G');
boolean b10_38 = (buffer[i + 10] == 'L');
boolean b10_39 = (buffer[i + 10] == '5');
boolean b10_40 = (buffer[i + 10] == '7');
boolean b10_41 = (buffer[i + 10] == '6');
boolean b10_42 = (buffer[i + 10] == 'm');
boolean b10_43 = (buffer[i + 10] == 'D');
boolean b10_44 = (buffer[i + 10] == 'g');
boolean b10_45 = (buffer[i + 10] == '_');
boolean b10_46 = (buffer[i + 10] == '/');
boolean b10_47 = (buffer[i + 10] == 'c');
boolean b10_48 = (buffer[i + 10] == 'u');
boolean b10_49 = (buffer[i + 10] == 'q');
boolean b10_50 = (buffer[i + 10] == 'z');
boolean b10_51 = (buffer[i + 10] == 'y');
boolean b10_52 = (buffer[i + 10] == 'W');
boolean b10_53 = (buffer[i + 10] == '*');
boolean b10_54 = (buffer[i + 10] == '?');
boolean b10_55 = (buffer[i + 10] == '%');
boolean b10_56 = (buffer[i + 10] == 'v');
boolean b10_57 = (buffer[i + 10] == '~');
boolean b10_58 = (buffer[i + 10] == 'B');
boolean b10_59 = (buffer[i + 10] == 'f');
boolean b10_60 = (buffer[i + 10] == '-');
boolean b10_61 = (buffer[i + 10] == 'I');
boolean b10_62 = (buffer[i + 10] == 'V');
boolean b10_63 = (buffer[i + 10] == 'H');
boolean b10_64 = (buffer[i + 10] == 'Y');
boolean b10_65 = (buffer[i + 10] == 'J');
boolean b10_66 = (buffer[i + 10] == ',');
boolean b10_67 = (buffer[i + 10] == 'S');
boolean b10_68 = (buffer[i + 10] == 'X');
boolean b10_69 = (buffer[i + 10] == 'U');
boolean b10_70 = (buffer[i + 10] == 'j');
boolean b10_71 = (buffer[i + 10] == '&');
boolean b10_72 = (buffer[i + 10] == '=');
boolean b10_73 = (buffer[i + 10] == ')');
boolean b10_74 = (buffer[i + 10] == '9');
boolean b10_75 = (buffer[i + 10] == '(');
boolean b10_76 = (buffer[i + 10] == '<');
boolean b10_77 = (buffer[i + 10] == 'K');
boolean b11_1 = (buffer[i + 11] == '.');
boolean b11_2 = (buffer[i + 11] == '|');
boolean b11_3 = (buffer[i + 11] == ' ');
boolean b11_4 = (buffer[i + 11] == 'I');
boolean b11_5 = (buffer[i + 11] == '3');
boolean b11_6 = (buffer[i + 11] == 'h');
boolean b11_7 = (buffer[i + 11] == 'U');
boolean b11_8 = (buffer[i + 11] == 's');
boolean b11_9 = (buffer[i + 11] == 'T');
boolean b11_10 = (buffer[i + 11] == 'o');
boolean b11_11 = (buffer[i + 11] == 'v');
boolean b11_12 = (buffer[i + 11] == 'd');
boolean b11_13 = (buffer[i + 11] == 'i');
boolean b11_14 = (buffer[i + 11] == '0');
boolean b11_15 = (buffer[i + 11] == 'r');
boolean b11_16 = (buffer[i + 11] == 'k');
boolean b11_17 = (buffer[i + 11] == 't');
boolean b11_18 = (buffer[i + 11] == 'a');
boolean b11_19 = (buffer[i + 11] == 'w');
boolean b11_20 = (buffer[i + 11] == '1');
boolean b11_21 = (buffer[i + 11] == 'A');
boolean b11_22 = (buffer[i + 11] == 'P');
boolean b11_23 = (buffer[i + 11] == 'c');
boolean b11_24 = (buffer[i + 11] == 'L');
boolean b11_25 = (buffer[i + 11] == 'l');
boolean b11_26 = (buffer[i + 11] == 'e');
boolean b11_27 = (buffer[i + 11] == 'p');
boolean b11_28 = (buffer[i + 11] == '/');
boolean b11_29 = (buffer[i + 11] == 'O');
boolean b11_30 = (buffer[i + 11] == '+');
boolean b11_31 = (buffer[i + 11] == 'N');
boolean b11_32 = (buffer[i + 11] == '@');
boolean b11_33 = (buffer[i + 11] == 'R');
boolean b11_34 = (buffer[i + 11] == '%');
boolean b11_35 = (buffer[i + 11] == 'S');
boolean b11_36 = (buffer[i + 11] == '<');
boolean b11_37 = (buffer[i + 11] == 'M');
boolean b11_38 = (buffer[i + 11] == '5');
boolean b11_39 = (buffer[i + 11] == 'G');
boolean b11_40 = (buffer[i + 11] == 'W');
boolean b11_41 = (buffer[i + 11] == 'K');
boolean b11_42 = (buffer[i + 11] == 'F');
boolean b11_43 = (buffer[i + 11] == 'H');
boolean b11_44 = (buffer[i + 11] == 'f');
boolean b11_45 = (buffer[i + 11] == '_');
boolean b11_46 = (buffer[i + 11] == 'Y');
boolean b11_47 = (buffer[i + 11] == 'b');
boolean b11_48 = (buffer[i + 11] == 'm');
boolean b11_49 = (buffer[i + 11] == '2');
boolean b11_50 = (buffer[i + 11] == '-');
boolean b11_51 = (buffer[i + 11] == 'g');
boolean b11_52 = (buffer[i + 11] == 'n');
boolean b11_53 = (buffer[i + 11] == 'u');
boolean b11_54 = (buffer[i + 11] == 'C');
boolean b11_55 = (buffer[i + 11] == 'D');
boolean b11_56 = (buffer[i + 11] == '?');
boolean b11_57 = (buffer[i + 11] == 'V');
boolean b11_58 = (buffer[i + 11] == 'E');
boolean b11_59 = (buffer[i + 11] == '~');
boolean b11_60 = (buffer[i + 11] == 'y');
boolean b11_61 = (buffer[i + 11] == ',');
boolean b11_62 = (buffer[i + 11] == 'B');
boolean b11_63 = (buffer[i + 11] == 'z');
boolean b11_64 = (buffer[i + 11] == 'X');
boolean b11_65 = (buffer[i + 11] == '8');
boolean b11_66 = (buffer[i + 11] == '=');
boolean b11_67 = (buffer[i + 11] == 'Z');
boolean b11_68 = (buffer[i + 11] == 'J');
boolean b11_69 = (buffer[i + 11] == 'j');
boolean b11_70 = (buffer[i + 11] == '9');
boolean b11_71 = (buffer[i + 11] == 'q');
boolean b11_72 = (buffer[i + 11] == '&');
boolean b11_73 = (buffer[i + 11] == '(');
boolean b11_74 = (buffer[i + 11] == 'x');
boolean b12_1 = (buffer[i + 12] == 'h');
boolean b12_2 = (buffer[i + 12] == '0');
boolean b12_3 = (buffer[i + 12] == 'S');
boolean b12_4 = (buffer[i + 12] == 'A');
boolean b12_5 = (buffer[i + 12] == 'U');
boolean b12_6 = (buffer[i + 12] == 'F');
boolean b12_7 = (buffer[i + 12] == 'o');
boolean b12_8 = (buffer[i + 12] == 'e');
boolean b12_9 = (buffer[i + 12] == '5');
boolean b12_10 = (buffer[i + 12] == 'P');
boolean b12_11 = (buffer[i + 12] == 'p');
boolean b12_12 = (buffer[i + 12] == 'a');
boolean b12_13 = (buffer[i + 12] == ' ');
boolean b12_14 = (buffer[i + 12] == 'B');
boolean b12_15 = (buffer[i + 12] == 'w');
boolean b12_16 = (buffer[i + 12] == 'r');
boolean b12_17 = (buffer[i + 12] == 'x');
boolean b12_18 = (buffer[i + 12] == 'd');
boolean b12_19 = (buffer[i + 12] == '2');
boolean b12_20 = (buffer[i + 12] == 'O');
boolean b12_21 = (buffer[i + 12] == 'k');
boolean b12_22 = (buffer[i + 12] == 'l');
boolean b12_23 = (buffer[i + 12] == '3');
boolean b12_24 = (buffer[i + 12] == 'L');
boolean b12_25 = (buffer[i + 12] == 'i');
boolean b12_26 = (buffer[i + 12] == 'u');
boolean b12_27 = (buffer[i + 12] == 'j');
boolean b12_28 = (buffer[i + 12] == 'v');
boolean b12_29 = (buffer[i + 12] == '8');
boolean b12_30 = (buffer[i + 12] == '.');
boolean b12_31 = (buffer[i + 12] == 'C');
boolean b12_32 = (buffer[i + 12] == '|');
boolean b12_33 = (buffer[i + 12] == '1');
boolean b12_34 = (buffer[i + 12] == 't');
boolean b12_35 = (buffer[i + 12] == '7');
boolean b12_36 = (buffer[i + 12] == 's');
boolean b12_37 = (buffer[i + 12] == 'E');
boolean b12_38 = (buffer[i + 12] == 'I');
boolean b12_39 = (buffer[i + 12] == 'G');
boolean b12_40 = (buffer[i + 12] == '=');
boolean b12_41 = (buffer[i + 12] == 'T');
boolean b12_42 = (buffer[i + 12] == 'g');
boolean b12_43 = (buffer[i + 12] == 'D');
boolean b12_44 = (buffer[i + 12] == 'M');
boolean b12_45 = (buffer[i + 12] == '9');
boolean b12_46 = (buffer[i + 12] == 'c');
boolean b12_47 = (buffer[i + 12] == 'n');
boolean b12_48 = (buffer[i + 12] == 'f');
boolean b12_49 = (buffer[i + 12] == 'R');
boolean b12_50 = (buffer[i + 12] == '/');
boolean b12_51 = (buffer[i + 12] == 'b');
boolean b12_52 = (buffer[i + 12] == 'q');
boolean b12_53 = (buffer[i + 12] == 'm');
boolean b12_54 = (buffer[i + 12] == '%');
boolean b12_55 = (buffer[i + 12] == '4');
boolean b12_56 = (buffer[i + 12] == '?');
boolean b12_57 = (buffer[i + 12] == 'V');
boolean b12_58 = (buffer[i + 12] == 'z');
boolean b12_59 = (buffer[i + 12] == 'N');
boolean b12_60 = (buffer[i + 12] == 'X');
boolean b12_61 = (buffer[i + 12] == 'Y');
boolean b12_62 = (buffer[i + 12] == '*');
boolean b12_63 = (buffer[i + 12] == 'H');
boolean b12_64 = (buffer[i + 12] == '_');
boolean b12_65 = (buffer[i + 12] == 'y');
boolean b12_66 = (buffer[i + 12] == '-');
boolean b12_67 = (buffer[i + 12] == '&');
boolean b12_68 = (buffer[i + 12] == ')');
boolean b12_69 = (buffer[i + 12] == ':');
boolean b13_1 = (buffer[i + 13] == 's');
boolean b13_2 = (buffer[i + 13] == 'D');
boolean b13_3 = (buffer[i + 13] == '0');
boolean b13_4 = (buffer[i + 13] == 'I');
boolean b13_5 = (buffer[i + 13] == '|');
boolean b13_6 = (buffer[i + 13] == 'C');
boolean b13_7 = (buffer[i + 13] == 'E');
boolean b13_8 = (buffer[i + 13] == 'r');
boolean b13_9 = (buffer[i + 13] == 'e');
boolean b13_10 = (buffer[i + 13] == 'O');
boolean b13_11 = (buffer[i + 13] == 't');
boolean b13_12 = (buffer[i + 13] == 'i');
boolean b13_13 = (buffer[i + 13] == '4');
boolean b13_14 = (buffer[i + 13] == 'c');
boolean b13_15 = (buffer[i + 13] == 'o');
boolean b13_16 = (buffer[i + 13] == 'w');
boolean b13_17 = (buffer[i + 13] == 'h');
boolean b13_18 = (buffer[i + 13] == 'a');
boolean b13_19 = (buffer[i + 13] == 'g');
boolean b13_20 = (buffer[i + 13] == 'n');
boolean b13_21 = (buffer[i + 13] == '3');
boolean b13_22 = (buffer[i + 13] == 'A');
boolean b13_23 = (buffer[i + 13] == 'N');
boolean b13_24 = (buffer[i + 13] == 'k');
boolean b13_25 = (buffer[i + 13] == 'l');
boolean b13_26 = (buffer[i + 13] == 'v');
boolean b13_27 = (buffer[i + 13] == 'm');
boolean b13_28 = (buffer[i + 13] == '.');
boolean b13_29 = (buffer[i + 13] == 'K');
boolean b13_30 = (buffer[i + 13] == 'M');
boolean b13_31 = (buffer[i + 13] == '/');
boolean b13_32 = (buffer[i + 13] == ' ');
boolean b13_33 = (buffer[i + 13] == 'B');
boolean b13_34 = (buffer[i + 13] == '@');
boolean b13_35 = (buffer[i + 13] == 'W');
boolean b13_36 = (buffer[i + 13] == 'T');
boolean b13_37 = (buffer[i + 13] == 'u');
boolean b13_38 = (buffer[i + 13] == 'R');
boolean b13_39 = (buffer[i + 13] == '>');
boolean b13_40 = (buffer[i + 13] == 'S');
boolean b13_41 = (buffer[i + 13] == '2');
boolean b13_42 = (buffer[i + 13] == 'G');
boolean b13_43 = (buffer[i + 13] == '9');
boolean b13_44 = (buffer[i + 13] == '5');
boolean b13_45 = (buffer[i + 13] == 'd');
boolean b13_46 = (buffer[i + 13] == 'L');
boolean b13_47 = (buffer[i + 13] == 'p');
boolean b13_48 = (buffer[i + 13] == 'f');
boolean b13_49 = (buffer[i + 13] == '1');
boolean b13_50 = (buffer[i + 13] == 'x');
boolean b13_51 = (buffer[i + 13] == 'q');
boolean b13_52 = (buffer[i + 13] == '?');
boolean b13_53 = (buffer[i + 13] == 'X');
boolean b13_54 = (buffer[i + 13] == 'H');
boolean b13_55 = (buffer[i + 13] == 'U');
boolean b13_56 = (buffer[i + 13] == '-');
boolean b13_57 = (buffer[i + 13] == 'j');
boolean b13_58 = (buffer[i + 13] == 'y');
boolean b13_59 = (buffer[i + 13] == '%');
boolean b13_60 = (buffer[i + 13] == '*');
boolean b13_61 = (buffer[i + 13] == '_');
boolean b13_62 = (buffer[i + 13] == '=');
boolean b13_63 = (buffer[i + 13] == 'F');
boolean b13_64 = (buffer[i + 13] == 'P');
boolean b13_65 = (buffer[i + 13] == '6');
boolean b13_66 = (buffer[i + 13] == '8');
boolean b13_67 = (buffer[i + 13] == 'b');
boolean b13_68 = (buffer[i + 13] == '7');
boolean b13_69 = (buffer[i + 13] == '<');
boolean b13_70 = (buffer[i + 13] == 'V');
boolean b13_71 = (buffer[i + 13] == 'Q');
boolean b13_72 = (buffer[i + 13] == ':');
boolean b14_1 = (buffer[i + 14] == 'q');
boolean b14_2 = (buffer[i + 14] == '|');
boolean b14_3 = (buffer[i + 14] == 'T');
boolean b14_4 = (buffer[i + 14] == ' ');
boolean b14_5 = (buffer[i + 14] == 'e');
boolean b14_6 = (buffer[i + 14] == 't');
boolean b14_7 = (buffer[i + 14] == 'R');
boolean b14_8 = (buffer[i + 14] == 'r');
boolean b14_9 = (buffer[i + 14] == 'N');
boolean b14_10 = (buffer[i + 14] == 'n');
boolean b14_11 = (buffer[i + 14] == 'a');
boolean b14_12 = (buffer[i + 14] == '0');
boolean b14_13 = (buffer[i + 14] == '!');
boolean b14_14 = (buffer[i + 14] == 'x');
boolean b14_15 = (buffer[i + 14] == '[');
boolean b14_16 = (buffer[i + 14] == 'i');
boolean b14_17 = (buffer[i + 14] == 'y');
boolean b14_18 = (buffer[i + 14] == 'k');
boolean b14_19 = (buffer[i + 14] == '4');
boolean b14_20 = (buffer[i + 14] == 'A');
boolean b14_21 = (buffer[i + 14] == 'G');
boolean b14_22 = (buffer[i + 14] == 's');
boolean b14_23 = (buffer[i + 14] == 'z');
boolean b14_24 = (buffer[i + 14] == '*');
boolean b14_25 = (buffer[i + 14] == 'l');
boolean b14_26 = (buffer[i + 14] == 'd');
boolean b14_27 = (buffer[i + 14] == 'u');
boolean b14_28 = (buffer[i + 14] == '/');
boolean b14_29 = (buffer[i + 14] == 'g');
boolean b14_30 = (buffer[i + 14] == '>');
boolean b14_31 = (buffer[i + 14] == 'S');
boolean b14_32 = (buffer[i + 14] == 'h');
boolean b14_33 = (buffer[i + 14] == 'E');
boolean b14_34 = (buffer[i + 14] == '1');
boolean b14_35 = (buffer[i + 14] == 'f');
boolean b14_36 = (buffer[i + 14] == '@');
boolean b14_37 = (buffer[i + 14] == '.');
boolean b14_38 = (buffer[i + 14] == 'D');
boolean b14_39 = (buffer[i + 14] == 'L');
boolean b14_40 = (buffer[i + 14] == 'Q');
boolean b14_41 = (buffer[i + 14] == '?');
boolean b14_42 = (buffer[i + 14] == 'K');
boolean b14_43 = (buffer[i + 14] == 'p');
boolean b14_44 = (buffer[i + 14] == 'P');
boolean b14_45 = (buffer[i + 14] == 'B');
boolean b14_46 = (buffer[i + 14] == 'w');
boolean b14_47 = (buffer[i + 14] == '2');
boolean b14_48 = (buffer[i + 14] == 'm');
boolean b14_49 = (buffer[i + 14] == 'c');
boolean b14_50 = (buffer[i + 14] == '&');
boolean b14_51 = (buffer[i + 14] == '=');
boolean b14_52 = (buffer[i + 14] == 'F');
boolean b14_53 = (buffer[i + 14] == '3');
boolean b14_54 = (buffer[i + 14] == '-');
boolean b14_55 = (buffer[i + 14] == 'j');
boolean b14_56 = (buffer[i + 14] == 'o');
boolean b14_57 = (buffer[i + 14] == ']');
boolean b14_58 = (buffer[i + 14] == '~');
boolean b14_59 = (buffer[i + 14] == 'O');
boolean b14_60 = (buffer[i + 14] == '%');
boolean b14_61 = (buffer[i + 14] == 'M');
boolean b14_62 = (buffer[i + 14] == 'C');
boolean b14_63 = (buffer[i + 14] == '`');
boolean b14_64 = (buffer[i + 14] == 'v');
boolean b14_65 = (buffer[i + 14] == 'H');
boolean b14_66 = (buffer[i + 14] == '}');
boolean b14_67 = (buffer[i + 14] == 'b');
boolean b14_68 = (buffer[i + 14] == 'Y');
boolean b14_69 = (buffer[i + 14] == 'U');
boolean b14_70 = (buffer[i + 14] == 'Z');
boolean b14_71 = (buffer[i + 14] == 'V');
boolean b14_72 = (buffer[i + 14] == '_');
boolean b14_73 = (buffer[i + 14] == '(');
boolean b14_74 = (buffer[i + 14] == ':');
boolean b14_75 = (buffer[i + 14] == '#');
boolean b14_76 = (buffer[i + 14] == '{');
boolean b14_77 = (buffer[i + 14] == '7');
boolean b14_78 = (buffer[i + 14] == '6');
if(b14_4) {
pattern_id = 0;
}
if(b10_10 && b11_73 && b12_68 && b13_32 && b14_76) {
pattern_id = 1;
}
if(b10_10 && b11_1 && b12_1 && b13_11 && b14_8) {
pattern_id = 2;
}
if(b11_3 && b12_30 && b13_47 && b14_25) {
pattern_id = 3;
}
if(b6_18 && b7_34 && b8_4 && b9_28 && b10_4 && b11_22 && b12_50 && b13_49 && b14_37) {
pattern_id = 4;
}
if(b11_3 && b12_37 && b13_30 && b14_52) {
pattern_id = 5;
}
if(b9_22 && b10_63 && b11_9 && b12_41 && b13_64 && b14_28) {
pattern_id = 6;
}
if(b7_22 && b8_65 && b9_39 && b10_56 && b11_18 && b12_50 && b13_49 && b14_37) {
pattern_id = 7;
}
if(b8_3 && b9_14 && b10_16 && b11_26 && b12_16 && b13_9 && b14_4) {
pattern_id = 8;
}
if(b1_23 && b2_1 && b3_11 && b4_40 && b5_3 && b6_45 && b7_51 && b8_3 && b9_3 && b10_18 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 9;
}
if(b9_55 && b10_31 && b11_2 && b12_19 && b13_21 && b14_2) {
pattern_id = 10;
}
if(b14_60) {
pattern_id = 11;
}
if(b12_54 && b13_49 && b14_27) {
pattern_id = 12;
}
if(b12_54 && b13_41 && b14_12) {
pattern_id = 13;
}
if(b7_43 && b8_45 && b9_31 && b10_3 && b11_26 && b12_27 && b13_1 && b14_43) {
pattern_id = 14;
}
if(b2_43 && b3_51 && b4_48 && b5_58 && b6_44 && b7_68 && b8_61 && b9_63 && b10_74 && b11_30 && b12_54 && b13_68 && b14_45) {
pattern_id = 15;
}
if(b6_56 && b7_11 && b8_44 && b9_64 && b10_43 && b11_21 && b12_41 && b13_22 && b14_60) {
pattern_id = 16;
}
if(b1_37 && b2_45 && b3_46 && b4_14 && b5_32 && b6_21 && b7_26 && b8_32 && b9_48 && b10_34 && b11_21 && b12_44 && b13_7 && b14_60) {
pattern_id = 17;
}
if(b6_56 && b7_65 && b8_62 && b9_25 && b10_67 && b11_22 && b12_37 && b13_6 && b14_60) {
pattern_id = 18;
}
if(b4_52 && b5_53 && b6_3 && b7_43 && b8_68 && b9_12 && b10_4 && b11_25 && b12_54 && b13_2 && b14_62) {
pattern_id = 19;
}
if(b4_52 && b5_57 && b6_57 && b7_60 && b8_32 && b9_37 && b10_26 && b11_4 && b12_57 && b13_7 && b14_60) {
pattern_id = 20;
}
if(b5_58 && b6_38 && b7_32 && b8_55 && b9_47 && b10_29 && b11_21 && b12_41 && b13_54 && b14_60) {
pattern_id = 21;
}
if(b1_37 && b2_44 && b3_46 && b4_43 && b5_5 && b6_58 && b7_11 && b8_44 && b9_64 && b10_43 && b11_21 && b12_41 && b13_22 && b14_60) {
pattern_id = 22;
}
if(b2_43 && b3_8 && b4_53 && b5_45 && b6_57 && b7_18 && b8_29 && b9_47 && b10_26 && b11_57 && b12_37 && b13_38 && b14_60) {
pattern_id = 23;
}
if(b9_65 && b10_29 && b11_21 && b12_41 && b13_54 && b14_60) {
pattern_id = 24;
}
if(b6_56 && b7_53 && b8_13 && b9_28 && b10_63 && b11_58 && b12_60 && b13_36 && b14_60) {
pattern_id = 25;
}
if(b8_61 && b9_64 && b10_43 && b11_42 && b12_66 && b13_49 && b14_37) {
pattern_id = 26;
}
if(b2_43 && b3_35 && b4_3 && b5_56 && b6_41 && b7_57 && b8_13 && b9_25 && b10_43 && b11_21 && b12_41 && b13_22 && b14_60) {
pattern_id = 27;
}
if(b1_37 && b2_5 && b3_49 && b4_53 && b5_45 && b6_24 && b7_11 && b8_55 && b9_59 && b10_61 && b11_24 && b12_37 && b13_40 && b14_60) {
pattern_id = 28;
}
if(b7_43 && b8_44 && b9_48 && b10_23 && b11_37 && b12_10 && b13_36 && b14_60) {
pattern_id = 29;
}
if(b1_37 && b2_5 && b3_45 && b4_14 && b5_29 && b6_36 && b7_13 && b8_16 && b9_5 && b10_29 && b11_18 && b12_34 && b13_17 && b14_60) {
pattern_id = 30;
}
if(b7_43 && b8_44 && b9_53 && b10_58 && b11_24 && b12_38 && b13_6 && b14_60) {
pattern_id = 31;
}
if(b2_43 && b3_45 && b4_45 && b5_6 && b6_2 && b7_7 && b8_41 && b9_37 && b10_17 && b11_13 && b12_28 && b13_9 && b14_60) {
pattern_id = 32;
}
if(b3_50 && b4_11 && b5_36 && b6_11 && b7_6 && b8_17 && b9_44 && b10_26 && b11_10 && b12_7 && b13_11 && b14_60) {
pattern_id = 33;
}
if(b9_65 && b10_4 && b11_58 && b12_44 && b13_64 && b14_60) {
pattern_id = 34;
}
if(b10_55 && b11_9 && b12_44 && b13_64 && b14_60) {
pattern_id = 35;
}
if(b5_58 && b6_21 && b7_30 && b8_32 && b9_48 && b10_43 && b11_21 && b12_41 && b13_22 && b14_60) {
pattern_id = 36;
}
if(b3_50 && b4_44 && b5_12 && b6_50 && b7_57 && b8_21 && b9_34 && b10_36 && b11_21 && b12_38 && b13_23 && b14_60) {
pattern_id = 37;
}
if(b5_58 && b6_21 && b7_30 && b8_32 && b9_48 && b10_34 && b11_21 && b12_44 && b13_7 && b14_60) {
pattern_id = 38;
}
if(b2_43 && b3_39 && b4_11 && b5_20 && b6_24 && b7_53 && b8_48 && b9_34 && b10_9 && b11_4 && b12_24 && b13_7 && b14_60) {
pattern_id = 39;
}
if(b7_43 && b8_46 && b9_46 && b10_34 && b11_55 && b12_38 && b13_38 && b14_60) {
pattern_id = 40;
}
if(b8_64 && b9_39 && b10_59 && b11_44 && b12_25 && b13_45 && b14_51) {
pattern_id = 41;
}
if(b5_60 && b6_19 && b7_5 && b8_16 && b9_39 && b10_48 && b11_8 && b12_12 && b13_45 && b14_56) {
pattern_id = 42;
}
if(b8_64 && b9_18 && b10_21 && b11_17 && b12_25 && b13_47 && b14_51) {
pattern_id = 43;
}
if(b7_69 && b8_40 && b9_15 && b10_21 && b11_18 && b12_53 && b13_9 && b14_51) {
pattern_id = 44;
}
if(b10_71 && b11_8 && b12_21 && b13_49 && b14_51) {
pattern_id = 45;
}
if(b7_69 && b8_18 && b9_10 && b10_17 && b11_13 && b12_47 && b13_19 && b14_51) {
pattern_id = 46;
}
if(b11_73 && b12_68 && b13_32 && b14_76) {
pattern_id = 47;
}
if(b10_75 && b11_2 && b12_2 && b13_3 && b14_2) {
pattern_id = 48;
}
if(b10_73 && b11_72 && b12_18 && b13_11 && b14_51) {
pattern_id = 49;
}
if(b7_56 && b8_53 && b9_34 && b10_58 && b11_62 && b12_24 && b13_7 && b14_24) {
pattern_id = 50;
}
if(b8_15 && b9_19 && b10_22 && b11_24 && b12_24 && b13_10 && b14_24) {
pattern_id = 51;
}
if(b10_53 && b11_2 && b12_2 && b13_41 && b14_2) {
pattern_id = 52;
}
if(b9_26 && b10_27 && b11_30 && b12_12 && b13_11 && b14_32) {
pattern_id = 53;
}
if(b3_33 && b4_34 && b5_22 && b6_1 && b7_8 && b8_58 && b9_6 && b10_6 && b11_50 && b12_18 && b13_12 && b14_8) {
pattern_id = 54;
}
if(b5_19 && b6_23 && b7_29 && b8_14 && b9_29 && b10_19 && b11_2 && b12_2 && b13_3 && b14_2) {
pattern_id = 55;
}
if(b8_28 && b9_1 && b10_2 && b11_18 && b12_13 && b13_59 && b14_43) {
pattern_id = 56;
}
if(b14_37) {
pattern_id = 57;
}
if(b10_25 && b11_34 && b12_19 && b13_3 && b14_37) {
pattern_id = 58;
}
if(b13_28 && b14_37) {
pattern_id = 59;
}
if(b10_25 && b11_1 && b12_30 && b13_28 && b14_28) {
pattern_id = 60;
}
if(b12_30 && b13_28 && b14_28) {
pattern_id = 61;
}
if(b6_16 && b7_17 && b8_20 && b9_24 && b10_25 && b11_28 && b12_30 && b13_28 && b14_28) {
pattern_id = 62;
}
if(b7_17 && b8_25 && b9_27 && b10_39 && b11_54 && b12_32 && b13_28 && b14_37) {
pattern_id = 63;
}
if(b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 64;
}
if(b10_25 && b11_18 && b12_36 && b13_47 && b14_37) {
pattern_id = 65;
}
if(b10_25 && b11_47 && b12_12 && b13_11 && b14_41) {
pattern_id = 66;
}
if(b7_17 && b8_33 && b9_39 && b10_19 && b11_2 && b12_19 && b13_41 && b14_2) {
pattern_id = 67;
}
if(b11_1 && b12_51 && b13_12 && b14_10) {
pattern_id = 68;
}
if(b11_1 && b12_46 && b13_45 && b14_11) {
pattern_id = 69;
}
if(b9_24 && b10_47 && b11_48 && b12_18 && b13_52 && b14_50) {
pattern_id = 70;
}
if(b7_17 && b8_10 && b9_44 && b10_30 && b11_2 && b12_19 && b13_41 && b14_2) {
pattern_id = 71;
}
if(b11_1 && b12_46 && b13_20 && b14_35) {
pattern_id = 72;
}
if(b10_25 && b11_23 && b12_7 && b13_27 && b14_54) {
pattern_id = 73;
}
if(b10_25 && b11_23 && b12_36 && b13_47 && b14_37) {
pattern_id = 74;
}
if(b7_17 && b8_26 && b9_29 && b10_47 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 75;
}
if(b11_1 && b12_8 && b13_27 && b14_35) {
pattern_id = 76;
}
if(b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 77;
}
if(b8_25 && b9_5 && b10_1 && b11_26 && b12_67 && b13_17 && b14_51) {
pattern_id = 78;
}
if(b4_55 && b5_2 && b6_61 && b7_7 && b8_8 && b9_3 && b10_43 && b11_3 && b12_2 && b13_22 && b14_2) {
pattern_id = 79;
}
if(b7_17 && b8_24 && b9_29 && b10_17 && b11_19 && b12_12 && b13_8 && b14_26) {
pattern_id = 80;
}
if(b11_1 && b12_42 && b13_12 && b14_35) {
pattern_id = 81;
}
if(b7_17 && b8_11 && b9_18 && b10_59 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 82;
}
if(b3_34 && b4_6 && b5_24 && b6_23 && b7_44 && b8_12 && b9_15 && b10_19 && b11_13 && b12_7 && b13_20 && b14_51) {
pattern_id = 83;
}
if(b6_16 && b7_41 && b8_5 && b9_39 && b10_47 && b11_23 && b12_8 && b13_1 && b14_22) {
pattern_id = 84;
}
if(b7_17 && b8_38 && b9_10 && b10_44 && b11_15 && b12_7 && b13_37 && b14_43) {
pattern_id = 85;
}
if(b10_25 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 86;
}
if(b3_34 && b4_29 && b5_23 && b6_4 && b7_14 && b8_20 && b9_24 && b10_25 && b11_1 && b12_30 && b13_28 && b14_37) {
pattern_id = 87;
}
if(b7_17 && b8_38 && b9_10 && b10_42 && b11_25 && b12_56 && b13_3 && b14_37) {
pattern_id = 88;
}
if(b6_16 && b7_41 && b8_5 && b9_42 && b10_7 && b11_8 && b12_36 && b13_16 && b14_26) {
pattern_id = 89;
}
if(b11_1 && b12_1 && b13_11 && b14_8) {
pattern_id = 90;
}
if(b11_1 && b12_1 && b13_11 && b14_46) {
pattern_id = 91;
}
if(b11_1 && b12_25 && b13_45 && b14_11) {
pattern_id = 92;
}
if(b10_25 && b11_13 && b12_18 && b13_18 && b14_41) {
pattern_id = 93;
}
if(b11_1 && b12_25 && b13_45 && b14_1) {
pattern_id = 94;
}
if(b10_25 && b11_13 && b12_18 && b13_51 && b14_41) {
pattern_id = 95;
}
if(b10_25 && b11_69 && b12_47 && b13_25 && b14_43) {
pattern_id = 96;
}
if(b6_16 && b7_45 && b8_40 && b9_5 && b10_44 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 97;
}
if(b11_1 && b12_27 && b13_47 && b14_29) {
pattern_id = 98;
}
if(b7_17 && b8_63 && b9_42 && b10_44 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 99;
}
if(b11_1 && b12_27 && b13_1 && b14_43) {
pattern_id = 100;
}
if(b12_30 && b13_25 && b14_26) {
pattern_id = 101;
}
if(b11_1 && b12_53 && b13_15 && b14_26) {
pattern_id = 102;
}
if(b10_25 && b11_52 && b12_36 && b13_48 && b14_28) {
pattern_id = 103;
}
if(b4_55 && b5_13 && b6_18 && b7_20 && b8_22 && b9_28 && b10_29 && b11_28 && b12_33 && b13_28 && b14_34) {
pattern_id = 104;
}
if(b7_17 && b8_40 && b9_17 && b10_59 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 105;
}
if(b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 106;
}
if(b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 107;
}
if(b8_25 && b9_42 && b10_16 && b11_27 && b12_56 && b13_45 && b14_51) {
pattern_id = 108;
}
if(b7_17 && b8_40 && b9_43 && b10_6 && b11_56 && b12_25 && b13_47 && b14_51) {
pattern_id = 109;
}
if(b6_16 && b7_36 && b8_38 && b9_42 && b10_54 && b11_48 && b12_12 && b13_14 && b14_51) {
pattern_id = 110;
}
if(b3_34 && b4_12 && b5_7 && b6_10 && b7_44 && b8_41 && b9_5 && b10_19 && b11_6 && b12_7 && b13_45 && b14_51) {
pattern_id = 111;
}
if(b0_21 && b1_27 && b2_14 && b3_6 && b4_33 && b5_31 && b6_11 && b7_7 && b8_9 && b9_50 && b10_47 && b11_10 && b12_18 && b13_9 && b14_51) {
pattern_id = 112;
}
if(b12_30 && b13_47 && b14_25) {
pattern_id = 113;
}
if(b7_17 && b8_40 && b9_8 && b10_11 && b11_52 && b12_34 && b13_9 && b14_8) {
pattern_id = 114;
}
if(b12_30 && b13_8 && b14_11) {
pattern_id = 115;
}
if(b8_25 && b9_8 && b10_16 && b11_10 && b12_36 && b13_11 && b14_22) {
pattern_id = 116;
}
if(b11_1 && b12_16 && b13_27 && b14_43) {
pattern_id = 117;
}
if(b12_30 && b13_8 && b14_43) {
pattern_id = 118;
}
if(b12_30 && b13_8 && b14_6) {
pattern_id = 119;
}
if(b10_25 && b11_8 && b12_15 && b13_48 && b14_41) {
pattern_id = 120;
}
if(b11_1 && b12_15 && b13_27 && b14_35) {
pattern_id = 121;
}
if(b11_1 && b12_15 && b13_27 && b14_23) {
pattern_id = 122;
}
if(b7_17 && b8_1 && b9_14 && b10_20 && b11_45 && b12_12 && b13_14 && b14_25) {
pattern_id = 123;
}
if(b8_25 && b9_14 && b10_20 && b11_19 && b12_12 && b13_14 && b14_25) {
pattern_id = 124;
}
if(b11_1 && b12_58 && b13_12 && b14_43) {
pattern_id = 125;
}
if(b6_16 && b7_1 && b8_14 && b9_16 && b10_33 && b11_18 && b12_16 && b13_45 && b14_28) {
pattern_id = 126;
}
if(b14_28) {
pattern_id = 127;
}
if(b12_50 && b13_59 && b14_60) {
pattern_id = 128;
}
if(b11_28 && b12_54 && b13_3 && b14_12) {
pattern_id = 129;
}
if(b9_38 && b10_53 && b11_1 && b12_25 && b13_45 && b14_49) {
pattern_id = 130;
}
if(b7_34 && b8_15 && b9_24 && b10_32 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 131;
}
if(b10_46 && b11_1 && b12_30 && b13_28 && b14_37) {
pattern_id = 132;
}
if(b8_20 && b9_24 && b10_25 && b11_28 && b12_30 && b13_28 && b14_28) {
pattern_id = 133;
}
if(b5_10 && b6_16 && b7_46 && b8_29 && b9_50 && b10_67 && b11_17 && b12_7 && b13_8 && b14_5) {
pattern_id = 134;
}
if(b5_10 && b6_16 && b7_55 && b8_52 && b9_36 && b10_61 && b11_52 && b12_18 && b13_9 && b14_14) {
pattern_id = 135;
}
if(b1_8 && b2_30 && b3_21 && b4_5 && b5_6 && b6_40 && b7_35 && b8_38 && b9_18 && b10_32 && b11_17 && b12_7 && b13_8 && b14_17) {
pattern_id = 136;
}
if(b4_23 && b5_47 && b6_37 && b7_9 && b8_10 && b9_43 && b10_12 && b11_28 && b12_56 && b13_48 && b14_51) {
pattern_id = 137;
}
if(b6_32 && b7_17 && b8_38 && b9_18 && b10_32 && b11_17 && b12_7 && b13_8 && b14_17) {
pattern_id = 138;
}
if(b5_10 && b6_16 && b7_25 && b8_18 && b9_15 && b10_2 && b11_52 && b12_48 && b13_12 && b14_29) {
pattern_id = 139;
}
if(b9_38 && b10_25 && b11_27 && b12_8 && b13_8 && b14_35) {
pattern_id = 140;
}
if(b2_16 && b3_34 && b4_7 && b5_42 && b6_14 && b7_34 && b8_17 && b9_32 && b10_19 && b11_15 && b12_25 && b13_9 && b14_22) {
pattern_id = 141;
}
if(b7_34 && b8_20 && b9_38 && b10_46 && b11_28 && b12_50 && b13_31 && b14_28) {
pattern_id = 142;
}
if(b8_20 && b9_3 && b10_25 && b11_51 && b12_25 && b13_48 && b14_41) {
pattern_id = 143;
}
if(b4_23 && b5_9 && b6_32 && b7_22 && b8_4 && b9_28 && b10_4 && b11_22 && b12_50 && b13_49 && b14_37) {
pattern_id = 144;
}
if(b7_34 && b8_31 && b9_3 && b10_14 && b11_1 && b12_27 && b13_47 && b14_29) {
pattern_id = 145;
}
if(b3_22 && b4_42 && b5_41 && b6_32 && b7_37 && b8_17 && b9_5 && b10_30 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 146;
}
if(b3_22 && b4_42 && b5_41 && b6_32 && b7_37 && b8_14 && b9_8 && b10_42 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 147;
}
if(b12_50 && b13_41 && b14_12) {
pattern_id = 148;
}
if(b13_31 && b14_41) {
pattern_id = 149;
}
if(b9_38 && b10_54 && b11_1 && b12_27 && b13_1 && b14_43) {
pattern_id = 150;
}
if(b10_46 && b11_56 && b12_44 && b13_62 && b14_38) {
pattern_id = 151;
}
if(b10_46 && b11_56 && b12_48 && b13_62 && b14_11) {
pattern_id = 152;
}
if(b4_23 && b5_35 && b6_34 && b7_38 && b8_18 && b9_50 && b10_17 && b11_12 && b12_40 && b13_14 && b14_8) {
pattern_id = 153;
}
if(b11_28 && b12_56 && b13_37 && b14_51) {
pattern_id = 154;
}
if(b2_16 && b3_4 && b4_26 && b5_19 && b6_1 && b7_21 && b8_41 && b9_18 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 155;
}
if(b4_23 && b5_5 && b6_36 && b7_12 && b8_27 && b9_32 && b10_16 && b11_17 && b12_53 && b13_25 && b14_72) {
pattern_id = 156;
}
if(b7_34 && b8_13 && b9_32 && b10_9 && b11_10 && b12_16 && b13_27 && b14_47) {
pattern_id = 157;
}
if(b6_32 && b7_11 && b8_2 && b9_13 && b10_9 && b11_10 && b12_16 && b13_27 && b14_47) {
pattern_id = 158;
}
if(b2_16 && b3_44 && b4_11 && b5_43 && b6_1 && b7_19 && b8_16 && b9_10 && b10_2 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 159;
}
if(b3_22 && b4_43 && b5_44 && b6_47 && b7_34 && b8_32 && b9_32 && b10_19 && b11_15 && b12_25 && b13_9 && b14_22) {
pattern_id = 160;
}
if(b2_16 && b3_44 && b4_13 && b5_21 && b6_11 && b7_5 && b8_16 && b9_5 && b10_63 && b11_26 && b12_22 && b13_47 && b14_28) {
pattern_id = 161;
}
if(b7_34 && b8_21 && b9_12 && b10_13 && b11_40 && b12_8 && b13_67 && b14_28) {
pattern_id = 162;
}
if(b3_22 && b4_36 && b5_23 && b6_10 && b7_30 && b8_12 && b9_49 && b10_12 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 163;
}
if(b0_4 && b1_19 && b2_25 && b3_6 && b4_11 && b5_4 && b6_31 && b7_7 && b8_7 && b9_7 && b10_29 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 164;
}
if(b0_4 && b1_19 && b2_25 && b3_6 && b4_11 && b5_4 && b6_31 && b7_7 && b8_7 && b9_52 && b10_29 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 165;
}
if(b5_10 && b6_41 && b7_4 && b8_46 && b9_47 && b10_58 && b11_1 && b12_37 && b13_53 && b14_33) {
pattern_id = 166;
}
if(b4_23 && b5_45 && b6_5 && b7_4 && b8_32 && b9_12 && b10_25 && b11_58 && b12_60 && b13_7 && b14_41) {
pattern_id = 167;
}
if(b9_38 && b10_63 && b11_31 && b12_4 && b13_64 && b14_34) {
pattern_id = 168;
}
if(b5_10 && b6_64 && b7_53 && b8_28 && b9_68 && b10_7 && b11_28 && b12_27 && b13_1 && b14_41) {
pattern_id = 169;
}
if(b8_20 && b9_33 && b10_52 && b11_39 && b12_12 && b13_11 && b14_5) {
pattern_id = 170;
}
if(b1_8 && b2_44 && b3_20 && b4_24 && b5_6 && b6_41 && b7_5 && b8_25 && b9_42 && b10_16 && b11_27 && b12_56 && b13_22 && b14_51) {
pattern_id = 171;
}
if(b3_22 && b4_14 && b5_4 && b6_37 && b7_41 && b8_27 && b9_32 && b10_12 && b11_4 && b12_47 && b13_48 && b14_56) {
pattern_id = 172;
}
if(b3_22 && b4_14 && b5_6 && b6_4 && b7_60 && b8_12 && b9_1 && b10_15 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 173;
}
if(b10_46 && b11_31 && b12_5 && b13_46 && b14_28) {
pattern_id = 174;
}
if(b4_23 && b5_18 && b6_12 && b7_24 && b8_18 && b9_6 && b10_32 && b11_9 && b12_8 && b13_1 && b14_6) {
pattern_id = 175;
}
if(b1_8 && b2_49 && b3_20 && b4_9 && b5_6 && b6_32 && b7_40 && b8_12 && b9_10 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 176;
}
if(b0_4 && b1_1 && b2_3 && b3_29 && b4_7 && b5_10 && b6_34 && b7_9 && b8_5 && b9_5 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 177;
}
if(b10_46 && b11_22 && b12_49 && b13_23 && b14_28) {
pattern_id = 178;
}
if(b1_8 && b2_26 && b3_31 && b4_37 && b5_28 && b6_13 && b7_6 && b8_29 && b9_5 && b10_17 && b11_11 && b12_22 && b13_9 && b14_6) {
pattern_id = 179;
}
if(b1_8 && b2_26 && b3_20 && b4_18 && b5_42 && b6_12 && b7_29 && b8_41 && b9_39 && b10_47 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 180;
}
if(b5_10 && b6_47 && b7_7 && b8_5 && b9_6 && b10_6 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 181;
}
if(b2_16 && b3_45 && b4_12 && b5_4 && b6_4 && b7_42 && b8_42 && b9_15 && b10_6 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 182;
}
if(b5_10 && b6_48 && b7_32 && b8_44 && b9_58 && b10_14 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 183;
}
if(b5_10 && b6_48 && b7_19 && b8_5 && b9_16 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 184;
}
if(b7_34 && b8_50 && b9_42 && b10_44 && b11_35 && b12_28 && b13_8 && b14_28) {
pattern_id = 185;
}
if(b7_34 && b8_46 && b9_47 && b10_58 && b11_50 && b12_38 && b13_23 && b14_52) {
pattern_id = 186;
}
if(b3_22 && b4_46 && b5_2 && b6_19 && b7_25 && b8_17 && b9_14 && b10_32 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 187;
}
if(b0_4 && b1_30 && b2_26 && b3_42 && b4_38 && b5_37 && b6_17 && b7_25 && b8_24 && b9_18 && b10_44 && b11_1 && b12_17 && b13_27 && b14_25) {
pattern_id = 188;
}
if(b10_46 && b11_46 && b12_12 && b13_33 && b14_45) {
pattern_id = 189;
}
if(b7_34 && b8_23 && b9_39 && b10_30 && b11_48 && b12_25 && b13_20 && b14_28) {
pattern_id = 190;
}
if(b5_10 && b6_29 && b7_12 && b8_17 && b9_44 && b10_45 && b11_47 && b12_25 && b13_20 && b14_28) {
pattern_id = 191;
}
if(b5_10 && b6_29 && b7_15 && b8_5 && b9_18 && b10_45 && b11_47 && b12_25 && b13_20 && b14_28) {
pattern_id = 192;
}
if(b1_8 && b2_12 && b3_26 && b4_24 && b5_24 && b6_29 && b7_19 && b8_2 && b9_2 && b10_25 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 193;
}
if(b6_32 && b7_35 && b8_19 && b9_10 && b10_11 && b11_45 && b12_16 && b13_47 && b14_49) {
pattern_id = 194;
}
if(b3_22 && b4_5 && b5_41 && b6_36 && b7_19 && b8_18 && b9_42 && b10_28 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 195;
}
if(b2_16 && b3_5 && b4_42 && b5_28 && b6_13 && b7_24 && b8_40 && b9_9 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 196;
}
if(b6_32 && b7_9 && b8_51 && b9_1 && b10_19 && b11_18 && b12_34 && b13_1 && b14_28) {
pattern_id = 197;
}
if(b10_46 && b11_18 && b12_51 && b13_41 && b14_28) {
pattern_id = 198;
}
if(b4_23 && b5_4 && b6_37 && b7_6 && b8_27 && b9_49 && b10_12 && b11_1 && b12_22 && b13_15 && b14_29) {
pattern_id = 199;
}
if(b8_20 && b9_39 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 200;
}
if(b1_8 && b2_18 && b3_37 && b4_41 && b5_25 && b6_12 && b7_12 && b8_33 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 201;
}
if(b7_34 && b8_12 && b9_17 && b10_47 && b11_60 && b12_46 && b13_25 && b14_5) {
pattern_id = 202;
}
if(b7_34 && b8_12 && b9_17 && b10_30 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 203;
}
if(b5_10 && b6_1 && b7_21 && b8_41 && b9_18 && b10_21 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 204;
}
if(b4_23 && b5_4 && b6_36 && b7_12 && b8_27 && b9_32 && b10_25 && b11_27 && b12_1 && b13_47 && b14_53) {
pattern_id = 205;
}
if(b2_16 && b3_5 && b4_21 && b5_25 && b6_13 && b7_25 && b8_25 && b9_42 && b10_16 && b11_27 && b12_56 && b13_48 && b14_51) {
pattern_id = 206;
}
if(b6_32 && b7_9 && b8_26 && b9_44 && b10_11 && b11_52 && b12_30 && b13_47 && b14_25) {
pattern_id = 207;
}
if(b7_34 && b8_12 && b9_17 && b10_42 && b11_13 && b12_47 && b13_61 && b14_28) {
pattern_id = 208;
}
if(b0_4 && b1_24 && b2_37 && b3_23 && b4_19 && b5_21 && b6_29 && b7_7 && b8_26 && b9_18 && b10_19 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 209;
}
if(b3_22 && b4_5 && b5_28 && b6_4 && b7_19 && b8_2 && b9_50 && b10_59 && b11_13 && b12_22 && b13_9 && b14_22) {
pattern_id = 210;
}
if(b0_4 && b1_24 && b2_37 && b3_23 && b4_19 && b5_21 && b6_29 && b7_41 && b8_17 && b9_16 && b10_6 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 211;
}
if(b4_23 && b5_4 && b6_36 && b7_12 && b8_27 && b9_32 && b10_33 && b11_10 && b12_42 && b13_12 && b14_10) {
pattern_id = 212;
}
if(b7_34 && b8_12 && b9_17 && b10_32 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 213;
}
if(b8_20 && b9_39 && b10_59 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 214;
}
if(b1_8 && b2_18 && b3_17 && b4_23 && b5_13 && b6_8 && b7_13 && b8_11 && b9_18 && b10_21 && b11_1 && b12_46 && b13_8 && b14_14) {
pattern_id = 215;
}
if(b6_32 && b7_9 && b8_11 && b9_16 && b10_11 && b11_48 && b12_11 && b13_1 && b14_5) {
pattern_id = 216;
}
if(b6_32 && b7_9 && b8_16 && b9_35 && b10_48 && b11_48 && b12_30 && b13_47 && b14_25) {
pattern_id = 217;
}
if(b5_10 && b6_1 && b7_14 && b8_17 && b9_8 && b10_19 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 218;
}
if(b4_23 && b5_4 && b6_8 && b7_19 && b8_33 && b9_39 && b10_24 && b11_18 && b12_30 && b13_47 && b14_25) {
pattern_id = 219;
}
if(b0_4 && b1_24 && b2_28 && b3_12 && b4_20 && b5_4 && b6_19 && b7_9 && b8_25 && b9_42 && b10_33 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 220;
}
if(b1_8 && b2_18 && b3_16 && b4_19 && b5_2 && b6_14 && b7_37 && b8_14 && b9_8 && b10_42 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 221;
}
if(b6_32 && b7_9 && b8_16 && b9_13 && b10_7 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 222;
}
if(b6_32 && b7_9 && b8_2 && b9_32 && b10_2 && b11_53 && b12_47 && b13_14 && b14_5) {
pattern_id = 223;
}
if(b8_20 && b9_39 && b10_21 && b11_10 && b12_47 && b13_58 && b14_28) {
pattern_id = 224;
}
if(b8_20 && b9_39 && b10_21 && b11_8 && b12_30 && b13_47 && b14_25) {
pattern_id = 225;
}
if(b7_34 && b8_12 && b9_32 && b10_32 && b11_1 && b12_11 && b13_25 && b14_41) {
pattern_id = 226;
}
if(b5_10 && b6_1 && b7_36 && b8_17 && b9_41 && b10_12 && b11_23 && b12_30 && b13_47 && b14_25) {
pattern_id = 227;
}
if(b7_34 && b8_12 && b9_42 && b10_11 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 228;
}
if(b4_23 && b5_4 && b6_10 && b7_19 && b8_25 && b9_42 && b10_16 && b11_27 && b12_56 && b13_45 && b14_51) {
pattern_id = 229;
}
if(b10_46 && b11_18 && b12_11 && b13_12 && b14_28) {
pattern_id = 230;
}
if(b4_23 && b5_4 && b6_10 && b7_19 && b8_20 && b9_1 && b10_19 && b11_18 && b12_34 && b13_37 && b14_22) {
pattern_id = 231;
}
if(b2_16 && b3_5 && b4_12 && b5_13 && b6_32 && b7_40 && b8_17 && b9_29 && b10_11 && b11_27 && b12_30 && b13_57 && b14_22) {
pattern_id = 232;
}
if(b3_22 && b4_5 && b5_13 && b6_10 && b7_35 && b8_18 && b9_10 && b10_7 && b11_1 && b12_36 && b13_11 && b14_48) {
pattern_id = 233;
}
if(b8_20 && b9_39 && b10_17 && b11_23 && b12_1 && b13_12 && b14_5) {
pattern_id = 234;
}
if(b6_32 && b7_9 && b8_9 && b9_11 && b10_32 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 235;
}
if(b6_32 && b7_9 && b8_9 && b9_11 && b10_32 && b11_1 && b12_46 && b13_27 && b14_26) {
pattern_id = 236;
}
if(b4_23 && b5_4 && b6_11 && b7_35 && b8_1 && b9_5 && b10_24 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 237;
}
if(b3_22 && b4_5 && b5_6 && b6_29 && b7_38 && b8_17 && b9_35 && b10_13 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 238;
}
if(b8_20 && b9_39 && b10_19 && b11_68 && b12_36 && b13_31 && b14_64) {
pattern_id = 239;
}
if(b4_23 && b5_4 && b6_2 && b7_5 && b8_41 && b9_18 && b10_47 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 240;
}
if(b3_22 && b4_5 && b5_31 && b6_46 && b7_6 && b8_27 && b9_29 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 241;
}
if(b3_22 && b4_5 && b5_31 && b6_2 && b7_41 && b8_14 && b9_8 && b10_32 && b11_1 && b12_11 && b13_16 && b14_26) {
pattern_id = 242;
}
if(b2_16 && b3_5 && b4_32 && b5_23 && b6_17 && b7_41 && b8_5 && b9_44 && b10_33 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 243;
}
if(b4_23 && b5_4 && b6_28 && b7_24 && b8_5 && b9_39 && b10_19 && b11_8 && b12_30 && b13_47 && b14_25) {
pattern_id = 244;
}
if(b3_22 && b4_5 && b5_27 && b6_11 && b7_6 && b8_12 && b9_10 && b10_32 && b11_1 && b12_11 && b13_25 && b14_41) {
pattern_id = 245;
}
if(b2_16 && b3_5 && b4_30 && b5_19 && b6_1 && b7_21 && b8_41 && b9_18 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 246;
}
if(b7_34 && b8_12 && b9_41 && b10_32 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 247;
}
if(b4_23 && b5_22 && b6_32 && b7_36 && b8_58 && b9_11 && b10_46 && b11_9 && b12_19 && b13_3 && b14_47) {
pattern_id = 248;
}
if(b7_34 && b8_33 && b9_38 && b10_32 && b11_6 && b12_7 && b13_9 && b14_28) {
pattern_id = 249;
}
if(b0_4 && b1_2 && b2_36 && b3_22 && b4_20 && b5_48 && b6_33 && b7_19 && b8_2 && b9_15 && b10_33 && b11_53 && b12_18 && b13_9 && b14_28) {
pattern_id = 250;
}
if(b8_20 && b9_35 && b10_7 && b11_23 && b12_21 && b13_37 && b14_43) {
pattern_id = 251;
}
if(b10_46 && b11_47 && b12_12 && b13_1 && b14_32) {
pattern_id = 252;
}
if(b4_23 && b5_22 && b6_19 && b7_23 && b8_38 && b9_18 && b10_32 && b11_17 && b12_30 && b13_1 && b14_32) {
pattern_id = 253;
}
if(b3_22 && b4_20 && b5_22 && b6_33 && b7_41 && b8_27 && b9_1 && b10_19 && b11_1 && b12_36 && b13_17 && b14_41) {
pattern_id = 254;
}
if(b1_8 && b2_21 && b3_21 && b4_34 && b5_7 && b6_13 && b7_24 && b8_5 && b9_16 && b10_2 && b11_51 && b12_30 && b13_1 && b14_32) {
pattern_id = 255;
}
if(b1_8 && b2_21 && b3_21 && b4_34 && b5_7 && b6_13 && b7_24 && b8_5 && b9_1 && b10_56 && b11_23 && b12_30 && b13_1 && b14_32) {
pattern_id = 256;
}
if(b1_8 && b2_21 && b3_21 && b4_34 && b5_7 && b6_17 && b7_24 && b8_5 && b9_1 && b10_56 && b11_23 && b12_30 && b13_1 && b14_32) {
pattern_id = 257;
}
if(b0_4 && b1_2 && b2_21 && b3_33 && b4_29 && b5_29 && b6_11 && b7_6 && b8_18 && b9_49 && b10_47 && b11_1 && b12_36 && b13_17 && b14_41) {
pattern_id = 258;
}
if(b5_10 && b6_19 && b7_10 && b8_28 && b9_8 && b10_12 && b11_27 && b12_30 && b13_1 && b14_32) {
pattern_id = 259;
}
if(b2_16 && b3_21 && b4_20 && b5_19 && b6_27 && b7_7 && b8_40 && b9_16 && b10_2 && b11_51 && b12_30 && b13_1 && b14_32) {
pattern_id = 260;
}
if(b2_16 && b3_21 && b4_20 && b5_10 && b6_13 && b7_25 && b8_26 && b9_5 && b10_1 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 261;
}
if(b0_4 && b1_2 && b2_21 && b3_40 && b4_7 && b5_25 && b6_13 && b7_14 && b8_27 && b9_5 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 262;
}
if(b0_4 && b1_2 && b2_21 && b3_27 && b4_23 && b5_6 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 263;
}
if(b1_8 && b2_21 && b3_21 && b4_7 && b5_34 && b6_23 && b7_5 && b8_9 && b9_6 && b10_42 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 264;
}
if(b6_32 && b7_10 && b8_26 && b9_18 && b10_17 && b11_1 && b12_1 && b13_11 && b14_8) {
pattern_id = 265;
}
if(b0_4 && b1_2 && b2_3 && b3_3 && b4_5 && b5_10 && b6_17 && b7_29 && b8_26 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 266;
}
if(b3_22 && b4_20 && b5_24 && b6_34 && b7_8 && b8_14 && b9_32 && b10_59 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 267;
}
if(b8_20 && b9_35 && b10_11 && b11_52 && b12_50 && b13_1 && b14_32) {
pattern_id = 268;
}
if(b3_22 && b4_20 && b5_21 && b6_19 && b7_37 && b8_14 && b9_8 && b10_42 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 269;
}
if(b6_32 && b7_10 && b8_14 && b9_29 && b10_15 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 270;
}
if(b2_16 && b3_21 && b4_13 && b5_29 && b6_46 && b7_12 && b8_12 && b9_8 && b10_15 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 271;
}
if(b5_10 && b6_19 && b7_5 && b8_14 && b9_10 && b10_16 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 272;
}
if(b3_22 && b4_20 && b5_6 && b6_34 && b7_13 && b8_17 && b9_1 && b10_19 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 273;
}
if(b4_23 && b5_22 && b6_11 && b7_14 && b8_27 && b9_1 && b10_19 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 274;
}
if(b7_34 && b8_33 && b9_1 && b10_42 && b11_25 && b12_30 && b13_47 && b14_25) {
pattern_id = 275;
}
if(b2_16 && b3_28 && b4_5 && b5_11 && b6_40 && b7_7 && b8_41 && b9_11 && b10_17 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 276;
}
if(b3_22 && b4_28 && b5_4 && b6_8 && b7_35 && b8_41 && b9_39 && b10_15 && b11_26 && b12_30 && b13_47 && b14_25) {
pattern_id = 277;
}
if(b6_32 && b7_8 && b8_12 && b9_16 && b10_12 && b11_52 && b12_18 && b13_18 && b14_8) {
pattern_id = 278;
}
if(b2_16 && b3_28 && b4_5 && b5_8 && b6_12 && b7_25 && b8_26 && b9_39 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 279;
}
if(b8_20 && b9_15 && b10_7 && b11_48 && b12_11 && b13_18 && b14_22) {
pattern_id = 280;
}
if(b3_22 && b4_28 && b5_4 && b6_4 && b7_36 && b8_12 && b9_1 && b10_54 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 281;
}
if(b5_10 && b6_37 && b7_9 && b8_9 && b9_35 && b10_2 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 282;
}
if(b6_32 && b7_8 && b8_12 && b9_8 && b10_19 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 283;
}
if(b4_23 && b5_11 && b6_1 && b7_29 && b8_5 && b9_9 && b10_3 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 284;
}
if(b3_22 && b4_28 && b5_4 && b6_2 && b7_9 && b8_16 && b9_29 && b10_44 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 285;
}
if(b5_10 && b6_37 && b7_9 && b8_5 && b9_11 && b10_51 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 286;
}
if(b7_34 && b8_10 && b9_39 && b10_19 && b11_13 && b12_47 && b13_48 && b14_56) {
pattern_id = 287;
}
if(b4_23 && b5_11 && b6_12 && b7_29 && b8_18 && b9_49 && b10_17 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 288;
}
if(b3_22 && b4_28 && b5_30 && b6_37 && b7_9 && b8_10 && b9_43 && b10_12 && b11_1 && b12_53 && b13_18 && b14_43) {
pattern_id = 289;
}
if(b4_23 && b5_11 && b6_23 && b7_40 && b8_1 && b9_18 && b10_50 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 290;
}
if(b3_22 && b4_28 && b5_16 && b6_23 && b7_5 && b8_9 && b9_6 && b10_42 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 291;
}
if(b6_32 && b7_8 && b8_11 && b9_18 && b10_60 && b11_47 && b12_25 && b13_20 && b14_28) {
pattern_id = 292;
}
if(b0_4 && b1_21 && b2_11 && b3_12 && b4_34 && b5_22 && b6_13 && b7_25 && b8_20 && b9_15 && b10_44 && b11_13 && b12_46 && b13_11 && b14_25) {
pattern_id = 293;
}
if(b0_4 && b1_21 && b2_11 && b3_12 && b4_34 && b5_22 && b6_13 && b7_25 && b8_20 && b9_15 && b10_32 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 294;
}
if(b4_23 && b5_11 && b6_34 && b7_19 && b8_28 && b9_35 && b10_11 && b11_52 && b12_50 && b13_57 && b14_55) {
pattern_id = 295;
}
if(b4_23 && b5_11 && b6_34 && b7_19 && b8_28 && b9_35 && b10_11 && b11_52 && b12_50 && b13_25 && b14_22) {
pattern_id = 296;
}
if(b4_23 && b5_11 && b6_34 && b7_19 && b8_28 && b9_35 && b10_11 && b11_52 && b12_50 && b13_1 && b14_32) {
pattern_id = 297;
}
if(b6_32 && b7_8 && b8_11 && b9_18 && b10_60 && b11_12 && b12_7 && b13_1 && b14_28) {
pattern_id = 298;
}
if(b8_20 && b9_15 && b10_44 && b11_13 && b12_46 && b13_1 && b14_56) {
pattern_id = 299;
}
if(b3_22 && b4_28 && b5_16 && b6_13 && b7_37 && b8_14 && b9_8 && b10_48 && b11_48 && b12_30 && b13_47 && b14_25) {
pattern_id = 300;
}
if(b2_16 && b3_28 && b4_6 && b5_24 && b6_23 && b7_5 && b8_9 && b9_6 && b10_42 && b11_1 && b12_11 && b13_25 && b14_41) {
pattern_id = 301;
}
if(b7_34 && b8_10 && b9_11 && b10_11 && b11_48 && b12_12 && b13_12 && b14_25) {
pattern_id = 302;
}
if(b7_34 && b8_10 && b9_11 && b10_11 && b11_27 && b12_16 && b13_15 && b14_49) {
pattern_id = 303;
}
if(b2_16 && b3_28 && b4_6 && b5_24 && b6_10 && b7_29 && b8_14 && b9_15 && b10_54 && b11_2 && b12_19 && b13_13 && b14_2) {
pattern_id = 304;
}
if(b3_22 && b4_28 && b5_16 && b6_13 && b7_6 && b8_17 && b9_1 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 305;
}
if(b7_34 && b8_10 && b9_11 && b10_11 && b11_19 && b12_16 && b13_18 && b14_43) {
pattern_id = 306;
}
if(b2_16 && b3_28 && b4_29 && b5_4 && b6_14 && b7_40 && b8_17 && b9_42 && b10_20 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 307;
}
if(b3_22 && b4_28 && b5_7 && b6_1 && b7_6 && b8_33 && b9_29 && b10_1 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 308;
}
if(b0_4 && b1_21 && b2_14 && b3_5 && b4_24 && b5_7 && b6_12 && b7_9 && b8_26 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 309;
}
if(b4_23 && b5_11 && b6_40 && b7_7 && b8_10 && b9_20 && b10_54 && b11_13 && b12_25 && b13_45 && b14_51) {
pattern_id = 310;
}
if(b3_22 && b4_28 && b5_7 && b6_12 && b7_8 && b8_58 && b9_6 && b10_6 && b11_12 && b12_12 && b13_11 && b14_5) {
pattern_id = 311;
}
if(b6_32 && b7_8 && b8_38 && b9_18 && b10_6 && b11_1 && b12_25 && b13_20 && b14_16) {
pattern_id = 312;
}
if(b3_22 && b4_28 && b5_7 && b6_13 && b7_36 && b8_10 && b9_2 && b10_44 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 313;
}
if(b7_34 && b8_10 && b9_44 && b10_30 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 314;
}
if(b2_16 && b3_28 && b4_22 && b5_28 && b6_16 && b7_36 && b8_38 && b9_42 && b10_54 && b11_23 && b12_53 && b13_45 && b14_51) {
pattern_id = 315;
}
if(b2_16 && b3_28 && b4_22 && b5_28 && b6_39 && b7_15 && b8_17 && b9_8 && b10_32 && b11_13 && b12_7 && b13_20 && b14_51) {
pattern_id = 316;
}
if(b5_10 && b6_37 && b7_5 && b8_26 && b9_5 && b10_25 && b11_27 && b12_1 && b13_47 && b14_53) {
pattern_id = 317;
}
if(b2_16 && b3_28 && b4_13 && b5_8 && b6_8 && b7_7 && b8_10 && b9_10 && b10_13 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 318;
}
if(b2_16 && b3_28 && b4_13 && b5_25 && b6_4 && b7_7 && b8_9 && b9_15 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 319;
}
if(b1_8 && b2_35 && b3_18 && b4_22 && b5_13 && b6_13 && b7_14 && b8_17 && b9_8 && b10_54 && b11_13 && b12_25 && b13_45 && b14_51) {
pattern_id = 320;
}
if(b3_22 && b4_28 && b5_29 && b6_14 && b7_37 && b8_27 && b9_11 && b10_25 && b11_23 && b12_7 && b13_20 && b14_35) {
pattern_id = 321;
}
if(b3_22 && b4_28 && b5_29 && b6_14 && b7_37 && b8_27 && b9_11 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 322;
}
if(b6_32 && b7_8 && b8_14 && b9_1 && b10_28 && b11_71 && b12_50 && b13_12 && b14_10) {
pattern_id = 323;
}
if(b5_10 && b6_37 && b7_5 && b8_37 && b9_32 && b10_19 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 324;
}
if(b3_22 && b4_28 && b5_29 && b6_30 && b7_25 && b8_5 && b9_5 && b10_17 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 325;
}
if(b5_10 && b6_37 && b7_5 && b8_37 && b9_32 && b10_19 && b11_26 && b12_16 && b13_31 && b14_41) {
pattern_id = 326;
}
if(b2_16 && b3_28 && b4_18 && b5_36 && b6_10 && b7_6 && b8_23 && b9_58 && b10_45 && b11_8 && b12_8 && b13_25 && b14_25) {
pattern_id = 327;
}
if(b4_23 && b5_11 && b6_11 && b7_18 && b8_17 && b9_14 && b10_32 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 328;
}
if(b0_4 && b1_21 && b2_17 && b3_35 && b4_5 && b5_6 && b6_11 && b7_38 && b8_14 && b9_8 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 329;
}
if(b2_16 && b3_28 && b4_7 && b5_12 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 330;
}
if(b11_28 && b12_46 && b13_1 && b14_32) {
pattern_id = 331;
}
if(b6_32 && b7_8 && b8_5 && b9_1 && b10_32 && b11_1 && b12_25 && b13_45 && b14_49) {
pattern_id = 332;
}
if(b4_23 && b5_11 && b6_31 && b7_24 && b8_16 && b9_29 && b10_44 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 333;
}
if(b2_16 && b3_28 && b4_15 && b5_6 && b6_31 && b7_19 && b8_17 && b9_14 && b10_3 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 334;
}
if(b4_23 && b5_11 && b6_31 && b7_24 && b8_1 && b9_5 && b10_24 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 335;
}
if(b0_4 && b1_21 && b2_32 && b3_27 && b4_9 && b5_2 && b6_19 && b7_34 && b8_19 && b9_5 && b10_17 && b11_8 && b12_25 && b13_15 && b14_10) {
pattern_id = 336;
}
if(b4_23 && b5_11 && b6_28 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 337;
}
if(b6_32 && b7_8 && b8_35 && b9_35 && b10_12 && b11_15 && b12_46 && b13_15 && b14_43) {
pattern_id = 338;
}
if(b1_8 && b2_37 && b3_5 && b4_24 && b5_4 && b6_32 && b7_19 && b8_2 && b9_2 && b10_2 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 339;
}
if(b8_20 && b9_17 && b10_24 && b11_49 && b12_15 && b13_16 && b14_46) {
pattern_id = 340;
}
if(b2_16 && b3_37 && b4_20 && b5_34 && b6_4 && b7_48 && b8_18 && b9_51 && b10_33 && b11_1 && b12_25 && b13_20 && b14_49) {
pattern_id = 341;
}
if(b2_16 && b3_37 && b4_20 && b5_25 && b6_1 && b7_25 && b8_20 && b9_17 && b10_24 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 342;
}
if(b3_22 && b4_21 && b5_11 && b6_19 && b7_5 && b8_12 && b9_8 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 343;
}
if(b3_22 && b4_21 && b5_11 && b6_23 && b7_5 && b8_9 && b9_6 && b10_42 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 344;
}
if(b8_20 && b9_17 && b10_47 && b11_8 && b12_1 && b13_15 && b14_43) {
pattern_id = 345;
}
if(b4_23 && b5_28 && b6_36 && b7_19 && b8_10 && b9_11 && b10_11 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 346;
}
if(b11_28 && b12_18 && b13_9 && b14_28) {
pattern_id = 347;
}
if(b3_22 && b4_21 && b5_2 && b6_23 && b7_19 && b8_2 && b9_5 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 348;
}
if(b5_10 && b6_36 && b7_37 && b8_27 && b9_8 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 349;
}
if(b6_32 && b7_21 && b8_27 && b9_2 && b10_59 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 350;
}
if(b8_20 && b9_17 && b10_11 && b11_44 && b12_48 && b13_1 && b14_28) {
pattern_id = 351;
}
if(b1_8 && b2_37 && b3_12 && b4_18 && b5_2 && b6_37 && b7_6 && b8_14 && b9_8 && b10_51 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 352;
}
if(b5_10 && b6_36 && b7_12 && b8_20 && b9_17 && b10_12 && b11_48 && b12_12 && b13_8 && b14_49) {
pattern_id = 353;
}
if(b10_46 && b11_12 && b12_53 && b13_1 && b14_12) {
pattern_id = 354;
}
if(b2_16 && b3_37 && b4_16 && b5_2 && b6_28 && b7_24 && b8_1 && b9_5 && b10_24 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 355;
}
if(b2_16 && b3_37 && b4_16 && b5_6 && b6_2 && b7_5 && b8_14 && b9_16 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 356;
}
if(b10_46 && b11_12 && b12_7 && b13_14 && b14_28) {
pattern_id = 357;
}
if(b5_10 && b6_36 && b7_5 && b8_10 && b9_38 && b10_7 && b11_12 && b12_53 && b13_12 && b14_10) {
pattern_id = 358;
}
if(b2_16 && b3_37 && b4_13 && b5_11 && b6_32 && b7_36 && b8_12 && b9_15 && b10_15 && b11_18 && b12_42 && b13_9 && b14_22) {
pattern_id = 359;
}
if(b2_16 && b3_37 && b4_13 && b5_11 && b6_30 && b7_12 && b8_17 && b9_32 && b10_19 && b11_1 && b12_18 && b13_41 && b14_46) {
pattern_id = 360;
}
if(b4_23 && b5_28 && b6_17 && b7_12 && b8_10 && b9_2 && b10_44 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 361;
}
if(b4_23 && b5_28 && b6_17 && b7_12 && b8_16 && b9_29 && b10_44 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 362;
}
if(b3_22 && b4_21 && b5_29 && b6_11 && b7_6 && b8_37 && b9_2 && b10_59 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 363;
}
if(b2_16 && b3_37 && b4_13 && b5_6 && b6_2 && b7_13 && b8_24 && b9_2 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 364;
}
if(b2_16 && b3_37 && b4_13 && b5_27 && b6_14 && b7_14 && b8_14 && b9_39 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 365;
}
if(b4_23 && b5_28 && b6_30 && b7_12 && b8_40 && b9_5 && b10_21 && b11_11 && b12_30 && b13_47 && b14_25) {
pattern_id = 366;
}
if(b4_23 && b5_28 && b6_31 && b7_38 && b8_18 && b9_1 && b10_17 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 367;
}
if(b6_32 && b7_7 && b8_10 && b9_43 && b10_2 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 368;
}
if(b0_4 && b1_14 && b2_37 && b3_12 && b4_24 && b5_34 && b6_13 && b7_12 && b8_12 && b9_11 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 369;
}
if(b4_23 && b5_2 && b6_36 && b7_19 && b8_5 && b9_10 && b10_7 && b11_51 && b12_30 && b13_47 && b14_25) {
pattern_id = 370;
}
if(b4_23 && b5_2 && b6_4 && b7_36 && b8_14 && b9_14 && b10_12 && b11_15 && b12_56 && b13_2 && b14_45) {
pattern_id = 371;
}
if(b3_22 && b4_25 && b5_25 && b6_10 && b7_5 && b8_1 && b9_5 && b10_17 && b11_56 && b12_43 && b13_33 && b14_51) {
pattern_id = 372;
}
if(b3_22 && b4_25 && b5_25 && b6_30 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 373;
}
if(b2_16 && b3_20 && b4_22 && b5_31 && b6_4 && b7_9 && b8_27 && b9_16 && b10_25 && b11_44 && b12_46 && b13_19 && b14_16) {
pattern_id = 374;
}
if(b1_8 && b2_3 && b3_10 && b4_24 && b5_2 && b6_27 && b7_35 && b8_33 && b9_6 && b10_44 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 375;
}
if(b3_22 && b4_25 && b5_21 && b6_31 && b7_19 && b8_9 && b9_29 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 376;
}
if(b4_23 && b5_2 && b6_14 && b7_15 && b8_27 && b9_8 && b10_2 && b11_52 && b12_30 && b13_47 && b14_25) {
pattern_id = 377;
}
if(b4_23 && b5_2 && b6_14 && b7_15 && b8_14 && b9_6 && b10_19 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 378;
}
if(b0_4 && b1_14 && b2_31 && b3_26 && b4_13 && b5_31 && b6_2 && b7_17 && b8_33 && b9_39 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 379;
}
if(b6_32 && b7_7 && b8_18 && b9_43 && b10_2 && b11_27 && b12_30 && b13_47 && b14_25) {
pattern_id = 380;
}
if(b5_10 && b6_12 && b7_24 && b8_38 && b9_29 && b10_6 && b11_1 && b12_11 && b13_25 && b14_41) {
pattern_id = 381;
}
if(b0_4 && b1_14 && b2_25 && b3_28 && b4_23 && b5_24 && b6_14 && b7_7 && b8_5 && b9_17 && b10_25 && b11_23 && b12_7 && b13_20 && b14_35) {
pattern_id = 382;
}
if(b6_32 && b7_7 && b8_5 && b9_15 && b10_46 && b11_48 && b12_7 && b13_11 && b14_26) {
pattern_id = 383;
}
if(b4_23 && b5_2 && b6_2 && b7_8 && b8_20 && b9_42 && b10_7 && b11_8 && b12_36 && b13_16 && b14_26) {
pattern_id = 384;
}
if(b4_23 && b5_2 && b6_2 && b7_8 && b8_20 && b9_1 && b10_16 && b11_18 && b12_18 && b13_15 && b14_46) {
pattern_id = 385;
}
if(b3_22 && b4_25 && b5_42 && b6_12 && b7_25 && b8_5 && b9_1 && b10_13 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 386;
}
if(b1_8 && b2_3 && b3_14 && b4_5 && b5_24 && b6_27 && b7_34 && b8_18 && b9_5 && b10_7 && b11_15 && b12_46 && b13_17 && b14_28) {
pattern_id = 387;
}
if(b7_34 && b8_17 && b9_41 && b10_12 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 388;
}
if(b3_22 && b4_25 && b5_52 && b6_1 && b7_21 && b8_41 && b9_18 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 389;
}
if(b3_22 && b4_25 && b5_52 && b6_19 && b7_5 && b8_12 && b9_8 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 390;
}
if(b5_10 && b6_12 && b7_1 && b8_41 && b9_39 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 391;
}
if(b0_4 && b1_25 && b2_18 && b3_38 && b4_22 && b5_4 && b6_14 && b7_9 && b8_11 && b9_5 && b10_17 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 392;
}
if(b5_10 && b6_23 && b7_9 && b8_42 && b9_1 && b10_48 && b11_15 && b12_28 && b13_9 && b14_17) {
pattern_id = 393;
}
if(b1_8 && b2_33 && b3_20 && b4_25 && b5_28 && b6_39 && b7_29 && b8_17 && b9_51 && b10_72 && b11_6 && b12_34 && b13_11 && b14_43) {
pattern_id = 394;
}
if(b6_32 && b7_37 && b8_27 && b9_16 && b10_12 && b11_48 && b12_12 && b13_12 && b14_25) {
pattern_id = 395;
}
if(b3_22 && b4_27 && b5_24 && b6_8 && b7_7 && b8_41 && b9_39 && b10_11 && b11_25 && b12_30 && b13_47 && b14_25) {
pattern_id = 396;
}
if(b1_8 && b2_33 && b3_12 && b4_31 && b5_2 && b6_11 && b7_17 && b8_27 && b9_32 && b10_47 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 397;
}
if(b6_32 && b7_37 && b8_27 && b9_16 && b10_12 && b11_8 && b12_30 && b13_47 && b14_25) {
pattern_id = 398;
}
if(b2_16 && b3_30 && b4_19 && b5_8 && b6_12 && b7_24 && b8_17 && b9_5 && b10_15 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 399;
}
if(b8_20 && b9_2 && b10_11 && b11_52 && b12_42 && b13_9 && b14_8) {
pattern_id = 400;
}
if(b6_32 && b7_37 && b8_16 && b9_5 && b10_1 && b11_44 && b12_7 && b13_8 && b14_48) {
pattern_id = 401;
}
if(b5_10 && b6_23 && b7_14 && b8_37 && b9_42 && b10_30 && b11_18 && b12_34 && b13_9 && b14_28) {
pattern_id = 402;
}
if(b7_34 && b8_24 && b9_29 && b10_42 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 403;
}
if(b6_32 && b7_37 && b8_14 && b9_8 && b10_42 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 404;
}
if(b2_16 && b3_30 && b4_13 && b5_26 && b6_4 && b7_51 && b8_9 && b9_39 && b10_20 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 405;
}
if(b6_32 && b7_37 && b8_14 && b9_8 && b10_42 && b11_48 && b12_12 && b13_12 && b14_25) {
pattern_id = 406;
}
if(b5_10 && b6_23 && b7_5 && b8_9 && b9_6 && b10_42 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 407;
}
if(b4_23 && b5_30 && b6_17 && b7_54 && b8_1 && b9_5 && b10_24 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 408;
}
if(b4_23 && b5_30 && b6_17 && b7_54 && b8_1 && b9_5 && b10_24 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 409;
}
if(b3_22 && b4_27 && b5_13 && b6_35 && b7_3 && b8_9 && b9_5 && b10_44 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 410;
}
if(b3_22 && b4_27 && b5_13 && b6_43 && b7_9 && b8_9 && b9_5 && b10_44 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 411;
}
if(b3_22 && b4_27 && b5_13 && b6_37 && b7_5 && b8_37 && b9_32 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 412;
}
if(b2_16 && b3_30 && b4_12 && b5_26 && b6_12 && b7_12 && b8_12 && b9_17 && b10_42 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 413;
}
if(b2_16 && b3_30 && b4_12 && b5_6 && b6_27 && b7_15 && b8_12 && b9_17 && b10_42 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 414;
}
if(b3_22 && b4_27 && b5_26 && b6_13 && b7_7 && b8_2 && b9_17 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 415;
}
if(b8_20 && b9_2 && b10_19 && b11_27 && b12_30 && b13_47 && b14_25) {
pattern_id = 416;
}
if(b7_34 && b8_24 && b9_10 && b10_6 && b11_1 && b12_11 && b13_25 && b14_41) {
pattern_id = 417;
}
if(b1_8 && b2_33 && b3_25 && b4_16 && b5_11 && b6_2 && b7_19 && b8_14 && b9_32 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 418;
}
if(b6_32 && b7_40 && b8_12 && b9_10 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 419;
}
if(b5_10 && b6_34 && b7_9 && b8_5 && b9_5 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 420;
}
if(b5_10 && b6_34 && b7_10 && b8_14 && b9_29 && b10_15 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 421;
}
if(b4_23 && b5_16 && b6_37 && b7_24 && b8_39 && b9_39 && b10_33 && b11_27 && b12_1 && b13_18 && b14_51) {
pattern_id = 422;
}
if(b4_23 && b5_16 && b6_36 && b7_19 && b8_39 && b9_39 && b10_33 && b11_27 && b12_1 && b13_18 && b14_51) {
pattern_id = 423;
}
if(b2_16 && b3_17 && b4_25 && b5_21 && b6_12 && b7_29 && b8_12 && b9_10 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 424;
}
if(b0_4 && b1_43 && b2_3 && b3_18 && b4_19 && b5_13 && b6_16 && b7_36 && b8_38 && b9_42 && b10_54 && b11_47 && b12_18 && b13_8 && b14_51) {
pattern_id = 425;
}
if(b2_16 && b3_17 && b4_25 && b5_23 && b6_16 && b7_9 && b8_18 && b9_42 && b10_54 && b11_48 && b12_12 && b13_14 && b14_51) {
pattern_id = 426;
}
if(b4_23 && b5_16 && b6_12 && b7_6 && b8_20 && b9_40 && b10_30 && b11_18 && b12_34 && b13_18 && b14_51) {
pattern_id = 427;
}
if(b5_10 && b6_34 && b7_7 && b8_5 && b9_38 && b10_54 && b11_11 && b12_8 && b13_8 && b14_51) {
pattern_id = 428;
}
if(b5_10 && b6_34 && b7_7 && b8_5 && b9_9 && b10_3 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 429;
}
if(b4_23 && b5_16 && b6_12 && b7_6 && b8_26 && b9_29 && b10_47 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 430;
}
if(b7_34 && b8_11 && b9_16 && b10_11 && b11_48 && b12_11 && b13_1 && b14_5) {
pattern_id = 431;
}
if(b4_23 && b5_16 && b6_8 && b7_5 && b8_33 && b9_39 && b10_33 && b11_1 && b12_12 && b13_1 && b14_11) {
pattern_id = 432;
}
if(b4_23 && b5_16 && b6_8 && b7_5 && b8_33 && b9_39 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 433;
}
if(b4_23 && b5_16 && b6_8 && b7_5 && b8_33 && b9_39 && b10_33 && b11_1 && b12_25 && b13_20 && b14_49) {
pattern_id = 434;
}
if(b3_22 && b4_6 && b5_8 && b6_17 && b7_10 && b8_12 && b9_16 && b10_32 && b11_1 && b12_27 && b13_1 && b14_11) {
pattern_id = 435;
}
if(b4_23 && b5_16 && b6_8 && b7_5 && b8_33 && b9_39 && b10_33 && b11_8 && b12_30 && b13_47 && b14_25) {
pattern_id = 436;
}
if(b3_22 && b4_6 && b5_25 && b6_33 && b7_51 && b8_28 && b9_35 && b10_3 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 437;
}
if(b4_23 && b5_16 && b6_17 && b7_1 && b8_27 && b9_16 && b10_7 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 438;
}
if(b7_34 && b8_11 && b9_10 && b10_25 && b11_69 && b12_11 && b13_19 && b14_41) {
pattern_id = 439;
}
if(b1_8 && b2_11 && b3_25 && b4_25 && b5_6 && b6_2 && b7_10 && b8_14 && b9_29 && b10_15 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 440;
}
if(b2_16 && b3_17 && b4_32 && b5_2 && b6_11 && b7_6 && b8_33 && b9_29 && b10_2 && b11_16 && b12_30 && b13_47 && b14_25) {
pattern_id = 441;
}
if(b7_34 && b8_38 && b9_39 && b10_21 && b11_12 && b12_22 && b13_9 && b14_8) {
pattern_id = 442;
}
if(b4_23 && b5_7 && b6_12 && b7_9 && b8_26 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 443;
}
if(b5_10 && b6_40 && b7_7 && b8_16 && b9_16 && b10_2 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 444;
}
if(b3_22 && b4_29 && b5_2 && b6_8 && b7_36 && b8_14 && b9_6 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 445;
}
if(b8_20 && b9_43 && b10_11 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 446;
}
if(b6_32 && b7_41 && b8_14 && b9_44 && b10_12 && b11_28 && b12_48 && b13_11 && b14_43) {
pattern_id = 447;
}
if(b6_32 && b7_41 && b8_14 && b9_44 && b10_12 && b11_28 && b12_15 && b13_16 && b14_46) {
pattern_id = 448;
}
if(b7_34 && b8_38 && b9_1 && b10_1 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 449;
}
if(b8_20 && b9_43 && b10_19 && b11_51 && b12_16 && b13_9 && b14_43) {
pattern_id = 450;
}
if(b3_22 && b4_29 && b5_23 && b6_13 && b7_12 && b8_12 && b9_11 && b10_12 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 451;
}
if(b4_23 && b5_7 && b6_2 && b7_12 && b8_16 && b9_1 && b10_47 && b11_15 && b12_25 && b13_47 && b14_6) {
pattern_id = 452;
}
if(b6_32 && b7_41 && b8_5 && b9_1 && b10_12 && b11_18 && b12_16 && b13_14 && b14_32) {
pattern_id = 453;
}
if(b3_22 && b4_29 && b5_23 && b6_11 && b7_7 && b8_12 && b9_8 && b10_47 && b11_6 && b12_56 && b13_56 && b14_49) {
pattern_id = 454;
}
if(b2_16 && b3_19 && b4_24 && b5_23 && b6_10 && b7_5 && b8_26 && b9_35 && b10_47 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 455;
}
if(b4_23 && b5_24 && b6_19 && b7_19 && b8_16 && b9_16 && b10_6 && b11_48 && b12_30 && b13_47 && b14_25) {
pattern_id = 456;
}
if(b10_46 && b11_13 && b12_46 && b13_18 && b14_6) {
pattern_id = 457;
}
if(b3_22 && b4_19 && b5_11 && b6_8 && b7_5 && b8_37 && b9_17 && b10_32 && b11_60 && b12_47 && b13_14 && b14_26) {
pattern_id = 458;
}
if(b0_4 && b1_10 && b2_37 && b3_28 && b4_13 && b5_21 && b6_2 && b7_9 && b8_10 && b9_10 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 459;
}
if(b6_32 && b7_19 && b8_27 && b9_1 && b10_7 && b11_12 && b12_53 && b13_12 && b14_10) {
pattern_id = 460;
}
if(b0_4 && b1_10 && b2_10 && b3_27 && b4_5 && b5_28 && b6_4 && b7_36 && b8_1 && b9_17 && b10_46 && b11_18 && b12_8 && b13_50 && b14_43) {
pattern_id = 461;
}
if(b0_4 && b1_10 && b2_10 && b3_27 && b4_5 && b5_28 && b6_4 && b7_36 && b8_1 && b9_17 && b10_46 && b11_18 && b12_47 && b13_15 && b14_6) {
pattern_id = 462;
}
if(b3_22 && b4_19 && b5_24 && b6_11 && b7_24 && b8_12 && b9_44 && b10_6 && b11_25 && b12_8 && b13_1 && b14_28) {
pattern_id = 463;
}
if(b1_8 && b2_10 && b3_43 && b4_13 && b5_21 && b6_19 && b7_5 && b8_12 && b9_8 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 464;
}
if(b0_4 && b1_10 && b2_29 && b3_5 && b4_6 && b5_2 && b6_52 && b7_5 && b8_16 && b9_18 && b10_2 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 465;
}
if(b2_16 && b3_12 && b4_22 && b5_4 && b6_34 && b7_7 && b8_41 && b9_39 && b10_6 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 466;
}
if(b1_8 && b2_10 && b3_23 && b4_5 && b5_16 && b6_12 && b7_12 && b8_12 && b9_42 && b10_25 && b11_26 && b12_17 && b13_9 && b14_41) {
pattern_id = 467;
}
if(b7_34 && b8_27 && b9_44 && b10_7 && b11_51 && b12_8 && b13_1 && b14_28) {
pattern_id = 468;
}
if(b8_20 && b9_18 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 469;
}
if(b7_34 && b8_27 && b9_32 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 470;
}
if(b8_20 && b9_18 && b10_21 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 471;
}
if(b5_10 && b6_13 && b7_25 && b8_26 && b9_5 && b10_1 && b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 472;
}
if(b5_10 && b6_13 && b7_25 && b8_26 && b9_5 && b10_1 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 473;
}
if(b4_23 && b5_24 && b6_14 && b7_21 && b8_17 && b9_41 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 474;
}
if(b5_10 && b6_13 && b7_25 && b8_24 && b9_29 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 475;
}
if(b6_32 && b7_19 && b8_2 && b9_2 && b10_2 && b11_1 && b12_17 && b13_27 && b14_25) {
pattern_id = 476;
}
if(b6_32 && b7_19 && b8_2 && b9_2 && b10_2 && b11_49 && b12_15 && b13_16 && b14_46) {
pattern_id = 477;
}
if(b2_16 && b3_12 && b4_16 && b5_30 && b6_17 && b7_24 && b8_9 && b9_15 && b10_16 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 478;
}
if(b1_8 && b2_10 && b3_10 && b4_27 && b5_29 && b6_11 && b7_29 && b8_10 && b9_43 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 479;
}
if(b6_32 && b7_19 && b8_2 && b9_18 && b10_19 && b11_1 && b12_8 && b13_27 && b14_27) {
pattern_id = 480;
}
if(b5_10 && b6_13 && b7_25 && b8_40 && b9_6 && b10_19 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 481;
}
if(b1_8 && b2_10 && b3_10 && b4_12 && b5_31 && b6_2 && b7_17 && b8_33 && b9_39 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 482;
}
if(b4_23 && b5_24 && b6_14 && b7_36 && b8_37 && b9_10 && b10_3 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 483;
}
if(b0_4 && b1_10 && b2_31 && b3_6 && b4_32 && b5_23 && b6_44 && b7_17 && b8_33 && b9_39 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 484;
}
if(b0_4 && b1_10 && b2_31 && b3_27 && b4_25 && b5_26 && b6_2 && b7_17 && b8_27 && b9_32 && b10_47 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 485;
}
if(b9_38 && b10_11 && b11_52 && b12_36 && b13_11 && b14_41) {
pattern_id = 486;
}
if(b7_34 && b8_27 && b9_32 && b10_32 && b11_17 && b12_12 && b13_25 && b14_25) {
pattern_id = 487;
}
if(b0_4 && b1_10 && b2_31 && b3_27 && b4_24 && b5_4 && b6_8 && b7_14 && b8_17 && b9_8 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 488;
}
if(b5_10 && b6_13 && b7_25 && b8_5 && b9_8 && b10_7 && b11_52 && b12_8 && b13_11 && b14_28) {
pattern_id = 489;
}
if(b9_38 && b10_11 && b11_10 && b12_47 && b13_56 && b14_43) {
pattern_id = 490;
}
if(b1_8 && b2_10 && b3_6 && b4_23 && b5_35 && b6_37 && b7_14 && b8_27 && b9_5 && b10_21 && b11_17 && b12_40 && b13_1 && b14_43) {
pattern_id = 491;
}
if(b4_23 && b5_24 && b6_10 && b7_8 && b8_38 && b9_39 && b10_19 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 492;
}
if(b6_32 && b7_19 && b8_18 && b9_51 && b10_33 && b11_27 && b12_22 && b13_37 && b14_22) {
pattern_id = 493;
}
if(b5_10 && b6_42 && b7_14 && b8_2 && b9_42 && b10_25 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 494;
}
if(b5_10 && b6_42 && b7_5 && b8_9 && b9_11 && b10_25 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 495;
}
if(b5_10 && b6_42 && b7_5 && b8_19 && b9_2 && b10_25 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 496;
}
if(b4_23 && b5_39 && b6_11 && b7_34 && b8_63 && b9_51 && b10_48 && b11_26 && b12_16 && b13_58 && b14_54) {
pattern_id = 497;
}
if(b6_32 && b7_45 && b8_18 && b9_42 && b10_46 && b11_8 && b12_47 && b13_47 && b14_28) {
pattern_id = 498;
}
if(b7_34 && b8_58 && b9_1 && b10_7 && b11_1 && b12_34 && b13_50 && b14_6) {
pattern_id = 499;
}
if(b11_28 && b12_21 && b13_1 && b14_32) {
pattern_id = 500;
}
if(b1_8 && b2_28 && b3_5 && b4_7 && b5_23 && b6_8 && b7_19 && b8_2 && b9_5 && b10_32 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 501;
}
if(b7_34 && b8_16 && b9_17 && b10_25 && b11_18 && b12_36 && b13_47 && b14_14) {
pattern_id = 502;
}
if(b1_8 && b2_28 && b3_20 && b4_27 && b5_23 && b6_29 && b7_12 && b8_12 && b9_18 && b10_21 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 503;
}
if(b8_20 && b9_16 && b10_12 && b11_11 && b12_8 && b13_25 && b14_28) {
pattern_id = 504;
}
if(b2_16 && b3_16 && b4_19 && b5_6 && b6_2 && b7_7 && b8_2 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 505;
}
if(b4_23 && b5_8 && b6_13 && b7_24 && b8_5 && b9_8 && b10_12 && b11_23 && b12_30 && b13_47 && b14_25) {
pattern_id = 506;
}
if(b4_23 && b5_8 && b6_17 && b7_9 && b8_26 && b9_5 && b10_17 && b11_1 && b12_46 && b13_47 && b14_25) {
pattern_id = 507;
}
if(b2_16 && b3_16 && b4_13 && b5_4 && b6_36 && b7_36 && b8_12 && b9_11 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 508;
}
if(b0_4 && b1_6 && b2_13 && b3_28 && b4_59 && b5_36 && b6_37 && b7_29 && b8_35 && b9_42 && b10_19 && b11_1 && b12_16 && b13_18 && b14_8) {
pattern_id = 509;
}
if(b7_34 && b8_16 && b9_29 && b10_44 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 510;
}
if(b6_32 && b7_14 && b8_14 && b9_11 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 511;
}
if(b0_4 && b1_6 && b2_13 && b3_17 && b4_19 && b5_11 && b6_28 && b7_5 && b8_9 && b9_20 && b10_32 && b11_1 && b12_25 && b13_20 && b14_16) {
pattern_id = 512;
}
if(b4_23 && b5_8 && b6_17 && b7_40 && b8_27 && b9_32 && b10_25 && b11_18 && b12_36 && b13_47 && b14_14) {
pattern_id = 513;
}
if(b5_10 && b6_8 && b7_5 && b8_11 && b9_18 && b10_21 && b11_1 && b12_1 && b13_11 && b14_48) {
pattern_id = 514;
}
if(b4_23 && b5_8 && b6_17 && b7_40 && b8_27 && b9_32 && b10_25 && b11_6 && b12_34 && b13_27 && b14_41) {
pattern_id = 515;
}
if(b5_10 && b6_8 && b7_5 && b8_11 && b9_18 && b10_21 && b11_1 && b12_26 && b13_12 && b14_14) {
pattern_id = 516;
}
if(b0_4 && b1_6 && b2_13 && b3_17 && b4_13 && b5_21 && b6_16 && b7_9 && b8_18 && b9_42 && b10_1 && b11_56 && b12_38 && b13_45 && b14_51) {
pattern_id = 517;
}
if(b6_32 && b7_14 && b8_35 && b9_8 && b10_11 && b11_8 && b12_30 && b13_47 && b14_25) {
pattern_id = 518;
}
if(b7_34 && b8_41 && b9_39 && b10_24 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 519;
}
if(b6_32 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_51 && b13_15 && b14_14) {
pattern_id = 520;
}
if(b2_16 && b3_23 && b4_5 && b5_24 && b6_8 && b7_37 && b8_27 && b9_16 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 521;
}
if(b5_10 && b6_4 && b7_9 && b8_27 && b9_16 && b10_11 && b11_17 && b12_30 && b13_47 && b14_25) {
pattern_id = 522;
}
if(b3_22 && b4_22 && b5_4 && b6_13 && b7_14 && b8_16 && b9_18 && b10_32 && b11_17 && b12_30 && b13_47 && b14_25) {
pattern_id = 523;
}
if(b6_32 && b7_12 && b8_12 && b9_18 && b10_33 && b11_48 && b12_12 && b13_20 && b14_28) {
pattern_id = 524;
}
if(b2_16 && b3_23 && b4_5 && b5_24 && b6_8 && b7_25 && b8_17 && b9_14 && b10_32 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 525;
}
if(b2_16 && b3_23 && b4_5 && b5_24 && b6_8 && b7_15 && b8_27 && b9_5 && b10_20 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 526;
}
if(b3_22 && b4_22 && b5_4 && b6_13 && b7_14 && b8_1 && b9_21 && b10_41 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 527;
}
if(b8_20 && b9_44 && b10_7 && b11_52 && b12_30 && b13_1 && b14_32) {
pattern_id = 528;
}
if(b3_22 && b4_22 && b5_2 && b6_11 && b7_24 && b8_12 && b9_11 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 529;
}
if(b4_23 && b5_25 && b6_13 && b7_25 && b8_17 && b9_8 && b10_30 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 530;
}
if(b3_22 && b4_22 && b5_24 && b6_11 && b7_8 && b8_25 && b9_42 && b10_16 && b11_27 && b12_56 && b13_26 && b14_51) {
pattern_id = 531;
}
if(b4_23 && b5_25 && b6_46 && b7_19 && b8_16 && b9_29 && b10_44 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 532;
}
if(b4_23 && b5_25 && b6_46 && b7_36 && b8_16 && b9_29 && b10_44 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 533;
}
if(b4_23 && b5_25 && b6_8 && b7_5 && b8_11 && b9_24 && b10_6 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 534;
}
if(b8_20 && b9_44 && b10_42 && b11_1 && b12_27 && b13_47 && b14_29) {
pattern_id = 535;
}
if(b3_22 && b4_22 && b5_25 && b6_11 && b7_6 && b8_26 && b9_29 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 536;
}
if(b10_46 && b11_48 && b12_7 && b13_45 && b14_72) {
pattern_id = 537;
}
if(b3_22 && b4_22 && b5_29 && b6_36 && b7_13 && b8_16 && b9_5 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 538;
}
if(b2_16 && b3_23 && b4_13 && b5_28 && b6_30 && b7_14 && b8_17 && b9_1 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 539;
}
if(b2_16 && b3_23 && b4_13 && b5_21 && b6_13 && b7_6 && b8_14 && b9_8 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 540;
}
if(b6_32 && b7_12 && b8_9 && b9_10 && b10_44 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 541;
}
if(b0_4 && b1_22 && b2_17 && b3_5 && b4_21 && b5_11 && b6_32 && b7_24 && b8_12 && b9_44 && b10_6 && b11_25 && b12_8 && b13_1 && b14_28) {
pattern_id = 542;
}
if(b4_23 && b5_25 && b6_11 && b7_9 && b8_26 && b9_15 && b10_32 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 543;
}
if(b8_20 && b9_44 && b10_32 && b11_12 && b12_12 && b13_14 && b14_28) {
pattern_id = 544;
}
if(b2_16 && b3_23 && b4_32 && b5_24 && b6_12 && b7_10 && b8_16 && b9_39 && b10_47 && b11_16 && b12_46 && b13_18 && b14_6) {
pattern_id = 545;
}
if(b1_8 && b2_29 && b3_25 && b4_31 && b5_23 && b6_13 && b7_21 && b8_27 && b9_2 && b10_59 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 546;
}
if(b3_22 && b4_22 && b5_36 && b6_8 && b7_5 && b8_11 && b9_24 && b10_6 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 547;
}
if(b5_10 && b6_14 && b7_9 && b8_41 && b9_5 && b10_32 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 548;
}
if(b2_16 && b3_10 && b4_5 && b5_23 && b6_10 && b7_9 && b8_35 && b9_24 && b10_16 && b11_17 && b12_53 && b13_25 && b14_41) {
pattern_id = 549;
}
if(b5_10 && b6_14 && b7_21 && b8_10 && b9_11 && b10_11 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 550;
}
if(b10_46 && b11_52 && b12_8 && b13_16 && b14_28) {
pattern_id = 551;
}
if(b7_34 && b8_2 && b9_5 && b10_20 && b11_12 && b12_8 && b13_1 && b14_18) {
pattern_id = 552;
}
if(b6_32 && b7_25 && b8_17 && b9_14 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 553;
}
if(b2_16 && b3_10 && b4_25 && b5_27 && b6_11 && b7_21 && b8_17 && b9_1 && b10_15 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 554;
}
if(b7_34 && b8_2 && b9_5 && b10_20 && b11_53 && b12_36 && b13_9 && b14_8) {
pattern_id = 555;
}
if(b1_8 && b2_31 && b3_18 && b4_7 && b5_24 && b6_34 && b7_25 && b8_12 && b9_16 && b10_25 && b11_69 && b12_11 && b13_19 && b14_41) {
pattern_id = 556;
}
if(b4_23 && b5_21 && b6_17 && b7_6 && b8_27 && b9_2 && b10_51 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 557;
}
if(b2_16 && b3_10 && b4_12 && b5_7 && b6_33 && b7_6 && b8_17 && b9_1 && b10_19 && b11_50 && b12_46 && b13_19 && b14_16) {
pattern_id = 558;
}
if(b5_10 && b6_14 && b7_36 && b8_38 && b9_42 && b10_30 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 559;
}
if(b1_8 && b2_31 && b3_27 && b4_14 && b5_4 && b6_14 && b7_9 && b8_11 && b9_5 && b10_17 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 560;
}
if(b2_16 && b3_10 && b4_7 && b5_24 && b6_13 && b7_24 && b8_16 && b9_29 && b10_44 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 561;
}
if(b3_22 && b4_16 && b5_23 && b6_11 && b7_48 && b8_2 && b9_15 && b10_13 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 562;
}
if(b1_8 && b2_13 && b3_30 && b4_27 && b5_2 && b6_27 && b7_24 && b8_23 && b9_32 && b10_12 && b11_19 && b12_56 && b13_26 && b14_51) {
pattern_id = 563;
}
if(b4_23 && b5_29 && b6_10 && b7_6 && b8_27 && b9_32 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 564;
}
if(b5_10 && b6_17 && b7_29 && b8_26 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 565;
}
if(b2_16 && b3_18 && b4_15 && b5_2 && b6_27 && b7_37 && b8_16 && b9_29 && b10_20 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 566;
}
if(b6_32 && b7_5 && b8_1 && b9_1 && b10_60 && b11_47 && b12_25 && b13_20 && b14_28) {
pattern_id = 567;
}
if(b4_23 && b5_13 && b6_33 && b7_25 && b8_17 && b9_14 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 568;
}
if(b3_22 && b4_12 && b5_47 && b6_1 && b7_24 && b8_38 && b9_41 && b10_54 && b11_27 && b12_16 && b13_45 && b14_51) {
pattern_id = 569;
}
if(b2_16 && b3_6 && b4_5 && b5_11 && b6_46 && b7_9 && b8_11 && b9_5 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 570;
}
if(b6_32 && b7_36 && b8_12 && b9_11 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 571;
}
if(b0_4 && b1_27 && b2_18 && b3_17 && b4_25 && b5_10 && b6_13 && b7_25 && b8_26 && b9_5 && b10_1 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 572;
}
if(b3_22 && b4_12 && b5_4 && b6_34 && b7_7 && b8_16 && b9_29 && b10_44 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 573;
}
if(b6_32 && b7_36 && b8_12 && b9_16 && b10_32 && b11_50 && b12_46 && b13_19 && b14_16) {
pattern_id = 574;
}
if(b1_8 && b2_6 && b3_5 && b4_18 && b5_6 && b6_12 && b7_35 && b8_42 && b9_44 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 575;
}
if(b3_22 && b4_12 && b5_4 && b6_27 && b7_6 && b8_2 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 576;
}
if(b3_22 && b4_12 && b5_4 && b6_11 && b7_24 && b8_1 && b9_17 && b10_25 && b11_27 && b12_1 && b13_47 && b14_53) {
pattern_id = 577;
}
if(b6_32 && b7_36 && b8_17 && b9_8 && b10_33 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 578;
}
if(b5_10 && b6_10 && b7_7 && b8_9 && b9_16 && b10_25 && b11_26 && b12_17 && b13_9 && b14_41) {
pattern_id = 579;
}
if(b9_38 && b10_6 && b11_26 && b12_16 && b13_25 && b14_41) {
pattern_id = 580;
}
if(b2_16 && b3_6 && b4_25 && b5_26 && b6_8 && b7_24 && b8_38 && b9_29 && b10_6 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 581;
}
if(b1_8 && b2_6 && b3_30 && b4_21 && b5_24 && b6_11 && b7_36 && b8_12 && b9_16 && b10_51 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 582;
}
if(b0_4 && b1_27 && b2_33 && b3_37 && b4_19 && b5_6 && b6_10 && b7_9 && b8_16 && b9_13 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 583;
}
if(b4_23 && b5_13 && b6_34 && b7_36 && b8_41 && b9_39 && b10_11 && b11_25 && b12_30 && b13_47 && b14_25) {
pattern_id = 584;
}
if(b11_28 && b12_11 && b13_17 && b14_35) {
pattern_id = 585;
}
if(b1_8 && b2_6 && b3_19 && b4_19 && b5_8 && b6_19 && b7_5 && b8_12 && b9_8 && b10_30 && b11_1 && b12_53 && b13_45 && b14_67) {
pattern_id = 586;
}
if(b7_34 && b8_40 && b9_43 && b10_6 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 587;
}
if(b7_34 && b8_40 && b9_43 && b10_6 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 588;
}
if(b3_22 && b4_12 && b5_7 && b6_10 && b7_6 && b8_17 && b9_1 && b10_19 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 589;
}
if(b3_22 && b4_12 && b5_24 && b6_36 && b7_34 && b8_40 && b9_18 && b10_30 && b11_1 && b12_34 && b13_50 && b14_6) {
pattern_id = 590;
}
if(b6_32 && b7_36 && b8_27 && b9_32 && b10_44 && b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 591;
}
if(b2_16 && b3_6 && b4_19 && b5_21 && b6_34 && b7_17 && b8_38 && b9_10 && b10_42 && b11_25 && b12_56 && b13_8 && b14_51) {
pattern_id = 592;
}
if(b3_22 && b4_12 && b5_24 && b6_14 && b7_40 && b8_39 && b9_51 && b10_48 && b11_26 && b12_16 && b13_58 && b14_51) {
pattern_id = 593;
}
if(b6_32 && b7_36 && b8_16 && b9_6 && b10_32 && b11_48 && b12_12 && b13_12 && b14_25) {
pattern_id = 594;
}
if(b2_16 && b3_6 && b4_13 && b5_8 && b6_8 && b7_35 && b8_18 && b9_1 && b10_11 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 595;
}
if(b5_10 && b6_10 && b7_5 && b8_40 && b9_6 && b10_6 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 596;
}
if(b10_46 && b11_27 && b12_7 && b13_1 && b14_6) {
pattern_id = 597;
}
if(b4_23 && b5_13 && b6_17 && b7_24 && b8_5 && b9_30 && b10_49 && b11_53 && b12_8 && b13_8 && b14_17) {
pattern_id = 598;
}
if(b5_10 && b6_10 && b7_5 && b8_18 && b9_10 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 599;
}
if(b5_10 && b6_10 && b7_5 && b8_18 && b9_10 && b10_46 && b11_26 && b12_46 && b13_17 && b14_56) {
pattern_id = 600;
}
if(b4_23 && b5_13 && b6_17 && b7_24 && b8_5 && b9_9 && b10_3 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 601;
}
if(b0_4 && b1_27 && b2_13 && b3_27 && b4_24 && b5_14 && b6_44 && b7_17 && b8_17 && b9_41 && b10_12 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 602;
}
if(b3_22 && b4_12 && b5_13 && b6_36 && b7_24 && b8_10 && b9_11 && b10_11 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 603;
}
if(b6_32 && b7_36 && b8_9 && b9_18 && b10_21 && b11_17 && b12_8 && b13_20 && b14_64) {
pattern_id = 604;
}
if(b1_8 && b2_6 && b3_24 && b4_19 && b5_21 && b6_2 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 605;
}
if(b3_22 && b4_12 && b5_26 && b6_13 && b7_15 && b8_41 && b9_1 && b10_44 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 606;
}
if(b3_22 && b4_12 && b5_26 && b6_8 && b7_34 && b8_17 && b9_16 && b10_25 && b11_6 && b12_34 && b13_27 && b14_25) {
pattern_id = 607;
}
if(b2_16 && b3_6 && b4_18 && b5_29 && b6_37 && b7_7 && b8_18 && b9_1 && b10_11 && b11_17 && b12_30 && b13_47 && b14_25) {
pattern_id = 608;
}
if(b9_38 && b10_6 && b11_15 && b12_7 && b13_24 && b14_28) {
pattern_id = 609;
}
if(b6_32 && b7_36 && b8_18 && b9_17 && b10_2 && b11_23 && b12_46 && b13_19 && b14_16) {
pattern_id = 610;
}
if(b3_22 && b4_12 && b5_6 && b6_30 && b7_25 && b8_12 && b9_44 && b10_11 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 611;
}
if(b2_16 && b3_38 && b4_32 && b5_2 && b6_27 && b7_48 && b8_39 && b9_44 && b10_32 && b11_8 && b12_40 && b13_28 && b14_37) {
pattern_id = 612;
}
if(b0_4 && b1_33 && b2_23 && b3_20 && b4_18 && b5_36 && b6_39 && b7_15 && b8_17 && b9_8 && b10_32 && b11_13 && b12_7 && b13_20 && b14_51) {
pattern_id = 613;
}
if(b0_4 && b1_33 && b2_23 && b3_12 && b4_28 && b5_38 && b6_11 && b7_6 && b8_14 && b9_8 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 614;
}
if(b1_8 && b2_24 && b3_25 && b4_19 && b5_38 && b6_11 && b7_6 && b8_14 && b9_8 && b10_12 && b11_1 && b12_46 && b13_48 && b14_29) {
pattern_id = 615;
}
if(b11_28 && b12_16 && b13_9 && b14_28) {
pattern_id = 616;
}
if(b5_10 && b6_27 && b7_7 && b8_12 && b9_17 && b10_25 && b11_27 && b12_1 && b13_47 && b14_53) {
pattern_id = 617;
}
if(b1_8 && b2_20 && b3_20 && b4_5 && b5_28 && b6_29 && b7_10 && b8_14 && b9_17 && b10_51 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 618;
}
if(b2_16 && b3_24 && b4_25 && b5_4 && b6_36 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 619;
}
if(b4_23 && b5_26 && b6_12 && b7_9 && b8_26 && b9_44 && b10_12 && b11_1 && b12_8 && b13_27 && b14_25) {
pattern_id = 620;
}
if(b3_22 && b4_18 && b5_2 && b6_1 && b7_21 && b8_41 && b9_1 && b10_44 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 621;
}
if(b4_23 && b5_26 && b6_12 && b7_10 && b8_14 && b9_10 && b10_32 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 622;
}
if(b6_32 && b7_29 && b8_17 && b9_17 && b10_11 && b11_15 && b12_8 && b13_14 && b14_6) {
pattern_id = 623;
}
if(b2_16 && b3_24 && b4_25 && b5_28 && b6_13 && b7_29 && b8_17 && b9_15 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 624;
}
if(b2_16 && b3_24 && b4_25 && b5_16 && b6_13 && b7_24 && b8_5 && b9_5 && b10_17 && b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 625;
}
if(b2_16 && b3_24 && b4_25 && b5_16 && b6_13 && b7_24 && b8_5 && b9_5 && b10_17 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 626;
}
if(b2_16 && b3_24 && b4_25 && b5_16 && b6_13 && b7_24 && b8_5 && b9_5 && b10_17 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 627;
}
if(b3_22 && b4_18 && b5_2 && b6_10 && b7_5 && b8_9 && b9_10 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 628;
}
if(b5_10 && b6_27 && b7_7 && b8_18 && b9_5 && b10_19 && b11_27 && b12_12 && b13_1 && b14_22) {
pattern_id = 629;
}
if(b1_8 && b2_20 && b3_20 && b4_7 && b5_13 && b6_17 && b7_25 && b8_26 && b9_5 && b10_17 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 630;
}
if(b4_23 && b5_26 && b6_34 && b7_13 && b8_17 && b9_1 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 631;
}
if(b10_46 && b11_15 && b12_21 && b13_1 && b14_32) {
pattern_id = 632;
}
if(b5_10 && b6_27 && b7_5 && b8_33 && b9_29 && b10_19 && b11_1 && b12_34 && b13_50 && b14_6) {
pattern_id = 633;
}
if(b4_23 && b5_26 && b6_17 && b7_10 && b8_14 && b9_10 && b10_32 && b11_1 && b12_34 && b13_50 && b14_6) {
pattern_id = 634;
}
if(b6_32 && b7_29 && b8_14 && b9_29 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 635;
}
if(b9_38 && b10_17 && b11_27 && b12_56 && b13_26 && b14_51) {
pattern_id = 636;
}
if(b3_22 && b4_18 && b5_13 && b6_37 && b7_23 && b8_2 && b9_16 && b10_2 && b11_51 && b12_30 && b13_47 && b14_25) {
pattern_id = 637;
}
if(b4_23 && b5_26 && b6_10 && b7_8 && b8_28 && b9_1 && b10_42 && b11_47 && b12_30 && b13_47 && b14_25) {
pattern_id = 638;
}
if(b5_10 && b6_27 && b7_36 && b8_41 && b9_50 && b10_49 && b11_53 && b12_8 && b13_8 && b14_17) {
pattern_id = 639;
}
if(b11_28 && b12_16 && b13_1 && b14_32) {
pattern_id = 640;
}
if(b7_34 && b8_9 && b9_14 && b10_47 && b11_51 && b12_25 && b13_65 && b14_12) {
pattern_id = 641;
}
if(b2_16 && b3_24 && b4_9 && b5_27 && b6_28 && b7_24 && b8_38 && b9_5 && b10_33 && b11_25 && b12_30 && b13_47 && b14_25) {
pattern_id = 642;
}
if(b9_38 && b10_32 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 643;
}
if(b9_38 && b10_32 && b11_28 && b12_56 && b13_24 && b14_51) {
pattern_id = 644;
}
if(b5_10 && b6_11 && b7_8 && b8_9 && b9_18 && b10_6 && b11_17 && b12_36 && b13_31 && b14_4) {
pattern_id = 645;
}
if(b2_16 && b3_27 && b4_28 && b5_26 && b6_13 && b7_36 && b8_5 && b9_1 && b10_46 && b11_27 && b12_8 && b13_8 && b14_25) {
pattern_id = 646;
}
if(b1_8 && b2_17 && b3_37 && b4_20 && b5_6 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 647;
}
if(b3_22 && b4_7 && b5_2 && b6_32 && b7_40 && b8_12 && b9_10 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 648;
}
if(b8_20 && b9_1 && b10_12 && b11_18 && b12_16 && b13_14 && b14_32) {
pattern_id = 649;
}
if(b4_23 && b5_6 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 650;
}
if(b3_22 && b4_7 && b5_2 && b6_1 && b7_29 && b8_10 && b9_43 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 651;
}
if(b4_23 && b5_6 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 652;
}
if(b4_23 && b5_6 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 653;
}
if(b5_10 && b6_11 && b7_7 && b8_12 && b9_8 && b10_47 && b11_6 && b12_30 && b13_47 && b14_25) {
pattern_id = 654;
}
if(b4_23 && b5_6 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_28 && b13_11 && b14_22) {
pattern_id = 655;
}
if(b2_16 && b3_27 && b4_25 && b5_4 && b6_27 && b7_8 && b8_38 && b9_45 && b10_40 && b11_1 && b12_28 && b13_11 && b14_22) {
pattern_id = 656;
}
if(b2_16 && b3_27 && b4_25 && b5_4 && b6_27 && b7_8 && b8_38 && b9_40 && b10_24 && b11_17 && b12_47 && b13_42 && b14_51) {
pattern_id = 657;
}
if(b5_10 && b6_11 && b7_7 && b8_12 && b9_8 && b10_47 && b11_6 && b12_56 && b13_51 && b14_51) {
pattern_id = 658;
}
if(b2_16 && b3_27 && b4_25 && b5_21 && b6_36 && b7_37 && b8_14 && b9_8 && b10_42 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 659;
}
if(b2_16 && b3_27 && b4_25 && b5_21 && b6_36 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_46 && b13_48 && b14_48) {
pattern_id = 660;
}
if(b3_22 && b4_7 && b5_2 && b6_14 && b7_21 && b8_5 && b9_5 && b10_42 && b11_27 && b12_30 && b13_47 && b14_25) {
pattern_id = 661;
}
if(b1_8 && b2_17 && b3_20 && b4_16 && b5_6 && b6_12 && b7_36 && b8_14 && b9_1 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 662;
}
if(b3_22 && b4_7 && b5_2 && b6_27 && b7_15 && b8_17 && b9_8 && b10_60 && b11_13 && b12_47 && b13_48 && b14_56) {
pattern_id = 663;
}
if(b1_8 && b2_17 && b3_20 && b4_18 && b5_42 && b6_12 && b7_29 && b8_28 && b9_1 && b10_19 && b11_18 && b12_34 && b13_37 && b14_22) {
pattern_id = 664;
}
if(b3_22 && b4_7 && b5_2 && b6_27 && b7_15 && b8_27 && b9_15 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 665;
}
if(b3_22 && b4_7 && b5_2 && b6_27 && b7_15 && b8_27 && b9_15 && b10_12 && b11_1 && b12_11 && b13_16 && b14_26) {
pattern_id = 666;
}
if(b6_32 && b7_24 && b8_17 && b9_8 && b10_56 && b11_25 && b12_8 && b13_11 && b14_28) {
pattern_id = 667;
}
if(b1_8 && b2_17 && b3_20 && b4_18 && b5_42 && b6_8 && b7_7 && b8_5 && b9_38 && b10_7 && b11_12 && b12_53 && b13_12 && b14_10) {
pattern_id = 668;
}
if(b3_22 && b4_7 && b5_2 && b6_27 && b7_15 && b8_16 && b9_5 && b10_19 && b11_28 && b12_46 && b13_15 && b14_10) {
pattern_id = 669;
}
if(b3_22 && b4_7 && b5_2 && b6_2 && b7_19 && b8_2 && b9_2 && b10_2 && b11_1 && b12_1 && b13_11 && b14_22) {
pattern_id = 670;
}
if(b1_8 && b2_17 && b3_20 && b4_24 && b5_13 && b6_1 && b7_24 && b8_18 && b9_14 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 671;
}
if(b5_10 && b6_11 && b7_7 && b8_5 && b9_6 && b10_6 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 672;
}
if(b8_20 && b9_1 && b10_12 && b11_17 && b12_26 && b13_47 && b14_28) {
pattern_id = 673;
}
if(b2_16 && b3_27 && b4_6 && b5_28 && b6_53 && b7_25 && b8_12 && b9_44 && b10_2 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 674;
}
if(b7_34 && b8_18 && b9_43 && b10_16 && b11_28 && b12_50 && b13_67 && b14_16) {
pattern_id = 675;
}
if(b6_32 && b7_24 && b8_38 && b9_29 && b10_6 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 676;
}
if(b3_22 && b4_7 && b5_7 && b6_17 && b7_36 && b8_40 && b9_5 && b10_17 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 677;
}
if(b0_4 && b1_13 && b2_14 && b3_18 && b4_12 && b5_6 && b6_12 && b7_9 && b8_9 && b9_15 && b10_16 && b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 678;
}
if(b2_16 && b3_27 && b4_29 && b5_29 && b6_30 && b7_6 && b8_33 && b9_29 && b10_1 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 679;
}
if(b2_16 && b3_27 && b4_29 && b5_29 && b6_28 && b7_8 && b8_14 && b9_17 && b10_12 && b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 680;
}
if(b1_8 && b2_17 && b3_19 && b4_13 && b5_27 && b6_10 && b7_41 && b8_14 && b9_10 && b10_2 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 681;
}
if(b0_4 && b1_13 && b2_10 && b3_3 && b4_25 && b5_10 && b6_13 && b7_19 && b8_18 && b9_39 && b10_42 && b11_27 && b12_22 && b13_9 && b14_22) {
pattern_id = 682;
}
if(b8_20 && b9_1 && b10_11 && b11_17 && b12_8 && b13_41 && b14_28) {
pattern_id = 683;
}
if(b4_23 && b5_6 && b6_8 && b7_54 && b8_1 && b9_5 && b10_24 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 684;
}
if(b3_22 && b4_7 && b5_25 && b6_11 && b7_24 && b8_17 && b9_32 && b10_30 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 685;
}
if(b5_10 && b6_11 && b7_25 && b8_14 && b9_8 && b10_15 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 686;
}
if(b2_16 && b3_27 && b4_16 && b5_29 && b6_27 && b7_39 && b8_17 && b9_8 && b10_50 && b11_1 && b12_46 && b13_27 && b14_26) {
pattern_id = 687;
}
if(b1_8 && b2_17 && b3_18 && b4_27 && b5_23 && b6_28 && b7_9 && b8_9 && b9_5 && b10_25 && b11_27 && b12_1 && b13_47 && b14_41) {
pattern_id = 688;
}
if(b3_22 && b4_7 && b5_29 && b6_42 && b7_5 && b8_37 && b9_8 && b10_21 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 689;
}
if(b2_16 && b3_27 && b4_13 && b5_39 && b6_17 && b7_13 && b8_9 && b9_32 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 690;
}
if(b4_23 && b5_6 && b6_17 && b7_13 && b8_9 && b9_15 && b10_12 && b11_1 && b12_27 && b13_1 && b14_43) {
pattern_id = 691;
}
if(b2_16 && b3_27 && b4_12 && b5_4 && b6_4 && b7_29 && b8_37 && b9_16 && b10_12 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 692;
}
if(b7_34 && b8_18 && b9_8 && b10_47 && b11_6 && b12_12 && b13_45 && b14_48) {
pattern_id = 693;
}
if(b3_22 && b4_7 && b5_26 && b6_12 && b7_24 && b8_37 && b9_16 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 694;
}
if(b9_38 && b10_32 && b11_17 && b12_12 && b13_11 && b14_41) {
pattern_id = 695;
}
if(b3_22 && b4_7 && b5_23 && b6_1 && b7_6 && b8_9 && b9_5 && b10_6 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 696;
}
if(b0_4 && b1_13 && b2_25 && b3_5 && b4_24 && b5_6 && b6_37 && b7_5 && b8_2 && b9_2 && b10_11 && b11_51 && b12_30 && b13_47 && b14_25) {
pattern_id = 697;
}
if(b1_8 && b2_17 && b3_3 && b4_5 && b5_23 && b6_30 && b7_24 && b8_20 && b9_40 && b10_71 && b11_23 && b12_53 && b13_47 && b14_51) {
pattern_id = 698;
}
if(b5_10 && b6_11 && b7_6 && b8_14 && b9_8 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 699;
}
if(b6_32 && b7_24 && b8_5 && b9_29 && b10_17 && b11_60 && b12_30 && b13_47 && b14_25) {
pattern_id = 700;
}
if(b3_22 && b4_7 && b5_31 && b6_10 && b7_36 && b8_14 && b9_8 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 701;
}
if(b4_23 && b5_6 && b6_30 && b7_29 && b8_19 && b9_5 && b10_51 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 702;
}
if(b11_28 && b12_36 && b13_16 && b14_49) {
pattern_id = 703;
}
if(b5_10 && b6_11 && b7_38 && b8_18 && b9_8 && b10_56 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 704;
}
if(b2_16 && b3_3 && b4_5 && b5_8 && b6_46 && b7_10 && b8_12 && b9_16 && b10_15 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 705;
}
if(b10_46 && b11_17 && b12_46 && b13_1 && b14_32) {
pattern_id = 706;
}
if(b6_32 && b7_6 && b8_17 && b9_1 && b10_19 && b11_50 && b12_46 && b13_19 && b14_16) {
pattern_id = 707;
}
if(b2_16 && b3_3 && b4_25 && b5_6 && b6_2 && b7_23 && b8_10 && b9_11 && b10_11 && b11_28 && b12_62 && b13_52 && b14_24) {
pattern_id = 708;
}
if(b6_32 && b7_6 && b8_17 && b9_1 && b10_19 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 709;
}
if(b2_16 && b3_3 && b4_25 && b5_6 && b6_2 && b7_17 && b8_33 && b9_39 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 710;
}
if(b6_32 && b7_6 && b8_17 && b9_1 && b10_19 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 711;
}
if(b6_32 && b7_6 && b8_17 && b9_1 && b10_19 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 712;
}
if(b7_34 && b8_5 && b9_5 && b10_32 && b11_17 && b12_46 && b13_19 && b14_16) {
pattern_id = 713;
}
if(b0_4 && b1_9 && b2_3 && b3_14 && b4_24 && b5_11 && b6_17 && b7_13 && b8_2 && b9_10 && b10_12 && b11_15 && b12_30 && b13_47 && b14_25) {
pattern_id = 714;
}
if(b1_8 && b2_25 && b3_23 && b4_12 && b5_10 && b6_13 && b7_12 && b8_12 && b9_11 && b10_12 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 715;
}
if(b6_32 && b7_6 && b8_41 && b9_42 && b10_32 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 716;
}
if(b5_10 && b6_2 && b7_5 && b8_2 && b9_11 && b10_70 && b11_13 && b12_30 && b13_57 && b14_22) {
pattern_id = 717;
}
if(b5_10 && b6_2 && b7_29 && b8_12 && b9_15 && b10_12 && b11_1 && b12_12 && b13_50 && b14_26) {
pattern_id = 718;
}
if(b7_34 && b8_5 && b9_1 && b10_19 && b11_1 && b12_51 && b13_18 && b14_6) {
pattern_id = 719;
}
if(b1_8 && b2_25 && b3_3 && b4_5 && b5_27 && b6_12 && b7_10 && b8_5 && b9_29 && b10_6 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 720;
}
if(b2_16 && b3_3 && b4_30 && b5_23 && b6_32 && b7_29 && b8_17 && b9_39 && b10_30 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 721;
}
if(b2_16 && b3_3 && b4_30 && b5_23 && b6_44 && b7_41 && b8_5 && b9_44 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 722;
}
if(b8_20 && b9_6 && b10_39 && b11_1 && b12_1 && b13_11 && b14_48) {
pattern_id = 723;
}
if(b8_20 && b9_6 && b10_33 && b11_1 && b12_1 && b13_11 && b14_48) {
pattern_id = 724;
}
if(b4_23 && b5_31 && b6_8 && b7_6 && b8_9 && b9_39 && b10_24 && b11_10 && b12_12 && b13_8 && b14_26) {
pattern_id = 725;
}
if(b8_20 && b9_6 && b10_6 && b11_12 && b12_12 && b13_11 && b14_5) {
pattern_id = 726;
}
if(b0_4 && b1_32 && b2_6 && b3_37 && b4_5 && b5_23 && b6_12 && b7_34 && b8_27 && b9_17 && b10_2 && b11_1 && b12_25 && b13_47 && b14_25) {
pattern_id = 727;
}
if(b2_16 && b3_25 && b4_12 && b5_28 && b6_1 && b7_6 && b8_17 && b9_35 && b10_25 && b11_74 && b12_53 && b13_25 && b14_41) {
pattern_id = 728;
}
if(b4_23 && b5_31 && b6_10 && b7_14 && b8_14 && b9_39 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 729;
}
if(b4_23 && b5_31 && b6_10 && b7_14 && b8_14 && b9_39 && b10_30 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 730;
}
if(b5_10 && b6_30 && b7_36 && b8_16 && b9_29 && b10_7 && b11_12 && b12_30 && b13_47 && b14_25) {
pattern_id = 731;
}
if(b1_8 && b2_23 && b3_6 && b4_31 && b5_29 && b6_1 && b7_21 && b8_20 && b9_44 && b10_2 && b11_12 && b12_26 && b13_25 && b14_5) {
pattern_id = 732;
}
if(b2_16 && b3_25 && b4_12 && b5_8 && b6_17 && b7_9 && b8_26 && b9_5 && b10_17 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 733;
}
if(b2_16 && b3_25 && b4_7 && b5_2 && b6_27 && b7_19 && b8_2 && b9_2 && b10_2 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 734;
}
if(b5_10 && b6_30 && b7_24 && b8_17 && b9_8 && b10_32 && b11_1 && b12_11 && b13_16 && b14_26) {
pattern_id = 735;
}
if(b5_10 && b6_30 && b7_24 && b8_17 && b9_8 && b10_32 && b11_1 && b12_17 && b13_27 && b14_25) {
pattern_id = 736;
}
if(b7_34 && b8_37 && b9_10 && b10_11 && b11_25 && b12_30 && b13_47 && b14_25) {
pattern_id = 737;
}
if(b12_50 && b13_26 && b14_34) {
pattern_id = 738;
}
if(b1_8 && b2_32 && b3_53 && b4_57 && b5_10 && b6_4 && b7_13 && b8_5 && b9_39 && b10_24 && b11_13 && b12_17 && b13_18 && b14_28) {
pattern_id = 739;
}
if(b3_22 && b4_15 && b5_24 && b6_12 && b7_38 && b8_28 && b9_1 && b10_2 && b11_53 && b12_16 && b13_14 && b14_5) {
pattern_id = 740;
}
if(b3_22 && b4_15 && b5_24 && b6_12 && b7_38 && b8_23 && b9_1 && b10_2 && b11_53 && b12_16 && b13_14 && b14_5) {
pattern_id = 741;
}
if(b2_16 && b3_26 && b4_19 && b5_2 && b6_28 && b7_8 && b8_14 && b9_17 && b10_12 && b11_1 && b12_12 && b13_1 && b14_43) {
pattern_id = 742;
}
if(b1_8 && b2_32 && b3_12 && b4_25 && b5_27 && b6_23 && b7_5 && b8_9 && b9_6 && b10_42 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 743;
}
if(b1_8 && b2_32 && b3_12 && b4_25 && b5_27 && b6_2 && b7_5 && b8_40 && b9_18 && b10_47 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 744;
}
if(b0_4 && b1_17 && b2_10 && b3_18 && b4_31 && b5_4 && b6_2 && b7_19 && b8_14 && b9_32 && b10_25 && b11_27 && b12_1 && b13_47 && b14_53) {
pattern_id = 745;
}
if(b7_34 && b8_19 && b9_18 && b10_6 && b11_1 && b12_27 && b13_47 && b14_29) {
pattern_id = 746;
}
if(b1_8 && b2_32 && b3_12 && b4_18 && b5_4 && b6_8 && b7_9 && b8_5 && b9_29 && b10_17 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 747;
}
if(b2_16 && b3_26 && b4_19 && b5_6 && b6_1 && b7_21 && b8_41 && b9_18 && b10_21 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 748;
}
if(b1_8 && b2_32 && b3_10 && b4_28 && b5_42 && b6_13 && b7_7 && b8_1 && b9_5 && b10_17 && b11_1 && b12_27 && b13_18 && b14_8) {
pattern_id = 749;
}
if(b3_22 && b4_15 && b5_13 && b6_1 && b7_24 && b8_18 && b9_14 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 750;
}
if(b6_32 && b7_38 && b8_30 && b9_30 && b10_42 && b11_8 && b12_52 && b13_25 && b14_28) {
pattern_id = 751;
}
if(b4_23 && b5_27 && b6_35 && b7_6 && b8_19 && b9_39 && b10_17 && b11_8 && b12_30 && b13_47 && b14_48) {
pattern_id = 752;
}
if(b4_23 && b5_27 && b6_35 && b7_38 && b8_38 && b9_29 && b10_25 && b11_12 && b12_22 && b13_25 && b14_41) {
pattern_id = 753;
}
if(b7_34 && b8_1 && b9_39 && b10_11 && b11_8 && b12_30 && b13_47 && b14_25) {
pattern_id = 754;
}
if(b5_10 && b6_28 && b7_9 && b8_35 && b9_30 && b10_24 && b11_10 && b12_12 && b13_8 && b14_26) {
pattern_id = 755;
}
if(b1_8 && b2_15 && b3_5 && b4_45 && b5_19 && b6_19 && b7_5 && b8_12 && b9_8 && b10_30 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 756;
}
if(b3_22 && b4_9 && b5_2 && b6_19 && b7_23 && b8_41 && b9_39 && b10_6 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 757;
}
if(b1_8 && b2_15 && b3_20 && b4_20 && b5_34 && b6_11 && b7_6 && b8_14 && b9_8 && b10_12 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 758;
}
if(b2_16 && b3_29 && b4_25 && b5_22 && b6_1 && b7_21 && b8_41 && b9_18 && b10_21 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 759;
}
if(b2_16 && b3_29 && b4_25 && b5_22 && b6_1 && b7_21 && b8_41 && b9_18 && b10_21 && b11_1 && b12_47 && b13_1 && b14_35) {
pattern_id = 760;
}
if(b4_23 && b5_27 && b6_12 && b7_10 && b8_12 && b9_16 && b10_11 && b11_63 && b12_8 && b13_8 && b14_28) {
pattern_id = 761;
}
if(b1_8 && b2_15 && b3_20 && b4_20 && b5_11 && b6_1 && b7_29 && b8_5 && b9_30 && b10_33 && b11_13 && b12_34 && b13_9 && b14_28) {
pattern_id = 762;
}
if(b6_32 && b7_38 && b8_17 && b9_35 && b10_47 && b11_18 && b12_16 && b13_11 && b14_28) {
pattern_id = 763;
}
if(b3_22 && b4_9 && b5_2 && b6_19 && b7_21 && b8_27 && b9_1 && b10_19 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 764;
}
if(b5_10 && b6_28 && b7_7 && b8_33 && b9_17 && b10_17 && b11_13 && b12_28 && b13_9 && b14_8) {
pattern_id = 765;
}
if(b3_22 && b4_9 && b5_2 && b6_19 && b7_37 && b8_27 && b9_32 && b10_30 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 766;
}
if(b7_34 && b8_1 && b9_5 && b10_24 && b11_51 && b12_12 && b13_12 && b14_22) {
pattern_id = 767;
}
if(b4_23 && b5_27 && b6_12 && b7_10 && b8_38 && b9_42 && b10_54 && b11_15 && b12_8 && b13_25 && b14_51) {
pattern_id = 768;
}
if(b2_16 && b3_29 && b4_25 && b5_22 && b6_10 && b7_14 && b8_37 && b9_1 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 769;
}
if(b2_16 && b3_29 && b4_25 && b5_22 && b6_10 && b7_14 && b8_37 && b9_1 && b10_25 && b11_26 && b12_17 && b13_9 && b14_41) {
pattern_id = 770;
}
if(b1_8 && b2_15 && b3_20 && b4_20 && b5_13 && b6_8 && b7_13 && b8_18 && b9_40 && b10_7 && b11_47 && b12_7 && b13_37 && b14_6) {
pattern_id = 771;
}
if(b0_4 && b1_7 && b2_3 && b3_21 && b4_12 && b5_8 && b6_30 && b7_24 && b8_39 && b9_1 && b10_47 && b11_15 && b12_25 && b13_47 && b14_6) {
pattern_id = 772;
}
if(b3_22 && b4_9 && b5_2 && b6_19 && b7_24 && b8_17 && b9_32 && b10_30 && b11_48 && b12_12 && b13_12 && b14_25) {
pattern_id = 773;
}
if(b2_16 && b3_29 && b4_25 && b5_22 && b6_11 && b7_36 && b8_27 && b9_8 && b10_32 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 774;
}
if(b3_22 && b4_9 && b5_2 && b6_19 && b7_24 && b8_5 && b9_39 && b10_19 && b11_28 && b12_56 && b13_12 && b14_51) {
pattern_id = 775;
}
if(b4_23 && b5_27 && b6_34 && b7_13 && b8_17 && b9_1 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 776;
}
if(b2_16 && b3_29 && b4_29 && b5_2 && b6_27 && b7_7 && b8_12 && b9_44 && b10_11 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 777;
}
if(b1_8 && b2_15 && b3_19 && b4_25 && b5_26 && b6_12 && b7_9 && b8_41 && b9_18 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 778;
}
if(b1_8 && b2_15 && b3_19 && b4_13 && b5_24 && b6_11 && b7_35 && b8_9 && b9_39 && b10_20 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 779;
}
if(b0_4 && b1_7 && b2_14 && b3_18 && b4_19 && b5_6 && b6_29 && b7_29 && b8_12 && b9_14 && b10_25 && b11_23 && b12_42 && b13_12 && b14_41) {
pattern_id = 780;
}
if(b2_16 && b3_29 && b4_19 && b5_21 && b6_36 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 781;
}
if(b6_32 && b7_38 && b8_40 && b9_30 && b10_7 && b11_12 && b12_53 && b13_12 && b14_10) {
pattern_id = 782;
}
if(b5_10 && b6_28 && b7_36 && b8_28 && b9_39 && b10_30 && b11_48 && b12_25 && b13_20 && b14_28) {
pattern_id = 783;
}
if(b4_23 && b5_27 && b6_10 && b7_23 && b8_10 && b9_29 && b10_21 && b11_17 && b12_8 && b13_20 && b14_6) {
pattern_id = 784;
}
if(b3_22 && b4_9 && b5_13 && b6_33 && b7_19 && b8_2 && b9_15 && b10_33 && b11_53 && b12_18 && b13_9 && b14_22) {
pattern_id = 785;
}
if(b6_32 && b7_38 && b8_40 && b9_30 && b10_70 && b11_8 && b12_7 && b13_20 && b14_28) {
pattern_id = 786;
}
if(b10_46 && b11_19 && b12_16 && b13_18 && b14_43) {
pattern_id = 787;
}
if(b6_32 && b7_38 && b8_9 && b9_29 && b10_2 && b11_17 && b12_50 && b13_26 && b14_53) {
pattern_id = 788;
}
if(b4_23 && b5_27 && b6_11 && b7_35 && b8_24 && b9_10 && b10_6 && b11_1 && b12_25 && b13_20 && b14_16) {
pattern_id = 789;
}
if(b4_23 && b5_27 && b6_11 && b7_35 && b8_24 && b9_10 && b10_6 && b11_1 && b12_22 && b13_15 && b14_29) {
pattern_id = 790;
}
if(b3_22 && b4_9 && b5_6 && b6_29 && b7_12 && b8_12 && b9_18 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 791;
}
if(b7_34 && b8_1 && b9_14 && b10_20 && b11_50 && b12_36 && b13_51 && b14_25) {
pattern_id = 792;
}
if(b3_22 && b4_9 && b5_27 && b6_28 && b7_9 && b8_26 && b9_44 && b10_11 && b11_52 && b12_30 && b13_47 && b14_25) {
pattern_id = 793;
}
if(b3_22 && b4_9 && b5_27 && b6_28 && b7_10 && b8_14 && b9_39 && b10_17 && b11_12 && b12_30 && b13_47 && b14_25) {
pattern_id = 794;
}
if(b7_34 && b8_1 && b9_14 && b10_20 && b11_19 && b12_12 && b13_12 && b14_22) {
pattern_id = 795;
}
if(b12_50 && b13_50 && b14_28) {
pattern_id = 796;
}
if(b6_32 && b7_54 && b8_11 && b9_18 && b10_60 && b11_47 && b12_25 && b13_20 && b14_28) {
pattern_id = 797;
}
if(b7_34 && b8_6 && b9_44 && b10_33 && b11_1 && b12_46 && b13_19 && b14_16) {
pattern_id = 798;
}
if(b11_28 && b12_58 && b13_1 && b14_32) {
pattern_id = 799;
}
if(b10_46 && b11_59 && b12_48 && b13_11 && b14_43) {
pattern_id = 800;
}
if(b7_34 && b8_49 && b9_32 && b10_2 && b11_47 && b12_7 && b13_45 && b14_17) {
pattern_id = 801;
}
if(b9_38 && b10_57 && b11_15 && b12_7 && b13_15 && b14_6) {
pattern_id = 802;
}
if(b14_12) {
pattern_id = 803;
}
if(b13_3 && b14_12) {
pattern_id = 804;
}
if(b9_3 && b10_7 && b11_40 && b12_33 && b13_25 && b14_44) {
pattern_id = 805;
}
if(b14_34) {
pattern_id = 806;
}
if(b11_20 && b12_19 && b13_21 && b14_19) {
pattern_id = 807;
}
if(b6_26 && b7_45 && b8_8 && b9_37 && b10_14 && b11_3 && b12_43 && b13_43 && b14_2) {
pattern_id = 808;
}
if(b12_19 && b13_3 && b14_12) {
pattern_id = 809;
}
if(b8_45 && b9_63 && b10_14 && b11_2 && b12_19 && b13_3 && b14_2) {
pattern_id = 810;
}
if(b3_53 && b4_8 && b5_61 && b6_54 && b7_16 && b8_38 && b9_10 && b10_19 && b11_27 && b12_69 && b13_31 && b14_28) {
pattern_id = 811;
}
if(b12_23 && b13_3 && b14_47) {
pattern_id = 812;
}
if(b12_23 && b13_3 && b14_77) {
pattern_id = 813;
}
if(b12_55 && b13_3 && b14_53) {
pattern_id = 814;
}
if(b8_36 && b9_37 && b10_44 && b11_13 && b12_48 && b13_11 && b14_22) {
pattern_id = 815;
}
if(b11_38 && b12_23 && b13_3 && b14_4) {
pattern_id = 816;
}
if(b6_22 && b7_27 && b8_31 && b9_22 && b10_39 && b11_1 && b12_35 && b13_28 && b14_34) {
pattern_id = 817;
}
if(b12_29 && b13_44 && b14_78) {
pattern_id = 818;
}
if(b2_7 && b3_7 && b4_8 && b5_14 && b6_9 && b7_22 && b8_30 && b9_12 && b10_5 && b11_36 && b12_40 && b13_39 && b14_41) {
pattern_id = 819;
}
if(b13_69 && b14_13) {
pattern_id = 820;
}
if(b2_41 && b3_52 && b4_34 && b5_19 && b6_36 && b7_7 && b8_26 && b9_31 && b10_14 && b11_70 && b12_66 && b13_56 && b14_30) {
pattern_id = 821;
}
if(b10_76 && b11_56 && b12_17 && b13_27 && b14_25) {
pattern_id = 822;
}
if(b8_60 && b9_34 && b10_58 && b11_68 && b12_37 && b13_6 && b14_3) {
pattern_id = 823;
}
if(b13_69 && b14_7) {
pattern_id = 824;
}
if(b4_49 && b5_12 && b6_6 && b7_11 && b8_44 && b9_60 && b10_69 && b11_29 && b12_41 && b13_7 && b14_30) {
pattern_id = 825;
}
if(b2_41 && b3_45 && b4_26 && b5_55 && b6_50 && b7_11 && b8_55 && b9_60 && b10_69 && b11_29 && b12_41 && b13_7 && b14_30) {
pattern_id = 826;
}
if(b0_16 && b1_31 && b2_35 && b3_49 && b4_19 && b5_32 && b6_2 && b7_66 && b8_40 && b9_8 && b10_2 && b11_48 && b12_11 && b13_11 && b14_73) {
pattern_id = 827;
}
if(b1_40 && b2_18 && b3_6 && b4_12 && b5_8 && b6_12 && b7_6 && b8_3 && b9_14 && b10_11 && b11_12 && b12_34 && b13_17 && b14_51) {
pattern_id = 828;
}
if(b8_60 && b9_18 && b10_59 && b11_15 && b12_12 && b13_27 && b14_5) {
pattern_id = 829;
}
if(b6_60 && b7_22 && b8_4 && b9_28 && b10_4 && b11_22 && b12_50 && b13_49 && b14_37) {
pattern_id = 830;
}
if(b9_54 && b10_14 && b11_55 && b12_40 && b13_3 && b14_20) {
pattern_id = 831;
}
if(b3_55 && b4_2 && b5_53 && b6_60 && b7_3 && b8_13 && b9_54 && b10_14 && b11_55 && b12_40 && b13_3 && b14_20) {
pattern_id = 832;
}
if(b0_19 && b1_42 && b2_48 && b3_55 && b4_2 && b5_5 && b6_54 && b7_14 && b8_27 && b9_42 && b10_24 && b11_10 && b12_12 && b13_8 && b14_26) {
pattern_id = 833;
}
if(b13_62 && b14_51) {
pattern_id = 834;
}
if(b7_67 && b8_44 && b9_21 && b10_35 && b11_41 && b12_23 && b13_36 && b14_51) {
pattern_id = 835;
}
if(b14_30) {
pattern_id = 836;
}
if(b6_59 && b7_67 && b8_8 && b9_31 && b10_35 && b11_2 && b12_17 && b13_18 && b14_47) {
pattern_id = 837;
}
if(b5_35 && b6_39 && b7_44 && b8_39 && b9_40 && b10_54 && b11_56 && b12_56 && b13_52 && b14_41) {
pattern_id = 838;
}
if(b0_7 && b1_15 && b2_3 && b3_16 && b4_25 && b5_23 && b6_12 && b7_46 && b8_14 && b9_15 && b10_48 && b11_48 && b12_8 && b13_20 && b14_6) {
pattern_id = 839;
}
if(b2_22 && b3_32 && b4_21 && b5_24 && b6_2 && b7_46 && b8_14 && b9_15 && b10_48 && b11_48 && b12_8 && b13_20 && b14_6) {
pattern_id = 840;
}
if(b2_22 && b3_35 && b4_5 && b5_16 && b6_12 && b7_30 && b8_17 && b9_8 && b10_56 && b11_13 && b12_46 && b13_9 && b14_22) {
pattern_id = 841;
}
if(b6_39 && b7_30 && b8_22 && b9_48 && b10_22 && b11_31 && b12_39 && b13_55 && b14_7) {
pattern_id = 842;
}
if(b6_39 && b7_12 && b8_17 && b9_1 && b10_32 && b11_18 && b12_42 && b13_9 && b14_51) {
pattern_id = 843;
}
if(b11_56 && b12_15 && b13_47 && b14_54) {
pattern_id = 844;
}
if(b4_33 && b5_27 && b6_10 && b7_23 && b8_10 && b9_1 && b10_60 && b11_12 && b12_26 && b13_27 && b14_43) {
pattern_id = 845;
}
if(b2_22 && b3_29 && b4_12 && b5_19 && b6_40 && b7_6 && b8_41 && b9_16 && b10_60 && b11_15 && b12_8 && b13_20 && b14_26) {
pattern_id = 846;
}
if(b2_22 && b3_29 && b4_12 && b5_19 && b6_11 && b7_6 && b8_12 && b9_8 && b10_19 && b11_50 && b12_28 && b13_9 && b14_8) {
pattern_id = 847;
}
if(b3_36 && b4_9 && b5_13 && b6_33 && b7_24 && b8_5 && b9_29 && b10_6 && b11_50 && b12_28 && b13_9 && b14_8) {
pattern_id = 848;
}
if(b1_18 && b2_15 && b3_6 && b4_34 && b5_31 && b6_14 && b7_8 && b8_38 && b9_5 && b10_47 && b11_16 && b12_7 && b13_37 && b14_6) {
pattern_id = 849;
}
if(b3_36 && b4_9 && b5_13 && b6_33 && b7_13 && b8_18 && b9_8 && b10_60 && b11_27 && b12_16 && b13_15 && b14_43) {
pattern_id = 850;
}
if(b3_36 && b4_9 && b5_13 && b6_33 && b7_15 && b8_17 && b9_8 && b10_60 && b11_12 && b12_25 && b13_48 && b14_35) {
pattern_id = 851;
}
if(b3_36 && b4_9 && b5_13 && b6_33 && b7_15 && b8_17 && b9_8 && b10_60 && b11_13 && b12_47 && b13_48 && b14_56) {
pattern_id = 852;
}
if(b0_7 && b1_7 && b2_6 && b3_33 && b4_15 && b5_2 && b6_27 && b7_19 && b8_24 && b9_13 && b10_60 && b11_25 && b12_25 && b13_20 && b14_18) {
pattern_id = 853;
}
if(b14_36) {
pattern_id = 854;
}
if(b13_34 && b14_36) {
pattern_id = 855;
}
if(b14_20) {
pattern_id = 856;
}
if(b5_5 && b6_9 && b7_11 && b8_13 && b9_4 && b10_8 && b11_21 && b12_4 && b13_22 && b14_20) {
pattern_id = 857;
}
if(b4_50 && b5_15 && b6_54 && b7_62 && b8_59 && b9_37 && b10_8 && b11_9 && b12_37 && b13_4 && b14_71) {
pattern_id = 858;
}
if(b2_8 && b3_9 && b4_14 && b5_17 && b6_6 && b7_2 && b8_29 && b9_28 && b10_26 && b11_21 && b12_41 && b13_10 && b14_7) {
pattern_id = 859;
}
if(b7_11 && b8_21 && b9_25 && b10_26 && b11_29 && b12_31 && b13_29 && b14_31) {
pattern_id = 860;
}
if(b11_21 && b12_24 && b13_46 && b14_59) {
pattern_id = 861;
}
if(b11_21 && b12_10 && b13_10 && b14_44) {
pattern_id = 862;
}
if(b11_21 && b12_10 && b13_64 && b14_33) {
pattern_id = 863;
}
if(b9_4 && b10_29 && b11_22 && b12_37 && b13_23 && b14_38) {
pattern_id = 864;
}
if(b2_8 && b3_49 && b4_51 && b5_5 && b6_55 && b7_60 && b8_34 && b9_62 && b10_45 && b11_39 && b12_37 && b13_36 && b14_72) {
pattern_id = 865;
}
if(b11_21 && b12_5 && b13_36 && b14_65) {
pattern_id = 866;
}
if(b3_4 && b4_44 && b5_49 && b6_38 && b7_42 && b8_47 && b9_28 && b10_61 && b11_54 && b12_4 && b13_36 && b14_33) {
pattern_id = 867;
}
if(b7_11 && b8_50 && b9_28 && b10_63 && b11_4 && b12_59 && b13_63 && b14_59) {
pattern_id = 868;
}
if(b6_9 && b7_8 && b8_37 && b9_32 && b10_12 && b11_17 && b12_25 && b13_50 && b14_54) {
pattern_id = 869;
}
if(b9_4 && b10_42 && b11_18 && b12_47 && b13_45 && b14_11) {
pattern_id = 870;
}
if(b7_11 && b8_9 && b9_11 && b10_48 && b11_48 && b12_8 && b13_20 && b14_6) {
pattern_id = 871;
}
if(b9_12 && b10_22 && b11_21 && b12_57 && b13_4 && b14_31) {
pattern_id = 872;
}
if(b13_33 && b14_61) {
pattern_id = 873;
}
if(b2_42 && b3_48 && b4_10 && b5_40 && b6_3 && b7_3 && b8_3 && b9_3 && b10_3 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 874;
}
if(b0_1 && b1_1 && b2_1 && b3_1 && b4_2 && b5_3 && b6_3 && b7_3 && b8_3 && b9_3 && b10_3 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 875;
}
if(b9_12 && b10_26 && b11_21 && b12_3 && b13_4 && b14_39) {
pattern_id = 876;
}
if(b2_42 && b3_39 && b4_35 && b5_54 && b6_55 && b7_22 && b8_57 && b9_23 && b10_41 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 877;
}
if(b5_15 && b6_1 && b7_6 && b8_5 && b9_16 && b10_12 && b11_37 && b12_12 && b13_12 && b14_25) {
pattern_id = 878;
}
if(b7_59 && b8_8 && b9_3 && b10_14 && b11_3 && b12_2 && b13_41 && b14_2) {
pattern_id = 879;
}
if(b11_54 && b12_4 && b13_46 && b14_4) {
pattern_id = 880;
}
if(b11_54 && b12_4 && b13_64 && b14_20) {
pattern_id = 881;
}
if(b12_31 && b13_7 && b14_39) {
pattern_id = 882;
}
if(b12_31 && b13_30 && b14_38) {
pattern_id = 883;
}
if(b8_7 && b9_34 && b10_34 && b11_31 && b12_37 && b13_6 && b14_3) {
pattern_id = 884;
}
if(b11_54 && b12_20 && b13_64 && b14_68) {
pattern_id = 885;
}
if(b9_36 && b10_26 && b11_58 && b12_4 && b13_36 && b14_33) {
pattern_id = 886;
}
if(b12_31 && b13_35 && b14_38) {
pattern_id = 887;
}
if(b10_35 && b11_40 && b12_43 && b13_32 && b14_4) {
pattern_id = 888;
}
if(b1_11 && b2_10 && b3_31 && b4_25 && b5_22 && b6_38 && b7_19 && b8_5 && b9_1 && b10_9 && b11_13 && b12_22 && b13_9 && b14_51) {
pattern_id = 889;
}
if(b0_23 && b1_4 && b2_31 && b3_10 && b4_25 && b5_11 && b6_2 && b7_17 && b8_40 && b9_43 && b10_6 && b11_56 && b12_25 && b13_45 && b14_51) {
pattern_id = 890;
}
if(b1_11 && b2_13 && b3_10 && b4_24 && b5_2 && b6_14 && b7_6 && b8_28 && b9_33 && b10_12 && b11_52 && b12_42 && b13_11 && b14_32) {
pattern_id = 891;
}
if(b3_44 && b4_13 && b5_21 && b6_2 && b7_7 && b8_2 && b9_10 && b10_60 && b11_9 && b12_65 && b13_47 && b14_5) {
pattern_id = 892;
}
if(b11_55 && b12_37 && b13_46 && b14_33) {
pattern_id = 893;
}
if(b9_37 && b10_22 && b11_24 && b12_37 && b13_36 && b14_33) {
pattern_id = 894;
}
if(b8_21 && b9_47 && b10_38 && b11_58 && b12_41 && b13_7 && b14_4) {
pattern_id = 895;
}
if(b7_46 && b8_32 && b9_7 && b10_35 && b11_33 && b12_38 && b13_33 && b14_33) {
pattern_id = 896;
}
if(b9_37 && b10_22 && b11_64 && b12_41 && b13_66 && b14_77) {
pattern_id = 897;
}
if(b3_9 && b4_35 && b5_12 && b6_48 && b7_3 && b8_31 && b9_3 && b10_14 && b11_14 && b12_2 && b13_3 && b14_34) {
pattern_id = 898;
}
if(b11_58 && b12_41 && b13_38 && b14_9) {
pattern_id = 899;
}
if(b8_32 && b9_61 && b10_8 && b11_37 && b12_38 && b13_23 && b14_33) {
pattern_id = 900;
}
if(b1_28 && b2_34 && b3_32 && b4_43 && b5_46 && b6_48 && b7_42 && b8_23 && b9_7 && b10_64 && b11_35 && b12_41 && b13_7 && b14_61) {
pattern_id = 901;
}
if(b11_58 && b12_60 && b13_64 && b14_9) {
pattern_id = 902;
}
if(b3_32 && b4_41 && b5_40 && b6_3 && b7_3 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_44 && b14_2) {
pattern_id = 903;
}
if(b10_22 && b11_15 && b12_16 && b13_15 && b14_8) {
pattern_id = 904;
}
if(b12_6 && b13_6 && b14_4) {
pattern_id = 905;
}
if(b10_9 && b11_58 && b12_41 && b13_6 && b14_65) {
pattern_id = 906;
}
if(b11_42 && b12_38 && b13_23 && b14_38) {
pattern_id = 907;
}
if(b8_56 && b9_48 && b10_23 && b11_37 && b12_64 && b13_36 && b14_70) {
pattern_id = 908;
}
if(b2_2 && b3_2 && b4_4 && b5_3 && b6_7 && b7_5 && b8_9 && b9_10 && b10_10 && b11_10 && b12_11 && b13_9 && b14_10) {
pattern_id = 909;
}
if(b10_9 && b11_9 && b12_10 && b13_10 && b14_9) {
pattern_id = 910;
}
if(b11_42 && b12_16 && b13_18 && b14_29) {
pattern_id = 911;
}
if(b7_55 && b8_9 && b9_29 && b10_42 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 912;
}
if(b12_39 && b13_7 && b14_3) {
pattern_id = 913;
}
if(b11_39 && b12_37 && b13_36 && b14_4) {
pattern_id = 914;
}
if(b1_3 && b2_4 && b3_2 && b4_10 && b5_10 && b6_18 && b7_20 && b8_22 && b9_28 && b10_29 && b11_28 && b12_33 && b13_28 && b14_34) {
pattern_id = 915;
}
if(b6_41 && b7_42 && b8_22 && b9_22 && b10_46 && b11_5 && b12_2 && b13_3 && b14_34) {
pattern_id = 916;
}
if(b9_66 && b10_22 && b11_9 && b12_13 && b13_31 && b14_41) {
pattern_id = 917;
}
if(b1_3 && b2_4 && b3_2 && b4_10 && b5_33 && b6_18 && b7_20 && b8_22 && b9_28 && b10_29 && b11_28 && b12_33 && b13_28 && b14_12) {
pattern_id = 918;
}
if(b2_19 && b3_32 && b4_26 && b5_32 && b6_24 && b7_32 && b8_44 && b9_47 && b10_26 && b11_9 && b12_38 && b13_7 && b14_31) {
pattern_id = 919;
}
if(b12_39 && b13_23 && b14_3) {
pattern_id = 920;
}
if(b7_52 && b8_47 && b9_53 && b10_4 && b11_58 && b12_24 && b13_46 && b14_20) {
pattern_id = 921;
}
if(b4_1 && b5_18 && b6_21 && b7_26 && b8_32 && b9_33 && b10_38 && b11_21 && b12_13 && b13_10 && b14_42) {
pattern_id = 922;
}
if(b8_53 && b9_34 && b10_58 && b11_62 && b12_24 && b13_7 && b14_31) {
pattern_id = 923;
}
if(b6_41 && b7_32 && b8_21 && b9_67 && b10_61 && b11_24 && b12_24 && b13_22 && b14_51) {
pattern_id = 924;
}
if(b2_19 && b3_57 && b4_35 && b5_32 && b6_57 && b7_70 && b8_8 && b9_9 && b10_8 && b11_3 && b12_19 && b13_3 && b14_2) {
pattern_id = 925;
}
if(b4_1 && b5_4 && b6_2 && b7_7 && b8_7 && b9_8 && b10_7 && b11_8 && b12_1 && b13_9 && b14_8) {
pattern_id = 926;
}
if(b4_1 && b5_2 && b6_2 && b7_2 && b8_2 && b9_2 && b10_2 && b11_2 && b12_2 && b13_2 && b14_2) {
pattern_id = 927;
}
if(b10_37 && b11_6 && b12_2 && b13_1 && b14_6) {
pattern_id = 928;
}
if(b6_41 && b7_29 && b8_14 && b9_6 && b10_6 && b11_2 && b12_23 && b13_2 && b14_2) {
pattern_id = 929;
}
if(b11_43 && b12_37 && b13_22 && b14_38) {
pattern_id = 930;
}
if(b8_4 && b9_47 && b10_8 && b11_55 && b12_50 && b13_28 && b14_28) {
pattern_id = 931;
}
if(b6_38 && b7_42 && b8_66 && b9_33 && b10_23 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 932;
}
if(b11_43 && b12_37 && b13_46 && b14_59) {
pattern_id = 933;
}
if(b11_43 && b12_37 && b13_46 && b14_44) {
pattern_id = 934;
}
if(b10_63 && b11_43 && b12_57 && b13_49 && b14_74) {
pattern_id = 935;
}
if(b10_63 && b11_9 && b12_41 && b13_64 && b14_28) {
pattern_id = 936;
}
if(b9_19 && b10_4 && b11_9 && b12_10 && b13_31 && b14_34) {
pattern_id = 937;
}
if(b7_20 && b8_17 && b9_16 && b10_33 && b11_10 && b12_30 && b13_28 && b14_37) {
pattern_id = 938;
}
if(b4_35 && b5_53 && b6_29 && b7_60 && b8_13 && b9_60 && b10_69 && b11_4 && b12_59 && b13_22 && b14_51) {
pattern_id = 939;
}
if(b9_46 && b10_34 && b11_55 && b12_37 && b13_53 && b14_4) {
pattern_id = 940;
}
if(b2_9 && b3_48 && b4_26 && b5_20 && b6_24 && b7_18 && b8_13 && b9_36 && b10_61 && b11_29 && b12_59 && b13_22 && b14_39) {
pattern_id = 941;
}
if(b9_46 && b10_34 && b11_57 && b12_38 && b13_36 && b14_33) {
pattern_id = 942;
}
if(b7_2 && b8_29 && b9_7 && b10_29 && b11_31 && b12_39 && b13_38 && b14_40) {
pattern_id = 943;
}
if(b4_35 && b5_21 && b6_31 && b7_9 && b8_16 && b9_18 && b10_30 && b11_3 && b12_5 && b13_38 && b14_39) {
pattern_id = 944;
}
if(b2_9 && b3_10 && b4_15 && b5_4 && b6_8 && b7_19 && b8_26 && b9_22 && b10_33 && b11_10 && b12_42 && b13_12 && b14_10) {
pattern_id = 945;
}
if(b10_65 && b11_29 && b12_38 && b13_23 && b14_4) {
pattern_id = 946;
}
if(b5_59 && b6_57 && b7_2 && b8_47 && b9_22 && b10_5 && b11_5 && b12_4 && b13_5 && b14_75) {
pattern_id = 947;
}
if(b10_77 && b11_15 && b12_25 && b13_1 && b14_7) {
pattern_id = 948;
}
if(b11_24 && b12_38 && b13_40 && b14_3) {
pattern_id = 949;
}
if(b11_24 && b12_20 && b13_6 && b14_42) {
pattern_id = 950;
}
if(b10_38 && b11_29 && b12_31 && b13_29 && b14_4) {
pattern_id = 951;
}
if(b10_38 && b11_29 && b12_39 && b13_4 && b14_9) {
pattern_id = 952;
}
if(b11_24 && b12_3 && b13_55 && b14_45) {
pattern_id = 953;
}
if(b6_58 && b7_19 && b8_2 && b9_6 && b10_1 && b11_2 && b12_19 && b13_3 && b14_2) {
pattern_id = 954;
}
if(b7_49 && b8_14 && b9_15 && b10_7 && b11_17 && b12_25 && b13_15 && b14_10) {
pattern_id = 955;
}
if(b3_8 && b4_13 && b5_11 && b6_1 && b7_6 && b8_27 && b9_29 && b10_21 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 956;
}
if(b3_8 && b4_13 && b5_16 && b6_13 && b7_25 && b8_3 && b9_2 && b10_7 && b11_13 && b12_22 && b13_9 && b14_26) {
pattern_id = 957;
}
if(b0_3 && b1_4 && b2_11 && b3_12 && b4_16 && b5_3 && b6_13 && b7_25 && b8_10 && b9_29 && b10_17 && b11_15 && b12_8 && b13_14 && b14_6) {
pattern_id = 958;
}
if(b6_51 && b7_23 && b8_29 && b9_47 && b10_8 && b11_33 && b12_31 && b13_54 && b14_4) {
pattern_id = 959;
}
if(b2_39 && b3_4 && b4_35 && b5_54 && b6_18 && b7_55 && b8_48 && b9_34 && b10_36 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 960;
}
if(b11_37 && b12_43 && b13_36 && b14_61) {
pattern_id = 961;
}
if(b10_36 && b11_41 && b12_31 && b13_10 && b14_39) {
pattern_id = 962;
}
if(b12_44 && b13_29 && b14_38) {
pattern_id = 963;
}
if(b10_36 && b11_41 && b12_43 && b13_32 && b14_4) {
pattern_id = 964;
}
if(b10_36 && b11_41 && b12_43 && b13_32 && b14_37) {
pattern_id = 965;
}
if(b11_37 && b12_20 && b13_2 && b14_33) {
pattern_id = 966;
}
if(b11_37 && b12_20 && b13_70 && b14_33) {
pattern_id = 967;
}
if(b11_37 && b12_3 && b13_42 && b14_4) {
pattern_id = 968;
}
if(b13_30 && b14_70) {
pattern_id = 969;
}
if(b5_43 && b6_1 && b7_54 && b8_28 && b9_17 && b10_2 && b11_17 && b12_18 && b13_15 && b14_6) {
pattern_id = 970;
}
if(b5_43 && b6_17 && b7_21 && b8_17 && b9_54 && b10_30 && b11_26 && b12_51 && b13_37 && b14_29) {
pattern_id = 971;
}
if(b7_18 && b8_13 && b9_25 && b10_22 && b11_31 && b12_4 && b13_30 && b14_33) {
pattern_id = 972;
}
if(b10_34 && b11_4 && b12_31 && b13_29 && b14_4) {
pattern_id = 973;
}
if(b11_31 && b12_24 && b13_40 && b14_3) {
pattern_id = 974;
}
if(b6_6 && b7_32 && b8_22 && b9_46 && b10_9 && b11_46 && b12_13 && b13_60 && b14_4) {
pattern_id = 975;
}
if(b10_34 && b11_7 && b12_44 && b13_36 && b14_59) {
pattern_id = 976;
}
if(b6_6 && b7_7 && b8_5 && b9_7 && b10_6 && b11_6 && b12_8 && b13_8 && b14_5) {
pattern_id = 977;
}
if(b3_46 && b4_12 && b5_2 && b6_27 && b7_9 && b8_20 && b9_58 && b10_14 && b11_2 && b12_19 && b13_3 && b14_2) {
pattern_id = 978;
}
if(b7_32 && b8_37 && b9_10 && b10_23 && b11_44 && b12_14 && b13_15 && b14_14) {
pattern_id = 979;
}
if(b8_44 && b9_4 && b10_26 && b11_9 && b12_38 && b13_22 && b14_39) {
pattern_id = 980;
}
if(b11_22 && b12_4 && b13_40 && b14_31) {
pattern_id = 981;
}
if(b10_29 && b11_21 && b12_3 && b13_40 && b14_4) {
pattern_id = 982;
}
if(b2_5 && b3_4 && b4_11 && b5_12 && b6_18 && b7_21 && b8_26 && b9_17 && b10_31 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 983;
}
if(b8_44 && b9_4 && b10_4 && b11_2 && b12_19 && b13_3 && b14_2) {
pattern_id = 984;
}
if(b9_64 && b10_35 && b11_33 && b12_12 && b13_11 && b14_26) {
pattern_id = 985;
}
if(b5_32 && b6_38 && b7_18 && b8_63 && b9_15 && b10_42 && b11_25 && b12_15 && b13_45 && b14_38) {
pattern_id = 986;
}
if(b13_64 && b14_42) {
pattern_id = 987;
}
if(b11_22 && b12_20 && b13_23 && b14_21) {
pattern_id = 988;
}
if(b11_22 && b12_20 && b13_40 && b14_3) {
pattern_id = 989;
}
if(b9_64 && b10_23 && b11_35 && b12_41 && b13_32 && b14_28) {
pattern_id = 990;
}
if(b8_44 && b9_48 && b10_61 && b11_57 && b12_44 && b13_40 && b14_21) {
pattern_id = 991;
}
if(b7_53 && b8_48 && b9_46 && b10_62 && b11_37 && b12_3 && b13_42 && b14_4) {
pattern_id = 992;
}
if(b12_10 && b13_55 && b14_3) {
pattern_id = 993;
}
if(b12_10 && b13_35 && b14_38) {
pattern_id = 994;
}
if(b4_3 && b5_37 && b6_7 && b7_26 && b8_3 && b9_28 && b10_23 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 995;
}
if(b6_24 && b7_42 && b8_13 && b9_37 && b10_43 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 996;
}
if(b6_24 && b7_42 && b8_13 && b9_37 && b10_64 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 997;
}
if(b9_48 && b10_22 && b11_31 && b12_4 && b13_30 && b14_33) {
pattern_id = 998;
}
if(b11_33 && b12_37 && b13_40 && b14_3) {
pattern_id = 999;
}
if(b11_33 && b12_37 && b13_36 && b14_7) {
pattern_id = 1000;
}
if(b6_24 && b7_42 && b8_43 && b9_33 && b10_23 && b11_39 && b12_13 && b13_31 && b14_4) {
pattern_id = 1001;
}
if(b10_26 && b11_42 && b12_14 && b13_32 && b14_12) {
pattern_id = 1002;
}
if(b11_33 && b12_38 && b13_63 && b14_52) {
pattern_id = 1003;
}
if(b12_49 && b13_30 && b14_38) {
pattern_id = 1004;
}
if(b10_26 && b11_37 && b12_43 && b13_4 && b14_7) {
pattern_id = 1005;
}
if(b11_33 && b12_59 && b13_63 && b14_7) {
pattern_id = 1006;
}
if(b10_26 && b11_31 && b12_6 && b13_38 && b14_4) {
pattern_id = 1007;
}
if(b11_33 && b12_59 && b13_36 && b14_59) {
pattern_id = 1008;
}
if(b12_49 && b13_71 && b14_31) {
pattern_id = 1009;
}
if(b11_33 && b12_3 && b13_7 && b14_3) {
pattern_id = 1010;
}
if(b8_48 && b9_5 && b10_47 && b11_26 && b12_25 && b13_47 && b14_6) {
pattern_id = 1011;
}
if(b4_3 && b5_2 && b6_4 && b7_5 && b8_5 && b9_5 && b10_5 && b11_5 && b12_4 && b13_5 && b14_4) {
pattern_id = 1012;
}
if(b2_26 && b3_4 && b4_14 && b5_54 && b6_18 && b7_55 && b8_48 && b9_34 && b10_36 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1013;
}
if(b8_29 && b9_47 && b10_8 && b11_33 && b12_31 && b13_54 && b14_4) {
pattern_id = 1014;
}
if(b5_12 && b6_50 && b7_11 && b8_48 && b9_36 && b10_63 && b11_2 && b12_19 && b13_3 && b14_2) {
pattern_id = 1015;
}
if(b2_26 && b3_32 && b4_47 && b5_53 && b6_18 && b7_55 && b8_48 && b9_34 && b10_36 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1016;
}
if(b8_29 && b9_46 && b10_29 && b11_28 && b12_19 && b13_28 && b14_12) {
pattern_id = 1017;
}
if(b11_35 && b12_38 && b13_36 && b14_33) {
pattern_id = 1018;
}
if(b6_47 && b7_2 && b8_22 && b9_47 && b10_10 && b11_35 && b12_37 && b13_36 && b14_62) {
pattern_id = 1019;
}
if(b2_26 && b3_46 && b4_14 && b5_54 && b6_18 && b7_55 && b8_48 && b9_34 && b10_36 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1020;
}
if(b11_35 && b12_3 && b13_54 && b14_54) {
pattern_id = 1021;
}
if(b13_40 && b14_3) {
pattern_id = 1022;
}
if(b11_35 && b12_41 && b13_22 && b14_3) {
pattern_id = 1023;
}
if(b9_7 && b10_4 && b11_21 && b12_41 && b13_55 && b14_31) {
pattern_id = 1024;
}
if(b11_35 && b12_41 && b13_10 && b14_7) {
pattern_id = 1025;
}
if(b11_35 && b12_41 && b13_10 && b14_69) {
pattern_id = 1026;
}
if(b6_47 && b7_63 && b8_52 && b9_7 && b10_35 && b11_33 && b12_38 && b13_33 && b14_33) {
pattern_id = 1027;
}
if(b9_7 && b10_64 && b11_35 && b12_43 && b13_4 && b14_7) {
pattern_id = 1028;
}
if(b11_35 && b12_61 && b13_40 && b14_3) {
pattern_id = 1029;
}
if(b7_30 && b8_38 && b9_18 && b10_6 && b11_27 && b12_25 && b13_20 && b14_29) {
pattern_id = 1030;
}
if(b1_31 && b2_13 && b3_16 && b4_5 && b5_26 && b6_5 && b7_19 && b8_2 && b9_17 && b10_32 && b11_1 && b12_59 && b13_9 && b14_6) {
pattern_id = 1031;
}
if(b9_7 && b10_19 && b11_10 && b12_7 && b13_19 && b14_7) {
pattern_id = 1032;
}
if(b5_49 && b6_50 && b7_57 && b8_55 && b9_54 && b10_1 && b11_17 && b12_8 && b13_8 && b14_48) {
pattern_id = 1033;
}
if(b6_48 && b7_2 && b8_55 && b9_47 && b10_45 && b11_67 && b12_20 && b13_23 && b14_33) {
pattern_id = 1034;
}
if(b12_41 && b13_10 && b14_44) {
pattern_id = 1035;
}
if(b8_22 && b9_34 && b10_45 && b11_54 && b12_63 && b13_22 && b14_7) {
pattern_id = 1036;
}
if(b10_4 && b11_33 && b12_4 && b13_6 && b14_33) {
pattern_id = 1037;
}
if(b0_5 && b1_12 && b2_18 && b3_10 && b4_7 && b5_8 && b6_1 && b7_6 && b8_17 && b9_27 && b10_28 && b11_21 && b12_32 && b13_32 && b14_52) {
pattern_id = 1038;
}
if(b11_7 && b12_38 && b13_2 && b14_39) {
pattern_id = 1039;
}
if(b4_44 && b5_18 && b6_47 && b7_63 && b8_52 && b9_7 && b10_35 && b11_33 && b12_38 && b13_33 && b14_33) {
pattern_id = 1040;
}
if(b5_46 && b6_7 && b7_46 && b8_13 && b9_28 && b10_22 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1041;
}
if(b11_7 && b12_3 && b13_7 && b14_7) {
pattern_id = 1042;
}
if(b10_69 && b11_35 && b12_37 && b13_38 && b14_4) {
pattern_id = 1043;
}
if(b6_21 && b7_30 && b8_32 && b9_48 && b10_63 && b11_29 && b12_3 && b13_36 && b14_4) {
pattern_id = 1044;
}
if(b11_7 && b12_3 && b13_38 && b14_4) {
pattern_id = 1045;
}
if(b5_46 && b6_11 && b7_7 && b8_9 && b9_30 && b10_8 && b11_51 && b12_8 && b13_20 && b14_6) {
pattern_id = 1046;
}
if(b1_38 && b2_17 && b3_20 && b4_18 && b5_19 && b6_9 && b7_40 && b8_17 && b9_32 && b10_19 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1047;
}
if(b0_22 && b1_13 && b2_3 && b3_24 && b4_34 && b5_5 && b6_34 && b7_7 && b8_2 && b9_10 && b10_5 && b11_5 && b12_4 && b13_5 && b14_4) {
pattern_id = 1048;
}
if(b3_39 && b4_7 && b5_2 && b6_27 && b7_25 && b8_12 && b9_44 && b10_12 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1049;
}
if(b4_17 && b5_20 && b6_24 && b7_30 && b8_34 && b9_34 && b10_34 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 1050;
}
if(b11_57 && b12_49 && b13_63 && b14_68) {
pattern_id = 1051;
}
if(b1_26 && b2_3 && b3_24 && b4_7 && b5_24 && b6_17 && b7_25 && b8_23 && b9_25 && b10_7 && b11_27 && b12_11 && b13_9 && b14_8) {
pattern_id = 1052;
}
if(b7_4 && b8_4 && b9_4 && b10_4 && b11_4 && b12_3 && b13_4 && b14_3) {
pattern_id = 1053;
}
if(b9_57 && b10_61 && b11_31 && b12_43 && b13_4 && b14_7) {
pattern_id = 1054;
}
if(b5_51 && b6_24 && b7_11 && b8_18 && b9_1 && b10_12 && b11_48 && b12_51 && b13_25 && b14_17) {
pattern_id = 1055;
}
if(b5_51 && b6_1 && b7_24 && b8_38 && b9_18 && b10_21 && b11_51 && b12_41 && b13_15 && b14_10) {
pattern_id = 1056;
}
if(b7_4 && b8_27 && b9_32 && b10_37 && b11_18 && b12_34 && b13_9 && b14_30) {
pattern_id = 1057;
}
if(b6_5 && b7_6 && b8_6 && b9_6 && b10_6 && b11_3 && b12_5 && b13_1 && b14_5) {
pattern_id = 1058;
}
if(b0_18 && b1_41 && b2_2 && b3_18 && b4_18 && b5_27 && b6_1 && b7_29 && b8_26 && b9_5 && b10_30 && b11_50 && b12_6 && b13_15 && b14_8) {
pattern_id = 1059;
}
if(b11_64 && b12_31 && b13_35 && b14_38) {
pattern_id = 1060;
}
if(b8_57 && b9_47 && b10_68 && b11_54 && b12_63 && b13_44 && b14_12) {
pattern_id = 1061;
}
if(b11_64 && b12_44 && b13_29 && b14_38) {
pattern_id = 1062;
}
if(b11_64 && b12_41 && b13_23 && b14_38) {
pattern_id = 1063;
}
if(b11_46 && b12_44 && b13_40 && b14_21) {
pattern_id = 1064;
}
if(b0_12 && b1_29 && b2_38 && b3_3 && b4_5 && b5_51 && b6_43 && b7_50 && b8_54 && b9_57 && b10_26 && b11_17 && b12_12 && b13_35 && b14_19) {
pattern_id = 1065;
}
if(b2_47 && b3_23 && b4_5 && b5_6 && b6_11 && b7_8 && b8_12 && b9_32 && b10_46 && b11_20 && b12_30 && b13_3 && b14_57) {
pattern_id = 1066;
}
if(b9_50 && b10_14 && b11_14 && b12_2 && b13_3 && b14_51) {
pattern_id = 1067;
}
if(b0_8 && b1_16 && b2_23 && b3_3 && b4_29 && b5_37 && b6_40 && b7_9 && b8_2 && b9_11 && b10_12 && b11_7 && b12_16 && b13_25 && b14_41) {
pattern_id = 1068;
}
if(b0_8 && b1_20 && b2_27 && b3_35 && b4_38 && b5_17 && b6_25 && b7_47 && b8_16 && b9_18 && b10_24 && b11_12 && b12_25 && b13_8 && b14_57) {
pattern_id = 1069;
}
if(b11_45 && b12_49 && b13_46 && b14_38) {
pattern_id = 1070;
}
if(b6_29 && b7_8 && b8_14 && b9_32 && b10_59 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 1071;
}
if(b7_35 && b8_40 && b9_17 && b10_59 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1072;
}
if(b4_5 && b5_3 && b6_19 && b7_22 && b8_10 && b9_22 && b10_30 && b11_3 && b12_8 && b13_32 && b14_35) {
pattern_id = 1073;
}
if(b9_39 && b10_24 && b11_10 && b12_26 && b13_11 && b14_74) {
pattern_id = 1074;
}
if(b7_9 && b8_10 && b9_10 && b10_11 && b11_11 && b12_12 && b13_11 && b14_5) {
pattern_id = 1075;
}
if(b0_9 && b1_10 && b2_29 && b3_13 && b4_39 && b5_5 && b6_20 && b7_11 && b8_26 && b9_17 && b10_37 && b11_18 && b12_53 && b13_9 && b14_41) {
pattern_id = 1076;
}
if(b10_7 && b11_25 && b12_25 && b13_26 && b14_5) {
pattern_id = 1077;
}
if(b4_5 && b5_8 && b6_13 && b7_15 && b8_17 && b9_22 && b10_19 && b11_13 && b12_27 && b13_19 && b14_27) {
pattern_id = 1078;
}
if(b0_9 && b1_6 && b2_28 && b3_40 && b4_28 && b5_29 && b6_14 && b7_24 && b8_5 && b9_8 && b10_7 && b11_13 && b12_47 && b13_11 && b14_22) {
pattern_id = 1079;
}
if(b5_4 && b6_8 && b7_14 && b8_23 && b9_1 && b10_2 && b11_53 && b12_16 && b13_14 && b14_5) {
pattern_id = 1080;
}
if(b0_9 && b1_6 && b2_28 && b3_40 && b4_24 && b5_4 && b6_19 && b7_35 && b8_10 && b9_29 && b10_33 && b11_53 && b12_53 && b13_20 && b14_22) {
pattern_id = 1081;
}
if(b2_18 && b3_16 && b4_31 && b5_34 && b6_2 && b7_9 && b8_33 && b9_50 && b10_6 && b11_15 && b12_25 && b13_26 && b14_22) {
pattern_id = 1082;
}
if(b5_4 && b6_8 && b7_14 && b8_23 && b9_10 && b10_7 && b11_47 && b12_22 && b13_9 && b14_22) {
pattern_id = 1083;
}
if(b6_1 && b7_14 && b8_16 && b9_50 && b10_56 && b11_13 && b12_8 && b13_16 && b14_22) {
pattern_id = 1084;
}
if(b4_5 && b5_8 && b6_8 && b7_41 && b8_5 && b9_10 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1085;
}
if(b10_7 && b11_25 && b12_34 && b13_9 && b14_8) {
pattern_id = 1086;
}
if(b1_24 && b2_28 && b3_3 && b4_25 && b5_26 && b6_18 && b7_21 && b8_12 && b9_10 && b10_7 && b11_47 && b12_12 && b13_1 && b14_5) {
pattern_id = 1087;
}
if(b4_5 && b5_8 && b6_2 && b7_7 && b8_9 && b9_22 && b10_19 && b11_18 && b12_51 && b13_25 && b14_5) {
pattern_id = 1088;
}
if(b5_4 && b6_8 && b7_6 && b8_17 && b9_8 && b10_10 && b11_53 && b12_36 && b13_9 && b14_8) {
pattern_id = 1089;
}
if(b3_5 && b4_16 && b5_23 && b6_13 && b7_21 && b8_26 && b9_29 && b10_32 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1090;
}
if(b0_9 && b1_27 && b2_6 && b3_16 && b4_19 && b5_11 && b6_1 && b7_6 && b8_27 && b9_29 && b10_21 && b11_28 && b12_36 && b13_27 && b14_16) {
pattern_id = 1091;
}
if(b1_24 && b2_25 && b3_3 && b4_5 && b5_11 && b6_40 && b7_12 && b8_17 && b9_32 && b10_19 && b11_2 && b12_23 && b13_33 && b14_2) {
pattern_id = 1092;
}
if(b0_9 && b1_32 && b2_25 && b3_19 && b4_13 && b5_26 && b6_13 && b7_1 && b8_17 && b9_17 && b10_45 && b11_16 && b12_8 && b13_58 && b14_22) {
pattern_id = 1093;
}
if(b7_10 && b8_12 && b9_15 && b10_15 && b11_12 && b12_7 && b13_15 && b14_8) {
pattern_id = 1094;
}
if(b1_2 && b2_3 && b3_3 && b4_5 && b5_4 && b6_8 && b7_12 && b8_14 && b9_1 && b10_19 && b11_12 && b12_7 && b13_20 && b14_5) {
pattern_id = 1095;
}
if(b1_2 && b2_10 && b3_10 && b4_8 && b5_9 && b6_3 && b7_16 && b8_33 && b9_18 && b10_21 && b11_2 && b12_2 && b13_3 && b14_2) {
pattern_id = 1096;
}
if(b10_24 && b11_17 && b12_36 && b13_11 && b14_51) {
pattern_id = 1097;
}
if(b7_8 && b8_12 && b9_16 && b10_12 && b11_52 && b12_18 && b13_18 && b14_8) {
pattern_id = 1098;
}
if(b11_23 && b12_12 && b13_11 && b14_4) {
pattern_id = 1099;
}
if(b11_23 && b12_18 && b13_28 && b14_37) {
pattern_id = 1100;
}
if(b4_28 && b5_7 && b6_12 && b7_8 && b8_58 && b9_11 && b10_17 && b11_10 && b12_26 && b13_47 && b14_22) {
pattern_id = 1101;
}
if(b9_15 && b10_33 && b11_13 && b12_8 && b13_20 && b14_6) {
pattern_id = 1102;
}
if(b8_10 && b9_44 && b10_30 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1103;
}
if(b6_37 && b7_12 && b8_26 && b9_9 && b10_3 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1104;
}
if(b5_11 && b6_4 && b7_21 && b8_23 && b9_8 && b10_2 && b11_10 && b12_34 && b13_1 && b14_32) {
pattern_id = 1105;
}
if(b5_11 && b6_17 && b7_12 && b8_41 && b9_39 && b10_21 && b11_12 && b12_38 && b13_45 && b14_51) {
pattern_id = 1106;
}
if(b3_28 && b4_13 && b5_21 && b6_14 && b7_7 && b8_10 && b9_10 && b10_45 && b11_12 && b12_12 && b13_11 && b14_11) {
pattern_id = 1107;
}
if(b6_37 && b7_5 && b8_2 && b9_32 && b10_12 && b11_23 && b12_34 && b13_9 && b14_26) {
pattern_id = 1108;
}
if(b4_28 && b5_29 && b6_14 && b7_25 && b8_17 && b9_15 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1109;
}
if(b3_28 && b4_13 && b5_21 && b6_2 && b7_7 && b8_2 && b9_10 && b10_19 && b11_60 && b12_11 && b13_9 && b14_51) {
pattern_id = 1110;
}
if(b4_28 && b5_29 && b6_14 && b7_15 && b8_17 && b9_8 && b10_19 && b11_2 && b12_19 && b13_66 && b14_2) {
pattern_id = 1111;
}
if(b9_15 && b10_17 && b11_26 && b12_12 && b13_11 && b14_5) {
pattern_id = 1112;
}
if(b0_11 && b1_12 && b2_3 && b3_5 && b4_24 && b5_2 && b6_18 && b7_21 && b8_12 && b9_10 && b10_7 && b11_47 && b12_12 && b13_1 && b14_5) {
pattern_id = 1113;
}
if(b3_28 && b4_18 && b5_2 && b6_1 && b7_6 && b8_17 && b9_22 && b10_19 && b11_18 && b12_51 && b13_25 && b14_5) {
pattern_id = 1114;
}
if(b8_10 && b9_1 && b10_19 && b11_60 && b12_11 && b13_9 && b14_51) {
pattern_id = 1115;
}
if(b7_8 && b8_35 && b9_35 && b10_12 && b11_15 && b12_46 && b13_15 && b14_43) {
pattern_id = 1116;
}
if(b7_8 && b8_8 && b9_9 && b10_8 && b11_3 && b12_9 && b13_6 && b14_2) {
pattern_id = 1117;
}
if(b9_17 && b10_18 && b11_5 && b12_1 && b13_17 && b14_15) {
pattern_id = 1118;
}
if(b9_17 && b10_7 && b11_12 && b12_7 && b13_1 && b14_51) {
pattern_id = 1119;
}
if(b4_21 && b5_4 && b6_2 && b7_9 && b8_11 && b9_5 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1120;
}
if(b3_37 && b4_5 && b5_23 && b6_1 && b7_36 && b8_14 && b9_1 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1121;
}
if(b7_21 && b8_12 && b9_10 && b10_7 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1122;
}
if(b5_28 && b6_19 && b7_9 && b8_23 && b9_10 && b10_7 && b11_47 && b12_22 && b13_9 && b14_22) {
pattern_id = 1123;
}
if(b1_5 && b2_21 && b3_5 && b4_41 && b5_23 && b6_1 && b7_10 && b8_16 && b9_5 && b10_32 && b11_27 && b12_12 && b13_14 && b14_5) {
pattern_id = 1124;
}
if(b6_36 && b7_7 && b8_18 && b9_15 && b10_17 && b11_13 && b12_51 && b13_9 && b14_4) {
pattern_id = 1125;
}
if(b11_12 && b12_25 && b13_45 && b14_51) {
pattern_id = 1126;
}
if(b8_26 && b9_18 && b10_12 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1127;
}
if(b8_26 && b9_32 && b10_32 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1128;
}
if(b9_17 && b10_2 && b11_66 && b12_8 && b13_50 && b14_6) {
pattern_id = 1129;
}
if(b3_37 && b4_13 && b5_11 && b6_2 && b7_5 && b8_26 && b9_5 && b10_6 && b11_1 && b12_51 && b13_11 && b14_8) {
pattern_id = 1130;
}
if(b2_37 && b3_18 && b4_9 && b5_21 && b6_8 && b7_5 && b8_12 && b9_17 && b10_25 && b11_23 && b12_7 && b13_20 && b14_35) {
pattern_id = 1131;
}
if(b3_37 && b4_13 && b5_27 && b6_14 && b7_14 && b8_14 && b9_39 && b10_30 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1132;
}
if(b5_28 && b6_27 && b7_5 && b8_40 && b9_22 && b10_19 && b11_18 && b12_51 && b13_25 && b14_5) {
pattern_id = 1133;
}
if(b9_5 && b10_17 && b11_15 && b12_7 && b13_8 && b14_4) {
pattern_id = 1134;
}
if(b7_7 && b8_42 && b9_5 && b10_47 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1135;
}
if(b11_26 && b12_17 && b13_47 && b14_10) {
pattern_id = 1136;
}
if(b2_3 && b3_14 && b4_12 && b5_21 && b6_18 && b7_8 && b8_35 && b9_35 && b10_12 && b11_15 && b12_46 && b13_15 && b14_43) {
pattern_id = 1137;
}
if(b3_30 && b4_5 && b5_6 && b6_2 && b7_21 && b8_26 && b9_29 && b10_32 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1138;
}
if(b9_2 && b10_11 && b11_23 && b12_21 && b13_9 && b14_10) {
pattern_id = 1139;
}
if(b2_33 && b3_12 && b4_31 && b5_2 && b6_29 && b7_12 && b8_12 && b9_32 && b10_7 && b11_51 && b12_8 && b13_8 && b14_72) {
pattern_id = 1140;
}
if(b6_23 && b7_19 && b8_16 && b9_5 && b10_21 && b11_18 && b12_53 && b13_9 && b14_51) {
pattern_id = 1141;
}
if(b5_30 && b6_13 && b7_14 && b8_17 && b9_27 && b10_28 && b11_21 && b12_32 && b13_31 && b14_28) {
pattern_id = 1142;
}
if(b0_14 && b1_4 && b2_20 && b3_25 && b4_22 && b5_10 && b6_13 && b7_25 && b8_26 && b9_5 && b10_1 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 1143;
}
if(b9_2 && b10_17 && b11_13 && b12_18 && b13_18 && b14_17) {
pattern_id = 1144;
}
if(b0_14 && b1_12 && b2_13 && b3_23 && b4_56 && b5_58 && b6_44 && b7_3 && b8_47 && b9_29 && b10_42 && b11_26 && b12_30 && b13_28 && b14_74) {
pattern_id = 1145;
}
if(b8_24 && b9_10 && b10_6 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1146;
}
if(b8_24 && b9_10 && b10_6 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1147;
}
if(b8_24 && b9_10 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1148;
}
if(b7_37 && b8_37 && b9_16 && b10_33 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1149;
}
if(b9_11 && b10_23 && b11_15 && b12_12 && b13_26 && b14_5) {
pattern_id = 1150;
}
if(b0_17 && b1_24 && b2_25 && b3_20 && b4_55 && b5_13 && b6_40 && b7_36 && b8_8 && b9_9 && b10_9 && b11_2 && b12_25 && b13_45 && b14_51) {
pattern_id = 1151;
}
if(b4_6 && b5_2 && b6_11 && b7_13 && b8_2 && b9_17 && b10_16 && b11_26 && b12_25 && b13_11 && b14_13) {
pattern_id = 1152;
}
if(b6_34 && b7_7 && b8_5 && b9_15 && b10_33 && b11_13 && b12_8 && b13_20 && b14_6) {
pattern_id = 1153;
}
if(b9_11 && b10_17 && b11_18 && b12_47 && b13_11 && b14_4) {
pattern_id = 1154;
}
if(b6_34 && b7_24 && b8_5 && b9_1 && b10_12 && b11_18 && b12_16 && b13_14 && b14_32) {
pattern_id = 1155;
}
if(b10_16 && b11_18 && b12_17 && b13_3 && b14_8) {
pattern_id = 1156;
}
if(b11_6 && b12_25 && b13_3 && b14_12) {
pattern_id = 1157;
}
if(b11_6 && b12_7 && b13_1 && b14_6) {
pattern_id = 1158;
}
if(b8_38 && b9_29 && b10_32 && b11_17 && b12_25 && b13_45 && b14_51) {
pattern_id = 1159;
}
if(b5_7 && b6_2 && b7_6 && b8_40 && b9_27 && b10_28 && b11_21 && b12_32 && b13_31 && b14_28) {
pattern_id = 1160;
}
if(b7_41 && b8_5 && b9_10 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1161;
}
if(b3_12 && b4_11 && b5_13 && b6_53 && b7_70 && b8_17 && b9_16 && b10_2 && b11_51 && b12_42 && b13_9 && b14_8) {
pattern_id = 1162;
}
if(b7_19 && b8_10 && b9_44 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1163;
}
if(b10_11 && b11_6 && b12_12 && b13_26 && b14_5) {
pattern_id = 1164;
}
if(b6_13 && b7_25 && b8_26 && b9_5 && b10_1 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 1165;
}
if(b10_11 && b11_27 && b12_34 && b13_37 && b14_14) {
pattern_id = 1166;
}
if(b14_55) {
pattern_id = 1167;
}
if(b9_20 && b10_11 && b11_25 && b12_22 && b13_27 && b14_5) {
pattern_id = 1168;
}
if(b12_22 && b13_13 && b14_19) {
pattern_id = 1169;
}
if(b8_16 && b9_21 && b10_13 && b11_18 && b12_18 && b13_1 && b14_25) {
pattern_id = 1170;
}
if(b0_2 && b1_5 && b2_12 && b3_16 && b4_19 && b5_22 && b6_27 && b7_9 && b8_9 && b9_13 && b10_45 && b11_27 && b12_12 && b13_11 && b14_32) {
pattern_id = 1171;
}
if(b3_16 && b4_27 && b5_6 && b6_2 && b7_29 && b8_17 && b9_39 && b10_42 && b11_2 && b12_19 && b13_65 && b14_2) {
pattern_id = 1172;
}
if(b4_31 && b5_24 && b6_19 && b7_17 && b8_27 && b9_32 && b10_47 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 1173;
}
if(b10_33 && b11_13 && b12_36 && b13_11 && b14_11) {
pattern_id = 1174;
}
if(b6_8 && b7_5 && b8_11 && b9_11 && b10_12 && b11_12 && b12_13 && b13_12 && b14_10) {
pattern_id = 1175;
}
if(b4_31 && b5_29 && b6_34 && b7_40 && b8_17 && b9_17 && b10_66 && b11_17 && b12_16 && b13_37 && b14_5) {
pattern_id = 1176;
}
if(b0_2 && b1_4 && b2_11 && b3_12 && b4_16 && b5_3 && b6_13 && b7_25 && b8_10 && b9_29 && b10_17 && b11_15 && b12_8 && b13_14 && b14_6) {
pattern_id = 1177;
}
if(b8_16 && b9_29 && b10_44 && b11_13 && b12_47 && b13_62 && b14_12) {
pattern_id = 1178;
}
if(b2_28 && b3_18 && b4_6 && b5_24 && b6_14 && b7_36 && b8_14 && b9_1 && b10_19 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1179;
}
if(b6_8 && b7_5 && b8_11 && b9_18 && b10_21 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1180;
}
if(b1_6 && b2_13 && b3_17 && b4_19 && b5_21 && b6_20 && b7_33 && b8_13 && b9_27 && b10_10 && b11_15 && b12_7 && b13_15 && b14_6) {
pattern_id = 1181;
}
if(b9_16 && b10_17 && b11_16 && b12_16 && b13_3 && b14_14) {
pattern_id = 1182;
}
if(b8_16 && b9_1 && b10_55 && b11_49 && b12_2 && b13_56 && b14_25) {
pattern_id = 1183;
}
if(b7_12 && b8_12 && b9_15 && b10_34 && b11_18 && b12_53 && b13_9 && b14_51) {
pattern_id = 1184;
}
if(b7_12 && b8_12 && b9_1 && b10_16 && b11_13 && b12_47 && b13_9 && b14_51) {
pattern_id = 1185;
}
if(b8_41 && b9_29 && b10_50 && b11_13 && b12_22 && b13_25 && b14_11) {
pattern_id = 1186;
}
if(b2_29 && b3_41 && b4_15 && b5_2 && b6_27 && b7_24 && b8_27 && b9_29 && b10_21 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1187;
}
if(b0_20 && b1_24 && b2_29 && b3_20 && b4_56 && b5_6 && b6_37 && b7_29 && b8_17 && b9_5 && b10_21 && b11_8 && b12_1 && b13_15 && b14_6) {
pattern_id = 1188;
}
if(b9_32 && b10_47 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1189;
}
if(b8_2 && b9_5 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1190;
}
if(b7_25 && b8_17 && b9_14 && b10_44 && b11_15 && b12_7 && b13_37 && b14_43) {
pattern_id = 1191;
}
if(b6_14 && b7_7 && b8_1 && b9_1 && b10_12 && b11_15 && b12_28 && b13_9 && b14_8) {
pattern_id = 1192;
}
if(b1_35 && b2_3 && b3_29 && b4_7 && b5_8 && b6_12 && b7_6 && b8_5 && b9_5 && b10_17 && b11_1 && b12_11 && b13_17 && b14_43) {
pattern_id = 1193;
}
if(b4_16 && b5_24 && b6_34 && b7_40 && b8_12 && b9_43 && b10_24 && b11_13 && b12_34 && b13_14 && b14_32) {
pattern_id = 1194;
}
if(b12_7 && b13_47 && b14_51) {
pattern_id = 1195;
}
if(b3_6 && b4_5 && b5_6 && b6_11 && b7_22 && b8_28 && b9_15 && b10_15 && b11_25 && b12_12 && b13_37 && b14_22) {
pattern_id = 1196;
}
if(b2_6 && b3_5 && b4_7 && b5_6 && b6_18 && b7_23 && b8_27 && b9_1 && b10_32 && b11_32 && b12_25 && b13_1 && b14_22) {
pattern_id = 1197;
}
if(b4_12 && b5_4 && b6_11 && b7_24 && b8_3 && b9_30 && b10_32 && b11_18 && b12_25 && b13_20 && b14_6) {
pattern_id = 1198;
}
if(b4_12 && b5_4 && b6_11 && b7_24 && b8_3 && b9_30 && b10_32 && b11_18 && b12_34 && b13_18 && b14_10) {
pattern_id = 1199;
}
if(b5_13 && b6_1 && b7_24 && b8_18 && b9_22 && b10_20 && b11_6 && b12_2 && b13_3 && b14_6) {
pattern_id = 1200;
}
if(b6_10 && b7_21 && b8_24 && b9_50 && b10_12 && b11_44 && b12_12 && b13_50 && b14_72) {
pattern_id = 1201;
}
if(b11_27 && b12_25 && b13_20 && b14_29) {
pattern_id = 1202;
}
if(b7_36 && b8_16 && b9_6 && b10_44 && b11_66 && b12_59 && b13_22 && b14_59) {
pattern_id = 1203;
}
if(b1_27 && b2_31 && b3_17 && b4_10 && b5_50 && b6_49 && b7_17 && b8_25 && b9_56 && b10_32 && b11_3 && b12_22 && b13_13 && b14_19) {
pattern_id = 1204;
}
if(b11_27 && b12_7 && b13_20 && b14_29) {
pattern_id = 1205;
}
if(b10_6 && b11_10 && b12_36 && b13_11 && b14_51) {
pattern_id = 1206;
}
if(b8_40 && b9_8 && b10_11 && b11_11 && b12_12 && b13_11 && b14_5) {
pattern_id = 1207;
}
if(b7_36 && b8_9 && b9_29 && b10_6 && b11_44 && b12_25 && b13_20 && b14_26) {
pattern_id = 1208;
}
if(b6_10 && b7_29 && b8_14 && b9_10 && b10_2 && b11_17 && b12_65 && b13_47 && b14_5) {
pattern_id = 1209;
}
if(b11_27 && b12_36 && b13_3 && b14_51) {
pattern_id = 1210;
}
if(b3_6 && b4_7 && b5_30 && b6_13 && b7_14 && b8_17 && b9_54 && b10_5 && b11_49 && b12_19 && b13_5 && b14_63) {
pattern_id = 1211;
}
if(b9_42 && b10_48 && b11_47 && b12_22 && b13_12 && b14_49) {
pattern_id = 1212;
}
if(b5_1 && b6_1 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_1 && b13_1 && b14_1) {
pattern_id = 1213;
}
if(b11_15 && b12_2 && b13_3 && b14_6) {
pattern_id = 1214;
}
if(b6_27 && b7_9 && b8_2 && b9_11 && b10_12 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1215;
}
if(b3_24 && b4_5 && b5_27 && b6_13 && b7_25 && b8_25 && b9_42 && b10_16 && b11_27 && b12_56 && b13_67 && b14_51) {
pattern_id = 1216;
}
if(b7_29 && b8_10 && b9_44 && b10_30 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1217;
}
if(b4_18 && b5_11 && b6_10 && b7_6 && b8_3 && b9_10 && b10_2 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1218;
}
if(b4_18 && b5_2 && b6_11 && b7_5 && b8_16 && b9_49 && b10_12 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1219;
}
if(b11_15 && b12_8 && b13_16 && b14_6) {
pattern_id = 1220;
}
if(b8_9 && b9_44 && b10_44 && b11_15 && b12_7 && b13_37 && b14_43) {
pattern_id = 1221;
}
if(b11_15 && b12_7 && b13_15 && b14_6) {
pattern_id = 1222;
}
if(b5_26 && b6_2 && b7_24 && b8_40 && b9_27 && b10_28 && b11_21 && b12_32 && b13_31 && b14_28) {
pattern_id = 1223;
}
if(b0_6 && b1_39 && b2_18 && b3_16 && b4_19 && b5_42 && b6_12 && b7_17 && b8_40 && b9_43 && b10_6 && b11_56 && b12_25 && b13_45 && b14_51) {
pattern_id = 1224;
}
if(b1_13 && b2_12 && b3_3 && b4_5 && b5_6 && b6_46 && b7_17 && b8_40 && b9_43 && b10_6 && b11_56 && b12_25 && b13_45 && b14_51) {
pattern_id = 1225;
}
if(b9_1 && b10_7 && b11_17 && b12_7 && b13_8 && b14_16) {
pattern_id = 1226;
}
if(b9_1 && b10_12 && b11_18 && b12_16 && b13_14 && b14_32) {
pattern_id = 1227;
}
if(b0_6 && b1_14 && b2_35 && b3_25 && b4_18 && b5_2 && b6_29 && b7_24 && b8_27 && b9_10 && b10_12 && b11_61 && b12_13 && b13_15 && b14_18) {
pattern_id = 1228;
}
if(b8_18 && b9_5 && b10_33 && b11_26 && b12_46 && b13_11 && b14_4) {
pattern_id = 1229;
}
if(b9_1 && b10_12 && b11_52 && b12_18 && b13_27 && b14_5) {
pattern_id = 1230;
}
if(b8_18 && b9_5 && b10_21 && b11_12 && b12_36 && b13_58 && b14_22) {
pattern_id = 1231;
}
if(b5_6 && b6_12 && b7_25 && b8_26 && b9_6 && b10_48 && b11_52 && b12_12 && b13_27 && b14_5) {
pattern_id = 1232;
}
if(b0_6 && b1_14 && b2_20 && b3_26 && b4_31 && b5_2 && b6_2 && b7_34 && b8_25 && b9_24 && b10_25 && b11_1 && b12_30 && b13_28 && b14_37) {
pattern_id = 1233;
}
if(b1_13 && b2_3 && b3_3 && b4_26 && b5_24 && b6_4 && b7_7 && b8_14 && b9_6 && b10_19 && b11_2 && b12_19 && b13_66 && b14_2) {
pattern_id = 1234;
}
if(b4_7 && b5_7 && b6_12 && b7_14 && b8_16 && b9_22 && b10_24 && b11_10 && b12_26 && b13_20 && b14_26) {
pattern_id = 1235;
}
if(b9_1 && b10_11 && b11_23 && b12_21 && b13_9 && b14_10) {
pattern_id = 1236;
}
if(b5_6 && b6_13 && b7_12 && b8_40 && b9_16 && b10_12 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1237;
}
if(b9_1 && b10_15 && b11_13 && b12_22 && b13_25 && b14_23) {
pattern_id = 1238;
}
if(b6_11 && b7_14 && b8_17 && b9_5 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1239;
}
if(b3_27 && b4_31 && b5_29 && b6_28 && b7_41 && b8_5 && b9_10 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1240;
}
if(b12_36 && b13_27 && b14_22) {
pattern_id = 1241;
}
if(b9_1 && b10_21 && b11_18 && b12_53 && b13_9 && b14_51) {
pattern_id = 1242;
}
if(b5_6 && b6_10 && b7_5 && b8_14 && b9_2 && b10_20 && b11_10 && b12_16 && b13_24 && b14_22) {
pattern_id = 1243;
}
if(b6_11 && b7_6 && b8_12 && b9_10 && b10_12 && b11_48 && b12_8 && b13_20 && b14_6) {
pattern_id = 1244;
}
if(b7_24 && b8_5 && b9_29 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1245;
}
if(b8_18 && b9_10 && b10_17 && b11_26 && b12_12 && b13_27 && b14_28) {
pattern_id = 1246;
}
if(b8_18 && b9_13 && b10_21 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1247;
}
if(b2_17 && b3_41 && b4_7 && b5_47 && b6_1 && b7_14 && b8_16 && b9_50 && b10_48 && b11_8 && b12_8 && b13_8 && b14_22) {
pattern_id = 1248;
}
if(b7_6 && b8_12 && b9_20 && b10_12 && b11_17 && b12_1 && b13_12 && b14_22) {
pattern_id = 1249;
}
if(b4_24 && b5_11 && b6_10 && b7_21 && b8_12 && b9_10 && b10_7 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1250;
}
if(b5_23 && b6_12 && b7_14 && b8_2 && b9_5 && b10_19 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1251;
}
if(b3_3 && b4_25 && b5_33 && b6_2 && b7_5 && b8_67 && b9_65 && b10_14 && b11_55 && b12_54 && b13_3 && b14_20) {
pattern_id = 1252;
}
if(b7_6 && b8_24 && b9_10 && b10_6 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1253;
}
if(b4_24 && b5_24 && b6_4 && b7_7 && b8_8 && b9_9 && b10_8 && b11_3 && b12_19 && b13_3 && b14_2) {
pattern_id = 1254;
}
if(b5_23 && b6_17 && b7_22 && b8_18 && b9_6 && b10_10 && b11_15 && b12_7 && b13_15 && b14_6) {
pattern_id = 1255;
}
if(b1_9 && b2_20 && b3_25 && b4_16 && b5_11 && b6_1 && b7_6 && b8_17 && b9_22 && b10_19 && b11_18 && b12_51 && b13_25 && b14_5) {
pattern_id = 1256;
}
if(b12_34 && b13_8 && b14_17) {
pattern_id = 1257;
}
if(b3_3 && b4_7 && b5_23 && b6_13 && b7_24 && b8_12 && b9_42 && b10_11 && b11_1 && b12_18 && b13_25 && b14_25) {
pattern_id = 1258;
}
if(b4_32 && b5_28 && b6_10 && b7_21 && b8_12 && b9_10 && b10_7 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1259;
}
if(b8_37 && b9_17 && b10_6 && b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1260;
}
if(b11_53 && b12_25 && b13_45 && b14_51) {
pattern_id = 1261;
}
if(b10_48 && b11_52 && b12_12 && b13_27 && b14_5) {
pattern_id = 1262;
}
if(b0_10 && b1_13 && b2_3 && b3_24 && b4_41 && b5_23 && b6_1 && b7_10 && b8_16 && b9_5 && b10_32 && b11_27 && b12_12 && b13_14 && b14_5) {
pattern_id = 1263;
}
if(b8_19 && b9_5 && b10_17 && b11_8 && b12_25 && b13_15 && b14_10) {
pattern_id = 1264;
}
if(b6_31 && b7_5 && b8_27 && b9_15 && b10_12 && b11_48 && b12_12 && b13_12 && b14_25) {
pattern_id = 1265;
}
if(b11_11 && b12_16 && b13_48 && b14_17) {
pattern_id = 1266;
}
if(b9_14 && b10_14 && b11_14 && b12_15 && b13_3 && b14_12) {
pattern_id = 1267;
}
if(b4_9 && b5_4 && b6_13 && b7_6 && b8_44 && b9_18 && b10_21 && b11_51 && b12_52 && b13_8 && b14_17) {
pattern_id = 1268;
}
if(b11_19 && b12_12 && b13_20 && b14_18) {
pattern_id = 1269;
}
if(b9_14 && b10_16 && b11_14 && b12_2 && b13_11 && b14_13) {
pattern_id = 1270;
}
if(b4_9 && b5_7 && b6_17 && b7_19 && b8_18 && b9_27 && b10_28 && b11_21 && b12_32 && b13_31 && b14_28) {
pattern_id = 1271;
}
if(b8_1 && b9_1 && b10_16 && b11_1 && b12_8 && b13_50 && b14_5) {
pattern_id = 1272;
}
if(b4_30 && b5_13 && b6_29 && b7_8 && b8_41 && b9_17 && b10_32 && b11_6 && b12_8 && b13_25 && b14_25) {
pattern_id = 1273;
}
if(b5_33 && b6_10 && b7_35 && b8_17 && b9_32 && b10_48 && b11_48 && b12_18 && b13_1 && b14_10) {
pattern_id = 1274;
}
if(b4_30 && b5_13 && b6_29 && b7_37 && b8_27 && b9_16 && b10_12 && b11_25 && b12_25 && b13_1 && b14_6) {
pattern_id = 1275;
}
if(b0_13 && b1_27 && b2_12 && b3_24 && b4_25 && b5_16 && b6_36 && b7_7 && b8_16 && b9_5 && b10_19 && b11_26 && b12_21 && b13_9 && b14_17) {
pattern_id = 1276;
}
if(b5_33 && b6_10 && b7_35 && b8_9 && b9_5 && b10_44 && b11_15 && b12_8 && b13_18 && b14_26) {
pattern_id = 1277;
}
if(b4_30 && b5_13 && b6_29 && b7_29 && b8_17 && b9_11 && b10_20 && b11_15 && b12_25 && b13_11 && b14_5) {
pattern_id = 1278;
}
if(b9_13 && b10_6 && b11_13 && b12_2 && b13_14 && b14_11) {
pattern_id = 1279;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_3 && b8_3 && b9_3 && b10_14 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1280;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_3 && b8_3 && b9_3 && b10_14 && b11_3 && b12_2 && b13_66 && b14_2) {
pattern_id = 1281;
}
if(b8_8 && b9_3 && b10_14 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1282;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_4 && b13_3 && b14_2) {
pattern_id = 1283;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_4 && b13_41 && b14_2) {
pattern_id = 1284;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_4 && b13_13 && b14_2) {
pattern_id = 1285;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_4 && b13_44 && b14_2) {
pattern_id = 1286;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_4 && b13_43 && b14_2) {
pattern_id = 1287;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_4 && b13_33 && b14_2) {
pattern_id = 1288;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_14 && b13_66 && b14_2) {
pattern_id = 1289;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_14 && b13_6 && b14_2) {
pattern_id = 1290;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_37 && b13_13 && b14_2) {
pattern_id = 1291;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_41 && b11_3 && b12_6 && b13_21 && b14_2) {
pattern_id = 1292;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_40 && b11_3 && b12_29 && b13_66 && b14_2) {
pattern_id = 1293;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_28 && b8_3 && b9_23 && b10_40 && b11_3 && b12_45 && b13_43 && b14_2) {
pattern_id = 1294;
}
if(b4_8 && b5_9 && b6_3 && b7_22 && b8_31 && b9_58 && b10_10 && b11_65 && b12_35 && b13_5 && b14_66) {
pattern_id = 1295;
}
if(b8_8 && b9_3 && b10_14 && b11_3 && b12_2 && b13_49 && b14_2) {
pattern_id = 1296;
}
if(b7_16 && b8_31 && b9_3 && b10_10 && b11_14 && b12_33 && b13_5 && b14_28) {
pattern_id = 1297;
}
if(b7_16 && b8_31 && b9_3 && b10_10 && b11_14 && b12_33 && b13_5 && b14_62) {
pattern_id = 1298;
}
if(b8_8 && b9_3 && b10_14 && b11_3 && b12_2 && b13_41 && b14_2) {
pattern_id = 1299;
}
if(b4_8 && b5_9 && b6_3 && b7_22 && b8_31 && b9_9 && b10_10 && b11_14 && b12_43 && b13_5 && b14_43) {
pattern_id = 1300;
}
if(b2_1 && b3_11 && b4_2 && b5_3 && b6_3 && b7_58 && b8_3 && b9_45 && b10_28 && b11_3 && b12_6 && b13_21 && b14_2) {
pattern_id = 1301;
}
if(b4_8 && b5_9 && b6_3 && b7_22 && b8_31 && b9_31 && b10_10 && b11_42 && b12_35 && b13_5 && b14_32) {
pattern_id = 1302;
}
if(b4_8 && b5_9 && b6_3 && b7_22 && b8_51 && b9_3 && b10_5 && b11_68 && b12_6 && b13_4 && b14_52) {
pattern_id = 1303;
}
if(b11_2 && b12_2 && b13_3 && b14_2) {
pattern_id = 1304;
}
if(b7_16 && b8_31 && b9_3 && b10_5 && b11_1 && b12_27 && b13_1 && b14_43) {
pattern_id = 1305;
}
if(b10_5 && b11_14 && b12_2 && b13_5 && b14_61) {
pattern_id = 1306;
}
if(b10_5 && b11_14 && b12_2 && b13_5 && b14_3) {
pattern_id = 1307;
}
if(b3_13 && b4_2 && b5_9 && b6_20 && b7_29 && b8_14 && b9_29 && b10_19 && b11_2 && b12_2 && b13_3 && b14_2) {
pattern_id = 1308;
}
if(b5_40 && b6_3 && b7_28 && b8_3 && b9_3 && b10_14 && b11_3 && b12_2 && b13_41 && b14_2) {
pattern_id = 1309;
}
if(b5_40 && b6_3 && b7_28 && b8_3 && b9_3 && b10_18 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1310;
}
if(b2_1 && b3_11 && b4_42 && b5_3 && b6_3 && b7_51 && b8_3 && b9_3 && b10_14 && b11_3 && b12_33 && b13_13 && b14_2) {
pattern_id = 1311;
}
if(b5_40 && b6_3 && b7_28 && b8_3 && b9_3 && b10_3 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1312;
}
if(b11_2 && b12_2 && b13_49 && b14_2) {
pattern_id = 1313;
}
if(b8_8 && b9_3 && b10_3 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1314;
}
if(b11_2 && b12_2 && b13_41 && b14_2) {
pattern_id = 1315;
}
if(b5_40 && b6_3 && b7_33 && b8_3 && b9_3 && b10_14 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1316;
}
if(b5_40 && b6_3 && b7_33 && b8_3 && b9_3 && b10_14 && b11_3 && b12_2 && b13_49 && b14_2) {
pattern_id = 1317;
}
if(b8_8 && b9_3 && b10_28 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1318;
}
if(b2_1 && b3_11 && b4_39 && b5_40 && b6_63 && b7_3 && b8_19 && b9_27 && b10_14 && b11_49 && b12_32 && b13_47 && b14_25) {
pattern_id = 1319;
}
if(b8_8 && b9_3 && b10_13 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1320;
}
if(b5_40 && b6_3 && b7_58 && b8_3 && b9_3 && b10_18 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1321;
}
if(b11_2 && b12_2 && b13_13 && b14_2) {
pattern_id = 1322;
}
if(b8_8 && b9_3 && b10_39 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1323;
}
if(b7_16 && b8_31 && b9_31 && b10_10 && b11_14 && b12_2 && b13_5 && b14_30) {
pattern_id = 1324;
}
if(b11_2 && b12_2 && b13_44 && b14_2) {
pattern_id = 1325;
}
if(b5_40 && b6_3 && b7_50 && b8_8 && b9_42 && b10_48 && b11_47 && b12_22 && b13_12 && b14_49) {
pattern_id = 1326;
}
if(b11_2 && b12_2 && b13_68 && b14_2) {
pattern_id = 1327;
}
if(b4_8 && b5_9 && b6_15 && b7_16 && b8_12 && b9_6 && b10_19 && b11_6 && b12_7 && b13_8 && b14_22) {
pattern_id = 1328;
}
if(b4_8 && b5_9 && b6_15 && b7_16 && b8_19 && b9_5 && b10_17 && b11_8 && b12_25 && b13_15 && b14_10) {
pattern_id = 1329;
}
if(b11_2 && b12_2 && b13_66 && b14_2) {
pattern_id = 1330;
}
if(b6_20 && b7_3 && b8_13 && b9_27 && b10_10 && b11_3 && b12_13 && b13_32 && b14_4) {
pattern_id = 1331;
}
if(b8_8 && b9_3 && b10_8 && b11_2 && b12_30 && b13_47 && b14_25) {
pattern_id = 1332;
}
if(b9_27 && b10_14 && b11_21 && b12_32 && b13_2 && b14_28) {
pattern_id = 1333;
}
if(b2_1 && b3_11 && b4_50 && b5_40 && b6_7 && b7_29 && b8_14 && b9_41 && b10_51 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1334;
}
if(b2_1 && b3_11 && b4_54 && b5_3 && b6_26 && b7_3 && b8_3 && b9_3 && b10_39 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1335;
}
if(b11_2 && b12_2 && b13_33 && b14_2) {
pattern_id = 1336;
}
if(b2_1 && b3_11 && b4_48 && b5_3 && b6_3 && b7_3 && b8_3 && b9_3 && b10_39 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1337;
}
if(b2_1 && b3_11 && b4_48 && b5_3 && b6_3 && b7_11 && b8_8 && b9_6 && b10_48 && b11_13 && b12_18 && b13_72 && b14_4) {
pattern_id = 1338;
}
if(b8_8 && b9_58 && b10_14 && b11_3 && b12_2 && b13_44 && b14_2) {
pattern_id = 1339;
}
if(b11_2 && b12_33 && b13_21 && b14_2) {
pattern_id = 1340;
}
if(b5_40 && b6_26 && b7_50 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1341;
}
if(b5_40 && b6_26 && b7_50 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_49 && b14_2) {
pattern_id = 1342;
}
if(b5_40 && b6_26 && b7_50 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_41 && b14_2) {
pattern_id = 1343;
}
if(b5_40 && b6_26 && b7_50 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_21 && b14_2) {
pattern_id = 1344;
}
if(b8_8 && b9_58 && b10_41 && b11_3 && b12_2 && b13_21 && b14_2) {
pattern_id = 1345;
}
if(b5_40 && b6_26 && b7_31 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1346;
}
if(b5_40 && b6_26 && b7_31 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_49 && b14_2) {
pattern_id = 1347;
}
if(b5_40 && b6_26 && b7_31 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_41 && b14_2) {
pattern_id = 1348;
}
if(b5_40 && b6_26 && b7_31 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_21 && b14_2) {
pattern_id = 1349;
}
if(b5_40 && b6_26 && b7_68 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1350;
}
if(b5_40 && b6_26 && b7_68 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_49 && b14_2) {
pattern_id = 1351;
}
if(b5_40 && b6_26 && b7_68 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_41 && b14_2) {
pattern_id = 1352;
}
if(b5_40 && b6_26 && b7_68 && b8_3 && b9_3 && b10_28 && b11_3 && b12_2 && b13_21 && b14_2) {
pattern_id = 1353;
}
if(b2_1 && b3_53 && b4_2 && b5_40 && b6_57 && b7_30 && b8_8 && b9_9 && b10_8 && b11_3 && b12_19 && b13_3 && b14_2) {
pattern_id = 1354;
}
if(b7_16 && b8_45 && b9_9 && b10_5 && b11_25 && b12_25 && b13_1 && b14_6) {
pattern_id = 1355;
}
if(b2_1 && b3_53 && b4_58 && b5_3 && b6_62 && b7_58 && b8_3 && b9_23 && b10_43 && b11_3 && b12_4 && b13_33 && b14_2) {
pattern_id = 1356;
}
if(b11_2 && b12_19 && b13_63 && b14_2) {
pattern_id = 1357;
}
if(b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1358;
}
if(b10_5 && b11_5 && b12_4 && b13_5 && b14_28) {
pattern_id = 1359;
}
if(b2_1 && b3_51 && b4_50 && b5_40 && b6_19 && b7_36 && b8_12 && b9_1 && b10_32 && b11_2 && b12_2 && b13_22 && b14_2) {
pattern_id = 1360;
}
if(b2_1 && b3_51 && b4_54 && b5_3 && b6_44 && b7_3 && b8_8 && b9_1 && b10_56 && b11_2 && b12_23 && b13_22 && b14_2) {
pattern_id = 1361;
}
if(b11_2 && b12_23 && b13_33 && b14_2) {
pattern_id = 1362;
}
if(b1_36 && b2_46 && b3_15 && b4_8 && b5_3 && b6_23 && b7_19 && b8_16 && b9_5 && b10_21 && b11_18 && b12_53 && b13_9 && b14_51) {
pattern_id = 1363;
}
if(b2_1 && b3_56 && b4_2 && b5_3 && b6_3 && b7_3 && b8_3 && b9_3 && b10_14 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1364;
}
if(b8_8 && b9_21 && b10_35 && b11_3 && b12_55 && b13_6 && b14_2) {
pattern_id = 1365;
}
if(b8_8 && b9_31 && b10_13 && b11_3 && b12_19 && b13_3 && b14_2) {
pattern_id = 1366;
}
if(b5_40 && b6_22 && b7_27 && b8_3 && b9_3 && b10_13 && b11_3 && b12_2 && b13_22 && b14_2) {
pattern_id = 1367;
}
if(b1_36 && b2_40 && b3_44 && b4_8 && b5_6 && b6_12 && b7_8 && b8_37 && b9_8 && b10_12 && b11_2 && b12_9 && b13_6 && b14_2) {
pattern_id = 1368;
}
if(b2_1 && b3_54 && b4_50 && b5_3 && b6_45 && b7_46 && b8_3 && b9_45 && b10_58 && b11_3 && b12_43 && b13_6 && b14_2) {
pattern_id = 1369;
}
if(b2_1 && b3_54 && b4_54 && b5_3 && b6_3 && b7_68 && b8_3 && b9_63 && b10_8 && b11_3 && b12_19 && b13_22 && b14_2) {
pattern_id = 1370;
}
if(b3_13 && b4_60 && b5_15 && b6_18 && b7_27 && b8_7 && b9_27 && b10_17 && b11_17 && b12_28 && b13_47 && b14_10) {
pattern_id = 1371;
}
if(b11_2 && b12_35 && b13_6 && b14_2) {
pattern_id = 1372;
}
if(b8_8 && b9_23 && b10_14 && b11_3 && b12_2 && b13_49 && b14_2) {
pattern_id = 1373;
}
if(b8_8 && b9_23 && b10_14 && b11_3 && b12_2 && b13_41 && b14_2) {
pattern_id = 1374;
}
if(b8_8 && b9_23 && b10_18 && b11_3 && b12_29 && b13_3 && b14_2) {
pattern_id = 1375;
}
if(b0_15 && b1_34 && b2_40 && b3_47 && b4_42 && b5_14 && b6_20 && b7_61 && b8_8 && b9_45 && b10_22 && b11_3 && b12_4 && b13_41 && b14_2) {
pattern_id = 1376;
}
if(b2_1 && b3_7 && b4_50 && b5_3 && b6_3 && b7_51 && b8_3 && b9_3 && b10_14 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1377;
}
if(b8_8 && b9_45 && b10_22 && b11_3 && b12_45 && b13_66 && b14_2) {
pattern_id = 1378;
}
if(b2_1 && b3_15 && b4_2 && b5_3 && b6_26 && b7_31 && b8_3 && b9_36 && b10_43 && b11_3 && b12_29 && b13_3 && b14_2) {
pattern_id = 1379;
}
if(b2_1 && b3_15 && b4_2 && b5_3 && b6_25 && b7_27 && b8_3 && b9_36 && b10_43 && b11_3 && b12_29 && b13_3 && b14_2) {
pattern_id = 1380;
}
if(b8_8 && b9_12 && b10_13 && b11_3 && b12_14 && b13_13 && b14_2) {
pattern_id = 1381;
}
if(b1_36 && b2_2 && b3_32 && b4_8 && b5_12 && b6_51 && b7_59 && b8_8 && b9_21 && b10_14 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1382;
}
if(b0_15 && b1_19 && b2_2 && b3_47 && b4_36 && b5_5 && b6_20 && b7_64 && b8_8 && b9_3 && b10_14 && b11_3 && b12_2 && b13_3 && b14_2) {
pattern_id = 1383;
}
if(b7_16 && b8_56 && b9_59 && b10_5 && b11_35 && b12_44 && b13_33 && b14_60) {
pattern_id = 1384;
}
if(b7_16 && b8_56 && b9_59 && b10_5 && b11_35 && b12_44 && b13_33 && b14_22) {
pattern_id = 1385;
}
if(b4_8 && b5_62 && b6_52 && b7_16 && b8_29 && b9_25 && b10_58 && b11_2 && b12_4 && b13_3 && b14_2) {
pattern_id = 1386;
}
if(b14_58) {
pattern_id = 1387;
}
}

}