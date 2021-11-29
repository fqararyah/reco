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
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
boolean b0_1 =(buffer[0] == 'q');
boolean b0_2 =(buffer[0] == 'G');
boolean b0_3 =(buffer[0] == 'B');
boolean b0_4 =(buffer[0] == 'W');
boolean b0_5 =(buffer[0] == 'R');
boolean b0_6 =(buffer[0] == 'F');
boolean b0_7 =(buffer[0] == 'h');
boolean b0_8 =(buffer[0] == 'U');
boolean b0_9 =(buffer[0] == 'N');
boolean b0_10 =(buffer[0] == 'c');
boolean b0_11 =(buffer[0] == 'a');
boolean b0_12 =(buffer[0] == 'l');
boolean b0_13 =(buffer[0] == '|');
boolean b0_14 =(buffer[0] == 'y');
boolean b0_15 =(buffer[0] == 'w');
boolean b0_16 =(buffer[0] == 'b');
boolean b0_17 =(buffer[0] == 'r');
boolean b0_18 =(buffer[0] == 'd');
boolean b0_19 =(buffer[0] == 's');
boolean b0_20 =(buffer[0] == 'f');
boolean b0_21 =(buffer[0] == 'S');
boolean b0_22 =(buffer[0] == '1');
boolean b0_23 =(buffer[0] == 'A');
boolean b0_24 =(buffer[0] == 'P');
boolean b0_25 =(buffer[0] == '*');
boolean b0_26 =(buffer[0] == 'g');
boolean b0_27 =(buffer[0] == 'k');
boolean b0_28 =(buffer[0] == 'n');
boolean b0_29 =(buffer[0] == 'p');
boolean b0_30 =(buffer[0] == '>');
boolean b0_31 =(buffer[0] == '.');
boolean b0_32 =(buffer[0] == '+');
boolean b0_33 =(buffer[0] == '@');
boolean b0_34 =(buffer[0] == '0');
boolean b0_35 =(buffer[0] == 'C');
boolean b0_36 =(buffer[0] == 'I');
boolean b0_37 =(buffer[0] == '8');
boolean b0_38 =(buffer[0] == '5');
boolean b0_39 =(buffer[0] == 'L');
boolean b0_40 =(buffer[0] == 'M');
boolean b0_41 =(buffer[0] == '-');
boolean b0_42 =(buffer[0] == 'V');
boolean b0_43 =(buffer[0] == 'e');
boolean b0_44 =(buffer[0] == 'H');
boolean b0_45 =(buffer[0] == 'v');
boolean b0_46 =(buffer[0] == '4');
boolean b0_47 =(buffer[0] == 'O');
boolean b0_48 =(buffer[0] == '_');
boolean b0_49 =(buffer[0] == 't');
boolean b0_50 =(buffer[0] == '/');
boolean b0_51 =(buffer[0] == ' ');
boolean b0_52 =(buffer[0] == '%');
boolean b0_53 =(buffer[0] == 'T');
boolean b0_54 =(buffer[0] == 'x');
boolean b0_55 =(buffer[0] == '?');
boolean b0_56 =(buffer[0] == '~');
boolean b0_57 =(buffer[0] == 'E');
boolean b0_58 =(buffer[0] == 'D');
boolean b0_59 =(buffer[0] == 'u');
boolean b0_60 =(buffer[0] == 'J');
boolean b0_61 =(buffer[0] == '2');
boolean b0_62 =(buffer[0] == '!');
boolean b0_63 =(buffer[0] == 'Y');
boolean b0_64 =(buffer[0] == 'X');
boolean b0_65 =(buffer[0] == '<');
boolean b0_66 =(buffer[0] == 'i');
boolean b0_67 =(buffer[0] == 'j');
boolean b0_68 =(buffer[0] == '3');
boolean b0_69 =(buffer[0] == 'o');
boolean b0_70 =(buffer[0] == '&');
boolean b0_71 =(buffer[0] == 'm');
boolean b0_72 =(buffer[0] == '=');
boolean b0_73 =(buffer[0] == '[');
boolean b0_74 =(buffer[0] == ')');
boolean b0_75 =(buffer[0] == '(');
boolean b0_76 =(buffer[0] == 'K');
boolean b1_1 =(buffer[1] == 'a');
boolean b1_2 =(buffer[1] == 'e');
boolean b1_3 =(buffer[1] == 'N');
boolean b1_4 =(buffer[1] == 'H');
boolean b1_5 =(buffer[1] == 't');
boolean b1_6 =(buffer[1] == 'C');
boolean b1_7 =(buffer[1] == 'o');
boolean b1_8 =(buffer[1] == 'S');
boolean b1_9 =(buffer[1] == '|');
boolean b1_10 =(buffer[1] == 'T');
boolean b1_11 =(buffer[1] == 'c');
boolean b1_12 =(buffer[1] == 'B');
boolean b1_13 =(buffer[1] == 'p');
boolean b1_14 =(buffer[1] == '0');
boolean b1_15 =(buffer[1] == 'h');
boolean b1_16 =(buffer[1] == 'r');
boolean b1_17 =(buffer[1] == '1');
boolean b1_18 =(buffer[1] == '2');
boolean b1_19 =(buffer[1] == 'A');
boolean b1_20 =(buffer[1] == 'O');
boolean b1_21 =(buffer[1] == 'i');
boolean b1_22 =(buffer[1] == 'k');
boolean b1_23 =(buffer[1] == '4');
boolean b1_24 =(buffer[1] == 'l');
boolean b1_25 =(buffer[1] == '8');
boolean b1_26 =(buffer[1] == '.');
boolean b1_27 =(buffer[1] == 'D');
boolean b1_28 =(buffer[1] == '+');
boolean b1_29 =(buffer[1] == 'E');
boolean b1_30 =(buffer[1] == 'm');
boolean b1_31 =(buffer[1] == ' ');
boolean b1_32 =(buffer[1] == '3');
boolean b1_33 =(buffer[1] == '7');
boolean b1_34 =(buffer[1] == '@');
boolean b1_35 =(buffer[1] == 'f');
boolean b1_36 =(buffer[1] == 'W');
boolean b1_37 =(buffer[1] == '%');
boolean b1_38 =(buffer[1] == 'I');
boolean b1_39 =(buffer[1] == '9');
boolean b1_40 =(buffer[1] == 'n');
boolean b1_41 =(buffer[1] == 'K');
boolean b1_42 =(buffer[1] == 'F');
boolean b1_43 =(buffer[1] == '5');
boolean b1_44 =(buffer[1] == 'x');
boolean b1_45 =(buffer[1] == 'y');
boolean b1_46 =(buffer[1] == 'u');
boolean b1_47 =(buffer[1] == 'R');
boolean b1_48 =(buffer[1] == 'd');
boolean b1_49 =(buffer[1] == 's');
boolean b1_50 =(buffer[1] == 'Y');
boolean b1_51 =(buffer[1] == 'w');
boolean b1_52 =(buffer[1] == '/');
boolean b1_53 =(buffer[1] == 'g');
boolean b1_54 =(buffer[1] == 'b');
boolean b1_55 =(buffer[1] == 'v');
boolean b1_56 =(buffer[1] == 'L');
boolean b1_57 =(buffer[1] == '_');
boolean b1_58 =(buffer[1] == '*');
boolean b1_59 =(buffer[1] == 'j');
boolean b1_60 =(buffer[1] == '?');
boolean b1_61 =(buffer[1] == 'P');
boolean b1_62 =(buffer[1] == '~');
boolean b1_63 =(buffer[1] == 'q');
boolean b1_64 =(buffer[1] == 'G');
boolean b1_65 =(buffer[1] == 'z');
boolean b1_66 =(buffer[1] == 'U');
boolean b1_67 =(buffer[1] == 'M');
boolean b1_68 =(buffer[1] == 'X');
boolean b1_69 =(buffer[1] == '-');
boolean b1_70 =(buffer[1] == '!');
boolean b1_71 =(buffer[1] == 'Q');
boolean b1_72 =(buffer[1] == '=');
boolean b1_73 =(buffer[1] == 'Z');
boolean b1_74 =(buffer[1] == 'J');
boolean b1_75 =(buffer[1] == '&');
boolean b1_76 =(buffer[1] == ')');
boolean b1_77 =(buffer[1] == '(');
boolean b2_1 =(buffer[2] == 'z');
boolean b2_2 =(buffer[2] == 't');
boolean b2_3 =(buffer[2] == '|');
boolean b2_4 =(buffer[2] == 'A');
boolean b2_5 =(buffer[2] == 'm');
boolean b2_6 =(buffer[2] == ' ');
boolean b2_7 =(buffer[2] == 's');
boolean b2_8 =(buffer[2] == 'E');
boolean b2_9 =(buffer[2] == '3');
boolean b2_10 =(buffer[2] == 'P');
boolean b2_11 =(buffer[2] == 'g');
boolean b2_12 =(buffer[2] == '4');
boolean b2_13 =(buffer[2] == 'i');
boolean b2_14 =(buffer[2] == '0');
boolean b2_15 =(buffer[2] == 'c');
boolean b2_16 =(buffer[2] == 'w');
boolean b2_17 =(buffer[2] == 'k');
boolean b2_18 =(buffer[2] == 'x');
boolean b2_19 =(buffer[2] == 'o');
boolean b2_20 =(buffer[2] == 'n');
boolean b2_21 =(buffer[2] == 'N');
boolean b2_22 =(buffer[2] == 'r');
boolean b2_23 =(buffer[2] == 'l');
boolean b2_24 =(buffer[2] == 'e');
boolean b2_25 =(buffer[2] == '1');
boolean b2_26 =(buffer[2] == '7');
boolean b2_27 =(buffer[2] == '/');
boolean b2_28 =(buffer[2] == 'M');
boolean b2_29 =(buffer[2] == '+');
boolean b2_30 =(buffer[2] == 'T');
boolean b2_31 =(buffer[2] == 'd');
boolean b2_32 =(buffer[2] == 'b');
boolean b2_33 =(buffer[2] == 'a');
boolean b2_34 =(buffer[2] == 'B');
boolean b2_35 =(buffer[2] == 'C');
boolean b2_36 =(buffer[2] == 'h');
boolean b2_37 =(buffer[2] == 'D');
boolean b2_38 =(buffer[2] == 'L');
boolean b2_39 =(buffer[2] == 'S');
boolean b2_40 =(buffer[2] == '2');
boolean b2_41 =(buffer[2] == '5');
boolean b2_42 =(buffer[2] == 'p');
boolean b2_43 =(buffer[2] == 'v');
boolean b2_44 =(buffer[2] == 'G');
boolean b2_45 =(buffer[2] == 'O');
boolean b2_46 =(buffer[2] == 'U');
boolean b2_47 =(buffer[2] == 'R');
boolean b2_48 =(buffer[2] == 'f');
boolean b2_49 =(buffer[2] == '_');
boolean b2_50 =(buffer[2] == '.');
boolean b2_51 =(buffer[2] == 'H');
boolean b2_52 =(buffer[2] == 'u');
boolean b2_53 =(buffer[2] == 'W');
boolean b2_54 =(buffer[2] == 'V');
boolean b2_55 =(buffer[2] == '?');
boolean b2_56 =(buffer[2] == 'y');
boolean b2_57 =(buffer[2] == '%');
boolean b2_58 =(buffer[2] == 'I');
boolean b2_59 =(buffer[2] == '6');
boolean b2_60 =(buffer[2] == 'F');
boolean b2_61 =(buffer[2] == '-');
boolean b2_62 =(buffer[2] == 'X');
boolean b2_63 =(buffer[2] == '=');
boolean b2_64 =(buffer[2] == 'K');
boolean b2_65 =(buffer[2] == '8');
boolean b2_66 =(buffer[2] == ')');
boolean b3_1 =(buffer[3] == 'w');
boolean b3_2 =(buffer[3] == 'I');
boolean b3_3 =(buffer[3] == '1');
boolean b3_4 =(buffer[3] == 'T');
boolean b3_5 =(buffer[3] == 'o');
boolean b3_6 =(buffer[3] == 'u');
boolean b3_7 =(buffer[3] == 't');
boolean b3_8 =(buffer[3] == 'R');
boolean b3_9 =(buffer[3] == 'S');
boolean b3_10 =(buffer[3] == 'e');
boolean b3_11 =(buffer[3] == 'A');
boolean b3_12 =(buffer[3] == 'O');
boolean b3_13 =(buffer[3] == ' ');
boolean b3_14 =(buffer[3] == 'i');
boolean b3_15 =(buffer[3] == 'g');
boolean b3_16 =(buffer[3] == '0');
boolean b3_17 =(buffer[3] == 'k');
boolean b3_18 =(buffer[3] == 'r');
boolean b3_19 =(buffer[3] == 'h');
boolean b3_20 =(buffer[3] == 'd');
boolean b3_21 =(buffer[3] == '4');
boolean b3_22 =(buffer[3] == 'G');
boolean b3_23 =(buffer[3] == 'l');
boolean b3_24 =(buffer[3] == 'L');
boolean b3_25 =(buffer[3] == 'a');
boolean b3_26 =(buffer[3] == 'v');
boolean b3_27 =(buffer[3] == 's');
boolean b3_28 =(buffer[3] == '|');
boolean b3_29 =(buffer[3] == '.');
boolean b3_30 =(buffer[3] == 'E');
boolean b3_31 =(buffer[3] == '_');
boolean b3_32 =(buffer[3] == 'P');
boolean b3_33 =(buffer[3] == '3');
boolean b3_34 =(buffer[3] == 'K');
boolean b3_35 =(buffer[3] == 'n');
boolean b3_36 =(buffer[3] == 'y');
boolean b3_37 =(buffer[3] == 'D');
boolean b3_38 =(buffer[3] == 'x');
boolean b3_39 =(buffer[3] == 'c');
boolean b3_40 =(buffer[3] == 'B');
boolean b3_41 =(buffer[3] == 'b');
boolean b3_42 =(buffer[3] == 'f');
boolean b3_43 =(buffer[3] == 'p');
boolean b3_44 =(buffer[3] == 'm');
boolean b3_45 =(buffer[3] == 'F');
boolean b3_46 =(buffer[3] == '-');
boolean b3_47 =(buffer[3] == '5');
boolean b3_48 =(buffer[3] == '2');
boolean b3_49 =(buffer[3] == '?');
boolean b3_50 =(buffer[3] == '/');
boolean b3_51 =(buffer[3] == 'W');
boolean b3_52 =(buffer[3] == 'j');
boolean b3_53 =(buffer[3] == 'V');
boolean b3_54 =(buffer[3] == 'q');
boolean b3_55 =(buffer[3] == 'N');
boolean b3_56 =(buffer[3] == '=');
boolean b3_57 =(buffer[3] == 'H');
boolean b3_58 =(buffer[3] == 'C');
boolean b3_59 =(buffer[3] == 'Q');
boolean b3_60 =(buffer[3] == 'M');
boolean b3_61 =(buffer[3] == 'z');
boolean b3_62 =(buffer[3] == 'Y');
boolean b3_63 =(buffer[3] == 'U');
boolean b3_64 =(buffer[3] == 'J');
boolean b3_65 =(buffer[3] == '%');
boolean b3_66 =(buffer[3] == '{');
boolean b3_67 =(buffer[3] == 'Z');
boolean b4_1 =(buffer[4] == 's');
boolean b4_2 =(buffer[4] == 'n');
boolean b4_3 =(buffer[4] == '0');
boolean b4_4 =(buffer[4] == 'I');
boolean b4_5 =(buffer[4] == 't');
boolean b4_6 =(buffer[4] == 'p');
boolean b4_7 =(buffer[4] == 'C');
boolean b4_8 =(buffer[4] == ' ');
boolean b4_9 =(buffer[4] == 'N');
boolean b4_10 =(buffer[4] == 'P');
boolean b4_11 =(buffer[4] == 'v');
boolean b4_12 =(buffer[4] == 'e');
boolean b4_13 =(buffer[4] == 'B');
boolean b4_14 =(buffer[4] == 'c');
boolean b4_15 =(buffer[4] == 'd');
boolean b4_16 =(buffer[4] == 'h');
boolean b4_17 =(buffer[4] == 'r');
boolean b4_18 =(buffer[4] == 'a');
boolean b4_19 =(buffer[4] == 'g');
boolean b4_20 =(buffer[4] == 'A');
boolean b4_21 =(buffer[4] == 'f');
boolean b4_22 =(buffer[4] == 'l');
boolean b4_23 =(buffer[4] == 'L');
boolean b4_24 =(buffer[4] == 'm');
boolean b4_25 =(buffer[4] == '8');
boolean b4_26 =(buffer[4] == '.');
boolean b4_27 =(buffer[4] == 'O');
boolean b4_28 =(buffer[4] == '/');
boolean b4_29 =(buffer[4] == 'w');
boolean b4_30 =(buffer[4] == '3');
boolean b4_31 =(buffer[4] == 'E');
boolean b4_32 =(buffer[4] == '5');
boolean b4_33 =(buffer[4] == 'o');
boolean b4_34 =(buffer[4] == '1');
boolean b4_35 =(buffer[4] == 'D');
boolean b4_36 =(buffer[4] == 'i');
boolean b4_37 =(buffer[4] == 'u');
boolean b4_38 =(buffer[4] == 'T');
boolean b4_39 =(buffer[4] == 'x');
boolean b4_40 =(buffer[4] == '-');
boolean b4_41 =(buffer[4] == 'F');
boolean b4_42 =(buffer[4] == '?');
boolean b4_43 =(buffer[4] == 'b');
boolean b4_44 =(buffer[4] == 'X');
boolean b4_45 =(buffer[4] == 'R');
boolean b4_46 =(buffer[4] == '_');
boolean b4_47 =(buffer[4] == 'k');
boolean b4_48 =(buffer[4] == 'S');
boolean b4_49 =(buffer[4] == '2');
boolean b4_50 =(buffer[4] == 'M');
boolean b4_51 =(buffer[4] == '=');
boolean b4_52 =(buffer[4] == 'y');
boolean b4_53 =(buffer[4] == '|');
boolean b4_54 =(buffer[4] == 'U');
boolean b4_55 =(buffer[4] == 'H');
boolean b4_56 =(buffer[4] == '[');
boolean b4_57 =(buffer[4] == 'W');
boolean b4_58 =(buffer[4] == 'Z');
boolean b4_59 =(buffer[4] == 'G');
boolean b4_60 =(buffer[4] == '%');
boolean b4_61 =(buffer[4] == '9');
boolean b4_62 =(buffer[4] == '7');
boolean b4_63 =(buffer[4] == '&');
boolean b4_64 =(buffer[4] == 'Y');
boolean b4_65 =(buffer[4] == ':');
boolean b4_66 =(buffer[4] == '{');
boolean b4_67 =(buffer[4] == 'q');
boolean b4_68 =(buffer[4] == '4');
boolean b4_69 =(buffer[4] == 'j');
boolean b4_70 =(buffer[4] == 'K');
boolean b5_1 =(buffer[5] == 'x');
boolean b5_2 =(buffer[5] == 'f');
boolean b5_3 =(buffer[5] == ' ');
boolean b5_4 =(buffer[5] == 'S');
boolean b5_5 =(buffer[5] == 'e');
boolean b5_6 =(buffer[5] == 'h');
boolean b5_7 =(buffer[5] == 'r');
boolean b5_8 =(buffer[5] == '5');
boolean b5_9 =(buffer[5] == 'o');
boolean b5_10 =(buffer[5] == 'a');
boolean b5_11 =(buffer[5] == 'd');
boolean b5_12 =(buffer[5] == '4');
boolean b5_13 =(buffer[5] == '0');
boolean b5_14 =(buffer[5] == '!');
boolean b5_15 =(buffer[5] == '[');
boolean b5_16 =(buffer[5] == 'i');
boolean b5_17 =(buffer[5] == 'y');
boolean b5_18 =(buffer[5] == 'R');
boolean b5_19 =(buffer[5] == 'A');
boolean b5_20 =(buffer[5] == 'n');
boolean b5_21 =(buffer[5] == 'w');
boolean b5_22 =(buffer[5] == 'z');
boolean b5_23 =(buffer[5] == '|');
boolean b5_24 =(buffer[5] == 'O');
boolean b5_25 =(buffer[5] == 'l');
boolean b5_26 =(buffer[5] == 's');
boolean b5_27 =(buffer[5] == 'm');
boolean b5_28 =(buffer[5] == 'u');
boolean b5_29 =(buffer[5] == '/');
boolean b5_30 =(buffer[5] == 'C');
boolean b5_31 =(buffer[5] == 't');
boolean b5_32 =(buffer[5] == '-');
boolean b5_33 =(buffer[5] == 'G');
boolean b5_34 =(buffer[5] == 'I');
boolean b5_35 =(buffer[5] == '2');
boolean b5_36 =(buffer[5] == '1');
boolean b5_37 =(buffer[5] == 'L');
boolean b5_38 =(buffer[5] == '.');
boolean b5_39 =(buffer[5] == 'c');
boolean b5_40 =(buffer[5] == '7');
boolean b5_41 =(buffer[5] == 'B');
boolean b5_42 =(buffer[5] == 'b');
boolean b5_43 =(buffer[5] == 'P');
boolean b5_44 =(buffer[5] == 'p');
boolean b5_45 =(buffer[5] == 'k');
boolean b5_46 =(buffer[5] == '_');
boolean b5_47 =(buffer[5] == 'v');
boolean b5_48 =(buffer[5] == '&');
boolean b5_49 =(buffer[5] == 'H');
boolean b5_50 =(buffer[5] == 'j');
boolean b5_51 =(buffer[5] == 'g');
boolean b5_52 =(buffer[5] == 'N');
boolean b5_53 =(buffer[5] == '?');
boolean b5_54 =(buffer[5] == 'D');
boolean b5_55 =(buffer[5] == 'q');
boolean b5_56 =(buffer[5] == '%');
boolean b5_57 =(buffer[5] == 'Y');
boolean b5_58 =(buffer[5] == '8');
boolean b5_59 =(buffer[5] == 'E');
boolean b5_60 =(buffer[5] == '3');
boolean b5_61 =(buffer[5] == 'T');
boolean b5_62 =(buffer[5] == ']');
boolean b5_63 =(buffer[5] == 'W');
boolean b5_64 =(buffer[5] == 'M');
boolean b5_65 =(buffer[5] == 'F');
boolean b5_66 =(buffer[5] == '=');
boolean b5_67 =(buffer[5] == 'Q');
boolean b5_68 =(buffer[5] == 'Z');
boolean b5_69 =(buffer[5] == 'U');
boolean b5_70 =(buffer[5] == ':');
boolean b5_71 =(buffer[5] == 'K');
boolean b6_1 =(buffer[6] == '.');
boolean b6_2 =(buffer[6] == 'o');
boolean b6_3 =(buffer[6] == '0');
boolean b6_4 =(buffer[6] == 'I');
boolean b6_5 =(buffer[6] == '|');
boolean b6_6 =(buffer[6] == 'U');
boolean b6_7 =(buffer[6] == 'e');
boolean b6_8 =(buffer[6] == 'a');
boolean b6_9 =(buffer[6] == 'C');
boolean b6_10 =(buffer[6] == 'r');
boolean b6_11 =(buffer[6] == 't');
boolean b6_12 =(buffer[6] == ' ');
boolean b6_13 =(buffer[6] == 'A');
boolean b6_14 =(buffer[6] == '3');
boolean b6_15 =(buffer[6] == '*');
boolean b6_16 =(buffer[6] == 'm');
boolean b6_17 =(buffer[6] == 'h');
boolean b6_18 =(buffer[6] == 'l');
boolean b6_19 =(buffer[6] == 'b');
boolean b6_20 =(buffer[6] == 'v');
boolean b6_21 =(buffer[6] == '/');
boolean b6_22 =(buffer[6] == 'K');
boolean b6_23 =(buffer[6] == 'M');
boolean b6_24 =(buffer[6] == 'H');
boolean b6_25 =(buffer[6] == 'd');
boolean b6_26 =(buffer[6] == 's');
boolean b6_27 =(buffer[6] == 'i');
boolean b6_28 =(buffer[6] == 'c');
boolean b6_29 =(buffer[6] == 'R');
boolean b6_30 =(buffer[6] == 'f');
boolean b6_31 =(buffer[6] == 'S');
boolean b6_32 =(buffer[6] == 'L');
boolean b6_33 =(buffer[6] == '7');
boolean b6_34 =(buffer[6] == 'N');
boolean b6_35 =(buffer[6] == 'y');
boolean b6_36 =(buffer[6] == 'g');
boolean b6_37 =(buffer[6] == '_');
boolean b6_38 =(buffer[6] == 'u');
boolean b6_39 =(buffer[6] == 'n');
boolean b6_40 =(buffer[6] == 'w');
boolean b6_41 =(buffer[6] == 'p');
boolean b6_42 =(buffer[6] == 'q');
boolean b6_43 =(buffer[6] == 'z');
boolean b6_44 =(buffer[6] == 'P');
boolean b6_45 =(buffer[6] == 'x');
boolean b6_46 =(buffer[6] == 'G');
boolean b6_47 =(buffer[6] == '?');
boolean b6_48 =(buffer[6] == '-');
boolean b6_49 =(buffer[6] == 'B');
boolean b6_50 =(buffer[6] == '2');
boolean b6_51 =(buffer[6] == 'F');
boolean b6_52 =(buffer[6] == '4');
boolean b6_53 =(buffer[6] == 'E');
boolean b6_54 =(buffer[6] == ',');
boolean b6_55 =(buffer[6] == '6');
boolean b6_56 =(buffer[6] == '=');
boolean b6_57 =(buffer[6] == 'T');
boolean b6_58 =(buffer[6] == 'O');
boolean b6_59 =(buffer[6] == 'Z');
boolean b6_60 =(buffer[6] == 'D');
boolean b6_61 =(buffer[6] == 'X');
boolean b6_62 =(buffer[6] == '1');
boolean b6_63 =(buffer[6] == '%');
boolean b7_1 =(buffer[7] == 'h');
boolean b7_2 =(buffer[7] == '|');
boolean b7_3 =(buffer[7] == '0');
boolean b7_4 =(buffer[7] == 'T');
boolean b7_5 =(buffer[7] == '3');
boolean b7_6 =(buffer[7] == 's');
boolean b7_7 =(buffer[7] == 'r');
boolean b7_8 =(buffer[7] == 't');
boolean b7_9 =(buffer[7] == 'e');
boolean b7_10 =(buffer[7] == 'i');
boolean b7_11 =(buffer[7] == 'A');
boolean b7_12 =(buffer[7] == 'o');
boolean b7_13 =(buffer[7] == '.');
boolean b7_14 =(buffer[7] == 'S');
boolean b7_15 =(buffer[7] == 'E');
boolean b7_16 =(buffer[7] == ' ');
boolean b7_17 =(buffer[7] == 'd');
boolean b7_18 =(buffer[7] == 'k');
boolean b7_19 =(buffer[7] == 'a');
boolean b7_20 =(buffer[7] == 'Q');
boolean b7_21 =(buffer[7] == 'B');
boolean b7_22 =(buffer[7] == '>');
boolean b7_23 =(buffer[7] == '/');
boolean b7_24 =(buffer[7] == '8');
boolean b7_25 =(buffer[7] == 'b');
boolean b7_26 =(buffer[7] == 'n');
boolean b7_27 =(buffer[7] == 'p');
boolean b7_28 =(buffer[7] == 'C');
boolean b7_29 =(buffer[7] == 'x');
boolean b7_30 =(buffer[7] == 'v');
boolean b7_31 =(buffer[7] == '1');
boolean b7_32 =(buffer[7] == 'm');
boolean b7_33 =(buffer[7] == 'w');
boolean b7_34 =(buffer[7] == 'g');
boolean b7_35 =(buffer[7] == 'u');
boolean b7_36 =(buffer[7] == '2');
boolean b7_37 =(buffer[7] == 'l');
boolean b7_38 =(buffer[7] == 'c');
boolean b7_39 =(buffer[7] == '9');
boolean b7_40 =(buffer[7] == 'U');
boolean b7_41 =(buffer[7] == '?');
boolean b7_42 =(buffer[7] == 'D');
boolean b7_43 =(buffer[7] == 'f');
boolean b7_44 =(buffer[7] == '-');
boolean b7_45 =(buffer[7] == '[');
boolean b7_46 =(buffer[7] == 'q');
boolean b7_47 =(buffer[7] == '*');
boolean b7_48 =(buffer[7] == 'y');
boolean b7_49 =(buffer[7] == 'O');
boolean b7_50 =(buffer[7] == '4');
boolean b7_51 =(buffer[7] == '6');
boolean b7_52 =(buffer[7] == '_');
boolean b7_53 =(buffer[7] == 'F');
boolean b7_54 =(buffer[7] == 'I');
boolean b7_55 =(buffer[7] == 'z');
boolean b7_56 =(buffer[7] == 'H');
boolean b7_57 =(buffer[7] == '%');
boolean b7_58 =(buffer[7] == '<');
boolean b7_59 =(buffer[7] == 'N');
boolean b7_60 =(buffer[7] == 'R');
boolean b7_61 =(buffer[7] == '\'');
boolean b7_62 =(buffer[7] == 'M');
boolean b7_63 =(buffer[7] == 'P');
boolean b7_64 =(buffer[7] == '=');
boolean b7_65 =(buffer[7] == '5');
boolean b7_66 =(buffer[7] == '7');
boolean b7_67 =(buffer[7] == 'J');
boolean b7_68 =(buffer[7] == 'j');
boolean b8_1 =(buffer[8] == 's');
boolean b8_2 =(buffer[8] == '0');
boolean b8_3 =(buffer[8] == ' ');
boolean b8_4 =(buffer[8] == 'A');
boolean b8_5 =(buffer[8] == 'e');
boolean b8_6 =(buffer[8] == 'h');
boolean b8_7 =(buffer[8] == 'n');
boolean b8_8 =(buffer[8] == 'k');
boolean b8_9 =(buffer[8] == '|');
boolean b8_10 =(buffer[8] == 'i');
boolean b8_11 =(buffer[8] == 'u');
boolean b8_12 =(buffer[8] == 'j');
boolean b8_13 =(buffer[8] == 'r');
boolean b8_14 =(buffer[8] == 'o');
boolean b8_15 =(buffer[8] == '/');
boolean b8_16 =(buffer[8] == 'T');
boolean b8_17 =(buffer[8] == '@');
boolean b8_18 =(buffer[8] == 'l');
boolean b8_19 =(buffer[8] == 't');
boolean b8_20 =(buffer[8] == 'R');
boolean b8_21 =(buffer[8] == '1');
boolean b8_22 =(buffer[8] == '7');
boolean b8_23 =(buffer[8] == '6');
boolean b8_24 =(buffer[8] == 'c');
boolean b8_25 =(buffer[8] == 'D');
boolean b8_26 =(buffer[8] == '3');
boolean b8_27 =(buffer[8] == 'a');
boolean b8_28 =(buffer[8] == '.');
boolean b8_29 =(buffer[8] == '?');
boolean b8_30 =(buffer[8] == 'm');
boolean b8_31 =(buffer[8] == 'p');
boolean b8_32 =(buffer[8] == 'w');
boolean b8_33 =(buffer[8] == 'z');
boolean b8_34 =(buffer[8] == '2');
boolean b8_35 =(buffer[8] == 'd');
boolean b8_36 =(buffer[8] == 'f');
boolean b8_37 =(buffer[8] == 'x');
boolean b8_38 =(buffer[8] == 'v');
boolean b8_39 =(buffer[8] == 'g');
boolean b8_40 =(buffer[8] == 'X');
boolean b8_41 =(buffer[8] == '-');
boolean b8_42 =(buffer[8] == 'U');
boolean b8_43 =(buffer[8] == 'C');
boolean b8_44 =(buffer[8] == 'y');
boolean b8_45 =(buffer[8] == 'b');
boolean b8_46 =(buffer[8] == '4');
boolean b8_47 =(buffer[8] == 'M');
boolean b8_48 =(buffer[8] == 'S');
boolean b8_49 =(buffer[8] == 'I');
boolean b8_50 =(buffer[8] == 'K');
boolean b8_51 =(buffer[8] == 'Y');
boolean b8_52 =(buffer[8] == 'H');
boolean b8_53 =(buffer[8] == '5');
boolean b8_54 =(buffer[8] == 'L');
boolean b8_55 =(buffer[8] == 'E');
boolean b8_56 =(buffer[8] == '_');
boolean b8_57 =(buffer[8] == '%');
boolean b8_58 =(buffer[8] == 'V');
boolean b8_59 =(buffer[8] == 'P');
boolean b8_60 =(buffer[8] == 'F');
boolean b8_61 =(buffer[8] == '=');
boolean b8_62 =(buffer[8] == 'q');
boolean b8_63 =(buffer[8] == 'N');
boolean b8_64 =(buffer[8] == '9');
boolean b8_65 =(buffer[8] == 'B');
boolean b9_1 =(buffer[9] == 'q');
boolean b9_2 =(buffer[9] == 'D');
boolean b9_3 =(buffer[9] == '0');
boolean b9_4 =(buffer[9] == '|');
boolean b9_5 =(buffer[9] == 'e');
boolean b9_6 =(buffer[9] == 'o');
boolean b9_7 =(buffer[9] == 'A');
boolean b9_8 =(buffer[9] == 's');
boolean b9_9 =(buffer[9] == 't');
boolean b9_10 =(buffer[9] == 'n');
boolean b9_11 =(buffer[9] == 'g');
boolean b9_12 =(buffer[9] == 'r');
boolean b9_13 =(buffer[9] == '/');
boolean b9_14 =(buffer[9] == 'P');
boolean b9_15 =(buffer[9] == 'h');
boolean b9_16 =(buffer[9] == ' ');
boolean b9_17 =(buffer[9] == '@');
boolean b9_18 =(buffer[9] == 'a');
boolean b9_19 =(buffer[9] == '<');
boolean b9_20 =(buffer[9] == 'l');
boolean b9_21 =(buffer[9] == 'O');
boolean b9_22 =(buffer[9] == 'y');
boolean b9_23 =(buffer[9] == 'w');
boolean b9_24 =(buffer[9] == 'c');
boolean b9_25 =(buffer[9] == '.');
boolean b9_26 =(buffer[9] == 'p');
boolean b9_27 =(buffer[9] == '-');
boolean b9_28 =(buffer[9] == 'x');
boolean b9_29 =(buffer[9] == 'd');
boolean b9_30 =(buffer[9] == 'm');
boolean b9_31 =(buffer[9] == 'F');
boolean b9_32 =(buffer[9] == 'T');
boolean b9_33 =(buffer[9] == '?');
boolean b9_34 =(buffer[9] == 'v');
boolean b9_35 =(buffer[9] == 'i');
boolean b9_36 =(buffer[9] == 'k');
boolean b9_37 =(buffer[9] == 'f');
boolean b9_38 =(buffer[9] == 'E');
boolean b9_39 =(buffer[9] == 'j');
boolean b9_40 =(buffer[9] == '3');
boolean b9_41 =(buffer[9] == 'R');
boolean b9_42 =(buffer[9] == 'S');
boolean b9_43 =(buffer[9] == 'V');
boolean b9_44 =(buffer[9] == '1');
boolean b9_45 =(buffer[9] == 'Y');
boolean b9_46 =(buffer[9] == 'b');
boolean b9_47 =(buffer[9] == 'u');
boolean b9_48 =(buffer[9] == '2');
boolean b9_49 =(buffer[9] == 'W');
boolean b9_50 =(buffer[9] == '9');
boolean b9_51 =(buffer[9] == 'I');
boolean b9_52 =(buffer[9] == 'B');
boolean b9_53 =(buffer[9] == 'G');
boolean b9_54 =(buffer[9] == '%');
boolean b9_55 =(buffer[9] == 'N');
boolean b9_56 =(buffer[9] == '=');
boolean b9_57 =(buffer[9] == '7');
boolean b9_58 =(buffer[9] == 'C');
boolean b9_59 =(buffer[9] == '8');
boolean b9_60 =(buffer[9] == '&');
boolean b9_61 =(buffer[9] == '#');
boolean b9_62 =(buffer[9] == '+');
boolean b9_63 =(buffer[9] == ':');
boolean b9_64 =(buffer[9] == '_');
boolean b10_1 =(buffer[10] == '|');
boolean b10_2 =(buffer[10] == '2');
boolean b10_3 =(buffer[10] == ' ');
boolean b10_4 =(buffer[10] == 'r');
boolean b10_5 =(buffer[10] == 'p');
boolean b10_6 =(buffer[10] == 'd');
boolean b10_7 =(buffer[10] == '!');
boolean b10_8 =(buffer[10] == 'u');
boolean b10_9 =(buffer[10] == 's');
boolean b10_10 =(buffer[10] == 'n');
boolean b10_11 =(buffer[10] == '/');
boolean b10_12 =(buffer[10] == 'f');
boolean b10_13 =(buffer[10] == '0');
boolean b10_14 =(buffer[10] == 'i');
boolean b10_15 =(buffer[10] == 't');
boolean b10_16 =(buffer[10] == '=');
boolean b10_17 =(buffer[10] == 'e');
boolean b10_18 =(buffer[10] == 'T');
boolean b10_19 =(buffer[10] == 'g');
boolean b10_20 =(buffer[10] == 'K');
boolean b10_21 =(buffer[10] == '9');
boolean b10_22 =(buffer[10] == 'A');
boolean b10_23 =(buffer[10] == 'c');
boolean b10_24 =(buffer[10] == '8');
boolean b10_25 =(buffer[10] == '_');
boolean b10_26 =(buffer[10] == '.');
boolean b10_27 =(buffer[10] == 'b');
boolean b10_28 =(buffer[10] == 'y');
boolean b10_29 =(buffer[10] == 'l');
boolean b10_30 =(buffer[10] == 'm');
boolean b10_31 =(buffer[10] == 'x');
boolean b10_32 =(buffer[10] == 'h');
boolean b10_33 =(buffer[10] == 'a');
boolean b10_34 =(buffer[10] == 'w');
boolean b10_35 =(buffer[10] == 'v');
boolean b10_36 =(buffer[10] == '3');
boolean b10_37 =(buffer[10] == 'I');
boolean b10_38 =(buffer[10] == 'j');
boolean b10_39 =(buffer[10] == '-');
boolean b10_40 =(buffer[10] == 'k');
boolean b10_41 =(buffer[10] == 'o');
boolean b10_42 =(buffer[10] == 'L');
boolean b10_43 =(buffer[10] == 'B');
boolean b10_44 =(buffer[10] == 'P');
boolean b10_45 =(buffer[10] == 'G');
boolean b10_46 =(buffer[10] == '5');
boolean b10_47 =(buffer[10] == '7');
boolean b10_48 =(buffer[10] == '?');
boolean b10_49 =(buffer[10] == '*');
boolean b10_50 =(buffer[10] == 'S');
boolean b10_51 =(buffer[10] == 'R');
boolean b10_52 =(buffer[10] == 'F');
boolean b10_53 =(buffer[10] == 'E');
boolean b10_54 =(buffer[10] == '}');
boolean b10_55 =(buffer[10] == '>');
boolean b10_56 =(buffer[10] == 'V');
boolean b10_57 =(buffer[10] == '1');
boolean b10_58 =(buffer[10] == '%');
boolean b10_59 =(buffer[10] == 'N');
boolean b10_60 =(buffer[10] == '6');
boolean b10_61 =(buffer[10] == 'C');
boolean b10_62 =(buffer[10] == 'D');
boolean b11_1 =(buffer[11] == ' ');
boolean b11_2 =(buffer[11] == 'e');
boolean b11_3 =(buffer[11] == 'o');
boolean b11_4 =(buffer[11] == '1');
boolean b11_5 =(buffer[11] == 'A');
boolean b11_6 =(buffer[11] == 's');
boolean b11_7 =(buffer[11] == '>');
boolean b11_8 =(buffer[11] == 'd');
boolean b11_9 =(buffer[11] == 'O');
boolean b11_10 =(buffer[11] == 'i');
boolean b11_11 =(buffer[11] == '0');
boolean b11_12 =(buffer[11] == '9');
boolean b11_13 =(buffer[11] == '5');
boolean b11_14 =(buffer[11] == 'r');
boolean b11_15 =(buffer[11] == '|');
boolean b11_16 =(buffer[11] == '2');
boolean b11_17 =(buffer[11] == 'p');
boolean b11_18 =(buffer[11] == 'c');
boolean b11_19 =(buffer[11] == 'l');
boolean b11_20 =(buffer[11] == 'x');
boolean b11_21 =(buffer[11] == 'g');
boolean b11_22 =(buffer[11] == 'm');
boolean b11_23 =(buffer[11] == 't');
boolean b11_24 =(buffer[11] == 'a');
boolean b11_25 =(buffer[11] == 'E');
boolean b11_26 =(buffer[11] == '.');
boolean b11_27 =(buffer[11] == '?');
boolean b11_28 =(buffer[11] == 'n');
boolean b11_29 =(buffer[11] == 'U');
boolean b11_30 =(buffer[11] == 'f');
boolean b11_31 =(buffer[11] == '3');
boolean b11_32 =(buffer[11] == '=');
boolean b11_33 =(buffer[11] == '/');
boolean b11_34 =(buffer[11] == 'C');
boolean b11_35 =(buffer[11] == '7');
boolean b11_36 =(buffer[11] == 'T');
boolean b11_37 =(buffer[11] == 'u');
boolean b11_38 =(buffer[11] == 'v');
boolean b11_39 =(buffer[11] == 'b');
boolean b11_40 =(buffer[11] == 'h');
boolean b11_41 =(buffer[11] == ',');
boolean b11_42 =(buffer[11] == '4');
boolean b11_43 =(buffer[11] == '`');
boolean b11_44 =(buffer[11] == 'j');
boolean b11_45 =(buffer[11] == '8');
boolean b11_46 =(buffer[11] == 'N');
boolean b11_47 =(buffer[11] == 'k');
boolean b11_48 =(buffer[11] == 'B');
boolean b11_49 =(buffer[11] == '%');
boolean b11_50 =(buffer[11] == 'M');
boolean b11_51 =(buffer[11] == 'R');
boolean b11_52 =(buffer[11] == '-');
boolean b11_53 =(buffer[11] == ':');
boolean b11_54 =(buffer[11] == 'G');
boolean b12_1 =(buffer[12] == '0');
boolean b12_2 =(buffer[12] == 'n');
boolean b12_3 =(buffer[12] == '.');
boolean b12_4 =(buffer[12] == '|');
boolean b12_5 =(buffer[12] == 's');
boolean b12_6 =(buffer[12] == '?');
boolean b12_7 =(buffer[12] == 'R');
boolean b12_8 =(buffer[12] == 'e');
boolean b12_9 =(buffer[12] == 'p');
boolean b12_10 =(buffer[12] == 'a');
boolean b12_11 =(buffer[12] == 'o');
boolean b12_12 =(buffer[12] == 'g');
boolean b12_13 =(buffer[12] == 'u');
boolean b12_14 =(buffer[12] == 'i');
boolean b12_15 =(buffer[12] == 'l');
boolean b12_16 =(buffer[12] == 'd');
boolean b12_17 =(buffer[12] == 'x');
boolean b12_18 =(buffer[12] == 'm');
boolean b12_19 =(buffer[12] == 'S');
boolean b12_20 =(buffer[12] == 't');
boolean b12_21 =(buffer[12] == 'r');
boolean b12_22 =(buffer[12] == 'f');
boolean b12_23 =(buffer[12] == 'h');
boolean b12_24 =(buffer[12] == 'c');
boolean b12_25 =(buffer[12] == '7');
boolean b12_26 =(buffer[12] == 'C');
boolean b12_27 =(buffer[12] == 'w');
boolean b12_28 =(buffer[12] == '*');
boolean b12_29 =(buffer[12] == 'E');
boolean b12_30 =(buffer[12] == ' ');
boolean b12_31 =(buffer[12] == '4');
boolean b12_32 =(buffer[12] == 'k');
boolean b12_33 =(buffer[12] == '/');
boolean b12_34 =(buffer[12] == 'A');
boolean b12_35 =(buffer[12] == '>');
boolean b12_36 =(buffer[12] == '_');
boolean b12_37 =(buffer[12] == '%');
boolean b12_38 =(buffer[12] == '8');
boolean b12_39 =(buffer[12] == '=');
boolean b12_40 =(buffer[12] == 'F');
boolean b12_41 =(buffer[12] == ']');
boolean b12_42 =(buffer[12] == 'B');
boolean b12_43 =(buffer[12] == 'L');
boolean b12_44 =(buffer[12] == 'v');
boolean b12_45 =(buffer[12] == 'I');
boolean b13_1 =(buffer[13] == '0');
boolean b13_2 =(buffer[13] == 'e');
boolean b13_3 =(buffer[13] == '1');
boolean b13_4 =(buffer[13] == '|');
boolean b13_5 =(buffer[13] == 'c');
boolean b13_6 =(buffer[13] == 't');
boolean b13_7 =(buffer[13] == 'i');
boolean b13_8 =(buffer[13] == 'p');
boolean b13_9 =(buffer[13] == '?');
boolean b13_10 =(buffer[13] == 'l');
boolean b13_11 =(buffer[13] == 'o');
boolean b13_12 =(buffer[13] == 'x');
boolean b13_13 =(buffer[13] == '=');
boolean b13_14 =(buffer[13] == ' ');
boolean b13_15 =(buffer[13] == '.');
boolean b13_16 =(buffer[13] == 'h');
boolean b13_17 =(buffer[13] == 'n');
boolean b13_18 =(buffer[13] == 'g');
boolean b13_19 =(buffer[13] == 'r');
boolean b13_20 =(buffer[13] == 's');
boolean b13_21 =(buffer[13] == 'y');
boolean b13_22 =(buffer[13] == '/');
boolean b13_23 =(buffer[13] == 'C');
boolean b13_24 =(buffer[13] == 'M');
boolean b13_25 =(buffer[13] == '4');
boolean b13_26 =(buffer[13] == 'W');
boolean b13_27 =(buffer[13] == 'm');
boolean b13_28 =(buffer[13] == 'b');
boolean b13_29 =(buffer[13] == '2');
boolean b13_30 =(buffer[13] == '%');
boolean b13_31 =(buffer[13] == 'd');
boolean b13_32 =(buffer[13] == 'a');
boolean b14_1 =(buffer[14] == '|');
boolean b14_2 =(buffer[14] == 't');
boolean b14_3 =(buffer[14] == 'h');
boolean b14_4 =(buffer[14] == '?');
boolean b14_5 =(buffer[14] == 'l');
boolean b14_6 =(buffer[14] == 'p');
boolean b14_7 =(buffer[14] == 'F');
boolean b14_8 =(buffer[14] == 's');
boolean b14_9 =(buffer[14] == '.');
boolean b14_10 =(buffer[14] == 'k');
boolean b14_11 =(buffer[14] == '3');
boolean b14_12 =(buffer[14] == ']');
boolean b14_13 =(buffer[14] == 'e');
boolean b14_14 =(buffer[14] == '/');
boolean b14_15 =(buffer[14] == 'n');
boolean b14_16 =(buffer[14] == 'i');
boolean b14_17 =(buffer[14] == '4');
boolean b14_18 =(buffer[14] == 'y');
boolean b14_19 =(buffer[14] == '(');
boolean b14_20 =(buffer[14] == '=');
boolean b14_21 =(buffer[14] == 'r');
boolean b14_22 =(buffer[14] == ':');
boolean b14_23 =(buffer[14] == 'd');
boolean b14_24 =(buffer[14] == ' ');
boolean b14_25 =(buffer[14] == 'f');
boolean seq_027 = b0_52 && b1_61 && b2_47 && b3_12 && b4_59 && b5_18;
boolean seq_032 = b0_52 && b1_8 && b2_56 && b3_27 && b4_5 && b5_5;
boolean seq_036 = b0_52 && b1_66 && b2_39 && b3_30 && b4_45 && b5_54;
boolean seq_0110 = b0_31 && b1_13 && b2_36 && b3_43 && b4_42 && b5_27;
boolean seq_6155 = b6_16 && b7_10 && b8_7 && b9_25 && b10_23 && b11_21;
boolean seq_0163 = b0_50 && b1_42 && b2_2 && b3_43 && b4_48 && b5_10;
boolean seq_0166 = b0_50 && b1_64 && b2_53 && b3_51 && b4_31 && b5_41;
boolean seq_0176 = b0_50 && b1_3 && b2_24 && b3_1 && b4_1 && b5_29;
boolean seq_6176 = b6_36 && b7_19 && b8_19 && b9_5 && b10_26 && b11_17;
boolean seq_0192 = b0_50 && b1_57 && b2_43 && b3_7 && b4_36 && b5_46;
boolean seq_0195 = b0_50 && b1_1 && b2_25 && b3_20 && b4_36 && b5_26;
boolean seq_6195 = b6_41 && b7_5 && b8_28 && b9_24 && b10_19 && b11_10;
boolean seq_0204 = b0_50 && b1_1 && b2_31 && b3_44 && b4_36 && b5_20;
boolean seq_0219 = b0_50 && b1_1 && b2_23 && b3_14 && b4_43 && b5_10;
boolean seq_0225 = b0_50 && b1_1 && b2_20 && b3_27 && b4_26 && b5_44;
boolean seq_0228 = b0_50 && b1_1 && b2_42 && b3_14 && b4_26 && b5_44;
boolean seq_0235 = b0_50 && b1_1 && b2_22 && b3_15 && b4_1 && b5_38;
boolean seq_0237 = b0_50 && b1_1 && b2_7 && b3_31 && b4_29 && b5_5;
boolean seq_6241 = b6_2 && b7_26 && b8_28 && b9_24 && b10_19 && b11_10;
boolean seq_0244 = b0_50 && b1_1 && b2_16 && b3_27 && b4_5 && b5_10;
boolean seq_0253 = b0_50 && b1_54 && b2_32 && b3_46 && b4_16 && b5_16;
boolean seq_6256 = b6_26 && b7_8 && b8_1 && b9_34 && b10_23 && b11_26;
boolean seq_0257 = b0_50 && b1_54 && b2_32 && b3_46 && b4_16 && b5_9;
boolean seq_0259 = b0_50 && b1_54 && b2_32 && b3_46 && b4_17 && b5_5;
boolean seq_6263 = b6_7 && b7_19 && b8_13 && b9_24 && b10_32 && b11_26;
boolean seq_6273 = b6_26 && b7_8 && b8_28 && b9_24 && b10_19 && b11_10;
boolean seq_0278 = b0_50 && b1_11 && b2_33 && b3_23 && b4_12 && b5_20;
boolean seq_0280 = b0_50 && b1_11 && b2_33 && b3_44 && b4_6 && b5_10;
boolean seq_6291 = b6_38 && b7_32 && b8_28 && b9_24 && b10_19 && b11_10;
boolean seq_0292 = b0_50 && b1_11 && b2_11 && b3_14 && b4_40 && b5_42;
boolean seq_0300 = b0_50 && b1_11 && b2_11 && b3_14 && b4_21 && b5_9;
boolean seq_6300 = b6_10 && b7_35 && b8_30 && b9_25 && b10_5 && b11_19;
boolean seq_0303 = b0_50 && b1_11 && b2_11 && b3_14 && b4_6 && b5_7;
boolean seq_0310 = b0_50 && b1_11 && b2_36 && b3_10 && b4_14 && b5_45;
boolean seq_0314 = b0_50 && b1_11 && b2_5 && b3_20 && b4_26 && b5_44;
boolean seq_0321 = b0_50 && b1_11 && b2_19 && b3_35 && b4_21 && b5_16;
boolean seq_0324 = b0_50 && b1_11 && b2_19 && b3_6 && b4_2 && b5_31;
boolean seq_6330 = b6_10 && b7_38 && b8_6 && b9_25 && b10_23 && b11_21;
boolean seq_0335 = b0_50 && b1_11 && b2_43 && b3_27 && b4_29 && b5_5;
boolean seq_6343 = b6_10 && b7_17 && b8_28 && b9_24 && b10_19 && b11_10;
boolean seq_6348 = b6_7 && b7_6 && b8_28 && b9_26 && b10_32 && b11_17;
boolean seq_0363 = b0_50 && b1_48 && b2_19 && b3_27 && b4_5 && b5_28;
boolean seq_6363 = b6_30 && b7_43 && b8_28 && b9_26 && b10_32 && b11_17;
boolean seq_0371 = b0_50 && b1_2 && b2_5 && b3_43 && b4_33 && b5_21;
boolean seq_0373 = b0_50 && b1_2 && b2_5 && b3_6 && b4_24 && b5_10;
boolean seq_6373 = b6_27 && b7_37 && b8_28 && b9_24 && b10_19 && b11_10;
boolean seq_0376 = b0_50 && b1_2 && b2_20 && b3_26 && b4_36 && b5_7;
boolean seq_0378 = b0_50 && b1_2 && b2_20 && b3_26 && b4_33 && b5_28;
boolean seq_0380 = b0_50 && b1_2 && b2_7 && b3_19 && b4_33 && b5_44;
boolean seq_0395 = b0_50 && b1_35 && b2_13 && b3_23 && b4_12 && b5_27;
boolean seq_0397 = b0_50 && b1_35 && b2_13 && b3_23 && b4_12 && b5_26;
boolean seq_0408 = b0_50 && b1_35 && b2_19 && b3_38 && b4_29 && b5_5;
boolean seq_6410 = b6_7 && b7_34 && b8_28 && b9_29 && b10_29 && b11_19;
boolean seq_6413 = b6_8 && b7_17 && b8_30 && b9_25 && b10_17 && b11_20;
boolean seq_0416 = b0_50 && b1_35 && b2_2 && b3_43 && b4_26 && b5_44;
boolean seq_0419 = b0_50 && b1_53 && b2_33 && b3_7 && b4_12 && b5_38;
boolean seq_0427 = b0_50 && b1_53 && b2_24 && b3_7 && b4_28 && b5_53;
boolean seq_0432 = b0_50 && b1_53 && b2_23 && b3_5 && b4_43 && b5_10;
boolean seq_0440 = b0_50 && b1_53 && b2_52 && b3_10 && b4_1 && b5_31;
boolean seq_0447 = b0_50 && b1_15 && b2_19 && b3_44 && b4_12 && b5_29;
boolean seq_0453 = b0_50 && b1_15 && b2_2 && b3_27 && b4_12 && b5_10;
boolean seq_0460 = b0_50 && b1_21 && b2_13 && b3_27 && b4_18 && b5_11;
boolean seq_6461 = b6_16 && b7_27 && b8_32 && b9_29 && b10_11 && b11_24;
boolean seq_6464 = b6_2 && b7_19 && b8_13 && b9_29 && b10_26 && b11_18;
boolean seq_0465 = b0_50 && b1_21 && b2_5 && b3_25 && b4_19 && b5_5;
boolean seq_6466 = b6_16 && b7_19 && b8_31 && b9_25 && b10_17 && b11_20;
boolean seq_0469 = b0_50 && b1_21 && b2_20 && b3_29 && b4_14 && b5_51;
boolean seq_0472 = b0_50 && b1_21 && b2_20 && b3_20 && b4_12 && b5_1;
boolean seq_0475 = b0_50 && b1_21 && b2_20 && b3_42 && b4_33 && b5_38;
boolean seq_0478 = b0_50 && b1_21 && b2_20 && b3_42 && b4_33 && b5_26;
boolean seq_0481 = b0_50 && b1_21 && b2_20 && b3_43 && b4_37 && b5_31;
boolean seq_0487 = b0_50 && b1_21 && b2_20 && b3_27 && b4_5 && b5_10;
boolean seq_0513 = b0_50 && b1_24 && b2_19 && b3_15 && b4_36 && b5_20;
boolean seq_0538 = b0_50 && b1_30 && b2_19 && b3_20 && b4_37 && b5_25;
boolean seq_0542 = b0_50 && b1_30 && b2_7 && b3_25 && b4_15 && b5_39;
boolean seq_6572 = b6_27 && b7_26 && b8_35 && b9_5 && b10_31 && b11_26;
boolean seq_0578 = b0_50 && b1_13 && b2_24 && b3_18 && b4_22 && b5_38;
boolean seq_0582 = b0_50 && b1_13 && b2_48 && b3_20 && b4_36 && b5_26;
boolean seq_6582 = b6_41 && b7_19 && b8_18 && b9_22 && b10_26 && b11_18;
boolean seq_0591 = b0_50 && b1_13 && b2_13 && b3_35 && b4_19 && b5_38;
boolean seq_0601 = b0_50 && b1_13 && b2_19 && b3_27 && b4_5 && b5_60;
boolean seq_0604 = b0_50 && b1_13 && b2_22 && b3_14 && b4_2 && b5_31;
boolean seq_6606 = b6_26 && b7_34 && b8_28 && b9_26 && b10_32 && b11_17;
boolean seq_0612 = b0_50 && b1_63 && b2_52 && b3_10 && b4_17 && b5_17;
boolean seq_6615 = b6_11 && b7_12 && b8_13 && b9_5 && b10_26 && b11_18;
boolean seq_0619 = b0_50 && b1_16 && b2_24 && b3_25 && b4_15 && b5_27;
boolean seq_0623 = b0_50 && b1_16 && b2_24 && b3_20 && b4_36 && b5_7;
boolean seq_0625 = b0_50 && b1_16 && b2_24 && b3_15 && b4_36 && b5_26;
boolean seq_6628 = b6_11 && b7_13 && b8_31 && b9_15 && b10_5 && b11_27;
boolean seq_0633 = b0_50 && b1_16 && b2_19 && b3_41 && b4_33 && b5_31;
boolean seq_0645 = b0_50 && b1_49 && b2_15 && b3_18 && b4_36 && b5_44;
boolean seq_0649 = b0_50 && b1_49 && b2_24 && b3_25 && b4_17 && b5_39;
boolean seq_0663 = b0_50 && b1_49 && b2_24 && b3_18 && b4_11 && b5_5;
boolean seq_6663 = b6_10 && b7_44 && b8_10 && b9_10 && b10_12 && b11_3;
boolean seq_0665 = b0_50 && b1_49 && b2_24 && b3_18 && b4_11 && b5_16;
boolean seq_0667 = b0_50 && b1_49 && b2_24 && b3_18 && b4_11 && b5_25;
boolean seq_0672 = b0_50 && b1_49 && b2_24 && b3_7 && b4_37 && b5_44;
boolean seq_6680 = b6_2 && b7_17 && b8_5 && b9_25 && b10_33 && b11_6;
boolean seq_0686 = b0_50 && b1_49 && b2_20 && b3_5 && b4_17 && b5_45;
boolean seq_0689 = b0_50 && b1_49 && b2_19 && b3_52 && b4_33 && b5_28;
boolean seq_6689 = b6_10 && b7_26 && b8_28 && b9_24 && b10_19 && b11_10;
boolean seq_0707 = b0_50 && b1_5 && b2_24 && b3_27 && b4_5 && b5_32;
boolean seq_0709 = b0_50 && b1_5 && b2_24 && b3_27 && b4_5 && b5_38;
boolean seq_0726 = b0_50 && b1_46 && b2_42 && b3_20 && b4_18 && b5_31;
boolean seq_0729 = b0_50 && b1_46 && b2_42 && b3_23 && b4_33 && b5_10;
boolean seq_0735 = b0_50 && b1_46 && b2_7 && b3_10 && b4_17 && b5_26;
boolean seq_6740 = b6_26 && b7_12 && b8_11 && b9_12 && b10_23 && b11_2;
boolean seq_0755 = b0_50 && b1_51 && b2_33 && b3_36 && b4_40 && b5_42;
boolean seq_0759 = b0_50 && b1_51 && b2_24 && b3_41 && b4_18 && b5_11;
boolean seq_0762 = b0_50 && b1_51 && b2_24 && b3_41 && b4_14 && b5_10;
boolean seq_0769 = b0_50 && b1_51 && b2_24 && b3_41 && b4_6 && b5_25;
boolean seq_0777 = b0_50 && b1_51 && b2_36 && b3_10 && b4_17 && b5_5;
boolean seq_6777 = b6_8 && b7_32 && b8_10 && b9_25 && b10_23 && b11_21;
boolean seq_0779 = b0_50 && b1_51 && b2_36 && b3_5 && b4_36 && b5_26;
boolean seq_6779 = b6_37 && b7_7 && b8_27 && b9_23 && b10_26 && b11_18;
boolean seq_0782 = b0_50 && b1_51 && b2_42 && b3_46 && b4_18 && b5_11;
boolean seq_0789 = b0_50 && b1_51 && b2_7 && b3_31 && b4_21 && b5_31;
boolean seq_0831 = b0_72 && b1_14 && b2_37 && b3_56 && b4_3 && b5_19;
boolean seq_0847 = b0_55 && b1_51 && b2_42 && b3_46 && b4_1 && b5_31;
boolean seq_0851 = b0_55 && b1_51 && b2_42 && b3_46 && b4_11 && b5_5;
boolean seq_0891 = b0_35 && b1_7 && b2_20 && b3_7 && b4_12 && b5_20;
boolean seq_0894 = b0_58 && b1_29 && b2_38 && b3_30 && b4_38 && b5_59;
boolean seq_6915 = b6_24 && b7_4 && b8_16 && b9_14 && b10_11 && b11_4;
boolean seq_0921 = b0_2 && b1_3 && b2_46 && b3_4 && b4_31 && b5_37;
boolean seq_6925 = b6_5 && b7_5 && b8_4 && b9_16 && b10_2 && b11_11;
boolean seq_0944 = b0_36 && b1_40 && b2_43 && b3_25 && b4_22 && b5_16;
boolean seq_0955 = b0_39 && b1_7 && b2_15 && b3_25 && b4_5 && b5_16;
boolean seq_0957 = b0_39 && b1_7 && b2_11 && b3_14 && b4_2 && b5_3;
boolean seq_6958 = b6_27 && b7_26 && b8_24 && b9_6 && b10_4 && b11_14;
boolean seq_6960 = b6_29 && b7_49 && b8_47 && b9_4 && b10_36 && b11_5;
boolean seq_0991 = b0_24 && b1_47 && b2_58 && b3_53 && b4_50 && b5_4;
boolean seq_01014 = b0_21 && b1_29 && b2_4 && b3_8 && b4_7 && b5_49;
boolean seq_01046 = b0_8 && b1_49 && b2_24 && b3_18 && b4_40 && b5_19;
boolean seq_61047 = b6_36 && b7_9 && b8_7 && b9_9 && b10_1 && b11_31;
boolean seq_01081 = b0_11 && b1_24 && b2_23 && b3_31 && b4_5 && b5_10;
boolean seq_01087 = b0_11 && b1_24 && b2_2 && b3_10 && b4_17 && b5_3;
boolean seq_61090 = b6_2 && b7_6 && b8_9 && b9_57 && b10_61 && b11_15;
boolean seq_01107 = b0_10 && b1_7 && b2_20 && b3_35 && b4_12 && b5_39;
boolean seq_01112 = b0_10 && b1_16 && b2_24 && b3_25 && b4_5 && b5_5;
boolean seq_01123 = b0_18 && b1_54 && b2_33 && b3_31 && b4_5 && b5_10;
boolean seq_01131 = b0_18 && b1_7 && b2_16 && b3_35 && b4_22 && b5_9;
boolean seq_01175 = b0_12 && b1_7 && b2_11 && b3_15 && b4_12 && b5_11;
boolean seq_01180 = b0_12 && b1_7 && b2_11 && b3_14 && b4_2 && b5_23;
boolean seq_01196 = b0_29 && b1_1 && b2_7 && b3_27 && b4_8 && b5_32;
boolean seq_01276 = b0_54 && b1_13 && b2_49 && b3_18 && b4_12 && b5_51;
boolean seq_01280 = b0_13 && b1_14 && b2_14 && b3_13 && b4_3 && b5_13;
boolean seq_61280 = b6_12 && b7_3 && b8_2 && b9_16 && b10_13 && b11_11;
boolean seq_01283 = b0_13 && b1_14 && b2_14 && b3_13 && b4_3 && b5_36;
boolean seq_01311 = b0_13 && b1_14 && b2_25 && b3_13 && b4_3 && b5_35;
boolean seq_01316 = b0_13 && b1_14 && b2_9 && b3_13 && b4_3 && b5_13;
boolean seq_01323 = b0_13 && b1_14 && b2_41 && b3_13 && b4_3 && b5_13;
boolean seq_61335 = b6_12 && b7_3 && b8_53 && b9_16 && b10_13 && b11_11;
boolean seq_01341 = b0_13 && b1_17 && b2_59 && b3_13 && b4_3 && b5_60;
boolean seq_01346 = b0_13 && b1_17 && b2_26 && b3_13 && b4_3 && b5_60;
boolean seq_01350 = b0_13 && b1_17 && b2_65 && b3_13 && b4_3 && b5_60;
boolean seq_61379 = b6_12 && b7_28 && b8_25 && b9_16 && b10_24 && b11_11;
boolean seq_01384 = b0_13 && b1_42 && b2_60 && b3_28 && b4_48 && b5_64;
if(b0_51) {
matched = true;
pattern_id = 0;
}
if(b0_51 && b1_77 && b2_66 && b3_13 && b4_66) {
matched = true;
pattern_id = 1;
}
if(b0_51 && b1_26 && b2_36 && b3_7 && b4_17) {
matched = true;
pattern_id = 2;
}
if(b0_51 && b1_26 && b2_42 && b3_23) {
matched = true;
pattern_id = 3;
}
if(b0_51 && b1_52 && b2_51 && b3_4 && b4_38 && b5_43 && b6_21 && b7_31 && b8_28) {
matched = true;
pattern_id = 4;
}
if(b0_51 && b1_29 && b2_28 && b3_45) {
matched = true;
pattern_id = 5;
}
if(b0_51 && b1_4 && b2_30 && b3_4 && b4_10 && b5_29) {
matched = true;
pattern_id = 6;
}
if(b0_51 && b1_74 && b2_33 && b3_26 && b4_18 && b5_29 && b6_62 && b7_13) {
matched = true;
pattern_id = 7;
}
if(b0_51 && b1_51 && b2_36 && b3_10 && b4_17 && b5_5 && b6_12) {
matched = true;
pattern_id = 8;
}
if(b0_51 && b1_9 && b2_14 && b3_21 && b4_8 && b5_58 && b6_50 && b7_16 && b8_2 && b9_44 && b10_3 && b11_11 && b12_1 && b13_4) {
matched = true;
pattern_id = 9;
}
if(b0_62 && b1_34 && b2_3 && b3_48 && b4_30 && b5_23) {
matched = true;
pattern_id = 10;
}
if(b0_52) {
matched = true;
pattern_id = 11;
}
if(b0_52 && b1_17 && b2_52) {
matched = true;
pattern_id = 12;
}
if(b0_52 && b1_18 && b2_14) {
matched = true;
pattern_id = 13;
}
if(b0_52 && b1_18 && b2_41 && b3_48 && b4_12 && b5_50 && b6_26 && b7_27) {
matched = true;
pattern_id = 14;
}
if(b0_52 && b1_32 && b2_37 && b3_65 && b4_49 && b5_58 && b6_63 && b7_36 && b8_64 && b9_62 && b10_58 && b11_35 && b12_42) {
matched = true;
pattern_id = 15;
}
if(b0_52 && b1_19 && b2_10 && b3_32 && b4_35 && b5_19 && b6_57 && b7_11 && b8_57) {
matched = true;
pattern_id = 16;
}
if(b0_52 && b1_6 && b2_45 && b3_60 && b4_10 && b5_69 && b6_57 && b7_15 && b8_20 && b9_55 && b10_22 && b11_50 && b12_29 && b13_30) {
matched = true;
pattern_id = 17;
}
if(b0_52 && b1_6 && b2_45 && b3_60 && b4_48 && b5_43 && b6_53 && b7_28 && b8_57) {
matched = true;
pattern_id = 18;
}
if(b0_52 && b1_27 && b2_14 && b3_65 && b4_25 && b5_41 && b6_57 && b7_37 && b8_57 && b9_2 && b10_61) {
matched = true;
pattern_id = 19;
}
if(b0_52 && b1_4 && b2_45 && b3_60 && b4_31 && b5_54 && b6_29 && b7_54 && b8_58 && b9_38 && b10_58) {
matched = true;
pattern_id = 20;
}
if(b0_52 && b1_4 && b2_45 && b3_60 && b4_31 && b5_43 && b6_13 && b7_4 && b8_52 && b9_54) {
matched = true;
pattern_id = 21;
}
if(b0_52 && b1_56 && b2_45 && b3_58 && b4_20 && b5_37 && b6_13 && b7_63 && b8_59 && b9_2 && b10_22 && b11_36 && b12_34 && b13_30) {
matched = true;
pattern_id = 22;
}
if(b0_52 && b1_56 && b2_45 && b3_22 && b4_27 && b5_52 && b6_31 && b7_15 && b8_20 && b9_43 && b10_53 && b11_51 && b12_37) {
matched = true;
pattern_id = 23;
}
if(b0_52 && b1_61 && b2_4 && b3_4 && b4_55 && b5_56) {
matched = true;
pattern_id = 24;
}
if(b0_52 && b1_61 && b2_4 && b3_4 && b4_55 && b5_59 && b6_61 && b7_4 && b8_57) {
matched = true;
pattern_id = 25;
}
if(b0_52 && b1_61 && b2_37 && b3_45 && b4_40 && b5_36 && b6_1) {
matched = true;
pattern_id = 26;
}
if(seq_027 && b6_13 && b7_62 && b8_25 && b9_7 && b10_18 && b11_5 && b12_37) {
matched = true;
pattern_id = 27;
}
if(seq_027 && b6_13 && b7_62 && b8_60 && b9_51 && b10_42 && b11_25 && b12_19 && b13_30) {
matched = true;
pattern_id = 28;
}
if(b0_52 && b1_61 && b2_47 && b3_12 && b4_50 && b5_43 && b6_57 && b7_57) {
matched = true;
pattern_id = 29;
}
if(b0_52 && b1_61 && b2_39 && b3_60 && b4_33 && b5_11 && b6_38 && b7_37 && b8_5 && b9_14 && b10_33 && b11_23 && b12_23 && b13_30) {
matched = true;
pattern_id = 30;
}
if(b0_52 && b1_61 && b2_46 && b3_40 && b4_23 && b5_34 && b6_9 && b7_57) {
matched = true;
pattern_id = 31;
}
if(seq_032 && b6_16 && b7_42 && b8_13 && b9_35 && b10_35 && b11_2 && b12_37) {
matched = true;
pattern_id = 32;
}
if(seq_032 && b6_16 && b7_60 && b8_14 && b9_6 && b10_15 && b11_49) {
matched = true;
pattern_id = 33;
}
if(b0_52 && b1_10 && b2_8 && b3_60 && b4_10 && b5_56) {
matched = true;
pattern_id = 34;
}
if(b0_52 && b1_10 && b2_28 && b3_32 && b4_60) {
matched = true;
pattern_id = 35;
}
if(seq_036 && b6_13 && b7_4 && b8_4 && b9_54) {
matched = true;
pattern_id = 36;
}
if(seq_036 && b6_58 && b7_62 && b8_4 && b9_51 && b10_59 && b11_49) {
matched = true;
pattern_id = 37;
}
if(b0_52 && b1_66 && b2_39 && b3_30 && b4_45 && b5_52 && b6_13 && b7_62 && b8_55 && b9_54) {
matched = true;
pattern_id = 38;
}
if(b0_52 && b1_66 && b2_39 && b3_30 && b4_45 && b5_43 && b6_29 && b7_49 && b8_60 && b9_51 && b10_42 && b11_25 && b12_37) {
matched = true;
pattern_id = 39;
}
if(b0_52 && b1_36 && b2_58 && b3_55 && b4_35 && b5_34 && b6_29 && b7_57) {
matched = true;
pattern_id = 40;
}
if(b0_70 && b1_1 && b2_48 && b3_42 && b4_36 && b5_11 && b6_56) {
matched = true;
pattern_id = 41;
}
if(b0_70 && b1_54 && b2_19 && b3_23 && b4_18 && b5_28 && b6_26 && b7_19 && b8_35 && b9_6) {
matched = true;
pattern_id = 42;
}
if(b0_70 && b1_21 && b2_20 && b3_7 && b4_36 && b5_44 && b6_56) {
matched = true;
pattern_id = 43;
}
if(b0_70 && b1_13 && b2_15 && b3_35 && b4_18 && b5_27 && b6_7 && b7_64) {
matched = true;
pattern_id = 44;
}
if(b0_70 && b1_49 && b2_17 && b3_3 && b4_51) {
matched = true;
pattern_id = 45;
}
if(b0_70 && b1_49 && b2_2 && b3_18 && b4_36 && b5_20 && b6_36 && b7_64) {
matched = true;
pattern_id = 46;
}
if(b0_75 && b1_76 && b2_6 && b3_66) {
matched = true;
pattern_id = 47;
}
if(b0_75 && b1_9 && b2_14 && b3_16 && b4_53) {
matched = true;
pattern_id = 48;
}
if(b0_74 && b1_75 && b2_31 && b3_7 && b4_51) {
matched = true;
pattern_id = 49;
}
if(b0_25 && b1_64 && b2_45 && b3_40 && b4_13 && b5_37 && b6_53 && b7_47) {
matched = true;
pattern_id = 50;
}
if(b0_25 && b1_4 && b2_8 && b3_24 && b4_23 && b5_24 && b6_15) {
matched = true;
pattern_id = 51;
}
if(b0_25 && b1_9 && b2_14 && b3_48 && b4_53) {
matched = true;
pattern_id = 52;
}
if(b0_32 && b1_28 && b2_29 && b3_25 && b4_5 && b5_6) {
matched = true;
pattern_id = 53;
}
if(b0_41 && b1_69 && b2_32 && b3_25 && b4_14 && b5_45 && b6_38 && b7_27 && b8_41 && b9_29 && b10_14 && b11_14) {
matched = true;
pattern_id = 54;
}
if(b0_41 && b1_35 && b2_22 && b3_5 && b4_33 && b5_31 && b6_5 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 55;
}
if(b0_41 && b1_49 && b2_19 && b3_25 && b4_8 && b5_56 && b6_41) {
matched = true;
pattern_id = 56;
}
if(b0_31) {
matched = true;
pattern_id = 57;
}
if(b0_31 && b1_37 && b2_40 && b3_16 && b4_26) {
matched = true;
pattern_id = 58;
}
if(b0_31 && b1_26) {
matched = true;
pattern_id = 59;
}
if(b0_31 && b1_26 && b2_50 && b3_29 && b4_28) {
matched = true;
pattern_id = 60;
}
if(b0_31 && b1_26 && b2_27) {
matched = true;
pattern_id = 61;
}
if(b0_31 && b1_26 && b2_27 && b3_29 && b4_26 && b5_29 && b6_1 && b7_13 && b8_15) {
matched = true;
pattern_id = 62;
}
if(b0_31 && b1_26 && b2_3 && b3_47 && b4_7 && b5_23 && b6_1 && b7_13) {
matched = true;
pattern_id = 63;
}
if(b0_31 && b1_1 && b2_7 && b3_43) {
matched = true;
pattern_id = 64;
}
if(b0_31 && b1_1 && b2_7 && b3_43 && b4_26) {
matched = true;
pattern_id = 65;
}
if(b0_31 && b1_54 && b2_33 && b3_7 && b4_42) {
matched = true;
pattern_id = 66;
}
if(b0_31 && b1_54 && b2_33 && b3_7 && b4_53 && b5_35 && b6_50 && b7_2) {
matched = true;
pattern_id = 67;
}
if(b0_31 && b1_54 && b2_13 && b3_35) {
matched = true;
pattern_id = 68;
}
if(b0_31 && b1_11 && b2_31 && b3_25) {
matched = true;
pattern_id = 69;
}
if(b0_31 && b1_11 && b2_5 && b3_20 && b4_42 && b5_48) {
matched = true;
pattern_id = 70;
}
if(b0_31 && b1_11 && b2_5 && b3_20 && b4_53 && b5_35 && b6_50 && b7_2) {
matched = true;
pattern_id = 71;
}
if(b0_31 && b1_11 && b2_20 && b3_42) {
matched = true;
pattern_id = 72;
}
if(b0_31 && b1_11 && b2_19 && b3_44 && b4_40) {
matched = true;
pattern_id = 73;
}
if(b0_31 && b1_11 && b2_7 && b3_43 && b4_26) {
matched = true;
pattern_id = 74;
}
if(b0_31 && b1_48 && b2_19 && b3_39 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 75;
}
if(b0_31 && b1_2 && b2_5 && b3_42) {
matched = true;
pattern_id = 76;
}
if(b0_31 && b1_2 && b2_18 && b3_10) {
matched = true;
pattern_id = 77;
}
if(b0_31 && b1_2 && b2_18 && b3_10 && b4_63 && b5_6 && b6_56) {
matched = true;
pattern_id = 78;
}
if(b0_31 && b1_2 && b2_18 && b3_10 && b4_53 && b5_13 && b6_60 && b7_16 && b8_2 && b9_7 && b10_1) {
matched = true;
pattern_id = 79;
}
if(b0_31 && b1_35 && b2_19 && b3_18 && b4_29 && b5_10 && b6_10 && b7_17) {
matched = true;
pattern_id = 80;
}
if(b0_31 && b1_53 && b2_13 && b3_42) {
matched = true;
pattern_id = 81;
}
if(b0_31 && b1_53 && b2_13 && b3_42 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 82;
}
if(b0_31 && b1_53 && b2_13 && b3_42 && b4_42 && b5_10 && b6_28 && b7_8 && b8_10 && b9_6 && b10_10 && b11_32) {
matched = true;
pattern_id = 83;
}
if(b0_31 && b1_15 && b2_2 && b3_25 && b4_14 && b5_39 && b6_7 && b7_6 && b8_1) {
matched = true;
pattern_id = 84;
}
if(b0_31 && b1_15 && b2_2 && b3_15 && b4_17 && b5_9 && b6_38 && b7_27) {
matched = true;
pattern_id = 85;
}
if(b0_31 && b1_15 && b2_2 && b3_44 && b4_22) {
matched = true;
pattern_id = 86;
}
if(b0_31 && b1_15 && b2_2 && b3_44 && b4_22 && b5_29 && b6_1 && b7_13 && b8_28 && b9_25 && b10_26 && b11_26) {
matched = true;
pattern_id = 87;
}
if(b0_31 && b1_15 && b2_2 && b3_44 && b4_22 && b5_53 && b6_3 && b7_13) {
matched = true;
pattern_id = 88;
}
if(b0_31 && b1_15 && b2_2 && b3_43 && b4_18 && b5_26 && b6_26 && b7_33 && b8_35) {
matched = true;
pattern_id = 89;
}
if(b0_31 && b1_15 && b2_2 && b3_18) {
matched = true;
pattern_id = 90;
}
if(b0_31 && b1_15 && b2_2 && b3_1) {
matched = true;
pattern_id = 91;
}
if(b0_31 && b1_21 && b2_31 && b3_25) {
matched = true;
pattern_id = 92;
}
if(b0_31 && b1_21 && b2_31 && b3_25 && b4_42) {
matched = true;
pattern_id = 93;
}
if(b0_31 && b1_21 && b2_31 && b3_54) {
matched = true;
pattern_id = 94;
}
if(b0_31 && b1_21 && b2_31 && b3_54 && b4_42) {
matched = true;
pattern_id = 95;
}
if(b0_31 && b1_59 && b2_20 && b3_23 && b4_6) {
matched = true;
pattern_id = 96;
}
if(b0_31 && b1_59 && b2_42 && b3_10 && b4_19 && b5_38 && b6_7 && b7_29 && b8_5) {
matched = true;
pattern_id = 97;
}
if(b0_31 && b1_59 && b2_42 && b3_15) {
matched = true;
pattern_id = 98;
}
if(b0_31 && b1_59 && b2_42 && b3_15 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 99;
}
if(b0_31 && b1_59 && b2_7 && b3_43) {
matched = true;
pattern_id = 100;
}
if(b0_31 && b1_24 && b2_31) {
matched = true;
pattern_id = 101;
}
if(b0_31 && b1_30 && b2_19 && b3_20) {
matched = true;
pattern_id = 102;
}
if(b0_31 && b1_40 && b2_7 && b3_42 && b4_28) {
matched = true;
pattern_id = 103;
}
if(b0_31 && b1_13 && b2_6 && b3_57 && b4_38 && b5_61 && b6_44 && b7_23 && b8_21 && b9_25 && b10_57) {
matched = true;
pattern_id = 104;
}
if(b0_31 && b1_13 && b2_31 && b3_42 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 105;
}
if(b0_31 && b1_13 && b2_36 && b3_43) {
matched = true;
pattern_id = 106;
}
if(b0_31 && b1_13 && b2_36 && b3_43 && b4_42) {
matched = true;
pattern_id = 107;
}
if(b0_31 && b1_13 && b2_36 && b3_43 && b4_42 && b5_11 && b6_56) {
matched = true;
pattern_id = 108;
}
if(b0_31 && b1_13 && b2_36 && b3_43 && b4_42 && b5_16 && b6_41 && b7_64) {
matched = true;
pattern_id = 109;
}
if(seq_0110 && b6_8 && b7_38 && b8_61) {
matched = true;
pattern_id = 110;
}
if(seq_0110 && b6_7 && b7_8 && b8_6 && b9_6 && b10_6 && b11_32) {
matched = true;
pattern_id = 111;
}
if(b0_31 && b1_13 && b2_36 && b3_43 && b4_42 && b5_28 && b6_26 && b7_9 && b8_13 && b9_64 && b10_23 && b11_3 && b12_16 && b13_2 && b14_20) {
matched = true;
pattern_id = 112;
}
if(b0_31 && b1_13 && b2_23) {
matched = true;
pattern_id = 113;
}
if(b0_31 && b1_13 && b2_22 && b3_14 && b4_2 && b5_31 && b6_7 && b7_7) {
matched = true;
pattern_id = 114;
}
if(b0_31 && b1_16 && b2_33) {
matched = true;
pattern_id = 115;
}
if(b0_31 && b1_16 && b2_36 && b3_5 && b4_1 && b5_31 && b6_26) {
matched = true;
pattern_id = 116;
}
if(b0_31 && b1_16 && b2_5 && b3_43) {
matched = true;
pattern_id = 117;
}
if(b0_31 && b1_16 && b2_42) {
matched = true;
pattern_id = 118;
}
if(b0_31 && b1_16 && b2_2) {
matched = true;
pattern_id = 119;
}
if(b0_31 && b1_49 && b2_16 && b3_42 && b4_42) {
matched = true;
pattern_id = 120;
}
if(b0_31 && b1_51 && b2_5 && b3_42) {
matched = true;
pattern_id = 121;
}
if(b0_31 && b1_51 && b2_5 && b3_61) {
matched = true;
pattern_id = 122;
}
if(b0_31 && b1_51 && b2_16 && b3_1 && b4_46 && b5_10 && b6_28 && b7_37) {
matched = true;
pattern_id = 123;
}
if(b0_31 && b1_51 && b2_16 && b3_1 && b4_18 && b5_39 && b6_18) {
matched = true;
pattern_id = 124;
}
if(b0_31 && b1_65 && b2_13 && b3_43) {
matched = true;
pattern_id = 125;
}
if(b0_31 && b1_65 && b2_19 && b3_23 && b4_22 && b5_10 && b6_10 && b7_17 && b8_15) {
matched = true;
pattern_id = 126;
}
if(b0_50) {
matched = true;
pattern_id = 127;
}
if(b0_50 && b1_37 && b2_57) {
matched = true;
pattern_id = 128;
}
if(b0_50 && b1_37 && b2_14 && b3_16) {
matched = true;
pattern_id = 129;
}
if(b0_50 && b1_58 && b2_50 && b3_14 && b4_15 && b5_39) {
matched = true;
pattern_id = 130;
}
if(b0_50 && b1_58 && b2_50 && b3_27 && b4_16 && b5_31 && b6_16 && b7_37) {
matched = true;
pattern_id = 131;
}
if(b0_50 && b1_26 && b2_50 && b3_29 && b4_26) {
matched = true;
pattern_id = 132;
}
if(b0_50 && b1_26 && b2_50 && b3_50 && b4_26 && b5_38 && b6_21) {
matched = true;
pattern_id = 133;
}
if(b0_50 && b1_26 && b2_37 && b3_9 && b4_46 && b5_4 && b6_11 && b7_12 && b8_13 && b9_5) {
matched = true;
pattern_id = 134;
}
if(b0_50 && b1_26 && b2_60 && b3_40 && b4_7 && b5_34 && b6_39 && b7_17 && b8_5 && b9_28) {
matched = true;
pattern_id = 135;
}
if(b0_50 && b1_26 && b2_32 && b3_25 && b4_1 && b5_6 && b6_37 && b7_1 && b8_10 && b9_8 && b10_15 && b11_3 && b12_21 && b13_21) {
matched = true;
pattern_id = 136;
}
if(b0_50 && b1_26 && b2_15 && b3_25 && b4_14 && b5_6 && b6_7 && b7_23 && b8_29 && b9_37 && b10_16) {
matched = true;
pattern_id = 137;
}
if(b0_50 && b1_26 && b2_36 && b3_14 && b4_1 && b5_31 && b6_2 && b7_7 && b8_44) {
matched = true;
pattern_id = 138;
}
if(b0_50 && b1_26 && b2_20 && b3_27 && b4_14 && b5_9 && b6_39 && b7_43 && b8_10 && b9_11) {
matched = true;
pattern_id = 139;
}
if(b0_50 && b1_26 && b2_42 && b3_10 && b4_17 && b5_2) {
matched = true;
pattern_id = 140;
}
if(b0_50 && b1_26 && b2_7 && b3_26 && b4_2 && b5_29 && b6_7 && b7_26 && b8_19 && b9_12 && b10_14 && b11_2 && b12_5) {
matched = true;
pattern_id = 141;
}
if(b0_50 && b1_52 && b2_27 && b3_50 && b4_28 && b5_29 && b6_21 && b7_23) {
matched = true;
pattern_id = 142;
}
if(b0_50 && b1_14 && b2_50 && b3_15 && b4_36 && b5_2 && b6_47) {
matched = true;
pattern_id = 143;
}
if(b0_50 && b1_14 && b2_27 && b3_13 && b4_55 && b5_61 && b6_57 && b7_63 && b8_15 && b9_44 && b10_26) {
matched = true;
pattern_id = 144;
}
if(b0_50 && b1_14 && b2_14 && b3_16 && b4_26 && b5_50 && b6_41 && b7_34) {
matched = true;
pattern_id = 145;
}
if(b0_50 && b1_17 && b2_25 && b3_50 && b4_21 && b5_5 && b6_7 && b7_17 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 146;
}
if(b0_50 && b1_17 && b2_25 && b3_50 && b4_21 && b5_9 && b6_10 && b7_32 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 147;
}
if(b0_50 && b1_18 && b2_14) {
matched = true;
pattern_id = 148;
}
if(b0_50 && b1_60) {
matched = true;
pattern_id = 149;
}
if(b0_50 && b1_60 && b2_50 && b3_52 && b4_1 && b5_44) {
matched = true;
pattern_id = 150;
}
if(b0_50 && b1_60 && b2_28 && b3_56 && b4_35) {
matched = true;
pattern_id = 151;
}
if(b0_50 && b1_60 && b2_48 && b3_56 && b4_18) {
matched = true;
pattern_id = 152;
}
if(b0_50 && b1_60 && b2_11 && b3_1 && b4_1 && b5_46 && b6_10 && b7_17 && b8_61 && b9_24 && b10_4) {
matched = true;
pattern_id = 153;
}
if(b0_50 && b1_60 && b2_52 && b3_56) {
matched = true;
pattern_id = 154;
}
if(b0_50 && b1_19 && b2_30 && b3_46 && b4_18 && b5_11 && seq_6155 && b12_14) {
matched = true;
pattern_id = 155;
}
if(b0_50 && b1_19 && b2_31 && b3_44 && b4_36 && b5_20 && b6_17 && b7_8 && b8_30 && b9_20 && b10_25) {
matched = true;
pattern_id = 156;
}
if(b0_50 && b1_19 && b2_20 && b3_45 && b4_33 && b5_7 && b6_16 && b7_36) {
matched = true;
pattern_id = 157;
}
if(b0_50 && b1_19 && b2_20 && b3_36 && b4_41 && b5_9 && b6_10 && b7_32 && b8_34) {
matched = true;
pattern_id = 158;
}
if(b0_50 && b1_6 && b2_39 && b3_60 && b4_18 && b5_16 && b6_18 && b7_8 && b8_14 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 159;
}
if(b0_50 && b1_6 && b2_54 && b3_9 && b4_28 && b5_59 && b6_39 && b7_8 && b8_13 && b9_35 && b10_17 && b11_6) {
matched = true;
pattern_id = 160;
}
if(b0_50 && b1_6 && b2_19 && b3_35 && b4_1 && b5_9 && b6_18 && b7_9 && b8_52 && b9_5 && b10_29 && b11_17 && b12_33) {
matched = true;
pattern_id = 161;
}
if(b0_50 && b1_27 && b2_34 && b3_21 && b4_57 && b5_5 && b6_19 && b7_23) {
matched = true;
pattern_id = 162;
}
if(seq_0163 && b6_20 && b7_9 && b8_28 && b9_29 && b10_29 && b11_19) {
matched = true;
pattern_id = 163;
}
if(seq_0163 && b6_20 && b7_9 && b8_43 && b9_42 && b10_44 && b11_26 && b12_16 && b13_10 && b14_5) {
matched = true;
pattern_id = 164;
}
if(seq_0163 && b6_20 && b7_9 && b8_43 && b9_43 && b10_44 && b11_26 && b12_16 && b13_10 && b14_5) {
matched = true;
pattern_id = 165;
}
if(seq_0166 && b6_1 && b7_15 && b8_40 && b9_38) {
matched = true;
pattern_id = 166;
}
if(seq_0166 && b6_1 && b7_15 && b8_40 && b9_38 && b10_48) {
matched = true;
pattern_id = 167;
}
if(b0_50 && b1_4 && b2_21 && b3_11 && b4_10 && b5_36) {
matched = true;
pattern_id = 168;
}
if(b0_50 && b1_74 && b2_10 && b3_46 && b4_69 && b5_10 && b6_21 && b7_68 && b8_1 && b9_33) {
matched = true;
pattern_id = 169;
}
if(b0_50 && b1_56 && b2_53 && b3_22 && b4_18 && b5_31 && b6_7) {
matched = true;
pattern_id = 170;
}
if(b0_50 && b1_56 && b2_24 && b3_7 && b4_1 && b5_33 && b6_2 && b7_13 && b8_31 && b9_15 && b10_5 && b11_27 && b12_34 && b13_13) {
matched = true;
pattern_id = 171;
}
if(b0_50 && b1_67 && b2_33 && b3_39 && b4_16 && b5_16 && b6_39 && b7_9 && b8_49 && b9_10 && b10_12 && b11_3) {
matched = true;
pattern_id = 172;
}
if(b0_50 && b1_67 && b2_7 && b3_44 && b4_50 && b5_10 && b6_26 && b7_18 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 173;
}
if(b0_50 && b1_3 && b2_46 && b3_24 && b4_28) {
matched = true;
pattern_id = 174;
}
if(b0_50 && b1_3 && b2_24 && b3_27 && b4_1 && b5_28 && b6_26 && b7_4 && b8_5 && b9_8 && b10_15) {
matched = true;
pattern_id = 175;
}
if(seq_0176 && seq_6176 && b12_23 && b13_8) {
matched = true;
pattern_id = 176;
}
if(seq_0176 && seq_6176 && b12_23 && b13_8 && b14_4) {
matched = true;
pattern_id = 177;
}
if(b0_50 && b1_61 && b2_47 && b3_55 && b4_28) {
matched = true;
pattern_id = 178;
}
if(b0_50 && b1_8 && b2_53 && b3_30 && b4_15 && b5_16 && b6_11 && b7_14 && b8_5 && b9_12 && b10_35 && b11_19 && b12_8 && b13_6) {
matched = true;
pattern_id = 179;
}
if(b0_50 && b1_8 && b2_24 && b3_18 && b4_11 && b5_5 && b6_10 && b7_32 && b8_27 && b9_24 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 180;
}
if(b0_50 && b1_8 && b2_24 && b3_7 && b4_37 && b5_44 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 181;
}
if(b0_50 && b1_8 && b2_42 && b3_25 && b4_24 && b5_59 && b6_45 && b7_38 && b8_31 && b9_25 && b10_6 && b11_19 && b12_15) {
matched = true;
pattern_id = 182;
}
if(b0_50 && b1_10 && b2_45 && b3_32 && b4_34 && b5_13 && b6_1 && b7_17 && b8_18 && b9_20) {
matched = true;
pattern_id = 183;
}
if(b0_50 && b1_10 && b2_13 && b3_7 && b4_22 && b5_5 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 184;
}
if(b0_50 && b1_66 && b2_42 && b3_15 && b4_48 && b5_47 && b6_10 && b7_23) {
matched = true;
pattern_id = 185;
}
if(b0_50 && b1_36 && b2_8 && b3_40 && b4_40 && b5_34 && b6_34 && b7_53) {
matched = true;
pattern_id = 186;
}
if(b0_50 && b1_36 && b2_24 && b3_41 && b4_2 && b5_5 && b6_40 && b7_6 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 187;
}
if(b0_50 && b1_68 && b2_39 && b3_59 && b4_23 && b5_30 && b6_2 && b7_26 && b8_36 && b9_35 && b10_19 && b11_26 && b12_17 && b13_27 && b14_5) {
matched = true;
pattern_id = 188;
}
if(b0_50 && b1_50 && b2_33 && b3_40 && b4_13) {
matched = true;
pattern_id = 189;
}
if(b0_50 && b1_57 && b2_33 && b3_20 && b4_24 && b5_16 && b6_39 && b7_23) {
matched = true;
pattern_id = 190;
}
if(b0_50 && b1_57 && b2_5 && b3_10 && b4_24 && b5_46 && b6_19 && b7_10 && b8_7 && b9_13) {
matched = true;
pattern_id = 191;
}
if(seq_0192 && b6_19 && b7_10 && b8_7 && b9_13) {
matched = true;
pattern_id = 192;
}
if(seq_0192 && b6_27 && b7_26 && b8_36 && b9_25 && b10_32 && b11_23 && b12_18 && b13_10) {
matched = true;
pattern_id = 193;
}
if(seq_0192 && b6_10 && b7_27 && b8_24) {
matched = true;
pattern_id = 194;
}
if(seq_0195 && seq_6195) {
matched = true;
pattern_id = 195;
}
if(seq_0195 && seq_6195 && b12_6) {
matched = true;
pattern_id = 196;
}
if(b0_50 && b1_1 && b2_25 && b3_27 && b4_5 && b5_10 && b6_11 && b7_6 && b8_15) {
matched = true;
pattern_id = 197;
}
if(b0_50 && b1_1 && b2_32 && b3_48 && b4_28) {
matched = true;
pattern_id = 198;
}
if(b0_50 && b1_1 && b2_15 && b3_7 && b4_36 && b5_47 && b6_7 && b7_13 && b8_18 && b9_6 && b10_19) {
matched = true;
pattern_id = 199;
}
if(b0_50 && b1_1 && b2_31 && b3_29 && b4_14 && b5_51 && b6_27) {
matched = true;
pattern_id = 200;
}
if(b0_50 && b1_1 && b2_31 && b3_31 && b4_24 && b5_5 && b6_16 && b7_25 && b8_5 && b9_12 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 201;
}
if(b0_50 && b1_1 && b2_31 && b3_39 && b4_52 && b5_39 && b6_18 && b7_9) {
matched = true;
pattern_id = 202;
}
if(b0_50 && b1_1 && b2_31 && b3_20 && b4_26 && b5_44 && b6_17 && b7_27) {
matched = true;
pattern_id = 203;
}
if(seq_0204 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 204;
}
if(seq_0204 && b6_1 && b7_27 && b8_6 && b9_26 && b10_36) {
matched = true;
pattern_id = 205;
}
if(seq_0204 && b6_1 && b7_27 && b8_6 && b9_26 && b10_48 && b11_30 && b12_39) {
matched = true;
pattern_id = 206;
}
if(seq_0204 && b6_1 && b7_27 && b8_18) {
matched = true;
pattern_id = 207;
}
if(seq_0204 && b6_37 && b7_23) {
matched = true;
pattern_id = 208;
}
if(seq_0204 && b6_37 && b7_9 && b8_35 && b9_35 && b10_15 && b11_26 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 209;
}
if(seq_0204 && b6_37 && b7_43 && b8_10 && b9_20 && b10_17 && b11_6) {
matched = true;
pattern_id = 210;
}
if(seq_0204 && b6_37 && b7_1 && b8_5 && b9_20 && b10_5 && b11_26 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 211;
}
if(seq_0204 && b6_18 && b7_12 && b8_39 && b9_35 && b10_10) {
matched = true;
pattern_id = 212;
}
if(b0_50 && b1_1 && b2_31 && b3_27 && b4_26 && b5_39 && b6_36 && b7_10) {
matched = true;
pattern_id = 213;
}
if(b0_50 && b1_1 && b2_48 && b3_29 && b4_14 && b5_51 && b6_27) {
matched = true;
pattern_id = 214;
}
if(b0_50 && b1_1 && b2_11 && b3_50 && b4_6 && b5_25 && b6_38 && b7_34 && b8_10 && b9_10 && b10_26 && b11_18 && b12_21 && b13_12) {
matched = true;
pattern_id = 215;
}
if(b0_50 && b1_1 && b2_11 && b3_23 && b4_36 && b5_27 && b6_41 && b7_6 && b8_5) {
matched = true;
pattern_id = 216;
}
if(b0_50 && b1_1 && b2_23 && b3_41 && b4_37 && b5_27 && b6_1 && b7_27 && b8_18) {
matched = true;
pattern_id = 217;
}
if(b0_50 && b1_1 && b2_23 && b3_10 && b4_17 && b5_31 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 218;
}
if(seq_0219 && b6_19 && b7_19 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 219;
}
if(seq_0219 && b6_19 && b7_19 && b8_28 && b9_26 && b10_29 && b11_15 && b12_25 && b13_23 && b14_1) {
matched = true;
pattern_id = 220;
}
if(b0_50 && b1_1 && b2_23 && b3_14 && b4_12 && b5_20 && b6_30 && b7_12 && b8_13 && b9_30 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 221;
}
if(b0_50 && b1_1 && b2_23 && b3_36 && b4_18 && b5_38 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 222;
}
if(b0_50 && b1_1 && b2_20 && b3_35 && b4_33 && b5_28 && b6_39 && b7_38 && b8_5) {
matched = true;
pattern_id = 223;
}
if(b0_50 && b1_1 && b2_20 && b3_5 && b4_2 && b5_17 && b6_21) {
matched = true;
pattern_id = 224;
}
if(seq_0225 && b6_18) {
matched = true;
pattern_id = 225;
}
if(seq_0225 && b6_18 && b7_41) {
matched = true;
pattern_id = 226;
}
if(b0_50 && b1_1 && b2_42 && b3_10 && b4_39 && b5_5 && b6_28 && b7_13 && b8_31 && b9_20) {
matched = true;
pattern_id = 227;
}
if(seq_0228 && b6_17 && b7_27) {
matched = true;
pattern_id = 228;
}
if(seq_0228 && b6_17 && b7_27 && b8_29 && b9_29 && b10_16) {
matched = true;
pattern_id = 229;
}
if(b0_50 && b1_1 && b2_42 && b3_14 && b4_28) {
matched = true;
pattern_id = 230;
}
if(b0_50 && b1_1 && b2_42 && b3_14 && b4_28 && b5_26 && b6_11 && b7_19 && b8_19 && b9_47 && b10_9) {
matched = true;
pattern_id = 231;
}
if(b0_50 && b1_1 && b2_42 && b3_43 && b4_28 && b5_51 && b6_7 && b7_12 && b8_10 && b9_26 && b10_26 && b11_44 && b12_5) {
matched = true;
pattern_id = 232;
}
if(b0_50 && b1_1 && b2_42 && b3_43 && b4_46 && b5_26 && b6_11 && b7_19 && b8_28 && b9_8 && b10_15 && b11_22) {
matched = true;
pattern_id = 233;
}
if(b0_50 && b1_1 && b2_22 && b3_39 && b4_16 && b5_16 && b6_7) {
matched = true;
pattern_id = 234;
}
if(seq_0235 && b6_19 && b7_19 && b8_19) {
matched = true;
pattern_id = 235;
}
if(seq_0235 && b6_28 && b7_32 && b8_35) {
matched = true;
pattern_id = 236;
}
if(seq_0237 && b6_19 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 237;
}
if(seq_0237 && b6_19 && b7_50 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 238;
}
if(b0_50 && b1_1 && b2_2 && b3_64 && b4_1 && b5_29 && b6_20) {
matched = true;
pattern_id = 239;
}
if(b0_50 && b1_1 && b2_2 && b3_5 && b4_24 && b5_16 && b6_28 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 240;
}
if(b0_50 && b1_1 && b2_52 && b3_17 && b4_5 && b5_16 && seq_6241) {
matched = true;
pattern_id = 241;
}
if(b0_50 && b1_1 && b2_52 && b3_7 && b4_16 && b5_9 && b6_10 && b7_6 && b8_28 && b9_26 && b10_34 && b11_8) {
matched = true;
pattern_id = 242;
}
if(b0_50 && b1_1 && b2_52 && b3_7 && b4_33 && b5_6 && b6_11 && b7_32 && b8_18 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 243;
}
if(seq_0244 && b6_11 && b7_6 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 244;
}
if(seq_0244 && b6_11 && b7_6 && b8_28 && b9_26 && b10_29 && b11_27) {
matched = true;
pattern_id = 245;
}
if(b0_50 && b1_1 && b2_18 && b3_46 && b4_18 && b5_11 && seq_6155 && b12_14) {
matched = true;
pattern_id = 246;
}
if(b0_50 && b1_1 && b2_18 && b3_27 && b4_26 && b5_39 && b6_36 && b7_10) {
matched = true;
pattern_id = 247;
}
if(b0_50 && b1_54 && b2_27 && b3_43 && b4_47 && b5_51 && b6_21 && b7_4 && b8_34 && b9_3 && b10_2) {
matched = true;
pattern_id = 248;
}
if(b0_50 && b1_54 && b2_27 && b3_27 && b4_16 && b5_9 && b6_7 && b7_23) {
matched = true;
pattern_id = 249;
}
if(b0_50 && b1_54 && b2_40 && b3_50 && b4_43 && b5_35 && b6_48 && b7_10 && b8_7 && b9_24 && b10_29 && b11_37 && b12_16 && b13_2 && b14_14) {
matched = true;
pattern_id = 250;
}
if(b0_50 && b1_54 && b2_33 && b3_39 && b4_47 && b5_28 && b6_41) {
matched = true;
pattern_id = 251;
}
if(b0_50 && b1_54 && b2_33 && b3_27 && b4_16) {
matched = true;
pattern_id = 252;
}
if(seq_0253 && b6_26 && b7_8 && b8_28 && b9_8 && b10_32) {
matched = true;
pattern_id = 253;
}
if(seq_0253 && b6_26 && b7_8 && b8_28 && b9_8 && b10_32 && b11_27) {
matched = true;
pattern_id = 254;
}
if(seq_0253 && b6_26 && b7_8 && b8_18 && b9_6 && b10_19 && b11_26 && b12_5 && b13_16) {
matched = true;
pattern_id = 255;
}
if(seq_0253 && seq_6256 && b12_5 && b13_16) {
matched = true;
pattern_id = 256;
}
if(seq_0257 && seq_6256 && b12_5 && b13_16) {
matched = true;
pattern_id = 257;
}
if(seq_0257 && seq_6256 && b12_5 && b13_16 && b14_4) {
matched = true;
pattern_id = 258;
}
if(seq_0259 && b6_41 && b7_13 && b8_1 && b9_15) {
matched = true;
pattern_id = 259;
}
if(seq_0259 && b6_41 && b7_37 && b8_14 && b9_11 && b10_26 && b11_6 && b12_23) {
matched = true;
pattern_id = 260;
}
if(b0_50 && b1_54 && b2_32 && b3_50 && b4_36 && b5_20 && b6_25 && b7_9 && b8_37 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 261;
}
if(b0_50 && b1_54 && b2_32 && b3_31 && b4_1 && b5_27 && b6_27 && b7_37 && b8_10 && b9_5 && b10_9 && b11_26 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 262;
}
if(b0_50 && b1_54 && b2_32 && b3_27 && b4_28 && b5_26 && seq_6263 && b12_10 && b13_20 && b14_6) {
matched = true;
pattern_id = 263;
}
if(b0_50 && b1_54 && b2_32 && b3_27 && b4_46 && b5_2 && b6_2 && b7_7 && b8_11 && b9_30 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 264;
}
if(b0_50 && b1_54 && b2_31 && b3_14 && b4_17 && b5_38 && b6_17 && b7_8 && b8_13) {
matched = true;
pattern_id = 265;
}
if(b0_50 && b1_54 && b2_24 && b3_7 && b4_18 && b5_29 && b6_2 && b7_7 && b8_35 && b9_5 && b10_4 && b11_26 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 266;
}
if(b0_50 && b1_54 && b2_13 && b3_15 && b4_14 && b5_9 && b6_39 && b7_43 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 267;
}
if(b0_50 && b1_54 && b2_13 && b3_35 && b4_28 && b5_26 && b6_17) {
matched = true;
pattern_id = 268;
}
if(b0_50 && b1_54 && b2_20 && b3_41 && b4_21 && b5_9 && b6_10 && b7_32 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 269;
}
if(b0_50 && b1_54 && b2_19 && b3_5 && b4_47 && b5_38 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 270;
}
if(b0_50 && b1_54 && b2_19 && b3_5 && b4_47 && b5_27 && b6_8 && b7_7 && b8_8 && b9_25 && b10_10 && b11_6 && b12_22) {
matched = true;
pattern_id = 271;
}
if(b0_50 && b1_54 && b2_19 && b3_5 && b4_5 && b5_6 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 272;
}
if(b0_50 && b1_54 && b2_7 && b3_15 && b4_37 && b5_5 && seq_6273) {
matched = true;
pattern_id = 273;
}
if(b0_50 && b1_54 && b2_7 && b3_23 && b4_36 && b5_26 && b6_11 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 274;
}
if(b0_50 && b1_54 && b2_7 && b3_44 && b4_22 && b5_38 && b6_41 && b7_37) {
matched = true;
pattern_id = 275;
}
if(b0_50 && b1_11 && b2_33 && b3_39 && b4_16 && b5_5 && b6_16 && b7_34 && b8_13 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 276;
}
if(b0_50 && b1_11 && b2_33 && b3_23 && b4_46 && b5_27 && b6_8 && b7_18 && b8_5 && b9_25 && b10_5 && b11_19) {
matched = true;
pattern_id = 277;
}
if(seq_0278 && b6_25 && b7_19 && b8_13) {
matched = true;
pattern_id = 278;
}
if(seq_0278 && b6_25 && b7_19 && b8_13 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 279;
}
if(seq_0280 && b6_26) {
matched = true;
pattern_id = 280;
}
if(seq_0280 && b6_26 && b7_41 && b8_9 && b9_3 && b10_22 && b11_15) {
matched = true;
pattern_id = 281;
}
if(b0_50 && b1_11 && b2_33 && b3_18 && b4_43 && b5_9 && b6_1 && b7_17 && b8_18 && b9_20) {
matched = true;
pattern_id = 282;
}
if(b0_50 && b1_11 && b2_33 && b3_18 && b4_5 && b5_38 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 283;
}
if(b0_50 && b1_11 && b2_33 && b3_18 && b4_5 && b5_60 && b6_50 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 284;
}
if(b0_50 && b1_11 && b2_33 && b3_7 && b4_18 && b5_25 && b6_2 && b7_34 && b8_28 && b9_10 && b10_9 && b11_30) {
matched = true;
pattern_id = 285;
}
if(b0_50 && b1_11 && b2_33 && b3_7 && b4_19 && b5_17 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 286;
}
if(b0_50 && b1_11 && b2_33 && b3_7 && b4_36 && b5_20 && b6_30 && b7_12) {
matched = true;
pattern_id = 287;
}
if(b0_50 && b1_11 && b2_24 && b3_18 && b4_1 && b5_47 && b6_10 && b7_13 && b8_7 && b9_8 && b10_12) {
matched = true;
pattern_id = 288;
}
if(b0_50 && b1_11 && b2_48 && b3_39 && b4_18 && b5_39 && b6_17 && b7_9 && b8_28 && b9_30 && b10_33 && b11_17) {
matched = true;
pattern_id = 289;
}
if(b0_50 && b1_11 && b2_48 && b3_15 && b4_29 && b5_16 && b6_43 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 290;
}
if(b0_50 && b1_11 && b2_11 && b3_42 && b4_33 && b5_7 && seq_6291) {
matched = true;
pattern_id = 291;
}
if(seq_0292 && b6_27 && b7_26 && b8_15) {
matched = true;
pattern_id = 292;
}
if(seq_0292 && b6_27 && b7_26 && b8_15 && b9_24 && b10_19 && b11_10 && b12_24 && b13_6 && b14_5) {
matched = true;
pattern_id = 293;
}
if(seq_0292 && b6_27 && b7_26 && b8_15 && b9_24 && b10_9 && b11_26 && b12_8 && b13_12 && b14_13) {
matched = true;
pattern_id = 294;
}
if(seq_0292 && b6_27 && b7_26 && b8_15 && b9_39 && b10_38) {
matched = true;
pattern_id = 295;
}
if(seq_0292 && b6_27 && b7_26 && b8_15 && b9_20 && b10_9) {
matched = true;
pattern_id = 296;
}
if(seq_0292 && b6_27 && b7_26 && b8_15 && b9_8 && b10_32) {
matched = true;
pattern_id = 297;
}
if(b0_50 && b1_11 && b2_11 && b3_14 && b4_40 && b5_11 && b6_2 && b7_6 && b8_15) {
matched = true;
pattern_id = 298;
}
if(b0_50 && b1_11 && b2_11 && b3_14 && b4_14 && b5_26 && b6_2) {
matched = true;
pattern_id = 299;
}
if(seq_0300 && seq_6300) {
matched = true;
pattern_id = 300;
}
if(seq_0300 && seq_6300 && b12_6) {
matched = true;
pattern_id = 301;
}
if(b0_50 && b1_11 && b2_11 && b3_14 && b4_24 && b5_10 && b6_27 && b7_37) {
matched = true;
pattern_id = 302;
}
if(seq_0303 && b6_2 && b7_38) {
matched = true;
pattern_id = 303;
}
if(seq_0303 && b6_2 && b7_38 && b8_29 && b9_4 && b10_2 && b11_42 && b12_4) {
matched = true;
pattern_id = 304;
}
if(b0_50 && b1_11 && b2_11 && b3_14 && b4_5 && b5_5 && b6_26 && b7_8 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 305;
}
if(b0_50 && b1_11 && b2_11 && b3_14 && b4_29 && b5_7 && b6_8 && b7_27) {
matched = true;
pattern_id = 306;
}
if(b0_50 && b1_11 && b2_36 && b3_25 && b4_2 && b5_51 && b6_7 && b7_27 && b8_32 && b9_25 && b10_17 && b11_20 && b12_8) {
matched = true;
pattern_id = 307;
}
if(b0_50 && b1_11 && b2_36 && b3_25 && b4_5 && b5_42 && b6_2 && b7_29 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 308;
}
if(b0_50 && b1_11 && b2_36 && b3_25 && b4_5 && b5_6 && b6_7 && b7_19 && b8_35 && b9_5 && b10_4 && b11_26 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 309;
}
if(seq_0310 && b6_47 && b7_10 && b8_10 && b9_29 && b10_16) {
matched = true;
pattern_id = 310;
}
if(seq_0310 && b6_38 && b7_27 && b8_35 && b9_18 && b10_15 && b11_2) {
matched = true;
pattern_id = 311;
}
if(b0_50 && b1_11 && b2_36 && b3_14 && b4_6 && b5_38 && b6_27 && b7_26 && b8_10) {
matched = true;
pattern_id = 312;
}
if(b0_50 && b1_11 && b2_36 && b3_14 && b4_6 && b5_39 && b6_30 && b7_34 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 313;
}
if(seq_0314 && b6_17 && b7_27) {
matched = true;
pattern_id = 314;
}
if(seq_0314 && b6_17 && b7_27 && b8_29 && b9_24 && b10_30 && b11_8 && b12_39) {
matched = true;
pattern_id = 315;
}
if(b0_50 && b1_11 && b2_5 && b3_20 && b4_42 && b5_47 && b6_7 && b7_7 && b8_1 && b9_35 && b10_41 && b11_28 && b12_39) {
matched = true;
pattern_id = 316;
}
if(b0_50 && b1_11 && b2_19 && b3_20 && b4_12 && b5_38 && b6_41 && b7_1 && b8_31 && b9_40) {
matched = true;
pattern_id = 317;
}
if(b0_50 && b1_11 && b2_19 && b3_23 && b4_22 && b5_5 && b6_28 && b7_8 && b8_46 && b9_25 && b10_10 && b11_6 && b12_22) {
matched = true;
pattern_id = 318;
}
if(b0_50 && b1_11 && b2_19 && b3_44 && b4_24 && b5_5 && b6_10 && b7_38 && b8_5 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 319;
}
if(b0_50 && b1_11 && b2_19 && b3_44 && b4_6 && b5_16 && b6_18 && b7_9 && b8_13 && b9_33 && b10_14 && b11_10 && b12_16 && b13_13) {
matched = true;
pattern_id = 320;
}
if(seq_0321 && b6_36 && b7_13 && b8_24 && b9_6 && b10_10 && b11_30) {
matched = true;
pattern_id = 321;
}
if(seq_0321 && b6_36 && b7_13 && b8_31 && b9_15 && b10_5 && b11_27) {
matched = true;
pattern_id = 322;
}
if(b0_50 && b1_11 && b2_19 && b3_27 && b4_30 && b5_55 && b6_21 && b7_10 && b8_7) {
matched = true;
pattern_id = 323;
}
if(seq_0324 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 324;
}
if(seq_0324 && b6_7 && b7_7 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 325;
}
if(seq_0324 && b6_7 && b7_7 && b8_15 && b9_33) {
matched = true;
pattern_id = 326;
}
if(b0_50 && b1_11 && b2_22 && b3_36 && b4_6 && b5_31 && b6_37 && b7_31 && b8_56 && b9_8 && b10_17 && b11_19 && b12_15) {
matched = true;
pattern_id = 327;
}
if(b0_50 && b1_11 && b2_7 && b3_55 && b4_12 && b5_21 && b6_26 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 328;
}
if(b0_50 && b1_11 && b2_7 && b3_32 && b4_18 && b5_26 && b6_26 && b7_33 && b8_14 && b9_12 && b10_6 && b11_26 && b12_24 && b13_18 && b14_16) {
matched = true;
pattern_id = 329;
}
if(b0_50 && b1_11 && b2_7 && b3_9 && b4_12 && b5_10 && seq_6330 && b12_14) {
matched = true;
pattern_id = 330;
}
if(b0_50 && b1_11 && b2_7 && b3_19) {
matched = true;
pattern_id = 331;
}
if(b0_50 && b1_11 && b2_2 && b3_27 && b4_1 && b5_38 && b6_27 && b7_17 && b8_24) {
matched = true;
pattern_id = 332;
}
if(b0_50 && b1_11 && b2_43 && b3_27 && b4_22 && b5_9 && b6_36 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 333;
}
if(b0_50 && b1_11 && b2_43 && b3_27 && b4_11 && b5_16 && b6_7 && b7_33 && b8_34 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 334;
}
if(seq_0335 && b6_19 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 335;
}
if(seq_0335 && b6_19 && b7_23 && b8_38 && b9_5 && b10_4 && b11_6 && b12_14 && b13_11 && b14_15) {
matched = true;
pattern_id = 336;
}
if(b0_50 && b1_11 && b2_16 && b3_44 && b4_18 && b5_16 && b6_18 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 337;
}
if(b0_50 && b1_11 && b2_56 && b3_41 && b4_12 && b5_7 && b6_28 && b7_12 && b8_31) {
matched = true;
pattern_id = 338;
}
if(b0_50 && b1_48 && b2_33 && b3_7 && b4_18 && b5_29 && b6_27 && b7_26 && b8_36 && b9_6 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 339;
}
if(b0_50 && b1_48 && b2_32 && b3_48 && b4_29 && b5_21 && b6_40) {
matched = true;
pattern_id = 340;
}
if(b0_50 && b1_48 && b2_32 && b3_31 && b4_24 && b5_17 && b6_26 && b7_46 && b8_18 && b9_25 && b10_14 && b11_28 && b12_24) {
matched = true;
pattern_id = 341;
}
if(b0_50 && b1_48 && b2_32 && b3_44 && b4_18 && b5_20 && b6_21 && b7_17 && b8_45 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 342;
}
if(b0_50 && b1_48 && b2_15 && b3_41 && b4_33 && b5_10 && seq_6343) {
matched = true;
pattern_id = 343;
}
if(b0_50 && b1_48 && b2_15 && b3_42 && b4_33 && b5_7 && seq_6291) {
matched = true;
pattern_id = 344;
}
if(b0_50 && b1_48 && b2_15 && b3_27 && b4_16 && b5_9 && b6_41) {
matched = true;
pattern_id = 345;
}
if(b0_50 && b1_48 && b2_31 && b3_14 && b4_14 && b5_51 && b6_27 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 346;
}
if(b0_50 && b1_48 && b2_24 && b3_50) {
matched = true;
pattern_id = 347;
}
if(b0_50 && b1_48 && b2_24 && b3_42 && b4_36 && b5_20 && seq_6348) {
matched = true;
pattern_id = 348;
}
if(b0_50 && b1_48 && b2_48 && b3_14 && b4_17 && b5_5 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 349;
}
if(b0_50 && b1_48 && b2_13 && b3_42 && b4_21 && b5_38 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 350;
}
if(b0_50 && b1_48 && b2_13 && b3_42 && b4_21 && b5_26 && b6_21) {
matched = true;
pattern_id = 351;
}
if(b0_50 && b1_48 && b2_13 && b3_18 && b4_12 && b5_39 && b6_11 && b7_12 && b8_13 && b9_22 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 352;
}
if(b0_50 && b1_48 && b2_5 && b3_50 && b4_15 && b5_5 && b6_16 && b7_19 && b8_13 && b9_24) {
matched = true;
pattern_id = 353;
}
if(b0_50 && b1_48 && b2_5 && b3_27 && b4_3) {
matched = true;
pattern_id = 354;
}
if(b0_50 && b1_48 && b2_20 && b3_10 && b4_29 && b5_26 && b6_40 && b7_9 && b8_45 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 355;
}
if(b0_50 && b1_48 && b2_20 && b3_27 && b4_5 && b5_9 && b6_2 && b7_37 && b8_1 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 356;
}
if(b0_50 && b1_48 && b2_19 && b3_39 && b4_28) {
matched = true;
pattern_id = 357;
}
if(b0_50 && b1_48 && b2_19 && b3_39 && b4_28 && b5_10 && b6_25 && b7_32 && b8_10 && b9_10) {
matched = true;
pattern_id = 358;
}
if(b0_50 && b1_48 && b2_19 && b3_39 && b4_28 && b5_44 && b6_8 && b7_38 && b8_8 && b9_18 && b10_19 && b11_2 && b12_5) {
matched = true;
pattern_id = 359;
}
if(b0_50 && b1_48 && b2_19 && b3_39 && b4_37 && b5_27 && b6_7 && b7_26 && b8_19 && b9_25 && b10_6 && b11_16 && b12_27) {
matched = true;
pattern_id = 360;
}
if(b0_50 && b1_48 && b2_19 && b3_44 && b4_14 && b5_2 && b6_36 && b7_13 && b8_7 && b9_8 && b10_12) {
matched = true;
pattern_id = 361;
}
if(b0_50 && b1_48 && b2_19 && b3_44 && b4_22 && b5_9 && b6_36 && b7_13 && b8_7 && b9_8 && b10_12) {
matched = true;
pattern_id = 362;
}
if(seq_0363 && seq_6363) {
matched = true;
pattern_id = 363;
}
if(seq_0363 && seq_6363 && b12_6) {
matched = true;
pattern_id = 364;
}
if(b0_50 && b1_48 && b2_19 && b3_1 && b4_2 && b5_25 && b6_2 && b7_19 && b8_35 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 365;
}
if(b0_50 && b1_48 && b2_52 && b3_44 && b4_6 && b5_5 && b6_39 && b7_30 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 366;
}
if(b0_50 && b1_48 && b2_43 && b3_1 && b4_1 && b5_26 && b6_10 && b7_13 && b8_35 && b9_20 && b10_29) {
matched = true;
pattern_id = 367;
}
if(b0_50 && b1_2 && b2_15 && b3_19 && b4_33 && b5_38 && b6_19 && b7_19 && b8_19) {
matched = true;
pattern_id = 368;
}
if(b0_50 && b1_2 && b2_31 && b3_14 && b4_5 && b5_46 && b6_27 && b7_32 && b8_27 && b9_11 && b10_17 && b11_26 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 369;
}
if(b0_50 && b1_2 && b2_31 && b3_14 && b4_5 && b5_31 && b6_8 && b7_34 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 370;
}
if(seq_0371 && b6_7 && b7_7 && b8_29 && b9_2 && b10_43) {
matched = true;
pattern_id = 371;
}
if(seq_0371 && b6_7 && b7_7 && b8_29 && b9_2 && b10_43 && b11_32) {
matched = true;
pattern_id = 372;
}
if(seq_0373 && seq_6373) {
matched = true;
pattern_id = 373;
}
if(seq_0373 && b6_27 && b7_37 && b8_28 && b9_37 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 374;
}
if(b0_50 && b1_2 && b2_20 && b3_7 && b4_12 && b5_7 && b6_37 && b7_25 && b8_11 && b9_11 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 375;
}
if(seq_0376 && seq_6241) {
matched = true;
pattern_id = 376;
}
if(seq_0376 && b6_2 && b7_26 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 377;
}
if(seq_0378 && b6_11 && b7_13 && b8_45 && b9_18 && b10_15) {
matched = true;
pattern_id = 378;
}
if(seq_0378 && b6_11 && b7_13 && b8_45 && b9_18 && b10_15 && b11_15 && b12_25 && b13_23 && b14_1) {
matched = true;
pattern_id = 379;
}
if(seq_0380 && b6_1 && b7_27 && b8_18) {
matched = true;
pattern_id = 380;
}
if(seq_0380 && b6_1 && b7_27 && b8_18 && b9_33) {
matched = true;
pattern_id = 381;
}
if(b0_50 && b1_2 && b2_2 && b3_39 && b4_28 && b5_16 && b6_39 && b7_9 && b8_19 && b9_29 && b10_26 && b11_18 && b12_11 && b13_17 && b14_25) {
matched = true;
pattern_id = 382;
}
if(b0_50 && b1_2 && b2_2 && b3_39 && b4_28 && b5_27 && b6_2 && b7_8 && b8_35) {
matched = true;
pattern_id = 383;
}
if(b0_50 && b1_2 && b2_2 && b3_39 && b4_28 && b5_44 && b6_8 && b7_6 && b8_1 && b9_23 && b10_6) {
matched = true;
pattern_id = 384;
}
if(b0_50 && b1_2 && b2_2 && b3_39 && b4_28 && b5_26 && b6_17 && b7_19 && b8_35 && b9_6 && b10_34) {
matched = true;
pattern_id = 385;
}
if(b0_50 && b1_2 && b2_43 && b3_10 && b4_2 && b5_31 && b6_26 && b7_50 && b8_28 && b9_10 && b10_9 && b11_30) {
matched = true;
pattern_id = 386;
}
if(b0_50 && b1_2 && b2_18 && b3_25 && b4_36 && b5_7 && b6_21 && b7_6 && b8_5 && b9_18 && b10_4 && b11_18 && b12_23 && b13_22) {
matched = true;
pattern_id = 387;
}
if(b0_50 && b1_2 && b2_18 && b3_10 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 388;
}
if(b0_50 && b1_2 && b2_1 && b3_25 && b4_15 && b5_27 && b6_27 && b7_26 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 389;
}
if(b0_50 && b1_2 && b2_1 && b3_41 && b4_33 && b5_10 && seq_6343) {
matched = true;
pattern_id = 390;
}
if(b0_50 && b1_2 && b2_1 && b3_44 && b4_18 && b5_20 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 391;
}
if(b0_50 && b1_35 && b2_33 && b3_54 && b4_24 && b5_10 && b6_39 && b7_19 && b8_39 && b9_5 && b10_4 && b11_26 && b12_24 && b13_18 && b14_16) {
matched = true;
pattern_id = 392;
}
if(b0_50 && b1_35 && b2_33 && b3_38 && b4_1 && b5_28 && b6_10 && b7_30 && b8_5 && b9_22) {
matched = true;
pattern_id = 393;
}
if(b0_50 && b1_35 && b2_24 && b3_10 && b4_15 && b5_53 && b6_10 && b7_9 && b8_62 && b9_56 && b10_32 && b11_23 && b12_20 && b13_8) {
matched = true;
pattern_id = 394;
}
if(seq_0395 && b6_8 && b7_10 && b8_18) {
matched = true;
pattern_id = 395;
}
if(seq_0395 && b6_8 && b7_10 && b8_18 && b9_25 && b10_5 && b11_19) {
matched = true;
pattern_id = 396;
}
if(seq_0397 && b6_1 && b7_10 && b8_7 && b9_24 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 397;
}
if(seq_0397 && b6_1 && b7_27 && b8_18) {
matched = true;
pattern_id = 398;
}
if(seq_0397 && b6_7 && b7_9 && b8_8 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 399;
}
if(b0_50 && b1_35 && b2_13 && b3_35 && b4_19 && b5_5 && b6_10) {
matched = true;
pattern_id = 400;
}
if(b0_50 && b1_35 && b2_23 && b3_10 && b4_39 && b5_2 && b6_2 && b7_7 && b8_30) {
matched = true;
pattern_id = 401;
}
if(b0_50 && b1_35 && b2_23 && b3_6 && b4_6 && b5_11 && b6_8 && b7_8 && b8_5 && b9_13) {
matched = true;
pattern_id = 402;
}
if(b0_50 && b1_35 && b2_19 && b3_44 && b4_26 && b5_39 && b6_36 && b7_10) {
matched = true;
pattern_id = 403;
}
if(b0_50 && b1_35 && b2_19 && b3_18 && b4_24 && b5_38 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 404;
}
if(b0_50 && b1_35 && b2_19 && b3_18 && b4_24 && b5_35 && b6_10 && b7_19 && b8_32 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 405;
}
if(b0_50 && b1_35 && b2_19 && b3_18 && b4_24 && b5_27 && b6_8 && b7_10 && b8_18) {
matched = true;
pattern_id = 406;
}
if(b0_50 && b1_35 && b2_19 && b3_18 && b4_37 && b5_27 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 407;
}
if(seq_0408 && b6_19 && b7_13 && b8_35 && b9_20 && b10_29) {
matched = true;
pattern_id = 408;
}
if(seq_0408 && b6_19 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 409;
}
if(b0_50 && b1_35 && b2_42 && b3_33 && b4_3 && b5_7 && seq_6410) {
matched = true;
pattern_id = 410;
}
if(b0_50 && b1_35 && b2_42 && b3_21 && b4_18 && b5_7 && seq_6410) {
matched = true;
pattern_id = 411;
}
if(b0_50 && b1_35 && b2_42 && b3_39 && b4_33 && b5_28 && b6_39 && b7_8 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 412;
}
if(b0_50 && b1_35 && b2_42 && b3_18 && b4_12 && b5_27 && seq_6413 && b12_8) {
matched = true;
pattern_id = 413;
}
if(b0_50 && b1_35 && b2_42 && b3_27 && b4_17 && b5_47 && seq_6413 && b12_8) {
matched = true;
pattern_id = 414;
}
if(b0_50 && b1_35 && b2_22 && b3_14 && b4_12 && b5_20 && b6_25 && b7_6 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 415;
}
if(seq_0416 && b6_18) {
matched = true;
pattern_id = 416;
}
if(seq_0416 && b6_18 && b7_41) {
matched = true;
pattern_id = 417;
}
if(b0_50 && b1_35 && b2_52 && b3_35 && b4_14 && b5_31 && b6_27 && b7_12 && b8_7 && b9_8 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 418;
}
if(seq_0419 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 419;
}
if(seq_0419 && b6_41 && b7_1 && b8_31 && b9_33) {
matched = true;
pattern_id = 420;
}
if(b0_50 && b1_53 && b2_32 && b3_5 && b4_33 && b5_45 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 421;
}
if(b0_50 && b1_53 && b2_15 && b3_27 && b4_42 && b5_10 && b6_18 && b7_27 && b8_6 && b9_18 && b10_16) {
matched = true;
pattern_id = 422;
}
if(b0_50 && b1_53 && b2_31 && b3_14 && b4_42 && b5_10 && b6_18 && b7_27 && b8_6 && b9_18 && b10_16) {
matched = true;
pattern_id = 423;
}
if(b0_50 && b1_53 && b2_24 && b3_35 && b4_12 && b5_7 && b6_8 && b7_8 && b8_5 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 424;
}
if(b0_50 && b1_53 && b2_24 && b3_5 && b4_36 && b5_44 && b6_1 && b7_27 && b8_6 && b9_26 && b10_48 && b11_39 && b12_16 && b13_19 && b14_20) {
matched = true;
pattern_id = 425;
}
if(b0_50 && b1_53 && b2_24 && b3_7 && b4_26 && b5_10 && b6_26 && b7_27 && b8_29 && b9_30 && b10_33 && b11_18 && b12_39) {
matched = true;
pattern_id = 426;
}
if(seq_0427 && b6_25 && b7_19 && b8_19 && b9_18 && b10_16) {
matched = true;
pattern_id = 427;
}
if(seq_0427 && b6_20 && b7_9 && b8_13 && b9_56) {
matched = true;
pattern_id = 428;
}
if(b0_50 && b1_53 && b2_24 && b3_7 && b4_30 && b5_35 && b6_1 && b7_9 && b8_37 && b9_5) {
matched = true;
pattern_id = 429;
}
if(b0_50 && b1_53 && b2_24 && b3_7 && b4_15 && b5_9 && b6_28 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 430;
}
if(b0_50 && b1_53 && b2_23 && b3_14 && b4_24 && b5_44 && b6_26 && b7_9) {
matched = true;
pattern_id = 431;
}
if(seq_0432 && b6_18 && b7_13 && b8_27 && b9_8 && b10_33) {
matched = true;
pattern_id = 432;
}
if(seq_0432 && b6_18 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 433;
}
if(seq_0432 && b6_18 && b7_13 && b8_10 && b9_10 && b10_23) {
matched = true;
pattern_id = 434;
}
if(seq_0432 && b6_18 && b7_6 && b8_28 && b9_39 && b10_9 && b11_24) {
matched = true;
pattern_id = 435;
}
if(seq_0432 && b6_18 && b7_6 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 436;
}
if(b0_50 && b1_53 && b2_5 && b3_46 && b4_49 && b5_32 && b6_19 && b7_36 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 437;
}
if(b0_50 && b1_53 && b2_19 && b3_61 && b4_36 && b5_25 && b6_8 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 438;
}
if(b0_50 && b1_53 && b2_2 && b3_29 && b4_69 && b5_44 && b6_36 && b7_41) {
matched = true;
pattern_id = 439;
}
if(seq_0440 && b6_19 && b7_12 && b8_14 && b9_36 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 440;
}
if(seq_0440 && b6_19 && b7_12 && b8_14 && b9_36 && b10_26 && b11_17 && b12_15) {
matched = true;
pattern_id = 441;
}
if(b0_50 && b1_15 && b2_33 && b3_35 && b4_15 && b5_25 && b6_7 && b7_7) {
matched = true;
pattern_id = 442;
}
if(b0_50 && b1_15 && b2_24 && b3_25 && b4_15 && b5_5 && b6_10 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 443;
}
if(b0_50 && b1_15 && b2_24 && b3_23 && b4_22 && b5_9 && b6_1 && b7_25 && b8_27 && b9_9) {
matched = true;
pattern_id = 444;
}
if(b0_50 && b1_15 && b2_24 && b3_23 && b4_6 && b5_9 && b6_38 && b7_8 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 445;
}
if(b0_50 && b1_15 && b2_13 && b3_29 && b4_14 && b5_51 && b6_27) {
matched = true;
pattern_id = 446;
}
if(seq_0447 && b6_30 && b7_8 && b8_31) {
matched = true;
pattern_id = 447;
}
if(seq_0447 && b6_40 && b7_33 && b8_32) {
matched = true;
pattern_id = 448;
}
if(b0_50 && b1_15 && b2_7 && b3_38 && b4_26 && b5_39 && b6_36 && b7_10) {
matched = true;
pattern_id = 449;
}
if(b0_50 && b1_15 && b2_2 && b3_15 && b4_17 && b5_5 && b6_41) {
matched = true;
pattern_id = 450;
}
if(b0_50 && b1_15 && b2_2 && b3_14 && b4_24 && b5_10 && b6_36 && b7_9 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 451;
}
if(b0_50 && b1_15 && b2_2 && b3_44 && b4_22 && b5_26 && b6_28 && b7_7 && b8_10 && b9_26 && b10_15) {
matched = true;
pattern_id = 452;
}
if(seq_0453 && b6_10 && b7_38 && b8_6) {
matched = true;
pattern_id = 453;
}
if(seq_0453 && b6_10 && b7_38 && b8_6 && b9_33 && b10_39 && b11_18) {
matched = true;
pattern_id = 454;
}
if(b0_50 && b1_15 && b2_2 && b3_7 && b4_6 && b5_9 && b6_25 && b7_25 && b8_24 && b9_25 && b10_6 && b11_19 && b12_15) {
matched = true;
pattern_id = 455;
}
if(b0_50 && b1_21 && b2_32 && b3_14 && b4_22 && b5_25 && b6_41 && b7_32 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 456;
}
if(b0_50 && b1_21 && b2_15 && b3_25 && b4_5) {
matched = true;
pattern_id = 457;
}
if(b0_50 && b1_21 && b2_15 && b3_23 && b4_33 && b5_28 && b6_25 && b7_6 && b8_44 && b9_10 && b10_23 && b11_8) {
matched = true;
pattern_id = 458;
}
if(b0_50 && b1_21 && b2_31 && b3_39 && b4_33 && b5_20 && b6_11 && b7_19 && b8_24 && b9_9 && b10_26 && b11_17 && b12_23 && b13_8 && b14_4) {
matched = true;
pattern_id = 459;
}
if(seq_0460 && b6_16 && b7_10 && b8_7) {
matched = true;
pattern_id = 460;
}
if(seq_0460 && seq_6461 && b12_8 && b13_12 && b14_6) {
matched = true;
pattern_id = 461;
}
if(seq_0460 && seq_6461 && b12_2 && b13_11 && b14_2) {
matched = true;
pattern_id = 462;
}
if(b0_50 && b1_21 && b2_13 && b3_27 && b4_1 && b5_10 && b6_16 && b7_27 && b8_18 && b9_5 && b10_9 && b11_33) {
matched = true;
pattern_id = 463;
}
if(b0_50 && b1_21 && b2_17 && b3_5 && b4_2 && b5_42 && seq_6464 && b12_12 && b13_7) {
matched = true;
pattern_id = 464;
}
if(seq_0465 && b6_51 && b7_12 && b8_18 && b9_35 && b10_41 && b11_26 && b12_24 && b13_18 && b14_16) {
matched = true;
pattern_id = 465;
}
if(seq_0465 && seq_6466 && b12_8) {
matched = true;
pattern_id = 466;
}
if(seq_0465 && seq_6466 && b12_8 && b13_9) {
matched = true;
pattern_id = 467;
}
if(seq_0465 && b6_26 && b7_23) {
matched = true;
pattern_id = 468;
}
if(seq_0469 && b6_27) {
matched = true;
pattern_id = 469;
}
if(seq_0469 && b6_27 && b7_41) {
matched = true;
pattern_id = 470;
}
if(b0_50 && b1_21 && b2_20 && b3_29 && b4_6 && b5_6 && b6_41) {
matched = true;
pattern_id = 471;
}
if(seq_0472 && b6_1 && b7_19 && b8_1 && b9_26) {
matched = true;
pattern_id = 472;
}
if(seq_0472 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 473;
}
if(seq_0472 && b6_1 && b7_27 && b8_6 && b9_26 && b10_48) {
matched = true;
pattern_id = 474;
}
if(seq_0475 && b6_41 && b7_1 && b8_31 && b9_33) {
matched = true;
pattern_id = 475;
}
if(seq_0475 && b6_45 && b7_32 && b8_18) {
matched = true;
pattern_id = 476;
}
if(b0_50 && b1_21 && b2_20 && b3_42 && b4_33 && b5_35 && b6_40 && b7_33 && b8_32) {
matched = true;
pattern_id = 477;
}
if(seq_0478 && seq_6330 && b12_14) {
matched = true;
pattern_id = 478;
}
if(seq_0478 && seq_6330 && b12_14 && b13_9) {
matched = true;
pattern_id = 479;
}
if(b0_50 && b1_21 && b2_20 && b3_14 && b4_5 && b5_38 && b6_7 && b7_32 && b8_11) {
matched = true;
pattern_id = 480;
}
if(seq_0481 && b6_1 && b7_25 && b8_27 && b9_9) {
matched = true;
pattern_id = 481;
}
if(seq_0481 && b6_1 && b7_25 && b8_27 && b9_9 && b10_1 && b11_35 && b12_26 && b13_4) {
matched = true;
pattern_id = 482;
}
if(seq_0481 && b6_50 && b7_13 && b8_45 && b9_18 && b10_15) {
matched = true;
pattern_id = 483;
}
if(seq_0481 && b6_50 && b7_13 && b8_45 && b9_18 && b10_15 && b11_15 && b12_25 && b13_23 && b14_1) {
matched = true;
pattern_id = 484;
}
if(b0_50 && b1_21 && b2_20 && b3_27 && b4_12 && b5_7 && b6_11 && b7_13 && b8_10 && b9_10 && b10_23 && b11_26 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 485;
}
if(b0_50 && b1_21 && b2_20 && b3_27 && b4_5 && b5_53) {
matched = true;
pattern_id = 486;
}
if(seq_0487 && b6_18 && b7_37) {
matched = true;
pattern_id = 487;
}
if(seq_0487 && b6_18 && b7_37 && b8_5 && b9_12 && b10_26 && b11_17 && b12_23 && b13_8 && b14_4) {
matched = true;
pattern_id = 488;
}
if(b0_50 && b1_21 && b2_20 && b3_7 && b4_17 && b5_10 && b6_39 && b7_9 && b8_19 && b9_13) {
matched = true;
pattern_id = 489;
}
if(b0_50 && b1_21 && b2_19 && b3_35 && b4_40 && b5_44) {
matched = true;
pattern_id = 490;
}
if(b0_50 && b1_21 && b2_42 && b3_50 && b4_42 && b5_39 && b6_18 && b7_10 && b8_5 && b9_10 && b10_15 && b11_32 && b12_5 && b13_8) {
matched = true;
pattern_id = 491;
}
if(b0_50 && b1_21 && b2_42 && b3_39 && b4_16 && b5_10 && b6_11 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 492;
}
if(b0_50 && b1_21 && b2_7 && b3_54 && b4_22 && b5_44 && b6_18 && b7_35 && b8_1) {
matched = true;
pattern_id = 493;
}
if(b0_50 && b1_59 && b2_23 && b3_35 && b4_6 && b5_38 && b6_17 && b7_8 && b8_30 && b9_20) {
matched = true;
pattern_id = 494;
}
if(b0_50 && b1_59 && b2_19 && b3_18 && b4_19 && b5_38 && b6_17 && b7_8 && b8_30 && b9_20) {
matched = true;
pattern_id = 495;
}
if(b0_50 && b1_59 && b2_19 && b3_26 && b4_21 && b5_38 && b6_17 && b7_8 && b8_30 && b9_20) {
matched = true;
pattern_id = 496;
}
if(b0_50 && b1_59 && b2_7 && b3_50 && b4_69 && b5_55 && b6_38 && b7_9 && b8_13 && b9_22 && b10_39) {
matched = true;
pattern_id = 497;
}
if(b0_50 && b1_59 && b2_7 && b3_43 && b4_28 && b5_26 && b6_39 && b7_27 && b8_15) {
matched = true;
pattern_id = 498;
}
if(b0_50 && b1_22 && b2_7 && b3_25 && b4_26 && b5_31 && b6_45 && b7_8) {
matched = true;
pattern_id = 499;
}
if(b0_50 && b1_22 && b2_7 && b3_19) {
matched = true;
pattern_id = 500;
}
if(b0_50 && b1_24 && b2_33 && b3_27 && b4_5 && b5_25 && b6_27 && b7_26 && b8_5 && b9_8 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 501;
}
if(b0_50 && b1_24 && b2_31 && b3_29 && b4_18 && b5_26 && b6_41 && b7_29) {
matched = true;
pattern_id = 502;
}
if(b0_50 && b1_24 && b2_24 && b3_42 && b4_5 && b5_46 && b6_16 && b7_19 && b8_10 && b9_10 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 503;
}
if(b0_50 && b1_24 && b2_24 && b3_26 && b4_12 && b5_25 && b6_21) {
matched = true;
pattern_id = 504;
}
if(b0_50 && b1_24 && b2_13 && b3_27 && b4_5 && b5_5 && b6_39 && b7_9 && b8_13 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 505;
}
if(b0_50 && b1_24 && b2_13 && b3_27 && b4_5 && b5_7 && b6_7 && b7_38 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 506;
}
if(b0_50 && b1_24 && b2_19 && b3_25 && b4_15 && b5_5 && b6_10 && b7_13 && b8_24 && b9_26 && b10_29) {
matched = true;
pattern_id = 507;
}
if(b0_50 && b1_24 && b2_19 && b3_25 && b4_15 && b5_44 && b6_8 && b7_34 && b8_5 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 508;
}
if(b0_50 && b1_24 && b2_19 && b3_39 && b4_47 && b5_17 && b6_28 && b7_7 && b8_44 && b9_26 && b10_15 && b11_26 && b12_21 && b13_32 && b14_21) {
matched = true;
pattern_id = 509;
}
if(b0_50 && b1_24 && b2_19 && b3_15 && b4_26 && b5_20 && b6_26 && b7_43) {
matched = true;
pattern_id = 510;
}
if(b0_50 && b1_24 && b2_19 && b3_15 && b4_26 && b5_44 && b6_17 && b7_27 && b8_29) {
matched = true;
pattern_id = 511;
}
if(b0_50 && b1_24 && b2_19 && b3_15 && b4_36 && b5_39 && b6_40 && b7_12 && b8_13 && b9_36 && b10_9 && b11_26 && b12_14 && b13_17 && b14_16) {
matched = true;
pattern_id = 512;
}
if(seq_0513 && b6_1 && b7_19 && b8_1 && b9_26 && b10_31) {
matched = true;
pattern_id = 513;
}
if(seq_0513 && b6_1 && b7_1 && b8_19 && b9_30) {
matched = true;
pattern_id = 514;
}
if(seq_0513 && b6_1 && b7_1 && b8_19 && b9_30 && b10_48) {
matched = true;
pattern_id = 515;
}
if(seq_0513 && b6_1 && b7_35 && b8_10 && b9_28) {
matched = true;
pattern_id = 516;
}
if(b0_50 && b1_24 && b2_19 && b3_15 && b4_33 && b5_20 && b6_1 && b7_19 && b8_1 && b9_26 && b10_31 && b11_27 && b12_45 && b13_31 && b14_20) {
matched = true;
pattern_id = 517;
}
if(b0_50 && b1_24 && b2_56 && b3_18 && b4_36 && b5_26 && b6_1 && b7_27 && b8_18) {
matched = true;
pattern_id = 518;
}
if(b0_50 && b1_30 && b2_33 && b3_41 && b4_26 && b5_20 && b6_26 && b7_43) {
matched = true;
pattern_id = 519;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_38 && b6_19 && b7_12 && b8_37) {
matched = true;
pattern_id = 520;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_2 && b6_27 && b7_37 && b8_5 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 521;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_16 && b6_11 && b7_13 && b8_31 && b9_20) {
matched = true;
pattern_id = 522;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_25 && b6_27 && b7_6 && b8_19 && b9_25 && b10_5 && b11_19) {
matched = true;
pattern_id = 523;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_27 && b6_8 && b7_26 && b8_15) {
matched = true;
pattern_id = 524;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_20 && b6_7 && b7_33 && b8_1 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 525;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_47 && b6_27 && b7_9 && b8_32 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 526;
}
if(b0_50 && b1_30 && b2_33 && b3_14 && b4_22 && b5_21 && b6_52 && b7_51 && b8_28 && b9_10 && b10_9 && b11_30) {
matched = true;
pattern_id = 527;
}
if(b0_50 && b1_30 && b2_33 && b3_35 && b4_26 && b5_26 && b6_17) {
matched = true;
pattern_id = 528;
}
if(b0_50 && b1_30 && b2_24 && b3_27 && b4_1 && b5_10 && b6_36 && b7_9 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 529;
}
if(b0_50 && b1_30 && b2_13 && b3_35 && b4_12 && b5_7 && b6_25 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 530;
}
if(b0_50 && b1_30 && b2_13 && b3_27 && b4_14 && b5_38 && b6_41 && b7_1 && b8_31 && b9_33 && b10_35 && b11_32) {
matched = true;
pattern_id = 531;
}
if(b0_50 && b1_30 && b2_17 && b3_14 && b4_22 && b5_9 && b6_36 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 532;
}
if(b0_50 && b1_30 && b2_17 && b3_43 && b4_22 && b5_9 && b6_36 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 533;
}
if(b0_50 && b1_30 && b2_23 && b3_5 && b4_19 && b5_38 && b6_41 && b7_1 && b8_19 && b9_30 && b10_29) {
matched = true;
pattern_id = 534;
}
if(b0_50 && b1_30 && b2_5 && b3_29 && b4_69 && b5_44 && b6_36) {
matched = true;
pattern_id = 535;
}
if(b0_50 && b1_30 && b2_5 && b3_27 && b4_5 && b5_11 && b6_2 && b7_17 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 536;
}
if(b0_50 && b1_30 && b2_19 && b3_20 && b4_46) {
matched = true;
pattern_id = 537;
}
if(seq_0538 && seq_6348) {
matched = true;
pattern_id = 538;
}
if(seq_0538 && seq_6348 && b12_6) {
matched = true;
pattern_id = 539;
}
if(b0_50 && b1_30 && b2_19 && b3_35 && b4_36 && b5_31 && b6_2 && b7_7 && b8_28 && b9_26 && b10_32 && b11_17 && b12_6) {
matched = true;
pattern_id = 540;
}
if(b0_50 && b1_30 && b2_22 && b3_7 && b4_19 && b5_38 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 541;
}
if(seq_0542 && b6_21 && b7_6 && b8_27 && b9_30 && b10_5 && b11_19 && b12_8 && b13_20 && b14_14) {
matched = true;
pattern_id = 542;
}
if(seq_0542 && b6_26 && b7_13 && b8_35 && b9_20 && b10_29) {
matched = true;
pattern_id = 543;
}
if(b0_50 && b1_30 && b2_7 && b3_20 && b4_18 && b5_39 && b6_21) {
matched = true;
pattern_id = 544;
}
if(b0_50 && b1_30 && b2_52 && b3_14 && b4_12 && b5_42 && b6_18 && b7_19 && b8_24 && b9_36 && b10_23 && b11_24 && b12_20) {
matched = true;
pattern_id = 545;
}
if(b0_50 && b1_30 && b2_52 && b3_23 && b4_5 && b5_16 && b6_25 && b7_10 && b8_36 && b9_37 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 546;
}
if(b0_50 && b1_30 && b2_56 && b3_23 && b4_33 && b5_51 && b6_1 && b7_27 && b8_6 && b9_9 && b10_30 && b11_19) {
matched = true;
pattern_id = 547;
}
if(b0_50 && b1_40 && b2_33 && b3_44 && b4_12 && b5_26 && b6_1 && b7_26 && b8_1 && b9_37) {
matched = true;
pattern_id = 548;
}
if(b0_50 && b1_40 && b2_33 && b3_7 && b4_6 && b5_10 && b6_35 && b7_13 && b8_6 && b9_9 && b10_30 && b11_19 && b12_6) {
matched = true;
pattern_id = 549;
}
if(b0_50 && b1_40 && b2_31 && b3_39 && b4_19 && b5_16 && b6_1 && b7_9 && b8_37 && b9_5) {
matched = true;
pattern_id = 550;
}
if(b0_50 && b1_40 && b2_24 && b3_1 && b4_28) {
matched = true;
pattern_id = 551;
}
if(b0_50 && b1_40 && b2_24 && b3_1 && b4_15 && b5_5 && b6_26 && b7_18) {
matched = true;
pattern_id = 552;
}
if(b0_50 && b1_40 && b2_24 && b3_1 && b4_1 && b5_38 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 553;
}
if(b0_50 && b1_40 && b2_24 && b3_1 && b4_1 && b5_11 && b6_7 && b7_6 && b8_8 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 554;
}
if(b0_50 && b1_40 && b2_24 && b3_1 && b4_37 && b5_26 && b6_7 && b7_7) {
matched = true;
pattern_id = 555;
}
if(b0_50 && b1_40 && b2_19 && b3_27 && b4_36 && b5_51 && b6_39 && b7_19 && b8_18 && b9_25 && b10_38 && b11_17 && b12_12 && b13_9) {
matched = true;
pattern_id = 556;
}
if(b0_50 && b1_40 && b2_19 && b3_7 && b4_36 && b5_2 && b6_35 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 557;
}
if(b0_50 && b1_40 && b2_42 && b3_19 && b4_40 && b5_31 && b6_7 && b7_6 && b8_19 && b9_27 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 558;
}
if(b0_50 && b1_40 && b2_42 && b3_19 && b4_6 && b5_11 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 559;
}
if(b0_50 && b1_40 && b2_7 && b3_60 && b4_18 && b5_20 && b6_8 && b7_34 && b8_5 && b9_12 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 560;
}
if(b0_50 && b1_40 && b2_7 && b3_14 && b4_36 && b5_26 && b6_18 && b7_12 && b8_39 && b9_25 && b10_6 && b11_19 && b12_15) {
matched = true;
pattern_id = 561;
}
if(b0_50 && b1_40 && b2_2 && b3_27 && b4_52 && b5_20 && b6_28 && b7_50 && b8_28 && b9_10 && b10_9 && b11_30) {
matched = true;
pattern_id = 562;
}
if(b0_50 && b1_7 && b2_48 && b3_42 && b4_12 && b5_7 && b6_26 && b7_52 && b8_7 && b9_5 && b10_34 && b11_27 && b12_44 && b13_13) {
matched = true;
pattern_id = 563;
}
if(b0_50 && b1_7 && b2_42 && b3_7 && b4_36 && b5_20 && b6_1 && b7_27 && b8_6 && b9_26 && b10_48) {
matched = true;
pattern_id = 564;
}
if(b0_50 && b1_7 && b2_22 && b3_20 && b4_12 && b5_7 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 565;
}
if(b0_50 && b1_7 && b2_43 && b3_10 && b4_17 && b5_2 && b6_18 && b7_12 && b8_32 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 566;
}
if(b0_50 && b1_7 && b2_16 && b3_27 && b4_40 && b5_42 && b6_27 && b7_26 && b8_15) {
matched = true;
pattern_id = 567;
}
if(b0_50 && b1_13 && b2_61 && b3_35 && b4_12 && b5_21 && b6_26 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 568;
}
if(b0_50 && b1_13 && b2_50 && b3_25 && b4_1 && b5_6 && b6_45 && b7_41 && b8_31 && b9_12 && b10_6 && b11_32) {
matched = true;
pattern_id = 569;
}
if(b0_50 && b1_13 && b2_33 && b3_39 && b4_47 && b5_10 && b6_36 && b7_9 && b8_1 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 570;
}
if(b0_50 && b1_13 && b2_33 && b3_15 && b4_12 && b5_38 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 571;
}
if(b0_50 && b1_13 && b2_33 && b3_15 && b4_12 && b5_29 && seq_6572 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 572;
}
if(b0_50 && b1_13 && b2_33 && b3_15 && b4_12 && b5_25 && b6_2 && b7_34 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 573;
}
if(b0_50 && b1_13 && b2_33 && b3_23 && b4_1 && b5_32 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 574;
}
if(b0_50 && b1_13 && b2_33 && b3_18 && b4_1 && b5_5 && b6_37 && b7_29 && b8_30 && b9_20 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 575;
}
if(b0_50 && b1_13 && b2_33 && b3_18 && b4_5 && b5_20 && b6_7 && b7_7 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 576;
}
if(b0_50 && b1_13 && b2_33 && b3_27 && b4_1 && b5_21 && b6_25 && b7_13 && b8_31 && b9_15 && b10_5 && b11_31) {
matched = true;
pattern_id = 577;
}
if(seq_0578 && b6_7 && b7_29 && b8_5) {
matched = true;
pattern_id = 578;
}
if(seq_0578 && b6_7 && b7_29 && b8_5 && b9_33) {
matched = true;
pattern_id = 579;
}
if(b0_50 && b1_13 && b2_24 && b3_18 && b4_22 && b5_53) {
matched = true;
pattern_id = 580;
}
if(b0_50 && b1_13 && b2_24 && b3_18 && b4_22 && b5_26 && b6_17 && b7_12 && b8_31 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 581;
}
if(seq_0582 && seq_6582 && b12_12 && b13_7) {
matched = true;
pattern_id = 582;
}
if(seq_0582 && seq_6582 && b12_12 && b13_7 && b14_4) {
matched = true;
pattern_id = 583;
}
if(b0_50 && b1_13 && b2_11 && b3_43 && b4_24 && b5_10 && b6_27 && b7_37 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 584;
}
if(b0_50 && b1_13 && b2_36 && b3_42) {
matched = true;
pattern_id = 585;
}
if(b0_50 && b1_13 && b2_36 && b3_14 && b4_22 && b5_42 && b6_2 && b7_19 && b8_13 && b9_29 && b10_26 && b11_22 && b12_16 && b13_28) {
matched = true;
pattern_id = 586;
}
if(b0_50 && b1_13 && b2_36 && b3_43 && b4_26 && b5_39 && b6_36 && b7_10) {
matched = true;
pattern_id = 587;
}
if(b0_50 && b1_13 && b2_36 && b3_43 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 588;
}
if(b0_50 && b1_13 && b2_36 && b3_43 && b4_5 && b5_5 && b6_26 && b7_8 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 589;
}
if(b0_50 && b1_13 && b2_13 && b3_20 && b4_28 && b5_44 && b6_27 && b7_17 && b8_28 && b9_9 && b10_31 && b11_23) {
matched = true;
pattern_id = 590;
}
if(seq_0591 && b6_8 && b7_6 && b8_31) {
matched = true;
pattern_id = 591;
}
if(seq_0591 && b6_17 && b7_8 && b8_30 && b9_20 && b10_48 && b11_14 && b12_39) {
matched = true;
pattern_id = 592;
}
if(b0_50 && b1_13 && b2_13 && b3_35 && b4_19 && b5_53 && b6_42 && b7_35 && b8_5 && b9_12 && b10_28 && b11_32) {
matched = true;
pattern_id = 593;
}
if(b0_50 && b1_13 && b2_23 && b3_6 && b4_1 && b5_27 && b6_8 && b7_10 && b8_18) {
matched = true;
pattern_id = 594;
}
if(b0_50 && b1_13 && b2_19 && b3_23 && b4_22 && b5_46 && b6_26 && b7_6 && b8_10 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 595;
}
if(b0_50 && b1_13 && b2_19 && b3_43 && b4_37 && b5_44 && b6_1 && b7_27 && b8_6 && b9_26) {
matched = true;
pattern_id = 596;
}
if(b0_50 && b1_13 && b2_19 && b3_27 && b4_5) {
matched = true;
pattern_id = 597;
}
if(b0_50 && b1_13 && b2_19 && b3_27 && b4_5 && b5_32 && b6_42 && b7_35 && b8_5 && b9_12 && b10_28) {
matched = true;
pattern_id = 598;
}
if(b0_50 && b1_13 && b2_19 && b3_27 && b4_5 && b5_38 && b6_41 && b7_1 && b8_31 && b9_33) {
matched = true;
pattern_id = 599;
}
if(b0_50 && b1_13 && b2_19 && b3_27 && b4_5 && b5_29 && b6_7 && b7_38 && b8_6 && b9_6) {
matched = true;
pattern_id = 600;
}
if(seq_0601 && b6_50 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 601;
}
if(seq_0601 && b6_50 && b7_13 && b8_5 && b9_28 && b10_17 && b11_15 && b12_25 && b13_23 && b14_1) {
matched = true;
pattern_id = 602;
}
if(b0_50 && b1_13 && b2_42 && b3_20 && b4_1 && b5_39 && b6_36 && b7_10 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 603;
}
if(seq_0604 && b6_7 && b7_26 && b8_38) {
matched = true;
pattern_id = 604;
}
if(seq_0604 && b6_16 && b7_19 && b8_10 && b9_20 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 605;
}
if(b0_50 && b1_13 && b2_22 && b3_14 && b4_11 && b5_27 && seq_6606) {
matched = true;
pattern_id = 606;
}
if(b0_50 && b1_13 && b2_22 && b3_23 && b4_28 && b5_5 && b6_18 && b7_13 && b8_6 && b9_9 && b10_30 && b11_19) {
matched = true;
pattern_id = 607;
}
if(b0_50 && b1_13 && b2_22 && b3_5 && b4_14 && b5_5 && b6_26 && b7_6 && b8_10 && b9_9 && b10_26 && b11_17 && b12_15) {
matched = true;
pattern_id = 608;
}
if(b0_50 && b1_13 && b2_22 && b3_5 && b4_47 && b5_29) {
matched = true;
pattern_id = 609;
}
if(b0_50 && b1_13 && b2_7 && b3_20 && b4_33 && b5_39 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 610;
}
if(b0_50 && b1_13 && b2_7 && b3_6 && b4_2 && b5_10 && b6_16 && b7_10 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 611;
}
if(seq_0612 && b6_47 && b7_32 && b8_1 && b9_8 && b10_16 && b11_26 && b12_3) {
matched = true;
pattern_id = 612;
}
if(seq_0612 && b6_47 && b7_30 && b8_5 && b9_12 && b10_9 && b11_10 && b12_11 && b13_17 && b14_20) {
matched = true;
pattern_id = 613;
}
if(b0_50 && b1_63 && b2_52 && b3_14 && b4_14 && b5_45 && b6_26 && b7_8 && b8_14 && b9_12 && b10_17 && b11_26 && b12_24 && b13_18 && b14_16) {
matched = true;
pattern_id = 614;
}
if(b0_50 && b1_63 && b2_52 && b3_14 && b4_47 && b5_26 && seq_6615 && b12_22 && b13_18) {
matched = true;
pattern_id = 615;
}
if(b0_50 && b1_16 && b2_24 && b3_50) {
matched = true;
pattern_id = 616;
}
if(b0_50 && b1_16 && b2_24 && b3_25 && b4_15 && b5_38 && b6_41 && b7_1 && b8_31 && b9_40) {
matched = true;
pattern_id = 617;
}
if(b0_50 && b1_16 && b2_24 && b3_25 && b4_15 && b5_46 && b6_19 && b7_12 && b8_35 && b9_22 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 618;
}
if(seq_0619 && b6_8 && b7_10 && b8_18 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 619;
}
if(seq_0619 && b6_7 && b7_13 && b8_5 && b9_30 && b10_29) {
matched = true;
pattern_id = 620;
}
if(seq_0619 && seq_6606) {
matched = true;
pattern_id = 621;
}
if(b0_50 && b1_16 && b2_24 && b3_41 && b4_33 && b5_31 && b6_26 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 622;
}
if(seq_0623 && b6_7 && b7_38 && b8_19) {
matched = true;
pattern_id = 623;
}
if(seq_0623 && b6_7 && b7_38 && b8_19 && b9_25 && b10_17 && b11_20 && b12_8) {
matched = true;
pattern_id = 624;
}
if(seq_0625 && b6_11 && b7_9 && b8_13 && b9_25 && b10_33 && b11_6 && b12_9) {
matched = true;
pattern_id = 625;
}
if(seq_0625 && b6_11 && b7_9 && b8_13 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 626;
}
if(seq_0625 && b6_11 && b7_9 && b8_13 && b9_25 && b10_6 && b11_19 && b12_15) {
matched = true;
pattern_id = 627;
}
if(b0_50 && b1_16 && b2_24 && b3_43 && b4_33 && b5_7 && seq_6628) {
matched = true;
pattern_id = 628;
}
if(b0_50 && b1_16 && b2_24 && b3_27 && b4_12 && b5_31 && b6_41 && b7_19 && b8_1 && b9_8) {
matched = true;
pattern_id = 629;
}
if(b0_50 && b1_16 && b2_24 && b3_27 && b4_6 && b5_9 && b6_39 && b7_17 && b8_5 && b9_12 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 630;
}
if(b0_50 && b1_16 && b2_11 && b3_6 && b4_12 && b5_26 && b6_11 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 631;
}
if(b0_50 && b1_16 && b2_17 && b3_27 && b4_16) {
matched = true;
pattern_id = 632;
}
if(seq_0633 && b6_1 && b7_8 && b8_37 && b9_9) {
matched = true;
pattern_id = 633;
}
if(seq_0633 && b6_26 && b7_13 && b8_19 && b9_28 && b10_15) {
matched = true;
pattern_id = 634;
}
if(b0_50 && b1_16 && b2_19 && b3_5 && b4_5 && b5_38 && b6_7 && b7_29 && b8_5) {
matched = true;
pattern_id = 635;
}
if(b0_50 && b1_16 && b2_42 && b3_49 && b4_11 && b5_66) {
matched = true;
pattern_id = 636;
}
if(b0_50 && b1_16 && b2_42 && b3_39 && b4_40 && b5_20 && b6_18 && b7_12 && b8_39 && b9_25 && b10_5 && b11_19) {
matched = true;
pattern_id = 637;
}
if(b0_50 && b1_16 && b2_42 && b3_39 && b4_40 && b5_26 && b6_16 && b7_25 && b8_28 && b9_26 && b10_29) {
matched = true;
pattern_id = 638;
}
if(b0_50 && b1_16 && b2_42 && b3_44 && b4_46 && b5_55 && b6_38 && b7_9 && b8_13 && b9_22) {
matched = true;
pattern_id = 639;
}
if(b0_50 && b1_16 && b2_7 && b3_19) {
matched = true;
pattern_id = 640;
}
if(b0_50 && b1_16 && b2_16 && b3_39 && b4_19 && b5_16 && b6_55 && b7_3) {
matched = true;
pattern_id = 641;
}
if(b0_50 && b1_16 && b2_16 && b3_1 && b4_29 && b5_26 && b6_17 && b7_9 && b8_18 && b9_20 && b10_26 && b11_17 && b12_15) {
matched = true;
pattern_id = 642;
}
if(b0_50 && b1_49 && b2_50 && b3_39 && b4_19 && b5_16) {
matched = true;
pattern_id = 643;
}
if(b0_50 && b1_49 && b2_27 && b3_49 && b4_47 && b5_66) {
matched = true;
pattern_id = 644;
}
if(seq_0645 && b6_11 && b7_6 && b8_15 && b9_16) {
matched = true;
pattern_id = 645;
}
if(seq_0645 && b6_11 && b7_6 && b8_15 && b9_26 && b10_17 && b11_14 && b12_15) {
matched = true;
pattern_id = 646;
}
if(b0_50 && b1_49 && b2_31 && b3_41 && b4_1 && b5_5 && b6_8 && b7_7 && b8_24 && b9_15 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 647;
}
if(b0_50 && b1_49 && b2_24 && b3_50 && b4_19 && b5_10 && b6_11 && b7_9 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 648;
}
if(seq_0649 && b6_17) {
matched = true;
pattern_id = 649;
}
if(seq_0649 && b6_17 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 650;
}
if(seq_0649 && b6_17 && b7_13 && b8_24 && b9_11 && b10_14 && b11_27) {
matched = true;
pattern_id = 651;
}
if(seq_0649 && b6_17 && b7_13 && b8_35 && b9_20 && b10_29) {
matched = true;
pattern_id = 652;
}
if(seq_0649 && b6_17 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 653;
}
if(seq_0649 && b6_17 && b7_13 && b8_31 && b9_20) {
matched = true;
pattern_id = 654;
}
if(seq_0649 && b6_17 && b7_13 && b8_38 && b9_9 && b10_9) {
matched = true;
pattern_id = 655;
}
if(seq_0649 && b6_17 && b7_39 && b8_22 && b9_25 && b10_35 && b11_23 && b12_5) {
matched = true;
pattern_id = 656;
}
if(seq_0649 && b6_17 && b7_41 && b8_45 && b9_9 && b10_10 && b11_54 && b12_39) {
matched = true;
pattern_id = 657;
}
if(seq_0649 && b6_17 && b7_41 && b8_62 && b9_56) {
matched = true;
pattern_id = 658;
}
if(b0_50 && b1_49 && b2_24 && b3_35 && b4_15 && b5_2 && b6_2 && b7_7 && b8_30 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 659;
}
if(b0_50 && b1_49 && b2_24 && b3_35 && b4_15 && b5_27 && b6_8 && b7_10 && b8_18 && b9_25 && b10_23 && b11_30 && b12_18) {
matched = true;
pattern_id = 660;
}
if(b0_50 && b1_49 && b2_24 && b3_35 && b4_15 && b5_31 && b6_7 && b7_32 && b8_31 && b9_25 && b10_5 && b11_19) {
matched = true;
pattern_id = 661;
}
if(b0_50 && b1_49 && b2_24 && b3_35 && b4_1 && b5_5 && b6_41 && b7_12 && b8_1 && b9_9 && b10_26 && b11_2 && b12_17 && b13_2) {
matched = true;
pattern_id = 662;
}
if(seq_0663 && seq_6663) {
matched = true;
pattern_id = 663;
}
if(seq_0663 && b6_10 && b7_44 && b8_1 && b9_9 && b10_33 && b11_23 && b12_13 && b13_20) {
matched = true;
pattern_id = 664;
}
if(seq_0665 && b6_28 && b7_9 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 665;
}
if(seq_0665 && b6_28 && b7_9 && b8_28 && b9_26 && b10_34 && b11_8) {
matched = true;
pattern_id = 666;
}
if(seq_0667 && b6_7 && b7_8 && b8_15) {
matched = true;
pattern_id = 667;
}
if(seq_0667 && b6_7 && b7_8 && b8_15 && b9_18 && b10_6 && b11_22 && b12_14 && b13_17) {
matched = true;
pattern_id = 668;
}
if(seq_0667 && b6_7 && b7_8 && b8_15 && b9_24 && b10_41 && b11_28) {
matched = true;
pattern_id = 669;
}
if(b0_50 && b1_49 && b2_24 && b3_7 && b4_36 && b5_20 && b6_30 && b7_12 && b8_28 && b9_15 && b10_15 && b11_6) {
matched = true;
pattern_id = 670;
}
if(b0_50 && b1_49 && b2_24 && b3_7 && b4_6 && b5_10 && b6_26 && b7_6 && b8_32 && b9_29 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 671;
}
if(seq_0672 && b6_1 && b7_26 && b8_1 && b9_37) {
matched = true;
pattern_id = 672;
}
if(seq_0672 && b6_21) {
matched = true;
pattern_id = 673;
}
if(b0_50 && b1_49 && b2_11 && b3_20 && b4_52 && b5_20 && b6_8 && b7_32 && b8_14 && b9_25 && b10_17 && b11_20 && b12_8) {
matched = true;
pattern_id = 674;
}
if(b0_50 && b1_49 && b2_36 && b3_19 && b4_28 && b5_29 && b6_19 && b7_10) {
matched = true;
pattern_id = 675;
}
if(b0_50 && b1_49 && b2_36 && b3_5 && b4_6 && b5_38 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 676;
}
if(b0_50 && b1_49 && b2_36 && b3_5 && b4_6 && b5_44 && b6_7 && b7_7 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 677;
}
if(b0_50 && b1_49 && b2_36 && b3_5 && b4_6 && b5_26 && seq_6263 && b12_10 && b13_20 && b14_6) {
matched = true;
pattern_id = 678;
}
if(b0_50 && b1_49 && b2_36 && b3_5 && b4_37 && b5_31 && b6_19 && b7_12 && b8_37 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 679;
}
if(b0_50 && b1_49 && b2_36 && b3_5 && b4_29 && b5_39 && seq_6680 && b12_9) {
matched = true;
pattern_id = 680;
}
if(b0_50 && b1_49 && b2_36 && b3_5 && b4_29 && b5_44 && b6_17 && b7_12 && b8_19 && b9_6 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 681;
}
if(b0_50 && b1_49 && b2_13 && b3_7 && b4_12 && b5_29 && b6_27 && b7_10 && b8_1 && b9_18 && b10_30 && b11_17 && b12_15 && b13_2 && b14_8) {
matched = true;
pattern_id = 682;
}
if(b0_50 && b1_49 && b2_13 && b3_7 && b4_12 && b5_35 && b6_21) {
matched = true;
pattern_id = 683;
}
if(b0_50 && b1_49 && b2_23 && b3_38 && b4_29 && b5_5 && b6_19 && b7_13 && b8_35 && b9_20 && b10_29) {
matched = true;
pattern_id = 684;
}
if(b0_50 && b1_49 && b2_5 && b3_27 && b4_1 && b5_5 && b6_39 && b7_17 && b8_28 && b9_26 && b10_32 && b11_17) {
matched = true;
pattern_id = 685;
}
if(seq_0686 && b6_1 && b7_25 && b8_27 && b9_9) {
matched = true;
pattern_id = 686;
}
if(seq_0686 && b6_7 && b7_7 && b8_33 && b9_25 && b10_23 && b11_22 && b12_16) {
matched = true;
pattern_id = 687;
}
if(b0_50 && b1_49 && b2_19 && b3_42 && b4_5 && b5_21 && b6_8 && b7_7 && b8_5 && b9_25 && b10_5 && b11_40 && b12_9 && b13_9) {
matched = true;
pattern_id = 688;
}
if(seq_0689 && seq_6689) {
matched = true;
pattern_id = 689;
}
if(seq_0689 && seq_6689 && b12_6) {
matched = true;
pattern_id = 690;
}
if(b0_50 && b1_49 && b2_19 && b3_6 && b4_17 && b5_39 && b6_7 && b7_13 && b8_12 && b9_8 && b10_5) {
matched = true;
pattern_id = 691;
}
if(b0_50 && b1_49 && b2_42 && b3_25 && b4_24 && b5_7 && b6_38 && b7_37 && b8_5 && b9_25 && b10_6 && b11_19 && b12_15) {
matched = true;
pattern_id = 692;
}
if(b0_50 && b1_49 && b2_22 && b3_39 && b4_16 && b5_10 && b6_25 && b7_32) {
matched = true;
pattern_id = 693;
}
if(b0_50 && b1_49 && b2_22 && b3_10 && b4_1 && b5_28 && b6_18 && b7_8 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 694;
}
if(b0_50 && b1_49 && b2_2 && b3_25 && b4_5 && b5_53) {
matched = true;
pattern_id = 695;
}
if(b0_50 && b1_49 && b2_2 && b3_25 && b4_5 && b5_7 && b6_7 && b7_27 && b8_28 && b9_10 && b10_9 && b11_30) {
matched = true;
pattern_id = 696;
}
if(b0_50 && b1_49 && b2_2 && b3_25 && b4_5 && b5_26 && b6_28 && b7_12 && b8_7 && b9_37 && b10_14 && b11_21 && b12_3 && b13_8 && b14_5) {
matched = true;
pattern_id = 697;
}
if(b0_50 && b1_49 && b2_2 && b3_25 && b4_5 && b5_28 && b6_26 && b7_23 && b8_29 && b9_60 && b10_23 && b11_22 && b12_9 && b13_13) {
matched = true;
pattern_id = 698;
}
if(b0_50 && b1_49 && b2_2 && b3_5 && b4_17 && b5_5 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 699;
}
if(b0_50 && b1_49 && b2_2 && b3_5 && b4_17 && b5_17 && b6_1 && b7_27 && b8_18) {
matched = true;
pattern_id = 700;
}
if(b0_50 && b1_49 && b2_52 && b3_43 && b4_6 && b5_9 && b6_10 && b7_8 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 701;
}
if(b0_50 && b1_49 && b2_52 && b3_18 && b4_11 && b5_5 && b6_35 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 702;
}
if(b0_50 && b1_49 && b2_16 && b3_39) {
matched = true;
pattern_id = 703;
}
if(b0_50 && b1_49 && b2_16 && b3_27 && b4_17 && b5_47 && b6_1 && b7_38 && b8_39 && b9_35) {
matched = true;
pattern_id = 704;
}
if(b0_50 && b1_5 && b2_33 && b3_23 && b4_47 && b5_42 && b6_8 && b7_37 && b8_8 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 705;
}
if(b0_50 && b1_5 && b2_15 && b3_27 && b4_16) {
matched = true;
pattern_id = 706;
}
if(seq_0707 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 707;
}
if(seq_0707 && b6_28 && b7_34 && b8_10 && b9_13 && b10_49 && b11_27 && b12_28) {
matched = true;
pattern_id = 708;
}
if(seq_0709 && b6_19 && b7_19 && b8_19) {
matched = true;
pattern_id = 709;
}
if(seq_0709 && b6_19 && b7_19 && b8_19 && b9_4 && b10_47 && b11_34 && b12_4) {
matched = true;
pattern_id = 710;
}
if(seq_0709 && b6_28 && b7_34 && b8_10) {
matched = true;
pattern_id = 711;
}
if(seq_0709 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 712;
}
if(b0_50 && b1_5 && b2_24 && b3_27 && b4_5 && b5_39 && b6_36 && b7_10) {
matched = true;
pattern_id = 713;
}
if(b0_50 && b1_5 && b2_24 && b3_38 && b4_5 && b5_39 && b6_2 && b7_35 && b8_7 && b9_9 && b10_17 && b11_14 && b12_3 && b13_8 && b14_5) {
matched = true;
pattern_id = 714;
}
if(b0_50 && b1_5 && b2_5 && b3_43 && b4_28 && b5_16 && b6_16 && b7_19 && b8_39 && b9_5 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 715;
}
if(b0_50 && b1_5 && b2_5 && b3_43 && b4_1 && b5_38 && b6_7 && b7_29 && b8_5) {
matched = true;
pattern_id = 716;
}
if(b0_50 && b1_5 && b2_19 && b3_35 && b4_19 && b5_50 && b6_27 && b7_13 && b8_12 && b9_8) {
matched = true;
pattern_id = 717;
}
if(b0_50 && b1_5 && b2_22 && b3_25 && b4_14 && b5_5 && b6_1 && b7_19 && b8_37 && b9_29) {
matched = true;
pattern_id = 718;
}
if(b0_50 && b1_5 && b2_7 && b3_7 && b4_26 && b5_42 && b6_8 && b7_8) {
matched = true;
pattern_id = 719;
}
if(b0_50 && b1_5 && b2_2 && b3_25 && b4_29 && b5_5 && b6_19 && b7_8 && b8_14 && b9_26 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 720;
}
if(b0_50 && b1_5 && b2_18 && b3_7 && b4_28 && b5_7 && b6_7 && b7_19 && b8_35 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 721;
}
if(b0_50 && b1_5 && b2_18 && b3_7 && b4_49 && b5_6 && b6_11 && b7_32 && b8_18 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 722;
}
if(b0_50 && b1_46 && b2_41 && b3_29 && b4_16 && b5_31 && b6_16) {
matched = true;
pattern_id = 723;
}
if(b0_50 && b1_46 && b2_23 && b3_29 && b4_16 && b5_31 && b6_16) {
matched = true;
pattern_id = 724;
}
if(b0_50 && b1_46 && b2_23 && b3_7 && b4_17 && b5_10 && b6_19 && b7_12 && b8_27 && b9_12 && b10_6) {
matched = true;
pattern_id = 725;
}
if(seq_0726 && b6_7) {
matched = true;
pattern_id = 726;
}
if(seq_0726 && b6_7 && b7_23 && b8_10 && b9_29 && b10_41 && b11_26 && b12_14 && b13_8 && b14_5) {
matched = true;
pattern_id = 727;
}
if(seq_0726 && b6_7 && b7_25 && b8_28 && b9_28 && b10_30 && b11_19 && b12_6) {
matched = true;
pattern_id = 728;
}
if(seq_0729 && b6_25 && b7_13 && b8_24 && b9_11 && b10_14) {
matched = true;
pattern_id = 729;
}
if(seq_0729 && b6_25 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 730;
}
if(seq_0729 && b6_25 && b7_13 && b8_31 && b9_20) {
matched = true;
pattern_id = 731;
}
if(seq_0729 && b6_25 && b7_23 && b8_30 && b9_6 && b10_6 && b11_37 && b12_15 && b13_2) {
matched = true;
pattern_id = 732;
}
if(seq_0729 && b6_25 && b7_9 && b8_13 && b9_25 && b10_17 && b11_20 && b12_8) {
matched = true;
pattern_id = 733;
}
if(b0_50 && b1_46 && b2_7 && b3_10 && b4_17 && b5_16 && b6_39 && b7_43 && b8_14 && b9_25 && b10_5 && b11_40 && b12_9) {
matched = true;
pattern_id = 734;
}
if(seq_0735 && b6_1 && b7_27 && b8_32 && b9_29) {
matched = true;
pattern_id = 735;
}
if(seq_0735 && b6_1 && b7_29 && b8_30 && b9_20) {
matched = true;
pattern_id = 736;
}
if(b0_50 && b1_46 && b2_2 && b3_14 && b4_22 && b5_38 && b6_41 && b7_37) {
matched = true;
pattern_id = 737;
}
if(b0_50 && b1_55 && b2_25) {
matched = true;
pattern_id = 738;
}
if(b0_50 && b1_55 && b2_40 && b3_48 && b4_28 && b5_27 && b6_38 && b7_8 && b8_27 && b9_46 && b10_14 && b11_20 && b12_10 && b13_22) {
matched = true;
pattern_id = 739;
}
if(b0_50 && b1_55 && b2_13 && b3_10 && b4_29 && b5_32 && seq_6740) {
matched = true;
pattern_id = 740;
}
if(b0_50 && b1_55 && b2_13 && b3_10 && b4_29 && b5_46 && seq_6740) {
matched = true;
pattern_id = 741;
}
if(b0_50 && b1_55 && b2_13 && b3_10 && b4_29 && b5_39 && seq_6680 && b12_9) {
matched = true;
pattern_id = 742;
}
if(b0_50 && b1_55 && b2_13 && b3_10 && b4_29 && b5_2 && b6_2 && b7_7 && b8_11 && b9_30 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 743;
}
if(b0_50 && b1_55 && b2_13 && b3_10 && b4_29 && b5_31 && b6_2 && b7_27 && b8_10 && b9_24 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 744;
}
if(b0_50 && b1_55 && b2_13 && b3_5 && b4_22 && b5_10 && b6_11 && b7_10 && b8_14 && b9_10 && b10_26 && b11_17 && b12_23 && b13_8 && b14_11) {
matched = true;
pattern_id = 745;
}
if(b0_50 && b1_55 && b2_13 && b3_43 && b4_26 && b5_50 && b6_41 && b7_34) {
matched = true;
pattern_id = 746;
}
if(b0_50 && b1_55 && b2_13 && b3_18 && b4_18 && b5_25 && b6_8 && b7_8 && b8_14 && b9_12 && b10_26 && b11_18 && b12_12 && b13_7) {
matched = true;
pattern_id = 747;
}
if(b0_50 && b1_55 && b2_13 && b3_27 && b4_18 && b5_11 && b6_16 && b7_10 && b8_7 && b9_25 && b10_17 && b11_20 && b12_8) {
matched = true;
pattern_id = 748;
}
if(b0_50 && b1_55 && b2_20 && b3_39 && b4_11 && b5_16 && b6_7 && b7_33 && b8_5 && b9_12 && b10_26 && b11_44 && b12_10 && b13_19) {
matched = true;
pattern_id = 749;
}
if(b0_50 && b1_55 && b2_42 && b3_25 && b4_1 && b5_26 && b6_40 && b7_17 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 750;
}
if(b0_50 && b1_51 && b2_9 && b3_46 && b4_24 && b5_26 && b6_42 && b7_37 && b8_15) {
matched = true;
pattern_id = 751;
}
if(b0_50 && b1_51 && b2_9 && b3_7 && b4_11 && b5_10 && b6_10 && b7_6 && b8_28 && b9_26 && b10_30) {
matched = true;
pattern_id = 752;
}
if(b0_50 && b1_51 && b2_9 && b3_1 && b4_16 && b5_9 && b6_1 && b7_17 && b8_18 && b9_20 && b10_48) {
matched = true;
pattern_id = 753;
}
if(b0_50 && b1_51 && b2_33 && b3_14 && b4_1 && b5_38 && b6_41 && b7_37) {
matched = true;
pattern_id = 754;
}
if(seq_0755 && b6_2 && b7_19 && b8_13 && b9_29) {
matched = true;
pattern_id = 755;
}
if(seq_0755 && seq_6464 && b12_12 && b13_7) {
matched = true;
pattern_id = 756;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_40 && b5_27 && b6_8 && b7_27 && b8_28 && b9_24 && b10_19 && b11_10) {
matched = true;
pattern_id = 757;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_46 && b5_26 && seq_6615 && b12_12 && b13_7) {
matched = true;
pattern_id = 758;
}
if(seq_0759 && b6_16 && b7_10 && b8_7 && b9_25 && b10_6 && b11_19 && b12_15) {
matched = true;
pattern_id = 759;
}
if(seq_0759 && b6_16 && b7_10 && b8_7 && b9_25 && b10_10 && b11_6 && b12_22) {
matched = true;
pattern_id = 760;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_18 && b5_25 && b6_27 && b7_55 && b8_5 && b9_12 && b10_11) {
matched = true;
pattern_id = 761;
}
if(seq_0762 && b6_10 && b7_8 && b8_41 && b9_20 && b10_14 && b11_23 && b12_8 && b13_22) {
matched = true;
pattern_id = 762;
}
if(seq_0762 && b6_10 && b7_8 && b8_15) {
matched = true;
pattern_id = 763;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_15 && b5_16 && seq_6273) {
matched = true;
pattern_id = 764;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_15 && b5_7 && b6_27 && b7_30 && b8_5 && b9_12) {
matched = true;
pattern_id = 765;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_21 && b5_16 && b6_39 && b7_17 && b8_28 && b9_5 && b10_31 && b11_2) {
matched = true;
pattern_id = 766;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_19 && b5_10 && b6_27 && b7_6) {
matched = true;
pattern_id = 767;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_16 && b5_44 && b6_47 && b7_7 && b8_5 && b9_20 && b10_16) {
matched = true;
pattern_id = 768;
}
if(seq_0769 && b6_38 && b7_6 && b8_28 && b9_24 && b10_19 && b11_10 && b12_6) {
matched = true;
pattern_id = 769;
}
if(seq_0769 && b6_38 && b7_6 && b8_28 && b9_5 && b10_31 && b11_2 && b12_6) {
matched = true;
pattern_id = 770;
}
if(seq_0769 && b6_38 && b7_6 && b8_29 && b9_18 && b10_27 && b11_3 && b12_13 && b13_6) {
matched = true;
pattern_id = 771;
}
if(seq_0769 && b6_38 && b7_6 && b8_29 && b9_8 && b10_23 && b11_14 && b12_14 && b13_8 && b14_2) {
matched = true;
pattern_id = 772;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_1 && b5_5 && b6_39 && b7_17 && b8_30 && b9_18 && b10_14 && b11_19) {
matched = true;
pattern_id = 773;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_1 && b5_44 && b6_27 && b7_7 && b8_1 && b9_25 && b10_23 && b11_21 && b12_14) {
matched = true;
pattern_id = 774;
}
if(b0_50 && b1_51 && b2_24 && b3_41 && b4_1 && b5_31 && b6_8 && b7_8 && b8_15 && b9_33 && b10_14 && b11_32) {
matched = true;
pattern_id = 775;
}
if(b0_50 && b1_51 && b2_11 && b3_6 && b4_12 && b5_26 && b6_11 && b7_13 && b8_5 && b9_28 && b10_17) {
matched = true;
pattern_id = 776;
}
if(seq_0777 && seq_6777 && b12_14) {
matched = true;
pattern_id = 777;
}
if(seq_0777 && seq_6777 && b12_14 && b13_9) {
matched = true;
pattern_id = 778;
}
if(seq_0779 && seq_6779 && b12_12 && b13_7) {
matched = true;
pattern_id = 779;
}
if(seq_0779 && seq_6779 && b12_12 && b13_7 && b14_4) {
matched = true;
pattern_id = 780;
}
if(b0_50 && b1_51 && b2_13 && b3_35 && b4_15 && b5_27 && b6_8 && b7_10 && b8_18 && b9_25 && b10_17 && b11_20 && b12_8) {
matched = true;
pattern_id = 781;
}
if(seq_0782 && b6_16 && b7_10 && b8_7) {
matched = true;
pattern_id = 782;
}
if(seq_0782 && b6_16 && b7_10 && b8_7 && b9_13) {
matched = true;
pattern_id = 783;
}
if(b0_50 && b1_51 && b2_42 && b3_46 && b4_14 && b5_9 && b6_39 && b7_8 && b8_5 && b9_10 && b10_15) {
matched = true;
pattern_id = 784;
}
if(b0_50 && b1_51 && b2_42 && b3_46 && b4_36 && b5_20 && b6_28 && b7_37 && b8_11 && b9_29 && b10_17 && b11_6) {
matched = true;
pattern_id = 785;
}
if(b0_50 && b1_51 && b2_42 && b3_46 && b4_69 && b5_26 && b6_2 && b7_26 && b8_15) {
matched = true;
pattern_id = 786;
}
if(b0_50 && b1_51 && b2_22 && b3_25 && b4_6) {
matched = true;
pattern_id = 787;
}
if(b0_50 && b1_51 && b2_22 && b3_5 && b4_33 && b5_31 && b6_21 && b7_30 && b8_26) {
matched = true;
pattern_id = 788;
}
if(seq_0789 && b6_41 && b7_13 && b8_10 && b9_10 && b10_14) {
matched = true;
pattern_id = 789;
}
if(seq_0789 && b6_41 && b7_13 && b8_18 && b9_6 && b10_19) {
matched = true;
pattern_id = 790;
}
if(b0_50 && b1_51 && b2_7 && b3_31 && b4_24 && b5_10 && seq_6373) {
matched = true;
pattern_id = 791;
}
if(b0_50 && b1_51 && b2_16 && b3_1 && b4_40 && b5_26 && b6_42 && b7_37) {
matched = true;
pattern_id = 792;
}
if(b0_50 && b1_51 && b2_16 && b3_1 && b4_18 && b5_11 && b6_16 && b7_10 && b8_7 && b9_25 && b10_5 && b11_19) {
matched = true;
pattern_id = 793;
}
if(b0_50 && b1_51 && b2_16 && b3_1 && b4_43 && b5_9 && b6_8 && b7_7 && b8_35 && b9_25 && b10_5 && b11_19) {
matched = true;
pattern_id = 794;
}
if(b0_50 && b1_51 && b2_16 && b3_1 && b4_29 && b5_10 && b6_27 && b7_6) {
matched = true;
pattern_id = 795;
}
if(b0_50 && b1_44 && b2_27) {
matched = true;
pattern_id = 796;
}
if(b0_50 && b1_44 && b2_11 && b3_14 && b4_40 && b5_42 && b6_27 && b7_26 && b8_15) {
matched = true;
pattern_id = 797;
}
if(b0_50 && b1_65 && b2_5 && b3_23 && b4_26 && b5_39 && b6_36 && b7_10) {
matched = true;
pattern_id = 798;
}
if(b0_50 && b1_65 && b2_7 && b3_19) {
matched = true;
pattern_id = 799;
}
if(b0_50 && b1_62 && b2_48 && b3_7 && b4_6) {
matched = true;
pattern_id = 800;
}
if(b0_50 && b1_62 && b2_20 && b3_5 && b4_43 && b5_9 && b6_25 && b7_48) {
matched = true;
pattern_id = 801;
}
if(b0_50 && b1_62 && b2_22 && b3_5 && b4_33 && b5_31) {
matched = true;
pattern_id = 802;
}
if(b0_34) {
matched = true;
pattern_id = 803;
}
if(b0_34 && b1_14) {
matched = true;
pattern_id = 804;
}
if(b0_34 && b1_1 && b2_53 && b3_3 && b4_22 && b5_43) {
matched = true;
pattern_id = 805;
}
if(b0_22) {
matched = true;
pattern_id = 806;
}
if(b0_22 && b1_18 && b2_9 && b3_21) {
matched = true;
pattern_id = 807;
}
if(b0_22 && b1_59 && b2_3 && b3_37 && b4_3 && b5_3 && b6_60 && b7_39 && b8_9) {
matched = true;
pattern_id = 808;
}
if(b0_61 && b1_14 && b2_14) {
matched = true;
pattern_id = 809;
}
if(b0_61 && b1_18 && b2_14 && b3_28 && b4_49 && b5_13 && b6_5) {
matched = true;
pattern_id = 810;
}
if(b0_61 && b1_9 && b2_26 && b3_58 && b4_53 && b5_6 && b6_11 && b7_8 && b8_31 && b9_63 && b10_11 && b11_33) {
matched = true;
pattern_id = 811;
}
if(b0_68 && b1_14 && b2_40) {
matched = true;
pattern_id = 812;
}
if(b0_68 && b1_14 && b2_26) {
matched = true;
pattern_id = 813;
}
if(b0_46 && b1_14 && b2_9) {
matched = true;
pattern_id = 814;
}
if(b0_46 && b1_27 && b2_11 && b3_14 && b4_21 && b5_31 && b6_26) {
matched = true;
pattern_id = 815;
}
if(b0_38 && b1_32 && b2_14 && b3_13) {
matched = true;
pattern_id = 816;
}
if(b0_38 && b1_43 && b2_14 && b3_13 && b4_32 && b5_38 && b6_33 && b7_13 && b8_21) {
matched = true;
pattern_id = 817;
}
if(b0_37 && b1_43 && b2_59) {
matched = true;
pattern_id = 818;
}
if(b0_37 && b1_39 && b2_3 && b3_33 && b4_20 && b5_3 && b6_14 && b7_21 && b8_9 && b9_19 && b10_16 && b11_7 && b12_6) {
matched = true;
pattern_id = 819;
}
if(b0_65 && b1_70) {
matched = true;
pattern_id = 820;
}
if(b0_65 && b1_70 && b2_61 && b3_46 && b4_15 && b5_5 && b6_25 && b7_65 && b8_2 && b9_50 && b10_39 && b11_52 && b12_35) {
matched = true;
pattern_id = 821;
}
if(b0_65 && b1_60 && b2_18 && b3_44 && b4_22) {
matched = true;
pattern_id = 822;
}
if(b0_65 && b1_20 && b2_34 && b3_64 && b4_31 && b5_30 && b6_57) {
matched = true;
pattern_id = 823;
}
if(b0_65 && b1_47) {
matched = true;
pattern_id = 824;
}
if(b0_65 && b1_8 && b2_21 && b3_11 && b4_10 && b5_67 && b6_6 && b7_49 && b8_16 && b9_38 && b10_55) {
matched = true;
pattern_id = 825;
}
if(b0_65 && b1_8 && b2_30 && b3_8 && b4_31 && b5_19 && b6_23 && b7_20 && b8_42 && b9_21 && b10_18 && b11_25 && b12_35) {
matched = true;
pattern_id = 826;
}
if(b0_65 && b1_8 && b2_15 && b3_8 && b4_36 && b5_43 && b6_11 && b7_22 && b8_31 && b9_12 && b10_41 && b11_22 && b12_9 && b13_6 && b14_19) {
matched = true;
pattern_id = 827;
}
if(b0_65 && b1_1 && b2_42 && b3_43 && b4_22 && b5_5 && b6_11 && b7_16 && b8_32 && b9_35 && b10_6 && b11_23 && b12_23 && b13_13) {
matched = true;
pattern_id = 828;
}
if(b0_65 && b1_21 && b2_48 && b3_18 && b4_18 && b5_27 && b6_7) {
matched = true;
pattern_id = 829;
}
if(b0_72 && b1_31 && b2_51 && b3_4 && b4_38 && b5_43 && b6_21 && b7_31 && b8_28) {
matched = true;
pattern_id = 830;
}
if(seq_0831) {
matched = true;
pattern_id = 831;
}
if(seq_0831 && b6_56 && b7_3 && b8_25 && b9_56 && b10_13 && b11_5) {
matched = true;
pattern_id = 832;
}
if(seq_0831 && b6_9 && b7_37 && b8_10 && b9_26 && b10_27 && b11_3 && b12_10 && b13_19 && b14_23) {
matched = true;
pattern_id = 833;
}
if(b0_72 && b1_72) {
matched = true;
pattern_id = 834;
}
if(b0_72 && b1_61 && b2_12 && b3_58 && b4_70 && b5_60 && b6_57 && b7_64) {
matched = true;
pattern_id = 835;
}
if(b0_30) {
matched = true;
pattern_id = 836;
}
if(b0_30 && b1_72 && b2_3 && b3_47 && b4_7 && b5_23 && b6_45 && b7_19 && b8_34) {
matched = true;
pattern_id = 837;
}
if(b0_55 && b1_60 && b2_55 && b3_49 && b4_42 && b5_53 && b6_47 && b7_41 && b8_29 && b9_33) {
matched = true;
pattern_id = 838;
}
if(b0_55 && b1_27 && b2_24 && b3_23 && b4_12 && b5_31 && b6_7 && b7_42 && b8_14 && b9_24 && b10_8 && b11_22 && b12_8 && b13_17 && b14_2) {
matched = true;
pattern_id = 839;
}
if(b0_55 && b1_29 && b2_31 && b3_14 && b4_5 && b5_54 && b6_2 && b7_38 && b8_11 && b9_30 && b10_17 && b11_28 && b12_20) {
matched = true;
pattern_id = 840;
}
if(b0_55 && b1_61 && b2_33 && b3_15 && b4_12 && b5_4 && b6_7 && b7_7 && b8_38 && b9_35 && b10_23 && b11_2 && b12_5) {
matched = true;
pattern_id = 841;
}
if(b0_55 && b1_8 && b2_30 && b3_8 && b4_31 && b5_52 && b6_46 && b7_40 && b8_20) {
matched = true;
pattern_id = 842;
}
if(b0_55 && b1_30 && b2_24 && b3_27 && b4_1 && b5_10 && b6_36 && b7_9 && b8_61) {
matched = true;
pattern_id = 843;
}
if(b0_55 && b1_51 && b2_42 && b3_46) {
matched = true;
pattern_id = 844;
}
if(b0_55 && b1_51 && b2_42 && b3_46 && b4_14 && b5_26 && b6_48 && b7_17 && b8_11 && b9_30 && b10_5) {
matched = true;
pattern_id = 845;
}
if(b0_55 && b1_51 && b2_42 && b3_46 && b4_16 && b5_31 && b6_16 && b7_37 && b8_41 && b9_12 && b10_17 && b11_28 && b12_16) {
matched = true;
pattern_id = 846;
}
if(seq_0847 && b6_8 && b7_7 && b8_19 && b9_27 && b10_35 && b11_2 && b12_21) {
matched = true;
pattern_id = 847;
}
if(seq_0847 && b6_2 && b7_27 && b8_41 && b9_34 && b10_17 && b11_14) {
matched = true;
pattern_id = 848;
}
if(b0_55 && b1_51 && b2_42 && b3_46 && b4_37 && b5_20 && b6_28 && b7_1 && b8_5 && b9_24 && b10_40 && b11_3 && b12_13 && b13_6) {
matched = true;
pattern_id = 849;
}
if(b0_55 && b1_51 && b2_42 && b3_46 && b4_37 && b5_26 && b6_10 && b7_44 && b8_31 && b9_12 && b10_41 && b11_17) {
matched = true;
pattern_id = 850;
}
if(seq_0851 && b6_10 && b7_44 && b8_35 && b9_35 && b10_12 && b11_30) {
matched = true;
pattern_id = 851;
}
if(seq_0851 && seq_6663) {
matched = true;
pattern_id = 852;
}
if(seq_0851 && b6_10 && b7_10 && b8_36 && b9_22 && b10_39 && b11_19 && b12_14 && b13_17 && b14_10) {
matched = true;
pattern_id = 853;
}
if(b0_33) {
matched = true;
pattern_id = 854;
}
if(b0_33 && b1_34) {
matched = true;
pattern_id = 855;
}
if(b0_23) {
matched = true;
pattern_id = 856;
}
if(b0_23 && b1_19 && b2_4 && b3_11 && b4_20 && b5_19 && b6_13 && b7_11 && b8_4 && b9_7) {
matched = true;
pattern_id = 857;
}
if(b0_23 && b1_12 && b2_35 && b3_64 && b4_58 && b5_54 && b6_13 && b7_4 && b8_55 && b9_51 && b10_56) {
matched = true;
pattern_id = 858;
}
if(b0_23 && b1_27 && b2_28 && b3_2 && b4_9 && b5_34 && b6_31 && b7_4 && b8_20 && b9_7 && b10_18 && b11_9 && b12_7) {
matched = true;
pattern_id = 859;
}
if(b0_23 && b1_27 && b2_28 && b3_8 && b4_27 && b5_30 && b6_22 && b7_14) {
matched = true;
pattern_id = 860;
}
if(b0_23 && b1_56 && b2_38 && b3_12) {
matched = true;
pattern_id = 861;
}
if(b0_23 && b1_61 && b2_45 && b3_32) {
matched = true;
pattern_id = 862;
}
if(b0_23 && b1_61 && b2_10 && b3_30) {
matched = true;
pattern_id = 863;
}
if(b0_23 && b1_61 && b2_10 && b3_30 && b4_9 && b5_54) {
matched = true;
pattern_id = 864;
}
if(b0_23 && b1_47 && b2_64 && b3_11 && b4_35 && b5_64 && b6_4 && b7_59 && b8_56 && b9_53 && b10_53 && b11_36 && b12_36) {
matched = true;
pattern_id = 865;
}
if(b0_23 && b1_66 && b2_30 && b3_57) {
matched = true;
pattern_id = 866;
}
if(b0_23 && b1_66 && b2_30 && b3_57 && b4_31 && b5_52 && b6_57 && b7_54 && b8_43 && b9_7 && b10_18 && b11_25) {
matched = true;
pattern_id = 867;
}
if(b0_23 && b1_66 && b2_30 && b3_57 && b4_4 && b5_52 && b6_51 && b7_49) {
matched = true;
pattern_id = 868;
}
if(b0_23 && b1_11 && b2_52 && b3_35 && b4_12 && b5_31 && b6_27 && b7_29 && b8_41) {
matched = true;
pattern_id = 869;
}
if(b0_23 && b1_30 && b2_33 && b3_35 && b4_15 && b5_10) {
matched = true;
pattern_id = 870;
}
if(b0_23 && b1_16 && b2_11 && b3_6 && b4_24 && b5_5 && b6_39 && b7_8) {
matched = true;
pattern_id = 871;
}
if(b0_3 && b1_29 && b2_4 && b3_53 && b4_4 && b5_4) {
matched = true;
pattern_id = 872;
}
if(b0_3 && b1_67) {
matched = true;
pattern_id = 873;
}
if(b0_3 && b1_3 && b2_6 && b3_28 && b4_3 && b5_13 && b6_12 && b7_3 && b8_34 && b9_16 && b10_13 && b11_11 && b12_4) {
matched = true;
pattern_id = 874;
}
if(b0_3 && b1_3 && b2_3 && b3_3 && b4_3 && b5_3 && b6_3 && b7_3 && b8_3 && b9_3 && b10_2 && b11_1 && b12_1 && b13_1 && b14_1) {
matched = true;
pattern_id = 875;
}
if(b0_3 && b1_47 && b2_4 && b3_9 && b4_4 && b5_37) {
matched = true;
pattern_id = 876;
}
if(b0_3 && b1_66 && b2_58 && b3_24 && b4_35 && b5_3 && b6_61 && b7_24 && b8_23 && b9_4 && b10_13 && b11_5 && b12_4) {
matched = true;
pattern_id = 877;
}
if(b0_3 && b1_1 && b2_2 && b3_7 && b4_22 && b5_5 && b6_23 && b7_19 && b8_10 && b9_20) {
matched = true;
pattern_id = 878;
}
if(b0_3 && b1_9 && b2_14 && b3_16 && b4_8 && b5_13 && b6_50 && b7_2) {
matched = true;
pattern_id = 879;
}
if(b0_35 && b1_19 && b2_38 && b3_13) {
matched = true;
pattern_id = 880;
}
if(b0_35 && b1_19 && b2_10 && b3_11) {
matched = true;
pattern_id = 881;
}
if(b0_35 && b1_29 && b2_38) {
matched = true;
pattern_id = 882;
}
if(b0_35 && b1_67 && b2_37) {
matched = true;
pattern_id = 883;
}
if(b0_35 && b1_20 && b2_21 && b3_55 && b4_31 && b5_30 && b6_57) {
matched = true;
pattern_id = 884;
}
if(b0_35 && b1_20 && b2_10 && b3_62) {
matched = true;
pattern_id = 885;
}
if(b0_35 && b1_47 && b2_8 && b3_11 && b4_38 && b5_59) {
matched = true;
pattern_id = 886;
}
if(b0_35 && b1_36 && b2_37) {
matched = true;
pattern_id = 887;
}
if(b0_35 && b1_36 && b2_37 && b3_13 && b4_8) {
matched = true;
pattern_id = 888;
}
if(b0_35 && b1_21 && b2_53 && b3_10 && b4_43 && b5_49 && b6_27 && b7_8 && b8_1 && b9_31 && b10_14 && b11_19 && b12_8 && b13_13) {
matched = true;
pattern_id = 889;
}
if(b0_35 && b1_7 && b2_20 && b3_35 && b4_12 && b5_39 && seq_6628 && b12_14 && b13_31 && b14_20) {
matched = true;
pattern_id = 890;
}
if(seq_0891 && b6_11 && b7_44 && b8_54 && b9_5 && b10_10 && b11_21 && b12_20 && b13_16) {
matched = true;
pattern_id = 891;
}
if(seq_0891 && b6_11 && b7_44 && b8_16 && b9_22 && b10_5 && b11_2) {
matched = true;
pattern_id = 892;
}
if(b0_58 && b1_29 && b2_38 && b3_30) {
matched = true;
pattern_id = 893;
}
if(seq_0894) {
matched = true;
pattern_id = 894;
}
if(seq_0894 && b6_12) {
matched = true;
pattern_id = 895;
}
if(b0_58 && b1_29 && b2_39 && b3_58 && b4_45 && b5_34 && b6_49 && b7_15) {
matched = true;
pattern_id = 896;
}
if(b0_58 && b1_29 && b2_62 && b3_4 && b4_25 && b5_40) {
matched = true;
pattern_id = 897;
}
if(b0_58 && b1_38 && b2_39 && b3_4 && b4_3 && b5_13 && b6_3 && b7_3 && b8_2 && b9_3 && b10_13 && b11_4) {
matched = true;
pattern_id = 898;
}
if(b0_57 && b1_10 && b2_47 && b3_55) {
matched = true;
pattern_id = 899;
}
if(b0_57 && b1_68 && b2_4 && b3_60 && b4_4 && b5_52 && b6_53) {
matched = true;
pattern_id = 900;
}
if(b0_57 && b1_68 && b2_8 && b3_58 && b4_54 && b5_61 && b6_53 && b7_52 && b8_48 && b9_45 && b10_50 && b11_36 && b12_29 && b13_24) {
matched = true;
pattern_id = 901;
}
if(b0_57 && b1_68 && b2_10 && b3_55) {
matched = true;
pattern_id = 902;
}
if(b0_57 && b1_57 && b2_3 && b3_16 && b4_3 && b5_3 && b6_3 && b7_5 && b8_3 && b9_3 && b10_46 && b11_15) {
matched = true;
pattern_id = 903;
}
if(b0_57 && b1_16 && b2_22 && b3_5 && b4_17) {
matched = true;
pattern_id = 904;
}
if(b0_6 && b1_6 && b2_6) {
matched = true;
pattern_id = 905;
}
if(b0_6 && b1_29 && b2_30 && b3_58 && b4_55) {
matched = true;
pattern_id = 906;
}
if(b0_6 && b1_38 && b2_21 && b3_37) {
matched = true;
pattern_id = 907;
}
if(b0_6 && b1_47 && b2_45 && b3_60 && b4_46 && b5_61 && b6_59) {
matched = true;
pattern_id = 908;
}
if(b0_6 && b1_10 && b2_10 && b3_13 && b4_10 && b5_9 && b6_10 && b7_8 && b8_3 && b9_6 && b10_5 && b11_2 && b12_2) {
matched = true;
pattern_id = 909;
}
if(b0_6 && b1_10 && b2_10 && b3_12 && b4_9) {
matched = true;
pattern_id = 910;
}
if(b0_6 && b1_16 && b2_33 && b3_15) {
matched = true;
pattern_id = 911;
}
if(b0_6 && b1_16 && b2_19 && b3_44 && b4_53 && b5_60 && b6_13 && b7_2) {
matched = true;
pattern_id = 912;
}
if(b0_2 && b1_29 && b2_30) {
matched = true;
pattern_id = 913;
}
if(b0_2 && b1_29 && b2_30 && b3_13) {
matched = true;
pattern_id = 914;
}
if(b0_2 && b1_29 && b2_30 && b3_13 && b4_28 && b5_3 && seq_6915 && b12_3 && b13_3) {
matched = true;
pattern_id = 915;
}
if(b0_2 && b1_29 && b2_30 && b3_13 && b4_28 && b5_60 && b6_3 && b7_3 && b8_21) {
matched = true;
pattern_id = 916;
}
if(b0_2 && b1_29 && b2_30 && b3_13 && b4_28 && b5_53) {
matched = true;
pattern_id = 917;
}
if(b0_2 && b1_29 && b2_30 && b3_13 && b4_39 && b5_3 && seq_6915 && b12_3 && b13_1) {
matched = true;
pattern_id = 918;
}
if(b0_2 && b1_29 && b2_30 && b3_32 && b4_45 && b5_24 && b6_44 && b7_15 && b8_20 && b9_32 && b10_37 && b11_25 && b12_19) {
matched = true;
pattern_id = 919;
}
if(b0_2 && b1_3 && b2_30) {
matched = true;
pattern_id = 920;
}
if(seq_0921 && b6_32 && b7_11) {
matched = true;
pattern_id = 921;
}
if(seq_0921 && b6_32 && b7_11 && b8_3 && b9_21 && b10_20) {
matched = true;
pattern_id = 922;
}
if(b0_2 && b1_20 && b2_34 && b3_40 && b4_23 && b5_59 && b6_31) {
matched = true;
pattern_id = 923;
}
if(b0_2 && b1_20 && b2_37 && b3_67 && b4_4 && b5_37 && b6_32 && b7_11 && b8_61) {
matched = true;
pattern_id = 924;
}
if(b0_2 && b1_73 && b2_58 && b3_32 && b4_27 && b5_71 && seq_6925 && b12_4) {
matched = true;
pattern_id = 925;
}
if(b0_2 && b1_1 && b2_2 && b3_10 && b4_7 && b5_7 && b6_8 && b7_6 && b8_6 && b9_5 && b10_4) {
matched = true;
pattern_id = 926;
}
if(b0_2 && b1_2 && b2_2 && b3_2 && b4_2 && b5_2 && b6_2 && b7_2 && b8_2 && b9_2 && b10_1) {
matched = true;
pattern_id = 927;
}
if(b0_2 && b1_15 && b2_14 && b3_27 && b4_5) {
matched = true;
pattern_id = 928;
}
if(b0_2 && b1_16 && b2_19 && b3_6 && b4_6 && b5_23 && b6_14 && b7_42 && b8_9) {
matched = true;
pattern_id = 929;
}
if(b0_44 && b1_29 && b2_4 && b3_37) {
matched = true;
pattern_id = 930;
}
if(b0_44 && b1_29 && b2_4 && b3_37 && b4_28 && b5_38 && b6_21) {
matched = true;
pattern_id = 931;
}
if(b0_44 && b1_29 && b2_38 && b3_24 && b4_27 && b5_23 && b6_3 && b7_11 && b8_9) {
matched = true;
pattern_id = 932;
}
if(b0_44 && b1_29 && b2_38 && b3_12) {
matched = true;
pattern_id = 933;
}
if(b0_44 && b1_29 && b2_38 && b3_32) {
matched = true;
pattern_id = 934;
}
if(b0_44 && b1_4 && b2_54 && b3_3 && b4_65) {
matched = true;
pattern_id = 935;
}
if(b0_44 && b1_10 && b2_30 && b3_32 && b4_28) {
matched = true;
pattern_id = 936;
}
if(b0_44 && b1_10 && b2_30 && b3_32 && b4_28 && b5_36) {
matched = true;
pattern_id = 937;
}
if(b0_44 && b1_2 && b2_23 && b3_23 && b4_33 && b5_38 && b6_1 && b7_13) {
matched = true;
pattern_id = 938;
}
if(b0_36 && b1_27 && b2_49 && b3_60 && b4_20 && b5_67 && b6_6 && b7_54 && b8_63 && b9_7 && b10_16) {
matched = true;
pattern_id = 939;
}
if(b0_36 && b1_3 && b2_37 && b3_30 && b4_44 && b5_3) {
matched = true;
pattern_id = 940;
}
if(b0_36 && b1_3 && b2_30 && b3_30 && b4_45 && b5_52 && b6_13 && b7_28 && b8_49 && b9_21 && b10_59 && b11_5 && b12_43) {
matched = true;
pattern_id = 941;
}
if(b0_36 && b1_3 && b2_54 && b3_2 && b4_38 && b5_59) {
matched = true;
pattern_id = 942;
}
if(b0_36 && b1_8 && b2_39 && b3_32 && b4_9 && b5_33 && b6_29 && b7_20) {
matched = true;
pattern_id = 943;
}
if(seq_0944 && b6_25 && b7_16 && b8_42 && b9_41 && b10_42) {
matched = true;
pattern_id = 944;
}
if(seq_0944 && b6_25 && b7_16 && b8_18 && b9_6 && b10_19 && b11_10 && b12_2) {
matched = true;
pattern_id = 945;
}
if(b0_60 && b1_20 && b2_58 && b3_55 && b4_8) {
matched = true;
pattern_id = 946;
}
if(b0_60 && b1_20 && b2_58 && b3_55 && b4_8 && b5_23 && b6_14 && b7_11 && b8_9 && b9_61) {
matched = true;
pattern_id = 947;
}
if(b0_76 && b1_16 && b2_13 && b3_27 && b4_45) {
matched = true;
pattern_id = 948;
}
if(b0_39 && b1_38 && b2_39 && b3_4) {
matched = true;
pattern_id = 949;
}
if(b0_39 && b1_20 && b2_35 && b3_34) {
matched = true;
pattern_id = 950;
}
if(b0_39 && b1_20 && b2_35 && b3_34 && b4_8) {
matched = true;
pattern_id = 951;
}
if(b0_39 && b1_20 && b2_44 && b3_2 && b4_9) {
matched = true;
pattern_id = 952;
}
if(b0_39 && b1_8 && b2_46 && b3_40) {
matched = true;
pattern_id = 953;
}
if(b0_39 && b1_21 && b2_20 && b3_6 && b4_39 && b5_23 && b6_50 && b7_3 && b8_9) {
matched = true;
pattern_id = 954;
}
if(seq_0955 && b6_2 && b7_26) {
matched = true;
pattern_id = 955;
}
if(seq_0955 && b6_2 && b7_26 && b8_9 && b9_40 && b10_22 && b11_15) {
matched = true;
pattern_id = 956;
}
if(seq_0957 && b6_30 && b7_19 && b8_10 && b9_20 && b10_17 && b11_8) {
matched = true;
pattern_id = 957;
}
if(seq_0957 && seq_6958 && b12_8 && b13_5 && b14_2) {
matched = true;
pattern_id = 958;
}
if(b0_40 && b1_69 && b2_39 && b3_30 && b4_20 && b5_18 && b6_9 && b7_56 && b8_3) {
matched = true;
pattern_id = 959;
}
if(b0_40 && b1_19 && b2_58 && b3_24 && b4_8 && b5_65 && seq_6960 && b12_4) {
matched = true;
pattern_id = 960;
}
if(b0_40 && b1_27 && b2_30 && b3_60) {
matched = true;
pattern_id = 961;
}
if(b0_40 && b1_41 && b2_35 && b3_12 && b4_23) {
matched = true;
pattern_id = 962;
}
if(b0_40 && b1_41 && b2_37) {
matched = true;
pattern_id = 963;
}
if(b0_40 && b1_41 && b2_37 && b3_13 && b4_8) {
matched = true;
pattern_id = 964;
}
if(b0_40 && b1_41 && b2_37 && b3_13 && b4_26) {
matched = true;
pattern_id = 965;
}
if(b0_40 && b1_20 && b2_37 && b3_30) {
matched = true;
pattern_id = 966;
}
if(b0_40 && b1_20 && b2_54 && b3_30) {
matched = true;
pattern_id = 967;
}
if(b0_40 && b1_8 && b2_44 && b3_13) {
matched = true;
pattern_id = 968;
}
if(b0_40 && b1_73) {
matched = true;
pattern_id = 969;
}
if(b0_40 && b1_1 && b2_18 && b3_46 && b4_15 && b5_9 && b6_11 && b7_17 && b8_14 && b9_9) {
matched = true;
pattern_id = 970;
}
if(b0_40 && b1_7 && b2_31 && b3_10 && b4_51 && b5_11 && b6_7 && b7_25 && b8_11 && b9_11) {
matched = true;
pattern_id = 971;
}
if(b0_9 && b1_19 && b2_28 && b3_30 && b4_9 && b5_19 && b6_23 && b7_15) {
matched = true;
pattern_id = 972;
}
if(b0_9 && b1_38 && b2_35 && b3_34 && b4_8) {
matched = true;
pattern_id = 973;
}
if(b0_9 && b1_56 && b2_39 && b3_4) {
matched = true;
pattern_id = 974;
}
if(b0_9 && b1_20 && b2_30 && b3_2 && b4_41 && b5_57 && b6_12 && b7_47 && b8_3) {
matched = true;
pattern_id = 975;
}
if(b0_9 && b1_66 && b2_28 && b3_4 && b4_27) {
matched = true;
pattern_id = 976;
}
if(b0_9 && b1_2 && b2_2 && b3_9 && b4_6 && b5_6 && b6_7 && b7_7 && b8_5) {
matched = true;
pattern_id = 977;
}
if(b0_47 && b1_13 && b2_24 && b3_18 && b4_18 && b5_29 && b6_62 && b7_3 && b8_9 && b9_48 && b10_13 && b11_15) {
matched = true;
pattern_id = 978;
}
if(b0_47 && b1_46 && b2_2 && b3_12 && b4_21 && b5_41 && b6_2 && b7_29) {
matched = true;
pattern_id = 979;
}
if(b0_24 && b1_19 && b2_47 && b3_4 && b4_4 && b5_19 && b6_32) {
matched = true;
pattern_id = 980;
}
if(b0_24 && b1_19 && b2_39 && b3_9) {
matched = true;
pattern_id = 981;
}
if(b0_24 && b1_19 && b2_39 && b3_9 && b4_8) {
matched = true;
pattern_id = 982;
}
if(b0_24 && b1_19 && b2_39 && b3_9 && b4_8 && b5_11 && b6_25 && b7_17 && b8_17 && b9_4 && b10_13 && b11_5 && b12_4) {
matched = true;
pattern_id = 983;
}
if(b0_24 && b1_19 && b2_30 && b3_28 && b4_49 && b5_13 && b6_5) {
matched = true;
pattern_id = 984;
}
if(b0_24 && b1_6 && b2_47 && b3_25 && b4_5 && b5_11) {
matched = true;
pattern_id = 985;
}
if(b0_24 && b1_4 && b2_21 && b3_52 && b4_14 && b5_27 && b6_18 && b7_33 && b8_35 && b9_2) {
matched = true;
pattern_id = 986;
}
if(b0_24 && b1_41) {
matched = true;
pattern_id = 987;
}
if(b0_24 && b1_20 && b2_21 && b3_22) {
matched = true;
pattern_id = 988;
}
if(b0_24 && b1_20 && b2_39 && b3_4) {
matched = true;
pattern_id = 989;
}
if(b0_24 && b1_20 && b2_39 && b3_4 && b4_8 && b5_29) {
matched = true;
pattern_id = 990;
}
if(seq_0991 && b6_46) {
matched = true;
pattern_id = 991;
}
if(seq_0991 && b6_46 && b7_16) {
matched = true;
pattern_id = 992;
}
if(b0_24 && b1_66 && b2_30) {
matched = true;
pattern_id = 993;
}
if(b0_24 && b1_36 && b2_37) {
matched = true;
pattern_id = 994;
}
if(b0_5 && b1_6 && b2_10 && b3_4 && b4_8 && b5_61 && b6_58 && b7_2 && b8_26 && b9_7 && b10_1) {
matched = true;
pattern_id = 995;
}
if(b0_5 && b1_29 && b2_4 && b3_37 && b4_35 && b5_23 && b6_3 && b7_11 && b8_9) {
matched = true;
pattern_id = 996;
}
if(b0_5 && b1_29 && b2_4 && b3_37 && b4_64 && b5_23 && b6_3 && b7_11 && b8_9) {
matched = true;
pattern_id = 997;
}
if(b0_5 && b1_29 && b2_21 && b3_11 && b4_50 && b5_59) {
matched = true;
pattern_id = 998;
}
if(b0_5 && b1_29 && b2_39 && b3_4) {
matched = true;
pattern_id = 999;
}
if(b0_5 && b1_29 && b2_30 && b3_8) {
matched = true;
pattern_id = 1000;
}
if(b0_5 && b1_29 && b2_54 && b3_24 && b4_27 && b5_33 && b6_12 && b7_23 && b8_3) {
matched = true;
pattern_id = 1001;
}
if(b0_5 && b1_42 && b2_34 && b3_13 && b4_3) {
matched = true;
pattern_id = 1002;
}
if(b0_5 && b1_38 && b2_60 && b3_45) {
matched = true;
pattern_id = 1003;
}
if(b0_5 && b1_67 && b2_37) {
matched = true;
pattern_id = 1004;
}
if(b0_5 && b1_67 && b2_37 && b3_2 && b4_45) {
matched = true;
pattern_id = 1005;
}
if(b0_5 && b1_3 && b2_60 && b3_8) {
matched = true;
pattern_id = 1006;
}
if(b0_5 && b1_3 && b2_60 && b3_8 && b4_8) {
matched = true;
pattern_id = 1007;
}
if(b0_5 && b1_3 && b2_30 && b3_12) {
matched = true;
pattern_id = 1008;
}
if(b0_5 && b1_71 && b2_39) {
matched = true;
pattern_id = 1009;
}
if(b0_5 && b1_8 && b2_8 && b3_4) {
matched = true;
pattern_id = 1010;
}
if(b0_5 && b1_2 && b2_15 && b3_10 && b4_36 && b5_44 && b6_11) {
matched = true;
pattern_id = 1011;
}
if(b0_5 && b1_2 && b2_5 && b3_5 && b4_5 && b5_5 && b6_5 && b7_5 && b8_4 && b9_4 && b10_3) {
matched = true;
pattern_id = 1012;
}
if(b0_21 && b1_19 && b2_28 && b3_24 && b4_8 && b5_65 && seq_6960 && b12_4) {
matched = true;
pattern_id = 1013;
}
if(seq_01014 && b6_12) {
matched = true;
pattern_id = 1014;
}
if(seq_01014 && b6_5 && b7_36 && b8_2 && b9_4) {
matched = true;
pattern_id = 1015;
}
if(b0_21 && b1_29 && b2_21 && b3_37 && b4_8 && b5_65 && seq_6960 && b12_4) {
matched = true;
pattern_id = 1016;
}
if(b0_21 && b1_38 && b2_10 && b3_50 && b4_49 && b5_38 && b6_3) {
matched = true;
pattern_id = 1017;
}
if(b0_21 && b1_38 && b2_30 && b3_30) {
matched = true;
pattern_id = 1018;
}
if(b0_21 && b1_38 && b2_30 && b3_30 && b4_8 && b5_4 && b6_53 && b7_4 && b8_43) {
matched = true;
pattern_id = 1019;
}
if(b0_21 && b1_20 && b2_28 && b3_24 && b4_8 && b5_65 && seq_6960 && b12_4) {
matched = true;
pattern_id = 1020;
}
if(b0_21 && b1_8 && b2_51 && b3_46) {
matched = true;
pattern_id = 1021;
}
if(b0_21 && b1_10) {
matched = true;
pattern_id = 1022;
}
if(b0_21 && b1_10 && b2_4 && b3_4) {
matched = true;
pattern_id = 1023;
}
if(b0_21 && b1_10 && b2_4 && b3_4 && b4_54 && b5_4) {
matched = true;
pattern_id = 1024;
}
if(b0_21 && b1_10 && b2_45 && b3_8) {
matched = true;
pattern_id = 1025;
}
if(b0_21 && b1_10 && b2_45 && b3_63) {
matched = true;
pattern_id = 1026;
}
if(b0_21 && b1_66 && b2_34 && b3_9 && b4_7 && b5_18 && b6_4 && b7_21 && b8_55) {
matched = true;
pattern_id = 1027;
}
if(b0_21 && b1_50 && b2_39 && b3_37 && b4_4 && b5_18) {
matched = true;
pattern_id = 1028;
}
if(b0_21 && b1_50 && b2_39 && b3_4) {
matched = true;
pattern_id = 1029;
}
if(b0_21 && b1_15 && b2_13 && b3_43 && b4_6 && b5_16 && b6_39 && b7_34) {
matched = true;
pattern_id = 1030;
}
if(b0_21 && b1_7 && b2_23 && b3_25 && b4_17 && b5_63 && b6_27 && b7_26 && b8_35 && b9_8 && b10_26 && b11_46 && b12_8 && b13_6) {
matched = true;
pattern_id = 1031;
}
if(b0_21 && b1_5 && b2_19 && b3_5 && b4_19 && b5_18) {
matched = true;
pattern_id = 1032;
}
if(b0_53 && b1_29 && b2_47 && b3_60 && b4_51 && b5_1 && b6_11 && b7_9 && b8_13 && b9_30) {
matched = true;
pattern_id = 1033;
}
if(b0_53 && b1_38 && b2_28 && b3_30 && b4_46 && b5_68 && b6_58 && b7_59 && b8_55) {
matched = true;
pattern_id = 1034;
}
if(b0_53 && b1_20 && b2_10) {
matched = true;
pattern_id = 1035;
}
if(b0_53 && b1_20 && b2_49 && b3_58 && b4_55 && b5_19 && b6_29) {
matched = true;
pattern_id = 1036;
}
if(b0_53 && b1_47 && b2_4 && b3_58 && b4_31) {
matched = true;
pattern_id = 1037;
}
if(b0_53 && b1_16 && b2_33 && b3_35 && b4_1 && b5_25 && b6_8 && b7_8 && b8_5 && b9_4 && b10_36 && b11_5 && b12_4 && b13_14 && b14_7) {
matched = true;
pattern_id = 1038;
}
if(b0_8 && b1_38 && b2_37 && b3_24) {
matched = true;
pattern_id = 1039;
}
if(b0_8 && b1_3 && b2_39 && b3_63 && b4_13 && b5_4 && b6_9 && b7_60 && b8_49 && b9_52 && b10_53) {
matched = true;
pattern_id = 1040;
}
if(b0_8 && b1_61 && b2_37 && b3_11 && b4_38 && b5_59 && b6_5 && b7_66 && b8_43 && b9_4) {
matched = true;
pattern_id = 1041;
}
if(b0_8 && b1_8 && b2_8 && b3_8) {
matched = true;
pattern_id = 1042;
}
if(b0_8 && b1_8 && b2_8 && b3_8 && b4_8) {
matched = true;
pattern_id = 1043;
}
if(b0_8 && b1_8 && b2_8 && b3_8 && b4_55 && b5_24 && b6_31 && b7_4 && b8_3) {
matched = true;
pattern_id = 1044;
}
if(b0_8 && b1_8 && b2_47 && b3_13) {
matched = true;
pattern_id = 1045;
}
if(seq_01046 && b6_36 && b7_9 && b8_7 && b9_9) {
matched = true;
pattern_id = 1046;
}
if(seq_01046 && seq_61047 && b12_34 && b13_4) {
matched = true;
pattern_id = 1047;
}
if(seq_01046 && seq_61047 && b12_34 && b13_4 && b14_24) {
matched = true;
pattern_id = 1048;
}
if(b0_8 && b1_49 && b2_24 && b3_18 && b4_2 && b5_10 && b6_16 && b7_9 && b8_9 && b9_40 && b10_22 && b11_15) {
matched = true;
pattern_id = 1049;
}
if(b0_42 && b1_29 && b2_47 && b3_9 && b4_4 && b5_24 && b6_34 && b7_2 && b8_2 && b9_7 && b10_1) {
matched = true;
pattern_id = 1050;
}
if(b0_42 && b1_47 && b2_60 && b3_62) {
matched = true;
pattern_id = 1051;
}
if(b0_42 && b1_2 && b2_22 && b3_27 && b4_36 && b5_9 && b6_39 && b7_52 && b8_47 && b9_18 && b10_5 && b11_17 && b12_8 && b13_19) {
matched = true;
pattern_id = 1052;
}
if(b0_4 && b1_4 && b2_4 && b3_4 && b4_4 && b5_4 && b6_4 && b7_4) {
matched = true;
pattern_id = 1053;
}
if(b0_4 && b1_38 && b2_21 && b3_37 && b4_4 && b5_18) {
matched = true;
pattern_id = 1054;
}
if(b0_4 && b1_47 && b2_4 && b3_27 && b4_1 && b5_5 && b6_16 && b7_25 && b8_18 && b9_22) {
matched = true;
pattern_id = 1055;
}
if(b0_4 && b1_1 && b2_7 && b3_19 && b4_36 && b5_20 && b6_36 && b7_4 && b8_14 && b9_10) {
matched = true;
pattern_id = 1056;
}
if(b0_4 && b1_21 && b2_20 && b3_22 && b4_18 && b5_31 && b6_7 && b7_22) {
matched = true;
pattern_id = 1057;
}
if(b0_4 && b1_5 && b2_1 && b3_6 && b4_6 && b5_3 && b6_6 && b7_6 && b8_5) {
matched = true;
pattern_id = 1058;
}
if(b0_64 && b1_69 && b2_60 && b3_5 && b4_17 && b5_21 && b6_8 && b7_7 && b8_35 && b9_5 && b10_6 && b11_52 && b12_40 && b13_11 && b14_21) {
matched = true;
pattern_id = 1059;
}
if(b0_64 && b1_6 && b2_53 && b3_37) {
matched = true;
pattern_id = 1060;
}
if(b0_64 && b1_29 && b2_62 && b3_58 && b4_55 && b5_8 && b6_3) {
matched = true;
pattern_id = 1061;
}
if(b0_64 && b1_67 && b2_64 && b3_37) {
matched = true;
pattern_id = 1062;
}
if(b0_64 && b1_10 && b2_21 && b3_37) {
matched = true;
pattern_id = 1063;
}
if(b0_63 && b1_67 && b2_39 && b3_22) {
matched = true;
pattern_id = 1064;
}
if(b0_63 && b1_36 && b2_47 && b3_7 && b4_18 && b5_63 && b6_52 && b7_51 && b8_51 && b9_49 && b10_51 && b11_23 && b12_10 && b13_26 && b14_17) {
matched = true;
pattern_id = 1065;
}
if(b0_73 && b1_30 && b2_33 && b3_27 && b4_1 && b5_39 && b6_8 && b7_26 && b8_15 && b9_44 && b10_26 && b11_11 && b12_41) {
matched = true;
pattern_id = 1066;
}
if(b0_48 && b1_14 && b2_14 && b3_16 && b4_3 && b5_66) {
matched = true;
pattern_id = 1067;
}
if(b0_48 && b1_19 && b2_52 && b3_7 && b4_16 && b5_30 && b6_17 && b7_19 && b8_7 && b9_11 && b10_17 && b11_29 && b12_21 && b13_10 && b14_4) {
matched = true;
pattern_id = 1068;
}
if(b0_48 && b1_61 && b2_51 && b3_32 && b4_23 && b5_34 && b6_49 && b7_45 && b8_18 && b9_35 && b10_27 && b11_8 && b12_14 && b13_19 && b14_12) {
matched = true;
pattern_id = 1069;
}
if(b0_48 && b1_47 && b2_38 && b3_37) {
matched = true;
pattern_id = 1070;
}
if(b0_48 && b1_11 && b2_19 && b3_35 && b4_21 && b5_38 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 1071;
}
if(b0_48 && b1_13 && b2_31 && b3_42 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 1072;
}
if(b0_11 && b1_31 && b2_32 && b3_13 && b4_14 && b5_3 && b6_25 && b7_16 && b8_5 && b9_16 && b10_12) {
matched = true;
pattern_id = 1073;
}
if(b0_11 && b1_54 && b2_19 && b3_6 && b4_5 && b5_70) {
matched = true;
pattern_id = 1074;
}
if(b0_11 && b1_11 && b2_2 && b3_14 && b4_11 && b5_10 && b6_11 && b7_9) {
matched = true;
pattern_id = 1075;
}
if(b0_11 && b1_21 && b2_5 && b3_28 && b4_30 && b5_19 && b6_5 && b7_11 && b8_35 && b9_29 && b10_45 && b11_24 && b12_18 && b13_2 && b14_4) {
matched = true;
pattern_id = 1076;
}
if(b0_11 && b1_24 && b2_13 && b3_26 && b4_12) {
matched = true;
pattern_id = 1077;
}
if(b0_11 && b1_24 && b2_13 && b3_26 && b4_12 && b5_3 && b6_11 && b7_10 && b8_12 && b9_11 && b10_8) {
matched = true;
pattern_id = 1078;
}
if(b0_11 && b1_24 && b2_23 && b3_31 && b4_14 && b5_9 && b6_39 && b7_6 && b8_19 && b9_12 && b10_33 && b11_10 && b12_2 && b13_6 && b14_8) {
matched = true;
pattern_id = 1079;
}
if(b0_11 && b1_24 && b2_23 && b3_31 && b4_1 && b5_9 && b6_38 && b7_7 && b8_24 && b9_5) {
matched = true;
pattern_id = 1080;
}
if(seq_01081 && b6_19 && b7_52 && b8_24 && b9_6 && b10_29 && b11_37 && b12_18 && b13_17 && b14_8) {
matched = true;
pattern_id = 1081;
}
if(seq_01081 && b6_19 && b7_52 && b8_31 && b9_12 && b10_14 && b11_38 && b12_5) {
matched = true;
pattern_id = 1082;
}
if(seq_01081 && b6_19 && b7_37 && b8_5 && b9_8) {
matched = true;
pattern_id = 1083;
}
if(b0_11 && b1_24 && b2_23 && b3_31 && b4_11 && b5_16 && b6_7 && b7_33 && b8_1) {
matched = true;
pattern_id = 1084;
}
if(b0_11 && b1_24 && b2_23 && b3_19 && b4_5 && b5_31 && b6_41 && b7_2 && b8_22 && b9_58 && b10_1) {
matched = true;
pattern_id = 1085;
}
if(b0_11 && b1_24 && b2_2 && b3_10 && b4_17) {
matched = true;
pattern_id = 1086;
}
if(seq_01087 && b6_25 && b7_19 && b8_19 && b9_18 && b10_27 && b11_24 && b12_5 && b13_2) {
matched = true;
pattern_id = 1087;
}
if(seq_01087 && b6_11 && b7_19 && b8_45 && b9_20 && b10_17) {
matched = true;
pattern_id = 1088;
}
if(seq_01087 && b6_38 && b7_6 && b8_5 && b9_12) {
matched = true;
pattern_id = 1089;
}
if(b0_11 && b1_40 && b2_2 && b3_14 && b4_15 && b5_11 && seq_61090) {
matched = true;
pattern_id = 1090;
}
if(b0_11 && b1_13 && b2_42 && b3_23 && b4_36 && b5_39 && b6_8 && b7_8 && b8_10 && b9_6 && b10_10 && b11_33 && b12_5 && b13_27 && b14_16) {
matched = true;
pattern_id = 1091;
}
if(b0_11 && b1_5 && b2_2 && b3_25 && b4_14 && b5_6 && b6_16 && b7_9 && b8_7 && b9_9 && b10_1 && b11_31 && b12_42 && b13_4) {
matched = true;
pattern_id = 1092;
}
if(b0_11 && b1_46 && b2_2 && b3_19 && b4_33 && b5_7 && b6_27 && b7_55 && b8_5 && b9_29 && b10_25 && b11_47 && b12_8 && b13_21 && b14_8) {
matched = true;
pattern_id = 1093;
}
if(b0_16 && b1_1 && b2_15 && b3_17 && b4_15 && b5_9 && b6_2 && b7_7) {
matched = true;
pattern_id = 1094;
}
if(b0_16 && b1_2 && b2_2 && b3_25 && b4_18 && b5_25 && b6_16 && b7_12 && b8_1 && b9_9 && b10_6 && b11_3 && b12_2 && b13_2) {
matched = true;
pattern_id = 1095;
}
if(b0_16 && b1_21 && b2_20 && b3_28 && b4_3 && b5_13 && b6_5 && b7_25 && b8_10 && b9_10 && b10_1 && b11_11 && b12_1 && b13_4) {
matched = true;
pattern_id = 1096;
}
if(b0_16 && b1_5 && b2_7 && b3_7 && b4_51) {
matched = true;
pattern_id = 1097;
}
if(b0_10 && b1_1 && b2_23 && b3_10 && b4_2 && b5_11 && b6_8 && b7_7) {
matched = true;
pattern_id = 1098;
}
if(b0_10 && b1_1 && b2_2 && b3_13) {
matched = true;
pattern_id = 1099;
}
if(b0_10 && b1_48 && b2_50 && b3_29) {
matched = true;
pattern_id = 1100;
}
if(b0_10 && b1_15 && b2_24 && b3_39 && b4_47 && b5_51 && b6_10 && b7_12 && b8_11 && b9_26 && b10_9) {
matched = true;
pattern_id = 1101;
}
if(b0_10 && b1_24 && b2_13 && b3_10 && b4_2 && b5_31) {
matched = true;
pattern_id = 1102;
}
if(b0_10 && b1_30 && b2_31 && b3_29 && b4_12 && b5_1 && b6_7) {
matched = true;
pattern_id = 1103;
}
if(b0_10 && b1_30 && b2_31 && b3_33 && b4_49 && b5_38 && b6_7 && b7_29 && b8_5) {
matched = true;
pattern_id = 1104;
}
if(b0_10 && b1_30 && b2_31 && b3_31 && b4_17 && b5_9 && b6_2 && b7_8 && b8_1 && b9_15) {
matched = true;
pattern_id = 1105;
}
if(b0_10 && b1_7 && b2_5 && b3_44 && b4_18 && b5_20 && b6_25 && b7_54 && b8_35 && b9_56) {
matched = true;
pattern_id = 1106;
}
if(seq_01107 && b6_11 && b7_52 && b8_35 && b9_18 && b10_15 && b11_24) {
matched = true;
pattern_id = 1107;
}
if(seq_01107 && b6_11 && b7_9 && b8_35) {
matched = true;
pattern_id = 1108;
}
if(seq_01107 && b6_11 && b7_2 && b8_22 && b9_58 && b10_1) {
matched = true;
pattern_id = 1109;
}
if(b0_10 && b1_7 && b2_20 && b3_7 && b4_12 && b5_20 && b6_11 && b7_8 && b8_44 && b9_26 && b10_17 && b11_32) {
matched = true;
pattern_id = 1110;
}
if(b0_10 && b1_7 && b2_20 && b3_26 && b4_12 && b5_7 && b6_11 && b7_2 && b8_34 && b9_59 && b10_1) {
matched = true;
pattern_id = 1111;
}
if(seq_01112) {
matched = true;
pattern_id = 1112;
}
if(seq_01112 && b6_12 && b7_17 && b8_27 && b9_9 && b10_33 && b11_39 && b12_10 && b13_20 && b14_13) {
matched = true;
pattern_id = 1113;
}
if(seq_01112 && b6_12 && b7_8 && b8_27 && b9_46 && b10_29 && b11_2) {
matched = true;
pattern_id = 1114;
}
if(b0_10 && b1_49 && b2_2 && b3_36 && b4_6 && b5_5 && b6_56) {
matched = true;
pattern_id = 1115;
}
if(b0_10 && b1_45 && b2_32 && b3_10 && b4_17 && b5_39 && b6_2 && b7_27) {
matched = true;
pattern_id = 1116;
}
if(b0_10 && b1_9 && b2_9 && b3_11 && b4_8 && b5_8 && b6_9 && b7_2) {
matched = true;
pattern_id = 1117;
}
if(b0_18 && b1_17 && b2_9 && b3_19 && b4_16 && b5_15) {
matched = true;
pattern_id = 1118;
}
if(b0_18 && b1_1 && b2_31 && b3_5 && b4_1 && b5_66) {
matched = true;
pattern_id = 1119;
}
if(b0_18 && b1_1 && b2_2 && b3_25 && b4_19 && b5_5 && b6_11 && b7_2 && b8_22 && b9_58 && b10_1) {
matched = true;
pattern_id = 1120;
}
if(b0_18 && b1_1 && b2_2 && b3_25 && b4_6 && b5_9 && b6_26 && b7_8 && b8_9 && b9_57 && b10_61 && b11_15) {
matched = true;
pattern_id = 1121;
}
if(b0_18 && b1_1 && b2_2 && b3_25 && b4_53 && b5_40 && b6_9 && b7_2) {
matched = true;
pattern_id = 1122;
}
if(seq_01123 && b6_19 && b7_37 && b8_5 && b9_8) {
matched = true;
pattern_id = 1123;
}
if(seq_01123 && b6_19 && b7_37 && b8_5 && b9_8 && b10_5 && b11_24 && b12_24 && b13_2) {
matched = true;
pattern_id = 1124;
}
if(b0_18 && b1_2 && b2_7 && b3_39 && b4_17 && b5_16 && b6_19 && b7_9 && b8_3) {
matched = true;
pattern_id = 1125;
}
if(b0_18 && b1_21 && b2_31 && b3_56) {
matched = true;
pattern_id = 1126;
}
if(b0_18 && b1_21 && b2_24 && b3_28 && b4_62 && b5_30 && b6_5) {
matched = true;
pattern_id = 1127;
}
if(b0_18 && b1_40 && b2_7 && b3_28 && b4_62 && b5_30 && b6_5) {
matched = true;
pattern_id = 1128;
}
if(b0_18 && b1_7 && b2_63 && b3_10 && b4_39 && b5_31) {
matched = true;
pattern_id = 1129;
}
if(b0_18 && b1_7 && b2_15 && b3_7 && b4_33 && b5_11 && b6_7 && b7_27 && b8_28 && b9_46 && b10_15 && b11_14) {
matched = true;
pattern_id = 1130;
}
if(seq_01131 && b6_8 && b7_17 && b8_28 && b9_24 && b10_41 && b11_28 && b12_22) {
matched = true;
pattern_id = 1131;
}
if(seq_01131 && b6_8 && b7_17 && b8_9 && b9_57 && b10_61 && b11_15) {
matched = true;
pattern_id = 1132;
}
if(b0_18 && b1_16 && b2_19 && b3_43 && b4_8 && b5_31 && b6_8 && b7_25 && b8_18 && b9_5) {
matched = true;
pattern_id = 1133;
}
if(b0_43 && b1_16 && b2_22 && b3_5 && b4_17 && b5_3) {
matched = true;
pattern_id = 1134;
}
if(b0_43 && b1_44 && b2_24 && b3_39 && b4_53 && b5_40 && b6_9 && b7_2) {
matched = true;
pattern_id = 1135;
}
if(b0_43 && b1_44 && b2_42 && b3_35) {
matched = true;
pattern_id = 1136;
}
if(b0_43 && b1_44 && b2_42 && b3_35 && b4_8 && b5_39 && b6_35 && b7_25 && b8_5 && b9_12 && b10_23 && b11_3 && b12_9) {
matched = true;
pattern_id = 1137;
}
if(b0_20 && b1_1 && b2_7 && b3_7 && b4_15 && b5_11 && seq_61090) {
matched = true;
pattern_id = 1138;
}
if(b0_20 && b1_21 && b2_15 && b3_17 && b4_12 && b5_20) {
matched = true;
pattern_id = 1139;
}
if(b0_20 && b1_21 && b2_23 && b3_10 && b4_46 && b5_27 && b6_8 && b7_26 && b8_27 && b9_11 && b10_17 && b11_14 && b12_36) {
matched = true;
pattern_id = 1140;
}
if(b0_20 && b1_21 && b2_23 && b3_10 && b4_2 && b5_10 && b6_16 && b7_9 && b8_61) {
matched = true;
pattern_id = 1141;
}
if(b0_20 && b1_21 && b2_23 && b3_10 && b4_53 && b5_60 && b6_13 && b7_2 && b8_15 && b9_13) {
matched = true;
pattern_id = 1142;
}
if(b0_20 && b1_7 && b2_22 && b3_6 && b4_24 && b5_29 && seq_6572 && b12_9 && b13_16 && b14_6) {
matched = true;
pattern_id = 1143;
}
if(b0_20 && b1_16 && b2_13 && b3_20 && b4_18 && b5_17) {
matched = true;
pattern_id = 1144;
}
if(b0_20 && b1_16 && b2_19 && b3_44 && b4_51 && b5_56 && b6_50 && b7_3 && b8_63 && b9_6 && b10_30 && b11_2 && b12_3 && b13_15 && b14_22) {
matched = true;
pattern_id = 1145;
}
if(b0_20 && b1_5 && b2_42 && b3_29 && b4_12 && b5_1 && b6_7) {
matched = true;
pattern_id = 1146;
}
if(b0_20 && b1_5 && b2_42 && b3_28 && b4_30 && b5_19 && b6_5) {
matched = true;
pattern_id = 1147;
}
if(b0_20 && b1_5 && b2_42 && b3_28 && b4_62 && b5_30 && b6_5) {
matched = true;
pattern_id = 1148;
}
if(b0_20 && b1_46 && b2_23 && b3_23 && b4_53 && b5_40 && b6_9 && b7_2) {
matched = true;
pattern_id = 1149;
}
if(b0_26 && b1_20 && b2_22 && b3_25 && b4_11 && b5_5) {
matched = true;
pattern_id = 1150;
}
if(b0_26 && b1_1 && b2_2 && b3_10 && b4_26 && b5_44 && b6_17 && b7_27 && b8_9 && b9_40 && b10_52 && b11_15 && b12_14 && b13_31 && b14_20) {
matched = true;
pattern_id = 1151;
}
if(b0_26 && b1_2 && b2_7 && b3_6 && b4_2 && b5_11 && b6_17 && b7_9 && b8_10 && b9_9 && b10_7) {
matched = true;
pattern_id = 1152;
}
if(b0_26 && b1_2 && b2_2 && b3_39 && b4_22 && b5_16 && b6_7 && b7_26 && b8_19) {
matched = true;
pattern_id = 1153;
}
if(b0_26 && b1_16 && b2_33 && b3_35 && b4_5 && b5_3) {
matched = true;
pattern_id = 1154;
}
if(b0_26 && b1_49 && b2_2 && b3_27 && b4_12 && b5_10 && b6_10 && b7_38 && b8_6) {
matched = true;
pattern_id = 1155;
}
if(b0_7 && b1_1 && b2_18 && b3_16 && b4_17) {
matched = true;
pattern_id = 1156;
}
if(b0_7 && b1_21 && b2_14 && b3_16) {
matched = true;
pattern_id = 1157;
}
if(b0_7 && b1_7 && b2_7 && b3_7) {
matched = true;
pattern_id = 1158;
}
if(b0_7 && b1_7 && b2_7 && b3_7 && b4_36 && b5_11 && b6_56) {
matched = true;
pattern_id = 1159;
}
if(b0_7 && b1_5 && b2_2 && b3_43 && b4_53 && b5_60 && b6_13 && b7_2 && b8_15 && b9_13) {
matched = true;
pattern_id = 1160;
}
if(b0_7 && b1_5 && b2_2 && b3_43 && b4_53 && b5_40 && b6_9 && b7_2) {
matched = true;
pattern_id = 1161;
}
if(b0_66 && b1_8 && b2_42 && b3_36 && b4_70 && b5_5 && b6_18 && b7_12 && b8_39 && b9_11 && b10_17 && b11_14) {
matched = true;
pattern_id = 1162;
}
if(b0_66 && b1_11 && b2_5 && b3_43 && b4_53 && b5_40 && b6_9 && b7_2) {
matched = true;
pattern_id = 1163;
}
if(b0_66 && b1_15 && b2_33 && b3_26 && b4_12) {
matched = true;
pattern_id = 1164;
}
if(b0_66 && b1_40 && b2_31 && b3_10 && b4_39 && b5_38 && b6_41 && b7_1 && b8_31) {
matched = true;
pattern_id = 1165;
}
if(b0_66 && b1_13 && b2_2 && b3_6 && b4_39) {
matched = true;
pattern_id = 1166;
}
if(b0_67) {
matched = true;
pattern_id = 1167;
}
if(b0_27 && b1_21 && b2_23 && b3_23 && b4_24 && b5_5) {
matched = true;
pattern_id = 1168;
}
if(b0_12 && b1_23 && b2_12) {
matched = true;
pattern_id = 1169;
}
if(b0_12 && b1_23 && b2_12 && b3_25 && b4_15 && b5_26 && b6_18) {
matched = true;
pattern_id = 1170;
}
if(b0_12 && b1_48 && b2_49 && b3_23 && b4_36 && b5_42 && b6_10 && b7_19 && b8_13 && b9_22 && b10_25 && b11_17 && b12_10 && b13_6 && b14_3) {
matched = true;
pattern_id = 1171;
}
if(b0_12 && b1_35 && b2_7 && b3_7 && b4_17 && b5_5 && b6_8 && b7_32 && b8_9 && b9_48 && b10_60 && b11_15) {
matched = true;
pattern_id = 1172;
}
if(b0_12 && b1_21 && b2_32 && b3_29 && b4_36 && b5_20 && b6_28 && b7_13 && b8_31 && b9_15 && b10_5) {
matched = true;
pattern_id = 1173;
}
if(b0_12 && b1_21 && b2_7 && b3_7 && b4_18) {
matched = true;
pattern_id = 1174;
}
if(seq_01175 && b6_12 && b7_10 && b8_7) {
matched = true;
pattern_id = 1175;
}
if(seq_01175 && b6_54 && b7_8 && b8_13 && b9_47 && b10_17) {
matched = true;
pattern_id = 1176;
}
if(b0_12 && b1_7 && b2_11 && b3_14 && b4_2 && b5_3 && seq_6958 && b12_8 && b13_5 && b14_2) {
matched = true;
pattern_id = 1177;
}
if(b0_12 && b1_7 && b2_11 && b3_14 && b4_2 && b5_66 && b6_3) {
matched = true;
pattern_id = 1178;
}
if(b0_12 && b1_7 && b2_11 && b3_14 && b4_2 && b5_44 && b6_2 && b7_6 && b8_19 && b9_4 && b10_47 && b11_34 && b12_4) {
matched = true;
pattern_id = 1179;
}
if(seq_01180 && b6_14 && b7_11 && b8_9) {
matched = true;
pattern_id = 1180;
}
if(seq_01180 && b6_14 && b7_11 && b8_9 && b9_16 && b10_4 && b11_3 && b12_11 && b13_6) {
matched = true;
pattern_id = 1181;
}
if(b0_12 && b1_16 && b2_17 && b3_18 && b4_3 && b5_1) {
matched = true;
pattern_id = 1182;
}
if(b0_12 && b1_49 && b2_57 && b3_48 && b4_3 && b5_32 && b6_18) {
matched = true;
pattern_id = 1183;
}
if(b0_71 && b1_1 && b2_15 && b3_55 && b4_18 && b5_27 && b6_7 && b7_64) {
matched = true;
pattern_id = 1184;
}
if(b0_71 && b1_1 && b2_7 && b3_19 && b4_36 && b5_20 && b6_7 && b7_64) {
matched = true;
pattern_id = 1185;
}
if(b0_71 && b1_7 && b2_1 && b3_14 && b4_22 && b5_25 && b6_8) {
matched = true;
pattern_id = 1186;
}
if(b0_71 && b1_45 && b2_43 && b3_10 && b4_17 && b5_26 && b6_27 && b7_12 && b8_7 && b9_4 && b10_47 && b11_34 && b12_4) {
matched = true;
pattern_id = 1187;
}
if(b0_28 && b1_1 && b2_5 && b3_10 && b4_51 && b5_26 && b6_28 && b7_7 && b8_5 && b9_5 && b10_10 && b11_6 && b12_23 && b13_11 && b14_2) {
matched = true;
pattern_id = 1188;
}
if(b0_28 && b1_11 && b2_50 && b3_10 && b4_39 && b5_5) {
matched = true;
pattern_id = 1189;
}
if(b0_28 && b1_2 && b2_2 && b3_29 && b4_12 && b5_1 && b6_7) {
matched = true;
pattern_id = 1190;
}
if(b0_28 && b1_2 && b2_16 && b3_15 && b4_17 && b5_9 && b6_38 && b7_27) {
matched = true;
pattern_id = 1191;
}
if(b0_28 && b1_2 && b2_16 && b3_27 && b4_12 && b5_7 && b6_20 && b7_9 && b8_13) {
matched = true;
pattern_id = 1192;
}
if(b0_28 && b1_2 && b2_16 && b3_27 && b4_22 && b5_5 && b6_11 && b7_8 && b8_5 && b9_12 && b10_26 && b11_17 && b12_23 && b13_8) {
matched = true;
pattern_id = 1193;
}
if(b0_28 && b1_21 && b2_11 && b3_15 && b4_18 && b5_6 && b6_19 && b7_10 && b8_19 && b9_24 && b10_32) {
matched = true;
pattern_id = 1194;
}
if(b0_69 && b1_13 && b2_63) {
matched = true;
pattern_id = 1195;
}
if(seq_01196 && b6_28 && b7_18 && b8_18 && b9_18 && b10_8 && b11_6) {
matched = true;
pattern_id = 1196;
}
if(seq_01196 && b6_27 && b7_6 && b8_1 && b9_17 && b10_14 && b11_6 && b12_5) {
matched = true;
pattern_id = 1197;
}
if(seq_01196 && b6_26 && b7_19 && b8_10 && b9_10 && b10_15) {
matched = true;
pattern_id = 1198;
}
if(seq_01196 && b6_26 && b7_19 && b8_19 && b9_18 && b10_10) {
matched = true;
pattern_id = 1199;
}
if(b0_29 && b1_1 && b2_7 && b3_27 && b4_8 && b5_21 && b6_17 && b7_3 && b8_2 && b9_9) {
matched = true;
pattern_id = 1200;
}
if(b0_29 && b1_48 && b2_48 && b3_31 && b4_12 && b5_2 && b6_8 && b7_29 && b8_56) {
matched = true;
pattern_id = 1201;
}
if(b0_29 && b1_21 && b2_20 && b3_15) {
matched = true;
pattern_id = 1202;
}
if(b0_29 && b1_24 && b2_52 && b3_15 && b4_51 && b5_52 && b6_13 && b7_49) {
matched = true;
pattern_id = 1203;
}
if(b0_29 && b1_40 && b2_11 && b3_13 && b4_56 && b5_62 && b6_1 && b7_13 && b8_50 && b9_8 && b10_3 && b11_19 && b12_31 && b13_25) {
matched = true;
pattern_id = 1204;
}
if(b0_29 && b1_7 && b2_20 && b3_15) {
matched = true;
pattern_id = 1205;
}
if(b0_29 && b1_7 && b2_7 && b3_7 && b4_51) {
matched = true;
pattern_id = 1206;
}
if(b0_29 && b1_16 && b2_13 && b3_26 && b4_18 && b5_31 && b6_7) {
matched = true;
pattern_id = 1207;
}
if(b0_29 && b1_16 && b2_19 && b3_43 && b4_21 && b5_16 && b6_39 && b7_17) {
matched = true;
pattern_id = 1208;
}
if(b0_29 && b1_16 && b2_19 && b3_7 && b4_33 && b5_31 && b6_35 && b7_27 && b8_5) {
matched = true;
pattern_id = 1209;
}
if(b0_29 && b1_49 && b2_14 && b3_56) {
matched = true;
pattern_id = 1210;
}
if(b0_29 && b1_49 && b2_48 && b3_14 && b4_22 && b5_5 && b6_56 && b7_2 && b8_34 && b9_48 && b10_1 && b11_43) {
matched = true;
pattern_id = 1211;
}
if(b0_29 && b1_46 && b2_32 && b3_23 && b4_36 && b5_39) {
matched = true;
pattern_id = 1212;
}
if(b0_1 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_1 && b7_1 && b8_1 && b9_1) {
matched = true;
pattern_id = 1213;
}
if(b0_17 && b1_14 && b2_14 && b3_7) {
matched = true;
pattern_id = 1214;
}
if(b0_17 && b1_1 && b2_20 && b3_15 && b4_12 && b5_23 && b6_33 && b7_28 && b8_9) {
matched = true;
pattern_id = 1215;
}
if(b0_17 && b1_1 && b2_16 && b3_14 && b4_2 && b5_38 && b6_41 && b7_1 && b8_31 && b9_33 && b10_27 && b11_32) {
matched = true;
pattern_id = 1216;
}
if(b0_17 && b1_11 && b2_5 && b3_20 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 1217;
}
if(b0_17 && b1_11 && b2_42 && b3_7 && b4_8 && b5_31 && b6_2 && b7_2 && b8_26 && b9_7 && b10_1) {
matched = true;
pattern_id = 1218;
}
if(b0_17 && b1_2 && b2_7 && b3_5 && b4_22 && b5_47 && b6_7 && b7_2 && b8_22 && b9_58 && b10_1) {
matched = true;
pattern_id = 1219;
}
if(b0_17 && b1_2 && b2_16 && b3_7) {
matched = true;
pattern_id = 1220;
}
if(b0_17 && b1_30 && b2_11 && b3_18 && b4_33 && b5_28 && b6_41) {
matched = true;
pattern_id = 1221;
}
if(b0_17 && b1_7 && b2_19 && b3_7) {
matched = true;
pattern_id = 1222;
}
if(b0_17 && b1_5 && b2_7 && b3_43 && b4_53 && b5_60 && b6_13 && b7_2 && b8_15 && b9_13) {
matched = true;
pattern_id = 1223;
}
if(b0_19 && b1_57 && b2_33 && b3_23 && b4_36 && b5_47 && b6_7 && b7_13 && b8_31 && b9_15 && b10_5 && b11_27 && b12_14 && b13_31 && b14_20) {
matched = true;
pattern_id = 1224;
}
if(b0_19 && b1_57 && b2_2 && b3_25 && b4_1 && b5_45 && b6_1 && b7_27 && b8_6 && b9_26 && b10_48 && b11_10 && b12_16 && b13_13) {
matched = true;
pattern_id = 1225;
}
if(b0_19 && b1_1 && b2_2 && b3_5 && b4_17 && b5_16) {
matched = true;
pattern_id = 1226;
}
if(b0_19 && b1_2 && b2_33 && b3_18 && b4_14 && b5_6) {
matched = true;
pattern_id = 1227;
}
if(b0_19 && b1_2 && b2_15 && b3_6 && b4_17 && b5_5 && b6_37 && b7_6 && b8_10 && b9_9 && b10_17 && b11_41 && b12_30 && b13_11 && b14_10) {
matched = true;
pattern_id = 1228;
}
if(b0_19 && b1_2 && b2_23 && b3_10 && b4_14 && b5_31 && b6_12) {
matched = true;
pattern_id = 1229;
}
if(b0_19 && b1_2 && b2_20 && b3_20 && b4_24 && b5_5) {
matched = true;
pattern_id = 1230;
}
if(b0_19 && b1_2 && b2_20 && b3_20 && b4_1 && b5_17 && b6_26) {
matched = true;
pattern_id = 1231;
}
if(b0_19 && b1_2 && b2_20 && b3_20 && b4_37 && b5_28 && b6_39 && b7_19 && b8_30 && b9_5) {
matched = true;
pattern_id = 1232;
}
if(b0_19 && b1_2 && b2_22 && b3_26 && b4_22 && b5_5 && b6_11 && b7_23 && b8_28 && b9_25 && b10_26 && b11_26 && b12_3 && b13_15 && b14_9) {
matched = true;
pattern_id = 1233;
}
if(b0_19 && b1_2 && b2_2 && b3_4 && b4_36 && b5_27 && b6_7 && b7_12 && b8_11 && b9_9 && b10_1 && b11_16 && b12_38 && b13_4) {
matched = true;
pattern_id = 1234;
}
if(b0_19 && b1_15 && b2_24 && b3_23 && b4_22 && b5_3 && b6_19 && b7_12 && b8_11 && b9_10 && b10_6) {
matched = true;
pattern_id = 1235;
}
if(b0_19 && b1_21 && b2_15 && b3_17 && b4_12 && b5_20) {
matched = true;
pattern_id = 1236;
}
if(b0_19 && b1_21 && b2_5 && b3_43 && b4_22 && b5_5 && b6_5 && b7_66 && b8_43 && b9_4) {
matched = true;
pattern_id = 1237;
}
if(b0_19 && b1_22 && b2_13 && b3_23 && b4_22 && b5_22) {
matched = true;
pattern_id = 1238;
}
if(b0_19 && b1_24 && b2_24 && b3_10 && b4_6 && b5_23 && b6_33 && b7_28 && b8_9) {
matched = true;
pattern_id = 1239;
}
if(b0_19 && b1_24 && b2_19 && b3_1 && b4_16 && b5_31 && b6_11 && b7_27 && b8_9 && b9_57 && b10_61 && b11_15) {
matched = true;
pattern_id = 1240;
}
if(b0_19 && b1_30 && b2_7) {
matched = true;
pattern_id = 1241;
}
if(b0_19 && b1_40 && b2_33 && b3_44 && b4_12 && b5_66) {
matched = true;
pattern_id = 1242;
}
if(b0_19 && b1_13 && b2_19 && b3_5 && b4_21 && b5_21 && b6_2 && b7_7 && b8_8 && b9_8) {
matched = true;
pattern_id = 1243;
}
if(b0_19 && b1_5 && b2_33 && b3_7 && b4_12 && b5_27 && b6_7 && b7_26 && b8_19) {
matched = true;
pattern_id = 1244;
}
if(b0_19 && b1_5 && b2_19 && b3_43 && b4_53 && b5_40 && b6_9 && b7_2) {
matched = true;
pattern_id = 1245;
}
if(b0_19 && b1_5 && b2_22 && b3_10 && b4_18 && b5_27 && b6_21) {
matched = true;
pattern_id = 1246;
}
if(b0_19 && b1_45 && b2_20 && b3_28 && b4_62 && b5_30 && b6_5) {
matched = true;
pattern_id = 1247;
}
if(b0_19 && b1_45 && b2_7 && b3_29 && b4_18 && b5_25 && b6_18 && b7_52 && b8_11 && b9_8 && b10_17 && b11_14 && b12_5) {
matched = true;
pattern_id = 1248;
}
if(b0_49 && b1_1 && b2_17 && b3_10 && b4_5 && b5_6 && b6_27 && b7_6) {
matched = true;
pattern_id = 1249;
}
if(b0_49 && b1_11 && b2_42 && b3_20 && b4_18 && b5_31 && b6_8 && b7_2 && b8_22 && b9_58 && b10_1) {
matched = true;
pattern_id = 1250;
}
if(b0_49 && b1_2 && b2_23 && b3_35 && b4_12 && b5_31 && b6_1 && b7_9 && b8_37 && b9_5) {
matched = true;
pattern_id = 1251;
}
if(b0_49 && b1_2 && b2_18 && b3_7 && b4_33 && b5_66 && b6_63 && b7_3 && b8_25 && b9_54 && b10_13 && b11_5) {
matched = true;
pattern_id = 1252;
}
if(b0_49 && b1_35 && b2_2 && b3_43 && b4_26 && b5_5 && b6_45 && b7_9) {
matched = true;
pattern_id = 1253;
}
if(b0_49 && b1_21 && b2_5 && b3_10 && b4_53 && b5_60 && b6_13 && b7_16 && b8_34 && b9_3 && b10_1) {
matched = true;
pattern_id = 1254;
}
if(b0_49 && b1_7 && b2_6 && b3_27 && b4_37 && b5_3 && b6_10 && b7_12 && b8_14 && b9_9) {
matched = true;
pattern_id = 1255;
}
if(b0_49 && b1_16 && b2_52 && b3_35 && b4_14 && b5_10 && b6_11 && b7_9 && b8_3 && b9_9 && b10_33 && b11_39 && b12_15 && b13_2) {
matched = true;
pattern_id = 1256;
}
if(b0_49 && b1_16 && b2_56) {
matched = true;
pattern_id = 1257;
}
if(b0_49 && b1_49 && b2_2 && b3_14 && b4_1 && b5_10 && b6_41 && b7_10 && b8_28 && b9_29 && b10_29 && b11_19) {
matched = true;
pattern_id = 1258;
}
if(b0_59 && b1_48 && b2_42 && b3_20 && b4_18 && b5_31 && b6_8 && b7_2 && b8_22 && b9_58 && b10_1) {
matched = true;
pattern_id = 1259;
}
if(b0_59 && b1_48 && b2_42 && b3_28 && b4_62 && b5_30 && b6_5) {
matched = true;
pattern_id = 1260;
}
if(b0_59 && b1_21 && b2_31 && b3_56) {
matched = true;
pattern_id = 1261;
}
if(b0_59 && b1_40 && b2_33 && b3_44 && b4_12) {
matched = true;
pattern_id = 1262;
}
if(b0_59 && b1_49 && b2_24 && b3_18 && b4_46 && b5_31 && b6_8 && b7_25 && b8_18 && b9_5 && b10_9 && b11_17 && b12_10 && b13_5 && b14_13) {
matched = true;
pattern_id = 1263;
}
if(b0_45 && b1_2 && b2_22 && b3_27 && b4_36 && b5_9 && b6_39) {
matched = true;
pattern_id = 1264;
}
if(b0_45 && b1_7 && b2_13 && b3_39 && b4_12 && b5_27 && b6_8 && b7_10 && b8_18) {
matched = true;
pattern_id = 1265;
}
if(b0_45 && b1_16 && b2_48 && b3_36) {
matched = true;
pattern_id = 1266;
}
if(b0_15 && b1_14 && b2_14 && b3_1 && b4_3 && b5_13) {
matched = true;
pattern_id = 1267;
}
if(b0_15 && b1_1 && b2_13 && b3_7 && b4_10 && b5_16 && b6_39 && b7_34 && b8_62 && b9_12 && b10_28) {
matched = true;
pattern_id = 1268;
}
if(b0_15 && b1_1 && b2_20 && b3_17) {
matched = true;
pattern_id = 1269;
}
if(b0_15 && b1_15 && b2_14 && b3_16 && b4_5 && b5_14) {
matched = true;
pattern_id = 1270;
}
if(b0_15 && b1_15 && b2_19 && b3_14 && b4_1 && b5_23 && b6_14 && b7_11 && b8_9 && b9_13 && b10_11) {
matched = true;
pattern_id = 1271;
}
if(b0_15 && b1_49 && b2_36 && b3_29 && b4_12 && b5_1 && b6_7) {
matched = true;
pattern_id = 1272;
}
if(b0_54 && b1_13 && b2_49 && b3_39 && b4_24 && b5_11 && b6_26 && b7_1 && b8_5 && b9_20 && b10_29) {
matched = true;
pattern_id = 1273;
}
if(b0_54 && b1_13 && b2_49 && b3_10 && b4_2 && b5_28 && b6_16 && b7_17 && b8_1 && b9_10) {
matched = true;
pattern_id = 1274;
}
if(b0_54 && b1_13 && b2_49 && b3_42 && b4_36 && b5_25 && b6_7 && b7_37 && b8_10 && b9_8 && b10_15) {
matched = true;
pattern_id = 1275;
}
if(seq_01276 && b6_25 && b7_9 && b8_18 && b9_5 && b10_15 && b11_2 && b12_32 && b13_2 && b14_18) {
matched = true;
pattern_id = 1276;
}
if(seq_01276 && b6_10 && b7_9 && b8_27 && b9_29) {
matched = true;
pattern_id = 1277;
}
if(seq_01276 && b6_40 && b7_7 && b8_10 && b9_9 && b10_17) {
matched = true;
pattern_id = 1278;
}
if(b0_14 && b1_13 && b2_13 && b3_16 && b4_14 && b5_10) {
matched = true;
pattern_id = 1279;
}
if(seq_01280 && seq_61280 && b12_4) {
matched = true;
pattern_id = 1280;
}
if(seq_01280 && b6_12 && b7_3 && b8_2 && b9_16 && b10_13 && b11_45 && b12_4) {
matched = true;
pattern_id = 1281;
}
if(seq_01280 && b6_5) {
matched = true;
pattern_id = 1282;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_22 && b11_11 && b12_4) {
matched = true;
pattern_id = 1283;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_22 && b11_16 && b12_4) {
matched = true;
pattern_id = 1284;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_22 && b11_42 && b12_4) {
matched = true;
pattern_id = 1285;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_22 && b11_13 && b12_4) {
matched = true;
pattern_id = 1286;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_22 && b11_12 && b12_4) {
matched = true;
pattern_id = 1287;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_22 && b11_48 && b12_4) {
matched = true;
pattern_id = 1288;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_43 && b11_45 && b12_4) {
matched = true;
pattern_id = 1289;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_43 && b11_34 && b12_4) {
matched = true;
pattern_id = 1290;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_53 && b11_42 && b12_4) {
matched = true;
pattern_id = 1291;
}
if(seq_01283 && b6_12 && b7_24 && b8_23 && b9_16 && b10_52 && b11_31 && b12_4) {
matched = true;
pattern_id = 1292;
}
if(seq_01283 && b6_12 && b7_24 && b8_22 && b9_16 && b10_24 && b11_45 && b12_4) {
matched = true;
pattern_id = 1293;
}
if(seq_01283 && b6_12 && b7_24 && b8_22 && b9_16 && b10_21 && b11_12 && b12_4) {
matched = true;
pattern_id = 1294;
}
if(seq_01283 && b6_12 && b7_24 && b8_22 && b9_4 && b10_54) {
matched = true;
pattern_id = 1295;
}
if(seq_01283 && b6_5) {
matched = true;
pattern_id = 1296;
}
if(seq_01283 && b6_5 && b7_23) {
matched = true;
pattern_id = 1297;
}
if(seq_01283 && b6_5 && b7_28) {
matched = true;
pattern_id = 1298;
}
if(b0_13 && b1_14 && b2_14 && b3_13 && b4_3 && b5_35 && b6_5) {
matched = true;
pattern_id = 1299;
}
if(b0_13 && b1_14 && b2_14 && b3_13 && b4_3 && b5_60 && b6_12 && b7_3 && b8_25 && b9_4 && b10_5) {
matched = true;
pattern_id = 1300;
}
if(b0_13 && b1_14 && b2_14 && b3_13 && b4_3 && b5_12 && b6_12 && b7_39 && b8_26 && b9_16 && b10_52 && b11_31 && b12_4) {
matched = true;
pattern_id = 1301;
}
if(b0_13 && b1_14 && b2_14 && b3_13 && b4_3 && b5_8 && b6_12 && b7_53 && b8_22 && b9_4 && b10_32) {
matched = true;
pattern_id = 1302;
}
if(b0_13 && b1_14 && b2_14 && b3_13 && b4_34 && b5_13 && b6_5 && b7_67 && b8_60 && b9_51 && b10_52) {
matched = true;
pattern_id = 1303;
}
if(b0_13 && b1_14 && b2_14 && b3_28) {
matched = true;
pattern_id = 1304;
}
if(b0_13 && b1_14 && b2_14 && b3_28 && b4_26 && b5_50 && b6_26 && b7_27) {
matched = true;
pattern_id = 1305;
}
if(b0_13 && b1_14 && b2_14 && b3_28 && b4_50) {
matched = true;
pattern_id = 1306;
}
if(b0_13 && b1_14 && b2_14 && b3_28 && b4_38) {
matched = true;
pattern_id = 1307;
}
if(b0_13 && b1_14 && b2_14 && b3_28 && b4_17 && b5_9 && b6_2 && b7_8 && b8_9 && b9_3 && b10_13 && b11_15) {
matched = true;
pattern_id = 1308;
}
if(b0_13 && b1_14 && b2_25 && b3_13 && b4_3 && b5_13 && b6_12 && b7_3 && b8_34 && b9_4) {
matched = true;
pattern_id = 1309;
}
if(b0_13 && b1_14 && b2_25 && b3_13 && b4_3 && b5_36 && b6_12 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 1310;
}
if(seq_01311 && b6_12 && b7_3 && b8_2 && b9_16 && b10_57 && b11_42 && b12_4) {
matched = true;
pattern_id = 1311;
}
if(seq_01311 && b6_12 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 1312;
}
if(b0_13 && b1_14 && b2_25 && b3_28) {
matched = true;
pattern_id = 1313;
}
if(b0_13 && b1_14 && b2_40 && b3_13 && b4_3 && b5_13 && b6_5) {
matched = true;
pattern_id = 1314;
}
if(b0_13 && b1_14 && b2_40 && b3_28) {
matched = true;
pattern_id = 1315;
}
if(seq_01316 && b6_12 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 1316;
}
if(seq_01316 && b6_12 && b7_3 && b8_21 && b9_4) {
matched = true;
pattern_id = 1317;
}
if(seq_01316 && b6_5) {
matched = true;
pattern_id = 1318;
}
if(b0_13 && b1_14 && b2_9 && b3_28 && b4_67 && b5_13 && b6_20 && b7_2 && b8_2 && b9_48 && b10_1 && b11_17 && b12_15) {
matched = true;
pattern_id = 1319;
}
if(b0_13 && b1_14 && b2_12 && b3_13 && b4_3 && b5_13 && b6_5) {
matched = true;
pattern_id = 1320;
}
if(b0_13 && b1_14 && b2_12 && b3_13 && b4_3 && b5_36 && b6_12 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 1321;
}
if(b0_13 && b1_14 && b2_12 && b3_28) {
matched = true;
pattern_id = 1322;
}
if(seq_01323 && b6_5) {
matched = true;
pattern_id = 1323;
}
if(seq_01323 && b6_5 && b7_22) {
matched = true;
pattern_id = 1324;
}
if(b0_13 && b1_14 && b2_41 && b3_28) {
matched = true;
pattern_id = 1325;
}
if(b0_13 && b1_14 && b2_59 && b3_28 && b4_6 && b5_28 && b6_19 && b7_37 && b8_10 && b9_24) {
matched = true;
pattern_id = 1326;
}
if(b0_13 && b1_14 && b2_26 && b3_28) {
matched = true;
pattern_id = 1327;
}
if(b0_13 && b1_14 && b2_26 && b3_28 && b4_18 && b5_28 && b6_11 && b7_1 && b8_14 && b9_12 && b10_9) {
matched = true;
pattern_id = 1328;
}
if(b0_13 && b1_14 && b2_26 && b3_28 && b4_11 && b5_5 && b6_10 && b7_6 && b8_10 && b9_6 && b10_10) {
matched = true;
pattern_id = 1329;
}
if(b0_13 && b1_14 && b2_65 && b3_28) {
matched = true;
pattern_id = 1330;
}
if(b0_13 && b1_14 && b2_4 && b3_28 && b4_8 && b5_3 && b6_12 && b7_16 && b8_3) {
matched = true;
pattern_id = 1331;
}
if(b0_13 && b1_14 && b2_4 && b3_28 && b4_26 && b5_44 && b6_18) {
matched = true;
pattern_id = 1332;
}
if(b0_13 && b1_14 && b2_4 && b3_28 && b4_35 && b5_29) {
matched = true;
pattern_id = 1333;
}
if(b0_13 && b1_14 && b2_4 && b3_28 && b4_10 && b5_7 && b6_2 && b7_29 && b8_44 && b9_4 && b10_36 && b11_5 && b12_4) {
matched = true;
pattern_id = 1334;
}
if(b0_13 && b1_14 && b2_34 && b3_13 && b4_34 && b5_13 && seq_61335 && b12_4) {
matched = true;
pattern_id = 1335;
}
if(b0_13 && b1_14 && b2_34 && b3_28) {
matched = true;
pattern_id = 1336;
}
if(b0_13 && b1_14 && b2_37 && b3_13 && b4_3 && b5_13 && seq_61335 && b12_4) {
matched = true;
pattern_id = 1337;
}
if(b0_13 && b1_14 && b2_37 && b3_13 && b4_3 && b5_19 && b6_5 && b7_35 && b8_11 && b9_35 && b10_6 && b11_53 && b12_30) {
matched = true;
pattern_id = 1338;
}
if(b0_13 && b1_17 && b2_14 && b3_13 && b4_3 && b5_8 && b6_5) {
matched = true;
pattern_id = 1339;
}
if(b0_13 && b1_17 && b2_9 && b3_28) {
matched = true;
pattern_id = 1340;
}
if(seq_01341 && b6_12 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 1341;
}
if(seq_01341 && b6_12 && b7_3 && b8_21 && b9_4) {
matched = true;
pattern_id = 1342;
}
if(seq_01341 && b6_12 && b7_3 && b8_34 && b9_4) {
matched = true;
pattern_id = 1343;
}
if(seq_01341 && b6_12 && b7_3 && b8_26 && b9_4) {
matched = true;
pattern_id = 1344;
}
if(seq_01341 && b6_5) {
matched = true;
pattern_id = 1345;
}
if(seq_01346 && b6_12 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 1346;
}
if(seq_01346 && b6_12 && b7_3 && b8_21 && b9_4) {
matched = true;
pattern_id = 1347;
}
if(seq_01346 && b6_12 && b7_3 && b8_34 && b9_4) {
matched = true;
pattern_id = 1348;
}
if(seq_01346 && b6_12 && b7_3 && b8_26 && b9_4) {
matched = true;
pattern_id = 1349;
}
if(seq_01350 && b6_12 && b7_3 && b8_2 && b9_4) {
matched = true;
pattern_id = 1350;
}
if(seq_01350 && b6_12 && b7_3 && b8_21 && b9_4) {
matched = true;
pattern_id = 1351;
}
if(seq_01350 && b6_12 && b7_3 && b8_34 && b9_4) {
matched = true;
pattern_id = 1352;
}
if(seq_01350 && b6_12 && b7_3 && b8_26 && b9_4) {
matched = true;
pattern_id = 1353;
}
if(b0_13 && b1_18 && b2_14 && b3_28 && b4_27 && b5_4 && seq_6925 && b12_4) {
matched = true;
pattern_id = 1354;
}
if(b0_13 && b1_18 && b2_9 && b3_28 && b4_22 && b5_16 && b6_26 && b7_8) {
matched = true;
pattern_id = 1355;
}
if(b0_13 && b1_18 && b2_65 && b3_13 && b4_61 && b5_12 && b6_12 && b7_24 && b8_25 && b9_16 && b10_22 && b11_48 && b12_4) {
matched = true;
pattern_id = 1356;
}
if(b0_13 && b1_18 && b2_60 && b3_28) {
matched = true;
pattern_id = 1357;
}
if(b0_13 && b1_32 && b2_4 && b3_28) {
matched = true;
pattern_id = 1358;
}
if(b0_13 && b1_32 && b2_4 && b3_28 && b4_28) {
matched = true;
pattern_id = 1359;
}
if(b0_13 && b1_32 && b2_4 && b3_28 && b4_43 && b5_44 && b6_8 && b7_6 && b8_1 && b9_4 && b10_13 && b11_5 && b12_4) {
matched = true;
pattern_id = 1360;
}
if(b0_13 && b1_32 && b2_34 && b3_13 && b4_49 && b5_13 && b6_5 && b7_6 && b8_38 && b9_4 && b10_36 && b11_5 && b12_4) {
matched = true;
pattern_id = 1361;
}
if(b0_13 && b1_32 && b2_34 && b3_28) {
matched = true;
pattern_id = 1362;
}
if(b0_13 && b1_32 && b2_34 && b3_28 && b4_8 && b5_2 && b6_27 && b7_37 && b8_5 && b9_10 && b10_33 && b11_22 && b12_8 && b13_13) {
matched = true;
pattern_id = 1363;
}
if(b0_13 && b1_23 && b2_14 && b3_13 && b4_3 && b5_13 && seq_61280 && b12_4) {
matched = true;
pattern_id = 1364;
}
if(b0_13 && b1_23 && b2_35 && b3_13 && b4_68 && b5_30 && b6_5) {
matched = true;
pattern_id = 1365;
}
if(b0_13 && b1_43 && b2_12 && b3_13 && b4_49 && b5_13 && b6_5) {
matched = true;
pattern_id = 1366;
}
if(b0_13 && b1_43 && b2_41 && b3_13 && b4_3 && b5_12 && b6_12 && b7_3 && b8_4 && b9_4) {
matched = true;
pattern_id = 1367;
}
if(b0_13 && b1_43 && b2_35 && b3_28 && b4_1 && b5_5 && b6_28 && b7_35 && b8_13 && b9_5 && b10_1 && b11_13 && b12_26 && b13_4) {
matched = true;
pattern_id = 1368;
}
if(b0_13 && b1_33 && b2_4 && b3_13 && b4_25 && b5_54 && b6_12 && b7_39 && b8_65 && b9_16 && b10_62 && b11_34 && b12_4) {
matched = true;
pattern_id = 1369;
}
if(b0_13 && b1_33 && b2_34 && b3_13 && b4_3 && b5_58 && b6_12 && b7_36 && b8_4 && b9_16 && b10_2 && b11_5 && b12_4) {
matched = true;
pattern_id = 1370;
}
if(b0_13 && b1_33 && b2_34 && b3_13 && b4_32 && b5_30 && b6_5 && b7_7 && b8_19 && b9_34 && b10_5 && b11_28) {
matched = true;
pattern_id = 1371;
}
if(b0_13 && b1_33 && b2_35 && b3_28) {
matched = true;
pattern_id = 1372;
}
if(b0_13 && b1_25 && b2_14 && b3_13 && b4_3 && b5_36 && b6_5) {
matched = true;
pattern_id = 1373;
}
if(b0_13 && b1_25 && b2_14 && b3_13 && b4_3 && b5_35 && b6_5) {
matched = true;
pattern_id = 1374;
}
if(b0_13 && b1_25 && b2_25 && b3_13 && b4_25 && b5_13 && b6_5) {
matched = true;
pattern_id = 1375;
}
if(b0_13 && b1_25 && b2_41 && b3_13 && b4_34 && b5_60 && b6_5 && b7_58 && b8_9 && b9_50 && b10_53 && b11_1 && b12_34 && b13_29 && b14_1) {
matched = true;
pattern_id = 1376;
}
if(b0_13 && b1_39 && b2_4 && b3_13 && b4_3 && b5_35 && seq_61280 && b12_4) {
matched = true;
pattern_id = 1377;
}
if(b0_13 && b1_39 && b2_8 && b3_13 && b4_61 && b5_58 && b6_5) {
matched = true;
pattern_id = 1378;
}
if(b0_13 && b1_12 && b2_14 && b3_13 && b4_34 && b5_40 && seq_61379 && b12_4) {
matched = true;
pattern_id = 1379;
}
if(b0_13 && b1_12 && b2_14 && b3_13 && b4_13 && b5_8 && seq_61379 && b12_4) {
matched = true;
pattern_id = 1380;
}
if(b0_13 && b1_12 && b2_12 && b3_13 && b4_13 && b5_12 && b6_5) {
matched = true;
pattern_id = 1381;
}
if(b0_13 && b1_42 && b2_8 && b3_28 && b4_48 && b5_64 && b6_49 && b7_2 && b8_46 && b9_3 && b10_3 && b11_11 && b12_1 && b13_4) {
matched = true;
pattern_id = 1382;
}
if(b0_13 && b1_42 && b2_60 && b3_13 && b4_41 && b5_19 && b6_5 && b7_61 && b8_9 && b9_3 && b10_13 && b11_1 && b12_1 && b13_1 && b14_1) {
matched = true;
pattern_id = 1383;
}
if(seq_01384 && b6_49 && b7_57) {
matched = true;
pattern_id = 1384;
}
if(seq_01384 && b6_49 && b7_6) {
matched = true;
pattern_id = 1385;
}
if(seq_01384 && b6_49 && b7_2 && b8_4 && b9_3 && b10_1) {
matched = true;
pattern_id = 1386;
}
if(b0_56) {
matched = true;
pattern_id = 1387;
}

}