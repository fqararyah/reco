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

boolean b0_1;
boolean b0_2;
boolean b0_3;
boolean b0_4;
boolean b0_5;
boolean b0_6;
boolean b0_7;
boolean b0_8;
boolean b0_9;
boolean b0_10;
boolean b0_11;
boolean b0_12;
boolean b0_13;
boolean b0_14;
boolean b0_15;
boolean b0_16;
boolean b0_17;
boolean b0_18;
boolean b0_19;
boolean b0_20;
boolean b0_21;
boolean b0_22;
boolean b0_23;
boolean b0_24;
boolean b0_25;
boolean b0_26;
boolean b0_27;
boolean b0_28;
boolean b0_29;
boolean b0_30;
boolean b0_31;
boolean b0_32;
boolean b0_33;
boolean b0_34;
boolean b0_35;
boolean b0_36;
boolean b0_37;
boolean b0_38;
boolean b0_39;
boolean b0_40;
boolean b0_41;
boolean b0_42;
boolean b0_43;
boolean b0_44;
boolean b0_45;
boolean b0_46;
boolean b0_47;
boolean b0_48;
boolean b0_49;
boolean b0_50;
boolean b0_51;
boolean b0_52;
boolean b0_53;
boolean b0_54;
boolean b0_55;
boolean b0_56;
boolean b0_57;
boolean b0_58;
boolean b0_59;
boolean b0_60;
boolean b0_61;
boolean b0_62;
boolean b0_63;
boolean b0_64;
boolean b0_65;
boolean b0_66;
boolean b0_67;
boolean b0_68;
boolean b0_69;
boolean b0_70;
boolean b0_71;
boolean b0_72;
boolean b1_1;
boolean b1_2;
boolean b1_3;
boolean b1_4;
boolean b1_5;
boolean b1_6;
boolean b1_7;
boolean b1_8;
boolean b1_9;
boolean b1_10;
boolean b1_11;
boolean b1_12;
boolean b1_13;
boolean b1_14;
boolean b1_15;
boolean b1_16;
boolean b1_17;
boolean b1_18;
boolean b1_19;
boolean b1_20;
boolean b1_21;
boolean b1_22;
boolean b1_23;
boolean b1_24;
boolean b1_25;
boolean b1_26;
boolean b1_27;
boolean b1_28;
boolean b1_29;
boolean b1_30;
boolean b1_31;
boolean b1_32;
boolean b1_33;
boolean b1_34;
boolean b1_35;
boolean b1_36;
boolean b1_37;
boolean b1_38;
boolean b1_39;
boolean b1_40;
boolean b1_41;
boolean b1_42;
boolean b1_43;
boolean b1_44;
boolean b1_45;
boolean b1_46;
boolean b1_47;
boolean b1_48;
boolean b1_49;
boolean b1_50;
boolean b1_51;
boolean b1_52;
boolean b1_53;
boolean b1_54;
boolean b1_55;
boolean b1_56;
boolean b1_57;
boolean b1_58;
boolean b1_59;
boolean b1_60;
boolean b1_61;
boolean b1_62;
boolean b1_63;
boolean b1_64;
boolean b1_65;
boolean b1_66;
boolean b1_67;
boolean b1_68;
boolean b1_69;
boolean b1_70;
boolean b2_1;
boolean b2_2;
boolean b2_3;
boolean b2_4;
boolean b2_5;
boolean b2_6;
boolean b2_7;
boolean b2_8;
boolean b2_9;
boolean b2_10;
boolean b2_11;
boolean b2_12;
boolean b2_13;
boolean b2_14;
boolean b2_15;
boolean b2_16;
boolean b2_17;
boolean b2_18;
boolean b2_19;
boolean b2_20;
boolean b2_21;
boolean b2_22;
boolean b2_23;
boolean b2_24;
boolean b2_25;
boolean b2_26;
boolean b2_27;
boolean b2_28;
boolean b2_29;
boolean b2_30;
boolean b2_31;
boolean b2_32;
boolean b2_33;
boolean b2_34;
boolean b2_35;
boolean b2_36;
boolean b2_37;
boolean b2_38;
boolean b2_39;
boolean b2_40;
boolean b2_41;
boolean b2_42;
boolean b2_43;
boolean b2_44;
boolean b2_45;
boolean b2_46;
boolean b2_47;
boolean b2_48;
boolean b2_49;
boolean b2_50;
boolean b2_51;
boolean b2_52;
boolean b2_53;
boolean b2_54;
boolean b2_55;
boolean b2_56;
boolean b2_57;
boolean b2_58;
boolean b2_59;
boolean b2_60;
boolean b2_61;
boolean b2_62;
boolean b2_63;
boolean b3_1;
boolean b3_2;
boolean b3_3;
boolean b3_4;
boolean b3_5;
boolean b3_6;
boolean b3_7;
boolean b3_8;
boolean b3_9;
boolean b3_10;
boolean b3_11;
boolean b3_12;
boolean b3_13;
boolean b3_14;
boolean b3_15;
boolean b3_16;
boolean b3_17;
boolean b3_18;
boolean b3_19;
boolean b3_20;
boolean b3_21;
boolean b3_22;
boolean b3_23;
boolean b3_24;
boolean b3_25;
boolean b3_26;
boolean b3_27;
boolean b3_28;
boolean b3_29;
boolean b3_30;
boolean b3_31;
boolean b3_32;
boolean b3_33;
boolean b3_34;
boolean b3_35;
boolean b3_36;
boolean b3_37;
boolean b3_38;
boolean b3_39;
boolean b3_40;
boolean b3_41;
boolean b3_42;
boolean b3_43;
boolean b3_44;
boolean b3_45;
boolean b3_46;
boolean b3_47;
boolean b3_48;
boolean b3_49;
boolean b3_50;
boolean b3_51;
boolean b3_52;
boolean b3_53;
boolean b3_54;
boolean b3_55;
boolean b3_56;
boolean b3_57;
boolean b3_58;
boolean b4_1;
boolean b4_2;
boolean b4_3;
boolean b4_4;
boolean b4_5;
boolean b4_6;
boolean b4_7;
boolean b4_8;
boolean b4_9;
boolean b4_10;
boolean b4_11;
boolean b4_12;
boolean b4_13;
boolean b4_14;
boolean b4_15;
boolean b4_16;
boolean b4_17;
boolean b4_18;
boolean b4_19;
boolean b4_20;
boolean b4_21;
boolean b4_22;
boolean b4_23;
boolean b4_24;
boolean b4_25;
boolean b4_26;
boolean b4_27;
boolean b4_28;
boolean b4_29;
boolean b4_30;
boolean b4_31;
boolean b4_32;
boolean b4_33;
boolean b4_34;
boolean b4_35;
boolean b4_36;
boolean b4_37;
boolean b4_38;
boolean b4_39;
boolean b4_40;
boolean b4_41;
boolean b4_42;
boolean b4_43;
boolean b4_44;
boolean b4_45;
boolean b4_46;
boolean b4_47;
boolean b4_48;
boolean b4_49;
boolean b4_50;
boolean b4_51;
boolean b4_52;
boolean b4_53;
boolean b4_54;
boolean b4_55;
boolean b4_56;
boolean b5_1;
boolean b5_2;
boolean b5_3;
boolean b5_4;
boolean b5_5;
boolean b5_6;
boolean b5_7;
boolean b5_8;
boolean b5_9;
boolean b5_10;
boolean b5_11;
boolean b5_12;
boolean b5_13;
boolean b5_14;
boolean b5_15;
boolean b5_16;
boolean b5_17;
boolean b5_18;
boolean b5_19;
boolean b5_20;
boolean b5_21;
boolean b5_22;
boolean b5_23;
boolean b5_24;
boolean b5_25;
boolean b5_26;
boolean b5_27;
boolean b5_28;
boolean b5_29;
boolean b5_30;
boolean b5_31;
boolean b5_32;
boolean b5_33;
boolean b5_34;
boolean b5_35;
boolean b5_36;
boolean b5_37;
boolean b5_38;
boolean b5_39;
boolean b5_40;
boolean b5_41;
boolean b5_42;
boolean b5_43;
boolean b5_44;
boolean b5_45;
boolean b5_46;
boolean b5_47;
boolean b5_48;
boolean b5_49;
boolean b5_50;
boolean b5_51;
boolean b5_52;
boolean b6_1;
boolean b6_2;
boolean b6_3;
boolean b6_4;
boolean b6_5;
boolean b6_6;
boolean b6_7;
boolean b6_8;
boolean b6_9;
boolean b6_10;
boolean b6_11;
boolean b6_12;
boolean b6_13;
boolean b6_14;
boolean b6_15;
boolean b6_16;
boolean b6_17;
boolean b6_18;
boolean b6_19;
boolean b6_20;
boolean b6_21;
boolean b6_22;
boolean b6_23;
boolean b6_24;
boolean b6_25;
boolean b6_26;
boolean b6_27;
boolean b6_28;
boolean b6_29;
boolean b6_30;
void match(bool &matched, int *pattern_id, char buffer[buffer_size], int start_indx) {
for(int i=0; i<chunk_len; i++){
#pragma HLS UNROLL
b0_1 =(buffer[i + 0] == 'F');
b0_2 =(buffer[i + 0] == 'h');
b0_3 =(buffer[i + 0] == 'U');
b0_4 =(buffer[i + 0] == '|');
b0_5 =(buffer[i + 0] == 'y');
b0_6 =(buffer[i + 0] == 'w');
b0_7 =(buffer[i + 0] == 'r');
b0_8 =(buffer[i + 0] == 'l');
b0_9 =(buffer[i + 0] == 'd');
b0_10 =(buffer[i + 0] == 's');
b0_11 =(buffer[i + 0] == 'f');
b0_12 =(buffer[i + 0] == 'S');
b0_13 =(buffer[i + 0] == '1');
b0_14 =(buffer[i + 0] == 'P');
b0_15 =(buffer[i + 0] == '*');
b0_16 =(buffer[i + 0] == 'g');
b0_17 =(buffer[i + 0] == 'k');
b0_18 =(buffer[i + 0] == 'a');
b0_19 =(buffer[i + 0] == 'p');
b0_20 =(buffer[i + 0] == '>');
b0_21 =(buffer[i + 0] == '+');
b0_22 =(buffer[i + 0] == '@');
b0_23 =(buffer[i + 0] == '0');
b0_24 =(buffer[i + 0] == '.');
b0_25 =(buffer[i + 0] == 'C');
b0_26 =(buffer[i + 0] == 'R');
b0_27 =(buffer[i + 0] == '5');
b0_28 =(buffer[i + 0] == 'G');
b0_29 =(buffer[i + 0] == 'M');
b0_30 =(buffer[i + 0] == 'N');
b0_31 =(buffer[i + 0] == 'A');
b0_32 =(buffer[i + 0] == 'H');
b0_33 =(buffer[i + 0] == 'e');
b0_34 =(buffer[i + 0] == 'v');
b0_35 =(buffer[i + 0] == '4');
b0_36 =(buffer[i + 0] == '_');
b0_37 =(buffer[i + 0] == '/');
b0_38 =(buffer[i + 0] == 'L');
b0_39 =(buffer[i + 0] == '%');
b0_40 =(buffer[i + 0] == 'c');
b0_41 =(buffer[i + 0] == ' ');
b0_42 =(buffer[i + 0] == 'I');
b0_43 =(buffer[i + 0] == 'n');
b0_44 =(buffer[i + 0] == '?');
b0_45 =(buffer[i + 0] == 'B');
b0_46 =(buffer[i + 0] == '-');
b0_47 =(buffer[i + 0] == '~');
b0_48 =(buffer[i + 0] == 'E');
b0_49 =(buffer[i + 0] == 'D');
b0_50 =(buffer[i + 0] == 'J');
b0_51 =(buffer[i + 0] == '2');
b0_52 =(buffer[i + 0] == 'u');
b0_53 =(buffer[i + 0] == '!');
b0_54 =(buffer[i + 0] == 'X');
b0_55 =(buffer[i + 0] == 'T');
b0_56 =(buffer[i + 0] == 'V');
b0_57 =(buffer[i + 0] == '<');
b0_58 =(buffer[i + 0] == 'i');
b0_59 =(buffer[i + 0] == 'Y');
b0_60 =(buffer[i + 0] == 'j');
b0_61 =(buffer[i + 0] == 'W');
b0_62 =(buffer[i + 0] == 't');
b0_63 =(buffer[i + 0] == '3');
b0_64 =(buffer[i + 0] == 'o');
b0_65 =(buffer[i + 0] == '&');
b0_66 =(buffer[i + 0] == 'm');
b0_67 =(buffer[i + 0] == '=');
b0_68 =(buffer[i + 0] == ')');
b0_69 =(buffer[i + 0] == '(');
b0_70 =(buffer[i + 0] == 'K');
b0_71 =(buffer[i + 0] == 'b');
b0_72 =(buffer[i + 0] == '8');
b1_1 =(buffer[i + 1] == 'C');
b1_2 =(buffer[i + 1] == 'o');
b1_3 =(buffer[i + 1] == 'S');
b1_4 =(buffer[i + 1] == 'T');
b1_5 =(buffer[i + 1] == 'B');
b1_6 =(buffer[i + 1] == 'p');
b1_7 =(buffer[i + 1] == '0');
b1_8 =(buffer[i + 1] == 'e');
b1_9 =(buffer[i + 1] == 'h');
b1_10 =(buffer[i + 1] == 'r');
b1_11 =(buffer[i + 1] == '1');
b1_12 =(buffer[i + 1] == 'a');
b1_13 =(buffer[i + 1] == 't');
b1_14 =(buffer[i + 1] == '2');
b1_15 =(buffer[i + 1] == 'O');
b1_16 =(buffer[i + 1] == 'i');
b1_17 =(buffer[i + 1] == 'k');
b1_18 =(buffer[i + 1] == '4');
b1_19 =(buffer[i + 1] == 'H');
b1_20 =(buffer[i + 1] == 'l');
b1_21 =(buffer[i + 1] == '8');
b1_22 =(buffer[i + 1] == '+');
b1_23 =(buffer[i + 1] == '3');
b1_24 =(buffer[i + 1] == '7');
b1_25 =(buffer[i + 1] == '@');
b1_26 =(buffer[i + 1] == 'W');
b1_27 =(buffer[i + 1] == 'E');
b1_28 =(buffer[i + 1] == '%');
b1_29 =(buffer[i + 1] == 'I');
b1_30 =(buffer[i + 1] == 'A');
b1_31 =(buffer[i + 1] == '.');
b1_32 =(buffer[i + 1] == 'K');
b1_33 =(buffer[i + 1] == 'F');
b1_34 =(buffer[i + 1] == 'm');
b1_35 =(buffer[i + 1] == 'x');
b1_36 =(buffer[i + 1] == 'D');
b1_37 =(buffer[i + 1] == 'R');
b1_38 =(buffer[i + 1] == 's');
b1_39 =(buffer[i + 1] == 'Y');
b1_40 =(buffer[i + 1] == 'f');
b1_41 =(buffer[i + 1] == 'c');
b1_42 =(buffer[i + 1] == 'w');
b1_43 =(buffer[i + 1] == 'L');
b1_44 =(buffer[i + 1] == 'b');
b1_45 =(buffer[i + 1] == '*');
b1_46 =(buffer[i + 1] == 'N');
b1_47 =(buffer[i + 1] == 'j');
b1_48 =(buffer[i + 1] == 'n');
b1_49 =(buffer[i + 1] == 'd');
b1_50 =(buffer[i + 1] == '~');
b1_51 =(buffer[i + 1] == 'z');
b1_52 =(buffer[i + 1] == '?');
b1_53 =(buffer[i + 1] == 'u');
b1_54 =(buffer[i + 1] == 'P');
b1_55 =(buffer[i + 1] == 'M');
b1_56 =(buffer[i + 1] == '|');
b1_57 =(buffer[i + 1] == 'U');
b1_58 =(buffer[i + 1] == 'X');
b1_59 =(buffer[i + 1] == '!');
b1_60 =(buffer[i + 1] == 'Q');
b1_61 =(buffer[i + 1] == '9');
b1_62 =(buffer[i + 1] == 'g');
b1_63 =(buffer[i + 1] == 'Z');
b1_64 =(buffer[i + 1] == 'y');
b1_65 =(buffer[i + 1] == '=');
b1_66 =(buffer[i + 1] == '5');
b1_67 =(buffer[i + 1] == '&');
b1_68 =(buffer[i + 1] == ')');
b1_69 =(buffer[i + 1] == '(');
b1_70 =(buffer[i + 1] == 'v');
b2_1 =(buffer[i + 2] == 's');
b2_2 =(buffer[i + 2] == 'E');
b2_3 =(buffer[i + 2] == 'P');
b2_4 =(buffer[i + 2] == '4');
b2_5 =(buffer[i + 2] == 'i');
b2_6 =(buffer[i + 2] == '0');
b2_7 =(buffer[i + 2] == 'w');
b2_8 =(buffer[i + 2] == 'k');
b2_9 =(buffer[i + 2] == '3');
b2_10 =(buffer[i + 2] == 't');
b2_11 =(buffer[i + 2] == 'x');
b2_12 =(buffer[i + 2] == 'o');
b2_13 =(buffer[i + 2] == 'n');
b2_14 =(buffer[i + 2] == 'N');
b2_15 =(buffer[i + 2] == 'c');
b2_16 =(buffer[i + 2] == 'r');
b2_17 =(buffer[i + 2] == 'l');
b2_18 =(buffer[i + 2] == '1');
b2_19 =(buffer[i + 2] == '+');
b2_20 =(buffer[i + 2] == 'a');
b2_21 =(buffer[i + 2] == 'B');
b2_22 =(buffer[i + 2] == 'C');
b2_23 =(buffer[i + 2] == 'h');
b2_24 =(buffer[i + 2] == 'D');
b2_25 =(buffer[i + 2] == 'L');
b2_26 =(buffer[i + 2] == 'T');
b2_27 =(buffer[i + 2] == '2');
b2_28 =(buffer[i + 2] == 'S');
b2_29 =(buffer[i + 2] == 'p');
b2_30 =(buffer[i + 2] == 'G');
b2_31 =(buffer[i + 2] == 'O');
b2_32 =(buffer[i + 2] == 'A');
b2_33 =(buffer[i + 2] == 'f');
b2_34 =(buffer[i + 2] == 'g');
b2_35 =(buffer[i + 2] == '.');
b2_36 =(buffer[i + 2] == 'W');
b2_37 =(buffer[i + 2] == 'd');
b2_38 =(buffer[i + 2] == 'm');
b2_39 =(buffer[i + 2] == 'u');
b2_40 =(buffer[i + 2] == '%');
b2_41 =(buffer[i + 2] == '/');
b2_42 =(buffer[i + 2] == 'e');
b2_43 =(buffer[i + 2] == 'I');
b2_44 =(buffer[i + 2] == 'b');
b2_45 =(buffer[i + 2] == 'R');
b2_46 =(buffer[i + 2] == 'U');
b2_47 =(buffer[i + 2] == 'M');
b2_48 =(buffer[i + 2] == 'F');
b2_49 =(buffer[i + 2] == 'H');
b2_50 =(buffer[i + 2] == '|');
b2_51 =(buffer[i + 2] == '5');
b2_52 =(buffer[i + 2] == 'X');
b2_53 =(buffer[i + 2] == '=');
b2_54 =(buffer[i + 2] == 'K');
b2_55 =(buffer[i + 2] == '7');
b2_56 =(buffer[i + 2] == '8');
b2_57 =(buffer[i + 2] == 'V');
b2_58 =(buffer[i + 2] == '_');
b2_59 =(buffer[i + 2] == 'y');
b2_60 =(buffer[i + 2] == 'z');
b2_61 =(buffer[i + 2] == ' ');
b2_62 =(buffer[i + 2] == ')');
b2_63 =(buffer[i + 2] == '6');
b3_1 =(buffer[i + 3] == 't');
b3_2 =(buffer[i + 3] == 'R');
b3_3 =(buffer[i + 3] == 'O');
b3_4 =(buffer[i + 3] == ' ');
b3_5 =(buffer[i + 3] == '0');
b3_6 =(buffer[i + 3] == 'w');
b3_7 =(buffer[i + 3] == 'r');
b3_8 =(buffer[i + 3] == 'h');
b3_9 =(buffer[i + 3] == 'o');
b3_10 =(buffer[i + 3] == 'd');
b3_11 =(buffer[i + 3] == 'k');
b3_12 =(buffer[i + 3] == '4');
b3_13 =(buffer[i + 3] == 'G');
b3_14 =(buffer[i + 3] == 'l');
b3_15 =(buffer[i + 3] == 'L');
b3_16 =(buffer[i + 3] == 'a');
b3_17 =(buffer[i + 3] == 'v');
b3_18 =(buffer[i + 3] == 'e');
b3_19 =(buffer[i + 3] == 'g');
b3_20 =(buffer[i + 3] == '|');
b3_21 =(buffer[i + 3] == 'E');
b3_22 =(buffer[i + 3] == 'S');
b3_23 =(buffer[i + 3] == 'K');
b3_24 =(buffer[i + 3] == 'n');
b3_25 =(buffer[i + 3] == 'P');
b3_26 =(buffer[i + 3] == 'y');
b3_27 =(buffer[i + 3] == 'i');
b3_28 =(buffer[i + 3] == 'D');
b3_29 =(buffer[i + 3] == 'c');
b3_30 =(buffer[i + 3] == 'B');
b3_31 =(buffer[i + 3] == 'm');
b3_32 =(buffer[i + 3] == 's');
b3_33 =(buffer[i + 3] == 'f');
b3_34 =(buffer[i + 3] == 'T');
b3_35 =(buffer[i + 3] == '.');
b3_36 =(buffer[i + 3] == 'p');
b3_37 =(buffer[i + 3] == '2');
b3_38 =(buffer[i + 3] == '-');
b3_39 =(buffer[i + 3] == 'V');
b3_40 =(buffer[i + 3] == 'q');
b3_41 =(buffer[i + 3] == 'j');
b3_42 =(buffer[i + 3] == 'N');
b3_43 =(buffer[i + 3] == '=');
b3_44 =(buffer[i + 3] == '/');
b3_45 =(buffer[i + 3] == 'I');
b3_46 =(buffer[i + 3] == 'A');
b3_47 =(buffer[i + 3] == 'H');
b3_48 =(buffer[i + 3] == 'C');
b3_49 =(buffer[i + 3] == 'Y');
b3_50 =(buffer[i + 3] == 'U');
b3_51 =(buffer[i + 3] == 'M');
b3_52 =(buffer[i + 3] == 'F');
b3_53 =(buffer[i + 3] == 'J');
b3_54 =(buffer[i + 3] == 'z');
b3_55 =(buffer[i + 3] == '?');
b3_56 =(buffer[i + 3] == '1');
b3_57 =(buffer[i + 3] == 'u');
b3_58 =(buffer[i + 3] == '{');
b4_1 =(buffer[i + 4] == 'N');
b4_2 =(buffer[i + 4] == 'B');
b4_3 =(buffer[i + 4] == 'c');
b4_4 =(buffer[i + 4] == '0');
b4_5 =(buffer[i + 4] == 't');
b4_6 =(buffer[i + 4] == 'h');
b4_7 =(buffer[i + 4] == 'r');
b4_8 =(buffer[i + 4] == 'a');
b4_9 =(buffer[i + 4] == 'g');
b4_10 =(buffer[i + 4] == 'e');
b4_11 =(buffer[i + 4] == 'l');
b4_12 =(buffer[i + 4] == 'L');
b4_13 =(buffer[i + 4] == 'v');
b4_14 =(buffer[i + 4] == 'm');
b4_15 =(buffer[i + 4] == 'd');
b4_16 =(buffer[i + 4] == '8');
b4_17 =(buffer[i + 4] == 's');
b4_18 =(buffer[i + 4] == '.');
b4_19 =(buffer[i + 4] == '3');
b4_20 =(buffer[i + 4] == ' ');
b4_21 =(buffer[i + 4] == 'D');
b4_22 =(buffer[i + 4] == 'f');
b4_23 =(buffer[i + 4] == 'p');
b4_24 =(buffer[i + 4] == '/');
b4_25 =(buffer[i + 4] == '?');
b4_26 =(buffer[i + 4] == 'X');
b4_27 =(buffer[i + 4] == 'x');
b4_28 =(buffer[i + 4] == 'C');
b4_29 =(buffer[i + 4] == 'o');
b4_30 =(buffer[i + 4] == 'k');
b4_31 =(buffer[i + 4] == 'I');
b4_32 =(buffer[i + 4] == 'M');
b4_33 =(buffer[i + 4] == 'i');
b4_34 =(buffer[i + 4] == 'T');
b4_35 =(buffer[i + 4] == '|');
b4_36 =(buffer[i + 4] == 'w');
b4_37 =(buffer[i + 4] == 'R');
b4_38 =(buffer[i + 4] == '-');
b4_39 =(buffer[i + 4] == 'E');
b4_40 =(buffer[i + 4] == 'H');
b4_41 =(buffer[i + 4] == 'u');
b4_42 =(buffer[i + 4] == 'n');
b4_43 =(buffer[i + 4] == 'P');
b4_44 =(buffer[i + 4] == '_');
b4_45 =(buffer[i + 4] == 'O');
b4_46 =(buffer[i + 4] == '2');
b4_47 =(buffer[i + 4] == 'U');
b4_48 =(buffer[i + 4] == '%');
b4_49 =(buffer[i + 4] == '9');
b4_50 =(buffer[i + 4] == '=');
b4_51 =(buffer[i + 4] == '7');
b4_52 =(buffer[i + 4] == '&');
b4_53 =(buffer[i + 4] == ':');
b4_54 =(buffer[i + 4] == '{');
b4_55 =(buffer[i + 4] == '4');
b4_56 =(buffer[i + 4] == 'j');
b5_1 =(buffer[i + 5] == '4');
b5_2 =(buffer[i + 5] == 'a');
b5_3 =(buffer[i + 5] == '0');
b5_4 =(buffer[i + 5] == '!');
b5_5 =(buffer[i + 5] == 'x');
b5_6 =(buffer[i + 5] == '[');
b5_7 =(buffer[i + 5] == 'i');
b5_8 =(buffer[i + 5] == 'y');
b5_9 =(buffer[i + 5] == 'R');
b5_10 =(buffer[i + 5] == 'n');
b5_11 =(buffer[i + 5] == 'z');
b5_12 =(buffer[i + 5] == 'O');
b5_13 =(buffer[i + 5] == 'e');
b5_14 =(buffer[i + 5] == 's');
b5_15 =(buffer[i + 5] == 'm');
b5_16 =(buffer[i + 5] == 'h');
b5_17 =(buffer[i + 5] == 't');
b5_18 =(buffer[i + 5] == 'A');
b5_19 =(buffer[i + 5] == '2');
b5_20 =(buffer[i + 5] == '/');
b5_21 =(buffer[i + 5] == 'c');
b5_22 =(buffer[i + 5] == '&');
b5_23 =(buffer[i + 5] == 'p');
b5_24 =(buffer[i + 5] == ' ');
b5_25 =(buffer[i + 5] == 'H');
b5_26 =(buffer[i + 5] == '-');
b5_27 =(buffer[i + 5] == '.');
b5_28 =(buffer[i + 5] == 'u');
b5_29 =(buffer[i + 5] == 'S');
b5_30 =(buffer[i + 5] == 'l');
b5_31 =(buffer[i + 5] == '1');
b5_32 =(buffer[i + 5] == '%');
b5_33 =(buffer[i + 5] == 'o');
b5_34 =(buffer[i + 5] == 'E');
b5_35 =(buffer[i + 5] == 'w');
b5_36 =(buffer[i + 5] == '?');
b5_37 =(buffer[i + 5] == 'g');
b5_38 =(buffer[i + 5] == '|');
b5_39 =(buffer[i + 5] == '5');
b5_40 =(buffer[i + 5] == 'f');
b5_41 =(buffer[i + 5] == '=');
b5_42 =(buffer[i + 5] == 'T');
b5_43 =(buffer[i + 5] == 'D');
b5_44 =(buffer[i + 5] == 'N');
b5_45 =(buffer[i + 5] == 'C');
b5_46 =(buffer[i + 5] == '8');
b5_47 =(buffer[i + 5] == 'P');
b5_48 =(buffer[i + 5] == 'd');
b5_49 =(buffer[i + 5] == 'L');
b5_50 =(buffer[i + 5] == '7');
b5_51 =(buffer[i + 5] == '3');
b5_52 =(buffer[i + 5] == ':');
b6_1 =(buffer[i + 6] == '|');
b6_2 =(buffer[i + 6] == '*');
b6_3 =(buffer[i + 6] == 'l');
b6_4 =(buffer[i + 6] == '/');
b6_5 =(buffer[i + 6] == 's');
b6_6 =(buffer[i + 6] == 'r');
b6_7 =(buffer[i + 6] == 'h');
b6_8 =(buffer[i + 6] == 'e');
b6_9 =(buffer[i + 6] == ' ');
b6_10 =(buffer[i + 6] == 'p');
b6_11 =(buffer[i + 6] == 'G');
b6_12 =(buffer[i + 6] == 'n');
b6_13 =(buffer[i + 6] == 'w');
b6_14 =(buffer[i + 6] == 'i');
b6_15 =(buffer[i + 6] == 'L');
b6_16 =(buffer[i + 6] == 'S');
b6_17 =(buffer[i + 6] == 'o');
b6_18 =(buffer[i + 6] == '0');
b6_19 =(buffer[i + 6] == 'Z');
b6_20 =(buffer[i + 6] == 'R');
b6_21 =(buffer[i + 6] == 'E');
b6_22 =(buffer[i + 6] == 'T');
b6_23 =(buffer[i + 6] == '.');
b6_24 =(buffer[i + 6] == '=');
b6_25 =(buffer[i + 6] == 'a');
b6_26 =(buffer[i + 6] == 'm');
b6_27 =(buffer[i + 6] == 't');
b6_28 =(buffer[i + 6] == '?');
b6_29 =(buffer[i + 6] == 'v');
b6_30 =(buffer[i + 6] == 'g');
if(b0_41) {
matched = true;
pattern_id [start_indx + i]= 0;
}
if(b0_41 && b1_69 && b2_62 && b3_4 && b4_54) {
matched = true;
pattern_id [start_indx + i]= 1;
}
if(b0_41 && b1_31 && b2_23 && b3_1 && b4_7) {
matched = true;
pattern_id [start_indx + i]= 2;
}
if(b0_41 && b1_31 && b2_29 && b3_14) {
matched = true;
pattern_id [start_indx + i]= 3;
}
if(b0_41 && b1_27 && b2_47 && b3_52) {
matched = true;
pattern_id [start_indx + i]= 4;
}
if(b0_41 && b1_19 && b2_26 && b3_34 && b4_43 && b5_20) {
matched = true;
pattern_id [start_indx + i]= 5;
}
if(b0_41 && b1_42 && b2_23 && b3_18 && b4_7 && b5_13 && b6_9) {
matched = true;
pattern_id [start_indx + i]= 6;
}
if(b0_53 && b1_25 && b2_50 && b3_37 && b4_19 && b5_38) {
matched = true;
pattern_id [start_indx + i]= 7;
}
if(b0_39) {
matched = true;
pattern_id [start_indx + i]= 8;
}
if(b0_39 && b1_11 && b2_39) {
matched = true;
pattern_id [start_indx + i]= 9;
}
if(b0_39 && b1_14 && b2_6) {
matched = true;
pattern_id [start_indx + i]= 10;
}
if(b0_39 && b1_54 && b2_32 && b3_34 && b4_40 && b5_32) {
matched = true;
pattern_id [start_indx + i]= 11;
}
if(b0_39 && b1_54 && b2_24 && b3_52 && b4_38 && b5_31 && b6_23) {
matched = true;
pattern_id [start_indx + i]= 12;
}
if(b0_39 && b1_4 && b2_2 && b3_51 && b4_43 && b5_32) {
matched = true;
pattern_id [start_indx + i]= 13;
}
if(b0_39 && b1_4 && b2_47 && b3_25 && b4_48) {
matched = true;
pattern_id [start_indx + i]= 14;
}
if(b0_65 && b1_12 && b2_33 && b3_33 && b4_33 && b5_48 && b6_24) {
matched = true;
pattern_id [start_indx + i]= 15;
}
if(b0_65 && b1_16 && b2_13 && b3_1 && b4_33 && b5_23 && b6_24) {
matched = true;
pattern_id [start_indx + i]= 16;
}
if(b0_65 && b1_38 && b2_8 && b3_56 && b4_50) {
matched = true;
pattern_id [start_indx + i]= 17;
}
if(b0_69 && b1_68 && b2_61 && b3_58) {
matched = true;
pattern_id [start_indx + i]= 18;
}
if(b0_69 && b1_56 && b2_6 && b3_5 && b4_35) {
matched = true;
pattern_id [start_indx + i]= 19;
}
if(b0_68 && b1_67 && b2_37 && b3_1 && b4_50) {
matched = true;
pattern_id [start_indx + i]= 20;
}
if(b0_15 && b1_19 && b2_2 && b3_15 && b4_12 && b5_12 && b6_2) {
matched = true;
pattern_id [start_indx + i]= 21;
}
if(b0_15 && b1_56 && b2_6 && b3_37 && b4_35) {
matched = true;
pattern_id [start_indx + i]= 22;
}
if(b0_21 && b1_22 && b2_19 && b3_16 && b4_5 && b5_16) {
matched = true;
pattern_id [start_indx + i]= 23;
}
if(b0_46 && b1_38 && b2_12 && b3_16 && b4_20 && b5_32 && b6_10) {
matched = true;
pattern_id [start_indx + i]= 24;
}
if(b0_24) {
matched = true;
pattern_id [start_indx + i]= 25;
}
if(b0_24 && b1_28 && b2_27 && b3_5 && b4_18) {
matched = true;
pattern_id [start_indx + i]= 26;
}
if(b0_24 && b1_31) {
matched = true;
pattern_id [start_indx + i]= 27;
}
if(b0_24 && b1_31 && b2_35 && b3_35 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 28;
}
if(b0_24 && b1_31 && b2_41) {
matched = true;
pattern_id [start_indx + i]= 29;
}
if(b0_24 && b1_12 && b2_1 && b3_36) {
matched = true;
pattern_id [start_indx + i]= 30;
}
if(b0_24 && b1_12 && b2_1 && b3_36 && b4_18) {
matched = true;
pattern_id [start_indx + i]= 31;
}
if(b0_24 && b1_44 && b2_20 && b3_1 && b4_25) {
matched = true;
pattern_id [start_indx + i]= 32;
}
if(b0_24 && b1_44 && b2_5 && b3_24) {
matched = true;
pattern_id [start_indx + i]= 33;
}
if(b0_24 && b1_41 && b2_37 && b3_16) {
matched = true;
pattern_id [start_indx + i]= 34;
}
if(b0_24 && b1_41 && b2_38 && b3_10 && b4_25 && b5_22) {
matched = true;
pattern_id [start_indx + i]= 35;
}
if(b0_24 && b1_41 && b2_13 && b3_33) {
matched = true;
pattern_id [start_indx + i]= 36;
}
if(b0_24 && b1_41 && b2_12 && b3_31 && b4_38) {
matched = true;
pattern_id [start_indx + i]= 37;
}
if(b0_24 && b1_41 && b2_1 && b3_36 && b4_18) {
matched = true;
pattern_id [start_indx + i]= 38;
}
if(b0_24 && b1_8 && b2_38 && b3_33) {
matched = true;
pattern_id [start_indx + i]= 39;
}
if(b0_24 && b1_8 && b2_11 && b3_18) {
matched = true;
pattern_id [start_indx + i]= 40;
}
if(b0_24 && b1_8 && b2_11 && b3_18 && b4_52 && b5_16 && b6_24) {
matched = true;
pattern_id [start_indx + i]= 41;
}
if(b0_24 && b1_62 && b2_5 && b3_33) {
matched = true;
pattern_id [start_indx + i]= 42;
}
if(b0_24 && b1_9 && b2_10 && b3_31 && b4_11) {
matched = true;
pattern_id [start_indx + i]= 43;
}
if(b0_24 && b1_9 && b2_10 && b3_7) {
matched = true;
pattern_id [start_indx + i]= 44;
}
if(b0_24 && b1_9 && b2_10 && b3_6) {
matched = true;
pattern_id [start_indx + i]= 45;
}
if(b0_24 && b1_16 && b2_37 && b3_16) {
matched = true;
pattern_id [start_indx + i]= 46;
}
if(b0_24 && b1_16 && b2_37 && b3_16 && b4_25) {
matched = true;
pattern_id [start_indx + i]= 47;
}
if(b0_24 && b1_16 && b2_37 && b3_40) {
matched = true;
pattern_id [start_indx + i]= 48;
}
if(b0_24 && b1_16 && b2_37 && b3_40 && b4_25) {
matched = true;
pattern_id [start_indx + i]= 49;
}
if(b0_24 && b1_47 && b2_13 && b3_14 && b4_23) {
matched = true;
pattern_id [start_indx + i]= 50;
}
if(b0_24 && b1_47 && b2_29 && b3_19) {
matched = true;
pattern_id [start_indx + i]= 51;
}
if(b0_24 && b1_47 && b2_1 && b3_36) {
matched = true;
pattern_id [start_indx + i]= 52;
}
if(b0_24 && b1_20 && b2_37) {
matched = true;
pattern_id [start_indx + i]= 53;
}
if(b0_24 && b1_34 && b2_12 && b3_10) {
matched = true;
pattern_id [start_indx + i]= 54;
}
if(b0_24 && b1_48 && b2_1 && b3_33 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 55;
}
if(b0_24 && b1_6 && b2_23 && b3_36) {
matched = true;
pattern_id [start_indx + i]= 56;
}
if(b0_24 && b1_6 && b2_23 && b3_36 && b4_25) {
matched = true;
pattern_id [start_indx + i]= 57;
}
if(b0_24 && b1_6 && b2_23 && b3_36 && b4_25 && b5_48 && b6_24) {
matched = true;
pattern_id [start_indx + i]= 58;
}
if(b0_24 && b1_6 && b2_17) {
matched = true;
pattern_id [start_indx + i]= 59;
}
if(b0_24 && b1_10 && b2_20) {
matched = true;
pattern_id [start_indx + i]= 60;
}
if(b0_24 && b1_10 && b2_23 && b3_9 && b4_17 && b5_17 && b6_5) {
matched = true;
pattern_id [start_indx + i]= 61;
}
if(b0_24 && b1_10 && b2_38 && b3_36) {
matched = true;
pattern_id [start_indx + i]= 62;
}
if(b0_24 && b1_10 && b2_29) {
matched = true;
pattern_id [start_indx + i]= 63;
}
if(b0_24 && b1_10 && b2_10) {
matched = true;
pattern_id [start_indx + i]= 64;
}
if(b0_24 && b1_38 && b2_7 && b3_33 && b4_25) {
matched = true;
pattern_id [start_indx + i]= 65;
}
if(b0_24 && b1_42 && b2_38 && b3_33) {
matched = true;
pattern_id [start_indx + i]= 66;
}
if(b0_24 && b1_42 && b2_38 && b3_54) {
matched = true;
pattern_id [start_indx + i]= 67;
}
if(b0_24 && b1_42 && b2_7 && b3_6 && b4_8 && b5_21 && b6_3) {
matched = true;
pattern_id [start_indx + i]= 68;
}
if(b0_24 && b1_51 && b2_5 && b3_36) {
matched = true;
pattern_id [start_indx + i]= 69;
}
if(b0_37) {
matched = true;
pattern_id [start_indx + i]= 70;
}
if(b0_37 && b1_28 && b2_40) {
matched = true;
pattern_id [start_indx + i]= 71;
}
if(b0_37 && b1_28 && b2_6 && b3_5) {
matched = true;
pattern_id [start_indx + i]= 72;
}
if(b0_37 && b1_45 && b2_35 && b3_27 && b4_15 && b5_21) {
matched = true;
pattern_id [start_indx + i]= 73;
}
if(b0_37 && b1_31 && b2_35 && b3_35 && b4_18) {
matched = true;
pattern_id [start_indx + i]= 74;
}
if(b0_37 && b1_31 && b2_35 && b3_44 && b4_18 && b5_27 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 75;
}
if(b0_37 && b1_31 && b2_29 && b3_18 && b4_7 && b5_40) {
matched = true;
pattern_id [start_indx + i]= 76;
}
if(b0_37 && b1_7 && b2_35 && b3_19 && b4_33 && b5_40 && b6_28) {
matched = true;
pattern_id [start_indx + i]= 77;
}
if(b0_37 && b1_14 && b2_6) {
matched = true;
pattern_id [start_indx + i]= 78;
}
if(b0_37 && b1_52) {
matched = true;
pattern_id [start_indx + i]= 79;
}
if(b0_37 && b1_52 && b2_35 && b3_41 && b4_17 && b5_23) {
matched = true;
pattern_id [start_indx + i]= 80;
}
if(b0_37 && b1_52 && b2_47 && b3_43 && b4_21) {
matched = true;
pattern_id [start_indx + i]= 81;
}
if(b0_37 && b1_52 && b2_33 && b3_43 && b4_8) {
matched = true;
pattern_id [start_indx + i]= 82;
}
if(b0_37 && b1_52 && b2_39 && b3_43) {
matched = true;
pattern_id [start_indx + i]= 83;
}
if(b0_37 && b1_19 && b2_14 && b3_46 && b4_43 && b5_31) {
matched = true;
pattern_id [start_indx + i]= 84;
}
if(b0_37 && b1_43 && b2_36 && b3_13 && b4_8 && b5_17 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 85;
}
if(b0_37 && b1_46 && b2_46 && b3_15 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 86;
}
if(b0_37 && b1_54 && b2_45 && b3_42 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 87;
}
if(b0_37 && b1_39 && b2_20 && b3_30 && b4_2) {
matched = true;
pattern_id [start_indx + i]= 88;
}
if(b0_37 && b1_12 && b2_44 && b3_37 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 89;
}
if(b0_37 && b1_12 && b2_37 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id [start_indx + i]= 90;
}
if(b0_37 && b1_12 && b2_33 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id [start_indx + i]= 91;
}
if(b0_37 && b1_12 && b2_13 && b3_9 && b4_42 && b5_8 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 92;
}
if(b0_37 && b1_12 && b2_13 && b3_32 && b4_18 && b5_23 && b6_3) {
matched = true;
pattern_id [start_indx + i]= 93;
}
if(b0_37 && b1_12 && b2_29 && b3_27 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 94;
}
if(b0_37 && b1_12 && b2_16 && b3_29 && b4_6 && b5_7 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 95;
}
if(b0_37 && b1_12 && b2_10 && b3_53 && b4_17 && b5_20 && b6_29) {
matched = true;
pattern_id [start_indx + i]= 96;
}
if(b0_37 && b1_44 && b2_20 && b3_29 && b4_30 && b5_28 && b6_10) {
matched = true;
pattern_id [start_indx + i]= 97;
}
if(b0_37 && b1_44 && b2_20 && b3_32 && b4_6) {
matched = true;
pattern_id [start_indx + i]= 98;
}
if(b0_37 && b1_44 && b2_5 && b3_24 && b4_24 && b5_14 && b6_7) {
matched = true;
pattern_id [start_indx + i]= 99;
}
if(b0_37 && b1_41 && b2_20 && b3_31 && b4_23 && b5_2 && b6_5) {
matched = true;
pattern_id [start_indx + i]= 100;
}
if(b0_37 && b1_41 && b2_34 && b3_27 && b4_3 && b5_14 && b6_17) {
matched = true;
pattern_id [start_indx + i]= 101;
}
if(b0_37 && b1_41 && b2_1 && b3_8) {
matched = true;
pattern_id [start_indx + i]= 102;
}
if(b0_37 && b1_49 && b2_44 && b3_37 && b4_36 && b5_35 && b6_13) {
matched = true;
pattern_id [start_indx + i]= 103;
}
if(b0_37 && b1_49 && b2_15 && b3_32 && b4_6 && b5_33 && b6_10) {
matched = true;
pattern_id [start_indx + i]= 104;
}
if(b0_37 && b1_49 && b2_42 && b3_44) {
matched = true;
pattern_id [start_indx + i]= 105;
}
if(b0_37 && b1_49 && b2_5 && b3_33 && b4_22 && b5_14 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 106;
}
if(b0_37 && b1_49 && b2_38 && b3_32 && b4_4) {
matched = true;
pattern_id [start_indx + i]= 107;
}
if(b0_37 && b1_49 && b2_12 && b3_29 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 108;
}
if(b0_37 && b1_40 && b2_5 && b3_24 && b4_9 && b5_13 && b6_6) {
matched = true;
pattern_id [start_indx + i]= 109;
}
if(b0_37 && b1_40 && b2_10 && b3_36 && b4_18 && b5_23 && b6_3) {
matched = true;
pattern_id [start_indx + i]= 110;
}
if(b0_37 && b1_9 && b2_5 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id [start_indx + i]= 111;
}
if(b0_37 && b1_9 && b2_10 && b3_19 && b4_7 && b5_13 && b6_10) {
matched = true;
pattern_id [start_indx + i]= 112;
}
if(b0_37 && b1_16 && b2_15 && b3_16 && b4_5) {
matched = true;
pattern_id [start_indx + i]= 113;
}
if(b0_37 && b1_16 && b2_13 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id [start_indx + i]= 114;
}
if(b0_37 && b1_16 && b2_13 && b3_35 && b4_23 && b5_16 && b6_10) {
matched = true;
pattern_id [start_indx + i]= 115;
}
if(b0_37 && b1_16 && b2_13 && b3_32 && b4_5 && b5_36) {
matched = true;
pattern_id [start_indx + i]= 116;
}
if(b0_37 && b1_16 && b2_12 && b3_24 && b4_38 && b5_23) {
matched = true;
pattern_id [start_indx + i]= 117;
}
if(b0_37 && b1_17 && b2_1 && b3_8) {
matched = true;
pattern_id [start_indx + i]= 118;
}
if(b0_37 && b1_20 && b2_42 && b3_17 && b4_10 && b5_30 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 119;
}
if(b0_37 && b1_34 && b2_20 && b3_24 && b4_18 && b5_14 && b6_7) {
matched = true;
pattern_id [start_indx + i]= 120;
}
if(b0_37 && b1_34 && b2_38 && b3_35 && b4_56 && b5_23 && b6_30) {
matched = true;
pattern_id [start_indx + i]= 121;
}
if(b0_37 && b1_34 && b2_12 && b3_10 && b4_44) {
matched = true;
pattern_id [start_indx + i]= 122;
}
if(b0_37 && b1_34 && b2_1 && b3_10 && b4_8 && b5_21 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 123;
}
if(b0_37 && b1_48 && b2_42 && b3_6 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 124;
}
if(b0_37 && b1_6 && b2_42 && b3_7 && b4_11 && b5_36) {
matched = true;
pattern_id [start_indx + i]= 125;
}
if(b0_37 && b1_6 && b2_23 && b3_33) {
matched = true;
pattern_id [start_indx + i]= 126;
}
if(b0_37 && b1_6 && b2_12 && b3_32 && b4_5) {
matched = true;
pattern_id [start_indx + i]= 127;
}
if(b0_37 && b1_6 && b2_16 && b3_9 && b4_30 && b5_20) {
matched = true;
pattern_id [start_indx + i]= 128;
}
if(b0_37 && b1_10 && b2_42 && b3_44) {
matched = true;
pattern_id [start_indx + i]= 129;
}
if(b0_37 && b1_10 && b2_8 && b3_32 && b4_6) {
matched = true;
pattern_id [start_indx + i]= 130;
}
if(b0_37 && b1_10 && b2_29 && b3_55 && b4_13 && b5_41) {
matched = true;
pattern_id [start_indx + i]= 131;
}
if(b0_37 && b1_10 && b2_1 && b3_8) {
matched = true;
pattern_id [start_indx + i]= 132;
}
if(b0_37 && b1_38 && b2_35 && b3_29 && b4_9 && b5_7) {
matched = true;
pattern_id [start_indx + i]= 133;
}
if(b0_37 && b1_38 && b2_41 && b3_55 && b4_30 && b5_41) {
matched = true;
pattern_id [start_indx + i]= 134;
}
if(b0_37 && b1_38 && b2_42 && b3_16 && b4_7 && b5_21 && b6_7) {
matched = true;
pattern_id [start_indx + i]= 135;
}
if(b0_37 && b1_38 && b2_42 && b3_1 && b4_41 && b5_23 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 136;
}
if(b0_37 && b1_38 && b2_5 && b3_1 && b4_10 && b5_19 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 137;
}
if(b0_37 && b1_38 && b2_10 && b3_16 && b4_5 && b5_36) {
matched = true;
pattern_id [start_indx + i]= 138;
}
if(b0_37 && b1_38 && b2_7 && b3_29) {
matched = true;
pattern_id [start_indx + i]= 139;
}
if(b0_37 && b1_13 && b2_15 && b3_32 && b4_6) {
matched = true;
pattern_id [start_indx + i]= 140;
}
if(b0_37 && b1_53 && b2_51 && b3_35 && b4_6 && b5_17 && b6_26) {
matched = true;
pattern_id [start_indx + i]= 141;
}
if(b0_37 && b1_53 && b2_17 && b3_35 && b4_6 && b5_17 && b6_26) {
matched = true;
pattern_id [start_indx + i]= 142;
}
if(b0_37 && b1_53 && b2_29 && b3_10 && b4_8 && b5_17 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 143;
}
if(b0_37 && b1_70 && b2_18) {
matched = true;
pattern_id [start_indx + i]= 144;
}
if(b0_37 && b1_42 && b2_16 && b3_16 && b4_23) {
matched = true;
pattern_id [start_indx + i]= 145;
}
if(b0_37 && b1_35 && b2_41) {
matched = true;
pattern_id [start_indx + i]= 146;
}
if(b0_37 && b1_51 && b2_1 && b3_8) {
matched = true;
pattern_id [start_indx + i]= 147;
}
if(b0_37 && b1_50 && b2_33 && b3_1 && b4_23) {
matched = true;
pattern_id [start_indx + i]= 148;
}
if(b0_37 && b1_50 && b2_16 && b3_9 && b4_29 && b5_17) {
matched = true;
pattern_id [start_indx + i]= 149;
}
if(b0_23) {
matched = true;
pattern_id [start_indx + i]= 150;
}
if(b0_23 && b1_7) {
matched = true;
pattern_id [start_indx + i]= 151;
}
if(b0_23 && b1_12 && b2_36 && b3_56 && b4_11 && b5_47) {
matched = true;
pattern_id [start_indx + i]= 152;
}
if(b0_13) {
matched = true;
pattern_id [start_indx + i]= 153;
}
if(b0_13 && b1_14 && b2_9 && b3_12) {
matched = true;
pattern_id [start_indx + i]= 154;
}
if(b0_51 && b1_7 && b2_6) {
matched = true;
pattern_id [start_indx + i]= 155;
}
if(b0_51 && b1_14 && b2_6 && b3_20 && b4_46 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 156;
}
if(b0_63 && b1_7 && b2_27) {
matched = true;
pattern_id [start_indx + i]= 157;
}
if(b0_63 && b1_7 && b2_55) {
matched = true;
pattern_id [start_indx + i]= 158;
}
if(b0_35 && b1_7 && b2_9) {
matched = true;
pattern_id [start_indx + i]= 159;
}
if(b0_35 && b1_36 && b2_34 && b3_27 && b4_22 && b5_17 && b6_5) {
matched = true;
pattern_id [start_indx + i]= 160;
}
if(b0_27 && b1_23 && b2_6 && b3_4) {
matched = true;
pattern_id [start_indx + i]= 161;
}
if(b0_72 && b1_66 && b2_63) {
matched = true;
pattern_id [start_indx + i]= 162;
}
if(b0_57 && b1_59) {
matched = true;
pattern_id [start_indx + i]= 163;
}
if(b0_57 && b1_52 && b2_11 && b3_31 && b4_11) {
matched = true;
pattern_id [start_indx + i]= 164;
}
if(b0_57 && b1_15 && b2_21 && b3_53 && b4_39 && b5_45 && b6_22) {
matched = true;
pattern_id [start_indx + i]= 165;
}
if(b0_57 && b1_37) {
matched = true;
pattern_id [start_indx + i]= 166;
}
if(b0_57 && b1_16 && b2_33 && b3_7 && b4_8 && b5_15 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 167;
}
if(b0_67 && b1_7 && b2_24 && b3_43 && b4_4 && b5_18) {
matched = true;
pattern_id [start_indx + i]= 168;
}
if(b0_67 && b1_65) {
matched = true;
pattern_id [start_indx + i]= 169;
}
if(b0_20) {
matched = true;
pattern_id [start_indx + i]= 170;
}
if(b0_44 && b1_42 && b2_29 && b3_38) {
matched = true;
pattern_id [start_indx + i]= 171;
}
if(b0_22) {
matched = true;
pattern_id [start_indx + i]= 172;
}
if(b0_22 && b1_25) {
matched = true;
pattern_id [start_indx + i]= 173;
}
if(b0_31) {
matched = true;
pattern_id [start_indx + i]= 174;
}
if(b0_31 && b1_43 && b2_25 && b3_3) {
matched = true;
pattern_id [start_indx + i]= 175;
}
if(b0_31 && b1_54 && b2_31 && b3_25) {
matched = true;
pattern_id [start_indx + i]= 176;
}
if(b0_31 && b1_54 && b2_3 && b3_21) {
matched = true;
pattern_id [start_indx + i]= 177;
}
if(b0_31 && b1_54 && b2_3 && b3_21 && b4_1 && b5_43) {
matched = true;
pattern_id [start_indx + i]= 178;
}
if(b0_31 && b1_57 && b2_26 && b3_47) {
matched = true;
pattern_id [start_indx + i]= 179;
}
if(b0_31 && b1_34 && b2_20 && b3_24 && b4_15 && b5_2) {
matched = true;
pattern_id [start_indx + i]= 180;
}
if(b0_45 && b1_27 && b2_32 && b3_39 && b4_31 && b5_29) {
matched = true;
pattern_id [start_indx + i]= 181;
}
if(b0_45 && b1_55) {
matched = true;
pattern_id [start_indx + i]= 182;
}
if(b0_45 && b1_37 && b2_32 && b3_22 && b4_31 && b5_49) {
matched = true;
pattern_id [start_indx + i]= 183;
}
if(b0_25 && b1_30 && b2_25 && b3_4) {
matched = true;
pattern_id [start_indx + i]= 184;
}
if(b0_25 && b1_30 && b2_3 && b3_46) {
matched = true;
pattern_id [start_indx + i]= 185;
}
if(b0_25 && b1_27 && b2_25) {
matched = true;
pattern_id [start_indx + i]= 186;
}
if(b0_25 && b1_55 && b2_24) {
matched = true;
pattern_id [start_indx + i]= 187;
}
if(b0_25 && b1_15 && b2_14 && b3_42 && b4_39 && b5_45 && b6_22) {
matched = true;
pattern_id [start_indx + i]= 188;
}
if(b0_25 && b1_15 && b2_3 && b3_49) {
matched = true;
pattern_id [start_indx + i]= 189;
}
if(b0_25 && b1_37 && b2_2 && b3_46 && b4_34 && b5_34) {
matched = true;
pattern_id [start_indx + i]= 190;
}
if(b0_25 && b1_26 && b2_24) {
matched = true;
pattern_id [start_indx + i]= 191;
}
if(b0_25 && b1_26 && b2_24 && b3_4 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 192;
}
if(b0_49 && b1_27 && b2_25 && b3_21) {
matched = true;
pattern_id [start_indx + i]= 193;
}
if(b0_49 && b1_27 && b2_25 && b3_21 && b4_34 && b5_34) {
matched = true;
pattern_id [start_indx + i]= 194;
}
if(b0_49 && b1_27 && b2_25 && b3_21 && b4_34 && b5_34 && b6_9) {
matched = true;
pattern_id [start_indx + i]= 195;
}
if(b0_49 && b1_27 && b2_52 && b3_34 && b4_16 && b5_50) {
matched = true;
pattern_id [start_indx + i]= 196;
}
if(b0_48 && b1_4 && b2_45 && b3_42) {
matched = true;
pattern_id [start_indx + i]= 197;
}
if(b0_48 && b1_58 && b2_32 && b3_51 && b4_31 && b5_44 && b6_21) {
matched = true;
pattern_id [start_indx + i]= 198;
}
if(b0_48 && b1_58 && b2_3 && b3_42) {
matched = true;
pattern_id [start_indx + i]= 199;
}
if(b0_48 && b1_10 && b2_16 && b3_9 && b4_7) {
matched = true;
pattern_id [start_indx + i]= 200;
}
if(b0_1 && b1_1) {
matched = true;
pattern_id [start_indx + i]= 201;
}
if(b0_1 && b1_27 && b2_26 && b3_48 && b4_40) {
matched = true;
pattern_id [start_indx + i]= 202;
}
if(b0_1 && b1_29 && b2_14 && b3_28) {
matched = true;
pattern_id [start_indx + i]= 203;
}
if(b0_1 && b1_37 && b2_31 && b3_51 && b4_44 && b5_42 && b6_19) {
matched = true;
pattern_id [start_indx + i]= 204;
}
if(b0_1 && b1_4 && b2_3 && b3_3 && b4_1) {
matched = true;
pattern_id [start_indx + i]= 205;
}
if(b0_1 && b1_10 && b2_20 && b3_19) {
matched = true;
pattern_id [start_indx + i]= 206;
}
if(b0_28 && b1_27 && b2_26) {
matched = true;
pattern_id [start_indx + i]= 207;
}
if(b0_28 && b1_27 && b2_26 && b3_4) {
matched = true;
pattern_id [start_indx + i]= 208;
}
if(b0_28 && b1_27 && b2_26 && b3_4 && b4_24 && b5_36) {
matched = true;
pattern_id [start_indx + i]= 209;
}
if(b0_28 && b1_46 && b2_26) {
matched = true;
pattern_id [start_indx + i]= 210;
}
if(b0_28 && b1_15 && b2_21 && b3_30 && b4_12 && b5_34 && b6_16) {
matched = true;
pattern_id [start_indx + i]= 211;
}
if(b0_28 && b1_9 && b2_6 && b3_32 && b4_5) {
matched = true;
pattern_id [start_indx + i]= 212;
}
if(b0_32 && b1_27 && b2_32 && b3_28) {
matched = true;
pattern_id [start_indx + i]= 213;
}
if(b0_32 && b1_27 && b2_32 && b3_28 && b4_24 && b5_27 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 214;
}
if(b0_32 && b1_27 && b2_25 && b3_3) {
matched = true;
pattern_id [start_indx + i]= 215;
}
if(b0_32 && b1_27 && b2_25 && b3_25) {
matched = true;
pattern_id [start_indx + i]= 216;
}
if(b0_32 && b1_19 && b2_57 && b3_56 && b4_53) {
matched = true;
pattern_id [start_indx + i]= 217;
}
if(b0_32 && b1_4 && b2_26 && b3_25 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 218;
}
if(b0_32 && b1_4 && b2_26 && b3_25 && b4_24 && b5_31) {
matched = true;
pattern_id [start_indx + i]= 219;
}
if(b0_42 && b1_46 && b2_24 && b3_21 && b4_26 && b5_24) {
matched = true;
pattern_id [start_indx + i]= 220;
}
if(b0_42 && b1_46 && b2_57 && b3_45 && b4_34 && b5_34) {
matched = true;
pattern_id [start_indx + i]= 221;
}
if(b0_50 && b1_15 && b2_43 && b3_42 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 222;
}
if(b0_70 && b1_10 && b2_5 && b3_32 && b4_37) {
matched = true;
pattern_id [start_indx + i]= 223;
}
if(b0_38 && b1_29 && b2_28 && b3_34) {
matched = true;
pattern_id [start_indx + i]= 224;
}
if(b0_38 && b1_15 && b2_22 && b3_23) {
matched = true;
pattern_id [start_indx + i]= 225;
}
if(b0_38 && b1_15 && b2_22 && b3_23 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 226;
}
if(b0_38 && b1_15 && b2_30 && b3_45 && b4_1) {
matched = true;
pattern_id [start_indx + i]= 227;
}
if(b0_38 && b1_3 && b2_46 && b3_30) {
matched = true;
pattern_id [start_indx + i]= 228;
}
if(b0_29 && b1_36 && b2_26 && b3_51) {
matched = true;
pattern_id [start_indx + i]= 229;
}
if(b0_29 && b1_32 && b2_22 && b3_3 && b4_12) {
matched = true;
pattern_id [start_indx + i]= 230;
}
if(b0_29 && b1_32 && b2_24) {
matched = true;
pattern_id [start_indx + i]= 231;
}
if(b0_29 && b1_32 && b2_24 && b3_4 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 232;
}
if(b0_29 && b1_32 && b2_24 && b3_4 && b4_18) {
matched = true;
pattern_id [start_indx + i]= 233;
}
if(b0_29 && b1_15 && b2_24 && b3_21) {
matched = true;
pattern_id [start_indx + i]= 234;
}
if(b0_29 && b1_15 && b2_57 && b3_21) {
matched = true;
pattern_id [start_indx + i]= 235;
}
if(b0_29 && b1_3 && b2_30 && b3_4) {
matched = true;
pattern_id [start_indx + i]= 236;
}
if(b0_29 && b1_63) {
matched = true;
pattern_id [start_indx + i]= 237;
}
if(b0_30 && b1_29 && b2_22 && b3_23 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 238;
}
if(b0_30 && b1_43 && b2_28 && b3_34) {
matched = true;
pattern_id [start_indx + i]= 239;
}
if(b0_30 && b1_57 && b2_47 && b3_34 && b4_45) {
matched = true;
pattern_id [start_indx + i]= 240;
}
if(b0_14 && b1_30 && b2_45 && b3_34 && b4_31 && b5_18 && b6_15) {
matched = true;
pattern_id [start_indx + i]= 241;
}
if(b0_14 && b1_30 && b2_28 && b3_22) {
matched = true;
pattern_id [start_indx + i]= 242;
}
if(b0_14 && b1_30 && b2_28 && b3_22 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 243;
}
if(b0_14 && b1_30 && b2_26 && b3_20 && b4_46 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 244;
}
if(b0_14 && b1_1 && b2_45 && b3_16 && b4_5 && b5_48) {
matched = true;
pattern_id [start_indx + i]= 245;
}
if(b0_14 && b1_32) {
matched = true;
pattern_id [start_indx + i]= 246;
}
if(b0_14 && b1_15 && b2_14 && b3_13) {
matched = true;
pattern_id [start_indx + i]= 247;
}
if(b0_14 && b1_15 && b2_28 && b3_34) {
matched = true;
pattern_id [start_indx + i]= 248;
}
if(b0_14 && b1_15 && b2_28 && b3_34 && b4_20 && b5_20) {
matched = true;
pattern_id [start_indx + i]= 249;
}
if(b0_14 && b1_37 && b2_43 && b3_39 && b4_32 && b5_29 && b6_11) {
matched = true;
pattern_id [start_indx + i]= 250;
}
if(b0_14 && b1_57 && b2_26) {
matched = true;
pattern_id [start_indx + i]= 251;
}
if(b0_14 && b1_26 && b2_24) {
matched = true;
pattern_id [start_indx + i]= 252;
}
if(b0_26 && b1_27 && b2_14 && b3_46 && b4_32 && b5_34) {
matched = true;
pattern_id [start_indx + i]= 253;
}
if(b0_26 && b1_27 && b2_28 && b3_34) {
matched = true;
pattern_id [start_indx + i]= 254;
}
if(b0_26 && b1_27 && b2_26 && b3_2) {
matched = true;
pattern_id [start_indx + i]= 255;
}
if(b0_26 && b1_33 && b2_21 && b3_4 && b4_4) {
matched = true;
pattern_id [start_indx + i]= 256;
}
if(b0_26 && b1_29 && b2_48 && b3_52) {
matched = true;
pattern_id [start_indx + i]= 257;
}
if(b0_26 && b1_55 && b2_24) {
matched = true;
pattern_id [start_indx + i]= 258;
}
if(b0_26 && b1_55 && b2_24 && b3_45 && b4_37) {
matched = true;
pattern_id [start_indx + i]= 259;
}
if(b0_26 && b1_46 && b2_48 && b3_2) {
matched = true;
pattern_id [start_indx + i]= 260;
}
if(b0_26 && b1_46 && b2_48 && b3_2 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 261;
}
if(b0_26 && b1_46 && b2_26 && b3_3) {
matched = true;
pattern_id [start_indx + i]= 262;
}
if(b0_26 && b1_60 && b2_28) {
matched = true;
pattern_id [start_indx + i]= 263;
}
if(b0_26 && b1_3 && b2_2 && b3_34) {
matched = true;
pattern_id [start_indx + i]= 264;
}
if(b0_26 && b1_8 && b2_15 && b3_18 && b4_33 && b5_23 && b6_27) {
matched = true;
pattern_id [start_indx + i]= 265;
}
if(b0_12 && b1_27 && b2_32 && b3_2 && b4_28 && b5_25 && b6_9) {
matched = true;
pattern_id [start_indx + i]= 266;
}
if(b0_12 && b1_29 && b2_3 && b3_44 && b4_46 && b5_27 && b6_18) {
matched = true;
pattern_id [start_indx + i]= 267;
}
if(b0_12 && b1_29 && b2_26 && b3_21) {
matched = true;
pattern_id [start_indx + i]= 268;
}
if(b0_12 && b1_3 && b2_49 && b3_38) {
matched = true;
pattern_id [start_indx + i]= 269;
}
if(b0_12 && b1_4) {
matched = true;
pattern_id [start_indx + i]= 270;
}
if(b0_12 && b1_4 && b2_32 && b3_34) {
matched = true;
pattern_id [start_indx + i]= 271;
}
if(b0_12 && b1_4 && b2_32 && b3_34 && b4_47 && b5_29) {
matched = true;
pattern_id [start_indx + i]= 272;
}
if(b0_12 && b1_4 && b2_31 && b3_2) {
matched = true;
pattern_id [start_indx + i]= 273;
}
if(b0_12 && b1_4 && b2_31 && b3_50) {
matched = true;
pattern_id [start_indx + i]= 274;
}
if(b0_12 && b1_39 && b2_28 && b3_28 && b4_31 && b5_9) {
matched = true;
pattern_id [start_indx + i]= 275;
}
if(b0_12 && b1_39 && b2_28 && b3_34) {
matched = true;
pattern_id [start_indx + i]= 276;
}
if(b0_12 && b1_13 && b2_12 && b3_9 && b4_9 && b5_9) {
matched = true;
pattern_id [start_indx + i]= 277;
}
if(b0_55 && b1_15 && b2_3) {
matched = true;
pattern_id [start_indx + i]= 278;
}
if(b0_55 && b1_15 && b2_58 && b3_48 && b4_40 && b5_18 && b6_20) {
matched = true;
pattern_id [start_indx + i]= 279;
}
if(b0_55 && b1_37 && b2_32 && b3_48 && b4_39) {
matched = true;
pattern_id [start_indx + i]= 280;
}
if(b0_3 && b1_29 && b2_24 && b3_15) {
matched = true;
pattern_id [start_indx + i]= 281;
}
if(b0_3 && b1_3 && b2_2 && b3_2) {
matched = true;
pattern_id [start_indx + i]= 282;
}
if(b0_3 && b1_3 && b2_2 && b3_2 && b4_20) {
matched = true;
pattern_id [start_indx + i]= 283;
}
if(b0_3 && b1_3 && b2_45 && b3_4) {
matched = true;
pattern_id [start_indx + i]= 284;
}
if(b0_56 && b1_37 && b2_48 && b3_49) {
matched = true;
pattern_id [start_indx + i]= 285;
}
if(b0_61 && b1_29 && b2_14 && b3_28 && b4_31 && b5_9) {
matched = true;
pattern_id [start_indx + i]= 286;
}
if(b0_54 && b1_1 && b2_36 && b3_28) {
matched = true;
pattern_id [start_indx + i]= 287;
}
if(b0_54 && b1_27 && b2_52 && b3_48 && b4_40 && b5_39 && b6_18) {
matched = true;
pattern_id [start_indx + i]= 288;
}
if(b0_54 && b1_55 && b2_54 && b3_28) {
matched = true;
pattern_id [start_indx + i]= 289;
}
if(b0_54 && b1_4 && b2_14 && b3_28) {
matched = true;
pattern_id [start_indx + i]= 290;
}
if(b0_59 && b1_55 && b2_28 && b3_13) {
matched = true;
pattern_id [start_indx + i]= 291;
}
if(b0_36 && b1_7 && b2_6 && b3_5 && b4_4 && b5_41) {
matched = true;
pattern_id [start_indx + i]= 292;
}
if(b0_36 && b1_37 && b2_25 && b3_28) {
matched = true;
pattern_id [start_indx + i]= 293;
}
if(b0_18 && b1_44 && b2_12 && b3_57 && b4_5 && b5_52) {
matched = true;
pattern_id [start_indx + i]= 294;
}
if(b0_18 && b1_20 && b2_5 && b3_17 && b4_10) {
matched = true;
pattern_id [start_indx + i]= 295;
}
if(b0_18 && b1_20 && b2_10 && b3_18 && b4_7) {
matched = true;
pattern_id [start_indx + i]= 296;
}
if(b0_71 && b1_13 && b2_1 && b3_1 && b4_50) {
matched = true;
pattern_id [start_indx + i]= 297;
}
if(b0_40 && b1_12 && b2_10 && b3_4) {
matched = true;
pattern_id [start_indx + i]= 298;
}
if(b0_40 && b1_49 && b2_35 && b3_35) {
matched = true;
pattern_id [start_indx + i]= 299;
}
if(b0_40 && b1_20 && b2_5 && b3_18 && b4_42 && b5_17) {
matched = true;
pattern_id [start_indx + i]= 300;
}
if(b0_40 && b1_34 && b2_37 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 301;
}
if(b0_40 && b1_10 && b2_42 && b3_16 && b4_5 && b5_13) {
matched = true;
pattern_id [start_indx + i]= 302;
}
if(b0_40 && b1_38 && b2_10 && b3_26 && b4_23 && b5_13 && b6_24) {
matched = true;
pattern_id [start_indx + i]= 303;
}
if(b0_9 && b1_11 && b2_9 && b3_8 && b4_6 && b5_6) {
matched = true;
pattern_id [start_indx + i]= 304;
}
if(b0_9 && b1_12 && b2_37 && b3_9 && b4_17 && b5_41) {
matched = true;
pattern_id [start_indx + i]= 305;
}
if(b0_9 && b1_16 && b2_37 && b3_43) {
matched = true;
pattern_id [start_indx + i]= 306;
}
if(b0_9 && b1_16 && b2_42 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 307;
}
if(b0_9 && b1_48 && b2_1 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 308;
}
if(b0_9 && b1_2 && b2_53 && b3_18 && b4_27 && b5_17) {
matched = true;
pattern_id [start_indx + i]= 309;
}
if(b0_33 && b1_10 && b2_16 && b3_9 && b4_7 && b5_24) {
matched = true;
pattern_id [start_indx + i]= 310;
}
if(b0_33 && b1_35 && b2_29 && b3_24) {
matched = true;
pattern_id [start_indx + i]= 311;
}
if(b0_11 && b1_16 && b2_15 && b3_11 && b4_10 && b5_10) {
matched = true;
pattern_id [start_indx + i]= 312;
}
if(b0_11 && b1_10 && b2_5 && b3_10 && b4_8 && b5_8) {
matched = true;
pattern_id [start_indx + i]= 313;
}
if(b0_11 && b1_13 && b2_29 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 314;
}
if(b0_11 && b1_13 && b2_29 && b3_20 && b4_19 && b5_18 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 315;
}
if(b0_11 && b1_13 && b2_29 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 316;
}
if(b0_16 && b1_15 && b2_16 && b3_16 && b4_13 && b5_13) {
matched = true;
pattern_id [start_indx + i]= 317;
}
if(b0_16 && b1_10 && b2_20 && b3_24 && b4_5 && b5_24) {
matched = true;
pattern_id [start_indx + i]= 318;
}
if(b0_2 && b1_12 && b2_11 && b3_5 && b4_7) {
matched = true;
pattern_id [start_indx + i]= 319;
}
if(b0_2 && b1_16 && b2_6 && b3_5) {
matched = true;
pattern_id [start_indx + i]= 320;
}
if(b0_2 && b1_2 && b2_1 && b3_1) {
matched = true;
pattern_id [start_indx + i]= 321;
}
if(b0_2 && b1_2 && b2_1 && b3_1 && b4_33 && b5_48 && b6_24) {
matched = true;
pattern_id [start_indx + i]= 322;
}
if(b0_58 && b1_9 && b2_20 && b3_17 && b4_10) {
matched = true;
pattern_id [start_indx + i]= 323;
}
if(b0_58 && b1_6 && b2_10 && b3_57 && b4_27) {
matched = true;
pattern_id [start_indx + i]= 324;
}
if(b0_60) {
matched = true;
pattern_id [start_indx + i]= 325;
}
if(b0_17 && b1_16 && b2_17 && b3_14 && b4_14 && b5_13) {
matched = true;
pattern_id [start_indx + i]= 326;
}
if(b0_8 && b1_18 && b2_4) {
matched = true;
pattern_id [start_indx + i]= 327;
}
if(b0_8 && b1_18 && b2_4 && b3_16 && b4_15 && b5_14 && b6_3) {
matched = true;
pattern_id [start_indx + i]= 328;
}
if(b0_8 && b1_16 && b2_1 && b3_1 && b4_8) {
matched = true;
pattern_id [start_indx + i]= 329;
}
if(b0_8 && b1_2 && b2_34 && b3_27 && b4_42 && b5_41 && b6_18) {
matched = true;
pattern_id [start_indx + i]= 330;
}
if(b0_8 && b1_10 && b2_8 && b3_7 && b4_4 && b5_5) {
matched = true;
pattern_id [start_indx + i]= 331;
}
if(b0_8 && b1_38 && b2_40 && b3_37 && b4_4 && b5_26 && b6_3) {
matched = true;
pattern_id [start_indx + i]= 332;
}
if(b0_66 && b1_2 && b2_60 && b3_27 && b4_11 && b5_30 && b6_25) {
matched = true;
pattern_id [start_indx + i]= 333;
}
if(b0_43 && b1_41 && b2_35 && b3_18 && b4_27 && b5_13) {
matched = true;
pattern_id [start_indx + i]= 334;
}
if(b0_43 && b1_8 && b2_10 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 335;
}
if(b0_64 && b1_6 && b2_53) {
matched = true;
pattern_id [start_indx + i]= 336;
}
if(b0_19 && b1_16 && b2_13 && b3_19) {
matched = true;
pattern_id [start_indx + i]= 337;
}
if(b0_19 && b1_2 && b2_13 && b3_19) {
matched = true;
pattern_id [start_indx + i]= 338;
}
if(b0_19 && b1_2 && b2_1 && b3_1 && b4_50) {
matched = true;
pattern_id [start_indx + i]= 339;
}
if(b0_19 && b1_10 && b2_5 && b3_17 && b4_8 && b5_17 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 340;
}
if(b0_19 && b1_38 && b2_6 && b3_43) {
matched = true;
pattern_id [start_indx + i]= 341;
}
if(b0_19 && b1_53 && b2_44 && b3_14 && b4_33 && b5_21) {
matched = true;
pattern_id [start_indx + i]= 342;
}
if(b0_7 && b1_7 && b2_6 && b3_1) {
matched = true;
pattern_id [start_indx + i]= 343;
}
if(b0_7 && b1_8 && b2_7 && b3_1) {
matched = true;
pattern_id [start_indx + i]= 344;
}
if(b0_7 && b1_34 && b2_34 && b3_7 && b4_29 && b5_28 && b6_10) {
matched = true;
pattern_id [start_indx + i]= 345;
}
if(b0_7 && b1_2 && b2_12 && b3_1) {
matched = true;
pattern_id [start_indx + i]= 346;
}
if(b0_10 && b1_12 && b2_10 && b3_9 && b4_7 && b5_7) {
matched = true;
pattern_id [start_indx + i]= 347;
}
if(b0_10 && b1_8 && b2_20 && b3_7 && b4_3 && b5_16) {
matched = true;
pattern_id [start_indx + i]= 348;
}
if(b0_10 && b1_8 && b2_17 && b3_18 && b4_3 && b5_17 && b6_9) {
matched = true;
pattern_id [start_indx + i]= 349;
}
if(b0_10 && b1_8 && b2_13 && b3_10 && b4_14 && b5_13) {
matched = true;
pattern_id [start_indx + i]= 350;
}
if(b0_10 && b1_8 && b2_13 && b3_10 && b4_17 && b5_8 && b6_5) {
matched = true;
pattern_id [start_indx + i]= 351;
}
if(b0_10 && b1_16 && b2_15 && b3_11 && b4_10 && b5_10) {
matched = true;
pattern_id [start_indx + i]= 352;
}
if(b0_10 && b1_17 && b2_5 && b3_14 && b4_11 && b5_11) {
matched = true;
pattern_id [start_indx + i]= 353;
}
if(b0_10 && b1_34 && b2_1) {
matched = true;
pattern_id [start_indx + i]= 354;
}
if(b0_10 && b1_48 && b2_20 && b3_31 && b4_10 && b5_41) {
matched = true;
pattern_id [start_indx + i]= 355;
}
if(b0_10 && b1_13 && b2_16 && b3_18 && b4_8 && b5_15 && b6_4) {
matched = true;
pattern_id [start_indx + i]= 356;
}
if(b0_10 && b1_64 && b2_13 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 357;
}
if(b0_62 && b1_10 && b2_59) {
matched = true;
pattern_id [start_indx + i]= 358;
}
if(b0_52 && b1_49 && b2_29 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 359;
}
if(b0_52 && b1_16 && b2_37 && b3_43) {
matched = true;
pattern_id [start_indx + i]= 360;
}
if(b0_52 && b1_48 && b2_20 && b3_31 && b4_10) {
matched = true;
pattern_id [start_indx + i]= 361;
}
if(b0_34 && b1_8 && b2_16 && b3_32 && b4_33 && b5_33 && b6_12) {
matched = true;
pattern_id [start_indx + i]= 362;
}
if(b0_34 && b1_10 && b2_33 && b3_26) {
matched = true;
pattern_id [start_indx + i]= 363;
}
if(b0_6 && b1_7 && b2_6 && b3_6 && b4_4 && b5_3) {
matched = true;
pattern_id [start_indx + i]= 364;
}
if(b0_6 && b1_12 && b2_13 && b3_11) {
matched = true;
pattern_id [start_indx + i]= 365;
}
if(b0_6 && b1_9 && b2_6 && b3_5 && b4_5 && b5_4) {
matched = true;
pattern_id [start_indx + i]= 366;
}
if(b0_6 && b1_38 && b2_23 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id [start_indx + i]= 367;
}
if(b0_5 && b1_6 && b2_5 && b3_5 && b4_3 && b5_2) {
matched = true;
pattern_id [start_indx + i]= 368;
}
if(b0_4 && b1_7 && b2_6 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 369;
}
if(b0_4 && b1_7 && b2_6 && b3_4 && b4_4 && b5_31 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 370;
}
if(b0_4 && b1_7 && b2_6 && b3_4 && b4_4 && b5_19 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 371;
}
if(b0_4 && b1_7 && b2_6 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 372;
}
if(b0_4 && b1_7 && b2_6 && b3_20 && b4_32) {
matched = true;
pattern_id [start_indx + i]= 373;
}
if(b0_4 && b1_7 && b2_6 && b3_20 && b4_34) {
matched = true;
pattern_id [start_indx + i]= 374;
}
if(b0_4 && b1_7 && b2_18 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 375;
}
if(b0_4 && b1_7 && b2_27 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 376;
}
if(b0_4 && b1_7 && b2_27 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 377;
}
if(b0_4 && b1_7 && b2_9 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 378;
}
if(b0_4 && b1_7 && b2_4 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 379;
}
if(b0_4 && b1_7 && b2_4 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 380;
}
if(b0_4 && b1_7 && b2_51 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 381;
}
if(b0_4 && b1_7 && b2_51 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 382;
}
if(b0_4 && b1_7 && b2_55 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 383;
}
if(b0_4 && b1_7 && b2_56 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 384;
}
if(b0_4 && b1_7 && b2_32 && b3_20 && b4_18 && b5_23 && b6_3) {
matched = true;
pattern_id [start_indx + i]= 385;
}
if(b0_4 && b1_7 && b2_32 && b3_20 && b4_21 && b5_20) {
matched = true;
pattern_id [start_indx + i]= 386;
}
if(b0_4 && b1_7 && b2_21 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 387;
}
if(b0_4 && b1_11 && b2_6 && b3_4 && b4_4 && b5_39 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 388;
}
if(b0_4 && b1_11 && b2_9 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 389;
}
if(b0_4 && b1_11 && b2_63 && b3_4 && b4_4 && b5_51 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 390;
}
if(b0_4 && b1_14 && b2_48 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 391;
}
if(b0_4 && b1_23 && b2_32 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 392;
}
if(b0_4 && b1_23 && b2_32 && b3_20 && b4_24) {
matched = true;
pattern_id [start_indx + i]= 393;
}
if(b0_4 && b1_23 && b2_21 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 394;
}
if(b0_4 && b1_18 && b2_22 && b3_4 && b4_55 && b5_45 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 395;
}
if(b0_4 && b1_66 && b2_4 && b3_4 && b4_46 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 396;
}
if(b0_4 && b1_24 && b2_22 && b3_20) {
matched = true;
pattern_id [start_indx + i]= 397;
}
if(b0_4 && b1_21 && b2_6 && b3_4 && b4_4 && b5_31 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 398;
}
if(b0_4 && b1_21 && b2_6 && b3_4 && b4_4 && b5_19 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 399;
}
if(b0_4 && b1_21 && b2_18 && b3_4 && b4_16 && b5_3 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 400;
}
if(b0_4 && b1_61 && b2_2 && b3_4 && b4_49 && b5_46 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 401;
}
if(b0_4 && b1_5 && b2_4 && b3_4 && b4_2 && b5_1 && b6_1) {
matched = true;
pattern_id [start_indx + i]= 402;
}
if(b0_47) {
matched = true;
pattern_id [start_indx + i]= 403;
}
}

}