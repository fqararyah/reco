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
dummy_loop:for(int i=0; i< buffer_size - chunk_len; i++){
pattern_id += buffer[i];
}
}
void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
boolean b0_1 =(buffer[0] == 'F');
boolean b0_2 =(buffer[0] == 'h');
boolean b0_3 =(buffer[0] == 'U');
boolean b0_4 =(buffer[0] == '|');
boolean b0_5 =(buffer[0] == 'y');
boolean b0_6 =(buffer[0] == 'w');
boolean b0_7 =(buffer[0] == 'r');
boolean b0_8 =(buffer[0] == 'l');
boolean b0_9 =(buffer[0] == 'd');
boolean b0_10 =(buffer[0] == 's');
boolean b0_11 =(buffer[0] == 'f');
boolean b0_12 =(buffer[0] == 'S');
boolean b0_13 =(buffer[0] == '1');
boolean b0_14 =(buffer[0] == 'P');
boolean b0_15 =(buffer[0] == '*');
boolean b0_16 =(buffer[0] == 'g');
boolean b0_17 =(buffer[0] == 'k');
boolean b0_18 =(buffer[0] == 'a');
boolean b0_19 =(buffer[0] == 'p');
boolean b0_20 =(buffer[0] == '>');
boolean b0_21 =(buffer[0] == '+');
boolean b0_22 =(buffer[0] == '@');
boolean b0_23 =(buffer[0] == '0');
boolean b0_24 =(buffer[0] == '.');
boolean b0_25 =(buffer[0] == 'C');
boolean b0_26 =(buffer[0] == 'R');
boolean b0_27 =(buffer[0] == '5');
boolean b0_28 =(buffer[0] == 'G');
boolean b0_29 =(buffer[0] == 'M');
boolean b0_30 =(buffer[0] == 'N');
boolean b0_31 =(buffer[0] == 'A');
boolean b0_32 =(buffer[0] == 'H');
boolean b0_33 =(buffer[0] == 'e');
boolean b0_34 =(buffer[0] == 'v');
boolean b0_35 =(buffer[0] == '4');
boolean b0_36 =(buffer[0] == '_');
boolean b0_37 =(buffer[0] == '/');
boolean b0_38 =(buffer[0] == 'L');
boolean b0_39 =(buffer[0] == '%');
boolean b0_40 =(buffer[0] == 'c');
boolean b0_41 =(buffer[0] == ' ');
boolean b0_42 =(buffer[0] == 'I');
boolean b0_43 =(buffer[0] == 'n');
boolean b0_44 =(buffer[0] == '?');
boolean b0_45 =(buffer[0] == 'B');
boolean b0_46 =(buffer[0] == '-');
boolean b0_47 =(buffer[0] == '~');
boolean b0_48 =(buffer[0] == 'E');
boolean b0_49 =(buffer[0] == 'D');
boolean b0_50 =(buffer[0] == 'J');
boolean b0_51 =(buffer[0] == '2');
boolean b0_52 =(buffer[0] == 'u');
boolean b0_53 =(buffer[0] == '!');
boolean b0_54 =(buffer[0] == 'X');
boolean b0_55 =(buffer[0] == 'T');
boolean b0_56 =(buffer[0] == 'V');
boolean b0_57 =(buffer[0] == '<');
boolean b0_58 =(buffer[0] == 'i');
boolean b0_59 =(buffer[0] == 'Y');
boolean b0_60 =(buffer[0] == 'j');
boolean b0_61 =(buffer[0] == 'W');
boolean b0_62 =(buffer[0] == 't');
boolean b0_63 =(buffer[0] == '3');
boolean b0_64 =(buffer[0] == 'o');
boolean b0_65 =(buffer[0] == '&');
boolean b0_66 =(buffer[0] == 'm');
boolean b0_67 =(buffer[0] == '=');
boolean b0_68 =(buffer[0] == ')');
boolean b0_69 =(buffer[0] == '(');
boolean b0_70 =(buffer[0] == 'K');
boolean b0_71 =(buffer[0] == 'b');
boolean b0_72 =(buffer[0] == '8');
boolean b1_1 =(buffer[1] == 'C');
boolean b1_2 =(buffer[1] == 'o');
boolean b1_3 =(buffer[1] == 'S');
boolean b1_4 =(buffer[1] == 'T');
boolean b1_5 =(buffer[1] == 'B');
boolean b1_6 =(buffer[1] == 'p');
boolean b1_7 =(buffer[1] == '0');
boolean b1_8 =(buffer[1] == 'e');
boolean b1_9 =(buffer[1] == 'h');
boolean b1_10 =(buffer[1] == 'r');
boolean b1_11 =(buffer[1] == '1');
boolean b1_12 =(buffer[1] == 'a');
boolean b1_13 =(buffer[1] == 't');
boolean b1_14 =(buffer[1] == '2');
boolean b1_15 =(buffer[1] == 'O');
boolean b1_16 =(buffer[1] == 'i');
boolean b1_17 =(buffer[1] == 'k');
boolean b1_18 =(buffer[1] == '4');
boolean b1_19 =(buffer[1] == 'H');
boolean b1_20 =(buffer[1] == 'l');
boolean b1_21 =(buffer[1] == '8');
boolean b1_22 =(buffer[1] == '+');
boolean b1_23 =(buffer[1] == '3');
boolean b1_24 =(buffer[1] == '7');
boolean b1_25 =(buffer[1] == '@');
boolean b1_26 =(buffer[1] == 'W');
boolean b1_27 =(buffer[1] == 'E');
boolean b1_28 =(buffer[1] == '%');
boolean b1_29 =(buffer[1] == 'I');
boolean b1_30 =(buffer[1] == 'A');
boolean b1_31 =(buffer[1] == '.');
boolean b1_32 =(buffer[1] == 'K');
boolean b1_33 =(buffer[1] == 'F');
boolean b1_34 =(buffer[1] == 'm');
boolean b1_35 =(buffer[1] == 'x');
boolean b1_36 =(buffer[1] == 'D');
boolean b1_37 =(buffer[1] == 'R');
boolean b1_38 =(buffer[1] == 's');
boolean b1_39 =(buffer[1] == 'Y');
boolean b1_40 =(buffer[1] == 'f');
boolean b1_41 =(buffer[1] == 'c');
boolean b1_42 =(buffer[1] == 'w');
boolean b1_43 =(buffer[1] == 'L');
boolean b1_44 =(buffer[1] == 'b');
boolean b1_45 =(buffer[1] == '*');
boolean b1_46 =(buffer[1] == 'N');
boolean b1_47 =(buffer[1] == 'j');
boolean b1_48 =(buffer[1] == 'n');
boolean b1_49 =(buffer[1] == 'd');
boolean b1_50 =(buffer[1] == '~');
boolean b1_51 =(buffer[1] == 'z');
boolean b1_52 =(buffer[1] == '?');
boolean b1_53 =(buffer[1] == 'u');
boolean b1_54 =(buffer[1] == 'P');
boolean b1_55 =(buffer[1] == 'M');
boolean b1_56 =(buffer[1] == '|');
boolean b1_57 =(buffer[1] == 'U');
boolean b1_58 =(buffer[1] == 'X');
boolean b1_59 =(buffer[1] == '!');
boolean b1_60 =(buffer[1] == 'Q');
boolean b1_61 =(buffer[1] == '9');
boolean b1_62 =(buffer[1] == 'g');
boolean b1_63 =(buffer[1] == 'Z');
boolean b1_64 =(buffer[1] == 'y');
boolean b1_65 =(buffer[1] == '=');
boolean b1_66 =(buffer[1] == '5');
boolean b1_67 =(buffer[1] == '&');
boolean b1_68 =(buffer[1] == ')');
boolean b1_69 =(buffer[1] == '(');
boolean b1_70 =(buffer[1] == 'v');
boolean b2_1 =(buffer[2] == ' ');
boolean b2_2 =(buffer[2] == 's');
boolean b2_3 =(buffer[2] == 'E');
boolean b2_4 =(buffer[2] == 'P');
boolean b2_5 =(buffer[2] == '4');
boolean b2_6 =(buffer[2] == 'i');
boolean b2_7 =(buffer[2] == '0');
boolean b2_8 =(buffer[2] == 'w');
boolean b2_9 =(buffer[2] == 'k');
boolean b2_10 =(buffer[2] == '3');
boolean b2_11 =(buffer[2] == 't');
boolean b2_12 =(buffer[2] == 'x');
boolean b2_13 =(buffer[2] == 'o');
boolean b2_14 =(buffer[2] == 'n');
boolean b2_15 =(buffer[2] == 'N');
boolean b2_16 =(buffer[2] == 'c');
boolean b2_17 =(buffer[2] == 'r');
boolean b2_18 =(buffer[2] == 'l');
boolean b2_19 =(buffer[2] == '1');
boolean b2_20 =(buffer[2] == '+');
boolean b2_21 =(buffer[2] == 'a');
boolean b2_22 =(buffer[2] == 'B');
boolean b2_23 =(buffer[2] == 'C');
boolean b2_24 =(buffer[2] == 'h');
boolean b2_25 =(buffer[2] == 'D');
boolean b2_26 =(buffer[2] == 'L');
boolean b2_27 =(buffer[2] == 'T');
boolean b2_28 =(buffer[2] == '2');
boolean b2_29 =(buffer[2] == 'S');
boolean b2_30 =(buffer[2] == 'p');
boolean b2_31 =(buffer[2] == 'G');
boolean b2_32 =(buffer[2] == 'O');
boolean b2_33 =(buffer[2] == 'A');
boolean b2_34 =(buffer[2] == 'f');
boolean b2_35 =(buffer[2] == 'g');
boolean b2_36 =(buffer[2] == '.');
boolean b2_37 =(buffer[2] == 'W');
boolean b2_38 =(buffer[2] == 'd');
boolean b2_39 =(buffer[2] == 'm');
boolean b2_40 =(buffer[2] == 'u');
boolean b2_41 =(buffer[2] == '%');
boolean b2_42 =(buffer[2] == '/');
boolean b2_43 =(buffer[2] == 'e');
boolean b2_44 =(buffer[2] == 'I');
boolean b2_45 =(buffer[2] == 'b');
boolean b2_46 =(buffer[2] == 'R');
boolean b2_47 =(buffer[2] == 'U');
boolean b2_48 =(buffer[2] == 'M');
boolean b2_49 =(buffer[2] == 'F');
boolean b2_50 =(buffer[2] == 'H');
boolean b2_51 =(buffer[2] == '|');
boolean b2_52 =(buffer[2] == '5');
boolean b2_53 =(buffer[2] == 'X');
boolean b2_54 =(buffer[2] == '=');
boolean b2_55 =(buffer[2] == 'K');
boolean b2_56 =(buffer[2] == '7');
boolean b2_57 =(buffer[2] == '8');
boolean b2_58 =(buffer[2] == 'V');
boolean b2_59 =(buffer[2] == '_');
boolean b2_60 =(buffer[2] == 'y');
boolean b2_61 =(buffer[2] == 'z');
boolean b2_62 =(buffer[2] == ')');
boolean b2_63 =(buffer[2] == '6');
boolean b3_1 =(buffer[3] == 't');
boolean b3_2 =(buffer[3] == 'R');
boolean b3_3 =(buffer[3] == 'O');
boolean b3_4 =(buffer[3] == ' ');
boolean b3_5 =(buffer[3] == '0');
boolean b3_6 =(buffer[3] == 'w');
boolean b3_7 =(buffer[3] == 'r');
boolean b3_8 =(buffer[3] == 'h');
boolean b3_9 =(buffer[3] == 'o');
boolean b3_10 =(buffer[3] == 'd');
boolean b3_11 =(buffer[3] == 'k');
boolean b3_12 =(buffer[3] == '4');
boolean b3_13 =(buffer[3] == 'G');
boolean b3_14 =(buffer[3] == 'l');
boolean b3_15 =(buffer[3] == 'L');
boolean b3_16 =(buffer[3] == 'a');
boolean b3_17 =(buffer[3] == 'v');
boolean b3_18 =(buffer[3] == 'e');
boolean b3_19 =(buffer[3] == 'g');
boolean b3_20 =(buffer[3] == '|');
boolean b3_21 =(buffer[3] == 'E');
boolean b3_22 =(buffer[3] == 'S');
boolean b3_23 =(buffer[3] == 'K');
boolean b3_24 =(buffer[3] == 'n');
boolean b3_25 =(buffer[3] == 'P');
boolean b3_26 =(buffer[3] == 'y');
boolean b3_27 =(buffer[3] == 'i');
boolean b3_28 =(buffer[3] == 'D');
boolean b3_29 =(buffer[3] == 'c');
boolean b3_30 =(buffer[3] == 'B');
boolean b3_31 =(buffer[3] == 'm');
boolean b3_32 =(buffer[3] == 's');
boolean b3_33 =(buffer[3] == 'f');
boolean b3_34 =(buffer[3] == 'T');
boolean b3_35 =(buffer[3] == '.');
boolean b3_36 =(buffer[3] == 'p');
boolean b3_37 =(buffer[3] == '2');
boolean b3_38 =(buffer[3] == '-');
boolean b3_39 =(buffer[3] == 'V');
boolean b3_40 =(buffer[3] == 'q');
boolean b3_41 =(buffer[3] == 'j');
boolean b3_42 =(buffer[3] == 'N');
boolean b3_43 =(buffer[3] == '=');
boolean b3_44 =(buffer[3] == '/');
boolean b3_45 =(buffer[3] == 'I');
boolean b3_46 =(buffer[3] == 'A');
boolean b3_47 =(buffer[3] == 'H');
boolean b3_48 =(buffer[3] == 'C');
boolean b3_49 =(buffer[3] == 'Y');
boolean b3_50 =(buffer[3] == 'U');
boolean b3_51 =(buffer[3] == 'M');
boolean b3_52 =(buffer[3] == 'F');
boolean b3_53 =(buffer[3] == 'J');
boolean b3_54 =(buffer[3] == 'z');
boolean b3_55 =(buffer[3] == '?');
boolean b3_56 =(buffer[3] == '1');
boolean b3_57 =(buffer[3] == 'u');
boolean b3_58 =(buffer[3] == '{');
boolean b4_1 =(buffer[4] == 'N');
boolean b4_2 =(buffer[4] == 'B');
boolean b4_3 =(buffer[4] == 'c');
boolean b4_4 =(buffer[4] == '0');
boolean b4_5 =(buffer[4] == 't');
boolean b4_6 =(buffer[4] == 'h');
boolean b4_7 =(buffer[4] == 'r');
boolean b4_8 =(buffer[4] == 'a');
boolean b4_9 =(buffer[4] == 'g');
boolean b4_10 =(buffer[4] == 'e');
boolean b4_11 =(buffer[4] == 'l');
boolean b4_12 =(buffer[4] == 'L');
boolean b4_13 =(buffer[4] == 'v');
boolean b4_14 =(buffer[4] == 'm');
boolean b4_15 =(buffer[4] == 'd');
boolean b4_16 =(buffer[4] == '8');
boolean b4_17 =(buffer[4] == 's');
boolean b4_18 =(buffer[4] == '.');
boolean b4_19 =(buffer[4] == '3');
boolean b4_20 =(buffer[4] == ' ');
boolean b4_21 =(buffer[4] == 'D');
boolean b4_22 =(buffer[4] == 'f');
boolean b4_23 =(buffer[4] == 'p');
boolean b4_24 =(buffer[4] == '/');
boolean b4_25 =(buffer[4] == '?');
boolean b4_26 =(buffer[4] == 'X');
boolean b4_27 =(buffer[4] == 'x');
boolean b4_28 =(buffer[4] == 'C');
boolean b4_29 =(buffer[4] == 'o');
boolean b4_30 =(buffer[4] == 'k');
boolean b4_31 =(buffer[4] == 'I');
boolean b4_32 =(buffer[4] == 'M');
boolean b4_33 =(buffer[4] == 'i');
boolean b4_34 =(buffer[4] == 'T');
boolean b4_35 =(buffer[4] == '|');
boolean b4_36 =(buffer[4] == 'w');
boolean b4_37 =(buffer[4] == 'R');
boolean b4_38 =(buffer[4] == '-');
boolean b4_39 =(buffer[4] == 'E');
boolean b4_40 =(buffer[4] == 'H');
boolean b4_41 =(buffer[4] == 'u');
boolean b4_42 =(buffer[4] == 'n');
boolean b4_43 =(buffer[4] == 'P');
boolean b4_44 =(buffer[4] == '_');
boolean b4_45 =(buffer[4] == 'O');
boolean b4_46 =(buffer[4] == '2');
boolean b4_47 =(buffer[4] == 'U');
boolean b4_48 =(buffer[4] == '%');
boolean b4_49 =(buffer[4] == '9');
boolean b4_50 =(buffer[4] == '=');
boolean b4_51 =(buffer[4] == '7');
boolean b4_52 =(buffer[4] == '&');
boolean b4_53 =(buffer[4] == ':');
boolean b4_54 =(buffer[4] == '{');
boolean b4_55 =(buffer[4] == '4');
boolean b4_56 =(buffer[4] == 'j');
boolean b5_1 =(buffer[5] == '4');
boolean b5_2 =(buffer[5] == 'a');
boolean b5_3 =(buffer[5] == '0');
boolean b5_4 =(buffer[5] == '!');
boolean b5_5 =(buffer[5] == 'x');
boolean b5_6 =(buffer[5] == '[');
boolean b5_7 =(buffer[5] == 'i');
boolean b5_8 =(buffer[5] == 'y');
boolean b5_9 =(buffer[5] == 'R');
boolean b5_10 =(buffer[5] == 'n');
boolean b5_11 =(buffer[5] == 'z');
boolean b5_12 =(buffer[5] == 'O');
boolean b5_13 =(buffer[5] == 'e');
boolean b5_14 =(buffer[5] == 's');
boolean b5_15 =(buffer[5] == 'm');
boolean b5_16 =(buffer[5] == 'h');
boolean b5_17 =(buffer[5] == 't');
boolean b5_18 =(buffer[5] == 'A');
boolean b5_19 =(buffer[5] == '2');
boolean b5_20 =(buffer[5] == '/');
boolean b5_21 =(buffer[5] == 'c');
boolean b5_22 =(buffer[5] == '&');
boolean b5_23 =(buffer[5] == 'p');
boolean b5_24 =(buffer[5] == ' ');
boolean b5_25 =(buffer[5] == 'H');
boolean b5_26 =(buffer[5] == '-');
boolean b5_27 =(buffer[5] == '.');
boolean b5_28 =(buffer[5] == 'u');
boolean b5_29 =(buffer[5] == 'S');
boolean b5_30 =(buffer[5] == 'l');
boolean b5_31 =(buffer[5] == '1');
boolean b5_32 =(buffer[5] == '%');
boolean b5_33 =(buffer[5] == 'o');
boolean b5_34 =(buffer[5] == 'E');
boolean b5_35 =(buffer[5] == 'w');
boolean b5_36 =(buffer[5] == '?');
boolean b5_37 =(buffer[5] == 'g');
boolean b5_38 =(buffer[5] == '|');
boolean b5_39 =(buffer[5] == '5');
boolean b5_40 =(buffer[5] == 'f');
boolean b5_41 =(buffer[5] == '=');
boolean b5_42 =(buffer[5] == 'T');
boolean b5_43 =(buffer[5] == 'D');
boolean b5_44 =(buffer[5] == 'N');
boolean b5_45 =(buffer[5] == 'C');
boolean b5_46 =(buffer[5] == '8');
boolean b5_47 =(buffer[5] == 'P');
boolean b5_48 =(buffer[5] == 'd');
boolean b5_49 =(buffer[5] == 'L');
boolean b5_50 =(buffer[5] == '7');
boolean b5_51 =(buffer[5] == '3');
boolean b5_52 =(buffer[5] == ':');
boolean b6_1 =(buffer[6] == '|');
boolean b6_2 =(buffer[6] == '*');
boolean b6_3 =(buffer[6] == 'l');
boolean b6_4 =(buffer[6] == '/');
boolean b6_5 =(buffer[6] == 's');
boolean b6_6 =(buffer[6] == 'r');
boolean b6_7 =(buffer[6] == 'h');
boolean b6_8 =(buffer[6] == 'e');
boolean b6_9 =(buffer[6] == ' ');
boolean b6_10 =(buffer[6] == 'p');
boolean b6_11 =(buffer[6] == 'G');
boolean b6_12 =(buffer[6] == 'n');
boolean b6_13 =(buffer[6] == 'w');
boolean b6_14 =(buffer[6] == 'i');
boolean b6_15 =(buffer[6] == 'L');
boolean b6_16 =(buffer[6] == 'S');
boolean b6_17 =(buffer[6] == 'o');
boolean b6_18 =(buffer[6] == '0');
boolean b6_19 =(buffer[6] == 'Z');
boolean b6_20 =(buffer[6] == 'R');
boolean b6_21 =(buffer[6] == 'E');
boolean b6_22 =(buffer[6] == 'T');
boolean b6_23 =(buffer[6] == '.');
boolean b6_24 =(buffer[6] == '=');
boolean b6_25 =(buffer[6] == 'a');
boolean b6_26 =(buffer[6] == 'm');
boolean b6_27 =(buffer[6] == 't');
boolean b6_28 =(buffer[6] == '?');
boolean b6_29 =(buffer[6] == 'v');
boolean b6_30 =(buffer[6] == 'g');
if(b0_1 && b1_1 && b2_1) {
matched = true;
pattern_id = 0;
}
if(b0_2 && b1_2 && b2_2 && b3_1) {
matched = true;
pattern_id = 1;
}
if(b0_3 && b1_3 && b2_3 && b3_2) {
matched = true;
pattern_id = 2;
}
if(b0_1 && b1_4 && b2_4 && b3_3 && b4_1) {
matched = true;
pattern_id = 3;
}
if(b0_4 && b1_5 && b2_5 && b3_4 && b4_2 && b5_1 && b6_1) {
matched = true;
pattern_id = 4;
}
if(b0_5 && b1_6 && b2_6 && b3_5 && b4_3 && b5_2) {
matched = true;
pattern_id = 5;
}
if(b0_6 && b1_7 && b2_7 && b3_6 && b4_4 && b5_3) {
matched = true;
pattern_id = 6;
}
if(b0_7 && b1_7 && b2_7 && b3_1) {
matched = true;
pattern_id = 7;
}
if(b0_7 && b1_8 && b2_8 && b3_1) {
matched = true;
pattern_id = 8;
}
if(b0_6 && b1_9 && b2_7 && b3_5 && b4_5 && b5_4) {
matched = true;
pattern_id = 9;
}
if(b0_8 && b1_10 && b2_9 && b3_7 && b4_4 && b5_5) {
matched = true;
pattern_id = 10;
}
if(b0_9 && b1_11 && b2_10 && b3_8 && b4_6 && b5_6) {
matched = true;
pattern_id = 11;
}
if(b0_10 && b1_12 && b2_11 && b3_9 && b4_7 && b5_7) {
matched = true;
pattern_id = 12;
}
if(b0_2 && b1_12 && b2_12 && b3_5 && b4_7) {
matched = true;
pattern_id = 13;
}
if(b0_11 && b1_10 && b2_6 && b3_10 && b4_8 && b5_8) {
matched = true;
pattern_id = 14;
}
if(b0_12 && b1_13 && b2_13 && b3_9 && b4_9 && b5_9) {
matched = true;
pattern_id = 15;
}
if(b0_6 && b1_12 && b2_14 && b3_11) {
matched = true;
pattern_id = 16;
}
if(b0_13 && b1_14 && b2_10 && b3_12) {
matched = true;
pattern_id = 17;
}
if(b0_14 && b1_15 && b2_15 && b3_13) {
matched = true;
pattern_id = 18;
}
if(b0_10 && b1_16 && b2_16 && b3_11 && b4_10 && b5_10) {
matched = true;
pattern_id = 19;
}
if(b0_11 && b1_16 && b2_16 && b3_11 && b4_10 && b5_10) {
matched = true;
pattern_id = 20;
}
if(b0_10 && b1_17 && b2_6 && b3_14 && b4_11 && b5_11) {
matched = true;
pattern_id = 21;
}
if(b0_8 && b1_18 && b2_5) {
matched = true;
pattern_id = 22;
}
if(b0_15 && b1_19 && b2_3 && b3_15 && b4_12 && b5_12 && b6_2) {
matched = true;
pattern_id = 23;
}
if(b0_16 && b1_15 && b2_17 && b3_16 && b4_13 && b5_13) {
matched = true;
pattern_id = 24;
}
if(b0_17 && b1_16 && b2_18 && b3_14 && b4_14 && b5_13) {
matched = true;
pattern_id = 25;
}
if(b0_8 && b1_18 && b2_5 && b3_16 && b4_15 && b5_14 && b6_3) {
matched = true;
pattern_id = 26;
}
if(b0_18 && b1_20 && b2_6 && b3_17 && b4_10) {
matched = true;
pattern_id = 27;
}
if(b0_10 && b1_13 && b2_17 && b3_18 && b4_8 && b5_15 && b6_4) {
matched = true;
pattern_id = 28;
}
if(b0_19 && b1_16 && b2_14 && b3_19) {
matched = true;
pattern_id = 29;
}
if(b0_19 && b1_2 && b2_14 && b3_19) {
matched = true;
pattern_id = 30;
}
if(b0_20) {
matched = true;
pattern_id = 31;
}
if(b0_4 && b1_21 && b2_19 && b3_4 && b4_16 && b5_3 && b6_1) {
matched = true;
pattern_id = 32;
}
if(b0_21 && b1_22 && b2_20 && b3_16 && b4_5 && b5_16) {
matched = true;
pattern_id = 33;
}
if(b0_10 && b1_8 && b2_21 && b3_7 && b4_3 && b5_16) {
matched = true;
pattern_id = 34;
}
if(b0_7 && b1_2 && b2_13 && b3_1) {
matched = true;
pattern_id = 35;
}
if(b0_4 && b1_7 && b2_7 && b3_20) {
matched = true;
pattern_id = 36;
}
if(b0_4 && b1_23 && b2_22 && b3_20) {
matched = true;
pattern_id = 37;
}
if(b0_4 && b1_24 && b2_23 && b3_20) {
matched = true;
pattern_id = 38;
}
if(b0_22 && b1_25) {
matched = true;
pattern_id = 39;
}
if(b0_22) {
matched = true;
pattern_id = 40;
}
if(b0_23) {
matched = true;
pattern_id = 41;
}
if(b0_24) {
matched = true;
pattern_id = 42;
}
if(b0_24 && b1_10 && b2_24 && b3_9 && b4_17 && b5_17 && b6_5) {
matched = true;
pattern_id = 43;
}
if(b0_25 && b1_26 && b2_25) {
matched = true;
pattern_id = 44;
}
if(b0_25 && b1_27 && b2_26) {
matched = true;
pattern_id = 45;
}
if(b0_26 && b1_27 && b2_27 && b3_2) {
matched = true;
pattern_id = 46;
}
if(b0_24 && b1_28 && b2_28 && b3_5 && b4_18) {
matched = true;
pattern_id = 47;
}
if(b0_12 && b1_29 && b2_27 && b3_21) {
matched = true;
pattern_id = 48;
}
if(b0_14 && b1_30 && b2_29 && b3_22) {
matched = true;
pattern_id = 49;
}
if(b0_27 && b1_23 && b2_7 && b3_4) {
matched = true;
pattern_id = 50;
}
if(b0_11 && b1_13 && b2_30 && b3_20 && b4_19 && b5_18 && b6_1) {
matched = true;
pattern_id = 51;
}
if(b0_28 && b1_27 && b2_27 && b3_4) {
matched = true;
pattern_id = 52;
}
if(b0_4 && b1_7 && b2_7 && b3_4 && b4_4 && b5_19 && b6_1) {
matched = true;
pattern_id = 53;
}
if(b0_24 && b1_31) {
matched = true;
pattern_id = 54;
}
if(b0_29 && b1_3 && b2_31 && b3_4) {
matched = true;
pattern_id = 55;
}
if(b0_30 && b1_29 && b2_23 && b3_23 && b4_20) {
matched = true;
pattern_id = 56;
}
if(b0_12 && b1_4 && b2_32 && b3_2) {
matched = true;
pattern_id = 57;
}
if(b0_25 && b1_26 && b2_25 && b3_4 && b4_20) {
matched = true;
pattern_id = 58;
}
if(b0_29 && b1_32 && b2_25 && b3_4 && b4_20) {
matched = true;
pattern_id = 59;
}
if(b0_29 && b1_32 && b2_25 && b3_4 && b4_18) {
matched = true;
pattern_id = 60;
}
if(b0_29 && b1_32 && b2_25) {
matched = true;
pattern_id = 61;
}
if(b0_26 && b1_33 && b2_22 && b3_4 && b4_4) {
matched = true;
pattern_id = 62;
}
if(b0_12 && b1_4) {
matched = true;
pattern_id = 63;
}
if(b0_31) {
matched = true;
pattern_id = 64;
}
if(b0_31 && b1_34 && b2_21 && b3_24 && b4_15 && b5_2) {
matched = true;
pattern_id = 65;
}
if(b0_4 && b1_7 && b2_33 && b3_20 && b4_21 && b5_20) {
matched = true;
pattern_id = 66;
}
if(b0_32 && b1_27 && b2_26 && b3_25) {
matched = true;
pattern_id = 67;
}
if(b0_33 && b1_35 && b2_30 && b3_24) {
matched = true;
pattern_id = 68;
}
if(b0_34 && b1_10 && b2_34 && b3_26) {
matched = true;
pattern_id = 69;
}
if(b0_35 && b1_36 && b2_35 && b3_27 && b4_22 && b5_17 && b6_5) {
matched = true;
pattern_id = 70;
}
if(b0_36 && b1_37 && b2_26 && b3_28) {
matched = true;
pattern_id = 71;
}
if(b0_37 && b1_38 && b2_36 && b3_29 && b4_9 && b5_7) {
matched = true;
pattern_id = 72;
}
if(b0_37 && b1_39 && b2_21 && b3_30 && b4_2) {
matched = true;
pattern_id = 73;
}
if(b0_37 && b1_40 && b2_6 && b3_24 && b4_9 && b5_13 && b6_6) {
matched = true;
pattern_id = 74;
}
if(b0_37 && b1_41 && b2_21 && b3_31 && b4_23 && b5_2 && b6_5) {
matched = true;
pattern_id = 75;
}
if(b0_37 && b1_42 && b2_17 && b3_16 && b4_23) {
matched = true;
pattern_id = 76;
}
if(b0_37 && b1_34 && b2_21 && b3_24 && b4_18 && b5_14 && b6_7) {
matched = true;
pattern_id = 77;
}
if(b0_37 && b1_41 && b2_2 && b3_8) {
matched = true;
pattern_id = 78;
}
if(b0_37 && b1_17 && b2_2 && b3_8) {
matched = true;
pattern_id = 79;
}
if(b0_37 && b1_10 && b2_2 && b3_8) {
matched = true;
pattern_id = 80;
}
if(b0_37 && b1_13 && b2_16 && b3_32 && b4_6) {
matched = true;
pattern_id = 81;
}
if(b0_37 && b1_10 && b2_9 && b3_32 && b4_6) {
matched = true;
pattern_id = 82;
}
if(b0_37 && b1_43 && b2_37 && b3_13 && b4_8 && b5_17 && b6_8) {
matched = true;
pattern_id = 83;
}
if(b0_37 && b1_12 && b2_17 && b3_29 && b4_6 && b5_7 && b6_8) {
matched = true;
pattern_id = 84;
}
if(b0_37 && b1_44 && b2_21 && b3_32 && b4_6) {
matched = true;
pattern_id = 85;
}
if(b0_37 && b1_6 && b2_24 && b3_33) {
matched = true;
pattern_id = 86;
}
if(b0_14 && b1_15 && b2_29 && b3_34) {
matched = true;
pattern_id = 87;
}
if(b0_24 && b1_31 && b2_36 && b3_35 && b4_24) {
matched = true;
pattern_id = 88;
}
if(b0_38 && b1_15 && b2_23 && b3_23 && b4_20) {
matched = true;
pattern_id = 89;
}
if(b0_37 && b1_45 && b2_36 && b3_27 && b4_15 && b5_21) {
matched = true;
pattern_id = 90;
}
if(b0_24 && b1_44 && b2_21 && b3_1 && b4_25) {
matched = true;
pattern_id = 91;
}
if(b0_24 && b1_41 && b2_14 && b3_33) {
matched = true;
pattern_id = 92;
}
if(b0_39 && b1_14 && b2_7) {
matched = true;
pattern_id = 93;
}
if(b0_24 && b1_9 && b2_11 && b3_7) {
matched = true;
pattern_id = 94;
}
if(b0_24 && b1_12 && b2_2 && b3_36 && b4_18) {
matched = true;
pattern_id = 95;
}
if(b0_40 && b1_34 && b2_38 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id = 96;
}
if(b0_24 && b1_41 && b2_39 && b3_10 && b4_25 && b5_22) {
matched = true;
pattern_id = 97;
}
if(b0_39 && b1_11 && b2_40) {
matched = true;
pattern_id = 98;
}
if(b0_41 && b1_31 && b2_24 && b3_1 && b4_7) {
matched = true;
pattern_id = 99;
}
if(b0_4 && b1_7 && b2_33 && b3_20 && b4_18 && b5_23 && b6_3) {
matched = true;
pattern_id = 100;
}
if(b0_41 && b1_31 && b2_30 && b3_14) {
matched = true;
pattern_id = 101;
}
if(b0_24 && b1_9 && b2_11 && b3_6) {
matched = true;
pattern_id = 102;
}
if(b0_35 && b1_7 && b2_10) {
matched = true;
pattern_id = 103;
}
if(b0_42 && b1_46 && b2_25 && b3_21 && b4_26 && b5_24) {
matched = true;
pattern_id = 104;
}
if(b0_24 && b1_47 && b2_2 && b3_36) {
matched = true;
pattern_id = 105;
}
if(b0_11 && b1_13 && b2_30 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id = 106;
}
if(b0_43 && b1_41 && b2_36 && b3_18 && b4_27 && b5_13) {
matched = true;
pattern_id = 107;
}
if(b0_6 && b1_38 && b2_24 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id = 108;
}
if(b0_43 && b1_8 && b2_11 && b3_35 && b4_10 && b5_5 && b6_8) {
matched = true;
pattern_id = 109;
}
if(b0_12 && b1_27 && b2_33 && b3_2 && b4_28 && b5_25 && b6_9) {
matched = true;
pattern_id = 110;
}
if(b0_24 && b1_48 && b2_2 && b3_33 && b4_24) {
matched = true;
pattern_id = 111;
}
if(b0_37 && b1_40 && b2_11 && b3_36 && b4_18 && b5_23 && b6_3) {
matched = true;
pattern_id = 112;
}
if(b0_37 && b1_28 && b2_7 && b3_5) {
matched = true;
pattern_id = 113;
}
if(b0_8 && b1_38 && b2_41 && b3_37 && b4_4 && b5_26 && b6_3) {
matched = true;
pattern_id = 114;
}
if(b0_24 && b1_42 && b2_8 && b3_6 && b4_8 && b5_21 && b6_3) {
matched = true;
pattern_id = 115;
}
if(b0_40 && b1_49 && b2_36 && b3_35) {
matched = true;
pattern_id = 116;
}
if(b0_32 && b1_27 && b2_33 && b3_28 && b4_24 && b5_27 && b6_4) {
matched = true;
pattern_id = 117;
}
if(b0_37 && b1_31 && b2_36 && b3_35 && b4_18) {
matched = true;
pattern_id = 118;
}
if(b0_37 && b1_50 && b2_17 && b3_9 && b4_29 && b5_17) {
matched = true;
pattern_id = 119;
}
if(b0_40 && b1_12 && b2_11 && b3_4) {
matched = true;
pattern_id = 120;
}
if(b0_44 && b1_42 && b2_30 && b3_38) {
matched = true;
pattern_id = 121;
}
if(b0_24 && b1_31 && b2_42) {
matched = true;
pattern_id = 122;
}
if(b0_37 && b1_9 && b2_11 && b3_19 && b4_7 && b5_13 && b6_10) {
matched = true;
pattern_id = 123;
}
if(b0_37 && b1_44 && b2_21 && b3_29 && b4_30 && b5_28 && b6_10) {
matched = true;
pattern_id = 124;
}
if(b0_45 && b1_27 && b2_33 && b3_39 && b4_31 && b5_29) {
matched = true;
pattern_id = 125;
}
if(b0_24 && b1_16 && b2_38 && b3_16) {
matched = true;
pattern_id = 126;
}
if(b0_24 && b1_16 && b2_38 && b3_16 && b4_25) {
matched = true;
pattern_id = 127;
}
if(b0_24 && b1_16 && b2_38 && b3_40 && b4_25) {
matched = true;
pattern_id = 128;
}
if(b0_24 && b1_16 && b2_38 && b3_40) {
matched = true;
pattern_id = 129;
}
if(b0_37 && b1_20 && b2_43 && b3_17 && b4_10 && b5_30 && b6_4) {
matched = true;
pattern_id = 130;
}
if(b0_37 && b1_34 && b2_2 && b3_10 && b4_8 && b5_21 && b6_4) {
matched = true;
pattern_id = 131;
}
if(b0_4 && b1_7 && b2_7 && b3_4 && b4_4 && b5_31 && b6_1) {
matched = true;
pattern_id = 132;
}
if(b0_37 && b1_51 && b2_2 && b3_8) {
matched = true;
pattern_id = 133;
}
if(b0_46 && b1_38 && b2_13 && b3_16 && b4_20 && b5_32 && b6_10) {
matched = true;
pattern_id = 134;
}
if(b0_37 && b1_44 && b2_6 && b3_24 && b4_24 && b5_14 && b6_7) {
matched = true;
pattern_id = 135;
}
if(b0_37 && b1_52 && b2_36 && b3_41 && b4_17 && b5_23) {
matched = true;
pattern_id = 136;
}
if(b0_47) {
matched = true;
pattern_id = 137;
}
if(b0_12 && b1_4 && b2_33 && b3_34) {
matched = true;
pattern_id = 138;
}
if(b0_14 && b1_37 && b2_44 && b3_39 && b4_32 && b5_29 && b6_11) {
matched = true;
pattern_id = 139;
}
if(b0_13) {
matched = true;
pattern_id = 140;
}
if(b0_19 && b1_53 && b2_45 && b3_14 && b4_33 && b5_21) {
matched = true;
pattern_id = 141;
}
if(b0_19 && b1_10 && b2_6 && b3_17 && b4_8 && b5_17 && b6_8) {
matched = true;
pattern_id = 142;
}
if(b0_37 && b1_38 && b2_8 && b3_29) {
matched = true;
pattern_id = 143;
}
if(b0_37 && b1_54 && b2_46 && b3_42 && b4_24) {
matched = true;
pattern_id = 144;
}
if(b0_37 && b1_46 && b2_47 && b3_15 && b4_24) {
matched = true;
pattern_id = 145;
}
if(b0_37 && b1_52 && b2_48 && b3_43 && b4_21) {
matched = true;
pattern_id = 146;
}
if(b0_37 && b1_12 && b2_14 && b3_32 && b4_18 && b5_23 && b6_3) {
matched = true;
pattern_id = 147;
}
if(b0_34 && b1_8 && b2_17 && b3_32 && b4_33 && b5_33 && b6_12) {
matched = true;
pattern_id = 148;
}
if(b0_4 && b1_11 && b2_10 && b3_20) {
matched = true;
pattern_id = 149;
}
if(b0_37 && b1_28 && b2_41) {
matched = true;
pattern_id = 150;
}
if(b0_32 && b1_27 && b2_26 && b3_3) {
matched = true;
pattern_id = 151;
}
if(b0_48 && b1_4 && b2_46 && b3_42) {
matched = true;
pattern_id = 152;
}
if(b0_37 && b1_49 && b2_16 && b3_32 && b4_6 && b5_33 && b6_10) {
matched = true;
pattern_id = 153;
}
if(b0_37 && b1_49 && b2_13 && b3_29 && b4_24) {
matched = true;
pattern_id = 154;
}
if(b0_49 && b1_27 && b2_26 && b3_21 && b4_34 && b5_34 && b6_9) {
matched = true;
pattern_id = 155;
}
if(b0_37 && b1_31 && b2_36 && b3_44 && b4_18 && b5_27 && b6_4) {
matched = true;
pattern_id = 156;
}
if(b0_37 && b1_16 && b2_16 && b3_16 && b4_5) {
matched = true;
pattern_id = 157;
}
if(b0_24 && b1_12 && b2_2 && b3_36) {
matched = true;
pattern_id = 158;
}
if(b0_25 && b1_55 && b2_25) {
matched = true;
pattern_id = 159;
}
if(b0_26 && b1_46 && b2_49 && b3_2 && b4_20) {
matched = true;
pattern_id = 160;
}
if(b0_29 && b1_15 && b2_25 && b3_21) {
matched = true;
pattern_id = 161;
}
if(b0_14 && b1_26 && b2_25) {
matched = true;
pattern_id = 162;
}
if(b0_12 && b1_39 && b2_29 && b3_34) {
matched = true;
pattern_id = 163;
}
if(b0_15 && b1_56 && b2_7 && b3_37 && b4_35) {
matched = true;
pattern_id = 164;
}
if(b0_31 && b1_54 && b2_32 && b3_25) {
matched = true;
pattern_id = 165;
}
if(b0_37 && b1_49 && b2_45 && b3_37 && b4_36 && b5_35 && b6_13) {
matched = true;
pattern_id = 166;
}
if(b0_37 && b1_6 && b2_43 && b3_7 && b4_11 && b5_36) {
matched = true;
pattern_id = 167;
}
if(b0_37 && b1_50 && b2_34 && b3_1 && b4_23) {
matched = true;
pattern_id = 168;
}
if(b0_10 && b1_8 && b2_18 && b3_18 && b4_3 && b5_17 && b6_9) {
matched = true;
pattern_id = 169;
}
if(b0_41 && b1_42 && b2_24 && b3_18 && b4_7 && b5_13 && b6_9) {
matched = true;
pattern_id = 170;
}
if(b0_16 && b1_10 && b2_21 && b3_24 && b4_5 && b5_24) {
matched = true;
pattern_id = 171;
}
if(b0_37 && b1_12 && b2_38 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id = 172;
}
if(b0_50 && b1_15 && b2_44 && b3_42 && b4_20) {
matched = true;
pattern_id = 173;
}
if(b0_14 && b1_30 && b2_46 && b3_34 && b4_31 && b5_18 && b6_15) {
matched = true;
pattern_id = 174;
}
if(b0_4 && b1_23 && b2_33 && b3_20) {
matched = true;
pattern_id = 175;
}
if(b0_51 && b1_7 && b2_7) {
matched = true;
pattern_id = 176;
}
if(b0_32 && b1_4 && b2_27 && b3_25 && b4_24) {
matched = true;
pattern_id = 177;
}
if(b0_52 && b1_48 && b2_21 && b3_31 && b4_10) {
matched = true;
pattern_id = 178;
}
if(b0_28 && b1_15 && b2_22 && b3_30 && b4_12 && b5_34 && b6_16) {
matched = true;
pattern_id = 179;
}
if(b0_37 && b1_12 && b2_34 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id = 180;
}
if(b0_37 && b1_38 && b2_43 && b3_16 && b4_7 && b5_21 && b6_7) {
matched = true;
pattern_id = 181;
}
if(b0_12 && b1_3 && b2_50 && b3_38) {
matched = true;
pattern_id = 182;
}
if(b0_38 && b1_15 && b2_31 && b3_45 && b4_1) {
matched = true;
pattern_id = 183;
}
if(b0_53 && b1_25 && b2_51 && b3_37 && b4_19 && b5_38) {
matched = true;
pattern_id = 184;
}
if(b0_38 && b1_29 && b2_29 && b3_34) {
matched = true;
pattern_id = 185;
}
if(b0_37 && b1_49 && b2_39 && b3_32 && b4_4) {
matched = true;
pattern_id = 186;
}
if(b0_37 && b1_41 && b2_35 && b3_27 && b4_3 && b5_14 && b6_17) {
matched = true;
pattern_id = 187;
}
if(b0_52 && b1_16 && b2_38 && b3_43) {
matched = true;
pattern_id = 188;
}
if(b0_38 && b1_3 && b2_47 && b3_30) {
matched = true;
pattern_id = 189;
}
if(b0_26 && b1_27 && b2_15 && b3_46 && b4_32 && b5_34) {
matched = true;
pattern_id = 190;
}
if(b0_1 && b1_29 && b2_15 && b3_28) {
matched = true;
pattern_id = 191;
}
if(b0_31 && b1_57 && b2_27 && b3_47) {
matched = true;
pattern_id = 192;
}
if(b0_54 && b1_4 && b2_15 && b3_28) {
matched = true;
pattern_id = 193;
}
if(b0_4 && b1_7 && b2_19 && b3_20) {
matched = true;
pattern_id = 194;
}
if(b0_26 && b1_55 && b2_25 && b3_45 && b4_37) {
matched = true;
pattern_id = 195;
}
if(b0_37 && b1_12 && b2_45 && b3_37 && b4_24) {
matched = true;
pattern_id = 196;
}
if(b0_37 && b1_16 && b2_13 && b3_24 && b4_38 && b5_23) {
matched = true;
pattern_id = 197;
}
if(b0_26 && b1_27 && b2_29 && b3_34) {
matched = true;
pattern_id = 198;
}
if(b0_49 && b1_27 && b2_26 && b3_21) {
matched = true;
pattern_id = 199;
}
if(b0_26 && b1_55 && b2_25) {
matched = true;
pattern_id = 200;
}
if(b0_23 && b1_7) {
matched = true;
pattern_id = 201;
}
if(b0_25 && b1_30 && b2_26 && b3_4) {
matched = true;
pattern_id = 202;
}
if(b0_3 && b1_3 && b2_46 && b3_4) {
matched = true;
pattern_id = 203;
}
if(b0_24 && b1_6 && b2_24 && b3_36) {
matched = true;
pattern_id = 204;
}
if(b0_4 && b1_7 && b2_5 && b3_20) {
matched = true;
pattern_id = 205;
}
if(b0_33 && b1_10 && b2_17 && b3_9 && b4_7 && b5_24) {
matched = true;
pattern_id = 206;
}
if(b0_4 && b1_21 && b2_7 && b3_4 && b4_4 && b5_31 && b6_1) {
matched = true;
pattern_id = 207;
}
if(b0_4 && b1_21 && b2_7 && b3_4 && b4_4 && b5_19 && b6_1) {
matched = true;
pattern_id = 208;
}
if(b0_4 && b1_11 && b2_7 && b3_4 && b4_4 && b5_39 && b6_1) {
matched = true;
pattern_id = 209;
}
if(b0_4 && b1_7 && b2_28 && b3_20) {
matched = true;
pattern_id = 210;
}
if(b0_55 && b1_37 && b2_33 && b3_48 && b4_39) {
matched = true;
pattern_id = 211;
}
if(b0_37 && b1_31 && b2_30 && b3_18 && b4_7 && b5_40) {
matched = true;
pattern_id = 212;
}
if(b0_24 && b1_41 && b2_2 && b3_36 && b4_18) {
matched = true;
pattern_id = 213;
}
if(b0_24 && b1_6 && b2_18) {
matched = true;
pattern_id = 214;
}
if(b0_24 && b1_8 && b2_12 && b3_18) {
matched = true;
pattern_id = 215;
}
if(b0_37 && b1_49 && b2_6 && b3_33 && b4_22 && b5_14 && b6_4) {
matched = true;
pattern_id = 216;
}
if(b0_25 && b1_37 && b2_3 && b3_46 && b4_34 && b5_34) {
matched = true;
pattern_id = 217;
}
if(b0_25 && b1_30 && b2_4 && b3_46) {
matched = true;
pattern_id = 218;
}
if(b0_55 && b1_15 && b2_4) {
matched = true;
pattern_id = 219;
}
if(b0_26 && b1_3 && b2_3 && b3_34) {
matched = true;
pattern_id = 220;
}
if(b0_3 && b1_29 && b2_25 && b3_15) {
matched = true;
pattern_id = 221;
}
if(b0_4 && b1_7 && b2_52 && b3_20) {
matched = true;
pattern_id = 222;
}
if(b0_54 && b1_27 && b2_53 && b3_48 && b4_40 && b5_39 && b6_18) {
matched = true;
pattern_id = 223;
}
if(b0_4 && b1_7 && b2_5 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id = 224;
}
if(b0_48 && b1_58 && b2_4 && b3_42) {
matched = true;
pattern_id = 225;
}
if(b0_56 && b1_37 && b2_49 && b3_49) {
matched = true;
pattern_id = 226;
}
if(b0_37 && b1_38 && b2_43 && b3_1 && b4_41 && b5_23 && b6_4) {
matched = true;
pattern_id = 227;
}
if(b0_9 && b1_2 && b2_54 && b3_18 && b4_27 && b5_17) {
matched = true;
pattern_id = 228;
}
if(b0_4 && b1_7 && b2_7 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id = 229;
}
if(b0_54 && b1_1 && b2_37 && b3_28) {
matched = true;
pattern_id = 230;
}
if(b0_54 && b1_55 && b2_55 && b3_28) {
matched = true;
pattern_id = 231;
}
if(b0_30 && b1_43 && b2_29 && b3_34) {
matched = true;
pattern_id = 232;
}
if(b0_4 && b1_7 && b2_56 && b3_20) {
matched = true;
pattern_id = 233;
}
if(b0_4 && b1_23 && b2_33 && b3_20 && b4_24) {
matched = true;
pattern_id = 234;
}
if(b0_26 && b1_46 && b2_27 && b3_3) {
matched = true;
pattern_id = 235;
}
if(b0_12 && b1_4 && b2_32 && b3_50) {
matched = true;
pattern_id = 236;
}
if(b0_31 && b1_54 && b2_4 && b3_21) {
matched = true;
pattern_id = 237;
}
if(b0_57 && b1_59) {
matched = true;
pattern_id = 238;
}
if(b0_4 && b1_7 && b2_57 && b3_20) {
matched = true;
pattern_id = 239;
}
if(b0_4 && b1_7 && b2_22 && b3_20) {
matched = true;
pattern_id = 240;
}
if(b0_29 && b1_36 && b2_27 && b3_51) {
matched = true;
pattern_id = 241;
}
if(b0_39) {
matched = true;
pattern_id = 242;
}
if(b0_24 && b1_10 && b2_21) {
matched = true;
pattern_id = 243;
}
if(b0_24 && b1_10 && b2_39 && b3_36) {
matched = true;
pattern_id = 244;
}
if(b0_24 && b1_10 && b2_11) {
matched = true;
pattern_id = 245;
}
if(b0_24 && b1_10 && b2_30) {
matched = true;
pattern_id = 246;
}
if(b0_10 && b1_8 && b2_14 && b3_10 && b4_17 && b5_8 && b6_5) {
matched = true;
pattern_id = 247;
}
if(b0_58 && b1_9 && b2_21 && b3_17 && b4_10) {
matched = true;
pattern_id = 248;
}
if(b0_10 && b1_8 && b2_14 && b3_10 && b4_14 && b5_13) {
matched = true;
pattern_id = 249;
}
if(b0_7 && b1_34 && b2_35 && b3_7 && b4_29 && b5_28 && b6_10) {
matched = true;
pattern_id = 250;
}
if(b0_24 && b1_8 && b2_39 && b3_33) {
matched = true;
pattern_id = 251;
}
if(b0_24 && b1_42 && b2_39 && b3_33) {
matched = true;
pattern_id = 252;
}
if(b0_8 && b1_2 && b2_35 && b3_27 && b4_42 && b5_41 && b6_18) {
matched = true;
pattern_id = 253;
}
if(b0_4 && b1_7 && b2_52 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id = 254;
}
if(b0_31 && b1_43 && b2_26 && b3_3) {
matched = true;
pattern_id = 255;
}
if(b0_59 && b1_55 && b2_29 && b3_13) {
matched = true;
pattern_id = 256;
}
if(b0_57 && b1_37) {
matched = true;
pattern_id = 257;
}
if(b0_28 && b1_27 && b2_27) {
matched = true;
pattern_id = 258;
}
if(b0_32 && b1_27 && b2_33 && b3_28) {
matched = true;
pattern_id = 259;
}
if(b0_14 && b1_57 && b2_27) {
matched = true;
pattern_id = 260;
}
if(b0_49 && b1_27 && b2_26 && b3_21 && b4_34 && b5_34) {
matched = true;
pattern_id = 261;
}
if(b0_38 && b1_15 && b2_23 && b3_23) {
matched = true;
pattern_id = 262;
}
if(b0_29 && b1_32 && b2_23 && b3_3 && b4_12) {
matched = true;
pattern_id = 263;
}
if(b0_25 && b1_15 && b2_4 && b3_49) {
matched = true;
pattern_id = 264;
}
if(b0_29 && b1_15 && b2_58 && b3_21) {
matched = true;
pattern_id = 265;
}
if(b0_41 && b1_19 && b2_27 && b3_34 && b4_43 && b5_20) {
matched = true;
pattern_id = 266;
}
if(b0_60) {
matched = true;
pattern_id = 267;
}
if(b0_1 && b1_37 && b2_32 && b3_51 && b4_44 && b5_42 && b6_19) {
matched = true;
pattern_id = 268;
}
if(b0_30 && b1_57 && b2_48 && b3_34 && b4_45) {
matched = true;
pattern_id = 269;
}
if(b0_45 && b1_55) {
matched = true;
pattern_id = 270;
}
if(b0_18 && b1_20 && b2_11 && b3_18 && b4_7) {
matched = true;
pattern_id = 271;
}
if(b0_40 && b1_10 && b2_43 && b3_16 && b4_5 && b5_13) {
matched = true;
pattern_id = 272;
}
if(b0_55 && b1_15 && b2_59 && b3_48 && b4_40 && b5_18 && b6_20) {
matched = true;
pattern_id = 273;
}
if(b0_14 && b1_30 && b2_27 && b3_20 && b4_46 && b5_3 && b6_1) {
matched = true;
pattern_id = 274;
}
if(b0_61 && b1_29 && b2_15 && b3_28 && b4_31 && b5_9) {
matched = true;
pattern_id = 275;
}
if(b0_12 && b1_39 && b2_29 && b3_28 && b4_31 && b5_9) {
matched = true;
pattern_id = 276;
}
if(b0_26 && b1_60 && b2_29) {
matched = true;
pattern_id = 277;
}
if(b0_28 && b1_46 && b2_27) {
matched = true;
pattern_id = 278;
}
if(b0_31 && b1_54 && b2_4 && b3_21 && b4_1 && b5_43) {
matched = true;
pattern_id = 279;
}
if(b0_48 && b1_58 && b2_33 && b3_51 && b4_31 && b5_44 && b6_21) {
matched = true;
pattern_id = 280;
}
if(b0_1 && b1_27 && b2_27 && b3_48 && b4_40) {
matched = true;
pattern_id = 281;
}
if(b0_12 && b1_4 && b2_33 && b3_34 && b4_47 && b5_29) {
matched = true;
pattern_id = 282;
}
if(b0_26 && b1_46 && b2_49 && b3_2) {
matched = true;
pattern_id = 283;
}
if(b0_26 && b1_29 && b2_49 && b3_52) {
matched = true;
pattern_id = 284;
}
if(b0_40 && b1_20 && b2_6 && b3_18 && b4_42 && b5_17) {
matched = true;
pattern_id = 285;
}
if(b0_4 && b1_7 && b2_28 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id = 286;
}
if(b0_24 && b1_41 && b2_38 && b3_16) {
matched = true;
pattern_id = 287;
}
if(b0_57 && b1_15 && b2_22 && b3_53 && b4_39 && b5_45 && b6_22) {
matched = true;
pattern_id = 288;
}
if(b0_37) {
matched = true;
pattern_id = 289;
}
if(b0_24 && b1_42 && b2_39 && b3_54) {
matched = true;
pattern_id = 290;
}
if(b0_41) {
matched = true;
pattern_id = 291;
}
if(b0_4 && b1_7 && b2_7 && b3_20 && b4_32) {
matched = true;
pattern_id = 292;
}
if(b0_4 && b1_7 && b2_7 && b3_20 && b4_34) {
matched = true;
pattern_id = 293;
}
if(b0_42 && b1_46 && b2_58 && b3_45 && b4_34 && b5_34) {
matched = true;
pattern_id = 294;
}
if(b0_51 && b1_14 && b2_7 && b3_20 && b4_46 && b5_3 && b6_1) {
matched = true;
pattern_id = 295;
}
if(b0_37 && b1_12 && b2_14 && b3_9 && b4_42 && b5_8 && b6_4) {
matched = true;
pattern_id = 296;
}
if(b0_39 && b1_54 && b2_25 && b3_52 && b4_38 && b5_31 && b6_23) {
matched = true;
pattern_id = 297;
}
if(b0_62 && b1_10 && b2_60) {
matched = true;
pattern_id = 298;
}
if(b0_39 && b1_4 && b2_3 && b3_51 && b4_43 && b5_32) {
matched = true;
pattern_id = 299;
}
if(b0_39 && b1_4 && b2_48 && b3_25 && b4_48) {
matched = true;
pattern_id = 300;
}
if(b0_39 && b1_54 && b2_33 && b3_34 && b4_40 && b5_32) {
matched = true;
pattern_id = 301;
}
if(b0_36 && b1_7 && b2_7 && b3_5 && b4_4 && b5_41) {
matched = true;
pattern_id = 302;
}
if(b0_37 && b1_16 && b2_14 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id = 303;
}
if(b0_37 && b1_9 && b2_6 && b3_35 && b4_3 && b5_37 && b6_14) {
matched = true;
pattern_id = 304;
}
if(b0_63 && b1_7 && b2_28) {
matched = true;
pattern_id = 305;
}
if(b0_4 && b1_61 && b2_3 && b3_4 && b4_49 && b5_46 && b6_1) {
matched = true;
pattern_id = 306;
}
if(b0_37 && b1_38 && b2_42 && b3_55 && b4_30 && b5_41) {
matched = true;
pattern_id = 307;
}
if(b0_24 && b1_62 && b2_6 && b3_33) {
matched = true;
pattern_id = 308;
}
if(b0_4 && b1_14 && b2_49 && b3_20) {
matched = true;
pattern_id = 309;
}
if(b0_37 && b1_16 && b2_14 && b3_35 && b4_23 && b5_16 && b6_10) {
matched = true;
pattern_id = 310;
}
if(b0_40 && b1_38 && b2_11 && b3_26 && b4_23 && b5_13 && b6_24) {
matched = true;
pattern_id = 311;
}
if(b0_28 && b1_27 && b2_27 && b3_4 && b4_24 && b5_36) {
matched = true;
pattern_id = 312;
}
if(b0_64 && b1_6 && b2_54) {
matched = true;
pattern_id = 313;
}
if(b0_29 && b1_63) {
matched = true;
pattern_id = 314;
}
if(b0_23 && b1_12 && b2_37 && b3_56 && b4_11 && b5_47) {
matched = true;
pattern_id = 315;
}
if(b0_65 && b1_38 && b2_9 && b3_56 && b4_50) {
matched = true;
pattern_id = 316;
}
if(b0_24 && b1_41 && b2_13 && b3_31 && b4_38) {
matched = true;
pattern_id = 317;
}
if(b0_57 && b1_16 && b2_34 && b3_7 && b4_8 && b5_15 && b6_8) {
matched = true;
pattern_id = 318;
}
if(b0_14 && b1_1 && b2_46 && b3_16 && b4_5 && b5_48) {
matched = true;
pattern_id = 319;
}
if(b0_2 && b1_2 && b2_2 && b3_1 && b4_33 && b5_48 && b6_24) {
matched = true;
pattern_id = 320;
}
if(b0_66 && b1_2 && b2_61 && b3_27 && b4_11 && b5_30 && b6_25) {
matched = true;
pattern_id = 321;
}
if(b0_9 && b1_16 && b2_43 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id = 322;
}
if(b0_10 && b1_64 && b2_14 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id = 323;
}
if(b0_52 && b1_49 && b2_30 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id = 324;
}
if(b0_9 && b1_48 && b2_2 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id = 325;
}
if(b0_11 && b1_13 && b2_30 && b3_20 && b4_51 && b5_45 && b6_1) {
matched = true;
pattern_id = 326;
}
if(b0_37 && b1_53 && b2_52 && b3_35 && b4_6 && b5_17 && b6_26) {
matched = true;
pattern_id = 327;
}
if(b0_14 && b1_32) {
matched = true;
pattern_id = 328;
}
if(b0_37 && b1_52 && b2_34 && b3_43 && b4_8) {
matched = true;
pattern_id = 329;
}
if(b0_24 && b1_6 && b2_24 && b3_36 && b4_25) {
matched = true;
pattern_id = 330;
}
if(b0_37 && b1_52) {
matched = true;
pattern_id = 331;
}
if(b0_19 && b1_38 && b2_7 && b3_43) {
matched = true;
pattern_id = 332;
}
if(b0_67 && b1_65) {
matched = true;
pattern_id = 333;
}
if(b0_65 && b1_16 && b2_14 && b3_1 && b4_33 && b5_23 && b6_24) {
matched = true;
pattern_id = 334;
}
if(b0_37 && b1_53 && b2_18 && b3_35 && b4_6 && b5_17 && b6_26) {
matched = true;
pattern_id = 335;
}
if(b0_24 && b1_9 && b2_11 && b3_31 && b4_11) {
matched = true;
pattern_id = 336;
}
if(b0_12 && b1_29 && b2_4 && b3_44 && b4_46 && b5_27 && b6_18) {
matched = true;
pattern_id = 337;
}
if(b0_28 && b1_9 && b2_7 && b3_32 && b4_5) {
matched = true;
pattern_id = 338;
}
if(b0_24 && b1_8 && b2_12 && b3_18 && b4_52 && b5_16 && b6_24) {
matched = true;
pattern_id = 339;
}
if(b0_24 && b1_47 && b2_30 && b3_19) {
matched = true;
pattern_id = 340;
}
if(b0_37 && b1_52 && b2_40 && b3_43) {
matched = true;
pattern_id = 341;
}
if(b0_65 && b1_12 && b2_34 && b3_33 && b4_33 && b5_48 && b6_24) {
matched = true;
pattern_id = 342;
}
if(b0_24 && b1_47 && b2_14 && b3_14 && b4_23) {
matched = true;
pattern_id = 343;
}
if(b0_24 && b1_51 && b2_6 && b3_36) {
matched = true;
pattern_id = 344;
}
if(b0_24 && b1_20 && b2_38) {
matched = true;
pattern_id = 345;
}
if(b0_58 && b1_6 && b2_11 && b3_57 && b4_27) {
matched = true;
pattern_id = 346;
}
if(b0_4 && b1_66 && b2_5 && b3_4 && b4_46 && b5_3 && b6_1) {
matched = true;
pattern_id = 347;
}
if(b0_37 && b1_38 && b2_6 && b3_1 && b4_10 && b5_19 && b6_4) {
matched = true;
pattern_id = 348;
}
if(b0_26 && b1_8 && b2_16 && b3_18 && b4_33 && b5_23 && b6_27) {
matched = true;
pattern_id = 349;
}
if(b0_37 && b1_6 && b2_13 && b3_32 && b4_5) {
matched = true;
pattern_id = 350;
}
if(b0_37 && b1_19 && b2_15 && b3_46 && b4_43 && b5_31) {
matched = true;
pattern_id = 351;
}
if(b0_37 && b1_14 && b2_7) {
matched = true;
pattern_id = 352;
}
if(b0_8 && b1_16 && b2_2 && b3_1 && b4_8) {
matched = true;
pattern_id = 353;
}
if(b0_37 && b1_38 && b2_11 && b3_16 && b4_5 && b5_36) {
matched = true;
pattern_id = 354;
}
if(b0_68 && b1_67 && b2_38 && b3_1 && b4_50) {
matched = true;
pattern_id = 355;
}
if(b0_14 && b1_15 && b2_29 && b3_34 && b4_20 && b5_20) {
matched = true;
pattern_id = 356;
}
if(b0_37 && b1_7 && b2_36 && b3_19 && b4_33 && b5_40 && b6_28) {
matched = true;
pattern_id = 357;
}
if(b0_37 && b1_10 && b2_43 && b3_44) {
matched = true;
pattern_id = 358;
}
if(b0_10 && b1_34 && b2_2) {
matched = true;
pattern_id = 359;
}
if(b0_37 && b1_49 && b2_43 && b3_44) {
matched = true;
pattern_id = 360;
}
if(b0_9 && b1_12 && b2_38 && b3_9 && b4_17 && b5_41) {
matched = true;
pattern_id = 361;
}
if(b0_69 && b1_68 && b2_1 && b3_58) {
matched = true;
pattern_id = 362;
}
if(b0_3 && b1_3 && b2_3 && b3_2 && b4_20) {
matched = true;
pattern_id = 363;
}
if(b0_37 && b1_35 && b2_42) {
matched = true;
pattern_id = 364;
}
if(b0_14 && b1_30 && b2_29 && b3_22 && b4_20) {
matched = true;
pattern_id = 365;
}
if(b0_37 && b1_34 && b2_13 && b3_10 && b4_44) {
matched = true;
pattern_id = 366;
}
if(b0_32 && b1_19 && b2_58 && b3_56 && b4_53) {
matched = true;
pattern_id = 367;
}
if(b0_41 && b1_69 && b2_62 && b3_4 && b4_54) {
matched = true;
pattern_id = 368;
}
if(b0_37 && b1_53 && b2_30 && b3_10 && b4_8 && b5_17 && b6_8) {
matched = true;
pattern_id = 369;
}
if(b0_45 && b1_37 && b2_33 && b3_22 && b4_31 && b5_49) {
matched = true;
pattern_id = 370;
}
if(b0_69 && b1_56 && b2_7 && b3_5 && b4_35) {
matched = true;
pattern_id = 371;
}
if(b0_49 && b1_27 && b2_53 && b3_34 && b4_16 && b5_50) {
matched = true;
pattern_id = 372;
}
if(b0_4 && b1_18 && b2_23 && b3_4 && b4_55 && b5_45 && b6_1) {
matched = true;
pattern_id = 373;
}
if(b0_32 && b1_4 && b2_27 && b3_25 && b4_24 && b5_31) {
matched = true;
pattern_id = 374;
}
if(b0_57 && b1_52 && b2_12 && b3_31 && b4_11) {
matched = true;
pattern_id = 375;
}
if(b0_41 && b1_27 && b2_48 && b3_52) {
matched = true;
pattern_id = 376;
}
if(b0_70 && b1_10 && b2_6 && b3_32 && b4_37) {
matched = true;
pattern_id = 377;
}
if(b0_37 && b1_16 && b2_14 && b3_32 && b4_5 && b5_36) {
matched = true;
pattern_id = 378;
}
if(b0_37 && b1_12 && b2_11 && b3_53 && b4_17 && b5_20 && b6_29) {
matched = true;
pattern_id = 379;
}
if(b0_37 && b1_48 && b2_43 && b3_6 && b4_24) {
matched = true;
pattern_id = 380;
}
if(b0_10 && b1_48 && b2_21 && b3_31 && b4_10 && b5_41) {
matched = true;
pattern_id = 381;
}
if(b0_37 && b1_6 && b2_17 && b3_9 && b4_30 && b5_20) {
matched = true;
pattern_id = 382;
}
if(b0_24 && b1_34 && b2_13 && b3_10) {
matched = true;
pattern_id = 383;
}
if(b0_24 && b1_38 && b2_8 && b3_33 && b4_25) {
matched = true;
pattern_id = 384;
}
if(b0_37 && b1_10 && b2_30 && b3_55 && b4_13 && b5_41) {
matched = true;
pattern_id = 385;
}
if(b0_4 && b1_7 && b2_10 && b3_4 && b4_4 && b5_3 && b6_1) {
matched = true;
pattern_id = 386;
}
if(b0_19 && b1_2 && b2_2 && b3_1 && b4_50) {
matched = true;
pattern_id = 387;
}
if(b0_25 && b1_15 && b2_15 && b3_42 && b4_39 && b5_45 && b6_22) {
matched = true;
pattern_id = 388;
}
if(b0_4 && b1_11 && b2_63 && b3_4 && b4_4 && b5_51 && b6_1) {
matched = true;
pattern_id = 389;
}
if(b0_2 && b1_16 && b2_7 && b3_5) {
matched = true;
pattern_id = 390;
}
if(b0_24 && b1_44 && b2_6 && b3_24) {
matched = true;
pattern_id = 391;
}
if(b0_63 && b1_7 && b2_56) {
matched = true;
pattern_id = 392;
}
if(b0_24 && b1_6 && b2_24 && b3_36 && b4_25 && b5_48 && b6_24) {
matched = true;
pattern_id = 393;
}
if(b0_71 && b1_13 && b2_2 && b3_1 && b4_50) {
matched = true;
pattern_id = 394;
}
if(b0_37 && b1_12 && b2_30 && b3_27 && b4_24) {
matched = true;
pattern_id = 395;
}
if(b0_67 && b1_7 && b2_25 && b3_43 && b4_4 && b5_18) {
matched = true;
pattern_id = 396;
}
if(b0_18 && b1_44 && b2_13 && b3_57 && b4_5 && b5_52) {
matched = true;
pattern_id = 397;
}
if(b0_37 && b1_70 && b2_19) {
matched = true;
pattern_id = 398;
}
if(b0_1 && b1_10 && b2_21 && b3_19) {
matched = true;
pattern_id = 399;
}
if(b0_72 && b1_66 && b2_63) {
matched = true;
pattern_id = 400;
}
if(b0_48 && b1_10 && b2_17 && b3_9 && b4_7) {
matched = true;
pattern_id = 401;
}
if(b0_37 && b1_34 && b2_39 && b3_35 && b4_56 && b5_23 && b6_30) {
matched = true;
pattern_id = 402;
}
if(b0_9 && b1_16 && b2_38 && b3_43) {
matched = true;
pattern_id = 403;
}

}