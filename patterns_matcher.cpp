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
boolean b0_1 =(buffer[0] == '2');
boolean b0_2 =(buffer[0] == 'q');
boolean b0_3 =(buffer[0] == 'G');
boolean b0_4 =(buffer[0] == 'B');
boolean b0_5 =(buffer[0] == 'W');
boolean b0_6 =(buffer[0] == 'R');
boolean b0_7 =(buffer[0] == 'F');
boolean b0_8 =(buffer[0] == 'h');
boolean b0_9 =(buffer[0] == 'U');
boolean b0_10 =(buffer[0] == 'N');
boolean b0_11 =(buffer[0] == 'c');
boolean b0_12 =(buffer[0] == 'a');
boolean b0_13 =(buffer[0] == 'l');
boolean b0_14 =(buffer[0] == '|');
boolean b0_15 =(buffer[0] == 'y');
boolean b0_16 =(buffer[0] == 'A');
boolean b0_17 =(buffer[0] == 'p');
boolean b0_18 =(buffer[0] == 'w');
boolean b0_19 =(buffer[0] == 'b');
boolean b0_20 =(buffer[0] == 'r');
boolean b0_21 =(buffer[0] == 'd');
boolean b0_22 =(buffer[0] == 's');
boolean b0_23 =(buffer[0] == 'f');
boolean b0_24 =(buffer[0] == 'S');
boolean b0_25 =(buffer[0] == '1');
boolean b0_26 =(buffer[0] == 'P');
boolean b0_27 =(buffer[0] == '*');
boolean b0_28 =(buffer[0] == 'g');
boolean b0_29 =(buffer[0] == 'k');
boolean b0_30 =(buffer[0] == 'n');
boolean b0_31 =(buffer[0] == '>');
boolean b0_32 =(buffer[0] == '.');
boolean b0_33 =(buffer[0] == 't');
boolean b0_34 =(buffer[0] == '+');
boolean b0_35 =(buffer[0] == '/');
boolean b0_36 =(buffer[0] == '3');
boolean b0_37 =(buffer[0] == '^');
boolean b0_38 =(buffer[0] == 'V');
boolean b0_39 =(buffer[0] == 'C');
boolean b0_40 =(buffer[0] == 'X');
boolean b0_41 =(buffer[0] == '@');
boolean b0_42 =(buffer[0] == '0');
boolean b0_43 =(buffer[0] == ' ');
boolean b0_44 =(buffer[0] == '=');
boolean b0_45 =(buffer[0] == 'O');
boolean b0_46 =(buffer[0] == 'D');
boolean b0_47 =(buffer[0] == 'I');
boolean b0_48 =(buffer[0] == '8');
boolean b0_49 =(buffer[0] == 'T');
boolean b0_50 =(buffer[0] == '5');
boolean b0_51 =(buffer[0] == 'L');
boolean b0_52 =(buffer[0] == 'u');
boolean b0_53 =(buffer[0] == 'M');
boolean b0_54 =(buffer[0] == 'e');
boolean b0_55 =(buffer[0] == '-');
boolean b0_56 =(buffer[0] == 'H');
boolean b0_57 =(buffer[0] == 'm');
boolean b0_58 =(buffer[0] == 'v');
boolean b0_59 =(buffer[0] == 'x');
boolean b0_60 =(buffer[0] == '9');
boolean b0_61 =(buffer[0] == '4');
boolean b0_62 =(buffer[0] == '_');
boolean b0_63 =(buffer[0] == '%');
boolean b0_64 =(buffer[0] == '&');
boolean b0_65 =(buffer[0] == '?');
boolean b0_66 =(buffer[0] == '~');
boolean b0_67 =(buffer[0] == 'E');
boolean b0_68 =(buffer[0] == 'i');
boolean b0_69 =(buffer[0] == 'J');
boolean b0_70 =(buffer[0] == 'j');
boolean b0_71 =(buffer[0] == '!');
boolean b0_72 =(buffer[0] == 'Y');
boolean b0_73 =(buffer[0] == '<');
boolean b0_74 =(buffer[0] == 'o');
boolean b0_75 =(buffer[0] == '[');
boolean b0_76 =(buffer[0] == ')');
boolean b0_77 =(buffer[0] == '{');
boolean b0_78 =(buffer[0] == '(');
boolean b0_79 =(buffer[0] == ',');
boolean b0_80 =(buffer[0] == 'K');
boolean b0_81 =(buffer[0] == 'z');
boolean b1_1 =(buffer[1] == '|');
boolean b1_2 =(buffer[1] == 'a');
boolean b1_3 =(buffer[1] == 'e');
boolean b1_4 =(buffer[1] == 'N');
boolean b1_5 =(buffer[1] == 'H');
boolean b1_6 =(buffer[1] == 't');
boolean b1_7 =(buffer[1] == 'C');
boolean b1_8 =(buffer[1] == 'o');
boolean b1_9 =(buffer[1] == 'S');
boolean b1_10 =(buffer[1] == 'T');
boolean b1_11 =(buffer[1] == 'c');
boolean b1_12 =(buffer[1] == 'B');
boolean b1_13 =(buffer[1] == 'p');
boolean b1_14 =(buffer[1] == 'h');
boolean b1_15 =(buffer[1] == '0');
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
boolean b1_28 =(buffer[1] == 'E');
boolean b1_29 =(buffer[1] == '9');
boolean b1_30 =(buffer[1] == '+');
boolean b1_31 =(buffer[1] == 'F');
boolean b1_32 =(buffer[1] == 'v');
boolean b1_33 =(buffer[1] == ']');
boolean b1_34 =(buffer[1] == 'X');
boolean b1_35 =(buffer[1] == 'm');
boolean b1_36 =(buffer[1] == ' ');
boolean b1_37 =(buffer[1] == '3');
boolean b1_38 =(buffer[1] == '7');
boolean b1_39 =(buffer[1] == '@');
boolean b1_40 =(buffer[1] == 'f');
boolean b1_41 =(buffer[1] == 'W');
boolean b1_42 =(buffer[1] == '%');
boolean b1_43 =(buffer[1] == 'I');
boolean b1_44 =(buffer[1] == '-');
boolean b1_45 =(buffer[1] == '=');
boolean b1_46 =(buffer[1] == 'M');
boolean b1_47 =(buffer[1] == 'b');
boolean b1_48 =(buffer[1] == 'J');
boolean b1_49 =(buffer[1] == 'P');
boolean b1_50 =(buffer[1] == 'n');
boolean b1_51 =(buffer[1] == '5');
boolean b1_52 =(buffer[1] == 's');
boolean b1_53 =(buffer[1] == 'K');
boolean b1_54 =(buffer[1] == 'x');
boolean b1_55 =(buffer[1] == 'y');
boolean b1_56 =(buffer[1] == 'u');
boolean b1_57 =(buffer[1] == 'R');
boolean b1_58 =(buffer[1] == 'd');
boolean b1_59 =(buffer[1] == 'w');
boolean b1_60 =(buffer[1] == 'Y');
boolean b1_61 =(buffer[1] == '/');
boolean b1_62 =(buffer[1] == 'g');
boolean b1_63 =(buffer[1] == 'L');
boolean b1_64 =(buffer[1] == '_');
boolean b1_65 =(buffer[1] == '*');
boolean b1_66 =(buffer[1] == 'j');
boolean b1_67 =(buffer[1] == '?');
boolean b1_68 =(buffer[1] == '~');
boolean b1_69 =(buffer[1] == 'q');
boolean b1_70 =(buffer[1] == 'G');
boolean b1_71 =(buffer[1] == 'z');
boolean b1_72 =(buffer[1] == '&');
boolean b1_73 =(buffer[1] == 'U');
boolean b1_74 =(buffer[1] == 'V');
boolean b1_75 =(buffer[1] == '!');
boolean b1_76 =(buffer[1] == 'Q');
boolean b1_77 =(buffer[1] == 'Z');
boolean b1_78 =(buffer[1] == '(');
boolean b1_79 =(buffer[1] == ')');
boolean b1_80 =(buffer[1] == '6');
boolean b2_1 =(buffer[2] == '0');
boolean b2_2 =(buffer[2] == 'z');
boolean b2_3 =(buffer[2] == 't');
boolean b2_4 =(buffer[2] == '|');
boolean b2_5 =(buffer[2] == 'A');
boolean b2_6 =(buffer[2] == 'm');
boolean b2_7 =(buffer[2] == ' ');
boolean b2_8 =(buffer[2] == 's');
boolean b2_9 =(buffer[2] == 'E');
boolean b2_10 =(buffer[2] == '3');
boolean b2_11 =(buffer[2] == 'P');
boolean b2_12 =(buffer[2] == 'g');
boolean b2_13 =(buffer[2] == '4');
boolean b2_14 =(buffer[2] == 'i');
boolean b2_15 =(buffer[2] == 'h');
boolean b2_16 =(buffer[2] == 'c');
boolean b2_17 =(buffer[2] == 'w');
boolean b2_18 =(buffer[2] == 'k');
boolean b2_19 =(buffer[2] == 'x');
boolean b2_20 =(buffer[2] == 'o');
boolean b2_21 =(buffer[2] == 'n');
boolean b2_22 =(buffer[2] == 'N');
boolean b2_23 =(buffer[2] == 'r');
boolean b2_24 =(buffer[2] == 'l');
boolean b2_25 =(buffer[2] == 'e');
boolean b2_26 =(buffer[2] == '5');
boolean b2_27 =(buffer[2] == '1');
boolean b2_28 =(buffer[2] == '7');
boolean b2_29 =(buffer[2] == '/');
boolean b2_30 =(buffer[2] == 'M');
boolean b2_31 =(buffer[2] == 'D');
boolean b2_32 =(buffer[2] == 'C');
boolean b2_33 =(buffer[2] == '9');
boolean b2_34 =(buffer[2] == 'B');
boolean b2_35 =(buffer[2] == '+');
boolean b2_36 =(buffer[2] == 'F');
boolean b2_37 =(buffer[2] == '^');
boolean b2_38 =(buffer[2] == '8');
boolean b2_39 =(buffer[2] == 'X');
boolean b2_40 =(buffer[2] == 'T');
boolean b2_41 =(buffer[2] == 'd');
boolean b2_42 =(buffer[2] == 'b');
boolean b2_43 =(buffer[2] == 'a');
boolean b2_44 =(buffer[2] == 'L');
boolean b2_45 =(buffer[2] == 'S');
boolean b2_46 =(buffer[2] == '2');
boolean b2_47 =(buffer[2] == '-');
boolean b2_48 =(buffer[2] == '=');
boolean b2_49 =(buffer[2] == 'f');
boolean b2_50 =(buffer[2] == 'p');
boolean b2_51 =(buffer[2] == 'J');
boolean b2_52 =(buffer[2] == 'v');
boolean b2_53 =(buffer[2] == 'G');
boolean b2_54 =(buffer[2] == 'O');
boolean b2_55 =(buffer[2] == 'U');
boolean b2_56 =(buffer[2] == 'R');
boolean b2_57 =(buffer[2] == '6');
boolean b2_58 =(buffer[2] == 'I');
boolean b2_59 =(buffer[2] == '_');
boolean b2_60 =(buffer[2] == '.');
boolean b2_61 =(buffer[2] == 'H');
boolean b2_62 =(buffer[2] == 'u');
boolean b2_63 =(buffer[2] == 'W');
boolean b2_64 =(buffer[2] == 'V');
boolean b2_65 =(buffer[2] == '?');
boolean b2_66 =(buffer[2] == 'y');
boolean b2_67 =(buffer[2] == '%');
boolean b2_68 =(buffer[2] == 'q');
boolean b2_69 =(buffer[2] == 'K');
boolean b2_70 =(buffer[2] == 'Y');
boolean b2_71 =(buffer[2] == ')');
boolean b3_1 =(buffer[3] == '0');
boolean b3_2 =(buffer[3] == 'w');
boolean b3_3 =(buffer[3] == 'I');
boolean b3_4 =(buffer[3] == '1');
boolean b3_5 =(buffer[3] == 'T');
boolean b3_6 =(buffer[3] == 'o');
boolean b3_7 =(buffer[3] == 'u');
boolean b3_8 =(buffer[3] == 't');
boolean b3_9 =(buffer[3] == 'R');
boolean b3_10 =(buffer[3] == 'S');
boolean b3_11 =(buffer[3] == 'e');
boolean b3_12 =(buffer[3] == 'A');
boolean b3_13 =(buffer[3] == 'O');
boolean b3_14 =(buffer[3] == ' ');
boolean b3_15 =(buffer[3] == 'i');
boolean b3_16 =(buffer[3] == 'g');
boolean b3_17 =(buffer[3] == 'h');
boolean b3_18 =(buffer[3] == 's');
boolean b3_19 =(buffer[3] == 'k');
boolean b3_20 =(buffer[3] == 'r');
boolean b3_21 =(buffer[3] == 'd');
boolean b3_22 =(buffer[3] == '4');
boolean b3_23 =(buffer[3] == 'G');
boolean b3_24 =(buffer[3] == 'l');
boolean b3_25 =(buffer[3] == 'L');
boolean b3_26 =(buffer[3] == 'a');
boolean b3_27 =(buffer[3] == 'v');
boolean b3_28 =(buffer[3] == '|');
boolean b3_29 =(buffer[3] == '.');
boolean b3_30 =(buffer[3] == 'E');
boolean b3_31 =(buffer[3] == '9');
boolean b3_32 =(buffer[3] == '7');
boolean b3_33 =(buffer[3] == 'X');
boolean b3_34 =(buffer[3] == 'm');
boolean b3_35 =(buffer[3] == '_');
boolean b3_36 =(buffer[3] == '3');
boolean b3_37 =(buffer[3] == '=');
boolean b3_38 =(buffer[3] == 'P');
boolean b3_39 =(buffer[3] == 'D');
boolean b3_40 =(buffer[3] == 'c');
boolean b3_41 =(buffer[3] == '6');
boolean b3_42 =(buffer[3] == 'K');
boolean b3_43 =(buffer[3] == 'n');
boolean b3_44 =(buffer[3] == 'F');
boolean b3_45 =(buffer[3] == 'y');
boolean b3_46 =(buffer[3] == 'x');
boolean b3_47 =(buffer[3] == 'B');
boolean b3_48 =(buffer[3] == 'b');
boolean b3_49 =(buffer[3] == 'f');
boolean b3_50 =(buffer[3] == 'p');
boolean b3_51 =(buffer[3] == '-');
boolean b3_52 =(buffer[3] == '5');
boolean b3_53 =(buffer[3] == '2');
boolean b3_54 =(buffer[3] == '%');
boolean b3_55 =(buffer[3] == '?');
boolean b3_56 =(buffer[3] == '/');
boolean b3_57 =(buffer[3] == 'U');
boolean b3_58 =(buffer[3] == 'W');
boolean b3_59 =(buffer[3] == 'z');
boolean b3_60 =(buffer[3] == 'j');
boolean b3_61 =(buffer[3] == 'V');
boolean b3_62 =(buffer[3] == 'q');
boolean b3_63 =(buffer[3] == 'C');
boolean b3_64 =(buffer[3] == 'N');
boolean b3_65 =(buffer[3] == 'H');
boolean b3_66 =(buffer[3] == 'Q');
boolean b3_67 =(buffer[3] == 'M');
boolean b3_68 =(buffer[3] == 'Y');
boolean b3_69 =(buffer[3] == 'J');
boolean b3_70 =(buffer[3] == '{');
boolean b3_71 =(buffer[3] == 'Z');
boolean b4_1 =(buffer[4] == ' ');
boolean b4_2 =(buffer[4] == 's');
boolean b4_3 =(buffer[4] == 'n');
boolean b4_4 =(buffer[4] == '0');
boolean b4_5 =(buffer[4] == 'I');
boolean b4_6 =(buffer[4] == 't');
boolean b4_7 =(buffer[4] == 'p');
boolean b4_8 =(buffer[4] == 'C');
boolean b4_9 =(buffer[4] == 'N');
boolean b4_10 =(buffer[4] == 'P');
boolean b4_11 =(buffer[4] == 'v');
boolean b4_12 =(buffer[4] == 'e');
boolean b4_13 =(buffer[4] == 'B');
boolean b4_14 =(buffer[4] == 'c');
boolean b4_15 =(buffer[4] == 'h');
boolean b4_16 =(buffer[4] == 'd');
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
boolean b4_27 =(buffer[4] == 'i');
boolean b4_28 =(buffer[4] == 'O');
boolean b4_29 =(buffer[4] == 'F');
boolean b4_30 =(buffer[4] == '1');
boolean b4_31 =(buffer[4] == 'w');
boolean b4_32 =(buffer[4] == '|');
boolean b4_33 =(buffer[4] == '@');
boolean b4_34 =(buffer[4] == 'D');
boolean b4_35 =(buffer[4] == '/');
boolean b4_36 =(buffer[4] == '2');
boolean b4_37 =(buffer[4] == '%');
boolean b4_38 =(buffer[4] == '7');
boolean b4_39 =(buffer[4] == 'K');
boolean b4_40 =(buffer[4] == 'E');
boolean b4_41 =(buffer[4] == 'V');
boolean b4_42 =(buffer[4] == '4');
boolean b4_43 =(buffer[4] == '=');
boolean b4_44 =(buffer[4] == 'o');
boolean b4_45 =(buffer[4] == '3');
boolean b4_46 =(buffer[4] == '-');
boolean b4_47 =(buffer[4] == '5');
boolean b4_48 =(buffer[4] == '!');
boolean b4_49 =(buffer[4] == '9');
boolean b4_50 =(buffer[4] == 'u');
boolean b4_51 =(buffer[4] == 'b');
boolean b4_52 =(buffer[4] == 'T');
boolean b4_53 =(buffer[4] == 'x');
boolean b4_54 =(buffer[4] == 'S');
boolean b4_55 =(buffer[4] == '?');
boolean b4_56 =(buffer[4] == '+');
boolean b4_57 =(buffer[4] == 'X');
boolean b4_58 =(buffer[4] == 'R');
boolean b4_59 =(buffer[4] == '_');
boolean b4_60 =(buffer[4] == 'k');
boolean b4_61 =(buffer[4] == 'M');
boolean b4_62 =(buffer[4] == 'y');
boolean b4_63 =(buffer[4] == 'U');
boolean b4_64 =(buffer[4] == 'H');
boolean b4_65 =(buffer[4] == '[');
boolean b4_66 =(buffer[4] == 'W');
boolean b4_67 =(buffer[4] == 'G');
boolean b4_68 =(buffer[4] == 'Z');
boolean b4_69 =(buffer[4] == '(');
boolean b4_70 =(buffer[4] == 'j');
boolean b4_71 =(buffer[4] == ':');
boolean b4_72 =(buffer[4] == '<');
boolean b4_73 =(buffer[4] == 'z');
boolean b4_74 =(buffer[4] == '&');
boolean b4_75 =(buffer[4] == 'Y');
boolean b4_76 =(buffer[4] == '{');
boolean b4_77 =(buffer[4] == 'q');
boolean b4_78 =(buffer[4] == '6');
boolean b5_1 =(buffer[5] == '0');
boolean b5_2 =(buffer[5] == 'x');
boolean b5_3 =(buffer[5] == 'f');
boolean b5_4 =(buffer[5] == ' ');
boolean b5_5 =(buffer[5] == 'S');
boolean b5_6 =(buffer[5] == 'e');
boolean b5_7 =(buffer[5] == 'h');
boolean b5_8 =(buffer[5] == 'r');
boolean b5_9 =(buffer[5] == '5');
boolean b5_10 =(buffer[5] == 'o');
boolean b5_11 =(buffer[5] == 'a');
boolean b5_12 =(buffer[5] == 'd');
boolean b5_13 =(buffer[5] == '4');
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
boolean b5_28 =(buffer[5] == '1');
boolean b5_29 =(buffer[5] == 'u');
boolean b5_30 =(buffer[5] == '/');
boolean b5_31 =(buffer[5] == 'C');
boolean b5_32 =(buffer[5] == 'B');
boolean b5_33 =(buffer[5] == '7');
boolean b5_34 =(buffer[5] == '^');
boolean b5_35 =(buffer[5] == 'F');
boolean b5_36 =(buffer[5] == '9');
boolean b5_37 =(buffer[5] == '_');
boolean b5_38 =(buffer[5] == '3');
boolean b5_39 =(buffer[5] == '8');
boolean b5_40 =(buffer[5] == '.');
boolean b5_41 =(buffer[5] == 'D');
boolean b5_42 =(buffer[5] == 't');
boolean b5_43 =(buffer[5] == '-');
boolean b5_44 =(buffer[5] == '2');
boolean b5_45 =(buffer[5] == '=');
boolean b5_46 =(buffer[5] == 'G');
boolean b5_47 =(buffer[5] == 'g');
boolean b5_48 =(buffer[5] == 'U');
boolean b5_49 =(buffer[5] == 'I');
boolean b5_50 =(buffer[5] == 'L');
boolean b5_51 =(buffer[5] == 'c');
boolean b5_52 =(buffer[5] == 'p');
boolean b5_53 =(buffer[5] == '%');
boolean b5_54 =(buffer[5] == 'b');
boolean b5_55 =(buffer[5] == 'v');
boolean b5_56 =(buffer[5] == 'P');
boolean b5_57 =(buffer[5] == 'k');
boolean b5_58 =(buffer[5] == 'T');
boolean b5_59 =(buffer[5] == 'q');
boolean b5_60 =(buffer[5] == '&');
boolean b5_61 =(buffer[5] == 'H');
boolean b5_62 =(buffer[5] == 'j');
boolean b5_63 =(buffer[5] == 'N');
boolean b5_64 =(buffer[5] == '?');
boolean b5_65 =(buffer[5] == '6');
boolean b5_66 =(buffer[5] == 'Y');
boolean b5_67 =(buffer[5] == 'E');
boolean b5_68 =(buffer[5] == 'M');
boolean b5_69 =(buffer[5] == ']');
boolean b5_70 =(buffer[5] == 'W');
boolean b5_71 =(buffer[5] == 'Q');
boolean b5_72 =(buffer[5] == 'Z');
boolean b5_73 =(buffer[5] == ':');
boolean b5_74 =(buffer[5] == '>');
boolean b5_75 =(buffer[5] == '#');
boolean b5_76 =(buffer[5] == 'K');
boolean b6_1 =(buffer[6] == '0');
boolean b6_2 =(buffer[6] == '.');
boolean b6_3 =(buffer[6] == 'o');
boolean b6_4 =(buffer[6] == 'I');
boolean b6_5 =(buffer[6] == '|');
boolean b6_6 =(buffer[6] == 'U');
boolean b6_7 =(buffer[6] == 'e');
boolean b6_8 =(buffer[6] == 'a');
boolean b6_9 =(buffer[6] == 'C');
boolean b6_10 =(buffer[6] == 'r');
boolean b6_11 =(buffer[6] == 't');
boolean b6_12 =(buffer[6] == ' ');
boolean b6_13 =(buffer[6] == 'M');
boolean b6_14 =(buffer[6] == 'z');
boolean b6_15 =(buffer[6] == 'A');
boolean b6_16 =(buffer[6] == '3');
boolean b6_17 =(buffer[6] == '*');
boolean b6_18 =(buffer[6] == 'm');
boolean b6_19 =(buffer[6] == 'h');
boolean b6_20 =(buffer[6] == 'l');
boolean b6_21 =(buffer[6] == 'b');
boolean b6_22 =(buffer[6] == 'v');
boolean b6_23 =(buffer[6] == '/');
boolean b6_24 =(buffer[6] == 's');
boolean b6_25 =(buffer[6] == 'K');
boolean b6_26 =(buffer[6] == '1');
boolean b6_27 =(buffer[6] == '9');
boolean b6_28 =(buffer[6] == 'H');
boolean b6_29 =(buffer[6] == 'S');
boolean b6_30 =(buffer[6] == 'B');
boolean b6_31 =(buffer[6] == 'E');
boolean b6_32 =(buffer[6] == '2');
boolean b6_33 =(buffer[6] == 'V');
boolean b6_34 =(buffer[6] == 'd');
boolean b6_35 =(buffer[6] == 'i');
boolean b6_36 =(buffer[6] == 'c');
boolean b6_37 =(buffer[6] == '-');
boolean b6_38 =(buffer[6] == 'g');
boolean b6_39 =(buffer[6] == 'u');
boolean b6_40 =(buffer[6] == '6');
boolean b6_41 =(buffer[6] == '=');
boolean b6_42 =(buffer[6] == 'O');
boolean b6_43 =(buffer[6] == 'R');
boolean b6_44 =(buffer[6] == 'G');
boolean b6_45 =(buffer[6] == 'P');
boolean b6_46 =(buffer[6] == 'p');
boolean b6_47 =(buffer[6] == 'N');
boolean b6_48 =(buffer[6] == 'f');
boolean b6_49 =(buffer[6] == 'D');
boolean b6_50 =(buffer[6] == 'L');
boolean b6_51 =(buffer[6] == '7');
boolean b6_52 =(buffer[6] == 'y');
boolean b6_53 =(buffer[6] == '4');
boolean b6_54 =(buffer[6] == '_');
boolean b6_55 =(buffer[6] == 'n');
boolean b6_56 =(buffer[6] == 'w');
boolean b6_57 =(buffer[6] == 'q');
boolean b6_58 =(buffer[6] == 'J');
boolean b6_59 =(buffer[6] == 'x');
boolean b6_60 =(buffer[6] == 'F');
boolean b6_61 =(buffer[6] == '?');
boolean b6_62 =(buffer[6] == 'T');
boolean b6_63 =(buffer[6] == ',');
boolean b6_64 =(buffer[6] == '8');
boolean b6_65 =(buffer[6] == 'Z');
boolean b6_66 =(buffer[6] == '<');
boolean b6_67 =(buffer[6] == 'X');
boolean b6_68 =(buffer[6] == '5');
boolean b6_69 =(buffer[6] == ':');
boolean b6_70 =(buffer[6] == 'j');
boolean b6_71 =(buffer[6] == 'k');
boolean b6_72 =(buffer[6] == '%');
boolean b6_73 =(buffer[6] == '!');
boolean b6_74 =(buffer[6] == '(');
boolean b7_1 =(buffer[7] == ' ');
boolean b7_2 =(buffer[7] == 'h');
boolean b7_3 =(buffer[7] == '|');
boolean b7_4 =(buffer[7] == '0');
boolean b7_5 =(buffer[7] == 'T');
boolean b7_6 =(buffer[7] == '3');
boolean b7_7 =(buffer[7] == 's');
boolean b7_8 =(buffer[7] == 'r');
boolean b7_9 =(buffer[7] == 't');
boolean b7_10 =(buffer[7] == 'e');
boolean b7_11 =(buffer[7] == 'i');
boolean b7_12 =(buffer[7] == 'y');
boolean b7_13 =(buffer[7] == 'A');
boolean b7_14 =(buffer[7] == 'o');
boolean b7_15 =(buffer[7] == '.');
boolean b7_16 =(buffer[7] == 'S');
boolean b7_17 =(buffer[7] == 'E');
boolean b7_18 =(buffer[7] == '2');
boolean b7_19 =(buffer[7] == 'C');
boolean b7_20 =(buffer[7] == 'F');
boolean b7_21 =(buffer[7] == 'u');
boolean b7_22 =(buffer[7] == 'D');
boolean b7_23 =(buffer[7] == '^');
boolean b7_24 =(buffer[7] == '7');
boolean b7_25 =(buffer[7] == ']');
boolean b7_26 =(buffer[7] == '4');
boolean b7_27 =(buffer[7] == 'B');
boolean b7_28 =(buffer[7] == 'V');
boolean b7_29 =(buffer[7] == 'd');
boolean b7_30 =(buffer[7] == 'k');
boolean b7_31 =(buffer[7] == 'a');
boolean b7_32 =(buffer[7] == 'c');
boolean b7_33 =(buffer[7] == '1');
boolean b7_34 =(buffer[7] == '=');
boolean b7_35 =(buffer[7] == 'b');
boolean b7_36 =(buffer[7] == 'Q');
boolean b7_37 =(buffer[7] == 'H');
boolean b7_38 =(buffer[7] == '!');
boolean b7_39 =(buffer[7] == 'm');
boolean b7_40 =(buffer[7] == '8');
boolean b7_41 =(buffer[7] == '>');
boolean b7_42 =(buffer[7] == 'q');
boolean b7_43 =(buffer[7] == 'Y');
boolean b7_44 =(buffer[7] == '/');
boolean b7_45 =(buffer[7] == 'n');
boolean b7_46 =(buffer[7] == 'g');
boolean b7_47 =(buffer[7] == 'p');
boolean b7_48 =(buffer[7] == '@');
boolean b7_49 =(buffer[7] == '9');
boolean b7_50 =(buffer[7] == 'O');
boolean b7_51 =(buffer[7] == 'x');
boolean b7_52 =(buffer[7] == 'v');
boolean b7_53 =(buffer[7] == 'w');
boolean b7_54 =(buffer[7] == 'l');
boolean b7_55 =(buffer[7] == 'f');
boolean b7_56 =(buffer[7] == '_');
boolean b7_57 =(buffer[7] == 'L');
boolean b7_58 =(buffer[7] == 'W');
boolean b7_59 =(buffer[7] == '+');
boolean b7_60 =(buffer[7] == 'K');
boolean b7_61 =(buffer[7] == 'U');
boolean b7_62 =(buffer[7] == '?');
boolean b7_63 =(buffer[7] == '-');
boolean b7_64 =(buffer[7] == 'I');
boolean b7_65 =(buffer[7] == '[');
boolean b7_66 =(buffer[7] == '*');
boolean b7_67 =(buffer[7] == '6');
boolean b7_68 =(buffer[7] == '5');
boolean b7_69 =(buffer[7] == 'z');
boolean b7_70 =(buffer[7] == '~');
boolean b7_71 =(buffer[7] == '%');
boolean b7_72 =(buffer[7] == '<');
boolean b7_73 =(buffer[7] == 'N');
boolean b7_74 =(buffer[7] == 'R');
boolean b7_75 =(buffer[7] == '\'');
boolean b7_76 =(buffer[7] == 'M');
boolean b7_77 =(buffer[7] == 'P');
boolean b7_78 =(buffer[7] == ':');
boolean b7_79 =(buffer[7] == 'J');
boolean b7_80 =(buffer[7] == 'j');
boolean b8_1 =(buffer[8] == '0');
boolean b8_2 =(buffer[8] == 's');
boolean b8_3 =(buffer[8] == ' ');
boolean b8_4 =(buffer[8] == 'A');
boolean b8_5 =(buffer[8] == 'e');
boolean b8_6 =(buffer[8] == 'h');
boolean b8_7 =(buffer[8] == 'n');
boolean b8_8 =(buffer[8] == 'r');
boolean b8_9 =(buffer[8] == 'k');
boolean b8_10 =(buffer[8] == '|');
boolean b8_11 =(buffer[8] == 'i');
boolean b8_12 =(buffer[8] == 'u');
boolean b8_13 =(buffer[8] == 'j');
boolean b8_14 =(buffer[8] == 'o');
boolean b8_15 =(buffer[8] == '/');
boolean b8_16 =(buffer[8] == 'm');
boolean b8_17 =(buffer[8] == '8');
boolean b8_18 =(buffer[8] == '?');
boolean b8_19 =(buffer[8] == '9');
boolean b8_20 =(buffer[8] == '6');
boolean b8_21 =(buffer[8] == 'F');
boolean b8_22 =(buffer[8] == '1');
boolean b8_23 =(buffer[8] == '5');
boolean b8_24 =(buffer[8] == 'B');
boolean b8_25 =(buffer[8] == '3');
boolean b8_26 =(buffer[8] == '[');
boolean b8_27 =(buffer[8] == '2');
boolean b8_28 =(buffer[8] == 'U');
boolean b8_29 =(buffer[8] == 'T');
boolean b8_30 =(buffer[8] == '7');
boolean b8_31 =(buffer[8] == 'V');
boolean b8_32 =(buffer[8] == 'C');
boolean b8_33 =(buffer[8] == '@');
boolean b8_34 =(buffer[8] == 'l');
boolean b8_35 =(buffer[8] == 't');
boolean b8_36 =(buffer[8] == 'f');
boolean b8_37 =(buffer[8] == '=');
boolean b8_38 =(buffer[8] == 'I');
boolean b8_39 =(buffer[8] == '-');
boolean b8_40 =(buffer[8] == 'p');
boolean b8_41 =(buffer[8] == 'c');
boolean b8_42 =(buffer[8] == 'a');
boolean b8_43 =(buffer[8] == 'R');
boolean b8_44 =(buffer[8] == 'M');
boolean b8_45 =(buffer[8] == 'D');
boolean b8_46 =(buffer[8] == 'y');
boolean b8_47 =(buffer[8] == 'd');
boolean b8_48 =(buffer[8] == '.');
boolean b8_49 =(buffer[8] == 'w');
boolean b8_50 =(buffer[8] == 'z');
boolean b8_51 =(buffer[8] == 'G');
boolean b8_52 =(buffer[8] == 'E');
boolean b8_53 =(buffer[8] == 'S');
boolean b8_54 =(buffer[8] == 'v');
boolean b8_55 =(buffer[8] == 'x');
boolean b8_56 =(buffer[8] == 'P');
boolean b8_57 =(buffer[8] == '_');
boolean b8_58 =(buffer[8] == 'g');
boolean b8_59 =(buffer[8] == 'X');
boolean b8_60 =(buffer[8] == 'Y');
boolean b8_61 =(buffer[8] == 'b');
boolean b8_62 =(buffer[8] == '4');
boolean b8_63 =(buffer[8] == 'K');
boolean b8_64 =(buffer[8] == 'H');
boolean b8_65 =(buffer[8] == 'L');
boolean b8_66 =(buffer[8] == '%');
boolean b8_67 =(buffer[8] == '>');
boolean b8_68 =(buffer[8] == 'Q');
boolean b8_69 =(buffer[8] == 'q');
boolean b8_70 =(buffer[8] == 'N');
boolean b8_71 =(buffer[8] == '#');
boolean b9_1 =(buffer[9] == '0');
boolean b9_2 =(buffer[9] == 'q');
boolean b9_3 =(buffer[9] == 'D');
boolean b9_4 =(buffer[9] == '|');
boolean b9_5 =(buffer[9] == 'e');
boolean b9_6 =(buffer[9] == 'o');
boolean b9_7 =(buffer[9] == 'M');
boolean b9_8 =(buffer[9] == 'A');
boolean b9_9 =(buffer[9] == 's');
boolean b9_10 =(buffer[9] == 't');
boolean b9_11 =(buffer[9] == 'n');
boolean b9_12 =(buffer[9] == 'g');
boolean b9_13 =(buffer[9] == ' ');
boolean b9_14 =(buffer[9] == 'r');
boolean b9_15 =(buffer[9] == '1');
boolean b9_16 =(buffer[9] == '2');
boolean b9_17 =(buffer[9] == 'c');
boolean b9_18 =(buffer[9] == '8');
boolean b9_19 =(buffer[9] == 'u');
boolean b9_20 =(buffer[9] == '/');
boolean b9_21 =(buffer[9] == 'P');
boolean b9_22 =(buffer[9] == 'E');
boolean b9_23 =(buffer[9] == '!');
boolean b9_24 =(buffer[9] == '9');
boolean b9_25 =(buffer[9] == 'h');
boolean b9_26 =(buffer[9] == '@');
boolean b9_27 =(buffer[9] == 'a');
boolean b9_28 =(buffer[9] == 'm');
boolean b9_29 =(buffer[9] == '=');
boolean b9_30 =(buffer[9] == 'j');
boolean b9_31 =(buffer[9] == 'J');
boolean b9_32 =(buffer[9] == '<');
boolean b9_33 =(buffer[9] == 'w');
boolean b9_34 =(buffer[9] == 'l');
boolean b9_35 =(buffer[9] == 'S');
boolean b9_36 =(buffer[9] == 'C');
boolean b9_37 =(buffer[9] == 'O');
boolean b9_38 =(buffer[9] == '+');
boolean b9_39 =(buffer[9] == 'F');
boolean b9_40 =(buffer[9] == 'd');
boolean b9_41 =(buffer[9] == 'y');
boolean b9_42 =(buffer[9] == '.');
boolean b9_43 =(buffer[9] == 'p');
boolean b9_44 =(buffer[9] == '-');
boolean b9_45 =(buffer[9] == 'x');
boolean b9_46 =(buffer[9] == 'B');
boolean b9_47 =(buffer[9] == 'N');
boolean b9_48 =(buffer[9] == 'f');
boolean b9_49 =(buffer[9] == 'i');
boolean b9_50 =(buffer[9] == 'b');
boolean b9_51 =(buffer[9] == 'T');
boolean b9_52 =(buffer[9] == '?');
boolean b9_53 =(buffer[9] == 'v');
boolean b9_54 =(buffer[9] == 'U');
boolean b9_55 =(buffer[9] == 'k');
boolean b9_56 =(buffer[9] == '_');
boolean b9_57 =(buffer[9] == '3');
boolean b9_58 =(buffer[9] == 'R');
boolean b9_59 =(buffer[9] == 'V');
boolean b9_60 =(buffer[9] == 'I');
boolean b9_61 =(buffer[9] == 'Y');
boolean b9_62 =(buffer[9] == 'W');
boolean b9_63 =(buffer[9] == 'H');
boolean b9_64 =(buffer[9] == 'G');
boolean b9_65 =(buffer[9] == '%');
boolean b9_66 =(buffer[9] == '5');
boolean b9_67 =(buffer[9] == '7');
boolean b9_68 =(buffer[9] == 'z');
boolean b9_69 =(buffer[9] == '&');
boolean b9_70 =(buffer[9] == '#');
boolean b9_71 =(buffer[9] == '6');
boolean b9_72 =(buffer[9] == ':');
boolean b10_1 =(buffer[10] == ' ');
boolean b10_2 =(buffer[10] == '|');
boolean b10_3 =(buffer[10] == '2');
boolean b10_4 =(buffer[10] == 'r');
boolean b10_5 =(buffer[10] == 'p');
boolean b10_6 =(buffer[10] == 'o');
boolean b10_7 =(buffer[10] == 'd');
boolean b10_8 =(buffer[10] == '!');
boolean b10_9 =(buffer[10] == 'u');
boolean b10_10 =(buffer[10] == '0');
boolean b10_11 =(buffer[10] == 's');
boolean b10_12 =(buffer[10] == 'n');
boolean b10_13 =(buffer[10] == 't');
boolean b10_14 =(buffer[10] == 'D');
boolean b10_15 =(buffer[10] == 'C');
boolean b10_16 =(buffer[10] == 'F');
boolean b10_17 =(buffer[10] == 'e');
boolean b10_18 =(buffer[10] == 'B');
boolean b10_19 =(buffer[10] == 'J');
boolean b10_20 =(buffer[10] == '%');
boolean b10_21 =(buffer[10] == '8');
boolean b10_22 =(buffer[10] == '/');
boolean b10_23 =(buffer[10] == '4');
boolean b10_24 =(buffer[10] == '[');
boolean b10_25 =(buffer[10] == 'f');
boolean b10_26 =(buffer[10] == 'i');
boolean b10_27 =(buffer[10] == '1');
boolean b10_28 =(buffer[10] == 'a');
boolean b10_29 =(buffer[10] == '=');
boolean b10_30 =(buffer[10] == 'k');
boolean b10_31 =(buffer[10] == 'K');
boolean b10_32 =(buffer[10] == 'b');
boolean b10_33 =(buffer[10] == 'A');
boolean b10_34 =(buffer[10] == 'y');
boolean b10_35 =(buffer[10] == 'm');
boolean b10_36 =(buffer[10] == 'T');
boolean b10_37 =(buffer[10] == 'G');
boolean b10_38 =(buffer[10] == 'g');
boolean b10_39 =(buffer[10] == 'O');
boolean b10_40 =(buffer[10] == '9');
boolean b10_41 =(buffer[10] == '3');
boolean b10_42 =(buffer[10] == '+');
boolean b10_43 =(buffer[10] == 'c');
boolean b10_44 =(buffer[10] == '7');
boolean b10_45 =(buffer[10] == 'E');
boolean b10_46 =(buffer[10] == '_');
boolean b10_47 =(buffer[10] == 'x');
boolean b10_48 =(buffer[10] == '.');
boolean b10_49 =(buffer[10] == 'l');
boolean b10_50 =(buffer[10] == 'h');
boolean b10_51 =(buffer[10] == 'S');
boolean b10_52 =(buffer[10] == 'U');
boolean b10_53 =(buffer[10] == 'R');
boolean b10_54 =(buffer[10] == 'w');
boolean b10_55 =(buffer[10] == 'H');
boolean b10_56 =(buffer[10] == 'v');
boolean b10_57 =(buffer[10] == 'I');
boolean b10_58 =(buffer[10] == 'j');
boolean b10_59 =(buffer[10] == '-');
boolean b10_60 =(buffer[10] == 'L');
boolean b10_61 =(buffer[10] == 'P');
boolean b10_62 =(buffer[10] == '5');
boolean b10_63 =(buffer[10] == 'q');
boolean b10_64 =(buffer[10] == '?');
boolean b10_65 =(buffer[10] == '*');
boolean b10_66 =(buffer[10] == 'M');
boolean b10_67 =(buffer[10] == '}');
boolean b10_68 =(buffer[10] == 'W');
boolean b10_69 =(buffer[10] == '>');
boolean b10_70 =(buffer[10] == 'V');
boolean b10_71 =(buffer[10] == 'N');
boolean b10_72 =(buffer[10] == ':');
boolean b10_73 =(buffer[10] == '6');
boolean b10_74 =(buffer[10] == 'z');
boolean b11_1 =(buffer[11] == '0');
boolean b11_2 =(buffer[11] == ' ');
boolean b11_3 =(buffer[11] == 'e');
boolean b11_4 =(buffer[11] == 'u');
boolean b11_5 =(buffer[11] == 's');
boolean b11_6 =(buffer[11] == 'o');
boolean b11_7 =(buffer[11] == '1');
boolean b11_8 =(buffer[11] == '7');
boolean b11_9 =(buffer[11] == 'D');
boolean b11_10 =(buffer[11] == 'C');
boolean b11_11 =(buffer[11] == '6');
boolean b11_12 =(buffer[11] == 'F');
boolean b11_13 =(buffer[11] == '/');
boolean b11_14 =(buffer[11] == '?');
boolean b11_15 =(buffer[11] == '^');
boolean b11_16 =(buffer[11] == '8');
boolean b11_17 =(buffer[11] == '3');
boolean b11_18 =(buffer[11] == 'E');
boolean b11_19 =(buffer[11] == '9');
boolean b11_20 =(buffer[11] == '|');
boolean b11_21 =(buffer[11] == '@');
boolean b11_22 =(buffer[11] == 'A');
boolean b11_23 =(buffer[11] == 'r');
boolean b11_24 =(buffer[11] == 'B');
boolean b11_25 =(buffer[11] == '4');
boolean b11_26 =(buffer[11] == 'm');
boolean b11_27 =(buffer[11] == 'n');
boolean b11_28 =(buffer[11] == 'b');
boolean b11_29 =(buffer[11] == '=');
boolean b11_30 =(buffer[11] == 'l');
boolean b11_31 =(buffer[11] == 'L');
boolean b11_32 =(buffer[11] == '>');
boolean b11_33 =(buffer[11] == 'y');
boolean b11_34 =(buffer[11] == 'd');
boolean b11_35 =(buffer[11] == 'p');
boolean b11_36 =(buffer[11] == 'O');
boolean b11_37 =(buffer[11] == 'i');
boolean b11_38 =(buffer[11] == 'N');
boolean b11_39 =(buffer[11] == '5');
boolean b11_40 =(buffer[11] == 't');
boolean b11_41 =(buffer[11] == '+');
boolean b11_42 =(buffer[11] == '2');
boolean b11_43 =(buffer[11] == 'G');
boolean b11_44 =(buffer[11] == '_');
boolean b11_45 =(buffer[11] == 'W');
boolean b11_46 =(buffer[11] == 'a');
boolean b11_47 =(buffer[11] == 'c');
boolean b11_48 =(buffer[11] == 'x');
boolean b11_49 =(buffer[11] == 'g');
boolean b11_50 =(buffer[11] == 'S');
boolean b11_51 =(buffer[11] == 'R');
boolean b11_52 =(buffer[11] == 'T');
boolean b11_53 =(buffer[11] == 'I');
boolean b11_54 =(buffer[11] == 'h');
boolean b11_55 =(buffer[11] == 'v');
boolean b11_56 =(buffer[11] == 'q');
boolean b11_57 =(buffer[11] == '.');
boolean b11_58 =(buffer[11] == 'U');
boolean b11_59 =(buffer[11] == 'f');
boolean b11_60 =(buffer[11] == ']');
boolean b11_61 =(buffer[11] == 'w');
boolean b11_62 =(buffer[11] == ',');
boolean b11_63 =(buffer[11] == '`');
boolean b11_64 =(buffer[11] == 'j');
boolean b11_65 =(buffer[11] == 'k');
boolean b11_66 =(buffer[11] == '%');
boolean b11_67 =(buffer[11] == 'M');
boolean b11_68 =(buffer[11] == 'z');
boolean b11_69 =(buffer[11] == '-');
boolean b11_70 =(buffer[11] == 'P');
boolean b11_71 =(buffer[11] == ':');
boolean b11_72 =(buffer[11] == '<');
boolean b11_73 =(buffer[11] == ')');
boolean b11_74 =(buffer[11] == 'H');
boolean b12_1 =(buffer[12] == '6');
boolean b12_2 =(buffer[12] == '0');
boolean b12_3 =(buffer[12] == 'n');
boolean b12_4 =(buffer[12] == 't');
boolean b12_5 =(buffer[12] == 'e');
boolean b12_6 =(buffer[12] == ' ');
boolean b12_7 =(buffer[12] == 'm');
boolean b12_8 =(buffer[12] == 'B');
boolean b12_9 =(buffer[12] == 'D');
boolean b12_10 =(buffer[12] == '|');
boolean b12_11 =(buffer[12] == 'E');
boolean b12_12 =(buffer[12] == '.');
boolean b12_13 =(buffer[12] == '8');
boolean b12_14 =(buffer[12] == 'F');
boolean b12_15 =(buffer[12] == '2');
boolean b12_16 =(buffer[12] == 's');
boolean b12_17 =(buffer[12] == 'a');
boolean b12_18 =(buffer[12] == 'c');
boolean b12_19 =(buffer[12] == '=');
boolean b12_20 =(buffer[12] == 'r');
boolean b12_21 =(buffer[12] == 'M');
boolean b12_22 =(buffer[12] == '?');
boolean b12_23 =(buffer[12] == 'N');
boolean b12_24 =(buffer[12] == 'k');
boolean b12_25 =(buffer[12] == 'l');
boolean b12_26 =(buffer[12] == 'o');
boolean b12_27 =(buffer[12] == 'R');
boolean b12_28 =(buffer[12] == '/');
boolean b12_29 =(buffer[12] == 'A');
boolean b12_30 =(buffer[12] == '+');
boolean b12_31 =(buffer[12] == '3');
boolean b12_32 =(buffer[12] == 'p');
boolean b12_33 =(buffer[12] == 'q');
boolean b12_34 =(buffer[12] == '9');
boolean b12_35 =(buffer[12] == 'S');
boolean b12_36 =(buffer[12] == 'g');
boolean b12_37 =(buffer[12] == 'u');
boolean b12_38 =(buffer[12] == 'i');
boolean b12_39 =(buffer[12] == 'd');
boolean b12_40 =(buffer[12] == 'U');
boolean b12_41 =(buffer[12] == 'v');
boolean b12_42 =(buffer[12] == 'I');
boolean b12_43 =(buffer[12] == 'Y');
boolean b12_44 =(buffer[12] == '4');
boolean b12_45 =(buffer[12] == 'x');
boolean b12_46 =(buffer[12] == 'b');
boolean b12_47 =(buffer[12] == 'P');
boolean b12_48 =(buffer[12] == '%');
boolean b12_49 =(buffer[12] == '_');
boolean b12_50 =(buffer[12] == 'h');
boolean b12_51 =(buffer[12] == 'C');
boolean b12_52 =(buffer[12] == 'f');
boolean b12_53 =(buffer[12] == 'O');
boolean b12_54 =(buffer[12] == '7');
boolean b12_55 =(buffer[12] == 'w');
boolean b12_56 =(buffer[12] == '*');
boolean b12_57 =(buffer[12] == 'Q');
boolean b12_58 =(buffer[12] == '5');
boolean b12_59 =(buffer[12] == '>');
boolean b12_60 =(buffer[12] == 'y');
boolean b12_61 =(buffer[12] == '<');
boolean b12_62 =(buffer[12] == 'T');
boolean b12_63 =(buffer[12] == 'G');
boolean b12_64 =(buffer[12] == 'j');
boolean b12_65 =(buffer[12] == 'H');
boolean b12_66 =(buffer[12] == '1');
boolean b12_67 =(buffer[12] == 'z');
boolean b12_68 =(buffer[12] == ']');
boolean b12_69 =(buffer[12] == 'L');
boolean b12_70 =(buffer[12] == '-');
boolean b12_71 =(buffer[12] == '(');
boolean b13_1 =(buffer[13] == ' ');
boolean b13_2 =(buffer[13] == '0');
boolean b13_3 =(buffer[13] == 'h');
boolean b13_4 =(buffer[13] == 'r');
boolean b13_5 =(buffer[13] == 'e');
boolean b13_6 =(buffer[13] == 'p');
boolean b13_7 =(buffer[13] == 'F');
boolean b13_8 =(buffer[13] == '8');
boolean b13_9 =(buffer[13] == '9');
boolean b13_10 =(buffer[13] == 'E');
boolean b13_11 =(buffer[13] == '3');
boolean b13_12 =(buffer[13] == 'D');
boolean b13_13 =(buffer[13] == 'M');
boolean b13_14 =(buffer[13] == '1');
boolean b13_15 =(buffer[13] == 'C');
boolean b13_16 =(buffer[13] == 's');
boolean b13_17 =(buffer[13] == 'A');
boolean b13_18 =(buffer[13] == 'b');
boolean b13_19 =(buffer[13] == 'd');
boolean b13_20 =(buffer[13] == '=');
boolean b13_21 =(buffer[13] == 'm');
boolean b13_22 =(buffer[13] == 'n');
boolean b13_23 =(buffer[13] == 'N');
boolean b13_24 =(buffer[13] == 'J');
boolean b13_25 =(buffer[13] == ',');
boolean b13_26 =(buffer[13] == '|');
boolean b13_27 =(buffer[13] == 'i');
boolean b13_28 =(buffer[13] == 'I');
boolean b13_29 =(buffer[13] == 'W');
boolean b13_30 =(buffer[13] == 'c');
boolean b13_31 =(buffer[13] == '2');
boolean b13_32 =(buffer[13] == 'u');
boolean b13_33 =(buffer[13] == '4');
boolean b13_34 =(buffer[13] == 'B');
boolean b13_35 =(buffer[13] == '~');
boolean b13_36 =(buffer[13] == 'o');
boolean b13_37 =(buffer[13] == 'f');
boolean b13_38 =(buffer[13] == 't');
boolean b13_39 =(buffer[13] == '?');
boolean b13_40 =(buffer[13] == '.');
boolean b13_41 =(buffer[13] == 'l');
boolean b13_42 =(buffer[13] == 'R');
boolean b13_43 =(buffer[13] == 'a');
boolean b13_44 =(buffer[13] == 'O');
boolean b13_45 =(buffer[13] == 'P');
boolean b13_46 =(buffer[13] == 'Y');
boolean b13_47 =(buffer[13] == 'y');
boolean b13_48 =(buffer[13] == 'v');
boolean b13_49 =(buffer[13] == '*');
boolean b13_50 =(buffer[13] == 'x');
boolean b13_51 =(buffer[13] == '5');
boolean b13_52 =(buffer[13] == '/');
boolean b13_53 =(buffer[13] == 'g');
boolean b13_54 =(buffer[13] == 'K');
boolean b13_55 =(buffer[13] == '-');
boolean b13_56 =(buffer[13] == 'q');
boolean b13_57 =(buffer[13] == '@');
boolean b13_58 =(buffer[13] == '_');
boolean b13_59 =(buffer[13] == 'U');
boolean b13_60 =(buffer[13] == 'w');
boolean b13_61 =(buffer[13] == 'j');
boolean b13_62 =(buffer[13] == 'k');
boolean b13_63 =(buffer[13] == 'S');
boolean b13_64 =(buffer[13] == '6');
boolean b13_65 =(buffer[13] == '%');
boolean b13_66 =(buffer[13] == '(');
boolean b13_67 =(buffer[13] == '>');
boolean b13_68 =(buffer[13] == '7');
boolean b13_69 =(buffer[13] == '<');
boolean b13_70 =(buffer[13] == ':');
boolean b13_71 =(buffer[13] == '&');
boolean b13_72 =(buffer[13] == 'H');
boolean b13_73 =(buffer[13] == 'T');
boolean b13_74 =(buffer[13] == 'L');
boolean b14_1 =(buffer[14] == '0');
boolean b14_2 =(buffer[14] == '|');
boolean b14_3 =(buffer[14] == ' ');
boolean b14_4 =(buffer[14] == 'v');
boolean b14_5 =(buffer[14] == 's');
boolean b14_6 =(buffer[14] == 'F');
boolean b14_7 =(buffer[14] == 'B');
boolean b14_8 =(buffer[14] == '8');
boolean b14_9 =(buffer[14] == '9');
boolean b14_10 =(buffer[14] == 'A');
boolean b14_11 =(buffer[14] == '6');
boolean b14_12 =(buffer[14] == 'm');
boolean b14_13 =(buffer[14] == '4');
boolean b14_14 =(buffer[14] == 'D');
boolean b14_15 =(buffer[14] == 'C');
boolean b14_16 =(buffer[14] == '5');
boolean b14_17 =(buffer[14] == 'e');
boolean b14_18 =(buffer[14] == 'l');
boolean b14_19 =(buffer[14] == '=');
boolean b14_20 =(buffer[14] == 'a');
boolean b14_21 =(buffer[14] == 'o');
boolean b14_22 =(buffer[14] == 'O');
boolean b14_23 =(buffer[14] == 'E');
boolean b14_24 =(buffer[14] == 'i');
boolean b14_25 =(buffer[14] == 't');
boolean b14_26 =(buffer[14] == '@');
boolean b14_27 =(buffer[14] == '2');
boolean b14_28 =(buffer[14] == 'n');
boolean b14_29 =(buffer[14] == 'S');
boolean b14_30 =(buffer[14] == '1');
boolean b14_31 =(buffer[14] == 'I');
boolean b14_32 =(buffer[14] == '7');
boolean b14_33 =(buffer[14] == '3');
boolean b14_34 =(buffer[14] == '.');
boolean b14_35 =(buffer[14] == 'r');
boolean b14_36 =(buffer[14] == 'p');
boolean b14_37 =(buffer[14] == 'h');
boolean b14_38 =(buffer[14] == 'c');
boolean b14_39 =(buffer[14] == 'w');
boolean b14_40 =(buffer[14] == '?');
boolean b14_41 =(buffer[14] == 'g');
boolean b14_42 =(buffer[14] == 'x');
boolean b14_43 =(buffer[14] == 'N');
boolean b14_44 =(buffer[14] == 'T');
boolean b14_45 =(buffer[14] == 'G');
boolean b14_46 =(buffer[14] == 'M');
boolean b14_47 =(buffer[14] == 'f');
boolean b14_48 =(buffer[14] == '_');
boolean b14_49 =(buffer[14] == '/');
boolean b14_50 =(buffer[14] == 'k');
boolean b14_51 =(buffer[14] == 'd');
boolean b14_52 =(buffer[14] == 'b');
boolean b14_53 =(buffer[14] == ']');
boolean b14_54 =(buffer[14] == '-');
boolean b14_55 =(buffer[14] == 'u');
boolean b14_56 =(buffer[14] == 'Q');
boolean b14_57 =(buffer[14] == 'y');
boolean b14_58 =(buffer[14] == 'R');
boolean b14_59 =(buffer[14] == 'P');
boolean b14_60 =(buffer[14] == 'L');
boolean b14_61 =(buffer[14] == '(');
boolean b14_62 =(buffer[14] == 'z');
boolean b14_63 =(buffer[14] == 'j');
boolean b14_64 =(buffer[14] == ':');
boolean b14_65 =(buffer[14] == 'H');
boolean b14_66 =(buffer[14] == 'K');
boolean b15_1 =(buffer[15] == '0');
boolean b15_2 =(buffer[15] == 'I');
boolean b15_3 =(buffer[15] == 'e');
boolean b15_4 =(buffer[15] == ' ');
boolean b15_5 =(buffer[15] == 'p');
boolean b15_6 =(buffer[15] == '3');
boolean b15_7 =(buffer[15] == '|');
boolean b15_8 =(buffer[15] == 'D');
boolean b15_9 =(buffer[15] == '2');
boolean b15_10 =(buffer[15] == '9');
boolean b15_11 =(buffer[15] == 'C');
boolean b15_12 =(buffer[15] == 'E');
boolean b15_13 =(buffer[15] == '8');
boolean b15_14 =(buffer[15] == '-');
boolean b15_15 =(buffer[15] == 'l');
boolean b15_16 =(buffer[15] == 'f');
boolean b15_17 =(buffer[15] == '=');
boolean b15_18 =(buffer[15] == 'd');
boolean b15_19 =(buffer[15] == 'P');
boolean b15_20 =(buffer[15] == 'm');
boolean b15_21 =(buffer[15] == 'w');
boolean b15_22 =(buffer[15] == 'c');
boolean b15_23 =(buffer[15] == 'T');
boolean b15_24 =(buffer[15] == 'A');
boolean b15_25 =(buffer[15] == 't');
boolean b15_26 =(buffer[15] == '!');
boolean b15_27 =(buffer[15] == '1');
boolean b15_28 =(buffer[15] == '`');
boolean b15_29 =(buffer[15] == '7');
boolean b15_30 =(buffer[15] == 'o');
boolean b15_31 =(buffer[15] == 'r');
boolean b15_32 =(buffer[15] == 's');
boolean b15_33 =(buffer[15] == 'a');
boolean b15_34 =(buffer[15] == 'v');
boolean b15_35 =(buffer[15] == 'i');
boolean b15_36 =(buffer[15] == '.');
boolean b15_37 =(buffer[15] == 'x');
boolean b15_38 =(buffer[15] == '/');
boolean b15_39 =(buffer[15] == 'S');
boolean b15_40 =(buffer[15] == 'g');
boolean b15_41 =(buffer[15] == 'n');
boolean b15_42 =(buffer[15] == 'y');
boolean b15_43 =(buffer[15] == 'K');
boolean b15_44 =(buffer[15] == 'h');
boolean b15_45 =(buffer[15] == 'F');
boolean b15_46 =(buffer[15] == 'J');
boolean b15_47 =(buffer[15] == 'W');
boolean b15_48 =(buffer[15] == '_');
boolean b15_49 =(buffer[15] == 'q');
boolean b15_50 =(buffer[15] == 'u');
boolean b15_51 =(buffer[15] == 'H');
boolean b15_52 =(buffer[15] == 'b');
boolean b15_53 =(buffer[15] == 'Q');
boolean b15_54 =(buffer[15] == '?');
boolean b15_55 =(buffer[15] == 'R');
boolean b15_56 =(buffer[15] == 'O');
boolean b15_57 =(buffer[15] == 'M');
boolean b15_58 =(buffer[15] == 'Y');
boolean b15_59 =(buffer[15] == ',');
boolean b15_60 =(buffer[15] == '$');
boolean b15_61 =(buffer[15] == ':');
boolean b15_62 =(buffer[15] == 'B');
boolean b15_63 =(buffer[15] == 'k');
boolean b15_64 =(buffer[15] == 'U');
boolean b15_65 =(buffer[15] == '<');
boolean b15_66 =(buffer[15] == 'N');
boolean b15_67 =(buffer[15] == '&');
boolean b15_68 =(buffer[15] == 'z');
boolean b15_69 =(buffer[15] == '*');
boolean b15_70 =(buffer[15] == 'Z');
boolean b15_71 =(buffer[15] == '5');
boolean b15_72 =(buffer[15] == '%');
boolean b15_73 =(buffer[15] == '4');
boolean b15_74 =(buffer[15] == '6');
boolean b15_75 =(buffer[15] == 'j');
boolean b16_1 =(buffer[16] == ' ');
boolean b16_2 =(buffer[16] == 's');
boolean b16_3 =(buffer[16] == 'r');
boolean b16_4 =(buffer[16] == '0');
boolean b16_5 =(buffer[16] == 'a');
boolean b16_6 =(buffer[16] == 'F');
boolean b16_7 =(buffer[16] == '1');
boolean b16_8 =(buffer[16] == 'l');
boolean b16_9 =(buffer[16] == '8');
boolean b16_10 =(buffer[16] == '9');
boolean b16_11 =(buffer[16] == '/');
boolean b16_12 =(buffer[16] == 'K');
boolean b16_13 =(buffer[16] == '4');
boolean b16_14 =(buffer[16] == '3');
boolean b16_15 =(buffer[16] == '|');
boolean b16_16 =(buffer[16] == 'p');
boolean b16_17 =(buffer[16] == 'C');
boolean b16_18 =(buffer[16] == 'g');
boolean b16_19 =(buffer[16] == 'Q');
boolean b16_20 =(buffer[16] == 'E');
boolean b16_21 =(buffer[16] == 'A');
boolean b16_22 =(buffer[16] == 'n');
boolean b16_23 =(buffer[16] == 'd');
boolean b16_24 =(buffer[16] == 'i');
boolean b16_25 =(buffer[16] == 'c');
boolean b16_26 =(buffer[16] == 'L');
boolean b16_27 =(buffer[16] == '2');
boolean b16_28 =(buffer[16] == 'P');
boolean b16_29 =(buffer[16] == 'e');
boolean b16_30 =(buffer[16] == 'o');
boolean b16_31 =(buffer[16] == 'M');
boolean b16_32 =(buffer[16] == '.');
boolean b16_33 =(buffer[16] == 'U');
boolean b16_34 =(buffer[16] == 'S');
boolean b16_35 =(buffer[16] == 'T');
boolean b16_36 =(buffer[16] == 'N');
boolean b16_37 =(buffer[16] == '_');
boolean b16_38 =(buffer[16] == 'I');
boolean b16_39 =(buffer[16] == 'm');
boolean b16_40 =(buffer[16] == 'u');
boolean b16_41 =(buffer[16] == 'h');
boolean b16_42 =(buffer[16] == '*');
boolean b16_43 =(buffer[16] == 'x');
boolean b16_44 =(buffer[16] == 't');
boolean b16_45 =(buffer[16] == 'q');
boolean b16_46 =(buffer[16] == 'f');
boolean b16_47 =(buffer[16] == '?');
boolean b16_48 =(buffer[16] == '7');
boolean b16_49 =(buffer[16] == 'j');
boolean b16_50 =(buffer[16] == '-');
boolean b16_51 =(buffer[16] == '6');
boolean b16_52 =(buffer[16] == '=');
boolean b16_53 =(buffer[16] == 'D');
boolean b16_54 =(buffer[16] == 'b');
boolean b16_55 =(buffer[16] == 'y');
boolean b16_56 =(buffer[16] == 'W');
boolean b16_57 =(buffer[16] == 'k');
boolean b16_58 =(buffer[16] == 'v');
boolean b16_59 =(buffer[16] == '%');
boolean b16_60 =(buffer[16] == 'H');
boolean b16_61 =(buffer[16] == '$');
boolean b16_62 =(buffer[16] == 'B');
boolean b16_63 =(buffer[16] == 'R');
boolean b16_64 =(buffer[16] == 'O');
boolean b16_65 =(buffer[16] == 'Y');
boolean b16_66 =(buffer[16] == '(');
boolean b16_67 =(buffer[16] == '5');
boolean b16_68 =(buffer[16] == ':');
boolean b16_69 =(buffer[16] == '&');
boolean b16_70 =(buffer[16] == ')');
boolean b17_1 =(buffer[17] == '0');
boolean b17_2 =(buffer[17] == ' ');
boolean b17_3 =(buffer[17] == '1');
boolean b17_4 =(buffer[17] == 'c');
boolean b17_5 =(buffer[17] == 'F');
boolean b17_6 =(buffer[17] == '8');
boolean b17_7 =(buffer[17] == '3');
boolean b17_8 =(buffer[17] == '|');
boolean b17_9 =(buffer[17] == '2');
boolean b17_10 =(buffer[17] == 'a');
boolean b17_11 =(buffer[17] == '6');
boolean b17_12 =(buffer[17] == 'D');
boolean b17_13 =(buffer[17] == 'b');
boolean b17_14 =(buffer[17] == 'B');
boolean b17_15 =(buffer[17] == '9');
boolean b17_16 =(buffer[17] == 'C');
boolean b17_17 =(buffer[17] == 'V');
boolean b17_18 =(buffer[17] == 'r');
boolean b17_19 =(buffer[17] == '5');
boolean b17_20 =(buffer[17] == 'S');
boolean b17_21 =(buffer[17] == 'h');
boolean b17_22 =(buffer[17] == 'R');
boolean b17_23 =(buffer[17] == 'E');
boolean b17_24 =(buffer[17] == 'A');
boolean b17_25 =(buffer[17] == 'm');
boolean b17_26 =(buffer[17] == 'l');
boolean b17_27 =(buffer[17] == 'o');
boolean b17_28 =(buffer[17] == '/');
boolean b17_29 =(buffer[17] == 'e');
boolean b17_30 =(buffer[17] == 'q');
boolean b17_31 =(buffer[17] == '4');
boolean b17_32 =(buffer[17] == ',');
boolean b17_33 =(buffer[17] == 'g');
boolean b17_34 =(buffer[17] == 'p');
boolean b17_35 =(buffer[17] == 'u');
boolean b17_36 =(buffer[17] == 's');
boolean b17_37 =(buffer[17] == 't');
boolean b17_38 =(buffer[17] == '.');
boolean b17_39 =(buffer[17] == 'f');
boolean b17_40 =(buffer[17] == 'x');
boolean b17_41 =(buffer[17] == 'N');
boolean b17_42 =(buffer[17] == 'I');
boolean b17_43 =(buffer[17] == 'T');
boolean b17_44 =(buffer[17] == 'i');
boolean b17_45 =(buffer[17] == 'L');
boolean b17_46 =(buffer[17] == 'w');
boolean b17_47 =(buffer[17] == 'd');
boolean b17_48 =(buffer[17] == 'J');
boolean b17_49 =(buffer[17] == 'n');
boolean b17_50 =(buffer[17] == 'M');
boolean b17_51 =(buffer[17] == 'y');
boolean b17_52 =(buffer[17] == '?');
boolean b17_53 =(buffer[17] == '_');
boolean b17_54 =(buffer[17] == 'v');
boolean b17_55 =(buffer[17] == '=');
boolean b17_56 =(buffer[17] == 'P');
boolean b17_57 =(buffer[17] == 'k');
boolean b17_58 =(buffer[17] == 'Y');
boolean b17_59 =(buffer[17] == 'z');
boolean b17_60 =(buffer[17] == 'X');
boolean b17_61 =(buffer[17] == 'K');
boolean b17_62 =(buffer[17] == '7');
boolean b17_63 =(buffer[17] == 'O');
boolean b17_64 =(buffer[17] == 'j');
boolean b17_65 =(buffer[17] == '*');
boolean b17_66 =(buffer[17] == ':');
boolean b17_67 =(buffer[17] == '-');
boolean b17_68 =(buffer[17] == '&');
boolean b17_69 =(buffer[17] == 'Q');
boolean b17_70 =(buffer[17] == 'U');
boolean b18_1 =(buffer[18] == '0');
boolean b18_2 =(buffer[18] == 'O');
boolean b18_3 =(buffer[18] == ' ');
boolean b18_4 =(buffer[18] == 'e');
boolean b18_5 =(buffer[18] == 'F');
boolean b18_6 =(buffer[18] == '5');
boolean b18_7 =(buffer[18] == 'C');
boolean b18_8 =(buffer[18] == '|');
boolean b18_9 =(buffer[18] == 't');
boolean b18_10 =(buffer[18] == 'i');
boolean b18_11 =(buffer[18] == 'n');
boolean b18_12 =(buffer[18] == '3');
boolean b18_13 =(buffer[18] == '9');
boolean b18_14 =(buffer[18] == '8');
boolean b18_15 =(buffer[18] == 'o');
boolean b18_16 =(buffer[18] == 'S');
boolean b18_17 =(buffer[18] == 'E');
boolean b18_18 =(buffer[18] == '.');
boolean b18_19 =(buffer[18] == 'p');
boolean b18_20 =(buffer[18] == 'd');
boolean b18_21 =(buffer[18] == 'Y');
boolean b18_22 =(buffer[18] == 'r');
boolean b18_23 =(buffer[18] == 'u');
boolean b18_24 =(buffer[18] == '1');
boolean b18_25 =(buffer[18] == '2');
boolean b18_26 =(buffer[18] == '@');
boolean b18_27 =(buffer[18] == '7');
boolean b18_28 =(buffer[18] == '/');
boolean b18_29 =(buffer[18] == 's');
boolean b18_30 =(buffer[18] == 'x');
boolean b18_31 =(buffer[18] == 'c');
boolean b18_32 =(buffer[18] == 'a');
boolean b18_33 =(buffer[18] == 'm');
boolean b18_34 =(buffer[18] == 'v');
boolean b18_35 =(buffer[18] == 'A');
boolean b18_36 =(buffer[18] == 'l');
boolean b18_37 =(buffer[18] == 'h');
boolean b18_38 =(buffer[18] == 'b');
boolean b18_39 =(buffer[18] == '*');
boolean b18_40 =(buffer[18] == 'w');
boolean b18_41 =(buffer[18] == 'g');
boolean b18_42 =(buffer[18] == 'D');
boolean b18_43 =(buffer[18] == 'P');
boolean b18_44 =(buffer[18] == '_');
boolean b18_45 =(buffer[18] == 'I');
boolean b18_46 =(buffer[18] == 'k');
boolean b18_47 =(buffer[18] == '[');
boolean b18_48 =(buffer[18] == '?');
boolean b18_49 =(buffer[18] == '`');
boolean b18_50 =(buffer[18] == 'B');
boolean b18_51 =(buffer[18] == 'T');
boolean b18_52 =(buffer[18] == 'G');
boolean b18_53 =(buffer[18] == 'j');
boolean b18_54 =(buffer[18] == 'R');
boolean b18_55 =(buffer[18] == '-');
boolean b18_56 =(buffer[18] == 'f');
boolean b18_57 =(buffer[18] == 'y');
boolean b18_58 =(buffer[18] == '4');
boolean b18_59 =(buffer[18] == ':');
boolean b18_60 =(buffer[18] == '=');
boolean b18_61 =(buffer[18] == 'W');
boolean b18_62 =(buffer[18] == '<');
boolean b18_63 =(buffer[18] == 'U');
boolean b18_64 =(buffer[18] == 'z');
boolean b18_65 =(buffer[18] == '6');
boolean b18_66 =(buffer[18] == 'H');
boolean b18_67 =(buffer[18] == 'M');
boolean b18_68 =(buffer[18] == 'L');
boolean b18_69 =(buffer[18] == 'N');
boolean b19_1 =(buffer[19] == ' ');
boolean b19_2 =(buffer[19] == 'p');
boolean b19_3 =(buffer[19] == '0');
boolean b19_4 =(buffer[19] == 'f');
boolean b19_5 =(buffer[19] == 'F');
boolean b19_6 =(buffer[19] == '|');
boolean b19_7 =(buffer[19] == '8');
boolean b19_8 =(buffer[19] == '9');
boolean b19_9 =(buffer[19] == 'e');
boolean b19_10 =(buffer[19] == 'Q');
boolean b19_11 =(buffer[19] == '~');
boolean b19_12 =(buffer[19] == 'n');
boolean b19_13 =(buffer[19] == 'A');
boolean b19_14 =(buffer[19] == 'E');
boolean b19_15 =(buffer[19] == 'B');
boolean b19_16 =(buffer[19] == '4');
boolean b19_17 =(buffer[19] == 'g');
boolean b19_18 =(buffer[19] == '1');
boolean b19_19 =(buffer[19] == 'j');
boolean b19_20 =(buffer[19] == 'T');
boolean b19_21 =(buffer[19] == 'r');
boolean b19_22 =(buffer[19] == 'i');
boolean b19_23 =(buffer[19] == 'b');
boolean b19_24 =(buffer[19] == '3');
boolean b19_25 =(buffer[19] == 'm');
boolean b19_26 =(buffer[19] == '2');
boolean b19_27 =(buffer[19] == 'C');
boolean b19_28 =(buffer[19] == 'u');
boolean b19_29 =(buffer[19] == 'P');
boolean b19_30 =(buffer[19] == 'R');
boolean b19_31 =(buffer[19] == 'o');
boolean b19_32 =(buffer[19] == 'l');
boolean b19_33 =(buffer[19] == '=');
boolean b19_34 =(buffer[19] == 't');
boolean b19_35 =(buffer[19] == 'a');
boolean b19_36 =(buffer[19] == 'N');
boolean b19_37 =(buffer[19] == 'S');
boolean b19_38 =(buffer[19] == 'h');
boolean b19_39 =(buffer[19] == 'x');
boolean b19_40 =(buffer[19] == 'c');
boolean b19_41 =(buffer[19] == 's');
boolean b19_42 =(buffer[19] == 'd');
boolean b19_43 =(buffer[19] == '/');
boolean b19_44 =(buffer[19] == '.');
boolean b19_45 =(buffer[19] == 'y');
boolean b19_46 =(buffer[19] == '_');
boolean b19_47 =(buffer[19] == 'k');
boolean b19_48 =(buffer[19] == 'w');
boolean b19_49 =(buffer[19] == '-');
boolean b19_50 =(buffer[19] == 'D');
boolean b19_51 =(buffer[19] == 'v');
boolean b19_52 =(buffer[19] == 'q');
boolean b19_53 =(buffer[19] == '%');
boolean b19_54 =(buffer[19] == '6');
boolean b19_55 =(buffer[19] == ',');
boolean b19_56 =(buffer[19] == 'I');
boolean b19_57 =(buffer[19] == '>');
boolean b19_58 =(buffer[19] == 'M');
boolean b19_59 =(buffer[19] == '5');
boolean b19_60 =(buffer[19] == '?');
boolean b19_61 =(buffer[19] == 'O');
boolean b19_62 =(buffer[19] == 'z');
boolean b19_63 =(buffer[19] == 'K');
boolean b20_1 =(buffer[20] == '0');
boolean b20_2 =(buffer[20] == 'e');
boolean b20_3 =(buffer[20] == 'o');
boolean b20_4 =(buffer[20] == 'F');
boolean b20_5 =(buffer[20] == '1');
boolean b20_6 =(buffer[20] == 'C');
boolean b20_7 =(buffer[20] == '9');
boolean b20_8 =(buffer[20] == ' ');
boolean b20_9 =(buffer[20] == '|');
boolean b20_10 =(buffer[20] == '.');
boolean b20_11 =(buffer[20] == '<');
boolean b20_12 =(buffer[20] == '5');
boolean b20_13 =(buffer[20] == '/');
boolean b20_14 =(buffer[20] == 'E');
boolean b20_15 =(buffer[20] == 'B');
boolean b20_16 =(buffer[20] == '8');
boolean b20_17 =(buffer[20] == 'r');
boolean b20_18 =(buffer[20] == '6');
boolean b20_19 =(buffer[20] == '7');
boolean b20_20 =(buffer[20] == 'k');
boolean b20_21 =(buffer[20] == 'U');
boolean b20_22 =(buffer[20] == 'A');
boolean b20_23 =(buffer[20] == 'z');
boolean b20_24 =(buffer[20] == 'a');
boolean b20_25 =(buffer[20] == 'c');
boolean b20_26 =(buffer[20] == '=');
boolean b20_27 =(buffer[20] == 'i');
boolean b20_28 =(buffer[20] == 't');
boolean b20_29 =(buffer[20] == '2');
boolean b20_30 =(buffer[20] == 's');
boolean b20_31 =(buffer[20] == 'g');
boolean b20_32 =(buffer[20] == 'd');
boolean b20_33 =(buffer[20] == 'm');
boolean b20_34 =(buffer[20] == 'p');
boolean b20_35 =(buffer[20] == 'u');
boolean b20_36 =(buffer[20] == 'N');
boolean b20_37 =(buffer[20] == 'l');
boolean b20_38 =(buffer[20] == 'S');
boolean b20_39 =(buffer[20] == 'W');
boolean b20_40 =(buffer[20] == 'O');
boolean b20_41 =(buffer[20] == 'n');
boolean b20_42 =(buffer[20] == 'R');
boolean b20_43 =(buffer[20] == 'x');
boolean b20_44 =(buffer[20] == 'f');
boolean b20_45 =(buffer[20] == 'w');
boolean b20_46 =(buffer[20] == 'v');
boolean b20_47 =(buffer[20] == 'b');
boolean b20_48 =(buffer[20] == 'h');
boolean b20_49 =(buffer[20] == 'y');
boolean b20_50 =(buffer[20] == 'q');
boolean b20_51 =(buffer[20] == '3');
boolean b20_52 =(buffer[20] == '_');
boolean b20_53 =(buffer[20] == 'M');
boolean b20_54 =(buffer[20] == '4');
boolean b20_55 =(buffer[20] == ':');
boolean b20_56 =(buffer[20] == 'D');
boolean b20_57 =(buffer[20] == 'J');
boolean b20_58 =(buffer[20] == 'P');
boolean b20_59 =(buffer[20] == 'j');
boolean b20_60 =(buffer[20] == '?');
boolean b20_61 =(buffer[20] == 'H');
boolean b20_62 =(buffer[20] == '-');
boolean b20_63 =(buffer[20] == 'T');
boolean b20_64 =(buffer[20] == 'Z');
boolean b20_65 =(buffer[20] == '(');
boolean b20_66 =(buffer[20] == '>');
boolean b20_67 =(buffer[20] == '&');
boolean b21_1 =(buffer[21] == '0');
boolean b21_2 =(buffer[21] == 'n');
boolean b21_3 =(buffer[21] == ' ');
boolean b21_4 =(buffer[21] == '|');
boolean b21_5 =(buffer[21] == 'r');
boolean b21_6 =(buffer[21] == '8');
boolean b21_7 =(buffer[21] == 'h');
boolean b21_8 =(buffer[21] == 'F');
boolean b21_9 =(buffer[21] == '1');
boolean b21_10 =(buffer[21] == 's');
boolean b21_11 =(buffer[21] == 'M');
boolean b21_12 =(buffer[21] == 'K');
boolean b21_13 =(buffer[21] == '9');
boolean b21_14 =(buffer[21] == 'a');
boolean b21_15 =(buffer[21] == 'l');
boolean b21_16 =(buffer[21] == 'V');
boolean b21_17 =(buffer[21] == 'E');
boolean b21_18 =(buffer[21] == '.');
boolean b21_19 =(buffer[21] == 'm');
boolean b21_20 =(buffer[21] == 'd');
boolean b21_21 =(buffer[21] == 'o');
boolean b21_22 =(buffer[21] == '%');
boolean b21_23 =(buffer[21] == '4');
boolean b21_24 =(buffer[21] == '/');
boolean b21_25 =(buffer[21] == 'R');
boolean b21_26 =(buffer[21] == 'b');
boolean b21_27 =(buffer[21] == 'i');
boolean b21_28 =(buffer[21] == 'A');
boolean b21_29 =(buffer[21] == 'e');
boolean b21_30 =(buffer[21] == 'u');
boolean b21_31 =(buffer[21] == '_');
boolean b21_32 =(buffer[21] == 'O');
boolean b21_33 =(buffer[21] == 'U');
boolean b21_34 =(buffer[21] == 'f');
boolean b21_35 =(buffer[21] == 'c');
boolean b21_36 =(buffer[21] == 't');
boolean b21_37 =(buffer[21] == 'y');
boolean b21_38 =(buffer[21] == 'g');
boolean b21_39 =(buffer[21] == 'B');
boolean b21_40 =(buffer[21] == 'S');
boolean b21_41 =(buffer[21] == '2');
boolean b21_42 =(buffer[21] == 'p');
boolean b21_43 =(buffer[21] == 'N');
boolean b21_44 =(buffer[21] == 'x');
boolean b21_45 =(buffer[21] == 'C');
boolean b21_46 =(buffer[21] == '?');
boolean b21_47 =(buffer[21] == '3');
boolean b21_48 =(buffer[21] == 'w');
boolean b21_49 =(buffer[21] == 'q');
boolean b21_50 =(buffer[21] == 'v');
boolean b21_51 =(buffer[21] == 'z');
boolean b21_52 =(buffer[21] == 'k');
boolean b21_53 =(buffer[21] == '=');
boolean b21_54 =(buffer[21] == '5');
boolean b21_55 =(buffer[21] == '-');
boolean b21_56 =(buffer[21] == ',');
boolean b21_57 =(buffer[21] == 'I');
boolean b21_58 =(buffer[21] == 'T');
boolean b21_59 =(buffer[21] == 'D');
boolean b21_60 =(buffer[21] == 'P');
boolean b21_61 =(buffer[21] == '7');
boolean b21_62 =(buffer[21] == 'Y');
boolean b21_63 =(buffer[21] == '$');
boolean b22_1 =(buffer[22] == '|');
boolean b22_2 =(buffer[22] == '0');
boolean b22_3 =(buffer[22] == 't');
boolean b22_4 =(buffer[22] == '/');
boolean b22_5 =(buffer[22] == 'C');
boolean b22_6 =(buffer[22] == 'F');
boolean b22_7 =(buffer[22] == '9');
boolean b22_8 =(buffer[22] == '8');
boolean b22_9 =(buffer[22] == 'E');
boolean b22_10 =(buffer[22] == '2');
boolean b22_11 =(buffer[22] == 'h');
boolean b22_12 =(buffer[22] == '>');
boolean b22_13 =(buffer[22] == ' ');
boolean b22_14 =(buffer[22] == 'm');
boolean b22_15 =(buffer[22] == '1');
boolean b22_16 =(buffer[22] == 'W');
boolean b22_17 =(buffer[22] == 'A');
boolean b22_18 =(buffer[22] == 'd');
boolean b22_19 =(buffer[22] == 'e');
boolean b22_20 =(buffer[22] == 'n');
boolean b22_21 =(buffer[22] == '3');
boolean b22_22 =(buffer[22] == 's');
boolean b22_23 =(buffer[22] == 'O');
boolean b22_24 =(buffer[22] == 'G');
boolean b22_25 =(buffer[22] == 'b');
boolean b22_26 =(buffer[22] == '\'');
boolean b22_27 =(buffer[22] == 'i');
boolean b22_28 =(buffer[22] == 'l');
boolean b22_29 =(buffer[22] == 'M');
boolean b22_30 =(buffer[22] == 'x');
boolean b22_31 =(buffer[22] == 'a');
boolean b22_32 =(buffer[22] == 'R');
boolean b22_33 =(buffer[22] == 'y');
boolean b22_34 =(buffer[22] == 'r');
boolean b22_35 =(buffer[22] == 'S');
boolean b22_36 =(buffer[22] == 'k');
boolean b22_37 =(buffer[22] == '.');
boolean b22_38 =(buffer[22] == 'u');
boolean b22_39 =(buffer[22] == 'c');
boolean b22_40 =(buffer[22] == 'p');
boolean b22_41 =(buffer[22] == 'g');
boolean b22_42 =(buffer[22] == 'v');
boolean b22_43 =(buffer[22] == '_');
boolean b22_44 =(buffer[22] == '7');
boolean b22_45 =(buffer[22] == 'o');
boolean b22_46 =(buffer[22] == '?');
boolean b22_47 =(buffer[22] == 'B');
boolean b22_48 =(buffer[22] == 'w');
boolean b22_49 =(buffer[22] == 'D');
boolean b22_50 =(buffer[22] == 'f');
boolean b22_51 =(buffer[22] == 'q');
boolean b22_52 =(buffer[22] == '-');
boolean b22_53 =(buffer[22] == 'P');
boolean b22_54 =(buffer[22] == 'I');
boolean b22_55 =(buffer[22] == 'Z');
boolean b22_56 =(buffer[22] == '5');
boolean b22_57 =(buffer[22] == '=');
boolean b22_58 =(buffer[22] == '&');
boolean b22_59 =(buffer[22] == ':');
boolean b22_60 =(buffer[22] == '4');
boolean b22_61 =(buffer[22] == 'Y');
boolean b22_62 =(buffer[22] == 'H');
boolean b22_63 =(buffer[22] == '6');
boolean b22_64 =(buffer[22] == 'U');
boolean b23_1 =(buffer[23] == 'D');
boolean b23_2 =(buffer[23] == '0');
boolean b23_3 =(buffer[23] == 'h');
boolean b23_4 =(buffer[23] == 'b');
boolean b23_5 =(buffer[23] == '9');
boolean b23_6 =(buffer[23] == 'u');
boolean b23_7 =(buffer[23] == '|');
boolean b23_8 =(buffer[23] == ' ');
boolean b23_9 =(buffer[23] == 'm');
boolean b23_10 =(buffer[23] == 'A');
boolean b23_11 =(buffer[23] == 'B');
boolean b23_12 =(buffer[23] == '1');
boolean b23_13 =(buffer[23] == '8');
boolean b23_14 =(buffer[23] == 'F');
boolean b23_15 =(buffer[23] == '7');
boolean b23_16 =(buffer[23] == 'n');
boolean b23_17 =(buffer[23] == 'E');
boolean b23_18 =(buffer[23] == 'e');
boolean b23_19 =(buffer[23] == 'i');
boolean b23_20 =(buffer[23] == '4');
boolean b23_21 =(buffer[23] == '2');
boolean b23_22 =(buffer[23] == '6');
boolean b23_23 =(buffer[23] == '3');
boolean b23_24 =(buffer[23] == 's');
boolean b23_25 =(buffer[23] == 'l');
boolean b23_26 =(buffer[23] == 'd');
boolean b23_27 =(buffer[23] == 'c');
boolean b23_28 =(buffer[23] == 't');
boolean b23_29 =(buffer[23] == 'L');
boolean b23_30 =(buffer[23] == 'C');
boolean b23_31 =(buffer[23] == 'o');
boolean b23_32 =(buffer[23] == 'a');
boolean b23_33 =(buffer[23] == 'H');
boolean b23_34 =(buffer[23] == '.');
boolean b23_35 =(buffer[23] == 'p');
boolean b23_36 =(buffer[23] == 'w');
boolean b23_37 =(buffer[23] == 'x');
boolean b23_38 =(buffer[23] == 'v');
boolean b23_39 =(buffer[23] == '/');
boolean b23_40 =(buffer[23] == '%');
boolean b23_41 =(buffer[23] == 'O');
boolean b23_42 =(buffer[23] == 'P');
boolean b23_43 =(buffer[23] == '-');
boolean b23_44 =(buffer[23] == 'g');
boolean b23_45 =(buffer[23] == '=');
boolean b23_46 =(buffer[23] == 'r');
boolean b23_47 =(buffer[23] == 'S');
boolean b23_48 =(buffer[23] == '@');
boolean b23_49 =(buffer[23] == '_');
boolean b23_50 =(buffer[23] == 'k');
boolean b23_51 =(buffer[23] == 'f');
boolean b23_52 =(buffer[23] == 'y');
boolean b23_53 =(buffer[23] == 'T');
boolean b23_54 =(buffer[23] == ',');
boolean b23_55 =(buffer[23] == '5');
boolean b23_56 =(buffer[23] == 'I');
boolean b23_57 =(buffer[23] == 'R');
boolean b23_58 =(buffer[23] == 'z');
boolean b23_59 =(buffer[23] == '{');
boolean b23_60 =(buffer[23] == '+');
boolean b23_61 =(buffer[23] == 'q');
boolean b23_62 =(buffer[23] == '?');
boolean b23_63 =(buffer[23] == 'U');
boolean b24_1 =(buffer[24] == 'r');
boolean b24_2 =(buffer[24] == ' ');
boolean b24_3 =(buffer[24] == 'e');
boolean b24_4 =(buffer[24] == 'i');
boolean b24_5 =(buffer[24] == 'L');
boolean b24_6 =(buffer[24] == 'N');
boolean b24_7 =(buffer[24] == '9');
boolean b24_8 =(buffer[24] == 'l');
boolean b24_9 =(buffer[24] == '|');
boolean b24_10 =(buffer[24] == '8');
boolean b24_11 =(buffer[24] == 'F');
boolean b24_12 =(buffer[24] == 'C');
boolean b24_13 =(buffer[24] == 'B');
boolean b24_14 =(buffer[24] == '4');
boolean b24_15 =(buffer[24] == '0');
boolean b24_16 =(buffer[24] == '2');
boolean b24_17 =(buffer[24] == 'o');
boolean b24_18 =(buffer[24] == 'E');
boolean b24_19 =(buffer[24] == '3');
boolean b24_20 =(buffer[24] == 'c');
boolean b24_21 =(buffer[24] == 'n');
boolean b24_22 =(buffer[24] == 'a');
boolean b24_23 =(buffer[24] == '/');
boolean b24_24 =(buffer[24] == 's');
boolean b24_25 =(buffer[24] == '.');
boolean b24_26 =(buffer[24] == 'U');
boolean b24_27 =(buffer[24] == 'p');
boolean b24_28 =(buffer[24] == 'm');
boolean b24_29 =(buffer[24] == 'd');
boolean b24_30 =(buffer[24] == 'x');
boolean b24_31 =(buffer[24] == 'h');
boolean b24_32 =(buffer[24] == 't');
boolean b24_33 =(buffer[24] == 'b');
boolean b24_34 =(buffer[24] == 'w');
boolean b24_35 =(buffer[24] == '=');
boolean b24_36 =(buffer[24] == 'R');
boolean b24_37 =(buffer[24] == 'g');
boolean b24_38 =(buffer[24] == 'A');
boolean b24_39 =(buffer[24] == 'H');
boolean b24_40 =(buffer[24] == 'v');
boolean b24_41 =(buffer[24] == 'f');
boolean b24_42 =(buffer[24] == '_');
boolean b24_43 =(buffer[24] == 'u');
boolean b24_44 =(buffer[24] == 'y');
boolean b24_45 =(buffer[24] == '-');
boolean b24_46 =(buffer[24] == '%');
boolean b24_47 =(buffer[24] == 'q');
boolean b24_48 =(buffer[24] == '(');
boolean b24_49 =(buffer[24] == '5');
boolean b24_50 =(buffer[24] == ':');
boolean b24_51 =(buffer[24] == 'k');
boolean b24_52 =(buffer[24] == 'D');
boolean b24_53 =(buffer[24] == 'J');
boolean b24_54 =(buffer[24] == '*');
boolean b24_55 =(buffer[24] == 'M');
boolean b24_56 =(buffer[24] == '>');
boolean b24_57 =(buffer[24] == ',');
boolean b24_58 =(buffer[24] == 'O');
boolean b24_59 =(buffer[24] == 'S');
boolean b24_60 =(buffer[24] == 'I');
boolean b25_1 =(buffer[25] == 'i');
boolean b25_2 =(buffer[25] == '0');
boolean b25_3 =(buffer[25] == 's');
boolean b25_4 =(buffer[25] == 'n');
boolean b25_5 =(buffer[25] == 'C');
boolean b25_6 =(buffer[25] == '|');
boolean b25_7 =(buffer[25] == '8');
boolean b25_8 =(buffer[25] == '2');
boolean b25_9 =(buffer[25] == '?');
boolean b25_10 =(buffer[25] == 'G');
boolean b25_11 =(buffer[25] == '9');
boolean b25_12 =(buffer[25] == 'F');
boolean b25_13 =(buffer[25] == ' ');
boolean b25_14 =(buffer[25] == 'V');
boolean b25_15 =(buffer[25] == '3');
boolean b25_16 =(buffer[25] == '1');
boolean b25_17 =(buffer[25] == 'A');
boolean b25_18 =(buffer[25] == 'p');
boolean b25_19 =(buffer[25] == 'c');
boolean b25_20 =(buffer[25] == '/');
boolean b25_21 =(buffer[25] == 'b');
boolean b25_22 =(buffer[25] == 'a');
boolean b25_23 =(buffer[25] == 'l');
boolean b25_24 =(buffer[25] == 'd');
boolean b25_25 =(buffer[25] == 'g');
boolean b25_26 =(buffer[25] == '\'');
boolean b25_27 =(buffer[25] == 'r');
boolean b25_28 =(buffer[25] == 'h');
boolean b25_29 =(buffer[25] == 'x');
boolean b25_30 =(buffer[25] == 't');
boolean b25_31 =(buffer[25] == '.');
boolean b25_32 =(buffer[25] == 'S');
boolean b25_33 =(buffer[25] == 'e');
boolean b25_34 =(buffer[25] == 'f');
boolean b25_35 =(buffer[25] == 'm');
boolean b25_36 =(buffer[25] == 'o');
boolean b25_37 =(buffer[25] == 'M');
boolean b25_38 =(buffer[25] == 'P');
boolean b25_39 =(buffer[25] == 'D');
boolean b25_40 =(buffer[25] == '=');
boolean b25_41 =(buffer[25] == 'U');
boolean b25_42 =(buffer[25] == 'u');
boolean b25_43 =(buffer[25] == '5');
boolean b25_44 =(buffer[25] == 'v');
boolean b25_45 =(buffer[25] == 'k');
boolean b25_46 =(buffer[25] == '_');
boolean b25_47 =(buffer[25] == 'y');
boolean b25_48 =(buffer[25] == 'w');
boolean b25_49 =(buffer[25] == 'j');
boolean b25_50 =(buffer[25] == '6');
boolean b25_51 =(buffer[25] == ')');
boolean b25_52 =(buffer[25] == 'T');
boolean b25_53 =(buffer[25] == 'W');
boolean b25_54 =(buffer[25] == '-');
boolean b25_55 =(buffer[25] == ':');
boolean b25_56 =(buffer[25] == 'O');
boolean b25_57 =(buffer[25] == 'z');
boolean b25_58 =(buffer[25] == 'R');
boolean b25_59 =(buffer[25] == 'E');
boolean b25_60 =(buffer[25] == '4');
boolean b25_61 =(buffer[25] == 'B');
boolean b25_62 =(buffer[25] == '7');
boolean b25_63 =(buffer[25] == 'q');
boolean b25_64 =(buffer[25] == '&');
boolean b26_1 =(buffer[26] == 'v');
boolean b26_2 =(buffer[26] == '0');
boolean b26_3 =(buffer[26] == 'o');
boolean b26_4 =(buffer[26] == '/');
boolean b26_5 =(buffer[26] == 'D');
boolean b26_6 =(buffer[26] == 'E');
boolean b26_7 =(buffer[26] == '9');
boolean b26_8 =(buffer[26] == ' ');
boolean b26_9 =(buffer[26] == '3');
boolean b26_10 =(buffer[26] == '5');
boolean b26_11 =(buffer[26] == '|');
boolean b26_12 =(buffer[26] == 'F');
boolean b26_13 =(buffer[26] == '2');
boolean b26_14 =(buffer[26] == '8');
boolean b26_15 =(buffer[26] == '1');
boolean b26_16 =(buffer[26] == '4');
boolean b26_17 =(buffer[26] == 'B');
boolean b26_18 =(buffer[26] == 'A');
boolean b26_19 =(buffer[26] == 't');
boolean b26_20 =(buffer[26] == '!');
boolean b26_21 =(buffer[26] == '6');
boolean b26_22 =(buffer[26] == 'b');
boolean b26_23 =(buffer[26] == 'U');
boolean b26_24 =(buffer[26] == 'p');
boolean b26_25 =(buffer[26] == 'e');
boolean b26_26 =(buffer[26] == '.');
boolean b26_27 =(buffer[26] == 's');
boolean b26_28 =(buffer[26] == 'f');
boolean b26_29 =(buffer[26] == 'a');
boolean b26_30 =(buffer[26] == 'c');
boolean b26_31 =(buffer[26] == 'H');
boolean b26_32 =(buffer[26] == 'n');
boolean b26_33 =(buffer[26] == 'm');
boolean b26_34 =(buffer[26] == 'r');
boolean b26_35 =(buffer[26] == 'i');
boolean b26_36 =(buffer[26] == 'd');
boolean b26_37 =(buffer[26] == 'h');
boolean b26_38 =(buffer[26] == 'k');
boolean b26_39 =(buffer[26] == 'g');
boolean b26_40 =(buffer[26] == 'w');
boolean b26_41 =(buffer[26] == 'u');
boolean b26_42 =(buffer[26] == '%');
boolean b26_43 =(buffer[26] == 'y');
boolean b26_44 =(buffer[26] == 'S');
boolean b26_45 =(buffer[26] == 'l');
boolean b26_46 =(buffer[26] == '_');
boolean b26_47 =(buffer[26] == 'q');
boolean b26_48 =(buffer[26] == 'j');
boolean b26_49 =(buffer[26] == 'N');
boolean b26_50 =(buffer[26] == 'z');
boolean b26_51 =(buffer[26] == 'P');
boolean b26_52 =(buffer[26] == 'I');
boolean b26_53 =(buffer[26] == '*');
boolean b26_54 =(buffer[26] == ':');
boolean b26_55 =(buffer[26] == '7');
boolean b26_56 =(buffer[26] == 'G');
boolean b26_57 =(buffer[26] == '&');
boolean b26_58 =(buffer[26] == '?');
boolean b26_59 =(buffer[26] == '-');
boolean b26_60 =(buffer[26] == 'T');
boolean b26_61 =(buffer[26] == 'C');
boolean b26_62 =(buffer[26] == 'x');
boolean b26_63 =(buffer[26] == 'M');
boolean b27_1 =(buffer[27] == 'e');
boolean b27_2 =(buffer[27] == ' ');
boolean b27_3 =(buffer[27] == 'c');
boolean b27_4 =(buffer[27] == 's');
boolean b27_5 =(buffer[27] == 'B');
boolean b27_6 =(buffer[27] == '1');
boolean b27_7 =(buffer[27] == '0');
boolean b27_8 =(buffer[27] == '|');
boolean b27_9 =(buffer[27] == 'F');
boolean b27_10 =(buffer[27] == '/');
boolean b27_11 =(buffer[27] == '5');
boolean b27_12 =(buffer[27] == 'C');
boolean b27_13 =(buffer[27] == '3');
boolean b27_14 =(buffer[27] == '@');
boolean b27_15 =(buffer[27] == 'E');
boolean b27_16 =(buffer[27] == '.');
boolean b27_17 =(buffer[27] == 'd');
boolean b27_18 =(buffer[27] == 'i');
boolean b27_19 =(buffer[27] == 't');
boolean b27_20 =(buffer[27] == 'M');
boolean b27_21 =(buffer[27] == 'p');
boolean b27_22 =(buffer[27] == 'a');
boolean b27_23 =(buffer[27] == 'm');
boolean b27_24 =(buffer[27] == 'f');
boolean b27_25 =(buffer[27] == '8');
boolean b27_26 =(buffer[27] == 'x');
boolean b27_27 =(buffer[27] == '_');
boolean b27_28 =(buffer[27] == 'h');
boolean b27_29 =(buffer[27] == '2');
boolean b27_30 =(buffer[27] == 'w');
boolean b27_31 =(buffer[27] == 'l');
boolean b27_32 =(buffer[27] == 'A');
boolean b27_33 =(buffer[27] == 'r');
boolean b27_34 =(buffer[27] == 'S');
boolean b27_35 =(buffer[27] == 'k');
boolean b27_36 =(buffer[27] == 'o');
boolean b27_37 =(buffer[27] == 'n');
boolean b27_38 =(buffer[27] == '7');
boolean b27_39 =(buffer[27] == 'u');
boolean b27_40 =(buffer[27] == 'g');
boolean b27_41 =(buffer[27] == 'b');
boolean b27_42 =(buffer[27] == 'z');
boolean b27_43 =(buffer[27] == 'v');
boolean b27_44 =(buffer[27] == 'j');
boolean b27_45 =(buffer[27] == '4');
boolean b27_46 =(buffer[27] == '=');
boolean b27_47 =(buffer[27] == '(');
boolean b27_48 =(buffer[27] == '-');
boolean b27_49 =(buffer[27] == 'D');
boolean b27_50 =(buffer[27] == 'J');
boolean b27_51 =(buffer[27] == 'W');
boolean b27_52 =(buffer[27] == 'T');
boolean b27_53 =(buffer[27] == 'R');
boolean b27_54 =(buffer[27] == 'y');
boolean b27_55 =(buffer[27] == ':');
boolean b27_56 =(buffer[27] == 'N');
boolean b27_57 =(buffer[27] == 'U');
boolean b27_58 =(buffer[27] == 'X');
boolean b27_59 =(buffer[27] == '{');
boolean b27_60 =(buffer[27] == 'P');
boolean b28_1 =(buffer[28] == 's');
boolean b28_2 =(buffer[28] == '0');
boolean b28_3 =(buffer[28] == 'k');
boolean b28_4 =(buffer[28] == 'h');
boolean b28_5 =(buffer[28] == '8');
boolean b28_6 =(buffer[28] == '|');
boolean b28_7 =(buffer[28] == 'F');
boolean b28_8 =(buffer[28] == ' ');
boolean b28_9 =(buffer[28] == '2');
boolean b28_10 =(buffer[28] == 'C');
boolean b28_11 =(buffer[28] == 'A');
boolean b28_12 =(buffer[28] == '9');
boolean b28_13 =(buffer[28] == 'b');
boolean b28_14 =(buffer[28] == '?');
boolean b28_15 =(buffer[28] == 'B');
boolean b28_16 =(buffer[28] == 'E');
boolean b28_17 =(buffer[28] == '1');
boolean b28_18 =(buffer[28] == 'i');
boolean b28_19 =(buffer[28] == 'd');
boolean b28_20 =(buffer[28] == '3');
boolean b28_21 =(buffer[28] == 'e');
boolean b28_22 =(buffer[28] == '4');
boolean b28_23 =(buffer[28] == 'n');
boolean b28_24 =(buffer[28] == 'a');
boolean b28_25 =(buffer[28] == 'p');
boolean b28_26 =(buffer[28] == 'l');
boolean b28_27 =(buffer[28] == 'f');
boolean b28_28 =(buffer[28] == 'c');
boolean b28_29 =(buffer[28] == 'm');
boolean b28_30 =(buffer[28] == 't');
boolean b28_31 =(buffer[28] == 'o');
boolean b28_32 =(buffer[28] == '/');
boolean b28_33 =(buffer[28] == 'I');
boolean b28_34 =(buffer[28] == 'r');
boolean b28_35 =(buffer[28] == 'u');
boolean b28_36 =(buffer[28] == '+');
boolean b28_37 =(buffer[28] == '_');
boolean b28_38 =(buffer[28] == 'q');
boolean b28_39 =(buffer[28] == 'g');
boolean b28_40 =(buffer[28] == 'j');
boolean b28_41 =(buffer[28] == 'y');
boolean b28_42 =(buffer[28] == 'v');
boolean b28_43 =(buffer[28] == 'w');
boolean b28_44 =(buffer[28] == 'x');
boolean b28_45 =(buffer[28] == '.');
boolean b28_46 =(buffer[28] == '7');
boolean b28_47 =(buffer[28] == '=');
boolean b28_48 =(buffer[28] == 'z');
boolean b28_49 =(buffer[28] == 'W');
boolean b28_50 =(buffer[28] == 'P');
boolean b28_51 =(buffer[28] == '5');
boolean b28_52 =(buffer[28] == 'O');
boolean b28_53 =(buffer[28] == 'D');
boolean b28_54 =(buffer[28] == '>');
boolean b28_55 =(buffer[28] == ',');
boolean b28_56 =(buffer[28] == ':');
boolean b28_57 =(buffer[28] == 'H');
boolean b28_58 =(buffer[28] == '*');
boolean b28_59 =(buffer[28] == 'M');
boolean b28_60 =(buffer[28] == '6');
boolean b28_61 =(buffer[28] == '(');
boolean b28_62 =(buffer[28] == 'U');
boolean b28_63 =(buffer[28] == 'K');
boolean b28_64 =(buffer[28] == 'S');
boolean b28_65 =(buffer[28] == ')');
boolean b28_66 =(buffer[28] == 'G');
boolean b29_1 =(buffer[29] == '|');
boolean b29_2 =(buffer[29] == '0');
boolean b29_3 =(buffer[29] == 'i');
boolean b29_4 =(buffer[29] == 'L');
boolean b29_5 =(buffer[29] == '2');
boolean b29_6 =(buffer[29] == 'C');
boolean b29_7 =(buffer[29] == ' ');
boolean b29_8 =(buffer[29] == '8');
boolean b29_9 =(buffer[29] == 'B');
boolean b29_10 =(buffer[29] == '1');
boolean b29_11 =(buffer[29] == '9');
boolean b29_12 =(buffer[29] == 'F');
boolean b29_13 =(buffer[29] == 'A');
boolean b29_14 =(buffer[29] == 'D');
boolean b29_15 =(buffer[29] == 'G');
boolean b29_16 =(buffer[29] == 'n');
boolean b29_17 =(buffer[29] == '@');
boolean b29_18 =(buffer[29] == '/');
boolean b29_19 =(buffer[29] == 'r');
boolean b29_20 =(buffer[29] == '3');
boolean b29_21 =(buffer[29] == 'm');
boolean b29_22 =(buffer[29] == 'f');
boolean b29_23 =(buffer[29] == '.');
boolean b29_24 =(buffer[29] == 'p');
boolean b29_25 =(buffer[29] == 't');
boolean b29_26 =(buffer[29] == 'c');
boolean b29_27 =(buffer[29] == 'b');
boolean b29_28 =(buffer[29] == 'y');
boolean b29_29 =(buffer[29] == 'd');
boolean b29_30 =(buffer[29] == 'e');
boolean b29_31 =(buffer[29] == 'J');
boolean b29_32 =(buffer[29] == 'x');
boolean b29_33 =(buffer[29] == 'I');
boolean b29_34 =(buffer[29] == 'o');
boolean b29_35 =(buffer[29] == 's');
boolean b29_36 =(buffer[29] == 'M');
boolean b29_37 =(buffer[29] == 'u');
boolean b29_38 =(buffer[29] == '4');
boolean b29_39 =(buffer[29] == 'j');
boolean b29_40 =(buffer[29] == 'l');
boolean b29_41 =(buffer[29] == 'a');
boolean b29_42 =(buffer[29] == 'q');
boolean b29_43 =(buffer[29] == '_');
boolean b29_44 =(buffer[29] == 'v');
boolean b29_45 =(buffer[29] == 'h');
boolean b29_46 =(buffer[29] == 'g');
boolean b29_47 =(buffer[29] == 'w');
boolean b29_48 =(buffer[29] == '-');
boolean b29_49 =(buffer[29] == '5');
boolean b29_50 =(buffer[29] == 'N');
boolean b29_51 =(buffer[29] == 'W');
boolean b29_52 =(buffer[29] == '*');
boolean b29_53 =(buffer[29] == 'k');
boolean b29_54 =(buffer[29] == '#');
boolean b29_55 =(buffer[29] == 'z');
boolean b29_56 =(buffer[29] == 'P');
boolean b29_57 =(buffer[29] == 'E');
boolean b29_58 =(buffer[29] == '7');
boolean b29_59 =(buffer[29] == '(');
boolean b29_60 =(buffer[29] == 'S');
boolean b29_61 =(buffer[29] == '6');
boolean b29_62 =(buffer[29] == '?');
boolean b30_1 =(buffer[30] == '2');
boolean b30_2 =(buffer[30] == '|');
boolean b30_3 =(buffer[30] == 'n');
boolean b30_4 =(buffer[30] == '^');
boolean b30_5 =(buffer[30] == ' ');
boolean b30_6 =(buffer[30] == '6');
boolean b30_7 =(buffer[30] == '8');
boolean b30_8 =(buffer[30] == '9');
boolean b30_9 =(buffer[30] == '0');
boolean b30_10 =(buffer[30] == '3');
boolean b30_11 =(buffer[30] == 'H');
boolean b30_12 =(buffer[30] == 'c');
boolean b30_13 =(buffer[30] == 'i');
boolean b30_14 =(buffer[30] == '1');
boolean b30_15 =(buffer[30] == 's');
boolean b30_16 =(buffer[30] == 'l');
boolean b30_17 =(buffer[30] == 'o');
boolean b30_18 =(buffer[30] == 'r');
boolean b30_19 =(buffer[30] == 'e');
boolean b30_20 =(buffer[30] == 'u');
boolean b30_21 =(buffer[30] == 'm');
boolean b30_22 =(buffer[30] == '.');
boolean b30_23 =(buffer[30] == '/');
boolean b30_24 =(buffer[30] == 'p');
boolean b30_25 =(buffer[30] == 'V');
boolean b30_26 =(buffer[30] == 'h');
boolean b30_27 =(buffer[30] == 'a');
boolean b30_28 =(buffer[30] == 'F');
boolean b30_29 =(buffer[30] == 'd');
boolean b30_30 =(buffer[30] == 'B');
boolean b30_31 =(buffer[30] == 'A');
boolean b30_32 =(buffer[30] == 'v');
boolean b30_33 =(buffer[30] == '-');
boolean b30_34 =(buffer[30] == 'E');
boolean b30_35 =(buffer[30] == '_');
boolean b30_36 =(buffer[30] == 't');
boolean b30_37 =(buffer[30] == 'j');
boolean b30_38 =(buffer[30] == 'k');
boolean b30_39 =(buffer[30] == 'y');
boolean b30_40 =(buffer[30] == 'f');
boolean b30_41 =(buffer[30] == 'g');
boolean b30_42 =(buffer[30] == 'b');
boolean b30_43 =(buffer[30] == '%');
boolean b30_44 =(buffer[30] == 'D');
boolean b30_45 =(buffer[30] == 'z');
boolean b30_46 =(buffer[30] == 'T');
boolean b30_47 =(buffer[30] == 'S');
boolean b30_48 =(buffer[30] == 'w');
boolean b30_49 =(buffer[30] == ':');
boolean b30_50 =(buffer[30] == '*');
boolean b30_51 =(buffer[30] == 'C');
boolean b30_52 =(buffer[30] == '?');
boolean b30_53 =(buffer[30] == 'x');
boolean b30_54 =(buffer[30] == 'P');
boolean b30_55 =(buffer[30] == 'I');
boolean b30_56 =(buffer[30] == 'L');
boolean b30_57 =(buffer[30] == '=');
boolean b31_1 =(buffer[31] == '4');
boolean b31_2 =(buffer[31] == 'a');
boolean b31_3 =(buffer[31] == '1');
boolean b31_4 =(buffer[31] == '|');
boolean b31_5 =(buffer[31] == 'A');
boolean b31_6 =(buffer[31] == 'P');
boolean b31_7 =(buffer[31] == '9');
boolean b31_8 =(buffer[31] == 'f');
boolean b31_9 =(buffer[31] == '/');
boolean b31_10 =(buffer[31] == ' ');
boolean b31_11 =(buffer[31] == '0');
boolean b31_12 =(buffer[31] == 'I');
boolean b31_13 =(buffer[31] == '3');
boolean b31_14 =(buffer[31] == 'e');
boolean b31_15 =(buffer[31] == '2');
boolean b31_16 =(buffer[31] == 'F');
boolean b31_17 =(buffer[31] == '8');
boolean b31_18 =(buffer[31] == 'C');
boolean b31_19 =(buffer[31] == 'h');
boolean b31_20 =(buffer[31] == 'g');
boolean b31_21 =(buffer[31] == 'n');
boolean b31_22 =(buffer[31] == 'l');
boolean b31_23 =(buffer[31] == 'r');
boolean b31_24 =(buffer[31] == 'd');
boolean b31_25 =(buffer[31] == 'w');
boolean b31_26 =(buffer[31] == '.');
boolean b31_27 =(buffer[31] == 'p');
boolean b31_28 =(buffer[31] == 's');
boolean b31_29 =(buffer[31] == 'i');
boolean b31_30 =(buffer[31] == 'U');
boolean b31_31 =(buffer[31] == 'v');
boolean b31_32 =(buffer[31] == 't');
boolean b31_33 =(buffer[31] == '?');
boolean b31_34 =(buffer[31] == '6');
boolean b31_35 =(buffer[31] == 'k');
boolean b31_36 =(buffer[31] == 'x');
boolean b31_37 =(buffer[31] == 'u');
boolean b31_38 =(buffer[31] == 'o');
boolean b31_39 =(buffer[31] == '_');
boolean b31_40 =(buffer[31] == 'c');
boolean b31_41 =(buffer[31] == 'j');
boolean b31_42 =(buffer[31] == 'y');
boolean b31_43 =(buffer[31] == 'W');
boolean b31_44 =(buffer[31] == 'D');
boolean b31_45 =(buffer[31] == 'z');
boolean b31_46 =(buffer[31] == '7');
boolean b31_47 =(buffer[31] == '>');
boolean b31_48 =(buffer[31] == 'E');
boolean b31_49 =(buffer[31] == '(');
boolean b31_50 =(buffer[31] == '-');
boolean b31_51 =(buffer[31] == ':');
boolean b31_52 =(buffer[31] == '*');
boolean b31_53 =(buffer[31] == '=');
boolean b31_54 =(buffer[31] == 'M');
boolean b31_55 =(buffer[31] == 'm');
boolean b31_56 =(buffer[31] == 'B');
boolean b31_57 =(buffer[31] == '5');
boolean b31_58 =(buffer[31] == 'O');
boolean b32_1 =(buffer[32] == ' ');
boolean b32_2 =(buffer[32] == 'd');
boolean b32_3 =(buffer[32] == '|');
boolean b32_4 =(buffer[32] == 'B');
boolean b32_5 =(buffer[32] == 'C');
boolean b32_6 =(buffer[32] == 'F');
boolean b32_7 =(buffer[32] == '0');
boolean b32_8 =(buffer[32] == '1');
boolean b32_9 =(buffer[32] == 's');
boolean b32_10 =(buffer[32] == '6');
boolean b32_11 =(buffer[32] == 'P');
boolean b32_12 =(buffer[32] == '3');
boolean b32_13 =(buffer[32] == '9');
boolean b32_14 =(buffer[32] == '8');
boolean b32_15 =(buffer[32] == '2');
boolean b32_16 =(buffer[32] == 'A');
boolean b32_17 =(buffer[32] == '%');
boolean b32_18 =(buffer[32] == '4');
boolean b32_19 =(buffer[32] == ',');
boolean b32_20 =(buffer[32] == 't');
boolean b32_21 =(buffer[32] == '/');
boolean b32_22 =(buffer[32] == '.');
boolean b32_23 =(buffer[32] == 'm');
boolean b32_24 =(buffer[32] == 'o');
boolean b32_25 =(buffer[32] == 'e');
boolean b32_26 =(buffer[32] == 'y');
boolean b32_27 =(buffer[32] == 'i');
boolean b32_28 =(buffer[32] == 'a');
boolean b32_29 =(buffer[32] == 'h');
boolean b32_30 =(buffer[32] == 'V');
boolean b32_31 =(buffer[32] == 'p');
boolean b32_32 =(buffer[32] == 'D');
boolean b32_33 =(buffer[32] == 'x');
boolean b32_34 =(buffer[32] == 'c');
boolean b32_35 =(buffer[32] == '5');
boolean b32_36 =(buffer[32] == 'n');
boolean b32_37 =(buffer[32] == '_');
boolean b32_38 =(buffer[32] == 'g');
boolean b32_39 =(buffer[32] == 'v');
boolean b32_40 =(buffer[32] == 'r');
boolean b32_41 =(buffer[32] == 'u');
boolean b32_42 =(buffer[32] == 'l');
boolean b32_43 =(buffer[32] == 'f');
boolean b32_44 =(buffer[32] == 'w');
boolean b32_45 =(buffer[32] == 'b');
boolean b32_46 =(buffer[32] == ')');
boolean b32_47 =(buffer[32] == 'R');
boolean b32_48 =(buffer[32] == 'O');
boolean b32_49 =(buffer[32] == 'M');
boolean b32_50 =(buffer[32] == 'E');
boolean b32_51 =(buffer[32] == ':');
boolean b32_52 =(buffer[32] == '=');
boolean b32_53 =(buffer[32] == '*');
boolean b32_54 =(buffer[32] == 'S');
boolean b32_55 =(buffer[32] == 'W');
boolean b32_56 =(buffer[32] == 'T');
boolean b32_57 =(buffer[32] == '7');
boolean b32_58 =(buffer[32] == 'Z');
boolean b32_59 =(buffer[32] == 'Q');
boolean b33_1 =(buffer[33] == '0');
boolean b33_2 =(buffer[33] == 'd');
boolean b33_3 =(buffer[33] == 'C');
boolean b33_4 =(buffer[33] == '|');
boolean b33_5 =(buffer[33] == 'F');
boolean b33_6 =(buffer[33] == 'h');
boolean b33_7 =(buffer[33] == 'B');
boolean b33_8 =(buffer[33] == ' ');
boolean b33_9 =(buffer[33] == 'w');
boolean b33_10 =(buffer[33] == '6');
boolean b33_11 =(buffer[33] == 'o');
boolean b33_12 =(buffer[33] == '.');
boolean b33_13 =(buffer[33] == 'O');
boolean b33_14 =(buffer[33] == 'G');
boolean b33_15 =(buffer[33] == 'P');
boolean b33_16 =(buffer[33] == 'i');
boolean b33_17 =(buffer[33] == 'a');
boolean b33_18 =(buffer[33] == 'c');
boolean b33_19 =(buffer[33] == 'm');
boolean b33_20 =(buffer[33] == 'r');
boolean b33_21 =(buffer[33] == 'b');
boolean b33_22 =(buffer[33] == 's');
boolean b33_23 =(buffer[33] == 'x');
boolean b33_24 =(buffer[33] == 'l');
boolean b33_25 =(buffer[33] == 't');
boolean b33_26 =(buffer[33] == '9');
boolean b33_27 =(buffer[33] == '2');
boolean b33_28 =(buffer[33] == 'q');
boolean b33_29 =(buffer[33] == '/');
boolean b33_30 =(buffer[33] == '5');
boolean b33_31 =(buffer[33] == 'f');
boolean b33_32 =(buffer[33] == 'g');
boolean b33_33 =(buffer[33] == '_');
boolean b33_34 =(buffer[33] == 'e');
boolean b33_35 =(buffer[33] == 'n');
boolean b33_36 =(buffer[33] == 'y');
boolean b33_37 =(buffer[33] == 'u');
boolean b33_38 =(buffer[33] == 'p');
boolean b33_39 =(buffer[33] == 'v');
boolean b33_40 =(buffer[33] == 'j');
boolean b33_41 =(buffer[33] == '8');
boolean b33_42 =(buffer[33] == 'D');
boolean b33_43 =(buffer[33] == '3');
boolean b33_44 =(buffer[33] == 'N');
boolean b33_45 =(buffer[33] == '+');
boolean b33_46 =(buffer[33] == 'M');
boolean b33_47 =(buffer[33] == 'I');
boolean b33_48 =(buffer[33] == 'H');
boolean b33_49 =(buffer[33] == '*');
boolean b33_50 =(buffer[33] == 'U');
boolean b33_51 =(buffer[33] == '7');
boolean b33_52 =(buffer[33] == '=');
boolean b33_53 =(buffer[33] == '1');
boolean b33_54 =(buffer[33] == 'A');
boolean b33_55 =(buffer[33] == 'S');
boolean b33_56 =(buffer[33] == '4');
boolean b34_1 =(buffer[34] == '0');
boolean b34_2 =(buffer[34] == 'r');
boolean b34_3 =(buffer[34] == '|');
boolean b34_4 =(buffer[34] == '<');
boolean b34_5 =(buffer[34] == ' ');
boolean b34_6 =(buffer[34] == '7');
boolean b34_7 =(buffer[34] == '9');
boolean b34_8 =(buffer[34] == 'C');
boolean b34_9 =(buffer[34] == 'E');
boolean b34_10 =(buffer[34] == '1');
boolean b34_11 =(buffer[34] == '8');
boolean b34_12 =(buffer[34] == 'A');
boolean b34_13 =(buffer[34] == '3');
boolean b34_14 =(buffer[34] == '2');
boolean b34_15 =(buffer[34] == '=');
boolean b34_16 =(buffer[34] == 'o');
boolean b34_17 =(buffer[34] == 'p');
boolean b34_18 =(buffer[34] == 'f');
boolean b34_19 =(buffer[34] == 'd');
boolean b34_20 =(buffer[34] == 'c');
boolean b34_21 =(buffer[34] == 'l');
boolean b34_22 =(buffer[34] == 'a');
boolean b34_23 =(buffer[34] == 's');
boolean b34_24 =(buffer[34] == 'e');
boolean b34_25 =(buffer[34] == 'F');
boolean b34_26 =(buffer[34] == '&');
boolean b34_27 =(buffer[34] == 'D');
boolean b34_28 =(buffer[34] == 'b');
boolean b34_29 =(buffer[34] == 'w');
boolean b34_30 =(buffer[34] == 'g');
boolean b34_31 =(buffer[34] == 't');
boolean b34_32 =(buffer[34] == 'm');
boolean b34_33 =(buffer[34] == 'x');
boolean b34_34 =(buffer[34] == 'u');
boolean b34_35 =(buffer[34] == 'i');
boolean b34_36 =(buffer[34] == 'h');
boolean b34_37 =(buffer[34] == 'n');
boolean b34_38 =(buffer[34] == '_');
boolean b34_39 =(buffer[34] == 'y');
boolean b34_40 =(buffer[34] == 'v');
boolean b34_41 =(buffer[34] == 'k');
boolean b34_42 =(buffer[34] == 'O');
boolean b34_43 =(buffer[34] == 'B');
boolean b34_44 =(buffer[34] == 'T');
boolean b34_45 =(buffer[34] == 'z');
boolean b34_46 =(buffer[34] == '/');
boolean b34_47 =(buffer[34] == ')');
boolean b34_48 =(buffer[34] == ',');
boolean b34_49 =(buffer[34] == '5');
boolean b34_50 =(buffer[34] == '4');
boolean b34_51 =(buffer[34] == '.');
boolean b34_52 =(buffer[34] == '6');
boolean b34_53 =(buffer[34] == 'P');
boolean b35_1 =(buffer[35] == '|');
boolean b35_2 =(buffer[35] == 'i');
boolean b35_3 =(buffer[35] == '5');
boolean b35_4 =(buffer[35] == 'D');
boolean b35_5 =(buffer[35] == ' ');
boolean b35_6 =(buffer[35] == 'C');
boolean b35_7 =(buffer[35] == '0');
boolean b35_8 =(buffer[35] == '9');
boolean b35_9 =(buffer[35] == '+');
boolean b35_10 =(buffer[35] == '8');
boolean b35_11 =(buffer[35] == 'B');
boolean b35_12 =(buffer[35] == '3');
boolean b35_13 =(buffer[35] == 'A');
boolean b35_14 =(buffer[35] == '4');
boolean b35_15 =(buffer[35] == 'F');
boolean b35_16 =(buffer[35] == '6');
boolean b35_17 =(buffer[35] == '/');
boolean b35_18 =(buffer[35] == 't');
boolean b35_19 =(buffer[35] == 'w');
boolean b35_20 =(buffer[35] == 's');
boolean b35_21 =(buffer[35] == 'h');
boolean b35_22 =(buffer[35] == 'n');
boolean b35_23 =(buffer[35] == 'p');
boolean b35_24 =(buffer[35] == 'm');
boolean b35_25 =(buffer[35] == 'd');
boolean b35_26 =(buffer[35] == 'f');
boolean b35_27 =(buffer[35] == 'o');
boolean b35_28 =(buffer[35] == 'a');
boolean b35_29 =(buffer[35] == 'r');
boolean b35_30 =(buffer[35] == '1');
boolean b35_31 =(buffer[35] == 'l');
boolean b35_32 =(buffer[35] == '.');
boolean b35_33 =(buffer[35] == 'e');
boolean b35_34 =(buffer[35] == '_');
boolean b35_35 =(buffer[35] == 'g');
boolean b35_36 =(buffer[35] == 'c');
boolean b35_37 =(buffer[35] == 'v');
boolean b35_38 =(buffer[35] == '2');
boolean b35_39 =(buffer[35] == 'u');
boolean b35_40 =(buffer[35] == 'y');
boolean b35_41 =(buffer[35] == 'b');
boolean b35_42 =(buffer[35] == 'q');
boolean b35_43 =(buffer[35] == 'z');
boolean b35_44 =(buffer[35] == ':');
boolean b35_45 =(buffer[35] == ',');
boolean b35_46 =(buffer[35] == 'E');
boolean b35_47 =(buffer[35] == '7');
boolean b35_48 =(buffer[35] == 'M');
boolean b35_49 =(buffer[35] == 'k');
boolean b36_1 =(buffer[36] == 'n');
boolean b36_2 =(buffer[36] == 'F');
boolean b36_3 =(buffer[36] == '|');
boolean b36_4 =(buffer[36] == '0');
boolean b36_5 =(buffer[36] == 'D');
boolean b36_6 =(buffer[36] == ' ');
boolean b36_7 =(buffer[36] == 'b');
boolean b36_8 =(buffer[36] == '.');
boolean b36_9 =(buffer[36] == 'l');
boolean b36_10 =(buffer[36] == 'c');
boolean b36_11 =(buffer[36] == 'm');
boolean b36_12 =(buffer[36] == 's');
boolean b36_13 =(buffer[36] == 'p');
boolean b36_14 =(buffer[36] == '/');
boolean b36_15 =(buffer[36] == 't');
boolean b36_16 =(buffer[36] == 'I');
boolean b36_17 =(buffer[36] == 'd');
boolean b36_18 =(buffer[36] == 'C');
boolean b36_19 =(buffer[36] == 'i');
boolean b36_20 =(buffer[36] == 'a');
boolean b36_21 =(buffer[36] == '8');
boolean b36_22 =(buffer[36] == 'r');
boolean b36_23 =(buffer[36] == 'e');
boolean b36_24 =(buffer[36] == 'h');
boolean b36_25 =(buffer[36] == '_');
boolean b36_26 =(buffer[36] == 'o');
boolean b36_27 =(buffer[36] == 'k');
boolean b36_28 =(buffer[36] == 'u');
boolean b36_29 =(buffer[36] == 'g');
boolean b36_30 =(buffer[36] == 'v');
boolean b36_31 =(buffer[36] == 'j');
boolean b36_32 =(buffer[36] == 'w');
boolean b36_33 =(buffer[36] == 'A');
boolean b36_34 =(buffer[36] == '3');
boolean b36_35 =(buffer[36] == '=');
boolean b36_36 =(buffer[36] == '7');
boolean b36_37 =(buffer[36] == 'x');
boolean b36_38 =(buffer[36] == 'B');
boolean b36_39 =(buffer[36] == '5');
boolean b36_40 =(buffer[36] == '2');
boolean b36_41 =(buffer[36] == '+');
boolean b36_42 =(buffer[36] == '6');
boolean b36_43 =(buffer[36] == ',');
boolean b36_44 =(buffer[36] == '4');
boolean b36_45 =(buffer[36] == '-');
boolean b36_46 =(buffer[36] == ':');
boolean b36_47 =(buffer[36] == 'O');
boolean b36_48 =(buffer[36] == ')');
boolean b36_49 =(buffer[36] == 'U');
boolean b37_1 =(buffer[37] == 'y');
boolean b37_2 =(buffer[37] == 'E');
boolean b37_3 =(buffer[37] == ' ');
boolean b37_4 =(buffer[37] == '0');
boolean b37_5 =(buffer[37] == 'f');
boolean b37_6 =(buffer[37] == '2');
boolean b37_7 =(buffer[37] == 'F');
boolean b37_8 =(buffer[37] == '1');
boolean b37_9 =(buffer[37] == 'A');
boolean b37_10 =(buffer[37] == '|');
boolean b37_11 =(buffer[37] == '3');
boolean b37_12 =(buffer[37] == '!');
boolean b37_13 =(buffer[37] == '9');
boolean b37_14 =(buffer[37] == 'i');
boolean b37_15 =(buffer[37] == 'c');
boolean b37_16 =(buffer[37] == 'o');
boolean b37_17 =(buffer[37] == '.');
boolean b37_18 =(buffer[37] == 'V');
boolean b37_19 =(buffer[37] == 'u');
boolean b37_20 =(buffer[37] == 'n');
boolean b37_21 =(buffer[37] == 'e');
boolean b37_22 =(buffer[37] == 'S');
boolean b37_23 =(buffer[37] == 'p');
boolean b37_24 =(buffer[37] == '7');
boolean b37_25 =(buffer[37] == 'l');
boolean b37_26 =(buffer[37] == 'h');
boolean b37_27 =(buffer[37] == 's');
boolean b37_28 =(buffer[37] == 'a');
boolean b37_29 =(buffer[37] == '_');
boolean b37_30 =(buffer[37] == 't');
boolean b37_31 =(buffer[37] == 'r');
boolean b37_32 =(buffer[37] == 'g');
boolean b37_33 =(buffer[37] == 'v');
boolean b37_34 =(buffer[37] == 'q');
boolean b37_35 =(buffer[37] == 'd');
boolean b37_36 =(buffer[37] == 'b');
boolean b37_37 =(buffer[37] == 'm');
boolean b37_38 =(buffer[37] == 'w');
boolean b37_39 =(buffer[37] == 'B');
boolean b37_40 =(buffer[37] == '6');
boolean b37_41 =(buffer[37] == 'G');
boolean b37_42 =(buffer[37] == '/');
boolean b37_43 =(buffer[37] == 'M');
boolean b37_44 =(buffer[37] == '=');
boolean b37_45 =(buffer[37] == 'T');
boolean b37_46 =(buffer[37] == '*');
boolean b37_47 =(buffer[37] == ':');
boolean b37_48 =(buffer[37] == '-');
boolean b37_49 =(buffer[37] == '4');
boolean b37_50 =(buffer[37] == 'D');
boolean b37_51 =(buffer[37] == '8');
boolean b38_1 =(buffer[38] == 'e');
boolean b38_2 =(buffer[38] == '|');
boolean b38_3 =(buffer[38] == '2');
boolean b38_4 =(buffer[38] == '8');
boolean b38_5 =(buffer[38] == '0');
boolean b38_6 =(buffer[38] == '9');
boolean b38_7 =(buffer[38] == 'C');
boolean b38_8 =(buffer[38] == '4');
boolean b38_9 =(buffer[38] == 'D');
boolean b38_10 =(buffer[38] == 'B');
boolean b38_11 =(buffer[38] == 'A');
boolean b38_12 =(buffer[38] == 'w');
boolean b38_13 =(buffer[38] == 'F');
boolean b38_14 =(buffer[38] == '3');
boolean b38_15 =(buffer[38] == '6');
boolean b38_16 =(buffer[38] == 'n');
boolean b38_17 =(buffer[38] == 'f');
boolean b38_18 =(buffer[38] == 'c');
boolean b38_19 =(buffer[38] == 'a');
boolean b38_20 =(buffer[38] == 'i');
boolean b38_21 =(buffer[38] == 't');
boolean b38_22 =(buffer[38] == 's');
boolean b38_23 =(buffer[38] == '.');
boolean b38_24 =(buffer[38] == 'd');
boolean b38_25 =(buffer[38] == ' ');
boolean b38_26 =(buffer[38] == 'y');
boolean b38_27 =(buffer[38] == 'p');
boolean b38_28 =(buffer[38] == 'r');
boolean b38_29 =(buffer[38] == 'k');
boolean b38_30 =(buffer[38] == 'u');
boolean b38_31 =(buffer[38] == 'v');
boolean b38_32 =(buffer[38] == 'o');
boolean b38_33 =(buffer[38] == 'g');
boolean b38_34 =(buffer[38] == 'l');
boolean b38_35 =(buffer[38] == '_');
boolean b38_36 =(buffer[38] == 'j');
boolean b38_37 =(buffer[38] == 'b');
boolean b38_38 =(buffer[38] == 'm');
boolean b38_39 =(buffer[38] == 'h');
boolean b38_40 =(buffer[38] == '7');
boolean b38_41 =(buffer[38] == '5');
boolean b38_42 =(buffer[38] == '-');
boolean b38_43 =(buffer[38] == 'O');
boolean b38_44 =(buffer[38] == '1');
boolean b38_45 =(buffer[38] == '*');
boolean b38_46 =(buffer[38] == '/');
boolean b38_47 =(buffer[38] == '>');
boolean b38_48 =(buffer[38] == 'E');
boolean b38_49 =(buffer[38] == 'I');
boolean b38_50 =(buffer[38] == 'K');
boolean b39_1 =(buffer[39] == 'a');
boolean b39_2 =(buffer[39] == '3');
boolean b39_3 =(buffer[39] == 'P');
boolean b39_4 =(buffer[39] == '0');
boolean b39_5 =(buffer[39] == ' ');
boolean b39_6 =(buffer[39] == 'B');
boolean b39_7 =(buffer[39] == '|');
boolean b39_8 =(buffer[39] == '4');
boolean b39_9 =(buffer[39] == 'm');
boolean b39_10 =(buffer[39] == 't');
boolean b39_11 =(buffer[39] == 's');
boolean b39_12 =(buffer[39] == 'e');
boolean b39_13 =(buffer[39] == 'o');
boolean b39_14 =(buffer[39] == 'p');
boolean b39_15 =(buffer[39] == 'r');
boolean b39_16 =(buffer[39] == 'D');
boolean b39_17 =(buffer[39] == 'z');
boolean b39_18 =(buffer[39] == 'F');
boolean b39_19 =(buffer[39] == 'n');
boolean b39_20 =(buffer[39] == 'A');
boolean b39_21 =(buffer[39] == 'd');
boolean b39_22 =(buffer[39] == 'l');
boolean b39_23 =(buffer[39] == 'f');
boolean b39_24 =(buffer[39] == 'i');
boolean b39_25 =(buffer[39] == 'u');
boolean b39_26 =(buffer[39] == '_');
boolean b39_27 =(buffer[39] == 'j');
boolean b39_28 =(buffer[39] == 'v');
boolean b39_29 =(buffer[39] == 'h');
boolean b39_30 =(buffer[39] == 'b');
boolean b39_31 =(buffer[39] == 'c');
boolean b39_32 =(buffer[39] == 'y');
boolean b39_33 =(buffer[39] == 'g');
boolean b39_34 =(buffer[39] == '2');
boolean b39_35 =(buffer[39] == 'C');
boolean b39_36 =(buffer[39] == 'T');
boolean b39_37 =(buffer[39] == 'H');
boolean b39_38 =(buffer[39] == 'N');
boolean b39_39 =(buffer[39] == '/');
boolean b39_40 =(buffer[39] == ',');
boolean b39_41 =(buffer[39] == '7');
boolean b39_42 =(buffer[39] == '1');
boolean b39_43 =(buffer[39] == '*');
boolean b39_44 =(buffer[39] == 'W');
boolean b39_45 =(buffer[39] == 'M');
boolean b39_46 =(buffer[39] == '.');
boolean b39_47 =(buffer[39] == '5');
boolean b40_1 =(buffer[40] == 'h');
boolean b40_2 =(buffer[40] == ' ');
boolean b40_3 =(buffer[40] == '|');
boolean b40_4 =(buffer[40] == '0');
boolean b40_5 =(buffer[40] == '9');
boolean b40_6 =(buffer[40] == '1');
boolean b40_7 =(buffer[40] == 'C');
boolean b40_8 =(buffer[40] == 'A');
boolean b40_9 =(buffer[40] == '3');
boolean b40_10 =(buffer[40] == 'F');
boolean b40_11 =(buffer[40] == '2');
boolean b40_12 =(buffer[40] == '@');
boolean b40_13 =(buffer[40] == '_');
boolean b40_14 =(buffer[40] == 'o');
boolean b40_15 =(buffer[40] == 'e');
boolean b40_16 =(buffer[40] == 't');
boolean b40_17 =(buffer[40] == 'p');
boolean b40_18 =(buffer[40] == 'w');
boolean b40_19 =(buffer[40] == 'r');
boolean b40_20 =(buffer[40] == 'i');
boolean b40_21 =(buffer[40] == 's');
boolean b40_22 =(buffer[40] == '.');
boolean b40_23 =(buffer[40] == 'v');
boolean b40_24 =(buffer[40] == 'a');
boolean b40_25 =(buffer[40] == 'y');
boolean b40_26 =(buffer[40] == 'g');
boolean b40_27 =(buffer[40] == 'c');
boolean b40_28 =(buffer[40] == 'u');
boolean b40_29 =(buffer[40] == 'n');
boolean b40_30 =(buffer[40] == 'l');
boolean b40_31 =(buffer[40] == 'm');
boolean b40_32 =(buffer[40] == 'd');
boolean b40_33 =(buffer[40] == 'b');
boolean b40_34 =(buffer[40] == 'B');
boolean b40_35 =(buffer[40] == 'U');
boolean b40_36 =(buffer[40] == '=');
boolean b40_37 =(buffer[40] == 'W');
boolean b40_38 =(buffer[40] == 'D');
boolean b40_39 =(buffer[40] == 'T');
boolean b40_40 =(buffer[40] == ':');
boolean b40_41 =(buffer[40] == '/');
boolean b40_42 =(buffer[40] == '*');
boolean b40_43 =(buffer[40] == 'x');
boolean b40_44 =(buffer[40] == 'R');
boolean b40_45 =(buffer[40] == 'M');
boolean b40_46 =(buffer[40] == 'S');
boolean b40_47 =(buffer[40] == '4');
boolean b40_48 =(buffer[40] == '6');
boolean b40_49 =(buffer[40] == 'Z');
boolean b40_50 =(buffer[40] == 'f');
boolean b41_1 =(buffer[41] == 'y');
boolean b41_2 =(buffer[41] == 'B');
boolean b41_3 =(buffer[41] == '1');
boolean b41_4 =(buffer[41] == '0');
boolean b41_5 =(buffer[41] == ' ');
boolean b41_6 =(buffer[41] == 'D');
boolean b41_7 =(buffer[41] == '5');
boolean b41_8 =(buffer[41] == 'E');
boolean b41_9 =(buffer[41] == '9');
boolean b41_10 =(buffer[41] == 'A');
boolean b41_11 =(buffer[41] == '8');
boolean b41_12 =(buffer[41] == '2');
boolean b41_13 =(buffer[41] == '|');
boolean b41_14 =(buffer[41] == 'C');
boolean b41_15 =(buffer[41] == 'i');
boolean b41_16 =(buffer[41] == 'n');
boolean b41_17 =(buffer[41] == 'r');
boolean b41_18 =(buffer[41] == 'p');
boolean b41_19 =(buffer[41] == 'a');
boolean b41_20 =(buffer[41] == 'l');
boolean b41_21 =(buffer[41] == 'd');
boolean b41_22 =(buffer[41] == 'H');
boolean b41_23 =(buffer[41] == 'F');
boolean b41_24 =(buffer[41] == 'c');
boolean b41_25 =(buffer[41] == 'e');
boolean b41_26 =(buffer[41] == 't');
boolean b41_27 =(buffer[41] == '_');
boolean b41_28 =(buffer[41] == 'o');
boolean b41_29 =(buffer[41] == 'f');
boolean b41_30 =(buffer[41] == 'm');
boolean b41_31 =(buffer[41] == 'g');
boolean b41_32 =(buffer[41] == 'h');
boolean b41_33 =(buffer[41] == 's');
boolean b41_34 =(buffer[41] == 'j');
boolean b41_35 =(buffer[41] == 'w');
boolean b41_36 =(buffer[41] == '+');
boolean b41_37 =(buffer[41] == 'S');
boolean b41_38 =(buffer[41] == ',');
boolean b41_39 =(buffer[41] == '.');
boolean b41_40 =(buffer[41] == '4');
boolean b41_41 =(buffer[41] == '*');
boolean b41_42 =(buffer[41] == '3');
boolean b41_43 =(buffer[41] == '-');
boolean b41_44 =(buffer[41] == ':');
boolean b41_45 =(buffer[41] == 'u');
boolean b41_46 =(buffer[41] == 'I');
boolean b41_47 =(buffer[41] == '7');
boolean b41_48 =(buffer[41] == 'W');
boolean b41_49 =(buffer[41] == 'X');
boolean b42_1 =(buffer[42] == 'e');
boolean b42_2 =(buffer[42] == 'F');
boolean b42_3 =(buffer[42] == '|');
boolean b42_4 =(buffer[42] == ' ');
boolean b42_5 =(buffer[42] == '1');
boolean b42_6 =(buffer[42] == '2');
boolean b42_7 =(buffer[42] == '8');
boolean b42_8 =(buffer[42] == '0');
boolean b42_9 =(buffer[42] == 'o');
boolean b42_10 =(buffer[42] == 't');
boolean b42_11 =(buffer[42] == 'a');
boolean b42_12 =(buffer[42] == 's');
boolean b42_13 =(buffer[42] == 'D');
boolean b42_14 =(buffer[42] == 'y');
boolean b42_15 =(buffer[42] == 'O');
boolean b42_16 =(buffer[42] == 'i');
boolean b42_17 =(buffer[42] == 'r');
boolean b42_18 =(buffer[42] == 'u');
boolean b42_19 =(buffer[42] == 'n');
boolean b42_20 =(buffer[42] == 'v');
boolean b42_21 =(buffer[42] == 'f');
boolean b42_22 =(buffer[42] == 'p');
boolean b42_23 =(buffer[42] == 'b');
boolean b42_24 =(buffer[42] == 'k');
boolean b42_25 =(buffer[42] == 'h');
boolean b42_26 =(buffer[42] == 'w');
boolean b42_27 =(buffer[42] == 'S');
boolean b42_28 =(buffer[42] == '3');
boolean b42_29 =(buffer[42] == 'l');
boolean b42_30 =(buffer[42] == 'x');
boolean b42_31 =(buffer[42] == 'c');
boolean b42_32 =(buffer[42] == '5');
boolean b42_33 =(buffer[42] == '.');
boolean b42_34 =(buffer[42] == '/');
boolean b42_35 =(buffer[42] == 'C');
boolean b42_36 =(buffer[42] == 'B');
boolean b42_37 =(buffer[42] == 'T');
boolean b42_38 =(buffer[42] == 'I');
boolean b42_39 =(buffer[42] == 'E');
boolean b42_40 =(buffer[42] == 'A');
boolean b42_41 =(buffer[42] == '-');
boolean b42_42 =(buffer[42] == '(');
boolean b43_1 =(buffer[43] == 'a');
boolean b43_2 =(buffer[43] == ' ');
boolean b43_3 =(buffer[43] == 'C');
boolean b43_4 =(buffer[43] == '0');
boolean b43_5 =(buffer[43] == '1');
boolean b43_6 =(buffer[43] == 'A');
boolean b43_7 =(buffer[43] == 's');
boolean b43_8 =(buffer[43] == '3');
boolean b43_9 =(buffer[43] == '%');
boolean b43_10 =(buffer[43] == '4');
boolean b43_11 =(buffer[43] == '|');
boolean b43_12 =(buffer[43] == 'n');
boolean b43_13 =(buffer[43] == '.');
boolean b43_14 =(buffer[43] == 'd');
boolean b43_15 =(buffer[43] == 'l');
boolean b43_16 =(buffer[43] == 'p');
boolean b43_17 =(buffer[43] == 't');
boolean b43_18 =(buffer[43] == 'x');
boolean b43_19 =(buffer[43] == '9');
boolean b43_20 =(buffer[43] == 'S');
boolean b43_21 =(buffer[43] == 'F');
boolean b43_22 =(buffer[43] == 'r');
boolean b43_23 =(buffer[43] == 'e');
boolean b43_24 =(buffer[43] == '_');
boolean b43_25 =(buffer[43] == 'o');
boolean b43_26 =(buffer[43] == 'i');
boolean b43_27 =(buffer[43] == 'c');
boolean b43_28 =(buffer[43] == 'g');
boolean b43_29 =(buffer[43] == 'j');
boolean b43_30 =(buffer[43] == '2');
boolean b43_31 =(buffer[43] == 'm');
boolean b43_32 =(buffer[43] == 'u');
boolean b43_33 =(buffer[43] == 'w');
boolean b43_34 =(buffer[43] == 'U');
boolean b43_35 =(buffer[43] == 'B');
boolean b43_36 =(buffer[43] == '7');
boolean b43_37 =(buffer[43] == ':');
boolean b43_38 =(buffer[43] == '+');
boolean b43_39 =(buffer[43] == 'D');
boolean b43_40 =(buffer[43] == '*');
boolean b43_41 =(buffer[43] == 'y');
boolean b43_42 =(buffer[43] == 'h');
boolean b43_43 =(buffer[43] == 'E');
boolean b43_44 =(buffer[43] == '/');
boolean b43_45 =(buffer[43] == '5');
boolean b43_46 =(buffer[43] == '8');
boolean b43_47 =(buffer[43] == '6');
boolean b43_48 =(buffer[43] == 'T');
boolean b43_49 =(buffer[43] == '$');
boolean b44_1 =(buffer[44] == 'h');
boolean b44_2 =(buffer[44] == 'F');
boolean b44_3 =(buffer[44] == '0');
boolean b44_4 =(buffer[44] == '1');
boolean b44_5 =(buffer[44] == '|');
boolean b44_6 =(buffer[44] == 'E');
boolean b44_7 =(buffer[44] == '6');
boolean b44_8 =(buffer[44] == 'A');
boolean b44_9 =(buffer[44] == 'B');
boolean b44_10 =(buffer[44] == 'C');
boolean b44_11 =(buffer[44] == '9');
boolean b44_12 =(buffer[44] == '.');
boolean b44_13 =(buffer[44] == 'c');
boolean b44_14 =(buffer[44] == 'e');
boolean b44_15 =(buffer[44] == '/');
boolean b44_16 =(buffer[44] == 't');
boolean b44_17 =(buffer[44] == 'D');
boolean b44_18 =(buffer[44] == ' ');
boolean b44_19 =(buffer[44] == '5');
boolean b44_20 =(buffer[44] == 'f');
boolean b44_21 =(buffer[44] == 'x');
boolean b44_22 =(buffer[44] == 'T');
boolean b44_23 =(buffer[44] == 'r');
boolean b44_24 =(buffer[44] == 'i');
boolean b44_25 =(buffer[44] == 'a');
boolean b44_26 =(buffer[44] == 'd');
boolean b44_27 =(buffer[44] == 'o');
boolean b44_28 =(buffer[44] == 'n');
boolean b44_29 =(buffer[44] == 'k');
boolean b44_30 =(buffer[44] == 'u');
boolean b44_31 =(buffer[44] == 'g');
boolean b44_32 =(buffer[44] == 'p');
boolean b44_33 =(buffer[44] == '2');
boolean b44_34 =(buffer[44] == 'y');
boolean b44_35 =(buffer[44] == 'm');
boolean b44_36 =(buffer[44] == 'l');
boolean b44_37 =(buffer[44] == '=');
boolean b44_38 =(buffer[44] == 'W');
boolean b44_39 =(buffer[44] == 'U');
boolean b44_40 =(buffer[44] == '-');
boolean b44_41 =(buffer[44] == '7');
boolean b44_42 =(buffer[44] == '4');
boolean b44_43 =(buffer[44] == ')');
boolean b44_44 =(buffer[44] == '8');
boolean b44_45 =(buffer[44] == '_');
boolean b45_1 =(buffer[45] == 'i');
boolean b45_2 =(buffer[45] == '8');
boolean b45_3 =(buffer[45] == ' ');
boolean b45_4 =(buffer[45] == '|');
boolean b45_5 =(buffer[45] == '0');
boolean b45_6 =(buffer[45] == 'j');
boolean b45_7 =(buffer[45] == 'r');
boolean b45_8 =(buffer[45] == '_');
boolean b45_9 =(buffer[45] == 'l');
boolean b45_10 =(buffer[45] == 'f');
boolean b45_11 =(buffer[45] == 'c');
boolean b45_12 =(buffer[45] == '.');
boolean b45_13 =(buffer[45] == 'V');
boolean b45_14 =(buffer[45] == 'u');
boolean b45_15 =(buffer[45] == 'D');
boolean b45_16 =(buffer[45] == 'o');
boolean b45_17 =(buffer[45] == 'e');
boolean b45_18 =(buffer[45] == 'b');
boolean b45_19 =(buffer[45] == 'a');
boolean b45_20 =(buffer[45] == 'm');
boolean b45_21 =(buffer[45] == 'v');
boolean b45_22 =(buffer[45] == 't');
boolean b45_23 =(buffer[45] == 'n');
boolean b45_24 =(buffer[45] == 'p');
boolean b45_25 =(buffer[45] == 'g');
boolean b45_26 =(buffer[45] == ')');
boolean b45_27 =(buffer[45] == '3');
boolean b45_28 =(buffer[45] == ',');
boolean b45_29 =(buffer[45] == '2');
boolean b45_30 =(buffer[45] == 'O');
boolean b45_31 =(buffer[45] == '(');
boolean b45_32 =(buffer[45] == '-');
boolean b45_33 =(buffer[45] == '5');
boolean b45_34 =(buffer[45] == 'W');
boolean b45_35 =(buffer[45] == 'A');
boolean b45_36 =(buffer[45] == 'B');
boolean b45_37 =(buffer[45] == '1');
boolean b45_38 =(buffer[45] == 'E');
boolean b45_39 =(buffer[45] == '9');
boolean b45_40 =(buffer[45] == 'M');
boolean b45_41 =(buffer[45] == '6');
boolean b45_42 =(buffer[45] == 'P');
boolean b46_1 =(buffer[46] == 'k');
boolean b46_2 =(buffer[46] == '|');
boolean b46_3 =(buffer[46] == 'F');
boolean b46_4 =(buffer[46] == '0');
boolean b46_5 =(buffer[46] == '1');
boolean b46_6 =(buffer[46] == 'C');
boolean b46_7 =(buffer[46] == 'A');
boolean b46_8 =(buffer[46] == '3');
boolean b46_9 =(buffer[46] == ' ');
boolean b46_10 =(buffer[46] == 'f');
boolean b46_11 =(buffer[46] == 'm');
boolean b46_12 =(buffer[46] == 'a');
boolean b46_13 =(buffer[46] == 'i');
boolean b46_14 =(buffer[46] == 't');
boolean b46_15 =(buffer[46] == '9');
boolean b46_16 =(buffer[46] == 'e');
boolean b46_17 =(buffer[46] == 'n');
boolean b46_18 =(buffer[46] == 'l');
boolean b46_19 =(buffer[46] == 'v');
boolean b46_20 =(buffer[46] == '_');
boolean b46_21 =(buffer[46] == 'o');
boolean b46_22 =(buffer[46] == 'g');
boolean b46_23 =(buffer[46] == 'u');
boolean b46_24 =(buffer[46] == 'r');
boolean b46_25 =(buffer[46] == 'p');
boolean b46_26 =(buffer[46] == 'B');
boolean b46_27 =(buffer[46] == 'M');
boolean b46_28 =(buffer[46] == '=');
boolean b46_29 =(buffer[46] == '2');
boolean b46_30 =(buffer[46] == ':');
boolean b46_31 =(buffer[46] == 'w');
boolean b46_32 =(buffer[46] == 'W');
boolean b46_33 =(buffer[46] == 'c');
boolean b46_34 =(buffer[46] == 'L');
boolean b46_35 =(buffer[46] == 'D');
boolean b46_36 =(buffer[46] == '.');
boolean b46_37 =(buffer[46] == '7');
boolean b46_38 =(buffer[46] == '4');
boolean b46_39 =(buffer[46] == '6');
boolean b46_40 =(buffer[46] == '5');
boolean b46_41 =(buffer[46] == 'S');
boolean b46_42 =(buffer[46] == 'E');
boolean b46_43 =(buffer[46] == '-');
boolean b46_44 =(buffer[46] == 'O');
boolean b47_1 =(buffer[47] == 'n');
boolean b47_2 =(buffer[47] == 'E');
boolean b47_3 =(buffer[47] == '0');
boolean b47_4 =(buffer[47] == 'F');
boolean b47_5 =(buffer[47] == '7');
boolean b47_6 =(buffer[47] == 'B');
boolean b47_7 =(buffer[47] == 'D');
boolean b47_8 =(buffer[47] == 'A');
boolean b47_9 =(buffer[47] == '|');
boolean b47_10 =(buffer[47] == '6');
boolean b47_11 =(buffer[47] == '3');
boolean b47_12 =(buffer[47] == 'm');
boolean b47_13 =(buffer[47] == 's');
boolean b47_14 =(buffer[47] == 'e');
boolean b47_15 =(buffer[47] == 'o');
boolean b47_16 =(buffer[47] == ' ');
boolean b47_17 =(buffer[47] == '8');
boolean b47_18 =(buffer[47] == 'w');
boolean b47_19 =(buffer[47] == 'i');
boolean b47_20 =(buffer[47] == 'v');
boolean b47_21 =(buffer[47] == 'f');
boolean b47_22 =(buffer[47] == 'r');
boolean b47_23 =(buffer[47] == 'p');
boolean b47_24 =(buffer[47] == 'u');
boolean b47_25 =(buffer[47] == 'g');
boolean b47_26 =(buffer[47] == 'a');
boolean b47_27 =(buffer[47] == 'S');
boolean b47_28 =(buffer[47] == 'l');
boolean b47_29 =(buffer[47] == '2');
boolean b47_30 =(buffer[47] == '.');
boolean b47_31 =(buffer[47] == 'c');
boolean b47_32 =(buffer[47] == '/');
boolean b47_33 =(buffer[47] == '1');
boolean b47_34 =(buffer[47] == '4');
boolean b47_35 =(buffer[47] == 'C');
boolean b47_36 =(buffer[47] == 'I');
boolean b47_37 =(buffer[47] == 'd');
boolean b48_1 =(buffer[48] == 'o');
boolean b48_2 =(buffer[48] == ' ');
boolean b48_3 =(buffer[48] == '|');
boolean b48_4 =(buffer[48] == '0');
boolean b48_5 =(buffer[48] == 'p');
boolean b48_6 =(buffer[48] == 'w');
boolean b48_7 =(buffer[48] == 'r');
boolean b48_8 =(buffer[48] == '_');
boolean b48_9 =(buffer[48] == 'n');
boolean b48_10 =(buffer[48] == 'l');
boolean b48_11 =(buffer[48] == 'u');
boolean b48_12 =(buffer[48] == 'c');
boolean b48_13 =(buffer[48] == 'I');
boolean b48_14 =(buffer[48] == 'x');
boolean b48_15 =(buffer[48] == 'T');
boolean b48_16 =(buffer[48] == 't');
boolean b48_17 =(buffer[48] == '*');
boolean b48_18 =(buffer[48] == 'B');
boolean b48_19 =(buffer[48] == 'd');
boolean b48_20 =(buffer[48] == 'e');
boolean b48_21 =(buffer[48] == '4');
boolean b48_22 =(buffer[48] == 'm');
boolean b48_23 =(buffer[48] == 'A');
boolean b48_24 =(buffer[48] == 'J');
boolean b48_25 =(buffer[48] == 'a');
boolean b48_26 =(buffer[48] == '5');
boolean b48_27 =(buffer[48] == '3');
boolean b48_28 =(buffer[48] == 'E');
boolean b48_29 =(buffer[48] == '.');
boolean b48_30 =(buffer[48] == 'i');
boolean b48_31 =(buffer[48] == 'D');
boolean b48_32 =(buffer[48] == '2');
boolean b49_1 =(buffer[49] == 'w');
boolean b49_2 =(buffer[49] == 'C');
boolean b49_3 =(buffer[49] == '0');
boolean b49_4 =(buffer[49] == '|');
boolean b49_5 =(buffer[49] == '3');
boolean b49_6 =(buffer[49] == 'i');
boolean b49_7 =(buffer[49] == 'y');
boolean b49_8 =(buffer[49] == 'u');
boolean b49_9 =(buffer[49] == 'k');
boolean b49_10 =(buffer[49] == 'r');
boolean b49_11 =(buffer[49] == 'a');
boolean b49_12 =(buffer[49] == 'n');
boolean b49_13 =(buffer[49] == 'p');
boolean b49_14 =(buffer[49] == 'o');
boolean b49_15 =(buffer[49] == 'F');
boolean b49_16 =(buffer[49] == '5');
boolean b49_17 =(buffer[49] == 'M');
boolean b49_18 =(buffer[49] == 'E');
boolean b49_19 =(buffer[49] == '9');
boolean b49_20 =(buffer[49] == '>');
boolean b49_21 =(buffer[49] == 't');
boolean b49_22 =(buffer[49] == ' ');
boolean b49_23 =(buffer[49] == '/');
boolean b49_24 =(buffer[49] == 'g');
boolean b49_25 =(buffer[49] == 'c');
boolean b49_26 =(buffer[49] == 'A');
boolean b49_27 =(buffer[49] == 'O');
boolean b49_28 =(buffer[49] == 'D');
boolean b49_29 =(buffer[49] == 'd');
boolean b49_30 =(buffer[49] == 'U');
boolean b49_31 =(buffer[49] == 'B');
boolean b49_32 =(buffer[49] == '1');
boolean b49_33 =(buffer[49] == '4');
boolean b49_34 =(buffer[49] == '6');
boolean b49_35 =(buffer[49] == '2');
boolean b49_36 =(buffer[49] == ':');
boolean b49_37 =(buffer[49] == ')');
boolean b49_38 =(buffer[49] == 'N');
boolean b49_39 =(buffer[49] == 'm');
boolean b49_40 =(buffer[49] == '[');
boolean b50_1 =(buffer[50] == 't');
boolean b50_2 =(buffer[50] == '0');
boolean b50_3 =(buffer[50] == '1');
boolean b50_4 =(buffer[50] == 'A');
boolean b50_5 =(buffer[50] == 'o');
boolean b50_6 =(buffer[50] == 'd');
boolean b50_7 =(buffer[50] == 'a');
boolean b50_8 =(buffer[50] == 'l');
boolean b50_9 =(buffer[50] == '3');
boolean b50_10 =(buffer[50] == 'L');
boolean b50_11 =(buffer[50] == '2');
boolean b50_12 =(buffer[50] == ' ');
boolean b50_13 =(buffer[50] == 'p');
boolean b50_14 =(buffer[50] == 'v');
boolean b50_15 =(buffer[50] == 'u');
boolean b50_16 =(buffer[50] == 'c');
boolean b50_17 =(buffer[50] == 'e');
boolean b50_18 =(buffer[50] == 'F');
boolean b50_19 =(buffer[50] == 'C');
boolean b50_20 =(buffer[50] == 'S');
boolean b50_21 =(buffer[50] == '|');
boolean b50_22 =(buffer[50] == '<');
boolean b50_23 =(buffer[50] == '/');
boolean b50_24 =(buffer[50] == 'x');
boolean b50_25 =(buffer[50] == 's');
boolean b50_26 =(buffer[50] == '*');
boolean b50_27 =(buffer[50] == 'W');
boolean b50_28 =(buffer[50] == 'E');
boolean b50_29 =(buffer[50] == 'h');
boolean b50_30 =(buffer[50] == ',');
boolean b50_31 =(buffer[50] == 'U');
boolean b50_32 =(buffer[50] == 'i');
boolean b50_33 =(buffer[50] == 'I');
boolean b50_34 =(buffer[50] == ':');
boolean b50_35 =(buffer[50] == 'w');
boolean b50_36 =(buffer[50] == 'B');
boolean b50_37 =(buffer[50] == '6');
boolean b50_38 =(buffer[50] == '9');
boolean b50_39 =(buffer[50] == '5');
boolean b50_40 =(buffer[50] == 'T');
boolean b50_41 =(buffer[50] == '7');
boolean b50_42 =(buffer[50] == '.');
boolean b50_43 =(buffer[50] == 'g');
boolean b50_44 =(buffer[50] == '8');
boolean b51_1 =(buffer[51] == 'h');
boolean b51_2 =(buffer[51] == ' ');
boolean b51_3 =(buffer[51] == '|');
boolean b51_4 =(buffer[51] == '0');
boolean b51_5 =(buffer[51] == 'd');
boolean b51_6 =(buffer[51] == 'l');
boolean b51_7 =(buffer[51] == 'C');
boolean b51_8 =(buffer[51] == 'o');
boolean b51_9 =(buffer[51] == 'p');
boolean b51_10 =(buffer[51] == 'I');
boolean b51_11 =(buffer[51] == '9');
boolean b51_12 =(buffer[51] == '2');
boolean b51_13 =(buffer[51] == '/');
boolean b51_14 =(buffer[51] == 'a');
boolean b51_15 =(buffer[51] == '8');
boolean b51_16 =(buffer[51] == 'c');
boolean b51_17 =(buffer[51] == 'i');
boolean b51_18 =(buffer[51] == 'N');
boolean b51_19 =(buffer[51] == 'B');
boolean b51_20 =(buffer[51] == 't');
boolean b51_21 =(buffer[51] == 'e');
boolean b51_22 =(buffer[51] == 'A');
boolean b51_23 =(buffer[51] == 's');
boolean b51_24 =(buffer[51] == 'H');
boolean b51_25 =(buffer[51] == 'n');
boolean b51_26 =(buffer[51] == 'D');
boolean b51_27 =(buffer[51] == 'W');
boolean b51_28 =(buffer[51] == '.');
boolean b51_29 =(buffer[51] == '1');
boolean b51_30 =(buffer[51] == ':');
boolean b51_31 =(buffer[51] == '7');
boolean b52_1 =(buffer[52] == 'i');
boolean b52_2 =(buffer[52] == 'C');
boolean b52_3 =(buffer[52] == ' ');
boolean b52_4 =(buffer[52] == '0');
boolean b52_5 =(buffer[52] == '|');
boolean b52_6 =(buffer[52] == 'e');
boolean b52_7 =(buffer[52] == '/');
boolean b52_8 =(buffer[52] == 'V');
boolean b52_9 =(buffer[52] == 'o');
boolean b52_10 =(buffer[52] == 'r');
boolean b52_11 =(buffer[52] == 'd');
boolean b52_12 =(buffer[52] == 'F');
boolean b52_13 =(buffer[52] == '2');
boolean b52_14 =(buffer[52] == 'E');
boolean b52_15 =(buffer[52] == '.');
boolean b52_16 =(buffer[52] == '9');
boolean b52_17 =(buffer[52] == 't');
boolean b52_18 =(buffer[52] == '6');
boolean b52_19 =(buffer[52] == 'n');
boolean b52_20 =(buffer[52] == '3');
boolean b52_21 =(buffer[52] == 'm');
boolean b52_22 =(buffer[52] == '*');
boolean b52_23 =(buffer[52] == 'g');
boolean b52_24 =(buffer[52] == 'p');
boolean b52_25 =(buffer[52] == 'c');
boolean b52_26 =(buffer[52] == 'A');
boolean b52_27 =(buffer[52] == '1');
boolean b52_28 =(buffer[52] == '5');
boolean b52_29 =(buffer[52] == '7');
boolean b52_30 =(buffer[52] == '4');
boolean b52_31 =(buffer[52] == 'B');
boolean b52_32 =(buffer[52] == ')');
boolean b52_33 =(buffer[52] == '8');
boolean b53_1 =(buffer[53] == 's');
boolean b53_2 =(buffer[53] == 'D');
boolean b53_3 =(buffer[53] == ' ');
boolean b53_4 =(buffer[53] == '0');
boolean b53_5 =(buffer[53] == 'N');
boolean b53_6 =(buffer[53] == '.');
boolean b53_7 =(buffer[53] == 'V');
boolean b53_8 =(buffer[53] == '1');
boolean b53_9 =(buffer[53] == 'S');
boolean b53_10 =(buffer[53] == 'a');
boolean b53_11 =(buffer[53] == 'e');
boolean b53_12 =(buffer[53] == 'F');
boolean b53_13 =(buffer[53] == '2');
boolean b53_14 =(buffer[53] == 'f');
boolean b53_15 =(buffer[53] == 'm');
boolean b53_16 =(buffer[53] == 't');
boolean b53_17 =(buffer[53] == '|');
boolean b53_18 =(buffer[53] == 'i');
boolean b53_19 =(buffer[53] == 'H');
boolean b53_20 =(buffer[53] == 'A');
boolean b53_21 =(buffer[53] == 'o');
boolean b53_22 =(buffer[53] == 'B');
boolean b53_23 =(buffer[53] == '+');
boolean b53_24 =(buffer[53] == 'b');
boolean b53_25 =(buffer[53] == 'c');
boolean b53_26 =(buffer[53] == '#');
boolean b53_27 =(buffer[53] == 'l');
boolean b53_28 =(buffer[53] == 'n');
boolean b53_29 =(buffer[53] == '-');
boolean b53_30 =(buffer[53] == 'd');
boolean b53_31 =(buffer[53] == ':');
boolean b53_32 =(buffer[53] == 'W');
boolean b53_33 =(buffer[53] == '4');
boolean b53_34 =(buffer[53] == '8');
boolean b53_35 =(buffer[53] == '6');
boolean b53_36 =(buffer[53] == '7');
boolean b53_37 =(buffer[53] == 'E');
boolean b53_38 =(buffer[53] == 'p');
boolean b53_39 =(buffer[53] == ')');
boolean b54_1 =(buffer[54] == 'i');
boolean b54_2 =(buffer[54] == ' ');
boolean b54_3 =(buffer[54] == '|');
boolean b54_4 =(buffer[54] == 'a');
boolean b54_5 =(buffer[54] == '0');
boolean b54_6 =(buffer[54] == 'd');
boolean b54_7 =(buffer[54] == '.');
boolean b54_8 =(buffer[54] == '9');
boolean b54_9 =(buffer[54] == 'r');
boolean b54_10 =(buffer[54] == 'l');
boolean b54_11 =(buffer[54] == '/');
boolean b54_12 =(buffer[54] == '2');
boolean b54_13 =(buffer[54] == 'p');
boolean b54_14 =(buffer[54] == 't');
boolean b54_15 =(buffer[54] == '5');
boolean b54_16 =(buffer[54] == 's');
boolean b54_17 =(buffer[54] == 'n');
boolean b54_18 =(buffer[54] == '3');
boolean b54_19 =(buffer[54] == ':');
boolean b54_20 =(buffer[54] == '-');
boolean b54_21 =(buffer[54] == 'e');
boolean b54_22 =(buffer[54] == 'o');
boolean b54_23 =(buffer[54] == 'T');
boolean b54_24 =(buffer[54] == 'E');
boolean b54_25 =(buffer[54] == 'H');
boolean b54_26 =(buffer[54] == 'W');
boolean b54_27 =(buffer[54] == 'b');
boolean b54_28 =(buffer[54] == 'A');
boolean b54_29 =(buffer[54] == '6');
boolean b54_30 =(buffer[54] == '1');
boolean b54_31 =(buffer[54] == 'G');
boolean b54_32 =(buffer[54] == 'D');
boolean b54_33 =(buffer[54] == 'c');
boolean b55_1 =(buffer[55] == 's');
boolean b55_2 =(buffer[55] == '8');
boolean b55_3 =(buffer[55] == ' ');
boolean b55_4 =(buffer[55] == '0');
boolean b55_5 =(buffer[55] == 'b');
boolean b55_6 =(buffer[55] == 'l');
boolean b55_7 =(buffer[55] == 'C');
boolean b55_8 =(buffer[55] == 'e');
boolean b55_9 =(buffer[55] == 'L');
boolean b55_10 =(buffer[55] == 'i');
boolean b55_11 =(buffer[55] == '.');
boolean b55_12 =(buffer[55] == 'c');
boolean b55_13 =(buffer[55] == 'd');
boolean b55_14 =(buffer[55] == '3');
boolean b55_15 =(buffer[55] == 'D');
boolean b55_16 =(buffer[55] == 'a');
boolean b55_17 =(buffer[55] == '|');
boolean b55_18 =(buffer[55] == 'f');
boolean b55_19 =(buffer[55] == '9');
boolean b55_20 =(buffer[55] == 't');
boolean b55_21 =(buffer[55] == '1');
boolean b55_22 =(buffer[55] == 'n');
boolean b55_23 =(buffer[55] == '2');
boolean b55_24 =(buffer[55] == 'v');
boolean b55_25 =(buffer[55] == 'B');
boolean b55_26 =(buffer[55] == 'E');
boolean b55_27 =(buffer[55] == 'p');
boolean b55_28 =(buffer[55] == ':');
boolean b55_29 =(buffer[55] == 'o');
boolean b55_30 =(buffer[55] == 'w');
boolean b55_31 =(buffer[55] == 'F');
boolean b55_32 =(buffer[55] == 'g');
boolean b55_33 =(buffer[55] == '5');
boolean b55_34 =(buffer[55] == '4');
boolean b56_1 =(buffer[56] == 'l');
boolean b56_2 =(buffer[56] == '0');
boolean b56_3 =(buffer[56] == '|');
boolean b56_4 =(buffer[56] == 'p');
boolean b56_5 =(buffer[56] == 'w');
boolean b56_6 =(buffer[56] == ' ');
boolean b56_7 =(buffer[56] == 'n');
boolean b56_8 =(buffer[56] == 'h');
boolean b56_9 =(buffer[56] == 'o');
boolean b56_10 =(buffer[56] == '8');
boolean b56_11 =(buffer[56] == 'f');
boolean b56_12 =(buffer[56] == 'B');
boolean b56_13 =(buffer[56] == 'm');
boolean b56_14 =(buffer[56] == '3');
boolean b56_15 =(buffer[56] == 's');
boolean b56_16 =(buffer[56] == 'A');
boolean b56_17 =(buffer[56] == '2');
boolean b56_18 =(buffer[56] == 'r');
boolean b56_19 =(buffer[56] == 'E');
boolean b56_20 =(buffer[56] == 'e');
boolean b56_21 =(buffer[56] == ':');
boolean b56_22 =(buffer[56] == 't');
boolean b56_23 =(buffer[56] == 'i');
boolean b56_24 =(buffer[56] == 'c');
boolean b56_25 =(buffer[56] == '/');
boolean b56_26 =(buffer[56] == 'z');
boolean b56_27 =(buffer[56] == 'U');
boolean b56_28 =(buffer[56] == 'd');
boolean b56_29 =(buffer[56] == '5');
boolean b56_30 =(buffer[56] == '4');
boolean b56_31 =(buffer[56] == '7');
boolean b56_32 =(buffer[56] == 'F');
boolean b56_33 =(buffer[56] == 'W');
boolean b56_34 =(buffer[56] == 'C');
boolean b56_35 =(buffer[56] == '1');
boolean b56_36 =(buffer[56] == '6');
boolean b57_1 =(buffer[57] == 'a');
boolean b57_2 =(buffer[57] == ' ');
boolean b57_3 =(buffer[57] == '0');
boolean b57_4 =(buffer[57] == '|');
boolean b57_5 =(buffer[57] == 'C');
boolean b57_6 =(buffer[57] == 't');
boolean b57_7 =(buffer[57] == 'm');
boolean b57_8 =(buffer[57] == 'r');
boolean b57_9 =(buffer[57] == 'e');
boolean b57_10 =(buffer[57] == 'B');
boolean b57_11 =(buffer[57] == '/');
boolean b57_12 =(buffer[57] == '.');
boolean b57_13 =(buffer[57] == 'x');
boolean b57_14 =(buffer[57] == 'd');
boolean b57_15 =(buffer[57] == 'c');
boolean b57_16 =(buffer[57] == '2');
boolean b57_17 =(buffer[57] == 'q');
boolean b57_18 =(buffer[57] == '3');
boolean b57_19 =(buffer[57] == '-');
boolean b57_20 =(buffer[57] == '9');
boolean b57_21 =(buffer[57] == 'o');
boolean b57_22 =(buffer[57] == 'i');
boolean b57_23 =(buffer[57] == 's');
boolean b57_24 =(buffer[57] == 'n');
boolean b57_25 =(buffer[57] == 'k');
boolean b57_26 =(buffer[57] == 'A');
boolean b58_1 =(buffer[58] == 'm');
boolean b58_2 =(buffer[58] == 'E');
boolean b58_3 =(buffer[58] == '2');
boolean b58_4 =(buffer[58] == '0');
boolean b58_5 =(buffer[58] == 'T');
boolean b58_6 =(buffer[58] == 'o');
boolean b58_7 =(buffer[58] == '/');
boolean b58_8 =(buffer[58] == 's');
boolean b58_9 =(buffer[58] == '|');
boolean b58_10 =(buffer[58] == 'F');
boolean b58_11 =(buffer[58] == 'a');
boolean b58_12 =(buffer[58] == '3');
boolean b58_13 =(buffer[58] == ' ');
boolean b58_14 =(buffer[58] == 'A');
boolean b58_15 =(buffer[58] == '>');
boolean b58_16 =(buffer[58] == 'd');
boolean b58_17 =(buffer[58] == 'W');
boolean b58_18 =(buffer[58] == 'L');
boolean b58_19 =(buffer[58] == 'r');
boolean b58_20 =(buffer[58] == 'i');
boolean b58_21 =(buffer[58] == 't');
boolean b58_22 =(buffer[58] == 'e');
boolean b58_23 =(buffer[58] == '=');
boolean b58_24 =(buffer[58] == 'B');
boolean b58_25 =(buffer[58] == 'n');
boolean b58_26 =(buffer[58] == 'h');
boolean b58_27 =(buffer[58] == 'N');
boolean b58_28 =(buffer[58] == ':');
boolean b58_29 =(buffer[58] == 'c');
boolean b58_30 =(buffer[58] == 'p');
boolean b58_31 =(buffer[58] == 'w');
boolean b58_32 =(buffer[58] == '4');
boolean b58_33 =(buffer[58] == '9');
boolean b58_34 =(buffer[58] == 'b');
boolean b59_1 =(buffer[59] == 'e');
boolean b59_2 =(buffer[59] == '8');
boolean b59_3 =(buffer[59] == '|');
boolean b59_4 =(buffer[59] == '0');
boolean b59_5 =(buffer[59] == 'd');
boolean b59_6 =(buffer[59] == ' ');
boolean b59_7 =(buffer[59] == 'F');
boolean b59_8 =(buffer[59] == 'm');
boolean b59_9 =(buffer[59] == 'B');
boolean b59_10 =(buffer[59] == 'W');
boolean b59_11 =(buffer[59] == 'q');
boolean b59_12 =(buffer[59] == '-');
boolean b59_13 =(buffer[59] == 'i');
boolean b59_14 =(buffer[59] == 'O');
boolean b59_15 =(buffer[59] == '3');
boolean b59_16 =(buffer[59] == ')');
boolean b59_17 =(buffer[59] == 't');
boolean b59_18 =(buffer[59] == '.');
boolean b59_19 =(buffer[59] == 'n');
boolean b59_20 =(buffer[59] == 'D');
boolean b59_21 =(buffer[59] == '/');
boolean b59_22 =(buffer[59] == 'T');
boolean b59_23 =(buffer[59] == 'w');
boolean b59_24 =(buffer[59] == ',');
boolean b59_25 =(buffer[59] == 'r');
boolean b59_26 =(buffer[59] == 's');
boolean b59_27 =(buffer[59] == ':');
boolean b59_28 =(buffer[59] == '1');
boolean b59_29 =(buffer[59] == 'N');
boolean b59_30 =(buffer[59] == 'E');
boolean b59_31 =(buffer[59] == '7');
boolean b59_32 =(buffer[59] == 'C');
boolean b59_33 =(buffer[59] == '4');
boolean b59_34 =(buffer[59] == 'K');
boolean b60_1 =(buffer[60] == 'b');
boolean b60_2 =(buffer[60] == ' ');
boolean b60_3 =(buffer[60] == 'a');
boolean b60_4 =(buffer[60] == '|');
boolean b60_5 =(buffer[60] == '0');
boolean b60_6 =(buffer[60] == 'e');
boolean b60_7 =(buffer[60] == 'A');
boolean b60_8 =(buffer[60] == 'i');
boolean b60_9 =(buffer[60] == '=');
boolean b60_10 =(buffer[60] == 'd');
boolean b60_11 =(buffer[60] == 'f');
boolean b60_12 =(buffer[60] == 'n');
boolean b60_13 =(buffer[60] == 'C');
boolean b60_14 =(buffer[60] == 'B');
boolean b60_15 =(buffer[60] == 'v');
boolean b60_16 =(buffer[60] == 'o');
boolean b60_17 =(buffer[60] == '2');
boolean b60_18 =(buffer[60] == 'c');
boolean b60_19 =(buffer[60] == '(');
boolean b60_20 =(buffer[60] == 'D');
boolean b60_21 =(buffer[60] == 'x');
boolean b60_22 =(buffer[60] == '-');
boolean b60_23 =(buffer[60] == 'F');
boolean b60_24 =(buffer[60] == 's');
boolean b60_25 =(buffer[60] == '4');
boolean b60_26 =(buffer[60] == 'T');
boolean b60_27 =(buffer[60] == 'r');
boolean b60_28 =(buffer[60] == '6');
boolean b60_29 =(buffer[60] == 'y');
boolean b60_30 =(buffer[60] == 'h');
boolean b61_1 =(buffer[61] == 'u');
boolean b61_2 =(buffer[61] == '9');
boolean b61_3 =(buffer[61] == '0');
boolean b61_4 =(buffer[61] == '|');
boolean b61_5 =(buffer[61] == 'P');
boolean b61_6 =(buffer[61] == '.');
boolean b61_7 =(buffer[61] == 'E');
boolean b61_8 =(buffer[61] == 'D');
boolean b61_9 =(buffer[61] == ' ');
boolean b61_10 =(buffer[61] == 'b');
boolean b61_11 =(buffer[61] == 'n');
boolean b61_12 =(buffer[61] == 'a');
boolean b61_13 =(buffer[61] == 'H');
boolean b61_14 =(buffer[61] == 'K');
boolean b61_15 =(buffer[61] == 'o');
boolean b61_16 =(buffer[61] == '2');
boolean b61_17 =(buffer[61] == ')');
boolean b61_18 =(buffer[61] == 'M');
boolean b61_19 =(buffer[61] == '-');
boolean b61_20 =(buffer[61] == 'k');
boolean b61_21 =(buffer[61] == 's');
boolean b61_22 =(buffer[61] == 'g');
boolean b61_23 =(buffer[61] == '6');
boolean b61_24 =(buffer[61] == 't');
boolean b61_25 =(buffer[61] == 'd');
boolean b61_26 =(buffer[61] == 'A');
boolean b61_27 =(buffer[61] == 'N');
boolean b61_28 =(buffer[61] == '7');
boolean b61_29 =(buffer[61] == '3');
boolean b61_30 =(buffer[61] == '4');
boolean b61_31 =(buffer[61] == 'r');
boolean b61_32 =(buffer[61] == 'm');
boolean b61_33 =(buffer[61] == 'B');
boolean b62_1 =(buffer[62] == 't');
boolean b62_2 =(buffer[62] == '4');
boolean b62_3 =(buffer[62] == '|');
boolean b62_4 =(buffer[62] == '0');
boolean b62_5 =(buffer[62] == 'a');
boolean b62_6 =(buffer[62] == ' ');
boolean b62_7 =(buffer[62] == 'o');
boolean b62_8 =(buffer[62] == 'W');
boolean b62_9 =(buffer[62] == 'd');
boolean b62_10 =(buffer[62] == '.');
boolean b62_11 =(buffer[62] == 'u');
boolean b62_12 =(buffer[62] == 'E');
boolean b62_13 =(buffer[62] == 'h');
boolean b62_14 =(buffer[62] == 'l');
boolean b62_15 =(buffer[62] == 'n');
boolean b62_16 =(buffer[62] == ':');
boolean b62_17 =(buffer[62] == 'D');
boolean b62_18 =(buffer[62] == 'S');
boolean b62_19 =(buffer[62] == 'g');
boolean b62_20 =(buffer[62] == 'A');
boolean b62_21 =(buffer[62] == 'w');
boolean b62_22 =(buffer[62] == 'i');
boolean b62_23 =(buffer[62] == 'N');
boolean b62_24 =(buffer[62] == '-');
boolean b62_25 =(buffer[62] == 'e');
boolean b62_26 =(buffer[62] == 'T');
boolean b62_27 =(buffer[62] == '6');
boolean b62_28 =(buffer[62] == '5');
boolean b62_29 =(buffer[62] == '3');
boolean b62_30 =(buffer[62] == 'B');
boolean b62_31 =(buffer[62] == '/');
boolean b62_32 =(buffer[62] == 'm');
boolean b62_33 =(buffer[62] == '1');
boolean b62_34 =(buffer[62] == 'C');
boolean b63_1 =(buffer[63] == 'a');
boolean b63_2 =(buffer[63] == ' ');
boolean b63_3 =(buffer[63] == '0');
boolean b63_4 =(buffer[63] == 's');
boolean b63_5 =(buffer[63] == 'D');
boolean b63_6 =(buffer[63] == 'r');
boolean b63_7 =(buffer[63] == 'i');
boolean b63_8 =(buffer[63] == 'o');
boolean b63_9 =(buffer[63] == '9');
boolean b63_10 =(buffer[63] == 'l');
boolean b63_11 =(buffer[63] == 't');
boolean b63_12 =(buffer[63] == 'e');
boolean b63_13 =(buffer[63] == 'u');
boolean b63_14 =(buffer[63] == '+');
boolean b63_15 =(buffer[63] == 'G');
boolean b63_16 =(buffer[63] == 'I');
boolean b63_17 =(buffer[63] == ':');
boolean b63_18 =(buffer[63] == '|');
boolean b63_19 =(buffer[63] == 'A');
boolean b63_20 =(buffer[63] == 'w');
boolean b63_21 =(buffer[63] == 'p');
boolean b63_22 =(buffer[63] == '1');
boolean b63_23 =(buffer[63] == 'T');
boolean b63_24 =(buffer[63] == 'f');
boolean b63_25 =(buffer[63] == '5');
boolean b63_26 =(buffer[63] == '.');
boolean b63_27 =(buffer[63] == 'd');
boolean b64_1 =(buffer[64] == 'n');
boolean b64_2 =(buffer[64] == 'F');
boolean b64_3 =(buffer[64] == '|');
boolean b64_4 =(buffer[64] == '0');
boolean b64_5 =(buffer[64] == 'p');
boolean b64_6 =(buffer[64] == '5');
boolean b64_7 =(buffer[64] == 'd');
boolean b64_8 =(buffer[64] == 'w');
boolean b64_9 =(buffer[64] == ',');
boolean b64_10 =(buffer[64] == 't');
boolean b64_11 =(buffer[64] == 'i');
boolean b64_12 =(buffer[64] == 'e');
boolean b64_13 =(buffer[64] == 'Y');
boolean b64_14 =(buffer[64] == 'K');
boolean b64_15 =(buffer[64] == 'E');
boolean b64_16 =(buffer[64] == ' ');
boolean b64_17 =(buffer[64] == 'l');
boolean b64_18 =(buffer[64] == 'U');
boolean b64_19 =(buffer[64] == '.');
boolean b64_20 =(buffer[64] == 'g');
boolean b64_21 =(buffer[64] == '6');
boolean b64_22 =(buffer[64] == 'C');
boolean b64_23 =(buffer[64] == '3');
boolean b64_24 =(buffer[64] == '2');
boolean b64_25 =(buffer[64] == 's');
boolean b64_26 =(buffer[64] == 'h');
boolean b64_27 =(buffer[64] == '4');
boolean b64_28 =(buffer[64] == '9');
boolean b65_1 =(buffer[65] == 'y');
boolean b65_2 =(buffer[65] == 'F');
boolean b65_3 =(buffer[65] == '0');
boolean b65_4 =(buffer[65] == 'r');
boolean b65_5 =(buffer[65] == '|');
boolean b65_6 =(buffer[65] == ' ');
boolean b65_7 =(buffer[65] == '[');
boolean b65_8 =(buffer[65] == 'f');
boolean b65_9 =(buffer[65] == 'e');
boolean b65_10 =(buffer[65] == 'd');
boolean b65_11 =(buffer[65] == 's');
boolean b65_12 =(buffer[65] == 't');
boolean b65_13 =(buffer[65] == '3');
boolean b65_14 =(buffer[65] == 'R');
boolean b65_15 =(buffer[65] == 'g');
boolean b65_16 =(buffer[65] == 'x');
boolean b65_17 =(buffer[65] == '2');
boolean b65_18 =(buffer[65] == 'c');
boolean b65_19 =(buffer[65] == 'A');
boolean b65_20 =(buffer[65] == 'i');
boolean b65_21 =(buffer[65] == ')');
boolean b65_22 =(buffer[65] == '-');
boolean b65_23 =(buffer[65] == 'a');
boolean b65_24 =(buffer[65] == 'E');
boolean b65_25 =(buffer[65] == '6');
boolean b65_26 =(buffer[65] == '.');
boolean b65_27 =(buffer[65] == '7');
boolean b65_28 =(buffer[65] == 'B');
boolean b65_29 =(buffer[65] == 'u');
boolean b65_30 =(buffer[65] == 'n');
boolean b65_31 =(buffer[65] == '1');
boolean b65_32 =(buffer[65] == 'o');
boolean b65_33 =(buffer[65] == 'D');
boolean b66_1 =(buffer[66] == 'w');
boolean b66_2 =(buffer[66] == ' ');
boolean b66_3 =(buffer[66] == '0');
boolean b66_4 =(buffer[66] == '|');
boolean b66_5 =(buffer[66] == 'h');
boolean b66_6 =(buffer[66] == 'C');
boolean b66_7 =(buffer[66] == 'r');
boolean b66_8 =(buffer[66] == 'o');
boolean b66_9 =(buffer[66] == 'e');
boolean b66_10 =(buffer[66] == 'B');
boolean b66_11 =(buffer[66] == '.');
boolean b66_12 =(buffer[66] == '(');
boolean b66_13 =(buffer[66] == '2');
boolean b66_14 =(buffer[66] == 'k');
boolean b66_15 =(buffer[66] == '7');
boolean b66_16 =(buffer[66] == 'd');
boolean b66_17 =(buffer[66] == ':');
boolean b66_18 =(buffer[66] == 'f');
boolean b66_19 =(buffer[66] == 'y');
boolean b66_20 =(buffer[66] == 'm');
boolean b66_21 =(buffer[66] == 't');
boolean b66_22 =(buffer[66] == '1');
boolean b66_23 =(buffer[66] == '6');
boolean b66_24 =(buffer[66] == 'N');
boolean b66_25 =(buffer[66] == 'A');
boolean b67_1 =(buffer[67] == 'a');
boolean b67_2 =(buffer[67] == 'F');
boolean b67_3 =(buffer[67] == '|');
boolean b67_4 =(buffer[67] == '0');
boolean b67_5 =(buffer[67] == ' ');
boolean b67_6 =(buffer[67] == '=');
boolean b67_7 =(buffer[67] == 'w');
boolean b67_8 =(buffer[67] == 'N');
boolean b67_9 =(buffer[67] == 'x');
boolean b67_10 =(buffer[67] == 'j');
boolean b67_11 =(buffer[67] == 'q');
boolean b67_12 =(buffer[67] == 't');
boolean b67_13 =(buffer[67] == '3');
boolean b67_14 =(buffer[67] == 'p');
boolean b67_15 =(buffer[67] == 'o');
boolean b67_16 =(buffer[67] == 'C');
boolean b67_17 =(buffer[67] == '.');
boolean b67_18 =(buffer[67] == 'e');
boolean b67_19 =(buffer[67] == 'r');
boolean b67_20 =(buffer[67] == 'n');
boolean b67_21 =(buffer[67] == '2');
boolean b67_22 =(buffer[67] == '6');
boolean b67_23 =(buffer[67] == '4');
boolean b67_24 =(buffer[67] == 'D');
boolean b67_25 =(buffer[67] == '/');
boolean b67_26 =(buffer[67] == 'T');
boolean b67_27 =(buffer[67] == '1');
boolean b67_28 =(buffer[67] == 'A');
boolean b67_29 =(buffer[67] == 'B');
boolean b68_1 =(buffer[68] == 'y');
boolean b68_2 =(buffer[68] == 'F');
boolean b68_3 =(buffer[68] == '1');
boolean b68_4 =(buffer[68] == '0');
boolean b68_5 =(buffer[68] == ' ');
boolean b68_6 =(buffer[68] == '|');
boolean b68_7 =(buffer[68] == 's');
boolean b68_8 =(buffer[68] == 'T');
boolean b68_9 =(buffer[68] == 't');
boolean b68_10 =(buffer[68] == 'u');
boolean b68_11 =(buffer[68] == 'B');
boolean b68_12 =(buffer[68] == '-');
boolean b68_13 =(buffer[68] == 'E');
boolean b68_14 =(buffer[68] == '/');
boolean b68_15 =(buffer[68] == 'o');
boolean b68_16 =(buffer[68] == 'n');
boolean b68_17 =(buffer[68] == 'i');
boolean b68_18 =(buffer[68] == 'D');
boolean b68_19 =(buffer[68] == 'r');
boolean b68_20 =(buffer[68] == 'd');
boolean b68_21 =(buffer[68] == 'm');
boolean b68_22 =(buffer[68] == 'M');
boolean b68_23 =(buffer[68] == '3');
boolean b68_24 =(buffer[68] == '4');
boolean b68_25 =(buffer[68] == '7');
boolean b68_26 =(buffer[68] == '6');
boolean b68_27 =(buffer[68] == 'U');
boolean b68_28 =(buffer[68] == 'a');
boolean b68_29 =(buffer[68] == '5');
boolean b68_30 =(buffer[68] == '2');
boolean b68_31 =(buffer[68] == '9');
boolean b68_32 =(buffer[68] == 'C');
boolean b69_1 =(buffer[69] == 'w');
boolean b69_2 =(buffer[69] == ' ');
boolean b69_3 =(buffer[69] == '|');
boolean b69_4 =(buffer[69] == '0');
boolean b69_5 =(buffer[69] == '6');
boolean b69_6 =(buffer[69] == 't');
boolean b69_7 =(buffer[69] == '5');
boolean b69_8 =(buffer[69] == '/');
boolean b69_9 =(buffer[69] == 'b');
boolean b69_10 =(buffer[69] == 'e');
boolean b69_11 =(buffer[69] == '3');
boolean b69_12 =(buffer[69] == 'A');
boolean b69_13 =(buffer[69] == '2');
boolean b69_14 =(buffer[69] == 'n');
boolean b69_15 =(buffer[69] == 'd');
boolean b69_16 =(buffer[69] == 'm');
boolean b69_17 =(buffer[69] == 'D');
boolean b69_18 =(buffer[69] == 'i');
boolean b69_19 =(buffer[69] == 'p');
boolean b69_20 =(buffer[69] == 'o');
boolean b69_21 =(buffer[69] == 'B');
boolean b69_22 =(buffer[69] == '.');
boolean b69_23 =(buffer[69] == 'F');
boolean b69_24 =(buffer[69] == 's');
boolean b70_1 =(buffer[70] == 'h');
boolean b70_2 =(buffer[70] == 'F');
boolean b70_3 =(buffer[70] == '0');
boolean b70_4 =(buffer[70] == 't');
boolean b70_5 =(buffer[70] == '|');
boolean b70_6 =(buffer[70] == ' ');
boolean b70_7 =(buffer[70] == ']');
boolean b70_8 =(buffer[70] == 'o');
boolean b70_9 =(buffer[70] == 'C');
boolean b70_10 =(buffer[70] == 'N');
boolean b70_11 =(buffer[70] == '9');
boolean b70_12 =(buffer[70] == 'p');
boolean b70_13 =(buffer[70] == '2');
boolean b70_14 =(buffer[70] == 's');
boolean b70_15 =(buffer[70] == 'A');
boolean b70_16 =(buffer[70] == 'l');
boolean b70_17 =(buffer[70] == 'a');
boolean b70_18 =(buffer[70] == 'n');
boolean b70_19 =(buffer[70] == '3');
boolean b70_20 =(buffer[70] == 'i');
boolean b70_21 =(buffer[70] == 'e');
boolean b70_22 =(buffer[70] == 'g');
boolean b70_23 =(buffer[70] == '-');
boolean b70_24 =(buffer[70] == 'R');
boolean b70_25 =(buffer[70] == 'B');
boolean b70_26 =(buffer[70] == 'D');
boolean b70_27 =(buffer[70] == 'z');
boolean b70_28 =(buffer[70] == '6');
boolean b70_29 =(buffer[70] == '4');
boolean b70_30 =(buffer[70] == 'c');
boolean b70_31 =(buffer[70] == '(');
boolean b70_32 =(buffer[70] == '.');
boolean b70_33 =(buffer[70] == 'E');
boolean b71_1 =(buffer[71] == 'o');
boolean b71_2 =(buffer[71] == 'F');
boolean b71_3 =(buffer[71] == '0');
boolean b71_4 =(buffer[71] == '|');
boolean b71_5 =(buffer[71] == '.');
boolean b71_6 =(buffer[71] == ' ');
boolean b71_7 =(buffer[71] == 'T');
boolean b71_8 =(buffer[71] == 'l');
boolean b71_9 =(buffer[71] == 'u');
boolean b71_10 =(buffer[71] == '2');
boolean b71_11 =(buffer[71] == 't');
boolean b71_12 =(buffer[71] == 'e');
boolean b71_13 =(buffer[71] == 'i');
boolean b71_14 =(buffer[71] == '1');
boolean b71_15 =(buffer[71] == 'B');
boolean b71_16 =(buffer[71] == 'n');
boolean b71_17 =(buffer[71] == 'A');
boolean b71_18 =(buffer[71] == 'y');
boolean b71_19 =(buffer[71] == '-');
boolean b71_20 =(buffer[71] == 'D');
boolean b71_21 =(buffer[71] == '7');
boolean b71_22 =(buffer[71] == '9');
boolean b71_23 =(buffer[71] == 'K');
boolean b71_24 =(buffer[71] == 'r');
boolean b71_25 =(buffer[71] == '5');
boolean b72_1 =(buffer[72] == 'c');
boolean b72_2 =(buffer[72] == '|');
boolean b72_3 =(buffer[72] == '0');
boolean b72_4 =(buffer[72] == '8');
boolean b72_5 =(buffer[72] == ' ');
boolean b72_6 =(buffer[72] == '2');
boolean b72_7 =(buffer[72] == 'a');
boolean b72_8 =(buffer[72] == 'n');
boolean b72_9 =(buffer[72] == '.');
boolean b72_10 =(buffer[72] == '1');
boolean b72_11 =(buffer[72] == 'v');
boolean b72_12 =(buffer[72] == 'y');
boolean b72_13 =(buffer[72] == 't');
boolean b72_14 =(buffer[72] == 'r');
boolean b72_15 =(buffer[72] == 'o');
boolean b72_16 =(buffer[72] == 'A');
boolean b72_17 =(buffer[72] == 'B');
boolean b72_18 =(buffer[72] == 'l');
boolean b72_19 =(buffer[72] == 'T');
boolean b72_20 =(buffer[72] == 'H');
boolean b72_21 =(buffer[72] == '3');
boolean b72_22 =(buffer[72] == 's');
boolean b72_23 =(buffer[72] == 'e');
boolean b72_24 =(buffer[72] == '-');
boolean b72_25 =(buffer[72] == ')');
boolean b73_1 =(buffer[73] == 'a');
boolean b73_2 =(buffer[73] == '/');
boolean b73_3 =(buffer[73] == '3');
boolean b73_4 =(buffer[73] == '0');
boolean b73_5 =(buffer[73] == '|');
boolean b73_6 =(buffer[73] == '2');
boolean b73_7 =(buffer[73] == '9');
boolean b73_8 =(buffer[73] == 'i');
boolean b73_9 =(buffer[73] == 'd');
boolean b73_10 =(buffer[73] == '>');
boolean b73_11 =(buffer[73] == '5');
boolean b73_12 =(buffer[73] == 'p');
boolean b73_13 =(buffer[73] == 'e');
boolean b73_14 =(buffer[73] == '+');
boolean b73_15 =(buffer[73] == 't');
boolean b73_16 =(buffer[73] == ' ');
boolean b73_17 =(buffer[73] == 'l');
boolean b73_18 =(buffer[73] == 'r');
boolean b73_19 =(buffer[73] == 'R');
boolean b73_20 =(buffer[73] == 'T');
boolean b73_21 =(buffer[73] == 'A');
boolean b73_22 =(buffer[73] == '4');
boolean b73_23 =(buffer[73] == 'C');
boolean b73_24 =(buffer[73] == 'B');
boolean b73_25 =(buffer[73] == 'f');
boolean b73_26 =(buffer[73] == 'E');
boolean b74_1 =(buffer[74] == 'r');
boolean b74_2 =(buffer[74] == 'b');
boolean b74_3 =(buffer[74] == '|');
boolean b74_4 =(buffer[74] == '0');
boolean b74_5 =(buffer[74] == '+');
boolean b74_6 =(buffer[74] == ' ');
boolean b74_7 =(buffer[74] == '.');
boolean b74_8 =(buffer[74] == '3');
boolean b74_9 =(buffer[74] == 'n');
boolean b74_10 =(buffer[74] == 'a');
boolean b74_11 =(buffer[74] == '<');
boolean b74_12 =(buffer[74] == ')');
boolean b74_13 =(buffer[74] == 'x');
boolean b74_14 =(buffer[74] == '2');
boolean b74_15 =(buffer[74] == '1');
boolean b74_16 =(buffer[74] == 'i');
boolean b74_17 =(buffer[74] == 'W');
boolean b74_18 =(buffer[74] == 't');
boolean b74_19 =(buffer[74] == ':');
boolean b74_20 =(buffer[74] == 'e');
boolean b74_21 =(buffer[74] == 'g');
boolean b74_22 =(buffer[74] == 'H');
boolean b74_23 =(buffer[74] == 'D');
boolean b74_24 =(buffer[74] == 'A');
boolean b74_25 =(buffer[74] == '4');
boolean b74_26 =(buffer[74] == 'M');
boolean b74_27 =(buffer[74] == 'B');
boolean b74_28 =(buffer[74] == 'o');
boolean b74_29 =(buffer[74] == 'E');
boolean b75_1 =(buffer[75] == 'e');
boolean b75_2 =(buffer[75] == 'i');
boolean b75_3 =(buffer[75] == '0');
boolean b75_4 =(buffer[75] == '|');
boolean b75_5 =(buffer[75] == ' ');
boolean b75_6 =(buffer[75] == 'r');
boolean b75_7 =(buffer[75] == 'n');
boolean b75_8 =(buffer[75] == 'B');
boolean b75_9 =(buffer[75] == '/');
boolean b75_10 =(buffer[75] == '}');
boolean b75_11 =(buffer[75] == '9');
boolean b75_12 =(buffer[75] == '2');
boolean b75_13 =(buffer[75] == 'o');
boolean b75_14 =(buffer[75] == 'D');
boolean b75_15 =(buffer[75] == 'y');
boolean b75_16 =(buffer[75] == '3');
boolean b75_17 =(buffer[75] == 'U');
boolean b75_18 =(buffer[75] == 'd');
boolean b75_19 =(buffer[75] == 't');
boolean b75_20 =(buffer[75] == 'L');
boolean b75_21 =(buffer[75] == 'x');
boolean b76_1 =(buffer[76] == 's');
boolean b76_2 =(buffer[76] == 'n');
boolean b76_3 =(buffer[76] == '0');
boolean b76_4 =(buffer[76] == '8');
boolean b76_5 =(buffer[76] == '|');
boolean b76_6 =(buffer[76] == 'o');
boolean b76_7 =(buffer[76] == '3');
boolean b76_8 =(buffer[76] == 'y');
boolean b76_9 =(buffer[76] == '<');
boolean b76_10 =(buffer[76] == 'D');
boolean b76_11 =(buffer[76] == '2');
boolean b76_12 =(buffer[76] == '1');
boolean b76_13 =(buffer[76] == ' ');
boolean b76_14 =(buffer[76] == 'M');
boolean b76_15 =(buffer[76] == 'c');
boolean b76_16 =(buffer[76] == 'B');
boolean b76_17 =(buffer[76] == 'd');
boolean b76_18 =(buffer[76] == 'H');
boolean b76_19 =(buffer[76] == '5');
boolean b76_20 =(buffer[76] == 'e');
boolean b76_21 =(buffer[76] == '4');
boolean b76_22 =(buffer[76] == 'C');
boolean b76_23 =(buffer[76] == ',');
boolean b76_24 =(buffer[76] == 'S');
boolean b76_25 =(buffer[76] == '/');
boolean b77_1 =(buffer[77] == 'h');
boolean b77_2 =(buffer[77] == '/');
boolean b77_3 =(buffer[77] == '|');
boolean b77_4 =(buffer[77] == '6');
boolean b77_5 =(buffer[77] == ' ');
boolean b77_6 =(buffer[77] == '8');
boolean b77_7 =(buffer[77] == '0');
boolean b77_8 =(buffer[77] == '3');
boolean b77_9 =(buffer[77] == 'B');
boolean b77_10 =(buffer[77] == '=');
boolean b77_11 =(buffer[77] == 'c');
boolean b77_12 =(buffer[77] == ':');
boolean b77_13 =(buffer[77] == 'd');
boolean b77_14 =(buffer[77] == 'o');
boolean b77_15 =(buffer[77] == 'D');
boolean b77_16 =(buffer[77] == 't');
boolean b77_17 =(buffer[77] == 'A');
boolean b77_18 =(buffer[77] == 'e');
boolean b77_19 =(buffer[77] == '.');
boolean b77_20 =(buffer[77] == 'n');
boolean b77_21 =(buffer[77] == '7');
boolean b77_22 =(buffer[77] == 'F');
boolean b77_23 =(buffer[77] == 'L');
boolean b77_24 =(buffer[77] == 'S');
boolean b77_25 =(buffer[77] == '9');
boolean b78_1 =(buffer[78] == 'o');
boolean b78_2 =(buffer[78] == 's');
boolean b78_3 =(buffer[78] == '8');
boolean b78_4 =(buffer[78] == ' ');
boolean b78_5 =(buffer[78] == '0');
boolean b78_6 =(buffer[78] == '5');
boolean b78_7 =(buffer[78] == 'B');
boolean b78_8 =(buffer[78] == 'e');
boolean b78_9 =(buffer[78] == '|');
boolean b78_10 =(buffer[78] == 'r');
boolean b78_11 =(buffer[78] == 'P');
boolean b78_12 =(buffer[78] == 'l');
boolean b78_13 =(buffer[78] == 'F');
boolean b78_14 =(buffer[78] == 'A');
boolean b78_15 =(buffer[78] == 'D');
boolean b78_16 =(buffer[78] == 'z');
boolean b78_17 =(buffer[78] == 'd');
boolean b78_18 =(buffer[78] == ':');
boolean b78_19 =(buffer[78] == 'n');
boolean b78_20 =(buffer[78] == 't');
boolean b78_21 =(buffer[78] == 'C');
boolean b78_22 =(buffer[78] == 'V');
boolean b78_23 =(buffer[78] == '.');
boolean b79_1 =(buffer[79] == 'r');
boolean b79_2 =(buffer[79] == 'h');
boolean b79_3 =(buffer[79] == '|');
boolean b79_4 =(buffer[79] == '0');
boolean b79_5 =(buffer[79] == 'C');
boolean b79_6 =(buffer[79] == 'n');
boolean b79_7 =(buffer[79] == 'q');
boolean b79_8 =(buffer[79] == 'i');
boolean b79_9 =(buffer[79] == 't');
boolean b79_10 =(buffer[79] == 'A');
boolean b79_11 =(buffer[79] == 'c');
boolean b79_12 =(buffer[79] == 'w');
boolean b79_13 =(buffer[79] == ' ');
boolean b79_14 =(buffer[79] == 'e');
boolean b79_15 =(buffer[79] == 'U');
boolean b79_16 =(buffer[79] == '-');
boolean b79_17 =(buffer[79] == '/');
boolean b79_18 =(buffer[79] == '4');
boolean b79_19 =(buffer[79] == '1');
boolean b80_1 =(buffer[80] == 'i');
boolean b80_2 =(buffer[80] == '|');
boolean b80_3 =(buffer[80] == '0');
boolean b80_4 =(buffer[80] == '1');
boolean b80_5 =(buffer[80] == ' ');
boolean b80_6 =(buffer[80] == 'D');
boolean b80_7 =(buffer[80] == '-');
boolean b80_8 =(buffer[80] == '=');
boolean b80_9 =(buffer[80] == 'p');
boolean b80_10 =(buffer[80] == 'y');
boolean b80_11 =(buffer[80] == 'e');
boolean b80_12 =(buffer[80] == '2');
boolean b80_13 =(buffer[80] == 'd');
boolean b80_14 =(buffer[80] == 'r');
boolean b80_15 =(buffer[80] == 'l');
boolean b80_16 =(buffer[80] == 's');
boolean b80_17 =(buffer[80] == 'U');
boolean b80_18 =(buffer[80] == 'A');
boolean b80_19 =(buffer[80] == 'v');
boolean b80_20 =(buffer[80] == '/');
boolean b80_21 =(buffer[80] == ':');
boolean b80_22 =(buffer[80] == '5');
boolean b80_23 =(buffer[80] == '7');
boolean b80_24 =(buffer[80] == '8');
boolean b80_25 =(buffer[80] == 'k');
boolean b80_26 =(buffer[80] == ')');
boolean b80_27 =(buffer[80] == '.');
boolean b80_28 =(buffer[80] == 'M');
boolean b80_29 =(buffer[80] == '9');
boolean b81_1 =(buffer[81] == 'z');
boolean b81_2 =(buffer[81] == '0');
boolean b81_3 =(buffer[81] == ' ');
boolean b81_4 =(buffer[81] == '|');
boolean b81_5 =(buffer[81] == '2');
boolean b81_6 =(buffer[81] == 'e');
boolean b81_7 =(buffer[81] == 'U');
boolean b81_8 =(buffer[81] == 't');
boolean b81_9 =(buffer[81] == 'l');
boolean b81_10 =(buffer[81] == 's');
boolean b81_11 =(buffer[81] == 'o');
boolean b81_12 =(buffer[81] == 'A');
boolean b81_13 =(buffer[81] == ':');
boolean b81_14 =(buffer[81] == '4');
boolean b81_15 =(buffer[81] == 'g');
boolean b81_16 =(buffer[81] == 'D');
boolean b81_17 =(buffer[81] == '.');
boolean b81_18 =(buffer[81] == '1');
boolean b82_1 =(buffer[82] == 'o');
boolean b82_2 =(buffer[82] == 'A');
boolean b82_3 =(buffer[82] == '|');
boolean b82_4 =(buffer[82] == '0');
boolean b82_5 =(buffer[82] == '2');
boolean b82_6 =(buffer[82] == 'n');
boolean b82_7 =(buffer[82] == 'S');
boolean b82_8 =(buffer[82] == '.');
boolean b82_9 =(buffer[82] == '>');
boolean b82_10 =(buffer[82] == 'e');
boolean b82_11 =(buffer[82] == 't');
boolean b82_12 =(buffer[82] == 'D');
boolean b82_13 =(buffer[82] == 'f');
boolean b82_14 =(buffer[82] == 's');
boolean b82_15 =(buffer[82] == 'N');
boolean b82_16 =(buffer[82] == 'a');
boolean b82_17 =(buffer[82] == 'r');
boolean b82_18 =(buffer[82] == '1');
boolean b82_19 =(buffer[82] == ' ');
boolean b82_20 =(buffer[82] == '4');
boolean b82_21 =(buffer[82] == '3');
boolean b82_22 =(buffer[82] == 'z');
boolean b82_23 =(buffer[82] == 'E');
boolean b83_1 =(buffer[83] == 'n');
boolean b83_2 =(buffer[83] == '|');
boolean b83_3 =(buffer[83] == '1');
boolean b83_4 =(buffer[83] == '2');
boolean b83_5 =(buffer[83] == ' ');
boolean b83_6 =(buffer[83] == '0');
boolean b83_7 =(buffer[83] == '-');
boolean b83_8 =(buffer[83] == ')');
boolean b83_9 =(buffer[83] == '8');
boolean b83_10 =(buffer[83] == '>');
boolean b83_11 =(buffer[83] == 'o');
boolean b83_12 =(buffer[83] == '+');
boolean b83_13 =(buffer[83] == 'e');
boolean b83_14 =(buffer[83] == 'T');
boolean b83_15 =(buffer[83] == 'r');
boolean b83_16 =(buffer[83] == 'U');
boolean b83_17 =(buffer[83] == '/');
boolean b83_18 =(buffer[83] == 'D');
boolean b83_19 =(buffer[83] == '.');
boolean b83_20 =(buffer[83] == '7');
boolean b83_21 =(buffer[83] == '4');
boolean b83_22 =(buffer[83] == 'G');
boolean b83_23 =(buffer[83] == 'B');
boolean b83_24 =(buffer[83] == 'i');
boolean b83_25 =(buffer[83] == 'A');
boolean b84_1 =(buffer[84] == 'g');
boolean b84_2 =(buffer[84] == ' ');
boolean b84_3 =(buffer[84] == '0');
boolean b84_4 =(buffer[84] == '|');
boolean b84_5 =(buffer[84] == 'U');
boolean b84_6 =(buffer[84] == ',');
boolean b84_7 =(buffer[84] == '<');
boolean b84_8 =(buffer[84] == '/');
boolean b84_9 =(buffer[84] == 'x');
boolean b84_10 =(buffer[84] == '-');
boolean b84_11 =(buffer[84] == 's');
boolean b84_12 =(buffer[84] == '4');
boolean b84_13 =(buffer[84] == 'A');
boolean b84_14 =(buffer[84] == '9');
boolean b84_15 =(buffer[84] == 't');
boolean b84_16 =(buffer[84] == 'e');
boolean b84_17 =(buffer[84] == 'D');
boolean b84_18 =(buffer[84] == 'l');
boolean b85_1 =(buffer[85] == 'o');
boolean b85_2 =(buffer[85] == '0');
boolean b85_3 =(buffer[85] == 'u');
boolean b85_4 =(buffer[85] == 'a');
boolean b85_5 =(buffer[85] == 'S');
boolean b85_6 =(buffer[85] == 'i');
boolean b85_7 =(buffer[85] == 'd');
boolean b85_8 =(buffer[85] == '2');
boolean b85_9 =(buffer[85] == 'A');
boolean b85_10 =(buffer[85] == '/');
boolean b85_11 =(buffer[85] == '5');
boolean b85_12 =(buffer[85] == 'e');
boolean b85_13 =(buffer[85] == '.');
boolean b85_14 =(buffer[85] == 'g');
boolean b85_15 =(buffer[85] == ':');
boolean b85_16 =(buffer[85] == '|');
boolean b85_17 =(buffer[85] == '4');
boolean b85_18 =(buffer[85] == 'D');
boolean b85_19 =(buffer[85] == 'c');
boolean b85_20 =(buffer[85] == '6');
boolean b85_21 =(buffer[85] == ' ');
boolean b85_22 =(buffer[85] == 'l');
boolean b86_1 =(buffer[86] == 't');
boolean b86_2 =(buffer[86] == '1');
boolean b86_3 =(buffer[86] == '|');
boolean b86_4 =(buffer[86] == '0');
boolean b86_5 =(buffer[86] == 'l');
boolean b86_6 =(buffer[86] == 'D');
boolean b86_7 =(buffer[86] == 'm');
boolean b86_8 =(buffer[86] == 'i');
boolean b86_9 =(buffer[86] == '.');
boolean b86_10 =(buffer[86] == '2');
boolean b86_11 =(buffer[86] == 'g');
boolean b86_12 =(buffer[86] == 'r');
boolean b86_13 =(buffer[86] == 'A');
boolean b86_14 =(buffer[86] == 'e');
boolean b86_15 =(buffer[86] == ' ');
boolean b86_16 =(buffer[86] == 'H');
boolean b86_17 =(buffer[86] == 'E');
boolean b86_18 =(buffer[86] == '3');
boolean b86_19 =(buffer[86] == 'k');
boolean b86_20 =(buffer[86] == 'a');
boolean b87_1 =(buffer[87] == 'i');
boolean b87_2 =(buffer[87] == ' ');
boolean b87_3 =(buffer[87] == '0');
boolean b87_4 =(buffer[87] == '2');
boolean b87_5 =(buffer[87] == 'a');
boolean b87_6 =(buffer[87] == 'v');
boolean b87_7 =(buffer[87] == '9');
boolean b87_8 =(buffer[87] == '|');
boolean b87_9 =(buffer[87] == '3');
boolean b87_10 =(buffer[87] == '1');
boolean b87_11 =(buffer[87] == 'e');
boolean b87_12 =(buffer[87] == '-');
boolean b87_13 =(buffer[87] == 'n');
boolean b87_14 =(buffer[87] == 'b');
boolean b87_15 =(buffer[87] == 'M');
boolean b87_16 =(buffer[87] == 'o');
boolean b87_17 =(buffer[87] == 'N');
boolean b87_18 =(buffer[87] == 'r');
boolean b87_19 =(buffer[87] == 'A');
boolean b87_20 =(buffer[87] == '/');
boolean b88_1 =(buffer[88] == 't');
boolean b88_2 =(buffer[88] == '0');
boolean b88_3 =(buffer[88] == '5');
boolean b88_4 =(buffer[88] == 'g');
boolean b88_5 =(buffer[88] == '9');
boolean b88_6 =(buffer[88] == '>');
boolean b88_7 =(buffer[88] == '.');
boolean b88_8 =(buffer[88] == 'e');
boolean b88_9 =(buffer[88] == '|');
boolean b88_10 =(buffer[88] == 'n');
boolean b88_11 =(buffer[88] == 'A');
boolean b88_12 =(buffer[88] == '(');
boolean b88_13 =(buffer[88] == 'U');
boolean b88_14 =(buffer[88] == 'o');
boolean b88_15 =(buffer[88] == 's');
boolean b88_16 =(buffer[88] == '6');
boolean b88_17 =(buffer[88] == '8');
boolean b88_18 =(buffer[88] == ')');
boolean b88_19 =(buffer[88] == 'E');
boolean b88_20 =(buffer[88] == '4');
boolean b89_1 =(buffer[89] == 'w');
boolean b89_2 =(buffer[89] == '1');
boolean b89_3 =(buffer[89] == 'C');
boolean b89_4 =(buffer[89] == '|');
boolean b89_5 =(buffer[89] == 'n');
boolean b89_6 =(buffer[89] == 'A');
boolean b89_7 =(buffer[89] == 'e');
boolean b89_8 =(buffer[89] == '0');
boolean b89_9 =(buffer[89] == '3');
boolean b89_10 =(buffer[89] == 't');
boolean b89_11 =(buffer[89] == 'g');
boolean b89_12 =(buffer[89] == 's');
boolean b89_13 =(buffer[89] == ':');
boolean b89_14 =(buffer[89] == ')');
boolean b89_15 =(buffer[89] == 'z');
boolean b89_16 =(buffer[89] == '7');
boolean b89_17 =(buffer[89] == '9');
boolean b89_18 =(buffer[89] == ' ');
boolean b89_19 =(buffer[89] == 'T');
boolean b89_20 =(buffer[89] == '.');
boolean b89_21 =(buffer[89] == 'D');
boolean b90_1 =(buffer[90] == 'o');
boolean b90_2 =(buffer[90] == ' ');
boolean b90_3 =(buffer[90] == 's');
boolean b90_4 =(buffer[90] == '=');
boolean b90_5 =(buffer[90] == '|');
boolean b90_6 =(buffer[90] == '/');
boolean b90_7 =(buffer[90] == '6');
boolean b90_8 =(buffer[90] == '2');
boolean b90_9 =(buffer[90] == 'B');
boolean b90_10 =(buffer[90] == ':');
boolean b90_11 =(buffer[90] == 'e');
boolean b90_12 =(buffer[90] == 'i');
boolean b90_13 =(buffer[90] == 'n');
boolean b90_14 =(buffer[90] == 'C');
boolean b90_15 =(buffer[90] == '0');
boolean b91_1 =(buffer[91] == 'r');
boolean b91_2 =(buffer[91] == '0');
boolean b91_3 =(buffer[91] == '|');
boolean b91_4 =(buffer[91] == 'p');
boolean b91_5 =(buffer[91] == '8');
boolean b91_6 =(buffer[91] == '2');
boolean b91_7 =(buffer[91] == 'U');
boolean b91_8 =(buffer[91] == ' ');
boolean b91_9 =(buffer[91] == 'n');
boolean b91_10 =(buffer[91] == 'M');
boolean b91_11 =(buffer[91] == 'G');
boolean b91_12 =(buffer[91] == 'l');
boolean b91_13 =(buffer[91] == 'C');
boolean b91_14 =(buffer[91] == '4');
boolean b91_15 =(buffer[91] == 'h');
boolean b91_16 =(buffer[91] == 'D');
boolean b91_17 =(buffer[91] == 'A');
boolean b92_1 =(buffer[92] == 'k');
boolean b92_2 =(buffer[92] == '5');
boolean b92_3 =(buffer[92] == '0');
boolean b92_4 =(buffer[92] == 'n');
boolean b92_5 =(buffer[92] == ' ');
boolean b92_6 =(buffer[92] == '|');
boolean b92_7 =(buffer[92] == 's');
boolean b92_8 =(buffer[92] == 'M');
boolean b92_9 =(buffer[92] == 't');
boolean b92_10 =(buffer[92] == '-');
boolean b92_11 =(buffer[92] == 'o');
boolean b92_12 =(buffer[92] == 'e');
boolean b92_13 =(buffer[92] == 'l');
boolean b92_14 =(buffer[92] == '7');
boolean b92_15 =(buffer[92] == '2');
boolean b92_16 =(buffer[92] == 'r');
boolean b92_17 =(buffer[92] == 'L');
boolean b92_18 =(buffer[92] == '(');
boolean b93_1 =(buffer[93] == 'i');
boolean b93_2 =(buffer[93] == ' ');
boolean b93_3 =(buffer[93] == '0');
boolean b93_4 =(buffer[93] == 'C');
boolean b93_5 =(buffer[93] == 'g');
boolean b93_6 =(buffer[93] == 'V');
boolean b93_7 =(buffer[93] == '+');
boolean b93_8 =(buffer[93] == 'e');
boolean b93_9 =(buffer[93] == 'T');
boolean b93_10 =(buffer[93] == 'o');
boolean b93_11 =(buffer[93] == ':');
boolean b93_12 =(buffer[93] == 'A');
boolean b93_13 =(buffer[93] == 'z');
boolean b93_14 =(buffer[93] == 'c');
boolean b93_15 =(buffer[93] == 'a');
boolean b93_16 =(buffer[93] == 'n');
boolean b93_17 =(buffer[93] == 'S');
boolean b93_18 =(buffer[93] == 'R');
boolean b93_19 =(buffer[93] == 'W');
boolean b94_1 =(buffer[94] == 'n');
boolean b94_2 =(buffer[94] == '0');
boolean b94_3 =(buffer[94] == '|');
boolean b94_4 =(buffer[94] == ' ');
boolean b94_5 =(buffer[94] == ',');
boolean b94_6 =(buffer[94] == 'e');
boolean b94_7 =(buffer[94] == 'r');
boolean b94_8 =(buffer[94] == 'z');
boolean b94_9 =(buffer[94] == 'g');
boolean b94_10 =(buffer[94] == 'i');
boolean b94_11 =(buffer[94] == 'k');
boolean b94_12 =(buffer[94] == '/');
boolean b94_13 =(buffer[94] == 't');
boolean b94_14 =(buffer[94] == '4');
boolean b94_15 =(buffer[94] == 'D');
boolean b94_16 =(buffer[94] == 'm');
boolean b94_17 =(buffer[94] == 'A');
boolean b94_18 =(buffer[94] == 'V');
boolean b94_19 =(buffer[94] == 'E');
boolean b95_1 =(buffer[95] == 'g');
boolean b95_2 =(buffer[95] == '0');
boolean b95_3 =(buffer[95] == 'e');
boolean b95_4 =(buffer[95] == '2');
boolean b95_5 =(buffer[95] == '*');
boolean b95_6 =(buffer[95] == 'r');
boolean b95_7 =(buffer[95] == 'f');
boolean b95_8 =(buffer[95] == '-');
boolean b95_9 =(buffer[95] == 'i');
boolean b95_10 =(buffer[95] == 'M');
boolean b95_11 =(buffer[95] == 'l');
boolean b95_12 =(buffer[95] == 'o');
boolean b95_13 =(buffer[95] == '7');
boolean b95_14 =(buffer[95] == 'F');
boolean b95_15 =(buffer[95] == '<');
boolean b95_16 =(buffer[95] == '|');
boolean b95_17 =(buffer[95] == '1');
boolean b95_18 =(buffer[95] == 'n');
boolean b96_1 =(buffer[96] == 's');
boolean b96_2 =(buffer[96] == ' ');
boolean b96_3 =(buffer[96] == '|');
boolean b96_4 =(buffer[96] == '2');
boolean b96_5 =(buffer[96] == '/');
boolean b96_6 =(buffer[96] == 'A');
boolean b96_7 =(buffer[96] == 'd');
boolean b96_8 =(buffer[96] == 'l');
boolean b96_9 =(buffer[96] == 'o');
boolean b96_10 =(buffer[96] == 'n');
boolean b96_11 =(buffer[96] == 'H');
boolean b96_12 =(buffer[96] == '.');
boolean b97_1 =(buffer[97] == 'o');
boolean b97_2 =(buffer[97] == '0');
boolean b97_3 =(buffer[97] == '|');
boolean b97_4 =(buffer[97] == '*');
boolean b97_5 =(buffer[97] == 'i');
boolean b97_6 =(buffer[97] == 'g');
boolean b97_7 =(buffer[97] == 'e');
boolean b97_8 =(buffer[97] == 'l');
boolean b97_9 =(buffer[97] == 'z');
boolean b97_10 =(buffer[97] == 't');
boolean b97_11 =(buffer[97] == 'a');
boolean b97_12 =(buffer[97] == '2');
boolean b97_13 =(buffer[97] == 'C');
boolean b97_14 =(buffer[97] == '3');
boolean b98_1 =(buffer[98] == 'a');
boolean b98_2 =(buffer[98] == '5');
boolean b98_3 =(buffer[98] == '0');
boolean b98_4 =(buffer[98] == 'c');
boolean b98_5 =(buffer[98] == '|');
boolean b98_6 =(buffer[98] == 'o');
boolean b98_7 =(buffer[98] == 'm');
boolean b98_8 =(buffer[98] == 'e');
boolean b98_9 =(buffer[98] == 'n');
boolean b98_10 =(buffer[98] == 'i');
boolean b98_11 =(buffer[98] == ':');
boolean b98_12 =(buffer[98] == '/');
boolean b98_13 =(buffer[98] == '-');
boolean b98_14 =(buffer[98] == '2');
boolean b98_15 =(buffer[98] == 's');
boolean b98_16 =(buffer[98] == 'B');
boolean b98_17 =(buffer[98] == '.');
boolean b98_18 =(buffer[98] == 'w');
boolean b99_1 =(buffer[99] == 'l');
boolean b99_2 =(buffer[99] == ' ');
boolean b99_3 =(buffer[99] == '|');
boolean b99_4 =(buffer[99] == 'e');
boolean b99_5 =(buffer[99] == '3');
boolean b99_6 =(buffer[99] == 'n');
boolean b99_7 =(buffer[99] == 't');
boolean b99_8 =(buffer[99] == '/');
boolean b99_9 =(buffer[99] == '0');
boolean b99_10 =(buffer[99] == 'T');
boolean b99_11 =(buffer[99] == '.');
boolean b99_12 =(buffer[99] == '5');
boolean b99_13 =(buffer[99] == 's');
boolean b100_1 =(buffer[100] == 'l');
boolean b100_2 =(buffer[100] == '0');
boolean b100_3 =(buffer[100] == 'r');
boolean b100_4 =(buffer[100] == 'n');
boolean b100_5 =(buffer[100] == 'B');
boolean b100_6 =(buffer[100] == '/');
boolean b100_7 =(buffer[100] == '2');
boolean b100_8 =(buffer[100] == 't');
boolean b100_9 =(buffer[100] == '3');
boolean b100_10 =(buffer[100] == 'M');
boolean b100_11 =(buffer[100] == '.');
boolean b100_12 =(buffer[100] == '9');
boolean b100_13 =(buffer[100] == 'y');
boolean b100_14 =(buffer[100] == '8');
boolean b100_15 =(buffer[100] == ':');
boolean b100_16 =(buffer[100] == ' ');
boolean b101_1 =(buffer[101] == 'i');
boolean b101_2 =(buffer[101] == '0');
boolean b101_3 =(buffer[101] == '1');
boolean b101_4 =(buffer[101] == '|');
boolean b101_5 =(buffer[101] == 't');
boolean b101_6 =(buffer[101] == '2');
boolean b101_7 =(buffer[101] == ':');
boolean b101_8 =(buffer[101] == '4');
boolean b101_9 =(buffer[101] == '.');
boolean b101_10 =(buffer[101] == 'a');
boolean b101_11 =(buffer[101] == 'o');
boolean b101_12 =(buffer[101] == 'p');
boolean b101_13 =(buffer[101] == '7');
boolean b101_14 =(buffer[101] == ' ');
boolean b101_15 =(buffer[101] == 'N');
boolean b102_1 =(buffer[102] == 's');
boolean b102_2 =(buffer[102] == '|');
boolean b102_3 =(buffer[102] == ' ');
boolean b102_4 =(buffer[102] == '0');
boolean b102_5 =(buffer[102] == 'e');
boolean b102_6 =(buffer[102] == 'q');
boolean b102_7 =(buffer[102] == '1');
boolean b102_8 =(buffer[102] == '.');
boolean b102_9 =(buffer[102] == '/');
boolean b102_10 =(buffer[102] == 'z');
boolean b102_11 =(buffer[102] == '2');
boolean b102_12 =(buffer[102] == 'w');
boolean b102_13 =(buffer[102] == 'N');
boolean b102_14 =(buffer[102] == 'T');
boolean b103_1 =(buffer[103] == 'c');
boolean b103_2 =(buffer[103] == '0');
boolean b103_3 =(buffer[103] == 'r');
boolean b103_4 =(buffer[103] == '=');
boolean b103_5 =(buffer[103] == '.');
boolean b103_6 =(buffer[103] == '+');
boolean b103_7 =(buffer[103] == ' ');
boolean b103_8 =(buffer[103] == '3');
boolean b103_9 =(buffer[103] == 'i');
boolean b103_10 =(buffer[103] == '(');
boolean b103_11 =(buffer[103] == ':');
boolean b103_12 =(buffer[103] == '8');
boolean b103_13 =(buffer[103] == '9');
boolean b103_14 =(buffer[103] == 'E');
boolean b103_15 =(buffer[103] == '7');
boolean b104_1 =(buffer[104] == 'o');
boolean b104_2 =(buffer[104] == '0');
boolean b104_3 =(buffer[104] == '|');
boolean b104_4 =(buffer[104] == '5');
boolean b104_5 =(buffer[104] == '(');
boolean b104_6 =(buffer[104] == ')');
boolean b104_7 =(buffer[104] == '.');
boolean b104_8 =(buffer[104] == 'l');
boolean b104_9 =(buffer[104] == 'c');
boolean b104_10 =(buffer[104] == '4');
boolean b104_11 =(buffer[104] == ' ');
boolean b104_12 =(buffer[104] == 'A');
boolean b104_13 =(buffer[104] == '1');
boolean b104_14 =(buffer[104] == 'n');
boolean b104_15 =(buffer[104] == 'T');
boolean b104_16 =(buffer[104] == '6');
boolean b105_1 =(buffer[105] == 'o');
boolean b105_2 =(buffer[105] == ' ');
boolean b105_3 =(buffer[105] == '5');
boolean b105_4 =(buffer[105] == '.');
boolean b105_5 =(buffer[105] == '2');
boolean b105_6 =(buffer[105] == '(');
boolean b105_7 =(buffer[105] == '|');
boolean b105_8 =(buffer[105] == 'c');
boolean b105_9 =(buffer[105] == '0');
boolean b105_10 =(buffer[105] == 'l');
boolean b105_11 =(buffer[105] == 'a');
boolean b105_12 =(buffer[105] == '6');
boolean b105_13 =(buffer[105] == 'd');
boolean b105_14 =(buffer[105] == '4');
boolean b105_15 =(buffer[105] == '3');
boolean b106_1 =(buffer[106] == 'l');
boolean b106_2 =(buffer[106] == '0');
boolean b106_3 =(buffer[106] == '|');
boolean b106_4 =(buffer[106] == 'C');
boolean b106_5 =(buffer[106] == '5');
boolean b106_6 =(buffer[106] == 'f');
boolean b106_7 =(buffer[106] == 'o');
boolean b106_8 =(buffer[106] == ' ');
boolean b106_9 =(buffer[106] == 'a');
boolean b106_10 =(buffer[106] == 'm');
boolean b106_11 =(buffer[106] == 'F');
boolean b106_12 =(buffer[106] == 'p');
boolean b106_13 =(buffer[106] == '.');
boolean b106_14 =(buffer[106] == 'B');
boolean b106_15 =(buffer[106] == '1');
boolean b107_1 =(buffer[107] == '0');
boolean b107_2 =(buffer[107] == ' ');
boolean b107_3 =(buffer[107] == '|');
boolean b107_4 =(buffer[107] == ')');
boolean b107_5 =(buffer[107] == 'D');
boolean b107_6 =(buffer[107] == 'm');
boolean b107_7 =(buffer[107] == '(');
boolean b107_8 =(buffer[107] == '/');
boolean b107_9 =(buffer[107] == 'p');
boolean b107_10 =(buffer[107] == 'i');
boolean b107_11 =(buffer[107] == 'C');
boolean b107_12 =(buffer[107] == '1');
boolean b107_13 =(buffer[107] == 'w');
boolean b108_1 =(buffer[108] == ' ');
boolean b108_2 =(buffer[108] == '0');
boolean b108_3 =(buffer[108] == '2');
boolean b108_4 =(buffer[108] == 'D');
boolean b108_5 =(buffer[108] == '?');
boolean b108_6 =(buffer[108] == 'p');
boolean b108_7 =(buffer[108] == 'c');
boolean b108_8 =(buffer[108] == '5');
boolean b108_9 =(buffer[108] == 'a');
boolean b108_10 =(buffer[108] == 'r');
boolean b108_11 =(buffer[108] == 'l');
boolean b108_12 =(buffer[108] == '1');
boolean b108_13 =(buffer[108] == 's');
boolean b108_14 =(buffer[108] == 'C');
boolean b108_15 =(buffer[108] == '3');
boolean b109_1 =(buffer[109] == '0');
boolean b109_2 =(buffer[109] == '|');
boolean b109_3 =(buffer[109] == '2');
boolean b109_4 =(buffer[109] == 'D');
boolean b109_5 =(buffer[109] == ' ');
boolean b109_6 =(buffer[109] == 'a');
boolean b109_7 =(buffer[109] == 'o');
boolean b109_8 =(buffer[109] == '.');
boolean b109_9 =(buffer[109] == 't');
boolean b109_10 =(buffer[109] == 'e');
boolean b109_11 =(buffer[109] == 'i');
boolean b109_12 =(buffer[109] == '8');
boolean b109_13 =(buffer[109] == '4');
boolean b109_14 =(buffer[109] == 'u');
boolean b109_15 =(buffer[109] == 'B');
boolean b110_1 =(buffer[110] == '0');
boolean b110_2 =(buffer[110] == '\'');
boolean b110_3 =(buffer[110] == '|');
boolean b110_4 =(buffer[110] == ' ');
boolean b110_5 =(buffer[110] == '2');
boolean b110_6 =(buffer[110] == 'm');
boolean b110_7 =(buffer[110] == 'A');
boolean b110_8 =(buffer[110] == 't');
boolean b110_9 =(buffer[110] == 'i');
boolean b110_10 =(buffer[110] == 'f');
boolean b110_11 =(buffer[110] == 'c');
boolean b110_12 =(buffer[110] == '7');
boolean b110_13 =(buffer[110] == 'p');
boolean b110_14 =(buffer[110] == '3');
boolean b110_15 =(buffer[110] == 'N');
boolean b111_1 =(buffer[111] == ' ');
boolean b111_2 =(buffer[111] == '|');
boolean b111_3 =(buffer[111] == '0');
boolean b111_4 =(buffer[111] == 'A');
boolean b111_5 =(buffer[111] == '2');
boolean b111_6 =(buffer[111] == 'i');
boolean b111_7 =(buffer[111] == 'p');
boolean b111_8 =(buffer[111] == 'b');
boolean b111_9 =(buffer[111] == 'o');
boolean b111_10 =(buffer[111] == 'a');
boolean b111_11 =(buffer[111] == 'S');
boolean b111_12 =(buffer[111] == 'd');
boolean b111_13 =(buffer[111] == 'B');
boolean b111_14 =(buffer[111] == 'E');
boolean b112_1 =(buffer[112] == '0');
boolean b112_2 =(buffer[112] == 'h');
boolean b112_3 =(buffer[112] == 'A');
boolean b112_4 =(buffer[112] == '|');
boolean b112_5 =(buffer[112] == 'H');
boolean b112_6 =(buffer[112] == 'b');
boolean b112_7 =(buffer[112] == 'a');
boolean b112_8 =(buffer[112] == '(');
boolean b112_9 =(buffer[112] == 'l');
boolean b112_10 =(buffer[112] == 'x');
boolean b112_11 =(buffer[112] == 't');
boolean b112_12 =(buffer[112] == 'T');
boolean b112_13 =(buffer[112] == 'W');
boolean b113_1 =(buffer[113] == '1');
boolean b113_2 =(buffer[113] == '0');
boolean b113_3 =(buffer[113] == 'e');
boolean b113_4 =(buffer[113] == '|');
boolean b113_5 =(buffer[113] == 'o');
boolean b113_6 =(buffer[113] == 'l');
boolean b113_7 =(buffer[113] == 't');
boolean b113_8 =(buffer[113] == 'W');
boolean b113_9 =(buffer[113] == '/');
boolean b113_10 =(buffer[113] == 'i');
boolean b113_11 =(buffer[113] == 'f');
boolean b113_12 =(buffer[113] == ' ');
boolean b113_13 =(buffer[113] == 'O');
boolean b114_1 =(buffer[114] == ' ');
boolean b114_2 =(buffer[114] == '|');
boolean b114_3 =(buffer[114] == 'i');
boolean b114_4 =(buffer[114] == 's');
boolean b114_5 =(buffer[114] == 'e');
boolean b114_6 =(buffer[114] == '3');
boolean b114_7 =(buffer[114] == 'o');
boolean b114_8 =(buffer[114] == 'a');
boolean b114_9 =(buffer[114] == '.');
boolean b114_10 =(buffer[114] == 'C');
boolean b114_11 =(buffer[114] == 'W');
boolean b115_1 =(buffer[115] == '0');
boolean b115_2 =(buffer[115] == 's');
boolean b115_3 =(buffer[115] == 'g');
boolean b115_4 =(buffer[115] == '2');
boolean b115_5 =(buffer[115] == ' ');
boolean b115_6 =(buffer[115] == 't');
boolean b115_7 =(buffer[115] == '|');
boolean b115_8 =(buffer[115] == 'b');
boolean b115_9 =(buffer[115] == 'n');
boolean b115_10 =(buffer[115] == '3');
boolean b115_11 =(buffer[115] == '.');
boolean b115_12 =(buffer[115] == 'r');
boolean b115_13 =(buffer[115] == 'N');
boolean b115_14 =(buffer[115] == 'L');
boolean b115_15 =(buffer[115] == '6');
boolean b116_1 =(buffer[116] == '0');
boolean b116_2 =(buffer[116] == '|');
boolean b116_3 =(buffer[116] == 'h');
boolean b116_4 =(buffer[116] == '2');
boolean b116_5 =(buffer[116] == ':');
boolean b116_6 =(buffer[116] == '3');
boolean b116_7 =(buffer[116] == 'l');
boolean b116_8 =(buffer[116] == 'd');
boolean b116_9 =(buffer[116] == 'B');
boolean b116_10 =(buffer[116] == '6');
boolean b116_11 =(buffer[116] == '/');
boolean b116_12 =(buffer[116] == 'i');
boolean b116_13 =(buffer[116] == 'm');
boolean b116_14 =(buffer[116] == 'E');
boolean b116_15 =(buffer[116] == 'R');
boolean b116_16 =(buffer[116] == '4');
boolean b117_1 =(buffer[117] == ' ');
boolean b117_2 =(buffer[117] == '0');
boolean b117_3 =(buffer[117] == 't');
boolean b117_4 =(buffer[117] == '|');
boolean b117_5 =(buffer[117] == 'B');
boolean b117_6 =(buffer[117] == 'e');
boolean b117_7 =(buffer[117] == 'o');
boolean b117_8 =(buffer[117] == 'b');
boolean b117_9 =(buffer[117] == 'x');
boolean b117_10 =(buffer[117] == '/');
boolean b117_11 =(buffer[117] == 'i');
boolean b117_12 =(buffer[117] == 'T');
boolean b118_1 =(buffer[118] == '0');
boolean b118_2 =(buffer[118] == ' ');
boolean b118_3 =(buffer[118] == '+');
boolean b118_4 =(buffer[118] == 'c');
boolean b118_5 =(buffer[118] == 'w');
boolean b118_6 =(buffer[118] == '|');
boolean b118_7 =(buffer[118] == '5');
boolean b118_8 =(buffer[118] == '-');
boolean b118_9 =(buffer[118] == '4');
boolean b118_10 =(buffer[118] == '3');
boolean b119_1 =(buffer[119] == '0');
boolean b119_2 =(buffer[119] == '|');
boolean b119_3 =(buffer[119] == '=');
boolean b119_4 =(buffer[119] == 'h');
boolean b119_5 =(buffer[119] == 'w');
boolean b119_6 =(buffer[119] == ' ');
boolean b119_7 =(buffer[119] == '3');
boolean b119_8 =(buffer[119] == 's');
boolean b119_9 =(buffer[119] == 'I');
boolean b119_10 =(buffer[119] == 'r');
boolean b119_11 =(buffer[119] == '.');
boolean b119_12 =(buffer[119] == 'B');
boolean b120_1 =(buffer[120] == ' ');
boolean b120_2 =(buffer[120] == 'a');
boolean b120_3 =(buffer[120] == '2');
boolean b120_4 =(buffer[120] == 'v');
boolean b120_5 =(buffer[120] == 'e');
boolean b120_6 =(buffer[120] == 'w');
boolean b120_7 =(buffer[120] == 'I');
boolean b120_8 =(buffer[120] == 'B');
boolean b120_9 =(buffer[120] == 'n');
boolean b120_10 =(buffer[120] == '0');
boolean b120_11 =(buffer[120] == '7');
boolean b120_12 =(buffer[120] == 'o');
boolean b120_13 =(buffer[120] == '5');
boolean b120_14 =(buffer[120] == '|');
boolean b121_1 =(buffer[121] == '0');
boolean b121_2 =(buffer[121] == '|');
boolean b121_3 =(buffer[121] == '2');
boolean b121_4 =(buffer[121] == 'c');
boolean b121_5 =(buffer[121] == '.');
boolean b121_6 =(buffer[121] == 'n');
boolean b121_7 =(buffer[121] == 'N');
boolean b121_8 =(buffer[121] == 'd');
boolean b121_9 =(buffer[121] == 'D');
boolean b121_10 =(buffer[121] == 'w');
boolean b121_11 =(buffer[121] == 's');
boolean b121_12 =(buffer[121] == 'E');
boolean b121_13 =(buffer[121] == ' ');
boolean b122_1 =(buffer[122] == '0');
boolean b122_2 =(buffer[122] == '5');
boolean b122_3 =(buffer[122] == '|');
boolean b122_4 =(buffer[122] == 'k');
boolean b122_5 =(buffer[122] == 'a');
boolean b122_6 =(buffer[122] == 'd');
boolean b122_7 =(buffer[122] == ' ');
boolean b122_8 =(buffer[122] == 'T');
boolean b122_9 =(buffer[122] == 'y');
boolean b122_10 =(buffer[122] == '-');
boolean b122_11 =(buffer[122] == '3');
boolean b122_12 =(buffer[122] == 'o');
boolean b122_13 =(buffer[122] == 'r');
boolean b123_1 =(buffer[123] == '|');
boolean b123_2 =(buffer[123] == '0');
boolean b123_3 =(buffer[123] == 'C');
boolean b123_4 =(buffer[123] == 'n');
boolean b123_5 =(buffer[123] == 'i');
boolean b123_6 =(buffer[123] == 's');
boolean b123_7 =(buffer[123] == 'y');
boolean b123_8 =(buffer[123] == 'I');
boolean b123_9 =(buffer[123] == ' ');
boolean b123_10 =(buffer[123] == 'f');
boolean b123_11 =(buffer[123] == '6');
boolean b123_12 =(buffer[123] == '3');
boolean b123_13 =(buffer[123] == 'v');
boolean b124_1 =(buffer[124] == 'P');
boolean b124_2 =(buffer[124] == '|');
boolean b124_3 =(buffer[124] == ' ');
boolean b124_4 =(buffer[124] == 'p');
boolean b124_5 =(buffer[124] == 'k');
boolean b124_6 =(buffer[124] == 'n');
boolean b124_7 =(buffer[124] == '6');
boolean b124_8 =(buffer[124] == 'L');
boolean b124_9 =(buffer[124] == 'A');
boolean b124_10 =(buffer[124] == 'o');
boolean b124_11 =(buffer[124] == 't');
boolean b124_12 =(buffer[124] == 'B');
boolean b124_13 =(buffer[124] == '7');
boolean b124_14 =(buffer[124] == ':');
boolean b125_1 =(buffer[125] == '|');
boolean b125_2 =(buffer[125] == '\'');
boolean b125_3 =(buffer[125] == '2');
boolean b125_4 =(buffer[125] == 'e');
boolean b125_5 =(buffer[125] == '.');
boolean b125_6 =(buffer[125] == 'L');
boolean b125_7 =(buffer[125] == 'd');
boolean b125_8 =(buffer[125] == 'i');
boolean b125_9 =(buffer[125] == ' ');
boolean b125_10 =(buffer[125] == 'r');
boolean b125_11 =(buffer[125] == '0');
boolean b125_12 =(buffer[125] == '1');
boolean b126_1 =(buffer[126] == '0');
boolean b126_2 =(buffer[126] == '|');
boolean b126_3 =(buffer[126] == '2');
boolean b126_4 =(buffer[126] == 'd');
boolean b126_5 =(buffer[126] == 'c');
boolean b126_6 =(buffer[126] == 'i');
boolean b126_7 =(buffer[126] == 'y');
boolean b126_8 =(buffer[126] == '1');
boolean b126_9 =(buffer[126] == 'b');
boolean b126_10 =(buffer[126] == 'm');
boolean b126_11 =(buffer[126] == 'D');
boolean b126_12 =(buffer[126] == ' ');
boolean b126_13 =(buffer[126] == '9');
boolean b127_1 =(buffer[127] == '1');
boolean b127_2 =(buffer[127] == '0');
boolean b127_3 =(buffer[127] == '|');
boolean b127_4 =(buffer[127] == 'y');
boolean b127_5 =(buffer[127] == 'o');
boolean b127_6 =(buffer[127] == 'b');
boolean b127_7 =(buffer[127] == ' ');
boolean b127_8 =(buffer[127] == 'r');
boolean b127_9 =(buffer[127] == 'D');
boolean b127_10 =(buffer[127] == '-');
boolean b127_11 =(buffer[127] == '.');
boolean b128_1 =(buffer[128] == ' ');
boolean b128_2 =(buffer[128] == '0');
boolean b128_3 =(buffer[128] == '1');
boolean b128_4 =(buffer[128] == '+');
boolean b128_5 =(buffer[128] == 'n');
boolean b128_6 =(buffer[128] == 'm');
boolean b128_7 =(buffer[128] == 'r');
boolean b128_8 =(buffer[128] == 'L');
boolean b128_9 =(buffer[128] == '3');
boolean b128_10 =(buffer[128] == 'a');
boolean b128_11 =(buffer[128] == 'u');
boolean b128_12 =(buffer[128] == 'N');
boolean b129_1 =(buffer[129] == '0');
boolean b129_2 =(buffer[129] == '|');
boolean b129_3 =(buffer[129] == 'p');
boolean b129_4 =(buffer[129] == 'd');
boolean b129_5 =(buffer[129] == 'a');
boolean b129_6 =(buffer[129] == 'i');
boolean b129_7 =(buffer[129] == 'B');
boolean b129_8 =(buffer[129] == 'r');
boolean b129_9 =(buffer[129] == 'A');
boolean b129_10 =(buffer[129] == 'E');
boolean b129_11 =(buffer[129] == ')');
boolean b130_1 =(buffer[130] == '1');
boolean b130_2 =(buffer[130] == 'x');
boolean b130_3 =(buffer[130] == '2');
boolean b130_4 =(buffer[130] == 'r');
boolean b130_5 =(buffer[130] == 'n');
boolean b130_6 =(buffer[130] == '0');
boolean b130_7 =(buffer[130] == 'b');
boolean b130_8 =(buffer[130] == '|');
boolean b130_9 =(buffer[130] == 'y');
boolean b130_10 =(buffer[130] == 'A');
boolean b130_11 =(buffer[130] == 'l');
boolean b130_12 =(buffer[130] == 'T');
boolean b130_13 =(buffer[130] == ' ');
boolean b131_1 =(buffer[131] == ' ');
boolean b131_2 =(buffer[131] == '|');
boolean b131_3 =(buffer[131] == '2');
boolean b131_4 =(buffer[131] == 's');
boolean b131_5 =(buffer[131] == 'D');
boolean b131_6 =(buffer[131] == 'y');
boolean b131_7 =(buffer[131] == 'r');
boolean b131_8 =(buffer[131] == ')');
boolean b131_9 =(buffer[131] == 'e');
boolean b131_10 =(buffer[131] == 'H');
boolean b131_11 =(buffer[131] == 'G');
boolean b132_1 =(buffer[132] == '0');
boolean b132_2 =(buffer[132] == '5');
boolean b132_3 =(buffer[132] == '|');
boolean b132_4 =(buffer[132] == '.');
boolean b132_5 =(buffer[132] == ' ');
boolean b132_6 =(buffer[132] == ')');
boolean b132_7 =(buffer[132] == 'a');
boolean b132_8 =(buffer[132] == 'W');
boolean b132_9 =(buffer[132] == 'n');
boolean b132_10 =(buffer[132] == 'o');
boolean b132_11 =(buffer[132] == 'C');
boolean b132_12 =(buffer[132] == 'e');
boolean b133_1 =(buffer[133] == '0');
boolean b133_2 =(buffer[133] == 'C');
boolean b133_3 =(buffer[133] == 't');
boolean b133_4 =(buffer[133] == 'o');
boolean b133_5 =(buffer[133] == 'r');
boolean b133_6 =(buffer[133] == 'O');
boolean b133_7 =(buffer[133] == 'c');
boolean b133_8 =(buffer[133] == 's');
boolean b133_9 =(buffer[133] == 'L');
boolean b133_10 =(buffer[133] == 'N');
boolean b134_1 =(buffer[134] == ' ');
boolean b134_2 =(buffer[134] == '|');
boolean b134_3 =(buffer[134] == 'r');
boolean b134_4 =(buffer[134] == 'A');
boolean b134_5 =(buffer[134] == 'y');
boolean b134_6 =(buffer[134] == 'W');
boolean b134_7 =(buffer[134] == 'D');
boolean b134_8 =(buffer[134] == 'o');
boolean b134_9 =(buffer[134] == 't');
boolean b134_10 =(buffer[134] == 'R');
boolean b134_11 =(buffer[134] == 'E');
boolean b134_12 =(buffer[134] == 'k');
boolean b135_1 =(buffer[135] == '0');
boolean b135_2 =(buffer[135] == '2');
boolean b135_3 =(buffer[135] == 'i');
boolean b135_4 =(buffer[135] == 'g');
boolean b135_5 =(buffer[135] == '|');
boolean b135_6 =(buffer[135] == ')');
boolean b135_7 =(buffer[135] == '6');
boolean b135_8 =(buffer[135] == ' ');
boolean b135_9 =(buffer[135] == 'd');
boolean b135_10 =(buffer[135] == ':');
boolean b135_11 =(buffer[135] == 'T');
boolean b135_12 =(buffer[135] == 'o');
boolean b136_1 =(buffer[136] == '2');
boolean b136_2 =(buffer[136] == '|');
boolean b136_3 =(buffer[136] == 'C');
boolean b136_4 =(buffer[136] == '4');
boolean b136_5 =(buffer[136] == '0');
boolean b136_6 =(buffer[136] == 'e');
boolean b136_7 =(buffer[136] == ' ');
boolean b136_8 =(buffer[136] == '/');
boolean b137_1 =(buffer[137] == ' ');
boolean b137_2 =(buffer[137] == '|');
boolean b137_3 =(buffer[137] == '0');
boolean b137_4 =(buffer[137] == 'a');
boolean b137_5 =(buffer[137] == 'A');
boolean b137_6 =(buffer[137] == 'd');
boolean b137_7 =(buffer[137] == 'c');
boolean b137_8 =(buffer[137] == 'o');
boolean b137_9 =(buffer[137] == '.');
boolean b137_10 =(buffer[137] == 'C');
boolean b137_11 =(buffer[137] == '2');
boolean b138_1 =(buffer[138] == '0');
boolean b138_2 =(buffer[138] == ' ');
boolean b138_3 =(buffer[138] == '3');
boolean b138_4 =(buffer[138] == 'D');
boolean b138_5 =(buffer[138] == 'c');
boolean b138_6 =(buffer[138] == '|');
boolean b138_7 =(buffer[138] == 'h');
boolean b138_8 =(buffer[138] == 'n');
boolean b138_9 =(buffer[138] == 'L');
boolean b139_1 =(buffer[139] == '3');
boolean b139_2 =(buffer[139] == 'w');
boolean b139_3 =(buffer[139] == 'A');
boolean b139_4 =(buffer[139] == '|');
boolean b139_5 =(buffer[139] == ' ');
boolean b139_6 =(buffer[139] == 'h');
boolean b139_7 =(buffer[139] == 'B');
boolean b139_8 =(buffer[139] == '0');
boolean b139_9 =(buffer[139] == 'e');
boolean b139_10 =(buffer[139] == 'n');
boolean b139_11 =(buffer[139] == '.');
boolean b139_12 =(buffer[139] == 'R');
boolean b139_13 =(buffer[139] == '1');
boolean b140_1 =(buffer[140] == ' ');
boolean b140_2 =(buffer[140] == 'i');
boolean b140_3 =(buffer[140] == 'f');
boolean b140_4 =(buffer[140] == '0');
boolean b140_5 =(buffer[140] == 'e');
boolean b140_6 =(buffer[140] == '|');
boolean b140_7 =(buffer[140] == 'D');
boolean b140_8 =(buffer[140] == 'c');
boolean b140_9 =(buffer[140] == '5');
boolean b141_1 =(buffer[141] == '0');
boolean b141_2 =(buffer[141] == 'd');
boolean b141_3 =(buffer[141] == '2');
boolean b141_4 =(buffer[141] == '|');
boolean b141_5 =(buffer[141] == 'A');
boolean b141_6 =(buffer[141] == '-');
boolean b141_7 =(buffer[141] == ' ');
boolean b141_8 =(buffer[141] == 'k');
boolean b141_9 =(buffer[141] == 'c');
boolean b141_10 =(buffer[141] == '3');
boolean b142_1 =(buffer[142] == '0');
boolean b142_2 =(buffer[142] == 't');
boolean b142_3 =(buffer[142] == '2');
boolean b142_4 =(buffer[142] == '|');
boolean b142_5 =(buffer[142] == 'C');
boolean b142_6 =(buffer[142] == 'r');
boolean b142_7 =(buffer[142] == 'i');
boolean b142_8 =(buffer[142] == '7');
boolean b142_9 =(buffer[142] == '.');
boolean b142_10 =(buffer[142] == '1');
boolean b143_1 =(buffer[143] == ' ');
boolean b143_2 =(buffer[143] == 'h');
boolean b143_3 =(buffer[143] == '0');
boolean b143_4 =(buffer[143] == 'C');
boolean b143_5 =(buffer[143] == 'o');
boolean b143_6 =(buffer[143] == 'v');
boolean b143_7 =(buffer[143] == 'A');
boolean b143_8 =(buffer[143] == 'p');
boolean b143_9 =(buffer[143] == 'i');
boolean b143_10 =(buffer[143] == '2');
boolean b144_1 =(buffer[144] == '0');
boolean b144_2 =(buffer[144] == ' ');
boolean b144_3 =(buffer[144] == '2');
boolean b144_4 =(buffer[144] == '|');
boolean b144_5 =(buffer[144] == 'a');
boolean b144_6 =(buffer[144] == 'n');
boolean b144_7 =(buffer[144] == ':');
boolean b144_8 =(buffer[144] == '.');
boolean b144_9 =(buffer[144] == 'o');
boolean b144_10 =(buffer[144] == '7');
boolean b144_11 =(buffer[144] == '1');
boolean b145_1 =(buffer[145] == '0');
boolean b145_2 =(buffer[145] == '=');
boolean b145_3 =(buffer[145] == '2');
boolean b145_4 =(buffer[145] == 'i');
boolean b145_5 =(buffer[145] == 'c');
boolean b145_6 =(buffer[145] == 't');
boolean b145_7 =(buffer[145] == 'H');
boolean b145_8 =(buffer[145] == 'd');
boolean b145_9 =(buffer[145] == 'n');
boolean b145_10 =(buffer[145] == '|');
boolean b145_11 =(buffer[145] == '3');
boolean b145_12 =(buffer[145] == ' ');
boolean b146_1 =(buffer[146] == ' ');
boolean b146_2 =(buffer[146] == '|');
boolean b146_3 =(buffer[146] == 'h');
boolean b146_4 =(buffer[146] == 'r');
boolean b146_5 =(buffer[146] == '5');
boolean b146_6 =(buffer[146] == 'o');
boolean b146_7 =(buffer[146] == 'y');
boolean b146_8 =(buffer[146] == ':');
boolean b146_9 =(buffer[146] == '3');
boolean b146_10 =(buffer[146] == '0');
boolean b146_11 =(buffer[146] == 'F');
boolean b147_1 =(buffer[147] == '2');
boolean b147_2 =(buffer[147] == '|');
boolean b147_3 =(buffer[147] == '0');
boolean b147_4 =(buffer[147] == 'e');
boolean b147_5 =(buffer[147] == 'o');
boolean b147_6 =(buffer[147] == '.');
boolean b147_7 =(buffer[147] == 's');
boolean b147_8 =(buffer[147] == 'n');
boolean b147_9 =(buffer[147] == ' ');
boolean b147_10 =(buffer[147] == 'B');
boolean b147_11 =(buffer[147] == '7');
boolean b147_12 =(buffer[147] == 'i');
boolean b148_1 =(buffer[148] == '4');
boolean b148_2 =(buffer[148] == '5');
boolean b148_3 =(buffer[148] == '0');
boolean b148_4 =(buffer[148] == '-');
boolean b148_5 =(buffer[148] == 'l');
boolean b148_6 =(buffer[148] == 't');
boolean b148_7 =(buffer[148] == 'd');
boolean b148_8 =(buffer[148] == 'C');
boolean b148_9 =(buffer[148] == '|');
boolean b148_10 =(buffer[148] == '2');
boolean b148_11 =(buffer[148] == 'r');
boolean b149_1 =(buffer[149] == ' ');
boolean b149_2 =(buffer[149] == 'C');
boolean b149_3 =(buffer[149] == '|');
boolean b149_4 =(buffer[149] == ':');
boolean b149_5 =(buffer[149] == ')');
boolean b149_6 =(buffer[149] == 'n');
boolean b149_7 =(buffer[149] == 'l');
boolean b149_8 =(buffer[149] == '9');
boolean b149_9 =(buffer[149] == 'e');
boolean b150_1 =(buffer[150] == '0');
boolean b150_2 =(buffer[150] == ' ');
boolean b150_3 =(buffer[150] == 'c');
boolean b150_4 =(buffer[150] == 'o');
boolean b150_5 =(buffer[150] == 's');
boolean b150_6 =(buffer[150] == '.');
boolean b150_7 =(buffer[150] == '|');
boolean b150_8 =(buffer[150] == 'f');
boolean b151_1 =(buffer[151] == '1');
boolean b151_2 =(buffer[151] == '2');
boolean b151_3 =(buffer[151] == '|');
boolean b151_4 =(buffer[151] == 'n');
boolean b151_5 =(buffer[151] == 'G');
boolean b151_6 =(buffer[151] == '.');
boolean b151_7 =(buffer[151] == 's');
boolean b151_8 =(buffer[151] == 'N');
boolean b151_9 =(buffer[151] == '3');
boolean b151_10 =(buffer[151] == 'o');
boolean b152_1 =(buffer[152] == ' ');
boolean b152_2 =(buffer[152] == '2');
boolean b152_3 =(buffer[152] == '0');
boolean b152_4 =(buffer[152] == 't');
boolean b152_5 =(buffer[152] == 'o');
boolean b152_6 =(buffer[152] == 'e');
boolean b152_7 =(buffer[152] == 'E');
boolean b152_8 =(buffer[152] == 'B');
boolean b152_9 =(buffer[152] == 'x');
boolean b153_1 =(buffer[153] == '0');
boolean b153_2 =(buffer[153] == '|');
boolean b153_3 =(buffer[153] == 'r');
boolean b153_4 =(buffer[153] == '-');
boolean b153_5 =(buffer[153] == 'c');
boolean b153_6 =(buffer[153] == 'T');
boolean b153_7 =(buffer[153] == '/');
boolean b154_1 =(buffer[154] == '1');
boolean b154_2 =(buffer[154] == '|');
boolean b154_3 =(buffer[154] == 'o');
boolean b154_4 =(buffer[154] == 'c');
boolean b154_5 =(buffer[154] == 'k');
boolean b154_6 =(buffer[154] == 'g');
boolean b154_7 =(buffer[154] == '0');
boolean b154_8 =(buffer[154] == ' ');
boolean b155_1 =(buffer[155] == ' ');
boolean b155_2 =(buffer[155] == 'p');
boolean b155_3 =(buffer[155] == 'a');
boolean b155_4 =(buffer[155] == 'l');
boolean b155_5 =(buffer[155] == 'o');
boolean b155_6 =(buffer[155] == '|');
boolean b155_7 =(buffer[155] == 'D');
boolean b155_8 =(buffer[155] == 'C');
boolean b155_9 =(buffer[155] == 'M');
boolean b155_10 =(buffer[155] == '2');
boolean b156_1 =(buffer[156] == '0');
boolean b156_2 =(buffer[156] == 'x');
boolean b156_3 =(buffer[156] == '|');
boolean b156_4 =(buffer[156] == ':');
boolean b156_5 =(buffer[156] == 'c');
boolean b156_6 =(buffer[156] == '/');
boolean b156_7 =(buffer[156] == ' ');
boolean b156_8 =(buffer[156] == 'L');
boolean b156_9 =(buffer[156] == 'e');
boolean b156_10 =(buffer[156] == '.');
boolean b157_1 =(buffer[157] == '0');
boolean b157_2 =(buffer[157] == '|');
boolean b157_3 =(buffer[157] == ' ');
boolean b157_4 =(buffer[157] == 'h');
boolean b157_5 =(buffer[157] == '2');
boolean b157_6 =(buffer[157] == 'D');
boolean b157_7 =(buffer[157] == 'R');
boolean b157_8 =(buffer[157] == 'd');
boolean b158_1 =(buffer[158] == ' ');
boolean b158_2 =(buffer[158] == '5');
boolean b158_3 =(buffer[158] == '0');
boolean b158_4 =(buffer[158] == 'n');
boolean b158_5 =(buffer[158] == 'e');
boolean b158_6 =(buffer[158] == 'A');
boolean b158_7 =(buffer[158] == 'i');
boolean b158_8 =(buffer[158] == '|');
boolean b159_1 =(buffer[159] == '0');
boolean b159_2 =(buffer[159] == 'C');
boolean b159_3 =(buffer[159] == '|');
boolean b159_4 =(buffer[159] == 'o');
boolean b159_5 =(buffer[159] == '1');
boolean b159_6 =(buffer[159] == ' ');
boolean b159_7 =(buffer[159] == '3');
boolean b159_8 =(buffer[159] == 'a');
boolean b160_1 =(buffer[160] == '0');
boolean b160_2 =(buffer[160] == ' ');
boolean b160_3 =(buffer[160] == 'n');
boolean b160_4 =(buffer[160] == '-');
boolean b160_5 =(buffer[160] == 'A');
boolean b160_6 =(buffer[160] == '.');
boolean b160_7 =(buffer[160] == 'D');
boolean b161_1 =(buffer[161] == ' ');
boolean b161_2 =(buffer[161] == '2');
boolean b161_3 =(buffer[161] == '|');
boolean b161_4 =(buffer[161] == 'c');
boolean b161_5 =(buffer[161] == 'D');
boolean b161_6 =(buffer[161] == '0');
boolean b161_7 =(buffer[161] == 'C');
boolean b162_1 =(buffer[162] == '8');
boolean b162_2 =(buffer[162] == '2');
boolean b162_3 =(buffer[162] == '0');
boolean b162_4 =(buffer[162] == 'a');
boolean b162_5 =(buffer[162] == ' ');
boolean b162_6 =(buffer[162] == '1');
boolean b162_7 =(buffer[162] == '.');
boolean b162_8 =(buffer[162] == 'e');
boolean b163_1 =(buffer[163] == '0');
boolean b163_2 =(buffer[163] == '|');
boolean b163_3 =(buffer[163] == 'c');
boolean b163_4 =(buffer[163] == '4');
boolean b163_5 =(buffer[163] == 'n');
boolean b163_6 =(buffer[163] == 'A');
boolean b164_1 =(buffer[164] == ' ');
boolean b164_2 =(buffer[164] == '>');
boolean b164_3 =(buffer[164] == '|');
boolean b164_4 =(buffer[164] == 'h');
boolean b164_5 =(buffer[164] == 'A');
boolean b164_6 =(buffer[164] == '1');
boolean b164_7 =(buffer[164] == '5');
boolean b164_8 =(buffer[164] == 't');
boolean b165_1 =(buffer[165] == '0');
boolean b165_2 =(buffer[165] == 'd');
boolean b165_3 =(buffer[165] == 'e');
boolean b165_4 =(buffer[165] == ' ');
boolean b165_5 =(buffer[165] == '|');
boolean b166_1 =(buffer[166] == '1');
boolean b166_2 =(buffer[166] == '|');
boolean b166_3 =(buffer[166] == '0');
boolean b166_4 =(buffer[166] == 'F');
boolean b166_5 =(buffer[166] == '6');
boolean b166_6 =(buffer[166] == 'r');
boolean b166_7 =(buffer[166] == 'D');
boolean b167_1 =(buffer[167] == ' ');
boolean b167_2 =(buffer[167] == '0');
boolean b167_3 =(buffer[167] == 'D');
boolean b167_4 =(buffer[167] == 'i');
boolean b167_5 =(buffer[167] == '.');
boolean b168_1 =(buffer[168] == '0');
boolean b168_2 =(buffer[168] == 'D');
boolean b168_3 =(buffer[168] == ' ');
boolean b168_4 =(buffer[168] == 'r');
boolean b168_5 =(buffer[168] == '2');
boolean b168_6 =(buffer[168] == 'P');
boolean b169_1 =(buffer[169] == '0');
boolean b169_2 =(buffer[169] == '|');
boolean b169_3 =(buffer[169] == ' ');
boolean b169_4 =(buffer[169] == 'e');
boolean b169_5 =(buffer[169] == '1');
boolean b169_6 =(buffer[169] == 'C');
boolean b169_7 =(buffer[169] == 'A');
boolean b170_1 =(buffer[170] == ' ');
boolean b170_2 =(buffer[170] == 'o');
boolean b170_3 =(buffer[170] == '0');
boolean b170_4 =(buffer[170] == 'A');
boolean b170_5 =(buffer[170] == 'f');
boolean b170_6 =(buffer[170] == '5');
boolean b170_7 =(buffer[170] == '|');
boolean b171_1 =(buffer[171] == '0');
boolean b171_2 =(buffer[171] == '|');
boolean b171_3 =(buffer[171] == 'A');
boolean b171_4 =(buffer[171] == 'o');
boolean b171_5 =(buffer[171] == '2');
boolean b171_6 =(buffer[171] == '6');
boolean b172_1 =(buffer[172] == '6');
boolean b172_2 =(buffer[172] == '0');
boolean b172_3 =(buffer[172] == ' ');
boolean b172_4 =(buffer[172] == 'x');
boolean b172_5 =(buffer[172] == '|');
boolean b172_6 =(buffer[172] == '.');
boolean b173_1 =(buffer[173] == ' ');
boolean b173_2 =(buffer[173] == '0');
boolean b173_3 =(buffer[173] == '/');
boolean b173_4 =(buffer[173] == '3');
boolean b174_1 =(buffer[174] == '8');
boolean b174_2 =(buffer[174] == '|');
boolean b174_3 =(buffer[174] == 'D');
boolean b174_4 =(buffer[174] == '2');
boolean b174_5 =(buffer[174] == 'B');
boolean b174_6 =(buffer[174] == ')');
boolean b175_1 =(buffer[175] == '0');
boolean b175_2 =(buffer[175] == ' ');
boolean b175_3 =(buffer[175] == '5');
boolean b175_4 =(buffer[175] == '|');
boolean b176_1 =(buffer[176] == ' ');
boolean b176_2 =(buffer[176] == '|');
boolean b176_3 =(buffer[176] == '0');
boolean b176_4 =(buffer[176] == '.');
boolean b177_1 =(buffer[177] == '0');
boolean b177_2 =(buffer[177] == 'A');
boolean b177_3 =(buffer[177] == '.');
boolean b178_1 =(buffer[178] == '2');
boolean b178_2 =(buffer[178] == '0');
boolean b178_3 =(buffer[178] == '|');
boolean b178_4 =(buffer[178] == 'N');
boolean b179_1 =(buffer[179] == ' ');
boolean b179_2 =(buffer[179] == '|');
boolean b179_3 =(buffer[179] == '0');
boolean b179_4 =(buffer[179] == 'E');
boolean b180_1 =(buffer[180] == '0');
boolean b180_2 =(buffer[180] == 'w');
boolean b180_3 =(buffer[180] == 'D');
boolean b180_4 =(buffer[180] == 'T');
boolean b181_1 =(buffer[181] == '0');
boolean b181_2 =(buffer[181] == '|');
boolean b181_3 =(buffer[181] == ' ');
boolean b182_1 =(buffer[182] == ' ');
boolean b182_2 =(buffer[182] == '0');
boolean b182_3 =(buffer[182] == 'C');
boolean b183_1 =(buffer[183] == '0');
boolean b183_2 =(buffer[183] == 'A');
boolean b183_3 =(buffer[183] == 'L');
boolean b184_1 =(buffer[184] == '2');
boolean b184_2 =(buffer[184] == '|');
boolean b184_3 =(buffer[184] == 'R');
boolean b185_1 =(buffer[185] == ' ');
boolean b185_2 =(buffer[185] == 'h');
boolean b185_3 =(buffer[185] == 'H');
boolean b186_1 =(buffer[186] == '8');
boolean b186_2 =(buffer[186] == '|');
boolean b186_3 =(buffer[186] == 'o');
boolean b186_4 =(buffer[186] == '3');
boolean b187_1 =(buffer[187] == '0');
boolean b187_2 =(buffer[187] == 's');
boolean b187_3 =(buffer[187] == '.');
boolean b188_1 =(buffer[188] == ' ');
boolean b188_2 =(buffer[188] == '0');
boolean b188_3 =(buffer[188] == 't');
boolean b188_4 =(buffer[188] == '5');
boolean b189_1 =(buffer[189] == '0');
boolean b189_2 =(buffer[189] == '|');
boolean b189_3 =(buffer[189] == ':');
boolean b189_4 =(buffer[189] == '.');
boolean b190_1 =(buffer[190] == '3');
boolean b190_2 =(buffer[190] == 'e');
boolean b190_3 =(buffer[190] == ' ');
boolean b191_1 =(buffer[191] == ' ');
boolean b191_2 =(buffer[191] == '|');
boolean b191_3 =(buffer[191] == '0');
boolean b192_1 =(buffer[192] == '0');
boolean b192_2 =(buffer[192] == '7');
boolean b193_1 =(buffer[193] == '0');
boolean b193_2 =(buffer[193] == '2');
boolean b194_1 =(buffer[194] == ' ');
boolean b194_2 =(buffer[194] == '|');
boolean b194_3 =(buffer[194] == '9');
boolean b195_1 =(buffer[195] == '0');
boolean b195_2 =(buffer[195] == 'r');
boolean b195_3 =(buffer[195] == ')');
boolean b196_1 =(buffer[196] == '3');
boolean b196_2 =(buffer[196] == '|');
boolean b197_1 =(buffer[197] == ' ');
boolean b197_2 =(buffer[197] == '0');
boolean b198_1 =(buffer[198] == '8');
boolean b198_2 =(buffer[198] == '0');
boolean b198_3 =(buffer[198] == 'D');
boolean b199_1 =(buffer[199] == '0');
boolean b199_2 =(buffer[199] == '|');
boolean b199_3 =(buffer[199] == ' ');
boolean b200_1 =(buffer[200] == ' ');
boolean b200_2 =(buffer[200] == 'e');
boolean b200_3 =(buffer[200] == '0');
boolean b201_1 =(buffer[201] == '0');
boolean b201_2 =(buffer[201] == '|');
boolean b201_3 =(buffer[201] == 'A');
boolean b202_1 =(buffer[202] == '4');
boolean b202_2 =(buffer[202] == '0');
boolean b202_3 =(buffer[202] == '|');
boolean b203_1 =(buffer[203] == ' ');
boolean b203_2 =(buffer[203] == '0');
boolean b203_3 =(buffer[203] == 'H');
boolean b204_1 =(buffer[204] == '0');
boolean b204_2 =(buffer[204] == '|');
boolean b204_3 =(buffer[204] == 'o');
boolean b205_1 =(buffer[205] == '0');
boolean b205_2 =(buffer[205] == ' ');
boolean b205_3 =(buffer[205] == 's');
boolean b206_1 =(buffer[206] == ' ');
boolean b206_2 =(buffer[206] == '|');
boolean b206_3 =(buffer[206] == 't');
boolean b207_1 =(buffer[207] == '0');
boolean b207_2 =(buffer[207] == ':');
boolean b208_1 =(buffer[208] == '5');
boolean b208_2 =(buffer[208] == '0');
boolean b208_3 =(buffer[208] == ' ');
boolean b209_1 =(buffer[209] == ' ');
boolean b209_2 =(buffer[209] == '|');
boolean b209_3 =(buffer[209] == 'i');
boolean b210_1 =(buffer[210] == '8');
boolean b210_2 =(buffer[210] == 'i');
boolean b210_3 =(buffer[210] == 'p');
boolean b211_1 =(buffer[211] == '0');
boolean b211_2 =(buffer[211] == '|');
boolean b211_3 =(buffer[211] == '-');
boolean b212_1 =(buffer[212] == ' ');
boolean b212_2 =(buffer[212] == '0');
boolean b212_3 =(buffer[212] == 'a');
boolean b213_1 =(buffer[213] == '0');
boolean b213_2 =(buffer[213] == 'd');
boolean b214_1 =(buffer[214] == 'B');
boolean b214_2 =(buffer[214] == '|');
boolean b214_3 =(buffer[214] == 'd');
boolean b215_1 =(buffer[215] == ' ');
boolean b215_2 =(buffer[215] == 'd');
boolean b215_3 =(buffer[215] == 'r');
boolean b216_1 =(buffer[216] == '0');
boolean b216_2 =(buffer[216] == '|');
boolean b216_3 =(buffer[216] == '.');
boolean b217_1 =(buffer[217] == '0');
boolean b217_2 =(buffer[217] == 'e');
boolean b218_1 =(buffer[218] == ' ');
boolean b218_2 =(buffer[218] == '0');
boolean b218_3 =(buffer[218] == 's');
boolean b219_1 =(buffer[219] == '0');
boolean b219_2 =(buffer[219] == '|');
boolean b220_1 =(buffer[220] == '1');
boolean b220_2 =(buffer[220] == '_');
boolean b220_3 =(buffer[220] == '0');
boolean b221_1 =(buffer[221] == ' ');
boolean b221_2 =(buffer[221] == '|');
boolean b221_3 =(buffer[221] == 'D');
boolean b222_1 =(buffer[222] == '0');
boolean b222_2 =(buffer[222] == ' ');
boolean b223_1 =(buffer[223] == '0');
boolean b224_1 =(buffer[224] == ' ');
boolean b224_2 =(buffer[224] == '|');
boolean b224_3 =(buffer[224] == 'A');
boolean b225_1 =(buffer[225] == '0');
boolean b225_2 =(buffer[225] == 'p');
boolean b225_3 =(buffer[225] == '|');
boolean b226_1 =(buffer[226] == 'C');
boolean b226_2 =(buffer[226] == '|');
boolean b227_1 =(buffer[227] == ' ');
boolean b227_2 =(buffer[227] == '0');
boolean b227_3 =(buffer[227] == 'a');
boolean b228_1 =(buffer[228] == '0');
boolean b228_2 =(buffer[228] == 'c');
boolean b229_1 =(buffer[229] == '0');
boolean b229_2 =(buffer[229] == '|');
boolean b229_3 =(buffer[229] == 'h');
boolean b230_1 =(buffer[230] == ' ');
boolean b230_2 =(buffer[230] == 'c');
boolean b230_3 =(buffer[230] == 'e');
boolean b231_1 =(buffer[231] == '0');
boolean b231_2 =(buffer[231] == '|');
boolean b231_3 =(buffer[231] == '-');
boolean b232_1 =(buffer[232] == '4');
boolean b232_2 =(buffer[232] == '0');
boolean b232_3 =(buffer[232] == 'C');
boolean b233_1 =(buffer[233] == ' ');
boolean b233_2 =(buffer[233] == '0');
boolean b233_3 =(buffer[233] == 'o');
boolean b234_1 =(buffer[234] == '0');
boolean b234_2 =(buffer[234] == '|');
boolean b234_3 =(buffer[234] == 'n');
boolean b235_1 =(buffer[235] == '0');
boolean b235_2 =(buffer[235] == '=');
boolean b235_3 =(buffer[235] == 't');
boolean b236_1 =(buffer[236] == ' ');
boolean b236_2 =(buffer[236] == '|');
boolean b236_3 =(buffer[236] == 'r');
boolean b237_1 =(buffer[237] == '0');
boolean b237_2 =(buffer[237] == 'o');
boolean b238_1 =(buffer[238] == '1');
boolean b238_2 =(buffer[238] == '0');
boolean b238_3 =(buffer[238] == 'l');
boolean b239_1 =(buffer[239] == '|');
boolean b239_2 =(buffer[239] == ':');
boolean b240_1 =(buffer[240] == 'Q');
boolean b240_2 =(buffer[240] == ' ');
boolean b241_1 =(buffer[241] == '|');
boolean b241_2 =(buffer[241] == 'n');
boolean b242_1 =(buffer[242] == '8');
boolean b242_2 =(buffer[242] == 'o');
boolean b243_1 =(buffer[243] == '0');
boolean b243_2 =(buffer[243] == '-');
boolean b244_1 =(buffer[244] == ' ');
boolean b244_2 =(buffer[244] == 'c');
boolean b245_1 =(buffer[245] == '0');
boolean b245_2 =(buffer[245] == 'a');
boolean b246_1 =(buffer[246] == '0');
boolean b246_2 =(buffer[246] == 'c');
boolean b247_1 =(buffer[247] == ' ');
boolean b247_2 =(buffer[247] == 'h');
boolean b248_1 =(buffer[248] == '0');
boolean b248_2 =(buffer[248] == 'e');
boolean b249_1 =(buffer[249] == '0');
boolean b249_2 =(buffer[249] == '|');
boolean b250_1 =(buffer[250] == ' ');
boolean b250_2 =(buffer[250] == '0');
boolean b251_1 =(buffer[251] == '0');
boolean b251_2 =(buffer[251] == 'D');
boolean b252_1 =(buffer[252] == '0');
boolean b252_2 =(buffer[252] == ' ');
boolean b253_1 =(buffer[253] == ' ');
boolean b253_2 =(buffer[253] == '0');
boolean b254_1 =(buffer[254] == '2');
boolean b254_2 =(buffer[254] == 'A');
boolean b255_1 =(buffer[255] == '4');
boolean b255_2 =(buffer[255] == ' ');
boolean b256_1 =(buffer[256] == ' ');
boolean b256_2 =(buffer[256] == '0');
boolean b257_1 =(buffer[257] == '0');
boolean b257_2 =(buffer[257] == 'D');
boolean b258_1 =(buffer[258] == '2');
boolean b258_2 =(buffer[258] == ' ');
boolean b259_1 =(buffer[259] == ' ');
boolean b259_2 =(buffer[259] == '0');
boolean b260_1 =(buffer[260] == '0');
boolean b260_2 =(buffer[260] == 'A');
boolean b261_1 =(buffer[261] == '1');
boolean b261_2 =(buffer[261] == '|');
boolean b262_1 =(buffer[262] == ' ');
boolean b263_1 =(buffer[263] == '0');
boolean b264_1 =(buffer[264] == '0');
boolean b265_1 =(buffer[265] == ' ');
boolean b266_1 =(buffer[266] == '0');
boolean b267_1 =(buffer[267] == '0');
boolean b268_1 =(buffer[268] == ' ');
boolean b269_1 =(buffer[269] == '8');
boolean b270_1 =(buffer[270] == '0');
boolean b271_1 =(buffer[271] == ' ');
boolean b272_1 =(buffer[272] == '0');
boolean b273_1 =(buffer[273] == '1');
boolean b274_1 =(buffer[274] == ' ');
boolean b275_1 =(buffer[275] == '0');
boolean b276_1 =(buffer[276] == '0');
boolean b277_1 =(buffer[277] == ' ');
boolean b278_1 =(buffer[278] == '0');
boolean b279_1 =(buffer[279] == '5');
boolean b280_1 =(buffer[280] == ' ');
boolean b281_1 =(buffer[281] == '8');
boolean b282_1 =(buffer[282] == '0');
boolean b283_1 =(buffer[283] == ' ');
boolean b284_1 =(buffer[284] == '0');
boolean b285_1 =(buffer[285] == '2');
boolean b286_1 =(buffer[286] == ' ');
boolean b287_1 =(buffer[287] == '0');
boolean b288_1 =(buffer[288] == '0');
boolean b289_1 =(buffer[289] == ' ');
boolean b290_1 =(buffer[290] == '0');
boolean b291_1 =(buffer[291] == '1');
boolean b292_1 =(buffer[292] == ' ');
boolean b293_1 =(buffer[293] == '8');
boolean b294_1 =(buffer[294] == '0');
boolean b295_1 =(buffer[295] == ' ');
boolean b296_1 =(buffer[296] == '0');
boolean b297_1 =(buffer[297] == '3');
boolean b298_1 =(buffer[298] == ' ');
boolean b299_1 =(buffer[299] == '0');
boolean b300_1 =(buffer[300] == '0');
boolean b301_1 =(buffer[301] == ' ');
boolean b302_1 =(buffer[302] == '0');
boolean b303_1 =(buffer[303] == '3');
boolean b304_1 =(buffer[304] == ' ');
boolean b305_1 =(buffer[305] == '8');
boolean b306_1 =(buffer[306] == '0');
boolean b307_1 =(buffer[307] == ' ');
boolean b308_1 =(buffer[308] == '0');
boolean b309_1 =(buffer[309] == '4');
boolean b310_1 =(buffer[310] == ' ');
boolean b311_1 =(buffer[311] == '0');
boolean b312_1 =(buffer[312] == '0');
boolean b313_1 =(buffer[313] == ' ');
boolean b314_1 =(buffer[314] == '0');
boolean b315_1 =(buffer[315] == '2');
boolean b316_1 =(buffer[316] == ' ');
boolean b317_1 =(buffer[317] == '8');
boolean b318_1 =(buffer[318] == '0');
boolean b319_1 =(buffer[319] == ' ');
boolean b320_1 =(buffer[320] == '0');
boolean b321_1 =(buffer[321] == 'B');
boolean b322_1 =(buffer[322] == ' ');
boolean b323_1 =(buffer[323] == '0');
boolean b324_1 =(buffer[324] == '0');
boolean b325_1 =(buffer[325] == ' ');
boolean b326_1 =(buffer[326] == '0');
boolean b327_1 =(buffer[327] == '1');
boolean b328_1 =(buffer[328] == ' ');
boolean b329_1 =(buffer[329] == '0');
boolean b330_1 =(buffer[330] == '0');
boolean b331_1 =(buffer[331] == ' ');
boolean b332_1 =(buffer[332] == '0');
boolean b333_1 =(buffer[333] == 'C');
boolean b334_1 =(buffer[334] == ' ');
boolean b335_1 =(buffer[335] == '0');
boolean b336_1 =(buffer[336] == '0');
boolean b337_1 =(buffer[337] == ' ');
boolean b338_1 =(buffer[338] == '0');
boolean b339_1 =(buffer[339] == '4');
boolean b340_1 =(buffer[340] == ' ');
boolean b341_1 =(buffer[341] == '0');
boolean b342_1 =(buffer[342] == '0');
boolean b343_1 =(buffer[343] == ' ');
boolean b344_1 =(buffer[344] == '0');
boolean b345_1 =(buffer[345] == '1');
boolean b346_1 =(buffer[346] == '|');
boolean b347_1 =(buffer[347] == 'Q');
boolean b348_1 =(buffer[348] == '|');
boolean b349_1 =(buffer[349] == '8');
boolean b350_1 =(buffer[350] == '0');
boolean b351_1 =(buffer[351] == ' ');
boolean b352_1 =(buffer[352] == '0');
boolean b353_1 =(buffer[353] == '0');
boolean b354_1 =(buffer[354] == ' ');
boolean b355_1 =(buffer[355] == '0');
boolean b356_1 =(buffer[356] == '0');
boolean b357_1 =(buffer[357] == ' ');
boolean b358_1 =(buffer[358] == '0');
boolean b359_1 =(buffer[359] == '0');
boolean b360_1 =(buffer[360] == ' ');
boolean b361_1 =(buffer[361] == '1');
boolean b362_1 =(buffer[362] == '0');
boolean b363_1 =(buffer[363] == '|');
if(b0_1 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_1 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_1 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1 && b23_1 && b24_1 && b25_1 && b26_1 && b27_1 && b28_1 && b29_1 && b30_1 && b31_1 && b32_1 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 0;
}
if(b0_2 && b1_2 && b2_2 && b3_2 && b4_2 && b5_2 && b6_2 && b7_2 && b8_2 && b9_2) {
matched = true;
pattern_id = 1;
}
if(b0_3 && b1_3 && b2_3 && b3_3 && b4_3 && b5_3 && b6_3 && b7_3 && b8_1 && b9_3 && b10_2) {
matched = true;
pattern_id = 2;
}
if(b0_4 && b1_4 && b2_4 && b3_4 && b4_4 && b5_4 && b6_1 && b7_4 && b8_3 && b9_1 && b10_3 && b11_2 && b12_2 && b13_2 && b14_2) {
matched = true;
pattern_id = 3;
}
if(b0_5 && b1_5 && b2_5 && b3_5 && b4_5 && b5_5 && b6_4 && b7_5) {
matched = true;
pattern_id = 4;
}
if(b0_6 && b1_3 && b2_6 && b3_6 && b4_6 && b5_6 && b6_5 && b7_6 && b8_4 && b9_4 && b10_1) {
matched = true;
pattern_id = 5;
}
if(b0_5 && b1_6 && b2_2 && b3_7 && b4_7 && b5_4 && b6_6 && b7_7 && b8_5) {
matched = true;
pattern_id = 6;
}
if(b0_7 && b1_7 && b2_7) {
matched = true;
pattern_id = 7;
}
if(b0_8 && b1_8 && b2_8 && b3_8) {
matched = true;
pattern_id = 8;
}
if(b0_9 && b1_9 && b2_9 && b3_9) {
matched = true;
pattern_id = 9;
}
if(b0_10 && b1_3 && b2_3 && b3_10 && b4_7 && b5_7 && b6_7 && b7_8 && b8_5) {
matched = true;
pattern_id = 10;
}
if(b0_3 && b1_2 && b2_3 && b3_11 && b4_8 && b5_8 && b6_8 && b7_7 && b8_6 && b9_5 && b10_4) {
matched = true;
pattern_id = 11;
}
if(b0_11 && b1_1 && b2_10 && b3_12 && b4_1 && b5_9 && b6_9 && b7_3) {
matched = true;
pattern_id = 12;
}
if(b0_7 && b1_10 && b2_11 && b3_13 && b4_9) {
matched = true;
pattern_id = 13;
}
if(b0_7 && b1_10 && b2_11 && b3_14 && b4_10 && b5_10 && b6_10 && b7_9 && b8_3 && b9_6 && b10_5 && b11_3 && b12_3) {
matched = true;
pattern_id = 14;
}
if(b0_12 && b1_11 && b2_3 && b3_15 && b4_11 && b5_11 && b6_11 && b7_10) {
matched = true;
pattern_id = 15;
}
if(b0_13 && b1_8 && b2_12 && b3_16 && b4_12 && b5_12 && b6_12 && b7_11 && b8_7) {
matched = true;
pattern_id = 16;
}
if(b0_14 && b1_12 && b2_13 && b3_14 && b4_13 && b5_13 && b6_5) {
matched = true;
pattern_id = 17;
}
if(b0_15 && b1_13 && b2_14 && b3_1 && b4_14 && b5_11) {
matched = true;
pattern_id = 18;
}
if(b0_16 && b1_14 && b2_15 && b3_17 && b4_15 && b5_4 && b6_13 && b7_12 && b8_3 && b9_7 && b10_6 && b11_4 && b12_4 && b13_3 && b14_3 && b15_2 && b16_2 && b17_2 && b18_2 && b19_2 && b20_2 && b21_2) {
matched = true;
pattern_id = 19;
}
if(b0_17 && b1_14 && b2_5 && b3_18 && b4_12 && b5_4 && b6_14 && b7_10 && b8_8 && b9_6 && b10_1 && b11_5 && b12_5 && b13_4 && b14_4 && b15_3 && b16_3) {
matched = true;
pattern_id = 20;
}
if(b0_18 && b1_15 && b2_1 && b3_2 && b4_4 && b5_1) {
matched = true;
pattern_id = 21;
}
if(b0_19 && b1_2 && b2_16 && b3_19 && b4_16 && b5_10 && b6_3 && b7_8) {
matched = true;
pattern_id = 22;
}
if(b0_20 && b1_15 && b2_1 && b3_8) {
matched = true;
pattern_id = 23;
}
if(b0_20 && b1_3 && b2_17 && b3_8) {
matched = true;
pattern_id = 24;
}
if(b0_18 && b1_14 && b2_1 && b3_1 && b4_6 && b5_14) {
matched = true;
pattern_id = 25;
}
if(b0_13 && b1_16 && b2_18 && b3_20 && b4_4 && b5_2) {
matched = true;
pattern_id = 26;
}
if(b0_21 && b1_17 && b2_10 && b3_17 && b4_15 && b5_15) {
matched = true;
pattern_id = 27;
}
if(b0_22 && b1_2 && b2_3 && b3_6 && b4_17 && b5_16) {
matched = true;
pattern_id = 28;
}
if(b0_8 && b1_2 && b2_19 && b3_1 && b4_17) {
matched = true;
pattern_id = 29;
}
if(b0_23 && b1_16 && b2_14 && b3_21 && b4_18 && b5_17) {
matched = true;
pattern_id = 30;
}
if(b0_24 && b1_6 && b2_20 && b3_6 && b4_19 && b5_18) {
matched = true;
pattern_id = 31;
}
if(b0_18 && b1_2 && b2_21 && b3_19) {
matched = true;
pattern_id = 32;
}
if(b0_25 && b1_18 && b2_10 && b3_22) {
matched = true;
pattern_id = 33;
}
if(b0_16 && b1_19 && b2_5 && b3_12 && b4_20 && b5_19 && b6_15 && b7_13 && b8_4 && b9_8) {
matched = true;
pattern_id = 34;
}
if(b0_26 && b1_20 && b2_22 && b3_23) {
matched = true;
pattern_id = 35;
}
if(b0_22 && b1_21 && b2_16 && b3_19 && b4_12 && b5_20) {
matched = true;
pattern_id = 36;
}
if(b0_23 && b1_21 && b2_16 && b3_19 && b4_12 && b5_20) {
matched = true;
pattern_id = 37;
}
if(b0_22 && b1_13 && b2_20 && b3_6 && b4_21 && b5_21 && b6_3 && b7_8 && b8_9 && b9_9) {
matched = true;
pattern_id = 38;
}
if(b0_22 && b1_22 && b2_14 && b3_24 && b4_22 && b5_22) {
matched = true;
pattern_id = 39;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_23 && b6_16 && b7_13 && b8_10) {
matched = true;
pattern_id = 40;
}
if(b0_13 && b1_23 && b2_13) {
matched = true;
pattern_id = 41;
}
if(b0_27 && b1_5 && b2_9 && b3_25 && b4_23 && b5_24 && b6_17) {
matched = true;
pattern_id = 42;
}
if(b0_19 && b1_3 && b2_3 && b3_26 && b4_18 && b5_25 && b6_18 && b7_14 && b8_2 && b9_10 && b10_7 && b11_6 && b12_3 && b13_5) {
matched = true;
pattern_id = 43;
}
if(b0_28 && b1_20 && b2_23 && b3_26 && b4_11 && b5_6) {
matched = true;
pattern_id = 44;
}
if(b0_29 && b1_21 && b2_24 && b3_24 && b4_24 && b5_6) {
matched = true;
pattern_id = 45;
}
if(b0_28 && b1_3 && b2_8 && b3_7 && b4_3 && b5_12 && b6_19 && b7_10 && b8_11 && b9_10 && b10_8) {
matched = true;
pattern_id = 46;
}
if(b0_13 && b1_23 && b2_13 && b3_26 && b4_16 && b5_26 && b6_20) {
matched = true;
pattern_id = 47;
}
if(b0_22 && b1_14 && b2_25 && b3_24 && b4_22 && b5_4 && b6_21 && b7_14 && b8_12 && b9_11 && b10_7) {
matched = true;
pattern_id = 48;
}
if(b0_12 && b1_24 && b2_14 && b3_27 && b4_12 && b5_4 && b6_11 && b7_11 && b8_13 && b9_12 && b10_9) {
matched = true;
pattern_id = 49;
}
if(b0_12 && b1_24 && b2_14 && b3_27 && b4_12) {
matched = true;
pattern_id = 50;
}
if(b0_30 && b1_3 && b2_17 && b3_18 && b4_12 && b5_8 && b6_22 && b7_10 && b8_8) {
matched = true;
pattern_id = 51;
}
if(b0_22 && b1_6 && b2_23 && b3_11 && b4_18 && b5_27 && b6_23) {
matched = true;
pattern_id = 52;
}
if(b0_17 && b1_21 && b2_21 && b3_16) {
matched = true;
pattern_id = 53;
}
if(b0_17 && b1_8 && b2_21 && b3_16) {
matched = true;
pattern_id = 54;
}
if(b0_31) {
matched = true;
pattern_id = 55;
}
if(b0_14 && b1_25 && b2_26 && b3_14 && b4_25 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 56;
}
if(b0_14 && b1_25 && b2_27 && b3_14 && b4_25 && b5_1 && b6_5) {
matched = true;
pattern_id = 57;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 58;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_18 && b5_29 && b6_11 && b7_2 && b8_14 && b9_14 && b10_11) {
matched = true;
pattern_id = 59;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_11 && b5_6 && b6_10 && b7_7 && b8_11 && b9_6 && b10_12) {
matched = true;
pattern_id = 60;
}
if(b0_32 && b1_26 && b2_29 && b3_29 && b4_26 && b5_30 && b6_2 && b7_15 && b8_15) {
matched = true;
pattern_id = 61;
}
if(b0_33 && b1_14 && b2_14 && b3_18 && b4_27 && b5_26 && b6_24 && b7_14 && b8_16 && b9_5 && b10_13 && b11_3 && b12_7 && b13_6 && b14_5 && b15_5 && b16_5 && b17_4 && b18_4 && b19_4 && b20_3 && b21_5 && b22_3 && b23_3 && b24_3 && b25_3 && b26_3 && b27_3 && b28_3 && b29_3 && b30_3 && b31_2 && b32_2 && b33_2 && b34_2 && b35_2 && b36_1 && b37_1 && b38_1 && b39_1 && b40_1 && b41_1 && b42_1 && b43_1 && b44_1 && b45_1 && b46_1 && b47_1 && b48_1 && b49_1 && b50_1 && b51_1 && b52_1 && b53_1 && b54_1 && b55_1 && b56_1 && b57_1 && b58_1 && b59_1 && b60_1 && b61_1 && b62_1 && b63_1 && b64_1 && b65_1 && b66_1 && b67_1 && b68_1 && b69_1 && b70_1 && b71_1 && b72_1 && b73_1 && b74_1 && b75_1 && b76_1 && b77_1 && b78_1 && b79_1 && b80_1 && b81_1 && b82_1 && b83_1 && b84_1 && b85_1 && b86_1 && b87_1 && b88_1 && b89_1 && b90_1 && b91_1 && b92_1 && b93_1 && b94_1 && b95_1 && b96_1 && b97_1 && b98_1 && b99_1 && b100_1 && b101_1 && b102_1 && b103_1 && b104_1 && b105_1 && b106_1) {
matched = true;
pattern_id = 62;
}
if(b0_16 && b1_27 && b2_30 && b3_9 && b4_28 && b5_31 && b6_25 && b7_16) {
matched = true;
pattern_id = 63;
}
if(b0_14 && b1_7 && b2_31 && b3_14 && b4_25 && b5_1 && b6_12 && b7_17 && b8_17 && b9_13 && b10_14 && b11_8 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_4 && b21_4 && b22_4 && b23_4 && b24_4 && b25_4 && b26_4 && b27_4 && b28_4) {
matched = true;
pattern_id = 64;
}
if(b0_25 && b1_1 && b2_32 && b3_1 && b4_1 && b5_32 && b6_1 && b7_3 && b8_18 && b9_15 && b10_2 && b11_9 && b12_8 && b13_1 && b14_7 && b15_6 && b16_1 && b17_5 && b18_5 && b19_6 && b20_5 && b21_4 && b22_5 && b23_5 && b24_2 && b25_5 && b26_5 && b27_2 && b28_5 && b29_2 && b30_2 && b31_3 && b32_3 && b33_3 && b34_1 && b35_1) {
matched = true;
pattern_id = 65;
}
if(b0_25 && b1_1 && b2_32 && b3_1 && b4_1 && b5_32 && b6_1 && b7_1 && b8_1 && b9_16 && b10_1 && b11_10 && b12_9 && b13_1 && b14_8 && b15_1 && b16_1 && b17_6 && b18_6 && b19_1 && b20_6 && b21_1 && b22_1 && b23_6 && b24_5 && b25_6 && b26_6 && b27_5 && b28_6 && b29_4 && b30_4 && b31_4 && b32_4 && b33_1 && b34_3) {
matched = true;
pattern_id = 66;
}
if(b0_14 && b1_25 && b2_33 && b3_14 && b4_29 && b5_33 && b6_12 && b7_18 && b8_19 && b9_13 && b10_15 && b11_8 && b12_6 && b13_8 && b14_9 && b15_4 && b16_6 && b17_7 && b18_3 && b19_7 && b20_7 && b21_3 && b22_6 && b23_5 && b24_2 && b25_7 && b26_7 && b27_2 && b28_7 && b29_5 && b30_5 && b31_5 && b32_5 && b33_4 && b34_4 && b35_1 && b36_2 && b37_2 && b38_2) {
matched = true;
pattern_id = 67;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_3 && b5_34 && b6_5 && b7_19 && b8_20 && b9_13 && b10_10 && b11_11 && b12_6 && b13_9 && b14_10 && b15_7 && b16_7 && b17_8 && b18_7 && b19_8 && b20_8 && b21_6 && b22_7 && b23_7 && b24_6 && b25_6 && b26_2 && b27_6 && b28_8 && b29_6 && b30_6 && b31_4 && b32_6 && b33_4 && b34_1 && b35_3 && b36_3) {
matched = true;
pattern_id = 68;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_30 && b5_19 && b6_12 && b7_19 && b8_1 && b9_13 && b10_10 && b11_12 && b12_6 && b13_9 && b14_1 && b15_4 && b16_4 && b17_9 && b18_8 && b19_1 && b20_9 && b21_1 && b22_8 && b23_8 && b24_7 && b25_8 && b26_8 && b27_7 && b28_9 && b29_1 && b30_5 && b31_4 && b32_7 && b33_5 && b34_5 && b35_4 && b36_4 && b37_3 && b38_3 && b39_2 && b40_2 && b41_2 && b42_2 && b43_2 && b44_2 && b45_2 && b46_2) {
matched = true;
pattern_id = 69;
}
if(b0_34 && b1_30 && b2_35 && b3_26 && b4_6 && b5_7) {
matched = true;
pattern_id = 70;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_13 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_9 && b12_6 && b13_2 && b14_11 && b15_7) {
matched = true;
pattern_id = 71;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_26 && b6_3 && b7_21 && b8_8 && b9_17 && b10_17 && b11_13 && b12_4 && b13_5 && b14_12 && b15_5 && b16_8 && b17_10 && b18_9 && b19_9 && b20_10 && b21_7 && b22_3 && b23_9 && b24_8 && b25_9) {
matched = true;
pattern_id = 72;
}
if(b0_10 && b1_19 && b2_30 && b3_30 && b4_9 && b5_19 && b6_13 && b7_17) {
matched = true;
pattern_id = 73;
}
if(b0_36 && b1_1 && b2_32 && b3_31 && b4_1 && b5_32 && b6_26 && b7_1 && b8_22 && b9_1 && b10_2 && b11_14 && b12_10 && b13_10 && b14_9 && b15_4 && b16_4 && b17_11 && b18_8 && b19_10 && b20_11 && b21_4 && b22_6 && b23_10 && b24_9 && b25_10 && b26_9 && b27_8 && b28_10 && b29_2 && b30_2 && b31_6 && b32_3 && b33_5 && b34_6 && b35_5 && b36_5 && b37_4 && b38_2 && b39_3) {
matched = true;
pattern_id = 74;
}
if(b0_37 && b1_1 && b2_1 && b3_30 && b4_32 && b5_28 && b6_5 && b7_19 && b8_1 && b9_13 && b10_18 && b11_1 && b12_6 && b13_11 && b14_7 && b15_4 && b16_9 && b17_12 && b18_8 && b19_11 && b20_9 && b21_1 && b22_9 && b23_8 && b24_10 && b25_11 && b26_8 && b27_9 && b28_11 && b29_7 && b30_7 && b31_7 && b32_1 && b33_5 && b34_7 && b35_1) {
matched = true;
pattern_id = 75;
}
if(b0_8 && b1_33 && b2_37 && b3_28 && b4_29 && b5_35 && b6_12 && b7_22 && b8_23 && b9_13 && b10_16 && b11_12 && b12_6 && b13_12 && b14_13 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_12 && b21_3 && b22_8 && b23_11 && b24_2 && b25_12 && b26_10 && b27_2 && b28_12 && b29_2 && b30_2 && b31_8 && b32_8) {
matched = true;
pattern_id = 76;
}
if(b0_14 && b1_27 && b2_38 && b3_28 && b4_33 && b5_23 && b6_9 && b7_22 && b8_3 && b9_18 && b10_10 && b11_2 && b12_11 && b13_8 && b14_3 && b15_8 && b16_10 && b17_2 && b18_5 && b19_5 && b20_8 && b21_8 && b22_6 && b23_8 && b24_11 && b25_12 && b26_11 && b27_10 && b28_13 && b29_3 && b30_3 && b31_9 && b32_9 && b33_6) {
matched = true;
pattern_id = 77;
}
if(b0_38 && b1_1 && b2_1 && b3_30 && b4_32 && b5_28 && b6_5 && b7_19 && b8_1 && b9_13 && b10_18 && b11_1 && b12_6 && b13_11 && b14_7 && b15_4 && b16_9 && b17_12 && b18_8 && b19_11 && b20_9 && b21_9 && b22_10 && b23_8 && b24_10 && b25_11 && b26_8 && b27_9 && b28_12 && b29_7 && b30_7 && b31_7 && b32_1 && b33_5 && b34_7 && b35_1) {
matched = true;
pattern_id = 78;
}
if(b0_14 && b1_28 && b2_38 && b3_14 && b4_34 && b5_36 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_7 && b16_11 && b17_13 && b18_10 && b19_12 && b20_13 && b21_10 && b22_11) {
matched = true;
pattern_id = 79;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_35 && b5_37 && b6_5 && b7_17 && b8_24 && b9_4 && b10_19 && b11_15 && b12_10 && b13_8 && b14_9 && b15_4 && b16_6 && b17_14 && b18_3 && b19_7 && b20_7 && b21_4 && b22_12 && b23_7 && b24_10 && b25_11 && b26_8 && b27_9 && b28_9 && b29_1) {
matched = true;
pattern_id = 80;
}
if(b0_14 && b1_28 && b2_34 && b3_14 && b4_36 && b5_38 && b6_5 && b7_23 && b8_25 && b9_4 && b10_15 && b11_1 && b12_6 && b13_8 && b14_8 && b15_7 && b16_6 && b17_8 && b18_5 && b19_13 && b20_8 && b21_6 && b22_7 && b23_7 && b24_11 && b25_6 && b26_12 && b27_11 && b28_8 && b29_8 && b30_8 && b31_4 && b32_10) {
matched = true;
pattern_id = 81;
}
if(b0_39 && b1_1 && b2_1 && b3_32 && b4_1 && b5_39 && b6_27 && b7_3 && b8_26 && b9_4 && b10_10 && b11_16 && b12_6 && b13_8 && b14_14 && b15_7 && b16_12 && b17_8 && b18_1 && b19_7 && b20_8 && b21_6 && b22_7 && b23_7 && b24_12 && b25_6 && b26_2 && b27_12 && b28_8 && b29_9 && b30_9 && b31_10 && b32_7 && b33_7 && b34_5 && b35_6 && b36_5 && b37_3 && b38_4 && b39_4 && b40_3 && b41_3 && b42_3 && b43_3 && b44_3 && b45_3 && b46_3 && b47_2 && b48_2 && b49_2 && b50_2 && b51_2 && b52_2 && b53_2 && b54_2 && b55_2 && b56_2 && b57_2 && b58_2 && b59_2 && b60_2 && b61_2 && b62_2 && b63_2 && b64_2 && b65_2 && b66_2 && b67_2 && b68_2 && b69_2 && b70_2 && b71_2 && b72_2 && b73_2 && b74_2 && b75_2 && b76_2 && b77_2 && b78_2 && b79_2 && b80_2 && b81_2 && b82_2 && b83_2) {
matched = true;
pattern_id = 82;
}
if(b0_40 && b1_34 && b2_39 && b3_33 && b4_37 && b5_40 && b6_26 && b7_24 && b8_27 && b9_19 && b10_20 && b11_17 && b12_2 && b13_2 && b14_2 && b15_9 && b16_13 && b17_8 && b18_11) {
matched = true;
pattern_id = 83;
}
if(b0_14 && b1_19 && b2_34 && b3_14 && b4_8 && b5_41 && b6_12 && b7_4 && b8_19 && b9_13 && b10_21 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_4 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_3 && b51_3 && b52_3 && b53_3 && b54_2 && b55_3 && b56_3 && b57_3 && b58_3 && b59_3 && b60_3) {
matched = true;
pattern_id = 84;
}
if(b0_14 && b1_28 && b2_34 && b3_14 && b4_38 && b5_35 && b6_5 && b7_25 && b8_28 && b9_4 && b10_16 && b11_18 && b12_10 && b13_13 && b14_2 && b15_10 && b16_9 && b17_2 && b18_5 && b19_14 && b20_9 && b21_11 && b22_1 && b23_5 && b24_13 && b25_6) {
matched = true;
pattern_id = 85;
}
if(b0_18 && b1_14 && b2_20 && b3_15 && b4_2 && b5_23 && b6_16 && b7_13 && b8_10 && b9_20 && b10_22) {
matched = true;
pattern_id = 86;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14) {
matched = true;
pattern_id = 87;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_39 && b5_15 && b6_29 && b7_18 && b8_10 && b9_22 && b10_23 && b11_2 && b12_13 && b13_11 && b14_3 && b15_11 && b16_14 && b17_2 && b18_1 && b19_15 && b20_9 && b21_12 && b22_1 && b23_13 && b24_10 && b25_13 && b26_13 && b27_13 && b28_8 && b29_9 && b30_7 && b31_4 && b32_11 && b33_9) {
matched = true;
pattern_id = 88;
}
if(b0_14 && b1_12 && b2_13 && b3_28 && b4_1 && b5_23 && b6_30 && b7_26 && b8_10 && b9_23 && b10_2 && b11_16 && b12_8 && b13_1 && b14_15 && b15_11 && b16_1 && b17_6 && b18_12 && b19_1 && b20_14 && b21_13 && b22_13 && b23_2 && b24_14 && b25_13 && b26_14 && b27_5 && b28_8 && b29_10 && b30_8 && b31_4 && b32_12 && b33_4 && b34_8 && b35_8 && b36_3 && b37_5 && b38_2 && b39_6 && b40_5 && b41_5 && b42_5 && b43_4 && b44_5) {
matched = true;
pattern_id = 89;
}
if(b0_23 && b1_16 && b2_20 && b3_34 && b4_32 && b5_38 && b6_15 && b7_1 && b8_19 && b9_1 && b10_1 && b11_19 && b12_2 && b13_1 && b14_9 && b15_1 && b16_1 && b17_15 && b18_1 && b19_1 && b20_7 && b21_1 && b22_13 && b23_5 && b24_15 && b25_13 && b26_7 && b27_7 && b28_8 && b29_11 && b30_9 && b31_10 && b32_13 && b33_1 && b34_5 && b35_8 && b36_4 && b37_3 && b38_6 && b39_4 && b40_3) {
matched = true;
pattern_id = 90;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_40 && b5_23 && b6_31 && b7_27 && b8_10 && b9_13 && b10_24 && b11_20 && b12_14 && b13_15 && b14_2 && b15_6 && b16_15 && b17_16 && b18_13 && b19_1 && b20_15 && b21_9 && b22_13 && b23_13 && b24_16 && b25_13 && b26_14 && b27_5 && b28_8 && b29_12 && b30_10 && b31_10 && b32_14 && b33_1 && b34_3 && b35_9) {
matched = true;
pattern_id = 91;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_5 && b30_5 && b31_11 && b32_15 && b33_8 && b34_9 && b35_10 && b36_3) {
matched = true;
pattern_id = 92;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_30 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_15 && b27_8 && b28_14 && b29_1 && b30_9 && b31_11 && b32_1 && b33_1 && b34_10 && b35_5 && b36_4 && b37_6 && b38_2) {
matched = true;
pattern_id = 93;
}
if(b0_37 && b1_1 && b2_34 && b3_1 && b4_1 && b5_1 && b6_32 && b7_1 && b8_17 && b9_24 && b10_1 && b11_1 && b12_1 && b13_1 && b14_6 && b15_12 && b16_1 && b17_16 && b18_14 && b19_1 && b20_16 && b21_13 && b22_1 && b23_14 && b24_9 && b25_2 && b26_16 && b27_2 && b28_15 && b29_2 && b30_5 && b31_11 && b32_10 && b33_8 && b34_11 && b35_8 && b36_3 && b37_7) {
matched = true;
pattern_id = 94;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_41 && b5_34 && b6_33 && b7_28 && b8_31 && b9_15 && b10_2 && b11_9 && b12_15 && b13_1 && b14_8 && b15_13 && b16_15 && b17_17 && b18_8 && b19_3 && b20_15 && b21_3 && b22_8 && b23_13 && b24_9 && b25_14 && b26_11 && b27_6 && b28_16 && b29_1) {
matched = true;
pattern_id = 95;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_33 && b5_34 && b6_26 && b7_3 && b8_32 && b9_1 && b10_2 && b11_21 && b12_10 && b13_8 && b14_9 && b15_7 && b16_6 && b17_8 && b18_1 && b19_16 && b20_8 && b21_6 && b22_7 && b23_8 && b24_12 && b25_15 && b26_11 && b27_14 && b28_6 && b29_8 && b30_8 && b31_10 && b32_7 && b33_10 && b34_3) {
matched = true;
pattern_id = 96;
}
if(b0_11 && b1_35 && b2_41 && b3_35 && b4_17 && b5_10 && b6_3 && b7_9 && b8_2 && b9_25) {
matched = true;
pattern_id = 97;
}
if(b0_12 && b1_36 && b2_42 && b3_14 && b4_14 && b5_4 && b6_34 && b7_1 && b8_5 && b9_13 && b10_25) {
matched = true;
pattern_id = 98;
}
if(b0_22 && b1_3 && b2_43 && b3_20 && b4_14 && b5_7) {
matched = true;
pattern_id = 99;
}
if(b0_20 && b1_8 && b2_20 && b3_8) {
matched = true;
pattern_id = 100;
}
if(b0_14 && b1_15 && b2_1 && b3_28) {
matched = true;
pattern_id = 101;
}
if(b0_14 && b1_37 && b2_34 && b3_28) {
matched = true;
pattern_id = 102;
}
if(b0_14 && b1_38 && b2_32 && b3_28) {
matched = true;
pattern_id = 103;
}
if(b0_41 && b1_39) {
matched = true;
pattern_id = 104;
}
if(b0_41) {
matched = true;
pattern_id = 105;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_1 && b5_4 && b6_12 && b7_1 && b8_3) {
matched = true;
pattern_id = 106;
}
if(b0_42) {
matched = true;
pattern_id = 107;
}
if(b0_32) {
matched = true;
pattern_id = 108;
}
if(b0_32 && b1_40 && b2_20 && b3_20 && b4_31 && b5_11 && b6_10 && b7_29) {
matched = true;
pattern_id = 109;
}
if(b0_32 && b1_16 && b2_15 && b3_6 && b4_2 && b5_42 && b6_24) {
matched = true;
pattern_id = 110;
}
if(b0_39 && b1_41 && b2_31) {
matched = true;
pattern_id = 111;
}
if(b0_39 && b1_28 && b2_44) {
matched = true;
pattern_id = 112;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_1 && b5_12 && b6_34 && b7_29 && b8_33 && b9_4 && b10_10 && b11_22 && b12_10) {
matched = true;
pattern_id = 113;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_35 && b7_7 && b8_2 && b9_26 && b10_26 && b11_5 && b12_16) {
matched = true;
pattern_id = 114;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_21 && b6_19 && b7_4 && b8_1 && b9_10) {
matched = true;
pattern_id = 115;
}
if(b0_6 && b1_28 && b2_40 && b3_9) {
matched = true;
pattern_id = 116;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_36 && b7_30 && b8_34 && b9_27 && b10_9 && b11_5) {
matched = true;
pattern_id = 117;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_24 && b7_31 && b8_11 && b9_11 && b10_13) {
matched = true;
pattern_id = 118;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_1 && b5_43 && b6_24 && b7_31 && b8_35 && b9_27 && b10_12) {
matched = true;
pattern_id = 119;
}
if(b0_32 && b1_42 && b2_46 && b3_1 && b4_26) {
matched = true;
pattern_id = 120;
}
if(b0_24 && b1_43 && b2_40 && b3_30) {
matched = true;
pattern_id = 121;
}
if(b0_43 && b1_44 && b2_47 && b3_7 && b4_2 && b5_6 && b6_37 && b7_32 && b8_14 && b9_28 && b10_5 && b11_23 && b12_5 && b13_16 && b14_5 && b15_14 && b16_16 && b17_18 && b18_15 && b19_17 && b20_17 && b21_14 && b22_14 && b23_8) {
matched = true;
pattern_id = 122;
}
if(b0_14 && b1_17 && b2_1 && b3_14 && b4_30 && b5_28 && b6_12 && b7_33 && b8_27 && b9_13 && b10_27 && b11_17 && b12_6 && b13_14 && b14_13 && b15_4 && b16_7 && b17_19 && b18_3 && b19_18 && b20_18 && b21_3 && b22_15 && b23_15 && b24_2 && b25_16 && b26_14 && b27_2 && b28_17 && b29_11 && b30_5 && b31_3 && b32_16 && b33_8 && b34_10 && b35_11 && b36_6 && b37_8 && b38_7 && b39_5 && b40_6 && b41_6 && b42_4 && b43_5 && b44_6 && b45_3 && b46_5 && b47_4 && b48_3) {
matched = true;
pattern_id = 123;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_36 && b6_12 && b7_4 && b8_4 && b9_13 && b10_10 && b11_24 && b12_6 && b13_2 && b14_15 && b15_4 && b16_4 && b17_12 && b18_3 && b19_3 && b20_14 && b21_3 && b22_2 && b23_14 && b24_2 && b25_16 && b26_2 && b27_2 && b28_17 && b29_10 && b30_5 && b31_3 && b32_15 && b33_8 && b34_10 && b35_12 && b36_6 && b37_8 && b38_8 && b39_5 && b40_6 && b41_7 && b42_4 && b43_5 && b44_7 && b45_3 && b46_5 && b47_5 && b48_3) {
matched = true;
pattern_id = 124;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_25 && b9_13 && b10_10 && b11_25 && b12_6 && b13_2 && b14_16 && b15_4 && b16_4 && b17_11 && b18_3 && b19_3 && b20_19 && b21_3 && b22_2 && b23_13 && b24_2 && b25_2 && b26_7 && b27_2 && b28_2 && b29_13 && b30_5 && b31_11 && b32_4 && b33_8 && b34_1 && b35_6 && b36_6 && b37_4 && b38_9 && b39_5 && b40_4 && b41_8 && b42_4 && b43_4 && b44_2 && b45_4) {
matched = true;
pattern_id = 125;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_4 && b39_5 && b40_4 && b41_9 && b42_4 && b43_4 && b44_8 && b45_3 && b46_4 && b47_6 && b48_3) {
matched = true;
pattern_id = 126;
}
if(b0_14 && b1_19 && b2_34 && b3_14 && b4_8 && b5_41 && b6_12 && b7_13 && b8_24 && b9_13 && b10_15 && b11_9 && b12_6 && b13_17 && b14_7 && b15_4 && b16_17 && b17_12 && b18_3 && b19_13 && b20_15 && b21_3 && b22_5 && b23_1 && b24_2 && b25_17 && b26_17 && b27_2 && b28_10 && b29_14 && b30_5 && b31_5 && b32_4 && b33_8 && b34_8 && b35_4 && b36_6 && b37_9 && b38_10 && b39_5 && b40_7 && b41_6 && b42_4 && b43_6 && b44_9 && b45_3 && b46_6 && b47_7 && b48_3) {
matched = true;
pattern_id = 127;
}
if(b0_26 && b1_21 && b2_21 && b3_16 && b4_27 && b5_20 && b6_38 && b7_1 && b8_36 && b9_14 && b10_6 && b11_26 && b12_6 && b13_12 && b14_17 && b15_15) {
matched = true;
pattern_id = 128;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_25 && b9_13 && b10_10 && b11_25 && b12_6 && b13_2 && b14_16 && b15_4 && b16_4 && b17_11 && b18_3 && b19_3 && b20_19 && b21_3 && b22_2 && b23_13 && b24_2 && b25_2 && b26_7 && b27_2 && b28_2 && b29_13 && b30_5 && b31_11 && b32_4 && b33_8 && b34_1 && b35_6 && b36_6 && b37_4 && b38_9 && b39_5 && b40_4 && b41_8 && b42_4 && b43_4 && b44_2 && b45_3 && b46_5 && b47_3 && b48_3) {
matched = true;
pattern_id = 129;
}
if(b0_14 && b1_19 && b2_33 && b3_28 && b4_1 && b5_5 && b6_39 && b7_7 && b8_35 && b9_27 && b10_26 && b11_27 && b12_17 && b13_18 && b14_18 && b15_3 && b16_1 && b17_20 && b18_15) {
matched = true;
pattern_id = 130;
}
if(b0_42 && b1_17 && b2_46 && b3_36 && b4_42 && b5_9 && b6_40 && b7_24 && b8_17 && b9_24 && b10_28 && b11_28 && b12_18 && b13_19 && b14_17 && b15_16 && b16_18 && b17_21 && b18_10 && b19_19 && b20_20 && b21_15 && b22_14 && b23_16 && b24_17 && b25_18) {
matched = true;
pattern_id = 131;
}
if(b0_44 && b1_45 && b2_48 && b3_37 && b4_43 && b5_45 && b6_41 && b7_34 && b8_37 && b9_29 && b10_29 && b11_29 && b12_19 && b13_20 && b14_19 && b15_17) {
matched = true;
pattern_id = 132;
}
if(b0_45 && b1_46 && b2_25 && b3_8 && b4_12 && b5_8 && b6_42 && b7_35 && b8_5 && b9_9 && b10_17 && b11_22 && b12_20 && b13_21 && b14_20 && b15_18) {
matched = true;
pattern_id = 133;
}
if(b0_46 && b1_2 && b2_3 && b3_26 && b4_32 && b5_1 && b6_1 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_2 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_7 && b33_1 && b34_5 && b35_7 && b36_4 && b37_3 && b38_5 && b39_4 && b40_3) {
matched = true;
pattern_id = 134;
}
if(b0_14 && b1_25 && b2_38 && b3_14 && b4_4 && b5_13 && b6_5 && b7_1 && b8_3 && b9_13 && b10_1 && b11_2 && b12_6 && b13_1 && b14_3 && b15_4 && b16_1 && b17_2 && b18_3 && b19_1 && b20_8) {
matched = true;
pattern_id = 135;
}
if(b0_12 && b1_47 && b2_16 && b3_21 && b4_12 && b5_3 && b6_38 && b7_2 && b8_11 && b9_30 && b10_30 && b11_30 && b12_7 && b13_22 && b14_21 && b15_5) {
matched = true;
pattern_id = 136;
}
if(b0_47 && b1_9 && b2_45 && b3_38 && b4_9 && b5_46 && b6_43 && b7_36) {
matched = true;
pattern_id = 137;
}
if(b0_16 && b1_12 && b2_32 && b3_39 && b4_40 && b5_35 && b6_44 && b7_37 && b8_38 && b9_31 && b10_31 && b11_31 && b12_21 && b13_23 && b14_22 && b15_19 && b16_19 && b17_22 && b18_16 && b19_20 && b20_21 && b21_16 && b22_16 && b23_10 && b24_13 && b25_5 && b26_5 && b27_15 && b28_7 && b29_15 && b30_11 && b31_12) {
matched = true;
pattern_id = 138;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_3 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_2 && b51_2 && b52_4 && b53_4 && b54_2 && b55_4 && b56_2 && b57_2 && b58_4 && b59_4 && b60_4) {
matched = true;
pattern_id = 139;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 140;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10 && b13_10 && b14_23 && b15_12 && b16_20 && b17_23 && b18_17 && b19_14 && b20_14 && b21_17 && b22_9 && b23_17 && b24_18) {
matched = true;
pattern_id = 141;
}
if(b0_48 && b1_29 && b2_4 && b3_36 && b4_20 && b5_4 && b6_16 && b7_27 && b8_10 && b9_32 && b10_29 && b11_32 && b12_22) {
matched = true;
pattern_id = 142;
}
if(b0_49 && b1_48 && b2_11 && b3_15 && b4_3 && b5_47 && b6_45 && b7_8 && b8_14 && b9_13 && b10_32 && b11_33 && b12_6 && b13_24 && b14_24 && b15_20) {
matched = true;
pattern_id = 143;
}
if(b0_5 && b1_14 && b2_43 && b3_8 && b4_2 && b5_48 && b6_46 && b7_1 && b8_39 && b9_13 && b10_33 && b11_2 && b12_23 && b13_5 && b14_25 && b15_21) {
matched = true;
pattern_id = 144;
}
if(b0_14 && b1_19 && b2_5 && b3_14 && b4_20 && b5_19 && b6_12 && b7_13 && b8_4 && b9_13 && b10_33 && b11_22 && b12_6 && b13_17 && b14_10 && b15_4 && b16_21 && b17_24 && b18_3 && b19_13 && b20_22 && b21_3 && b22_17 && b23_10 && b24_2 && b25_17 && b26_18 && b27_2 && b28_11 && b29_13 && b30_5 && b31_5 && b32_16 && b33_8 && b34_12 && b35_13 && b36_6 && b37_9 && b38_11 && b39_5 && b40_8 && b41_10 && b42_4 && b43_6 && b44_8 && b45_3 && b46_7 && b47_8 && b48_3) {
matched = true;
pattern_id = 145;
}
if(b0_39 && b1_21 && b2_21 && b3_40 && b4_44 && b5_4 && b6_47 && b7_10 && b8_35 && b9_33 && b10_6 && b11_23 && b12_24 && b13_25 && b14_3 && b15_2 && b16_22 && b17_4 && b18_18) {
matched = true;
pattern_id = 146;
}
if(b0_26 && b1_19 && b2_45 && b3_10) {
matched = true;
pattern_id = 147;
}
if(b0_4 && b1_2 && b2_3 && b3_8 && b4_22 && b5_6 && b6_13 && b7_31 && b8_11 && b9_34) {
matched = true;
pattern_id = 148;
}
if(b0_50 && b1_37 && b2_1 && b3_14) {
matched = true;
pattern_id = 149;
}
if(b0_51 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_48 && b7_31 && b8_11 && b9_34 && b10_17 && b11_34) {
matched = true;
pattern_id = 150;
}
if(b0_5 && b1_3 && b2_24 && b3_40 && b4_44 && b5_27 && b6_7 && b7_38 && b8_40 && b9_9 && b10_34 && b11_24 && b12_23 && b13_15 && b14_26 && b15_15 && b16_5 && b17_25 && b18_12 && b19_21 && b20_23 && b21_18 && b22_18 && b23_18) {
matched = true;
pattern_id = 151;
}
if(b0_39 && b1_8 && b2_6 && b3_34 && b4_18 && b5_20 && b6_34 && b7_1 && b8_41 && b9_6 && b10_35 && b11_35 && b12_25 && b13_5 && b14_25 && b15_3 && b16_23) {
matched = true;
pattern_id = 152;
}
if(b0_4 && b1_2 && b2_41 && b3_14 && b4_14 && b5_10 && b6_18 && b7_39 && b8_42 && b9_11 && b10_7 && b11_2 && b12_26 && b13_4 && b14_3 && b15_16 && b16_24 && b17_26 && b18_4 && b19_12 && b20_24 && b21_19 && b22_19) {
matched = true;
pattern_id = 153;
}
if(b0_25 && b1_36 && b2_49 && b3_15 && b4_22 && b5_6 && b6_5 && b7_18 && b8_17 && b9_4 && b10_11 && b11_20 && b12_15 && b13_9 && b14_2 && b15_4 && b16_25 && b17_27 && b18_19 && b19_22 && b20_2 && b21_20) {
matched = true;
pattern_id = 154;
}
if(b0_52 && b1_21 && b2_41 && b3_37 && b4_4 && b5_23 && b6_32 && b7_40 && b8_10 && b9_14 && b10_6 && b11_6 && b12_4 && b13_26 && b14_27 && b15_10 && b16_15) {
matched = true;
pattern_id = 155;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_4 && b5_1 && b6_5 && b7_41) {
matched = true;
pattern_id = 156;
}
if(b0_16 && b1_27 && b2_30 && b3_3 && b4_9 && b5_49 && b6_29 && b7_5 && b8_43 && b9_8 && b10_36 && b11_36 && b12_27) {
matched = true;
pattern_id = 157;
}
if(b0_23 && b1_6 && b2_50 && b3_28 && b4_45 && b5_19 && b6_5) {
matched = true;
pattern_id = 158;
}
if(b0_17 && b1_11 && b2_16 && b3_18 && b4_24 && b5_17 && b6_24 && b7_42 && b8_34 && b9_27 && b10_7 && b11_26 && b12_28 && b13_27 && b14_28 && b15_22 && b16_2 && b17_28 && b18_20 && b19_23 && b20_25 && b21_21 && b22_20 && b23_16 && b24_3 && b25_19 && b26_19 && b27_16 && b28_18 && b29_16 && b30_12) {
matched = true;
pattern_id = 159;
}
if(b0_41 && b1_49 && b2_51 && b3_25 && b4_1 && b5_18 && b6_49 && b7_43 && b8_44 && b9_35 && b10_37 && b11_2 && b12_9 && b13_28 && b14_29 && b15_19 && b16_26 && b17_24 && b18_21 && b19_1 && b20_26) {
matched = true;
pattern_id = 160;
}
if(b0_47 && b1_50 && b2_52 && b3_26 && b4_22 && b5_16 && b6_34 && b7_1 && b8_34 && b9_6 && b10_38 && b11_37 && b12_3) {
matched = true;
pattern_id = 161;
}
if(b0_3 && b1_28 && b2_40 && b3_14) {
matched = true;
pattern_id = 162;
}
if(b0_34 && b1_1 && b2_1 && b3_41 && b4_1 && b5_28 && b6_1 && b7_3 && b8_33 && b9_4 && b10_27 && b11_25 && b12_6 && b13_12 && b14_30 && b15_4 && b16_4 && b17_9 && b18_3 && b19_18 && b20_7 && b21_4) {
matched = true;
pattern_id = 163;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_17 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 164;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_44 && b6_5) {
matched = true;
pattern_id = 165;
}
if(b0_32 && b1_26) {
matched = true;
pattern_id = 166;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5 && b7_44) {
matched = true;
pattern_id = 167;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 168;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10 && b13_29 && b14_2 && b15_1 && b16_4 && b17_8 && b18_10 && b19_6 && b20_1 && b21_1 && b22_1 && b23_16 && b24_9 && b25_2 && b26_2 && b27_8 && b28_19 && b29_1 && b30_9 && b31_11 && b32_3 && b33_11 && b34_3 && b35_7 && b36_4 && b37_10 && b38_12 && b39_7 && b40_4 && b41_4 && b42_3 && b43_7 && b44_5 && b45_5 && b46_4 && b47_9 && b48_2 && b49_4 && b50_2 && b51_4 && b52_5 && b53_5 && b54_3 && b55_4 && b56_2 && b57_4 && b58_5 && b59_3 && b60_5 && b61_3 && b62_3 && b63_2 && b64_3 && b65_3 && b66_3 && b67_3 && b68_3 && b69_3 && b70_3 && b71_3 && b72_2 && b73_3 && b74_3 && b75_3 && b76_3 && b77_3 && b78_3 && b79_3 && b80_3 && b81_2 && b82_3 && b83_3) {
matched = true;
pattern_id = 169;
}
if(b0_14 && b1_51 && b2_32 && b3_28 && b4_26 && b5_40 && b6_23 && b7_3 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_15) {
matched = true;
pattern_id = 170;
}
if(b0_14 && b1_51 && b2_32 && b3_28 && b4_26 && b5_40 && b6_2 && b7_3 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_15) {
matched = true;
pattern_id = 171;
}
if(b0_53 && b1_9 && b2_53 && b3_14) {
matched = true;
pattern_id = 172;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_31 && b15_11 && b16_19) {
matched = true;
pattern_id = 173;
}
if(b0_10 && b1_43 && b2_32 && b3_42 && b4_1) {
matched = true;
pattern_id = 174;
}
if(b0_24 && b1_10 && b2_54 && b3_9) {
matched = true;
pattern_id = 175;
}
if(b0_39 && b1_41 && b2_31 && b3_14 && b4_1) {
matched = true;
pattern_id = 176;
}
if(b0_53 && b1_53 && b2_31 && b3_14 && b4_1) {
matched = true;
pattern_id = 177;
}
if(b0_53 && b1_53 && b2_31 && b3_14 && b4_26) {
matched = true;
pattern_id = 178;
}
if(b0_53 && b1_53 && b2_31) {
matched = true;
pattern_id = 179;
}
if(b0_5 && b1_21 && b2_21 && b3_23 && b4_18 && b5_42 && b6_7 && b7_41) {
matched = true;
pattern_id = 180;
}
if(b0_3 && b1_4 && b2_55 && b3_5 && b4_40 && b5_50 && b6_50 && b7_13 && b8_3 && b9_36 && b10_39 && b11_38 && b12_23 && b13_10 && b14_15 && b15_23) {
matched = true;
pattern_id = 181;
}
if(b0_3 && b1_4 && b2_55 && b3_5 && b4_40 && b5_50 && b6_50 && b7_13 && b8_3 && b9_37 && b10_31) {
matched = true;
pattern_id = 182;
}
if(b0_6 && b1_31 && b2_34 && b3_14 && b4_4) {
matched = true;
pattern_id = 183;
}
if(b0_24 && b1_10) {
matched = true;
pattern_id = 184;
}
if(b0_50 && b1_51 && b2_1 && b3_14 && b4_47 && b5_40 && b6_51 && b7_15 && b8_22) {
matched = true;
pattern_id = 185;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_13 && b10_40 && b11_19 && b12_10) {
matched = true;
pattern_id = 186;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_39 && b12_10) {
matched = true;
pattern_id = 187;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_1 && b12_10) {
matched = true;
pattern_id = 188;
}
if(b0_14 && b1_37 && b2_5 && b3_14 && b4_45 && b5_19 && b6_12 && b7_6 && b8_4 && b9_13 && b10_41 && b11_22 && b12_6 && b13_11 && b14_10 && b15_4 && b16_14 && b17_24 && b18_3 && b19_24 && b20_22 && b21_3 && b22_21 && b23_10 && b24_2 && b25_2 && b26_2 && b27_2 && b28_20 && b29_13 && b30_5 && b31_13 && b32_16 && b33_8 && b34_13 && b35_13 && b36_6 && b37_11 && b38_11 && b39_5 && b40_9 && b41_10 && b42_4 && b43_8 && b44_8 && b45_3 && b46_8 && b47_8 && b48_2 && b49_5 && b50_4 && b51_3) {
matched = true;
pattern_id = 189;
}
if(b0_19 && b1_21 && b2_21 && b3_28 && b4_4 && b5_1 && b6_5 && b7_35 && b8_11 && b9_11 && b10_2 && b11_1 && b12_2 && b13_26) {
matched = true;
pattern_id = 190;
}
if(b0_54 && b1_11 && b2_15 && b3_6 && b4_1 && b5_23 && b6_32 && b7_18 && b8_10 && b9_13 && b10_42 && b11_2 && b12_30 && b13_1 && b14_2 && b15_9 && b16_27 && b17_8) {
matched = true;
pattern_id = 191;
}
if(b0_55 && b1_40 && b2_23 && b3_6 && b4_44 && b5_42 && b6_5 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 192;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_35 && b7_45 && b8_41 && b9_6 && b10_4 && b11_23 && b12_5 && b13_30 && b14_25) {
matched = true;
pattern_id = 193;
}
if(b0_20 && b1_8 && b2_20 && b3_8 && b4_32 && b5_1 && b6_1 && b7_3 && b8_8 && b9_6 && b10_6 && b11_40 && b12_10 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 194;
}
if(b0_54 && b1_11 && b2_15 && b3_6 && b4_1 && b5_23 && b6_32 && b7_18 && b8_10 && b9_38 && b10_1 && b11_41 && b12_10 && b13_31 && b14_27 && b15_7) {
matched = true;
pattern_id = 195;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_17 && b5_10 && b6_3 && b7_9 && b8_10 && b9_1 && b10_10 && b11_20) {
matched = true;
pattern_id = 196;
}
if(b0_14 && b1_15 && b2_27 && b3_28 && b4_17 && b5_25 && b6_3 && b7_46 && b8_11 && b9_11 && b10_7 && b11_20 && b12_31 && b13_17 && b14_2 && b15_4 && b16_28 && b17_29 && b18_22 && b19_25 && b20_27 && b21_10 && b22_22 && b23_19 && b24_17 && b25_4 && b26_8 && b27_17 && b28_21 && b29_16 && b30_13 && b31_14 && b32_2 && b33_12) {
matched = true;
pattern_id = 197;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_42 && b12_10) {
matched = true;
pattern_id = 198;
}
if(b0_16) {
matched = true;
pattern_id = 199;
}
if(b0_38 && b1_28 && b2_56 && b3_10 && b4_5 && b5_24 && b6_47 && b7_3 && b8_1 && b9_8 && b10_2) {
matched = true;
pattern_id = 200;
}
if(b0_16 && b1_19 && b2_5 && b3_12 && b4_20 && b5_19 && b6_15 && b7_13 && b8_4 && b9_8 && b10_33 && b11_22 && b12_29 && b13_17 && b14_10 && b15_24) {
matched = true;
pattern_id = 201;
}
if(b0_54 && b1_14 && b2_24 && b3_6 && b4_1 && b5_51 && b6_52 && b7_35 && b8_5 && b9_14 && b10_43 && b11_6 && b12_32 && b13_26 && b14_1 && b15_24 && b16_15 && b17_30 && b18_23 && b19_22 && b20_28 && b21_4 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 202;
}
if(b0_54 && b1_54 && b2_50 && b3_43 && b4_1 && b5_51 && b6_52 && b7_35 && b8_5 && b9_14 && b10_43 && b11_6 && b12_32) {
matched = true;
pattern_id = 203;
}
if(b0_16 && b1_35 && b2_43 && b3_43 && b4_16 && b5_11) {
matched = true;
pattern_id = 204;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_33 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_32 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_20 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_7) {
matched = true;
pattern_id = 205;
}
if(b0_11 && b1_55 && b2_42 && b3_11 && b4_17 && b5_51 && b6_3 && b7_47) {
matched = true;
pattern_id = 206;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_15 && b5_6 && b6_20 && b7_47 && b8_10 && b9_1 && b10_33 && b11_20 && b12_33 && b13_32 && b14_24 && b15_25 && b16_29 && b17_8 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 207;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_40 && b5_1 && b6_12 && b7_20 && b8_17 && b9_4 && b10_20 && b11_20 && b12_2 && b13_11 && b14_3 && b15_12 && b16_4 && b17_2 && b18_5 && b19_7 && b20_9 && b21_22 && b22_1 && b23_2 && b24_19 && b25_13 && b26_6 && b27_7 && b28_8 && b29_12 && b30_7 && b31_4 && b32_17 && b33_4 && b34_1 && b35_12 && b36_6 && b37_2 && b38_5 && b39_5 && b40_10 && b41_11 && b42_3 && b43_9) {
matched = true;
pattern_id = 208;
}
if(b0_14 && b1_18 && b2_13 && b3_14 && b4_4 && b5_35 && b6_12 && b7_33 && b8_27 && b9_4 && b10_23 && b11_20 && b12_15 && b13_33 && b14_3 && b15_1 && b16_6 && b17_2 && b18_24 && b19_26 && b20_9 && b21_23 && b22_1 && b23_21 && b24_14 && b25_13 && b26_2 && b27_9 && b28_8 && b29_10 && b30_1 && b31_4 && b32_18 && b33_4 && b34_14 && b35_14 && b36_6 && b37_4 && b38_13 && b39_5 && b40_6 && b41_12 && b42_3 && b43_10) {
matched = true;
pattern_id = 209;
}
if(b0_45 && b1_1 && b2_36 && b3_44 && b4_1 && b5_35 && b6_30 && b7_1 && b8_17 && b9_16 && b10_2 && b11_36 && b12_10 && b13_7 && b14_6 && b15_4 && b16_6 && b17_14 && b18_3 && b19_7 && b20_29 && b21_4 && b22_23 && b23_7 && b24_11 && b25_12 && b26_8 && b27_9 && b28_15 && b29_7 && b30_7 && b31_15 && b32_3 && b33_13 && b34_3 && b35_15 && b36_2 && b37_3 && b38_13 && b39_6 && b40_2 && b41_11 && b42_6 && b43_11) {
matched = true;
pattern_id = 210;
}
if(b0_3 && b1_1 && b2_36 && b3_44 && b4_1 && b5_1 && b6_53 && b7_1 && b8_22 && b9_39 && b10_2 && b11_43 && b12_10 && b13_7 && b14_6 && b15_4 && b16_4 && b17_31 && b18_3 && b19_18 && b20_4 && b21_4 && b22_24 && b23_7 && b24_11 && b25_12 && b26_8 && b27_7 && b28_22 && b29_7 && b30_14 && b31_16 && b32_3 && b33_14 && b34_3 && b35_15 && b36_2 && b37_3 && b38_5 && b39_8 && b40_2 && b41_3 && b42_2 && b43_11) {
matched = true;
pattern_id = 211;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_48 && b5_23 && b6_1 && b7_18 && b8_3 && b9_18 && b10_10 && b11_2 && b12_2 && b13_8 && b14_2 && b15_26 && b16_15 && b17_1 && b18_25 && b19_1 && b20_16 && b21_1 && b22_13 && b23_2 && b24_10 && b25_6 && b26_20 && b27_8 && b28_2 && b29_5 && b30_5 && b31_17 && b32_7 && b33_8 && b34_1 && b35_10 && b36_3 && b37_12 && b38_2 && b39_4 && b40_11 && b41_5 && b42_7 && b43_4 && b44_5) {
matched = true;
pattern_id = 212;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_49 && b5_23 && b6_1 && b7_18 && b8_3 && b9_18 && b10_10 && b11_2 && b12_2 && b13_34 && b14_2 && b15_10 && b16_15 && b17_1 && b18_25 && b19_1 && b20_16 && b21_1 && b22_13 && b23_2 && b24_13 && b25_6 && b26_7 && b27_8 && b28_2 && b29_5 && b30_5 && b31_17 && b32_7 && b33_8 && b34_1 && b35_11 && b36_3 && b37_13 && b38_2 && b39_4 && b40_11 && b41_5 && b42_7 && b43_4 && b44_5) {
matched = true;
pattern_id = 213;
}
if(b0_14 && b1_17 && b2_10 && b3_14 && b4_8 && b5_1 && b6_12 && b7_33 && b8_32 && b9_13 && b10_33 && b11_11 && b12_6 && b13_14 && b14_33 && b15_4 && b16_17 && b17_1 && b18_3 && b19_18 && b20_6 && b21_3 && b22_17 && b23_22 && b24_2 && b25_16 && b26_9 && b27_2 && b28_10 && b29_2 && b30_5 && b31_3 && b32_5 && b33_8 && b34_12 && b35_16 && b36_6 && b37_8 && b38_14 && b39_5 && b40_7 && b41_4 && b42_4 && b43_5 && b44_10 && b45_3 && b46_7 && b47_10 && b48_3) {
matched = true;
pattern_id = 214;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_30 && b5_31 && b6_5 && b7_48 && b8_10 && b9_15 && b10_27 && b11_2 && b12_13 && b13_2 && b14_3 && b15_27 && b16_17 && b17_8 && b18_26 && b19_6 && b20_5 && b21_9 && b22_13 && b23_13 && b24_15 && b25_13 && b26_15 && b27_12 && b28_6 && b29_17 && b30_2 && b31_3 && b32_8 && b33_8 && b34_11 && b35_7 && b36_6 && b37_8 && b38_7 && b39_7 && b40_12 && b41_13 && b42_5 && b43_5 && b44_5) {
matched = true;
pattern_id = 215;
}
if(b0_14 && b1_19 && b2_57 && b3_14 && b4_30 && b5_31 && b6_12 && b7_19 && b8_1 && b9_13 && b10_27 && b11_17 && b12_6 && b13_17 && b14_11 && b15_4 && b16_7 && b17_16 && b18_3 && b19_27 && b20_1 && b21_3 && b22_15 && b23_23 && b24_2 && b25_17 && b26_21 && b27_2 && b28_17 && b29_6 && b30_5 && b31_18 && b32_7 && b33_8 && b34_10 && b35_12 && b36_6 && b37_9 && b38_15 && b39_5 && b40_6 && b41_14 && b42_4 && b43_3 && b44_3 && b45_3 && b46_5 && b47_11 && b48_3) {
matched = true;
pattern_id = 216;
}
if(b0_14 && b1_25 && b2_46 && b3_14 && b4_30 && b5_1 && b6_5 && b7_1 && b8_10 && b9_15 && b10_44 && b11_2 && b12_34 && b13_14 && b14_3 && b15_8 && b16_4 && b17_8 && b18_3 && b19_6 && b20_1 && b21_6 && b22_1) {
matched = true;
pattern_id = 217;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_49 && b5_1 && b6_12 && b7_49 && b8_1 && b9_13 && b10_40 && b11_1 && b12_6 && b13_9 && b14_1 && b15_4 && b16_10 && b17_1 && b18_3 && b19_8 && b20_1 && b21_3 && b22_7 && b23_2 && b24_2 && b25_11 && b26_2 && b27_2 && b28_12 && b29_2 && b30_5 && b31_7 && b32_7 && b33_8 && b34_7 && b35_7 && b36_6 && b37_13 && b38_5 && b39_5 && b40_5 && b41_4 && b42_3) {
matched = true;
pattern_id = 218;
}
if(b0_14 && b1_12 && b2_1 && b3_14 && b4_13 && b5_9 && b6_12 && b7_19 && b8_45 && b9_13 && b10_21 && b11_1 && b12_10) {
matched = true;
pattern_id = 219;
}
if(b0_14 && b1_12 && b2_1 && b3_14 && b4_30 && b5_33 && b6_12 && b7_19 && b8_45 && b9_13 && b10_21 && b11_1 && b12_10) {
matched = true;
pattern_id = 220;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_49 && b5_1 && b6_12 && b7_49 && b8_1 && b9_13 && b10_45 && b11_16 && b12_6 && b13_15 && b14_1 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_14 && b24_9 && b25_20 && b26_22 && b27_18 && b28_23 && b29_18 && b30_15 && b31_19) {
matched = true;
pattern_id = 221;
}
if(b0_20 && b1_11 && b2_50 && b3_8 && b4_1 && b5_42 && b6_3 && b7_3 && b8_25 && b9_8 && b10_2) {
matched = true;
pattern_id = 222;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_34 && b5_30) {
matched = true;
pattern_id = 223;
}
if(b0_56 && b1_28 && b2_44 && b3_38) {
matched = true;
pattern_id = 224;
}
if(b0_11 && b1_14 && b2_43 && b3_20 && b4_2 && b5_6 && b6_11 && b7_1 && b8_37 && b9_13 && b10_2 && b11_42 && b12_15 && b13_1 && b14_27 && b15_9 && b16_15) {
matched = true;
pattern_id = 225;
}
if(b0_54 && b1_54 && b2_50 && b3_43) {
matched = true;
pattern_id = 226;
}
if(b0_54 && b1_13 && b2_24 && b3_45 && b4_46 && b5_42 && b6_3 && b7_3 && b8_25 && b9_8 && b10_2 && b11_2 && b12_17 && b13_35 && b14_34 && b15_28 && b16_11 && b17_13 && b18_10 && b19_12 && b20_13) {
matched = true;
pattern_id = 227;
}
if(b0_57 && b1_2 && b2_14 && b3_24 && b4_1 && b5_3 && b6_10 && b7_14 && b8_16 && b9_4 && b10_41 && b11_22 && b12_10 && b13_1 && b14_2 && b15_9 && b16_27 && b17_2 && b18_27 && b19_27 && b20_9) {
matched = true;
pattern_id = 228;
}
if(b0_53 && b1_19 && b2_58 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10 && b13_1 && b14_2 && b15_29 && b16_17 && b17_8 && b18_28 && b19_28 && b20_30 && b21_5 && b22_4 && b23_6 && b24_20 && b25_21 && b26_4 && b27_19 && b28_24 && b29_3 && b30_16) {
matched = true;
pattern_id = 229;
}
if(b0_39 && b1_16 && b2_20 && b3_6 && b4_6 && b5_23 && b6_1 && b7_22 && b8_3 && b9_1 && b10_33 && b11_20 && b12_21 && b13_6 && b14_35 && b15_30 && b16_18 && b17_32 && b18_3 && b19_29 && b20_26 && b21_24 && b22_25 && b23_19 && b24_21 && b25_20) {
matched = true;
pattern_id = 230;
}
if(b0_39 && b1_16 && b2_20 && b3_6 && b4_6 && b5_23 && b6_1 && b7_49 && b8_3 && b9_1 && b10_40 && b11_2 && b12_2 && b13_9 && b14_3 && b15_1 && b16_10 && b17_2 && b18_1 && b19_8 && b20_8 && b21_1 && b22_7 && b23_8 && b24_15 && b25_11 && b26_11 && b27_20 && b28_25 && b29_19 && b30_17 && b31_20 && b32_19 && b33_15 && b34_15 && b35_17 && b36_7 && b37_14 && b38_16) {
matched = true;
pattern_id = 231;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_8 && b5_8 && b6_3 && b7_14 && b8_35 && b9_4 && b10_10 && b11_22 && b12_10 && b13_13 && b14_36 && b15_31 && b16_30 && b17_33) {
matched = true;
pattern_id = 232;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_8 && b5_23 && b6_16 && b7_13 && b8_10 && b9_40 && b10_28 && b11_3 && b12_7 && b13_36 && b14_28 && b15_7 && b16_4 && b17_24 && b18_8 && b19_30) {
matched = true;
pattern_id = 233;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_8 && b5_8 && b6_3 && b7_14 && b8_35 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_31 && b17_34 && b18_22 && b19_31 && b20_31) {
matched = true;
pattern_id = 234;
}
if(b0_58 && b1_16 && b2_49 && b3_45) {
matched = true;
pattern_id = 235;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_32 && b16_15 && b17_1 && b18_1 && b19_6 && b20_28 && b21_4 && b22_2 && b23_2 && b24_9 && b25_22 && b26_11 && b27_7 && b28_2 && b29_1 && b30_18 && b31_4 && b32_7 && b33_1 && b34_3 && b35_18 && b36_3 && b37_4 && b38_5 && b39_7 && b40_13 && b41_13 && b42_8 && b43_4 && b44_5 && b45_6 && b46_2 && b47_3 && b48_4 && b49_4 && b50_5 && b51_3 && b52_4 && b53_4 && b54_3 && b55_5 && b56_3 && b57_3 && b58_4 && b59_3) {
matched = true;
pattern_id = 236;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_5 && b16_15 && b17_1 && b18_1 && b19_6 && b20_24 && b21_4 && b22_2 && b23_2 && b24_9 && b25_3 && b26_11 && b27_7 && b28_2 && b29_1 && b30_15 && b31_4 && b32_7 && b33_1 && b34_3 && b35_19 && b36_3 && b37_4 && b38_5 && b39_7 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5 && b45_7 && b46_2 && b47_3 && b48_4 && b49_4 && b50_6 && b51_3 && b52_4 && b53_4 && b54_3) {
matched = true;
pattern_id = 237;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_18 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_23 && b26_11 && b27_7 && b28_2 && b29_1 && b30_19 && b31_4 && b32_7 && b33_1 && b34_3 && b35_18 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_8 && b46_2 && b47_3 && b48_4 && b49_4 && b50_7 && b51_3 && b52_4 && b53_4 && b54_3 && b55_6 && b56_3 && b57_3 && b58_4 && b59_3 && b60_6 && b61_4 && b62_4 && b63_3 && b64_3) {
matched = true;
pattern_id = 238;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_33 && b16_15 && b17_1 && b18_1 && b19_6 && b20_32 && b21_4 && b22_2 && b23_2 && b24_9 && b25_24 && b26_11 && b27_7 && b28_2 && b29_1 && b30_20 && b31_4 && b32_7 && b33_1 && b34_3 && b35_20 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_7 && b46_2 && b47_3 && b48_4 && b49_4) {
matched = true;
pattern_id = 239;
}
if(b0_59 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_22 && b16_15 && b17_1 && b18_1 && b19_6 && b20_33 && b21_4 && b22_2 && b23_2 && b24_9 && b25_24 && b26_11 && b27_7 && b28_2 && b29_1 && b30_15 && b31_4 && b32_7 && b33_1 && b34_3 && b35_21 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_9 && b46_2 && b47_3 && b48_4 && b49_4 && b50_8 && b51_3 && b52_4 && b53_4 && b54_3) {
matched = true;
pattern_id = 240;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_18 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_23 && b26_11 && b27_7 && b28_2 && b29_1 && b30_19 && b31_4 && b32_7 && b33_1 && b34_3 && b35_18 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_8 && b46_2 && b47_3 && b48_4 && b49_4 && b50_7 && b51_3 && b52_4 && b53_4 && b54_3 && b55_6 && b56_3 && b57_3 && b58_4 && b59_3 && b60_6 && b61_4 && b62_4 && b63_3 && b64_3 && b65_4 && b66_4 && b67_4 && b68_4 && b69_3 && b70_4 && b71_4 && b72_3 && b73_4 && b74_3) {
matched = true;
pattern_id = 241;
}
if(b0_59 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_31 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_25 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 242;
}
if(b0_51 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_48 && b7_31 && b8_11 && b9_34 && b10_17 && b11_34 && b12_6 && b13_37 && b14_21 && b15_31 && b16_1 && b17_35 && b18_29 && b19_9 && b20_17 && b21_3 && b22_26 && b23_24 && b24_22 && b25_26) {
matched = true;
pattern_id = 243;
}
if(b0_60 && b1_36 && b2_4 && b3_39 && b4_4 && b5_4 && b6_1 && b7_4 && b8_3 && b9_24 && b10_3 && b11_2 && b12_2 && b13_14 && b14_3 && b15_11 && b16_27 && b17_2 && b18_1 && b19_3 && b20_9 && b21_25 && b22_1 && b23_2 && b24_15 && b25_6 && b26_23 && b27_8 && b28_2 && b29_2 && b30_2 && b31_7 && b32_1 && b33_4 && b34_9 && b35_6 && b36_6 && b37_4 && b38_5 && b39_7) {
matched = true;
pattern_id = 244;
}
if(b0_56 && b1_1 && b2_1 && b3_1 && b4_32 && b5_53 && b6_5 && b7_4 && b8_1 && b9_4 && b10_47 && b11_20 && b12_2 && b13_2 && b14_2 && b15_21 && b16_15 && b17_1 && b18_1 && b19_1 && b20_7 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_7 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_13 && b33_1 && b34_5 && b35_7 && b36_4 && b37_3 && b38_6 && b39_4 && b40_2 && b41_4 && b42_8 && b43_2 && b44_11 && b45_5 && b46_9 && b47_3 && b48_4 && b49_4 && b50_9 && b51_3 && b52_4 && b53_4 && b54_2 && b55_7 && b56_2 && b57_2 && b58_4 && b59_4 && b60_4 && b61_5 && b62_3 && b63_3 && b64_4 && b65_5 && b66_5 && b67_3 && b68_4 && b69_4 && b70_5 && b71_5 && b72_2 && b73_4 && b74_4 && b75_4) {
matched = true;
pattern_id = 245;
}
if(b0_59 && b1_1 && b2_1 && b3_1 && b4_32 && b5_52 && b6_5 && b7_4 && b8_1 && b9_4 && b10_46 && b11_20 && b12_2 && b13_2 && b14_2 && b15_32 && b16_15 && b17_1 && b18_1 && b19_6 && b20_34 && b21_4 && b22_2 && b23_2 && b24_9 && b25_27 && b26_11 && b27_7 && b28_2 && b29_1 && b30_13 && b31_4 && b32_7 && b33_1 && b34_3 && b35_22 && b36_3 && b37_4 && b38_5 && b39_7 && b40_16 && b41_13 && b42_8 && b43_4 && b44_5 && b45_10 && b46_2 && b47_3 && b48_4 && b49_4) {
matched = true;
pattern_id = 246;
}
if(b0_61 && b1_27 && b2_12 && b3_15 && b4_21 && b5_42 && b6_24) {
matched = true;
pattern_id = 247;
}
if(b0_45 && b1_56 && b2_3 && b3_13 && b4_21 && b5_32 && b6_3 && b7_51) {
matched = true;
pattern_id = 248;
}
if(b0_62 && b1_57 && b2_44 && b3_39) {
matched = true;
pattern_id = 249;
}
if(b0_13 && b1_58 && b2_59 && b3_24 && b4_27 && b5_54 && b6_10 && b7_31 && b8_8 && b9_41 && b10_46 && b11_35 && b12_17 && b13_38 && b14_37) {
matched = true;
pattern_id = 250;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_38 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_17 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_7 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_23 && b24_2 && b25_12 && b26_12 && b27_2 && b28_7 && b29_20 && b30_2) {
matched = true;
pattern_id = 251;
}
if(b0_20 && b1_3 && b2_8 && b3_6 && b4_22 && b5_55 && b6_54 && b7_2 && b8_14 && b9_9 && b10_13 && b11_44 && b12_18 && b13_36 && b14_28 && b15_16) {
matched = true;
pattern_id = 252;
}
if(b0_33 && b1_8 && b2_7 && b3_18 && b4_50 && b5_4 && b6_10 && b7_14 && b8_14 && b9_10) {
matched = true;
pattern_id = 253;
}
if(b0_30 && b1_8 && b2_3 && b3_14 && b4_44 && b5_20 && b6_12 && b7_7 && b8_46 && b9_9 && b10_13 && b11_3 && b12_7 && b13_1 && b14_38 && b15_30 && b16_22 && b17_36 && b18_15 && b19_32 && b20_2) {
matched = true;
pattern_id = 254;
}
if(b0_51 && b1_8 && b2_12 && b3_15 && b4_3 && b5_4 && b6_35 && b7_45 && b8_41 && b9_6 && b10_4 && b11_23 && b12_5 && b13_30 && b14_25) {
matched = true;
pattern_id = 255;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_23 && b6_16 && b7_13 && b8_10 && b9_13 && b10_4 && b11_6 && b12_26 && b13_38) {
matched = true;
pattern_id = 256;
}
if(b0_35 && b1_14 && b2_8 && b3_46 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 257;
}
if(b0_35 && b1_52 && b2_60 && b3_40 && b4_19 && b5_16) {
matched = true;
pattern_id = 258;
}
if(b0_35 && b1_59 && b2_8 && b3_15 && b4_2 && b5_11 && b6_2 && b7_29 && b8_34 && b9_34 && b10_22 && b11_45 && b12_35 && b13_5 && b14_35 && b15_34 && b16_24 && b17_4 && b18_4 && b19_33) {
matched = true;
pattern_id = 259;
}
if(b0_35 && b1_60 && b2_43 && b3_47 && b4_13) {
matched = true;
pattern_id = 260;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_51 && b5_10 && b6_8 && b7_8 && b8_47 && b9_20 && b10_5 && b11_46 && b12_16 && b13_16 && b14_39 && b15_18 && b16_32 && b17_37 && b18_30 && b19_34) {
matched = true;
pattern_id = 261;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_16 && b5_8 && b6_35 && b7_52 && b8_5 && b9_14) {
matched = true;
pattern_id = 262;
}
if(b0_35 && b1_59 && b2_15 && b3_6 && b4_27 && b5_26 && b6_54 && b7_8 && b8_42 && b9_33 && b10_48 && b11_47 && b12_36 && b13_27 && b14_40) {
matched = true;
pattern_id = 263;
}
if(b0_35 && b1_59 && b2_15 && b3_6 && b4_27 && b5_26 && b6_54 && b7_8 && b8_42 && b9_33 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 264;
}
if(b0_43 && b1_61 && b2_61 && b3_5 && b4_52 && b5_56 && b6_23 && b7_33 && b8_48) {
matched = true;
pattern_id = 265;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_18 && b9_27 && b10_32 && b11_6 && b12_37 && b13_38) {
matched = true;
pattern_id = 266;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_18 && b9_9 && b10_43 && b11_23 && b12_38 && b13_6 && b14_25) {
matched = true;
pattern_id = 267;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_2 && b5_6 && b6_55 && b7_29 && b8_16 && b9_27 && b10_26 && b11_30) {
matched = true;
pattern_id = 268;
}
if(b0_35 && b1_58 && b2_16 && b3_48 && b4_44 && b5_11 && b6_10 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 269;
}
if(b0_35 && b1_58 && b2_16 && b3_49 && b4_44 && b5_8 && b6_39 && b7_39 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 270;
}
if(b0_35 && b1_35 && b2_6 && b3_18 && b4_6 && b5_12 && b6_3 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 271;
}
if(b0_35 && b1_2 && b2_50 && b3_11 && b4_53 && b5_6 && b6_36 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 272;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_18 && b7_31 && b8_40 && b9_42 && b10_17 && b11_48 && b12_5 && b13_39) {
matched = true;
pattern_id = 273;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_31 && b5_6 && b6_21 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 274;
}
if(b0_35 && b1_13 && b2_15 && b3_50 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 275;
}
if(b0_35 && b1_62 && b2_24 && b3_15 && b4_24 && b5_52 && b6_24 && b7_10) {
matched = true;
pattern_id = 276;
}
if(b0_35 && b1_14 && b2_3 && b3_34 && b4_22 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13) {
matched = true;
pattern_id = 277;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_44 && b6_56 && b7_53 && b8_49) {
matched = true;
pattern_id = 278;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_25 && b6_35 && b7_7 && b8_35 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 279;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_42 && b6_7 && b7_7 && b8_35 && b9_44 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 280;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 281;
}
if(b0_35 && b1_16 && b2_12 && b3_7 && b4_12 && b5_26 && b6_11 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 282;
}
if(b0_35 && b1_16 && b2_17 && b3_2 && b4_31 && b5_26 && b6_19 && b7_10 && b8_34 && b9_34 && b10_48 && b11_35 && b12_25) {
matched = true;
pattern_id = 283;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_43 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 284;
}
if(b0_35 && b1_6 && b2_25 && b3_46 && b4_6 && b5_51 && b6_3 && b7_21 && b8_7 && b9_10 && b10_17 && b11_23 && b12_12 && b13_6 && b14_18) {
matched = true;
pattern_id = 285;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_10 && b8_8 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 286;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_19 && b5_11 && b6_35 && b7_7) {
matched = true;
pattern_id = 287;
}
if(b0_35 && b1_40 && b2_14 && b3_43 && b4_19 && b5_6 && b6_10) {
matched = true;
pattern_id = 288;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_26 && b6_19 && b7_14 && b8_40 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 289;
}
if(b0_35 && b1_2 && b2_12 && b3_24 && b4_27 && b5_27 && b6_46 && b7_7 && b8_5) {
matched = true;
pattern_id = 290;
}
if(b0_35 && b1_19 && b2_21 && b3_44 && b4_44 && b5_8 && b6_18 && b7_18) {
matched = true;
pattern_id = 291;
}
if(b0_35 && b1_2 && b2_23 && b3_16 && b4_2 && b5_40 && b6_21 && b7_31 && b8_35) {
matched = true;
pattern_id = 292;
}
if(b0_35 && b1_19 && b2_40 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 293;
}
if(b0_35 && b1_47 && b2_21 && b3_48 && b4_21 && b5_10 && b6_10 && b7_39 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 294;
}
if(b0_35 && b1_11 && b2_43 && b3_34 && b4_7 && b5_11 && b6_24) {
matched = true;
pattern_id = 295;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_43 && b6_24 && b7_14 && b8_12 && b9_14 && b10_43 && b11_3) {
matched = true;
pattern_id = 296;
}
if(b0_35 && b1_59 && b2_43 && b3_15 && b4_2 && b5_40 && b6_46 && b7_54) {
matched = true;
pattern_id = 297;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_26 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 298;
}
if(b0_35 && b1_59 && b2_12 && b3_7 && b4_12 && b5_26 && b6_11 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 299;
}
if(b0_35 && b1_59 && b2_23 && b3_26 && b4_7) {
matched = true;
pattern_id = 300;
}
if(b0_35 && b1_11 && b2_24 && b3_26 && b4_2 && b5_26 && b6_35 && b7_55 && b8_11 && b9_5 && b10_7 && b11_5 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 301;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_27 && b5_8 && b6_3 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 302;
}
if(b0_35 && b1_40 && b2_43 && b3_46 && b4_2 && b5_29 && b6_10 && b7_52 && b8_5 && b9_41) {
matched = true;
pattern_id = 303;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 304;
}
if(b0_35 && b1_35 && b2_43 && b3_43 && b4_26 && b5_26 && b6_19) {
matched = true;
pattern_id = 305;
}
if(b0_35 && b1_52 && b2_21 && b3_6 && b4_17 && b5_57 && b6_2 && b7_35 && b8_42 && b9_10) {
matched = true;
pattern_id = 306;
}
if(b0_35 && b1_59 && b2_10 && b3_51 && b4_24 && b5_26 && b6_57 && b7_54 && b8_15) {
matched = true;
pattern_id = 307;
}
if(b0_35 && b1_11 && b2_8 && b3_17) {
matched = true;
pattern_id = 308;
}
if(b0_35 && b1_58 && b2_43 && b3_45 && b4_47 && b5_12 && b6_8 && b7_9 && b8_42 && b9_17 && b10_6 && b11_35 && b12_38 && b13_5 && b14_35 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 309;
}
if(b0_35 && b1_58 && b2_43 && b3_45 && b4_47 && b5_12 && b6_8 && b7_9 && b8_42 && b9_11 && b10_6 && b11_40 && b12_38 && b13_37 && b14_24 && b15_3 && b16_3 && b17_38 && b18_31 && b19_17 && b20_27) {
matched = true;
pattern_id = 310;
}
if(b0_35 && b1_22 && b2_8 && b3_17) {
matched = true;
pattern_id = 311;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_43 && b6_57 && b7_21 && b8_5 && b9_14 && b10_34) {
matched = true;
pattern_id = 312;
}
if(b0_35 && b1_32 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 313;
}
if(b0_35 && b1_16 && b2_8 && b3_17) {
matched = true;
pattern_id = 314;
}
if(b0_35 && b1_58 && b2_62 && b3_34 && b4_7 && b5_6 && b6_55 && b7_52 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 315;
}
if(b0_35 && b1_52 && b2_21 && b3_6 && b4_17 && b5_57 && b6_7 && b7_8 && b8_50 && b9_42 && b10_43 && b11_26 && b12_39) {
matched = true;
pattern_id = 316;
}
if(b0_35 && b1_52 && b2_62 && b3_20 && b4_11 && b5_6 && b6_52 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 317;
}
if(b0_35 && b1_6 && b2_16 && b3_18 && b4_15) {
matched = true;
pattern_id = 318;
}
if(b0_35 && b1_59 && b2_14 && b3_43 && b4_46 && b5_51 && b6_37 && b7_7 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_40 && b14_17 && b15_37 && b16_29) {
matched = true;
pattern_id = 319;
}
if(b0_35 && b1_16 && b2_18 && b3_18 && b4_15) {
matched = true;
pattern_id = 320;
}
if(b0_35 && b1_59 && b2_10 && b3_8 && b4_11 && b5_11 && b6_10 && b7_7 && b8_48 && b9_43 && b10_35) {
matched = true;
pattern_id = 321;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 322;
}
if(b0_35 && b1_63 && b2_63 && b3_23 && b4_18 && b5_42 && b6_7) {
matched = true;
pattern_id = 323;
}
if(b0_35 && b1_2 && b2_23 && b3_40 && b4_15 && b5_16 && b6_7) {
matched = true;
pattern_id = 324;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8) {
matched = true;
pattern_id = 325;
}
if(b0_35 && b1_40 && b2_24 && b3_11 && b4_53 && b5_3 && b6_3 && b7_8 && b8_16) {
matched = true;
pattern_id = 326;
}
if(b0_35 && b1_47 && b2_43 && b3_18 && b4_15) {
matched = true;
pattern_id = 327;
}
if(b0_35 && b1_13 && b2_15 && b3_49) {
matched = true;
pattern_id = 328;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_46 && b5_26 && b6_57 && b7_54) {
matched = true;
pattern_id = 329;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 330;
}
if(b0_35 && b1_13 && b2_50 && b3_21 && b4_2 && b5_51 && b6_38 && b7_11 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 331;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_3 && b6_3 && b7_8 && b8_16 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 332;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 333;
}
if(b0_35 && b1_19 && b2_21 && b3_45 && b4_29 && b5_10 && b6_10 && b7_39 && b8_27) {
matched = true;
pattern_id = 334;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_48 && b9_9 && b10_50) {
matched = true;
pattern_id = 335;
}
if(b0_35 && b1_16 && b2_25 && b3_21 && b4_27 && b5_8 && b6_7 && b7_32 && b8_35) {
matched = true;
pattern_id = 336;
}
if(b0_35 && b1_59 && b2_43 && b3_45 && b4_46 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40) {
matched = true;
pattern_id = 337;
}
if(b0_35 && b1_13 && b2_43 && b3_24 && b4_2 && b5_43 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 338;
}
if(b0_35 && b1_11 && b2_20 && b3_34 && b4_24 && b5_6 && b6_10 && b7_32 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 339;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_42 && b6_7 && b7_39 && b8_40 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 340;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_2 && b5_52 && b6_35 && b7_8 && b8_2 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 341;
}
if(b0_33 && b1_52 && b2_3 && b3_15 && b4_2 && b5_11 && b6_46 && b7_11 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 342;
}
if(b0_35 && b1_11 && b2_49 && b3_40 && b4_18 && b5_51 && b6_19 && b7_10 && b8_48 && b9_28 && b10_28 && b11_35) {
matched = true;
pattern_id = 343;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_9 && b20_33 && b21_14 && b22_27 && b23_25 && b24_23 && b25_22 && b26_24 && b27_21 && b28_26 && b29_3 && b30_12 && b31_2 && b32_20 && b33_16 && b34_16 && b35_22 && b36_8 && b37_15 && b38_17 && b39_9) {
matched = true;
pattern_id = 344;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_2 && b20_35 && b21_26 && b22_28 && b23_19 && b24_24 && b25_28 && b26_4 && b27_22 && b28_19 && b29_21 && b30_13 && b31_21 && b32_21 && b33_17 && b34_17 && b35_23 && b36_9 && b37_14 && b38_18 && b39_1 && b40_16 && b41_15 && b42_9 && b43_12 && b44_12 && b45_11 && b46_10 && b47_12) {
matched = true;
pattern_id = 345;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_9 && b20_33 && b21_14 && b22_27 && b23_25 && b24_23 && b25_25 && b26_25 && b27_19 && b28_27 && b29_3 && b30_16 && b31_14 && b32_22 && b33_18 && b34_18 && b35_24) {
matched = true;
pattern_id = 346;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28 && b19_2 && b20_35 && b21_26 && b22_28 && b23_19 && b24_24 && b25_28 && b26_4 && b27_22 && b28_19 && b29_21 && b30_13 && b31_21 && b32_21 && b33_17 && b34_19 && b35_25 && b36_10 && b37_16 && b38_16 && b39_10 && b40_15 && b41_16 && b42_10 && b43_13 && b44_13 && b45_10 && b46_11) {
matched = true;
pattern_id = 347;
}
if(b0_35 && b1_11 && b2_49 && b3_15 && b4_16 && b5_6 && b6_23 && b7_31 && b8_47 && b9_28 && b10_26 && b11_27 && b12_38 && b13_16 && b14_25 && b15_31 && b16_5 && b17_37 && b18_15 && b19_21 && b20_13 && b21_27 && b22_20 && b23_26 && b24_3 && b25_29 && b26_26 && b27_3 && b28_27 && b29_21) {
matched = true;
pattern_id = 348;
}
if(b0_39 && b1_31 && b2_59 && b3_10 && b4_40 && b5_58 && b6_49 && b7_13 && b8_29 && b9_8 && b10_51 && b11_36 && b12_40 && b13_42 && b14_15 && b15_12 && b16_33 && b17_20 && b18_17 && b19_30 && b20_36 && b21_28 && b22_29 && b23_17 && b24_9 && b25_8 && b26_14 && b27_2 && b28_9 && b29_11 && b30_2) {
matched = true;
pattern_id = 349;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11 && b17_39 && b18_10 && b19_32 && b20_2 && b21_29 && b22_30 && b23_19 && b24_24 && b25_30 && b26_27 && b27_16 && b28_28 && b29_22 && b30_21) {
matched = true;
pattern_id = 350;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_5 && b11_3 && b12_41 && b13_43 && b14_18 && b15_38 && b16_29 && b17_40 && b18_19 && b19_21 && b20_25 && b21_14 && b22_28 && b23_27 && b24_25 && b25_19 && b26_28 && b27_23) {
matched = true;
pattern_id = 351;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_34 && b18_32 && b19_21 && b20_20 && b21_10 && b22_4 && b23_26 && b24_3 && b25_30 && b26_29 && b27_18 && b28_26 && b29_23 && b30_12 && b31_8 && b32_23) {
matched = true;
pattern_id = 352;
}
if(b0_35 && b1_11 && b2_49 && b3_26 && b4_7 && b5_52 && b6_18 && b7_31 && b8_7 && b9_20 && b10_26 && b11_27 && b12_39 && b13_5 && b14_42 && b15_36 && b16_25 && b17_39 && b18_33) {
matched = true;
pattern_id = 353;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_4 && b18_34 && b19_23 && b20_2 && b21_14 && b22_20 && b23_24 && b24_23 && b25_21 && b26_25 && b27_22 && b28_23 && b29_3 && b30_3 && b31_8 && b32_24 && b33_12 && b34_20 && b35_26 && b36_11) {
matched = true;
pattern_id = 354;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11 && b17_29 && b18_34 && b19_35 && b20_37 && b21_30 && b22_31 && b23_28 && b24_3 && b25_31 && b26_30 && b27_24 && b28_29) {
matched = true;
pattern_id = 355;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_51 && b9_22 && b10_36 && b11_36 && b12_9 && b13_34 && b14_15 && b15_8 && b16_34 && b17_41 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 356;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_45 && b9_46 && b10_15 && b11_36 && b12_23 && b13_23 && b14_23 && b15_11 && b16_35 && b17_42 && b18_2 && b19_36 && b20_38 && b21_31 && b22_6 && b23_29 && b24_26 && b25_32 && b26_31 && b27_8 && b28_9 && b29_8 && b30_5 && b31_15 && b32_13 && b33_4) {
matched = true;
pattern_id = 357;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_5 && b11_3 && b12_41 && b13_43 && b14_18 && b15_38) {
matched = true;
pattern_id = 358;
}
if(b0_39 && b1_31 && b2_59 && b3_10 && b4_40 && b5_58 && b6_49 && b7_13 && b8_29 && b9_8 && b10_51 && b11_36 && b12_40 && b13_42 && b14_15 && b15_12 && b16_28 && b17_24 && b18_16 && b19_37 && b20_39 && b21_32 && b22_32 && b23_1 && b24_9 && b25_8 && b26_14 && b27_2 && b28_9 && b29_11 && b30_2) {
matched = true;
pattern_id = 359;
}
if(b0_39 && b1_31 && b2_59 && b3_3 && b4_54 && b5_31 && b6_42 && b7_57 && b8_45 && b9_39 && b10_52 && b11_50 && b12_42 && b13_44 && b14_43 && b15_8 && b16_21 && b17_43 && b18_35 && b19_37 && b20_40 && b21_33 && b22_32 && b23_30 && b24_18 && b25_6 && b26_13 && b27_25 && b28_8 && b29_5 && b30_8 && b31_4) {
matched = true;
pattern_id = 360;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_52 && b9_47 && b10_15 && b11_51 && b12_43 && b13_45 && b14_44 && b15_7 && b16_27 && b17_6 && b18_3 && b19_26 && b20_7 && b21_4) {
matched = true;
pattern_id = 361;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_5 && b11_3 && b12_41 && b13_43 && b14_18 && b15_38 && b16_23 && b17_44 && b18_29 && b19_2 && b20_37 && b21_14 && b22_33 && b23_31 && b24_27 && b25_33 && b26_32 && b27_1 && b28_19 && b29_22 && b30_13 && b31_22 && b32_25 && b33_12 && b34_20 && b35_26 && b36_11) {
matched = true;
pattern_id = 362;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_51 && b9_22 && b10_36 && b11_36 && b12_9 && b13_34 && b14_15 && b15_2 && b16_36 && b17_42 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 363;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_45 && b9_22 && b10_15 && b11_51 && b12_43 && b13_45 && b14_44 && b15_7 && b16_27 && b17_6 && b18_3 && b19_26 && b20_7 && b21_4) {
matched = true;
pattern_id = 364;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_25 && b18_32 && b19_22 && b20_41 && b21_34 && b22_34 && b23_32 && b24_28 && b25_33 && b26_27 && b27_1 && b28_30 && b29_23 && b30_12 && b31_8 && b32_23) {
matched = true;
pattern_id = 365;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_53 && b9_22 && b10_36 && b11_36 && b12_9 && b13_34 && b14_15 && b15_2 && b16_36 && b17_42 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 366;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_53 && b9_22 && b10_36 && b11_52 && b12_42 && b13_23 && b14_45 && b15_39 && b16_37 && b17_22 && b18_17 && b19_5 && b20_42 && b21_17 && b22_35 && b23_33 && b24_9 && b25_8 && b26_14 && b27_2 && b28_9 && b29_11 && b30_2) {
matched = true;
pattern_id = 367;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_5 && b9_45 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_33 && b16_16 && b17_34 && b18_28) {
matched = true;
pattern_id = 368;
}
if(b0_39 && b1_31 && b2_55 && b3_10 && b4_5 && b5_24 && b6_47 && b7_56 && b8_31 && b9_22 && b10_53 && b11_53 && b12_14 && b13_46 && b14_46 && b15_24 && b16_38 && b17_45 && b18_8 && b19_26 && b20_16 && b21_3 && b22_10 && b23_5 && b24_9) {
matched = true;
pattern_id = 369;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11) {
matched = true;
pattern_id = 370;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_41 && b9_48 && b10_35 && b11_30 && b12_16 && b13_47 && b14_28 && b15_25 && b16_5 && b17_40 && b18_31 && b19_38 && b20_2 && b21_35 && b22_36 && b23_34 && b24_20 && b25_34 && b26_33) {
matched = true;
pattern_id = 371;
}
if(b0_35 && b1_2 && b2_50 && b3_50 && b4_22 && b5_16 && b6_36 && b7_31 && b8_35 && b9_49 && b10_6 && b11_27 && b12_12 && b13_30 && b14_47 && b15_20) {
matched = true;
pattern_id = 372;
}
if(b0_35 && b1_8 && b2_21 && b3_20 && b4_12 && b5_59 && b6_39 && b7_10 && b8_2 && b9_10 && b10_17 && b11_27 && b12_39 && b13_40 && b14_38 && b15_16 && b16_39) {
matched = true;
pattern_id = 373;
}
if(b0_35 && b1_11 && b2_49 && b3_15 && b4_16 && b5_6 && b6_23 && b7_31 && b8_47 && b9_28 && b10_26 && b11_27 && b12_38 && b13_16 && b14_25 && b15_31 && b16_5 && b17_37 && b18_15 && b19_21 && b20_13 && b21_10 && b22_3 && b23_32 && b24_1 && b25_30 && b26_27 && b27_19 && b28_31 && b29_24 && b30_22 && b31_19 && b32_20 && b33_19 && b34_21) {
matched = true;
pattern_id = 374;
}
if(b0_35 && b1_11 && b2_49 && b3_21 && b4_44 && b5_51 && b6_24 && b7_44 && b8_2 && b9_11 && b10_26 && b11_35 && b12_32 && b13_5 && b14_25 && b15_32 && b16_11 && b17_33 && b18_4 && b19_34 && b20_28 && b21_29 && b22_14 && b23_35 && b24_29 && b25_1 && b26_34 && b27_1 && b28_28 && b29_25 && b30_17 && b31_23 && b32_26 && b33_12 && b34_20 && b35_26 && b36_11) {
matched = true;
pattern_id = 375;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_10 && b7_47 && b8_41) {
matched = true;
pattern_id = 376;
}
if(b0_26 && b1_20 && b2_45 && b3_5) {
matched = true;
pattern_id = 377;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20 && b10_11 && b11_54 && b12_4 && b13_21 && b14_18 && b15_36 && b16_23 && b17_26 && b18_36) {
matched = true;
pattern_id = 378;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_14 && b5_47 && b6_35 && b7_44 && b8_41 && b9_6 && b10_12 && b11_40 && b12_5 && b13_22 && b14_25 && b15_32 && b16_32 && b17_21 && b18_9 && b19_25) {
matched = true;
pattern_id = 379;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_6 && b11_23 && b12_39 && b13_5 && b14_35 && b15_32 && b16_32 && b17_21 && b18_9 && b19_25) {
matched = true;
pattern_id = 380;
}
if(b0_35 && b1_40 && b2_50 && b3_18 && b4_17 && b5_55 && b6_8 && b7_29 && b8_16 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 381;
}
if(b0_35 && b1_40 && b2_50 && b3_20 && b4_12 && b5_27 && b6_8 && b7_29 && b8_16 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 382;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_26 && b6_8 && b7_47 && b8_11 && b9_20 && b10_25 && b11_35 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_38 && b18_37 && b19_34 && b20_33) {
matched = true;
pattern_id = 383;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_39 && b10_5 && b11_46 && b12_39 && b13_21 && b14_38 && b15_40 && b16_24 && b17_38 && b18_4 && b19_39 && b20_2) {
matched = true;
pattern_id = 384;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_6 && b11_23 && b12_39 && b13_5 && b14_35 && b15_32 && b16_32 && b17_37 && b18_30 && b19_34) {
matched = true;
pattern_id = 385;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_25 && b11_6 && b12_20 && b13_21 && b14_48 && b15_31 && b16_29 && b17_36 && b18_23 && b19_32 && b20_28 && b21_10 && b22_37 && b23_28 && b24_30 && b25_30) {
matched = true;
pattern_id = 386;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_3 && b17_10 && b18_9 && b19_22 && b20_3 && b21_2 && b22_22 && b23_34 && b24_31 && b25_30 && b26_33) {
matched = true;
pattern_id = 387;
}
if(b0_35 && b1_11 && b2_49 && b3_16 && b4_31 && b5_16 && b6_14 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 388;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_10 && b6_10 && b7_7 && b8_48 && b9_43 && b10_54 && b11_34) {
matched = true;
pattern_id = 389;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20 && b10_46 && b11_55 && b12_4 && b13_27 && b14_48 && b15_33 && b16_40 && b17_37 && b18_28 && b19_35 && b20_35 && b21_36 && b22_11 && b23_31 && b24_1 && b25_31 && b26_25 && b27_26 && b28_21) {
matched = true;
pattern_id = 390;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_35 && b7_7 && b8_35 && b9_14 && b10_28 && b11_40 && b12_26 && b13_4 && b14_5 && b15_36 && b16_16 && b17_46 && b18_20) {
matched = true;
pattern_id = 391;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_25 && b11_6 && b12_20 && b13_21 && b14_48 && b15_31 && b16_29 && b17_36 && b18_23 && b19_32 && b20_28 && b21_10 && b22_37 && b23_3 && b24_32 && b25_35) {
matched = true;
pattern_id = 392;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_28 && b11_47 && b12_18 && b13_5 && b14_5 && b15_32 && b16_32 && b17_4 && b18_11 && b19_4) {
matched = true;
pattern_id = 393;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_29 && b17_18 && b18_18 && b19_34 && b20_43 && b21_36) {
matched = true;
pattern_id = 394;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_3 && b17_10 && b18_9 && b19_22 && b20_3 && b21_2 && b22_22 && b23_34 && b24_32 && b25_29 && b26_19) {
matched = true;
pattern_id = 395;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_24 && b15_22 && b16_29 && b17_38 && b18_31 && b19_12 && b20_44) {
matched = true;
pattern_id = 396;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_16 && b6_36 && b7_10 && b8_48 && b9_43 && b10_54 && b11_34) {
matched = true;
pattern_id = 397;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_24 && b15_22 && b16_29 && b17_38 && b18_29 && b19_34 && b20_34) {
matched = true;
pattern_id = 398;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_24 && b15_22 && b16_29 && b17_36 && b18_18 && b19_40 && b20_41 && b21_34) {
matched = true;
pattern_id = 399;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20 && b10_11 && b11_54 && b12_4 && b13_21 && b14_18 && b15_36 && b16_29 && b17_40 && b18_4) {
matched = true;
pattern_id = 400;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_11 && b11_55 && b12_18 && b13_43 && b14_38 && b15_15 && b16_32 && b17_4 && b18_11 && b19_4) {
matched = true;
pattern_id = 401;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_26 && b6_2 && b7_47 && b8_49 && b9_40) {
matched = true;
pattern_id = 402;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_46 && b7_52 && b8_35 && b9_20 && b10_54 && b11_23 && b12_38 && b13_38 && b14_17 && b15_25 && b16_30 && b17_38 && b18_31 && b19_12 && b20_44) {
matched = true;
pattern_id = 403;
}
if(b0_32 && b1_26 && b2_60 && b3_29 && b4_35) {
matched = true;
pattern_id = 404;
}
if(b0_35 && b1_58 && b2_52 && b3_2 && b4_2 && b5_26 && b6_10 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 405;
}
if(b0_35 && b1_64 && b2_50 && b3_20 && b4_27 && b5_55 && b6_8 && b7_9 && b8_5 && b9_20 && b10_4 && b11_3 && b12_36 && b13_27 && b14_5 && b15_25 && b16_29 && b17_18 && b18_18 && b19_38 && b20_28 && b21_19) {
matched = true;
pattern_id = 406;
}
if(b0_51 && b1_20 && b2_32 && b3_42 && b4_1) {
matched = true;
pattern_id = 407;
}
if(b0_32 && b1_13 && b2_23 && b3_15 && b4_3 && b5_42 && b6_7 && b7_8) {
matched = true;
pattern_id = 408;
}
if(b0_35 && b1_65 && b2_60 && b3_15 && b4_16 && b5_51) {
matched = true;
pattern_id = 409;
}
if(b0_32 && b1_26 && b2_4 && b3_52 && b4_8 && b5_23 && b6_2 && b7_15) {
matched = true;
pattern_id = 410;
}
if(b0_32 && b1_2 && b2_8 && b3_50 && b4_32 && b5_38 && b6_15 && b7_1 && b8_25 && b9_8 && b10_1 && b11_42 && b12_44 && b13_26 && b14_14 && b15_24 && b16_35 && b17_24) {
matched = true;
pattern_id = 411;
}
if(b0_32 && b1_47 && b2_43 && b3_8 && b4_55) {
matched = true;
pattern_id = 412;
}
if(b0_32 && b1_11 && b2_21 && b3_49) {
matched = true;
pattern_id = 413;
}
if(b0_63 && b1_18 && b2_1) {
matched = true;
pattern_id = 414;
}
if(b0_32 && b1_14 && b2_3 && b3_2 && b4_55 && b5_31 && b6_35 && b7_58 && b8_5 && b9_50 && b10_55 && b11_37 && b12_4 && b13_16 && b14_6 && b15_35 && b16_8 && b17_29) {
matched = true;
pattern_id = 415;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_36 && b10_37 && b11_53 && b12_7 && b13_43 && b14_24 && b15_15 && b16_32 && b17_29 && b18_30 && b19_9) {
matched = true;
pattern_id = 416;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_4 && b18_9 && b19_17 && b20_35 && b21_29 && b22_22 && b23_28 && b24_33 && b25_31 && b26_35 && b27_17 && b28_28) {
matched = true;
pattern_id = 417;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_47 && b18_4 && b19_34 && b20_24 && b21_27 && b22_28 && b23_24 && b24_25 && b25_1 && b26_36 && b27_3) {
matched = true;
pattern_id = 418;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_43 && b10_4 && b11_6 && b12_45 && b13_47 && b14_49 && b15_21 && b16_14 && b17_34 && b18_22 && b19_31 && b20_43 && b21_37 && b22_37 && b23_26 && b24_8 && b25_23) {
matched = true;
pattern_id = 419;
}
if(b0_32 && b1_14 && b2_3 && b3_20) {
matched = true;
pattern_id = 420;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_2 && b5_6 && b6_46 && b7_14 && b8_2 && b9_10 && b10_48 && b11_3 && b12_45 && b13_5) {
matched = true;
pattern_id = 421;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_35 && b7_45 && b8_36 && b9_42 && b10_50 && b11_40 && b12_7 && b13_41) {
matched = true;
pattern_id = 422;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_18 && b13_3 && b14_41 && b15_36 && b16_41 && b17_37 && b18_22) {
matched = true;
pattern_id = 423;
}
if(b0_35 && b1_35 && b2_8 && b3_26 && b4_16 && b5_51 && b6_23 && b7_7 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_33 && b16_23 && b17_4 && b18_9 && b19_9 && b20_30 && b21_36 && b22_37 && b23_32 && b24_24 && b25_18) {
matched = true;
pattern_id = 424;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7) {
matched = true;
pattern_id = 425;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_49 && b10_26 && b11_5 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_20 && b19_9 && b20_44 && b21_14 && b22_38 && b23_25 && b24_32 && b25_31 && b26_37 && b27_19 && b28_29) {
matched = true;
pattern_id = 426;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_49 && b10_26 && b11_5 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_10 && b19_41 && b20_33 && b21_18 && b22_18 && b23_25 && b24_8 && b25_9 && b26_37 && b27_19 && b28_30 && b29_24 && b30_23 && b31_24 && b32_27 && b33_20) {
matched = true;
pattern_id = 427;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_3 && b13_36 && b14_25) {
matched = true;
pattern_id = 428;
}
if(b0_32 && b1_2 && b2_8 && b3_50 && b4_26) {
matched = true;
pattern_id = 429;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_7 && b9_27 && b10_35 && b11_3 && b12_19 && b13_49 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 430;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_49 && b10_26 && b11_5 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_38 && b19_42 && b20_27 && b21_5 && b22_37 && b23_3 && b24_32 && b25_27) {
matched = true;
pattern_id = 431;
}
if(b0_35 && b1_47 && b2_41 && b3_15 && b4_17 && b5_40 && b6_19 && b7_9 && b8_8) {
matched = true;
pattern_id = 432;
}
if(b0_35 && b1_11 && b2_43 && b3_20 && b4_51 && b5_10 && b6_2 && b7_29 && b8_34 && b9_34) {
matched = true;
pattern_id = 433;
}
if(b0_11 && b1_35 && b2_41 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 434;
}
if(b0_32 && b1_11 && b2_6 && b3_21 && b4_55 && b5_60) {
matched = true;
pattern_id = 435;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_2 && b5_11 && b6_18 && b7_47 && b8_34 && b9_5 && b10_11 && b11_13 && b12_5 && b13_50 && b14_20 && b15_35 && b16_3 && b17_28 && b18_37 && b19_31 && b20_45 && b21_27 && b22_3 && b23_36 && b24_17 && b25_27 && b26_38 && b27_4 && b28_32 && b29_26 && b30_17 && b31_24 && b32_25 && b33_21 && b34_2 && b35_19 && b36_12 && b37_17 && b38_19 && b39_11 && b40_17) {
matched = true;
pattern_id = 436;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_2 && b5_11 && b6_18 && b7_47 && b8_34 && b9_5 && b10_11 && b11_13 && b12_16 && b13_19 && b14_50 && b15_38 && b16_5 && b17_36 && b18_19 && b19_43 && b20_32 && b21_21 && b22_39 && b23_24 && b24_23 && b25_19 && b26_3 && b27_17 && b28_21 && b29_27 && b30_18 && b31_25 && b32_9 && b33_12 && b34_22 && b35_20 && b36_13) {
matched = true;
pattern_id = 437;
}
if(b0_35 && b1_31 && b2_20 && b3_20 && b4_24 && b5_37 && b6_58 && b7_16 && b8_41 && b9_14 && b10_26 && b11_35 && b12_4 && b13_40 && b14_20 && b15_32 && b16_16) {
matched = true;
pattern_id = 438;
}
if(b0_64 && b1_58 && b2_25 && b3_24 && b4_56 && b5_30 && b6_24 && b7_59 && b8_41 && b9_4 && b10_41 && b11_22 && b12_6 && b13_51 && b14_15 && b15_7 && b16_42 && b17_38 && b18_39) {
matched = true;
pattern_id = 439;
}
if(b0_35 && b1_9 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_28 && b8_42 && b9_14 && b10_26 && b11_46 && b12_46 && b13_41 && b14_17 && b15_32 && b16_37 && b17_48 && b18_29 && b19_40 && b20_17 && b21_27 && b22_40 && b23_28 && b24_25 && b25_22 && b26_27 && b27_21) {
matched = true;
pattern_id = 440;
}
if(b0_63 && b1_17 && b2_62) {
matched = true;
pattern_id = 441;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_7 && b9_27 && b10_35 && b11_3 && b12_19 && b13_49 && b14_34 && b15_3 && b16_43 && b17_29) {
matched = true;
pattern_id = 442;
}
if(b0_35 && b1_40 && b2_50 && b3_40 && b4_44 && b5_29 && b6_55 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 443;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_10 && b10_6 && b11_6 && b12_25 && b13_16 && b14_49 && b15_40 && b16_29 && b17_37 && b18_20 && b19_21 && b20_46 && b21_10 && b22_37 && b23_18 && b24_30 && b25_33) {
matched = true;
pattern_id = 444;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_15 && b8_42 && b9_9 && b10_28) {
matched = true;
pattern_id = 445;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_7 && b9_27 && b10_35 && b11_3 && b12_19 && b13_49 && b14_34 && b15_35 && b16_23 && b17_4) {
matched = true;
pattern_id = 446;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_5 && b13_50 && b14_36) {
matched = true;
pattern_id = 447;
}
if(b0_39 && b1_21 && b2_63 && b3_11 && b4_51 && b5_61 && b6_35 && b7_9 && b8_2 && b9_39 && b10_26 && b11_30 && b12_5 && b13_20) {
matched = true;
pattern_id = 448;
}
if(b0_32 && b1_21 && b2_41 && b3_40 && b4_32 && b5_38 && b6_15 && b7_1 && b8_25 && b9_8 && b10_1 && b11_42 && b12_44 && b13_26 && b14_51 && b15_33 && b16_44 && b17_10) {
matched = true;
pattern_id = 449;
}
if(b0_43 && b1_26 && b2_15 && b3_8 && b4_17) {
matched = true;
pattern_id = 450;
}
if(b0_35 && b1_2 && b2_41 && b3_27 && b4_31 && b5_10 && b6_10 && b7_30 && b8_2 && b9_20 && b10_17 && b11_56 && b12_37 && b13_27 && b14_36 && b15_20 && b16_29 && b17_49 && b18_9 && b19_43 && b20_25 && b21_14 && b22_3 && b23_32 && b24_8 && b25_36 && b26_39 && b27_27 && b28_30 && b29_28 && b30_24 && b31_14 && b32_22 && b33_17 && b34_23 && b35_23) {
matched = true;
pattern_id = 451;
}
if(b0_35 && b1_35 && b2_8 && b3_26 && b4_16 && b5_51 && b6_24 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 452;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_10 && b10_6 && b11_6 && b12_25 && b13_16 && b14_49 && b15_41 && b16_29 && b17_46 && b18_20 && b19_41 && b20_41 && b21_18 && b22_19 && b23_37 && b24_3) {
matched = true;
pattern_id = 453;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_43 && b10_17 && b11_23 && b12_25) {
matched = true;
pattern_id = 454;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_26 && b5_52 && b6_20) {
matched = true;
pattern_id = 455;
}
if(b0_43 && b1_26 && b2_50 && b3_24) {
matched = true;
pattern_id = 456;
}
if(b0_35 && b1_21 && b2_8 && b3_18 && b4_18 && b5_27 && b6_46 && b7_54 && b8_5 && b9_9 && b10_22 && b11_56 && b12_37 && b13_5 && b14_35 && b15_42 && b16_32 && b17_10 && b18_29 && b19_2) {
matched = true;
pattern_id = 457;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_13) {
matched = true;
pattern_id = 458;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_49 && b8_30 && b9_42 && b10_56 && b11_40 && b12_16) {
matched = true;
pattern_id = 459;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_5 && b6_7 && b7_8 && b8_54 && b9_5 && b10_4 && b11_13 && b12_47 && b13_32 && b14_52 && b15_15 && b16_24 && b17_36 && b18_37 && b19_22 && b20_41 && b21_38 && b22_4 && b23_38 && b24_4 && b25_33 && b26_40 && b27_3 && b28_31 && b29_29 && b30_19 && b31_26 && b32_28 && b33_22 && b34_17) {
matched = true;
pattern_id = 460;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_60 && b8_7 && b9_6 && b10_54 && b11_30 && b12_5 && b13_19 && b14_41 && b15_3 && b16_11 && b17_50 && b18_4 && b19_25 && b20_47 && b21_29 && b22_34 && b23_24 && b24_31 && b25_1 && b26_24 && b27_10 && b28_33 && b29_16 && b30_15 && b31_27 && b32_27 && b33_20 && b34_24 && b35_25 && b36_14 && b37_18 && b38_20 && b39_12 && b40_18 && b41_14 && b42_9 && b43_14 && b44_14 && b45_12 && b46_12 && b47_13 && b48_5) {
matched = true;
pattern_id = 461;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_60 && b8_7 && b9_6 && b10_54 && b11_30 && b12_5 && b13_19 && b14_41 && b15_3 && b16_11 && b17_50 && b18_4 && b19_25 && b20_47 && b21_29 && b22_34 && b23_24 && b24_31 && b25_1 && b26_24 && b27_10 && b28_33 && b29_16 && b30_15 && b31_27 && b32_27 && b33_20 && b34_24 && b35_25 && b36_15 && b37_19 && b38_21 && b39_13 && b40_19 && b41_15 && b42_11 && b43_15 && b44_15 && b45_13 && b46_13 && b47_14 && b48_6 && b49_2 && b50_5 && b51_5 && b52_6 && b53_6 && b54_4 && b55_1 && b56_4) {
matched = true;
pattern_id = 462;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_16 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_43 && b16_22 && b17_27 && b18_40 && b19_32 && b20_2 && b21_20 && b22_41 && b23_18 && b24_23 && b25_37 && b26_25 && b27_23 && b28_13 && b29_30 && b30_18 && b31_28 && b32_29 && b33_16 && b34_17 && b35_17 && b36_16 && b37_20 && b38_22 && b39_14 && b40_20 && b41_17 && b42_1 && b43_14 && b44_16 && b45_14 && b46_14 && b47_15 && b48_7 && b49_6 && b50_7 && b51_6 && b52_7 && b53_7 && b54_1 && b55_8 && b56_5 && b57_5 && b58_6 && b59_5 && b60_6 && b61_6 && b62_5 && b63_4 && b64_5) {
matched = true;
pattern_id = 463;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_16 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_43 && b16_22 && b17_27 && b18_40 && b19_32 && b20_2 && b21_20 && b22_41 && b23_18 && b24_23 && b25_38 && b26_41 && b27_4 && b28_4 && b29_18 && b30_25 && b31_29 && b32_25 && b33_9 && b34_8 && b35_27 && b36_17 && b37_21 && b38_23 && b39_1 && b40_21 && b41_18) {
matched = true;
pattern_id = 464;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_26 && b6_23 && b7_16 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49 && b15_43 && b16_22 && b17_27 && b18_40 && b19_32 && b20_2 && b21_20 && b22_41 && b23_18 && b24_23 && b25_32 && b26_25 && b27_22 && b28_34 && b29_26 && b30_26 && b31_9 && b32_30 && b33_16 && b34_24 && b35_19 && b36_18 && b37_16 && b38_24 && b39_12 && b40_22 && b41_19 && b42_12 && b43_16) {
matched = true;
pattern_id = 465;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_31 && b5_51 && b6_3 && b7_29 && b8_5 && b9_42 && b10_28 && b11_5 && b12_32) {
matched = true;
pattern_id = 466;
}
if(b0_35 && b1_2 && b2_41 && b3_18 && b4_18 && b5_27 && b6_46 && b7_54 && b8_5 && b9_9 && b10_22 && b11_47 && b12_26 && b13_22 && b14_47 && b15_35 && b16_18 && b17_28 && b18_29 && b19_22 && b20_28 && b21_29 && b22_37 && b23_27 && b24_24 && b25_19) {
matched = true;
pattern_id = 467;
}
if(b0_35 && b1_52 && b2_43 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_15 && b9_49 && b10_11 && b11_46 && b12_32 && b13_27 && b14_49 && b15_32 && b16_3 && b17_4 && b18_37 && b19_44 && b20_48 && b21_36 && b22_14) {
matched = true;
pattern_id = 468;
}
if(b0_35 && b1_52 && b2_23 && b3_40 && b4_15 && b5_11 && b6_34 && b7_39) {
matched = true;
pattern_id = 469;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_19 && b10_5 && b11_30 && b12_26 && b13_43 && b14_51 && b15_41 && b16_32 && b17_10 && b18_29 && b19_2) {
matched = true;
pattern_id = 470;
}
if(b0_49 && b1_16 && b2_43 && b3_43 && b4_2 && b5_25 && b6_8 && b7_9 && b8_5 && b9_4 && b10_41 && b11_22 && b12_10 && b13_1 && b14_6) {
matched = true;
pattern_id = 471;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_51 && b6_3 && b7_29 && b8_5 && b9_42 && b10_28 && b11_5 && b12_32) {
matched = true;
pattern_id = 472;
}
if(b0_32 && b1_14 && b2_3 && b3_2) {
matched = true;
pattern_id = 473;
}
if(b0_61 && b1_15 && b2_10) {
matched = true;
pattern_id = 474;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_30 && b6_35 && b7_11 && b8_2 && b9_27 && b10_35 && b11_35 && b12_25 && b13_5 && b14_5) {
matched = true;
pattern_id = 475;
}
if(b0_6 && b1_28 && b2_64 && b3_25 && b4_28 && b5_46 && b6_12 && b7_44 && b8_3) {
matched = true;
pattern_id = 476;
}
if(b0_47 && b1_4 && b2_31 && b3_30 && b4_57 && b5_4) {
matched = true;
pattern_id = 477;
}
if(b0_3 && b1_28 && b2_40 && b3_38 && b4_58 && b5_24 && b6_45 && b7_17 && b8_43 && b9_51 && b10_57 && b11_18 && b12_35) {
matched = true;
pattern_id = 478;
}
if(b0_35 && b1_6 && b2_25 && b3_40 && b4_15 && b5_20 && b6_3 && b7_9 && b8_5 && b9_20 && b10_35 && b11_46 && b12_38 && b13_22 && b14_34 && b15_22 && b16_18 && b17_44) {
matched = true;
pattern_id = 479;
}
if(b0_35 && b1_6 && b2_25 && b3_40 && b4_15 && b5_20 && b6_3 && b7_9 && b8_5 && b9_20 && b10_5 && b11_23 && b12_38 && b13_22 && b14_25 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 480;
}
if(b0_35 && b1_2 && b2_41 && b3_18 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 481;
}
if(b0_32 && b1_66 && b2_8 && b3_50) {
matched = true;
pattern_id = 482;
}
if(b0_63 && b1_18 && b2_26 && b3_53 && b4_12 && b5_62 && b6_24 && b7_47) {
matched = true;
pattern_id = 483;
}
if(b0_23 && b1_6 && b2_50 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 484;
}
if(b0_59 && b1_13 && b2_59 && b3_11 && b4_3 && b5_29 && b6_18 && b7_29 && b8_2 && b9_11) {
matched = true;
pattern_id = 485;
}
if(b0_59 && b1_13 && b2_59 && b3_49 && b4_27 && b5_25 && b6_7 && b7_54 && b8_11 && b9_9 && b10_13) {
matched = true;
pattern_id = 486;
}
if(b0_59 && b1_13 && b2_59 && b3_26 && b4_11 && b5_11 && b6_35 && b7_54 && b8_42 && b9_50 && b10_49 && b11_3 && b12_7 && b13_5 && b14_51 && b15_35 && b16_5) {
matched = true;
pattern_id = 487;
}
if(b0_59 && b1_13 && b2_59 && b3_40 && b4_24 && b5_12 && b6_24 && b7_2 && b8_5 && b9_34 && b10_49) {
matched = true;
pattern_id = 488;
}
if(b0_30 && b1_11 && b2_60 && b3_11 && b4_53 && b5_6) {
matched = true;
pattern_id = 489;
}
if(b0_18 && b1_52 && b2_15 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 490;
}
if(b0_20 && b1_11 && b2_6 && b3_21 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 491;
}
if(b0_33 && b1_3 && b2_24 && b3_43 && b4_12 && b5_42 && b6_2 && b7_10 && b8_55 && b9_5) {
matched = true;
pattern_id = 492;
}
if(b0_30 && b1_3 && b2_3 && b3_29 && b4_12 && b5_2 && b6_7) {
matched = true;
pattern_id = 493;
}
if(b0_33 && b1_40 && b2_3 && b3_50 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 494;
}
if(b0_59 && b1_13 && b2_59 && b3_20 && b4_12 && b5_47 && b6_10 && b7_10 && b8_42 && b9_40) {
matched = true;
pattern_id = 495;
}
if(b0_24 && b1_28 && b2_5 && b3_9 && b4_8 && b5_61 && b6_12) {
matched = true;
pattern_id = 496;
}
if(b0_32 && b1_14 && b2_3 && b3_50 && b4_18 && b5_26 && b6_24 && b7_53 && b8_47) {
matched = true;
pattern_id = 497;
}
if(b0_32 && b1_50 && b2_8 && b3_49 && b4_35) {
matched = true;
pattern_id = 498;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11 && b17_36 && b18_4 && b19_35 && b20_17 && b21_35 && b22_11 && b23_39 && b24_34 && b25_33 && b26_22 && b27_28 && b28_18 && b29_25 && b30_15 && b31_26 && b32_25 && b33_23 && b34_24) {
matched = true;
pattern_id = 499;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_43 && b10_6 && b11_5 && b12_4 && b13_27 && b14_28 && b15_16 && b16_30 && b17_38 && b18_32 && b19_41 && b20_34) {
matched = true;
pattern_id = 500;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_14 && b10_17 && b11_35 && b12_26 && b13_16 && b14_25 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 501;
}
if(b0_35 && b1_52 && b2_43 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_15 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_38 && b16_45 && b17_35 && b18_4 && b19_21 && b20_49 && b21_7 && b22_27 && b23_28 && b24_25 && b25_28 && b26_19 && b27_23) {
matched = true;
pattern_id = 502;
}
if(b0_35 && b1_11 && b2_20 && b3_7 && b4_3 && b5_42 && b6_7 && b7_8 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 503;
}
if(b0_17 && b1_16 && b2_20 && b3_50 && b4_21 && b5_16 && b6_55 && b7_29) {
matched = true;
pattern_id = 504;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_17 && b10_6 && b11_26 && b12_12 && b13_32 && b14_28 && b15_35 && b16_46 && b17_51 && b18_18 && b19_41 && b20_2 && b21_5 && b22_42 && b23_25 && b24_3 && b25_30 && b26_25 && b27_26 && b28_21 && b29_26 && b30_22 && b31_30 && b32_31 && b33_24 && b34_16 && b35_28 && b36_17 && b37_22 && b38_1 && b39_15 && b40_23 && b41_20 && b42_1 && b43_17) {
matched = true;
pattern_id = 505;
}
if(b0_35 && b1_58 && b2_8 && b3_16 && b4_31 && b5_30 && b6_21 && b7_11 && b8_7 && b9_20 && b10_11 && b11_3 && b12_17 && b13_4 && b14_38 && b15_44 && b16_47 && b17_4 && b18_15 && b19_12 && b20_28 && b21_29 && b22_30 && b23_28 && b24_35) {
matched = true;
pattern_id = 506;
}
if(b0_20 && b1_3 && b2_49 && b3_54 && b4_45 && b5_31 && b6_24 && b7_32 && b8_8 && b9_49 && b10_5 && b11_40 && b12_48 && b13_31 && b14_1 && b15_15 && b16_5 && b17_49 && b18_41 && b19_28 && b20_24 && b21_38 && b22_19 && b23_40 && b24_19 && b25_39 && b26_42 && b27_29 && b28_9 && b29_31 && b30_27 && b31_31 && b32_28 && b33_22 && b34_20 && b35_29 && b36_19 && b37_23 && b38_21) {
matched = true;
pattern_id = 507;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_35 && b10_17 && b11_23 && b12_41 && b13_41 && b14_17 && b15_25 && b16_20 && b17_40 && b18_4 && b19_40) {
matched = true;
pattern_id = 508;
}
if(b0_22 && b1_3 && b2_23 && b3_27 && b4_22 && b5_6 && b6_11 && b7_44 && b8_48 && b9_42 && b10_48 && b11_57 && b12_12 && b13_40 && b14_34) {
matched = true;
pattern_id = 509;
}
if(b0_14 && b1_12 && b2_5 && b3_28 && b4_5 && b5_23 && b6_60 && b7_17 && b8_3 && b9_39 && b10_16 && b11_2 && b12_14 && b13_7 && b14_3 && b15_45 && b16_48 && b17_2 && b18_42 && b19_26 && b20_8 && b21_39 && b22_7 && b23_8 && b24_13 && b25_12 && b26_8 && b27_9 && b28_7 && b29_7 && b30_28 && b31_16 && b32_1 && b33_5 && b34_25 && b35_5 && b36_2 && b37_24 && b38_25 && b39_16 && b40_6 && b41_13) {
matched = true;
pattern_id = 510;
}
if(b0_65 && b1_9 && b2_40 && b3_9 && b4_40 && b5_63 && b6_44 && b7_61 && b8_43) {
matched = true;
pattern_id = 511;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_59 && b5_26 && b6_11 && b7_14 && b8_8 && b9_5 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 512;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_7 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 513;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_6 && b6_55 && b7_9 && b8_11 && b9_17 && b10_28 && b11_40 && b12_5 && b13_40 && b14_38 && b15_40 && b16_24 && b17_52 && b18_43 && b19_13 && b20_38 && b21_40 && b22_16 && b23_41 && b24_36 && b25_39) {
matched = true;
pattern_id = 514;
}
if(b0_65 && b1_67 && b2_65 && b3_55 && b4_55 && b5_64 && b6_61 && b7_62 && b8_18 && b9_52) {
matched = true;
pattern_id = 515;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_41 && b9_12 && b10_26 && b11_14) {
matched = true;
pattern_id = 516;
}
if(b0_35 && b1_11 && b2_43 && b3_40 && b4_15 && b5_6 && b6_34 && b7_56 && b8_36 && b9_5 && b10_17 && b11_34 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 517;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_48 && b9_5 && b10_47 && b11_3 && b12_22) {
matched = true;
pattern_id = 518;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_7 && b5_25 && b6_39 && b7_7 && b8_48 && b9_17 && b10_38 && b11_37 && b12_22) {
matched = true;
pattern_id = 519;
}
if(b0_62 && b1_13 && b2_23 && b3_15 && b4_11 && b5_11 && b6_11 && b7_10 && b8_15 && b9_9 && b10_50 && b11_6 && b12_32 && b13_6 && b14_24 && b15_41 && b16_18 && b17_53 && b18_31 && b19_35 && b20_17 && b21_36 && b22_37 && b23_9 && b24_29 && b25_21) {
matched = true;
pattern_id = 520;
}
if(b0_35 && b1_11 && b2_66 && b3_48 && b4_12 && b5_8 && b6_36 && b7_14 && b8_40) {
matched = true;
pattern_id = 521;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_46 && b16_5 && b17_54 && b18_32 && b19_18 && b20_10 && b21_41 && b22_37 && b23_12 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 522;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_47 && b16_29 && b17_13 && b18_9 && b19_21 && b20_2 && b21_2 && b22_18 && b23_24 && b24_2 && b25_32 && b26_25 && b27_3 && b28_35 && b29_19 && b30_13 && b31_32 && b32_26 && b33_8 && b34_12 && b35_22 && b36_20 && b37_25 && b38_26 && b39_17 && b40_15 && b41_17 && b42_3 && b43_4 && b44_17 && b45_3 && b46_4 && b47_8 && b48_3) {
matched = true;
pattern_id = 523;
}
if(b0_35 && b1_50 && b2_25 && b3_18 && b4_2 && b5_29 && b6_24 && b7_56 && b8_11 && b9_9 && b10_46 && b11_35 && b12_20 && b13_36 && b14_52 && b15_35 && b16_22 && b17_33 && b18_44 && b19_45 && b20_3 && b21_30 && b22_43) {
matched = true;
pattern_id = 524;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_37 && b7_7 && b8_5 && b9_14 && b10_56 && b11_13 && b12_18 && b13_36 && b14_28 && b15_16 && b16_24 && b17_33 && b18_28 && b19_35 && b20_32 && b21_19 && b22_40 && b23_36) {
matched = true;
pattern_id = 525;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_10 && b6_24 && b7_9 && b8_2 && b9_53 && b10_43 && b11_57 && b12_16 && b13_3 && b14_40) {
matched = true;
pattern_id = 526;
}
if(b0_35 && b1_13 && b2_20 && b3_24 && b4_22 && b5_16 && b6_11 && b7_44 && b8_56 && b9_6 && b10_49 && b11_30 && b12_49 && b13_28 && b14_25 && b15_48 && b16_34 && b17_20 && b18_45 && b19_46 && b20_46 && b21_41 && b22_37 && b23_2 && b24_25 && b25_19 && b26_39 && b27_18) {
matched = true;
pattern_id = 527;
}
if(b0_35 && b1_40 && b2_3 && b3_50 && b4_26 && b5_52 && b6_20) {
matched = true;
pattern_id = 528;
}
if(b0_35 && b1_66 && b2_8 && b3_50 && b4_35 && b5_26 && b6_55 && b7_47 && b8_15) {
matched = true;
pattern_id = 529;
}
if(b0_35 && b1_42 && b2_1 && b3_1) {
matched = true;
pattern_id = 530;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_30 && b6_7 && b7_46 && b8_15 && b9_9 && b10_6 && b11_4 && b12_20 && b13_30 && b14_17 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 531;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_6 && b5_6 && b6_59 && b7_9 && b8_4 && b9_40 && b10_35 && b11_37 && b12_3 && b13_52 && b14_38 && b15_30 && b16_22 && b17_37 && b18_4 && b19_39 && b20_28 && b21_28 && b22_18 && b23_9 && b24_4 && b25_4 && b26_26 && b27_28 && b28_30 && b29_21 && b30_16) {
matched = true;
pattern_id = 532;
}
if(b0_32 && b1_14 && b2_3 && b3_34 && b4_22 && b5_30 && b6_2 && b7_15 && b8_48 && b9_42 && b10_48 && b11_57) {
matched = true;
pattern_id = 533;
}
if(b0_65 && b1_27 && b2_25 && b3_24 && b4_12 && b5_42 && b6_7 && b7_22 && b8_14 && b9_17 && b10_9 && b11_26 && b12_5 && b13_22 && b14_25) {
matched = true;
pattern_id = 534;
}
if(b0_65 && b1_28 && b2_41 && b3_15 && b4_6 && b5_41 && b6_3 && b7_32 && b8_12 && b9_28 && b10_17 && b11_27 && b12_4) {
matched = true;
pattern_id = 535;
}
if(b0_13 && b1_52 && b2_67 && b3_53 && b4_4 && b5_43 && b6_20) {
matched = true;
pattern_id = 536;
}
if(b0_35 && b1_35 && b2_24 && b3_6 && b4_19 && b5_40 && b6_46 && b7_2 && b8_35 && b9_28 && b10_49) {
matched = true;
pattern_id = 537;
}
if(b0_35 && b1_35 && b2_66 && b3_24 && b4_44 && b5_47 && b6_2 && b7_47 && b8_6 && b9_10 && b10_35 && b11_30) {
matched = true;
pattern_id = 538;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_52 && b6_8 && b7_7 && b8_2 && b9_33 && b10_7) {
matched = true;
pattern_id = 539;
}
if(b0_65 && b1_49 && b2_43 && b3_16 && b4_12 && b5_5 && b6_7 && b7_8 && b8_54 && b9_49 && b10_43 && b11_3 && b12_16) {
matched = true;
pattern_id = 540;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_44 && b8_41 && b9_25 && b10_17 && b11_47 && b12_24 && b13_40 && b14_25 && b15_37 && b16_44) {
matched = true;
pattern_id = 541;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_14 && b5_11 && b6_10 && b7_9 && b8_15) {
matched = true;
pattern_id = 542;
}
if(b0_62 && b1_19 && b2_62 && b3_8 && b4_15 && b5_31 && b6_19 && b7_31 && b8_7 && b9_12 && b10_17 && b11_58 && b12_20 && b13_41 && b14_40) {
matched = true;
pattern_id = 543;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_17 && b10_6 && b11_27 && b12_41 && b13_5 && b14_35 && b15_25 && b16_32 && b17_13 && b18_32 && b19_41) {
matched = true;
pattern_id = 544;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_17 && b10_5 && b11_5 && b12_50 && b13_36 && b14_5 && b15_25 && b16_32 && b17_47 && b18_36 && b19_32) {
matched = true;
pattern_id = 545;
}
if(b0_32 && b1_14 && b2_3 && b3_26 && b4_14 && b5_51 && b6_7 && b7_7 && b8_2) {
matched = true;
pattern_id = 546;
}
if(b0_32 && b1_59 && b2_17 && b3_2 && b4_18 && b5_51 && b6_20) {
matched = true;
pattern_id = 547;
}
if(b0_32 && b1_59 && b2_17 && b3_2 && b4_59 && b5_11 && b6_36 && b7_54) {
matched = true;
pattern_id = 548;
}
if(b0_14 && b1_28 && b2_34 && b3_28 && b4_59 && b5_23 && b6_27 && b7_13 && b8_3 && b9_39 && b10_16 && b11_2 && b12_14 && b13_7 && b14_3 && b15_45 && b16_6 && b17_2 && b18_5 && b19_5 && b20_8 && b21_1 && b22_44 && b23_8 && b24_11 && b25_12 && b26_8 && b27_12 && b28_20 && b29_1 && b30_4 && b31_3 && b32_3 && b33_3 && b34_1 && b35_5 && b36_21 && b37_13 && b38_2 && b39_18 && b40_3 && b41_9 && b42_13 && b43_11) {
matched = true;
pattern_id = 549;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43 && b10_41) {
matched = true;
pattern_id = 550;
}
if(b0_11 && b1_58 && b2_60 && b3_29) {
matched = true;
pattern_id = 551;
}
if(b0_26 && b1_5 && b2_11 && b3_35 && b4_20 && b5_48 && b6_62 && b7_37 && b8_57 && b9_54 && b10_51 && b11_18 && b12_27 && b13_20 && b14_52 && b15_30 && b16_30 && b17_33 && b18_10 && b19_9 && b20_33 && b21_14 && b22_20) {
matched = true;
pattern_id = 552;
}
if(b0_56 && b1_28 && b2_5 && b3_39 && b4_35 && b5_40 && b6_23) {
matched = true;
pattern_id = 553;
}
if(b0_35 && b1_62 && b2_62 && b3_11 && b4_2 && b5_42 && b6_21 && b7_14 && b8_14 && b9_55 && b10_48 && b11_35 && b12_25) {
matched = true;
pattern_id = 554;
}
if(b0_35 && b1_14 && b2_43 && b3_43 && b4_16 && b5_25 && b6_7 && b7_8) {
matched = true;
pattern_id = 555;
}
if(b0_35 && b1_26 && b2_60 && b3_29 && b4_26) {
matched = true;
pattern_id = 556;
}
if(b0_35 && b1_68 && b2_23 && b3_6 && b4_44 && b5_42) {
matched = true;
pattern_id = 557;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_44 && b8_11 && b9_28 && b10_5 && b11_6 && b12_20 && b13_38 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 558;
}
if(b0_11 && b1_2 && b2_3 && b3_14) {
matched = true;
pattern_id = 559;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_24 && b7_44 && b8_11 && b9_28 && b10_5 && b11_6 && b12_20 && b13_38 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 560;
}
if(b0_35 && b1_11 && b2_20 && b3_7 && b4_3 && b5_42 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 561;
}
if(b0_35 && b1_11 && b2_43 && b3_8 && b4_18 && b5_25 && b6_3 && b7_46 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 562;
}
if(b0_35 && b1_58 && b2_20 && b3_34 && b4_14 && b5_3 && b6_38 && b7_15 && b8_7 && b9_9 && b10_25) {
matched = true;
pattern_id = 563;
}
if(b0_35 && b1_58 && b2_20 && b3_34 && b4_22 && b5_10 && b6_38 && b7_15 && b8_7 && b9_9 && b10_25) {
matched = true;
pattern_id = 564;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_26 && b5_20 && b6_24 && b7_55) {
matched = true;
pattern_id = 565;
}
if(b0_35 && b1_50 && b2_43 && b3_34 && b4_12 && b5_26 && b6_2 && b7_45 && b8_2 && b9_48) {
matched = true;
pattern_id = 566;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_24 && b7_44 && b8_41 && b9_25 && b10_17 && b11_47 && b12_24 && b13_16 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 567;
}
if(b0_35 && b1_61 && b2_29 && b3_56 && b4_35 && b5_30 && b6_23 && b7_44) {
matched = true;
pattern_id = 568;
}
if(b0_35 && b1_49 && b2_45 && b3_57 && b4_2 && b5_6 && b6_10 && b7_44 && b8_56 && b9_35 && b10_15 && b11_36 && b12_11 && b13_4 && b14_35 && b15_19 && b16_5 && b17_33 && b18_4 && b19_44 && b20_48 && b21_36 && b22_14) {
matched = true;
pattern_id = 569;
}
if(b0_35 && b1_59 && b2_14 && b3_43 && b4_16 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 570;
}
if(b0_65 && b1_59 && b2_50 && b3_51) {
matched = true;
pattern_id = 571;
}
if(b0_35 && b1_13 && b2_43 && b3_18 && b4_2 && b5_21 && b6_34 && b7_15 && b8_40 && b9_25 && b10_5 && b11_17) {
matched = true;
pattern_id = 572;
}
if(b0_35 && b1_11 && b2_10 && b3_53 && b4_31 && b5_6 && b6_21 && b7_15 && b8_5 && b9_45 && b10_17 && b11_13 && b12_51 && b13_3 && b14_20 && b15_41 && b16_18 && b17_29 && b18_35 && b19_42 && b20_33 && b21_27 && b22_20 && b23_42 && b24_22 && b25_3 && b26_27 && b27_30 && b28_31 && b29_19 && b30_29) {
matched = true;
pattern_id = 573;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_16 && b5_16 && b6_24 && b7_9 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 574;
}
if(b0_35 && b1_69 && b2_62 && b3_15 && b4_60 && b5_26 && b6_11 && b7_14 && b8_8 && b9_5 && b10_48 && b11_47 && b12_52 && b13_53) {
matched = true;
pattern_id = 575;
}
if(b0_35 && b1_70 && b2_63 && b3_58 && b4_40 && b5_32 && b6_2 && b7_17 && b8_59 && b9_22) {
matched = true;
pattern_id = 576;
}
if(b0_35 && b1_59 && b2_8 && b3_35 && b4_21 && b5_42 && b6_46 && b7_15 && b8_11 && b9_11 && b10_26) {
matched = true;
pattern_id = 577;
}
if(b0_35 && b1_16 && b2_50 && b3_34 && b4_59 && b5_59 && b6_39 && b7_10 && b8_8 && b9_41) {
matched = true;
pattern_id = 578;
}
if(b0_35 && b1_35 && b2_43 && b3_24 && b4_22 && b5_37 && b6_20 && b7_14 && b8_58 && b9_56 && b10_25 && b11_37 && b12_25 && b13_5 && b14_5 && b15_38 && b16_30 && b17_18 && b18_20 && b19_9 && b20_17 && b21_18 && b22_28 && b23_31 && b24_37) {
matched = true;
pattern_id = 579;
}
if(b0_35 && b1_47 && b2_14 && b3_16 && b4_14 && b5_10 && b6_55 && b7_55 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 580;
}
if(b0_35 && b1_3 && b2_17 && b3_18 && b4_35 && b5_11 && b6_10 && b7_32 && b8_6 && b9_49 && b10_13 && b11_3 && b12_45 && b13_38 && b14_48 && b15_49 && b16_40 && b17_29 && b18_22 && b19_45 && b20_10 && b21_42 && b22_28) {
matched = true;
pattern_id = 581;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_30 && b10_58) {
matched = true;
pattern_id = 582;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_51 && b5_10 && b6_8 && b7_8 && b8_47 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 583;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_11 && b5_6 && b6_10 && b7_11 && b8_36 && b9_41 && b10_59 && b11_30 && b12_38 && b13_22 && b14_50) {
matched = true;
pattern_id = 584;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_40 && b6_46 && b7_2 && b8_40 && b9_57) {
matched = true;
pattern_id = 585;
}
if(b0_35 && b1_32 && b2_14 && b3_6 && b4_22 && b5_11 && b6_11 && b7_11 && b8_14 && b9_11 && b10_48 && b11_35 && b12_50 && b13_6 && b14_33) {
matched = true;
pattern_id = 586;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_45 && b5_44 && b6_2 && b7_10 && b8_55 && b9_5) {
matched = true;
pattern_id = 587;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_64 && b6_57 && b7_21 && b8_5 && b9_14 && b10_34 && b11_29) {
matched = true;
pattern_id = 588;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_14 && b5_26 && b6_37 && b7_29 && b8_12 && b9_28 && b10_5) {
matched = true;
pattern_id = 589;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_11 && b5_6 && b6_10 && b7_63 && b8_11 && b9_11 && b10_25 && b11_6) {
matched = true;
pattern_id = 590;
}
if(b0_35 && b1_47 && b2_14 && b3_59 && b4_16 && b5_54 && b6_26 && b7_63 && b8_2 && b9_5 && b10_28 && b11_23 && b12_18 && b13_3 && b14_34 && b15_22 && b16_18 && b17_44) {
matched = true;
pattern_id = 591;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_11 && b5_6 && b6_10 && b7_63 && b8_47 && b9_49 && b10_25 && b11_59) {
matched = true;
pattern_id = 592;
}
if(b0_35 && b1_52 && b2_24 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_47 && b9_34 && b10_49 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_52 && b18_31 && b19_31 && b20_33 && b21_19 && b22_31 && b23_16 && b24_29 && b25_40) {
matched = true;
pattern_id = 593;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_2 && b5_42 && b6_8 && b7_8 && b8_35 && b9_44 && b10_56 && b11_3 && b12_20) {
matched = true;
pattern_id = 594;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_2 && b5_42 && b6_3 && b7_47 && b8_39 && b9_53 && b10_17 && b11_23) {
matched = true;
pattern_id = 595;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_50 && b5_20 && b6_36 && b7_2 && b8_5 && b9_17 && b10_30 && b11_6 && b12_37 && b13_38) {
matched = true;
pattern_id = 596;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_15 && b5_42 && b6_18 && b7_54 && b8_39 && b9_14 && b10_17 && b11_27 && b12_39) {
matched = true;
pattern_id = 597;
}
if(b0_35 && b1_8 && b2_49 && b3_49 && b4_27 && b5_51 && b6_7 && b7_7 && b8_41 && b9_27 && b10_12 && b11_13 && b12_18 && b13_53 && b14_24 && b15_38 && b16_49 && b17_47 && b18_46 && b19_30 && b20_50 && b21_43 && b22_45 && b23_28 && b24_4 && b25_34 && b26_43 && b27_16 && b28_21 && b29_32 && b30_19) {
matched = true;
pattern_id = 598;
}
if(b0_35 && b1_8 && b2_17 && b3_18 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15) {
matched = true;
pattern_id = 599;
}
if(b0_35 && b1_52 && b2_20 && b3_60 && b4_44 && b5_29 && b6_10 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37 && b12_22) {
matched = true;
pattern_id = 600;
}
if(b0_35 && b1_52 && b2_20 && b3_60 && b4_44 && b5_29 && b6_10 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 601;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_26 && b6_10 && b7_32 && b8_6 && b9_42 && b10_43 && b11_49 && b12_38 && b13_39) {
matched = true;
pattern_id = 602;
}
if(b0_35 && b1_11 && b2_20 && b3_21 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40 && b9_57) {
matched = true;
pattern_id = 603;
}
if(b0_65 && b1_59 && b2_50 && b3_51 && b4_50 && b5_26 && b6_10 && b7_63 && b8_40 && b9_14 && b10_6 && b11_35) {
matched = true;
pattern_id = 604;
}
if(b0_32 && b1_26 && b2_29) {
matched = true;
pattern_id = 605;
}
if(b0_47 && b1_50 && b2_52 && b3_26 && b4_22 && b5_16 && b6_34 && b7_1 && b8_28 && b9_58 && b10_60) {
matched = true;
pattern_id = 606;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_54 && b9_10 && b10_11) {
matched = true;
pattern_id = 607;
}
if(b0_35 && b1_2 && b2_19 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 608;
}
if(b0_35 && b1_2 && b2_19 && b3_18 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 609;
}
if(b0_35 && b1_11 && b2_43 && b3_40 && b4_15 && b5_6 && b6_18 && b7_46 && b8_8 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 610;
}
if(b0_35 && b1_14 && b2_3 && b3_16 && b4_17 && b5_6 && b6_46) {
matched = true;
pattern_id = 611;
}
if(b0_35 && b1_16 && b2_25 && b3_18 && b4_7 && b5_10 && b6_55 && b7_29 && b8_5 && b9_14 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 612;
}
if(b0_35 && b1_26 && b2_21 && b3_18 && b4_14 && b5_10 && b6_55 && b7_55 && b8_11 && b9_12) {
matched = true;
pattern_id = 613;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_46 && b5_27 && b6_8 && b7_47 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 614;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_55 && b8_11 && b9_34 && b10_17 && b11_5) {
matched = true;
pattern_id = 615;
}
if(b0_35 && b1_47 && b2_43 && b3_40 && b4_60 && b5_29 && b6_46) {
matched = true;
pattern_id = 616;
}
if(b0_35 && b1_21 && b2_21 && b3_8 && b4_17 && b5_11 && b6_55 && b7_10 && b8_35 && b9_20) {
matched = true;
pattern_id = 617;
}
if(b0_35 && b1_35 && b2_14 && b3_43 && b4_27 && b5_26 && b6_11 && b7_31 && b8_35 && b9_9 && b10_22 && b11_46 && b12_39 && b13_21 && b14_24 && b15_41 && b16_32 && b17_4 && b18_41 && b19_22) {
matched = true;
pattern_id = 618;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 619;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_2 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 620;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_20 && b7_14 && b8_58 && b9_49 && b10_12) {
matched = true;
pattern_id = 621;
}
if(b0_35 && b1_58 && b2_49 && b3_15 && b4_17 && b5_6 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 622;
}
if(b0_35 && b1_56 && b2_24 && b3_8 && b4_17 && b5_11 && b6_21 && b7_14 && b8_42 && b9_14 && b10_7) {
matched = true;
pattern_id = 623;
}
if(b0_35 && b1_3 && b2_6 && b3_50 && b4_44 && b5_21 && b6_7 && b7_8 && b8_18 && b9_3 && b10_18) {
matched = true;
pattern_id = 624;
}
if(b0_35 && b1_57 && b2_54 && b3_12 && b4_34 && b5_5 && b6_23 && b7_32 && b8_58 && b9_49 && b10_59 && b11_28 && b12_38 && b13_22 && b14_49 && b15_32 && b16_29 && b17_10 && b18_22 && b19_40 && b20_48 && b21_18 && b22_40 && b23_25) {
matched = true;
pattern_id = 625;
}
if(b0_53 && b1_43 && b2_40 && b3_51 && b4_61 && b5_19 && b6_44 && b7_64 && b8_32 && b9_44 && b10_15 && b11_36 && b12_53 && b13_54 && b14_31 && b15_12 && b16_50 && b17_3) {
matched = true;
pattern_id = 626;
}
if(b0_13 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_30 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_2 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_7 && b33_1 && b34_3) {
matched = true;
pattern_id = 627;
}
if(b0_35 && b1_31 && b2_3 && b3_50 && b4_54 && b5_11 && b6_22 && b7_10 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 628;
}
if(b0_35 && b1_11 && b2_43 && b3_8 && b4_27 && b5_20 && b6_48 && b7_14) {
matched = true;
pattern_id = 629;
}
if(b0_35 && b1_31 && b2_3 && b3_50 && b4_54 && b5_11 && b6_22 && b7_10 && b8_32 && b9_35 && b10_61 && b11_57 && b12_39 && b13_41 && b14_18) {
matched = true;
pattern_id = 630;
}
if(b0_35 && b1_31 && b2_3 && b3_50 && b4_54 && b5_11 && b6_22 && b7_10 && b8_32 && b9_59 && b10_61 && b11_57 && b12_39 && b13_41 && b14_18) {
matched = true;
pattern_id = 631;
}
if(b0_4 && b1_28 && b2_5 && b3_61 && b4_5 && b5_5) {
matched = true;
pattern_id = 632;
}
if(b0_14 && b1_15 && b2_27 && b3_28 && b4_30 && b5_23 && b6_49 && b7_27 && b8_3 && b9_36 && b10_14 && b11_2 && b12_13 && b13_2 && b14_3 && b15_12 && b16_9 && b17_8 && b18_47 && b19_6 && b20_4 && b21_8 && b22_13 && b23_14 && b24_11 && b25_13 && b26_12 && b27_9 && b28_6) {
matched = true;
pattern_id = 633;
}
if(b0_35 && b1_9 && b2_63 && b3_30 && b4_16 && b5_16 && b6_11 && b7_16 && b8_5 && b9_14 && b10_56 && b11_30 && b12_5 && b13_38) {
matched = true;
pattern_id = 634;
}
if(b0_32 && b1_21 && b2_41 && b3_26) {
matched = true;
pattern_id = 635;
}
if(b0_32 && b1_21 && b2_41 && b3_26 && b4_55) {
matched = true;
pattern_id = 636;
}
if(b0_32 && b1_21 && b2_41 && b3_62 && b4_55) {
matched = true;
pattern_id = 637;
}
if(b0_32 && b1_21 && b2_41 && b3_62) {
matched = true;
pattern_id = 638;
}
if(b0_35 && b1_40 && b2_50 && b3_36 && b4_4 && b5_8 && b6_7 && b7_46 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 639;
}
if(b0_35 && b1_40 && b2_50 && b3_22 && b4_18 && b5_8 && b6_7 && b7_46 && b8_48 && b9_40 && b10_49 && b11_30) {
matched = true;
pattern_id = 640;
}
if(b0_35 && b1_24 && b2_25 && b3_27 && b4_12 && b5_25 && b6_23) {
matched = true;
pattern_id = 641;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_65 && b8_60 && b9_5 && b10_11 && b11_60 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_17 && b24_2 && b25_2 && b26_14 && b27_2 && b28_7 && b29_12 && b30_5 && b31_16 && b32_32 && b33_4 && b34_26) {
matched = true;
pattern_id = 642;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_65 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_11 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_14 && b18_3 && b19_3 && b20_16 && b21_3 && b22_6 && b23_14 && b24_2 && b25_12 && b26_21 && b27_8) {
matched = true;
pattern_id = 643;
}
if(b0_62 && b1_49 && b2_61 && b3_38 && b4_23 && b5_49 && b6_30 && b7_65 && b8_34 && b9_49 && b10_32 && b11_34 && b12_38 && b13_4 && b14_53) {
matched = true;
pattern_id = 644;
}
if(b0_35 && b1_58 && b2_42 && b3_35 && b4_24 && b5_17 && b6_24 && b7_42 && b8_34 && b9_42 && b10_26 && b11_27 && b12_18) {
matched = true;
pattern_id = 645;
}
if(b0_35 && b1_16 && b2_20 && b3_6 && b4_6 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 646;
}
if(b0_14 && b1_38 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_24 && b9_4 && b10_47 && b11_20 && b12_54 && b13_7 && b14_3 && b15_45 && b16_6 && b17_2 && b18_5 && b19_15 && b20_9 && b21_44 && b22_1 && b23_15 && b24_11 && b25_13 && b26_12 && b27_9 && b28_8 && b29_12 && b30_30 && b31_4 && b32_33 && b33_4 && b34_6 && b35_15 && b36_6 && b37_7 && b38_13 && b39_5 && b40_10 && b41_2 && b42_3 && b43_18) {
matched = true;
pattern_id = 647;
}
if(b0_35 && b1_3 && b2_19 && b3_40 && b4_15 && b5_11 && b6_55 && b7_46 && b8_5 && b9_20 && b10_60 && b11_6 && b12_36 && b13_36 && b14_28 && b15_45 && b16_3 && b17_25 && b18_18 && b19_35 && b20_30 && b21_42 && b22_46) {
matched = true;
pattern_id = 648;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_27 && b6_7 && b7_15 && b8_5 && b9_28 && b10_49) {
matched = true;
pattern_id = 649;
}
if(b0_35 && b1_35 && b2_8 && b3_21 && b4_18 && b5_51 && b6_23) {
matched = true;
pattern_id = 650;
}
if(b0_35 && b1_64 && b2_6 && b3_11 && b4_24 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20) {
matched = true;
pattern_id = 651;
}
if(b0_35 && b1_64 && b2_52 && b3_8 && b4_27 && b5_37 && b6_21 && b7_11 && b8_7 && b9_20) {
matched = true;
pattern_id = 652;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5) {
matched = true;
pattern_id = 653;
}
if(b0_18 && b1_21 && b2_21 && b3_21 && b4_44 && b5_21 && b6_2 && b7_14 && b8_40 && b9_5 && b10_12 && b11_20 && b12_15 && b13_8 && b14_3 && b15_9 && b16_27 && b17_8 && b18_22 && b19_9 && b20_24 && b21_20 && b22_14 && b23_18 && b24_25 && b25_33 && b26_33 && b27_31 && b28_6 && b29_5 && b30_1 && b31_4) {
matched = true;
pattern_id = 654;
}
if(b0_35 && b1_62 && b2_23 && b3_26 && b4_7 && b5_7 && b6_35 && b7_32 && b8_2 && b9_20 && b10_11 && b11_26 && b12_25 && b13_11 && b14_38 && b15_30 && b16_39) {
matched = true;
pattern_id = 655;
}
if(b0_38 && b1_8 && b2_24 && b3_7 && b4_24 && b5_6 && b6_12 && b7_16 && b8_5 && b9_14 && b10_26 && b11_46 && b12_25 && b13_1 && b14_43 && b15_50 && b16_39 && b17_13 && b18_4 && b19_21) {
matched = true;
pattern_id = 656;
}
if(b0_6 && b1_1 && b2_1 && b3_1 && b4_32 && b5_49 && b6_5 && b7_4 && b8_1 && b9_4 && b10_15 && b11_20 && b12_2 && b13_2 && b14_2 && b15_51 && b16_15 && b17_1 && b18_1 && b19_6 && b20_14 && b21_4 && b22_2 && b23_2 && b24_9 && b25_39 && b26_11 && b27_7 && b28_2 && b29_1 && b30_1 && b31_4 && b32_7 && b33_1 && b34_3 && b35_7 && b36_3 && b37_4 && b38_5 && b39_7 && b40_22 && b41_13 && b42_8 && b43_4 && b44_5 && b45_15 && b46_2 && b47_3 && b48_4 && b49_4 && b50_10 && b51_3 && b52_4 && b53_4 && b54_3 && b55_9) {
matched = true;
pattern_id = 657;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 658;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_6 && b11_27 && b12_16 && b13_36 && b14_18 && b15_3 && b16_32 && b17_29 && b18_30 && b19_9) {
matched = true;
pattern_id = 659;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_11 && b11_57 && b12_5 && b13_50 && b14_17) {
matched = true;
pattern_id = 660;
}
if(b0_35 && b1_6 && b2_19 && b3_8 && b4_36 && b5_7 && b6_11 && b7_39 && b8_34 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 661;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_6 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 662;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_27 && b6_7 && b7_7 && b8_2 && b9_27 && b10_38 && b11_3 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 663;
}
if(b0_35 && b1_71 && b2_8 && b3_17) {
matched = true;
pattern_id = 664;
}
if(b0_55 && b1_52 && b2_20 && b3_26 && b4_1 && b5_53 && b6_46) {
matched = true;
pattern_id = 665;
}
if(b0_35 && b1_47 && b2_14 && b3_43 && b4_35 && b5_26 && b6_19) {
matched = true;
pattern_id = 666;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_3 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_2 && b51_2 && b52_4 && b53_4 && b54_3) {
matched = true;
pattern_id = 667;
}
if(b0_14 && b1_29 && b2_1 && b3_14 && b4_49 && b5_1 && b6_12 && b7_49 && b8_1 && b9_13 && b10_40 && b11_1 && b12_6 && b13_9 && b14_1 && b15_4 && b16_10 && b17_1 && b18_3 && b19_8 && b20_1 && b21_3 && b22_7 && b23_2 && b24_2 && b25_11 && b26_2 && b27_2 && b28_12 && b29_2 && b30_5 && b31_7 && b32_7 && b33_8 && b34_7 && b35_7 && b36_6 && b37_13 && b38_5 && b39_5 && b40_5 && b41_4 && b42_4 && b43_19 && b44_3 && b45_3 && b46_15 && b47_3 && b48_3) {
matched = true;
pattern_id = 668;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5 && b7_58 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_3 && b15_1 && b16_4 && b17_2 && b18_24 && b19_7 && b20_9) {
matched = true;
pattern_id = 669;
}
if(b0_32 && b1_14 && b2_3 && b3_16 && b4_17 && b5_10 && b6_39 && b7_47) {
matched = true;
pattern_id = 670;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_53 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_2) {
matched = true;
pattern_id = 671;
}
if(b0_35 && b1_67 && b2_60 && b3_60 && b4_2 && b5_52) {
matched = true;
pattern_id = 672;
}
if(b0_66) {
matched = true;
pattern_id = 673;
}
if(b0_24 && b1_10 && b2_5 && b3_5) {
matched = true;
pattern_id = 674;
}
if(b0_35 && b1_31 && b2_20 && b3_20 && b4_24 && b5_37 && b6_33 && b7_27 && b8_53 && b9_17 && b10_4 && b11_37 && b12_32 && b13_38 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 675;
}
if(b0_35 && b1_8 && b2_49 && b3_49 && b4_27 && b5_51 && b6_7 && b7_7 && b8_41 && b9_27 && b10_12 && b11_13 && b12_18 && b13_53 && b14_24 && b15_38 && b16_49 && b17_47 && b18_46 && b19_30 && b20_50 && b21_43 && b22_45 && b23_28 && b24_4 && b25_34 && b26_43 && b27_16 && b28_21 && b29_32 && b30_19 && b31_33) {
matched = true;
pattern_id = 676;
}
if(b0_26 && b1_57 && b2_58 && b3_61 && b4_61 && b5_5 && b6_44) {
matched = true;
pattern_id = 677;
}
if(b0_10 && b1_20 && b2_40 && b3_3 && b4_29 && b5_66 && b6_12 && b7_66 && b8_3) {
matched = true;
pattern_id = 678;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_44) {
matched = true;
pattern_id = 679;
}
if(b0_20 && b1_1 && b2_1 && b3_1 && b4_32 && b5_11 && b6_5 && b7_4 && b8_1 && b9_4 && b10_26 && b11_20 && b12_2 && b13_2 && b14_2 && b15_32 && b16_15 && b17_1 && b18_1 && b19_6 && b20_2 && b21_4 && b22_2 && b23_2 && b24_9 && b25_27 && b26_11 && b27_7 && b28_2 && b29_1 && b30_18 && b31_4 && b32_7 && b33_1 && b34_3 && b35_27 && b36_3 && b37_4 && b38_5 && b39_7 && b40_19 && b41_13 && b42_8 && b43_4 && b44_5) {
matched = true;
pattern_id = 680;
}
if(b0_51 && b1_8 && b2_16 && b3_26 && b4_6 && b5_16 && b6_3 && b7_45) {
matched = true;
pattern_id = 681;
}
if(b0_39 && b1_7 && b2_32 && b3_63 && b4_8 && b5_31 && b6_9 && b7_19 && b8_32 && b9_36 && b10_15 && b11_10 && b12_51 && b13_15 && b14_15 && b15_11 && b16_17 && b17_16 && b18_7 && b19_27 && b20_6 && b21_45 && b22_5 && b23_30) {
matched = true;
pattern_id = 682;
}
if(b0_35 && b1_24 && b2_43 && b3_18 && b4_6 && b5_25 && b6_35 && b7_45 && b8_5 && b9_9 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 683;
}
if(b0_12 && b1_21 && b2_6 && b3_28 && b4_45 && b5_19 && b6_5 && b7_13 && b8_47 && b9_40 && b10_37 && b11_46 && b12_7 && b13_5 && b14_40) {
matched = true;
pattern_id = 684;
}
if(b0_16 && b1_19 && b2_5 && b3_12 && b4_20 && b5_19 && b6_15 && b7_13 && b8_4 && b9_8 && b10_33 && b11_22 && b12_29 && b13_17 && b14_10 && b15_24 && b16_21 && b17_24 && b18_35 && b19_13 && b20_22 && b21_28 && b22_17 && b23_10 && b24_38 && b25_17 && b26_18 && b27_32 && b28_11 && b29_13 && b30_31) {
matched = true;
pattern_id = 685;
}
if(b0_35 && b1_71 && b2_6 && b3_24 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 686;
}
if(b0_35 && b1_59 && b2_43 && b3_45 && b4_46 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_22 && b11_61 && b12_17 && b13_47 && b14_54 && b15_52 && b16_30 && b17_10 && b18_22 && b19_42 && b20_10 && b21_35 && b22_41 && b23_19) {
matched = true;
pattern_id = 687;
}
if(b0_25) {
matched = true;
pattern_id = 688;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 689;
}
if(b0_35 && b1_52 && b2_16 && b3_20 && b4_27 && b5_52 && b6_11 && b7_7 && b8_15 && b9_9 && b10_28 && b11_26 && b12_32 && b13_41 && b14_17 && b15_32 && b16_11) {
matched = true;
pattern_id = 690;
}
if(b0_35 && b1_35 && b2_8 && b3_26 && b4_16 && b5_51 && b6_23 && b7_7 && b8_42 && b9_28 && b10_5 && b11_30 && b12_5 && b13_16 && b14_49) {
matched = true;
pattern_id = 691;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_2 && b5_11 && b6_18 && b7_47 && b8_34 && b9_5 && b10_11 && b11_13) {
matched = true;
pattern_id = 692;
}
if(b0_35 && b1_13 && b2_62 && b3_48 && b4_22 && b5_16 && b6_24 && b7_2 && b8_5 && b9_14 && b10_22 && b11_5 && b12_5 && b13_43 && b14_35 && b15_22 && b16_41 && b17_38 && b18_31 && b19_17 && b20_27) {
matched = true;
pattern_id = 693;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_6 && b6_23 && b7_31 && b8_58 && b9_6 && b10_4 && b11_46 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 694;
}
if(b0_35 && b1_52 && b2_6 && b3_18 && b4_2 && b5_6 && b6_55 && b7_29 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 695;
}
if(b0_14 && b1_15 && b2_46 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_25 && b12_6 && b13_8 && b14_27 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 696;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_7 && b5_29 && b6_21 && b7_54 && b8_11 && b9_17) {
matched = true;
pattern_id = 697;
}
if(b0_17 && b1_56 && b2_42 && b3_24 && b4_27 && b5_51) {
matched = true;
pattern_id = 698;
}
if(b0_17 && b1_16 && b2_14 && b3_27 && b4_18 && b5_42 && b6_7) {
matched = true;
pattern_id = 699;
}
if(b0_43 && b1_1 && b2_1 && b3_22 && b4_1 && b5_39 && b6_32 && b7_1 && b8_1 && b9_15 && b10_1 && b11_1 && b12_2 && b13_26) {
matched = true;
pattern_id = 700;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_45 && b9_49 && b10_11 && b11_35 && b12_26 && b13_16 && b14_24 && b15_25 && b16_24 && b17_27 && b18_11 && b19_6 && b20_51 && b21_28 && b22_1) {
matched = true;
pattern_id = 701;
}
if(b0_42 && b1_72 && b2_4 && b3_1 && b4_36 && b5_4 && b6_1 && b7_33 && b8_3 && b9_1 && b10_10 && b11_2 && b12_2 && b13_33 && b14_3 && b15_1 && b16_51 && b17_8 && b18_19 && b19_28 && b20_47 && b21_15 && b22_27 && b23_27 && b24_9 && b25_17 && b26_2 && b27_2 && b28_17 && b29_11 && b30_5 && b31_11 && b32_15 && b33_8 && b34_1 && b35_30 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_12 && b42_4 && b43_4 && b44_4 && b45_3 && b46_4 && b47_3 && b48_2 && b49_3 && b50_11 && b51_2 && b52_4 && b53_8 && b54_2 && b55_4 && b56_2 && b57_4 && b58_4 && b59_3 && b60_5 && b61_7 && b62_3 && b63_3 && b64_3 && b65_3 && b66_6 && b67_5 && b68_4 && b69_5 && b70_6 && b71_3 && b72_4 && b73_5 && b74_5 && b75_4 && b76_3 && b77_4 && b78_4 && b79_4 && b80_4 && b81_3 && b82_4 && b83_4 && b84_2 && b85_2 && b86_2 && b87_2 && b88_2 && b89_2 && b90_2 && b91_2 && b92_2 && b93_2 && b94_2 && b95_2 && b96_2 && b97_2 && b98_2 && b99_2 && b100_2 && b101_2 && b102_2) {
matched = true;
pattern_id = 702;
}
if(b0_42 && b1_25 && b2_4 && b3_1 && b4_36 && b5_4 && b6_1 && b7_33 && b8_3 && b9_1 && b10_10 && b11_2 && b12_2 && b13_33 && b14_3 && b15_1 && b16_51 && b17_8 && b18_19 && b19_28 && b20_47 && b21_15 && b22_27 && b23_27 && b24_9 && b25_17 && b26_16 && b27_8 && b28_36 && b29_1 && b30_9 && b31_34 && b32_3) {
matched = true;
pattern_id = 703;
}
if(b0_67 && b1_64 && b2_4 && b3_1 && b4_4 && b5_4 && b6_1 && b7_6 && b8_3 && b9_1 && b10_62 && b11_20) {
matched = true;
pattern_id = 704;
}
if(b0_3 && b1_4 && b2_55 && b3_5 && b4_40 && b5_50 && b6_50 && b7_13) {
matched = true;
pattern_id = 705;
}
if(b0_35 && b1_26 && b2_15 && b3_15 && b4_2 && b5_42 && b6_3 && b7_8 && b8_46) {
matched = true;
pattern_id = 706;
}
if(b0_35 && b1_26 && b2_42 && b3_26 && b4_2 && b5_7 && b6_54 && b7_2 && b8_11 && b9_9 && b10_13 && b11_6 && b12_20 && b13_47) {
matched = true;
pattern_id = 707;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_53 && b16_40 && b17_44 && b18_31 && b19_47 && b20_28 && b21_27 && b22_14 && b23_18) {
matched = true;
pattern_id = 708;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_7) {
matched = true;
pattern_id = 709;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_35 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_7) {
matched = true;
pattern_id = 710;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_24 && b12_6 && b13_2 && b14_11 && b15_4 && b16_20 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 711;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 712;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_27 && b6_8 && b7_11 && b8_34 && b9_34 && b10_26 && b11_5 && b12_4 && b13_40 && b14_36 && b15_15) {
matched = true;
pattern_id = 713;
}
if(b0_35 && b1_2 && b2_23 && b3_16 && b4_2 && b5_40 && b6_36 && b7_39 && b8_47) {
matched = true;
pattern_id = 714;
}
if(b0_35 && b1_19 && b2_40 && b3_51 && b4_19 && b5_6 && b6_55 && b7_10 && b8_8 && b9_27 && b10_13 && b11_3 && b12_39 && b13_40 && b14_38 && b15_40 && b16_24) {
matched = true;
pattern_id = 715;
}
if(b0_35 && b1_59 && b2_17 && b3_2 && b4_31 && b5_11 && b6_35 && b7_7) {
matched = true;
pattern_id = 716;
}
if(b0_11 && b1_2 && b2_24 && b3_11 && b4_3 && b5_12 && b6_8 && b7_8) {
matched = true;
pattern_id = 717;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_10 && b8_8 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26) {
matched = true;
pattern_id = 718;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_37 && b6_39 && b7_47 && b8_47 && b9_27 && b10_13 && b11_3 && b12_49 && b13_43 && b14_51 && b15_20 && b16_24 && b17_49 && b18_18 && b19_2 && b20_37) {
matched = true;
pattern_id = 719;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_37 && b6_39 && b7_47 && b8_47 && b9_27 && b10_13 && b11_3 && b12_49 && b13_6 && b14_20 && b15_32 && b16_2 && b17_46 && b18_20 && b19_44 && b20_34 && b21_15) {
matched = true;
pattern_id = 720;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_34 && b9_6 && b10_38 && b11_57 && b12_16 && b13_3) {
matched = true;
pattern_id = 721;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_2 && b9_53 && b10_43 && b11_57 && b12_16 && b13_3) {
matched = true;
pattern_id = 722;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_17 && b5_6 && b6_46 && b7_15 && b8_2 && b9_25) {
matched = true;
pattern_id = 723;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_17 && b5_6 && b6_46 && b7_54 && b8_14 && b9_12 && b10_48 && b11_5 && b12_50) {
matched = true;
pattern_id = 724;
}
if(b0_26 && b1_57 && b2_58 && b3_61 && b4_61 && b5_5 && b6_44 && b7_1) {
matched = true;
pattern_id = 725;
}
if(b0_45 && b1_16 && b2_43 && b3_40 && b4_22 && b5_6 && b6_12 && b7_13 && b8_40 && b9_43 && b10_49 && b11_37 && b12_18 && b13_43 && b14_25 && b15_35 && b16_30 && b17_49 && b18_29 && b19_1 && b20_40 && b21_2 && b22_19 && b23_43 && b24_39 && b25_36 && b26_41 && b27_33 && b28_8 && b29_33 && b30_3 && b31_28 && b32_20 && b33_17 && b34_21 && b35_31) {
matched = true;
pattern_id = 726;
}
if(b0_35 && b1_2 && b2_62 && b3_19 && b4_6 && b5_16 && b6_3 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 727;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_21 && b5_10 && b6_10 && b7_21 && b8_16 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 728;
}
if(b0_35 && b1_58 && b2_14 && b3_20 && b4_12 && b5_51 && b6_11 && b7_14 && b8_8 && b9_41 && b10_5 && b11_23 && b12_26 && b13_40 && b14_38 && b15_40 && b16_24) {
matched = true;
pattern_id = 729;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_7 && b5_52 && b6_7 && b7_8 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 730;
}
if(b0_35 && b1_24 && b2_14 && b3_18 && b4_6 && b5_8 && b6_7 && b7_32 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 731;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_20 && b6_7 && b7_53 && b8_2 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 732;
}
if(b0_35 && b1_47 && b2_20 && b3_6 && b4_60 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 733;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_2 && b5_12 && b6_7 && b7_7 && b8_9 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 734;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_59 && b5_27 && b6_8 && b7_30 && b8_5 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 735;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_16 && b6_11 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 736;
}
if(b0_35 && b1_52 && b2_41 && b3_48 && b4_2 && b5_6 && b6_8 && b7_8 && b8_41 && b9_25 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 737;
}
if(b0_35 && b1_52 && b2_17 && b3_40) {
matched = true;
pattern_id = 738;
}
if(b0_35 && b1_6 && b2_3 && b3_26 && b4_31 && b5_6 && b6_21 && b7_9 && b8_14 && b9_43 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 739;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 740;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_37 && b6_24 && b7_14 && b8_12 && b9_14 && b10_43 && b11_3) {
matched = true;
pattern_id = 741;
}
if(b0_35 && b1_56 && b2_8 && b3_8 && b4_44 && b5_8 && b6_7 && b7_30 && b8_5 && b9_5 && b10_5 && b11_3 && b12_20 && b13_40 && b14_36 && b15_15) {
matched = true;
pattern_id = 742;
}
if(b0_35 && b1_35 && b2_18 && b3_15 && b4_22 && b5_10 && b6_38 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 743;
}
if(b0_35 && b1_11 && b2_3 && b3_18 && b4_2 && b5_40 && b6_35 && b7_29 && b8_41) {
matched = true;
pattern_id = 744;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_18 && b5_12 && b6_18 && b7_47 && b8_49 && b9_40 && b10_22 && b11_46 && b12_5 && b13_50 && b14_36 && b15_9 && b16_32 && b17_21 && b18_9 && b19_21) {
matched = true;
pattern_id = 745;
}
if(b0_35 && b1_68 && b2_21 && b3_6 && b4_51 && b5_10 && b6_34 && b7_12) {
matched = true;
pattern_id = 746;
}
if(b0_35 && b1_52 && b2_62 && b3_50 && b4_7 && b5_10 && b6_10 && b7_9 && b8_15 && b9_17 && b10_6 && b11_26 && b12_7 && b13_36 && b14_28 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 747;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_50 && b5_26 && b6_7 && b7_8 && b8_18 && b9_60 && b10_35 && b11_46 && b12_36 && b13_5 && b14_19 && b15_36 && b16_32 && b17_28 && b18_18 && b19_44) {
matched = true;
pattern_id = 748;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_50 && b5_26 && b6_7 && b7_8) {
matched = true;
pattern_id = 749;
}
if(b0_35 && b1_62 && b2_25 && b3_43 && b4_12 && b5_8 && b6_8 && b7_9 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 750;
}
if(b0_35 && b1_52 && b2_50 && b3_15 && b4_3 && b5_37 && b6_36 && b7_54 && b8_11 && b9_5 && b10_12 && b11_40 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 751;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_5 && b6_36 && b7_14 && b8_40 && b9_5 && b10_22 && b11_47 && b12_36 && b13_27 && b14_49 && b15_40 && b16_30 && b17_38 && b18_4 && b19_39 && b20_2 && b21_24 && b22_35 && b23_19 && b24_32 && b25_33 && b26_44 && b27_3 && b28_31 && b29_24 && b30_19) {
matched = true;
pattern_id = 752;
}
if(b0_35 && b1_3 && b2_19 && b3_26 && b4_27 && b5_8 && b6_23 && b7_7 && b8_5 && b9_27 && b10_4 && b11_47 && b12_50 && b13_52) {
matched = true;
pattern_id = 753;
}
if(b0_35 && b1_2 && b2_27 && b3_21 && b4_27 && b5_26 && b6_46 && b7_6 && b8_48 && b9_17 && b10_38 && b11_37 && b12_22) {
matched = true;
pattern_id = 754;
}
if(b0_35 && b1_2 && b2_27 && b3_21 && b4_27 && b5_26 && b6_46 && b7_6 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 755;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_12 && b5_20 && b6_11 && b7_14 && b8_8 && b9_20 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_38 && b16_5 && b17_47 && b18_33 && b19_22 && b20_41 && b21_18 && b22_31 && b23_24 && b24_27) {
matched = true;
pattern_id = 756;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_25 && b9_13 && b10_45 && b11_8 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_4 && b34_24 && b35_1 && b36_4 && b37_4 && b38_25 && b39_4 && b40_4 && b41_5 && b42_8 && b43_4 && b44_18 && b45_5 && b46_4 && b47_16 && b48_4 && b49_3 && b50_12 && b51_4 && b52_4 && b53_3 && b54_5 && b55_4 && b56_6 && b57_3 && b58_4 && b59_6 && b60_5 && b61_8 && b62_6 && b63_3 && b64_6 && b65_6 && b66_3 && b67_4 && b68_5 && b69_4 && b70_3 && b71_6 && b72_3 && b73_4 && b74_6 && b75_3 && b76_3 && b77_5 && b78_5 && b79_4 && b80_5 && b81_2 && b82_4 && b83_5 && b84_3 && b85_2 && b86_3) {
matched = true;
pattern_id = 757;
}
if(b0_35 && b1_49 && b2_56 && b3_64 && b4_35) {
matched = true;
pattern_id = 758;
}
if(b0_35 && b1_4 && b2_55 && b3_25 && b4_35) {
matched = true;
pattern_id = 759;
}
if(b0_35 && b1_2 && b2_24 && b3_15 && b4_51 && b5_11 && b6_21 && b7_31 && b8_48 && b9_43 && b10_49 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 760;
}
if(b0_35 && b1_2 && b2_24 && b3_15 && b4_51 && b5_11 && b6_21 && b7_31 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 761;
}
if(b0_35 && b1_69 && b2_62 && b3_11 && b4_17 && b5_17 && b6_61 && b7_39 && b8_2 && b9_9 && b10_29 && b11_57 && b12_12) {
matched = true;
pattern_id = 762;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_21 && b7_31 && b8_35 && b9_4 && b10_44 && b11_10 && b12_10) {
matched = true;
pattern_id = 763;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_21 && b7_31 && b8_35) {
matched = true;
pattern_id = 764;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_2 && b7_35 && b8_42 && b9_10 && b10_2 && b11_8 && b12_51 && b13_26) {
matched = true;
pattern_id = 765;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_2 && b7_35 && b8_42 && b9_10) {
matched = true;
pattern_id = 766;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_32 && b7_15 && b8_61 && b9_27 && b10_13 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 767;
}
if(b0_35 && b1_21 && b2_21 && b3_50 && b4_50 && b5_42 && b6_32 && b7_15 && b8_61 && b9_27 && b10_13) {
matched = true;
pattern_id = 768;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_44 && b5_29 && b6_11 && b7_15 && b8_61 && b9_27 && b10_13 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 769;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_44 && b5_29 && b6_11 && b7_15 && b8_61 && b9_27 && b10_13) {
matched = true;
pattern_id = 770;
}
if(b0_35 && b1_50 && b2_8 && b3_8 && b4_12 && b5_25 && b6_7 && b7_39 && b8_5 && b9_10 && b10_4 && b11_33 && b12_12 && b13_43 && b14_51 && b15_5) {
matched = true;
pattern_id = 771;
}
if(b0_35 && b1_67 && b2_30 && b3_37 && b4_34) {
matched = true;
pattern_id = 772;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_63 && b8_11 && b9_11 && b10_25 && b11_6) {
matched = true;
pattern_id = 773;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_63 && b8_2 && b9_10 && b10_28 && b11_40 && b12_37 && b13_16) {
matched = true;
pattern_id = 774;
}
if(b0_35 && b1_2 && b2_21 && b3_18 && b4_26 && b5_52 && b6_20 && b7_62) {
matched = true;
pattern_id = 775;
}
if(b0_35 && b1_2 && b2_21 && b3_18 && b4_26 && b5_52 && b6_20) {
matched = true;
pattern_id = 776;
}
if(b0_35 && b1_11 && b2_41 && b3_56 && b4_26 && b5_40 && b6_23 && b7_32 && b8_14 && b9_11 && b10_25 && b11_37 && b12_36 && b13_52 && b14_37 && b15_25 && b16_39 && b17_26 && b18_28 && b19_40 && b20_41 && b21_34 && b22_43 && b23_44 && b24_4 && b25_31 && b26_37 && b27_19 && b28_29) {
matched = true;
pattern_id = 777;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_44 && b8_6 && b9_10 && b10_35 && b11_30 && b12_28 && b13_30 && b14_28 && b15_16 && b16_37 && b17_33 && b18_10 && b19_44 && b20_48 && b21_36 && b22_14) {
matched = true;
pattern_id = 778;
}
if(b0_35 && b1_21 && b2_21 && b3_40 && b4_35 && b5_26 && b6_7 && b7_45 && b8_47 && b9_28 && b10_28 && b11_37 && b12_25 && b13_40 && b14_24 && b15_41 && b16_25) {
matched = true;
pattern_id = 779;
}
if(b0_35 && b1_11 && b2_24 && b3_26 && b4_2 && b5_26 && b6_23 && b7_39 && b8_46 && b9_9 && b10_63 && b11_30 && b12_12 && b13_30 && b14_18 && b15_33 && b16_2 && b17_36) {
matched = true;
pattern_id = 780;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_9 && b10_9 && b11_27 && b12_5 && b13_50 && b14_20 && b15_20 && b16_16 && b17_26 && b18_4 && b19_41 && b20_10 && b21_39 && b22_47 && b23_31 && b24_22 && b25_27 && b26_36 && b27_34 && b28_21 && b29_19 && b30_32 && b31_22 && b32_25 && b33_25) {
matched = true;
pattern_id = 781;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_16 && b6_24 && b7_9 && b8_48 && b9_9 && b10_50 && b11_14) {
matched = true;
pattern_id = 782;
}
if(b0_35 && b1_47 && b2_42 && b3_51 && b4_15 && b5_10 && b6_24 && b7_9 && b8_2 && b9_53 && b10_43 && b11_57 && b12_16 && b13_3) {
matched = true;
pattern_id = 783;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_6 && b6_23 && b7_31 && b8_58 && b9_6 && b10_4 && b11_46 && b12_12 && b13_30 && b14_41 && b15_35 && b16_47) {
matched = true;
pattern_id = 784;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26 && b18_48) {
matched = true;
pattern_id = 785;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26) {
matched = true;
pattern_id = 786;
}
if(b0_16 && b1_73 && b2_40 && b3_65 && b4_5 && b5_63 && b6_60 && b7_50) {
matched = true;
pattern_id = 787;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_34 && b10_11) {
matched = true;
pattern_id = 788;
}
if(b0_53 && b1_8 && b2_41 && b3_11 && b4_43 && b5_12 && b6_7 && b7_35 && b8_12 && b9_12) {
matched = true;
pattern_id = 789;
}
if(b0_58 && b1_3 && b2_23 && b3_18 && b4_27 && b5_10 && b6_55) {
matched = true;
pattern_id = 790;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_24 && b5_11 && b6_35 && b7_54) {
matched = true;
pattern_id = 791;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_31 && b5_8 && b6_8 && b7_47) {
matched = true;
pattern_id = 792;
}
if(b0_35 && b1_3 && b2_19 && b3_11 && b4_14 && b5_30 && b6_24 && b7_2 && b8_14 && b9_33 && b10_22 && b11_47 && b12_26 && b13_22 && b14_47 && b15_35 && b16_18 && b17_28 && b18_31 && b19_21) {
matched = true;
pattern_id = 793;
}
if(b0_14 && b1_17 && b2_10 && b3_28) {
matched = true;
pattern_id = 794;
}
if(b0_35 && b1_42 && b2_67) {
matched = true;
pattern_id = 795;
}
if(b0_35 && b1_11 && b2_8 && b3_10 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 796;
}
if(b0_56 && b1_28 && b2_44 && b3_13) {
matched = true;
pattern_id = 797;
}
if(b0_67 && b1_10 && b2_56 && b3_64) {
matched = true;
pattern_id = 798;
}
if(b0_35 && b1_7 && b2_64 && b3_10 && b4_35 && b5_67 && b6_55 && b7_9 && b8_8 && b9_49 && b10_17 && b11_5) {
matched = true;
pattern_id = 799;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_31 && b5_6 && b6_21 && b7_44 && b8_54 && b9_5 && b10_4 && b11_5 && b12_38 && b13_36 && b14_28) {
matched = true;
pattern_id = 800;
}
if(b0_35 && b1_58 && b2_42 && b3_34 && b4_18 && b5_20 && b6_23 && b7_29 && b8_61 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 801;
}
if(b0_35 && b1_58 && b2_16 && b3_18 && b4_15 && b5_10 && b6_46) {
matched = true;
pattern_id = 802;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_24 && b7_44 && b8_14 && b9_14 && b10_7 && b11_3 && b12_20 && b13_16 && b14_34 && b15_25 && b16_43 && b17_37) {
matched = true;
pattern_id = 803;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_37 && b6_34 && b7_31 && b8_35 && b9_27 && b10_22 && b11_46 && b12_37 && b13_38 && b14_37 && b15_48 && b16_40 && b17_36 && b18_4 && b19_21 && b20_52 && b21_34 && b22_27 && b23_25 && b24_3 && b25_31 && b26_19 && b27_26 && b28_30) {
matched = true;
pattern_id = 804;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_35 && b5_52 && b6_8 && b7_32 && b8_9 && b9_27 && b10_38 && b11_3 && b12_16) {
matched = true;
pattern_id = 805;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_35) {
matched = true;
pattern_id = 806;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_2 && b8_35 && b9_28 && b10_64) {
matched = true;
pattern_id = 807;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_2 && b8_35 && b9_28) {
matched = true;
pattern_id = 808;
}
if(b0_35 && b1_3 && b2_8 && b3_17 && b4_44 && b5_52 && b6_2 && b7_47 && b8_34 && b9_52) {
matched = true;
pattern_id = 809;
}
if(b0_35 && b1_3 && b2_8 && b3_17 && b4_44 && b5_52 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 810;
}
if(b0_35 && b1_3 && b2_19 && b3_40 && b4_15 && b5_11 && b6_55 && b7_46 && b8_5 && b9_20 && b10_4 && b11_6 && b12_26 && b13_38 && b14_34 && b15_33 && b16_2 && b17_34 && b18_48) {
matched = true;
pattern_id = 811;
}
if(b0_35 && b1_3 && b2_19 && b3_40 && b4_15 && b5_11 && b6_55 && b7_46 && b8_5 && b9_20 && b10_4 && b11_6 && b12_26 && b13_38 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 812;
}
if(b0_35 && b1_24 && b2_20 && b3_26 && b4_16 && b5_52 && b6_8 && b7_46 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 813;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_21 && b5_10 && b6_10 && b7_21 && b8_16 && b9_42 && b10_5 && b11_30 && b12_22) {
matched = true;
pattern_id = 814;
}
if(b0_35 && b1_35 && b2_43 && b3_48 && b4_26 && b5_20 && b6_24 && b7_55) {
matched = true;
pattern_id = 815;
}
if(b0_35 && b1_11 && b2_25 && b3_20 && b4_2 && b5_55 && b6_10 && b7_15 && b8_7 && b9_9 && b10_25) {
matched = true;
pattern_id = 816;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_50 && b5_52 && b6_2 && b7_45 && b8_2 && b9_48) {
matched = true;
pattern_id = 817;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_8 && b6_7 && b7_47 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 818;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_12 && b11_5 && b12_52) {
matched = true;
pattern_id = 819;
}
if(b0_35 && b1_3 && b2_52 && b3_11 && b4_3 && b5_42 && b6_24 && b7_26 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 820;
}
if(b0_35 && b1_50 && b2_3 && b3_18 && b4_62 && b5_20 && b6_36 && b7_26 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 821;
}
if(b0_35 && b1_11 && b2_20 && b3_24 && b4_22 && b5_6 && b6_36 && b7_9 && b8_62 && b9_42 && b10_12 && b11_5 && b12_52) {
matched = true;
pattern_id = 822;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_21 && b6_53 && b7_67 && b8_48 && b9_11 && b10_11 && b11_59) {
matched = true;
pattern_id = 823;
}
if(b0_35 && b1_47 && b2_20 && b3_6 && b4_60 && b5_27 && b6_8 && b7_8 && b8_9 && b9_42 && b10_12 && b11_5 && b12_52) {
matched = true;
pattern_id = 824;
}
if(b0_35 && b1_2 && b2_12 && b3_11 && b4_3 && b5_42 && b6_10 && b7_21 && b8_7 && b9_11 && b10_17 && b11_23 && b12_12 && b13_22 && b14_5 && b15_16) {
matched = true;
pattern_id = 825;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_40 && b6_21 && b7_14 && b8_55) {
matched = true;
pattern_id = 826;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_6 && b5_6 && b6_24 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 827;
}
if(b0_35 && b1_52 && b2_24 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 828;
}
if(b0_35 && b1_3 && b2_6 && b3_50 && b4_44 && b5_21 && b6_7 && b7_8 && b8_18 && b9_3 && b10_18 && b11_29) {
matched = true;
pattern_id = 829;
}
if(b0_35 && b1_40 && b2_43 && b3_62 && b4_24 && b5_11 && b6_55 && b7_31 && b8_58 && b9_5 && b10_4 && b11_57 && b12_18 && b13_53 && b14_24 && b15_54) {
matched = true;
pattern_id = 830;
}
if(b0_35 && b1_40 && b2_43 && b3_62 && b4_24 && b5_11 && b6_55 && b7_31 && b8_58 && b9_5 && b10_4 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 831;
}
if(b0_35 && b1_40 && b2_16 && b3_16 && b4_27 && b5_43 && b6_21 && b7_11 && b8_7 && b9_20 && b10_17 && b11_47 && b12_50 && b13_36 && b14_34 && b15_3 && b16_43 && b17_29) {
matched = true;
pattern_id = 832;
}
if(b0_35 && b1_31 && b2_20 && b3_20 && b4_24 && b5_61 && b6_8 && b7_45 && b8_47 && b9_34 && b10_17 && b11_23 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 833;
}
if(b0_35 && b1_14 && b2_3 && b3_15 && b4_24 && b5_11 && b6_38 && b7_10 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 834;
}
if(b0_35 && b1_62 && b2_62 && b3_11 && b4_2 && b5_42 && b6_21 && b7_14 && b8_14 && b9_55 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 835;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 836;
}
if(b0_35 && b1_14 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6 && b9_52 && b10_59 && b11_47) {
matched = true;
pattern_id = 837;
}
if(b0_35 && b1_14 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6 && b9_52 && b10_17 && b11_48 && b12_18 && b13_41 && b14_55 && b15_18 && b16_29 && b17_55 && b18_49) {
matched = true;
pattern_id = 838;
}
if(b0_35 && b1_14 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6) {
matched = true;
pattern_id = 839;
}
if(b0_46 && b1_28 && b2_44 && b3_30 && b4_52 && b5_67 && b6_12) {
matched = true;
pattern_id = 840;
}
if(b0_35 && b1_26 && b2_60 && b3_56 && b4_26 && b5_40 && b6_23) {
matched = true;
pattern_id = 841;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_8) {
matched = true;
pattern_id = 842;
}
if(b0_35 && b1_21 && b2_16 && b3_26 && b4_6) {
matched = true;
pattern_id = 843;
}
if(b0_35 && b1_14 && b2_3 && b3_34 && b4_22 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13 && b11_14 && b12_12 && b13_40 && b14_49 && b15_36 && b16_32) {
matched = true;
pattern_id = 844;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_24 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 845;
}
if(b0_35 && b1_40 && b2_3 && b3_50 && b4_26 && b5_52 && b6_20 && b7_62) {
matched = true;
pattern_id = 846;
}
if(b0_35 && b1_70 && b2_63 && b3_58 && b4_40 && b5_32 && b6_2 && b7_17 && b8_59 && b9_22 && b10_64) {
matched = true;
pattern_id = 847;
}
if(b0_35 && b1_58 && b2_20 && b3_11 && b4_16 && b5_16 && b6_11 && b7_52 && b8_14 && b9_10 && b10_17 && b11_5 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 848;
}
if(b0_32 && b1_2 && b2_8 && b3_50) {
matched = true;
pattern_id = 849;
}
if(b0_39 && b1_46 && b2_31) {
matched = true;
pattern_id = 850;
}
if(b0_6 && b1_4 && b2_36 && b3_9 && b4_1) {
matched = true;
pattern_id = 851;
}
if(b0_53 && b1_20 && b2_31 && b3_30) {
matched = true;
pattern_id = 852;
}
if(b0_26 && b1_41 && b2_31) {
matched = true;
pattern_id = 853;
}
if(b0_24 && b1_60 && b2_45 && b3_5) {
matched = true;
pattern_id = 854;
}
if(b0_35 && b1_9 && b2_3 && b3_6 && b4_17 && b5_6 && b6_9 && b7_16 && b8_31 && b9_35 && b10_22 && b11_53 && b12_3 && b13_16 && b14_25 && b15_33 && b16_22 && b17_37 && b18_2 && b19_21 && b20_32 && b21_29 && b22_34 && b23_34 && b24_22 && b25_3 && b26_33 && b27_26) {
matched = true;
pattern_id = 855;
}
if(b0_27 && b1_1 && b2_1 && b3_53 && b4_32) {
matched = true;
pattern_id = 856;
}
if(b0_16 && b1_49 && b2_54 && b3_38) {
matched = true;
pattern_id = 857;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_3 && b5_11 && b6_18 && b7_10 && b8_10 && b9_57 && b10_33 && b11_20) {
matched = true;
pattern_id = 858;
}
if(b0_38 && b1_3 && b2_23 && b3_18 && b4_27 && b5_10 && b6_55 && b7_56 && b8_44 && b9_27 && b10_5 && b11_35 && b12_5 && b13_4) {
matched = true;
pattern_id = 859;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_50 && b5_27 && b6_7 && b7_45 && b8_35 && b9_42 && b10_7 && b11_42 && b12_55) {
matched = true;
pattern_id = 860;
}
if(b0_35 && b1_58 && b2_42 && b3_53 && b4_31 && b5_21 && b6_56) {
matched = true;
pattern_id = 861;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_43 && b6_36 && b7_46 && b8_11 && b9_20 && b10_65 && b11_14 && b12_56) {
matched = true;
pattern_id = 862;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 863;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 864;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_40 && b6_7 && b7_51 && b8_5 && b9_52) {
matched = true;
pattern_id = 865;
}
if(b0_35 && b1_13 && b2_25 && b3_20 && b4_22 && b5_64) {
matched = true;
pattern_id = 866;
}
if(b0_35 && b1_6 && b2_8 && b3_8 && b4_26 && b5_54 && b6_8 && b7_9) {
matched = true;
pattern_id = 867;
}
if(b0_35 && b1_3 && b2_21 && b3_27 && b4_27 && b5_8 && b6_3 && b7_45 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 868;
}
if(b0_35 && b1_11 && b2_43 && b3_34 && b4_7 && b5_11 && b6_24 && b7_62 && b8_10 && b9_1 && b10_33 && b11_20) {
matched = true;
pattern_id = 869;
}
if(b0_35 && b1_11 && b2_43 && b3_20 && b4_6 && b5_38 && b6_32 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 870;
}
if(b0_35 && b1_13 && b2_49 && b3_21 && b4_27 && b5_26 && b6_46 && b7_31 && b8_34 && b9_41 && b10_48 && b11_47 && b12_36 && b13_27 && b14_40) {
matched = true;
pattern_id = 871;
}
if(b0_35 && b1_13 && b2_49 && b3_21 && b4_27 && b5_26 && b6_46 && b7_31 && b8_34 && b9_41 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 872;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_25 && b6_3 && b7_46 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 873;
}
if(b0_35 && b1_52 && b2_25 && b3_43 && b4_16 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_43 && b11_59 && b12_7) {
matched = true;
pattern_id = 874;
}
if(b0_35 && b1_6 && b2_23 && b3_26 && b4_14 && b5_6 && b6_2 && b7_31 && b8_55 && b9_40) {
matched = true;
pattern_id = 875;
}
if(b0_11 && b1_35 && b2_41 && b3_36 && b4_36 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 876;
}
if(b0_35 && b1_68 && b2_49 && b3_8 && b4_7) {
matched = true;
pattern_id = 877;
}
if(b0_35 && b1_35 && b2_18 && b3_50 && b4_22 && b5_10 && b6_38 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 878;
}
if(b0_47 && b1_50 && b2_41 && b3_11 && b4_53 && b5_4 && b6_3 && b7_55 && b8_3 && b9_20 && b10_43 && b11_49 && b12_38 && b13_55 && b14_52 && b15_35 && b16_22 && b17_28) {
matched = true;
pattern_id = 879;
}
if(b0_68 && b1_35 && b2_12 && b3_14 && b4_2 && b5_8 && b6_36 && b7_34 && b8_13 && b9_27 && b10_56 && b11_46 && b12_16 && b13_30 && b14_35 && b15_35 && b16_16 && b17_37) {
matched = true;
pattern_id = 880;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15) {
matched = true;
pattern_id = 881;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_12 && b6_3 && b7_7 && b8_15) {
matched = true;
pattern_id = 882;
}
if(b0_35 && b1_14 && b2_20 && b3_34 && b4_12 && b5_30 && b6_48 && b7_9 && b8_40) {
matched = true;
pattern_id = 883;
}
if(b0_35 && b1_14 && b2_20 && b3_34 && b4_12 && b5_30 && b6_56 && b7_53 && b8_49) {
matched = true;
pattern_id = 884;
}
if(b0_67 && b1_34 && b2_9 && b3_63 && b4_63 && b5_58 && b6_31 && b7_56 && b8_53 && b9_61 && b10_51 && b11_52 && b12_11 && b13_13) {
matched = true;
pattern_id = 885;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_56 && b8_47 && b9_27 && b10_13 && b11_46 && b12_10 && b13_31 && b14_8 && b15_7 && b16_25 && b17_27 && b18_33 && b19_25 && b20_24 && b21_2 && b22_18 && b23_45 && b24_40 && b25_33 && b26_34 && b27_4 && b28_18 && b29_34 && b30_3 && b31_4 && b32_15 && b33_26 && b34_3) {
matched = true;
pattern_id = 886;
}
if(b0_21 && b1_3 && b2_8 && b3_40 && b4_17 && b5_16 && b6_46 && b7_9 && b8_11 && b9_6 && b10_12 && b11_29 && b12_10 && b13_31 && b14_8 && b15_7) {
matched = true;
pattern_id = 887;
}
if(b0_22 && b1_3 && b2_24 && b3_11 && b4_14 && b5_42 && b6_12) {
matched = true;
pattern_id = 888;
}
if(b0_43 && b1_59 && b2_15 && b3_11 && b4_17 && b5_6 && b6_12) {
matched = true;
pattern_id = 889;
}
if(b0_21 && b1_3 && b2_8 && b3_40 && b4_17 && b5_16 && b6_21 && b7_10 && b8_3) {
matched = true;
pattern_id = 890;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_14 && b5_10 && b6_55 && b7_7 && b8_35 && b9_14 && b10_28 && b11_37 && b12_3 && b13_38 && b14_5) {
matched = true;
pattern_id = 891;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_11 && b5_16 && b6_7 && b7_53 && b8_2) {
matched = true;
pattern_id = 892;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_2 && b5_10 && b6_39 && b7_8 && b8_41 && b9_5) {
matched = true;
pattern_id = 893;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_6 && b5_11 && b6_21 && b7_54 && b8_5 && b9_9) {
matched = true;
pattern_id = 894;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_6 && b5_11 && b6_21 && b7_56 && b8_41 && b9_6 && b10_49 && b11_4 && b12_7 && b13_22 && b14_5) {
matched = true;
pattern_id = 895;
}
if(b0_12 && b1_24 && b2_24 && b3_35 && b4_6 && b5_11 && b6_21 && b7_56 && b8_40 && b9_14 && b10_26 && b11_55 && b12_16) {
matched = true;
pattern_id = 896;
}
if(b0_21 && b1_47 && b2_43 && b3_35 && b4_6 && b5_11 && b6_21 && b7_54 && b8_5 && b9_9 && b10_5 && b11_46 && b12_18 && b13_5) {
matched = true;
pattern_id = 897;
}
if(b0_21 && b1_47 && b2_43 && b3_35 && b4_6 && b5_11 && b6_21 && b7_54 && b8_5 && b9_9) {
matched = true;
pattern_id = 898;
}
if(b0_52 && b1_52 && b2_25 && b3_20 && b4_59 && b5_42 && b6_8 && b7_35 && b8_34 && b9_5 && b10_11 && b11_35 && b12_17 && b13_30 && b14_17) {
matched = true;
pattern_id = 899;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_18 && b5_25 && b6_20 && b7_56 && b8_12 && b9_9 && b10_17 && b11_23 && b12_16) {
matched = true;
pattern_id = 900;
}
if(b0_28 && b1_16 && b2_43 && b3_43 && b4_6 && b5_4) {
matched = true;
pattern_id = 901;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17 && b5_4 && b6_39 && b7_7 && b8_5 && b9_14) {
matched = true;
pattern_id = 902;
}
if(b0_21 && b1_16 && b2_20 && b3_50 && b4_1 && b5_42 && b6_8 && b7_35 && b8_34 && b9_5) {
matched = true;
pattern_id = 903;
}
if(b0_11 && b1_16 && b2_25 && b3_26 && b4_6 && b5_6 && b6_12 && b7_9 && b8_42 && b9_50 && b10_49 && b11_3) {
matched = true;
pattern_id = 904;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17 && b5_4 && b6_11 && b7_31 && b8_61 && b9_34 && b10_17) {
matched = true;
pattern_id = 905;
}
if(b0_33 && b1_16 && b2_62 && b3_43 && b4_14 && b5_11 && b6_11 && b7_10 && b8_3 && b9_10 && b10_28 && b11_28 && b12_25 && b13_5) {
matched = true;
pattern_id = 906;
}
if(b0_11 && b1_16 && b2_25 && b3_26 && b4_6 && b5_6 && b6_12 && b7_29 && b8_42 && b9_10 && b10_28 && b11_28 && b12_17 && b13_16 && b14_17) {
matched = true;
pattern_id = 907;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17 && b5_4 && b6_34 && b7_31 && b8_35 && b9_27 && b10_32 && b11_46 && b12_16 && b13_5) {
matched = true;
pattern_id = 908;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_18 && b7_31 && b8_40 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 909;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_44 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_16 && b17_26) {
matched = true;
pattern_id = 910;
}
if(b0_35 && b1_3 && b2_16 && b3_17 && b4_44 && b5_40 && b6_21 && b7_31 && b8_35) {
matched = true;
pattern_id = 911;
}
if(b0_35 && b1_14 && b2_25 && b3_24 && b4_22 && b5_10 && b6_2 && b7_35 && b8_42 && b9_10) {
matched = true;
pattern_id = 912;
}
if(b0_35 && b1_2 && b2_41 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 913;
}
if(b0_35 && b1_47 && b2_42 && b3_18 && b4_59 && b5_3 && b6_3 && b7_8 && b8_12 && b9_28 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 914;
}
if(b0_35 && b1_47 && b2_8 && b3_16 && b4_50 && b5_6 && b6_24 && b7_9 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 915;
}
if(b0_35 && b1_47 && b2_8 && b3_24 && b4_27 && b5_26 && b6_11 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 916;
}
if(b0_35 && b1_11 && b2_12 && b3_49 && b4_44 && b5_8 && b6_39 && b7_39 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 917;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_16 && b5_6 && b6_24 && b7_30) {
matched = true;
pattern_id = 918;
}
if(b0_35 && b1_16 && b2_25 && b3_16 && b4_27 && b5_26 && b6_11 && b7_10 && b8_8 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 919;
}
if(b0_35 && b1_62 && b2_42 && b3_6 && b4_44 && b5_57 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 920;
}
if(b0_35 && b1_52 && b2_14 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_35 && b9_12 && b10_9 && b11_3 && b12_16 && b13_38 && b14_34 && b15_22 && b16_18 && b17_44) {
matched = true;
pattern_id = 921;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_26 && b6_36 && b7_14 && b8_7 && b9_48 && b10_26 && b11_49 && b12_12 && b13_6 && b14_18) {
matched = true;
pattern_id = 922;
}
if(b0_35 && b1_6 && b2_43 && b3_24 && b4_60 && b5_54 && b6_8 && b7_54 && b8_9 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 923;
}
if(b0_35 && b1_2 && b2_41 && b3_40 && b4_62 && b5_51 && b6_20 && b7_10) {
matched = true;
pattern_id = 924;
}
if(b0_35 && b1_46 && b2_43 && b3_40 && b4_15 && b5_16 && b6_55 && b7_10 && b8_38 && b9_11 && b10_25 && b11_6) {
matched = true;
pattern_id = 925;
}
if(b0_35 && b1_3 && b2_6 && b3_7 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 926;
}
if(b0_21 && b1_8 && b2_16 && b3_8 && b4_44 && b5_12 && b6_7 && b7_47 && b8_48 && b9_50 && b10_13 && b11_23) {
matched = true;
pattern_id = 927;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_26 && b6_10 && b7_32 && b8_6 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 928;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1) {
matched = true;
pattern_id = 929;
}
if(b0_35 && b1_2 && b2_27 && b3_18 && b4_6 && b5_11 && b6_11 && b7_7 && b8_15) {
matched = true;
pattern_id = 930;
}
if(b0_30 && b1_3 && b2_17 && b3_14 && b4_57 && b5_68 && b6_50 && b7_37 && b8_35 && b9_10 && b10_5 && b11_51 && b12_5 && b13_56 && b14_55 && b15_3 && b16_2 && b17_37 && b18_8 && b19_26 && b20_16 && b21_4) {
matched = true;
pattern_id = 931;
}
if(b0_35 && b1_52 && b2_68 && b3_7 && b4_27 && b5_8 && b6_10 && b7_10 && b8_34 && b9_9 && b10_5 && b11_3 && b12_25 && b13_41 && b14_49 && b15_20 && b16_30 && b17_47 && b18_23 && b19_32 && b20_2 && b21_10 && b22_4 && b23_27 && b24_31 && b25_33 && b26_30 && b27_35 && b28_37 && b29_21 && b30_19 && b31_26 && b32_23 && b33_11 && b34_19 && b35_32 && b36_13 && b37_26 && b38_27) {
matched = true;
pattern_id = 932;
}
if(b0_35 && b1_24 && b2_25 && b3_49 && b4_6 && b5_37 && b6_18 && b7_31 && b8_11 && b9_11 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 933;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_15 && b8_11 && b9_11 && b10_43) {
matched = true;
pattern_id = 934;
}
if(b0_35 && b1_58 && b2_21 && b3_18 && b4_6 && b5_10 && b6_3 && b7_54 && b8_2 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 935;
}
if(b0_35 && b1_58 && b2_20 && b3_18 && b4_6 && b5_29 && b6_48 && b7_55 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22) {
matched = true;
pattern_id = 936;
}
if(b0_35 && b1_58 && b2_20 && b3_18 && b4_6 && b5_29 && b6_48 && b7_55 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 937;
}
if(b0_22 && b1_3 && b2_16 && b3_7 && b4_17 && b5_6 && b6_54 && b7_7 && b8_11 && b9_10 && b10_17 && b11_62 && b12_6 && b13_36 && b14_50) {
matched = true;
pattern_id = 938;
}
if(b0_35 && b1_52 && b2_62 && b3_50 && b4_7 && b5_37 && b6_18 && b7_10 && b8_16 && b9_50 && b10_4 && b11_3 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 939;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_26 && b6_2 && b7_51 && b8_16 && b9_34) {
matched = true;
pattern_id = 940;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_13 && b10_21 && b11_11 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_3 && b36_3) {
matched = true;
pattern_id = 941;
}
if(b0_12 && b1_21 && b2_6 && b3_28 && b4_45 && b5_19 && b6_5 && b7_13 && b8_47 && b9_40 && b10_45 && b11_48 && b12_4 && b13_5 && b14_35 && b15_41 && b16_5 && b17_26 && b18_35 && b19_2 && b20_34 && b21_46) {
matched = true;
pattern_id = 942;
}
if(b0_35 && b1_2 && b2_8 && b3_35 && b4_31 && b5_6 && b6_21 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 943;
}
if(b0_35 && b1_2 && b2_8 && b3_35 && b4_31 && b5_6 && b6_21 && b7_26 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 944;
}
if(b0_26 && b1_19 && b2_56 && b3_5 && b4_5 && b5_19 && b6_50) {
matched = true;
pattern_id = 945;
}
if(b0_13 && b1_8 && b2_12 && b3_16 && b4_12 && b5_12 && b6_63 && b7_9 && b8_8 && b9_19 && b10_17) {
matched = true;
pattern_id = 946;
}
if(b0_35 && b1_47 && b2_46 && b3_56 && b4_51 && b5_44 && b6_37 && b7_11 && b8_7 && b9_17 && b10_49 && b11_4 && b12_39 && b13_5 && b14_49) {
matched = true;
pattern_id = 947;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_7 && b5_8 && b6_3 && b7_32 && b8_18 && b9_47 && b10_6 && b11_47 && b12_52 && b13_27 && b14_18 && b15_3 && b16_52) {
matched = true;
pattern_id = 948;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_7 && b5_8 && b6_3 && b7_32 && b8_18 && b9_4 && b10_3 && b11_25 && b12_10) {
matched = true;
pattern_id = 949;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_7 && b5_8 && b6_3 && b7_32) {
matched = true;
pattern_id = 950;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 951;
}
if(b0_35 && b1_26 && b2_31 && b3_10 && b4_59 && b5_5 && b6_11 && b7_14 && b8_8 && b9_5) {
matched = true;
pattern_id = 952;
}
if(b0_35 && b1_26 && b2_36 && b3_47 && b4_8 && b5_49 && b6_55 && b7_29 && b8_5 && b9_45) {
matched = true;
pattern_id = 953;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_4 && b45_3 && b46_5 && b47_3 && b48_2 && b49_3 && b50_11 && b51_2 && b52_4 && b53_4 && b54_2 && b55_4 && b56_2 && b57_2 && b58_4 && b59_4 && b60_2 && b61_3 && b62_4 && b63_2 && b64_4 && b65_3 && b66_2 && b67_4 && b68_4 && b69_2 && b70_3 && b71_3 && b72_5 && b73_4 && b74_4 && b75_5 && b76_4 && b77_6 && b78_4 && b79_4 && b80_6 && b81_3 && b82_4 && b83_6 && b84_2 && b85_2 && b86_4 && b87_2 && b88_3 && b89_3 && b90_2 && b91_2 && b92_3 && b93_2 && b94_2 && b95_2 && b96_2 && b97_2 && b98_3 && b99_2 && b100_2 && b101_3 && b102_3 && b103_2 && b104_2 && b105_2 && b106_2 && b107_1 && b108_1 && b109_1 && b110_1 && b111_1 && b112_1 && b113_1 && b114_1 && b115_1 && b116_1 && b117_1 && b118_1 && b119_1 && b120_1 && b121_1 && b122_1 && b123_1 && b124_1 && b125_1 && b126_1 && b127_1 && b128_1 && b129_1 && b130_1 && b131_1 && b132_1 && b133_1 && b134_1 && b135_1 && b136_1 && b137_1 && b138_1 && b139_1 && b140_1 && b141_1 && b142_1 && b143_1 && b144_1 && b145_1 && b146_1 && b147_1 && b148_1 && b149_1 && b150_1 && b151_1 && b152_1 && b153_1 && b154_1 && b155_1 && b156_1 && b157_1 && b158_1 && b159_1 && b160_1 && b161_1 && b162_1 && b163_1 && b164_1 && b165_1 && b166_1 && b167_1 && b168_1 && b169_1 && b170_1 && b171_1 && b172_1 && b173_1 && b174_1 && b175_1 && b176_1 && b177_1 && b178_1 && b179_1 && b180_1 && b181_1 && b182_1 && b183_1 && b184_1 && b185_1 && b186_1 && b187_1 && b188_1 && b189_1 && b190_1 && b191_1 && b192_1 && b193_1 && b194_1 && b195_1 && b196_1 && b197_1 && b198_1 && b199_1 && b200_1 && b201_1 && b202_1 && b203_1 && b204_1 && b205_1 && b206_1 && b207_1 && b208_1 && b209_1 && b210_1 && b211_1 && b212_1 && b213_1 && b214_1 && b215_1 && b216_1 && b217_1 && b218_1 && b219_1 && b220_1 && b221_1 && b222_1 && b223_1 && b224_1 && b225_1 && b226_1 && b227_1 && b228_1 && b229_1 && b230_1 && b231_1 && b232_1 && b233_1 && b234_1 && b235_1 && b236_1 && b237_1 && b238_1 && b239_1 && b240_1 && b241_1 && b242_1 && b243_1 && b244_1 && b245_1 && b246_1 && b247_1 && b248_1 && b249_1 && b250_1 && b251_1 && b252_1 && b253_1 && b254_1 && b255_1 && b256_1 && b257_1 && b258_1 && b259_1 && b260_1 && b261_1 && b262_1 && b263_1 && b264_1 && b265_1 && b266_1 && b267_1 && b268_1 && b269_1 && b270_1 && b271_1 && b272_1 && b273_1 && b274_1 && b275_1 && b276_1 && b277_1 && b278_1 && b279_1 && b280_1 && b281_1 && b282_1 && b283_1 && b284_1 && b285_1 && b286_1 && b287_1 && b288_1 && b289_1 && b290_1 && b291_1 && b292_1 && b293_1 && b294_1 && b295_1 && b296_1 && b297_1 && b298_1 && b299_1 && b300_1 && b301_1 && b302_1 && b303_1 && b304_1 && b305_1 && b306_1 && b307_1 && b308_1 && b309_1 && b310_1 && b311_1 && b312_1 && b313_1 && b314_1 && b315_1 && b316_1 && b317_1 && b318_1 && b319_1 && b320_1 && b321_1 && b322_1 && b323_1 && b324_1 && b325_1 && b326_1 && b327_1 && b328_1 && b329_1 && b330_1 && b331_1 && b332_1 && b333_1 && b334_1 && b335_1 && b336_1 && b337_1 && b338_1 && b339_1 && b340_1 && b341_1 && b342_1 && b343_1 && b344_1 && b345_1 && b346_1 && b347_1 && b348_1 && b349_1 && b350_1 && b351_1 && b352_1 && b353_1 && b354_1 && b355_1 && b356_1 && b357_1 && b358_1 && b359_1 && b360_1 && b361_1 && b362_1 && b363_1) {
matched = true;
pattern_id = 954;
}
if(b0_35 && b1_13 && b2_42 && b3_18 && b4_12 && b5_8 && b6_22 && b7_10 && b8_8 && b9_20 && b10_5 && b11_28 && b12_16 && b13_5 && b14_35 && b15_34 && b16_29 && b17_18 && b18_18 && b19_42 && b20_37 && b21_15) {
matched = true;
pattern_id = 955;
}
if(b0_35 && b1_13 && b2_15 && b3_50 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 956;
}
if(b0_35 && b1_47 && b2_42 && b3_35 && b4_2 && b5_27 && b6_35 && b7_54 && b8_11 && b9_5 && b10_11 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 957;
}
if(b0_14 && b1_15 && b2_5 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_8 && b14_16 && b15_4 && b16_4 && b17_31 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_7 && b26_2 && b27_8 && b28_34 && b29_34 && b30_17 && b31_32 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 958;
}
if(b0_14 && b1_15 && b2_36 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_33 && b15_7 && b16_2 && b17_21 && b18_15 && b19_48 && b20_8 && b21_20 && b22_31 && b23_28 && b24_22 && b25_21 && b26_29 && b27_4 && b28_21 && b29_35) {
matched = true;
pattern_id = 959;
}
if(b0_35 && b1_11 && b2_8 && b3_38 && b4_18 && b5_26 && b6_24 && b7_53 && b8_14 && b9_14 && b10_7 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 960;
}
if(b0_35 && b1_13 && b2_43 && b3_18 && b4_2 && b5_21 && b6_3 && b7_8 && b8_47 && b9_42 && b10_43 && b11_49 && b12_38 && b13_40 && b14_25 && b15_20 && b16_16) {
matched = true;
pattern_id = 961;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_64 && b5_24 && b6_29 && b7_5 && b8_3) {
matched = true;
pattern_id = 962;
}
if(b0_14 && b1_37 && b2_5 && b3_28) {
matched = true;
pattern_id = 963;
}
if(b0_1 && b1_15 && b2_1) {
matched = true;
pattern_id = 964;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35) {
matched = true;
pattern_id = 965;
}
if(b0_35 && b1_16 && b2_17 && b3_40 && b4_19 && b5_16 && b6_40 && b7_4) {
matched = true;
pattern_id = 966;
}
if(b0_49 && b1_16 && b2_43 && b3_43 && b4_2 && b5_3 && b6_7 && b7_8 && b8_39 && b9_22 && b10_12 && b11_47 && b12_26 && b13_19 && b14_24 && b15_41 && b16_18 && b17_8 && b18_12 && b19_13 && b20_9) {
matched = true;
pattern_id = 967;
}
if(b0_14 && b1_7 && b2_1 && b3_28 && b4_10 && b5_18 && b6_5 && b7_40 && b8_19 && b9_13 && b10_45 && b11_7 && b12_10 && b13_45 && b14_56 && b15_55 && b16_28 && b17_8 && b18_50 && b19_7 && b20_8 && b21_47 && b22_47 && b23_8 && b24_15 && b25_2 && b26_8 && b27_7 && b28_2 && b29_7 && b30_9 && b31_11 && b32_1 && b33_3 && b34_27 && b35_5 && b36_21 && b37_4 && b38_2) {
matched = true;
pattern_id = 968;
}
if(b0_40 && b1_44 && b2_32 && b3_63 && b4_8 && b5_31 && b6_9 && b7_19 && b8_32 && b9_4 && b10_41 && b11_22 && b12_6 && b13_31 && b14_1 && b15_7) {
matched = true;
pattern_id = 969;
}
if(b0_27 && b1_70 && b2_54 && b3_47 && b4_13 && b5_50 && b6_31 && b7_66) {
matched = true;
pattern_id = 970;
}
if(b0_52 && b1_50 && b2_43 && b3_34 && b4_12) {
matched = true;
pattern_id = 971;
}
if(b0_3 && b1_20 && b2_34 && b3_47 && b4_23 && b5_67 && b6_29) {
matched = true;
pattern_id = 972;
}
if(b0_57 && b1_2 && b2_14 && b3_24 && b4_6 && b5_10 && b6_5 && b7_6 && b8_4 && b9_4 && b10_6 && b11_35 && b12_16 && b13_57 && b14_51 && b15_35 && b16_18 && b17_44 && b18_29 && b19_32 && b20_2 && b21_18 && b22_39 && b23_31 && b24_28) {
matched = true;
pattern_id = 973;
}
if(b0_35 && b1_9 && b2_3 && b3_20 && b4_12 && b5_11 && b6_18 && b7_11 && b8_7 && b9_12 && b10_51 && b11_40 && b12_17 && b13_38 && b14_24 && b15_32 && b16_44 && b17_44 && b18_31 && b19_41) {
matched = true;
pattern_id = 974;
}
if(b0_35 && b1_58 && b2_14 && b3_20 && b4_12 && b5_51 && b6_11 && b7_14 && b8_8 && b9_41 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 975;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_5 && b6_7 && b7_8 && b8_54 && b9_5 && b10_4 && b11_13 && b12_29 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_46 && b19_12 && b20_3 && b21_48 && b22_28 && b23_18 && b24_29 && b25_25 && b26_25 && b27_10 && b28_25 && b29_30 && b30_18 && b31_28 && b32_23 && b33_21 && b34_2 && b35_17) {
matched = true;
pattern_id = 976;
}
if(b0_35 && b1_9 && b2_14 && b3_8 && b4_12 && b5_4 && b6_29 && b7_10 && b8_8 && b9_53 && b10_17 && b11_23 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_28 && b19_47 && b20_41 && b21_21 && b22_48 && b23_25 && b24_3 && b25_24 && b26_39 && b27_1 && b28_32 && b29_24 && b30_19 && b31_23 && b32_9 && b33_19 && b34_28 && b35_29 && b36_14) {
matched = true;
pattern_id = 977;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5 && b7_19) {
matched = true;
pattern_id = 978;
}
if(b0_35 && b1_50 && b2_16 && b3_6 && b4_24 && b5_27 && b6_7 && b7_8 && b8_41 && b9_5 && b10_41 && b11_13 && b12_11 && b13_50 && b14_17 && b15_22 && b16_31 && b17_10 && b18_31 && b19_21 && b20_3 && b21_24 && b22_45 && b23_46 && b24_29 && b25_33 && b26_34 && b27_17 && b28_1 && b29_24 && b30_12 && b31_26 && b32_2 && b33_27 && b34_29) {
matched = true;
pattern_id = 979;
}
if(b0_17 && b1_52 && b2_49 && b3_15 && b4_22 && b5_6 && b6_41 && b7_3 && b8_27 && b9_16 && b10_2 && b11_63) {
matched = true;
pattern_id = 980;
}
if(b0_35 && b1_2 && b2_24 && b3_15 && b4_12 && b5_20 && b6_48 && b7_14 && b8_8 && b9_28 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 981;
}
if(b0_35 && b1_2 && b2_49 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 982;
}
if(b0_35 && b1_41 && b2_9 && b3_47 && b4_46 && b5_49 && b6_47 && b7_20) {
matched = true;
pattern_id = 983;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15) {
matched = true;
pattern_id = 984;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19) {
matched = true;
pattern_id = 985;
}
if(b0_35 && b1_3 && b2_19 && b3_26 && b4_24 && b5_52 && b6_20 && b7_10 && b8_2 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_18 && b15_3 && b16_44 && b17_28 && b18_51 && b19_21 && b20_3 && b21_30 && b22_25 && b23_25 && b24_3 && b25_32 && b26_37 && b27_36 && b28_31 && b29_25 && b30_19 && b31_23) {
matched = true;
pattern_id = 986;
}
if(b0_35 && b1_3 && b2_19 && b3_26 && b4_24 && b5_52 && b6_20 && b7_10 && b8_2 && b9_20 && b10_11 && b11_3 && b12_20 && b13_48 && b14_18 && b15_3 && b16_44 && b17_28 && b18_16 && b19_12 && b20_3 && b21_21 && b22_40 && b23_47 && b24_3 && b25_27 && b26_1 && b27_31 && b28_21 && b29_25) {
matched = true;
pattern_id = 987;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_17 && b10_6 && b11_27) {
matched = true;
pattern_id = 988;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_7 && b16_1 && b17_10 && b18_19 && b19_2 && b20_37 && b21_27 && b22_39 && b23_32 && b24_32 && b25_1 && b26_3 && b27_37 && b28_32 && b29_32 && b30_33 && b31_29 && b32_34 && b33_28) {
matched = true;
pattern_id = 989;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_50 && b5_25 && b6_7 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22) {
matched = true;
pattern_id = 990;
}
if(b0_35 && b1_3 && b2_23 && b3_20 && b4_44 && b5_8 && b6_23 && b7_68 && b8_1 && b9_1 && b10_17 && b11_23 && b12_20 && b13_36 && b14_35 && b15_36 && b16_49 && b17_36 && b18_19) {
matched = true;
pattern_id = 991;
}
if(b0_24 && b1_9 && b2_61 && b3_51) {
matched = true;
pattern_id = 992;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_27 && b6_8 && b7_45 && b8_15) {
matched = true;
pattern_id = 993;
}
if(b0_21 && b1_8 && b2_16 && b3_7 && b4_24 && b5_6 && b6_55 && b7_9 && b8_48 && b9_40 && b10_6 && b11_26 && b12_17 && b13_27 && b14_28 && b15_7 && b16_27 && b17_6 && b18_8) {
matched = true;
pattern_id = 994;
}
if(b0_70 && b1_2 && b2_52 && b3_26 && b4_2 && b5_51 && b6_10 && b7_11 && b8_40 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_49 && b15_38) {
matched = true;
pattern_id = 995;
}
if(b0_51 && b1_20 && b2_53 && b3_3 && b4_9) {
matched = true;
pattern_id = 996;
}
if(b0_71 && b1_39 && b2_4 && b3_53 && b4_45 && b5_23) {
matched = true;
pattern_id = 997;
}
if(b0_16 && b1_73 && b2_40 && b3_65 && b4_40 && b5_63 && b6_62 && b7_64 && b8_32 && b9_8 && b10_36 && b11_18) {
matched = true;
pattern_id = 998;
}
if(b0_51 && b1_43 && b2_45 && b3_5) {
matched = true;
pattern_id = 999;
}
if(b0_35 && b1_32 && b2_21 && b3_40 && b4_11 && b5_16 && b6_7 && b7_53 && b8_5 && b9_14 && b10_48 && b11_64 && b12_17 && b13_4) {
matched = true;
pattern_id = 1000;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_18 && b5_25 && b6_35 && b7_69 && b8_5 && b9_14 && b10_22) {
matched = true;
pattern_id = 1001;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_14 && b5_11 && b6_10 && b7_9 && b8_39 && b9_34 && b10_26 && b11_40 && b12_5 && b13_52) {
matched = true;
pattern_id = 1002;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_21 && b5_16 && b6_55 && b7_29 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1003;
}
if(b0_35 && b1_59 && b2_43 && b3_45 && b4_46 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1004;
}
if(b0_35 && b1_2 && b2_16 && b3_8 && b4_27 && b5_55 && b6_7 && b7_15 && b8_34 && b9_6 && b10_38) {
matched = true;
pattern_id = 1005;
}
if(b0_35 && b1_16 && b2_20 && b3_48 && b4_44 && b5_42 && b6_24 && b7_15 && b8_35 && b9_45 && b10_13) {
matched = true;
pattern_id = 1006;
}
if(b0_17 && b1_50 && b2_12 && b3_14 && b4_65 && b5_69 && b6_2 && b7_15 && b8_63 && b9_9 && b10_1 && b11_30 && b12_44 && b13_33) {
matched = true;
pattern_id = 1007;
}
if(b0_30 && b1_21 && b2_12 && b3_16 && b4_18 && b5_7 && b6_21 && b7_11 && b8_35 && b9_17 && b10_50) {
matched = true;
pattern_id = 1008;
}
if(b0_35 && b1_16 && b2_20 && b3_48 && b4_44 && b5_42 && b6_2 && b7_9 && b8_55 && b9_10) {
matched = true;
pattern_id = 1009;
}
if(b0_35 && b1_13 && b2_14 && b3_46 && b4_21 && b5_16 && b6_10 && b7_70 && b8_22 && b9_20 && b10_50 && b11_6 && b12_55 && b13_58 && b14_25 && b15_30 && b16_37 && b17_26 && b18_15 && b19_17 && b20_27 && b21_2 && b22_37 && b23_3 && b24_32 && b25_35 && b26_45) {
matched = true;
pattern_id = 1010;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_27 && b10_7 && b11_26 && b12_38 && b13_22) {
matched = true;
pattern_id = 1011;
}
if(b0_16 && b1_56 && b2_3 && b3_17 && b4_44 && b5_8 && b6_35 && b7_69 && b8_42 && b9_10 && b10_26 && b11_6 && b12_3 && b13_26 && b14_33 && b15_24 && b16_15) {
matched = true;
pattern_id = 1012;
}
if(b0_72 && b1_41 && b2_56 && b3_8 && b4_18 && b5_70 && b6_53 && b7_67 && b8_60 && b9_62 && b10_53 && b11_40 && b12_17 && b13_29 && b14_13) {
matched = true;
pattern_id = 1013;
}
if(b0_35 && b1_35 && b2_23 && b3_8 && b4_19 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 1014;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_42 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 1015;
}
if(b0_35 && b1_52 && b2_3 && b3_6 && b4_17 && b5_17 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 1016;
}
if(b0_35 && b1_26 && b2_16 && b3_6 && b4_51 && b5_11 && b6_20 && b7_9 && b8_15 && b9_9 && b10_26 && b11_40 && b12_5 && b13_59 && b14_5 && b15_3 && b16_3 && b17_50 && b18_15 && b19_42 && b20_13 && b21_10 && b22_27 && b23_28 && b24_3 && b25_41 && b26_27 && b27_1 && b28_34 && b29_36 && b30_17 && b31_24 && b32_22 && b33_18 && b34_30 && b35_2) {
matched = true;
pattern_id = 1017;
}
if(b0_35 && b1_34 && b2_45 && b3_66 && b4_23 && b5_31 && b6_3 && b7_45 && b8_36 && b9_49 && b10_38 && b11_57 && b12_45 && b13_21 && b14_18) {
matched = true;
pattern_id = 1018;
}
if(b0_35 && b1_58 && b2_6 && b3_18 && b4_4) {
matched = true;
pattern_id = 1019;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_7 && b8_48 && b9_30 && b10_11 && b11_46) {
matched = true;
pattern_id = 1020;
}
if(b0_35 && b1_8 && b2_50 && b3_20 && b4_44 && b5_51 && b6_18 && b7_46 && b8_8 && b9_44 && b10_11 && b11_40 && b12_17 && b13_38 && b14_55 && b15_32) {
matched = true;
pattern_id = 1021;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_14 && b5_26 && b6_3) {
matched = true;
pattern_id = 1022;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_52 && b6_39 && b7_35 && b8_34 && b9_49 && b10_11 && b11_54 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1023;
}
if(b0_35 && b1_13 && b2_23 && b3_15 && b4_3 && b5_42 && b6_7 && b7_45 && b8_54) {
matched = true;
pattern_id = 1024;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_8 && b21_1 && b22_49 && b23_8 && b24_15 && b25_17 && b26_11) {
matched = true;
pattern_id = 1025;
}
if(b0_52 && b1_21 && b2_41 && b3_37) {
matched = true;
pattern_id = 1026;
}
if(b0_49 && b1_28 && b2_56 && b3_67 && b4_43 && b5_2 && b6_11 && b7_10 && b8_8 && b9_28) {
matched = true;
pattern_id = 1027;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_5 && b7_17 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_2 && b15_12 && b16_15 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1 && b23_48 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 1028;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_18 && b11_16 && b12_10) {
matched = true;
pattern_id = 1029;
}
if(b0_14 && b1_15 && b2_13 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 1030;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_8 && b5_1 && b6_12 && b7_4 && b8_23 && b9_13 && b10_10 && b11_16 && b12_6 && b13_2 && b14_1 && b15_4 && b16_17 && b17_1 && b18_3 && b19_3 && b20_12 && b21_3 && b22_2 && b23_13 && b24_2 && b25_2 && b26_2 && b27_2 && b28_10 && b29_2 && b30_5 && b31_11 && b32_35 && b33_8 && b34_1 && b35_10 && b36_6 && b37_4 && b38_5 && b39_5 && b40_7 && b41_4 && b42_4 && b43_4 && b44_19 && b45_3 && b46_4 && b47_17 && b48_3) {
matched = true;
pattern_id = 1031;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_5 && b7_60 && b8_4 && b9_3 && b10_66 && b11_1 && b12_12 && b13_2 && b14_10 && b15_7 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_6 && b23_11 && b24_2 && b25_2 && b26_9 && b27_8) {
matched = true;
pattern_id = 1032;
}
if(b0_35 && b1_52 && b2_15 && b3_17 && b4_35 && b5_30 && b6_21 && b7_11) {
matched = true;
pattern_id = 1033;
}
if(b0_51 && b1_9 && b2_55 && b3_47) {
matched = true;
pattern_id = 1034;
}
if(b0_6 && b1_28 && b2_22 && b3_12 && b4_61 && b5_67) {
matched = true;
pattern_id = 1035;
}
if(b0_7 && b1_43 && b2_22 && b3_39) {
matched = true;
pattern_id = 1036;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_13 && b6_12 && b7_49 && b8_25 && b9_13 && b10_16 && b11_17 && b12_10) {
matched = true;
pattern_id = 1037;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_45 && b11_25 && b12_10) {
matched = true;
pattern_id = 1038;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_13 && b10_21 && b11_16 && b12_10) {
matched = true;
pattern_id = 1039;
}
if(b0_53 && b1_44 && b2_45 && b3_30 && b4_20 && b5_18 && b6_9 && b7_37 && b8_3) {
matched = true;
pattern_id = 1040;
}
if(b0_24 && b1_8 && b2_24 && b3_26 && b4_17 && b5_70 && b6_35 && b7_45 && b8_47 && b9_9 && b10_48 && b11_38 && b12_5 && b13_38) {
matched = true;
pattern_id = 1041;
}
if(b0_12 && b1_56 && b2_3 && b3_17 && b4_44 && b5_8 && b6_35 && b7_69 && b8_5 && b9_40 && b10_46 && b11_65 && b12_5 && b13_47 && b14_5) {
matched = true;
pattern_id = 1042;
}
if(b0_16 && b1_73 && b2_40 && b3_65) {
matched = true;
pattern_id = 1043;
}
if(b0_35 && b1_16 && b2_50 && b3_40 && b4_46 && b5_20 && b6_20 && b7_14 && b8_58 && b9_42 && b10_5 && b11_30) {
matched = true;
pattern_id = 1044;
}
if(b0_35 && b1_16 && b2_50 && b3_40 && b4_46 && b5_26 && b6_18 && b7_35 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 1045;
}
if(b0_35 && b1_11 && b2_43 && b3_20 && b4_6 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 1046;
}
if(b0_40 && b1_10 && b2_22 && b3_39) {
matched = true;
pattern_id = 1047;
}
if(b0_14 && b1_15 && b2_27 && b3_28) {
matched = true;
pattern_id = 1048;
}
if(b0_6 && b1_46 && b2_31 && b3_3 && b4_58) {
matched = true;
pattern_id = 1049;
}
if(b0_35 && b1_7 && b2_43 && b3_20 && b4_12 && b5_25 && b6_20 && b7_14 && b8_15 && b9_27 && b10_7 && b11_34 && b12_12 && b13_5 && b14_42 && b15_3) {
matched = true;
pattern_id = 1050;
}
if(b0_35 && b1_3 && b2_16 && b3_18 && b4_14 && b5_8 && b6_35 && b7_47 && b8_35 && b9_9 && b10_22 && b11_3 && b12_18 && b13_60 && b14_20 && b15_31 && b16_29 && b17_38 && b18_4 && b19_39 && b20_2) {
matched = true;
pattern_id = 1051;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_27 && b10_7 && b11_26 && b12_38 && b13_22 && b14_49 && b15_33 && b16_23 && b17_25 && b18_10 && b19_12) {
matched = true;
pattern_id = 1052;
}
if(b0_35 && b1_2 && b2_42 && b3_53 && b4_35) {
matched = true;
pattern_id = 1053;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_24 && b12_10) {
matched = true;
pattern_id = 1054;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_16 && b11_17 && b12_10) {
matched = true;
pattern_id = 1055;
}
if(b0_28 && b1_52 && b2_3 && b3_18 && b4_12 && b5_11 && b6_10 && b7_32 && b8_6) {
matched = true;
pattern_id = 1056;
}
if(b0_35 && b1_69 && b2_62 && b3_15 && b4_14 && b5_57 && b6_37 && b7_8 && b8_5 && b9_43 && b10_49 && b11_33 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1057;
}
if(b0_35 && b1_21 && b2_20 && b3_43 && b4_46 && b5_52) {
matched = true;
pattern_id = 1058;
}
if(b0_6 && b1_28 && b2_45 && b3_5) {
matched = true;
pattern_id = 1059;
}
if(b0_46 && b1_28 && b2_44 && b3_30) {
matched = true;
pattern_id = 1060;
}
if(b0_6 && b1_46 && b2_31) {
matched = true;
pattern_id = 1061;
}
if(b0_59 && b1_13 && b2_59 && b3_20 && b4_12 && b5_47 && b6_56 && b7_8 && b8_11 && b9_10 && b10_17) {
matched = true;
pattern_id = 1062;
}
if(b0_59 && b1_13 && b2_59 && b3_20 && b4_12 && b5_47 && b6_34 && b7_10 && b8_34 && b9_5 && b10_13 && b11_3 && b12_24 && b13_5 && b14_57) {
matched = true;
pattern_id = 1063;
}
if(b0_42 && b1_15) {
matched = true;
pattern_id = 1064;
}
if(b0_27 && b1_36 && b2_31 && b3_6 && b4_22 && b5_17 && b6_12 && b7_9 && b8_8 && b9_6 && b10_58 && b11_46 && b12_3 && b13_1 && b14_4 && b15_27 && b16_32 && b17_19 && b18_3 && b19_49 && b20_8 && b21_45 && b22_45 && b23_16 && b24_21 && b25_33 && b26_30 && b27_19 && b28_21 && b29_29 && b30_22) {
matched = true;
pattern_id = 1065;
}
if(b0_4 && b1_1 && b2_1 && b3_1 && b4_1 && b5_1 && b6_32 && b7_3) {
matched = true;
pattern_id = 1066;
}
if(b0_39 && b1_19 && b2_44 && b3_14) {
matched = true;
pattern_id = 1067;
}
if(b0_9 && b1_9 && b2_56 && b3_14) {
matched = true;
pattern_id = 1068;
}
if(b0_35 && b1_32 && b2_50 && b3_26 && b4_2 && b5_26 && b6_56 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1069;
}
if(b0_35 && b1_2 && b2_24 && b3_45 && b4_18 && b5_40 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 1070;
}
if(b0_35 && b1_32 && b2_14 && b3_20 && b4_18 && b5_25 && b6_8 && b7_9 && b8_14 && b9_14 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1071;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_37 && b6_21 && b7_14 && b8_47 && b9_41 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1072;
}
if(b0_35 && b1_11 && b2_43 && b3_24 && b4_12 && b5_20 && b6_34 && b7_31 && b8_8 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1073;
}
if(b0_35 && b1_3 && b2_41 && b3_15 && b4_6 && b5_37 && b6_35 && b7_39 && b8_42 && b9_12 && b10_17 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 1074;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_27 && b6_24 && b7_46 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1075;
}
if(b0_35 && b1_52 && b2_6 && b3_26 && b4_17 && b5_42 && b6_24 && b7_10 && b8_42 && b9_14 && b10_43 && b11_54 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1076;
}
if(b0_32 && b1_13 && b2_15 && b3_50) {
matched = true;
pattern_id = 1077;
}
if(b0_14 && b1_15 && b2_13 && b3_28) {
matched = true;
pattern_id = 1078;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_30 && b9_4 && b10_67) {
matched = true;
pattern_id = 1079;
}
if(b0_67 && b1_36 && b2_36 && b3_26 && b4_6 && b5_11 && b6_20 && b7_1 && b8_5 && b9_14 && b10_4 && b11_6 && b12_20 && b13_25 && b14_3 && b15_33 && b16_54 && b17_27 && b18_22 && b19_34 && b20_27 && b21_2 && b22_41 && b23_34) {
matched = true;
pattern_id = 1080;
}
if(b0_54 && b1_16 && b2_23 && b3_6 && b4_17 && b5_4) {
matched = true;
pattern_id = 1081;
}
if(b0_23 && b1_16 && b2_25 && b3_11 && b4_32 && b5_44 && b6_64 && b7_1 && b8_27 && b9_24 && b10_1 && b11_17 && b12_29 && b13_26 && b14_3 && b15_21 && b16_5 && b17_18 && b18_11 && b19_22 && b20_41 && b21_38 && b22_1 && b23_23 && b24_38 && b25_6 && b26_8 && b27_3 && b28_4 && b29_37 && b30_3 && b31_35 && b32_1 && b33_16 && b34_23 && b35_5 && b36_20 && b37_25 && b38_28 && b39_12 && b40_24 && b41_21 && b42_14 && b43_2 && b44_20 && b45_7 && b46_16 && b47_14) {
matched = true;
pattern_id = 1082;
}
if(b0_67 && b1_36 && b2_50 && b3_20 && b4_44 && b5_42 && b6_3 && b7_32 && b8_14 && b9_34 && b10_1 && b11_3 && b12_20 && b13_4 && b14_21 && b15_31 && b16_15 && b17_7 && b18_35 && b19_6 && b20_8 && b21_27 && b22_20 && b23_38 && b24_22 && b25_23 && b26_35 && b27_17 && b28_8 && b29_29 && b30_13 && b31_23 && b32_25 && b33_18 && b34_31 && b35_27 && b36_22 && b37_1 && b38_25 && b39_11 && b40_25 && b41_16 && b42_10 && b43_1 && b44_21 && b45_3 && b46_13 && b47_1) {
matched = true;
pattern_id = 1083;
}
if(b0_67 && b1_36 && b2_50 && b3_20 && b4_44 && b5_42 && b6_3 && b7_32 && b8_14 && b9_34 && b10_1 && b11_3 && b12_20 && b13_4 && b14_21 && b15_31 && b16_15 && b17_7 && b18_35 && b19_6 && b20_8 && b21_25 && b22_45 && b23_31 && b24_32 && b25_13 && b26_34 && b27_1 && b28_38 && b29_37 && b30_19 && b31_28 && b32_20 && b33_8 && b34_32 && b35_2 && b36_12 && b37_27 && b38_20 && b39_19 && b40_26) {
matched = true;
pattern_id = 1084;
}
if(b0_11 && b1_32 && b2_8 && b3_14 && b4_2 && b5_6 && b6_10 && b7_52 && b8_5 && b9_14 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_22 && b16_5 && b17_49 && b18_11 && b19_31 && b20_28 && b21_3 && b22_50 && b23_19 && b24_21 && b25_24 && b26_8 && b27_23 && b28_31 && b29_29 && b30_20 && b31_22 && b32_25) {
matched = true;
pattern_id = 1085;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_19 && b12_10) {
matched = true;
pattern_id = 1086;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_25 && b12_10) {
matched = true;
pattern_id = 1087;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_45 && b9_4 && b10_5) {
matched = true;
pattern_id = 1088;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_28 && b6_5) {
matched = true;
pattern_id = 1089;
}
if(b0_14 && b1_25 && b2_1 && b3_14 && b4_4 && b5_44 && b6_5) {
matched = true;
pattern_id = 1090;
}
if(b0_14 && b1_17 && b2_1 && b3_14 && b4_4 && b5_9 && b6_5) {
matched = true;
pattern_id = 1091;
}
if(b0_14 && b1_18 && b2_10 && b3_28 && b4_22 && b5_16 && b6_24 && b7_9) {
matched = true;
pattern_id = 1092;
}
if(b0_14 && b1_15 && b2_46 && b3_28) {
matched = true;
pattern_id = 1093;
}
if(b0_35 && b1_8 && b2_52 && b3_11 && b4_17 && b5_3 && b6_20 && b7_14 && b8_49 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1094;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_14 && b5_6 && b6_24 && b7_7 && b8_57 && b9_50 && b10_9 && b11_49 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1095;
}
if(b0_35 && b1_3 && b2_21 && b3_8 && b4_12 && b5_8 && b6_54 && b7_35 && b8_12 && b9_12 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1096;
}
if(b0_49 && b1_57 && b2_5 && b3_63 && b4_40) {
matched = true;
pattern_id = 1097;
}
if(b0_35 && b1_14 && b2_25 && b3_24 && b4_7 && b5_10 && b6_39 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1098;
}
if(b0_35 && b1_46 && b2_8 && b3_34 && b4_61 && b5_11 && b6_24 && b7_30 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1099;
}
if(b0_35 && b1_27 && b2_34 && b3_22 && b4_66 && b5_6 && b6_21 && b7_44) {
matched = true;
pattern_id = 1100;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_26 && b5_62 && b6_24 && b7_47) {
matched = true;
pattern_id = 1101;
}
if(b0_35 && b1_26 && b2_50 && b3_11 && b4_17 && b5_3) {
matched = true;
pattern_id = 1102;
}
if(b0_35 && b1_58 && b2_6 && b3_56 && b4_16 && b5_6 && b6_18 && b7_31 && b8_8 && b9_17) {
matched = true;
pattern_id = 1103;
}
if(b0_32 && b1_11 && b2_8 && b3_50 && b4_26) {
matched = true;
pattern_id = 1104;
}
if(b0_32 && b1_13 && b2_24) {
matched = true;
pattern_id = 1105;
}
if(b0_32 && b1_3 && b2_19 && b3_11) {
matched = true;
pattern_id = 1106;
}
if(b0_35 && b1_58 && b2_14 && b3_49 && b4_21 && b5_26 && b6_23) {
matched = true;
pattern_id = 1107;
}
if(b0_35 && b1_11 && b2_15 && b3_15 && b4_7 && b5_40 && b6_35 && b7_45 && b8_11) {
matched = true;
pattern_id = 1108;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_38 && b6_32 && b7_15 && b8_5 && b9_45 && b10_17 && b11_20 && b12_54 && b13_15 && b14_2) {
matched = true;
pattern_id = 1109;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_38 && b6_32 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 1110;
}
if(b0_35 && b1_24 && b2_66 && b3_20 && b4_27 && b5_26 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 1111;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_7 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 1112;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_11 && b8_16 && b9_27 && b10_38 && b11_3 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1113;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1114;
}
if(b0_35 && b1_13 && b2_23 && b3_15 && b4_11 && b5_27 && b6_24 && b7_46 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1115;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_9 && b6_12 && b7_20 && b8_30 && b9_4 && b10_50) {
matched = true;
pattern_id = 1116;
}
if(b0_35 && b1_13 && b2_43 && b3_20 && b4_2 && b5_6 && b6_54 && b7_51 && b8_16 && b9_34 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1117;
}
if(b0_7 && b1_16 && b2_20 && b3_34 && b4_32 && b5_38 && b6_15 && b7_3) {
matched = true;
pattern_id = 1118;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_18 && b11_10 && b12_10) {
matched = true;
pattern_id = 1119;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35 && b5_28 && b6_2 && b7_33 && b8_10 && b9_1 && b10_33 && b11_20 && b12_51 && b13_36 && b14_28 && b15_25 && b16_29 && b17_49 && b18_9 && b19_49 && b20_28 && b21_37 && b22_40 && b23_18 && b24_9 && b25_15 && b26_18 && b27_8 && b28_8 && b29_25 && b30_19 && b31_36 && b32_20 && b33_29 && b34_33 && b35_24 && b36_9 && b37_10 && b38_5 && b39_20 && b40_3 && b41_22 && b42_15 && b43_20 && b44_22 && b45_4 && b46_8 && b47_8 && b48_3) {
matched = true;
pattern_id = 1120;
}
if(b0_24 && b1_28 && b2_5 && b3_9 && b4_8 && b5_61 && b6_12 && b7_44 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_7 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_39 && b25_36 && b26_27 && b27_19 && b28_6 && b29_20 && b30_31 && b31_4) {
matched = true;
pattern_id = 1121;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_1 && b12_6 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 1122;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_10 && b8_47 && b9_42 && b10_1 && b11_40 && b12_38 && b13_21 && b14_17 && b15_38 && b16_23 && b17_10 && b18_9 && b19_9 && b20_9 && b21_47 && b22_17 && b23_7 && b24_2) {
matched = true;
pattern_id = 1123;
}
if(b0_52 && b1_52 && b2_25 && b3_20 && b4_3 && b5_11 && b6_18 && b7_10 && b8_3 && b9_10 && b10_6 && b11_6 && b12_6 && b13_41 && b14_21 && b15_41 && b16_18) {
matched = true;
pattern_id = 1124;
}
if(b0_39 && b1_57 && b2_9 && b3_12 && b4_52 && b5_67) {
matched = true;
pattern_id = 1125;
}
if(b0_39 && b1_19 && b2_11 && b3_12) {
matched = true;
pattern_id = 1126;
}
if(b0_49 && b1_20 && b2_11) {
matched = true;
pattern_id = 1127;
}
if(b0_6 && b1_9 && b2_9 && b3_5) {
matched = true;
pattern_id = 1128;
}
if(b0_35 && b1_2 && b2_24 && b3_48 && b4_50 && b5_27 && b6_2 && b7_47 && b8_34) {
matched = true;
pattern_id = 1129;
}
if(b0_35 && b1_11 && b2_15 && b3_15 && b4_7 && b5_51 && b6_48 && b7_46 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1130;
}
if(b0_57 && b1_55 && b2_43 && b3_40 && b4_14 && b5_10 && b6_39 && b7_45 && b8_35 && b9_20 && b10_49 && b11_6 && b12_36 && b13_27 && b14_28 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 1131;
}
if(b0_9 && b1_43 && b2_31 && b3_25) {
matched = true;
pattern_id = 1132;
}
if(b0_53 && b1_21 && b2_16 && b3_20 && b4_44 && b5_26 && b6_3 && b7_55 && b8_35 && b9_13 && b10_68 && b11_37 && b12_3 && b13_19 && b14_21 && b15_21 && b16_2) {
matched = true;
pattern_id = 1133;
}
if(b0_14 && b1_18 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_22 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_13 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 1134;
}
if(b0_35 && b1_21 && b2_18 && b3_6 && b4_3 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1135;
}
if(b0_35 && b1_52 && b2_17 && b3_18 && b4_17 && b5_55 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 1136;
}
if(b0_35 && b1_50 && b2_8 && b3_15 && b4_27 && b5_26 && b6_20 && b7_14 && b8_58 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1137;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_7 && b5_8 && b6_3 && b7_9 && b8_5 && b9_17 && b10_13 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_16 && b19_22 && b20_28 && b21_29 && b22_17 && b23_26 && b24_28 && b25_1 && b26_32 && b27_16 && b28_24 && b29_35 && b30_24) {
matched = true;
pattern_id = 1138;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_7 && b5_8 && b6_3 && b7_9 && b8_5 && b9_17 && b10_13 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28) {
matched = true;
pattern_id = 1139;
}
if(b0_35 && b1_3 && b2_21 && b3_56 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_20 && b10_28 && b11_49 && b12_36 && b13_4 && b14_17 && b15_40 && b16_5 && b17_37 && b18_4 && b19_44 && b20_24 && b21_10 && b22_40) {
matched = true;
pattern_id = 1140;
}
if(b0_35 && b1_47 && b2_14 && b3_59 && b4_6 && b5_11 && b6_20 && b7_30 && b8_6 && b9_10 && b10_13 && b11_35 && b12_20 && b13_5 && b14_38 && b15_3 && b16_24 && b17_54 && b18_4 && b19_44 && b20_32 && b21_15 && b22_28) {
matched = true;
pattern_id = 1141;
}
if(b0_35 && b1_16 && b2_25 && b3_16 && b4_27 && b5_26 && b6_11 && b7_10 && b8_8 && b9_42 && b10_28 && b11_5 && b12_32) {
matched = true;
pattern_id = 1142;
}
if(b0_35 && b1_13 && b2_15 && b3_15 && b4_22 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_48 && b11_26 && b12_39 && b13_18) {
matched = true;
pattern_id = 1143;
}
if(b0_35 && b1_13 && b2_15 && b3_15 && b4_22 && b5_54 && b6_3 && b7_31 && b8_8 && b9_40 && b10_46 && b11_46 && b12_39 && b13_21 && b14_24 && b15_41 && b16_32 && b17_10 && b18_29 && b19_2) {
matched = true;
pattern_id = 1144;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_51 && b6_56 && b7_14 && b8_8 && b9_55 && b10_11 && b11_57 && b12_38 && b13_22 && b14_24) {
matched = true;
pattern_id = 1145;
}
if(b0_35 && b1_65 && b2_60 && b3_18 && b4_15 && b5_42 && b6_18 && b7_54) {
matched = true;
pattern_id = 1146;
}
if(b0_35 && b1_13 && b2_47 && b3_43 && b4_12 && b5_21 && b6_24 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1147;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_50 && b5_42 && b6_21 && b7_14 && b8_55 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1148;
}
if(b0_35 && b1_62 && b2_6 && b3_51 && b4_36 && b5_43 && b6_21 && b7_18 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1149;
}
if(b0_35 && b1_8 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_7 && b8_48 && b9_49 && b10_12 && b11_47 && b12_12 && b13_6 && b14_37 && b15_5 && b16_13) {
matched = true;
pattern_id = 1150;
}
if(b0_35 && b1_6 && b2_62 && b3_20 && b4_51 && b5_11 && b6_23 && b7_7 && b8_35 && b9_27 && b10_13 && b11_4 && b12_16 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1151;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_23 && b7_9 && b8_5 && b9_28 && b10_5 && b11_30 && b12_17 && b13_38 && b14_17 && b15_32 && b16_11 && b17_21 && b18_4 && b19_35 && b20_32 && b21_29 && b22_34 && b23_34 && b24_27 && b25_28 && b26_24) {
matched = true;
pattern_id = 1152;
}
if(b0_35 && b1_6 && b2_25 && b3_18 && b4_6 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1153;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_44 && b5_7 && b6_11 && b7_39 && b8_34 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1154;
}
if(b0_23 && b1_8 && b2_23 && b3_7 && b4_24 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 1155;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_59 && b5_47 && b6_14 && b7_11 && b8_40 && b9_56 && b10_11 && b11_40 && b12_17 && b13_38 && b14_55 && b15_32) {
matched = true;
pattern_id = 1156;
}
if(b0_35 && b1_21 && b2_14 && b3_18 && b4_7 && b5_8 && b6_3 && b7_9 && b8_5 && b9_17 && b10_13 && b11_13 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_28 && b18_52 && b19_32 && b20_3 && b21_26 && b22_31 && b23_25 && b24_38 && b25_24 && b26_33 && b27_18 && b28_23 && b29_23 && b30_27 && b31_28 && b32_31) {
matched = true;
pattern_id = 1157;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_14 && b24_2 && b25_12 && b26_12 && b27_2 && b28_7 && b29_12 && b30_5 && b31_16 && b32_6 && b33_8 && b34_25 && b35_15 && b36_6 && b37_7 && b38_13 && b39_5 && b40_10 && b41_23 && b42_4 && b43_21 && b44_2 && b45_3 && b46_3 && b47_4 && b48_3) {
matched = true;
pattern_id = 1158;
}
if(b0_35 && b1_2 && b2_21 && b3_43 && b4_44 && b5_29 && b6_55 && b7_32 && b8_5) {
matched = true;
pattern_id = 1159;
}
if(b0_14 && b1_17 && b2_10 && b3_28 && b4_13 && b5_16 && b6_11 && b7_5 && b8_14 && b9_14 && b10_4 && b11_3 && b12_3 && b13_38 && b14_3 && b15_5 && b16_3 && b17_27 && b18_9 && b19_31 && b20_25 && b21_21 && b22_28) {
matched = true;
pattern_id = 1160;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_14 && b10_28 && b11_27 && b12_16 && b13_37 && b14_17 && b15_31 && b16_50 && b17_23 && b18_11 && b19_40 && b20_3 && b21_20 && b22_27 && b23_16 && b24_37) {
matched = true;
pattern_id = 1161;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_28 && b6_12 && b7_40 && b8_20 && b9_13 && b10_33 && b11_39 && b12_6 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 1162;
}
if(b0_14 && b1_15 && b2_26 && b3_28) {
matched = true;
pattern_id = 1163;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_71) {
matched = true;
pattern_id = 1164;
}
if(b0_35 && b1_7 && b2_45 && b3_67 && b4_18 && b5_16 && b6_20 && b7_9 && b8_14 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1165;
}
if(b0_35 && b1_2 && b2_24 && b3_11 && b4_17 && b5_42 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 1166;
}
if(b0_35 && b1_11 && b2_43 && b3_8 && b4_19 && b5_17 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 1167;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_11 && b5_16 && b6_7 && b7_53 && b8_27 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1168;
}
if(b0_35 && b1_11 && b2_52 && b3_18 && b4_22 && b5_10 && b6_38 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 1169;
}
if(b0_35 && b1_35 && b2_62 && b3_24 && b4_6 && b5_16 && b6_34 && b7_11 && b8_36 && b9_48 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1170;
}
if(b0_35 && b1_58 && b2_21 && b3_11 && b4_31 && b5_26 && b6_56 && b7_10 && b8_61 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1171;
}
if(b0_35 && b1_58 && b2_20 && b3_2 && b4_3 && b5_25 && b6_3 && b7_31 && b8_47 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1172;
}
if(b0_35 && b1_3 && b2_41 && b3_15 && b4_6 && b5_37 && b6_8 && b7_32 && b8_35 && b9_49 && b10_6 && b11_27 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1173;
}
if(b0_35 && b1_3 && b2_52 && b3_11 && b4_17 && b5_17 && b6_11 && b7_2 && b8_11 && b9_11 && b10_38 && b11_59 && b12_26 && b13_4 && b14_12 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 1174;
}
if(b0_35 && b1_3 && b2_2 && b3_26 && b4_16 && b5_27 && b6_35 && b7_45 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1175;
}
if(b0_35 && b1_3 && b2_2 && b3_48 && b4_44 && b5_11 && b6_10 && b7_29 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1176;
}
if(b0_35 && b1_3 && b2_2 && b3_34 && b4_18 && b5_20 && b6_2 && b7_32 && b8_58 && b9_49) {
matched = true;
pattern_id = 1177;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_26 && b6_7 && b7_10 && b8_9 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1178;
}
if(b0_35 && b1_40 && b2_20 && b3_34 && b4_26 && b5_51 && b6_38 && b7_11) {
matched = true;
pattern_id = 1179;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_16 && b5_10 && b6_36 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 1180;
}
if(b0_35 && b1_62 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 1181;
}
if(b0_35 && b1_62 && b2_62 && b3_11 && b4_2 && b5_42 && b6_24 && b7_10 && b8_8 && b9_53 && b10_17 && b11_23 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1182;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_60 && b7_14 && b8_34 && b9_49 && b10_6 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 1183;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_3 && b6_35 && b7_54 && b8_5 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1184;
}
if(b0_35 && b1_35 && b2_43 && b3_15 && b4_22 && b5_55 && b6_35 && b7_10 && b8_49 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1185;
}
if(b0_35 && b1_50 && b2_8 && b3_67 && b4_18 && b5_20 && b6_8 && b7_46 && b8_5 && b9_14 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1186;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_27 && b6_8 && b7_11 && b8_34 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1187;
}
if(b0_35 && b1_13 && b2_23 && b3_15 && b4_3 && b5_42 && b6_18 && b7_31 && b8_11 && b9_34 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1188;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_16 && b6_36 && b7_10 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1189;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_7 && b5_11 && b6_24 && b7_7 && b8_49 && b9_40 && b10_48 && b11_47 && b12_36 && b13_27) {
matched = true;
pattern_id = 1190;
}
if(b0_35 && b1_52 && b2_14 && b3_34 && b4_7 && b5_25 && b6_7 && b7_7 && b8_35 && b9_28 && b10_28 && b11_37 && b12_25 && b13_40 && b14_38 && b15_40 && b16_24) {
matched = true;
pattern_id = 1191;
}
if(b0_35 && b1_59 && b2_8 && b3_35 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1192;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_46 && b5_6 && b6_59 && b7_47 && b8_34 && b9_6 && b10_26 && b11_40 && b12_16 && b13_30 && b14_20 && b15_41 && b16_18 && b17_29 && b18_9 && b19_44 && b20_25 && b21_38 && b22_27) {
matched = true;
pattern_id = 1193;
}
if(b0_35 && b1_11 && b2_8 && b3_64 && b4_12 && b5_21 && b6_24 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 1194;
}
if(b0_35 && b1_13 && b2_8 && b3_7 && b4_3 && b5_11 && b6_18 && b7_11 && b8_48 && b9_17 && b10_38 && b11_37) {
matched = true;
pattern_id = 1195;
}
if(b0_35 && b1_62 && b2_20 && b3_59 && b4_27 && b5_25 && b6_8 && b7_15 && b8_41 && b9_12 && b10_26) {
matched = true;
pattern_id = 1196;
}
if(b0_13 && b1_21 && b2_42 && b3_29 && b4_27 && b5_20 && b6_36 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1197;
}
if(b0_23 && b1_8 && b2_23 && b3_7 && b4_24 && b5_37 && b6_34 && b7_10 && b8_35 && b9_27 && b10_26 && b11_30 && b12_16 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1198;
}
if(b0_21 && b1_47 && b2_59 && b3_21 && b4_12 && b5_42 && b6_8 && b7_11 && b8_34 && b9_9 && b10_46 && b11_37 && b12_7 && b13_6 && b14_21 && b15_31 && b16_44 && b17_47 && b18_15 && b19_40 && b20_30 && b21_49 && b22_28 && b23_34 && b24_27 && b25_28 && b26_24) {
matched = true;
pattern_id = 1199;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_42 && b6_3 && b7_47 && b8_11 && b9_17 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1200;
}
if(b0_35 && b1_16 && b2_25 && b3_16 && b4_27 && b5_26 && b6_11 && b7_10 && b8_8 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1201;
}
if(b0_35 && b1_7 && b2_20 && b3_43 && b4_6 && b5_6 && b6_55 && b7_9 && b8_21 && b9_49 && b10_49 && b11_40 && b12_5 && b13_4 && b14_34 && b15_18 && b16_8 && b17_26) {
matched = true;
pattern_id = 1202;
}
if(b0_35 && b1_9 && b2_36 && b3_64 && b4_44 && b5_3 && b6_35 && b7_9 && b8_11 && b9_17 && b10_28 && b11_40 && b12_38 && b13_36 && b14_28 && b15_36 && b16_23 && b17_26 && b18_36) {
matched = true;
pattern_id = 1203;
}
if(b0_35 && b1_10 && b2_54 && b3_38 && b4_30 && b5_1 && b6_2 && b7_29 && b8_34 && b9_34) {
matched = true;
pattern_id = 1204;
}
if(b0_35 && b1_9 && b2_50 && b3_26 && b4_24 && b5_67 && b6_59 && b7_32 && b8_40 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1205;
}
if(b0_35 && b1_52 && b2_50 && b3_26 && b4_24 && b5_8 && b6_39 && b7_54 && b8_5 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1206;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_66 && b5_6 && b6_21 && b7_21 && b8_40 && b9_40 && b10_28 && b11_40 && b12_5 && b13_40 && b14_17 && b15_37 && b16_29) {
matched = true;
pattern_id = 1207;
}
if(b0_35 && b1_7 && b2_20 && b3_43 && b4_2 && b5_10 && b6_20 && b7_10 && b8_64 && b9_5 && b10_49 && b11_35 && b12_28) {
matched = true;
pattern_id = 1208;
}
if(b0_35 && b1_16 && b2_25 && b3_21 && b4_27 && b5_8 && b6_7 && b7_32 && b8_35 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 1209;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_3 && b5_47 && b6_7 && b7_47 && b8_49 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 1210;
}
if(b0_35 && b1_11 && b2_17 && b3_34 && b4_18 && b5_16 && b6_20 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 1211;
}
if(b0_35 && b1_58 && b2_41 && b3_15 && b4_14 && b5_47 && b6_35 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 1212;
}
if(b0_35 && b1_50 && b2_41 && b3_40 && b4_19 && b5_16 && b6_2 && b7_10 && b8_55 && b9_5) {
matched = true;
pattern_id = 1213;
}
if(b0_35 && b1_74 && b2_8 && b3_10 && b4_12 && b5_42 && b6_9 && b7_14 && b8_14 && b9_55 && b10_26 && b11_3 && b12_12 && b13_5 && b14_42 && b15_3) {
matched = true;
pattern_id = 1214;
}
if(b0_35 && b1_41 && b2_25 && b3_48 && b4_3 && b5_6 && b6_56 && b7_7 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1215;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1216;
}
if(b0_35 && b1_73 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_16 && b8_41 && b9_14 && b10_26 && b11_35 && b12_4 && b13_14 && b14_30 && b15_36 && b16_5 && b17_36 && b18_19) {
matched = true;
pattern_id = 1217;
}
if(b0_35 && b1_27 && b2_14 && b3_20 && b4_12 && b5_51 && b6_11 && b7_14 && b8_8 && b9_41 && b10_60 && b11_37 && b12_16 && b13_38 && b14_24 && b15_41 && b16_18 && b17_38 && b18_32 && b19_41 && b20_34) {
matched = true;
pattern_id = 1218;
}
if(b0_35 && b1_13 && b2_16 && b3_26 && b4_16 && b5_27 && b6_35 && b7_45 && b8_15 && b9_34 && b10_6 && b11_49 && b12_38 && b13_22 && b14_34 && b15_33 && b16_2 && b17_34) {
matched = true;
pattern_id = 1219;
}
if(b0_40 && b1_28 && b2_39 && b3_63 && b4_64 && b5_9 && b6_1) {
matched = true;
pattern_id = 1220;
}
if(b0_14 && b1_15 && b2_13 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 1221;
}
if(b0_67 && b1_34 && b2_11 && b3_64) {
matched = true;
pattern_id = 1222;
}
if(b0_38 && b1_57 && b2_36 && b3_68) {
matched = true;
pattern_id = 1223;
}
if(b0_24 && b1_28 && b2_22 && b3_39 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1224;
}
if(b0_24 && b1_19 && b2_30 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1225;
}
if(b0_24 && b1_20 && b2_30 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1226;
}
if(b0_53 && b1_19 && b2_58 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1227;
}
if(b0_6 && b1_7 && b2_11 && b3_5 && b4_1 && b5_58 && b6_42 && b7_3 && b8_25 && b9_8 && b10_2) {
matched = true;
pattern_id = 1228;
}
if(b0_6 && b1_3 && b2_6 && b3_6 && b4_6 && b5_6 && b6_47 && b7_19 && b8_3 && b9_36 && b10_6 && b11_27 && b12_4 && b13_4 && b14_21 && b15_15 && b16_1 && b17_56 && b18_32 && b19_41 && b20_30 && b21_48 && b22_45 && b23_46 && b24_29 && b25_6 && b26_9 && b27_32 && b28_6) {
matched = true;
pattern_id = 1229;
}
if(b0_16 && b1_56 && b2_3 && b3_17 && b4_12 && b5_20 && b6_11 && b7_11 && b8_41 && b9_27 && b10_13 && b11_37 && b12_26 && b13_22 && b14_3 && b15_50 && b16_22 && b17_36 && b18_23 && b19_40 && b20_25 && b21_29 && b22_22 && b23_24 && b24_41 && b25_42 && b26_45) {
matched = true;
pattern_id = 1230;
}
if(b0_35 && b1_13 && b2_24 && b3_18 && b4_35 && b5_52 && b6_3 && b7_8 && b8_35 && b9_27 && b10_49 && b11_13 && b12_47 && b13_44 && b14_58 && b15_23 && b16_21 && b17_45 && b18_44 && b19_50 && b20_14 && b21_11 && b22_23) {
matched = true;
pattern_id = 1231;
}
if(b0_35 && b1_13 && b2_8 && b3_21 && b4_44 && b5_51 && b6_36 && b7_46 && b8_11) {
matched = true;
pattern_id = 1232;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_2 && b15_6 && b16_21 && b17_8) {
matched = true;
pattern_id = 1233;
}
if(b0_35 && b1_73 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_19 && b8_34 && b9_27 && b10_11 && b11_5 && b12_5 && b13_16 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1234;
}
if(b0_35 && b1_10 && b2_14 && b3_8 && b4_22 && b5_6 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 1235;
}
if(b0_35 && b1_9 && b2_25 && b3_8 && b4_50 && b5_52 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 1236;
}
if(b0_35 && b1_70 && b2_24 && b3_6 && b4_51 && b5_11 && b6_20 && b7_20 && b8_12 && b9_11 && b10_43 && b11_40 && b12_38 && b13_36 && b14_28 && b15_32 && b16_32 && b17_34 && b18_37 && b19_2) {
matched = true;
pattern_id = 1237;
}
if(b0_35 && b1_27 && b2_43 && b3_8 && b4_18 && b5_54 && b6_8 && b7_7 && b8_5 && b9_39 && b10_9 && b11_27 && b12_18 && b13_38 && b14_24 && b15_30 && b16_22 && b17_36 && b18_18 && b19_2 && b20_48 && b21_42) {
matched = true;
pattern_id = 1238;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_12 && b5_8 && b6_11 && b7_15 && b8_11 && b9_11 && b10_43 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 1239;
}
if(b0_35 && b1_40 && b2_23 && b3_15 && b4_12 && b5_20 && b6_34 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1240;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_32 && b8_14 && b9_28 && b10_35 && b11_3 && b12_3 && b13_38 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1241;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_10 && b8_47 && b9_49 && b10_13 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 1242;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_10 && b8_16 && b9_50 && b10_17 && b11_34 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1243;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_2 && b8_5 && b9_34 && b10_5 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 1244;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_54 && b8_11 && b9_17 && b10_17 && b11_27 && b12_16 && b13_5 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1245;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_54 && b8_14 && b9_12 && b10_6 && b11_4 && b12_4 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1246;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_47 && b8_42 && b9_9 && b10_11 && b11_61 && b12_26 && b13_4 && b14_51 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 1247;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_47 && b8_8 && b9_5 && b10_56 && b11_37 && b12_5 && b13_60 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1248;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_7 && b8_5 && b9_10 && b10_13 && b11_37 && b12_3 && b13_53 && b14_5 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 1249;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_7 && b8_35 && b9_27 && b10_13 && b11_5 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1250;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_5 && b9_28 && b10_5 && b11_30 && b12_17 && b13_38 && b14_17 && b15_32 && b16_37 && b17_25 && b18_10 && b19_41 && b20_25 && b21_18 && b22_40 && b23_3 && b24_27) {
matched = true;
pattern_id = 1251;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_5 && b9_28 && b10_5 && b11_30 && b12_17 && b13_38 && b14_17 && b15_32 && b16_32 && b17_34 && b18_37 && b19_2) {
matched = true;
pattern_id = 1252;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_40 && b9_34 && b10_46 && b11_26 && b12_38 && b13_16 && b14_38 && b15_48 && b16_22 && b17_29 && b18_40 && b19_44 && b20_34 && b21_7 && b22_40) {
matched = true;
pattern_id = 1253;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_54 && b7_9 && b8_40 && b9_34 && b10_46 && b11_27 && b12_5 && b13_60 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1254;
}
if(b0_35 && b1_47 && b2_20 && b3_6 && b4_6 && b5_7 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 1255;
}
if(b0_35 && b1_13 && b2_20 && b3_24 && b4_22 && b5_37 && b6_24 && b7_7 && b8_11 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1256;
}
if(b0_35 && b1_13 && b2_20 && b3_50 && b4_50 && b5_52 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 1257;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_26 && b6_2 && b7_11 && b8_7 && b9_17 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1258;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_6 && b5_54 && b6_3 && b7_51 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1259;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_50 && b5_52 && b6_23) {
matched = true;
pattern_id = 1260;
}
if(b0_21 && b1_8 && b2_48 && b3_11 && b4_53 && b5_42) {
matched = true;
pattern_id = 1261;
}
if(b0_67 && b1_36 && b2_16 && b3_27 && b4_2 && b5_4 && b6_24 && b7_10 && b8_8 && b9_53 && b10_17 && b11_23 && b12_10 && b13_11 && b14_10 && b15_7 && b16_1 && b17_46 && b18_32 && b19_21 && b20_41 && b21_27 && b22_20 && b23_44 && b24_9 && b25_15 && b26_18 && b27_8 && b28_8 && b29_26 && b30_27 && b31_21 && b32_36 && b33_11 && b34_31 && b35_5 && b36_11 && b37_28 && b38_29 && b39_12 && b40_2 && b41_21 && b42_16 && b43_22 && b44_14 && b45_11 && b46_14 && b47_15 && b48_7 && b49_7 && b50_12 && b51_7 && b52_8 && b53_9 && b54_2 && b55_10 && b56_7 && b57_2 && b58_7) {
matched = true;
pattern_id = 1262;
}
if(b0_16 && b1_16 && b2_12 && b3_7 && b4_24 && b5_6 && b6_55 && b7_9) {
matched = true;
pattern_id = 1263;
}
if(b0_35 && b1_40 && b2_20 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 1264;
}
if(b0_35 && b1_40 && b2_20 && b3_46 && b4_31 && b5_6 && b6_21 && b7_15 && b8_47 && b9_34 && b10_49) {
matched = true;
pattern_id = 1265;
}
if(b0_35 && b1_69 && b2_62 && b3_15 && b4_14 && b5_57 && b6_24 && b7_9 && b8_14 && b9_14 && b10_17 && b11_57 && b12_18 && b13_53 && b14_24) {
matched = true;
pattern_id = 1266;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_7 && b5_26 && b6_7 && b7_31 && b8_8 && b9_17 && b10_50 && b11_57 && b12_17 && b13_16 && b14_36) {
matched = true;
pattern_id = 1267;
}
if(b0_35 && b1_9 && b2_15 && b3_6 && b4_7 && b5_41 && b6_35 && b7_7 && b8_40 && b9_34 && b10_28 && b11_33 && b12_47 && b13_4 && b14_21 && b15_18 && b16_40 && b17_4 && b18_9 && b19_41 && b20_10 && b21_14 && b22_22 && b23_35) {
matched = true;
pattern_id = 1268;
}
if(b0_35 && b1_52 && b2_12 && b3_21 && b4_62 && b5_20 && b6_8 && b7_39 && b8_14 && b9_42 && b10_17 && b11_48 && b12_5) {
matched = true;
pattern_id = 1269;
}
if(b0_35 && b1_47 && b2_8 && b3_34 && b4_22 && b5_40 && b6_46 && b7_54) {
matched = true;
pattern_id = 1270;
}
if(b0_35 && b1_2 && b2_62 && b3_8 && b4_15 && b5_6 && b6_55 && b7_9 && b8_11 && b9_17 && b10_28 && b11_40 && b12_38 && b13_36 && b14_28 && b15_48 && b16_24 && b17_49 && b18_20 && b19_9 && b20_43 && b21_18 && b22_40 && b23_3 && b24_27) {
matched = true;
pattern_id = 1271;
}
if(b0_30 && b1_3 && b2_17 && b3_35 && b4_17 && b5_16 && b6_38 && b7_2 && b8_35 && b9_9 && b10_29 && b11_46 && b12_39 && b13_21 && b14_24 && b15_41) {
matched = true;
pattern_id = 1272;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 1273;
}
if(b0_35 && b1_24 && b2_14 && b3_48 && b4_17 && b5_11 && b6_10 && b7_12 && b8_15 && b9_5 && b10_7 && b11_37 && b12_4 && b13_36 && b14_35 && b15_38 && b16_29 && b17_47 && b18_10 && b19_34 && b20_3 && b21_5 && b22_37 && b23_35 && b24_31 && b25_18) {
matched = true;
pattern_id = 1274;
}
if(b0_35 && b1_24 && b2_14 && b3_48 && b4_17 && b5_11 && b6_10 && b7_12 && b8_15 && b9_34 && b10_26 && b11_28 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1275;
}
if(b0_40 && b1_7 && b2_63 && b3_39) {
matched = true;
pattern_id = 1276;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1277;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_6 && b5_7 && b6_7 && b7_31 && b8_47 && b9_5 && b10_4 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 1278;
}
if(b0_35 && b1_13 && b2_43 && b3_20 && b4_6 && b5_20 && b6_7 && b7_8 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1279;
}
if(b0_35 && b1_2 && b2_41 && b3_35 && b4_24 && b5_6 && b6_18 && b7_35 && b8_5 && b9_14 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1280;
}
if(b0_35 && b1_58 && b2_25 && b3_49 && b4_27 && b5_20 && b6_7 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1281;
}
if(b0_35 && b1_6 && b2_23 && b3_26 && b4_3 && b5_26 && b6_20 && b7_31 && b8_35 && b9_49 && b10_6 && b11_27 && b12_16 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1282;
}
if(b0_35 && b1_21 && b2_50 && b3_40 && b4_15 && b5_11 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1283;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_35 && b5_11 && b6_34 && b7_39 && b8_11 && b9_11) {
matched = true;
pattern_id = 1284;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_2 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1285;
}
if(b0_35 && b1_13 && b2_43 && b3_40 && b4_60 && b5_11 && b6_38 && b7_10 && b8_2 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 1286;
}
if(b0_35 && b1_58 && b2_25 && b3_49 && b4_18 && b5_29 && b6_20 && b7_9 && b8_57 && b9_25 && b10_17 && b11_46 && b12_39 && b13_5 && b14_35 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 1287;
}
if(b0_35 && b1_8 && b2_50 && b3_8 && b4_27 && b5_10 && b6_55 && b7_7 && b8_57 && b9_48 && b10_6 && b11_23 && b12_7 && b13_40 && b14_36 && b15_44 && b16_16) {
matched = true;
pattern_id = 1288;
}
if(b0_35 && b1_50 && b2_50 && b3_17 && b4_7 && b5_12 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 1289;
}
if(b0_35 && b1_40 && b2_62 && b3_43 && b4_14 && b5_42 && b6_35 && b7_14 && b8_7 && b9_9 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1290;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_56 && b8_58 && b9_5 && b10_7 && b11_47 && b12_26 && b13_21 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1291;
}
if(b0_35 && b1_43 && b2_45 && b3_12 && b4_10 && b5_49 && b6_29 && b7_30 && b8_5 && b9_34 && b10_17 && b11_40 && b12_26 && b13_22 && b14_34 && b15_18 && b16_8 && b17_26) {
matched = true;
pattern_id = 1292;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_15 && b8_41 && b9_6 && b10_12 && b11_59) {
matched = true;
pattern_id = 1293;
}
if(b0_35 && b1_9 && b2_43 && b3_34 && b4_7 && b5_25 && b6_7 && b7_56 && b8_2 && b9_25 && b10_6 && b11_61 && b12_18 && b13_36 && b14_51 && b15_3 && b16_32 && b17_21 && b18_9 && b19_25 && b20_37) {
matched = true;
pattern_id = 1294;
}
if(b0_35 && b1_52 && b2_15 && b3_6 && b4_31 && b5_52 && b6_19 && b7_14 && b8_35 && b9_6 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1295;
}
if(b0_40 && b1_46 && b2_69 && b3_39) {
matched = true;
pattern_id = 1296;
}
if(b0_10 && b1_63 && b2_45 && b3_5) {
matched = true;
pattern_id = 1297;
}
if(b0_14 && b1_25 && b2_26 && b3_14 && b4_30 && b5_38 && b6_5 && b7_72 && b8_10 && b9_24 && b10_45 && b11_2 && b12_29 && b13_31 && b14_2) {
matched = true;
pattern_id = 1298;
}
if(b0_14 && b1_15 && b2_28 && b3_28) {
matched = true;
pattern_id = 1299;
}
if(b0_14 && b1_37 && b2_5 && b3_28 && b4_35) {
matched = true;
pattern_id = 1300;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_37 && b6_21 && b7_8 && b8_14 && b9_27 && b10_7 && b11_47 && b12_17 && b13_16 && b14_25 && b15_36 && b16_25 && b17_33 && b18_10) {
matched = true;
pattern_id = 1301;
}
if(b0_6 && b1_4 && b2_40 && b3_13) {
matched = true;
pattern_id = 1302;
}
if(b0_24 && b1_10 && b2_54 && b3_57) {
matched = true;
pattern_id = 1303;
}
if(b0_16 && b1_49 && b2_11 && b3_30) {
matched = true;
pattern_id = 1304;
}
if(b0_35 && b1_64 && b2_43 && b3_21 && b4_24 && b5_16 && b6_55 && b7_44) {
matched = true;
pattern_id = 1305;
}
if(b0_73 && b1_75) {
matched = true;
pattern_id = 1306;
}
if(b0_35 && b1_43 && b2_21 && b3_8 && b4_12 && b5_8 && b6_8 && b7_32 && b8_35 && b9_49 && b10_56 && b11_3 && b12_57 && b13_32 && b14_17 && b15_31 && b16_55 && b17_38 && b18_53 && b19_41 && b20_34) {
matched = true;
pattern_id = 1307;
}
if(b0_35 && b1_59 && b2_15 && b3_11 && b4_17 && b5_6 && b6_8 && b7_39 && b8_11 && b9_42 && b10_43 && b11_49 && b12_38 && b13_39) {
matched = true;
pattern_id = 1308;
}
if(b0_35 && b1_59 && b2_15 && b3_11 && b4_17 && b5_6 && b6_8 && b7_39 && b8_11 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1309;
}
if(b0_30 && b1_3 && b2_17 && b3_18 && b4_22 && b5_6 && b6_11 && b7_9 && b8_5 && b9_14 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1310;
}
if(b0_35 && b1_52 && b2_68 && b3_24 && b4_35 && b5_12 && b6_21 && b7_56 && b8_35 && b9_41 && b10_5 && b11_3 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 1311;
}
if(b0_35 && b1_3 && b2_41 && b3_15 && b4_6 && b5_42 && b6_8 && b7_46 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 1312;
}
if(b0_35 && b1_13 && b2_15 && b3_50 && b4_6 && b5_6 && b6_24 && b7_9 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1313;
}
if(b0_49 && b1_28 && b2_22 && b3_34 && b4_18 && b5_20 && b6_6 && b7_20 && b8_42 && b9_17 && b10_13 && b11_36 && b12_20 && b13_47 && b14_59 && b15_56 && b16_56 && b17_23 && b18_54) {
matched = true;
pattern_id = 1314;
}
if(b0_35 && b1_56 && b2_3 && b3_15 && b4_22 && b5_40 && b6_46 && b7_54) {
matched = true;
pattern_id = 1315;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_15 && b8_40 && b9_34) {
matched = true;
pattern_id = 1316;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1317;
}
if(b0_46 && b1_28 && b2_45 && b3_63 && b4_58 && b5_49 && b6_30 && b7_17) {
matched = true;
pattern_id = 1318;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_58 && b5_6 && b6_48 && b7_10 && b8_8 && b9_5 && b10_4 && b11_20 && b12_31 && b13_17 && b14_2 && b15_4 && b16_3 && b17_29 && b18_29 && b19_6 && b20_51 && b21_28 && b22_1 && b23_39 && b24_12 && b25_6 && b26_9 && b27_32 && b28_6) {
matched = true;
pattern_id = 1319;
}
if(b0_14 && b1_15 && b2_38 && b3_28) {
matched = true;
pattern_id = 1320;
}
if(b0_14 && b1_15 && b2_34 && b3_28) {
matched = true;
pattern_id = 1321;
}
if(b0_53 && b1_27 && b2_40 && b3_67) {
matched = true;
pattern_id = 1322;
}
if(b0_63) {
matched = true;
pattern_id = 1323;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 1324;
}
if(b0_32 && b1_16 && b2_43) {
matched = true;
pattern_id = 1325;
}
if(b0_32 && b1_16 && b2_6 && b3_50) {
matched = true;
pattern_id = 1326;
}
if(b0_32 && b1_16 && b2_3) {
matched = true;
pattern_id = 1327;
}
if(b0_32 && b1_16 && b2_50) {
matched = true;
pattern_id = 1328;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_2 && b5_17 && b6_24) {
matched = true;
pattern_id = 1329;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_50 && b5_29 && b6_55 && b7_31 && b8_16 && b9_5) {
matched = true;
pattern_id = 1330;
}
if(b0_11 && b1_14 && b2_25 && b3_40 && b4_60 && b5_47 && b6_10 && b7_14 && b8_12 && b9_43 && b10_11) {
matched = true;
pattern_id = 1331;
}
if(b0_68 && b1_14 && b2_43 && b3_27 && b4_12) {
matched = true;
pattern_id = 1332;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_24 && b5_6) {
matched = true;
pattern_id = 1333;
}
if(b0_30 && b1_3 && b2_17 && b3_16 && b4_17 && b5_10 && b6_39 && b7_47) {
matched = true;
pattern_id = 1334;
}
if(b0_20 && b1_35 && b2_12 && b3_20 && b4_44 && b5_29 && b6_46) {
matched = true;
pattern_id = 1335;
}
if(b0_33 && b1_2 && b2_18 && b3_11 && b4_6 && b5_7 && b6_35 && b7_7) {
matched = true;
pattern_id = 1336;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_24 && b5_44 && b6_10 && b7_31 && b8_49 && b9_42 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1337;
}
if(b0_32 && b1_3 && b2_6 && b3_49) {
matched = true;
pattern_id = 1338;
}
if(b0_32 && b1_59 && b2_6 && b3_49) {
matched = true;
pattern_id = 1339;
}
if(b0_12 && b1_13 && b2_50 && b3_24 && b4_27 && b5_51 && b6_8 && b7_9 && b8_11 && b9_6 && b10_12 && b11_13 && b12_16 && b13_21 && b14_24) {
matched = true;
pattern_id = 1340;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_32 && b5_38 && b6_15 && b7_3 && b8_15 && b9_20) {
matched = true;
pattern_id = 1341;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_32 && b5_38 && b6_15 && b7_3 && b8_15 && b9_20) {
matched = true;
pattern_id = 1342;
}
if(b0_20 && b1_6 && b2_8 && b3_50 && b4_32 && b5_38 && b6_15 && b7_3 && b8_15 && b9_20) {
matched = true;
pattern_id = 1343;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_45 && b6_1) {
matched = true;
pattern_id = 1344;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 1345;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_25 && b6_7 && b7_9 && b8_15 && b9_35 && b10_17 && b11_23 && b12_41 && b13_41 && b14_17 && b15_25 && b16_31 && b17_10 && b18_11 && b19_35 && b20_31 && b21_29 && b22_34) {
matched = true;
pattern_id = 1346;
}
if(b0_35 && b1_52 && b2_25 && b3_8 && b4_27 && b5_20 && b6_48 && b7_14 && b8_48 && b9_25 && b10_13 && b11_5) {
matched = true;
pattern_id = 1347;
}
if(b0_16 && b1_63 && b2_44 && b3_13) {
matched = true;
pattern_id = 1348;
}
if(b0_72 && b1_46 && b2_45 && b3_23) {
matched = true;
pattern_id = 1349;
}
if(b0_73 && b1_57) {
matched = true;
pattern_id = 1350;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_23 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 1351;
}
if(b0_35 && b1_52 && b2_20 && b3_7 && b4_17 && b5_51 && b6_7 && b7_15 && b8_13 && b9_9 && b10_5) {
matched = true;
pattern_id = 1352;
}
if(b0_42 && b1_51 && b2_10 && b3_22 && b4_8 && b5_35 && b6_40 && b7_33 && b8_39 && b9_18 && b10_41 && b11_10 && b12_58 && b13_55 && b14_13 && b15_29 && b16_51 && b17_19 && b18_55 && b19_15 && b20_5 && b21_13 && b22_47 && b23_43 && b24_14 && b25_43 && b26_12 && b27_38 && b28_11 && b29_38 && b30_34 && b31_3 && b32_12 && b33_30 && b34_27 && b35_7) {
matched = true;
pattern_id = 1353;
}
if(b0_73 && b1_9 && b2_40 && b3_9 && b4_40 && b5_19 && b6_13 && b7_36 && b8_28 && b9_37 && b10_36 && b11_18 && b12_59) {
matched = true;
pattern_id = 1354;
}
if(b0_73 && b1_9 && b2_22 && b3_12 && b4_10 && b5_71 && b6_6 && b7_50 && b8_29 && b9_22 && b10_69) {
matched = true;
pattern_id = 1355;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_25 && b10_5 && b11_64 && b12_55 && b13_61 && b14_20 && b15_38 && b16_2 && b17_4 && b18_22 && b19_22 && b20_34 && b21_36 && b22_4 && b23_26 && b24_3 && b25_44 && b26_35 && b27_3 && b28_21 && b29_35 && b30_35 && b31_37 && b32_31 && b33_2 && b34_22 && b35_18 && b36_23 && b37_29 && b38_27 && b39_15 && b40_20 && b41_16 && b42_10 && b43_23 && b44_23 && b45_8 && b46_10 && b47_18 && b48_8 && b49_8 && b50_13 && b51_6 && b52_9 && b53_10 && b54_6 && b55_11 && b56_8 && b57_6 && b58_8) {
matched = true;
pattern_id = 1356;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_25 && b10_5 && b11_64 && b12_39 && b13_60 && b14_12 && b15_38 && b16_2 && b17_4 && b18_22 && b19_22 && b20_34 && b21_36 && b22_4 && b23_28 && b24_3 && b25_3 && b26_19 && b27_10 && b28_1 && b29_30 && b30_36 && b31_29 && b32_36 && b33_31 && b34_16 && b35_32 && b36_24 && b37_30 && b38_22) {
matched = true;
pattern_id = 1357;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_48 && b10_4 && b11_46 && b12_7 && b13_5 && b14_39 && b15_30 && b16_3 && b17_57 && b18_28 && b19_41 && b20_25 && b21_5 && b22_27 && b23_35 && b24_32 && b25_20 && b26_19 && b27_33 && b28_21 && b29_30 && b30_22 && b31_36 && b32_23 && b33_22) {
matched = true;
pattern_id = 1358;
}
if(b0_67 && b1_54 && b2_3 && b3_11 && b4_3 && b5_12 && b6_7 && b7_29 && b8_3 && b9_7 && b10_6 && b11_34 && b12_37 && b13_41 && b14_17 && b15_7 && b16_14 && b17_24 && b18_3 && b19_26 && b20_1 && b21_4) {
matched = true;
pattern_id = 1359;
}
if(b0_3 && b1_28 && b2_40) {
matched = true;
pattern_id = 1360;
}
if(b0_56 && b1_28 && b2_5 && b3_39) {
matched = true;
pattern_id = 1361;
}
if(b0_26 && b1_73 && b2_40) {
matched = true;
pattern_id = 1362;
}
if(b0_46 && b1_28 && b2_44 && b3_30 && b4_52 && b5_67) {
matched = true;
pattern_id = 1363;
}
if(b0_51 && b1_20 && b2_32 && b3_42) {
matched = true;
pattern_id = 1364;
}
if(b0_53 && b1_53 && b2_32 && b3_13 && b4_23) {
matched = true;
pattern_id = 1365;
}
if(b0_39 && b1_20 && b2_11 && b3_68) {
matched = true;
pattern_id = 1366;
}
if(b0_53 && b1_20 && b2_64 && b3_30) {
matched = true;
pattern_id = 1367;
}
if(b0_55 && b1_44 && b2_42 && b3_26 && b4_14 && b5_57 && b6_39 && b7_47 && b8_39 && b9_40 && b10_26 && b11_23) {
matched = true;
pattern_id = 1368;
}
if(b0_35 && b1_52 && b2_50 && b3_15 && b4_7 && b5_6 && b6_23 && b7_8 && b8_5 && b9_43 && b10_49 && b11_44 && b12_52 && b13_27 && b14_18 && b15_3) {
matched = true;
pattern_id = 1369;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_50 && b5_25 && b6_7 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 1370;
}
if(b0_35 && b1_32 && b2_14 && b3_11 && b4_31 && b5_3 && b6_3 && b7_8 && b8_12 && b9_28 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 1371;
}
if(b0_35 && b1_21 && b2_21 && b3_15 && b4_6 && b5_40 && b6_7 && b7_39 && b8_12) {
matched = true;
pattern_id = 1372;
}
if(b0_35 && b1_3 && b2_6 && b3_7 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_48 && b10_43 && b11_49 && b12_38) {
matched = true;
pattern_id = 1373;
}
if(b0_35 && b1_16 && b2_25 && b3_18 && b4_12 && b5_42 && b6_46 && b7_31 && b8_2 && b9_9) {
matched = true;
pattern_id = 1374;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30) {
matched = true;
pattern_id = 1375;
}
if(b0_35 && b1_40 && b2_23 && b3_34 && b4_67 && b5_6 && b6_11 && b7_13 && b8_35 && b9_10 && b10_28 && b11_47 && b12_50 && b13_21 && b14_17 && b15_41 && b16_44 && b17_38 && b18_32 && b19_41 && b20_34 && b21_44) {
matched = true;
pattern_id = 1376;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47) {
matched = true;
pattern_id = 1377;
}
if(b0_35 && b1_40 && b2_23 && b3_34 && b4_8 && b5_10 && b6_18 && b7_47 && b8_14 && b9_9 && b10_17 && b11_57 && b12_17 && b13_16 && b14_36 && b15_37) {
matched = true;
pattern_id = 1378;
}
if(b0_35 && b1_14 && b2_25 && b3_26 && b4_16 && b5_6 && b6_10 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1379;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_5 && b22_19 && b23_35 && b24_8 && b25_1 && b26_30 && b27_22 && b28_30 && b29_3 && b30_17 && b31_21 && b32_37 && b33_22 && b34_34 && b35_23 && b36_13 && b37_16 && b38_28 && b39_10) {
matched = true;
pattern_id = 1380;
}
if(b0_51 && b1_8 && b2_16 && b3_26 && b4_6 && b5_16 && b6_3 && b7_45 && b8_10 && b9_57 && b10_33 && b11_20) {
matched = true;
pattern_id = 1381;
}
if(b0_70) {
matched = true;
pattern_id = 1382;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3) {
matched = true;
pattern_id = 1383;
}
if(b0_35 && b1_11 && b2_23 && b3_45 && b4_2 && b5_42 && b6_8 && b7_54 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_3 && b14_20 && b15_41 && b16_23 && b17_26 && b18_4 && b19_21 && b20_10 && b21_14 && b22_22 && b23_35 && b24_30) {
matched = true;
pattern_id = 1384;
}
if(b0_35 && b1_11 && b2_23 && b3_45 && b4_2 && b5_42 && b6_8 && b7_54 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_3 && b14_20 && b15_41 && b16_23 && b17_26 && b18_4 && b19_21) {
matched = true;
pattern_id = 1385;
}
if(b0_53 && b1_2 && b2_19 && b3_51 && b4_16 && b5_10 && b6_11 && b7_29 && b8_14 && b9_10) {
matched = true;
pattern_id = 1386;
}
if(b0_35 && b1_4 && b2_25 && b3_18 && b4_2 && b5_29 && b6_24 && b7_5 && b8_5 && b9_9 && b10_13) {
matched = true;
pattern_id = 1387;
}
if(b0_24 && b1_3 && b2_23 && b3_27 && b4_12 && b5_8 && b6_5 && b7_6 && b8_4 && b9_4 && b10_1 && b11_3 && b12_21 && b13_32 && b14_18 && b15_3) {
matched = true;
pattern_id = 1388;
}
if(b0_35 && b1_50 && b2_20 && b3_8 && b4_12 && b5_37 && b6_3 && b7_52 && b8_5 && b9_14 && b10_56 && b11_37 && b12_5 && b13_60 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1389;
}
if(b0_16 && b1_56 && b2_3 && b3_17 && b4_44 && b5_8 && b6_35 && b7_69 && b8_42 && b9_10 && b10_26 && b11_6 && b12_3 && b13_26 && b14_33 && b15_24 && b16_15 && b17_2 && b18_50 && b19_35 && b20_30 && b21_27 && b22_39) {
matched = true;
pattern_id = 1390;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_18 && b17_18 && b18_15 && b19_28 && b20_34 && b21_29 && b22_18 && b23_49 && b24_20 && b25_36 && b26_45 && b27_39 && b28_29 && b29_16) {
matched = true;
pattern_id = 1391;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_32 && b19_41 && b20_28 && b21_29 && b22_34 && b23_49 && b24_1 && b25_33 && b26_24 && b27_40 && b28_34 && b29_34 && b30_20 && b31_27) {
matched = true;
pattern_id = 1392;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_46 && b21_27 && b22_19 && b23_36 && b24_42 && b25_27 && b26_25 && b27_21 && b28_39 && b29_19 && b30_17 && b31_37 && b32_31) {
matched = true;
pattern_id = 1393;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_5 && b16_5 && b17_18 && b18_4 && b19_46 && b20_3 && b21_15 && b22_18 && b23_49 && b24_40 && b25_22 && b26_45 && b27_39 && b28_21 && b29_35) {
matched = true;
pattern_id = 1394;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_46 && b24_3 && b25_18 && b26_3 && b27_41 && b28_40 && b29_30 && b30_12 && b31_32) {
matched = true;
pattern_id = 1395;
}
if(b0_22 && b1_55 && b2_8 && b3_21 && b4_51 && b5_27 && b6_24 && b7_56 && b8_8 && b9_5 && b10_5 && b11_47 && b12_17 && b13_38 && b14_48 && b15_31 && b16_18 && b17_37 && b18_18 && b19_40 && b20_48 && b21_29 && b22_39 && b23_50 && b24_42 && b25_24 && b26_36 && b27_31 && b28_37 && b29_25 && b30_19 && b31_36 && b32_20) {
matched = true;
pattern_id = 1396;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_43 && b14_28 && b15_22 && b16_29 && b17_26 && b18_44 && b19_41 && b20_28 && b21_14 && b22_3 && b23_19 && b24_24 && b25_30 && b26_35 && b27_3 && b28_1) {
matched = true;
pattern_id = 1397;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_5 && b17_35 && b18_9 && b19_38 && b20_10 && b21_5 && b22_19 && b23_38 && b24_17 && b25_45 && b26_25 && b27_27 && b28_1 && b29_37 && b30_18 && b31_23 && b32_24 && b33_32 && b34_22 && b35_18 && b36_23 && b37_29 && b38_28 && b39_12 && b40_17 && b41_24 && b42_11 && b43_17) {
matched = true;
pattern_id = 1398;
}
if(b0_49 && b1_43 && b2_30 && b3_30 && b4_59 && b5_72 && b6_42 && b7_73 && b8_52) {
matched = true;
pattern_id = 1399;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_5 && b17_35 && b18_9 && b19_38 && b20_10 && b21_38 && b22_34 && b23_32 && b24_21 && b25_30 && b26_46 && b27_4 && b28_35 && b29_19 && b30_18 && b31_38 && b32_38 && b33_17 && b34_31 && b35_33 && b36_25 && b37_31 && b38_1 && b39_14 && b40_27 && b41_19 && b42_10) {
matched = true;
pattern_id = 1400;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_36 && b16_5 && b17_26 && b18_9 && b19_9 && b20_17 && b21_31 && b22_14 && b23_38 && b24_4 && b25_33 && b26_40 && b27_27 && b28_25 && b29_19 && b30_17 && b31_27 && b32_28 && b33_32 && b34_22 && b35_18 && b36_19 && b37_16 && b38_16) {
matched = true;
pattern_id = 1401;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_33 && b19_35 && b20_30 && b21_36 && b22_19 && b23_46 && b24_42 && b25_27 && b26_25 && b27_21 && b28_31 && b29_27 && b30_37 && b31_14 && b32_34 && b33_25) {
matched = true;
pattern_id = 1402;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_16 && b13_22 && b14_20 && b15_48 && b16_40 && b17_37 && b18_36 && b19_44 && b20_17 && b21_29 && b22_41 && b23_19 && b24_24 && b25_30 && b26_25 && b27_33 && b28_37 && b29_22 && b30_16 && b31_2 && b32_39 && b33_11 && b34_2 && b35_34 && b36_10 && b37_26 && b38_19 && b39_19 && b40_26 && b41_25) {
matched = true;
pattern_id = 1403;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_38 && b18_23 && b19_12 && b20_17 && b21_29 && b22_41 && b23_19 && b24_24 && b25_30 && b26_25 && b27_33 && b28_37 && b29_37 && b30_15 && b31_14 && b32_40 && b33_33 && b34_2 && b35_33 && b36_13 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 1404;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_28 && b15_18 && b16_37 && b17_27 && b18_36 && b19_42 && b20_52 && b21_50 && b22_31 && b23_25 && b24_43 && b25_33 && b26_27) {
matched = true;
pattern_id = 1405;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_36 && b15_22 && b16_5 && b17_37 && b18_44 && b19_22 && b20_33 && b21_42 && b22_45 && b23_46 && b24_32 && b25_46 && b26_30 && b27_28 && b28_21 && b29_26 && b30_38) {
matched = true;
pattern_id = 1406;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_17 && b13_19 && b14_12 && b15_35 && b16_22 && b17_38 && b18_22 && b19_9 && b20_31 && b21_27 && b22_22 && b23_28 && b24_3 && b25_27 && b26_46 && b27_39 && b28_1 && b29_30 && b30_18 && b31_39 && b32_40 && b33_34 && b34_17 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14) {
matched = true;
pattern_id = 1407;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_47 && b12_4 && b13_27 && b14_47 && b15_35 && b16_29 && b17_18 && b18_44 && b19_42 && b20_27 && b21_34 && b22_50 && b23_34 && b24_1 && b25_33 && b26_30 && b27_19 && b28_18 && b29_22 && b30_39) {
matched = true;
pattern_id = 1408;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_32 && b19_41 && b20_28 && b21_29 && b22_34 && b23_49 && b24_1 && b25_33 && b26_24 && b27_36 && b28_13 && b29_39 && b30_19 && b31_40 && b32_20) {
matched = true;
pattern_id = 1409;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_34 && b19_22 && b20_2 && b21_48 && b22_43 && b23_46 && b24_3 && b25_18 && b26_39 && b27_33 && b28_31 && b29_37 && b30_24) {
matched = true;
pattern_id = 1410;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_38 && b13_22 && b14_5 && b15_25 && b16_5 && b17_49 && b18_9 && b19_22 && b20_24 && b21_36 && b22_19 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_35 && b30_13 && b31_32 && b32_25 && b33_33 && b34_35 && b35_22 && b36_12 && b37_30 && b38_19 && b39_19 && b40_16 && b41_15 && b42_11 && b43_17 && b44_24 && b45_16 && b46_17) {
matched = true;
pattern_id = 1411;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_2 && b21_2 && b22_22 && b23_6 && b24_1 && b25_33 && b26_46 && b27_37 && b28_31 && b29_25 && b30_35 && b31_27 && b32_41 && b33_21 && b34_21 && b35_2 && b36_12 && b37_26 && b38_1 && b39_21) {
matched = true;
pattern_id = 1412;
}
if(b0_7 && b1_57 && b2_54 && b3_67 && b4_59 && b5_58 && b6_65) {
matched = true;
pattern_id = 1413;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_38 && b13_22 && b14_5 && b15_25 && b16_5 && b17_49 && b18_9 && b19_22 && b20_24 && b21_36 && b22_19 && b23_34 && b24_4 && b25_4 && b26_27 && b27_19 && b28_24 && b29_16 && b30_36 && b31_29 && b32_28 && b33_25 && b34_24 && b35_34 && b36_26 && b37_5 && b38_17 && b39_22 && b40_20 && b41_16 && b42_1) {
matched = true;
pattern_id = 1414;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_56 && b8_47 && b9_27 && b10_13 && b11_46) {
matched = true;
pattern_id = 1415;
}
if(b0_10 && b1_73 && b2_30 && b3_5 && b4_28) {
matched = true;
pattern_id = 1416;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_54 && b17_29 && b18_41 && b19_22 && b20_41 && b21_31 && b22_28 && b23_31 && b24_22 && b25_24) {
matched = true;
pattern_id = 1417;
}
if(b0_35 && b1_13 && b2_24 && b3_7 && b4_19 && b5_16 && b6_55 && b7_7 && b8_15 && b9_48 && b10_4 && b11_46 && b12_7 && b13_5 && b14_39 && b15_30 && b16_3 && b17_57 && b18_28 && b19_41 && b20_25 && b21_5 && b22_27 && b23_35 && b24_32 && b25_20 && b26_30 && b27_36 && b28_23 && b29_25 && b30_19 && b31_21 && b32_20 && b33_12 && b34_36 && b35_18 && b36_12) {
matched = true;
pattern_id = 1418;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 1419;
}
if(b0_35 && b1_64 && b2_6 && b3_26 && b4_27 && b5_20 && b6_36 && b7_55 && b8_58 && b9_14 && b10_17 && b11_40 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1420;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_40 && b6_8 && b7_7 && b8_40) {
matched = true;
pattern_id = 1421;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_14 && b5_6 && b6_24 && b7_7 && b8_11 && b9_10 && b10_48 && b11_35 && b12_25) {
matched = true;
pattern_id = 1422;
}
if(b0_35 && b1_21 && b2_42 && b3_15 && b4_22 && b5_25 && b6_46 && b7_39 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 1423;
}
if(b0_35 && b1_13 && b2_12 && b3_50 && b4_24 && b5_11 && b6_35 && b7_54 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 1424;
}
if(b0_4 && b1_46) {
matched = true;
pattern_id = 1425;
}
if(b0_35 && b1_52 && b2_23 && b3_11 && b4_2 && b5_29 && b6_20 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 1426;
}
if(b0_14 && b1_25 && b2_33 && b3_28 && b4_10 && b5_63 && b6_44 && b7_3 && b8_1 && b9_3 && b10_1 && b11_1 && b12_29 && b13_1 && b14_30 && b15_24 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 1427;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_23 && b17_29 && b18_36 && b19_9 && b20_28 && b21_29 && b22_43 && b23_46 && b24_3 && b25_3 && b26_3 && b27_31 && b28_35 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1428;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_24 && b17_49 && b18_29 && b19_34 && b20_24 && b21_2 && b22_3 && b23_19 && b24_22 && b25_30 && b26_25 && b27_27 && b28_31 && b29_22 && b30_40 && b31_22 && b32_27 && b33_35 && b34_24) {
matched = true;
pattern_id = 1429;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_24 && b17_49 && b18_29 && b19_34 && b20_24 && b21_2 && b22_3 && b23_19 && b24_22 && b25_30 && b26_25 && b27_27 && b28_31 && b29_16 && b30_16 && b31_29 && b32_36 && b33_34) {
matched = true;
pattern_id = 1430;
}
if(b0_11 && b1_6 && b2_19 && b3_35 && b4_44 && b5_29 && b6_11 && b7_47 && b8_12 && b9_10 && b10_48 && b11_5 && b12_4 && b13_43 && b14_35 && b15_25 && b16_37 && b17_26 && b18_15 && b19_17) {
matched = true;
pattern_id = 1431;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_9 && b10_34 && b11_5 && b12_4 && b13_5 && b14_12 && b15_36 && b16_57 && b17_36 && b18_20 && b19_48 && b20_17 && b21_36) {
matched = true;
pattern_id = 1432;
}
if(b0_11 && b1_6 && b2_19 && b3_18 && b4_62 && b5_26 && b6_2 && b7_29 && b8_8 && b9_49 && b10_7 && b11_34 && b12_25 && b13_4 && b14_34 && b15_32 && b16_40 && b17_13 && b18_10 && b19_12 && b20_32 && b21_29 && b22_30 && b23_35 && b24_17 && b25_18 && b26_41 && b27_31 && b28_24 && b29_25 && b30_19) {
matched = true;
pattern_id = 1433;
}
if(b0_57 && b1_58 && b2_8 && b3_45 && b4_2 && b5_40 && b6_24 && b7_29 && b8_14 && b9_56 && b10_28 && b11_34 && b12_7 && b13_27 && b14_28 && b15_36 && b16_2 && b17_47 && b18_15 && b19_46 && b20_25 && b21_21 && b22_18 && b23_18 && b24_42 && b25_3 && b26_35 && b27_42 && b28_21) {
matched = true;
pattern_id = 1434;
}
if(b0_57 && b1_58 && b2_8 && b3_45 && b4_2 && b5_40 && b6_18 && b7_29 && b8_27 && b9_42 && b10_56 && b11_46 && b12_25 && b13_27 && b14_51 && b15_33 && b16_44 && b17_29 && b18_44 && b19_17 && b20_2 && b21_21 && b22_14) {
matched = true;
pattern_id = 1435;
}
if(b0_57 && b1_58 && b2_8 && b3_45 && b4_2 && b5_40 && b6_18 && b7_29 && b8_27 && b9_42 && b10_11 && b11_34 && b12_26 && b13_58 && b14_38 && b15_30 && b16_23 && b17_29 && b18_44 && b19_41 && b20_27 && b21_51 && b22_19) {
matched = true;
pattern_id = 1436;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_22 && b5_42 && b6_39 && b7_9 && b8_11 && b9_34 && b10_48 && b11_35 && b12_37 && b13_16 && b14_37 && b15_18 && b16_29 && b17_39 && b18_4 && b19_21 && b20_17 && b21_29 && b22_18 && b23_28 && b24_30 && b25_4 && b26_27) {
matched = true;
pattern_id = 1437;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_3 && b17_30 && b18_18 && b19_35 && b20_32 && b21_20 && b22_43 && b23_27 && b24_17 && b25_23 && b26_41 && b27_23 && b28_23) {
matched = true;
pattern_id = 1438;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_47 && b12_4 && b13_27 && b14_47 && b15_35 && b16_29 && b17_18 && b18_44 && b19_42 && b20_27 && b21_34 && b22_50 && b23_34 && b24_29 && b25_1 && b26_28 && b27_24 && b28_21 && b29_19 && b30_19 && b31_21 && b32_34 && b33_34 && b34_23) {
matched = true;
pattern_id = 1439;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_49 && b10_12 && b11_40 && b12_5 && b13_4 && b14_28 && b15_33 && b16_8 && b17_53 && b18_22 && b19_9 && b20_34 && b21_35 && b22_31 && b23_28 && b24_25 && b25_44 && b26_29 && b27_31 && b28_18 && b29_29 && b30_27 && b31_32 && b32_25) {
matched = true;
pattern_id = 1440;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_49 && b10_12 && b11_40 && b12_5 && b13_4 && b14_28 && b15_33 && b16_8 && b17_53 && b18_22 && b19_9 && b20_34 && b21_35 && b22_31 && b23_28 && b24_25 && b25_33 && b26_32 && b27_22 && b28_13 && b29_40 && b30_19 && b31_39 && b32_40 && b33_34 && b34_20 && b35_33 && b36_19 && b37_33 && b38_1 && b39_15 && b40_13 && b41_26 && b42_17 && b43_1 && b44_13 && b45_17) {
matched = true;
pattern_id = 1441;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_49 && b10_12 && b11_40 && b12_5 && b13_4 && b14_28 && b15_33 && b16_8 && b17_53 && b18_22 && b19_9 && b20_34 && b21_35 && b22_31 && b23_28 && b24_25 && b25_24 && b26_35 && b27_4 && b28_24 && b29_27 && b30_16 && b31_14 && b32_37 && b33_20 && b34_24 && b35_36 && b36_23 && b37_14 && b38_31 && b39_12 && b40_19 && b41_27 && b42_10 && b43_22 && b44_25 && b45_11 && b46_16) {
matched = true;
pattern_id = 1442;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_40 && b10_17 && b11_59 && b12_5 && b13_4 && b14_48 && b15_31 && b16_29 && b17_34 && b18_31 && b19_35 && b20_28 && b21_18 && b22_19 && b23_16 && b24_22 && b25_21 && b26_45 && b27_1 && b28_37 && b29_24 && b30_18 && b31_38 && b32_31 && b33_17 && b34_30 && b35_28 && b36_15 && b37_14 && b38_32 && b39_19 && b40_13 && b41_26 && b42_9 && b43_24 && b44_26 && b45_18 && b46_18 && b47_19 && b48_9 && b49_9) {
matched = true;
pattern_id = 1443;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_40 && b10_17 && b11_59 && b12_5 && b13_4 && b14_48 && b15_35 && b16_22 && b17_37 && b18_4 && b19_21 && b20_41 && b21_14 && b22_28 && b23_49 && b24_24 && b25_47 && b26_27 && b27_16 && b28_25 && b29_41 && b30_18 && b31_2 && b32_42 && b33_24 && b34_24 && b35_31 && b36_25 && b37_23 && b38_30 && b39_11 && b40_1 && b41_27 && b42_17 && b43_23 && b44_13 && b45_16 && b46_19 && b47_14 && b48_7 && b49_7) {
matched = true;
pattern_id = 1444;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_46 && b12_39 && b13_21 && b14_48 && b15_32 && b16_55 && b17_36 && b18_18 && b19_51 && b20_2 && b21_5 && b22_27 && b23_51 && b24_44 && b25_46 && b26_47 && b27_39 && b28_21 && b29_37 && b30_19 && b31_39 && b32_20 && b33_36 && b34_17 && b35_33 && b36_12) {
matched = true;
pattern_id = 1445;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_46 && b12_39 && b13_21 && b14_34 && b15_34 && b16_29 && b17_18 && b18_10 && b19_4 && b20_49 && b21_31 && b22_51 && b23_6 && b24_3 && b25_42 && b26_25 && b27_27 && b28_30 && b29_28 && b30_24 && b31_14 && b32_9 && b33_33 && b34_37 && b35_27 && b36_25 && b37_34 && b38_30 && b39_12 && b40_28 && b41_25) {
matched = true;
pattern_id = 1446;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_46 && b12_39 && b13_21 && b14_34 && b15_34 && b16_29 && b17_18 && b18_10 && b19_4 && b20_49 && b21_31 && b22_51 && b23_6 && b24_3 && b25_42 && b26_25 && b27_27 && b28_30 && b29_28 && b30_24 && b31_14 && b32_9 && b33_33 && b34_30 && b35_33 && b36_15 && b37_29 && b38_16 && b39_15 && b40_17) {
matched = true;
pattern_id = 1447;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_27 && b10_63 && b11_44 && b12_38 && b13_21 && b14_36 && b15_30 && b16_3 && b17_37 && b18_44 && b19_22 && b20_41 && b21_36 && b22_19 && b23_46 && b24_21 && b25_22 && b26_45 && b27_16 && b28_24 && b29_42 && b30_35 && b31_32 && b32_28 && b33_21 && b34_21 && b35_33 && b36_25 && b37_35 && b38_1 && b39_23 && b40_29 && b41_27 && b42_18 && b43_16 && b44_26 && b45_19 && b46_14 && b47_14) {
matched = true;
pattern_id = 1448;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_37 && b18_36 && b19_44 && b20_27 && b21_10 && b22_43 && b23_9 && b24_22 && b25_3 && b26_19 && b27_1 && b28_34) {
matched = true;
pattern_id = 1449;
}
if(b0_12 && b1_24 && b2_3 && b3_11 && b4_17) {
matched = true;
pattern_id = 1450;
}
if(b0_11 && b1_16 && b2_25 && b3_26 && b4_6 && b5_6) {
matched = true;
pattern_id = 1451;
}
if(b0_49 && b1_20 && b2_59 && b3_63 && b4_64 && b5_19 && b6_43) {
matched = true;
pattern_id = 1452;
}
if(b0_35 && b1_21 && b2_8 && b3_62 && b4_22 && b5_52 && b6_20 && b7_21 && b8_2) {
matched = true;
pattern_id = 1453;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_27 && b5_20 && b6_2 && b7_21 && b8_11 && b9_45) {
matched = true;
pattern_id = 1454;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3) {
matched = true;
pattern_id = 1455;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_42 && b5_39 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_6 && b15_7) {
matched = true;
pattern_id = 1456;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_54 && b17_29 && b18_41 && b19_22 && b20_41 && b21_31 && b22_50 && b23_25 && b24_22 && b25_44 && b26_3 && b27_33 && b28_37 && b29_26 && b30_26 && b31_2 && b32_36 && b33_32 && b34_24) {
matched = true;
pattern_id = 1457;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_54 && b17_29 && b18_41 && b19_22 && b20_41 && b21_31 && b22_27 && b23_16 && b24_24 && b25_30 && b26_29 && b27_37 && b28_30 && b29_3 && b30_27 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1458;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_29 && b17_49 && b18_20 && b19_46 && b20_44 && b21_15 && b22_31 && b23_38 && b24_17 && b25_27 && b26_46 && b27_3 && b28_4 && b29_41 && b30_3 && b31_20 && b32_25) {
matched = true;
pattern_id = 1459;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_29 && b17_49 && b18_20 && b19_46 && b20_27 && b21_2 && b22_22 && b23_28 && b24_22 && b25_4 && b26_19 && b27_18 && b28_24 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1460;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_29 && b17_49 && b18_20 && b19_46 && b20_37 && b21_21 && b22_31 && b23_26) {
matched = true;
pattern_id = 1461;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_36 && b14_41 && b15_36 && b16_3 && b17_29 && b18_29 && b19_28 && b20_33 && b21_29 && b22_43 && b23_24 && b24_43 && b25_21 && b26_27 && b27_1 && b28_30 && b29_43 && b30_17 && b31_8 && b32_37 && b33_19 && b34_22 && b35_20 && b36_15 && b37_21 && b38_28 && b39_11) {
matched = true;
pattern_id = 1462;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_16 && b14_28 && b15_33 && b16_16 && b17_36 && b18_37 && b19_31 && b20_28 && b21_18 && b22_25 && b23_18 && b24_37 && b25_1 && b26_32 && b27_27 && b28_26 && b29_34 && b30_27 && b31_24) {
matched = true;
pattern_id = 1463;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_10 && b6_48 && b7_55 && b8_34 && b9_49 && b10_12 && b11_3 && b12_49 && b13_16 && b14_28 && b15_33 && b16_16 && b17_36 && b18_37 && b19_31 && b20_28 && b21_18 && b22_19 && b23_16 && b24_29 && b25_46 && b26_45 && b27_36 && b28_24 && b29_29) {
matched = true;
pattern_id = 1464;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_32 && b8_35 && b9_49 && b10_25 && b11_37 && b12_5 && b13_4 && b14_48 && b15_18 && b16_24 && b17_39 && b18_56 && b19_44 && b20_32 && b21_27 && b22_50 && b23_51 && b24_3 && b25_27 && b26_25 && b27_37 && b28_28 && b29_30 && b30_15) {
matched = true;
pattern_id = 1465;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_32 && b8_35 && b9_49 && b10_25 && b11_37 && b12_5 && b13_4 && b14_48 && b15_18 && b16_24 && b17_39 && b18_56 && b19_44 && b20_17 && b21_29 && b22_39 && b23_28 && b24_4 && b25_34 && b26_43) {
matched = true;
pattern_id = 1466;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_18 && b14_21 && b15_31 && b16_44 && b17_53 && b18_56 && b19_32 && b20_24 && b21_50 && b22_45 && b23_46 && b24_42 && b25_24 && b26_25 && b27_24 && b28_18 && b29_16 && b30_13 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1467;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_25 && b17_27 && b18_36 && b19_28 && b20_33 && b21_2 && b22_43 && b23_44 && b24_1 && b25_36 && b26_41 && b27_21 && b28_37 && b29_25 && b30_17 && b31_39 && b32_43 && b33_24 && b34_22 && b35_37 && b36_26 && b37_31) {
matched = true;
pattern_id = 1468;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_25 && b17_27 && b18_36 && b19_28 && b20_33 && b21_2 && b22_22 && b23_49 && b24_32 && b25_36 && b26_46 && b27_24 && b28_26 && b29_41 && b30_32 && b31_38 && b32_40) {
matched = true;
pattern_id = 1469;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_30 && b17_13 && b18_53 && b19_9 && b20_25 && b21_36 && b22_43 && b23_28 && b24_17 && b25_46 && b26_28 && b27_31 && b28_24 && b29_44 && b30_17 && b31_23) {
matched = true;
pattern_id = 1470;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_19 && b26_37 && b27_22 && b28_34) {
matched = true;
pattern_id = 1471;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_24 && b26_29 && b27_19 && b28_21) {
matched = true;
pattern_id = 1472;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_4 && b26_30 && b27_28 && b28_24 && b29_19) {
matched = true;
pattern_id = 1473;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_4 && b26_41 && b27_23 && b28_13 && b29_30 && b30_18) {
matched = true;
pattern_id = 1474;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_4 && b26_1 && b27_22 && b28_34 && b29_26 && b30_26 && b31_2 && b32_40 && b33_27) {
matched = true;
pattern_id = 1475;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_27 && b26_29 && b27_30) {
matched = true;
pattern_id = 1476;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_16 && b17_18 && b18_10 && b19_31 && b20_17 && b21_27 && b22_3 && b23_52 && b24_42 && b25_44 && b26_29 && b27_33 && b28_28 && b29_45 && b30_27 && b31_23 && b32_15) {
matched = true;
pattern_id = 1477;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_2 && b17_44 && b18_9 && b19_9 && b20_52 && b21_42 && b22_34 && b23_19 && b24_17 && b25_27 && b26_35 && b27_19 && b28_41 && b29_43 && b30_15 && b31_29 && b32_20 && b33_34) {
matched = true;
pattern_id = 1478;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_40 && b17_49 && b18_10 && b19_52 && b20_35 && b21_29 && b22_43 && b23_46 && b24_3 && b25_3 && b26_3 && b27_31 && b28_35 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1479;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_19 && b14_51 && b15_48 && b16_40 && b17_34 && b18_20 && b19_35 && b20_28 && b21_29 && b22_43 && b23_46 && b24_3 && b25_3 && b26_3 && b27_31 && b28_35 && b29_25 && b30_13 && b31_38 && b32_36) {
matched = true;
pattern_id = 1480;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_33 && b19_35 && b20_30 && b21_36 && b22_19 && b23_46 && b24_42 && b25_18 && b26_34 && b27_36 && b28_25 && b29_41 && b30_41 && b31_2 && b32_20 && b33_16 && b34_16 && b35_22) {
matched = true;
pattern_id = 1481;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_33 && b19_51 && b20_27 && b21_29 && b22_48 && b23_49 && b24_27 && b25_27 && b26_3 && b27_21 && b28_24 && b29_46 && b30_27 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1482;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_3 && b28_4 && b29_41 && b30_18) {
matched = true;
pattern_id = 1483;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_17 && b28_24 && b29_25 && b30_19) {
matched = true;
pattern_id = 1484;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_37 && b28_28 && b29_45 && b30_27 && b31_23) {
matched = true;
pattern_id = 1485;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_37 && b28_35 && b29_21 && b30_42 && b31_14 && b32_40) {
matched = true;
pattern_id = 1486;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_37 && b28_42 && b29_41 && b30_18 && b31_40 && b32_29 && b33_17 && b34_2 && b35_38) {
matched = true;
pattern_id = 1487;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_33 && b28_24 && b29_47) {
matched = true;
pattern_id = 1488;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47) {
matched = true;
pattern_id = 1489;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_19 && b19_21 && b20_27 && b21_21 && b22_34 && b23_19 && b24_32 && b25_47 && b26_46 && b27_43 && b28_24 && b29_19 && b30_12 && b31_19 && b32_28 && b33_20 && b34_14) {
matched = true;
pattern_id = 1490;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_29 && b19_22 && b20_28 && b21_29 && b22_43 && b23_35 && b24_1 && b25_1 && b26_3 && b27_33 && b28_18 && b29_25 && b30_39 && b31_39 && b32_9 && b33_16 && b34_31 && b35_33) {
matched = true;
pattern_id = 1491;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_29 && b19_22 && b20_28 && b21_29 && b22_43 && b23_35 && b24_1 && b25_1 && b26_3 && b27_33 && b28_18 && b29_25 && b30_39) {
matched = true;
pattern_id = 1492;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_17 && b13_41 && b14_25 && b15_3 && b16_3 && b17_53 && b18_29 && b19_12 && b20_24 && b21_42 && b22_22 && b23_3 && b24_17 && b25_30 && b26_46 && b27_21 && b28_34 && b29_34 && b30_24 && b31_2 && b32_38 && b33_17 && b34_31 && b35_2 && b36_26 && b37_20) {
matched = true;
pattern_id = 1493;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_17 && b13_32 && b14_25 && b15_44 && b16_32 && b17_18 && b18_4 && b19_51 && b20_3 && b21_52 && b22_19 && b23_49 && b24_24 && b25_42 && b26_34 && b27_33 && b28_31 && b29_46 && b30_27 && b31_32 && b32_25 && b33_33 && b34_2 && b35_33 && b36_13 && b37_15 && b38_19 && b39_10) {
matched = true;
pattern_id = 1494;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_46 && b13_5 && b14_41 && b15_35 && b16_22 && b17_53 && b18_56 && b19_32 && b20_24 && b21_50 && b22_45 && b23_46 && b24_42 && b25_24 && b26_25 && b27_24 && b28_18 && b29_16 && b30_13 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1495;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_27 && b24_17 && b25_23 && b26_41 && b27_23 && b28_23 && b29_43 && b30_41 && b31_23 && b32_24 && b33_37 && b34_17) {
matched = true;
pattern_id = 1496;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_26 && b24_3 && b25_23 && b26_25 && b27_19 && b28_21 && b29_43 && b30_18 && b31_14 && b32_9 && b33_11 && b34_21 && b35_39 && b36_15 && b37_14 && b38_32 && b39_19) {
matched = true;
pattern_id = 1497;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_9 && b24_40 && b25_1 && b26_25 && b27_30 && b28_37 && b29_19 && b30_19 && b31_27 && b32_9 && b33_16 && b34_31 && b35_33 && b36_12) {
matched = true;
pattern_id = 1498;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_35 && b24_1 && b25_1 && b26_3 && b27_33 && b28_18 && b29_25 && b30_39 && b31_39 && b32_38 && b33_20 && b34_16 && b35_39 && b36_13) {
matched = true;
pattern_id = 1499;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_46 && b24_3 && b25_18 && b26_39 && b27_33 && b28_31 && b29_37 && b30_24) {
matched = true;
pattern_id = 1500;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_46 && b24_3 && b25_18 && b26_27 && b27_18 && b28_30 && b29_30 && b30_15) {
matched = true;
pattern_id = 1501;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_24 && b24_4 && b25_30 && b26_25 && b27_27 && b28_25 && b29_19 && b30_13 && b31_38 && b32_40 && b33_16 && b34_31 && b35_40) {
matched = true;
pattern_id = 1502;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_6 && b24_21 && b25_1 && b26_47 && b27_39 && b28_21 && b29_43 && b30_18 && b31_14 && b32_9 && b33_11 && b34_21 && b35_39 && b36_15 && b37_14 && b38_32 && b39_19) {
matched = true;
pattern_id = 1503;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_36 && b14_12 && b15_20 && b16_29 && b17_49 && b18_9 && b19_46 && b20_3 && b21_2 && b22_43 && b23_6 && b24_27 && b25_24 && b26_29 && b27_19 && b28_21 && b29_43 && b30_18 && b31_14 && b32_9 && b33_11 && b34_21 && b35_39 && b36_15 && b37_14 && b38_32 && b39_19) {
matched = true;
pattern_id = 1504;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_34 && b27_1 && b28_25 && b29_46 && b30_18 && b31_38 && b32_41 && b33_38) {
matched = true;
pattern_id = 1505;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_34 && b27_1 && b28_25 && b29_34 && b30_42 && b31_41 && b32_25 && b33_18 && b34_31) {
matched = true;
pattern_id = 1506;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_41 && b20_41 && b21_14 && b22_40 && b23_24 && b24_31 && b25_36 && b26_19 && b27_27 && b28_34 && b29_30 && b30_24 && b31_20 && b32_40 && b33_11 && b34_34 && b35_23) {
matched = true;
pattern_id = 1507;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_5 && b14_47 && b15_35 && b16_22 && b17_29 && b18_44 && b19_40 && b20_3 && b21_15 && b22_38 && b23_9 && b24_21 && b25_46 && b26_39 && b27_33 && b28_31 && b29_37 && b30_24) {
matched = true;
pattern_id = 1508;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_5 && b14_47 && b15_35 && b16_22 && b17_29 && b18_44 && b19_2 && b20_17 && b21_27 && b22_45 && b23_46 && b24_4 && b25_30 && b26_43 && b27_27 && b28_39 && b29_19 && b30_17 && b31_37 && b32_31) {
matched = true;
pattern_id = 1509;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_5 && b14_47 && b15_35 && b16_22 && b17_29 && b18_44 && b19_41 && b20_27 && b21_36 && b22_19 && b23_49 && b24_27 && b25_27 && b26_35 && b27_36 && b28_34 && b29_3 && b30_36 && b31_42) {
matched = true;
pattern_id = 1510;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_36 && b14_48 && b15_18 && b16_29 && b17_39 && b18_4 && b19_21 && b20_17 && b21_29 && b22_18 && b23_49 && b24_1 && b25_33 && b26_24 && b27_3 && b28_24 && b29_25 && b30_35 && b31_2 && b32_2 && b33_19 && b34_35 && b35_22) {
matched = true;
pattern_id = 1511;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_49 && b24_37 && b25_27 && b26_3 && b27_39 && b28_25 && b29_43 && b30_40 && b31_23 && b32_24 && b33_19 && b34_38 && b35_26 && b36_9 && b37_28 && b38_31 && b39_13 && b40_19) {
matched = true;
pattern_id = 1512;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_49 && b24_37 && b25_27 && b26_3 && b27_39 && b28_25) {
matched = true;
pattern_id = 1513;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_24 && b24_42 && b25_34 && b26_34 && b27_36 && b28_29 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29) {
matched = true;
pattern_id = 1514;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_47 && b18_4 && b19_32 && b20_2 && b21_36 && b22_19 && b23_49 && b24_1 && b25_33 && b26_27 && b27_36 && b28_26 && b29_37 && b30_36 && b31_29 && b32_24 && b33_35) {
matched = true;
pattern_id = 1515;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_33 && b18_22 && b19_31 && b20_35 && b21_42 && b22_19 && b23_26 && b24_42 && b25_19 && b26_3 && b27_31 && b28_35 && b29_21 && b30_3) {
matched = true;
pattern_id = 1516;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_25 && b18_34 && b19_22 && b20_2 && b21_48 && b22_43 && b23_46 && b24_3 && b25_18 && b26_3 && b27_41 && b28_40 && b29_30 && b30_12 && b31_32) {
matched = true;
pattern_id = 1517;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_27 && b18_38 && b19_19 && b20_2 && b21_35 && b22_3 && b23_49 && b24_41 && b25_27 && b26_3 && b27_23 && b28_37 && b29_22 && b30_16 && b31_2 && b32_39 && b33_11 && b34_2) {
matched = true;
pattern_id = 1518;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_30 && b27_28 && b28_24 && b29_19) {
matched = true;
pattern_id = 1519;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_36 && b27_22 && b28_30 && b29_30) {
matched = true;
pattern_id = 1520;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_32 && b27_3 && b28_4 && b29_41 && b30_18) {
matched = true;
pattern_id = 1521;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_32 && b27_39 && b28_29 && b29_27 && b30_19 && b31_23) {
matched = true;
pattern_id = 1522;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_32 && b27_43 && b28_24 && b29_19 && b30_12 && b31_19 && b32_28 && b33_20 && b34_14) {
matched = true;
pattern_id = 1523;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_34 && b27_22 && b28_43) {
matched = true;
pattern_id = 1524;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44) {
matched = true;
pattern_id = 1525;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_34 && b18_22 && b19_22 && b20_3 && b21_5 && b22_27 && b23_28 && b24_44 && b25_46 && b26_1 && b27_22 && b28_34 && b29_26 && b30_26 && b31_2 && b32_40 && b33_27) {
matched = true;
pattern_id = 1526;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_10 && b19_34 && b20_2 && b21_31 && b22_40 && b23_46 && b24_4 && b25_36 && b26_34 && b27_18 && b28_30 && b29_28 && b30_35 && b31_28 && b32_27 && b33_25 && b34_24) {
matched = true;
pattern_id = 1527;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_10 && b19_34 && b20_2 && b21_31 && b22_40 && b23_46 && b24_4 && b25_36 && b26_34 && b27_18 && b28_30 && b29_28) {
matched = true;
pattern_id = 1528;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_11 && b19_35 && b20_34 && b21_10 && b22_11 && b23_31 && b24_32 && b25_46 && b26_34 && b27_1 && b28_25 && b29_46 && b30_18 && b31_38 && b32_41 && b33_38) {
matched = true;
pattern_id = 1529;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_36 && b18_11 && b19_35 && b20_34 && b21_10 && b22_11 && b23_31 && b24_32 && b25_46 && b26_34 && b27_1 && b28_25 && b29_34 && b30_42 && b31_41 && b32_25 && b33_18 && b34_31) {
matched = true;
pattern_id = 1530;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_35 && b18_11 && b19_22 && b20_50 && b21_30 && b22_19 && b23_49 && b24_1 && b25_33 && b26_27 && b27_36 && b28_26 && b29_37 && b30_36 && b31_29 && b32_24 && b33_35) {
matched = true;
pattern_id = 1531;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_39 && b13_4 && b14_21 && b15_5 && b16_37 && b17_35 && b18_19 && b19_42 && b20_24 && b21_36 && b22_19 && b23_49 && b24_1 && b25_33 && b26_27 && b27_36 && b28_26 && b29_37 && b30_36 && b31_29 && b32_24 && b33_35) {
matched = true;
pattern_id = 1532;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_5 && b13_50 && b14_17 && b15_22 && b16_40 && b17_37 && b18_4 && b19_46 && b20_32 && b21_20 && b22_28) {
matched = true;
pattern_id = 1533;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_5 && b22_19 && b23_35 && b24_8 && b25_1 && b26_30 && b27_22 && b28_30 && b29_3 && b30_17 && b31_21 && b32_37 && b33_38 && b34_22 && b35_36 && b36_27 && b37_28 && b38_33 && b39_12) {
matched = true;
pattern_id = 1534;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_38 && b13_22 && b14_5 && b15_25 && b16_5 && b17_49 && b18_9 && b19_22 && b20_24 && b21_36 && b22_19 && b23_34 && b24_4 && b25_4 && b26_27 && b27_19 && b28_24 && b29_16 && b30_36 && b31_29 && b32_28 && b33_25 && b34_24 && b35_34 && b36_26 && b37_20 && b38_34 && b39_24 && b40_29 && b41_25) {
matched = true;
pattern_id = 1535;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_7 && b13_43 && b14_50 && b15_3 && b16_37 && b17_4 && b18_15 && b19_32 && b20_35 && b21_19 && b22_20 && b23_49 && b24_37 && b25_27 && b26_3 && b27_39 && b28_25) {
matched = true;
pattern_id = 1536;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_26 && b13_18 && b14_5 && b15_30 && b16_8 && b17_29 && b18_9 && b19_9 && b20_52 && b21_34 && b22_28 && b23_32 && b24_40 && b25_36 && b26_34 && b27_27 && b28_19 && b29_30 && b30_40 && b31_29 && b32_36 && b33_16 && b34_31 && b35_2 && b36_26 && b37_20) {
matched = true;
pattern_id = 1537;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_52 && b15_15 && b16_24 && b17_36 && b18_37 && b19_46 && b20_44 && b21_15 && b22_31 && b23_38 && b24_17 && b25_27 && b26_46 && b27_17 && b28_21 && b29_22 && b30_13 && b31_21 && b32_27 && b33_25 && b34_35 && b35_27 && b36_1) {
matched = true;
pattern_id = 1538;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_35 && b15_40 && b16_29 && b17_53 && b18_56 && b19_32 && b20_24 && b21_50 && b22_45 && b23_46 && b24_42 && b25_24 && b26_25 && b27_24 && b28_18 && b29_16 && b30_13 && b31_32 && b32_27 && b33_11 && b34_37) {
matched = true;
pattern_id = 1539;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_35 && b15_40 && b16_29 && b17_53 && b18_33 && b19_35 && b20_30 && b21_36 && b22_19 && b23_46 && b24_42 && b25_23 && b26_3 && b27_40) {
matched = true;
pattern_id = 1540;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_32 && b13_32 && b14_35 && b15_40 && b16_29 && b17_53 && b18_29 && b19_34 && b20_24 && b21_36 && b22_27 && b23_24 && b24_32 && b25_1 && b26_30 && b27_4) {
matched = true;
pattern_id = 1541;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_47 && b15_31 && b16_29 && b17_36 && b18_37 && b19_46 && b20_33 && b21_50 && b22_27 && b23_18 && b24_34 && b25_46 && b26_34 && b27_1 && b28_25 && b29_46 && b30_18 && b31_38 && b32_41 && b33_38) {
matched = true;
pattern_id = 1542;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_47 && b15_31 && b16_29 && b17_36 && b18_37 && b19_46 && b20_30 && b21_2 && b22_31 && b23_35 && b24_24 && b25_28 && b26_3 && b27_19 && b28_37 && b29_19 && b30_19 && b31_27 && b32_38 && b33_20 && b34_16 && b35_39 && b36_13) {
matched = true;
pattern_id = 1543;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_41 && b15_35 && b16_2 && b17_37 && b18_4 && b19_21 && b20_52 && b21_19 && b22_42 && b23_19 && b24_3 && b25_48 && b26_46 && b27_33 && b28_21 && b29_24 && b30_41 && b31_23 && b32_24 && b33_37 && b34_17) {
matched = true;
pattern_id = 1544;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_41 && b15_35 && b16_2 && b17_37 && b18_4 && b19_21 && b20_52 && b21_10 && b22_20 && b23_32 && b24_27 && b25_3 && b26_37 && b27_36 && b28_30 && b29_43 && b30_18 && b31_14 && b32_31 && b33_32 && b34_2 && b35_27 && b36_28 && b37_23) {
matched = true;
pattern_id = 1545;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_41 && b15_35 && b16_2 && b17_37 && b18_4 && b19_21 && b20_52 && b21_10 && b22_3 && b23_32 && b24_32 && b25_1 && b26_27 && b27_19 && b28_18 && b29_26 && b30_15) {
matched = true;
pattern_id = 1546;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_18 && b15_30 && b16_25 && b17_10 && b18_9 && b19_9 && b20_52 && b21_19 && b22_31 && b23_24 && b24_32 && b25_33 && b26_34 && b27_17 && b28_21 && b29_22) {
matched = true;
pattern_id = 1547;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_28 && b15_33 && b16_39 && b17_29 && b18_44 && b19_41 && b20_48 && b21_14 && b22_18 && b23_31 && b24_34 && b25_46 && b26_30 && b27_36 && b28_26 && b29_37 && b30_21 && b31_21 && b32_37 && b33_32 && b34_2 && b35_27 && b36_28 && b37_23) {
matched = true;
pattern_id = 1548;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_5 && b15_50 && b16_39 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_29 && b27_3 && b28_30 && b29_3 && b30_32 && b31_29 && b32_20 && b33_36) {
matched = true;
pattern_id = 1549;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_25 && b17_21 && b18_4 && b19_40 && b20_20 && b21_31 && b22_18 && b23_26 && b24_8 && b25_46 && b26_19 && b27_1 && b28_44 && b29_25) {
matched = true;
pattern_id = 1550;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_44 && b12_20 && b13_53 && b14_25 && b15_36 && b16_23 && b17_18 && b18_15 && b19_2 && b20_52 && b21_10 && b22_27 && b23_28 && b24_3 && b25_46 && b26_35 && b27_37 && b28_1 && b29_25 && b30_27 && b31_21 && b32_20 && b33_16 && b34_22 && b35_18 && b36_19 && b37_16 && b38_16) {
matched = true;
pattern_id = 1551;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_28 && b15_18 && b16_37 && b17_10 && b18_11 && b19_42 && b20_52 && b21_35 && b22_45 && b23_9 && b24_27 && b25_22 && b26_34 && b27_1 && b28_37 && b29_34 && b30_16 && b31_24 && b32_37 && b33_39 && b34_22 && b35_31 && b36_28 && b37_21 && b38_22) {
matched = true;
pattern_id = 1552;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_25 && b15_48 && b16_25 && b17_27 && b18_36 && b19_28 && b20_33 && b21_2 && b22_22) {
matched = true;
pattern_id = 1553;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_5 && b14_25 && b15_48 && b16_8 && b17_27 && b18_31 && b19_35 && b20_37 && b21_31 && b22_50 && b23_25 && b24_22 && b25_44 && b26_3 && b27_33) {
matched = true;
pattern_id = 1554;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_6 && b14_17 && b15_22 && b16_24 && b17_39 && b18_57 && b19_46 && b20_41 && b21_29 && b22_48 && b23_49 && b24_28 && b25_22 && b26_27 && b27_19 && b28_21 && b29_19 && b30_15) {
matched = true;
pattern_id = 1555;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_32 && b14_5 && b15_5 && b16_29 && b17_49 && b18_20 && b19_46 && b20_33 && b21_14 && b22_22 && b23_28 && b24_3 && b25_27 && b26_46 && b27_22 && b28_28 && b29_25 && b30_13 && b31_31 && b32_27 && b33_25 && b34_39) {
matched = true;
pattern_id = 1556;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_37 && b13_22 && b14_35 && b15_3 && b16_18 && b17_44 && b18_29 && b19_34 && b20_2 && b21_5 && b22_43 && b23_9 && b24_40 && b25_1 && b26_25 && b27_30 && b28_37 && b29_19 && b30_19 && b31_27 && b32_38 && b33_20 && b34_16 && b35_39 && b36_13) {
matched = true;
pattern_id = 1557;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_37 && b13_22 && b14_35 && b15_3 && b16_18 && b17_44 && b18_29 && b19_34 && b20_2 && b21_5 && b22_43 && b23_24 && b24_21 && b25_22 && b26_24 && b27_4 && b28_4 && b29_34 && b30_36 && b31_39 && b32_40 && b33_34 && b34_17 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14) {
matched = true;
pattern_id = 1558;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_41 && b13_43 && b14_18 && b15_35 && b16_23 && b17_10 && b18_9 && b19_9 && b20_52 && b21_34 && b22_28 && b23_32 && b24_40 && b25_36 && b26_34 && b27_27 && b28_19 && b29_30 && b30_40 && b31_29 && b32_36 && b33_16 && b34_31 && b35_2 && b36_26 && b37_20) {
matched = true;
pattern_id = 1559;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_41 && b13_43 && b14_18 && b15_35 && b16_23 && b17_10 && b18_9 && b19_9 && b20_52 && b21_34 && b22_45 && b23_46 && b24_42 && b25_23 && b26_3 && b27_3 && b28_24 && b29_40 && b30_35 && b31_8 && b32_42 && b33_17 && b34_40 && b35_27 && b36_22) {
matched = true;
pattern_id = 1560;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_24 && b21_26 && b22_45 && b23_46 && b24_32 && b25_46 && b26_28 && b27_31 && b28_24 && b29_44 && b30_17 && b31_23 && b32_37 && b33_2 && b34_24 && b35_26 && b36_19 && b37_20 && b38_20 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 1561;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_24 && b21_20 && b22_18 && b23_49 && b24_17 && b25_21 && b26_48 && b27_1 && b28_28 && b29_25 && b30_35 && b31_32 && b32_24 && b33_33 && b34_18 && b35_31 && b36_20 && b37_33 && b38_32 && b39_15) {
matched = true;
pattern_id = 1562;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_47 && b21_29 && b22_41 && b23_19 && b24_21 && b25_46 && b26_28 && b27_31 && b28_24 && b29_44 && b30_17 && b31_23 && b32_37 && b33_2 && b34_24 && b35_26 && b36_19 && b37_20 && b38_20 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 1563;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_36 && b26_22 && b27_44 && b28_21 && b29_26 && b30_36 && b31_39 && b32_43 && b33_20 && b34_16 && b35_24 && b36_25 && b37_5 && b38_34 && b39_1 && b40_23 && b41_28 && b42_17) {
matched = true;
pattern_id = 1564;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_22 && b25_24 && b26_36 && b27_27 && b28_28 && b29_34 && b30_16 && b31_37 && b32_23 && b33_35 && b34_38 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14 && b40_13 && b41_26 && b42_9 && b43_24 && b44_20 && b45_9 && b46_12 && b47_20 && b48_1 && b49_10) {
matched = true;
pattern_id = 1565;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_22 && b25_24 && b26_36 && b27_27 && b28_28 && b29_34 && b30_16 && b31_37 && b32_23 && b33_35 && b34_23 && b35_34 && b36_15 && b37_16 && b38_35 && b39_23 && b40_30 && b41_19 && b42_20 && b43_25 && b44_23) {
matched = true;
pattern_id = 1566;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_26 && b30_17 && b31_22 && b32_41 && b33_19 && b34_37 && b35_34 && b36_29 && b37_31 && b38_32 && b39_25 && b40_17 && b41_27 && b42_21 && b43_22 && b44_27 && b45_20 && b46_20 && b47_21 && b48_10 && b49_11 && b50_14 && b51_8 && b52_10) {
matched = true;
pattern_id = 1567;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_26 && b30_17 && b31_22 && b32_41 && b33_19 && b34_37 && b35_20 && b36_25 && b37_5 && b38_28 && b39_13 && b40_31 && b41_27 && b42_21 && b43_15 && b44_25 && b45_21 && b46_21 && b47_22) {
matched = true;
pattern_id = 1568;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_17 && b25_21 && b26_27 && b27_36 && b28_26 && b29_30 && b30_36 && b31_14 && b32_37 && b33_31 && b34_21 && b35_28 && b36_30 && b37_16 && b38_28 && b39_26 && b40_32 && b41_25 && b42_21 && b43_26 && b44_28 && b45_1 && b46_14 && b47_19 && b48_1 && b49_12) {
matched = true;
pattern_id = 1569;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_27 && b25_42 && b26_22 && b27_31 && b28_18 && b29_35 && b30_26 && b31_39 && b32_43 && b33_24 && b34_22 && b35_37 && b36_26 && b37_31 && b38_35 && b39_21 && b40_15 && b41_29 && b42_16 && b43_12 && b44_24 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 1570;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_46 && b20_33 && b21_14 && b22_22 && b23_34 && b24_27 && b25_42 && b26_34 && b27_40 && b28_21 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29 && b36_25 && b37_35 && b38_1 && b39_23 && b40_20 && b41_16 && b42_16 && b43_17 && b44_24 && b45_16 && b46_17) {
matched = true;
pattern_id = 1571;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_30 && b21_29 && b22_3 && b23_49 && b24_8 && b25_36 && b26_30 && b27_22 && b28_26 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29) {
matched = true;
pattern_id = 1572;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_46 && b21_14 && b22_28 && b23_19 && b24_29 && b25_22 && b26_19 && b27_1 && b28_37 && b29_22 && b30_16 && b31_2 && b32_39 && b33_11 && b34_2 && b35_34 && b36_17 && b37_21 && b38_17 && b39_24 && b40_29 && b41_15 && b42_10 && b43_26 && b44_27 && b45_23) {
matched = true;
pattern_id = 1573;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_46 && b17_26 && b18_32 && b19_44 && b20_46 && b21_14 && b22_28 && b23_19 && b24_29 && b25_22 && b26_19 && b27_1 && b28_37 && b29_22 && b30_17 && b31_23 && b32_37 && b33_24 && b34_16 && b35_36 && b36_20 && b37_25 && b38_35 && b39_23 && b40_30 && b41_19 && b42_20 && b43_25 && b44_23) {
matched = true;
pattern_id = 1574;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_24 && b21_15 && b22_3 && b23_18 && b24_1 && b25_46 && b26_33 && b27_22 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_20 && b34_24 && b35_23 && b36_26 && b37_36 && b38_36 && b39_12 && b40_27 && b41_26) {
matched = true;
pattern_id = 1575;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_21 && b22_14 && b23_9 && b24_3 && b25_4 && b26_19 && b27_27 && b28_31 && b29_16 && b30_35 && b31_23 && b32_25 && b33_38 && b34_30 && b35_29 && b36_26 && b37_19 && b38_27) {
matched = true;
pattern_id = 1576;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_21 && b22_14 && b23_9 && b24_3 && b25_4 && b26_19 && b27_27 && b28_31 && b29_16 && b30_35 && b31_23 && b32_25 && b33_38 && b34_16 && b35_41 && b36_31 && b37_21 && b38_18 && b39_10) {
matched = true;
pattern_id = 1577;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_23 && b28_24 && b29_35 && b30_36 && b31_14 && b32_40 && b33_33 && b34_2 && b35_33 && b36_13 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 1578;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_23 && b28_24 && b29_35 && b30_36 && b31_14 && b32_40 && b33_33 && b34_2 && b35_33 && b36_13 && b37_16 && b38_37 && b39_27 && b40_15 && b41_24 && b42_10) {
matched = true;
pattern_id = 1579;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_32 && b21_21 && b22_43 && b23_26 && b24_3 && b25_34 && b26_25 && b27_33 && b28_34 && b29_30 && b30_29 && b31_39 && b32_40 && b33_34 && b34_17 && b35_36 && b36_20 && b37_30 && b38_35 && b39_1 && b40_32 && b41_30 && b42_16 && b43_12) {
matched = true;
pattern_id = 1580;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_35 && b26_29 && b27_4 && b28_30 && b29_30 && b30_18 && b31_39 && b32_40 && b33_34 && b34_17 && b35_35 && b36_22 && b37_16 && b38_30 && b39_14) {
matched = true;
pattern_id = 1581;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_31 && b21_29 && b22_20 && b23_18 && b24_1 && b25_22 && b26_19 && b27_1 && b28_37 && b29_19 && b30_19 && b31_27 && b32_42 && b33_16 && b34_20 && b35_28 && b36_15 && b37_14 && b38_32 && b39_19 && b40_13 && b41_18 && b42_11 && b43_27 && b44_29 && b45_19 && b46_22 && b47_14) {
matched = true;
pattern_id = 1582;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_34 && b21_30 && b22_34 && b23_44 && b24_3 && b25_46 && b26_33 && b27_22 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_24 && b34_16 && b35_35) {
matched = true;
pattern_id = 1583;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_17 && b21_29 && b22_28 && b23_31 && b24_20 && b25_22 && b26_19 && b27_1 && b28_37 && b29_21 && b30_27 && b31_28 && b32_20 && b33_34 && b34_2 && b35_25 && b36_23 && b37_5) {
matched = true;
pattern_id = 1584;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_17 && b21_29 && b22_20 && b23_32 && b24_28 && b25_33 && b26_46 && b27_4 && b28_4 && b29_41 && b30_29 && b31_38 && b32_44 && b33_33 && b34_20 && b35_27 && b36_9 && b37_19 && b38_38 && b39_19 && b40_13 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 1585;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_17 && b21_29 && b22_22 && b23_6 && b24_28 && b25_33 && b26_46 && b27_23 && b28_24 && b29_35 && b30_36 && b31_14 && b32_40 && b33_33 && b34_22 && b35_36 && b36_15 && b37_14 && b38_31 && b39_24 && b40_16 && b41_1) {
matched = true;
pattern_id = 1586;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_39 && b17_10 && b18_29 && b19_44 && b20_30 && b21_30 && b22_22 && b23_35 && b24_3 && b25_4 && b26_36 && b27_27 && b28_29 && b29_41 && b30_15 && b31_32 && b32_25 && b33_20 && b34_38 && b35_28 && b36_10 && b37_30 && b38_20 && b39_28 && b40_20 && b41_26 && b42_14) {
matched = true;
pattern_id = 1587;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_22 && b25_23 && b26_19 && b27_1 && b28_34 && b29_43 && b30_15 && b31_21 && b32_28 && b33_38 && b34_23 && b35_21 && b36_26 && b37_30 && b38_35 && b39_14 && b40_19 && b41_28 && b42_22 && b43_1 && b44_31 && b45_19 && b46_14 && b47_19 && b48_1 && b49_12) {
matched = true;
pattern_id = 1588;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_20 && b25_27 && b26_25 && b27_22 && b28_30 && b29_30 && b30_35 && b31_28 && b32_36 && b33_17 && b34_17 && b35_20 && b36_24 && b37_16 && b38_21 && b39_26 && b40_19 && b41_25 && b42_22 && b43_28 && b44_23 && b45_16 && b46_23 && b47_23) {
matched = true;
pattern_id = 1589;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_28 && b39_12 && b40_17 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 1590;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_29 && b25_27 && b26_3 && b27_21 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_28 && b39_12 && b40_17 && b41_28 && b42_23 && b43_29 && b44_14 && b45_11 && b46_14) {
matched = true;
pattern_id = 1591;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_1 && b25_33 && b26_28 && b27_33 && b28_21 && b29_35 && b30_26 && b31_39 && b32_9 && b33_35 && b34_22 && b35_23 && b36_12 && b37_26 && b38_32 && b39_10 && b40_13 && b41_17 && b42_1 && b43_16 && b44_31 && b45_7 && b46_21 && b47_24 && b48_5) {
matched = true;
pattern_id = 1592;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_1 && b25_33 && b26_39 && b27_18 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_22 && b34_37 && b35_28 && b36_13 && b37_27 && b38_39 && b39_13 && b40_16 && b41_27 && b42_17 && b43_23 && b44_32 && b45_25 && b46_24 && b47_15 && b48_11 && b49_13) {
matched = true;
pattern_id = 1593;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_1 && b25_33 && b26_24 && b27_3 && b28_24 && b29_25 && b30_35 && b31_29 && b32_23 && b33_38 && b34_16 && b35_29 && b36_15 && b37_29 && b38_18 && b39_29 && b40_15 && b41_24 && b42_24) {
matched = true;
pattern_id = 1594;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_43 && b25_4 && b26_34 && b27_1 && b28_39 && b29_3 && b30_15 && b31_32 && b32_25 && b33_20 && b34_38 && b35_20 && b36_1 && b37_28 && b38_27 && b39_11 && b40_1 && b41_28 && b42_10 && b43_24 && b44_23 && b45_17 && b46_25 && b47_25 && b48_7 && b49_14 && b50_15 && b51_9) {
matched = true;
pattern_id = 1595;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_37 && b18_36 && b19_16 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_33 && b27_22 && b28_1 && b29_25 && b30_19 && b31_23 && b32_37 && b33_20 && b34_24 && b35_23 && b36_26 && b37_36 && b38_36 && b39_12 && b40_27 && b41_26) {
matched = true;
pattern_id = 1596;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_37 && b18_36 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_22 && b26_32 && b27_27 && b28_31 && b29_27 && b30_37 && b31_14 && b32_34 && b33_25) {
matched = true;
pattern_id = 1597;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_25 && b20_46 && b21_27 && b22_19 && b23_36 && b24_42 && b25_27 && b26_25 && b27_21 && b28_31 && b29_27 && b30_37 && b31_14 && b32_34 && b33_25) {
matched = true;
pattern_id = 1598;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_18 && b13_4 && b14_17 && b15_33 && b16_44 && b17_29 && b18_44 && b19_41 && b20_41 && b21_14 && b22_40 && b23_24 && b24_31 && b25_36 && b26_19 && b27_27 && b28_34 && b29_30 && b30_24 && b31_38 && b32_45 && b33_40 && b34_24 && b35_36 && b36_15) {
matched = true;
pattern_id = 1599;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_19 && b22_42 && b23_19 && b24_3 && b25_48 && b26_46 && b27_4 && b28_35 && b29_24 && b30_24 && b31_38 && b32_40 && b33_25) {
matched = true;
pattern_id = 1600;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_5 && b22_19 && b23_35 && b24_8 && b25_1 && b26_30 && b27_22 && b28_30 && b29_3 && b30_17 && b31_21 && b32_37 && b33_25 && b34_2 && b35_2 && b36_29 && b37_32 && b38_1 && b39_15) {
matched = true;
pattern_id = 1601;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_36 && b13_5 && b14_28 && b15_3 && b16_3 && b17_10 && b18_9 && b19_9 && b20_52 && b21_10 && b22_20 && b23_32 && b24_27 && b25_3 && b26_37 && b27_36 && b28_30 && b29_43 && b30_15 && b31_37 && b32_31 && b33_38 && b34_16 && b35_29 && b36_15) {
matched = true;
pattern_id = 1602;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_20 && b13_5 && b14_12 && b15_30 && b16_58 && b17_29 && b18_44 && b19_25 && b20_24 && b21_10 && b22_3 && b23_18 && b24_1 && b25_46 && b26_36 && b27_22 && b28_30 && b29_41 && b30_42 && b31_2 && b32_9 && b33_34 && b34_23) {
matched = true;
pattern_id = 1603;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_60 && b14_24 && b15_25 && b16_25 && b17_21 && b18_44 && b19_25 && b20_46 && b21_27 && b22_19 && b23_36 && b24_42 && b25_35 && b26_29 && b27_4 && b28_30 && b29_30 && b30_18) {
matched = true;
pattern_id = 1604;
}
if(b0_21 && b1_47 && b2_6 && b3_18 && b4_59 && b5_8 && b6_7 && b7_47 && b8_41 && b9_27 && b10_13 && b11_57 && b12_16 && b13_60 && b14_24 && b15_25 && b16_25 && b17_21 && b18_44 && b19_41 && b20_41 && b21_14 && b22_40 && b23_24 && b24_31 && b25_36 && b26_19 && b27_27 && b28_29 && b29_41 && b30_15 && b31_32 && b32_25 && b33_20) {
matched = true;
pattern_id = 1605;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_24 && b26_25 && b27_31 && b28_21 && b29_25 && b30_19 && b31_39 && b32_40 && b33_34 && b34_23 && b35_27 && b36_9 && b37_19 && b38_21 && b39_24 && b40_14 && b41_16) {
matched = true;
pattern_id = 1606;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_20 && b35_21 && b36_20 && b37_31) {
matched = true;
pattern_id = 1607;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_19 && b35_28 && b36_15 && b37_21) {
matched = true;
pattern_id = 1608;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_37 && b35_36 && b36_24 && b37_28 && b38_28) {
matched = true;
pattern_id = 1609;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_37 && b35_39 && b36_11 && b37_36 && b38_1 && b39_15) {
matched = true;
pattern_id = 1610;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_37 && b35_37 && b36_20 && b37_31 && b38_18 && b39_29 && b40_24 && b41_17 && b42_6) {
matched = true;
pattern_id = 1611;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_2 && b35_28 && b36_32) {
matched = true;
pattern_id = 1612;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_18 && b26_34 && b27_18 && b28_31 && b29_19 && b30_13 && b31_32 && b32_26 && b33_33 && b34_40 && b35_28 && b36_22 && b37_15 && b38_39 && b39_1 && b40_19 && b41_12) {
matched = true;
pattern_id = 1613;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_3 && b26_35 && b27_19 && b28_21 && b29_43 && b30_24 && b31_23 && b32_27 && b33_11 && b34_2 && b35_2 && b36_15 && b37_1 && b38_35 && b39_11 && b40_20 && b41_26 && b42_1) {
matched = true;
pattern_id = 1614;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_42 && b26_32 && b27_18 && b28_38 && b29_37 && b30_19 && b31_39 && b32_40 && b33_34 && b34_23 && b35_27 && b36_9 && b37_19 && b38_21 && b39_24 && b40_14 && b41_16) {
matched = true;
pattern_id = 1615;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_18 && b23_26 && b24_42 && b25_42 && b26_24 && b27_17 && b28_24 && b29_25 && b30_19 && b31_39 && b32_40 && b33_34 && b34_23 && b35_27 && b36_9 && b37_19 && b38_21 && b39_24 && b40_14 && b41_16) {
matched = true;
pattern_id = 1616;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_10 && b37_26 && b38_19 && b39_15) {
matched = true;
pattern_id = 1617;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_17 && b37_28 && b38_21 && b39_12) {
matched = true;
pattern_id = 1618;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_1 && b37_15 && b38_39 && b39_1 && b40_19) {
matched = true;
pattern_id = 1619;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_1 && b37_19 && b38_38 && b39_30 && b40_15 && b41_17) {
matched = true;
pattern_id = 1620;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_1 && b37_33 && b38_19 && b39_15 && b40_27 && b41_32 && b42_11 && b43_22 && b44_33) {
matched = true;
pattern_id = 1621;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_22 && b37_28 && b38_12) {
matched = true;
pattern_id = 1622;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39) {
matched = true;
pattern_id = 1623;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_21 && b28_34 && b29_3 && b30_17 && b31_23 && b32_27 && b33_25 && b34_39 && b35_34 && b36_30 && b37_28 && b38_28 && b39_31 && b40_1 && b41_19 && b42_17 && b43_30) {
matched = true;
pattern_id = 1624;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_4 && b28_18 && b29_25 && b30_19 && b31_39 && b32_31 && b33_20 && b34_35 && b35_27 && b36_22 && b37_14 && b38_21 && b39_32 && b40_13 && b41_33 && b42_16 && b43_17 && b44_14) {
matched = true;
pattern_id = 1625;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_14 && b22_28 && b23_28 && b24_3 && b25_27 && b26_46 && b27_4 && b28_18 && b29_25 && b30_19 && b31_39 && b32_31 && b33_20 && b34_35 && b35_27 && b36_22 && b37_14 && b38_21 && b39_32) {
matched = true;
pattern_id = 1626;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_31 && b23_16 && b24_20 && b25_33 && b26_45 && b27_27 && b28_1 && b29_25 && b30_27 && b31_32 && b32_27 && b33_22 && b34_31 && b35_2 && b36_10 && b37_27) {
matched = true;
pattern_id = 1627;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_2 && b33_34 && b34_21 && b35_33 && b36_15 && b37_21 && b38_35 && b39_15 && b40_15 && b41_33 && b42_9 && b43_15 && b44_30 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 1628;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_31 && b33_20 && b34_35 && b35_27 && b36_22 && b37_14 && b38_21 && b39_32 && b40_13 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 1629;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_9 && b33_16 && b34_31 && b35_33 && b36_25 && b37_23 && b38_28 && b39_24 && b40_14 && b41_17 && b42_16 && b43_17 && b44_34) {
matched = true;
pattern_id = 1630;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_41 && b33_35 && b34_35 && b35_42 && b36_28 && b37_21 && b38_35 && b39_15 && b40_15 && b41_33 && b42_9 && b43_15 && b44_30 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 1631;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_35 && b22_45 && b23_9 && b24_28 && b25_33 && b26_32 && b27_19 && b28_37 && b29_34 && b30_3 && b31_39 && b32_41 && b33_38 && b34_19 && b35_28 && b36_15 && b37_21 && b38_35 && b39_15 && b40_15 && b41_33 && b42_9 && b43_15 && b44_30 && b45_22 && b46_13 && b47_15 && b48_9) {
matched = true;
pattern_id = 1632;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_19 && b23_51 && b24_4 && b25_4 && b26_25 && b27_27 && b28_25 && b29_19 && b30_13 && b31_38 && b32_40 && b33_16 && b34_31 && b35_40 && b36_25 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 1633;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_19 && b23_51 && b24_4 && b25_4 && b26_25 && b27_27 && b28_1 && b29_3 && b30_36 && b31_14 && b32_37 && b33_38 && b34_2 && b35_2 && b36_26 && b37_31 && b38_20 && b39_10 && b40_25) {
matched = true;
pattern_id = 1634;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_36 && b27_1 && b28_26 && b29_30 && b30_36 && b31_14 && b32_37 && b33_20 && b34_24 && b35_20 && b36_26 && b37_25 && b38_30 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 1635;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_36 && b36_24 && b37_28 && b38_28) {
matched = true;
pattern_id = 1636;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_25 && b36_20 && b37_30 && b38_1) {
matched = true;
pattern_id = 1637;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_22 && b36_10 && b37_26 && b38_19 && b39_15) {
matched = true;
pattern_id = 1638;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_22 && b36_28 && b37_37 && b38_37 && b39_12 && b40_19) {
matched = true;
pattern_id = 1639;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_22 && b36_30 && b37_28 && b38_28 && b39_31 && b40_1 && b41_19 && b42_17 && b43_30) {
matched = true;
pattern_id = 1640;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_29 && b36_20 && b37_38) {
matched = true;
pattern_id = 1641;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36) {
matched = true;
pattern_id = 1642;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_24 && b27_33 && b28_18 && b29_34 && b30_18 && b31_29 && b32_20 && b33_36 && b34_38 && b35_37 && b36_20 && b37_31 && b38_18 && b39_29 && b40_24 && b41_17 && b42_6) {
matched = true;
pattern_id = 1643;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_27 && b27_18 && b28_30 && b29_30 && b30_35 && b31_27 && b32_40 && b33_16 && b34_16 && b35_29 && b36_19 && b37_30 && b38_26 && b39_26 && b40_21 && b41_15 && b42_10 && b43_23) {
matched = true;
pattern_id = 1644;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_27 && b27_18 && b28_30 && b29_30 && b30_35 && b31_27 && b32_40 && b33_16 && b34_16 && b35_29 && b36_19 && b37_30 && b38_26) {
matched = true;
pattern_id = 1645;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_41 && b27_37 && b28_18 && b29_42 && b30_20 && b31_14 && b32_37 && b33_20 && b34_24 && b35_20 && b36_26 && b37_25 && b38_30 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 1646;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_20 && b22_34 && b23_31 && b24_27 && b25_46 && b26_41 && b27_21 && b28_19 && b29_41 && b30_36 && b31_14 && b32_37 && b33_20 && b34_24 && b35_20 && b36_26 && b37_25 && b38_30 && b39_10 && b40_20 && b41_28 && b42_19) {
matched = true;
pattern_id = 1647;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_42 && b22_38 && b23_46 && b24_37 && b25_33 && b26_46 && b27_4 && b28_30 && b29_41 && b30_36 && b31_29 && b32_9 && b33_25 && b34_35 && b35_36 && b36_12) {
matched = true;
pattern_id = 1648;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_25 && b17_27 && b18_11 && b19_4 && b20_10 && b21_5 && b22_19 && b23_44 && b24_4 && b25_3 && b26_19 && b27_1 && b28_34 && b29_43 && b30_15 && b31_32 && b32_28 && b33_25 && b34_35 && b35_20 && b36_15 && b37_14 && b38_18 && b39_11) {
matched = true;
pattern_id = 1649;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_24 && b21_15 && b22_3 && b23_18 && b24_1 && b25_46 && b26_27 && b27_37 && b28_24 && b29_24 && b30_15 && b31_19 && b32_24 && b33_25 && b34_38 && b35_23 && b36_22 && b37_16 && b38_27 && b39_1 && b40_26 && b41_19 && b42_10 && b43_26 && b44_27 && b45_23) {
matched = true;
pattern_id = 1650;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_22 && b37_21 && b38_27 && b39_33 && b40_19 && b41_28 && b42_18 && b43_16) {
matched = true;
pattern_id = 1651;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_22 && b37_21 && b38_27 && b39_13 && b40_33 && b41_34 && b42_1 && b43_27 && b44_16) {
matched = true;
pattern_id = 1652;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_25 && b21_5 && b22_19 && b23_32 && b24_32 && b25_33 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_22 && b37_21 && b38_27 && b39_11 && b40_27 && b41_32 && b42_1 && b43_31 && b44_25) {
matched = true;
pattern_id = 1653;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_3 && b26_32 && b27_22 && b28_25 && b29_35 && b30_26 && b31_38 && b32_20 && b33_33 && b34_2 && b35_33 && b36_13 && b37_32 && b38_28 && b39_13 && b40_28 && b41_18) {
matched = true;
pattern_id = 1654;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_3 && b26_32 && b27_22 && b28_25 && b29_35 && b30_26 && b31_38 && b32_20 && b33_33 && b34_2 && b35_33 && b36_13 && b37_16 && b38_37 && b39_27 && b40_15 && b41_24 && b42_10) {
matched = true;
pattern_id = 1655;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_32 && b21_5 && b22_45 && b23_35 && b24_42 && b25_3 && b26_32 && b27_22 && b28_25 && b29_35 && b30_26 && b31_38 && b32_20 && b33_33 && b34_2 && b35_33 && b36_13 && b37_27 && b38_18 && b39_29 && b40_15 && b41_30 && b42_11) {
matched = true;
pattern_id = 1656;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_31 && b21_29 && b22_20 && b23_18 && b24_1 && b25_22 && b26_19 && b27_1 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_22 && b39_25 && b40_17 && b41_18 && b42_9 && b43_22 && b44_16) {
matched = true;
pattern_id = 1657;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_50 && b23_46 && b24_3 && b25_3 && b26_37 && b27_27 && b28_1 && b29_16 && b30_27 && b31_27 && b32_9 && b33_6 && b34_16 && b35_18 && b36_25 && b37_31 && b38_1 && b39_14 && b40_26 && b41_17 && b42_9 && b43_32 && b44_32) {
matched = true;
pattern_id = 1658;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_50 && b23_46 && b24_3 && b25_3 && b26_37 && b27_27 && b28_1 && b29_16 && b30_27 && b31_27 && b32_9 && b33_6 && b34_16 && b35_18 && b36_25 && b37_31 && b38_1 && b39_14 && b40_21 && b41_24 && b42_25 && b43_23 && b44_35 && b45_19) {
matched = true;
pattern_id = 1659;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_41 && b23_19 && b24_24 && b25_30 && b26_25 && b27_33 && b28_37 && b29_35 && b30_3 && b31_2 && b32_31 && b33_22 && b34_36 && b35_27 && b36_15 && b37_29 && b38_28 && b39_12 && b40_17 && b41_31 && b42_17 && b43_25 && b44_30 && b45_24) {
matched = true;
pattern_id = 1660;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_17 && b21_29 && b22_40 && b23_27 && b24_22 && b25_30 && b26_46 && b27_18 && b28_29 && b29_24 && b30_17 && b31_23 && b32_20 && b33_33 && b34_20 && b35_21 && b36_23 && b37_15 && b38_29) {
matched = true;
pattern_id = 1661;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_30 && b21_29 && b22_3 && b23_49 && b24_8 && b25_36 && b26_30 && b27_22 && b28_26 && b29_43 && b30_40 && b31_22 && b32_28 && b33_39 && b34_16 && b35_29) {
matched = true;
pattern_id = 1662;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_30 && b21_48 && b22_27 && b23_28 && b24_20 && b25_28 && b26_46 && b27_4 && b28_23 && b29_41 && b30_24 && b31_28 && b32_29 && b33_11 && b34_31 && b35_34 && b36_11 && b37_28 && b38_22 && b39_10 && b40_15 && b41_17) {
matched = true;
pattern_id = 1663;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_35 && b21_2 && b22_34 && b23_18 && b24_37 && b25_1 && b26_27 && b27_19 && b28_21 && b29_19 && b30_35 && b31_28 && b32_36 && b33_17 && b34_17 && b35_20 && b36_24 && b37_16 && b38_21 && b39_26 && b40_19 && b41_25 && b42_22 && b43_28 && b44_23 && b45_16 && b46_23 && b47_23) {
matched = true;
pattern_id = 1664;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_46 && b20_35 && b21_36 && b22_28 && b23_34 && b24_24 && b25_48 && b26_35 && b27_19 && b28_28 && b29_45 && b30_35 && b31_28 && b32_36 && b33_17 && b34_17 && b35_20 && b36_24 && b37_16 && b38_21 && b39_26 && b40_31 && b41_19 && b42_12 && b43_17 && b44_14 && b45_7) {
matched = true;
pattern_id = 1665;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_2 && b17_49 && b18_32 && b19_44 && b20_46 && b21_14 && b22_28 && b23_19 && b24_29 && b25_22 && b26_19 && b27_1 && b28_37 && b29_22 && b30_17 && b31_23 && b32_37 && b33_24 && b34_16 && b35_36 && b36_20 && b37_25 && b38_35 && b39_23 && b40_30 && b41_19 && b42_20 && b43_25 && b44_23) {
matched = true;
pattern_id = 1666;
}
if(b0_22 && b1_55 && b2_8 && b3_29 && b4_16 && b5_54 && b6_18 && b7_7 && b8_57 && b9_14 && b10_17 && b11_35 && b12_18 && b13_43 && b14_25 && b15_48 && b16_40 && b17_49 && b18_9 && b19_21 && b20_35 && b21_10 && b22_3 && b23_18 && b24_29 && b25_31 && b26_34 && b27_1 && b28_39 && b29_3 && b30_15 && b31_32 && b32_25 && b33_20 && b34_38 && b35_20 && b36_1 && b37_28 && b38_27 && b39_11 && b40_1 && b41_28 && b42_10 && b43_24 && b44_23 && b45_17 && b46_25 && b47_25 && b48_7 && b49_14 && b50_15 && b51_9) {
matched = true;
pattern_id = 1667;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_7) {
matched = true;
pattern_id = 1668;
}
if(b0_62 && b1_11 && b2_20 && b3_43 && b4_21 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1669;
}
if(b0_26 && b1_19 && b2_40 && b3_28 && b4_36 && b5_1 && b6_5) {
matched = true;
pattern_id = 1670;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_40 && b5_28 && b6_5 && b7_15 && b8_48 && b9_4 && b10_18 && b11_25 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 1671;
}
if(b0_4 && b1_4 && b2_7 && b3_28 && b4_4 && b5_1 && b6_12 && b7_4 && b8_27 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 1672;
}
if(b0_5 && b1_43 && b2_22 && b3_39 && b4_5 && b5_18) {
matched = true;
pattern_id = 1673;
}
if(b0_24 && b1_60 && b2_45 && b3_39 && b4_5 && b5_18) {
matched = true;
pattern_id = 1674;
}
if(b0_16 && b1_12 && b2_32 && b3_69 && b4_68 && b5_41 && b6_15 && b7_5 && b8_52 && b9_60 && b10_70) {
matched = true;
pattern_id = 1675;
}
if(b0_6 && b1_76 && b2_45) {
matched = true;
pattern_id = 1676;
}
if(b0_3 && b1_4 && b2_40) {
matched = true;
pattern_id = 1677;
}
if(b0_47 && b1_50 && b2_8 && b3_26 && b4_3 && b5_6 && b6_12 && b7_73 && b8_5 && b9_10 && b10_54 && b11_6 && b12_20 && b13_62 && b14_3 && b15_34 && b16_2 && b17_2 && b18_58 && b19_44 && b20_1 && b21_3 && b22_25 && b23_52 && b24_2 && b25_32 && b26_41 && b27_18 && b28_19 && b29_7 && b30_28 && b31_22 && b32_24 && b33_9 && b34_3 && b35_7 && b36_33 && b37_3 && b38_5 && b39_16 && b40_3 && b41_35 && b42_26 && b43_33 && b44_12 && b45_18 && b46_18 && b47_26 && b48_12 && b49_9 && b50_16 && b51_8 && b52_11 && b53_11 && b54_7 && b55_12 && b56_9 && b57_7 && b58_9 && b59_4 && b60_7 && b61_9 && b62_4 && b63_5 && b64_3 && b65_7 && b66_7 && b67_4 && b68_4 && b69_6 && b70_7 && b71_4 && b72_6 && b73_3 && b74_3) {
matched = true;
pattern_id = 1678;
}
if(b0_46 && b1_43 && b2_45 && b3_5 && b4_4 && b5_1 && b6_1 && b7_4 && b8_1 && b9_1 && b10_10 && b11_7) {
matched = true;
pattern_id = 1679;
}
if(b0_35 && b1_58 && b2_25 && b3_24 && b4_15 && b5_10 && b6_18 && b7_10 && b8_40 && b9_27 && b10_38 && b11_3 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 1680;
}
if(b0_56 && b1_3 && b2_24 && b3_24 && b4_44 && b5_40 && b6_2 && b7_15) {
matched = true;
pattern_id = 1681;
}
if(b0_38 && b1_2 && b2_6 && b3_50 && b4_27 && b5_8 && b6_7 && b7_1 && b8_54 && b9_15 && b10_48 && b11_42 && b12_6 && b13_63 && b14_17 && b15_31 && b16_58 && b17_29 && b18_22 && b19_1 && b20_40 && b21_2 && b22_52 && b23_29 && b24_4 && b25_4 && b26_25 && b27_16 && b28_45 && b29_23 && b30_22 && b31_26) {
matched = true;
pattern_id = 1682;
}
if(b0_16 && b1_49 && b2_11 && b3_30 && b4_9 && b5_41) {
matched = true;
pattern_id = 1683;
}
if(b0_67 && b1_34 && b2_5 && b3_67 && b4_5 && b5_63 && b6_31) {
matched = true;
pattern_id = 1684;
}
if(b0_7 && b1_28 && b2_40 && b3_63 && b4_64) {
matched = true;
pattern_id = 1685;
}
if(b0_24 && b1_10 && b2_5 && b3_5 && b4_63 && b5_5) {
matched = true;
pattern_id = 1686;
}
if(b0_24 && b1_73 && b2_34 && b3_10 && b4_8 && b5_18 && b6_4 && b7_27 && b8_52) {
matched = true;
pattern_id = 1687;
}
if(b0_9 && b1_4 && b2_45 && b3_57 && b4_13 && b5_5 && b6_9 && b7_74 && b8_38 && b9_46 && b10_45) {
matched = true;
pattern_id = 1688;
}
if(b0_6 && b1_4 && b2_36 && b3_9) {
matched = true;
pattern_id = 1689;
}
if(b0_24 && b1_28 && b2_5 && b3_9 && b4_8 && b5_61 && b6_5 && b7_18 && b8_1 && b9_4) {
matched = true;
pattern_id = 1690;
}
if(b0_6 && b1_43 && b2_36 && b3_44) {
matched = true;
pattern_id = 1691;
}
if(b0_14 && b1_51 && b2_32 && b3_28 && b4_2 && b5_6 && b6_36 && b7_21 && b8_8 && b9_5 && b10_2 && b11_39 && b12_51 && b13_26) {
matched = true;
pattern_id = 1692;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_10 && b8_47) {
matched = true;
pattern_id = 1693;
}
if(b0_28 && b1_3 && b2_3 && b3_40 && b4_22 && b5_16 && b6_7 && b7_45 && b8_35) {
matched = true;
pattern_id = 1694;
}
if(b0_11 && b1_24 && b2_14 && b3_11 && b4_3 && b5_42) {
matched = true;
pattern_id = 1695;
}
if(b0_14 && b1_15 && b2_46 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 1696;
}
if(b0_12 && b1_21 && b2_6 && b3_28 && b4_45 && b5_19 && b6_5 && b7_46 && b8_14 && b9_27 && b10_54 && b11_46 && b12_60 && b13_39 && b14_12 && b15_3 && b16_2 && b17_36 && b18_32 && b19_17 && b20_2 && b21_53) {
matched = true;
pattern_id = 1697;
}
if(b0_35 && b1_2 && b2_50 && b3_50 && b4_59 && b5_26 && b6_11 && b7_31 && b8_48 && b9_9 && b10_13 && b11_26) {
matched = true;
pattern_id = 1698;
}
if(b0_35 && b1_59 && b2_10 && b3_2 && b4_15 && b5_10 && b6_2 && b7_29 && b8_34 && b9_34 && b10_64) {
matched = true;
pattern_id = 1699;
}
if(b0_32 && b1_11 && b2_41 && b3_26) {
matched = true;
pattern_id = 1700;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_16 && b12_10) {
matched = true;
pattern_id = 1701;
}
if(b0_12 && b1_13 && b2_50 && b3_24 && b4_27 && b5_51 && b6_8 && b7_9 && b8_11 && b9_6 && b10_12 && b11_13 && b12_45 && b13_55 && b14_12 && b15_32 && b16_22 && b17_25 && b18_29 && b19_17 && b20_17 && b21_42 && b22_10 && b23_35) {
matched = true;
pattern_id = 1702;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_19 && b6_5 && b7_75 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_2 && b15_23 && b16_35 && b17_58 && b18_43 && b19_30 && b20_40 && b21_11 && b22_53 && b23_53 && b24_9 && b25_2 && b26_15 && b27_8) {
matched = true;
pattern_id = 1703;
}
if(b0_11 && b1_24 && b2_8 && b3_15 && b4_16 && b5_73 && b6_8 && b7_29 && b8_61 && b9_18 && b10_21 && b11_1 && b12_17 && b13_64 && b14_54 && b15_18 && b16_9 && b17_39 && b18_56 && b19_49 && b20_5 && b21_9 && b22_39 && b23_51 && b24_45 && b25_11 && b26_9 && b27_38 && b28_46 && b29_48 && b30_9 && b31_11 && b32_28 && b33_17 && b34_1 && b35_7 && b36_34 && b37_36 && b38_40 && b39_1 && b40_6 && b41_3) {
matched = true;
pattern_id = 1704;
}
if(b0_73 && b1_20 && b2_34 && b3_69 && b4_40 && b5_31 && b6_62) {
matched = true;
pattern_id = 1705;
}
if(b0_11 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_9 && b8_46 && b9_43 && b10_17 && b11_29) {
matched = true;
pattern_id = 1706;
}
if(b0_35) {
matched = true;
pattern_id = 1707;
}
if(b0_25 && b1_66 && b2_4 && b3_39 && b4_4 && b5_4 && b6_49 && b7_49 && b8_10) {
matched = true;
pattern_id = 1708;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_30 && b5_1 && b6_12 && b7_4 && b8_17 && b9_13 && b10_10 && b11_1 && b12_6 && b13_15 && b14_15 && b15_4 && b16_17 && b17_16 && b18_3 && b19_27 && b20_6 && b21_3 && b22_5 && b23_30 && b24_9) {
matched = true;
pattern_id = 1709;
}
if(b0_32 && b1_59 && b2_6 && b3_59) {
matched = true;
pattern_id = 1710;
}
if(b0_32 && b1_11 && b2_6 && b3_21 && b4_32 && b5_44 && b6_32 && b7_3) {
matched = true;
pattern_id = 1711;
}
if(b0_32 && b1_47 && b2_43 && b3_8 && b4_32 && b5_44 && b6_32 && b7_3) {
matched = true;
pattern_id = 1712;
}
if(b0_43) {
matched = true;
pattern_id = 1713;
}
if(b0_35 && b1_14 && b2_3 && b3_8 && b4_7 && b5_10 && b6_34 && b7_35 && b8_41 && b9_42 && b10_7 && b11_30 && b12_25) {
matched = true;
pattern_id = 1714;
}
if(b0_51 && b1_1 && b2_1 && b3_1 && b4_32 && b5_10 && b6_5 && b7_4 && b8_1 && b9_4 && b10_38 && b11_20 && b12_2 && b13_2 && b14_2 && b15_35 && b16_15 && b17_1 && b18_1 && b19_6 && b20_41 && b21_4 && b22_2 && b23_2 && b24_9 && b25_13 && b26_11 && b27_7 && b28_2 && b29_1 && b30_40 && b31_4 && b32_7 && b33_1 && b34_3 && b35_28 && b36_3 && b37_4 && b38_5 && b39_7 && b40_20 && b41_13 && b42_8 && b43_4 && b44_5 && b45_9 && b46_2 && b47_3 && b48_4 && b49_4 && b50_17 && b51_3 && b52_4 && b53_4 && b54_3 && b55_13 && b56_3 && b57_3 && b58_4 && b59_3 && b60_2 && b61_4 && b62_4 && b63_3 && b64_3 && b65_8 && b66_4 && b67_4 && b68_4 && b69_3 && b70_8 && b71_4 && b72_3 && b73_4 && b74_3 && b75_6 && b76_5 && b77_7 && b78_5 && b79_3 && b80_5 && b81_4 && b82_4 && b83_6 && b84_4 && b85_3 && b86_3 && b87_3 && b88_2 && b89_4 && b90_3 && b91_3 && b92_3 && b93_3 && b94_3 && b95_3 && b96_3 && b97_2 && b98_3 && b99_3 && b100_3 && b101_4 && b102_4 && b103_2 && b104_3 && b105_2 && b106_3 && b107_1 && b108_2 && b109_2 && b110_2 && b111_2 && b112_1 && b113_2 && b114_2 && b115_2 && b116_2 && b117_2 && b118_1 && b119_2 && b120_2 && b121_2 && b122_1 && b123_2 && b124_2 && b125_2 && b126_2 && b127_2 && b128_2 && b129_2) {
matched = true;
pattern_id = 1715;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_19 && b6_5 && b7_75 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_2) {
matched = true;
pattern_id = 1716;
}
if(b0_16 && b1_57 && b2_69 && b3_12 && b4_34 && b5_68 && b6_4 && b7_73 && b8_57 && b9_64 && b10_45 && b11_52 && b12_49) {
matched = true;
pattern_id = 1717;
}
if(b0_16 && b1_57 && b2_69 && b3_44 && b4_54 && b5_23 && b6_1 && b7_4 && b8_10 && b9_14 && b10_6 && b11_6 && b12_4 && b13_26 && b14_1 && b15_1 && b16_15 && b17_18 && b18_15 && b19_31 && b20_28) {
matched = true;
pattern_id = 1718;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_5 && b21_4) {
matched = true;
pattern_id = 1719;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_61) {
matched = true;
pattern_id = 1720;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_52) {
matched = true;
pattern_id = 1721;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_1 && b9_13 && b10_27 && b11_25 && b12_10) {
matched = true;
pattern_id = 1722;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_52 && b9_11 && b10_43 && b11_6 && b12_39 && b13_27 && b14_28 && b15_40) {
matched = true;
pattern_id = 1723;
}
if(b0_35 && b1_2 && b2_17 && b3_18 && b4_6 && b5_11 && b6_11 && b7_7 && b8_48 && b9_43 && b10_49) {
matched = true;
pattern_id = 1724;
}
if(b0_35 && b1_2 && b2_17 && b3_18 && b4_6 && b5_11 && b6_11 && b7_7 && b8_48 && b9_43 && b10_49 && b11_14) {
matched = true;
pattern_id = 1725;
}
if(b0_47 && b1_4 && b2_64 && b3_3 && b4_52 && b5_67) {
matched = true;
pattern_id = 1726;
}
if(b0_14 && b1_31 && b2_36 && b3_14 && b4_29 && b5_35 && b6_12 && b7_20 && b8_21 && b9_13 && b10_16 && b11_12 && b12_6 && b13_7 && b14_6 && b15_4 && b16_6 && b17_5 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_12 && b26_6 && b27_2 && b28_7 && b29_12 && b30_5 && b31_16 && b32_6 && b33_8 && b34_25 && b35_15 && b36_6 && b37_7 && b38_13 && b39_5 && b40_10 && b41_23 && b42_4 && b43_21 && b44_2 && b45_3 && b46_3 && b47_4 && b48_2 && b49_15 && b50_18 && b51_2 && b52_12 && b53_12 && b54_2 && b55_2 && b56_10 && b57_2 && b58_10 && b59_7 && b60_4) {
matched = true;
pattern_id = 1727;
}
if(b0_35 && b1_6 && b2_20 && b3_43 && b4_19 && b5_62 && b6_35 && b7_15 && b8_13 && b9_9) {
matched = true;
pattern_id = 1728;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 1729;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_56 && b16_16 && b17_29 && b18_22 && b19_35 && b20_9 && b21_54 && b22_5 && b23_7 && b24_7 && b25_31 && b26_21 && b27_45 && b28_6 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 1730;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_12 && b18_32 && b19_34 && b20_24 && b21_45 && b22_11 && b23_32 && b24_15 && b25_3) {
matched = true;
pattern_id = 1731;
}
if(b0_1 && b1_18 && b2_1 && b3_28 && b4_36 && b5_1 && b6_5) {
matched = true;
pattern_id = 1732;
}
if(b0_1 && b1_18 && b2_27 && b3_14 && b4_67 && b5_10 && b6_3 && b7_29 && b8_61 && b9_41 && b10_17 && b11_2 && b12_50 && b13_43 && b14_36 && b15_5 && b16_55 && b17_2 && b18_22 && b19_3 && b20_1 && b21_36 && b22_27 && b23_16 && b24_37) {
matched = true;
pattern_id = 1733;
}
if(b0_35 && b1_35 && b2_62 && b3_15 && b4_12 && b5_54 && b6_20 && b7_31 && b8_41 && b9_55 && b10_43 && b11_46 && b12_4) {
matched = true;
pattern_id = 1734;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_32 && b5_44 && b6_49 && b7_3 && b8_4 && b9_12 && b10_17 && b11_27 && b12_4 && b13_26 && b14_33 && b15_24 && b16_1 && b17_9 && b18_1 && b19_6 && b20_53 && b21_21 && b22_34 && b23_51 && b24_3 && b25_42 && b26_27 && b27_8 && b28_9 && b29_2 && b30_2 && b31_16 && b32_41 && b33_18 && b34_41 && b35_2 && b36_1 && b37_32 && b38_2 && b39_34 && b40_4 && b41_13 && b42_27 && b43_27 && b44_25 && b45_23 && b46_17 && b47_14 && b48_7) {
matched = true;
pattern_id = 1735;
}
if(b0_35 && b1_2 && b2_21 && b3_6 && b4_3 && b5_17 && b6_23) {
matched = true;
pattern_id = 1736;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_33 && b16_2 && b17_10 && b18_56 && b19_35 && b20_45 && b21_29 && b22_25 && b23_34 && b24_20 && b25_36 && b26_33) {
matched = true;
pattern_id = 1737;
}
if(b0_35 && b1_52 && b2_25 && b3_20 && b4_11 && b5_16 && b6_36 && b7_10 && b8_2 && b9_20 && b10_58 && b11_46 && b12_41 && b13_43 && b14_5 && b15_22 && b16_3 && b17_44 && b18_19 && b19_34 && b20_10 && b21_42 && b22_11 && b23_35) {
matched = true;
pattern_id = 1738;
}
if(b0_63 && b1_49 && b2_31 && b3_44 && b4_46 && b5_28 && b6_2) {
matched = true;
pattern_id = 1739;
}
if(b0_73 && b1_14 && b2_3 && b3_34 && b4_22 && b5_74 && b6_66 && b7_35 && b8_14 && b9_40 && b10_34 && b11_32 && b12_61 && b13_43 && b14_36 && b15_5 && b16_8 && b17_29 && b18_9 && b19_6 && b20_29 && b21_1 && b22_1 && b23_27 && b24_17 && b25_24 && b26_25 && b27_46) {
matched = true;
pattern_id = 1740;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_15 && b5_42 && b6_11 && b7_47 && b8_10 && b9_57 && b10_33 && b11_2 && b12_15 && b13_7 && b14_3 && b15_9 && b16_6 && b17_8) {
matched = true;
pattern_id = 1741;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_20 && b24_25 && b25_2 && b26_8 && b27_47 && b28_28 && b29_34 && b30_21 && b31_27 && b32_28 && b33_25 && b34_35 && b35_41 && b36_9 && b37_21 && b38_2 && b39_2 && b40_34 && b41_5 && b42_6 && b43_4 && b44_5 && b45_26) {
matched = true;
pattern_id = 1742;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_4 && b18_15 && b19_21 && b20_2 && b21_55 && b22_40 && b23_46 && b24_17 && b25_49 && b26_25 && b27_3 && b28_30) {
matched = true;
pattern_id = 1743;
}
if(b0_33 && b1_16 && b2_66) {
matched = true;
pattern_id = 1744;
}
if(b0_17 && b1_16 && b2_20 && b3_8 && b4_44 && b5_42 && b6_52 && b7_47 && b8_5) {
matched = true;
pattern_id = 1745;
}
if(b0_63 && b1_19 && b2_44 && b3_25 && b4_63 && b5_5 && b6_31 && b7_74 && b8_53 && b9_21 && b10_53 && b11_36 && b12_14 && b13_28 && b14_60 && b15_12 && b16_59) {
matched = true;
pattern_id = 1746;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_67 && b5_18 && b6_15 && b7_76 && b8_45 && b9_8 && b10_36 && b11_22 && b12_48) {
matched = true;
pattern_id = 1747;
}
if(b0_63 && b1_19 && b2_11 && b3_38 && b4_34 && b5_19 && b6_62 && b7_13 && b8_66) {
matched = true;
pattern_id = 1748;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_61 && b5_24 && b6_47 && b7_77 && b8_43 && b9_37 && b10_37 && b11_51 && b12_29 && b13_13 && b14_6 && b15_2 && b16_26 && b17_23 && b18_16 && b19_53) {
matched = true;
pattern_id = 1749;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_61 && b5_24 && b6_47 && b7_77 && b8_43 && b9_37 && b10_37 && b11_51 && b12_29 && b13_13 && b14_6 && b15_2 && b16_26 && b17_23 && b18_16 && b19_6 && b20_54 && b21_1 && b22_1 && b23_37 && b24_10 && b25_50 && b26_11 && b27_45 && b28_17 && b29_1 && b30_43) {
matched = true;
pattern_id = 1750;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_54 && b5_56 && b6_31 && b7_19 && b8_66) {
matched = true;
pattern_id = 1751;
}
if(b0_63 && b1_5 && b2_54 && b3_67 && b4_40 && b5_41 && b6_43 && b7_64 && b8_31 && b9_22 && b10_20) {
matched = true;
pattern_id = 1752;
}
if(b0_63 && b1_5 && b2_54 && b3_67 && b4_40 && b5_56 && b6_15 && b7_5 && b8_64 && b9_65) {
matched = true;
pattern_id = 1753;
}
if(b0_63 && b1_63 && b2_54 && b3_63 && b4_20 && b5_50 && b6_15 && b7_77 && b8_56 && b9_3 && b10_33 && b11_52 && b12_29 && b13_65) {
matched = true;
pattern_id = 1754;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_67 && b5_18 && b6_15 && b7_76 && b8_21 && b9_60 && b10_60 && b11_18 && b12_35 && b13_65) {
matched = true;
pattern_id = 1755;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_67 && b5_18 && b6_15 && b7_76 && b8_21 && b9_60 && b10_60 && b11_18 && b12_35 && b13_26 && b14_13 && b15_1 && b16_15 && b17_60 && b18_14 && b19_54 && b20_9 && b21_23 && b22_15 && b23_7 && b24_46) {
matched = true;
pattern_id = 1756;
}
if(b0_63 && b1_9 && b2_66 && b3_18 && b4_6 && b5_6 && b6_18 && b7_22 && b8_8 && b9_49 && b10_56 && b11_3 && b12_48) {
matched = true;
pattern_id = 1757;
}
if(b0_63 && b1_9 && b2_66 && b3_18 && b4_6 && b5_6 && b6_18 && b7_74 && b8_14 && b9_6 && b10_13 && b11_66) {
matched = true;
pattern_id = 1758;
}
if(b0_63 && b1_10 && b2_9 && b3_67 && b4_10 && b5_53) {
matched = true;
pattern_id = 1759;
}
if(b0_63 && b1_10 && b2_30 && b3_38 && b4_37) {
matched = true;
pattern_id = 1760;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_41 && b6_15 && b7_5 && b8_4 && b9_65) {
matched = true;
pattern_id = 1761;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_63 && b6_15 && b7_76 && b8_52 && b9_65) {
matched = true;
pattern_id = 1762;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_56 && b6_43 && b7_50 && b8_21 && b9_60 && b10_60 && b11_18 && b12_48) {
matched = true;
pattern_id = 1763;
}
if(b0_63 && b1_41 && b2_58 && b3_64 && b4_34 && b5_49 && b6_43 && b7_71) {
matched = true;
pattern_id = 1764;
}
if(b0_63 && b1_49 && b2_55 && b3_47 && b4_23 && b5_49 && b6_9 && b7_71) {
matched = true;
pattern_id = 1765;
}
if(b0_63 && b1_49 && b2_45 && b3_67 && b4_44 && b5_12 && b6_39 && b7_54 && b8_5 && b9_21 && b10_28 && b11_40 && b12_50 && b13_65) {
matched = true;
pattern_id = 1766;
}
if(b0_63 && b1_7 && b2_54 && b3_67 && b4_10 && b5_48 && b6_62 && b7_17 && b8_43 && b9_47 && b10_33 && b11_67 && b12_11 && b13_65) {
matched = true;
pattern_id = 1767;
}
if(b0_63 && b1_63 && b2_54 && b3_23 && b4_28 && b5_63 && b6_29 && b7_17 && b8_43 && b9_59 && b10_45 && b11_51 && b12_48) {
matched = true;
pattern_id = 1768;
}
if(b0_63 && b1_49 && b2_5 && b3_5 && b4_64 && b5_53) {
matched = true;
pattern_id = 1769;
}
if(b0_63 && b1_49 && b2_5 && b3_5 && b4_64 && b5_67 && b6_67 && b7_5 && b8_66) {
matched = true;
pattern_id = 1770;
}
if(b0_63 && b1_49 && b2_56 && b3_13 && b4_61 && b5_56 && b6_62 && b7_71) {
matched = true;
pattern_id = 1771;
}
if(b0_63 && b1_73 && b2_45 && b3_30 && b4_58 && b5_41 && b6_42 && b7_76 && b8_4 && b9_60 && b10_71 && b11_66) {
matched = true;
pattern_id = 1772;
}
if(b0_62 && b1_15 && b2_1 && b3_1 && b4_4 && b5_45) {
matched = true;
pattern_id = 1773;
}
if(b0_35 && b1_21 && b2_21 && b3_29 && b4_14 && b5_47 && b6_35 && b7_62) {
matched = true;
pattern_id = 1774;
}
if(b0_35 && b1_21 && b2_21 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 1775;
}
if(b0_35 && b1_14 && b2_14 && b3_29 && b4_14 && b5_47 && b6_35) {
matched = true;
pattern_id = 1776;
}
if(b0_36 && b1_15 && b2_46) {
matched = true;
pattern_id = 1777;
}
if(b0_30 && b1_2 && b2_6 && b3_11 && b4_43 && b5_23 && b6_68 && b7_19 && b8_3 && b9_16 && b10_3 && b11_20 && b12_62 && b13_60 && b14_24 && b15_25 && b16_44 && b17_29 && b18_22 && b19_6 && b20_12 && b21_45 && b22_13 && b23_21 && b24_16 && b25_6 && b26_8 && b27_4 && b28_28 && b29_19 && b30_17 && b31_22 && b32_42 && b33_16 && b34_37 && b35_35 && b36_35 && b37_10 && b38_41 && b39_35 && b40_2 && b41_12 && b42_6 && b43_11 && b44_25 && b45_14 && b46_14 && b47_15 && b48_3 && b49_16 && b50_19 && b51_2 && b52_13 && b53_13 && b54_3 && b55_3 && b56_11 && b57_8 && b58_11 && b59_8 && b60_6 && b61_10 && b62_7 && b63_6 && b64_7 && b65_9 && b66_7 && b67_6 && b68_6 && b69_7 && b70_9 && b71_6 && b72_6 && b73_6 && b74_3 && b75_7 && b76_6 && b77_3 && b78_6 && b79_5 && b80_5 && b81_5 && b82_5 && b83_2 && b84_2 && b85_4 && b86_5 && b87_1 && b88_4 && b89_5 && b90_4 && b91_3 && b92_2 && b93_4 && b94_4 && b95_4 && b96_4 && b97_3 && b98_4 && b99_4 && b100_4 && b101_5 && b102_5 && b103_3 && b104_3 && b105_3 && b106_4 && b107_2 && b108_3 && b109_3 && b110_3 && b111_1 && b112_2 && b113_3 && b114_3 && b115_3 && b116_3 && b117_3 && b118_2 && b119_3 && b120_1 && b121_2 && b122_2 && b123_3 && b124_3 && b125_3 && b126_3 && b127_3 && b128_3 && b129_3 && b130_2 && b131_2 && b132_2 && b133_2 && b134_1 && b135_2 && b136_1 && b137_2 && b138_2 && b139_2 && b140_2 && b141_2 && b142_2 && b143_2 && b144_2 && b145_2 && b146_1 && b147_2 && b148_2 && b149_2 && b150_2 && b151_2 && b152_2 && b153_2 && b154_1 && b155_2 && b156_2 && b157_2 && b158_2 && b159_2 && b160_2 && b161_2 && b162_2 && b163_2 && b164_2) {
matched = true;
pattern_id = 1778;
}
if(b0_12 && b1_56 && b2_3 && b3_6 && b4_59 && b5_52 && b6_10 && b7_10 && b8_40 && b9_5 && b10_12 && b11_34 && b12_49 && b13_37 && b14_24 && b15_15 && b16_29) {
matched = true;
pattern_id = 1779;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_2 && b5_25 && b6_8 && b7_29 && b8_5 && b9_4 && b10_10 && b11_12 && b12_10 && b13_16 && b14_20 && b15_16 && b16_29 && b17_21 && b18_15 && b19_28 && b20_30 && b21_29 && b22_20 && b23_6 && b24_28 && b25_21 && b26_25 && b27_33 && b28_6 && b29_2 && b30_10 && b31_4 && b32_34 && b33_11 && b34_32 && b35_1 && b36_4 && b37_4 && b38_2) {
matched = true;
pattern_id = 1780;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_7 && b5_10 && b6_10 && b7_9 && b8_42 && b9_34 && b10_2 && b11_1 && b12_11 && b13_26 && b14_35 && b15_30 && b16_30 && b17_25 && b18_29 && b19_38 && b20_3 && b21_48 && b22_19 && b23_46 && b24_33 && b25_36 && b26_34 && b27_17 && b28_6 && b29_2 && b30_10 && b31_4 && b32_34 && b33_11 && b34_32 && b35_1 && b36_4 && b37_4 && b38_2) {
matched = true;
pattern_id = 1781;
}
if(b0_73 && b1_61 && b2_8 && b3_40 && b4_17 && b5_16 && b6_46 && b7_9 && b8_67 && b9_32 && b10_8 && b11_9 && b12_53 && b13_15 && b14_44 && b15_58 && b16_28 && b17_23) {
matched = true;
pattern_id = 1782;
}
if(b0_22 && b1_3 && b2_3 && b3_5 && b4_27 && b5_27 && b6_7 && b7_14 && b8_12 && b9_10 && b10_2 && b11_42 && b12_13 && b13_26) {
matched = true;
pattern_id = 1783;
}
if(b0_12 && b1_58 && b2_41 && b3_30 && b4_11 && b5_6 && b6_55 && b7_9 && b8_65 && b9_49 && b10_11 && b11_40 && b12_5 && b13_22 && b14_17 && b15_31 && b16_15 && b17_9 && b18_14 && b19_6) {
matched = true;
pattern_id = 1784;
}
if(b0_14 && b1_29 && b2_9 && b3_14 && b4_49 && b5_39 && b6_5) {
matched = true;
pattern_id = 1785;
}
if(b0_54 && b1_32 && b2_43 && b3_24 && b4_69 && b5_3 && b6_39 && b7_45 && b8_41 && b9_10 && b10_26 && b11_6 && b12_3 && b13_66 && b14_36 && b15_59 && b16_5 && b17_32 && b18_31 && b19_55 && b20_20 && b21_56 && b22_19 && b23_54 && b24_1 && b25_51) {
matched = true;
pattern_id = 1786;
}
if(b0_14 && b1_51 && b2_34 && b3_14 && b4_36 && b5_33 && b6_5 && b7_47 && b8_42 && b9_14 && b10_11 && b11_3 && b12_10 && b13_31 && b14_32 && b15_4 && b16_27 && b17_14 && b18_3 && b19_26 && b20_19 && b21_4 && b22_54 && b23_16 && b24_32 && b25_6 && b26_13 && b27_38 && b28_8 && b29_49 && b30_44 && b31_10 && b32_15 && b33_41 && b34_3) {
matched = true;
pattern_id = 1787;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_63 && b13_36 && b14_21 && b15_40 && b16_8 && b17_29 && b18_3 && b19_2 && b20_24 && b21_38 && b22_19 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 1788;
}
if(b0_35 && b1_16 && b2_25 && b3_48 && b4_44 && b5_42 && b6_24 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 1789;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_18 && b5_52 && b6_35 && b7_3 && b8_1 && b9_18 && b10_2 && b11_61 && b12_38 && b13_6 && b14_12 && b15_33 && b16_22 && b17_44 && b18_32 && b19_6 && b20_1 && b21_47 && b22_1 && b23_27 && b24_17 && b25_35) {
matched = true;
pattern_id = 1790;
}
if(b0_14 && b1_15 && b2_32 && b3_28 && b4_22 && b5_10 && b6_20 && b7_32 && b8_42 && b9_11 && b10_13 && b11_35 && b12_55 && b13_22 && b14_12 && b15_3 && b16_15 && b17_1 && b18_12 && b19_6 && b20_41 && b21_29 && b22_3 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 1791;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_17 && b5_6 && b6_56 && b7_9 && b8_10 && b9_1 && b10_3 && b11_20 && b12_20 && b13_32 && b14_2 && b15_1 && b16_4 && b17_8) {
matched = true;
pattern_id = 1792;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_70 && b5_6 && b6_21 && b7_10 && b8_7 && b9_27 && b10_2 && b11_1 && b12_29 && b13_26 && b14_20 && b15_41 && b16_5 && b17_49 && b18_10 && b19_47 && b20_3 && b21_15 && b22_27 && b23_27 && b24_9 && b25_2 && b26_13 && b27_8 && b28_1 && b29_37 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 1793;
}
if(b0_12 && b1_45 && b2_70 && b3_58 && b4_68 && b5_27 && b6_8 && b7_58 && b8_68 && b9_24 && b10_66 && b11_9 && b12_40 && b13_47 && b14_22 && b15_8 && b16_18) {
matched = true;
pattern_id = 1794;
}
if(b0_35 && b1_58 && b2_43 && b3_8 && b4_18 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_28 && b11_47 && b12_4 && b13_27 && b14_21 && b15_41 && b16_52) {
matched = true;
pattern_id = 1795;
}
if(b0_73 && b1_14 && b2_3 && b3_34 && b4_22 && b5_74 && b6_66 && b7_2 && b8_5 && b9_27 && b10_7 && b11_32 && b12_61 && b13_21 && b14_17 && b15_25 && b16_5 && b17_2 && b18_37 && b19_34 && b20_28 && b21_42 && b22_52 && b23_18 && b24_47 && b25_42 && b26_35 && b27_43 && b28_47 && b29_1 && b30_1 && b31_15 && b32_3 && b33_20 && b34_24 && b35_26 && b36_22 && b37_21 && b38_22 && b39_29) {
matched = true;
pattern_id = 1796;
}
if(b0_21 && b1_8 && b2_16 && b3_7 && b4_24 && b5_6 && b6_55 && b7_9 && b8_48 && b9_34 && b10_6 && b11_47 && b12_17 && b13_38 && b14_24 && b15_30 && b16_22 && b17_55) {
matched = true;
pattern_id = 1797;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_55 && b24_25 && b25_2 && b26_8 && b27_8 && b28_9 && b29_8 && b30_2 && b31_43 && b32_27 && b33_35 && b34_19 && b35_27 && b36_32 && b37_27 && b38_2 && b39_2 && b40_34 && b41_13 && b42_4 && b43_34 && b44_5 && b45_27 && b46_26 && b47_9 && b48_2 && b49_17 && b50_20 && b51_10 && b52_14 && b53_3 && b54_8 && b55_11 && b56_2 && b57_4 && b58_12 && b59_9 && b60_4 && b61_9 && b62_8 && b63_7 && b64_1 && b65_10 && b66_8 && b67_7 && b68_7 && b69_2 && b70_10 && b71_7 && b72_5 && b73_7 && b74_7 && b75_3 && b76_5 && b77_8 && b78_7 && b79_3 && b80_5 && b81_6 && b82_6 && b83_7 && b84_5 && b85_5 && b86_3 && b87_4 && b88_5 && b89_4) {
matched = true;
pattern_id = 1798;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_32 && b5_38 && b6_15 && b7_1 && b8_27 && b9_39 && b10_1 && b11_42 && b12_14 && b13_26 && b14_30 && b15_36 && b16_40 && b17_36 && b18_32 && b19_44 && b20_31 && b21_21 && b22_42) {
matched = true;
pattern_id = 1799;
}
if(b0_14 && b1_18 && b2_36 && b3_28 && b4_8 && b5_10 && b6_55 && b7_55 && b8_11 && b9_12 && b10_2 && b11_42 && b12_11 && b13_26 && b14_25 && b15_37 && b16_44) {
matched = true;
pattern_id = 1800;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_16 && b6_46 && b7_34) {
matched = true;
pattern_id = 1801;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30 && b6_26 && b7_15 && b8_1 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_60 && b17_27 && b18_29 && b19_34 && b20_55) {
matched = true;
pattern_id = 1802;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_41 && b18_4 && b19_48 && b20_15 && b21_5 && b22_31 && b23_16 && b24_29 && b25_52 && b26_25 && b27_4 && b28_30 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1) {
matched = true;
pattern_id = 1803;
}
if(b0_35 && b1_52 && b2_29 && b3_55 && b4_60 && b5_45) {
matched = true;
pattern_id = 1804;
}
if(b0_35 && b1_40 && b2_14 && b3_24 && b4_12 && b5_40 && b6_8 && b7_7 && b8_40 && b9_45 && b10_64 && b11_59 && b12_38 && b13_41 && b14_17 && b15_17) {
matched = true;
pattern_id = 1805;
}
if(b0_32 && b1_62 && b2_14 && b3_49) {
matched = true;
pattern_id = 1806;
}
if(b0_35 && b1_58 && b2_25 && b3_49 && b4_18 && b5_29 && b6_20 && b7_9 && b8_48 && b9_27 && b10_11 && b11_35 && b12_45 && b13_39 && b14_4 && b15_3 && b16_3 && b17_55) {
matched = true;
pattern_id = 1807;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_52 && b6_19 && b7_47 && b8_37 && b9_14 && b10_17 && b11_47 && b12_5 && b13_27 && b14_36 && b15_25) {
matched = true;
pattern_id = 1808;
}
if(b0_16 && b1_11 && b2_62 && b3_43 && b4_12 && b5_42 && b6_35 && b7_51 && b8_39) {
matched = true;
pattern_id = 1809;
}
if(b0_35 && b1_2 && b2_16 && b3_7 && b4_3 && b5_6 && b6_11 && b7_11 && b8_55 && b9_44 && b10_54 && b11_55 && b12_16 && b13_55 && b14_25 && b15_3 && b16_2 && b17_37 && b18_55 && b19_4 && b20_3 && b21_5 && b22_52 && b23_24 && b24_17 && b25_35 && b26_25 && b27_48 && b28_18 && b29_16 && b30_19 && b31_36 && b32_27 && b33_22 && b34_31 && b35_33 && b36_1 && b37_30 && b38_42 && b39_23 && b40_20 && b41_20 && b42_1) {
matched = true;
pattern_id = 1810;
}
if(b0_17 && b1_2 && b2_8 && b3_18 && b4_31 && b5_10 && b6_10 && b7_29 && b8_37 && b9_12 && b10_10 && b11_1 && b12_39 && b13_45 && b14_20 && b15_60 && b16_61 && b17_46 && b18_1 && b19_21 && b20_56) {
matched = true;
pattern_id = 1811;
}
if(b0_22 && b1_16 && b2_16 && b3_37 && b4_35 && b5_42 && b6_7 && b7_7 && b8_35 && b9_27 && b10_11 && b11_35 && b12_12 && b13_48 && b14_55 && b15_15 && b16_22 && b17_46 && b18_4 && b19_23 && b20_10 && b21_35 && b22_45 && b23_9 && b24_23) {
matched = true;
pattern_id = 1812;
}
if(b0_26 && b1_5 && b2_22 && b3_60 && b4_14 && b5_27 && b6_20 && b7_53 && b8_47 && b9_3) {
matched = true;
pattern_id = 1813;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_71 && b5_30 && b6_56 && b7_53 && b8_49 && b9_42 && b10_28 && b11_47 && b12_37 && b13_22 && b14_17 && b15_25 && b16_24 && b17_40 && b18_18 && b19_40 && b20_3 && b21_19) {
matched = true;
pattern_id = 1814;
}
if(b0_73 && b1_9 && b2_16 && b3_9 && b4_27 && b5_56 && b6_11 && b7_41 && b8_40 && b9_14 && b10_6 && b11_26 && b12_32 && b13_38 && b14_61) {
matched = true;
pattern_id = 1815;
}
if(b0_31 && b1_45 && b2_4 && b3_52 && b4_8 && b5_23 && b6_59 && b7_31 && b8_27) {
matched = true;
pattern_id = 1816;
}
if(b0_13 && b1_40 && b2_8 && b3_8 && b4_17 && b5_6 && b6_8 && b7_39 && b8_10 && b9_16 && b10_73 && b11_20) {
matched = true;
pattern_id = 1817;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26) {
matched = true;
pattern_id = 1818;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_28 && b17_27 && b18_29 && b19_34 && b20_24 && b21_15 && b22_32 && b23_18 && b24_20 && b25_33 && b26_35 && b27_21 && b28_30 && b29_23 && b30_45 && b31_29 && b32_31 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 1819;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_62 && b17_27 && b18_15 && b19_47 && b20_27 && b21_2 && b22_41 && b23_56 && b24_21 && b25_34 && b26_3 && b27_16 && b28_48 && b29_3 && b30_24 && b31_4 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10) {
matched = true;
pattern_id = 1820;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_62 && b17_27 && b18_15 && b19_47 && b20_27 && b21_2 && b22_41 && b23_1 && b24_3 && b25_30 && b26_29 && b27_18 && b28_26 && b29_35 && b30_22 && b31_45 && b32_27 && b33_38 && b34_3 && b35_7 && b36_5 && b37_3 && b38_5 && b39_20 && b40_3) {
matched = true;
pattern_id = 1821;
}
if(b0_14 && b1_29 && b2_5 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 1822;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_37 && b7_57 && b8_42 && b9_11 && b10_38 && b11_4 && b12_17 && b13_53 && b14_17 && b15_61 && b16_1 && b17_29 && b18_11 && b19_49 && b20_35 && b21_10 && b22_1 && b23_23 && b24_13 && b25_13 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 1823;
}
if(b0_35 && b1_66 && b2_8 && b3_56 && b4_16 && b5_16 && b6_24 && b7_31 && b8_61 && b9_34 && b10_17 && b11_57 && b12_64 && b13_16 && b14_40 && b15_25 && b16_55 && b17_34 && b18_4 && b19_33) {
matched = true;
pattern_id = 1824;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_55 && b24_25 && b25_2 && b26_8 && b27_47 && b28_49 && b29_3 && b30_3 && b31_24 && b32_24 && b33_9 && b34_23 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_35 && b41_13 && b42_28 && b43_35 && b44_5 && b45_3 && b46_27 && b47_27 && b48_13 && b49_18 && b50_12 && b51_11 && b52_15 && b53_4 && b54_3 && b55_14 && b56_12 && b57_4 && b58_13 && b59_10 && b60_8 && b61_11 && b62_9 && b63_8 && b64_8 && b65_11 && b66_2 && b67_8 && b68_8 && b69_2 && b70_11 && b71_5 && b72_3 && b73_5 && b74_8 && b75_8 && b76_5 && b77_5 && b78_8 && b79_6 && b80_7 && b81_7 && b82_7 && b83_8 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5) {
matched = true;
pattern_id = 1825;
}
if(b0_14 && b1_18 && b2_33 && b3_14 && b4_45 && b5_32 && b6_12 && b7_18 && b8_17 && b9_4 && b10_32 && b11_20 && b12_31 && b13_17 && b14_2 && b15_6 && b16_48 && b17_15 && b18_1 && b19_6 && b20_51 && b21_39 && b22_1 && b23_27 && b24_9 && b25_15 && b26_18 && b27_8 && b28_33 && b29_50 && b30_46 && b31_4 && b32_15 && b33_42 && b34_3 && b35_16 && b36_36 && b37_40 && b38_5 && b39_7 && b40_9 && b41_2 && b42_3 && b43_15 && b44_5 && b45_27 && b46_7 && b47_9 && b48_4 && b49_19 && b50_21 && b51_12 && b52_16 && b53_3 && b54_5 && b55_15 && b56_6 && b57_3 && b58_14 && b59_3) {
matched = true;
pattern_id = 1826;
}
if(b0_35 && b1_11 && b2_6 && b3_21 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_17 && b10_35 && b11_34 && b12_19) {
matched = true;
pattern_id = 1827;
}
if(b0_14 && b1_18 && b2_33 && b3_14 && b4_36 && b5_1 && b6_5 && b7_19 && b8_6 && b9_14 && b10_6 && b11_26 && b12_5 && b13_26 && b14_27 && b15_45 && b16_15) {
matched = true;
pattern_id = 1828;
}
if(b0_35 && b1_24 && b2_14 && b3_18 && b4_6 && b5_11 && b6_24 && b7_44 && b8_14 && b9_19 && b10_13 && b11_13 && b12_16 && b13_27 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1829;
}
if(b0_14 && b1_18 && b2_36 && b3_28) {
matched = true;
pattern_id = 1830;
}
if(b0_35 && b1_5 && b2_20 && b3_34 && b4_12 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36 && b15_7 && b16_27 && b17_9 && b18_8 && b19_1 && b20_45 && b21_27 && b22_18 && b23_28 && b24_31 && b25_40 && b26_15 && b27_2 && b28_4 && b29_30 && b30_13 && b31_20 && b32_29 && b33_25 && b34_15 && b35_30 && b36_6 && b37_27 && b38_18 && b39_15 && b40_14 && b41_20 && b42_29 && b43_26 && b44_28 && b45_25 && b46_28 && b47_1 && b48_1 && b49_20 && b50_22 && b51_13 && b52_1 && b53_14 && b54_9 && b55_16 && b56_13 && b57_9 && b58_15) {
matched = true;
pattern_id = 1831;
}
if(b0_15 && b1_8 && b2_54 && b3_22 && b4_52 && b5_19 && b6_21 && b7_45 && b8_27 && b9_10 && b10_5 && b11_30 && b12_58 && b13_12 && b14_18 && b15_25 && b16_17 && b17_39 && b18_35 && b19_37 && b20_57 && b21_57 && b22_55 && b23_21 && b24_24 && b25_18 && b26_6 && b27_50 && b28_50 && b29_4 && b30_47 && b31_21) {
matched = true;
pattern_id = 1832;
}
if(b0_35 && b1_21 && b2_21 && b3_29 && b4_7 && b5_7 && b6_46) {
matched = true;
pattern_id = 1833;
}
if(b0_35 && b1_47 && b2_29 && b3_43 && b4_35 && b5_21 && b6_35 && b7_45 && b8_8 && b9_27 && b10_4 && b11_13 && b12_4 && b13_32 && b14_51 && b15_30 && b16_32 && b17_18 && b18_32 && b19_21) {
matched = true;
pattern_id = 1834;
}
if(b0_12 && b1_45 && b2_8 && b3_11 && b4_22 && b5_6 && b6_36 && b7_9 && b8_3 && b9_36 && b10_33 && b11_67 && b12_47 && b13_44 && b14_3 && b15_16 && b16_3 && b17_27 && b18_33 && b19_1 && b20_58 && b21_28 && b22_24 && b23_56 && b24_6 && b25_17 && b26_8 && b27_30 && b28_4 && b29_30 && b30_18 && b31_14 && b32_1 && b33_3 && b34_42 && b35_4 && b36_16 && b37_41 && b38_43 && b39_5 && b40_36 && b41_5) {
matched = true;
pattern_id = 1835;
}
if(b0_11 && b1_52 && b2_3 && b3_45 && b4_7 && b5_6 && b6_41) {
matched = true;
pattern_id = 1836;
}
if(b0_35 && b1_13 && b2_14 && b3_21 && b4_35 && b5_52 && b6_35 && b7_29 && b8_48 && b9_10 && b10_47 && b11_40) {
matched = true;
pattern_id = 1837;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_64) {
matched = true;
pattern_id = 1838;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_28 && b17_27 && b18_29 && b19_34 && b20_24 && b21_15 && b22_52 && b23_57 && b24_3 && b25_19 && b26_25 && b27_18 && b28_25 && b29_25 && b30_22 && b31_45 && b32_27 && b33_38 && b34_3 && b35_7 && b36_5 && b37_3 && b38_5 && b39_20 && b40_3) {
matched = true;
pattern_id = 1839;
}
if(b0_35 && b1_13 && b2_14 && b3_40 && b4_2 && b5_30 && b6_54 && b7_52 && b8_35 && b9_49 && b10_46 && b11_47 && b12_3 && b13_37 && b14_49 && b15_1 && b16_4 && b17_38 && b18_10 && b19_12 && b20_44) {
matched = true;
pattern_id = 1840;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_36 && b16_23 && b17_49 && b18_29 && b19_41 && b20_2 && b21_14 && b22_34 && b23_27 && b24_31 && b25_31 && b26_3 && b27_33 && b28_39 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1) {
matched = true;
pattern_id = 1841;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_36 && b16_22 && b17_10 && b18_33 && b19_9 && b20_50 && b21_30 && b22_19 && b23_46 && b24_44 && b25_31 && b26_30 && b27_36 && b28_29 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1) {
matched = true;
pattern_id = 1842;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_62 && b16_3 && b17_27 && b18_11 && b19_34 && b20_3 && b21_52 && b22_37 && b23_10 && b24_10 && b25_13 && b26_17 && b27_33 && b28_31 && b29_47 && b30_15 && b31_14 && b32_40 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 1843;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_16 && b18_59 && b19_6 && b20_12 && b21_45 && b22_1) {
matched = true;
pattern_id = 1844;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_27 && b6_8 && b7_32 && b8_37) {
matched = true;
pattern_id = 1845;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_7 && b8_54 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 1846;
}
if(b0_35 && b1_50 && b2_20 && b3_18 && b4_27 && b5_47 && b6_55 && b7_31 && b8_34 && b9_42 && b10_58 && b11_35 && b12_36 && b13_39) {
matched = true;
pattern_id = 1847;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_1 && b8_27 && b9_1 && b10_2 && b11_47 && b12_50 && b13_5 && b14_38 && b15_63 && b16_24 && b17_34 && b18_18 && b19_42 && b20_49 && b21_2 && b22_18 && b23_16 && b24_24 && b25_31 && b26_3 && b27_33 && b28_39) {
matched = true;
pattern_id = 1848;
}
if(b0_35 && b1_22 && b2_8 && b3_26 && b4_26 && b5_42 && b6_59 && b7_9) {
matched = true;
pattern_id = 1849;
}
if(b0_74 && b1_13 && b2_48) {
matched = true;
pattern_id = 1850;
}
if(b0_14 && b1_28 && b2_36 && b3_14 && b4_13 && b5_32 && b6_12 && b7_27 && b8_21 && b9_13 && b10_62 && b11_1 && b12_6 && b13_33 && b14_7 && b15_4 && b16_4 && b17_7 && b18_3 && b19_3 && b20_54 && b21_4) {
matched = true;
pattern_id = 1851;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_64 && b16_46 && b17_10 && b18_29 && b19_31 && b20_44 && b21_36) {
matched = true;
pattern_id = 1852;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_2 && b5_29 && b6_46 && b7_47 && b8_40 && b9_4 && b10_10 && b11_10 && b12_10 && b13_30 && b14_20 && b15_41 && b16_44 && b17_54 && b18_4 && b19_12 && b20_37 && b21_27 && b22_20 && b23_18 && b24_22 && b25_6 && b26_2 && b27_13 && b28_6 && b29_27 && b30_13 && b31_45 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 1853;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_19 && b5_16 && b6_38 && b7_31 && b8_2 && b9_50 && b10_50 && b11_57 && b12_26 && b13_4 && b14_41 && b15_7 && b16_4 && b17_7 && b18_8 && b19_31 && b20_17 && b21_38) {
matched = true;
pattern_id = 1854;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_53 && b5_16 && b6_59 && b7_35 && b8_6 && b9_4 && b10_10 && b11_17 && b12_10 && b13_30 && b14_21 && b15_20) {
matched = true;
pattern_id = 1855;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_53 && b5_16 && b6_59 && b7_35 && b8_6 && b9_4 && b10_10 && b11_17 && b12_10 && b13_22 && b14_17 && b15_25) {
matched = true;
pattern_id = 1856;
}
if(b0_35 && b1_2 && b2_50 && b3_50 && b4_35 && b5_47 && b6_7 && b7_14 && b8_11 && b9_43 && b10_48 && b11_64 && b12_16) {
matched = true;
pattern_id = 1857;
}
if(b0_14 && b1_38 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_67 && b8_52 && b9_13 && b10_10 && b11_1 && b12_6 && b13_64 && b14_7 && b15_4 && b16_4 && b17_1 && b18_3 && b19_54 && b20_29 && b21_3 && b22_2 && b23_2 && b24_2 && b25_15 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_46 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_24 && b38_8 && b39_5 && b40_4 && b41_4 && b42_4 && b43_36 && b44_8 && b45_3 && b46_4 && b47_3 && b48_3) {
matched = true;
pattern_id = 1858;
}
if(b0_22 && b1_8 && b2_6 && b3_11 && b4_59 && b5_27 && b6_8 && b7_46 && b8_11 && b9_17 && b10_46 && b11_47 && b12_26 && b13_19 && b14_17 && b15_27) {
matched = true;
pattern_id = 1859;
}
if(b0_19 && b1_24 && b2_20 && b3_48 && b4_15 && b5_6 && b6_8 && b7_29 && b8_5 && b9_14 && b10_12 && b11_46 && b12_7 && b13_5 && b14_27 && b15_17 && b16_26 && b17_27 && b18_31 && b19_35 && b20_28 && b21_27 && b22_45 && b23_16) {
matched = true;
pattern_id = 1860;
}
if(b0_19 && b1_24 && b2_20 && b3_48 && b4_15 && b5_6 && b6_8 && b7_29 && b8_5 && b9_14 && b10_12 && b11_46 && b12_7 && b13_5 && b14_27 && b15_17 && b16_63 && b17_29 && b18_56 && b19_21 && b20_2 && b21_10 && b22_11) {
matched = true;
pattern_id = 1861;
}
if(b0_55 && b1_18 && b2_1 && b3_4 && b4_45 && b5_40 && b6_14 && b7_11 && b8_40 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7) {
matched = true;
pattern_id = 1862;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_69 && b7_1 && b8_42 && b9_43 && b10_5 && b11_30 && b12_38 && b13_30 && b14_20 && b15_25 && b16_24 && b17_27 && b18_11 && b19_43 && b20_43 && b21_19 && b22_28 && b23_54 && b24_22 && b25_18 && b26_24 && b27_31 && b28_18 && b29_26 && b30_27 && b31_32 && b32_27 && b33_11 && b34_37 && b35_17 && b36_37 && b37_26 && b38_21 && b39_9 && b40_30 && b41_36 && b42_30 && b43_31 && b44_36 && b45_28 && b46_14 && b47_14 && b48_14 && b49_21 && b50_23 && b51_1 && b52_17 && b53_15 && b54_10 && b55_17 && b56_14 && b57_10 && b58_9 && b59_11 && b60_9 && b61_3 && b62_10 && b63_9 && b64_9 && b65_12 && b66_9 && b67_9 && b68_9 && b69_8 && b70_12 && b71_8 && b72_7 && b73_8 && b74_9 && b75_4 && b76_7 && b77_9 && b78_9 && b79_7 && b80_8 && b81_2 && b82_8 && b83_9 && b84_6 && b85_6 && b86_7 && b87_5 && b88_4 && b89_7 && b90_6 && b91_4 && b92_4 && b93_5 && b94_5 && b95_5 && b96_5 && b97_4 && b98_5 && b99_5 && b100_5 && b101_4 && b102_6 && b103_4 && b104_2 && b105_4 && b106_5 && b107_3 && b108_2 && b109_4 && b110_4 && b111_3 && b112_3 && b113_4) {
matched = true;
pattern_id = 1863;
}
if(b0_35 && b1_6 && b2_15 && b3_15 && b4_3 && b5_20 && b6_7 && b7_8 && b8_15 && b9_10 && b10_50 && b11_4 && b12_7 && b13_18 && b14_40 && b15_35 && b16_39 && b17_33 && b18_60) {
matched = true;
pattern_id = 1864;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_65 && b16_34 && b17_16 && b18_54 && b19_56 && b20_58 && b21_58 && b22_12) {
matched = true;
pattern_id = 1865;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_66 && b16_64 && b17_61 && b18_45 && b19_13 && b20_36 && b21_13 && b22_56 && b23_7 && b24_16 && b25_12 && b26_11 && b27_51 && b28_16 && b29_9) {
matched = true;
pattern_id = 1866;
}
if(b0_53 && b1_77) {
matched = true;
pattern_id = 1867;
}
if(b0_42 && b1_2 && b2_63 && b3_4 && b4_22 && b5_56) {
matched = true;
pattern_id = 1868;
}
if(b0_6 && b1_3 && b2_49 && b3_11 && b4_17 && b5_6 && b6_10 && b7_78 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_4 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 1869;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_16 && b5_28 && b6_70 && b7_7 && b8_27 && b9_15 && b10_11 && b11_68 && b12_33 && b13_8 && b14_16 && b15_44 && b16_55 && b17_49 && b18_8 && b19_3 && b20_22 && b21_4 && b22_39 && b23_25 && b24_17 && b25_42 && b26_36 && b27_24 && b28_34 && b29_34 && b30_3 && b31_32 && b32_3 && b33_1 && b34_13 && b35_1 && b36_1 && b37_21 && b38_21) {
matched = true;
pattern_id = 1870;
}
if(b0_53 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8 && b7_3 && b8_27 && b9_39 && b10_2 && b11_17 && b12_12 && b13_2 && b14_3 && b15_7 && b16_27 && b17_6 && b18_8 && b19_27 && b20_3 && b21_19 && b22_40 && b23_32 && b24_32 && b25_1 && b26_22 && b27_31 && b28_21 && b29_1 && b30_1 && b31_7 && b32_1 && b33_43 && b34_43 && b35_1 && b36_38 && b37_31 && b38_30 && b39_10 && b40_28 && b41_33 && b42_3 && b43_30 && b44_2 && b45_4 && b46_7 && b47_2 && b48_15) {
matched = true;
pattern_id = 1871;
}
if(b0_33 && b1_21 && b2_50 && b3_6 && b4_43 && b5_47 && b6_7 && b7_9 && b8_41 && b9_6 && b10_35 && b11_46 && b12_3 && b13_19 && b14_21 && b15_67) {
matched = true;
pattern_id = 1872;
}
if(b0_64 && b1_52 && b2_18 && b3_4 && b4_43) {
matched = true;
pattern_id = 1873;
}
if(b0_32 && b1_11 && b2_20 && b3_34 && b4_46) {
matched = true;
pattern_id = 1874;
}
if(b0_22 && b1_8 && b2_62 && b3_18 && b4_27 && b5_40 && b6_7 && b7_51 && b8_35 && b9_27 && b10_11 && b11_37 && b12_45 && b13_40 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 1875;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_14 && b5_10 && b6_55 && b7_9 && b8_5 && b9_11 && b10_13) {
matched = true;
pattern_id = 1876;
}
if(b0_45 && b1_13 && b2_25 && b3_20 && b4_18 && b5_30 && b6_26 && b7_4 && b8_10 && b9_16 && b10_10 && b11_20) {
matched = true;
pattern_id = 1877;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_24 && b7_44 && b8_16 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_24 && b15_18 && b16_52) {
matched = true;
pattern_id = 1878;
}
if(b0_35 && b1_11 && b2_16 && b3_48 && b4_27 && b5_25 && b6_20 && b7_44 && b8_16 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_24 && b15_18 && b16_52) {
matched = true;
pattern_id = 1879;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_24 && b5_26 && b6_55 && b7_7 && b8_14 && b9_34 && b10_9 && b11_40 && b12_38 && b13_36 && b14_28 && b15_7 && b16_4 && b17_11 && b18_8 && b19_12 && b20_27 && b21_35 && b22_31 && b23_58 && b24_3 && b25_6 && b26_2 && b27_13 && b28_6 && b29_16 && b30_19 && b31_32 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 1880;
}
if(b0_73 && b1_21 && b2_49 && b3_20 && b4_18 && b5_27 && b6_7) {
matched = true;
pattern_id = 1881;
}
if(b0_14 && b1_15 && b2_36 && b3_28 && b4_6 && b5_7 && b6_7 && b7_11 && b8_16 && b9_27 && b10_38 && b11_3 && b12_32 && b13_43 && b14_35 && b15_15 && b16_30 && b17_35 && b18_22 && b19_6 && b20_1 && b21_47 && b22_1 && b23_16 && b24_3 && b25_30 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 1882;
}
if(b0_35 && b1_40 && b2_25 && b3_11 && b4_16 && b5_64 && b6_10 && b7_10 && b8_69 && b9_29 && b10_50 && b11_40 && b12_4 && b13_6) {
matched = true;
pattern_id = 1883;
}
if(b0_26 && b1_7 && b2_56 && b3_26 && b4_6 && b5_12) {
matched = true;
pattern_id = 1884;
}
if(b0_8 && b1_8 && b2_8 && b3_8 && b4_27 && b5_12 && b6_41) {
matched = true;
pattern_id = 1885;
}
if(b0_28 && b1_8 && b2_20 && b3_16 && b4_22 && b5_6 && b6_39 && b7_7 && b8_5 && b9_14 && b10_43 && b11_6 && b12_3 && b13_38 && b14_17 && b15_41 && b16_44) {
matched = true;
pattern_id = 1886;
}
if(b0_57 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8) {
matched = true;
pattern_id = 1887;
}
if(b0_14 && b1_37 && b2_34 && b3_28 && b4_1 && b5_3 && b6_35 && b7_54 && b8_5 && b9_11 && b10_28 && b11_26 && b12_5 && b13_20) {
matched = true;
pattern_id = 1888;
}
if(b0_35 && b1_59 && b2_14 && b3_43 && b4_16 && b5_10 && b6_56 && b7_7 && b8_15 && b9_19 && b10_5 && b11_34 && b12_17 && b13_38 && b14_17 && b15_38 && b16_2 && b17_29 && b18_32 && b19_21 && b20_25 && b21_7 && b22_46 && b23_3 && b24_8 && b25_40) {
matched = true;
pattern_id = 1889;
}
if(b0_26 && b1_20 && b2_45 && b3_5 && b4_1 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36 && b15_4 && b16_60 && b17_43 && b18_51 && b19_29 && b20_13 && b21_9 && b22_37 && b23_12 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2 && b31_18 && b32_24 && b33_35 && b34_31 && b35_33 && b36_1 && b37_30 && b38_42 && b39_36 && b40_25 && b41_18 && b42_1 && b43_37 && b44_18 && b45_20 && b46_23 && b47_28 && b48_16 && b49_6 && b50_13 && b51_14 && b52_10 && b53_16 && b54_11 && b55_18 && b56_9 && b57_8 && b58_1 && b59_12 && b60_10 && b61_12 && b62_1 && b63_1 && b64_3 && b65_13 && b66_10 && b67_3 && b68_5 && b69_9 && b70_8 && b71_9 && b72_8 && b73_9 && b74_10 && b75_6 && b76_8 && b77_10) {
matched = true;
pattern_id = 1890;
}
if(b0_68 && b1_50 && b2_41 && b3_11 && b4_53 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 1891;
}
if(b0_73 && b1_75 && b2_47 && b3_51 && b4_16 && b5_6 && b6_34 && b7_68 && b8_1 && b9_24 && b10_59 && b11_69 && b12_59) {
matched = true;
pattern_id = 1892;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_53 && b13_6 && b14_17 && b15_31 && b16_5 && b17_28 && b18_24 && b19_18 && b20_8 && b21_4 && b22_10 && b23_13 && b24_9 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_39 && b37_17 && b38_44 && b39_7 && b40_9 && b41_2 && b42_4 && b43_30 && b44_3 && b45_3 && b46_8 && b47_6 && b48_3 && b49_22 && b50_24 && b51_15 && b52_18 && b53_17 && b54_12 && b55_19 && b56_3) {
matched = true;
pattern_id = 1893;
}
if(b0_28 && b1_2 && b2_3 && b3_11 && b4_26 && b5_52 && b6_19 && b7_47 && b8_10 && b9_57 && b10_16 && b11_20 && b12_20 && b13_5 && b14_41 && b15_17) {
matched = true;
pattern_id = 1894;
}
if(b0_28 && b1_2 && b2_3 && b3_11 && b4_26 && b5_52 && b6_19 && b7_47 && b8_10 && b9_57 && b10_16 && b11_20 && b12_38 && b13_19 && b14_19) {
matched = true;
pattern_id = 1895;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_4 && b5_33 && b6_3 && b7_3 && b8_1 && b9_66 && b10_2 && b11_27 && b12_26 && b13_55 && b14_24 && b15_5 && b16_15 && b17_1 && b18_58 && b19_6 && b20_27 && b21_2 && b22_50 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 1896;
}
if(b0_22 && b1_64 && b2_43 && b3_24 && b4_27 && b5_55 && b6_7 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_38 && b13_19 && b14_19) {
matched = true;
pattern_id = 1897;
}
if(b0_22 && b1_64 && b2_3 && b3_26 && b4_2 && b5_57 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_37 && b12_39 && b13_20) {
matched = true;
pattern_id = 1898;
}
if(b0_32 && b1_11 && b2_20 && b3_34 && b4_26 && b5_54 && b6_10 && b7_3 && b8_1 && b9_3 && b10_1 && b11_1 && b12_29 && b13_1 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 1899;
}
if(b0_32 && b1_24 && b2_43 && b3_27 && b4_18 && b5_16 && b6_21 && b7_8 && b8_42 && b9_9 && b10_26 && b11_30 && b12_26 && b13_62 && b14_34 && b15_22 && b16_30 && b17_25 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_2 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 1900;
}
if(b0_8 && b1_6 && b2_3 && b3_50 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1901;
}
if(b0_22 && b1_6 && b2_20 && b3_50 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1902;
}
if(b0_21 && b1_21 && b2_25 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1903;
}
if(b0_22 && b1_24 && b2_25 && b3_11 && b4_7 && b5_23 && b6_51 && b7_19 && b8_10) {
matched = true;
pattern_id = 1904;
}
if(b0_22 && b1_21 && b2_6 && b3_50 && b4_22 && b5_6 && b6_5 && b7_24 && b8_32 && b9_4) {
matched = true;
pattern_id = 1905;
}
if(b0_13 && b1_8 && b2_12 && b3_15 && b4_3 && b5_52 && b6_3 && b7_7 && b8_35 && b9_4 && b10_44 && b11_10 && b12_10) {
matched = true;
pattern_id = 1906;
}
if(b0_21 && b1_2 && b2_3 && b3_26 && b4_7 && b5_10 && b6_24 && b7_9 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1907;
}
if(b0_22 && b1_55 && b2_21 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1908;
}
if(b0_52 && b1_58 && b2_50 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1909;
}
if(b0_52 && b1_58 && b2_50 && b3_21 && b4_18 && b5_42 && b6_8 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1910;
}
if(b0_21 && b1_2 && b2_3 && b3_26 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1911;
}
if(b0_68 && b1_11 && b2_6 && b3_50 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1912;
}
if(b0_33 && b1_11 && b2_50 && b3_21 && b4_18 && b5_42 && b6_8 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1913;
}
if(b0_21 && b1_2 && b2_3 && b3_26 && b4_19 && b5_6 && b6_11 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1914;
}
if(b0_11 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1915;
}
if(b0_21 && b1_50 && b2_8 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1916;
}
if(b0_54 && b1_54 && b2_25 && b3_40 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1917;
}
if(b0_20 && b1_3 && b2_8 && b3_6 && b4_22 && b5_55 && b6_7 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1918;
}
if(b0_12 && b1_50 && b2_3 && b3_15 && b4_16 && b5_12 && b6_3 && b7_7 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1919;
}
if(b0_20 && b1_2 && b2_21 && b3_16 && b4_12 && b5_23 && b6_51 && b7_19 && b8_10) {
matched = true;
pattern_id = 1920;
}
if(b0_23 && b1_6 && b2_50 && b3_28 && b4_38 && b5_31 && b6_5) {
matched = true;
pattern_id = 1921;
}
if(b0_21 && b1_8 && b2_17 && b3_43 && b4_22 && b5_10 && b6_8 && b7_29 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1922;
}
if(b0_23 && b1_2 && b2_8 && b3_8 && b4_16 && b5_12 && b6_3 && b7_7 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1923;
}
if(b0_22 && b1_24 && b2_20 && b3_2 && b4_15 && b5_42 && b6_11 && b7_47 && b8_10 && b9_67 && b10_15 && b11_20) {
matched = true;
pattern_id = 1924;
}
if(b0_12 && b1_24 && b2_24 && b3_17 && b4_6 && b5_42 && b6_46 && b7_3 && b8_30 && b9_36 && b10_2) {
matched = true;
pattern_id = 1925;
}
if(b0_23 && b1_56 && b2_24 && b3_24 && b4_32 && b5_33 && b6_9 && b7_3) {
matched = true;
pattern_id = 1926;
}
if(b0_35 && b1_24 && b2_20 && b3_26 && b4_16 && b5_6 && b6_10 && b7_15 && b8_41 && b9_43 && b10_49) {
matched = true;
pattern_id = 1927;
}
if(b0_35 && b1_11 && b2_20 && b3_18 && b4_45 && b5_59 && b6_23 && b7_11 && b8_7) {
matched = true;
pattern_id = 1928;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_72 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13 && b11_2 && b12_4 && b13_47 && b14_36 && b15_3 && b16_52 && b17_8 && b18_25 && b19_26 && b20_9 && b21_36 && b22_19 && b23_37 && b24_32 && b25_20 && b26_48 && b27_22 && b28_42 && b29_41 && b30_15 && b31_40 && b32_40 && b33_16 && b34_17 && b35_18 && b36_3 && b37_6 && b38_3 && b39_7 && b40_2 && b41_33 && b42_17 && b43_27 && b44_37 && b45_4 && b46_29 && b47_29 && b48_3 && b49_23 && b50_25 && b51_16 && b52_10 && b53_18 && b54_13 && b55_20 && b56_15 && b57_11 && b58_16 && b59_1 && b60_11 && b61_12 && b62_11 && b63_10 && b64_10 && b65_3 && b66_11 && b67_10 && b68_7 && b69_3 && b70_13 && b71_10 && b72_2 && b73_10 && b74_11 && b75_9 && b76_1 && b77_11 && b78_10 && b79_8 && b80_9 && b81_8 && b82_9 && b83_2 && b84_3 && b85_2 && b86_3) {
matched = true;
pattern_id = 1929;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_11 && b5_26 && b6_7 && b7_55 && b8_14 && b9_14 && b10_34 && b11_6 && b12_37 && b13_26 && b14_1 && b15_9 && b16_15 && b17_18 && b18_23 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 1930;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_6 && b5_6 && b6_55 && b7_9 && b8_15 && b9_49 && b10_35 && b11_49 && b12_28 && b13_43 && b14_39 && b15_33 && b16_3 && b17_47 && b18_29 && b19_44 && b20_59 && b21_42 && b22_41) {
matched = true;
pattern_id = 1931;
}
if(b0_14 && b1_37 && b2_34 && b3_28 && b4_1 && b5_68 && b6_29 && b7_64 && b8_52 && b9_13 && b10_73 && b11_57 && b12_2 && b13_26 && b14_33 && b15_62 && b16_15 && b17_2 && b18_61 && b19_22 && b20_41 && b21_20 && b22_45 && b23_36 && b24_24 && b25_13 && b26_49 && b27_52 && b28_8 && b29_49 && b30_22 && b31_3 && b32_46 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7 && b40_8 && b41_24 && b42_31 && b43_23 && b44_32 && b45_22 && b46_30 && b47_16 && b48_17 && b49_23 && b50_26 && b51_3 && b52_4 && b53_2 && b54_2 && b55_4 && b56_16 && b57_4) {
matched = true;
pattern_id = 1932;
}
if(b0_35 && b1_24 && b2_14 && b3_43 && b4_60 && b5_6 && b6_55 && b7_29 && b8_14 && b9_14 && b10_11 && b11_3 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8) {
matched = true;
pattern_id = 1933;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_37 && b41_15 && b42_19 && b43_8 && b44_33 && b45_4 && b46_8 && b47_6 && b48_3 && b49_22 && b50_27 && b51_17 && b52_19 && b53_19 && b54_14 && b55_20 && b56_4 && b57_12 && b58_17 && b59_13 && b60_12 && b61_13 && b62_1 && b63_11 && b64_5 && b65_14 && b66_9 && b67_11 && b68_10 && b69_10 && b70_14 && b71_11 && b72_9 && b73_11 && b74_12) {
matched = true;
pattern_id = 1934;
}
if(b0_73 && b1_1 && b2_26 && b3_63 && b4_32 && b5_23 && b6_68 && b7_19 && b8_10 && b9_4 && b10_62 && b11_10 && b12_10 && b13_67 && b14_31 && b15_8 && b16_26 && b17_23 && b18_62 && b19_6 && b20_12 && b21_45 && b22_1 && b23_7 && b24_49 && b25_5 && b26_11 && b27_8 && b28_51 && b29_6 && b30_2 && b31_47) {
matched = true;
pattern_id = 1935;
}
if(b0_35 && b1_50 && b2_43 && b3_8 && b4_7 && b5_11 && b6_52 && b7_15 && b8_6 && b9_10 && b10_35 && b11_30 && b12_22) {
matched = true;
pattern_id = 1936;
}
if(b0_57 && b1_2 && b2_16 && b3_64 && b4_18 && b5_27 && b6_7 && b7_34) {
matched = true;
pattern_id = 1937;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_19 && b5_10 && b6_20 && b7_11 && b8_46 && b9_6 && b10_12 && b11_68 && b12_26 && b13_26 && b14_1 && b15_9 && b16_15 && b17_34 && b18_40 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 1938;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_73 && b5_11 && b6_20 && b7_11 && b8_34 && b9_4 && b10_10 && b11_42 && b12_10 && b13_4 && b14_55 && b15_7 && b16_4 && b17_1 && b18_8) {
matched = true;
pattern_id = 1939;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_51 && b5_16 && b6_38 && b7_39 && b8_42 && b9_17 && b10_30 && b11_20 && b12_2 && b13_68 && b14_2 && b15_30 && b16_16 && b17_29 && b18_11 && b19_42 && b20_41 && b21_10 && b22_1 && b23_2 && b24_16 && b25_6 && b26_22 && b27_1 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 1940;
}
if(b0_14 && b1_17 && b2_1 && b3_28 && b4_6 && b5_8 && b6_8 && b7_55 && b8_36 && b9_49 && b10_43 && b11_47 && b12_26 && b13_22 && b14_4 && b15_3 && b16_3 && b17_37 && b18_4 && b19_21 && b20_9 && b21_1 && b22_21 && b23_7 && b24_33 && b25_1 && b26_50 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 1941;
}
if(b0_14 && b1_15 && b2_36 && b3_28 && b4_60 && b5_29 && b6_71 && b7_21 && b8_35 && b9_14 && b10_9 && b11_5 && b12_4 && b13_22 && b14_17 && b15_25 && b16_48 && b17_62 && b18_27 && b19_6 && b20_1 && b21_23 && b22_1 && b23_19 && b24_21 && b25_34 && b26_3 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 1942;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_24 && b7_44) {
matched = true;
pattern_id = 1943;
}
if(b0_44 && b1_36 && b2_61 && b3_5 && b4_52 && b5_56 && b6_23 && b7_33 && b8_48) {
matched = true;
pattern_id = 1944;
}
if(b0_11 && b1_8 && b2_21 && b3_27 && b4_12 && b5_8 && b6_11 && b7_3 && b8_27 && b9_18 && b10_2) {
matched = true;
pattern_id = 1945;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_27 && b10_13 && b11_6 && b12_7 && b13_40 && b14_63 && b15_33 && b16_3) {
matched = true;
pattern_id = 1946;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_9 && b10_26 && b11_40 && b12_5 && b13_40 && b14_63 && b15_33 && b16_3) {
matched = true;
pattern_id = 1947;
}
if(b0_73 && b1_2 && b2_50 && b3_50 && b4_22 && b5_6 && b6_11 && b7_1 && b8_49 && b9_49 && b10_7 && b11_40 && b12_50 && b13_20) {
matched = true;
pattern_id = 1948;
}
if(b0_35 && b1_26 && b2_16 && b3_26 && b4_14 && b5_7 && b6_7 && b7_44 && b8_18 && b9_48 && b10_29) {
matched = true;
pattern_id = 1949;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_50 && b5_27 && b6_23 && b7_7 && b8_5 && b9_27 && b10_4 && b11_47 && b12_50 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52 && b18_4 && b19_25 && b20_24 && b21_27 && b22_28 && b23_45) {
matched = true;
pattern_id = 1950;
}
if(b0_35 && b1_56 && b2_26 && b3_29 && b4_15 && b5_42 && b6_18) {
matched = true;
pattern_id = 1951;
}
if(b0_39 && b1_8 && b2_20 && b3_19 && b4_27 && b5_6 && b6_69 && b7_1 && b8_41 && b9_27 && b10_43 && b11_54 && b12_5 && b13_20 && b14_38 && b15_22 && b16_27 && b17_55) {
matched = true;
pattern_id = 1952;
}
if(b0_35 && b1_54 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15) {
matched = true;
pattern_id = 1953;
}
if(b0_20 && b1_2 && b2_17 && b3_15 && b4_3 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_32 && b11_29) {
matched = true;
pattern_id = 1954;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_19 && b18_1 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6) {
matched = true;
pattern_id = 1955;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_26 && b5_11 && b6_24 && b7_47 && b8_18 && b9_28 && b10_28 && b11_47 && b12_19) {
matched = true;
pattern_id = 1956;
}
if(b0_35 && b1_66 && b2_20 && b3_20 && b4_19 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34) {
matched = true;
pattern_id = 1957;
}
if(b0_35 && b1_66 && b2_24 && b3_43 && b4_7 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34) {
matched = true;
pattern_id = 1958;
}
if(b0_35 && b1_66 && b2_20 && b3_27 && b4_21 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34) {
matched = true;
pattern_id = 1959;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_32 && b13_18 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 1960;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37) {
matched = true;
pattern_id = 1961;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_64 && b6_26 && b7_1 && b8_64 && b9_51 && b10_36 && b11_70 && b12_28 && b13_14 && b14_34 && b15_27) {
matched = true;
pattern_id = 1962;
}
if(b0_26 && b1_53) {
matched = true;
pattern_id = 1963;
}
if(b0_73 && b1_14 && b2_3 && b3_34 && b4_22 && b5_74 && b6_66 && b7_35 && b8_14 && b9_40 && b10_34 && b11_32 && b12_61 && b13_16 && b14_38 && b15_31 && b16_24 && b17_34 && b18_9 && b19_57 && b20_9 && b21_1 && b22_17 && b23_7 && b24_40 && b25_22 && b26_34 && b27_2) {
matched = true;
pattern_id = 1964;
}
if(b0_35 && b1_67 && b2_49 && b3_37 && b4_18) {
matched = true;
pattern_id = 1965;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55) {
matched = true;
pattern_id = 1966;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_2 && b5_51 && b6_8 && b7_8 && b8_11 && b9_44 && b10_17 && b11_30 && b12_5 && b13_53 && b14_20 && b15_41 && b16_44 && b17_29 && b18_8 && b19_3 && b20_29 && b21_4 && b22_34 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 1967;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_6 && b5_21 && b6_35 && b7_45 && b8_9 && b9_17 && b10_28 && b11_26 && b12_10 && b13_2 && b14_33 && b15_7 && b16_22 && b17_29 && b18_9 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 1968;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_14 && b5_16 && b6_55 && b7_45 && b8_42 && b9_28 && b10_34 && b11_27 && b12_10 && b13_2 && b14_33 && b15_7 && b16_25 && b17_27 && b18_33 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 1969;
}
if(b0_35 && b1_67) {
matched = true;
pattern_id = 1970;
}
if(b0_17 && b1_52 && b2_1 && b3_37) {
matched = true;
pattern_id = 1971;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_39 && b16_20 && b17_60 && b18_8 && b19_26 && b20_4 && b21_4 && b22_15) {
matched = true;
pattern_id = 1972;
}
if(b0_20 && b1_3 && b2_3 && b3_7 && b4_17 && b5_20 && b6_12 && b7_3 && b8_27 && b9_16 && b10_2 && b11_9 && b12_42 && b13_42 && b14_23 && b15_11 && b16_35 && b17_8 && b18_25 && b19_26 && b20_9) {
matched = true;
pattern_id = 1973;
}
if(b0_73 && b1_21 && b2_49 && b3_20 && b4_18 && b5_27 && b6_7 && b7_1 && b8_2 && b9_14 && b10_43 && b11_29 && b12_10 && b13_31 && b14_27 && b15_7 && b16_65 && b17_63 && b18_63 && b19_30 && b20_9 && b21_41 && b22_56 && b23_7 && b24_16 && b25_2 && b26_17 && b27_53 && b28_52 && b29_51 && b30_47 && b31_48 && b32_47 && b33_4 && b34_14 && b35_3 && b36_3 && b37_6 && b38_5 && b39_37 && b40_8 && b41_37 && b42_3 && b43_30 && b44_19 && b45_4 && b46_29 && b47_3 && b48_18 && b49_18 && b50_28 && b51_18 && b52_5 && b53_13 && b54_15 && b55_17 && b56_17 && b57_3 && b58_18 && b59_14 && b60_13 && b61_14 && b62_12 && b63_5) {
matched = true;
pattern_id = 1974;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_17 && b5_6 && b6_24 && b7_9 && b8_34 && b9_5 && b10_11 && b11_5 && b12_10 && b13_2 && b14_27 && b15_7 && b16_2 && b17_35 && b18_8 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 1975;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_18 && b20_37 && b21_14 && b22_4 && b23_20 && b24_25 && b25_2 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3) {
matched = true;
pattern_id = 1976;
}
if(b0_44 && b1_45) {
matched = true;
pattern_id = 1977;
}
if(b0_35 && b1_15 && b2_1 && b3_1 && b4_26 && b5_62 && b6_46 && b7_46) {
matched = true;
pattern_id = 1978;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_24 && b5_11 && b6_35 && b7_45 && b8_5 && b9_11 && b10_32 && b11_54 && b12_17 && b13_26 && b14_1 && b15_6 && b16_15 && b17_4 && b18_15 && b19_25 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 1979;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_44 && b5_7 && b6_11 && b7_2 && b8_5 && b9_49 && b10_38 && b11_54 && b12_10 && b13_2 && b14_27 && b15_7 && b16_25 && b17_4 && b18_8 && b19_3 && b20_1 && b21_4) {
matched = true;
pattern_id = 1980;
}
if(b0_14 && b1_51 && b2_26 && b3_14 && b4_4 && b5_13 && b6_12 && b7_4 && b8_4 && b9_4) {
matched = true;
pattern_id = 1981;
}
if(b0_73 && b1_58 && b2_14 && b3_27 && b4_1 && b5_16 && b6_34 && b7_34 && b8_10 && b9_16 && b10_3 && b11_20 && b12_65 && b13_27 && b14_51 && b15_3 && b16_31 && b17_29 && b18_50 && b19_9 && b20_28 && b21_36 && b22_19 && b23_46 && b24_9 && b25_8 && b26_13 && b27_8 && b28_54) {
matched = true;
pattern_id = 1982;
}
if(b0_35 && b1_24 && b2_41 && b3_29 && b4_18 && b5_26 && b6_46 && b7_51) {
matched = true;
pattern_id = 1983;
}
if(b0_64 && b1_21 && b2_21 && b3_8 && b4_27 && b5_52 && b6_41) {
matched = true;
pattern_id = 1984;
}
if(b0_35 && b1_11 && b2_6 && b3_21 && b4_26 && b5_52 && b6_19 && b7_47) {
matched = true;
pattern_id = 1985;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_16 && b5_10 && b6_36 && b7_21 && b8_16 && b9_5 && b10_12 && b11_40 && b12_16 && b13_26 && b14_1 && b15_10 && b16_15 && b17_25 && b18_57 && b19_29 && b20_27 && b21_35 && b22_3 && b23_6 && b24_1 && b25_33 && b26_11 && b27_7 && b28_22 && b29_1 && b30_13 && b31_21 && b32_43 && b33_11 && b34_3 && b35_7 && b36_4 && b37_10) {
matched = true;
pattern_id = 1986;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_21 && b5_42 && b6_46 && b7_3 && b8_1 && b9_24 && b10_2 && b11_34 && b12_26 && b13_30 && b14_55 && b15_20 && b16_29 && b17_49 && b18_9 && b19_41 && b20_9 && b21_1 && b22_7 && b23_7 && b24_28 && b25_47 && b26_51 && b27_18 && b28_28 && b29_25 && b30_20 && b31_23 && b32_25 && b33_4 && b34_1 && b35_14 && b36_3 && b37_14 && b38_16 && b39_23 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5) {
matched = true;
pattern_id = 1987;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_27 && b5_20 && b6_48 && b7_14 && b8_10 && b9_1 && b10_23 && b11_20 && b12_45 && b13_50 && b14_55 && b15_68 && b16_15 && b17_1 && b18_12 && b19_6 && b20_25 && b21_21 && b22_14 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 1988;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_24 && b10_2 && b11_34 && b12_26 && b13_30 && b14_55 && b15_20 && b16_29 && b17_49 && b18_9 && b19_41 && b20_9 && b21_1 && b22_7 && b23_7 && b24_28 && b25_47 && b26_51 && b27_18 && b28_28 && b29_25 && b30_20 && b31_23 && b32_25 && b33_4 && b34_1 && b35_14 && b36_3 && b37_14 && b38_16 && b39_23 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5) {
matched = true;
pattern_id = 1989;
}
if(b0_35 && b1_6 && b2_20 && b3_34 && b4_14 && b5_11 && b6_11 && b7_63 && b8_47 && b9_6 && b10_43 && b11_5 && b12_28 && b13_27 && b14_28 && b15_18 && b16_29 && b17_40 && b18_18 && b19_19 && b20_30 && b21_42 && b22_46 && b23_39) {
matched = true;
pattern_id = 1990;
}
if(b0_35 && b1_47 && b2_42 && b3_18 && b4_35 && b5_26 && b6_7 && b7_31 && b8_8 && b9_17 && b10_50 && b11_57 && b12_17 && b13_16 && b14_36) {
matched = true;
pattern_id = 1991;
}
if(b0_35 && b1_47 && b2_62 && b3_45 && b4_46 && b5_26 && b6_7 && b7_54 && b8_34 && b9_20 && b10_11 && b11_3 && b12_17 && b13_4 && b14_38 && b15_44 && b16_32 && b17_10 && b18_29 && b19_2 && b20_60 && b21_2 && b22_19 && b23_36 && b24_24 && b25_1 && b26_36 && b27_46) {
matched = true;
pattern_id = 1992;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_15 && b5_16 && b6_34 && b7_31 && b8_35 && b9_27 && b10_32 && b11_46 && b12_16 && b13_5 && b14_2 && b15_1 && b16_27 && b17_8 && b18_31 && b19_12 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 1993;
}
if(b0_35 && b1_56 && b2_24 && b3_29 && b4_15 && b5_42 && b6_18) {
matched = true;
pattern_id = 1994;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_21 && b21_10 && b22_19 && b23_46 && b24_45 && b25_17 && b26_39 && b27_1 && b28_23 && b29_25 && b30_49 && b31_10 && b32_48 && b33_38 && b34_24 && b35_29 && b36_20 && b37_42) {
matched = true;
pattern_id = 1995;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_31 && b5_10 && b6_20 && b7_55 && b8_54 && b9_14 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 1996;
}
if(b0_32 && b1_14 && b2_3 && b3_34 && b4_22) {
matched = true;
pattern_id = 1997;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_44 && b8_11 && b9_40 && b10_6 && b11_57 && b12_38 && b13_6 && b14_18) {
matched = true;
pattern_id = 1998;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_44 && b8_16 && b9_41 && b10_26 && b11_27 && b12_52 && b13_36 && b14_34 && b15_5 && b16_41 && b17_34) {
matched = true;
pattern_id = 1999;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_44 && b8_40 && b9_27 && b10_4 && b11_46 && b12_7 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52) {
matched = true;
pattern_id = 2000;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_44 && b12_50 && b13_38 && b14_12 && b15_48 && b16_46 && b17_44 && b18_36 && b19_9 && b20_30 && b21_41 && b22_4) {
matched = true;
pattern_id = 2001;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_24 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 2002;
}
if(b0_35 && b1_13 && b2_43 && b3_16 && b4_12 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 2003;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_38 && b6_1 && b7_4 && b8_22) {
matched = true;
pattern_id = 2004;
}
if(b0_73 && b1_47 && b2_20 && b3_21 && b4_62 && b5_74 && b6_66 && b7_35 && b8_67 && b9_32 && b10_22 && b11_28 && b12_59 && b13_69 && b14_5 && b15_25 && b16_55 && b17_26 && b18_4 && b19_57 && b20_32 && b21_27 && b22_42 && b23_59 && b24_17 && b25_44 && b26_25 && b27_33 && b28_27 && b29_40 && b30_17 && b31_25 && b32_3 && b33_43 && b34_12 && b35_1 && b36_24 && b37_14 && b38_24 && b39_21 && b40_15 && b41_16 && b42_3 && b43_8 && b44_9 && b45_4 && b46_31 && b47_19 && b48_19 && b49_21 && b50_29 && b51_3 && b52_20 && b53_20 && b54_3 && b55_21 && b56_4 && b57_13 && b58_9 && b59_15 && b60_14 && b61_4 && b62_13 && b63_12 && b64_11 && b65_15 && b66_5 && b67_12 && b68_6 && b69_11 && b70_15 && b71_4 && b72_10 && b73_12 && b74_13 && b75_10 && b76_9 && b77_2 && b78_2 && b79_9 && b80_10 && b81_9 && b82_10 && b83_10 && b84_7 && b85_7 && b86_8 && b87_6 && b88_6) {
matched = true;
pattern_id = 2005;
}
if(b0_24 && b1_43 && b2_11 && b3_56 && b4_36 && b5_40 && b6_1) {
matched = true;
pattern_id = 2006;
}
if(b0_35 && b1_2 && b2_49 && b3_20 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_68 && b10_6 && b11_27 && b12_5 && b13_27 && b14_51 && b15_17) {
matched = true;
pattern_id = 2007;
}
if(b0_35 && b1_16 && b2_25 && b3_50 && b4_44 && b5_8 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_24 && b13_5 && b14_57 && b15_17) {
matched = true;
pattern_id = 2008;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_46 && b7_11 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22 && b13_27 && b14_51 && b15_57 && b16_57 && b17_55) {
matched = true;
pattern_id = 2009;
}
if(b0_35 && b1_56 && b2_3 && b3_15 && b4_22 && b5_26 && b6_21 && b7_31 && b8_8 && b9_20 && b10_45 && b11_46 && b12_67 && b13_5 && b14_18 && b15_62 && b16_5 && b17_18 && b18_18 && b19_9 && b20_43 && b21_29) {
matched = true;
pattern_id = 2010;
}
if(b0_35 && b1_24 && b2_14 && b3_18 && b4_6 && b5_6 && b6_55 && b7_10 && b8_8 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 2011;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_2 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_61 && b21_21 && b22_22 && b23_28 && b24_50) {
matched = true;
pattern_id = 2012;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_37 && b7_17 && b8_7 && b9_17 && b10_6 && b11_34 && b12_38 && b13_22 && b14_41 && b15_7 && b16_14 && b17_24 && b18_8 && b19_1 && b20_27 && b21_20 && b22_19 && b23_16 && b24_32 && b25_1 && b26_19 && b27_54 && b28_55 && b29_7 && b30_50 && b31_4 && b32_12 && b33_7 && b34_3 && b35_42 && b36_35 && b37_4 && b38_2 && b39_4 && b40_38 && b41_5 && b42_8 && b43_6 && b44_5) {
matched = true;
pattern_id = 2013;
}
if(b0_3 && b1_14 && b2_1 && b3_18 && b4_6) {
matched = true;
pattern_id = 2014;
}
if(b0_68 && b1_50 && b2_8 && b3_11 && b4_17 && b5_42 && b6_12 && b7_11 && b8_7 && b9_10 && b10_6 && b11_2 && b12_17 && b13_48 && b14_5 && b15_4 && b16_66 && b17_44 && b18_20 && b19_55 && b20_8 && b21_42 && b22_39 && b23_54 && b24_29 && b25_22 && b26_19 && b27_22 && b28_55 && b29_19 && b30_19 && b31_8 && b32_19 && b33_18 && b34_16 && b35_39 && b36_1 && b37_30 && b38_28 && b39_32 && b40_2 && b41_38 && b42_4 && b43_26 && b44_26 && b45_8 && b46_23 && b47_13 && b48_20 && b49_10 && b50_30 && b51_2 && b52_21 && b53_21 && b54_16 && b55_20 && b56_18 && b57_1 && b58_19 && b59_16 && b60_15 && b61_12 && b62_14 && b63_13 && b64_12 && b65_11 && b66_12) {
matched = true;
pattern_id = 2015;
}
if(b0_40 && b1_44 && b2_36 && b3_6 && b4_17 && b5_21 && b6_8 && b7_8 && b8_47 && b9_5 && b10_7 && b11_69 && b12_14 && b13_36 && b14_35) {
matched = true;
pattern_id = 2016;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64) {
matched = true;
pattern_id = 2017;
}
if(b0_65 && b1_35 && b2_25 && b3_18 && b4_2 && b5_11 && b6_38 && b7_10 && b8_37) {
matched = true;
pattern_id = 2018;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_36 && b18_9 && b19_35 && b20_17 && b21_36 && b22_38 && b23_35 && b24_51 && b25_33 && b26_43 && b27_27) {
matched = true;
pattern_id = 2019;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_18 && b18_4 && b19_28 && b20_30 && b21_29) {
matched = true;
pattern_id = 2020;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_4 && b18_15 && b19_12 && b20_44 && b21_27 && b22_41 && b23_50 && b24_3 && b25_47) {
matched = true;
pattern_id = 2021;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_37 && b18_29 && b19_9 && b20_17 && b21_5 && b22_45 && b23_46 && b24_42) {
matched = true;
pattern_id = 2022;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52 && b17_4 && b18_22 && b19_9 && b20_24 && b21_36 && b22_19 && b23_35 && b24_1 && b25_36 && b26_30 && b27_27) {
matched = true;
pattern_id = 2023;
}
if(b0_23 && b1_16 && b2_20 && b3_34 && b4_43 && b5_53 && b6_32 && b7_4 && b8_70 && b9_6 && b10_35 && b11_3 && b12_12 && b13_40 && b14_64) {
matched = true;
pattern_id = 2024;
}
if(b0_73 && b1_61 && b2_41 && b3_15 && b4_11 && b5_74 && b6_66 && b7_11 && b8_67 && b9_32 && b10_22 && b11_37 && b12_59 && b13_69 && b14_5 && b15_25 && b16_55 && b17_26 && b18_4 && b19_57 && b20_32 && b21_27 && b22_42 && b23_59 && b24_17 && b25_44 && b26_25 && b27_33 && b28_27 && b29_40 && b30_17 && b31_25 && b32_3 && b33_43 && b34_12 && b35_1 && b36_24 && b37_14 && b38_24 && b39_21 && b40_15 && b41_16 && b42_3 && b43_8 && b44_9 && b45_4 && b46_31 && b47_19 && b48_19 && b49_21 && b50_29 && b51_3 && b52_20 && b53_20 && b54_3 && b55_21 && b56_4 && b57_13 && b58_9 && b59_15 && b60_14 && b61_4) {
matched = true;
pattern_id = 2025;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_56 && b16_16 && b17_29 && b18_22 && b19_35 && b20_13 && b21_9 && b22_2 && b23_34 && b24_10 && b25_2 && b26_8 && b27_8 && b28_9 && b29_8 && b30_2 && b31_43 && b32_27 && b33_35 && b34_19 && b35_27 && b36_32 && b37_27 && b38_25 && b39_38 && b40_39 && b41_5 && b42_32 && b43_13 && b44_4 && b45_4 && b46_8 && b47_6 && b48_3 && b49_22 && b50_31 && b51_3 && b52_20 && b53_22 && b54_3 && b55_3 && b56_19 && b57_14 && b58_20 && b59_17 && b60_8 && b61_15 && b62_15 && b63_2 && b64_13 && b65_16 && b66_4 && b67_13 && b68_11 && b69_3 && b70_6 && b71_12 && b72_8 && b73_5 && b74_14 && b75_11 && b76_5 && b77_5 && b78_11 && b79_1 && b80_11 && b81_10 && b82_11 && b83_11 && b84_8 && b85_8 && b86_9 && b87_7 && b88_7 && b89_2 && b90_7 && b91_5 && b92_5 && b93_6 && b94_6 && b95_6 && b96_1 && b97_5 && b98_6 && b99_6 && b100_6 && b101_3 && b102_7 && b103_5 && b104_4 && b105_5 && b106_3 && b107_1 && b108_4 && b109_5 && b110_1 && b111_4 && b112_4) {
matched = true;
pattern_id = 2026;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_40 && b6_19 && b7_9 && b8_16 && b9_34 && b10_64 && b11_23 && b12_19) {
matched = true;
pattern_id = 2027;
}
if(b0_35 && b1_11 && b2_23 && b3_45 && b4_7 && b5_42 && b6_54 && b7_33 && b8_57 && b9_9 && b10_17 && b11_30 && b12_25) {
matched = true;
pattern_id = 2028;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_74 && b5_7 && b6_41) {
matched = true;
pattern_id = 2029;
}
if(b0_35 && b1_32 && b2_46 && b3_53 && b4_35 && b5_27 && b6_39 && b7_9 && b8_42 && b9_50 && b10_26 && b11_48 && b12_17 && b13_52) {
matched = true;
pattern_id = 2030;
}
if(b0_35 && b1_32 && b2_46 && b3_53 && b4_35 && b5_27 && b6_39 && b7_9 && b8_42 && b9_50 && b10_26 && b11_48 && b12_17 && b13_52 && b14_30 && b15_41 && b16_46 && b17_7 && b18_31 && b19_34 && b20_13) {
matched = true;
pattern_id = 2031;
}
if(b0_32 && b1_66 && b2_50 && b3_16) {
matched = true;
pattern_id = 2032;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_62 && b8_69 && b9_29) {
matched = true;
pattern_id = 2033;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_21 && b8_12 && b9_49 && b10_7 && b11_71 && b12_6) {
matched = true;
pattern_id = 2034;
}
if(b0_35 && b1_56 && b2_3 && b3_40 && b4_35 && b5_20 && b6_3 && b7_53 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_7 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_39 && b25_36 && b26_27 && b27_19 && b28_56 && b29_7 && b30_48 && b31_25 && b32_44 && b33_12 && b34_31 && b35_2 && b36_11 && b37_21 && b38_19 && b39_14 && b40_20 && b41_39 && b42_9 && b43_22 && b44_31 && b45_4 && b46_4 && b47_7 && b48_2 && b49_3 && b50_4 && b51_3 && b52_2 && b53_21 && b54_17 && b55_22 && b56_20 && b57_15 && b58_21 && b59_13 && b60_16 && b61_11 && b62_16 && b63_2 && b64_14 && b65_9 && b66_9 && b67_14 && b68_12 && b69_12 && b70_16 && b71_13 && b72_11 && b73_13 && b74_3 && b75_3 && b76_10 && b77_5 && b78_5 && b79_10 && b80_5 && b81_2 && b82_12 && b83_5 && b84_3 && b85_9 && b86_3) {
matched = true;
pattern_id = 2035;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_35 && b11_3 && b12_16 && b13_16 && b14_20 && b15_40 && b16_29 && b17_55) {
matched = true;
pattern_id = 2036;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_3 && b5_26 && b6_26 && b7_3 && b8_1 && b9_8 && b10_2 && b11_28 && b12_26 && b13_50 && b14_21 && b15_41 && b16_8 && b17_44 && b18_11 && b19_9) {
matched = true;
pattern_id = 2037;
}
if(b0_68 && b1_50 && b2_8 && b3_8 && b4_18 && b5_25 && b6_20 && b7_44 && b8_12 && b9_43 && b10_38 && b11_23 && b12_17 && b13_19 && b14_17 && b15_36 && b16_16 && b17_21 && b18_19) {
matched = true;
pattern_id = 2038;
}
if(b0_43 && b1_48 && b2_43 && b3_27 && b4_18 && b5_30 && b6_26 && b7_15) {
matched = true;
pattern_id = 2039;
}
if(b0_35 && b1_67 && b2_62 && b3_37) {
matched = true;
pattern_id = 2040;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_49 && b10_12 && b11_55 && b12_38 && b13_38 && b14_17 && b15_17) {
matched = true;
pattern_id = 2041;
}
if(b0_35 && b1_67 && b2_12 && b3_2 && b4_2 && b5_37 && b6_10 && b7_29 && b8_37 && b9_17 && b10_4) {
matched = true;
pattern_id = 2042;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_24 && b10_2 && b11_48 && b12_38 && b13_43 && b14_21 && b15_5 && b16_24 && b17_64 && b18_10 && b19_35 && b20_9 && b21_1 && b22_21 && b23_7 && b24_20 && b25_36 && b26_33 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2043;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_67 && b10_2 && b11_46 && b12_24 && b13_60 && b14_12 && b15_27 && b16_14 && b17_15 && b18_8 && b19_3 && b20_51 && b21_4 && b22_39 && b23_31 && b24_28 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2044;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_18 && b10_2 && b11_7 && b12_13 && b13_64 && b14_1 && b15_25 && b16_30 && b17_35 && b18_22 && b19_6 && b20_1 && b21_47 && b22_1 && b23_27 && b24_17 && b25_35 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2045;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_66 && b10_2 && b11_49 && b12_50 && b13_61 && b14_41 && b15_16 && b16_15 && b17_1 && b18_58 && b19_6 && b20_27 && b21_2 && b22_50 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2046;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_29 && b6_24 && b7_44 && b8_18 && b9_69 && b10_43 && b11_26 && b12_32 && b13_20) {
matched = true;
pattern_id = 2047;
}
if(b0_64 && b1_2 && b2_49 && b3_49 && b4_27 && b5_12 && b6_41) {
matched = true;
pattern_id = 2048;
}
if(b0_17 && b1_52 && b2_48 && b3_28 && b4_36 && b5_44 && b6_5 && b7_7 && b8_40 && b9_34 && b10_26 && b11_40 && b12_10 && b13_31 && b14_27 && b15_4 && b16_14 && b17_14 && b18_8 && b19_35 && b20_30 && b21_20 && b22_57 && b23_51 && b24_43 && b25_4 && b26_30 && b27_19 && b28_18 && b29_34 && b30_3 && b31_49 && b32_46) {
matched = true;
pattern_id = 2049;
}
if(b0_12 && b1_69 && b2_48 && b3_28 && b4_36 && b5_44 && b6_5 && b7_4 && b8_55 && b9_4 && b10_3 && b11_42 && b12_6 && b13_11 && b14_7 && b15_7 && b16_46 && b17_39 && b18_60 && b19_37 && b20_28 && b21_5 && b22_27 && b23_16 && b24_37 && b25_6 && b26_9 && b27_5 && b28_6) {
matched = true;
pattern_id = 2050;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_19 && b5_10 && b6_3 && b7_35 && b8_50 && b9_6 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2051;
}
if(b0_35 && b1_13 && b2_60 && b3_26 && b4_2 && b5_7 && b6_59 && b7_62 && b8_40 && b9_14 && b10_7 && b11_29) {
matched = true;
pattern_id = 2052;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_21 && b21_10 && b22_19 && b23_46 && b24_45 && b25_17 && b26_39 && b27_1 && b28_23 && b29_25 && b30_49 && b31_10 && b32_49 && b33_11 && b34_45 && b35_2 && b36_9 && b37_25 && b38_19 && b39_39) {
matched = true;
pattern_id = 2053;
}
if(b0_14 && b1_18 && b2_46 && b3_28 && b4_14 && b5_23 && b6_32 && b7_18 && b8_10 && b9_38 && b10_2 && b11_42 && b12_15 && b13_26 && b14_35 && b15_7 && b16_27 && b17_9 && b18_3 && b19_24 && b20_22 && b21_4 && b22_10 && b23_60 && b24_9 && b25_8 && b26_13 && b27_8 && b28_21 && b29_1 && b30_1 && b31_15 && b32_3 && b33_45 && b34_3 && b35_38 && b36_40 && b37_10 && b38_19 && b39_7 && b40_11 && b41_12 && b42_3 && b43_38 && b44_5 && b45_29 && b46_29 && b47_9 && b48_16 && b49_4 && b50_11 && b51_12 && b52_5 && b53_23 && b54_3 && b55_23 && b56_17 && b57_4 && b58_22 && b59_3 && b60_17 && b61_16 && b62_3 && b63_14 && b64_3 && b65_17 && b66_13 && b67_3 && b68_13 && b69_3 && b70_13 && b71_10 && b72_2 && b73_14 && b74_3 && b75_12 && b76_11 && b77_3 && b78_12 && b79_3 && b80_12 && b81_5 && b82_3 && b83_12 && b84_4 && b85_8 && b86_10 && b87_8 && b88_8 && b89_4 && b90_8 && b91_6 && b92_6 && b93_7 && b94_3 && b95_4 && b96_4 && b97_3 && b98_7 && b99_3 && b100_7 && b101_6 && b102_2 && b103_6 && b104_5 && b105_6 && b106_6 && b107_4 && b108_5 && b109_2 && b110_5 && b111_5 && b112_4 && b113_3 && b114_2 && b115_4 && b116_4 && b117_4 && b118_3 && b119_2 && b120_3 && b121_3 && b122_3 && b123_4 && b124_2 && b125_3 && b126_3 && b127_3 && b128_4 && b129_2 && b130_3 && b131_3 && b132_3 && b133_3 && b134_2 && b135_2 && b136_1 && b137_1 && b138_3 && b139_3 && b140_1 && b141_3 && b142_3 && b143_1 && b144_3 && b145_3 && b146_2) {
matched = true;
pattern_id = 2054;
}
if(b0_14 && b1_18 && b2_46 && b3_28 && b4_21 && b5_8 && b6_5 && b7_18 && b8_27 && b9_4 && b10_42 && b11_20 && b12_15 && b13_31 && b14_2 && b15_30 && b16_39 && b17_16 && b18_37 && b19_6 && b20_29 && b21_41 && b22_1 && b23_60 && b24_9 && b25_8 && b26_13 && b27_8 && b28_24 && b29_19 && b30_51 && b31_38 && b32_3 && b33_27 && b34_14 && b35_1 && b36_41 && b37_10 && b38_3 && b39_34 && b40_3 && b41_21 && b42_1 && b43_11 && b44_33 && b45_29 && b46_2) {
matched = true;
pattern_id = 2055;
}
if(b0_44 && b1_36 && b2_4 && b3_53 && b4_36 && b5_23 && b6_8 && b7_47 && b8_40 && b9_34 && b10_17 && b11_40 && b12_10 && b13_31 && b14_27 && b15_4 && b16_14 && b17_14 && b18_3 && b19_26 && b20_1 && b21_4) {
matched = true;
pattern_id = 2056;
}
if(b0_32 && b1_66 && b2_21 && b3_24 && b4_7) {
matched = true;
pattern_id = 2057;
}
if(b0_32 && b1_71 && b2_14 && b3_50) {
matched = true;
pattern_id = 2058;
}
if(b0_22 && b1_1 && b2_1 && b3_1 && b4_32 && b5_6 && b6_5 && b7_4 && b8_1 && b9_4 && b10_49 && b11_20 && b12_2 && b13_2 && b14_2 && b15_3 && b16_15 && b17_1 && b18_1 && b19_6 && b20_25 && b21_4 && b22_2 && b23_2 && b24_9 && b25_30 && b26_11 && b27_7 && b28_2 && b29_1 && b30_5 && b31_4 && b32_7 && b33_1 && b34_3 && b35_37 && b36_3 && b37_4 && b38_5 && b39_7 && b40_15 && b41_13 && b42_8 && b43_4 && b44_5 && b45_7 && b46_2 && b47_3 && b48_4 && b49_4 && b50_32 && b51_3 && b52_4 && b53_4 && b54_3 && b55_18 && b56_3 && b57_3 && b58_4 && b59_3 && b60_8 && b61_4 && b62_4 && b63_3 && b64_3 && b65_18 && b66_4 && b67_4 && b68_4 && b69_3 && b70_17 && b71_4 && b72_3 && b73_4 && b74_3 && b75_7 && b76_5 && b77_7 && b78_5 && b79_3 && b80_13 && b81_4 && b82_4 && b83_6 && b84_4 && b85_1 && b86_3 && b87_3 && b88_2 && b89_4 && b90_2 && b91_3 && b92_3 && b93_3 && b94_3 && b95_7 && b96_3 && b97_2 && b98_3 && b99_3 && b100_3 && b101_4 && b102_4 && b103_2 && b104_3 && b105_1 && b106_3 && b107_1 && b108_2 && b109_2 && b110_6 && b111_2 && b112_1 && b113_2 && b114_2 && b115_5 && b116_2 && b117_2 && b118_1 && b119_2 && b120_4 && b121_2 && b122_1 && b123_2 && b124_2 && b125_4 && b126_2 && b127_2 && b128_2 && b129_2 && b130_4 && b131_2 && b132_1 && b133_1 && b134_2 && b135_3 && b136_2 && b137_3 && b138_1 && b139_4 && b140_3 && b141_4 && b142_1 && b143_3 && b144_4 && b145_4 && b146_2 && b147_3 && b148_3 && b149_3 && b150_3 && b151_3 && b152_3 && b153_1 && b154_2 && b155_3 && b156_3 && b157_1 && b158_3 && b159_3 && b160_3 && b161_3 && b162_3 && b163_1 && b164_3 && b165_2 && b166_2 && b167_2 && b168_1 && b169_2 && b170_2 && b171_2 && b172_2 && b173_2 && b174_2 && b175_2 && b176_2 && b177_1 && b178_2 && b179_2 && b180_2 && b181_2 && b182_2 && b183_1 && b184_2 && b185_2 && b186_2 && b187_1 && b188_2 && b189_2 && b190_2 && b191_2 && b192_1 && b193_1 && b194_2 && b195_2 && b196_2 && b197_2 && b198_2 && b199_2 && b200_2 && b201_2 && b202_2 && b203_2 && b204_2 && b205_2 && b206_2 && b207_1 && b208_2 && b209_2 && b210_2 && b211_2 && b212_2 && b213_1 && b214_2 && b215_2 && b216_2 && b217_1 && b218_2 && b219_2 && b220_2 && b221_2 && b222_1 && b223_1 && b224_2 && b225_2 && b226_2 && b227_2 && b228_1 && b229_2 && b230_2 && b231_2 && b232_2 && b233_2 && b234_2 && b235_2 && b236_2 && b237_1 && b238_2 && b239_1) {
matched = true;
pattern_id = 2059;
}
if(b0_32 && b1_24 && b2_41) {
matched = true;
pattern_id = 2060;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_25 && b13_47 && b14_28 && b15_37 && b16_15 && b17_1 && b18_42 && b19_1 && b20_1 && b21_28 && b22_1) {
matched = true;
pattern_id = 2061;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_42 && b37_17 && b38_44 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_38 && b45_30 && b46_32 && b47_10 && b48_21 && b49_4 && b50_9 && b51_19 && b52_5 && b53_3 && b54_9 && b55_24 && b56_21 && b57_16 && b58_12 && b59_18 && b60_5 && b61_17 && b62_6 && b63_15 && b64_12 && b65_18 && b66_14 && b67_15 && b68_14 && b69_13 && b70_3 && b71_14 && b72_3 && b73_4 && b74_15 && b75_3 && b76_12 && b77_5 && b78_13 && b79_8 && b80_14 && b81_6 && b82_13 && b83_11 && b84_9 && b85_10 && b86_10 && b87_9 && b88_7 && b89_8) {
matched = true;
pattern_id = 2062;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_22 && b5_10 && b6_22 && b7_10 && b8_2 && b9_41 && b10_4 && b11_20 && b12_2 && b13_51 && b14_2 && b15_32 && b16_55 && b17_37 && b18_4 && b19_41 && b20_9 && b21_1 && b22_21 && b23_7 && b24_21 && b25_33 && b26_19 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2063;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_13 && b8_41 && b9_17 && b10_17 && b11_35 && b12_4 && b13_70 && b14_3 && b15_69 && b16_11 && b17_65 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9 && b25_17 && b26_30 && b27_3 && b28_21 && b29_24 && b30_36 && b31_50 && b32_50 && b33_35 && b34_20 && b35_27 && b36_17 && b37_14 && b38_16 && b39_33 && b40_40 && b41_5 && b42_16 && b43_14 && b44_14 && b45_23 && b46_14 && b47_19 && b48_16 && b49_7 && b50_30 && b51_2 && b52_22 && b53_17 && b54_18 && b55_25 && b56_3 && b57_17 && b58_23 && b59_4 && b60_4 && b61_3 && b62_17 && b63_2 && b64_4 && b65_19 && b66_4 && b67_16 && b68_15 && b69_14 && b70_18 && b71_12 && b72_1 && b73_15 && b74_16 && b75_13 && b76_2 && b77_12 && b78_4 && b79_11 && b80_15 && b81_11 && b82_14 && b83_13 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5 && b91_7 && b92_7 && b93_8 && b94_7 && b95_8 && b96_6 && b97_6 && b98_8 && b99_6 && b100_8 && b101_7 && b102_3) {
matched = true;
pattern_id = 2064;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_15 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_11 && b86_9 && b87_10 && b88_9 && b89_9 && b90_9 && b91_3 && b92_5 && b93_9 && b94_7 && b95_9 && b96_7 && b97_7 && b98_9 && b99_7 && b100_6 && b101_8 && b102_8 && b103_2 && b104_6 && b105_7 && b106_2 && b107_5 && b108_1 && b109_1 && b110_7 && b111_2 && b112_5 && b113_5 && b114_4 && b115_6 && b116_5 && b117_1 && b118_4 && b119_4 && b120_5 && b121_4 && b122_4 && b123_5 && b124_4 && b125_5 && b126_4 && b127_4 && b128_5 && b129_4 && b130_5 && b131_4 && b132_4 && b133_4 && b134_3 && b135_4 && b136_2 && b137_3 && b138_4 && b139_5 && b140_4 && b141_5 && b142_4 && b143_4 && b144_5 && b145_5 && b146_3 && b147_4 && b148_4 && b149_2 && b150_4 && b151_4 && b152_4 && b153_3 && b154_3 && b155_4 && b156_4 && b157_3 && b158_4 && b159_4 && b160_4 && b161_4 && b162_4 && b163_3 && b164_4 && b165_3 && b166_2 && b167_2 && b168_2 && b169_3 && b170_3 && b171_3 && b172_3 && b173_2 && b174_3 && b175_2 && b176_3 && b177_2 && b178_3) {
matched = true;
pattern_id = 2065;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_15 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_11 && b86_9 && b87_10 && b88_9 && b89_9 && b90_9 && b91_3 && b92_5 && b93_9 && b94_7 && b95_9 && b96_7 && b97_7 && b98_9 && b99_7 && b100_6 && b101_8 && b102_8 && b103_2 && b104_6 && b105_7 && b106_2 && b107_5 && b108_1 && b109_1 && b110_7 && b111_2 && b112_5 && b113_5 && b114_4 && b115_6 && b116_5 && b117_1 && b118_5 && b119_5 && b120_6 && b121_5 && b122_5 && b123_6 && b124_5 && b125_5 && b126_5 && b127_5 && b128_6 && b129_2 && b130_6 && b131_5 && b132_5 && b133_1 && b134_4 && b135_5 && b136_3 && b137_4 && b138_5 && b139_6 && b140_5 && b141_6 && b142_5 && b143_5 && b144_6 && b145_6 && b146_4 && b147_5 && b148_5 && b149_4 && b150_2 && b151_4 && b152_5 && b153_4 && b154_4 && b155_3 && b156_5 && b157_4 && b158_5 && b159_3 && b160_1 && b161_5 && b162_5 && b163_1 && b164_5 && b165_4 && b166_3 && b167_3 && b168_3 && b169_1 && b170_4 && b171_2) {
matched = true;
pattern_id = 2066;
}
if(b0_68 && b1_13 && b2_3 && b3_7 && b4_53) {
matched = true;
pattern_id = 2067;
}
if(b0_14 && b1_51 && b2_13 && b3_14 && b4_36 && b5_1 && b6_5) {
matched = true;
pattern_id = 2068;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_28 && b22_39 && b23_27 && b24_3 && b25_18 && b26_19 && b27_55 && b28_8 && b29_52 && b30_23 && b31_52 && b32_3 && b33_1 && b34_27 && b35_5 && b36_4 && b37_9 && b38_2 && b39_20 && b40_27 && b41_24 && b42_1 && b43_16 && b44_16 && b45_32 && b46_34 && b47_26 && b48_9 && b49_24 && b50_15 && b51_14 && b52_23 && b53_11 && b54_19) {
matched = true;
pattern_id = 2069;
}
if(b0_68 && b1_13 && b2_47 && b3_2 && b4_15 && b5_10 && b6_37 && b7_11 && b8_2 && b9_42 && b10_43 && b11_6 && b12_7 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 2070;
}
if(b0_9 && b1_49 && b2_31 && b3_12 && b4_52 && b5_67 && b6_5 && b7_24 && b8_32 && b9_4) {
matched = true;
pattern_id = 2071;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_12 && b7_4 && b8_45 && b9_13 && b10_10 && b11_22 && b12_10 && b13_71 && b14_28 && b15_30 && b16_39 && b17_29 && b18_60) {
matched = true;
pattern_id = 2072;
}
if(b0_35 && b1_24 && b2_20 && b3_26 && b4_16 && b5_40 && b6_7 && b7_51 && b8_5 && b9_13 && b10_55 && b11_52 && b12_62 && b13_45 && b14_49 && b15_27 && b16_32 && b17_3 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9 && b25_41 && b26_27 && b27_1 && b28_34 && b29_48 && b30_31 && b31_20 && b32_25 && b33_35 && b34_31 && b35_44 && b36_6 && b37_43 && b38_32 && b39_17 && b40_20 && b41_20 && b42_29 && b43_1 && b44_15) {
matched = true;
pattern_id = 2073;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_29 && b17_40 && b18_4 && b19_44 && b20_2 && b21_44 && b22_19 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 2074;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_40 && b6_8 && b7_7 && b8_40 && b9_45 && b10_64 && b11_59 && b12_26 && b13_4 && b14_55 && b15_20 && b16_38 && b17_12 && b18_60) {
matched = true;
pattern_id = 2075;
}
if(b0_23 && b1_8 && b2_23 && b3_7 && b4_24 && b5_12 && b6_35 && b7_7 && b8_40 && b9_34 && b10_28 && b11_33 && b12_12 && b13_6 && b14_37 && b15_5 && b16_47 && b17_39 && b18_10 && b19_42 && b20_26) {
matched = true;
pattern_id = 2076;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_70 && b16_30 && b17_26 && b18_36 && b19_35 && b20_17 && b21_20 && b22_1 && b23_2 && b24_52 && b25_13 && b26_2 && b27_32 && b28_6) {
matched = true;
pattern_id = 2077;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_68 && b16_4 && b17_1 && b18_29 && b19_13 && b20_31 && b21_29 && b22_20 && b23_28) {
matched = true;
pattern_id = 2078;
}
if(b0_32 && b1_71 && b2_20 && b3_24 && b4_22 && b5_11 && b6_10 && b7_29 && b8_15) {
matched = true;
pattern_id = 2079;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_71 && b5_4 && b6_21 && b7_11 && b8_35 && b9_42 && b10_49 && b11_33 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_8 && b19_13 && b20_25 && b21_35 && b22_19 && b23_35 && b24_32 && b25_55 && b26_8 && b27_19 && b28_21 && b29_32 && b30_36 && b31_9 && b32_29 && b33_25 && b34_32 && b35_31 && b36_43 && b37_3 && b38_45 && b39_39 && b40_42 && b41_13 && b42_8 && b43_39 && b44_18 && b45_5 && b46_7 && b47_9 && b48_23 && b49_25 && b50_16 && b51_21 && b52_24 && b53_16 && b54_20 && b55_26 && b56_7 && b57_15 && b58_6 && b59_5 && b60_8 && b61_11 && b62_19 && b63_17 && b64_16 && b65_20 && b66_16 && b67_18 && b68_16 && b69_6 && b70_20 && b71_11 && b72_12 && b73_5 && b74_4 && b75_14 && b76_13 && b77_7 && b78_14 && b79_3 && b80_17 && b81_10 && b82_10 && b83_15 && b84_10 && b85_9 && b86_11 && b87_11 && b88_10 && b89_10 && b90_10 && b91_8 && b92_8 && b93_10 && b94_8 && b95_9 && b96_8 && b97_8 && b98_1 && b99_8 && b100_9 && b101_9 && b102_4 && b103_7 && b104_5 && b105_8 && b106_7 && b107_6 && b108_6 && b109_6 && b110_8 && b111_6 && b112_6 && b113_6 && b114_5 && b115_7 && b116_6 && b117_5 && b118_6 && b119_6 && b120_7 && b121_6 && b122_6 && b123_7 && b124_3 && b125_6 && b126_6 && b127_6 && b128_7 && b129_5 && b130_4 && b131_6 && b132_6) {
matched = true;
pattern_id = 2080;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_71 && b5_4 && b6_21 && b7_11 && b8_35 && b9_34 && b10_34 && b11_57 && b12_18 && b13_36 && b14_12 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_17 && b23_27 && b24_20 && b25_33 && b26_24 && b27_19 && b28_56 && b29_7 && b30_36 && b31_14 && b32_33 && b33_25 && b34_46 && b35_21 && b36_15 && b37_37 && b38_34 && b39_40 && b40_2 && b41_41 && b42_34 && b43_40 && b44_5 && b45_5 && b46_35 && b47_16 && b48_4 && b49_26 && b50_21 && b51_22 && b52_25 && b53_25 && b54_21 && b55_27 && b56_22 && b57_19 && b58_2 && b59_19 && b60_18 && b61_15 && b62_9 && b63_7 && b64_1 && b65_15 && b66_17 && b67_5 && b68_17 && b69_15 && b70_21 && b71_16 && b72_13 && b73_8 && b74_18 && b75_15 && b76_5 && b77_7 && b78_15 && b79_13 && b80_3 && b81_12 && b82_3 && b83_16 && b84_11 && b85_12 && b86_12 && b87_12 && b88_11 && b89_11 && b90_11 && b91_9 && b92_9 && b93_11 && b94_4 && b95_10 && b96_9 && b97_9 && b98_10 && b99_1 && b100_1 && b101_10 && b102_9 && b103_8 && b104_7 && b105_9 && b106_8 && b107_7 && b108_7 && b109_7 && b110_6 && b111_7 && b112_7 && b113_7 && b114_3 && b115_8 && b116_7 && b117_6 && b118_6 && b119_7 && b120_8 && b121_2 && b122_7 && b123_8 && b124_6 && b125_7 && b126_7 && b127_7 && b128_8 && b129_6 && b130_7 && b131_7 && b132_7 && b133_5 && b134_5 && b135_6) {
matched = true;
pattern_id = 2081;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_18 && b5_52 && b6_46 && b7_8 && b8_14 && b9_43 && b10_4 && b11_37 && b12_17 && b13_38 && b14_24 && b15_30 && b16_22 && b17_36 && b18_8 && b19_3 && b20_29 && b21_4 && b22_39 && b23_31 && b24_9 && b25_2 && b26_13 && b27_8 && b28_28 && b29_26 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2082;
}
if(b0_14 && b1_15 && b2_9 && b3_28 && b4_15 && b5_11 && b6_22 && b7_11 && b8_7 && b9_12 && b10_32 && b11_3 && b12_26 && b13_38 && b14_37 && b15_3 && b16_3 && b17_36 && b18_8 && b19_3 && b20_29 && b21_4 && b22_39 && b23_31 && b24_9 && b25_2 && b26_13 && b27_8 && b28_28 && b29_26 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2083;
}
if(b0_35 && b1_11 && b2_20 && b3_43 && b4_21 && b5_16 && b6_38 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14) {
matched = true;
pattern_id = 2084;
}
if(b0_35 && b1_3 && b2_19 && b3_11 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2085;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_16 && b5_11 && b6_11 && b7_31 && b8_41 && b9_34 && b10_9 && b11_28 && b12_10 && b13_2 && b14_33 && b15_7 && b16_54 && b17_44 && b18_64) {
matched = true;
pattern_id = 2086;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_3 && b5_26 && b6_1 && b7_3 && b8_1 && b9_67 && b10_2 && b11_35 && b12_26 && b13_41 && b14_18 && b15_30 && b16_2 && b17_25 && b18_8 && b19_3 && b20_29 && b21_4 && b22_14 && b23_18 && b24_9 && b25_2 && b26_13 && b27_8 && b28_35 && b29_53 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2087;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_3 && b5_26 && b6_26 && b7_3 && b8_1 && b9_67 && b10_2 && b11_35 && b12_26 && b13_41 && b14_18 && b15_30 && b16_2 && b17_25 && b18_8 && b19_3 && b20_29 && b21_4 && b22_14 && b23_18 && b24_9 && b25_2 && b26_13 && b27_8 && b28_35 && b29_53 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2088;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_21 && b5_6 && b6_55 && b7_2 && b8_5 && b9_34 && b10_9 && b11_46 && b12_10 && b13_2 && b14_33 && b15_7 && b16_25 && b17_27 && b18_33) {
matched = true;
pattern_id = 2089;
}
if(b0_35 && b1_11 && b2_6 && b3_21 && b4_55 && b5_55 && b6_7 && b7_8 && b8_2 && b9_49 && b10_6 && b11_27 && b12_19) {
matched = true;
pattern_id = 2090;
}
if(b0_14 && b1_37 && b2_34 && b3_28 && b4_1 && b5_20 && b6_8 && b7_39 && b8_5 && b9_29 && b10_2 && b11_42 && b12_15 && b13_26 && b14_20 && b15_31 && b16_45 && b17_35 && b18_10 && b19_51 && b20_3 && b21_4 && b22_10 && b23_21 && b24_2 && b25_15 && b26_17 && b27_8 && b28_8 && b29_22 && b30_13 && b31_22 && b32_25 && b33_35 && b34_22 && b35_24 && b36_23 && b37_44 && b38_2 && b39_34 && b40_11 && b41_13 && b42_35 && b43_37 && b44_5 && b45_33 && b46_6 && b47_9) {
matched = true;
pattern_id = 2091;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_58 && b8_11 && b9_11 && b10_7 && b11_6 && b12_55 && b13_16 && b14_3 && b15_66 && b16_35 && b17_2 && b18_6 && b19_44 && b20_1 && b21_4 && b22_2 && b23_1 && b24_2 && b25_2 && b26_18 && b27_8 && b28_57 && b29_34 && b30_15 && b31_32 && b32_51) {
matched = true;
pattern_id = 2092;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_23 && b6_16 && b7_13 && b8_10 && b9_70) {
matched = true;
pattern_id = 2093;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_30 && b17_59 && b18_10 && b19_32 && b20_37 && b21_14 && b22_4 && b23_20 && b24_25 && b25_2 && b26_8 && b27_8 && b28_9 && b29_8 && b30_2 && b31_40 && b32_24 && b33_19 && b34_17 && b35_28 && b36_15 && b37_14 && b38_37 && b39_22 && b40_15 && b41_13 && b42_6 && b43_19 && b44_18 && b45_5 && b46_35 && b47_16 && b48_4 && b49_26 && b50_21) {
matched = true;
pattern_id = 2094;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_44 && b6_23) {
matched = true;
pattern_id = 2095;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_75 && b6_21 && b7_11 && b8_50 && b9_13 && b10_28 && b11_28 && b12_18 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 2096;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_75 && b6_55 && b7_1 && b8_13 && b9_6 && b10_32 && b11_5 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_8) {
matched = true;
pattern_id = 2097;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_1 && b5_75 && b6_11 && b7_10 && b8_2 && b9_10 && b10_27 && b11_20 && b12_15 && b13_2 && b14_3 && b15_29 && b16_17 && b17_2 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_53 && b25_56 && b26_52 && b27_56 && b28_8 && b29_54 && b30_36 && b31_14 && b32_9 && b33_25 && b34_14 && b35_1 && b36_40 && b37_4 && b38_25 && b39_41 && b40_7 && b41_5 && b42_8 && b43_39 && b44_18 && b45_5 && b46_7 && b47_9 && b48_24 && b49_27 && b50_33 && b51_18 && b52_3 && b53_26 && b54_14 && b55_8 && b56_15 && b57_6 && b58_12 && b59_6 && b60_19 && b61_11 && b62_11 && b63_10 && b64_17 && b65_21 && b66_4 && b67_4 && b68_18 && b69_2 && b70_3 && b71_17 && b72_2) {
matched = true;
pattern_id = 2098;
}
if(b0_35 && b1_2 && b2_52 && b3_40 && b4_15 && b5_6 && b6_36 && b7_30 && b8_48 && b9_5 && b10_47 && b11_3 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_3 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 2099;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_70 && b5_16 && b6_8 && b7_45 && b8_58 && b9_44 && b10_74 && b11_3 && b12_7 && b13_26 && b14_1 && b15_9 && b16_15 && b17_44 && b18_11 && b19_6 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2100;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_2 && b5_42 && b6_8 && b7_9 && b8_15 && b9_52 && b10_26 && b11_29) {
matched = true;
pattern_id = 2101;
}
if(b0_32 && b1_3 && b2_19 && b3_11 && b4_32 && b5_1 && b6_49 && b7_1 && b8_1 && b9_8 && b10_2) {
matched = true;
pattern_id = 2102;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_52 && b13_36 && b14_35 && b15_25 && b16_24 && b17_36 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 2103;
}
if(b0_35 && b1_52 && b2_25 && b3_56 && b4_19 && b5_11 && b6_11 && b7_10 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 2104;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_35 && b5_25 && b6_3 && b7_14 && b8_9 && b9_48 && b10_28 && b11_5 && b12_50 && b13_36 && b14_28 && b15_36 && b16_49 && b17_34 && b18_41) {
matched = true;
pattern_id = 2105;
}
if(b0_35 && b1_11 && b2_15 && b3_26 && b4_24 && b5_62 && b6_8 && b7_52 && b8_42 && b9_11 && b10_56 && b11_57 && b12_38 && b13_22 && b14_47 && b15_54 && b16_5 && b17_10 && b18_19 && b19_4 && b20_13 && b21_15 && b22_45 && b23_44 && b24_4 && b25_4 && b26_26 && b27_44 && b28_1 && b29_24 && b30_52 && b31_53) {
matched = true;
pattern_id = 2106;
}
if(b0_35 && b1_50 && b2_20 && b3_27 && b4_17 && b5_6 && b6_34 && b7_11 && b8_8 && b9_56 && b10_26 && b11_27 && b12_52 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52 && b18_32 && b19_2 && b20_28 && b21_24 && b22_28 && b23_31 && b24_37 && b25_1 && b26_32 && b27_16 && b28_40 && b29_35 && b30_24 && b31_33 && b32_52) {
matched = true;
pattern_id = 2107;
}
if(b0_35 && b1_31 && b2_14 && b3_24 && b4_12 && b5_58 && b6_3 && b7_22 && b8_14 && b9_33 && b10_12 && b11_30 && b12_26 && b13_43 && b14_51 && b15_36 && b16_29 && b17_40 && b18_4) {
matched = true;
pattern_id = 2108;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_51 && b5_10 && b6_38 && b7_68 && b8_22 && b9_66 && b10_27 && b11_20 && b12_2 && b13_51 && b14_2 && b15_68 && b16_5 && b17_34 && b18_9 && b19_31 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2109;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_60 && b5_11 && b6_10 && b7_31 && b8_10 && b9_1 && b10_62 && b11_20 && b12_3 && b13_36 && b14_54 && b15_35 && b16_16 && b17_8 && b18_1 && b19_16 && b20_9 && b21_27 && b22_20 && b23_51 && b24_17 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2110;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_36 && b5_1 && b6_5 && b7_55 && b8_11 && b9_34 && b10_17 && b11_27 && b12_17 && b13_21 && b14_17 && b15_17 && b16_17 && b17_27 && b18_29 && b19_34 && b20_25 && b21_21 && b22_6 && b23_31 && b24_1 && b25_35 && b26_26 && b27_42 && b28_18 && b29_24 && b30_2 && b31_11 && b32_32 && b33_8 && b34_1 && b35_13 && b36_3) {
matched = true;
pattern_id = 2111;
}
if(b0_20 && b1_8 && b2_3 && b3_15 && b4_3 && b5_11 && b6_41 && b7_61 && b8_56 && b9_3 && b10_33 && b11_52 && b12_11 && b13_71 && b14_25 && b15_35 && b16_16 && b17_55 && b18_29 && b19_34 && b20_24 && b21_36 && b22_58 && b23_16 && b24_17 && b25_35 && b26_25 && b27_46) {
matched = true;
pattern_id = 2112;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_36 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_19 && b18_3 && b19_26 && b20_7 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2113;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_36 && b5_32 && b6_12 && b7_40 && b8_27 && b9_13 && b10_21 && b11_11 && b12_6 && b13_2 && b14_27 && b15_4 && b16_21 && b17_1 && b18_3 && b19_3 && b20_12 && b21_4) {
matched = true;
pattern_id = 2114;
}
if(b0_14 && b1_15 && b2_26 && b3_14 && b4_36 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_7) {
matched = true;
pattern_id = 2115;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_15 && b5_52 && b6_12 && b7_37 && b8_29 && b9_51 && b10_61 && b11_13 && b12_66 && b13_40 && b14_30 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_17 && b23_27 && b24_20 && b25_33 && b26_24 && b27_19 && b28_56 && b29_7 && b30_50 && b31_9 && b32_53 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7 && b40_7 && b41_28 && b42_19 && b43_12 && b44_14 && b45_11 && b46_14 && b47_19 && b48_1 && b49_12 && b50_34 && b51_2 && b52_2 && b53_27 && b54_22 && b55_1 && b56_20 && b57_4 && b58_4 && b59_20 && b60_2 && b61_3 && b62_20 && b63_18 && b64_18 && b65_11 && b66_9 && b67_19 && b68_12 && b69_12 && b70_22 && b71_12 && b72_8 && b73_15 && b74_19 && b75_5 && b76_14 && b77_14 && b78_16 && b79_8 && b80_15 && b81_9 && b82_16 && b83_17 && b84_12 && b85_13 && b86_4 && b87_2 && b88_12) {
matched = true;
pattern_id = 2116;
}
if(b0_6 && b1_3 && b2_16 && b3_11 && b4_27 && b5_52 && b6_11) {
matched = true;
pattern_id = 2117;
}
if(b0_24 && b1_14 && b2_14 && b3_50 && b4_7 && b5_16 && b6_55 && b7_46) {
matched = true;
pattern_id = 2118;
}
if(b0_58 && b1_8 && b2_14 && b3_40 && b4_12 && b5_27 && b6_8 && b7_11 && b8_34) {
matched = true;
pattern_id = 2119;
}
if(b0_22 && b1_6 && b2_43 && b3_8 && b4_12 && b5_27 && b6_7 && b7_45 && b8_35) {
matched = true;
pattern_id = 2120;
}
if(b0_42 && b1_17 && b2_46 && b3_36 && b4_42 && b5_9 && b6_40 && b7_24 && b8_17 && b9_24 && b10_28 && b11_28 && b12_18 && b13_19 && b14_17 && b15_16 && b16_18 && b17_21 && b18_10 && b19_19 && b20_20 && b21_15 && b22_14 && b23_16 && b24_17 && b25_18 && b26_47 && b27_33 && b28_1 && b29_25 && b30_20 && b31_31) {
matched = true;
pattern_id = 2121;
}
if(b0_12 && b1_47 && b2_16 && b3_21 && b4_12 && b5_3 && b6_38 && b7_2 && b8_11 && b9_30 && b10_30 && b11_30 && b12_7 && b13_22 && b14_21 && b15_5 && b16_45 && b17_18 && b18_29 && b19_34 && b20_35 && b21_50 && b22_48 && b23_32 && b24_33 && b25_19 && b26_36 && b27_1 && b28_27 && b29_46 && b30_26 && b31_29) {
matched = true;
pattern_id = 2122;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_20 && b5_47 && b6_11 && b7_11 && b8_47 && b9_4 && b10_41 && b11_22 && b12_6 && b13_31 && b14_1 && b15_7) {
matched = true;
pattern_id = 2123;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_18 && b5_20 && b6_11 && b7_11 && b8_69 && b9_4 && b10_10 && b11_39 && b12_10 && b13_16 && b14_38 && b15_35 && b16_46 && b17_44 && b18_8 && b19_3 && b20_29 && b21_4 && b22_34 && b23_31 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2124;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_21 && b5_29 && b6_55 && b7_45 && b8_46 && b9_4 && b10_10 && b11_39 && b12_10 && b13_5 && b14_4 && b15_35 && b16_8 && b17_36 && b18_8 && b19_3 && b20_29 && b21_4 && b22_27 && b23_16 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2125;
}
if(b0_69 && b1_20 && b2_58 && b3_64 && b4_32 && b5_44 && b6_1 && b7_3 && b8_71 && b9_53 && b10_12 && b11_47 && b12_10 && b13_2 && b14_10 && b15_7) {
matched = true;
pattern_id = 2126;
}
if(b0_35 && b1_6 && b2_23 && b3_26 && b4_14 && b5_6 && b6_23 && b7_16 && b8_35 && b9_27 && b10_4 && b11_40 && b12_6 && b13_72 && b14_44 && b15_23 && b16_28 && b17_28 && b18_24 && b19_44 && b20_5 && b21_4 && b22_2 && b23_1 && b24_2 && b25_2 && b26_18 && b27_8 && b28_57 && b29_34 && b30_15 && b31_32 && b32_51 && b33_8) {
matched = true;
pattern_id = 2127;
}
if(b0_64 && b1_47 && b2_20 && b3_24 && b4_18 && b5_29 && b6_24 && b7_31 && b8_47 && b9_6) {
matched = true;
pattern_id = 2128;
}
if(b0_53 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8 && b7_44 && b8_62 && b9_42 && b10_10 && b11_2 && b12_10 && b13_31 && b14_8 && b15_7 && b16_25 && b17_27 && b18_33 && b19_2 && b20_24 && b21_36 && b22_27 && b23_4 && b24_8 && b25_33 && b26_11 && b27_13 && b28_15 && b29_1 && b30_5 && b31_54 && b32_54 && b33_47 && b34_9 && b35_5 && b36_44 && b37_17 && b38_5 && b39_42 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_34 && b46_13 && b47_1 && b48_19 && b49_14 && b50_35 && b51_23 && b52_3 && b53_5 && b54_23 && b55_17 && b56_17 && b57_20 && b58_13 && b59_4 && b60_20 && b61_9 && b62_4 && b63_19 && b64_3) {
matched = true;
pattern_id = 2129;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_18 && b5_52 && b6_46 && b7_54 && b8_5 && b9_19 && b10_5 && b11_34 && b12_4 && b13_26 && b14_1 && b15_6 && b16_15 && b17_4 && b18_15 && b19_25 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 2130;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_14 && b5_11 && b6_10 && b7_8 && b8_12 && b9_9 && b10_2 && b11_1 && b12_1 && b13_26 && b14_41 && b15_30 && b16_44 && b17_47 && b18_11 && b19_41 && b20_9 && b21_1 && b22_21 && b23_7 && b24_20 && b25_36 && b26_33 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2131;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_14 && b5_7 && b6_7 && b7_8 && b8_8 && b9_41 && b10_27 && b11_19 && b12_1 && b13_31 && b14_2 && b15_1 && b16_51 && b17_8 && b18_20 && b19_45 && b20_41 && b21_20 && b22_20 && b23_24 && b24_9 && b25_2 && b26_9 && b27_8 && b28_31 && b29_19 && b30_41 && b31_4 && b32_7 && b33_1 && b34_3) {
matched = true;
pattern_id = 2132;
}
if(b0_14 && b1_15 && b2_31 && b3_28 && b4_14 && b5_42 && b6_10 && b7_14 && b8_7 && b9_34 && b10_26 && b11_27 && b12_5 && b13_22 && b14_17 && b15_21 && b16_2 && b17_8 && b18_1 && b19_54 && b20_9 && b21_20 && b22_33 && b23_16 && b24_29 && b25_4 && b26_27 && b27_8 && b28_2 && b29_5 && b30_2 && b31_32 && b32_39 && b33_4 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 2133;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_16 && b5_3 && b6_39 && b7_47 && b8_10 && b9_1 && b10_73 && b11_20 && b12_16 && b13_5 && b14_18 && b15_16 && b16_24 && b17_34 && b18_8 && b19_3 && b20_51 && b21_4 && b22_45 && b23_46 && b24_37 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2134;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_21 && b5_11 && b6_24 && b7_9 && b8_17 && b9_4 && b10_10 && b11_8 && b12_10 && b13_3 && b14_21 && b15_20 && b16_29 && b17_39 && b18_9 && b19_2 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2135;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_19 && b5_2 && b6_68 && b7_67 && b8_25 && b9_24 && b10_2 && b11_1 && b12_1 && b13_26 && b14_51 && b15_42 && b16_22 && b17_47 && b18_11 && b19_41 && b20_9 && b21_1 && b22_10 && b23_7 && b24_32 && b25_44 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2136;
}
if(b0_14 && b1_17 && b2_27 && b3_28 && b4_15 && b5_6 && b6_20 && b7_47 && b8_41 && b9_5 && b10_12 && b11_40 && b12_5 && b13_4 && b14_30 && b15_35 && b16_44 && b17_11 && b18_25 && b19_24 && b20_16 && b21_4 && b22_2 && b23_21 && b24_9 && b25_19 && b26_50 && b27_8 && b28_2 && b29_5 && b30_2 && b31_40 && b32_34 && b33_4 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 2137;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_24 && b5_11 && b6_55 && b7_46 && b8_14 && b9_71 && b10_73 && b11_20 && b12_2 && b13_64 && b14_2 && b15_18 && b16_55 && b17_49 && b18_20 && b19_12 && b20_30 && b21_4 && b22_2 && b23_23 && b24_9 && b25_36 && b26_34 && b27_40 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 2138;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_24 && b5_26 && b6_39 && b7_47 && b8_47 && b9_10 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2139;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_3 && b5_11 && b6_22 && b7_33 && b8_1 && b9_1 && b10_3 && b11_20 && b12_2 && b13_11 && b14_2 && b15_33 && b16_44 && b17_21 && b18_8 && b19_3 && b20_29 && b21_4 && b22_39 && b23_37 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2140;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_3 && b5_42 && b6_19 && b7_14 && b8_2 && b9_10 && b10_2 && b11_1 && b12_13 && b13_26 && b14_5 && b15_44 && b16_5 && b17_4 && b18_46 && b19_12 && b20_2 && b21_36 && b22_1 && b23_2 && b24_16 && b25_6 && b26_32 && b27_39 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 2141;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_44 && b5_51 && b6_3 && b7_63 && b8_27 && b9_57 && b10_27 && b11_69 && b12_7 && b13_16 && b14_2 && b15_1 && b16_67 && b17_8 && b18_30 && b19_12 && b20_30 && b21_1 && b22_15 && b23_7 && b24_15 && b25_15 && b26_11 && b27_3 && b28_31 && b29_21 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2142;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_7 && b5_16 && b6_55 && b7_11 && b8_7 && b9_48 && b10_28 && b11_23 && b12_38 && b13_22 && b14_20 && b15_7 && b16_4 && b17_6 && b18_8 && b19_42 && b20_49 && b21_2 && b22_31 && b23_25 && b24_4 && b25_22 && b26_27 && b27_8 && b28_2 && b29_20 && b30_2 && b31_40 && b32_24 && b33_19 && b34_3 && b35_7 && b36_4 && b37_10) {
matched = true;
pattern_id = 2143;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_7 && b5_25 && b6_53 && b7_4 && b8_1 && b9_4 && b10_10 && b11_11 && b12_10 && b13_19 && b14_57 && b15_41 && b16_23 && b17_49 && b18_29 && b19_6 && b20_1 && b21_47 && b22_1 && b23_31 && b24_1 && b25_25 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2144;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_7 && b5_8 && b6_3 && b7_7 && b8_14 && b9_17 && b10_43 && b11_3 && b12_20 && b13_14 && b14_2 && b15_1 && b16_51 && b17_8 && b18_20 && b19_45 && b20_41 && b21_20 && b22_20 && b23_24 && b24_9 && b25_2 && b26_16 && b27_8 && b28_18 && b29_16 && b30_40 && b31_38 && b32_3 && b33_1 && b34_1 && b35_1) {
matched = true;
pattern_id = 2145;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_17 && b5_16 && b6_36 && b7_21 && b8_2 && b9_25 && b10_2 && b11_1 && b12_31 && b13_26 && b14_20 && b15_25 && b16_41 && b17_8 && b18_1 && b19_26 && b20_9 && b21_35 && b22_30 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 2146;
}
if(b0_14 && b1_15 && b2_38 && b3_28 && b4_2 && b5_6 && b6_10 && b7_52 && b8_11 && b9_17 && b10_17 && b11_5 && b12_10 && b13_2 && b14_8 && b15_7 && b16_2 && b17_29 && b18_22 && b19_51 && b20_2 && b21_34 && b22_3 && b23_35 && b24_9 && b25_2 && b26_9 && b27_8 && b28_31 && b29_19 && b30_41 && b31_4 && b32_7 && b33_1 && b34_3) {
matched = true;
pattern_id = 2147;
}
if(b0_14 && b1_15 && b2_46 && b3_28 && b4_2 && b5_55 && b6_5 && b7_4 && b8_17 && b9_4 && b10_11 && b11_3 && b12_20 && b13_48 && b14_17 && b15_16 && b16_44 && b17_34 && b18_8 && b19_3 && b20_51 && b21_4 && b22_45 && b23_46 && b24_37 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2148;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_2 && b5_21 && b6_39 && b7_47 && b8_47 && b9_10 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2149;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_6 && b5_11 && b6_71 && b7_31 && b8_16 && b9_49 && b10_2 && b11_1 && b12_54 && b13_26 && b14_36 && b15_30 && b16_23 && b17_59 && b18_15 && b19_12 && b20_2 && b21_4 && b22_2 && b23_23 && b24_9 && b25_4 && b26_25 && b27_19 && b28_6 && b29_2 && b30_9 && b31_4) {
matched = true;
pattern_id = 2150;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_6 && b5_29 && b6_55 && b7_46 && b8_42 && b9_4 && b10_10 && b11_8 && b12_10 && b13_3 && b14_21 && b15_20 && b16_29 && b17_47 && b18_11 && b19_41 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2151;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_59 && b6_57 && b7_3 && b8_1 && b9_71 && b10_2 && b11_34 && b12_60 && b13_22 && b14_51 && b15_41 && b16_2 && b17_8 && b18_1 && b19_24 && b20_9 && b21_21 && b22_34 && b23_44 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2152;
}
if(b0_14 && b1_15 && b2_26 && b3_28 && b4_31 && b5_21 && b6_55 && b7_31 && b8_54 && b9_4 && b10_10 && b11_11 && b12_10 && b13_16 && b14_17 && b15_15 && b16_46 && b17_44 && b18_19 && b19_6 && b20_1 && b21_47 && b22_1 && b23_16 && b24_3 && b25_30 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2153;
}
if(b0_3 && b1_16 && b2_20 && b3_7 && b4_7 && b5_23 && b6_16 && b7_22 && b8_10) {
matched = true;
pattern_id = 2154;
}
if(b0_35 && b1_2 && b2_12 && b3_56 && b4_7 && b5_25 && b6_39 && b7_46 && b8_11 && b9_11 && b10_48 && b11_47 && b12_20 && b13_50) {
matched = true;
pattern_id = 2155;
}
if(b0_35 && b1_24 && b2_29 && b3_26 && b4_21 && b5_37 && b6_20 && b7_56 && b8_42 && b9_40 && b10_7 && b11_6 && b12_3 && b13_40 && b14_42 && b15_5 && b16_24) {
matched = true;
pattern_id = 2156;
}
if(b0_35 && b1_35 && b2_29 && b3_49 && b4_59 && b5_25 && b6_54 && b7_31 && b8_47 && b9_40 && b10_6 && b11_27 && b12_12 && b13_50 && b14_36 && b15_35) {
matched = true;
pattern_id = 2157;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6) {
matched = true;
pattern_id = 2158;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_30 && b6_7 && b7_32 && b8_6 && b9_6) {
matched = true;
pattern_id = 2159;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_62 && b13_27 && b14_42 && b15_8 && b16_8 && b17_26 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 2160;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_35 && b5_64 && b6_22 && b7_10 && b8_8 && b9_29) {
matched = true;
pattern_id = 2161;
}
if(b0_35 && b1_5 && b2_22 && b3_12 && b4_10 && b5_28) {
matched = true;
pattern_id = 2162;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_15 && b5_11 && b6_11 && b7_9 && b8_14 && b9_19 && b10_35 && b11_46 && b12_66 && b13_31 && b14_2 && b15_1 && b16_67 && b17_8 && b18_11 && b19_31 && b20_62 && b21_27 && b22_40 && b23_7 && b24_15 && b25_15 && b26_11 && b27_41 && b28_18 && b29_55 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2163;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_2 && b5_16 && b6_34 && b7_11 && b8_2 && b9_27 && b10_49 && b11_37 && b12_7 && b13_26 && b14_1 && b15_71 && b16_15 && b17_25 && b18_57 && b19_51 && b20_41 && b21_35 && b22_1 && b23_2 && b24_19 && b25_6 && b26_30 && b27_36 && b28_29 && b29_1 && b30_9 && b31_11 && b32_3) {
matched = true;
pattern_id = 2164;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_4 && b10_3 && b11_42 && b12_10 && b13_37 && b14_55 && b15_15 && b16_8 && b17_53 && b18_44 && b19_41 && b20_2 && b21_36 && b22_38 && b23_35 && b24_25 && b25_57 && b26_35 && b27_21 && b28_6 && b29_5 && b30_1 && b31_10 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10) {
matched = true;
pattern_id = 2165;
}
if(b0_35 && b1_16 && b2_25 && b3_26 && b4_16 && b5_30 && b6_24 && b7_53 && b8_36 && b9_20 && b10_11 && b11_3 && b12_17 && b13_4 && b14_38 && b15_44 && b16_28 && b17_18 && b18_15 && b19_42 && b20_35 && b21_35 && b22_3 && b23_57 && b24_3 && b25_3 && b26_41 && b27_31 && b28_30 && b29_23 && b30_37 && b31_28 && b32_31) {
matched = true;
pattern_id = 2166;
}
if(b0_35 && b1_58 && b2_20 && b3_2 && b4_3 && b5_25 && b6_3 && b7_31 && b8_47 && b9_42 && b10_28 && b11_5 && b12_32 && b13_39 && b14_36 && b15_17) {
matched = true;
pattern_id = 2167;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30 && b6_26 && b7_15 && b8_22 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_21 && b17_4 && b18_31 && b19_9 && b20_34 && b21_36 && b22_59 && b23_8 && b24_54 && b25_20 && b26_53 && b27_8 && b28_2 && b29_14 && b30_5 && b31_11 && b32_16 && b33_4 && b34_8 && b35_27 && b36_1 && b37_30 && b38_1 && b39_19 && b40_16 && b41_43 && b42_37 && b43_41 && b44_32 && b45_17 && b46_30 && b47_16 && b48_25 && b49_13 && b50_13 && b51_6 && b52_1 && b53_25 && b54_4 && b55_20 && b56_23 && b57_21 && b58_25 && b59_21 && b60_21 && b61_19 && b62_21 && b63_20 && b64_8 && b65_22 && b66_18 && b67_15 && b68_19 && b69_16 && b70_23 && b71_9 && b72_14 && b73_17 && b74_20 && b75_7 && b76_15 && b77_14 && b78_17 && b79_14 && b80_13 && b81_4 && b82_4 && b83_18 && b84_2 && b85_2 && b86_13 && b87_8 && b88_13 && b89_12 && b90_11 && b91_1 && b92_10 && b93_12 && b94_9 && b95_3 && b96_10 && b97_10 && b98_11 && b99_2 && b100_10 && b101_11 && b102_10 && b103_9 && b104_8 && b105_10 && b106_9 && b107_8 && b108_8 && b109_8 && b110_1 && b111_1 && b112_8 && b113_8 && b114_3 && b115_9 && b116_8 && b117_7 && b118_5 && b119_8 && b120_1 && b121_7 && b122_8 && b123_9 && b124_7 && b125_5 && b126_8 && b127_3 && b128_9 && b129_7 && b130_8 && b131_1 && b132_8 && b133_6 && b134_6 && b135_7 && b136_4 && b137_2 && b138_3 && b139_7 && b140_6 && b141_7 && b142_6 && b143_6 && b144_7 && b145_3 && b146_5 && b147_6 && b148_3 && b149_5 && b150_2 && b151_5 && b152_6 && b153_5 && b154_5 && b155_5 && b156_6 && b157_5 && b158_3 && b159_5 && b160_1 && b161_6 && b162_6 && b163_1 && b164_6 && b165_4 && b166_4 && b167_4 && b168_4 && b169_4 && b170_5 && b171_4 && b172_4 && b173_3 && b174_4 && b175_3 && b176_4 && b177_1 && b178_3 && b179_3 && b180_3 && b181_3 && b182_2 && b183_2 && b184_2 && b185_3 && b186_3 && b187_2 && b188_3 && b189_3 && b190_3) {
matched = true;
pattern_id = 2168;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_4 && b5_22 && b6_14 && b7_4 && b8_10 && b9_1 && b10_41 && b11_20 && b12_18 && b13_36 && b14_12 && b15_7 && b16_4 && b17_1 && b18_8) {
matched = true;
pattern_id = 2169;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_18 && b10_2 && b11_23 && b12_5 && b13_62 && b14_55 && b15_31 && b16_24 && b17_33 && b18_15 && b19_6 && b20_1 && b21_47 && b22_1 && b23_27 && b24_17 && b25_35 && b26_11 && b27_7 && b28_2 && b29_1) {
matched = true;
pattern_id = 2170;
}
if(b0_23 && b1_2 && b2_16 && b3_11 && b4_51 && b5_10 && b6_3 && b7_30 && b8_48 && b9_17 && b10_6 && b11_26 && b12_12 && b13_5 && b14_42 && b15_3) {
matched = true;
pattern_id = 2171;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_11) {
matched = true;
pattern_id = 2172;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_5 && b45_5 && b46_35 && b47_16 && b48_4 && b49_26 && b50_21 && b51_24 && b52_9 && b53_1 && b54_14 && b55_28 && b56_6 && b57_15 && b58_26 && b59_1 && b60_18 && b61_20 && b62_22 && b63_21 && b64_19 && b65_10 && b66_19 && b67_20 && b68_20 && b69_14 && b70_14 && b71_5 && b72_15 && b73_18 && b74_21 && b75_4 && b76_3 && b77_15 && b78_4 && b79_4 && b80_18 && b81_3 && b82_4 && b83_18 && b84_2 && b85_2 && b86_13 && b87_8) {
matched = true;
pattern_id = 2173;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_64 && b16_16 && b17_47 && b18_32 && b19_34 && b20_2 && b21_10 && b22_13 && b23_26 && b24_17 && b25_48 && b26_32 && b27_31 && b28_31 && b29_41 && b30_29 && b31_14 && b32_40 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 2174;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_11 && b18_65) {
matched = true;
pattern_id = 2175;
}
if(b0_35 && b1_13 && b2_23 && b3_24 && b4_35 && b5_6 && b6_20 && b7_15 && b8_6 && b9_10 && b10_35 && b11_30) {
matched = true;
pattern_id = 2176;
}
if(b0_35 && b1_21 && b2_25 && b3_51 && b4_12 && b5_8 && b6_10 && b7_14 && b8_8 && b9_42 && b10_38 && b11_37 && b12_52 && b13_39 && b14_20 && b15_22 && b16_44 && b17_44 && b18_15 && b19_12 && b20_26 && b21_30 && b22_3 && b23_19 && b24_8 && b25_1 && b26_19 && b27_54) {
matched = true;
pattern_id = 2177;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_2 && b5_27 && b6_24 && b7_46 && b8_8 && b9_27 && b10_32 && b11_28 && b12_5 && b13_4 && b14_2 && b15_1 && b16_14 && b17_8 && b18_23 && b19_21 && b20_37 && b21_4 && b22_2 && b23_21 && b24_9 && b25_18 && b26_37 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2178;
}
if(b0_35 && b1_2 && b2_21 && b3_21 && b4_17 && b5_10 && b6_35 && b7_29 && b8_15 && b9_9 && b10_35 && b11_5 && b12_28 && b13_16 && b14_57 && b15_41 && b16_25 && b17_38 && b18_19 && b19_38 && b20_34) {
matched = true;
pattern_id = 2179;
}
if(b0_35 && b1_2 && b2_21 && b3_21 && b4_17 && b5_10 && b6_35 && b7_29 && b8_15 && b9_9 && b10_35 && b11_5 && b12_28 && b13_27 && b14_28 && b15_18 && b16_29 && b17_40 && b18_18 && b19_2 && b20_48 && b21_42) {
matched = true;
pattern_id = 2180;
}
if(b0_14 && b1_18 && b2_57 && b3_28 && b4_21 && b5_16 && b6_20 && b7_10 && b8_37 && b9_35 && b10_17 && b11_27 && b12_39 && b13_5 && b14_35 && b15_11 && b16_8 && b17_44 && b18_4 && b19_12 && b20_28 && b21_18 && b22_39 && b23_31 && b24_21 && b25_34) {
matched = true;
pattern_id = 2181;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_50 && b5_27 && b6_23 && b7_29 && b8_61 && b9_42 && b10_5 && b11_54 && b12_32 && b13_1 && b14_65 && b15_23 && b16_35 && b17_56 && b18_28 && b19_18 && b20_10 && b21_9 && b22_1 && b23_2 && b24_52 && b25_13 && b26_2 && b27_32 && b28_6 && b29_6 && b30_17 && b31_21 && b32_20 && b33_34 && b34_37 && b35_18 && b36_45 && b37_45 && b38_26 && b39_14 && b40_15 && b41_44 && b42_4 && b43_1 && b44_32 && b45_24 && b46_18 && b47_19 && b48_12 && b49_11 && b50_1 && b51_17 && b52_9 && b53_28 && b54_11 && b55_29 && b56_24 && b57_6 && b58_22 && b59_17 && b60_22 && b61_21 && b62_1 && b63_6 && b64_12 && b65_23 && b66_20 && b67_3 && b68_4 && b69_17 && b70_6 && b71_3 && b72_16 && b73_5 && b74_22 && b75_13 && b76_1 && b77_16 && b78_18 && b79_13) {
matched = true;
pattern_id = 2182;
}
if(b0_35 && b1_17 && b2_29 && b3_41 && b4_51 && b5_43 && b6_68 && b7_68 && b8_17 && b9_71 && b10_40 && b11_25 && b12_54 && b13_2 && b14_16 && b15_27 && b16_27 && b17_15 && b18_38 && b19_3 && b20_5 && b21_35 && b22_2) {
matched = true;
pattern_id = 2183;
}
if(b0_35 && b1_6 && b2_6 && b3_50 && b4_35 && b5_16 && b6_18 && b7_31 && b8_58 && b9_5 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 2184;
}
if(b0_32 && b1_54 && b2_50 && b3_16 && b4_26 && b5_51 && b6_3 && b7_39 && b8_48 && b9_50 && b10_4 && b11_20 && b12_2 && b13_12 && b14_3 && b15_1 && b16_21 && b17_8 && b18_35 && b19_40 && b20_25 && b21_29 && b22_40 && b23_28 && b24_50 && b25_13 && b26_19 && b27_1 && b28_44 && b29_25 && b30_23 && b31_19 && b32_20 && b33_19 && b34_21 && b35_45 && b36_6 && b37_46 && b38_46 && b39_43 && b40_3 && b41_4 && b42_13 && b43_2 && b44_3 && b45_35 && b46_2 && b47_8 && b48_12 && b49_25 && b50_17 && b51_9 && b52_17 && b53_29 && b54_24 && b55_22 && b56_24 && b57_21 && b58_16 && b59_13 && b60_12 && b61_22 && b62_16 && b63_2 && b64_11 && b65_10 && b66_9 && b67_20 && b68_9 && b69_18 && b70_4 && b71_18 && b72_2 && b73_4 && b74_23 && b75_5 && b76_3 && b77_17 && b78_9 && b79_15 && b80_16 && b81_6 && b82_17 && b83_7 && b84_13 && b85_14 && b86_14 && b87_13 && b88_1 && b89_13 && b90_2 && b91_10 && b92_11 && b93_13 && b94_10 && b95_11 && b96_8 && b97_11 && b98_12 && b99_5 && b100_11 && b101_2 && b102_3 && b103_10 && b104_9 && b105_1 && b106_10 && b107_9 && b108_9 && b109_9 && b110_9 && b111_8 && b112_9 && b113_3 && b114_2 && b115_10 && b116_9 && b117_4 && b118_2 && b119_9 && b120_9 && b121_8 && b122_9 && b123_9 && b124_8 && b125_8 && b126_9 && b127_8 && b128_10 && b129_8 && b130_9 && b131_8 && b132_3 && b133_1 && b134_7 && b135_8 && b136_5 && b137_5 && b138_2 && b139_8 && b140_7 && b141_7 && b142_1 && b143_7 && b144_4) {
matched = true;
pattern_id = 2185;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_61 && b8_2 && b9_5 && b10_4 && b11_69 && b12_29 && b13_53 && b14_17 && b15_41 && b16_44 && b17_66 && b18_3 && b19_58 && b20_3 && b21_51 && b22_27 && b23_25 && b24_8 && b25_22 && b26_4 && b27_11 && b28_45 && b29_2 && b30_5 && b31_49 && b32_55 && b33_16 && b34_37 && b35_25 && b36_26 && b37_38 && b38_22 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_39 && b45_4 && b46_8 && b47_6 && b48_3 && b49_22 && b50_27 && b51_17 && b52_19 && b53_30 && b54_22 && b55_30 && b56_15 && b57_2 && b58_27 && b59_22 && b60_2 && b61_23 && b62_10 && b63_22 && b64_3 && b65_13 && b66_10 && b67_3 && b68_5 && b69_19 && b70_4 && b71_19 && b72_17 && b73_19 && b74_3 && b75_16 && b76_16 && b77_3 && b78_4 && b79_1 && b80_19 && b81_13 && b82_18 && b83_19 && b84_14 && b85_13 && b86_10 && b87_14 && b88_3 && b89_14 && b90_2 && b91_11 && b92_12 && b93_14 && b94_11 && b95_12 && b96_5 && b97_12 && b98_3 && b99_9 && b100_12 && b101_3 && b102_11 && b103_2 && b104_10 && b105_2 && b106_11 && b107_10 && b108_10 && b109_10 && b110_10 && b111_9 && b112_10 && b113_9 && b114_6 && b115_11 && b116_10 && b117_8 && b118_7 && b119_2 && b120_10 && b121_9 && b122_7 && b123_2 && b124_9 && b125_9 && b126_1 && b127_9 && b128_1 && b129_1 && b130_10 && b131_2) {
matched = true;
pattern_id = 2186;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_51 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 2187;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_7 && b17_7 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 2188;
}
if(b0_35 && b1_3 && b2_15 && b3_29 && b4_15 && b5_42 && b6_18 && b7_54 && b8_3 && b9_63 && b10_36 && b11_52 && b12_47 && b13_52 && b14_30 && b15_36 && b16_7 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7 && b24_12 && b25_36 && b26_32 && b27_19 && b28_21 && b29_16 && b30_36 && b31_50 && b32_56 && b33_36 && b34_17 && b35_33 && b36_46 && b37_3 && b38_21 && b39_12 && b40_43 && b41_26 && b42_34 && b43_42 && b44_16 && b45_20 && b46_18 && b47_9 && b48_4 && b49_28 && b50_12 && b51_4 && b52_26 && b53_17 && b54_25 && b55_29 && b56_15 && b57_6 && b58_28 && b59_6) {
matched = true;
pattern_id = 2189;
}
if(b0_35 && b1_18 && b2_1) {
matched = true;
pattern_id = 2190;
}
if(b0_35 && b1_62 && b2_16 && b3_18 && b4_55 && b5_11 && b6_20 && b7_47 && b8_6 && b9_27 && b10_29) {
matched = true;
pattern_id = 2191;
}
if(b0_35 && b1_62 && b2_41 && b3_15 && b4_55 && b5_11 && b6_20 && b7_47 && b8_6 && b9_27 && b10_29) {
matched = true;
pattern_id = 2192;
}
if(b0_13 && b1_21 && b2_8 && b3_8 && b4_18) {
matched = true;
pattern_id = 2193;
}
if(b0_35 && b1_52 && b2_3 && b3_26 && b4_6 && b5_64) {
matched = true;
pattern_id = 2194;
}
if(b0_35 && b1_47 && b2_29 && b3_15 && b4_3 && b5_12 && b6_7 && b7_51 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22 && b13_27 && b14_51 && b15_17) {
matched = true;
pattern_id = 2195;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_6 && b5_16 && b6_11 && b7_31 && b8_7 && b9_16 && b10_10 && b11_7 && b12_44 && b13_26 && b14_1 && b15_71 && b16_15 && b17_36 && b18_57 && b19_34 && b20_2 && b21_10 && b22_1 && b23_2 && b24_19 && b25_6 && b26_32 && b27_1 && b28_30 && b29_1 && b30_9 && b31_11 && b32_3) {
matched = true;
pattern_id = 2196;
}
if(b0_67 && b1_1 && b2_1 && b3_1 && b4_32 && b5_63 && b6_5 && b7_4 && b8_1 && b9_4 && b10_14 && b11_20 && b12_2 && b13_2 && b14_2 && b15_39 && b16_15 && b17_1 && b18_1 && b19_6 && b20_14 && b21_4 && b22_2 && b23_2 && b24_9 && b25_58 && b26_11 && b27_7 && b28_2 && b29_1 && b30_25 && b31_4 && b32_7 && b33_1 && b34_3 && b35_46 && b36_3 && b37_4 && b38_5 && b39_7 && b40_44 && b41_13 && b42_8 && b43_4 && b44_5 && b45_36 && b46_2 && b47_3 && b48_4 && b49_4 && b50_31 && b51_3 && b52_4 && b53_4 && b54_3 && b55_31 && b56_3 && b57_3 && b58_4 && b59_3 && b60_23 && b61_4 && b62_4 && b63_3 && b64_3 && b65_24 && b66_4 && b67_4 && b68_4 && b69_3 && b70_24 && b71_4 && b72_3 && b73_4 && b74_3) {
matched = true;
pattern_id = 2197;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_28 && b6_32 && b7_6 && b8_62 && b9_66 && b10_73 && b11_8 && b12_13 && b13_9 && b14_34 && b15_16 && b16_40 && b17_49 && b18_31 && b19_34 && b20_27 && b21_21 && b22_20 && b23_24 && b24_24) {
matched = true;
pattern_id = 2198;
}
if(b0_57 && b1_55 && b2_52 && b3_11 && b4_17 && b5_26 && b6_35 && b7_14 && b8_7 && b9_4 && b10_44 && b11_10 && b12_10) {
matched = true;
pattern_id = 2199;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2200;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 2201;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 2202;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_4) {
matched = true;
pattern_id = 2203;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_33 && b15_4 && b16_4 && b17_3 && b18_3 && b19_16 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2204;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_13 && b10_10 && b11_1 && b12_6 && b13_33 && b14_1 && b15_7) {
matched = true;
pattern_id = 2205;
}
if(b0_14 && b1_17 && b2_1 && b3_28 && b4_12 && b5_16 && b6_18 && b7_42 && b8_69 && b9_27 && b10_30 && b11_4 && b12_36 && b13_5 && b14_38 && b15_22 && b16_18 && b17_46 && b18_32 && b19_47 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2206;
}
if(b0_14 && b1_17 && b2_1 && b3_28 && b4_50 && b5_10 && b6_38 && b7_53 && b8_14 && b9_49 && b10_38 && b11_37 && b12_37 && b13_60 && b14_17 && b15_42 && b16_25 && b17_4 && b18_29 && b19_48 && b20_9 && b21_1 && b22_21 && b23_7 && b24_17 && b25_27 && b26_39 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2207;
}
if(b0_75 && b1_35 && b2_43 && b3_18 && b4_2 && b5_51 && b6_8 && b7_45 && b8_15 && b9_15 && b10_48 && b11_1 && b12_68) {
matched = true;
pattern_id = 2208;
}
if(b0_35 && b1_35 && b2_14 && b3_43 && b4_12 && b5_8 && b6_34 && b7_15 && b8_5 && b9_45 && b10_17) {
matched = true;
pattern_id = 2209;
}
if(b0_35 && b1_2 && b2_52 && b3_15 && b4_18 && b5_42 && b6_35 && b7_32 && b8_15 && b9_9 && b10_34 && b11_5 && b12_4 && b13_5 && b14_12 && b15_33 && b16_32 && b17_29 && b18_30 && b19_9) {
matched = true;
pattern_id = 2210;
}
if(b0_51 && b1_21 && b2_21 && b3_7 && b4_53 && b5_23 && b6_32 && b7_4 && b8_10) {
matched = true;
pattern_id = 2211;
}
if(b0_17 && b1_58 && b2_49 && b3_35 && b4_12 && b5_3 && b6_8 && b7_51 && b8_57) {
matched = true;
pattern_id = 2212;
}
if(b0_35 && b1_11 && b2_43 && b3_40 && b4_15 && b5_6 && b6_23 && b7_47 && b8_47 && b9_48 && b10_46 && b11_3 && b12_52 && b13_43 && b14_42 && b15_48) {
matched = true;
pattern_id = 2213;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_3 && b5_11 && b6_18 && b7_10 && b8_37 && b9_39 && b10_9 && b11_27 && b12_5 && b13_4 && b14_20 && b15_15 && b16_17 && b17_29 && b18_22 && b19_9 && b20_33 && b21_21 && b22_20 && b23_52 && b24_42) {
matched = true;
pattern_id = 2214;
}
if(b0_14 && b1_15 && b2_31 && b3_28 && b4_50 && b5_20 && b6_35 && b7_52 && b8_5 && b9_14 && b10_11 && b11_46 && b12_25 && b13_31 && b14_1 && b15_27 && b16_4 && b17_8 && b18_1 && b19_59 && b20_9 && b21_2 && b22_45 && b23_43 && b24_4 && b25_18 && b26_11 && b27_7 && b28_20 && b29_1 && b30_17 && b31_23 && b32_38 && b33_4 && b34_1 && b35_7 && b36_3) {
matched = true;
pattern_id = 2215;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2216;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2217;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 2218;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_4) {
matched = true;
pattern_id = 2219;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 2220;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_27 && b9_4) {
matched = true;
pattern_id = 2221;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_4) {
matched = true;
pattern_id = 2222;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_25 && b9_4) {
matched = true;
pattern_id = 2223;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_45 && b41_37 && b42_38 && b43_43 && b44_18 && b45_37 && b46_4 && b47_30 && b48_4 && b49_4 && b50_9 && b51_19 && b52_5 && b53_3 && b54_26 && b55_10 && b56_7 && b57_14 && b58_6 && b59_23 && b60_24 && b61_9 && b62_23 && b63_23 && b64_16 && b65_25 && b66_11 && b67_21 && b68_6 && b69_11 && b70_25 && b71_4 && b72_5 && b73_20 && b74_1 && b75_2 && b76_17 && b77_18 && b78_19 && b79_9 && b80_20 && b81_14 && b82_8 && b83_6 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5) {
matched = true;
pattern_id = 2224;
}
if(b0_14 && b1_37 && b2_9 && b3_14 && b4_4 && b5_1 && b6_5 && b7_10 && b8_10 && b9_1 && b10_10 && b11_20 && b12_18 && b13_26 && b14_1 && b15_1 && b16_15 && b17_21 && b18_8 && b19_3 && b20_1 && b21_4 && b22_45 && b23_7 && b24_15 && b25_2 && b26_8 && b27_29 && b28_2 && b29_7 && b30_9 && b31_11 && b32_3 && b33_18 && b34_3 && b35_7 && b36_4 && b37_10 && b38_38 && b39_7 && b40_4 && b41_4 && b42_3 && b43_14 && b44_5 && b45_5 && b46_4 && b47_16 && b48_26 && b49_15 && b50_12 && b51_4 && b52_4 && b53_17 && b54_27 && b55_17 && b56_2 && b57_3 && b58_9 && b59_1 && b60_4 && b61_3 && b62_4 && b63_18 && b64_20 && b65_5 && b66_3 && b67_4 && b68_6 && b69_18 && b70_5 && b71_3 && b72_3 && b73_5 && b74_9 && b75_4 && b76_3 && b77_7 && b78_9) {
matched = true;
pattern_id = 2225;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_40 && b13_16 && b14_17 && b15_31 && b16_50 && b17_24 && b18_41 && b19_9 && b20_41 && b21_36 && b22_59 && b23_8 && b24_55 && b25_36 && b26_50 && b27_18 && b28_26 && b29_40 && b30_27 && b31_9) {
matched = true;
pattern_id = 2226;
}
if(b0_14 && b1_51 && b2_31 && b3_14 && b4_4 && b5_1 && b6_12 && b7_18 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10 && b13_3 && b14_2 && b15_1 && b16_4 && b17_8 && b18_10 && b19_6 && b20_1 && b21_1 && b22_1 && b23_50 && b24_9 && b25_2 && b26_2 && b27_8 && b28_18 && b29_1 && b30_9 && b31_11 && b32_3 && b33_25 && b34_3 && b35_7 && b36_4 && b37_10 && b38_47 && b39_7 && b40_4 && b41_4 && b42_3) {
matched = true;
pattern_id = 2227;
}
if(b0_32 && b1_58 && b2_20 && b3_40 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2228;
}
if(b0_32 && b1_62 && b2_14 && b3_49 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2229;
}
if(b0_32 && b1_66 && b2_50 && b3_11 && b4_19 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 2230;
}
if(b0_32 && b1_66 && b2_50 && b3_16 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2231;
}
if(b0_32 && b1_13 && b2_41 && b3_49 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2232;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_67 && b10_2 && b11_47 && b12_17 && b13_16 && b14_25 && b15_35 && b16_22 && b17_33 && b18_8 && b19_3 && b20_14 && b21_4 && b22_18 && b23_19 && b24_22 && b25_35 && b26_3 && b27_37 && b28_19 && b29_45 && b30_17 && b31_28 && b32_20 && b33_34 && b34_23 && b35_20 && b36_3 && b37_4 && b38_3 && b39_7 && b40_1 && b41_45 && b42_3 && b43_4 && b44_3 && b45_4) {
matched = true;
pattern_id = 2233;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_31 && b5_21 && b6_56 && b7_3 && b8_1 && b9_3 && b10_2 && b11_4 && b12_16 && b13_41 && b14_55 && b15_40 && b16_24 && b17_67 && b18_22 && b19_45 && b20_24 && b21_51 && b22_31 && b23_16 && b24_9 && b25_2 && b26_13 && b27_8 && b28_34 && b29_37 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2234;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_50 && b13_5 && b14_18 && b15_15 && b16_30 && b17_2 && b18_31 && b19_21 && b20_24 && b21_51 && b22_33 && b23_50 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 2235;
}
if(b0_20 && b1_8 && b2_3 && b3_15 && b4_3 && b5_11 && b6_41 && b7_47 && b8_34 && b9_6 && b10_38 && b11_37 && b12_3 && b13_71 && b14_18 && b15_30 && b16_18 && b17_44 && b18_11 && b19_33) {
matched = true;
pattern_id = 2236;
}
if(b0_76 && b1_72 && b2_41 && b3_8 && b4_43) {
matched = true;
pattern_id = 2237;
}
if(b0_14 && b1_18 && b2_38 && b3_14 && b4_49 && b5_13 && b6_12 && b7_40 && b8_45 && b9_13 && b10_33 && b11_24 && b12_10) {
matched = true;
pattern_id = 2238;
}
if(b0_35 && b1_52 && b2_25 && b3_40 && b4_44 && b5_20 && b6_34 && b7_44 && b8_58 && b9_27 && b10_35 && b11_3 && b12_66 && b13_40 && b14_24 && b15_41 && b16_46) {
matched = true;
pattern_id = 2239;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_2 && b5_30 && b6_35 && b7_45 && b8_47 && b9_5 && b10_47 && b11_57 && b12_32 && b13_3 && b14_36 && b15_4 && b16_60 && b17_43 && b18_51 && b19_29 && b20_13 && b21_9 && b22_37 && b23_12 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2 && b31_18 && b32_24 && b33_35 && b34_31 && b35_33 && b36_1 && b37_30 && b38_42 && b39_36 && b40_25 && b41_18 && b42_1 && b43_37 && b44_18 && b45_19 && b46_25 && b47_23 && b48_10 && b49_6 && b50_16 && b51_14 && b52_17 && b53_18 && b54_22 && b55_22 && b56_25 && b57_21 && b58_29 && b59_17 && b60_6 && b61_24 && b62_24 && b63_4 && b64_10 && b65_4 && b66_9 && b67_1 && b68_21 && b69_3 && b70_3 && b71_20 && b72_5 && b73_4 && b74_24 && b75_4 && b76_18 && b77_14 && b78_2 && b79_9 && b80_21 && b81_3) {
matched = true;
pattern_id = 2240;
}
if(b0_26 && b1_20 && b2_45 && b3_5 && b4_1 && b5_30) {
matched = true;
pattern_id = 2241;
}
if(b0_23 && b1_56 && b2_21 && b3_40 && b4_6 && b5_16 && b6_3 && b7_45 && b8_3 && b9_39 && b10_26 && b11_27 && b12_39 && b13_45 && b14_35 && b15_30 && b16_43 && b17_51 && b18_5 && b19_31 && b20_17 && b21_33 && b22_32 && b23_29 && b24_48 && b25_42 && b26_34 && b27_31 && b28_55 && b29_7 && b30_26 && b31_38 && b32_9 && b33_25 && b34_47) {
matched = true;
pattern_id = 2242;
}
if(b0_32 && b1_21 && b2_21 && b3_49 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_22 && b21_35 && b22_39 && b23_18 && b24_27 && b25_30 && b26_54 && b27_2 && b28_58 && b29_18 && b30_50 && b31_4 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10 && b38_11 && b39_31 && b40_27 && b41_25 && b42_22 && b43_17 && b44_40 && b45_38 && b46_17 && b47_31 && b48_1 && b49_29 && b50_32 && b51_25 && b52_23 && b53_31 && b54_2 && b55_32 && b56_26 && b57_22 && b58_30 && b59_24 && b60_2 && b61_25 && b62_25 && b63_24 && b64_17 && b65_23 && b66_21 && b67_18 && b68_6 && b69_4 && b70_26 && b71_6 && b72_3 && b73_21 && b74_3 && b75_17 && b76_1 && b77_18 && b78_10 && b79_16 && b80_18 && b81_15 && b82_10 && b83_1 && b84_15 && b85_15 && b86_15 && b87_15 && b88_14 && b89_15 && b90_12 && b91_12 && b92_13 && b93_15 && b94_12) {
matched = true;
pattern_id = 2243;
}
if(b0_35 && b1_15 && b2_60 && b3_16 && b4_27 && b5_3 && b6_61) {
matched = true;
pattern_id = 2244;
}
if(b0_35 && b1_13 && b2_62 && b3_48 && b4_22 && b5_16 && b6_36 && b7_30 && b8_5 && b9_41 && b10_22 && b11_2 && b12_65 && b13_73 && b14_44 && b15_19 && b16_11 && b17_3 && b18_18 && b19_18 && b20_9 && b21_1 && b22_49 && b23_8 && b24_15 && b25_17 && b26_11 && b27_57 && b28_1 && b29_30 && b30_18 && b31_50 && b32_16 && b33_32 && b34_24 && b35_22 && b36_15 && b37_47 && b38_25 && b39_44 && b40_26 && b41_25 && b42_10 && b43_44 && b44_4 && b45_12 && b46_15 && b47_9 && b48_4 && b49_28 && b50_12 && b51_4 && b52_26 && b53_17 && b54_25 && b55_29 && b56_15 && b57_6 && b58_28 && b59_6) {
matched = true;
pattern_id = 2245;
}
if(b0_35 && b1_59 && b2_20 && b3_20 && b4_60 && b5_6 && b6_10 && b7_7 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22 && b13_21 && b14_20 && b15_22 && b16_52) {
matched = true;
pattern_id = 2246;
}
if(b0_35 && b1_52 && b2_23 && b3_27 && b4_36 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_5 && b11_46 && b12_20 && b13_43 && b14_12 && b15_17 && b16_7 && b17_2 && b18_66 && b19_20 && b20_63 && b21_60 && b22_4 && b23_12 && b24_25 && b25_16 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3 && b33_48 && b34_16 && b35_20 && b36_15 && b37_47 && b38_25) {
matched = true;
pattern_id = 2247;
}
if(b0_49 && b1_16 && b2_43 && b3_43 && b4_2 && b5_3 && b6_7 && b7_8 && b8_39 && b9_22 && b10_12 && b11_47 && b12_26 && b13_19 && b14_24 && b15_41 && b16_18 && b17_66 && b18_3 && b19_27 && b20_48 && b21_30 && b22_20 && b23_50 && b24_3 && b25_24) {
matched = true;
pattern_id = 2248;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_27 && b5_20 && b6_34 && b7_14 && b8_10 && b9_1 && b10_73 && b11_20 && b12_7 && b13_16 && b14_28 && b15_33 && b16_39 && b17_29 && b18_8 && b19_3 && b20_51 && b21_4 && b22_45 && b23_46 && b24_37 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2249;
}
if(b0_35 && b1_16 && b2_25 && b3_56) {
matched = true;
pattern_id = 2250;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_25 && b18_32 && b19_40 && b20_17 && b21_21 && b22_3 && b23_18 && b24_24 && b25_30 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3) {
matched = true;
pattern_id = 2251;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_51 && b6_19 && b7_31 && b8_54 && b9_5 && b10_29 && b11_48 && b12_18 && b13_3 && b14_20 && b15_34 && b16_29 && b17_68 && b18_23 && b19_21 && b20_37 && b21_4 && b22_21 && b23_1 && b24_2 && b25_8 && b26_2 && b27_2 && b28_20 && b29_14 && b30_5 && b31_46 && b32_5 && b33_8 && b34_13 && b35_4 && b36_6 && b37_6 && b38_5 && b39_7) {
matched = true;
pattern_id = 2252;
}
if(b0_43 && b1_5 && b2_40 && b3_5 && b4_10 && b5_30 && b6_26 && b7_15 && b8_22 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7 && b16_33 && b17_36 && b18_4 && b19_21 && b20_62 && b21_28 && b22_41 && b23_18 && b24_21 && b25_30 && b26_54 && b27_2 && b28_59 && b29_34 && b30_45 && b31_29 && b32_42 && b33_24 && b34_22 && b35_17 && b36_39 && b37_17 && b38_5 && b39_7 && b40_4 && b41_6 && b42_4 && b43_4 && b44_8 && b45_4) {
matched = true;
pattern_id = 2253;
}
if(b0_32 && b1_16 && b2_43 && b3_20 && b4_1 && b5_61 && b6_62 && b7_5 && b8_56 && b9_20 && b10_27 && b11_57 && b12_66 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6 && b20_22 && b21_35 && b22_39 && b23_18 && b24_27 && b25_30 && b26_54 && b27_2 && b28_30 && b29_30 && b30_53 && b31_32 && b32_21 && b33_49 && b34_48 && b35_5 && b36_20 && b37_23 && b38_27 && b39_22 && b40_20 && b41_24 && b42_11 && b43_17 && b44_24 && b45_16 && b46_17 && b47_32 && b48_17 && b49_4 && b50_2 && b51_26 && b52_3 && b53_4 && b54_28 && b55_17 && b56_27 && b57_23 && b58_22 && b59_25 && b60_22 && b61_26 && b62_19 && b63_12 && b64_1 && b65_12 && b66_17 && b67_5 && b68_22 && b69_20 && b70_27 && b71_13 && b72_18 && b73_17 && b74_10 && b75_9 && b76_19 && b77_19 && b78_5 && b79_3 && b80_3 && b81_16 && b82_19 && b83_6 && b84_13 && b85_16 && b86_16 && b87_16 && b88_15 && b89_10 && b90_10 && b91_8) {
matched = true;
pattern_id = 2254;
}
if(b0_32 && b1_14 && b2_3 && b3_34 && b4_22 && b5_64 && b6_1 && b7_15) {
matched = true;
pattern_id = 2255;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54) {
matched = true;
pattern_id = 2256;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_16 && b5_16 && b6_24 && b7_30 && b8_23 && b9_67 && b10_2 && b11_1 && b12_31 && b13_26 && b14_38 && b15_30 && b16_39 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2257;
}
if(b0_35 && b1_69 && b2_62 && b3_11 && b4_17 && b5_17 && b6_61 && b7_52 && b8_5 && b9_14 && b10_11 && b11_37 && b12_26 && b13_22 && b14_19) {
matched = true;
pattern_id = 2258;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_35 && b8_12 && b9_49 && b10_49 && b11_34 && b12_39 && b13_43 && b14_25 && b15_3 && b16_68) {
matched = true;
pattern_id = 2259;
}
if(b0_35 && b1_62 && b2_43 && b3_8 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 2260;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_3 && b5_11 && b6_55 && b7_14 && b8_2 && b9_5 && b10_30 && b11_30 && b12_26 && b13_26 && b14_1 && b15_6 && b16_15 && b17_49 && b18_4 && b19_34 && b20_9 && b21_1 && b22_2 && b23_7) {
matched = true;
pattern_id = 2261;
}
if(b0_53 && b1_19 && b2_58 && b3_25 && b4_1 && b5_35 && b6_43 && b7_50 && b8_44 && b9_72 && b10_1 && b11_72 && b12_27 && b13_5 && b14_20 && b15_18 && b16_29 && b17_25 && b18_32 && b19_32 && b20_10 && b21_35 && b22_45 && b23_9 && b24_56 && b25_6 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 2262;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_3 && b12_7 && b13_43 && b14_24 && b15_15 && b16_52 && b17_26 && b18_10 && b19_23 && b20_34 && b21_30 && b22_34 && b23_35 && b24_8 && b25_33 && b26_46 && b27_58 && b28_59 && b29_56 && b30_54) {
matched = true;
pattern_id = 2263;
}
if(b0_35 && b1_35 && b2_20 && b3_43 && b4_27 && b5_42 && b6_3 && b7_8 && b8_48 && b9_43 && b10_50 && b11_35 && b12_22) {
matched = true;
pattern_id = 2264;
}
if(b0_22 && b1_35 && b2_8) {
matched = true;
pattern_id = 2265;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_2 && b5_52 && b6_19 && b7_10 && b8_8 && b9_27 && b10_49 && b11_20 && b12_2 && b13_31 && b14_2 && b15_31 && b16_40 && b17_8 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2266;
}
if(b0_56 && b1_28 && b2_44 && b3_25 && b4_28 && b5_23 && b6_1 && b7_13 && b8_10) {
matched = true;
pattern_id = 2267;
}
if(b0_6 && b1_28 && b2_5 && b3_39 && b4_34 && b5_23 && b6_1 && b7_13 && b8_10) {
matched = true;
pattern_id = 2268;
}
if(b0_6 && b1_28 && b2_5 && b3_39 && b4_75 && b5_23 && b6_1 && b7_13 && b8_10) {
matched = true;
pattern_id = 2269;
}
if(b0_35 && b1_52 && b2_20 && b3_49 && b4_6 && b5_21 && b6_8 && b7_8 && b8_5 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39) {
matched = true;
pattern_id = 2270;
}
if(b0_14 && b1_37 && b2_5 && b3_28 && b4_51 && b5_52 && b6_8 && b7_7 && b8_2 && b9_4 && b10_10 && b11_22 && b12_10) {
matched = true;
pattern_id = 2271;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_15 && b5_26 && b6_20 && b7_2 && b8_10 && b9_1 && b10_62 && b11_20 && b12_16 && b13_47 && b14_25 && b15_3 && b16_2 && b17_8 && b18_1 && b19_24 && b20_9 && b21_2 && b22_19 && b23_28 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2272;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_45 && b41_37 && b42_38 && b43_43 && b44_18 && b45_39 && b46_36 && b47_3 && b48_3 && b49_5 && b50_36 && b51_3 && b52_3 && b53_32 && b54_1 && b55_22 && b56_28 && b57_21 && b58_31 && b59_26 && b60_2 && b61_27 && b62_26 && b63_2 && b64_21 && b65_26 && b66_22 && b67_3 && b68_23 && b69_21 && b70_5 && b71_6 && b72_19 && b73_18 && b74_16 && b75_18 && b76_20 && b77_20 && b78_20 && b79_17 && b80_22 && b81_17 && b82_4 && b83_8 && b84_4 && b85_2 && b86_6 && b87_2 && b88_2 && b89_6 && b90_5 && b91_13 && b92_11 && b93_16 && b94_13 && b95_3 && b96_10 && b97_10 && b98_13 && b99_10 && b100_13 && b101_12 && b102_5 && b103_11 && b104_11 && b105_11 && b106_12 && b107_9 && b108_11 && b109_11 && b110_11 && b111_10 && b112_11 && b113_10 && b114_7 && b115_9 && b116_11 && b117_9 && b118_8 && b119_5 && b120_6 && b121_10 && b122_10 && b123_10 && b124_10 && b125_10 && b126_10 && b127_10 && b128_11 && b129_8 && b130_11 && b131_9 && b132_9 && b133_7 && b134_8 && b135_9 && b136_6 && b137_6 && b138_6 && b139_8 && b140_7 && b141_7 && b142_1 && b143_7 && b144_4 && b145_7 && b146_6 && b147_7 && b148_6 && b149_4 && b150_2) {
matched = true;
pattern_id = 2273;
}
if(b0_35 && b1_58 && b2_25 && b3_56) {
matched = true;
pattern_id = 2274;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_26 && b5_52 && b6_19 && b7_47) {
matched = true;
pattern_id = 2275;
}
if(b0_35 && b1_47 && b2_20 && b3_45 && b4_16 && b5_20 && b6_23 && b7_35 && b8_14 && b9_41 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 2276;
}
if(b0_64 && b1_52 && b2_3 && b3_20 && b4_27 && b5_20 && b6_38 && b7_34) {
matched = true;
pattern_id = 2277;
}
if(b0_35 && b1_52 && b2_62 && b3_50 && b4_7 && b5_10 && b6_10 && b7_9 && b8_48 && b9_5 && b10_47 && b11_3) {
matched = true;
pattern_id = 2278;
}
if(b0_35 && b1_6 && b2_6 && b3_50 && b4_2 && b5_40 && b6_7 && b7_51 && b8_5) {
matched = true;
pattern_id = 2279;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_35 && b5_64 && b6_34 && b7_31 && b8_35 && b9_27 && b10_29) {
matched = true;
pattern_id = 2280;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_30 && b5_1 && b6_5 && b7_79 && b8_21 && b9_60 && b10_16) {
matched = true;
pattern_id = 2281;
}
if(b0_21 && b1_2 && b2_41 && b3_6 && b4_2 && b5_45) {
matched = true;
pattern_id = 2282;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_27 && b17_1 && b18_24 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6) {
matched = true;
pattern_id = 2283;
}
if(b0_35 && b1_6 && b2_20 && b3_19 && b4_12 && b5_20 && b6_23 && b7_9 && b8_14 && b9_55 && b10_17 && b11_27 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8 && b17_2 && b18_66 && b19_20 && b20_63 && b21_60 && b22_4 && b23_12 && b24_25 && b25_16 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3 && b33_50 && b34_23 && b35_33 && b36_22 && b37_48 && b38_11 && b39_33 && b40_15 && b41_16 && b42_10 && b43_37 && b44_18) {
matched = true;
pattern_id = 2284;
}
if(b0_14 && b1_17 && b2_27 && b3_28 && b4_12 && b5_12 && b6_39 && b7_31 && b8_8 && b9_40 && b10_26 && b11_40 && b12_26 && b13_6 && b14_20 && b15_15 && b16_8 && b17_10 && b18_22 && b19_9 && b20_30 && b21_4 && b22_2 && b23_20 && b24_9 && b25_35 && b26_3 && b27_36 && b28_31 && b29_1 && b30_9 && b31_13 && b32_3 && b33_18 && b34_16 && b35_24 && b36_3 && b37_4 && b38_5 && b39_7) {
matched = true;
pattern_id = 2285;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_32 && b5_44 && b6_1 && b7_3 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_16 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 2286;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_32 && b5_44 && b6_1 && b7_3 && b8_11 && b9_28 && b10_28 && b11_49 && b12_5 && b13_16 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9) {
matched = true;
pattern_id = 2287;
}
if(b0_35 && b1_6 && b2_23 && b3_21 && b4_7 && b5_8 && b6_23 && b7_9 && b8_8 && b9_40 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 2288;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_2 && b5_11 && b6_20 && b7_9 && b8_2 && b9_5 && b10_43 && b11_6 && b12_3 && b13_19 && b14_2 && b15_1 && b16_14 && b17_8 && b18_11 && b19_9 && b20_28 && b21_4 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2289;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_2 && b5_10 && b6_39 && b7_9 && b8_6 && b9_50 && b10_49 && b11_6 && b12_26 && b13_19 && b14_2 && b15_1 && b16_14 && b17_8 && b18_11 && b19_9 && b20_28 && b21_4 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2290;
}
if(b0_63 && b1_52 && b2_25 && b3_8 && b4_59 && b5_16 && b6_55 && b7_9 && b8_5 && b9_14 && b10_43 && b11_3 && b12_32 && b13_38 && b14_5 && b15_72) {
matched = true;
pattern_id = 2291;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_27 && b6_7 && b7_9 && b8_6 && b9_6 && b10_7 && b11_29) {
matched = true;
pattern_id = 2292;
}
if(b0_35 && b1_50 && b2_20 && b3_8 && b4_27 && b5_3 && b6_52 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 2293;
}
if(b0_77 && b1_78 && b2_21 && b3_11 && b4_31 && b5_4 && b6_4 && b7_39 && b8_42 && b9_12 && b10_17 && b11_73 && b12_12 && b13_16 && b14_35 && b15_22 && b16_52 && b17_8 && b18_25 && b19_26 && b20_9 && b21_24) {
matched = true;
pattern_id = 2294;
}
if(b0_14 && b1_27 && b2_26 && b3_14 && b4_13 && b5_28 && b6_12 && b7_20 && b8_17 && b9_13 && b10_3 && b11_25 && b12_6 && b13_8 && b14_9 && b15_4 && b16_27 && b17_6 && b18_3 && b19_18 && b20_12 && b21_3 && b22_60 && b23_15 && b24_9) {
matched = true;
pattern_id = 2295;
}
if(b0_14 && b1_31 && b2_46 && b3_14 && b4_29 && b5_33 && b6_12 && b7_49 && b8_62 && b9_13 && b10_44 && b11_39 && b12_6 && b13_14 && b14_11 && b15_4 && b16_48 && b17_23 && b18_3 && b19_7 && b20_14 && b21_3 && b22_15 && b23_55 && b24_9) {
matched = true;
pattern_id = 2296;
}
if(b0_14 && b1_27 && b2_32 && b3_14 && b4_8 && b5_33 && b6_12 && b7_68 && b8_52 && b9_13 && b10_23 && b11_8 && b12_6 && b13_17 && b14_1 && b15_4 && b16_53 && b17_14 && b18_3 && b19_50 && b20_29 && b21_3 && b22_56 && b23_12 && b24_9) {
matched = true;
pattern_id = 2297;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_47 && b8_6 && b9_43 && b10_1 && b11_74 && b12_62 && b13_73 && b14_59 && b15_38 && b16_7 && b17_38 && b18_1 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6 && b26_31 && b27_36 && b28_1 && b29_25 && b30_49 && b31_10 && b32_38 && b33_11 && b34_16 && b35_35 && b36_9 && b37_21 && b38_23 && b39_31 && b40_14 && b41_30 && b42_3 && b43_4 && b44_17 && b45_3 && b46_4 && b47_8 && b48_3 && b49_30 && b50_25 && b51_21 && b52_10 && b53_29 && b54_28 && b55_32 && b56_20 && b57_24 && b58_21 && b59_27 && b60_2) {
matched = true;
pattern_id = 2298;
}
if(b0_63 && b1_37 && b2_31 && b3_54 && b4_36 && b5_39 && b6_72 && b7_18 && b8_19 && b9_38 && b10_20 && b11_8 && b12_8) {
matched = true;
pattern_id = 2299;
}
if(b0_78 && b1_79 && b2_7 && b3_70) {
matched = true;
pattern_id = 2300;
}
if(b0_35 && b1_15 && b2_29 && b3_14 && b4_64 && b5_58 && b6_62 && b7_77 && b8_15 && b9_15 && b10_48) {
matched = true;
pattern_id = 2301;
}
if(b0_14 && b1_18 && b2_27 && b3_14 && b4_36 && b5_19 && b6_12 && b7_18 && b8_1 && b9_4 && b10_51 && b11_10 && b12_29 && b13_23 && b14_43 && b15_12 && b16_63 && b17_2 && b18_2 && b19_36) {
matched = true;
pattern_id = 2302;
}
if(b0_35 && b1_47 && b2_14 && b3_43 && b4_35 && b5_54 && b6_39 && b7_7 && b8_46 && b9_50 && b10_6 && b11_48 && b12_10 && b13_11 && b14_7 && b15_7 && b16_29 && b17_4 && b18_37 && b19_31 && b20_8 && b21_55 && b22_19 && b23_8 && b24_9 && b25_8 && b26_55 && b27_2 && b28_51 && b29_6 && b30_2 && b31_3 && b32_18 && b33_51 && b34_3 && b35_3 && b36_18 && b37_10 && b38_44 && b39_8 && b40_6 && b41_13 && b42_32 && b43_3 && b44_5 && b45_37 && b46_37 && b47_33 && b48_3 && b49_16 && b50_19 && b51_3 && b52_27 && b53_33 && b54_29 && b55_17 && b56_29 && b57_5 && b58_9 && b59_28 && b60_25 && b61_28 && b62_3 && b63_25 && b64_22 && b65_5 && b66_22 && b67_22 && b68_24 && b69_3 && b70_13 && b71_21 && b72_5 && b73_4 && b74_23 && b75_5 && b76_3 && b77_17 && b78_9) {
matched = true;
pattern_id = 2303;
}
if(b0_4 && b1_73 && b2_58 && b3_25 && b4_34 && b5_4 && b6_67 && b7_40 && b8_20 && b9_4 && b10_10 && b11_22 && b12_10) {
matched = true;
pattern_id = 2304;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_1) {
matched = true;
pattern_id = 2305;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_65 && b9_5 && b10_12 && b11_49 && b12_4 && b13_3 && b14_64 && b15_4 && b16_14 && b17_1) {
matched = true;
pattern_id = 2306;
}
if(b0_35 && b1_47 && b2_29 && b3_50 && b4_60 && b5_47 && b6_23 && b7_5 && b8_27 && b9_1 && b10_3) {
matched = true;
pattern_id = 2307;
}
if(b0_35 && b1_54 && b2_29) {
matched = true;
pattern_id = 2308;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_1) {
matched = true;
pattern_id = 2309;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_59) {
matched = true;
pattern_id = 2310;
}
if(b0_35 && b1_47 && b2_29 && b3_18 && b4_15 && b5_10 && b6_7 && b7_44) {
matched = true;
pattern_id = 2311;
}
if(b0_35 && b1_35 && b2_20 && b3_21 && b4_59 && b5_11 && b6_10 && b7_9 && b8_11 && b9_17 && b10_49 && b11_3 && b12_16 && b13_55 && b14_20 && b15_50 && b16_44 && b17_21 && b18_55) {
matched = true;
pattern_id = 2312;
}
if(b0_35 && b1_47 && b2_25 && b3_8 && b4_18 && b5_30 && b6_3 && b7_8 && b8_47 && b9_5 && b10_4 && b11_57 && b12_32 && b13_3 && b14_36) {
matched = true;
pattern_id = 2313;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_18 && b5_55 && b6_53 && b7_3 && b8_1 && b9_36 && b10_2 && b11_26 && b12_38 && b13_30 && b14_35 && b15_30 && b16_2 && b17_27 && b18_56 && b19_34 && b20_30 && b21_42 && b22_21 && b23_7 && b24_15 && b25_15 && b26_11 && b27_3 && b28_31 && b29_21 && b30_2 && b31_11 && b32_7 && b33_4) {
matched = true;
pattern_id = 2314;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_70 && b5_11 && b6_22 && b7_31 && b8_10 && b9_1 && b10_41 && b11_20 && b12_3 && b13_16 && b14_30 && b15_7 && b16_4 && b17_31 && b18_8 && b19_12 && b20_24 && b21_19 && b22_19 && b23_7 && b24_15 && b25_2 && b26_11) {
matched = true;
pattern_id = 2315;
}
if(b0_56 && b1_5 && b2_64 && b3_4 && b4_71) {
matched = true;
pattern_id = 2316;
}
if(b0_14 && b1_25 && b2_26 && b3_14 && b4_30 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_16 && b15_4 && b16_4 && b17_31 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2317;
}
if(b0_14 && b1_25 && b2_57 && b3_14 && b4_30 && b5_36 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_13 && b15_4 && b16_4 && b17_3 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2318;
}
if(b0_14 && b1_18 && b2_1 && b3_28 && b4_28 && b5_5 && b6_5 && b7_6 && b8_4 && b9_13 && b10_3 && b11_1 && b12_10) {
matched = true;
pattern_id = 2319;
}
if(b0_23 && b1_8 && b2_23 && b3_34 && b4_46 && b5_12 && b6_8 && b7_9 && b8_42 && b9_4 && b10_41 && b11_24 && b12_10 && b13_1 && b14_28 && b15_33 && b16_39 && b17_29 && b18_60 && b19_6 && b20_29 && b21_41 && b22_1 && b23_42 && b24_5 && b25_41 && b26_56 && b27_8 && b28_9 && b29_5 && b30_5 && b31_11 && b32_32 && b33_8 && b34_1 && b35_13 && b36_3) {
matched = true;
pattern_id = 2320;
}
if(b0_35 && b1_47 && b2_24 && b3_6 && b4_19 && b5_43 && b6_11 && b7_8 && b8_42 && b9_50 && b10_28 && b11_64 && b12_26 && b13_16 && b14_49 && b15_41 && b16_51 && b17_19 && b18_20 && b19_19 && b20_5 && b21_61 && b22_27 && b23_12 && b24_10 && b25_15 && b26_21) {
matched = true;
pattern_id = 2321;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_40 && b6_59 && b7_39 && b8_34) {
matched = true;
pattern_id = 2322;
}
if(b0_14 && b1_37 && b2_5 && b3_28 && b4_27 && b5_8 && b6_36 && b7_3 && b8_27 && b9_3 && b10_2 && b11_5 && b12_38 && b13_22 && b14_50 && b15_44 && b16_30 && b17_26 && b18_4 && b19_6 && b20_29 && b21_17 && b22_1 && b23_27 && b24_3 && b25_27 && b26_19 && b27_8 && b28_9 && b29_57 && b30_2 && b31_27 && b32_42) {
matched = true;
pattern_id = 2323;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_19 && b5_10 && b6_3 && b7_29 && b8_10 && b9_1 && b10_62 && b11_20 && b12_7 && b13_47 && b14_47 && b15_25 && b16_16 && b17_8 && b18_1 && b19_24 && b20_9 && b21_21 && b22_34 && b23_44 && b24_9 && b25_2 && b26_2 && b27_8) {
matched = true;
pattern_id = 2324;
}
if(b0_43 && b1_78 && b2_71 && b3_14 && b4_76) {
matched = true;
pattern_id = 2325;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7) {
matched = true;
pattern_id = 2326;
}
if(b0_14 && b1_15 && b2_33 && b3_28 && b4_6 && b5_16 && b6_46 && b7_9 && b8_8 && b9_6 && b10_12 && b11_37 && b12_18 && b13_26 && b14_1 && b15_73 && b16_15 && b17_36 && b18_15 && b19_39 && b20_43 && b21_4 && b22_2 && b23_21 && b24_9 && b25_42 && b26_27 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2327;
}
if(b0_35 && b1_11 && b2_42 && b3_20 && b4_17 && b5_17 && b6_23 && b7_32 && b8_61 && b9_14 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 2328;
}
if(b0_17 && b1_24 && b2_62 && b3_16 && b4_43 && b5_63 && b6_15 && b7_50) {
matched = true;
pattern_id = 2329;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_45 && b40_46 && b41_46 && b42_39 && b43_2 && b44_41 && b45_12 && b46_4 && b47_9 && b48_27 && b49_31 && b50_21 && b51_27 && b52_1 && b53_28 && b54_6 && b55_29 && b56_5 && b57_23 && b58_13 && b59_29 && b60_26 && b61_9 && b62_27 && b63_26 && b64_4 && b65_21 && b66_4 && b67_4 && b68_18 && b69_2 && b70_3 && b71_17 && b72_2) {
matched = true;
pattern_id = 2330;
}
if(b0_35 && b1_52 && b2_25 && b3_6 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_19 && b10_11 && b11_3 && b12_20 && b13_22 && b14_20 && b15_20 && b16_29 && b17_55 && b18_67 && b19_13 && b20_42 && b21_17 && b22_61 && b23_41 && b24_5 && b25_59 && b26_57 && b27_24 && b28_31 && b29_19 && b30_21 && b31_2 && b32_20 && b33_52 && b34_17 && b35_18 && b36_13) {
matched = true;
pattern_id = 2331;
}
if(b0_35 && b1_32 && b2_25 && b3_20 && b4_27 && b5_3 && b6_35 && b7_32 && b8_42 && b9_20 && b10_26 && b11_27 && b12_39 && b13_5 && b14_42 && b15_36 && b16_16 && b17_21 && b18_19 && b19_60 && b20_27 && b21_20 && b22_57) {
matched = true;
pattern_id = 2332;
}
if(b0_47 && b1_4 && b2_40 && b3_30 && b4_58 && b5_63 && b6_15 && b7_19 && b8_38 && b9_37 && b10_71 && b11_22 && b12_69) {
matched = true;
pattern_id = 2333;
}
if(b0_4 && b1_57 && b2_5 && b3_10 && b4_5 && b5_50) {
matched = true;
pattern_id = 2334;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_27 && b13_59 && b14_36 && b15_18 && b16_5 && b17_37 && b18_4 && b19_6 && b20_1 && b21_59 && b22_13 && b23_2 && b24_38 && b25_6) {
matched = true;
pattern_id = 2335;
}
if(b0_62 && b1_13 && b2_41 && b3_49 && b4_26 && b5_6 && b6_59 && b7_10) {
matched = true;
pattern_id = 2336;
}
if(b0_14 && b1_15 && b2_13 && b3_28 && b4_24 && b5_11 && b6_35 && b7_54 && b8_10 && b9_1 && b10_41 && b11_20 && b12_36 && b13_2 && b14_4 && b15_7 && b16_4 && b17_9 && b18_8 && b19_2 && b20_37) {
matched = true;
pattern_id = 2337;
}
if(b0_14 && b1_17 && b2_46 && b3_28 && b4_3 && b5_11 && b6_11 && b7_14 && b8_5 && b9_45 && b10_50 && b11_37 && b12_46 && b13_27 && b14_25 && b15_35 && b16_30 && b17_49 && b18_56 && b19_4 && b20_5 && b21_23 && b22_1 && b23_2 && b24_19 && b25_6 && b26_30 && b27_36 && b28_29) {
matched = true;
pattern_id = 2338;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_77 && b5_1 && b6_22 && b7_3 && b8_1 && b9_16 && b10_2 && b11_35 && b12_25) {
matched = true;
pattern_id = 2339;
}
if(b0_14 && b1_15 && b2_10 && b3_28 && b4_77 && b5_10 && b6_22 && b7_3 && b8_1 && b9_16 && b10_2 && b11_54 && b12_37 && b13_26 && b14_1 && b15_6 && b16_15 && b17_4 && b18_15 && b19_25) {
matched = true;
pattern_id = 2340;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_62 && b8_61 && b9_10 && b10_12 && b11_43 && b12_19) {
matched = true;
pattern_id = 2341;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_15 && b5_52 && b6_61 && b7_8 && b8_5 && b9_34 && b10_29) {
matched = true;
pattern_id = 2342;
}
if(b0_78 && b1_1 && b2_1 && b3_1 && b4_32) {
matched = true;
pattern_id = 2343;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_24 && b7_44 && b8_54 && b9_49 && b10_17 && b11_61 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 2344;
}
if(b0_35 && b1_6 && b2_19 && b3_8 && b4_35 && b5_8 && b6_7 && b7_31 && b8_47 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 2345;
}
if(b0_35 && b1_47 && b2_14 && b3_43 && b4_35 && b5_8 && b6_7 && b7_31 && b8_47 && b9_56 && b10_26 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54) {
matched = true;
pattern_id = 2346;
}
if(b0_46 && b1_28 && b2_39 && b3_5 && b4_25 && b5_33) {
matched = true;
pattern_id = 2347;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_16 && b10_10 && b11_19 && b12_12 && b13_51 && b14_33 && b15_36 && b16_7 && b17_3 && b18_12 && b19_44 && b20_29 && b21_41 && b22_21 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 2348;
}
if(b0_32 && b1_2 && b2_42 && b3_18 && b4_44 && b5_25 && b6_39 && b7_9 && b8_5 && b9_42 && b10_43 && b11_6 && b12_7 && b13_26 && b14_1 && b15_8 && b16_1 && b17_1 && b18_35 && b19_6) {
matched = true;
pattern_id = 2349;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_50 && b10_50 && b11_57 && b12_3 && b13_43 && b14_12 && b15_3 && b16_45 && b17_35 && b18_4 && b19_21 && b20_49 && b21_18 && b22_39 && b23_31 && b24_28 && b25_6 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 2350;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_11 && b10_28 && b11_26 && b12_5 && b13_56 && b14_55 && b15_3 && b16_3 && b17_51 && b18_18 && b19_12 && b20_2 && b21_36 && b22_3 && b23_46 && b24_22 && b25_19 && b26_25 && b27_16 && b28_28 && b29_34 && b30_22 && b31_45 && b32_28 && b33_4 && b34_1 && b35_4 && b36_6 && b37_4 && b38_11 && b39_7) {
matched = true;
pattern_id = 2351;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_36 && b16_40 && b17_36 && b18_18 && b19_12 && b20_24 && b21_19 && b22_19 && b23_61 && b24_43 && b25_33 && b26_34 && b27_54 && b28_45 && b29_26 && b30_17 && b31_55 && b32_3 && b33_1 && b34_27 && b35_5 && b36_4 && b37_9 && b38_2) {
matched = true;
pattern_id = 2352;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_9 && b16_32 && b17_49 && b18_32 && b19_25 && b20_2 && b21_49 && b22_38 && b23_18 && b24_1 && b25_47 && b26_26 && b27_3 && b28_31 && b29_21 && b30_2 && b31_11 && b32_32 && b33_8 && b34_1 && b35_13 && b36_3) {
matched = true;
pattern_id = 2353;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_32 && b5_38 && b6_15 && b7_3 && b8_3 && b9_9 && b10_17 && b11_46 && b12_20 && b13_30 && b14_37 && b15_74 && b16_13 && b17_38 && b18_11 && b19_35 && b20_33 && b21_29 && b22_51 && b23_6 && b24_3 && b25_27 && b26_43 && b27_16 && b28_28 && b29_34 && b30_21 && b31_4 && b32_7 && b33_42 && b34_5 && b35_7 && b36_33 && b37_10) {
matched = true;
pattern_id = 2354;
}
if(b0_35 && b1_17 && b2_27 && b3_56 && b4_21 && b5_10 && b6_10 && b7_39 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 2355;
}
if(b0_35 && b1_17 && b2_27 && b3_56 && b4_21 && b5_6 && b6_7 && b7_29 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 2356;
}
if(b0_14 && b1_80 && b2_1 && b3_14 && b4_34 && b5_32 && b6_12 && b7_6 && b8_30 && b9_13 && b10_41 && b11_8 && b12_6 && b13_11 && b14_32 && b15_4 && b16_14 && b17_62 && b18_3 && b19_24 && b20_19 && b21_3 && b22_21 && b23_15 && b24_9) {
matched = true;
pattern_id = 2357;
}
if(b0_14 && b1_23 && b2_32 && b3_14 && b4_42 && b5_31 && b6_5) {
matched = true;
pattern_id = 2358;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_15 && b11_42 && b12_6 && b13_64 && b14_32 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_10 && b23_20 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2359;
}
if(b0_14 && b1_80 && b2_26 && b3_14 && b4_34 && b5_32 && b6_12 && b7_6 && b8_30 && b9_13 && b10_41 && b11_8 && b12_6 && b13_11 && b14_32 && b15_4 && b16_14 && b17_62 && b18_3 && b19_24 && b20_19 && b21_3 && b22_21 && b23_15 && b24_9) {
matched = true;
pattern_id = 2360;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_4 && b5_39 && b6_12 && b7_18 && b8_4 && b9_13 && b10_3 && b11_22 && b12_10) {
matched = true;
pattern_id = 2361;
}
if(b0_24 && b1_24 && b2_25 && b3_11 && b4_7 && b5_17 && b6_73 && b7_48 && b8_71 && b9_2 && b10_28 && b11_68 && b12_66 && b13_11 && b14_13 && b15_1 && b16_27 && b17_36 && b18_31 && b19_51 && b20_30 && b21_20 && b22_19 && b23_13 && b24_7 && b25_2) {
matched = true;
pattern_id = 2362;
}
if(b0_14 && b1_7 && b2_33 && b3_14 && b4_4 && b5_65 && b6_12 && b7_22 && b8_19 && b9_13 && b10_40 && b11_11 && b12_6 && b13_7 && b14_15 && b15_4 && b16_14 && b17_62 && b18_3 && b19_26 && b20_51 && b21_3 && b22_56 && b23_10 && b24_2 && b25_12 && b26_6 && b27_2 && b28_7 && b29_11 && b30_5 && b31_1 && b32_7 && b33_8 && b34_43 && b35_13 && b36_6 && b37_49 && b38_7 && b39_5 && b40_5 && b41_40 && b42_4 && b43_5 && b44_42 && b45_3 && b46_15 && b47_17 && b48_3) {
matched = true;
pattern_id = 2363;
}
if(b0_14 && b1_19 && b2_5 && b3_14 && b4_78 && b5_13 && b6_12 && b7_27 && b8_4 && b9_13 && b10_16 && b11_42 && b12_6 && b13_51 && b14_11 && b15_7) {
matched = true;
pattern_id = 2364;
}
if(b0_14 && b1_19 && b2_5 && b3_14 && b4_38 && b5_13 && b6_12 && b7_27 && b8_4 && b9_13 && b10_16 && b11_42 && b12_6 && b13_34 && b14_9 && b15_4 && b16_48 && b17_19 && b18_8) {
matched = true;
pattern_id = 2365;
}
if(b0_14 && b1_15 && b2_32 && b3_14 && b4_30 && b5_35 && b6_12 && b7_33 && b8_21 && b9_13 && b10_27 && b11_12 && b12_6 && b13_33 && b14_14 && b15_4 && b16_67 && b17_24 && b18_3 && b19_16 && b20_6 && b21_3 && b22_60 && b23_14 && b24_2 && b25_43 && b26_2 && b27_2 && b28_51 && b29_10 && b30_5 && b31_1 && b32_5 && b33_8 && b34_49 && b35_13 && b36_6 && b37_11 && b38_13 && b39_5 && b40_11 && b41_6 && b42_4 && b43_30 && b44_2 && b45_3 && b46_29 && b47_4 && b48_2 && b49_5 && b50_18 && b51_2 && b52_28 && b53_4 && b54_2 && b55_33 && b56_30 && b57_2 && b58_12 && b59_30 && b60_2 && b61_29 && b62_12 && b63_2 && b64_23 && b65_24 && b66_4) {
matched = true;
pattern_id = 2366;
}
if(b0_14 && b1_27 && b2_10 && b3_14 && b4_8 && b5_13 && b6_12 && b7_22 && b8_27 && b9_13 && b10_14 && b11_7 && b12_6 && b13_15 && b14_23 && b15_4 && b16_17 && b17_5 && b18_3 && b19_50 && b20_29 && b21_3 && b22_5 && b23_20 && b24_2 && b25_17 && b26_15 && b27_2 && b28_15 && b29_20 && b30_5 && b31_56 && b32_8 && b33_8 && b34_43 && b35_30 && b36_6 && b37_9 && b38_44 && b39_5 && b40_7 && b41_8 && b42_4 && b43_3 && b44_8 && b45_3 && b46_7 && b47_3 && b48_2 && b49_26 && b50_2 && b51_2 && b52_26 && b53_4 && b54_3) {
matched = true;
pattern_id = 2367;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_39 && b6_12 && b7_33 && b8_62 && b9_13 && b10_27 && b11_17 && b12_6 && b13_64 && b14_32 && b15_4 && b16_4 && b17_5 && b18_3 && b19_18 && b20_51 && b21_3 && b22_15 && b23_23 && b24_2 && b25_16 && b26_55 && b27_2 && b28_60 && b29_58 && b30_5 && b31_3 && b32_35 && b33_8 && b34_1 && b35_38 && b36_6 && b37_8 && b38_15 && b39_5 && b40_6 && b41_12 && b42_4 && b43_4 && b44_33 && b45_3 && b46_5 && b47_34 && b48_2 && b49_32 && b50_9 && b51_2 && b52_29 && b53_34 && b54_2 && b55_34 && b56_31 && b57_2 && b58_32 && b59_31 && b60_4) {
matched = true;
pattern_id = 2368;
}
if(b0_14 && b1_23 && b2_36 && b3_14 && b4_47 && b5_1 && b6_12 && b7_26 && b8_32 && b9_13 && b10_23 && b11_24 && b12_6 && b13_11 && b14_6 && b15_4 && b16_67 && b17_62 && b18_3 && b19_16 && b20_15 && b21_3 && b22_60 && b23_11 && b24_2 && b25_60 && b26_12 && b27_2 && b28_20 && b29_12 && b30_5 && b31_1 && b32_32 && b33_8 && b34_49 && b35_13 && b36_6 && b37_49 && b38_48 && b39_5 && b40_47 && b41_10 && b42_4 && b43_45 && b44_8 && b45_3 && b46_38 && b47_35 && b48_2 && b49_33 && b50_36 && b51_2 && b52_13 && b53_4 && b54_2 && b55_21 && b56_32 && b57_4) {
matched = true;
pattern_id = 2369;
}
if(b0_14 && b1_17 && b2_26 && b3_14 && b4_4 && b5_44 && b6_12 && b7_33 && b8_62 && b9_13 && b10_27 && b11_8 && b12_6 && b13_2 && b14_8 && b15_4 && b16_4 && b17_15 && b18_3 && b19_18 && b20_54 && b21_3 && b22_2 && b23_21 && b24_2 && b25_50 && b26_55 && b27_2 && b28_46 && b29_49 && b30_5 && b31_46 && b32_57 && b33_8 && b34_6 && b35_47 && b36_6 && b37_40 && b38_40 && b39_5 && b40_4 && b41_11 && b42_4 && b43_4 && b44_10 && b45_3 && b46_39 && b47_10 && b48_2 && b49_34 && b50_37 && b51_2 && b52_18 && b53_35 && b54_3) {
matched = true;
pattern_id = 2370;
}
if(b0_14 && b1_15 && b2_33 && b3_14 && b4_36 && b5_44 && b6_12 && b7_6 && b8_25 && b9_13 && b10_41 && b11_1 && b12_6 && b13_31 && b14_8 && b15_4 && b16_14 && b17_19 && b18_3 && b19_26 && b20_6 && b21_4) {
matched = true;
pattern_id = 2371;
}
if(b0_14 && b1_17 && b2_10 && b3_14 && b4_36 && b5_35 && b6_12 && b7_18 && b8_27 && b9_13 && b10_41 && b11_39 && b12_6 && b13_31 && b14_27 && b15_4 && b16_51 && b17_62 && b18_3 && b19_26 && b20_18 && b21_3 && b22_21 && b23_55 && b24_2 && b25_8 && b26_13 && b27_2 && b28_9 && b29_11 && b30_5 && b31_15 && b32_57 && b33_8 && b34_13 && b35_12 && b36_6 && b37_40 && b38_40 && b39_5 && b40_11 && b41_11 && b42_4 && b43_8 && b44_41 && b45_3 && b46_29 && b47_29 && b48_2 && b49_35 && b50_38 && b51_2 && b52_18 && b53_36 && b54_2 && b55_14 && b56_31 && b57_2 && b58_3 && b59_2 && b60_2 && b61_29 && b62_28 && b63_2 && b64_23 && b65_13 && b66_2 && b67_13 && b68_24 && b69_2 && b70_28 && b71_22 && b72_2) {
matched = true;
pattern_id = 2372;
}
if(b0_14 && b1_23 && b2_10 && b3_14 && b4_42 && b5_33 && b6_12 && b7_26 && b8_30 && b9_13 && b10_23 && b11_8 && b12_6 && b13_33 && b14_16 && b15_4 && b16_51 && b17_62 && b18_3 && b19_16 && b20_19 && b21_3 && b22_60 && b23_15 && b24_2 && b25_60 && b26_9 && b27_2 && b28_22 && b29_58 && b30_5 && b31_1 && b32_57 && b33_8 && b34_50 && b35_47 && b36_6 && b37_49 && b38_8 && b39_5 && b40_48 && b41_47 && b42_4 && b43_10 && b44_41 && b45_3 && b46_38 && b47_5 && b48_3) {
matched = true;
pattern_id = 2373;
}
if(b0_14 && b1_23 && b2_10 && b3_14 && b4_42 && b5_33 && b6_12 && b7_26 && b8_30 && b9_13 && b10_23 && b11_8 && b12_6 && b13_33 && b14_27 && b15_4 && b16_51 && b17_62 && b18_3 && b19_16 && b20_19 && b21_3 && b22_60 && b23_15 && b24_2 && b25_60 && b26_9 && b27_2 && b28_22 && b29_58 && b30_5 && b31_1 && b32_57 && b33_8 && b34_50 && b35_47 && b36_6 && b37_49 && b38_13 && b39_5 && b40_48 && b41_47 && b42_4 && b43_10 && b44_41 && b45_3 && b46_38 && b47_5 && b48_2 && b49_33 && b50_9 && b51_2 && b52_30 && b53_36 && b54_2 && b55_34 && b56_31 && b57_2 && b58_32 && b59_31 && b60_2 && b61_30 && b62_29 && b63_2 && b64_21 && b65_27 && b66_2 && b67_23 && b68_25 && b69_2 && b70_29 && b71_21 && b72_5 && b73_22 && b74_8 && b75_5 && b76_21 && b77_21 && b78_4 && b79_18 && b80_23 && b81_3 && b82_20 && b83_20 && b84_2 && b85_17 && b86_17 && b87_2 && b88_16 && b89_16 && b90_2 && b91_14 && b92_14 && b93_2 && b94_14 && b95_13 && b96_3) {
matched = true;
pattern_id = 2374;
}
if(b0_14 && b1_27 && b2_27 && b3_14 && b4_8 && b5_67 && b6_12 && b7_22 && b8_27 && b9_13 && b10_14 && b11_39 && b12_6 && b13_17 && b14_30 && b15_4 && b16_17 && b17_15 && b18_3 && b19_50 && b20_12 && b21_3 && b22_49 && b23_55 && b24_2 && b25_39 && b26_15 && b27_2 && b28_11 && b29_10 && b30_5 && b31_44 && b32_12 && b33_8 && b34_8 && b35_14 && b36_6 && b37_50 && b38_5 && b39_5 && b40_38 && b41_40 && b42_4 && b43_3 && b44_42 && b45_3 && b46_35 && b47_29 && b48_2 && b49_28 && b50_39 && b51_2 && b52_31 && b53_37 && b54_3) {
matched = true;
pattern_id = 2375;
}
if(b0_14 && b1_17 && b2_28 && b3_14 && b4_4 && b5_39 && b6_12 && b7_33 && b8_62 && b9_13 && b10_27 && b11_17 && b12_6 && b13_64 && b14_32 && b15_4 && b16_4 && b17_5 && b18_3 && b19_18 && b20_51 && b21_3 && b22_15 && b23_23 && b24_2 && b25_16 && b26_55 && b27_2 && b28_60 && b29_58 && b30_5 && b31_3 && b32_35 && b33_8 && b34_1 && b35_38 && b36_6 && b37_8 && b38_15 && b39_5 && b40_6 && b41_12 && b42_4 && b43_4 && b44_33 && b45_3 && b46_5 && b47_34 && b48_2 && b49_32 && b50_9 && b51_2 && b52_29 && b53_34 && b54_3) {
matched = true;
pattern_id = 2376;
}
if(b0_14 && b1_15 && b2_32 && b3_14 && b4_30 && b5_35 && b6_12 && b7_33 && b8_21 && b9_13 && b10_27 && b11_12 && b12_6 && b13_33 && b14_6 && b15_4 && b16_67 && b17_1 && b18_3 && b19_16 && b20_6 && b21_3 && b22_60 && b23_11 && b24_2 && b25_15 && b26_12 && b27_2 && b28_51 && b29_58 && b30_5 && b31_1 && b32_4 && b33_8 && b34_50 && b35_11 && b36_6 && b37_49 && b38_13 && b39_5 && b40_9 && b41_23 && b42_4 && b43_10 && b44_17 && b45_3 && b46_40 && b47_8 && b48_2 && b49_33 && b50_28 && b51_2 && b52_30 && b53_20 && b54_2 && b55_33 && b56_16 && b57_2 && b58_32 && b59_32 && b60_2 && b61_30 && b62_30 && b63_2 && b64_24 && b65_3 && b66_4) {
matched = true;
pattern_id = 2377;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_45 && b11_22 && b12_6 && b13_64 && b14_27 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_47 && b23_20 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2378;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_15 && b11_42 && b12_6 && b13_33 && b14_23 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_44 && b23_5 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2379;
}
if(b0_14 && b1_25 && b2_5 && b3_14 && b4_30 && b5_1 && b6_12 && b7_40 && b8_1 && b9_13 && b10_15 && b11_42 && b12_6 && b13_11 && b14_10 && b15_4 && b16_9 && b17_1 && b18_3 && b19_5 && b20_29 && b21_3 && b22_44 && b23_23 && b24_2 && b25_7 && b26_14 && b27_2 && b28_17 && b29_2 && b30_2) {
matched = true;
pattern_id = 2380;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35 && b5_28) {
matched = true;
pattern_id = 2381;
}
if(b0_14 && b1_25 && b2_46 && b3_14 && b4_29 && b5_13 && b6_12 && b7_22 && b8_52 && b9_13 && b10_14 && b11_25 && b12_6 && b13_12 && b14_33 && b15_4 && b16_17 && b17_9 && b18_3 && b19_27 && b20_22 && b21_3 && b22_6 && b23_55 && b24_2 && b25_5 && b26_14 && b27_2 && b28_10 && b29_8 && b30_5 && b31_44 && b32_12 && b33_8 && b34_11 && b35_38 && b36_6 && b37_7 && b38_10 && b39_5 && b40_10 && b41_40 && b42_4 && b43_39 && b44_6 && b45_3 && b46_35 && b47_34 && b48_2 && b49_28 && b50_9 && b51_2 && b52_2 && b53_13 && b54_2 && b55_7 && b56_16 && b57_2 && b58_33 && b59_33 && b60_2 && b61_2 && b62_28 && b63_2 && b64_2 && b65_28 && b66_2 && b67_24 && b68_24 && b69_2 && b70_26 && b71_14 && b72_5 && b73_23 && b74_25 && b75_5 && b76_22 && b77_22 && b78_4 && b79_5 && b80_24 && b81_3 && b82_12 && b83_21 && b84_2 && b85_18 && b86_18 && b87_2 && b88_17 && b89_17 && b90_2 && b91_13 && b92_15 && b93_2 && b94_15 && b95_14 && b96_2 && b97_13 && b98_14 && b99_2 && b100_14 && b101_13 && b102_3 && b103_12 && b104_12 && b105_2 && b106_4 && b107_11 && b108_1 && b109_12 && b110_12 && b111_1 && b112_1 && b113_2 && b114_2) {
matched = true;
pattern_id = 2382;
}
if(b0_73 && b1_67 && b2_19 && b3_34 && b4_22) {
matched = true;
pattern_id = 2383;
}
if(b0_14 && b1_15 && b2_1 && b3_28 && b4_63 && b5_23 && b6_1 && b7_4 && b8_10 && b9_11 && b10_2 && b11_1 && b12_2 && b13_26 && b14_51 && b15_7 && b16_4 && b17_1 && b18_8 && b19_9 && b20_9 && b21_1 && b22_2 && b23_7 && b24_1 && b25_6 && b26_2 && b27_7 && b28_8 && b29_5 && b30_9 && b31_10 && b32_7 && b33_1 && b34_3 && b35_6 && b36_3 && b37_4 && b38_5 && b39_7 && b40_14 && b41_13 && b42_8 && b43_4 && b44_5 && b45_23 && b46_2 && b47_3 && b48_4 && b49_4 && b50_25 && b51_3 && b52_4 && b53_4 && b54_3 && b55_20 && b56_3 && b57_3 && b58_4 && b59_3 && b60_27 && b61_4 && b62_4 && b63_3 && b64_3 && b65_29 && b66_4 && b67_4 && b68_4 && b69_3 && b70_30 && b71_4 && b72_3 && b73_4 && b74_3 && b75_19 && b76_5 && b77_7 && b78_5 && b79_3 && b80_1 && b81_4 && b82_4 && b83_6 && b84_4 && b85_1 && b86_3 && b87_3 && b88_2 && b89_4 && b90_13 && b91_3 && b92_3 && b93_3 && b94_3 && b95_15 && b96_3 && b97_2 && b98_3 && b99_3 && b100_6) {
matched = true;
pattern_id = 2384;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_43 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 2385;
}
if(b0_79 && b1_1 && b2_46 && b3_53 && b4_32 && b5_16 && b6_55 && b7_7 && b8_35 && b9_27 && b10_49 && b11_30 && b12_5 && b13_4 && b14_7 && b15_3 && b16_41 && b17_10 && b18_34 && b19_22 && b20_3 && b21_5 && b22_1 && b23_21 && b24_16 && b25_6 && b26_54 && b27_59 && b28_6 && b29_5 && b30_1 && b31_4 && b32_29 && b33_16 && b34_19 && b35_33 && b36_47 && b37_20 && b38_49 && b39_19 && b40_21 && b41_26 && b42_11 && b43_15 && b44_36 && b45_4 && b46_29 && b47_29 && b48_3 && b49_36) {
matched = true;
pattern_id = 2386;
}
if(b0_56 && b1_2 && b2_17 && b3_19 && b4_40 && b5_17 && b6_7 && b7_1 && b8_63 && b9_5 && b10_34 && b11_30 && b12_26 && b13_53 && b14_41 && b15_3 && b16_3) {
matched = true;
pattern_id = 2387;
}
if(b0_24 && b1_56 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_3 && b8_25 && b9_8 && b10_1 && b11_42 && b12_2 && b13_26 && b14_19 && b15_54 && b16_40 && b17_37 && b18_56 && b19_49 && b20_16 && b21_46 && b22_47 && b23_62) {
matched = true;
pattern_id = 2388;
}
if(b0_44 && b1_15 && b2_31 && b3_37 && b4_4 && b5_19 && b6_9 && b7_54 && b8_11 && b9_43 && b10_32 && b11_6 && b12_17 && b13_4 && b14_51) {
matched = true;
pattern_id = 2389;
}
if(b0_30 && b1_2 && b2_6 && b3_11 && b4_43 && b5_26 && b6_36 && b7_8 && b8_5 && b9_5 && b10_12 && b11_5 && b12_50 && b13_36 && b14_25) {
matched = true;
pattern_id = 2390;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_42 && b37_17 && b38_14 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_38 && b45_30 && b46_32 && b47_10 && b48_21 && b49_37 && b50_12 && b51_22 && b52_24 && b53_38 && b54_10 && b55_8 && b56_33 && b57_9 && b58_34 && b59_34 && b60_8 && b61_24 && b62_31 && b63_25 && b64_23 && b65_27 && b66_11 && b67_13 && b68_26 && b69_2 && b70_31 && b71_23 && b72_20 && b73_20 && b74_26 && b75_20 && b76_23 && b77_5 && b78_12 && b79_8 && b80_25 && b81_6 && b82_19 && b83_22 && b84_16 && b85_19 && b86_19 && b87_16 && b88_18 && b89_18 && b90_14 && b91_15 && b92_16 && b93_10 && b94_16 && b95_3 && b96_5 && b97_14 && b98_2 && b99_11 && b100_2 && b101_9 && b102_7 && b103_13 && b104_13 && b105_12 && b106_13 && b107_12 && b108_12 && b109_13 && b110_4 && b111_11 && b112_7 && b113_11 && b114_8 && b115_12 && b116_12 && b117_10 && b118_7 && b119_7 && b120_11 && b121_5 && b122_11 && b123_11 && b124_2 && b125_11 && b126_11 && b127_7 && b128_2 && b129_9 && b130_8 && b131_10 && b132_10 && b133_8 && b134_9 && b135_10 && b136_7 && b137_7 && b138_7 && b139_9 && b140_8 && b141_8 && b142_7 && b143_8 && b144_8 && b145_8 && b146_7 && b147_8 && b148_7 && b149_6 && b150_5 && b151_6 && b152_5 && b153_3 && b154_6 && b155_6 && b156_1 && b157_6 && b158_1 && b159_1 && b160_5 && b161_3) {
matched = true;
pattern_id = 2391;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_15 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_20 && b86_9 && b87_3 && b88_18 && b89_4 && b90_15 && b91_16 && b92_5 && b93_3 && b94_17 && b95_16 && b96_11 && b97_1 && b98_15 && b99_7 && b100_15 && b101_14 && b102_12 && b103_9 && b104_14 && b105_13 && b106_7 && b107_13 && b108_13 && b109_14 && b110_13 && b111_12 && b112_7 && b113_7 && b114_5 && b115_11 && b116_13 && b117_11 && b118_4 && b119_10 && b120_12 && b121_11 && b122_12 && b123_10 && b124_11 && b125_5 && b126_5 && b127_5 && b128_6 && b129_2 && b130_6 && b131_5 && b132_5 && b133_1 && b134_4 && b135_5 && b136_3 && b137_8 && b138_8 && b139_10 && b140_5 && b141_9 && b142_2 && b143_9 && b144_9 && b145_9 && b146_8 && b147_9 && b148_8 && b149_7 && b150_4 && b151_7 && b152_6 && b153_2 && b154_7 && b155_7 && b156_7 && b157_1 && b158_6 && b159_6 && b160_1 && b161_5 && b162_5 && b163_1 && b164_5 && b165_5) {
matched = true;
pattern_id = 2392;
}
if(b0_35 && b1_66 && b2_8 && b3_56 && b4_70 && b5_59 && b6_39 && b7_10 && b8_8 && b9_41 && b10_59) {
matched = true;
pattern_id = 2393;
}
if(b0_35 && b1_16 && b2_27 && b3_46 && b4_7 && b5_8 && b6_23 && b7_8 && b8_22 && b9_45 && b10_17 && b11_57 && b12_50 && b13_38 && b14_12 && b15_15) {
matched = true;
pattern_id = 2394;
}
if(b0_35 && b1_35 && b2_10 && b3_22 && b4_45 && b5_3 && b6_48 && b7_26 && b8_12 && b9_48 && b10_32 && b11_27 && b12_7 && b13_21 && b14_13 && b15_50 && b16_40 && b17_31 && b18_11 && b19_4 && b20_51 && b21_23 && b22_14 && b23_20 && b24_14 && b25_15 && b26_28 && b27_33 && b28_34 && b29_18) {
matched = true;
pattern_id = 2395;
}
if(b0_3 && b1_28 && b2_40 && b3_14 && b4_35 && b5_4 && b6_28 && b7_5 && b8_29 && b9_21 && b10_22 && b11_7 && b12_12 && b13_14 && b14_2 && b15_1 && b16_53 && b17_2 && b18_1 && b19_13 && b20_9 && b21_33 && b22_22 && b23_18 && b24_1 && b25_54 && b26_18 && b27_40 && b28_21 && b29_16 && b30_36 && b31_51 && b32_1 && b33_46 && b34_16 && b35_43 && b36_19 && b37_25 && b38_34 && b39_1 && b40_41 && b41_40 && b42_33 && b43_4 && b44_18 && b45_31 && b46_33 && b47_15 && b48_22 && b49_13 && b50_7 && b51_20 && b52_1 && b53_24 && b54_10 && b55_8 && b56_3 && b57_18 && b58_24 && b59_3 && b60_2 && b61_18 && b62_18 && b63_16 && b64_15 && b65_6 && b66_23 && b67_17 && b68_4 && b69_3 && b70_19 && b71_15 && b72_2 && b73_16 && b74_17 && b75_2 && b76_2 && b77_13 && b78_1 && b79_12 && b80_16 && b81_3 && b82_15 && b83_14 && b84_2 && b85_11 && b86_9 && b87_10 && b88_9 && b89_9 && b90_9 && b91_3 && b92_5 && b93_17 && b94_18 && b95_17 && b96_3 && b97_14 && b98_16 && b99_3 && b100_16 && b101_9 && b102_13 && b103_14 && b104_15 && b105_14 && b106_13 && b107_1 && b108_14 && b109_2 && b110_14 && b111_13 && b112_4 && b113_12 && b114_9 && b115_13 && b116_14 && b117_12 && b118_9 && b119_11 && b120_10 && b121_12 && b122_3 && b123_12 && b124_12 && b125_1 && b126_12 && b127_11 && b128_12 && b129_10 && b130_12 && b131_1 && b132_11 && b133_9 && b134_10 && b135_8 && b136_1 && b137_9 && b138_1 && b139_11 && b140_9 && b141_1 && b142_8 && b143_10 && b144_10 && b145_10 && b146_9 && b147_10 && b148_9 && b149_1 && b150_6 && b151_8 && b152_7 && b153_6 && b154_8 && b155_8 && b156_8 && b157_7 && b158_1 && b159_7 && b160_6 && b161_6 && b162_7 && b163_4 && b164_7 && b165_1 && b166_5 && b167_5 && b168_5 && b169_5 && b170_6 && b171_5 && b172_5 && b173_4 && b174_5 && b175_4 && b176_1 && b177_3 && b178_4 && b179_4 && b180_4 && b181_3 && b182_3 && b183_3 && b184_3 && b185_1 && b186_4 && b187_3 && b188_4 && b189_4 && b190_1 && b191_3 && b192_2 && b193_2 && b194_3 && b195_3 && b196_2 && b197_2 && b198_3 && b199_3 && b200_3 && b201_3 && b202_3 && b203_3 && b204_3 && b205_3 && b206_3 && b207_2 && b208_3 && b209_3 && b210_3 && b211_3 && b212_3 && b213_2 && b214_3 && b215_3 && b216_3 && b217_2 && b218_3 && b219_2 && b220_3 && b221_3 && b222_2 && b223_1 && b224_3 && b225_3 && b226_1 && b227_3 && b228_2 && b229_3 && b230_3 && b231_3 && b232_3 && b233_3 && b234_3 && b235_3 && b236_3 && b237_2 && b238_3 && b239_2 && b240_2 && b241_2 && b242_2 && b243_2 && b244_2 && b245_2 && b246_2 && b247_2 && b248_2 && b249_2 && b250_2 && b251_2 && b252_2 && b253_2 && b254_2 && b255_2 && b256_2 && b257_2 && b258_2 && b259_2 && b260_2 && b261_2) {
matched = true;
pattern_id = 2396;
}
if(b0_32 && b1_62 && b2_14 && b3_49 && b4_55 && b5_11 && b6_36 && b7_9 && b8_11 && b9_6 && b10_12 && b11_29) {
matched = true;
pattern_id = 2397;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_24 && b18_68 && b19_56 && b20_64 && b21_17 && b22_32 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 2398;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_20 && b5_8 && b6_10 && b7_31 && b8_46 && b9_4 && b10_10 && b11_22 && b12_6 && b13_31 && b14_8 && b15_4 && b16_4 && b17_24 && b18_3 && b19_26 && b20_1 && b21_3 && b22_10 && b23_2 && b24_2 && b25_8 && b26_2 && b27_2 && b28_9 && b29_2 && b30_5 && b31_57 && b32_4 && b33_4) {
matched = true;
pattern_id = 2399;
}
if(b0_64 && b1_13 && b2_16 && b3_43 && b4_18 && b5_27 && b6_7 && b7_34) {
matched = true;
pattern_id = 2400;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_12 && b18_69 && b19_37 && b20_8 && b21_45 && b22_11 && b23_18 && b24_20 && b25_45 && b26_11 && b27_7 && b28_53 && b29_7 && b30_9 && b31_5 && b32_3) {
matched = true;
pattern_id = 2401;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_41 && b18_16 && b19_56 && b20_38 && b21_31 && b22_54 && b23_16 && b24_3 && b25_30 && b26_30 && b27_2 && b28_61 && b29_36 && b30_17 && b31_45 && b32_27 && b33_24 && b34_21 && b35_28 && b36_48 && b37_10 && b38_5 && b39_16 && b40_2 && b41_4 && b42_40 && b43_11) {
matched = true;
pattern_id = 2402;
}
if(b0_35 && b1_56 && b2_50 && b3_21 && b4_18 && b5_42 && b6_7 && b7_35 && b8_48 && b9_45 && b10_35 && b11_30 && b12_22) {
matched = true;
pattern_id = 2403;
}
if(b0_14 && b1_17 && b2_46 && b3_28 && b4_6 && b5_8 && b6_8 && b7_32 && b8_9 && b9_49 && b10_12 && b11_49 && b12_70 && b13_4 && b14_17 && b15_22 && b16_24 && b17_34 && b18_10 && b19_9 && b20_41 && b21_36 && b22_1 && b23_2 && b24_49 && b25_6 && b26_32 && b27_1 && b28_30 && b29_38 && b30_6 && b31_4 && b32_7 && b33_43 && b34_3 && b35_22 && b36_23 && b37_30 && b38_2 && b39_4 && b40_4 && b41_13) {
matched = true;
pattern_id = 2404;
}
if(b0_35 && b1_11 && b2_15 && b3_11 && b4_14 && b5_57 && b6_2 && b7_31 && b8_41 && b9_10 && b10_26 && b11_6 && b12_3 && b13_39 && b14_24 && b15_35 && b16_23 && b17_55) {
matched = true;
pattern_id = 2405;
}
if(b0_35 && b1_11 && b2_20 && b3_34 && b4_7 && b5_16 && b6_20 && b7_10 && b8_8 && b9_42 && b10_28 && b11_47 && b12_4 && b13_27 && b14_21 && b15_41 && b16_47 && b17_44 && b18_10 && b19_42 && b20_26) {
matched = true;
pattern_id = 2406;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_63 && b13_36 && b14_21 && b15_40 && b16_8 && b17_29 && b18_3 && b19_61 && b20_33 && b21_14 && b22_11 && b23_32 && b24_9 && b25_2 && b26_5 && b27_2 && b28_2 && b29_13 && b30_2) {
matched = true;
pattern_id = 2407;
}
if(b0_35 && b1_47 && b2_42 && b3_56 && b4_27 && b5_20 && b6_34 && b7_10 && b8_55 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 2408;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_43 && b45_4 && b46_4 && b47_7 && b48_2 && b49_3 && b50_4 && b51_3) {
matched = true;
pattern_id = 2409;
}
if(b0_43 && b1_28 && b2_30 && b3_44) {
matched = true;
pattern_id = 2410;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_48 && b9_27 && b10_11 && b11_54 && b12_45 && b13_39 && b14_24 && b15_18 && b16_52) {
matched = true;
pattern_id = 2411;
}
if(b0_35 && b1_13 && b2_14 && b3_43 && b4_19 && b5_40 && b6_8 && b7_7 && b8_6 && b9_45 && b10_64 && b11_46 && b12_18 && b13_38 && b14_24 && b15_30 && b16_22 && b17_55) {
matched = true;
pattern_id = 2412;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32) {
matched = true;
pattern_id = 2413;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15) {
matched = true;
pattern_id = 2414;
}
if(b0_53 && b1_8 && b2_2 && b3_15 && b4_22 && b5_25 && b6_8 && b7_44 && b8_62 && b9_42 && b10_10 && b11_2 && b12_71 && b13_30 && b14_21 && b15_20 && b16_16 && b17_10 && b18_9 && b19_22 && b20_47 && b21_15 && b22_19 && b23_7 && b24_19 && b25_61 && b26_11 && b27_2 && b28_59 && b29_60 && b30_55 && b31_48 && b32_1 && b33_41 && b34_51 && b35_7 && b36_3 && b37_11 && b38_10 && b39_7 && b40_2 && b41_48 && b42_16 && b43_12 && b44_26 && b45_16 && b46_31 && b47_13 && b48_2 && b49_38 && b50_40 && b51_2 && b52_18 && b53_6 && b54_30 && b55_17 && b56_14 && b57_10 && b58_9 && b59_6 && b60_26 && b61_31 && b62_22 && b63_27 && b64_12 && b65_30 && b66_21 && b67_25 && b68_24 && b69_22 && b70_3 && b71_4 && b72_21 && b73_24 && b74_3 && b75_5 && b76_24 && b77_23 && b78_21 && b79_5 && b80_12 && b81_4 && b82_21 && b83_23 && b84_4 && b85_21 && b86_9 && b87_17 && b88_19 && b89_19 && b90_2 && b91_13 && b92_17 && b93_18 && b94_4 && b95_4 && b96_12 && b97_2 && b98_17 && b99_12 && b100_2 && b101_13 && b102_11 && b103_15 && b104_3 && b105_15 && b106_14 && b107_3 && b108_1 && b109_8 && b110_15 && b111_14 && b112_12 && b113_12 && b114_10 && b115_14 && b116_15 && b117_1 && b118_10 && b119_11 && b120_13 && b121_5 && b122_11 && b123_2 && b124_13 && b125_3 && b126_13 && b127_3 && b128_9 && b129_7 && b130_8 && b131_1 && b132_4 && b133_10 && b134_11 && b135_11 && b136_7 && b137_10 && b138_9 && b139_12 && b140_1 && b141_10 && b142_9 && b143_3 && b144_8 && b145_11 && b146_10 && b147_11 && b148_10 && b149_8 && b150_7 && b151_9 && b152_8 && b153_2 && b154_8 && b155_9 && b156_9 && b157_8 && b158_7 && b159_8 && b160_2 && b161_7 && b162_8 && b163_5 && b164_8 && b165_3 && b166_6 && b167_1 && b168_6 && b169_6 && b170_1 && b171_6 && b172_6 && b173_2 && b174_6) {
matched = true;
pattern_id = 2415;
}
if(b0_80 && b1_16 && b2_14 && b3_18 && b4_58) {
matched = true;
pattern_id = 2416;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_5 && b9_14 && b10_46 && b11_49 && b12_17 && b13_38 && b14_17 && b15_48 && b16_25 && b17_26 && b18_10 && b19_9 && b20_41 && b21_36 && b22_37 && b23_35 && b24_31 && b25_18 && b26_58) {
matched = true;
pattern_id = 2417;
}
if(b0_35 && b1_16 && b2_25 && b3_50 && b4_44 && b5_8 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14) {
matched = true;
pattern_id = 2418;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_17 && b18_10 && b19_34 && b20_17 && b21_30 && b22_42 && b23_19 && b24_22 && b25_4) {
matched = true;
pattern_id = 2419;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_64) {
matched = true;
pattern_id = 2420;
}
if(b0_14 && b1_15 && b2_34 && b3_28 && b4_24 && b5_23 && b6_1 && b7_4 && b8_10 && b9_27 && b10_2 && b11_1 && b12_2 && b13_26 && b14_38 && b15_7 && b16_4 && b17_1 && b18_8 && b19_35 && b20_9 && b21_1 && b22_2 && b23_7 && b24_40 && b25_6 && b26_2 && b27_7 && b28_6 && b29_30 && b30_2 && b31_11 && b32_7 && b33_4 && b34_2 && b35_1 && b36_4 && b37_4 && b38_2 && b39_21 && b40_3 && b41_4 && b42_8 && b43_11 && b44_14 && b45_4 && b46_4 && b47_3 && b48_3 && b49_39 && b50_21 && b51_4 && b52_4 && b53_17 && b54_12 && b55_17 && b56_2 && b57_3 && b58_13 && b59_4 && b60_28 && b61_4 && b62_32 && b63_18 && b64_4 && b65_3 && b66_4 && b67_1 && b68_6 && b69_4 && b70_3 && b71_4 && b72_22 && b73_5 && b74_4 && b75_3 && b76_5 && b77_16 && b78_9 && b79_4 && b80_3 && b81_4 && b82_10 && b83_2 && b84_3 && b85_2 && b86_3 && b87_18 && b88_9 && b89_8 && b90_15 && b91_3) {
matched = true;
pattern_id = 2421;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_20 && b18_4 && b19_35 && b20_17 && b21_35 && b22_11 && b23_42 && b24_1 && b25_36 && b26_19 && b27_1 && b28_28 && b29_25 && b30_2 && b31_13 && b32_4 && b33_4) {
matched = true;
pattern_id = 2422;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_34 && b5_67 && b6_12 && b7_19 && b8_23 && b9_13 && b10_23 && b11_39 && b12_6 && b13_9 && b14_9 && b15_4 && b16_7 && b17_31 && b18_3 && b19_18 && b20_14 && b21_3 && b22_6 && b23_55 && b24_2 && b25_62 && b26_6 && b27_2 && b28_51 && b29_61 && b30_5 && b31_46 && b32_14 && b33_8 && b34_27 && b35_15 && b36_6 && b37_6 && b38_14 && b39_5 && b40_7 && b41_8 && b42_4 && b43_46 && b44_8 && b45_3 && b46_5 && b47_29 && b48_3) {
matched = true;
pattern_id = 2423;
}
if(b0_35 && b1_21 && b2_50 && b3_56 && b4_55 && b5_51 && b6_20 && b7_11 && b8_5 && b9_11 && b10_13 && b11_29 && b12_16 && b13_6) {
matched = true;
pattern_id = 2424;
}
if(b0_35 && b1_2 && b2_3 && b3_69 && b4_2 && b5_30 && b6_22) {
matched = true;
pattern_id = 2425;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_27 && b10_7 && b11_55 && b12_5 && b13_4 && b14_25 && b15_38 && b16_18 && b17_29 && b18_9 && b19_35 && b20_32 && b21_10 && b22_37 && b23_27 && b24_37 && b25_1 && b26_58) {
matched = true;
pattern_id = 2426;
}
if(b0_35 && b1_11 && b2_15 && b3_11 && b4_14 && b5_57 && b6_61 && b7_11 && b8_11 && b9_40 && b10_29) {
matched = true;
pattern_id = 2427;
}
if(b0_35 && b1_11 && b2_20 && b3_34 && b4_7 && b5_16 && b6_20 && b7_10 && b8_8 && b9_52 && b10_26 && b11_37 && b12_39 && b13_20) {
matched = true;
pattern_id = 2428;
}
if(b0_35 && b1_56 && b2_50 && b3_24 && b4_44 && b5_11 && b6_34 && b7_44 && b8_16 && b9_6 && b10_7 && b11_4 && b12_25 && b13_5) {
matched = true;
pattern_id = 2429;
}
if(b0_35 && b1_35 && b2_14 && b3_18 && b4_14 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52 && b10_56 && b11_29) {
matched = true;
pattern_id = 2430;
}
if(b0_35 && b1_21 && b2_41 && b3_40 && b4_44 && b5_20 && b6_11 && b7_31 && b8_41 && b9_10 && b10_48 && b11_35 && b12_50 && b13_6 && b14_40) {
matched = true;
pattern_id = 2431;
}
if(b0_35 && b1_62 && b2_25 && b3_8 && b4_59 && b5_26 && b6_11 && b7_31 && b8_35 && b9_19 && b10_11 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54 && b16_22 && b17_10 && b18_33 && b19_9 && b20_26) {
matched = true;
pattern_id = 2432;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_16 && b5_29 && b6_36 && b7_9 && b8_2 && b9_20 && b10_25 && b11_37 && b12_25 && b13_5 && b14_48 && b15_30 && b16_3 && b17_47 && b18_4 && b19_21) {
matched = true;
pattern_id = 2433;
}
if(b0_35 && b1_2 && b2_41 && b3_21 && b4_59 && b5_29 && b6_24 && b7_10 && b8_8 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_28 && b15_33 && b16_39 && b17_29 && b18_60) {
matched = true;
pattern_id = 2434;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35) {
matched = true;
pattern_id = 2435;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35 && b5_47 && b6_7 && b7_9 && b8_57 && b9_10 && b10_4 && b11_3 && b12_5 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52) {
matched = true;
pattern_id = 2436;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35 && b5_11 && b6_34 && b7_29 && b8_57 && b9_10 && b10_4 && b11_3 && b12_5 && b13_40 && b14_36 && b15_44 && b16_16 && b17_52) {
matched = true;
pattern_id = 2437;
}
if(b0_35 && b1_50 && b2_25 && b3_2 && b4_35 && b5_11 && b6_20 && b7_54 && b8_57 && b9_48 && b10_26 && b11_30 && b12_5 && b13_58 && b14_24 && b15_41 && b16_46 && b17_27 && b18_24 && b19_44 && b20_34 && b21_7 && b22_40 && b23_62) {
matched = true;
pattern_id = 2438;
}
if(b0_35 && b1_40 && b2_24 && b3_7 && b4_7 && b5_12 && b6_8 && b7_9 && b8_5 && b9_20) {
matched = true;
pattern_id = 2439;
}
if(b0_35 && b1_62 && b2_12 && b3_11 && b4_6 && b5_37 && b6_10 && b7_9 && b8_5 && b9_28 && b10_5 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54 && b16_22 && b17_55) {
matched = true;
pattern_id = 2440;
}
if(b0_35 && b1_2 && b2_43 && b3_21 && b4_16 && b5_37 && b6_10 && b7_9 && b8_5 && b9_28 && b10_5 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54 && b16_22 && b17_55) {
matched = true;
pattern_id = 2441;
}
if(b0_35 && b1_19 && b2_41 && b3_34 && b4_27 && b5_20 && b6_19 && b7_9 && b8_16 && b9_34 && b10_46) {
matched = true;
pattern_id = 2442;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_40 && b46_41 && b47_36 && b48_28 && b49_22 && b50_41 && b51_28 && b52_4 && b53_17 && b54_18 && b55_25 && b56_3 && b57_2 && b58_17 && b59_13 && b60_12 && b61_25 && b62_7 && b63_20 && b64_25 && b65_6 && b66_24 && b67_26 && b68_5 && b69_7 && b70_32 && b71_14 && b72_2 && b73_3 && b74_27 && b75_4 && b76_13 && b77_24 && b78_22 && b79_19 && b80_26 && b81_4 && b82_4 && b83_18 && b84_2 && b85_2 && b86_13 && b87_8) {
matched = true;
pattern_id = 2443;
}
if(b0_35 && b1_2 && b2_23 && b3_62 && b4_50 && b5_16 && b6_22 && b7_14 && b8_15 && b9_53 && b10_4 && b11_5 && b12_12 && b13_38 && b14_42 && b15_25) {
matched = true;
pattern_id = 2444;
}
if(b0_35 && b1_2 && b2_23 && b3_62 && b4_50 && b5_16 && b6_22 && b7_14 && b8_15 && b9_17 && b10_6 && b11_6 && b12_24 && b13_27 && b14_17 && b15_36 && b16_44 && b17_40 && b18_9) {
matched = true;
pattern_id = 2445;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_24 && b5_17 && b6_18 && b7_14 && b8_7 && b9_5 && b10_34 && b11_20 && b12_2 && b13_33 && b14_2 && b15_1 && b16_4 && b17_1 && b18_32 && b19_6 && b20_1 && b21_41 && b22_1 && b23_26 && b24_3 && b25_6 && b26_2 && b27_7 && b28_6) {
matched = true;
pattern_id = 2446;
}
if(b0_35 && b1_13 && b2_20 && b3_50 && b4_7 && b5_2 && b6_10 && b7_44 && b8_40 && b9_6 && b10_5 && b11_37 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8) {
matched = true;
pattern_id = 2447;
}
if(b0_22 && b1_50 && b2_43 && b3_34 && b4_12 && b5_45) {
matched = true;
pattern_id = 2448;
}
if(b0_26 && b1_20 && b2_45 && b3_5 && b4_1 && b5_30 && b6_12 && b7_37 && b8_29 && b9_51 && b10_61 && b11_13 && b12_66 && b13_40 && b14_1 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_62 && b23_31 && b24_24 && b25_30 && b26_54 && b27_2) {
matched = true;
pattern_id = 2449;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_12 && b21_18 && b22_2 && b23_8 && b24_48 && b25_53 && b26_35 && b27_37 && b28_19 && b29_34 && b30_48 && b31_28 && b32_1 && b33_44 && b34_44 && b35_5 && b36_42 && b37_17 && b38_44 && b39_7 && b40_9 && b41_2 && b42_3 && b43_2 && b44_23 && b45_21 && b46_30 && b47_5 && b48_29 && b49_3 && b50_42 && b51_29 && b52_32 && b53_3 && b54_31 && b55_8 && b56_24 && b57_25 && b58_6 && b59_21 && b60_17 && b61_3 && b62_33 && b63_3 && b64_4 && b65_31 && b66_3 && b67_27 && b68_5 && b69_23 && b70_20 && b71_24 && b72_23 && b73_25 && b74_28 && b75_21 && b76_25 && b77_21 && b78_23 && b79_4 && b80_27 && b81_18 && b82_3 && b83_6 && b84_17 && b85_21 && b86_4 && b87_19 && b88_9) {
matched = true;
pattern_id = 2450;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_27 && b11_7 && b12_6 && b13_15 && b14_8 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_7 && b36_6 && b37_4 && b38_5 && b39_5 && b40_4 && b41_4 && b42_4 && b43_4 && b44_3 && b45_3 && b46_4 && b47_3 && b48_3) {
matched = true;
pattern_id = 2451;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_27 && b11_7 && b12_6 && b13_12 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_2 && b24_9) {
matched = true;
pattern_id = 2452;
}
if(b0_35 && b1_13 && b2_20 && b3_50 && b4_60 && b5_2 && b6_16 && b7_44 && b8_40 && b9_6 && b10_5 && b11_37 && b12_12 && b13_3 && b14_25 && b15_20 && b16_8) {
matched = true;
pattern_id = 2453;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_23 && b18_67 && b19_14 && b20_42 && b21_62 && b22_1 && b23_2 && b24_52 && b25_13 && b26_2 && b27_32 && b28_6) {
matched = true;
pattern_id = 2454;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_34 && b5_38 && b6_12 && b7_67 && b8_27 && b9_13 && b10_23 && b11_8 && b12_6 && b13_12 && b14_10 && b15_4 && b16_51 && b17_9 && b18_3 && b19_16 && b20_22 && b21_3 && b22_17 && b23_12 && b24_2 && b25_15 && b26_16 && b27_8) {
matched = true;
pattern_id = 2455;
}
if(b0_47 && b1_27 && b2_59 && b3_67 && b4_20 && b5_71 && b6_6 && b7_64 && b8_70 && b9_8 && b10_29) {
matched = true;
pattern_id = 2456;
}
if(b0_35 && b1_13 && b2_23 && b3_6 && b4_60 && b5_30) {
matched = true;
pattern_id = 2457;
}
if(b0_33 && b1_3 && b2_19 && b3_8 && b4_44 && b5_45 && b6_72 && b7_4 && b8_45 && b9_65 && b10_10 && b11_22) {
matched = true;
pattern_id = 2458;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_20 && b18_4 && b19_12 && b20_32 && b21_21 && b22_34 && b23_19 && b24_45 && b25_5 && b26_45 && b27_18 && b28_21 && b29_16 && b30_36 && b31_50 && b32_55 && b33_16 && b34_37 && b35_12 && b36_40) {
matched = true;
pattern_id = 2459;
}
if(b0_35 && b1_21 && b2_6 && b3_26 && b4_19 && b5_6 && b6_55 && b7_7 && b8_15 && b9_11 && b10_28 && b11_47 && b12_38 && b13_36 && b14_28 && b15_33 && b16_8 && b17_28 && b18_11 && b19_9 && b20_45 && b21_24 && b22_15 && b23_39 && b24_16 && b25_20 && b26_9 && b27_10 && b28_13 && b29_19 && b30_23 && b31_40 && b32_24 && b33_35 && b34_31 && b35_28 && b36_17 && b37_16 && b38_28 && b39_46 && b40_17 && b41_32 && b42_22) {
matched = true;
pattern_id = 2460;
}
if(b0_14 && b1_15 && b2_31 && b3_14 && b4_4 && b5_19 && b6_5 && b7_13 && b8_41 && b9_17 && b10_17 && b11_35 && b12_4 && b13_70 && b14_3 && b15_25 && b16_29 && b17_40 && b18_9 && b19_43 && b20_48 && b21_36 && b22_14 && b23_25 && b24_57 && b25_13 && b26_53 && b27_10 && b28_58 && b29_1 && b30_9 && b31_44 && b32_1 && b33_1 && b34_12 && b35_1 && b36_33 && b37_15 && b38_18 && b39_12 && b40_17 && b41_26 && b42_41 && b43_43 && b44_28 && b45_11 && b46_21 && b47_37 && b48_30 && b49_12 && b50_43 && b51_30 && b52_3 && b53_18 && b54_6 && b55_8 && b56_7 && b57_6 && b58_20 && b59_17 && b60_29 && b61_4 && b62_4 && b63_5 && b64_16 && b65_3 && b66_25 && b67_3 && b68_27 && b69_24 && b70_21 && b71_24 && b72_24 && b73_21 && b74_21 && b75_1 && b76_2 && b77_16 && b78_18 && b79_13 && b80_28 && b81_11 && b82_22 && b83_24 && b84_18 && b85_22 && b86_20 && b87_20 && b88_3 && b89_20 && b90_15 && b91_8 && b92_18 && b93_19 && b94_10 && b95_18 && b96_7 && b97_1 && b98_18 && b99_13 && b100_16 && b101_15 && b102_14 && b103_7 && b104_16 && b105_4 && b106_15 && b107_3 && b108_15 && b109_15 && b110_3 && b111_1 && b112_13 && b113_13 && b114_11 && b115_15 && b116_16 && b117_4 && b118_10 && b119_12 && b120_14 && b121_13 && b122_13 && b123_13 && b124_14 && b125_12 && b126_3 && b127_11 && b128_2 && b129_11 && b130_13 && b131_11 && b132_12 && b133_7 && b134_12 && b135_12 && b136_8 && b137_11 && b138_1 && b139_13 && b140_4 && b141_1 && b142_10 && b143_3 && b144_11 && b145_12 && b146_11 && b147_12 && b148_11 && b149_9 && b150_8 && b151_10 && b152_9 && b153_7 && b154_1 && b155_10 && b156_10 && b157_1 && b158_8 && b159_1 && b160_7 && b161_1 && b162_3 && b163_6 && b164_1 && b165_1 && b166_7 && b167_1 && b168_1 && b169_7 && b170_7) {
matched = true;
pattern_id = 2461;
}
if(b0_56 && b1_10 && b2_40 && b3_38 && b4_35 && b5_28 && b6_2 && b7_33 && b8_3 && b9_16 && b10_10 && b11_1 && b12_6 && b13_44 && b14_66 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4 && b22_5 && b23_31 && b24_21 && b25_30 && b26_25 && b27_37 && b28_30 && b29_48 && b30_56 && b31_14 && b32_36 && b33_32 && b34_31 && b35_21 && b36_46 && b37_3) {
matched = true;
pattern_id = 2462;
}
if(b0_35 && b1_58 && b2_14 && b3_49 && b4_21 && b5_40 && b6_46 && b7_2 && b8_40) {
matched = true;
pattern_id = 2463;
}
if(b0_14 && b1_15 && b2_28 && b3_28 && b4_6 && b5_10 && b6_3 && b7_9 && b8_11 && b9_15 && b10_62 && b11_20 && b12_2 && b13_51 && b14_2 && b15_41 && b16_30 && b17_67 && b18_10 && b19_2 && b20_9 && b21_1 && b22_21 && b23_7 && b24_33 && b25_1 && b26_50 && b27_8 && b28_2 && b29_2 && b30_2) {
matched = true;
pattern_id = 2464;
}
if(b0_35 && b1_13 && b2_15 && b3_6 && b4_6 && b5_10 && b6_50 && b7_11 && b8_61 && b9_14 && b10_28 && b11_23 && b12_60 && b13_52 && b14_40 && b15_50 && b16_2 && b17_29 && b18_22 && b19_33) {
matched = true;
pattern_id = 2465;
}
if(b0_1 && b1_1 && b2_28 && b3_63 && b4_32 && b5_7 && b6_11 && b7_9 && b8_40 && b9_72 && b10_22 && b11_13) {
matched = true;
pattern_id = 2466;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_40 && b46_41 && b47_36 && b48_28 && b49_22 && b50_44 && b51_28 && b52_4 && b53_39) {
matched = true;
pattern_id = 2467;
}
if(b0_17 && b1_16 && b2_20 && b3_8 && b4_44 && b5_51 && b6_3 && b7_54 && b8_31 && b9_5 && b10_4 && b11_5 && b12_38 && b13_36 && b14_28 && b15_7 && b16_27 && b17_9 && b18_8) {
matched = true;
pattern_id = 2468;
}
if(b0_35 && b1_40 && b2_20 && b3_20 && b4_50 && b5_27 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 2469;
}
if(b0_32 && b1_35 && b2_20 && b3_21) {
matched = true;
pattern_id = 2470;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_12 && b7_4 && b8_22 && b9_13 && b10_10 && b11_1 && b12_6 && b13_51 && b14_30 && b15_4 && b16_4 && b17_9 && b18_8) {
matched = true;
pattern_id = 2471;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_29 && b6_24 && b7_10 && b8_8 && b9_56 && b10_43 && b11_6 && b12_39 && b13_5 && b14_19) {
matched = true;
pattern_id = 2472;
}
if(b0_35 && b1_8 && b2_23 && b3_21 && b4_12 && b5_8 && b6_2 && b7_47 && b8_6 && b9_43) {
matched = true;
pattern_id = 2473;
}
if(b0_14 && b1_37 && b2_32 && b3_28 && b4_24 && b5_6 && b6_11 && b7_2 && b8_14 && b9_40 && b10_71 && b11_46 && b12_7 && b13_5 && b14_2 && b15_6 && b16_20 && b17_8 && b18_24 && b19_3 && b20_24 && b21_61 && b22_18 && b23_2 && b24_19 && b25_2 && b26_59 && b27_6 && b28_24 && b29_61 && b30_14 && b31_50 && b32_8 && b33_53 && b34_24 && b35_12 && b36_45 && b37_36 && b38_1 && b39_12 && b40_24 && b41_43 && b42_8 && b43_4 && b44_4 && b45_11 && b46_38 && b47_29 && b48_20 && b49_35 && b50_7 && b51_4 && b52_33 && b53_24 && b54_3 && b55_14 && b56_34 && b57_2 && b58_3 && b59_7 && b60_4 && b61_32 && b62_25 && b63_11 && b64_26 && b65_32 && b66_16 && b67_8 && b68_28 && b69_16 && b70_21 && b71_4 && b72_21 && b73_26 && b74_3) {
matched = true;
pattern_id = 2474;
}
if(b0_32 && b1_52 && b2_17 && b3_49 && b4_55) {
matched = true;
pattern_id = 2475;
}
if(b0_35 && b1_2 && b2_3 && b3_6 && b4_24 && b5_16 && b6_36 && b7_15 && b8_40 && b9_25 && b10_5) {
matched = true;
pattern_id = 2476;
}
if(b0_35 && b1_16 && b2_50 && b3_55 && b4_11 && b5_45) {
matched = true;
pattern_id = 2477;
}
if(b0_35 && b1_8 && b2_49 && b3_49 && b4_12 && b5_8 && b6_24 && b7_56 && b8_7 && b9_5 && b10_54 && b11_14 && b12_41 && b13_20) {
matched = true;
pattern_id = 2478;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_21 && b13_36 && b14_62 && b15_35 && b16_8 && b17_26 && b18_32 && b19_43 && b20_54 && b21_18 && b22_2 && b23_8 && b24_48 && b25_19 && b26_3 && b27_23 && b28_25 && b29_41 && b30_36 && b31_29 && b32_45 && b33_24 && b34_24 && b35_1 && b36_34 && b37_39 && b38_2 && b39_5 && b40_45 && b41_1 && b42_40 && b43_16 && b44_32 && b45_26 && b46_2 && b47_3 && b48_31 && b49_22 && b50_2 && b51_22 && b52_3 && b53_4 && b54_32 && b55_3 && b56_2 && b57_26 && b58_9) {
matched = true;
pattern_id = 2479;
}
if(b0_35 && b1_13 && b2_62 && b3_20 && b4_14 && b5_7 && b6_8 && b7_7 && b8_5 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_20 && b15_17) {
matched = true;
pattern_id = 2480;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10) {
matched = true;
pattern_id = 2481;
}
if(b0_35 && b1_58 && b2_20 && b3_40 && b4_50 && b5_27 && b6_7 && b7_45 && b8_35 && b9_42 && b10_5 && b11_54 && b12_32 && b13_39 && b14_35 && b15_41 && b16_23 && b17_55) {
matched = true;
pattern_id = 2482;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7 && b9_20) {
matched = true;
pattern_id = 2483;
}
if(b0_35 && b1_11 && b2_20 && b3_7 && b4_3 && b5_42 && b6_7 && b7_8 && b8_15 && b9_52) {
matched = true;
pattern_id = 2484;
}
if(b0_44 && b1_39 && b2_25 && b3_27 && b4_18 && b5_25 && b6_74 && b7_35 && b8_42 && b9_9 && b10_17 && b11_11 && b12_44 && b13_58 && b14_51 && b15_3 && b16_25 && b17_27 && b18_20 && b19_9 && b20_65 && b21_63 && b22_43 && b23_42 && b24_58 && b25_32 && b26_60) {
matched = true;
pattern_id = 2485;
}
if(b0_35 && b1_16 && b2_8 && b3_18 && b4_35 && b5_3 && b6_7 && b7_10 && b8_47 && b9_20 && b10_11 && b11_40 && b12_20 && b13_5 && b14_20 && b15_20) {
matched = true;
pattern_id = 2486;
}
if(b0_35 && b1_57 && b2_25 && b3_40 && b4_44 && b5_55 && b6_7 && b7_8 && b8_11 && b9_5 && b10_11 && b11_13 && b12_8 && b13_4 && b14_21 && b15_21 && b16_2 && b17_29 && b18_22 && b19_44 && b20_28 && b21_44 && b22_3) {
matched = true;
pattern_id = 2487;
}
if(b0_35 && b1_57 && b2_25 && b3_40 && b4_44 && b5_55 && b6_7 && b7_8 && b8_11 && b9_5 && b10_11 && b11_13 && b12_21 && b13_43 && b14_24 && b15_15 && b16_32 && b17_37 && b18_30 && b19_34) {
matched = true;
pattern_id = 2488;
}
if(b0_35 && b1_57 && b2_25 && b3_40 && b4_44 && b5_55 && b6_7 && b7_8 && b8_11 && b9_5 && b10_11 && b11_13 && b12_53 && b13_63 && b14_66 && b15_3 && b16_55 && b17_38 && b18_9 && b19_39 && b20_28) {
matched = true;
pattern_id = 2489;
}
if(b0_14 && b1_19 && b2_57 && b3_14 && b4_42 && b5_41 && b6_12 && b7_13 && b8_4 && b9_13 && b10_45 && b11_7 && b12_6 && b13_64 && b14_16 && b15_4 && b16_67 && b17_9 && b18_3 && b19_13 && b20_12 && b21_3 && b22_9 && b23_12 && b24_2 && b25_59 && b26_9 && b27_2 && b28_51 && b29_8 && b30_5 && b31_46 && b32_10 && b33_8 && b34_9 && b35_30 && b36_6 && b37_51 && b38_44 && b39_5 && b40_47 && b41_6 && b42_4 && b43_6 && b44_19 && b45_3 && b46_42 && b47_33 && b48_2 && b49_2 && b50_28 && b51_2 && b52_30 && b53_34 && b54_2 && b55_19 && b56_34 && b57_2 && b58_2 && b59_28 && b60_2 && b61_33 && b62_30 && b63_2 && b64_27 && b65_33 && b66_2 && b67_28 && b68_29 && b69_2 && b70_33 && b71_14 && b72_5 && b73_23 && b74_29 && b75_5 && b76_21 && b77_6 && b78_4 && b79_10 && b80_29 && b81_3 && b82_23 && b83_3 && b84_2 && b85_9 && b86_2 && b87_2 && b88_20 && b89_21 && b90_2 && b91_17 && b92_2 && b93_2 && b94_19 && b95_17 && b96_3) {
matched = true;
pattern_id = 2490;
}
if(b0_35 && b1_32 && b2_14 && b3_50 && b4_26 && b5_62 && b6_46 && b7_46) {
matched = true;
pattern_id = 2491;
}
if(b0_35 && b1_62 && b2_3 && b3_29 && b4_70 && b5_52 && b6_38 && b7_62) {
matched = true;
pattern_id = 2492;
}
if(b0_14 && b1_15 && b2_10 && b3_14 && b4_4 && b5_1 && b6_5) {
matched = true;
pattern_id = 2493;
}
if(b0_17 && b1_8 && b2_8 && b3_8 && b4_43) {
matched = true;
pattern_id = 2494;
}
if(b0_35 && b1_24 && b2_20 && b3_40 && b4_60 && b5_17 && b6_36 && b7_8 && b8_46 && b9_43 && b10_13 && b11_57 && b12_20 && b13_43 && b14_35) {
matched = true;
pattern_id = 2495;
}
if(b0_35 && b1_37 && b2_13 && b3_16 && b4_21 && b5_9 && b6_52 && b7_44 && b8_8 && b9_57 && b10_23 && b11_59 && b12_31 && b13_11 && b14_13 && b15_71 && b16_18) {
matched = true;
pattern_id = 2496;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_6 && b29_2 && b30_44 && b31_10 && b32_7 && b33_54 && b34_3) {
matched = true;
pattern_id = 2497;
}
if(b0_39 && b1_20 && b2_22 && b3_64 && b4_40 && b5_31 && b6_62) {
matched = true;
pattern_id = 2498;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_15 && b19_62 && b20_27 && b21_15 && b22_28 && b23_32 && b24_23 && b25_60 && b26_26 && b27_7 && b28_8 && b29_59 && b30_12 && b31_38 && b32_23 && b33_38 && b34_22 && b35_18 && b36_19 && b37_36 && b38_34 && b39_12 && b40_3 && b41_42 && b42_36 && b43_11 && b44_18 && b45_40 && b46_41 && b47_36 && b48_28 && b49_22 && b50_37 && b51_28 && b52_4 && b53_17 && b54_18 && b55_25 && b56_3 && b57_2 && b58_17 && b59_13 && b60_12 && b61_25 && b62_7 && b63_20 && b64_25 && b65_6 && b66_24 && b67_26 && b68_5 && b69_7 && b70_32 && b71_14 && b72_25 && b73_5 && b74_4 && b75_14 && b76_13 && b77_7 && b78_14 && b79_3) {
matched = true;
pattern_id = 2499;
}
if(b0_14 && b1_29 && b2_34 && b3_14 && b4_42 && b5_35 && b6_12 && b7_27 && b8_1 && b9_13 && b10_44 && b11_39 && b12_6 && b13_10 && b14_27 && b15_4 && b16_48 && b17_11 && b18_3 && b19_8 && b20_18 && b21_3 && b22_2 && b23_20 && b24_2 && b25_43 && b26_18 && b27_2 && b28_7 && b29_10 && b30_5 && b31_16 && b32_13 && b33_8 && b34_50 && b35_12 && b36_6 && b37_50 && b38_8 && b39_5 && b40_8 && b41_12 && b42_4 && b43_47 && b44_9 && b45_4) {
matched = true;
pattern_id = 2500;
}
if(b0_14 && b1_23 && b2_10 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_16 && b15_7) {
matched = true;
pattern_id = 2501;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_11 && b14_15 && b15_7) {
matched = true;
pattern_id = 2502;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_30 && b15_7) {
matched = true;
pattern_id = 2503;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_11 && b14_14 && b15_7) {
matched = true;
pattern_id = 2504;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_33 && b14_30 && b15_7) {
matched = true;
pattern_id = 2505;
}
if(b0_14 && b1_17 && b2_57 && b3_14 && b4_4 && b5_38 && b6_5) {
matched = true;
pattern_id = 2506;
}
if(b0_7 && b1_3 && b2_14 && b3_43 && b4_6 && b5_6 && b6_34 && b7_17 && b8_2 && b9_17 && b10_28 && b11_30 && b12_17 && b13_38 && b14_21 && b15_31) {
matched = true;
pattern_id = 2507;
}
if(b0_9 && b1_9 && b2_9 && b3_9 && b4_1 && b5_10 && b6_21 && b7_11 && b8_35 && b9_5 && b10_47 && b11_21 && b12_46 && b13_5 && b14_28 && b15_16 && b16_30 && b17_27 && b18_20 && b19_41 && b20_10 && b21_36 && b22_36 && b23_7 && b24_15 && b25_39 && b26_8 && b27_7 && b28_11 && b29_1) {
matched = true;
pattern_id = 2508;
}
if(b0_26 && b1_19 && b2_45 && b3_10 && b4_1 && b5_46 && b6_3 && b7_14 && b8_47 && b9_28 && b10_28 && b11_27 && b12_66 && b13_9 && b14_8 && b15_74 && b16_15 && b17_1 && b18_42 && b19_1 && b20_1 && b21_28 && b22_1) {
matched = true;
pattern_id = 2509;
}
if(b0_24 && b1_10 && b2_54 && b3_9 && b4_1 && b5_5 && b6_36 && b7_8 && b8_5 && b9_5 && b10_12 && b11_5 && b12_50 && b13_36 && b14_25 && b15_4 && b16_46 && b17_18 && b18_15 && b19_25 && b20_9 && b21_47 && b22_17 && b23_8 && b24_16 && b25_2 && b26_11) {
matched = true;
pattern_id = 2510;
}
if(b0_35 && b1_62 && b2_25 && b3_6 && b4_27 && b5_52 && b6_23 && b7_46 && b8_5 && b9_6 && b10_26 && b11_35 && b12_12 && b13_6 && b14_37 && b15_5) {
matched = true;
pattern_id = 2511;
}
if(b0_14 && b1_38 && b2_32 && b3_14 && b4_38 && b5_31 && b6_5 && b7_19 && b8_44 && b9_1 && b10_27 && b11_20 && b12_54 && b13_15 && b14_2 && b15_11 && b16_31 && b17_1 && b18_25 && b19_6 && b20_19 && b21_45 && b22_1 && b23_30 && b24_55 && b25_2 && b26_9 && b27_8 && b28_46 && b29_6 && b30_2) {
matched = true;
pattern_id = 2512;
}
if(b0_8 && b1_21 && b2_1 && b3_1) {
matched = true;
pattern_id = 2513;
}
if(b0_14 && b1_37 && b2_33 && b3_14 && b4_78 && b5_13 && b6_12 && b7_6 && b8_1 && b9_13 && b10_41 && b11_17 && b12_6 && b13_64 && b14_11 && b15_4 && b16_51 && b17_19 && b18_3 && b19_54 && b20_18 && b21_3 && b22_21 && b23_55 && b24_2 && b25_15 && b26_2 && b27_2 && b28_20 && b29_2 && b30_5 && b31_34 && b32_15 && b33_8 && b34_13 && b35_8 && b36_6 && b37_11 && b38_5 && b39_5 && b40_9 && b41_4 && b42_4 && b43_8 && b44_42 && b45_3 && b46_8 && b47_10 && b48_2 && b49_5 && b50_11 && b51_2 && b52_20 && b53_36 && b54_2 && b55_14 && b56_35 && b57_2 && b58_12 && b59_28 && b60_2 && b61_29 && b62_4 && b63_2 && b64_23 && b65_13 && b66_2 && b67_13 && b68_30 && b69_2 && b70_19 && b71_25 && b72_2) {
matched = true;
pattern_id = 2514;
}
if(b0_14 && b1_80 && b2_27 && b3_14 && b4_78 && b5_38 && b6_12 && b7_6 && b8_20 && b9_13 && b10_73 && b11_42 && b12_6 && b13_64 && b14_11 && b15_4 && b16_14 && b17_31 && b18_3 && b19_54 && b20_54 && b21_3 && b22_21 && b23_2 && b24_2 && b25_50 && b26_21 && b27_2 && b28_20 && b29_49 && b30_5 && b31_13 && b32_10 && b33_8 && b34_13 && b35_7 && b36_6 && b37_11 && b38_5 && b39_5 && b40_9 && b41_4 && b42_4 && b43_8 && b44_42 && b45_3 && b46_8 && b47_10 && b48_2 && b49_5 && b50_11 && b51_2 && b52_20 && b53_36 && b54_2 && b55_14 && b56_35 && b57_2 && b58_12 && b59_28 && b60_2 && b61_29 && b62_4 && b63_2 && b64_23 && b65_13 && b66_2 && b67_13 && b68_31 && b69_2 && b70_19 && b71_22 && b72_2) {
matched = true;
pattern_id = 2515;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_4 && b16_27 && b17_1 && b18_8 && b19_51 && b20_27 && b21_20 && b22_19 && b23_31 && b24_23 && b25_63 && b26_41 && b27_18 && b28_28 && b29_53 && b30_36 && b31_29 && b32_23 && b33_34 && b34_3 && b35_7 && b36_5 && b37_3 && b38_5 && b39_20 && b40_2 && b41_4 && b42_13 && b43_2 && b44_3 && b45_35 && b46_2) {
matched = true;
pattern_id = 2516;
}
if(b0_35 && b1_4 && b2_25 && b3_2 && b4_2 && b5_30 && b6_38 && b7_31 && b8_35 && b9_5 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 2517;
}
if(b0_35 && b1_4 && b2_25 && b3_2 && b4_2 && b5_30 && b6_38 && b7_31 && b8_35 && b9_5 && b10_48 && b11_35 && b12_50 && b13_6 && b14_40) {
matched = true;
pattern_id = 2518;
}
if(b0_32 && b1_13 && b2_7 && b3_65 && b4_52 && b5_58 && b6_45 && b7_44 && b8_22 && b9_42 && b10_27) {
matched = true;
pattern_id = 2519;
}
if(b0_35 && b1_13 && b2_20 && b3_18 && b4_6 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52) {
matched = true;
pattern_id = 2520;
}
if(b0_32 && b1_47 && b2_14 && b3_43) {
matched = true;
pattern_id = 2521;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_47 && b5_31 && b6_5 && b7_8 && b8_35 && b9_53 && b10_5 && b11_27) {
matched = true;
pattern_id = 2522;
}
if(b0_35 && b1_21 && b2_6 && b3_16 && b4_35 && b5_26 && b6_36 && b7_8 && b8_11 && b9_43 && b10_13 && b11_57 && b12_32 && b13_3 && b14_36 && b15_54) {
matched = true;
pattern_id = 2523;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_27 && b5_20 && b6_36 && b7_54 && b8_12 && b9_40 && b10_17 && b11_5 && b12_12 && b13_6 && b14_37 && b15_5 && b16_47 && b17_47 && b18_60) {
matched = true;
pattern_id = 2524;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18 && b9_40 && b10_29) {
matched = true;
pattern_id = 2525;
}
if(b0_36 && b1_15 && b2_28) {
matched = true;
pattern_id = 2526;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_12 && b6_41) {
matched = true;
pattern_id = 2527;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_72 && b11_2 && b12_8 && b13_74 && b14_59 && b15_48 && b16_54 && b17_13 && b18_15 && b19_34) {
matched = true;
pattern_id = 2528;
}
if(b0_35 && b1_21 && b2_21 && b3_21 && b4_12 && b5_2 && b6_2 && b7_31 && b8_2 && b9_43) {
matched = true;
pattern_id = 2529;
}
if(b0_35 && b1_16 && b2_43 && b3_43 && b4_16 && b5_10 && b6_18 && b7_24 && b8_23 && b9_1 && b10_47 && b11_8 && b12_58 && b13_2 && b14_34 && b15_75 && b16_16 && b17_33 && b18_48 && b19_39 && b20_26) {
matched = true;
pattern_id = 2530;
}
if(b0_19 && b1_6 && b2_8 && b3_8 && b4_43) {
matched = true;
pattern_id = 2531;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_35) {
matched = true;
pattern_id = 2532;
}
if(b0_3 && b1_20 && b2_31 && b3_71 && b4_5 && b5_50 && b6_50 && b7_13 && b8_37) {
matched = true;
pattern_id = 2533;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_4 && b16_27 && b17_1 && b18_8 && b19_34 && b20_2 && b21_44 && b22_3 && b23_39 && b24_27 && b25_23 && b26_29 && b27_18 && b28_23) {
matched = true;
pattern_id = 2534;
}
if(b0_14 && b1_23 && b2_32 && b3_14 && b4_42 && b5_39 && b6_12 && b7_26 && b8_27 && b9_13 && b10_21 && b11_1 && b12_6 && b13_68 && b14_30 && b15_4 && b16_17 && b17_9 && b18_3 && b19_13 && b20_12 && b21_3 && b22_49 && b23_14 && b24_9) {
matched = true;
pattern_id = 2535;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_26 && b5_52 && b6_19 && b7_47 && b8_18) {
matched = true;
pattern_id = 2536;
}
if(b0_35 && b1_56 && b2_8 && b3_11 && b4_17 && b5_16 && b6_55 && b7_55 && b8_14 && b9_42 && b10_5 && b11_54 && b12_32) {
matched = true;
pattern_id = 2537;
}
if(b0_32 && b1_13 && b2_15 && b3_50 && b4_55 && b5_3 && b6_55 && b7_31 && b8_16 && b9_5 && b10_29 && b11_74 && b12_17 && b13_60 && b14_50 && b15_3 && b16_55 && b17_29 && b18_44 && b19_63 && b20_2 && b21_37 && b22_28 && b23_31 && b24_37 && b25_25 && b26_25 && b27_33) {
matched = true;
pattern_id = 2538;
}
if(b0_24 && b1_56 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_3 && b8_25 && b9_8 && b10_1 && b11_42 && b12_2 && b13_26 && b14_19 && b15_54 && b16_40 && b17_37 && b18_56 && b19_49 && b20_16 && b21_46 && b22_47 && b23_62 && b24_59 && b25_10 && b26_12 && b27_13 && b28_24 && b29_2 && b30_25 && b31_57 && b32_58 && b33_55 && b34_43 && b35_48 && b36_7 && b37_6 && b38_24 && b39_19 && b40_49 && b41_49 && b42_38 && b43_28) {
matched = true;
pattern_id = 2539;
}
if(b0_26 && b1_2 && b2_8 && b3_18 && b4_31 && b5_10 && b6_10 && b7_29 && b8_2 && b9_13 && b10_53 && b11_3 && b12_18 && b13_36 && b14_35 && b15_18 && b16_29 && b17_47 && b18_3 && b19_61 && b20_41 && b21_3) {
matched = true;
pattern_id = 2540;
}
if(b0_35 && b1_21 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_5 && b9_14 && b10_48 && b11_35 && b12_50 && b13_6 && b14_40) {
matched = true;
pattern_id = 2541;
}
if(b0_35 && b1_8 && b2_50 && b3_8 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64) {
matched = true;
pattern_id = 2542;
}
if(b0_35 && b1_21 && b2_21 && b3_49 && b4_44 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52) {
matched = true;
pattern_id = 2543;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3) {
matched = true;
pattern_id = 2544;
}
if(b0_16 && b1_11 && b2_16 && b3_11 && b4_7 && b5_42 && b6_5 && b7_6 && b8_4 && b9_13 && b10_3 && b11_1 && b12_10 && b13_49 && b14_49 && b15_69 && b16_15 && b17_1 && b18_42 && b19_1 && b20_1 && b21_28 && b22_1 && b23_63 && b24_38 && b25_54 && b26_61 && b27_60 && b28_62 && b29_1 && b30_10 && b31_5 && b32_1 && b33_27 && b34_1 && b35_1) {
matched = true;
pattern_id = 2545;
}
if(b0_14 && b1_37 && b2_34 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_16 && b15_7) {
matched = true;
pattern_id = 2546;
}
if(b0_44 && b1_49 && b2_13 && b3_63 && b4_39 && b5_38 && b6_62 && b7_34) {
matched = true;
pattern_id = 2547;
}
if(b0_44 && b1_15 && b2_31 && b3_37 && b4_4 && b5_19 && b6_41 && b7_4 && b8_45 && b9_29 && b10_10 && b11_22) {
matched = true;
pattern_id = 2548;
}
if(b0_44 && b1_15 && b2_31 && b3_37 && b4_4 && b5_19) {
matched = true;
pattern_id = 2549;
}
if(b0_81 && b1_59 && b2_24 && b3_27 && b4_27 && b5_6 && b6_56 && b7_55 && b8_14 && b9_14 && b10_9 && b11_26 && b12_26 && b13_53 && b14_20 && b15_16 && b16_32 && b17_34 && b18_37 && b19_2) {
matched = true;
pattern_id = 2550;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_47 && b5_31 && b6_5 && b7_8 && b8_35 && b9_4 && b10_10 && b11_9 && b12_6 && b13_11 && b14_15 && b15_7) {
matched = true;
pattern_id = 2551;
}
if(b0_5 && b1_57 && b2_5 && b3_18 && b4_2 && b5_6 && b6_18 && b7_35 && b8_34 && b9_41) {
matched = true;
pattern_id = 2552;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_32 && b15_4 && b16_17 && b17_62 && b18_3 && b19_27 && b20_6 && b21_3 && b22_63 && b23_11 && b24_2 && b25_5 && b26_13 && b27_2 && b28_7 && b29_14 && b30_5 && b31_3 && b32_12 && b33_8 && b34_1 && b35_46 && b36_3) {
matched = true;
pattern_id = 2553;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_12 && b14_32 && b15_4 && b16_48 && b17_19 && b18_3 && b19_5 && b20_4 && b21_3 && b22_6 && b23_15 && b24_2 && b25_5 && b26_55 && b27_2 && b28_60 && b29_5 && b30_5 && b31_56 && b32_13 && b33_8 && b34_11 && b35_38 && b36_3) {
matched = true;
pattern_id = 2554;
}
if(b0_14 && b1_23 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 2555;
}
if(b0_14 && b1_18 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_17 && b14_14 && b15_7) {
matched = true;
pattern_id = 2556;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_11 && b15_4 && b16_17 && b17_16 && b18_3 && b19_3 && b20_29 && b21_3 && b22_8 && b23_5 && b24_2 && b25_7 && b26_12 && b27_2 && b28_7 && b29_58 && b30_5 && b31_5 && b32_10 && b33_8 && b34_52 && b35_47 && b36_3) {
matched = true;
pattern_id = 2557;
}
if(b0_14 && b1_18 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_23 && b15_4 && b16_21 && b17_19 && b18_3 && b19_3 && b20_56 && b21_3 && b22_56 && b23_55 && b24_2 && b25_61 && b26_17 && b27_2 && b28_17 && b29_2 && b30_5 && b31_5 && b32_18 && b33_8 && b34_1 && b35_8 && b36_6 && b37_24 && b38_11 && b39_5 && b40_38 && b41_9 && b42_4 && b43_46 && b44_7 && b45_3 && b46_3 && b47_4 && b48_2 && b49_34 && b50_19 && b51_2 && b52_33 && b53_8 && b54_2 && b55_26 && b56_36 && b57_2 && b58_33 && b59_31 && b60_2 && b61_28 && b62_34 && b63_2 && b64_28 && b65_31 && b66_2 && b67_29 && b68_32 && b69_2 && b70_26 && b71_17 && b72_5 && b73_26 && b74_29 && b75_5 && b76_4 && b77_25 && b78_4 && b79_4 && b80_24 && b81_3 && b82_5 && b83_25 && b84_4) {
matched = true;
pattern_id = 2558;
}
if(b0_14 && b1_37 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_23 && b15_4 && b16_21 && b17_19 && b18_3 && b19_3 && b20_56 && b21_3 && b22_56 && b23_55 && b24_2 && b25_61 && b26_17 && b27_2 && b28_17 && b29_2 && b30_5 && b31_5 && b32_18 && b33_8 && b34_1 && b35_8 && b36_6 && b37_24 && b38_11 && b39_5 && b40_38 && b41_9 && b42_4 && b43_46 && b44_7 && b45_3 && b46_3 && b47_4 && b48_2 && b49_34 && b50_19 && b51_2 && b52_33 && b53_8 && b54_2 && b55_26 && b56_36 && b57_2 && b58_33 && b59_31 && b60_2 && b61_28 && b62_34 && b63_2 && b64_28 && b65_31 && b66_2 && b67_29 && b68_32 && b69_2 && b70_26 && b71_17 && b72_5 && b73_26 && b74_29 && b75_5 && b76_4 && b77_25 && b78_4 && b79_4 && b80_24 && b81_3 && b82_5 && b83_25 && b84_4) {
matched = true;
pattern_id = 2559;
}
if(b0_14 && b1_23 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_23 && b15_4 && b16_21 && b17_19 && b18_3 && b19_3 && b20_56 && b21_3 && b22_56 && b23_55 && b24_2 && b25_61 && b26_17 && b27_2 && b28_17 && b29_2 && b30_5 && b31_5 && b32_18 && b33_8 && b34_1 && b35_8 && b36_6 && b37_24 && b38_11 && b39_5 && b40_38 && b41_9 && b42_4 && b43_46 && b44_7 && b45_3 && b46_3 && b47_4 && b48_2 && b49_34 && b50_19 && b51_2 && b52_33 && b53_8 && b54_2 && b55_26 && b56_36 && b57_2 && b58_33 && b59_31 && b60_2 && b61_28 && b62_34 && b63_2 && b64_28 && b65_31 && b66_2 && b67_29 && b68_32 && b69_2 && b70_26 && b71_17 && b72_5 && b73_26 && b74_29 && b75_5 && b76_4 && b77_25 && b78_4 && b79_4 && b80_24 && b81_3 && b82_5 && b83_25 && b84_4) {
matched = true;
pattern_id = 2560;
}
if(b0_14 && b1_37 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_7 && b14_16 && b15_4 && b16_7 && b17_7 && b18_3 && b19_7 && b20_7 && b21_3 && b22_56 && b23_23 && b24_9) {
matched = true;
pattern_id = 2561;
}
if(b0_14 && b1_18 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_7 && b15_4 && b16_6 && b17_5 && b18_3 && b19_16 && b20_15 && b21_3 && b22_6 && b23_20 && b24_9) {
matched = true;
pattern_id = 2562;
}
if(b0_14 && b1_37 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_31 && b14_7 && b15_4 && b16_6 && b17_5 && b18_3 && b19_16 && b20_15 && b21_3 && b22_6 && b23_20 && b24_9) {
matched = true;
pattern_id = 2563;
}
if(b0_12 && b1_6 && b2_3 && b3_26 && b4_14 && b5_7 && b6_18 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_8 && b13_26) {
matched = true;
pattern_id = 2564;
}
if(b0_39 && b1_8 && b2_21 && b3_8 && b4_12 && b5_20 && b6_11 && b7_63 && b8_29 && b9_41 && b10_5 && b11_3 && b12_10 && b13_11 && b14_10 && b15_4 && b16_27 && b17_1 && b18_8 && b19_22 && b20_33 && b21_14 && b22_41 && b23_18 && b24_23) {
matched = true;
pattern_id = 2565;
}
if(b0_14 && b1_15 && b2_5 && b3_28 && b4_10 && b5_8 && b6_3 && b7_51 && b8_46 && b9_4 && b10_41 && b11_22 && b12_10) {
matched = true;
pattern_id = 2566;
}
if(b0_35 && b1_52 && b2_14 && b3_8 && b4_12 && b5_30 && b6_35 && b7_39 && b8_42 && b9_12 && b10_17 && b11_5 && b12_28 && b13_18 && b14_20 && b15_41 && b16_22 && b17_29 && b18_22 && b19_41 && b20_13 && b21_35 && b22_31 && b23_24 && b24_3 && b25_19 && b26_3 && b27_33 && b28_9 && b29_10 && b30_22 && b31_20 && b32_27 && b33_31) {
matched = true;
pattern_id = 2567;
}
if(b0_57 && b1_55 && b2_52 && b3_11 && b4_17 && b5_26 && b6_35 && b7_14 && b8_7 && b9_4 && b10_44 && b11_10 && b12_10 && b13_31 && b14_34 && b15_71 && b16_32 && b17_9 && b18_18) {
matched = true;
pattern_id = 2568;
}
if(b0_24 && b1_56 && b2_42 && b3_60 && b4_12 && b5_51 && b6_11 && b7_78 && b8_3 && b9_63 && b10_28 && b11_61 && b12_24 && b13_10 && b14_57 && b15_3 && b16_1 && b17_61 && b18_4 && b19_45 && b20_37 && b21_21 && b22_41 && b23_44 && b24_3 && b25_27 && b26_8 && b27_8 && b28_46 && b29_6 && b30_2) {
matched = true;
pattern_id = 2569;
}
if(b0_35 && b1_58 && b2_43 && b3_8 && b4_18 && b5_30 && b6_35 && b7_45 && b8_36 && b9_6 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 2570;
}
if(b0_12 && b1_47 && b2_20 && b3_7 && b4_6 && b5_73) {
matched = true;
pattern_id = 2571;
}
if(b0_35 && b1_62 && b2_25 && b3_6 && b4_27 && b5_52 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_28 && b12_39 && b13_4 && b14_19) {
matched = true;
pattern_id = 2572;
}
if(b0_14 && b1_15 && b2_34 && b3_14 && b4_30 && b5_1 && b6_12 && b7_4 && b8_23 && b9_13 && b10_10 && b11_1 && b12_10) {
matched = true;
pattern_id = 2573;
}
if(b0_35 && b1_32 && b2_27) {
matched = true;
pattern_id = 2574;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_52 && b16_33 && b17_69 && b18_14 && b19_10 && b20_33 && b21_50 && b22_64 && b23_35 && b24_60 && b25_43 && b26_55 && b27_39 && b28_19 && b29_51 && b30_28 && b31_36 && b32_59 && b33_48 && b34_53 && b35_49 && b36_28 && b37_1 && b38_50 && b39_16 && b40_50 && b41_24 && b42_28 && b43_48 && b44_44 && b45_14 && b46_40) {
matched = true;
pattern_id = 2575;
}
if(b0_57 && b1_2 && b2_8 && b3_17 && b4_27 && b5_20 && b6_7 && b7_34) {
matched = true;
pattern_id = 2576;
}
if(b0_35 && b1_21 && b2_16 && b3_24 && b4_44 && b5_29 && b6_34 && b7_7 && b8_46 && b9_11 && b10_43 && b11_34) {
matched = true;
pattern_id = 2577;
}
if(b0_35 && b1_2 && b2_41 && b3_21 && b4_26 && b5_52 && b6_19 && b7_47) {
matched = true;
pattern_id = 2578;
}
if(b0_35 && b1_32 && b2_14 && b3_40 && b4_6 && b5_16 && b6_18 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_38 && b13_22 && b14_47 && b15_30 && b16_52) {
matched = true;
pattern_id = 2579;
}
if(b0_35 && b1_63 && b2_25 && b3_8 && b4_2 && b5_46 && b6_3 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_29 && b13_20) {
matched = true;
pattern_id = 2580;
}
if(b0_68 && b1_9 && b2_50 && b3_45 && b4_39 && b5_6 && b6_20 && b7_14 && b8_58 && b9_12 && b10_17 && b11_23) {
matched = true;
pattern_id = 2581;
}
if(b0_24 && b1_3 && b2_23 && b3_27 && b4_12 && b5_8 && b6_12 && b7_77 && b8_8 && b9_5 && b10_12 && b11_40 && b12_6 && b13_69 && b14_36 && b15_15 && b16_29 && b17_10 && b18_29 && b19_9 && b20_66 && b21_4 && b22_2 && b23_1 && b24_2 && b25_2 && b26_18 && b27_8) {
matched = true;
pattern_id = 2582;
}
if(b0_14 && b1_38 && b2_32 && b3_28 && b4_19 && b5_6 && b6_5 && b7_24 && b8_32 && b9_4 && b10_13 && b11_20 && b12_54 && b13_15 && b14_2 && b15_39 && b16_31 && b17_8 && b18_27 && b19_27 && b20_9 && b21_40 && b22_1 && b23_15 && b24_12 && b25_6) {
matched = true;
pattern_id = 2583;
}
if(b0_22 && b1_3 && b2_21 && b3_21 && b4_32 && b5_33 && b6_9 && b7_3 && b8_51 && b9_4 && b10_44 && b11_10 && b12_6 && b13_68 && b14_15 && b15_7 && b16_17 && b17_27 && b18_11 && b19_34 && b20_9 && b21_61 && b22_5 && b23_7 && b24_22 && b25_19 && b26_19 && b27_4 && b28_6 && b29_58 && b30_51 && b31_4) {
matched = true;
pattern_id = 2584;
}
if(b0_35 && b1_35 && b2_25 && b3_18 && b4_2 && b5_11 && b6_38 && b7_10 && b8_48 && b9_43 && b10_50 && b11_35) {
matched = true;
pattern_id = 2585;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_50 && b18_10 && b19_12 && b20_32 && b21_10 && b22_40 && b23_32 && b24_1 && b25_45 && b26_8 && b27_20 && b28_33 && b29_56 && b30_5) {
matched = true;
pattern_id = 2586;
}
if(b0_30 && b1_3 && b2_17 && b3_35 && b4_15 && b5_10 && b6_39 && b7_29 && b8_11 && b9_11 && b10_26 && b11_20 && b12_2 && b13_12 && b14_3 && b15_1 && b16_21 && b17_8) {
matched = true;
pattern_id = 2587;
}
if(b0_22 && b1_21 && b2_24 && b3_11 && b4_3 && b5_51 && b6_7 && b7_56 && b8_9 && b9_5 && b10_34 && b11_30 && b12_26 && b13_53 && b14_41 && b15_3 && b16_3 && b17_8 && b18_1 && b19_50 && b20_8 && b21_1 && b22_17 && b23_7) {
matched = true;
pattern_id = 2588;
}
if(b0_22 && b1_11 && b2_23 && b3_11 && b4_12 && b5_20 && b6_24 && b7_2 && b8_14 && b9_10 && b10_46 && b11_37 && b12_3 && b13_27 && b14_25 && b15_7 && b16_4 && b17_12 && b18_3 && b19_3 && b20_22 && b21_4) {
matched = true;
pattern_id = 2589;
}
if(b0_22 && b1_21 && b2_24 && b3_11 && b4_3 && b5_51 && b6_7 && b7_56 && b8_2 && b9_17 && b10_4 && b11_3 && b12_5 && b13_22 && b14_5 && b15_44 && b16_30 && b17_37 && b18_8 && b19_3 && b20_56 && b21_3 && b22_2 && b23_10 && b24_9) {
matched = true;
pattern_id = 2590;
}
if(b0_22 && b1_11 && b2_23 && b3_11 && b4_12 && b5_20 && b6_54 && b7_9 && b8_6 && b9_19 && b10_35 && b11_28 && b12_10 && b13_2 && b14_14 && b15_4 && b16_4 && b17_24 && b18_8) {
matched = true;
pattern_id = 2591;
}
if(b0_23 && b1_21 && b2_24 && b3_11 && b4_59 && b5_27 && b6_8 && b7_45 && b8_42 && b9_12 && b10_17 && b11_23 && b12_49) {
matched = true;
pattern_id = 2592;
}
if(b0_35 && b1_73 && b2_50 && b3_16 && b4_54 && b5_55 && b6_10 && b7_44) {
matched = true;
pattern_id = 2593;
}
if(b0_14 && b1_38 && b2_34 && b3_14 && b4_36 && b5_44 && b6_5 && b7_11 && b8_47 && b9_4 && b10_3 && b11_42 && b12_6 && b13_11 && b14_10 && b15_7) {
matched = true;
pattern_id = 2594;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_28 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2595;
}
if(b0_32 && b1_11 && b2_23 && b3_11 && b4_18 && b5_42 && b6_7 && b7_17 && b8_34 && b9_5 && b10_35 && b11_3 && b12_3 && b13_38 && b14_43 && b15_39) {
matched = true;
pattern_id = 2596;
}
if(b0_32 && b1_13 && b2_43 && b3_7 && b4_2 && b5_6 && b6_15 && b7_45 && b8_11 && b9_28 && b10_28 && b11_40 && b12_38 && b13_36 && b14_28 && b15_32) {
matched = true;
pattern_id = 2597;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_44 && b6_12 && b7_4 && b8_1 && b9_4) {
matched = true;
pattern_id = 2598;
}
if(b0_14 && b1_23 && b2_9 && b3_14 && b4_4 && b5_35 && b6_12 && b7_26 && b8_27 && b9_13 && b10_10 && b11_8 && b12_6 && b13_31 && b14_32 && b15_7) {
matched = true;
pattern_id = 2599;
}
if(b0_35 && b1_2 && b2_41 && b3_34 && b4_27 && b5_20 && b6_2 && b7_47 && b8_6 && b9_43 && b10_64 && b11_59 && b12_19) {
matched = true;
pattern_id = 2600;
}
if(b0_35 && b1_11 && b2_15 && b3_11 && b4_14 && b5_57 && b6_39 && b7_47 && b8_47 && b9_27 && b10_13 && b11_3) {
matched = true;
pattern_id = 2601;
}
if(b0_33 && b1_21 && b2_6 && b3_11 && b4_32 && b5_38 && b6_15 && b7_1 && b8_27 && b9_1 && b10_2) {
matched = true;
pattern_id = 2602;
}
if(b0_3 && b1_77 && b2_58 && b3_38 && b4_28 && b5_76 && b6_5 && b7_6 && b8_4 && b9_13 && b10_3 && b11_1 && b12_10) {
matched = true;
pattern_id = 2603;
}
if(b0_35 && b1_59 && b2_25 && b3_48 && b4_35 && b5_47 && b6_3 && b7_14 && b8_58 && b9_34 && b10_17 && b11_44 && b12_17 && b13_22 && b14_20 && b15_15 && b16_55 && b17_37 && b18_10 && b19_40 && b20_30 && b21_18 && b22_40 && b23_3 && b24_27) {
matched = true;
pattern_id = 2604;
}
if(b0_14 && b1_23 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_33 && b15_7) {
matched = true;
pattern_id = 2605;
}
if(b0_14 && b1_37 && b2_38 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_16 && b15_7) {
matched = true;
pattern_id = 2606;
}
if(b0_14 && b1_15 && b2_27 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_8 && b14_30 && b15_7) {
matched = true;
pattern_id = 2607;
}
if(b0_11 && b1_59 && b2_16 && b3_18 && b4_21 && b5_43 && b6_55 && b7_31 && b8_35 && b9_49 && b10_56 && b11_3 && b12_7 && b13_16 && b14_41 && b15_14 && b16_24 && b17_39 && b18_22 && b19_35 && b20_33 && b21_29 && b22_52 && b23_20 && b24_19 && b25_19 && b26_14 && b27_11 && b28_28 && b29_2 && b30_29 && b31_50 && b32_2 && b33_10 && b34_13 && b35_12 && b36_45 && b37_28 && b38_17 && b39_47 && b40_15 && b41_43 && b42_31 && b43_4 && b44_19 && b45_41 && b46_43 && b47_11 && b48_32 && b49_29 && b50_16 && b51_31 && b52_6 && b53_14 && b54_33 && b55_33 && b56_31 && b57_3 && b58_34 && b59_18 && b60_30 && b61_24 && b62_32 && b63_10) {
matched = true;
pattern_id = 2608;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_70 && b18_29 && b19_9 && b20_17 && b21_14 && b22_41 && b23_18 && b24_21 && b25_30 && b26_27) {
matched = true;
pattern_id = 2609;
}
if(b0_5 && b1_3 && b2_42 && b3_42 && b4_27 && b5_42 && b6_60 && b7_14 && b8_8 && b9_28 && b10_18 && b11_6 && b12_37 && b13_22 && b14_51 && b15_33 && b16_3 && b17_51) {
matched = true;
pattern_id = 2610;
}
if(b0_35 && b1_62 && b2_43 && b3_8 && b4_12 && b5_40 && b6_46 && b7_2 && b8_40 && b9_52) {
matched = true;
pattern_id = 2611;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_38 && b11_37 && b12_12 && b13_30 && b14_41 && b15_35) {
matched = true;
pattern_id = 2612;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_70 && b5_26 && b6_3 && b7_45 && b8_15) {
matched = true;
pattern_id = 2613;
}
if(b0_24 && b1_3 && b2_3 && b3_51 && b4_8 && b5_10 && b6_3 && b7_30 && b8_11 && b9_5 && b10_2 && b11_17 && b12_29 && b13_1 && b14_27 && b15_1 && b16_15 && b17_25 && b18_4 && b19_42 && b20_27 && b21_14 && b22_40 && b23_25 && b24_22 && b25_4 && b26_17 && b27_32 && b28_63 && b29_1 && b30_10 && b31_44 && b32_3) {
matched = true;
pattern_id = 2614;
}
if(b0_14 && b1_31 && b2_9 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_62 && b9_1 && b10_1 && b11_1 && b12_2 && b13_26) {
matched = true;
pattern_id = 2615;
}
if(b0_35 && b1_9 && b2_25 && b3_20 && b4_11 && b5_6 && b6_10 && b7_39 && b8_42 && b9_17 && b10_48 && b11_35 && b12_50 && b13_6) {
matched = true;
pattern_id = 2616;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_57 && b16_24 && b17_4 && b18_22 && b19_31 && b20_30 && b21_21 && b22_50 && b23_28 && b24_2 && b25_61 && b26_52 && b27_52 && b28_64) {
matched = true;
pattern_id = 2617;
}
if(b0_30 && b1_3 && b2_17 && b3_35 && b4_2 && b5_25 && b6_8 && b7_52 && b8_5 && b9_4 && b10_10 && b11_9 && b12_6 && b13_2 && b14_10 && b15_7) {
matched = true;
pattern_id = 2618;
}
if(b0_35 && b1_7 && b2_15 && b3_20 && b4_44 && b5_27 && b6_7 && b7_16 && b8_5 && b9_10 && b10_9 && b11_35 && b12_12 && b13_18 && b14_20 && b15_25) {
matched = true;
pattern_id = 2619;
}
if(b0_35 && b1_43 && b2_21 && b3_18 && b4_6 && b5_11 && b6_20 && b7_54 && b8_15 && b9_60 && b10_12 && b11_5 && b12_4 && b13_43 && b14_18 && b15_15 && b16_56 && b17_44 && b18_64 && b19_35 && b20_17 && b21_20 && b22_37 && b23_32 && b24_24 && b25_18 && b26_62) {
matched = true;
pattern_id = 2620;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_10 && b36_3) {
matched = true;
pattern_id = 2621;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_12 && b36_3) {
matched = true;
pattern_id = 2622;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_7 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_38 && b36_3) {
matched = true;
pattern_id = 2623;
}
if(b0_14 && b1_15 && b2_1 && b3_14 && b4_4 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_42 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_3 && b19_3 && b20_1 && b21_3 && b22_2 && b23_12 && b24_2 && b25_2 && b26_2 && b27_2 && b28_2 && b29_2 && b30_5 && b31_11 && b32_7 && b33_8 && b34_1 && b35_3 && b36_3) {
matched = true;
pattern_id = 2624;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_6 && b8_10 && b9_1 && b10_10 && b11_2 && b12_2 && b13_2 && b14_3 && b15_1 && b16_4 && b17_2 && b18_1 && b19_3 && b20_9) {
matched = true;
pattern_id = 2625;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_55 && b16_5 && b17_51 && b18_55 && b19_50 && b20_3 && b21_48 && b22_20 && b23_18 && b24_1 && b25_6 && b26_2 && b27_49 && b28_8 && b29_2 && b30_31 && b31_4) {
matched = true;
pattern_id = 2626;
}
if(b0_35 && b1_59 && b2_23 && b3_6 && b4_44 && b5_42 && b6_23 && b7_52 && b8_25) {
matched = true;
pattern_id = 2627;
}
if(b0_56 && b1_8 && b2_8 && b3_8 && b4_71 && b5_4 && b6_18 && b7_35 && b8_36 && b9_17 && b10_17 && b11_42 && b12_44 && b13_4 && b14_41 && b15_41 && b16_51 && b17_19 && b18_38 && b19_39 && b20_51 && b21_38 && b22_37) {
matched = true;
pattern_id = 2628;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_47 && b16_24 && b17_49 && b18_66 && b19_34 && b20_28 && b21_42 && b22_5 && b23_25 && b24_4 && b25_33 && b26_32 && b27_19) {
matched = true;
pattern_id = 2629;
}
if(b0_11 && b1_8 && b2_6 && b3_34 && b4_18 && b5_20 && b6_34 && b7_64 && b8_47 && b9_29) {
matched = true;
pattern_id = 2630;
}
if(b0_14 && b1_15 && b2_57 && b3_28 && b4_50 && b5_52 && b6_34 && b7_31 && b8_35 && b9_5 && b10_2 && b11_1 && b12_9 && b13_26 && b14_39 && b15_35 && b16_22 && b17_10 && b18_19 && b19_2 && b20_35 && b21_42 && b22_18 && b23_32 && b24_32 && b25_33 && b26_34 && b27_8 && b28_2 && b29_20 && b30_2 && b31_40 && b32_24 && b33_19 && b34_3 && b35_7 && b36_4 && b37_10) {
matched = true;
pattern_id = 2631;
}
if(b0_14 && b1_38 && b2_5 && b3_14 && b4_25 && b5_41 && b6_12 && b7_49 && b8_24 && b9_13 && b10_14 && b11_10 && b12_10) {
matched = true;
pattern_id = 2632;
}
if(b0_14 && b1_15 && b2_38 && b3_14 && b4_40 && b5_1 && b6_12 && b7_4 && b8_1 && b9_13 && b10_10 && b11_1 && b12_6 && b13_2 && b14_1 && b15_4 && b16_4 && b17_1 && b18_8) {
matched = true;
pattern_id = 2633;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_30 && b9_57 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2634;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_4 && b9_1 && b10_2) {
matched = true;
pattern_id = 2635;
}
if(b0_7 && b1_16 && b2_43 && b3_16) {
matched = true;
pattern_id = 2636;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_30 && b9_66 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2637;
}
if(b0_48 && b1_51 && b2_57) {
matched = true;
pattern_id = 2638;
}
if(b0_67 && b1_16 && b2_23 && b3_6 && b4_17) {
matched = true;
pattern_id = 2639;
}
if(b0_44 && b1_39 && b2_25 && b3_27 && b4_18 && b5_25 && b6_74 && b7_46 && b8_5 && b9_10 && b10_46 && b11_26 && b12_17 && b13_53 && b14_24 && b15_22 && b16_37 && b17_30 && b18_23 && b19_31 && b20_28 && b21_29 && b22_22 && b23_49 && b24_37 && b25_18 && b26_30 && b27_47 && b28_65 && b29_62 && b30_15 && b31_32 && b32_40 && b33_16 && b34_17 && b35_20 && b36_9 && b37_28 && b38_22 && b39_29 && b40_15 && b41_33 && b42_42 && b43_49 && b44_45 && b45_42 && b46_44 && b47_27 && b48_15 && b49_40) {
matched = true;
pattern_id = 2640;
}
if(b0_39 && b1_8 && b2_21 && b3_43 && b4_12 && b5_51 && b6_11 && b7_15 && b8_40 && b9_25 && b10_5 && b11_14 && b12_38 && b13_19 && b14_19) {
matched = true;
pattern_id = 2641;
}
if(b0_35 && b1_48 && b2_11 && b3_51 && b4_70 && b5_11 && b6_23 && b7_80 && b8_2 && b9_52) {
matched = true;
pattern_id = 2642;
}
if(b0_35 && b1_52 && b2_25 && b3_26 && b4_17 && b5_51 && b6_19 && b7_62 && b8_69 && b9_29 && b10_37 && b11_6 && b12_26 && b13_53 && b14_18 && b15_3 && b16_69 && b17_33 && b18_15 && b19_33 && b20_67 && b21_49 && b22_22 && b23_45 && b24_21 && b25_64 && b26_28 && b27_36 && b28_34 && b29_21 && b30_57) {
matched = true;
pattern_id = 2643;
}
if(b0_35 && b1_35 && b2_6 && b3_29 && b4_70 && b5_52 && b6_38) {
matched = true;
pattern_id = 2644;
}
if(b0_35 && b1_24 && b2_20 && b3_16 && b4_44 && b5_20 && b6_2 && b7_31 && b8_2 && b9_43 && b10_47 && b11_14 && b12_42 && b13_19 && b14_19) {
matched = true;
pattern_id = 2645;
}
if(b0_5 && b1_2 && b2_8 && b3_17 && b4_27 && b5_20 && b6_38 && b7_5 && b8_14 && b9_11) {
matched = true;
pattern_id = 2646;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_51 && b16_44 && b17_37 && b18_19 && b19_15 && b20_17 && b21_21 && b22_48 && b23_24 && b24_3 && b25_27 && b26_4 && b27_6 && b28_45 && b29_2) {
matched = true;
pattern_id = 2647;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_4 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2648;
}
if(b0_14 && b1_31 && b2_36 && b3_28 && b4_54 && b5_68 && b6_30 && b7_3 && b8_4 && b9_16 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_1) {
matched = true;
pattern_id = 2649;
}
if(b0_41 && b1_1 && b2_9 && b3_31 && b4_1 && b5_1 && b6_16 && b7_1 && b8_1 && b9_1 && b10_1 && b11_1 && b12_2 && b13_1 && b14_1 && b15_1 && b16_1 && b17_1 && b18_1 && b19_1 && b20_1 && b21_1 && b22_13 && b23_2 && b24_15 && b25_13 && b26_2 && b27_7 && b28_8 && b29_2 && b30_9 && b31_10 && b32_10 && b33_56 && b34_3) {
matched = true;
pattern_id = 2650;
}
if(b0_14 && b1_17 && b2_38 && b3_14 && b4_30 && b5_33 && b6_12 && b7_17 && b8_19 && b9_13 && b10_45 && b11_19 && b12_6 && b13_10 && b14_9 && b15_4 && b16_20 && b17_15 && b18_8) {
matched = true;
pattern_id = 2651;
}
if(b0_14 && b1_17 && b2_34 && b3_14 && b4_30 && b5_33 && b6_12 && b7_17 && b8_19 && b9_13 && b10_45 && b11_19 && b12_6 && b13_10 && b14_9 && b15_4 && b16_20 && b17_15 && b18_8) {
matched = true;
pattern_id = 2652;
}
if(b0_35 && b1_26 && b2_8 && b3_27 && b4_3 && b5_30 && b6_7 && b7_45 && b8_35 && b9_14 && b10_26 && b11_3 && b12_16) {
matched = true;
pattern_id = 2653;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_9 && b10_50) {
matched = true;
pattern_id = 2654;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_16 && b6_55 && b7_10 && b8_35 && b9_40 && b10_48 && b11_47 && b12_26 && b13_22 && b14_47) {
matched = true;
pattern_id = 2655;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_27 && b6_3 && b7_9 && b8_47) {
matched = true;
pattern_id = 2656;
}
if(b0_35 && b1_3 && b2_3 && b3_40 && b4_35 && b5_26 && b6_19 && b7_31 && b8_47 && b9_6 && b10_54) {
matched = true;
pattern_id = 2657;
}
if(b0_35 && b1_59 && b2_8 && b3_35 && b4_21 && b5_42 && b6_46 && b7_15 && b8_34 && b9_6 && b10_38) {
matched = true;
pattern_id = 2658;
}
if(b0_35 && b1_52 && b2_20 && b3_26 && b4_7 && b5_30 && b6_24 && b7_14 && b8_42 && b9_43 && b10_49 && b11_3 && b12_4 && b13_52 && b14_5 && b15_30 && b16_5 && b17_34 && b18_22 && b19_31 && b20_35 && b21_36 && b22_19 && b23_46) {
matched = true;
pattern_id = 2659;
}
if(b0_35 && b1_10 && b2_25 && b3_24 && b4_12 && b5_10 && b6_46 && b7_9 && b8_11 && b9_62 && b10_16 && b11_67 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_10 && b19_41 && b20_28 && b21_5 && b22_31 && b23_28 && b24_4 && b25_36 && b26_32 && b27_10 && b28_66 && b29_30 && b30_36 && b31_58 && b32_36 && b33_34 && b34_44 && b35_33 && b36_1 && b37_28 && b38_16 && b39_10) {
matched = true;
pattern_id = 2660;
}
if(b0_35 && b1_10 && b2_25 && b3_24 && b4_12 && b5_10 && b6_46 && b7_9 && b8_11 && b9_62 && b10_16 && b11_67 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_10 && b19_41 && b20_28 && b21_5 && b22_31 && b23_28 && b24_4 && b25_36 && b26_32 && b27_10 && b28_62 && b29_35 && b30_19 && b31_23 && b32_9) {
matched = true;
pattern_id = 2661;
}
if(b0_35 && b1_10 && b2_25 && b3_24 && b4_12 && b5_10 && b6_46 && b7_9 && b8_11 && b9_62 && b10_16 && b11_67 && b12_28 && b13_17 && b14_51 && b15_20 && b16_24 && b17_49 && b18_10 && b19_41 && b20_28 && b21_5 && b22_31 && b23_28 && b24_4 && b25_36 && b26_32 && b27_10 && b28_11 && b29_29 && b30_29 && b31_16 && b32_27 && b33_20 && b34_23 && b35_18 && b36_49 && b37_27 && b38_1 && b39_15) {
matched = true;
pattern_id = 2662;
}
if(b0_24 && b1_43 && b2_40 && b3_30 && b4_1 && b5_5 && b6_31 && b7_5 && b8_32) {
matched = true;
pattern_id = 2663;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_38 && b11_37 && b12_18 && b13_38 && b14_18 && b15_54 && b16_5 && b17_4 && b18_9 && b19_22 && b20_3 && b21_2 && b22_57 && b23_24 && b24_3 && b25_30 && b26_60 && b27_22 && b28_1 && b29_53 && b30_47 && b31_14 && b32_20 && b33_25 && b34_35 && b35_22 && b36_29 && b37_27) {
matched = true;
pattern_id = 2664;
}
if(b0_35 && b1_11 && b2_12 && b3_15 && b4_46 && b5_54 && b6_35 && b7_45 && b8_15 && b9_17 && b10_38 && b11_37 && b12_18 && b13_38 && b14_18) {
matched = true;
pattern_id = 2665;
}
if(b0_78 && b1_56 && b2_21 && b3_19 && b4_3 && b5_10 && b6_56 && b7_45 && b8_3 && b9_53 && b10_17 && b11_23 && b12_16 && b13_27 && b14_21 && b15_41 && b16_70) {
matched = true;
pattern_id = 2666;
}
if(b0_35 && b1_2 && b2_50 && b3_15 && b4_35 && b5_26 && b6_11 && b7_31 && b8_35 && b9_19 && b10_11) {
matched = true;
pattern_id = 2667;
}
if(b0_21 && b1_21 && b2_41 && b3_37) {
matched = true;
pattern_id = 2668;
}
if(b0_21 && b1_8 && b2_17 && b3_43 && b4_22 && b5_10 && b6_8 && b7_29 && b8_48 && b9_17 && b10_6 && b11_27 && b12_52) {
matched = true;
pattern_id = 2669;
}
if(b0_18 && b1_2 && b2_14 && b3_8 && b4_10 && b5_16 && b6_55 && b7_46 && b8_69 && b9_14 && b10_34) {
matched = true;
pattern_id = 2670;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_18 && b5_12 && b6_18 && b7_11 && b8_7) {
matched = true;
pattern_id = 2671;
}
if(b0_35 && b1_59 && b2_50 && b3_51 && b4_27 && b5_20 && b6_36 && b7_54 && b8_12 && b9_40 && b10_17 && b11_5) {
matched = true;
pattern_id = 2672;
}
if(b0_35 && b1_76 && b2_62 && b3_26 && b4_22 && b5_16 && b6_11 && b7_12 && b8_32 && b9_25 && b10_17 && b11_47 && b12_24 && b13_52 && b14_28 && b15_35 && b16_51 && b17_38 && b18_19 && b19_38 && b20_34) {
matched = true;
pattern_id = 2673;
}
if(b0_9 && b1_52 && b2_25 && b3_20 && b4_46 && b5_19 && b6_38 && b7_10 && b8_7 && b9_10 && b10_2 && b11_17 && b12_29 && b13_26 && b14_3 && b15_66 && b16_29 && b17_37 && b18_16 && b19_28 && b20_34 && b21_42 && b22_45 && b23_46 && b24_32 && b25_13 && b26_63 && b27_22 && b28_23 && b29_41 && b30_41 && b31_14 && b32_40 && b33_29) {
matched = true;
pattern_id = 2674;
}
if(b0_35 && b1_2 && b2_8 && b3_50 && b4_3 && b5_6 && b6_11 && b7_56 && b8_41 && b9_34 && b10_26 && b11_3 && b12_3 && b13_38 && b14_49 && b15_32 && b16_55 && b17_36 && b18_9 && b19_9 && b20_33 && b21_31 && b22_48 && b23_18 && b24_33 && b25_20 && b26_16 && b27_27 && b28_2 && b29_43 && b30_10 && b31_11 && b32_12 && b33_53 && b34_7 && b35_17 && b36_28 && b37_23 && b38_24 && b39_1 && b40_16 && b41_25 && b42_34) {
matched = true;
pattern_id = 2675;
}
if(b0_63 && b1_27 && b2_1 && b3_54 && b4_25 && b5_32 && b6_62 && b7_54 && b8_66 && b9_3 && b10_15) {
matched = true;
pattern_id = 2676;
}

}