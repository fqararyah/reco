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

void match(bool &matched, int &pattern_id, char buffer[buffer_size]) {
for(int i=0; i<buffer_size; i++){
if('q' == buffer[i] && 'a' == buffer[i+1] && 'z' == buffer[i+2] && 'w' == buffer[i+3] && 's' == buffer[i+4] && 'x' == buffer[i+5] && '.' == buffer[i+6] && 'h' == buffer[i+7] && 's' == buffer[i+8] && 'q' == buffer[i+9]) {
 matched = true;
pattern_id = 0 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'I' == buffer[i+3] && 'n' == buffer[i+4] && 'f' == buffer[i+5] && 'o' == buffer[i+6] && '|' == buffer[i+7] && '0' == buffer[i+8] && 'D' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && 'N' == buffer[i+1] && '|' == buffer[i+2] && '1' == buffer[i+3] && '0' == buffer[i+4] && ' ' == buffer[i+5] && '0' == buffer[i+6] && '0' == buffer[i+7] && ' ' == buffer[i+8] && '0' == buffer[i+9] && '2' == buffer[i+10] && ' ' == buffer[i+11] && '0' == buffer[i+12] && '0' == buffer[i+13] && '|' == buffer[i+14]) {
 matched = true;
pattern_id = 2 ;
}
}
for(int i=0; i<buffer_size; i++){
if('W' == buffer[i] && 'H' == buffer[i+1] && 'A' == buffer[i+2] && 'T' == buffer[i+3] && 'I' == buffer[i+4] && 'S' == buffer[i+5] && 'I' == buffer[i+6] && 'T' == buffer[i+7]) {
 matched = true;
pattern_id = 3 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'e' == buffer[i+1] && 'm' == buffer[i+2] && 'o' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && '|' == buffer[i+6] && '3' == buffer[i+7] && 'A' == buffer[i+8] && '|' == buffer[i+9] && ' ' == buffer[i+10]) {
 matched = true;
pattern_id = 4 ;
}
}
for(int i=0; i<buffer_size; i++){
if('W' == buffer[i] && 't' == buffer[i+1] && 'z' == buffer[i+2] && 'u' == buffer[i+3] && 'p' == buffer[i+4] && ' ' == buffer[i+5] && 'U' == buffer[i+6] && 's' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 5 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'C' == buffer[i+1] && ' ' == buffer[i+2]) {
 matched = true;
pattern_id = 6 ;
}
}
for(int i=0; i<buffer_size; i++){
if('h' == buffer[i] && 'o' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3]) {
 matched = true;
pattern_id = 7 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 'S' == buffer[i+1] && 'E' == buffer[i+2] && 'R' == buffer[i+3]) {
 matched = true;
pattern_id = 8 ;
}
}
for(int i=0; i<buffer_size; i++){
if('N' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'S' == buffer[i+3] && 'p' == buffer[i+4] && 'h' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 9 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'e' == buffer[i+3] && 'C' == buffer[i+4] && 'r' == buffer[i+5] && 'a' == buffer[i+6] && 's' == buffer[i+7] && 'h' == buffer[i+8] && 'e' == buffer[i+9] && 'r' == buffer[i+10]) {
 matched = true;
pattern_id = 10 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && '|' == buffer[i+1] && '3' == buffer[i+2] && 'A' == buffer[i+3] && ' ' == buffer[i+4] && '5' == buffer[i+5] && 'C' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 11 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'T' == buffer[i+1] && 'P' == buffer[i+2] && 'O' == buffer[i+3] && 'N' == buffer[i+4]) {
 matched = true;
pattern_id = 12 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'T' == buffer[i+1] && 'P' == buffer[i+2] && ' ' == buffer[i+3] && 'P' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 't' == buffer[i+7] && ' ' == buffer[i+8] && 'o' == buffer[i+9] && 'p' == buffer[i+10] && 'e' == buffer[i+11] && 'n' == buffer[i+12]) {
 matched = true;
pattern_id = 13 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'c' == buffer[i+1] && 't' == buffer[i+2] && 'i' == buffer[i+3] && 'v' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 14 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'g' == buffer[i+3] && 'e' == buffer[i+4] && 'd' == buffer[i+5] && ' ' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8]) {
 matched = true;
pattern_id = 15 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'B' == buffer[i+1] && '4' == buffer[i+2] && ' ' == buffer[i+3] && 'B' == buffer[i+4] && '4' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 16 ;
}
}
for(int i=0; i<buffer_size; i++){
if('y' == buffer[i] && 'p' == buffer[i+1] && 'i' == buffer[i+2] && '0' == buffer[i+3] && 'c' == buffer[i+4] && 'a' == buffer[i+5]) {
 matched = true;
pattern_id = 17 ;
}
}
for(int i=0; i<buffer_size; i++){
if('w' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && 'w' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5]) {
 matched = true;
pattern_id = 18 ;
}
}
for(int i=0; i<buffer_size; i++){
if('b' == buffer[i] && 'a' == buffer[i+1] && 'c' == buffer[i+2] && 'k' == buffer[i+3] && 'd' == buffer[i+4] && 'o' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7]) {
 matched = true;
pattern_id = 19 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && 't' == buffer[i+3]) {
 matched = true;
pattern_id = 20 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'e' == buffer[i+1] && 'w' == buffer[i+2] && 't' == buffer[i+3]) {
 matched = true;
pattern_id = 21 ;
}
}
for(int i=0; i<buffer_size; i++){
if('w' == buffer[i] && 'h' == buffer[i+1] && '0' == buffer[i+2] && '0' == buffer[i+3] && 't' == buffer[i+4] && '!' == buffer[i+5]) {
 matched = true;
pattern_id = 22 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'r' == buffer[i+1] && 'k' == buffer[i+2] && 'r' == buffer[i+3] && '0' == buffer[i+4] && 'x' == buffer[i+5]) {
 matched = true;
pattern_id = 23 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && '1' == buffer[i+1] && '3' == buffer[i+2] && 'h' == buffer[i+3] && 'h' == buffer[i+4] && '[' == buffer[i+5]) {
 matched = true;
pattern_id = 24 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4] && 'i' == buffer[i+5]) {
 matched = true;
pattern_id = 25 ;
}
}
for(int i=0; i<buffer_size; i++){
if('h' == buffer[i] && 'a' == buffer[i+1] && 'x' == buffer[i+2] && '0' == buffer[i+3] && 'r' == buffer[i+4]) {
 matched = true;
pattern_id = 26 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'r' == buffer[i+1] && 'i' == buffer[i+2] && 'd' == buffer[i+3] && 'a' == buffer[i+4] && 'y' == buffer[i+5]) {
 matched = true;
pattern_id = 27 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 't' == buffer[i+1] && 'o' == buffer[i+2] && 'o' == buffer[i+3] && 'g' == buffer[i+4] && 'R' == buffer[i+5]) {
 matched = true;
pattern_id = 28 ;
}
}
for(int i=0; i<buffer_size; i++){
if('w' == buffer[i] && 'a' == buffer[i+1] && 'n' == buffer[i+2] && 'k' == buffer[i+3]) {
 matched = true;
pattern_id = 29 ;
}
}
for(int i=0; i<buffer_size; i++){
if('1' == buffer[i] && '2' == buffer[i+1] && '3' == buffer[i+2] && '4' == buffer[i+3]) {
 matched = true;
pattern_id = 30 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'A' == buffer[i+1] && 'A' == buffer[i+2] && 'A' == buffer[i+3] && 'A' == buffer[i+4] && 'A' == buffer[i+5] && 'A' == buffer[i+6] && 'A' == buffer[i+7] && 'A' == buffer[i+8] && 'A' == buffer[i+9]) {
 matched = true;
pattern_id = 31 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'O' == buffer[i+1] && 'N' == buffer[i+2] && 'G' == buffer[i+3]) {
 matched = true;
pattern_id = 32 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'i' == buffer[i+1] && 'c' == buffer[i+2] && 'k' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5]) {
 matched = true;
pattern_id = 33 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'i' == buffer[i+1] && 'c' == buffer[i+2] && 'k' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5]) {
 matched = true;
pattern_id = 34 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 'o' == buffer[i+3] && 'f' == buffer[i+4] && 'w' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && 'k' == buffer[i+8] && 's' == buffer[i+9]) {
 matched = true;
pattern_id = 35 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'k' == buffer[i+1] && 'i' == buffer[i+2] && 'l' == buffer[i+3] && 'l' == buffer[i+4] && 'z' == buffer[i+5]) {
 matched = true;
pattern_id = 36 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && '|' == buffer[i+5] && '3' == buffer[i+6] && 'A' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 37 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && '4' == buffer[i+1] && '4' == buffer[i+2]) {
 matched = true;
pattern_id = 38 ;
}
}
for(int i=0; i<buffer_size; i++){
if('*' == buffer[i] && 'H' == buffer[i+1] && 'E' == buffer[i+2] && 'L' == buffer[i+3] && 'L' == buffer[i+4] && 'O' == buffer[i+5] && '*' == buffer[i+6]) {
 matched = true;
pattern_id = 39 ;
}
}
for(int i=0; i<buffer_size; i++){
if('b' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 'a' == buffer[i+4] && 'l' == buffer[i+5] && 'm' == buffer[i+6] && 'o' == buffer[i+7] && 's' == buffer[i+8] && 't' == buffer[i+9] && 'd' == buffer[i+10] && 'o' == buffer[i+11] && 'n' == buffer[i+12] && 'e' == buffer[i+13]) {
 matched = true;
pattern_id = 40 ;
}
}
for(int i=0; i<buffer_size; i++){
if('g' == buffer[i] && 'O' == buffer[i+1] && 'r' == buffer[i+2] && 'a' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5]) {
 matched = true;
pattern_id = 41 ;
}
}
for(int i=0; i<buffer_size; i++){
if('k' == buffer[i] && 'i' == buffer[i+1] && 'l' == buffer[i+2] && 'l' == buffer[i+3] && 'm' == buffer[i+4] && 'e' == buffer[i+5]) {
 matched = true;
pattern_id = 42 ;
}
}
for(int i=0; i<buffer_size; i++){
if('g' == buffer[i] && 'e' == buffer[i+1] && 's' == buffer[i+2] && 'u' == buffer[i+3] && 'n' == buffer[i+4] && 'd' == buffer[i+5] && 'h' == buffer[i+6] && 'e' == buffer[i+7] && 'i' == buffer[i+8] && 't' == buffer[i+9] && '!' == buffer[i+10]) {
 matched = true;
pattern_id = 43 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && '4' == buffer[i+1] && '4' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 's' == buffer[i+5] && 'l' == buffer[i+6]) {
 matched = true;
pattern_id = 44 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'h' == buffer[i+1] && 'e' == buffer[i+2] && 'l' == buffer[i+3] && 'l' == buffer[i+4] && ' ' == buffer[i+5] && 'b' == buffer[i+6] && 'o' == buffer[i+7] && 'u' == buffer[i+8] && 'n' == buffer[i+9] && 'd' == buffer[i+10]) {
 matched = true;
pattern_id = 45 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'i' == buffer[i+2] && 'v' == buffer[i+3] && 'e' == buffer[i+4] && ' ' == buffer[i+5] && 't' == buffer[i+6] && 'i' == buffer[i+7] && 'j' == buffer[i+8] && 'g' == buffer[i+9] && 'u' == buffer[i+10]) {
 matched = true;
pattern_id = 46 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'i' == buffer[i+2] && 'v' == buffer[i+3] && 'e' == buffer[i+4]) {
 matched = true;
pattern_id = 47 ;
}
}
for(int i=0; i<buffer_size; i++){
if('n' == buffer[i] && 'e' == buffer[i+1] && 'w' == buffer[i+2] && 's' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && 'v' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8]) {
 matched = true;
pattern_id = 48 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 't' == buffer[i+1] && 'r' == buffer[i+2] && 'e' == buffer[i+3] && 'a' == buffer[i+4] && 'm' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 49 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'g' == buffer[i+3]) {
 matched = true;
pattern_id = 50 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 'g' == buffer[i+3]) {
 matched = true;
pattern_id = 51 ;
}
}
for(int i=0; i<buffer_size; i++){
if('>' == buffer[i]) {
 matched = true;
pattern_id = 52 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '8' == buffer[i+1] && '1' == buffer[i+2] && ' ' == buffer[i+3] && '8' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 53 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '7' == buffer[i+2] && '|' == buffer[i+3] && 'a' == buffer[i+4] && 'u' == buffer[i+5] && 't' == buffer[i+6] && 'h' == buffer[i+7] && 'o' == buffer[i+8] && 'r' == buffer[i+9] && 's' == buffer[i+10]) {
 matched = true;
pattern_id = 54 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '7' == buffer[i+2] && '|' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && 's' == buffer[i+7] && 'i' == buffer[i+8] && 'o' == buffer[i+9] && 'n' == buffer[i+10]) {
 matched = true;
pattern_id = 55 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && '.' == buffer[i+1] && '/' == buffer[i+2] && '.' == buffer[i+3] && '.' == buffer[i+4] && '/' == buffer[i+5] && '.' == buffer[i+6] && '.' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 56 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'D' == buffer[i+1] && 'M' == buffer[i+2] && 'R' == buffer[i+3] && 'O' == buffer[i+4] && 'C' == buffer[i+5] && 'K' == buffer[i+6] && 'S' == buffer[i+7]) {
 matched = true;
pattern_id = 57 ;
}
}
for(int i=0; i<buffer_size; i++){
if('+' == buffer[i] && '+' == buffer[i+1] && '+' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'h' == buffer[i+5]) {
 matched = true;
pattern_id = 58 ;
}
}
for(int i=0; i<buffer_size; i++){
if('N' == buffer[i] && 'A' == buffer[i+1] && 'M' == buffer[i+2] && 'E' == buffer[i+3] && 'N' == buffer[i+4] && 'A' == buffer[i+5] && 'M' == buffer[i+6] && 'E' == buffer[i+7]) {
 matched = true;
pattern_id = 59 ;
}
}
for(int i=0; i<buffer_size; i++){
if('w' == buffer[i] && 'h' == buffer[i+1] && 'o' == buffer[i+2] && 'i' == buffer[i+3] && 's' == buffer[i+4] && '|' == buffer[i+5] && '3' == buffer[i+6] && 'A' == buffer[i+7] && '|' == buffer[i+8] && '/' == buffer[i+9] && '/' == buffer[i+10]) {
 matched = true;
pattern_id = 60 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && ' ' == buffer[i+3] && '/' == buffer[i+4] && ' ' == buffer[i+5] && 'H' == buffer[i+6] && 'T' == buffer[i+7] && 'T' == buffer[i+8] && 'P' == buffer[i+9] && '/' == buffer[i+10] && '1' == buffer[i+11] && '.' == buffer[i+12] && '1' == buffer[i+13]) {
 matched = true;
pattern_id = 61 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'm' == buffer[i+1] && 'd' == buffer[i+2] && '_' == buffer[i+3] && 'r' == buffer[i+4] && 'o' == buffer[i+5] && 'o' == buffer[i+6] && 't' == buffer[i+7] && 's' == buffer[i+8] && 'h' == buffer[i+9]) {
 matched = true;
pattern_id = 62 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && ' ' == buffer[i+1] && 'b' == buffer[i+2] && ' ' == buffer[i+3] && 'c' == buffer[i+4] && ' ' == buffer[i+5] && 'd' == buffer[i+6] && ' ' == buffer[i+7] && 'e' == buffer[i+8] && ' ' == buffer[i+9] && 'f' == buffer[i+10]) {
 matched = true;
pattern_id = 63 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 'a' == buffer[i+2] && 'r' == buffer[i+3] && 'c' == buffer[i+4] && 'h' == buffer[i+5]) {
 matched = true;
pattern_id = 64 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'o' == buffer[i+1] && 'o' == buffer[i+2] && 't' == buffer[i+3]) {
 matched = true;
pattern_id = 65 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 66 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '3' == buffer[i+1] && 'B' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 67 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '7' == buffer[i+1] && 'C' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 68 ;
}
}
for(int i=0; i<buffer_size; i++){
if('@' == buffer[i] && '@' == buffer[i+1]) {
 matched = true;
pattern_id = 69 ;
}
}
for(int i=0; i<buffer_size; i++){
if('@' == buffer[i]) {
 matched = true;
pattern_id = 70 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'A' == buffer[i+2] && '|' == buffer[i+3] && ' ' == buffer[i+4] && ' ' == buffer[i+5] && ' ' == buffer[i+6] && ' ' == buffer[i+7] && ' ' == buffer[i+8]) {
 matched = true;
pattern_id = 71 ;
}
}
for(int i=0; i<buffer_size; i++){
if('0' == buffer[i]) {
 matched = true;
pattern_id = 72 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i]) {
 matched = true;
pattern_id = 73 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'r' == buffer[i+3] && 'w' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'd' == buffer[i+7]) {
 matched = true;
pattern_id = 74 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'r' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 's' == buffer[i+4] && 't' == buffer[i+5] && 's' == buffer[i+6]) {
 matched = true;
pattern_id = 75 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'W' == buffer[i+1] && 'D' == buffer[i+2]) {
 matched = true;
pattern_id = 76 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'E' == buffer[i+1] && 'L' == buffer[i+2]) {
 matched = true;
pattern_id = 77 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'A' == buffer[i+1] && 'S' == buffer[i+2] && 'S' == buffer[i+3] && ' ' == buffer[i+4] && 'd' == buffer[i+5] && 'd' == buffer[i+6] && 'd' == buffer[i+7] && '@' == buffer[i+8] && '|' == buffer[i+9] && '0' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 78 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 's' == buffer[i+3] && ' ' == buffer[i+4] && '-' == buffer[i+5] && 'i' == buffer[i+6] && 's' == buffer[i+7] && 's' == buffer[i+8] && '@' == buffer[i+9] && 'i' == buffer[i+10] && 's' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 79 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 's' == buffer[i+3] && ' ' == buffer[i+4] && 'w' == buffer[i+5] && 'h' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 80 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && 'R' == buffer[i+3]) {
 matched = true;
pattern_id = 81 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 's' == buffer[i+3] && ' ' == buffer[i+4] && '-' == buffer[i+5] && 'c' == buffer[i+6] && 'k' == buffer[i+7] && 'l' == buffer[i+8] && 'a' == buffer[i+9] && 'u' == buffer[i+10] && 's' == buffer[i+11]) {
 matched = true;
pattern_id = 82 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 's' == buffer[i+3] && ' ' == buffer[i+4] && '-' == buffer[i+5] && 's' == buffer[i+6] && 'a' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 83 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 's' == buffer[i+3] && ' ' == buffer[i+4] && '-' == buffer[i+5] && 's' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8] && 'a' == buffer[i+9] && 'n' == buffer[i+10]) {
 matched = true;
pattern_id = 84 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && '%' == buffer[i+1] && '2' == buffer[i+2] && '0' == buffer[i+3] && '.' == buffer[i+4]) {
 matched = true;
pattern_id = 85 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'I' == buffer[i+1] && 'T' == buffer[i+2] && 'E' == buffer[i+3]) {
 matched = true;
pattern_id = 86 ;
}
}
for(int i=0; i<buffer_size; i++){
if('I' == buffer[i] && 'S' == buffer[i+1] && 'S' == buffer[i+2] && 'P' == buffer[i+3] && 'N' == buffer[i+4] && 'G' == buffer[i+5] && 'R' == buffer[i+6] && 'Q' == buffer[i+7]) {
 matched = true;
pattern_id = 87 ;
}
}
for(int i=0; i<buffer_size; i++){
if('8' == buffer[i] && '9' == buffer[i+1] && '|' == buffer[i+2] && '3' == buffer[i+3] && 'A' == buffer[i+4] && ' ' == buffer[i+5] && '3' == buffer[i+6] && 'B' == buffer[i+7] && '|' == buffer[i+8] && '<' == buffer[i+9] && '=' == buffer[i+10] && '>' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 88 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'A' == buffer[i+1] && 'S' == buffer[i+2] && 'S' == buffer[i+3]) {
 matched = true;
pattern_id = 89 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 't' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && 'M' == buffer[i+6] && 'a' == buffer[i+7] && 'i' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 90 ;
}
}
for(int i=0; i<buffer_size; i++){
if('5' == buffer[i] && '3' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3]) {
 matched = true;
pattern_id = 91 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && ' ' == buffer[i+5] && 'f' == buffer[i+6] && 'a' == buffer[i+7] && 'i' == buffer[i+8] && 'l' == buffer[i+9] && 'e' == buffer[i+10] && 'd' == buffer[i+11]) {
 matched = true;
pattern_id = 92 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '5' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6] && '>' == buffer[i+7]) {
 matched = true;
pattern_id = 93 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'D' == buffer[i+1] && 'M' == buffer[i+2] && 'I' == buffer[i+3] && 'N' == buffer[i+4] && 'I' == buffer[i+5] && 'S' == buffer[i+6] && 'T' == buffer[i+7] && 'R' == buffer[i+8] && 'A' == buffer[i+9] && 'T' == buffer[i+10] && 'O' == buffer[i+11] && 'R' == buffer[i+12]) {
 matched = true;
pattern_id = 94 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 't' == buffer[i+1] && 'p' == buffer[i+2] && '|' == buffer[i+3] && '3' == buffer[i+4] && 'A' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 95 ;
}
}
for(int i=0; i<buffer_size; i++){
if('I' == buffer[i] && 'n' == buffer[i+1] && 'v' == buffer[i+2] && 'a' == buffer[i+3] && 'l' == buffer[i+4] && 'i' == buffer[i+5] && 'd' == buffer[i+6] && ' ' == buffer[i+7] && 'l' == buffer[i+8] && 'o' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11] && 'n' == buffer[i+12]) {
 matched = true;
pattern_id = 96 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && ' ' == buffer[i+3]) {
 matched = true;
pattern_id = 97 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '2' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 98 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && '.' == buffer[i+1]) {
 matched = true;
pattern_id = 99 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && '|' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 100 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && ' ' == buffer[i+9] && '0' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 101 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'S' == buffer[i+1] && 'G' == buffer[i+2] && ' ' == buffer[i+3]) {
 matched = true;
pattern_id = 102 ;
}
}
for(int i=0; i<buffer_size; i++){
if('N' == buffer[i] && 'I' == buffer[i+1] && 'C' == buffer[i+2] && 'K' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 103 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'T' == buffer[i+1] && 'O' == buffer[i+2] && 'R' == buffer[i+3]) {
 matched = true;
pattern_id = 104 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'W' == buffer[i+1] && 'D' == buffer[i+2] && ' ' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 105 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'K' == buffer[i+1] && 'D' == buffer[i+2] && ' ' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 106 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'K' == buffer[i+1] && 'D' == buffer[i+2] && ' ' == buffer[i+3] && '.' == buffer[i+4]) {
 matched = true;
pattern_id = 107 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'K' == buffer[i+1] && 'D' == buffer[i+2]) {
 matched = true;
pattern_id = 108 ;
}
}
for(int i=0; i<buffer_size; i++){
if('W' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'G' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && '>' == buffer[i+7]) {
 matched = true;
pattern_id = 109 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'N' == buffer[i+1] && 'U' == buffer[i+2] && 'T' == buffer[i+3] && 'E' == buffer[i+4] && 'L' == buffer[i+5] && 'L' == buffer[i+6] && 'A' == buffer[i+7] && ' ' == buffer[i+8] && 'O' == buffer[i+9] && 'K' == buffer[i+10]) {
 matched = true;
pattern_id = 110 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'F' == buffer[i+1] && 'B' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4]) {
 matched = true;
pattern_id = 111 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'T' == buffer[i+1]) {
 matched = true;
pattern_id = 112 ;
}
}
for(int i=0; i<buffer_size; i++){
if('5' == buffer[i] && '5' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '5' == buffer[i+4] && '.' == buffer[i+5] && '7' == buffer[i+6] && '.' == buffer[i+7] && '1' == buffer[i+8]) {
 matched = true;
pattern_id = 113 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '7' == buffer[i+8] && ' ' == buffer[i+9] && '9' == buffer[i+10] && '9' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 114 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'A' == buffer[i+10] && '5' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 115 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'A' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 116 ;
}
}
for(int i=0; i<buffer_size; i++){
if('b' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && '|' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6] && 'b' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && '|' == buffer[i+10] && '0' == buffer[i+11] && '0' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 117 ;
}
}
for(int i=0; i<buffer_size; i++){
if('-' == buffer[i] && 'f' == buffer[i+1] && 'r' == buffer[i+2] && 'o' == buffer[i+3] && 'o' == buffer[i+4] && 't' == buffer[i+5] && '|' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 118 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && ' ' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'c' == buffer[i+8] && 'o' == buffer[i+9] && 'r' == buffer[i+10] && 'r' == buffer[i+11] && 'e' == buffer[i+12] && 'c' == buffer[i+13] && 't' == buffer[i+14]) {
 matched = true;
pattern_id = 119 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && '|' == buffer[i+3] && 'r' == buffer[i+4] && 'o' == buffer[i+5] && 'o' == buffer[i+6] && 't' == buffer[i+7] && '|' == buffer[i+8] && '0' == buffer[i+9] && '0' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 120 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'A' == buffer[i+10] && '2' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 121 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i]) {
 matched = true;
pattern_id = 122 ;
}
}
for(int i=0; i<buffer_size; i++){
if('V' == buffer[i] && 'E' == buffer[i+1] && 'R' == buffer[i+2] && 'S' == buffer[i+3] && 'I' == buffer[i+4] && 'O' == buffer[i+5] && 'N' == buffer[i+6] && '|' == buffer[i+7] && '0' == buffer[i+8] && 'A' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 123 ;
}
}
for(int i=0; i<buffer_size; i++){
if('e' == buffer[i] && 'x' == buffer[i+1] && 'p' == buffer[i+2] && 'n' == buffer[i+3] && ' ' == buffer[i+4] && 'c' == buffer[i+5] && 'y' == buffer[i+6] && 'b' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && 'c' == buffer[i+10] && 'o' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 124 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'n' == buffer[i+3] && 'd' == buffer[i+4] && 'a' == buffer[i+5]) {
 matched = true;
pattern_id = 125 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'y' == buffer[i+1] && 'b' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'o' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 126 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'B' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && 'B' == buffer[i+4] && '5' == buffer[i+5] && ' ' == buffer[i+6] && 'C' == buffer[i+7] && 'D' == buffer[i+8] && ' ' == buffer[i+9] && '8' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 127 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'B' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '1' == buffer[i+4] && '7' == buffer[i+5] && ' ' == buffer[i+6] && 'C' == buffer[i+7] && 'D' == buffer[i+8] && ' ' == buffer[i+9] && '8' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 128 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'c' == buffer[i+1] && 'p' == buffer[i+2] && 't' == buffer[i+3] && ' ' == buffer[i+4] && 't' == buffer[i+5] && 'o' == buffer[i+6] && '|' == buffer[i+7] && '3' == buffer[i+8] && 'A' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 129 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'A' == buffer[i+2] && '|' == buffer[i+3] && 'D' == buffer[i+4] && '/' == buffer[i+5]) {
 matched = true;
pattern_id = 130 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'E' == buffer[i+1] && 'L' == buffer[i+2] && 'P' == buffer[i+3]) {
 matched = true;
pattern_id = 131 ;
}
}
for(int i=0; i<buffer_size; i++){
if('e' == buffer[i] && 'x' == buffer[i+1] && 'p' == buffer[i+2] && 'n' == buffer[i+3]) {
 matched = true;
pattern_id = 132 ;
}
}
for(int i=0; i<buffer_size; i++){
if('v' == buffer[i] && 'r' == buffer[i+1] && 'f' == buffer[i+2] && 'y' == buffer[i+3]) {
 matched = true;
pattern_id = 133 ;
}
}
for(int i=0; i<buffer_size; i++){
if('4' == buffer[i] && 'D' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'f' == buffer[i+4] && 't' == buffer[i+5] && 's' == buffer[i+6]) {
 matched = true;
pattern_id = 134 ;
}
}
for(int i=0; i<buffer_size; i++){
if('O' == buffer[i] && 'u' == buffer[i+1] && 't' == buffer[i+2] && 'O' == buffer[i+3] && 'f' == buffer[i+4] && 'B' == buffer[i+5] && 'o' == buffer[i+6] && 'x' == buffer[i+7]) {
 matched = true;
pattern_id = 135 ;
}
}
for(int i=0; i<buffer_size; i++){
if('_' == buffer[i] && 'R' == buffer[i+1] && 'L' == buffer[i+2] && 'D' == buffer[i+3]) {
 matched = true;
pattern_id = 136 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'd' == buffer[i+1] && '_' == buffer[i+2] && 'l' == buffer[i+3] && 'i' == buffer[i+4] && 'b' == buffer[i+5] && 'r' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'y' == buffer[i+9] && '_' == buffer[i+10] && 'p' == buffer[i+11] && 'a' == buffer[i+12] && 't' == buffer[i+13] && 'h' == buffer[i+14]) {
 matched = true;
pattern_id = 137 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'o' == buffer[i+1] && ' ' == buffer[i+2] && 's' == buffer[i+3] && 'u' == buffer[i+4] && ' ' == buffer[i+5] && 'r' == buffer[i+6] && 'o' == buffer[i+7] && 'o' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 138 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && ' ' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'c' == buffer[i+8] && 'o' == buffer[i+9] && 'r' == buffer[i+10] && 'r' == buffer[i+11] && 'e' == buffer[i+12] && 'c' == buffer[i+13] && 't' == buffer[i+14]) {
 matched = true;
pattern_id = 139 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && '|' == buffer[i+5] && '3' == buffer[i+6] && 'A' == buffer[i+7] && '|' == buffer[i+8] && ' ' == buffer[i+9] && 'r' == buffer[i+10] && 'o' == buffer[i+11] && 'o' == buffer[i+12] && 't' == buffer[i+13]) {
 matched = true;
pattern_id = 140 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 's' == buffer[i+2] && 'x' == buffer[i+3] && '.' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 141 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && '.' == buffer[i+2] && 'c' == buffer[i+3] && 'g' == buffer[i+4] && 'i' == buffer[i+5]) {
 matched = true;
pattern_id = 142 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'Y' == buffer[i+1] && 'a' == buffer[i+2] && 'B' == buffer[i+3] && 'B' == buffer[i+4]) {
 matched = true;
pattern_id = 143 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'd' == buffer[i+4] && 'r' == buffer[i+5] && 'i' == buffer[i+6] && 'v' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9]) {
 matched = true;
pattern_id = 144 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && '_' == buffer[i+6] && 'r' == buffer[i+7] && 'a' == buffer[i+8] && 'w' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 145 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && '_' == buffer[i+6] && 'r' == buffer[i+7] && 'a' == buffer[i+8] && 'w' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 146 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && '/' == buffer[i+1] && 'H' == buffer[i+2] && 'T' == buffer[i+3] && 'T' == buffer[i+4] && 'P' == buffer[i+5] && '/' == buffer[i+6] && '1' == buffer[i+7] && '.' == buffer[i+8]) {
 matched = true;
pattern_id = 147 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'p' == buffer[i+4] && 'l' == buffer[i+5] && 'u' == buffer[i+6] && 's' == buffer[i+7] && '?' == buffer[i+8] && 'a' == buffer[i+9] && 'b' == buffer[i+10] && 'o' == buffer[i+11] && 'u' == buffer[i+12] && 't' == buffer[i+13]) {
 matched = true;
pattern_id = 148 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'p' == buffer[i+4] && 'l' == buffer[i+5] && 'u' == buffer[i+6] && 's' == buffer[i+7] && '?' == buffer[i+8] && 's' == buffer[i+9] && 'c' == buffer[i+10] && 'r' == buffer[i+11] && 'i' == buffer[i+12] && 'p' == buffer[i+13] && 't' == buffer[i+14]) {
 matched = true;
pattern_id = 149 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 's' == buffer[i+4] && 'e' == buffer[i+5] && 'n' == buffer[i+6] && 'd' == buffer[i+7] && 'm' == buffer[i+8] && 'a' == buffer[i+9] && 'i' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 150 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'c' == buffer[i+2] && 'b' == buffer[i+3] && 'o' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 151 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'c' == buffer[i+2] && 'f' == buffer[i+3] && 'o' == buffer[i+4] && 'r' == buffer[i+5] && 'u' == buffer[i+6] && 'm' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 152 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'm' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'd' == buffer[i+5] && 'o' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 153 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'e' == buffer[i+3] && 'x' == buffer[i+4] && 'e' == buffer[i+5] && 'c' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 154 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'm' == buffer[i+2] && 'a' == buffer[i+3] && 'g' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'a' == buffer[i+7] && 'p' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12] && '?' == buffer[i+13]) {
 matched = true;
pattern_id = 155 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'v' == buffer[i+2] && 's' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 156 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 157 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'l' == buffer[i+2] && 'i' == buffer[i+3] && 'm' == buffer[i+4] && 'p' == buffer[i+5] && 's' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 158 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'm' == buffer[i+3] && 'l' == buffer[i+4] && 's' == buffer[i+5] && 'c' == buffer[i+6] && 'r' == buffer[i+7] && 'i' == buffer[i+8] && 'p' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 159 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'f' == buffer[i+3] && 'o' == buffer[i+4] && '2' == buffer[i+5] && 'w' == buffer[i+6] && 'w' == buffer[i+7] && 'w' == buffer[i+8]) {
 matched = true;
pattern_id = 160 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'l' == buffer[i+5] && 'i' == buffer[i+6] && 's' == buffer[i+7] && 't' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 161 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'p' == buffer[i+2] && 'h' == buffer[i+3] && '-' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 's' == buffer[i+7] && 't' == buffer[i+8] && '-' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 162 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'l' == buffer[i+4] && '.' == buffer[i+5] && 'e' == buffer[i+6] && 'x' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 163 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'g' == buffer[i+2] && 'u' == buffer[i+3] && 'e' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 164 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'w' == buffer[i+2] && 'w' == buffer[i+3] && 'w' == buffer[i+4] && 's' == buffer[i+5] && 'h' == buffer[i+6] && 'e' == buffer[i+7] && 'l' == buffer[i+8] && 'l' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 165 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '-' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 166 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 'x' == buffer[i+3] && 't' == buffer[i+4] && 'c' == buffer[i+5] && 'o' == buffer[i+6] && 'u' == buffer[i+7] && 'n' == buffer[i+8] && 't' == buffer[i+9] && 'e' == buffer[i+10] && 'r' == buffer[i+11] && '.' == buffer[i+12] && 'p' == buffer[i+13] && 'l' == buffer[i+14]) {
 matched = true;
pattern_id = 167 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && 'a' == buffer[i+5] && 'd' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 168 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'g' == buffer[i+4] && 'a' == buffer[i+5] && 'i' == buffer[i+6] && 's' == buffer[i+7]) {
 matched = true;
pattern_id = 169 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3] && 'g' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6]) {
 matched = true;
pattern_id = 170 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'l' == buffer[i+4] && 's' == buffer[i+5] && 'h' == buffer[i+6] && 'o' == buffer[i+7] && 'p' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 171 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'g' == buffer[i+2] && 'l' == buffer[i+3] && 'i' == buffer[i+4] && 'm' == buffer[i+5] && 'p' == buffer[i+6] && 's' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 172 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'A' == buffer[i+1] && 'n' == buffer[i+2] && 'F' == buffer[i+3] && 'o' == buffer[i+4] && 'r' == buffer[i+5] && 'm' == buffer[i+6] && '2' == buffer[i+7]) {
 matched = true;
pattern_id = 173 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'r' == buffer[i+2] && 'g' == buffer[i+3] && 's' == buffer[i+4] && '.' == buffer[i+5] && 'b' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8]) {
 matched = true;
pattern_id = 174 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'A' == buffer[i+1] && 'T' == buffer[i+2] && '-' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 175 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'n' == buffer[i+2] && 'b' == buffer[i+3] && 'f' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 'm' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 176 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'm' == buffer[i+3] && 'p' == buffer[i+4] && 'a' == buffer[i+5] && 's' == buffer[i+6]) {
 matched = true;
pattern_id = 177 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'e' == buffer[i+3] && 'w' == buffer[i+4] && '-' == buffer[i+5] && 's' == buffer[i+6] && 'o' == buffer[i+7] && 'u' == buffer[i+8] && 'r' == buffer[i+9] && 'c' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 178 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 's' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 179 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'i' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 's' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 180 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'g' == buffer[i+2] && 'u' == buffer[i+3] && 'e' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 181 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'r' == buffer[i+2] && 'a' == buffer[i+3] && 'p' == buffer[i+4]) {
 matched = true;
pattern_id = 182 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 'v' == buffer[i+3] && 'i' == buffer[i+4] && 'r' == buffer[i+5] && 'o' == buffer[i+6] && 'n' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 183 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'a' == buffer[i+2] && 'x' == buffer[i+3] && 's' == buffer[i+4] && 'u' == buffer[i+5] && 'r' == buffer[i+6] && 'v' == buffer[i+7] && 'e' == buffer[i+8] && 'y' == buffer[i+9]) {
 matched = true;
pattern_id = 184 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'i' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 185 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'n' == buffer[i+3] && '.' == buffer[i+4] && 's' == buffer[i+5] && 'h' == buffer[i+6]) {
 matched = true;
pattern_id = 186 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'n' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4] && 'k' == buffer[i+5] && '.' == buffer[i+6] && 'b' == buffer[i+7] && 'a' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 187 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && '3' == buffer[i+2] && '-' == buffer[i+3] && 'm' == buffer[i+4] && 's' == buffer[i+5] && 'q' == buffer[i+6] && 'l' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 188 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3]) {
 matched = true;
pattern_id = 189 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'k' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3]) {
 matched = true;
pattern_id = 190 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '-' == buffer[i+5] && 'q' == buffer[i+6] && 'u' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && 'y' == buffer[i+10]) {
 matched = true;
pattern_id = 191 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 192 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3]) {
 matched = true;
pattern_id = 193 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'u' == buffer[i+2] && 'm' == buffer[i+3] && 'p' == buffer[i+4] && 'e' == buffer[i+5] && 'n' == buffer[i+6] && 'v' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 194 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'n' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4] && 'k' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && 'z' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'm' == buffer[i+11] && 'd' == buffer[i+12]) {
 matched = true;
pattern_id = 195 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'u' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'y' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 196 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'c' == buffer[i+2] && 's' == buffer[i+3] && 'h' == buffer[i+4]) {
 matched = true;
pattern_id = 197 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'k' == buffer[i+2] && 's' == buffer[i+3] && 'h' == buffer[i+4]) {
 matched = true;
pattern_id = 198 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && '3' == buffer[i+2] && 't' == buffer[i+3] && 'v' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'm' == buffer[i+10]) {
 matched = true;
pattern_id = 199 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 200 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'L' == buffer[i+1] && 'W' == buffer[i+2] && 'G' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 201 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'r' == buffer[i+2] && 'c' == buffer[i+3] && 'h' == buffer[i+4] && 'i' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 202 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5] && 'd' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8]) {
 matched = true;
pattern_id = 203 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'l' == buffer[i+2] && 'e' == buffer[i+3] && 'x' == buffer[i+4] && 'f' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && 'm' == buffer[i+8]) {
 matched = true;
pattern_id = 204 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'a' == buffer[i+2] && 's' == buffer[i+3] && 'h' == buffer[i+4]) {
 matched = true;
pattern_id = 205 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'f' == buffer[i+3]) {
 matched = true;
pattern_id = 206 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'w' == buffer[i+2] && 'w' == buffer[i+3] && '-' == buffer[i+4] && 's' == buffer[i+5] && 'q' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 207 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'w' == buffer[i+2] && 'w' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 208 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'p' == buffer[i+2] && 'd' == buffer[i+3] && 's' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 209 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'n' == buffer[i+3] && 'd' == buffer[i+4] && 'f' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && 'm' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 210 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && 'a' == buffer[i+5] && 'd' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 211 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'A' == buffer[i+1] && 'n' == buffer[i+2] && 'y' == buffer[i+3] && 'F' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 'm' == buffer[i+7] && '2' == buffer[i+8]) {
 matched = true;
pattern_id = 212 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'h' == buffer[i+4] && 'i' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 's' == buffer[i+9] && 'h' == buffer[i+10]) {
 matched = true;
pattern_id = 213 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'd' == buffer[i+3] && 'i' == buffer[i+4] && 'r' == buffer[i+5] && 'e' == buffer[i+6] && 'c' == buffer[i+7] && 't' == buffer[i+8]) {
 matched = true;
pattern_id = 214 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'a' == buffer[i+2] && 'y' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'o' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'd' == buffer[i+9]) {
 matched = true;
pattern_id = 215 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 'l' == buffer[i+3] && 's' == buffer[i+4] && '-' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 216 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && 'm' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && 'c' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 217 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'n' == buffer[i+3] && 'd' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 'm' == buffer[i+7] && 'p' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 218 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 's' == buffer[i+4] && 'p' == buffer[i+5] && 'i' == buffer[i+6] && 'r' == buffer[i+7] && 's' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 219 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'i' == buffer[i+3] && 's' == buffer[i+4] && 'a' == buffer[i+5] && 'p' == buffer[i+6] && 'i' == buffer[i+7] && '.' == buffer[i+8] && 'd' == buffer[i+9] && 'l' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 220 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'f' == buffer[i+2] && 'c' == buffer[i+3] && 'a' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && 'e' == buffer[i+7] && '.' == buffer[i+8] && 'm' == buffer[i+9] && 'a' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 221 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '_' == buffer[i+1] && 'v' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && '_' == buffer[i+5] && 'r' == buffer[i+6] && 'p' == buffer[i+7] && 'c' == buffer[i+8]) {
 matched = true;
pattern_id = 222 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'O' == buffer[i+1] && 'S' == buffer[i+2] && 'T' == buffer[i+3]) {
 matched = true;
pattern_id = 223 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'p' == buffer[i+2] && 's' == buffer[i+3] && 'r' == buffer[i+4] && 'v' == buffer[i+5] && 'a' == buffer[i+6] && 'd' == buffer[i+7] && 'm' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 224 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'p' == buffer[i+2] && 'r' == buffer[i+3] && 'e' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'd' == buffer[i+7] && 'm' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 225 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'f' == buffer[i+2] && 'g' == buffer[i+3] && 'w' == buffer[i+4] && 'i' == buffer[i+5] && 'z' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 226 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'u' == buffer[i+2] && 't' == buffer[i+3] && 'h' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'w' == buffer[i+10] && 'd' == buffer[i+11]) {
 matched = true;
pattern_id = 227 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'i' == buffer[i+5] && 'c' == buffer[i+6] && 'e' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'w' == buffer[i+10] && 'd' == buffer[i+11]) {
 matched = true;
pattern_id = 228 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 's' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 's' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'w' == buffer[i+8] && 'd' == buffer[i+9]) {
 matched = true;
pattern_id = 229 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && '.' == buffer[i+1] && '.' == buffer[i+2] && '.' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 230 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'v' == buffer[i+2] && 'w' == buffer[i+3] && 's' == buffer[i+4] && 's' == buffer[i+5] && 'r' == buffer[i+6] && '.' == buffer[i+7] && 'd' == buffer[i+8] && 'l' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 231 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'O' == buffer[i+1] && 'C' == buffer[i+2] && 'K' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 232 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'r' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7]) {
 matched = true;
pattern_id = 233 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '*' == buffer[i+1] && '.' == buffer[i+2] && 'i' == buffer[i+3] && 'd' == buffer[i+4] && 'c' == buffer[i+5]) {
 matched = true;
pattern_id = 234 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && '.' == buffer[i+1] && '|' == buffer[i+2] && '5' == buffer[i+3] && 'C' == buffer[i+4] && '|' == buffer[i+5] && '.' == buffer[i+6] && '.' == buffer[i+7]) {
 matched = true;
pattern_id = 235 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'b' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && '?' == buffer[i+4]) {
 matched = true;
pattern_id = 236 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'c' == buffer[i+1] && 'n' == buffer[i+2] && 'f' == buffer[i+3]) {
 matched = true;
pattern_id = 237 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && '2' == buffer[i+1] && '0' == buffer[i+2]) {
 matched = true;
pattern_id = 238 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'r' == buffer[i+3]) {
 matched = true;
pattern_id = 239 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'n' == buffer[i+3] && 's' == buffer[i+4] && 'e' == buffer[i+5] && 'p' == buffer[i+6] && 'o' == buffer[i+7] && 's' == buffer[i+8] && 't' == buffer[i+9] && '.' == buffer[i+10] && 'e' == buffer[i+11] && 'x' == buffer[i+12] && 'e' == buffer[i+13]) {
 matched = true;
pattern_id = 240 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '_' == buffer[i+1] && 'v' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && '_' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'f' == buffer[i+8] && '.' == buffer[i+9] && 'h' == buffer[i+10] && 't' == buffer[i+11] && 'm' == buffer[i+12] && 'l' == buffer[i+13]) {
 matched = true;
pattern_id = 241 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8]) {
 matched = true;
pattern_id = 242 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'p' == buffer[i+7] && 'w' == buffer[i+8] && 'd' == buffer[i+9] && '/' == buffer[i+10] && 'a' == buffer[i+11] && 'n' == buffer[i+12] && 'o' == buffer[i+13] && 't' == buffer[i+14]) {
 matched = true;
pattern_id = 243 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4]) {
 matched = true;
pattern_id = 244 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'd' == buffer[i+2] && 'i' == buffer[i+3] && 'r' == buffer[i+4] && '.' == buffer[i+5] && 'h' == buffer[i+6] && 't' == buffer[i+7] && 'r' == buffer[i+8]) {
 matched = true;
pattern_id = 245 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'r' == buffer[i+3] && 'b' == buffer[i+4] && 'o' == buffer[i+5] && '.' == buffer[i+6] && 'd' == buffer[i+7] && 'l' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 246 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'm' == buffer[i+1] && 'd' == buffer[i+2] && '.' == buffer[i+3] && 'e' == buffer[i+4] && 'x' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 247 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'c' == buffer[i+1] && 'm' == buffer[i+2] && 'd' == buffer[i+3] && '?' == buffer[i+4] && '&' == buffer[i+5]) {
 matched = true;
pattern_id = 248 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && '1' == buffer[i+1] && 'u' == buffer[i+2]) {
 matched = true;
pattern_id = 249 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'p' == buffer[i+2] && 'c' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 'n' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 250 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'l' == buffer[i+2] && 'o' == buffer[i+3] && 'b' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && '.' == buffer[i+7] && 'a' == buffer[i+8] && 's' == buffer[i+9] && 'a' == buffer[i+10]) {
 matched = true;
pattern_id = 251 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'p' == buffer[i+7] && 'w' == buffer[i+8] && 'd' == buffer[i+9] && '/' == buffer[i+10] && 'a' == buffer[i+11] && 'e' == buffer[i+12] && 'x' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 252 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'i' == buffer[i+1] && 'W' == buffer[i+2] && 'e' == buffer[i+3] && 'b' == buffer[i+4] && 'H' == buffer[i+5] && 'i' == buffer[i+6] && 't' == buffer[i+7] && 's' == buffer[i+8] && 'F' == buffer[i+9] && 'i' == buffer[i+10] && 'l' == buffer[i+11] && 'e' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 253 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && '.' == buffer[i+1] && 'h' == buffer[i+2] && 't' == buffer[i+3] && 'r' == buffer[i+4]) {
 matched = true;
pattern_id = 254 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 's' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'c' == buffer[i+5] && 's' == buffer[i+6] && '.' == buffer[i+7] && 'd' == buffer[i+8] && 'l' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 255 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'c' == buffer[i+2] && 'r' == buffer[i+3] && 'i' == buffer[i+4] && 'p' == buffer[i+5] && 't' == buffer[i+6] && 's' == buffer[i+7] && '/' == buffer[i+8] && 'p' == buffer[i+9] && 'e' == buffer[i+10] && 'r' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 256 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'A' == buffer[i+2] && '|' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'l' == buffer[i+6]) {
 matched = true;
pattern_id = 257 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && '.' == buffer[i+1] && 'p' == buffer[i+2] && 'l' == buffer[i+3]) {
 matched = true;
pattern_id = 258 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'c' == buffer[i+2] && 'r' == buffer[i+3] && 'i' == buffer[i+4] && 'p' == buffer[i+5] && 't' == buffer[i+6] && 's' == buffer[i+7] && '/' == buffer[i+8] && ' ' == buffer[i+9]) {
 matched = true;
pattern_id = 259 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '9' == buffer[i+7] && '7' == buffer[i+8] && '.' == buffer[i+9] && 'v' == buffer[i+10] && 't' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 260 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'w' == buffer[i+4] && 'c' == buffer[i+5] && 'o' == buffer[i+6] && 'd' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'a' == buffer[i+10] && 's' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 261 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'r' == buffer[i+2] && 'c' == buffer[i+3] && 'h' == buffer[i+4] && 'a' == buffer[i+5] && 'd' == buffer[i+6] && 'm' == buffer[i+7]) {
 matched = true;
pattern_id = 262 ;
}
}
for(int i=0; i<buffer_size; i++){
if('T' == buffer[i] && 'r' == buffer[i+1] && 'a' == buffer[i+2] && 'n' == buffer[i+3] && 's' == buffer[i+4] && 'l' == buffer[i+5] && 'a' == buffer[i+6] && 't' == buffer[i+7] && 'e' == buffer[i+8] && '|' == buffer[i+9] && '3' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12] && ' ' == buffer[i+13] && 'F' == buffer[i+14]) {
 matched = true;
pattern_id = 263 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'e' == buffer[i+3] && 'w' == buffer[i+4] && 'c' == buffer[i+5] && 'o' == buffer[i+6] && 'd' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'a' == buffer[i+10] && 's' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 264 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'w' == buffer[i+3]) {
 matched = true;
pattern_id = 265 ;
}
}
for(int i=0; i<buffer_size; i++){
if('4' == buffer[i] && '0' == buffer[i+1] && '3' == buffer[i+2]) {
 matched = true;
pattern_id = 266 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'i' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && '/' == buffer[i+5] && 'i' == buffer[i+6] && 'i' == buffer[i+7] && 's' == buffer[i+8] && 'a' == buffer[i+9] && 'm' == buffer[i+10] && 'p' == buffer[i+11] && 'l' == buffer[i+12] && 'e' == buffer[i+13] && 's' == buffer[i+14]) {
 matched = true;
pattern_id = 267 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'E' == buffer[i+1] && 'V' == buffer[i+2] && 'L' == buffer[i+3] && 'O' == buffer[i+4] && 'G' == buffer[i+5] && ' ' == buffer[i+6] && '/' == buffer[i+7] && ' ' == buffer[i+8]) {
 matched = true;
pattern_id = 268 ;
}
}
for(int i=0; i<buffer_size; i++){
if('I' == buffer[i] && 'N' == buffer[i+1] && 'D' == buffer[i+2] && 'E' == buffer[i+3] && 'X' == buffer[i+4] && ' ' == buffer[i+5]) {
 matched = true;
pattern_id = 269 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && 'P' == buffer[i+3] && 'R' == buffer[i+4] && 'O' == buffer[i+5] && 'P' == buffer[i+6] && 'E' == buffer[i+7] && 'R' == buffer[i+8] && 'T' == buffer[i+9] && 'I' == buffer[i+10] && 'E' == buffer[i+11] && 'S' == buffer[i+12]) {
 matched = true;
pattern_id = 270 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 's' == buffer[i+3] && '.' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 271 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'j' == buffer[i+1] && 's' == buffer[i+2] && 'p' == buffer[i+3]) {
 matched = true;
pattern_id = 272 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && '2' == buffer[i+1] && '5' == buffer[i+2] && '2' == buffer[i+3] && 'e' == buffer[i+4] && 'j' == buffer[i+5] && 's' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 273 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 't' == buffer[i+1] && 'p' == buffer[i+2] && '.' == buffer[i+3] && 'e' == buffer[i+4] && 'x' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 274 ;
}
}
for(int i=0; i<buffer_size; i++){
if('x' == buffer[i] && 'p' == buffer[i+1] && '_' == buffer[i+2] && 'e' == buffer[i+3] && 'n' == buffer[i+4] && 'u' == buffer[i+5] && 'm' == buffer[i+6] && 'd' == buffer[i+7] && 's' == buffer[i+8] && 'n' == buffer[i+9]) {
 matched = true;
pattern_id = 275 ;
}
}
for(int i=0; i<buffer_size; i++){
if('x' == buffer[i] && 'p' == buffer[i+1] && '_' == buffer[i+2] && 'f' == buffer[i+3] && 'i' == buffer[i+4] && 'l' == buffer[i+5] && 'e' == buffer[i+6] && 'l' == buffer[i+7] && 'i' == buffer[i+8] && 's' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 276 ;
}
}
for(int i=0; i<buffer_size; i++){
if('x' == buffer[i] && 'p' == buffer[i+1] && '_' == buffer[i+2] && 'c' == buffer[i+3] && 'm' == buffer[i+4] && 'd' == buffer[i+5] && 's' == buffer[i+6] && 'h' == buffer[i+7] && 'e' == buffer[i+8] && 'l' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 277 ;
}
}
for(int i=0; i<buffer_size; i++){
if('n' == buffer[i] && 'c' == buffer[i+1] && '.' == buffer[i+2] && 'e' == buffer[i+3] && 'x' == buffer[i+4] && 'e' == buffer[i+5]) {
 matched = true;
pattern_id = 278 ;
}
}
for(int i=0; i<buffer_size; i++){
if('w' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && '.' == buffer[i+3] && 'e' == buffer[i+4] && 'x' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 279 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'c' == buffer[i+1] && 'm' == buffer[i+2] && 'd' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 280 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'e' == buffer[i+1] && 'l' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 't' == buffer[i+5] && '.' == buffer[i+6] && 'e' == buffer[i+7] && 'x' == buffer[i+8] && 'e' == buffer[i+9]) {
 matched = true;
pattern_id = 281 ;
}
}
for(int i=0; i<buffer_size; i++){
if('n' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && '.' == buffer[i+3] && 'e' == buffer[i+4] && 'x' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 282 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'f' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 283 ;
}
}
for(int i=0; i<buffer_size; i++){
if('x' == buffer[i] && 'p' == buffer[i+1] && '_' == buffer[i+2] && 'r' == buffer[i+3] && 'e' == buffer[i+4] && 'g' == buffer[i+5] && 'r' == buffer[i+6] && 'e' == buffer[i+7] && 'a' == buffer[i+8] && 'd' == buffer[i+9]) {
 matched = true;
pattern_id = 284 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'E' == buffer[i+1] && 'A' == buffer[i+2] && 'R' == buffer[i+3] && 'C' == buffer[i+4] && 'H' == buffer[i+5] && ' ' == buffer[i+6]) {
 matched = true;
pattern_id = 285 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && 'a' == buffer[i+4] && 's' == buffer[i+5] && 's' == buffer[i+6] && 'w' == buffer[i+7] && 'd' == buffer[i+8]) {
 matched = true;
pattern_id = 286 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'n' == buffer[i+1] && 's' == buffer[i+2] && 'f' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 287 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'u' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 288 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'p' == buffer[i+3] && 'f' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && 'd' == buffer[i+7]) {
 matched = true;
pattern_id = 289 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 'r' == buffer[i+2] && 'v' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && 't' == buffer[i+6] && '/' == buffer[i+7] && '.' == buffer[i+8] && '.' == buffer[i+9] && '.' == buffer[i+10] && '.' == buffer[i+11] && '.' == buffer[i+12] && '.' == buffer[i+13] && '.' == buffer[i+14]) {
 matched = true;
pattern_id = 290 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'S' == buffer[i+1] && 'T' == buffer[i+2] && 'R' == buffer[i+3] && 'E' == buffer[i+4] && 'N' == buffer[i+5] && 'G' == buffer[i+6] && 'U' == buffer[i+7] && 'R' == buffer[i+8]) {
 matched = true;
pattern_id = 291 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && '_' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && 'o' == buffer[i+7] && 'r' == buffer[i+8] && 'e' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 292 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'p' == buffer[i+4] && '.' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 293 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && '?' == buffer[i+1] && '?' == buffer[i+2] && '?' == buffer[i+3] && '?' == buffer[i+4] && '?' == buffer[i+5] && '?' == buffer[i+6] && '?' == buffer[i+7] && '?' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 294 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10] && '?' == buffer[i+11]) {
 matched = true;
pattern_id = 295 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'p' == buffer[i+4] && 'l' == buffer[i+5] && 'u' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 296 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'p' == buffer[i+4] && 'l' == buffer[i+5] && 'u' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 297 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'y' == buffer[i+2] && 'b' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && 'c' == buffer[i+6] && 'o' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 298 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'h' == buffer[i+4] && 'o' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && 's' == buffer[i+8] && 'v' == buffer[i+9] && 'c' == buffer[i+10] && '.' == buffer[i+11] && 's' == buffer[i+12] && 'h' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 299 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'l' == buffer[i+6]) {
 matched = true;
pattern_id = 300 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'j' == buffer[i+1] && 's' == buffer[i+2] && 'p' == buffer[i+3] && '/' == buffer[i+4] && 's' == buffer[i+5] && 'n' == buffer[i+6] && 'p' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 301 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '%' == buffer[i+1] && '0' == buffer[i+2] && '0' == buffer[i+3]) {
 matched = true;
pattern_id = 302 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'm' == buffer[i+3] && 'l' == buffer[i+4] && '/' == buffer[i+5] && '.' == buffer[i+6] && '.' == buffer[i+7] && '.' == buffer[i+8] && '.' == buffer[i+9] && '.' == buffer[i+10] && '.' == buffer[i+11]) {
 matched = true;
pattern_id = 303 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'D' == buffer[i+1] && 'e' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 'D' == buffer[i+7] && 'o' == buffer[i+8] && 'c' == buffer[i+9] && 'u' == buffer[i+10] && 'm' == buffer[i+11] && 'e' == buffer[i+12] && 'n' == buffer[i+13] && 't' == buffer[i+14]) {
 matched = true;
pattern_id = 304 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'E' == buffer[i+1] && 'd' == buffer[i+2] && 'i' == buffer[i+3] && 't' == buffer[i+4] && 'D' == buffer[i+5] && 'o' == buffer[i+6] && 'c' == buffer[i+7] && 'u' == buffer[i+8] && 'm' == buffer[i+9] && 'e' == buffer[i+10] && 'n' == buffer[i+11] && 't' == buffer[i+12]) {
 matched = true;
pattern_id = 305 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 's' == buffer[i+1] && '%' == buffer[i+2] && '2' == buffer[i+3] && '0' == buffer[i+4] && '-' == buffer[i+5] && 'l' == buffer[i+6]) {
 matched = true;
pattern_id = 306 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'l' == buffer[i+2] && 'o' == buffer[i+3] && 'g' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 't' == buffer[i+8] && 'm' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 307 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'y' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && 'g' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 't' == buffer[i+9] && 'm' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 308 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'c' == buffer[i+3] && '/' == buffer[i+4] && 'p' == buffer[i+5] && 'a' == buffer[i+6] && 's' == buffer[i+7] && 's' == buffer[i+8] && 'w' == buffer[i+9] && 'd' == buffer[i+10]) {
 matched = true;
pattern_id = 309 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'P' == buffer[i+1] && 'a' == buffer[i+2] && 'g' == buffer[i+3] && 'e' == buffer[i+4] && 'S' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && 'v' == buffer[i+8] && 'i' == buffer[i+9] && 'c' == buffer[i+10] && 'e' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 310 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'c' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 't' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 311 ;
}
}
for(int i=0; i<buffer_size; i++){
if('_' == buffer[i] && 'A' == buffer[i+1] && 'u' == buffer[i+2] && 't' == buffer[i+3] && 'h' == buffer[i+4] && 'C' == buffer[i+5] && 'h' == buffer[i+6] && 'a' == buffer[i+7] && 'n' == buffer[i+8] && 'g' == buffer[i+9] && 'e' == buffer[i+10] && 'U' == buffer[i+11] && 'r' == buffer[i+12] && 'l' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 312 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 'c' == buffer[i+4] && 'c' == buffer[i+5] && 'e' == buffer[i+6] && 's' == buffer[i+7] && 's' == buffer[i+8]) {
 matched = true;
pattern_id = 313 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'w' == buffer[i+1] && 'w' == buffer[i+2] && 'w' == buffer[i+3] && 'a' == buffer[i+4] && 'c' == buffer[i+5] && 'l' == buffer[i+6]) {
 matched = true;
pattern_id = 314 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'w' == buffer[i+1] && 'w' == buffer[i+2] && 'w' == buffer[i+3] && '_' == buffer[i+4] && 'a' == buffer[i+5] && 'c' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 315 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9] && '3' == buffer[i+10]) {
 matched = true;
pattern_id = 316 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'd' == buffer[i+1] && '.' == buffer[i+2] && '.' == buffer[i+3]) {
 matched = true;
pattern_id = 317 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'E' == buffer[i+1] && 'A' == buffer[i+2] && 'D' == buffer[i+3] && '/' == buffer[i+4] && '.' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 318 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'u' == buffer[i+2] && 'e' == buffer[i+3] && 's' == buffer[i+4] && 't' == buffer[i+5] && 'b' == buffer[i+6] && 'o' == buffer[i+7] && 'o' == buffer[i+8] && 'k' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 319 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 'a' == buffer[i+2] && 'n' == buffer[i+3] && 'd' == buffer[i+4] && 'l' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7]) {
 matched = true;
pattern_id = 320 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && '.' == buffer[i+2] && '.' == buffer[i+3] && '.' == buffer[i+4]) {
 matched = true;
pattern_id = 321 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '~' == buffer[i+1] && 'r' == buffer[i+2] && 'o' == buffer[i+3] && 'o' == buffer[i+4] && 't' == buffer[i+5]) {
 matched = true;
pattern_id = 322 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && ' ' == buffer[i+3]) {
 matched = true;
pattern_id = 323 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'u' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 324 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'a' == buffer[i+4] && 'l' == buffer[i+5] && 'o' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'n' == buffer[i+9] && 's' == buffer[i+10] && 'f' == buffer[i+11]) {
 matched = true;
pattern_id = 325 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && 'c' == buffer[i+4] && 'f' == buffer[i+5] && 'g' == buffer[i+6] && '.' == buffer[i+7] && 'n' == buffer[i+8] && 's' == buffer[i+9] && 'f' == buffer[i+10]) {
 matched = true;
pattern_id = 326 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && 'l' == buffer[i+4] && 'o' == buffer[i+5] && 'g' == buffer[i+6] && '.' == buffer[i+7] && 'n' == buffer[i+8] && 's' == buffer[i+9] && 'f' == buffer[i+10]) {
 matched = true;
pattern_id = 327 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && '.' == buffer[i+4] && 'n' == buffer[i+5] && 's' == buffer[i+6] && 'f' == buffer[i+7]) {
 matched = true;
pattern_id = 328 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'a' == buffer[i+2] && 'm' == buffer[i+3] && 'e' == buffer[i+4] && 's' == buffer[i+5] && '.' == buffer[i+6] && 'n' == buffer[i+7] && 's' == buffer[i+8] && 'f' == buffer[i+9]) {
 matched = true;
pattern_id = 329 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '/' == buffer[i+1] && '/' == buffer[i+2] && '/' == buffer[i+3] && '/' == buffer[i+4] && '/' == buffer[i+5] && '/' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 330 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3] && 'd' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 331 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3]) {
 matched = true;
pattern_id = 332 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'w' == buffer[i+5] && 'd' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10] && '3' == buffer[i+11]) {
 matched = true;
pattern_id = 333 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'd' == buffer[i+4] && 'i' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 334 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'q' == buffer[i+1] && 'u' == buffer[i+2] && 'i' == buffer[i+3] && 'k' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && 'o' == buffer[i+7] && 'r' == buffer[i+8] && 'e' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'f' == buffer[i+12] && 'g' == buffer[i+13]) {
 matched = true;
pattern_id = 335 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'G' == buffer[i+1] && 'W' == buffer[i+2] && 'W' == buffer[i+3] && 'E' == buffer[i+4] && 'B' == buffer[i+5] && '.' == buffer[i+6] && 'E' == buffer[i+7] && 'X' == buffer[i+8] && 'E' == buffer[i+9]) {
 matched = true;
pattern_id = 336 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 's' == buffer[i+2] && '_' == buffer[i+3] && 'f' == buffer[i+4] && 't' == buffer[i+5] && 'p' == buffer[i+6] && '.' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 337 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'p' == buffer[i+2] && 'm' == buffer[i+3] && '_' == buffer[i+4] && 'q' == buffer[i+5] && 'u' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && 'y' == buffer[i+9]) {
 matched = true;
pattern_id = 338 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'i' == buffer[i+2] && 'g' == buffer[i+3] && 'c' == buffer[i+4] && 'o' == buffer[i+5] && 'n' == buffer[i+6] && 'f' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 339 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8] && 'j' == buffer[i+9] && 'j' == buffer[i+10]) {
 matched = true;
pattern_id = 340 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'w' == buffer[i+2] && 'w' == buffer[i+3] && 'b' == buffer[i+4] && 'o' == buffer[i+5] && 'a' == buffer[i+6] && 'r' == buffer[i+7] && 'd' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 341 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && 'i' == buffer[i+7] && 'f' == buffer[i+8] && 'y' == buffer[i+9] && '-' == buffer[i+10] && 'l' == buffer[i+11] && 'i' == buffer[i+12] && 'n' == buffer[i+13] && 'k' == buffer[i+14]) {
 matched = true;
pattern_id = 342 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8] && '3' == buffer[i+9]) {
 matched = true;
pattern_id = 343 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'o' == buffer[i+3] && 'l' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && 'i' == buffer[i+7] && 'o' == buffer[i+8] && 'n' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13] && '3' == buffer[i+14]) {
 matched = true;
pattern_id = 344 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && '3' == buffer[i+4] && '2' == buffer[i+5] && '.' == buffer[i+6] && 'e' == buffer[i+7] && 'x' == buffer[i+8] && 'e' == buffer[i+9]) {
 matched = true;
pattern_id = 345 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3] && 'g' == buffer[i+4] && '?' == buffer[i+5] && 'q' == buffer[i+6] && 'u' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && 'y' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 346 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'c' == buffer[i+4] && 's' == buffer[i+5] && '-' == buffer[i+6] && 'd' == buffer[i+7] && 'u' == buffer[i+8] && 'm' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 347 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && '-' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && 'f' == buffer[i+10] && 'o' == buffer[i+11]) {
 matched = true;
pattern_id = 348 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && '-' == buffer[i+7] && 'd' == buffer[i+8] && 'i' == buffer[i+9] && 'f' == buffer[i+10] && 'f' == buffer[i+11]) {
 matched = true;
pattern_id = 349 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 's' == buffer[i+4] && 't' == buffer[i+5] && 'a' == buffer[i+6] && 'r' == buffer[i+7] && 't' == buffer[i+8] && '-' == buffer[i+9] && 'v' == buffer[i+10] && 'e' == buffer[i+11] && 'r' == buffer[i+12]) {
 matched = true;
pattern_id = 350 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 's' == buffer[i+4] && 't' == buffer[i+5] && 'o' == buffer[i+6] && 'p' == buffer[i+7] && '-' == buffer[i+8] && 'v' == buffer[i+9] && 'e' == buffer[i+10] && 'r' == buffer[i+11]) {
 matched = true;
pattern_id = 351 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'u' == buffer[i+4] && 'n' == buffer[i+5] && 'c' == buffer[i+6] && 'h' == buffer[i+7] && 'e' == buffer[i+8] && 'c' == buffer[i+9] && 'k' == buffer[i+10] && 'o' == buffer[i+11] && 'u' == buffer[i+12] && 't' == buffer[i+13]) {
 matched = true;
pattern_id = 352 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'h' == buffer[i+4] && 't' == buffer[i+5] && 'm' == buffer[i+6] && 'l' == buffer[i+7] && '-' == buffer[i+8] && 'r' == buffer[i+9] && 'e' == buffer[i+10] && 'n' == buffer[i+11] && 'd' == buffer[i+12]) {
 matched = true;
pattern_id = 353 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'o' == buffer[i+1] && 'w' == buffer[i+2] && 's' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 354 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'o' == buffer[i+2] && 'j' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 'r' == buffer[i+6] && 'n' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 355 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'o' == buffer[i+2] && 'j' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 'r' == buffer[i+6] && 'n' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 356 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'f' == buffer[i+3] && 'o' == buffer[i+4] && 's' == buffer[i+5] && 'r' == buffer[i+6] && 'c' == buffer[i+7] && 'h' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12] && '?' == buffer[i+13]) {
 matched = true;
pattern_id = 357 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'd' == buffer[i+3] && 'e' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8] && '3' == buffer[i+9]) {
 matched = true;
pattern_id = 358 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'u' == buffer[i+4] && 's' == buffer[i+5] && 'r' == buffer[i+6] && '-' == buffer[i+7] && 'p' == buffer[i+8] && 'r' == buffer[i+9] && 'o' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 359 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && '.' == buffer[i+1] && '/' == buffer[i+2]) {
 matched = true;
pattern_id = 360 ;
}
}
for(int i=0; i<buffer_size; i++){
if('I' == buffer[i] && 'n' == buffer[i+1] && 'v' == buffer[i+2] && 'a' == buffer[i+3] && 'l' == buffer[i+4] && 'i' == buffer[i+5] && 'd' == buffer[i+6] && ' ' == buffer[i+7] && 'U' == buffer[i+8] && 'R' == buffer[i+9] && 'L' == buffer[i+10]) {
 matched = true;
pattern_id = 361 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '.' == buffer[i+7] && 'v' == buffer[i+8] && 't' == buffer[i+9] && 's' == buffer[i+10]) {
 matched = true;
pattern_id = 362 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'x' == buffer[i+2] && '-' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 363 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'x' == buffer[i+2] && 's' == buffer[i+3] && '.' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 364 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'c' == buffer[i+3] && 'h' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'g' == buffer[i+7] && 'r' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 365 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'g' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && 'p' == buffer[i+6]) {
 matched = true;
pattern_id = 366 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 'p' == buffer[i+4] && 'o' == buffer[i+5] && 'n' == buffer[i+6] && 'd' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 367 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && 'c' == buffer[i+4] && 'o' == buffer[i+5] && 'n' == buffer[i+6] && 'f' == buffer[i+7] && 'i' == buffer[i+8] && 'g' == buffer[i+9]) {
 matched = true;
pattern_id = 368 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && '-' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'p' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 369 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '_' == buffer[i+6] && 'f' == buffer[i+7] && 'i' == buffer[i+8] && 'l' == buffer[i+9] && 'e' == buffer[i+10] && 's' == buffer[i+11]) {
 matched = true;
pattern_id = 370 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'a' == buffer[i+2] && 'c' == buffer[i+3] && 'k' == buffer[i+4] && 'u' == buffer[i+5] && 'p' == buffer[i+6]) {
 matched = true;
pattern_id = 371 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 't' == buffer[i+3] && 'r' == buffer[i+4] && 'a' == buffer[i+5] && 'n' == buffer[i+6] && 'e' == buffer[i+7] && 't' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 372 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'i' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 373 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'l' == buffer[i+2] && 'u' == buffer[i+3] && 's' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 374 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'l' == buffer[i+6] && 'o' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9] && 'n' == buffer[i+10]) {
 matched = true;
pattern_id = 375 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'f' == buffer[i+2] && 'i' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 376 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'l' == buffer[i+2] && 't' == buffer[i+3] && 'r' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && 'o' == buffer[i+7] && 'a' == buffer[i+8] && 'r' == buffer[i+9] && 'd' == buffer[i+10]) {
 matched = true;
pattern_id = 377 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'm' == buffer[i+2] && 'p' == buffer[i+3] && 'o' == buffer[i+4] && 'w' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && '?' == buffer[i+8] && 'D' == buffer[i+9] && 'B' == buffer[i+10]) {
 matched = true;
pattern_id = 378 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'F' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && 'S' == buffer[i+4] && 'a' == buffer[i+5] && 'v' == buffer[i+6] && 'e' == buffer[i+7] && '.' == buffer[i+8] && 'd' == buffer[i+9] && 'l' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 379 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'f' == buffer[i+6] && 'o' == buffer[i+7]) {
 matched = true;
pattern_id = 380 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'F' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && 'S' == buffer[i+4] && 'a' == buffer[i+5] && 'v' == buffer[i+6] && 'e' == buffer[i+7] && 'C' == buffer[i+8] && 'S' == buffer[i+9] && 'P' == buffer[i+10] && '.' == buffer[i+11] && 'd' == buffer[i+12] && 'l' == buffer[i+13] && 'l' == buffer[i+14]) {
 matched = true;
pattern_id = 381 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'F' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && 'S' == buffer[i+4] && 'a' == buffer[i+5] && 'v' == buffer[i+6] && 'e' == buffer[i+7] && 'C' == buffer[i+8] && 'V' == buffer[i+9] && 'P' == buffer[i+10] && '.' == buffer[i+11] && 'd' == buffer[i+12] && 'l' == buffer[i+13] && 'l' == buffer[i+14]) {
 matched = true;
pattern_id = 382 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && 'E' == buffer[i+1] && 'A' == buffer[i+2] && 'V' == buffer[i+3] && 'I' == buffer[i+4] && 'S' == buffer[i+5]) {
 matched = true;
pattern_id = 383 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'S' == buffer[i+1] && 'W' == buffer[i+2] && 'E' == buffer[i+3] && 'd' == buffer[i+4] && 'i' == buffer[i+5] && 't' == buffer[i+6] && 'S' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && 'v' == buffer[i+10] && 'l' == buffer[i+11] && 'e' == buffer[i+12] && 't' == buffer[i+13]) {
 matched = true;
pattern_id = 384 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'i' == buffer[i+1] && 'd' == buffer[i+2] && 'a' == buffer[i+3]) {
 matched = true;
pattern_id = 385 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'i' == buffer[i+1] && 'd' == buffer[i+2] && 'a' == buffer[i+3] && '?' == buffer[i+4]) {
 matched = true;
pattern_id = 386 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'i' == buffer[i+1] && 'd' == buffer[i+2] && 'q' == buffer[i+3] && '?' == buffer[i+4]) {
 matched = true;
pattern_id = 387 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'i' == buffer[i+1] && 'd' == buffer[i+2] && 'q' == buffer[i+3]) {
 matched = true;
pattern_id = 388 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'p' == buffer[i+2] && '3' == buffer[i+3] && '0' == buffer[i+4] && 'r' == buffer[i+5] && 'e' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'd' == buffer[i+9] && 'l' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 389 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'p' == buffer[i+2] && '4' == buffer[i+3] && 'a' == buffer[i+4] && 'r' == buffer[i+5] && 'e' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'd' == buffer[i+9] && 'l' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 390 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'e' == buffer[i+2] && 'v' == buffer[i+3] && 'e' == buffer[i+4] && 'l' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 391 ;
}
}
for(int i=0; i<buffer_size; i++){
if('_' == buffer[i] && 'P' == buffer[i+1] && 'H' == buffer[i+2] && 'P' == buffer[i+3] && 'L' == buffer[i+4] && 'I' == buffer[i+5] && 'B' == buffer[i+6] && '[' == buffer[i+7] && 'l' == buffer[i+8] && 'i' == buffer[i+9] && 'b' == buffer[i+10] && 'd' == buffer[i+11] && 'i' == buffer[i+12] && 'r' == buffer[i+13] && ']' == buffer[i+14]) {
 matched = true;
pattern_id = 392 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'b' == buffer[i+2] && '_' == buffer[i+3] && 'm' == buffer[i+4] && 'y' == buffer[i+5] && 's' == buffer[i+6] && 'q' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'i' == buffer[i+10] && 'n' == buffer[i+11] && 'c' == buffer[i+12]) {
 matched = true;
pattern_id = 393 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'o' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'e' == buffer[i+6] && 'x' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 394 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'm' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 395 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 's' == buffer[i+2] && 'd' == buffer[i+3] && 'a' == buffer[i+4] && 'c' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 396 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '_' == buffer[i+1] && 'm' == buffer[i+2] && 'e' == buffer[i+3] && 'm' == buffer[i+4] && '_' == buffer[i+5] && 'b' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 397 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '_' == buffer[i+1] && 'v' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && '_' == buffer[i+5] && 'b' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 398 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 399 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 400 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8] && 'c' == buffer[i+9] && 's' == buffer[i+10] && '.' == buffer[i+11] && 'e' == buffer[i+12] && 'x' == buffer[i+13] && 'e' == buffer[i+14]) {
 matched = true;
pattern_id = 401 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'x' == buffer[i+2] && 't' == buffer[i+3] && '2' == buffer[i+4] && 'h' == buffer[i+5] && 't' == buffer[i+6] && 'm' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 402 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 403 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'z' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3]) {
 matched = true;
pattern_id = 404 ;
}
}
for(int i=0; i<buffer_size; i++){
if('-' == buffer[i] && 's' == buffer[i+1] && 'o' == buffer[i+2] && 'a' == buffer[i+3] && ' ' == buffer[i+4] && '%' == buffer[i+5] && 'p' == buffer[i+6]) {
 matched = true;
pattern_id = 405 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3] && '/' == buffer[i+4] && 's' == buffer[i+5] && 'h' == buffer[i+6]) {
 matched = true;
pattern_id = 406 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'g' == buffer[i+3] && 'r' == buffer[i+4] && 'o' == buffer[i+5] && 'u' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 407 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && ' ' == buffer[i+3] && 'x' == buffer[i+4] && ' ' == buffer[i+5] && 'H' == buffer[i+6] && 'T' == buffer[i+7] && 'T' == buffer[i+8] && 'P' == buffer[i+9] && '/' == buffer[i+10] && '1' == buffer[i+11] && '.' == buffer[i+12] && '0' == buffer[i+13]) {
 matched = true;
pattern_id = 408 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '?' == buffer[i+1] && '.' == buffer[i+2] && 'j' == buffer[i+3] && 's' == buffer[i+4] && 'p' == buffer[i+5]) {
 matched = true;
pattern_id = 409 ;
}
}
for(int i=0; i<buffer_size; i++){
if('~' == buffer[i]) {
 matched = true;
pattern_id = 410 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'T' == buffer[i+1] && 'A' == buffer[i+2] && 'T' == buffer[i+3]) {
 matched = true;
pattern_id = 411 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'R' == buffer[i+1] && 'I' == buffer[i+2] && 'V' == buffer[i+3] && 'M' == buffer[i+4] && 'S' == buffer[i+5] && 'G' == buffer[i+6]) {
 matched = true;
pattern_id = 412 ;
}
}
for(int i=0; i<buffer_size; i++){
if('N' == buffer[i] && 'O' == buffer[i+1] && 'T' == buffer[i+2] && 'I' == buffer[i+3] && 'F' == buffer[i+4] && 'Y' == buffer[i+5] && ' ' == buffer[i+6] && '*' == buffer[i+7] && ' ' == buffer[i+8]) {
 matched = true;
pattern_id = 413 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '_' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 414 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'o' == buffer[i+1] && 'c' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'i' == buffer[i+5] && 'o' == buffer[i+6] && 'n' == buffer[i+7]) {
 matched = true;
pattern_id = 415 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'a' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'l' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'e' == buffer[i+8] && 's' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 416 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'i' == buffer[i+1] && 'm' == buffer[i+2] && '|' == buffer[i+3] && '3' == buffer[i+4] && 'A' == buffer[i+5] && '|' == buffer[i+6] && 'A' == buffer[i+7] && 'd' == buffer[i+8] && 'd' == buffer[i+9] && 'G' == buffer[i+10] && 'a' == buffer[i+11] && 'm' == buffer[i+12] && 'e' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 417 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'z' == buffer[i+1] && 'm' == buffer[i+2] && 'l' == buffer[i+3] && '.' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 418 ;
}
}
for(int i=0; i<buffer_size; i++){
if('1' == buffer[i]) {
 matched = true;
pattern_id = 419 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'd' == buffer[i+3] && 'e' == buffer[i+4] && 'x' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 420 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 's' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'c' == buffer[i+5] && '/' == buffer[i+6] && 's' == buffer[i+7] && 'a' == buffer[i+8] && 'm' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11] && 'e' == buffer[i+12] && 's' == buffer[i+13] && '/' == buffer[i+14]) {
 matched = true;
pattern_id = 421 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'a' == buffer[i+5] && 'm' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8] && 'e' == buffer[i+9] && 's' == buffer[i+10] && '/' == buffer[i+11]) {
 matched = true;
pattern_id = 422 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'm' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'e' == buffer[i+5] && 'n' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 423 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '6' == buffer[i+2] && '|' == buffer[i+3] && 'p' == buffer[i+4] && 'u' == buffer[i+5] && 'b' == buffer[i+6] && 'l' == buffer[i+7] && 'i' == buffer[i+8] && 'c' == buffer[i+9]) {
 matched = true;
pattern_id = 424 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'u' == buffer[i+1] && 'b' == buffer[i+2] && 'l' == buffer[i+3] && 'i' == buffer[i+4] && 'c' == buffer[i+5]) {
 matched = true;
pattern_id = 425 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'r' == buffer[i+1] && 'i' == buffer[i+2] && 'v' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 426 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && '|' == buffer[i+1] && '0' == buffer[i+2] && '4' == buffer[i+3] && ' ' == buffer[i+4] && '8' == buffer[i+5] && '2' == buffer[i+6] && ' ' == buffer[i+7] && '0' == buffer[i+8] && '1' == buffer[i+9] && ' ' == buffer[i+10] && '0' == buffer[i+11] && '0' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 427 ;
}
}
for(int i=0; i<buffer_size; i++){
if('E' == buffer[i] && '_' == buffer[i+1] && '|' == buffer[i+2] && '0' == buffer[i+3] && '0' == buffer[i+4] && ' ' == buffer[i+5] && '0' == buffer[i+6] && '3' == buffer[i+7] && ' ' == buffer[i+8] && '0' == buffer[i+9] && '5' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 428 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'N' == buffer[i+1] && 'U' == buffer[i+2] && 'T' == buffer[i+3] && 'E' == buffer[i+4] && 'L' == buffer[i+5] && 'L' == buffer[i+6] && 'A' == buffer[i+7]) {
 matched = true;
pattern_id = 429 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 'h' == buffer[i+2] && 'i' == buffer[i+3] && 's' == buffer[i+4] && 't' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && 'y' == buffer[i+8]) {
 matched = true;
pattern_id = 430 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 'b' == buffer[i+2] && 'a' == buffer[i+3] && 's' == buffer[i+4] && 'h' == buffer[i+5] && '_' == buffer[i+6] && 'h' == buffer[i+7] && 'i' == buffer[i+8] && 's' == buffer[i+9] && 't' == buffer[i+10] && 'o' == buffer[i+11] && 'r' == buffer[i+12] && 'y' == buffer[i+13]) {
 matched = true;
pattern_id = 431 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '3' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 432 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'r' == buffer[i+2] && 'g' == buffer[i+3] && 's' == buffer[i+4] && '.' == buffer[i+5] && 'c' == buffer[i+6] && 'm' == buffer[i+7] && 'd' == buffer[i+8]) {
 matched = true;
pattern_id = 433 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'w' == buffer[i+2] && 'w' == buffer[i+3] && 'w' == buffer[i+4] && 'a' == buffer[i+5] && 'i' == buffer[i+6] && 's' == buffer[i+7]) {
 matched = true;
pattern_id = 434 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'a' == buffer[i+1] && 'l' == buffer[i+2] && 'e' == buffer[i+3] && 'n' == buffer[i+4] && 'd' == buffer[i+5] && 'a' == buffer[i+6] && 'r' == buffer[i+7]) {
 matched = true;
pattern_id = 435 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'h' == buffer[i+4] && 'i' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && 'l' == buffer[i+8] && 'o' == buffer[i+9] && 'g' == buffer[i+10] && '.' == buffer[i+11] && 's' == buffer[i+12] && 'h' == buffer[i+13]) {
 matched = true;
pattern_id = 436 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'h' == buffer[i+4] && 'i' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && 's' == buffer[i+8] && 'v' == buffer[i+9] && 'c' == buffer[i+10] && '.' == buffer[i+11] && 's' == buffer[i+12] && 'h' == buffer[i+13]) {
 matched = true;
pattern_id = 437 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && 'p' == buffer[i+6] && '.' == buffer[i+7] && 's' == buffer[i+8] && 'h' == buffer[i+9]) {
 matched = true;
pattern_id = 438 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && 'p' == buffer[i+6] && 'l' == buffer[i+7] && 'o' == buffer[i+8] && 'g' == buffer[i+9] && '.' == buffer[i+10] && 's' == buffer[i+11] && 'h' == buffer[i+12]) {
 matched = true;
pattern_id = 439 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'R' == buffer[i+1] && 'I' == buffer[i+2] && 'V' == buffer[i+3] && 'M' == buffer[i+4] && 'S' == buffer[i+5] && 'G' == buffer[i+6] && ' ' == buffer[i+7]) {
 matched = true;
pattern_id = 440 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'u' == buffer[i+2] && 'k' == buffer[i+3] && 't' == buffer[i+4] && 'i' == buffer[i+5] && 'o' == buffer[i+6] && 'n' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 441 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'f' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 'u' == buffer[i+7] && 'm' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 442 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'p' == buffer[i+4] && 'p' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 443 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'r' == buffer[i+5] && 'e' == buffer[i+6] && 'c' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 444 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'n' == buffer[i+5] && 'e' == buffer[i+6] && 'w' == buffer[i+7] && 's' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 445 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'o' == buffer[i+2] && 'o' == buffer[i+3] && 'k' == buffer[i+4] && '.' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 446 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'e' == buffer[i+2] && 'w' == buffer[i+3] && 's' == buffer[i+4] && 'd' == buffer[i+5] && 'e' == buffer[i+6] && 's' == buffer[i+7] && 'k' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 447 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'l' == buffer[i+3] && '_' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'k' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 448 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'i' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 449 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'd' == buffer[i+2] && 'b' == buffer[i+3] && 's' == buffer[i+4] && 'e' == buffer[i+5] && 'a' == buffer[i+6] && 'r' == buffer[i+7] && 'c' == buffer[i+8] && 'h' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 450 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'w' == buffer[i+2] && 'c' == buffer[i+3]) {
 matched = true;
pattern_id = 451 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && 't' == buffer[i+7] && 'o' == buffer[i+8] && 'p' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 452 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && 'a' == buffer[i+5] && 'd' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 453 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'e' == buffer[i+3] && 'w' == buffer[i+4] && '_' == buffer[i+5] && 's' == buffer[i+6] && 'o' == buffer[i+7] && 'u' == buffer[i+8] && 'r' == buffer[i+9] && 'c' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 454 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'k' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'o' == buffer[i+5] && 'g' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 455 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 't' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && '.' == buffer[i+5] && 'i' == buffer[i+6] && 'd' == buffer[i+7] && 'c' == buffer[i+8]) {
 matched = true;
pattern_id = 456 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '~' == buffer[i+1] && 'n' == buffer[i+2] && 'o' == buffer[i+3] && 'b' == buffer[i+4] && 'o' == buffer[i+5] && 'd' == buffer[i+6] && 'y' == buffer[i+7]) {
 matched = true;
pattern_id = 457 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'e' == buffer[i+2] && 'w' == buffer[i+3] && 'u' == buffer[i+4] && 's' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7]) {
 matched = true;
pattern_id = 458 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'e' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && 'a' == buffer[i+6] && 't' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 459 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'x' == buffer[i+2] && 'a' == buffer[i+3] && 'i' == buffer[i+4] && 'r' == buffer[i+5] && '/' == buffer[i+6] && 's' == buffer[i+7] && 'e' == buffer[i+8] && 'a' == buffer[i+9] && 'r' == buffer[i+10] && 'c' == buffer[i+11] && 'h' == buffer[i+12] && '/' == buffer[i+13]) {
 matched = true;
pattern_id = 460 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && '1' == buffer[i+2] && 'd' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 'p' == buffer[i+6] && '3' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 461 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && '1' == buffer[i+2] && 'd' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 'p' == buffer[i+6] && '3' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 462 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'P' == buffer[i+1] && 'R' == buffer[i+2] && 'N' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 463 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'N' == buffer[i+1] && 'U' == buffer[i+2] && 'L' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 464 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'l' == buffer[i+2] && 'i' == buffer[i+3] && 'b' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && 'a' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10] && '|' == buffer[i+11] && '7' == buffer[i+12] && 'C' == buffer[i+13] && '|' == buffer[i+14]) {
 matched = true;
pattern_id = 465 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'l' == buffer[i+2] && 'i' == buffer[i+3] && 'b' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && 'a' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 466 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'q' == buffer[i+1] && 'u' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'y' == buffer[i+5] && '?' == buffer[i+6] && 'm' == buffer[i+7] && 's' == buffer[i+8] && 's' == buffer[i+9] && '=' == buffer[i+10] && '.' == buffer[i+11] && '.' == buffer[i+12]) {
 matched = true;
pattern_id = 467 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'b' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8] && '|' == buffer[i+9] && '7' == buffer[i+10] && 'C' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 468 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'b' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8]) {
 matched = true;
pattern_id = 469 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'p' == buffer[i+3] && 'u' == buffer[i+4] && 't' == buffer[i+5] && '.' == buffer[i+6] && 'b' == buffer[i+7] && 'a' == buffer[i+8] && 't' == buffer[i+9] && '|' == buffer[i+10] && '7' == buffer[i+11] && 'C' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 470 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'p' == buffer[i+3] && 'u' == buffer[i+4] && 't' == buffer[i+5] && '.' == buffer[i+6] && 'b' == buffer[i+7] && 'a' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 471 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'p' == buffer[i+3] && 'u' == buffer[i+4] && 't' == buffer[i+5] && '2' == buffer[i+6] && '.' == buffer[i+7] && 'b' == buffer[i+8] && 'a' == buffer[i+9] && 't' == buffer[i+10] && '|' == buffer[i+11] && '7' == buffer[i+12] && 'C' == buffer[i+13] && '|' == buffer[i+14]) {
 matched = true;
pattern_id = 472 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'p' == buffer[i+3] && 'u' == buffer[i+4] && 't' == buffer[i+5] && '2' == buffer[i+6] && '.' == buffer[i+7] && 'b' == buffer[i+8] && 'a' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 473 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 'v' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'b' == buffer[i+8] && 'a' == buffer[i+9] && 't' == buffer[i+10] && '|' == buffer[i+11] && '7' == buffer[i+12] && 'C' == buffer[i+13] && '|' == buffer[i+14]) {
 matched = true;
pattern_id = 474 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 'v' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'b' == buffer[i+8] && 'a' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 475 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '?' == buffer[i+1] && 'M' == buffer[i+2] && '=' == buffer[i+3] && 'D' == buffer[i+4]) {
 matched = true;
pattern_id = 476 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && '-' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && 'f' == buffer[i+10] && 'o' == buffer[i+11]) {
 matched = true;
pattern_id = 477 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && '-' == buffer[i+7] && 's' == buffer[i+8] && 't' == buffer[i+9] && 'a' == buffer[i+10] && 't' == buffer[i+11] && 'u' == buffer[i+12] && 's' == buffer[i+13]) {
 matched = true;
pattern_id = 478 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'l' == buffer[i+6] && '?' == buffer[i+7]) {
 matched = true;
pattern_id = 479 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'l' == buffer[i+6]) {
 matched = true;
pattern_id = 480 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'h' == buffer[i+4] && 'i' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 's' == buffer[i+9] && 'h' == buffer[i+10] && '?' == buffer[i+11]) {
 matched = true;
pattern_id = 481 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '-' == buffer[i+3] && 'h' == buffer[i+4] && 'o' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && 's' == buffer[i+8] && 'v' == buffer[i+9] && 'c' == buffer[i+10] && '.' == buffer[i+11] && 's' == buffer[i+12] && 'h' == buffer[i+13]) {
 matched = true;
pattern_id = 482 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'U' == buffer[i+1] && 'T' == buffer[i+2] && 'H' == buffer[i+3] && 'I' == buffer[i+4] && 'N' == buffer[i+5] && 'F' == buffer[i+6] && 'O' == buffer[i+7]) {
 matched = true;
pattern_id = 483 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8] && 'l' == buffer[i+9] && 's' == buffer[i+10]) {
 matched = true;
pattern_id = 484 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'o' == buffer[i+1] && 'd' == buffer[i+2] && 'e' == buffer[i+3] && '=' == buffer[i+4] && 'd' == buffer[i+5] && 'e' == buffer[i+6] && 'b' == buffer[i+7] && 'u' == buffer[i+8] && 'g' == buffer[i+9]) {
 matched = true;
pattern_id = 485 ;
}
}
for(int i=0; i<buffer_size; i++){
if('v' == buffer[i] && 'e' == buffer[i+1] && 'r' == buffer[i+2] && 's' == buffer[i+3] && 'i' == buffer[i+4] && 'o' == buffer[i+5] && 'n' == buffer[i+6]) {
 matched = true;
pattern_id = 486 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'm' == buffer[i+4] && 'a' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 487 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'w' == buffer[i+4] && 'r' == buffer[i+5] && 'a' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 488 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '3' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 489 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '%' == buffer[i+1] && '%' == buffer[i+2]) {
 matched = true;
pattern_id = 490 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 's' == buffer[i+2] && 'S' == buffer[i+3] && 'e' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'c' == buffer[i+7] && 'h' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 491 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'E' == buffer[i+1] && 'L' == buffer[i+2] && 'O' == buffer[i+3]) {
 matched = true;
pattern_id = 492 ;
}
}
for(int i=0; i<buffer_size; i++){
if('E' == buffer[i] && 'T' == buffer[i+1] && 'R' == buffer[i+2] && 'N' == buffer[i+3]) {
 matched = true;
pattern_id = 493 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'C' == buffer[i+1] && 'V' == buffer[i+2] && 'S' == buffer[i+3] && '/' == buffer[i+4] && 'E' == buffer[i+5] && 'n' == buffer[i+6] && 't' == buffer[i+7] && 'r' == buffer[i+8] && 'i' == buffer[i+9] && 'e' == buffer[i+10] && 's' == buffer[i+11]) {
 matched = true;
pattern_id = 494 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'v' == buffer[i+2] && 's' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '/' == buffer[i+7] && 'v' == buffer[i+8] && 'e' == buffer[i+9] && 'r' == buffer[i+10] && 's' == buffer[i+11] && 'i' == buffer[i+12] && 'o' == buffer[i+13] && 'n' == buffer[i+14]) {
 matched = true;
pattern_id = 495 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'b' == buffer[i+2] && 'm' == buffer[i+3] && 'a' == buffer[i+4] && 'n' == buffer[i+5] && '/' == buffer[i+6] && 'd' == buffer[i+7] && 'b' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 496 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'c' == buffer[i+2] && 's' == buffer[i+3] && 'h' == buffer[i+4] && 'o' == buffer[i+5] && 'p' == buffer[i+6]) {
 matched = true;
pattern_id = 497 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'c' == buffer[i+3] && '/' == buffer[i+4] && 'p' == buffer[i+5] && 'a' == buffer[i+6] && 'c' == buffer[i+7] && 'k' == buffer[i+8] && 'a' == buffer[i+9] && 'g' == buffer[i+10] && 'e' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 498 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'c' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 499 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'h' == buffer[i+7] && 't' == buffer[i+8] && 'm' == buffer[i+9] && '?' == buffer[i+10]) {
 matched = true;
pattern_id = 500 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'h' == buffer[i+7] && 't' == buffer[i+8] && 'm' == buffer[i+9]) {
 matched = true;
pattern_id = 501 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3] && 'o' == buffer[i+4] && 'p' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 502 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3] && 'o' == buffer[i+4] && 'p' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 503 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'p' == buffer[i+5] && 'a' == buffer[i+6] && 'g' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 504 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'f' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 'u' == buffer[i+7] && 'm' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 505 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'b' == buffer[i+3] && '.' == buffer[i+4] && 'n' == buffer[i+5] && 's' == buffer[i+6] && 'f' == buffer[i+7]) {
 matched = true;
pattern_id = 506 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 's' == buffer[i+4] && 'v' == buffer[i+5] && 'r' == buffer[i+6] && '.' == buffer[i+7] && 'n' == buffer[i+8] && 's' == buffer[i+9] && 'f' == buffer[i+10]) {
 matched = true;
pattern_id = 507 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 'u' == buffer[i+4] && 'p' == buffer[i+5] && '.' == buffer[i+6] && 'n' == buffer[i+7] && 's' == buffer[i+8] && 'f' == buffer[i+9]) {
 matched = true;
pattern_id = 508 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'r' == buffer[i+5] && 'e' == buffer[i+6] && 'p' == buffer[i+7] && '.' == buffer[i+8] && 'n' == buffer[i+9] && 's' == buffer[i+10] && 'f' == buffer[i+11]) {
 matched = true;
pattern_id = 509 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '.' == buffer[i+9] && 'n' == buffer[i+10] && 's' == buffer[i+11] && 'f' == buffer[i+12]) {
 matched = true;
pattern_id = 510 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'v' == buffer[i+2] && 'e' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5] && 's' == buffer[i+6] && '4' == buffer[i+7] && '.' == buffer[i+8] && 'n' == buffer[i+9] && 's' == buffer[i+10] && 'f' == buffer[i+11]) {
 matched = true;
pattern_id = 511 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 't' == buffer[i+2] && 's' == buffer[i+3] && 'y' == buffer[i+4] && 'n' == buffer[i+5] && 'c' == buffer[i+6] && '4' == buffer[i+7] && '.' == buffer[i+8] && 'n' == buffer[i+9] && 's' == buffer[i+10] && 'f' == buffer[i+11]) {
 matched = true;
pattern_id = 512 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'l' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && 'c' == buffer[i+6] && 't' == buffer[i+7] && '4' == buffer[i+8] && '.' == buffer[i+9] && 'n' == buffer[i+10] && 's' == buffer[i+11] && 'f' == buffer[i+12]) {
 matched = true;
pattern_id = 513 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'w' == buffer[i+5] && '4' == buffer[i+6] && '6' == buffer[i+7] && '.' == buffer[i+8] && 'n' == buffer[i+9] && 's' == buffer[i+10] && 'f' == buffer[i+11]) {
 matched = true;
pattern_id = 514 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'o' == buffer[i+2] && 'o' == buffer[i+3] && 'k' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'r' == buffer[i+7] && 'k' == buffer[i+8] && '.' == buffer[i+9] && 'n' == buffer[i+10] && 's' == buffer[i+11] && 'f' == buffer[i+12]) {
 matched = true;
pattern_id = 515 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && '.' == buffer[i+5] && 'b' == buffer[i+6] && 'o' == buffer[i+7] && 'x' == buffer[i+8]) {
 matched = true;
pattern_id = 516 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 517 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'l' == buffer[i+2] && 'x' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '.' == buffer[i+7] && 'd' == buffer[i+8] && 'l' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 518 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'm' == buffer[i+2] && 'p' == buffer[i+3] && 'o' == buffer[i+4] && 'w' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && '?' == buffer[i+8] && 'D' == buffer[i+9] && 'B' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 519 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'a' == buffer[i+2] && 'q' == buffer[i+3] && 'm' == buffer[i+4] && 'a' == buffer[i+5] && 'n' == buffer[i+6] && 'a' == buffer[i+7] && 'g' == buffer[i+8] && 'e' == buffer[i+9] && 'r' == buffer[i+10] && '.' == buffer[i+11] && 'c' == buffer[i+12] && 'g' == buffer[i+13] && 'i' == buffer[i+14]) {
 matched = true;
pattern_id = 520 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'i' == buffer[i+3] && 'm' == buffer[i+4] && 'a' == buffer[i+5] && 'g' == buffer[i+6] && 'e' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 521 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'u' == buffer[i+2] && 'e' == buffer[i+3] && 's' == buffer[i+4] && 't' == buffer[i+5] && 'b' == buffer[i+6] && 'o' == buffer[i+7] && 'o' == buffer[i+8] && 'k' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 522 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 523 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 's' == buffer[i+3] && 'e' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'c' == buffer[i+7] && 'h' == buffer[i+8] && '?' == buffer[i+9] && '-' == buffer[i+10] && 'c' == buffer[i+11]) {
 matched = true;
pattern_id = 524 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 's' == buffer[i+3] && 'e' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'c' == buffer[i+7] && 'h' == buffer[i+8]) {
 matched = true;
pattern_id = 525 ;
}
}
for(int i=0; i<buffer_size; i++){
if('D' == buffer[i] && 'E' == buffer[i+1] && 'L' == buffer[i+2] && 'E' == buffer[i+3] && 'T' == buffer[i+4] && 'E' == buffer[i+5] && ' ' == buffer[i+6]) {
 matched = true;
pattern_id = 526 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && '.' == buffer[i+2] && '/' == buffer[i+3] && '.' == buffer[i+4] && '.' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 527 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'c' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4]) {
 matched = true;
pattern_id = 528 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'r' == buffer[i+3] && 'm' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 529 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'l' == buffer[i+6] && '?' == buffer[i+7]) {
 matched = true;
pattern_id = 530 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'G' == buffer[i+1] && 'W' == buffer[i+2] && 'W' == buffer[i+3] && 'E' == buffer[i+4] && 'B' == buffer[i+5] && '.' == buffer[i+6] && 'E' == buffer[i+7] && 'X' == buffer[i+8] && 'E' == buffer[i+9] && '?' == buffer[i+10]) {
 matched = true;
pattern_id = 531 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 'p' == buffer[i+3]) {
 matched = true;
pattern_id = 532 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'M' == buffer[i+1] && 'D' == buffer[i+2]) {
 matched = true;
pattern_id = 533 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'N' == buffer[i+1] && 'F' == buffer[i+2] && 'R' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 534 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'O' == buffer[i+1] && 'D' == buffer[i+2] && 'E' == buffer[i+3]) {
 matched = true;
pattern_id = 535 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'W' == buffer[i+1] && 'D' == buffer[i+2]) {
 matched = true;
pattern_id = 536 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'Y' == buffer[i+1] && 'S' == buffer[i+2] && 'T' == buffer[i+3]) {
 matched = true;
pattern_id = 537 ;
}
}
for(int i=0; i<buffer_size; i++){
if('*' == buffer[i] && '|' == buffer[i+1] && '0' == buffer[i+2] && '2' == buffer[i+3] && '|' == buffer[i+4]) {
 matched = true;
pattern_id = 538 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'P' == buffer[i+1] && 'O' == buffer[i+2] && 'P' == buffer[i+3]) {
 matched = true;
pattern_id = 539 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'n' == buffer[i+4] && 'a' == buffer[i+5] && 'm' == buffer[i+6] && 'e' == buffer[i+7] && '|' == buffer[i+8] && '3' == buffer[i+9] && 'A' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 540 ;
}
}
for(int i=0; i<buffer_size; i++){
if('V' == buffer[i] && 'e' == buffer[i+1] && 'r' == buffer[i+2] && 's' == buffer[i+3] && 'i' == buffer[i+4] && 'o' == buffer[i+5] && 'n' == buffer[i+6] && '_' == buffer[i+7] && 'M' == buffer[i+8] && 'a' == buffer[i+9] && 'p' == buffer[i+10] && 'p' == buffer[i+11] && 'e' == buffer[i+12] && 'r' == buffer[i+13]) {
 matched = true;
pattern_id = 541 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'c' == buffer[i+3] && 'u' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6] && 'n' == buffer[i+7] && 't' == buffer[i+8] && '.' == buffer[i+9] && 'd' == buffer[i+10] && '2' == buffer[i+11] && 'w' == buffer[i+12]) {
 matched = true;
pattern_id = 542 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'b' == buffer[i+2] && '2' == buffer[i+3] && 'w' == buffer[i+4] && 'w' == buffer[i+5] && 'w' == buffer[i+6]) {
 matched = true;
pattern_id = 543 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '-' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8] && '/' == buffer[i+9] && '*' == buffer[i+10] && '?' == buffer[i+11] && '*' == buffer[i+12]) {
 matched = true;
pattern_id = 544 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 545 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 546 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'l' == buffer[i+4] && '.' == buffer[i+5] && 'e' == buffer[i+6] && 'x' == buffer[i+7] && 'e' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 547 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'l' == buffer[i+4] && '?' == buffer[i+5]) {
 matched = true;
pattern_id = 548 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3] && '.' == buffer[i+4] && 'b' == buffer[i+5] && 'a' == buffer[i+6] && 't' == buffer[i+7]) {
 matched = true;
pattern_id = 549 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 'v' == buffer[i+3] && 'i' == buffer[i+4] && 'r' == buffer[i+5] && 'o' == buffer[i+6] && 'n' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 550 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'm' == buffer[i+3] && 'p' == buffer[i+4] && 'a' == buffer[i+5] && 's' == buffer[i+6] && '?' == buffer[i+7] && '|' == buffer[i+8] && '0' == buffer[i+9] && 'A' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 551 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'r' == buffer[i+3] && 't' == buffer[i+4] && '3' == buffer[i+5] && '2' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 552 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'f' == buffer[i+2] && 'd' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 'p' == buffer[i+6] && 'a' == buffer[i+7] && 'l' == buffer[i+8] && 'y' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 553 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'f' == buffer[i+2] && 'd' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 'p' == buffer[i+6] && 'a' == buffer[i+7] && 'l' == buffer[i+8] && 'y' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 554 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 'g' == buffer[i+3] && 'e' == buffer[i+4] && 'l' == buffer[i+5] && 'o' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 555 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'n' == buffer[i+3] && 'd' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'f' == buffer[i+11] && 'm' == buffer[i+12]) {
 matched = true;
pattern_id = 556 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'r' == buffer[i+2] && 'a' == buffer[i+3] && 'c' == buffer[i+4] && 'e' == buffer[i+5] && '.' == buffer[i+6] && 'a' == buffer[i+7] && 'x' == buffer[i+8] && 'd' == buffer[i+9]) {
 matched = true;
pattern_id = 557 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'm' == buffer[i+1] && 'd' == buffer[i+2] && '3' == buffer[i+3] && '2' == buffer[i+4] && '.' == buffer[i+5] && 'e' == buffer[i+6] && 'x' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 558 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '~' == buffer[i+1] && 'f' == buffer[i+2] && 't' == buffer[i+3] && 'p' == buffer[i+4]) {
 matched = true;
pattern_id = 559 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'k' == buffer[i+2] && 'p' == buffer[i+3] && 'l' == buffer[i+4] && 'o' == buffer[i+5] && 'g' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 560 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 561 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'd' == buffer[i+5] && 'o' == buffer[i+6] && 's' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 562 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && 'e' == buffer[i+4] && '/' == buffer[i+5] && 'f' == buffer[i+6] && 't' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 563 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && 'e' == buffer[i+4] && '/' == buffer[i+5] && 'w' == buffer[i+6] && 'w' == buffer[i+7] && 'w' == buffer[i+8]) {
 matched = true;
pattern_id = 564 ;
}
}
for(int i=0; i<buffer_size; i++){
if('E' == buffer[i] && 'X' == buffer[i+1] && 'E' == buffer[i+2] && 'C' == buffer[i+3] && 'U' == buffer[i+4] && 'T' == buffer[i+5] && 'E' == buffer[i+6] && '_' == buffer[i+7] && 'S' == buffer[i+8] && 'Y' == buffer[i+9] && 'S' == buffer[i+10] && 'T' == buffer[i+11] && 'E' == buffer[i+12] && 'M' == buffer[i+13]) {
 matched = true;
pattern_id = 565 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 'l' == buffer[i+2] && 'e' == buffer[i+3] && 'c' == buffer[i+4] && 't' == buffer[i+5] && ' ' == buffer[i+6]) {
 matched = true;
pattern_id = 566 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && 'w' == buffer[i+1] && 'h' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && ' ' == buffer[i+6]) {
 matched = true;
pattern_id = 567 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'e' == buffer[i+1] && 's' == buffer[i+2] && 'c' == buffer[i+3] && 'r' == buffer[i+4] && 'i' == buffer[i+5] && 'b' == buffer[i+6] && 'e' == buffer[i+7] && ' ' == buffer[i+8]) {
 matched = true;
pattern_id = 568 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'l' == buffer[i+2] && '_' == buffer[i+3] && 'c' == buffer[i+4] && 'o' == buffer[i+5] && 'n' == buffer[i+6] && 's' == buffer[i+7] && 't' == buffer[i+8] && 'r' == buffer[i+9] && 'a' == buffer[i+10] && 'i' == buffer[i+11] && 'n' == buffer[i+12] && 't' == buffer[i+13] && 's' == buffer[i+14]) {
 matched = true;
pattern_id = 569 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'l' == buffer[i+2] && '_' == buffer[i+3] && 'v' == buffer[i+4] && 'i' == buffer[i+5] && 'e' == buffer[i+6] && 'w' == buffer[i+7] && 's' == buffer[i+8]) {
 matched = true;
pattern_id = 570 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'l' == buffer[i+2] && '_' == buffer[i+3] && 's' == buffer[i+4] && 'o' == buffer[i+5] && 'u' == buffer[i+6] && 'r' == buffer[i+7] && 'c' == buffer[i+8] && 'e' == buffer[i+9]) {
 matched = true;
pattern_id = 571 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'l' == buffer[i+2] && '_' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && 's' == buffer[i+9]) {
 matched = true;
pattern_id = 572 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'l' == buffer[i+2] && '_' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && '_' == buffer[i+7] && 'c' == buffer[i+8] && 'o' == buffer[i+9] && 'l' == buffer[i+10] && 'u' == buffer[i+11] && 'm' == buffer[i+12] && 'n' == buffer[i+13] && 's' == buffer[i+14]) {
 matched = true;
pattern_id = 573 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'l' == buffer[i+2] && '_' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && '_' == buffer[i+7] && 'p' == buffer[i+8] && 'r' == buffer[i+9] && 'i' == buffer[i+10] && 'v' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 574 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'b' == buffer[i+1] && 'a' == buffer[i+2] && '_' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && 's' == buffer[i+9] && 'p' == buffer[i+10] && 'a' == buffer[i+11] && 'c' == buffer[i+12] && 'e' == buffer[i+13]) {
 matched = true;
pattern_id = 575 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'b' == buffer[i+1] && 'a' == buffer[i+2] && '_' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 'b' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && 's' == buffer[i+9]) {
 matched = true;
pattern_id = 576 ;
}
}
for(int i=0; i<buffer_size; i++){
if('u' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && '_' == buffer[i+4] && 't' == buffer[i+5] && 'a' == buffer[i+6] && 'b' == buffer[i+7] && 'l' == buffer[i+8] && 'e' == buffer[i+9] && 's' == buffer[i+10] && 'p' == buffer[i+11] && 'a' == buffer[i+12] && 'c' == buffer[i+13] && 'e' == buffer[i+14]) {
 matched = true;
pattern_id = 577 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'y' == buffer[i+1] && 's' == buffer[i+2] && '.' == buffer[i+3] && 'a' == buffer[i+4] && 'l' == buffer[i+5] && 'l' == buffer[i+6] && '_' == buffer[i+7] && 'u' == buffer[i+8] && 's' == buffer[i+9] && 'e' == buffer[i+10] && 'r' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 578 ;
}
}
for(int i=0; i<buffer_size; i++){
if('g' == buffer[i] && 'r' == buffer[i+1] && 'a' == buffer[i+2] && 'n' == buffer[i+3] && 't' == buffer[i+4] && ' ' == buffer[i+5]) {
 matched = true;
pattern_id = 579 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 't' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && ' ' == buffer[i+5] && 'u' == buffer[i+6] && 's' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9]) {
 matched = true;
pattern_id = 580 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'p' == buffer[i+3] && ' ' == buffer[i+4] && 't' == buffer[i+5] && 'a' == buffer[i+6] && 'b' == buffer[i+7] && 'l' == buffer[i+8] && 'e' == buffer[i+9]) {
 matched = true;
pattern_id = 581 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && ' ' == buffer[i+6] && 't' == buffer[i+7] && 'a' == buffer[i+8] && 'b' == buffer[i+9] && 'l' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 582 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 't' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && ' ' == buffer[i+5] && 't' == buffer[i+6] && 'a' == buffer[i+7] && 'b' == buffer[i+8] && 'l' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 583 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'r' == buffer[i+1] && 'u' == buffer[i+2] && 'n' == buffer[i+3] && 'c' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7] && ' ' == buffer[i+8] && 't' == buffer[i+9] && 'a' == buffer[i+10] && 'b' == buffer[i+11] && 'l' == buffer[i+12] && 'e' == buffer[i+13]) {
 matched = true;
pattern_id = 584 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && ' ' == buffer[i+6] && 'd' == buffer[i+7] && 'a' == buffer[i+8] && 't' == buffer[i+9] && 'a' == buffer[i+10] && 'b' == buffer[i+11] && 'a' == buffer[i+12] && 's' == buffer[i+13] && 'e' == buffer[i+14]) {
 matched = true;
pattern_id = 585 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 't' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && ' ' == buffer[i+5] && 'd' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8] && 'a' == buffer[i+9] && 'b' == buffer[i+10] && 'a' == buffer[i+11] && 's' == buffer[i+12] && 'e' == buffer[i+13]) {
 matched = true;
pattern_id = 586 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'm' == buffer[i+2] && 'a' == buffer[i+3] && 'g' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'a' == buffer[i+7] && 'p' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 587 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'c' == buffer[i+2] && 'h' == buffer[i+3] && 'o' == buffer[i+4] && '.' == buffer[i+5] && 'b' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8]) {
 matched = true;
pattern_id = 588 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 'e' == buffer[i+2] && 'l' == buffer[i+3] && 'l' == buffer[i+4] && 'o' == buffer[i+5] && '.' == buffer[i+6] && 'b' == buffer[i+7] && 'a' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 589 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && '.' == buffer[i+3] && 'c' == buffer[i+4] && 'g' == buffer[i+5] && 'i' == buffer[i+6]) {
 matched = true;
pattern_id = 590 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && 's' == buffer[i+3] && '_' == buffer[i+4] && 'f' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && 'u' == buffer[i+8] && 'm' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 591 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 's' == buffer[i+2] && 'g' == buffer[i+3] && 'u' == buffer[i+4] && 'e' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 592 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 's' == buffer[i+2] && 'l' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 593 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'f' == buffer[i+3] && 'o' == buffer[i+4] && 'r' == buffer[i+5] && 'u' == buffer[i+6] && 'm' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 594 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'e' == buffer[i+2] && 'w' == buffer[i+3] && 'd' == buffer[i+4] && 'e' == buffer[i+5] && 's' == buffer[i+6] && 'k' == buffer[i+7]) {
 matched = true;
pattern_id = 595 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 596 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'b' == buffer[i+2] && 'o' == buffer[i+3] && 'o' == buffer[i+4] && 'k' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 597 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 's' == buffer[i+5] && 'c' == buffer[i+6] && 'o' == buffer[i+7] && 'n' == buffer[i+8] && 'f' == buffer[i+9] && 'i' == buffer[i+10] && 'g' == buffer[i+11] && '.' == buffer[i+12] && 'p' == buffer[i+13] && 'l' == buffer[i+14]) {
 matched = true;
pattern_id = 598 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'a' == buffer[i+2] && 'l' == buffer[i+3] && 'k' == buffer[i+4] && 'b' == buffer[i+5] && 'a' == buffer[i+6] && 'l' == buffer[i+7] && 'k' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 599 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'c' == buffer[i+3] && 'y' == buffer[i+4] && 'c' == buffer[i+5] && 'l' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 600 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'M' == buffer[i+1] && 'a' == buffer[i+2] && 'c' == buffer[i+3] && 'h' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && 'e' == buffer[i+7] && 'I' == buffer[i+8] && 'n' == buffer[i+9] && 'f' == buffer[i+10] && 'o' == buffer[i+11]) {
 matched = true;
pattern_id = 601 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'm' == buffer[i+2] && 'u' == buffer[i+3] && 'm' == buffer[i+4] && 'a' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 602 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'o' == buffer[i+1] && 'c' == buffer[i+2] && 't' == buffer[i+3] && 'o' == buffer[i+4] && 'd' == buffer[i+5] && 'e' == buffer[i+6] && 'p' == buffer[i+7] && '.' == buffer[i+8] && 'b' == buffer[i+9] && 't' == buffer[i+10] && 'r' == buffer[i+11]) {
 matched = true;
pattern_id = 603 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'f' == buffer[i+3] && 'o' == buffer[i+4] && 's' == buffer[i+5] && 'r' == buffer[i+6] && 'c' == buffer[i+7] && 'h' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 604 ;
}
}
for(int i=0; i<buffer_size; i++){
if('J' == buffer[i] && 'O' == buffer[i+1] && 'I' == buffer[i+2] && 'N' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 605 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && '1' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && 's' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 606 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'e' == buffer[i+2] && 'f' == buffer[i+3] && 't' == buffer[i+4] && '_' == buffer[i+5] && 'm' == buffer[i+6] && 'a' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 607 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'l' == buffer[i+2] && 'o' == buffer[i+3] && 'b' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && '.' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && 'c' == buffer[i+10]) {
 matched = true;
pattern_id = 608 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'o' == buffer[i+5] && 'o' == buffer[i+6] && 'l' == buffer[i+7] && 's' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 609 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'u' == buffer[i+5] && 'f' == buffer[i+6] && 'f' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 610 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'u' == buffer[i+5] && 'f' == buffer[i+6] && 'f' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 611 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 'c' == buffer[i+2] && 'u' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && '_' == buffer[i+6] && 's' == buffer[i+7] && 'i' == buffer[i+8] && 't' == buffer[i+9] && 'e' == buffer[i+10] && ',' == buffer[i+11] && ' ' == buffer[i+12] && 'o' == buffer[i+13] && 'k' == buffer[i+14]) {
 matched = true;
pattern_id = 612 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 's' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 's' == buffer[i+5] && '.' == buffer[i+6] && 'x' == buffer[i+7] && 'm' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 613 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && '_' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 614 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && '_' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '4' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 615 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'A' == buffer[i+1] && 'R' == buffer[i+2] && 'T' == buffer[i+3] && 'I' == buffer[i+4] && 'A' == buffer[i+5] && 'L' == buffer[i+6]) {
 matched = true;
pattern_id = 616 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'g' == buffer[i+3] && 'e' == buffer[i+4] && 'd' == buffer[i+5] && ',' == buffer[i+6] && 't' == buffer[i+7] && 'r' == buffer[i+8] && 'u' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 617 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && '2' == buffer[i+2] && '/' == buffer[i+3] && 'b' == buffer[i+4] && '2' == buffer[i+5] && '-' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && 'c' == buffer[i+9] && 'l' == buffer[i+10] && 'u' == buffer[i+11] && 'd' == buffer[i+12] && 'e' == buffer[i+13] && '/' == buffer[i+14]) {
 matched = true;
pattern_id = 618 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'p' == buffer[i+4] && 'r' == buffer[i+5] && 'o' == buffer[i+6] && 'c' == buffer[i+7] && '?' == buffer[i+8] && '|' == buffer[i+9] && '2' == buffer[i+10] && '4' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 619 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'p' == buffer[i+4] && 'r' == buffer[i+5] && 'o' == buffer[i+6] && 'c' == buffer[i+7]) {
 matched = true;
pattern_id = 620 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '.' == buffer[i+7] && 'd' == buffer[i+8] && 'l' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 621 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 'D' == buffer[i+2] && 'S' == buffer[i+3] && '_' == buffer[i+4] && 'S' == buffer[i+5] && 't' == buffer[i+6] && 'o' == buffer[i+7] && 'r' == buffer[i+8] && 'e' == buffer[i+9]) {
 matched = true;
pattern_id = 622 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 'F' == buffer[i+2] && 'B' == buffer[i+3] && 'C' == buffer[i+4] && 'I' == buffer[i+5] && 'n' == buffer[i+6] && 'd' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9]) {
 matched = true;
pattern_id = 623 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 624 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '_' == buffer[i+3] && 's' == buffer[i+4] && 'm' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7] && 'i' == buffer[i+8] && 'e' == buffer[i+9] && 's' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 625 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 's' == buffer[i+2] && 'P' == buffer[i+3] && 'a' == buffer[i+4] && 's' == buffer[i+5] && 's' == buffer[i+6] && 'w' == buffer[i+7] && 'o' == buffer[i+8] && 'r' == buffer[i+9] && 'd' == buffer[i+10] && '.' == buffer[i+11] && 'c' == buffer[i+12] && 'g' == buffer[i+13] && 'i' == buffer[i+14]) {
 matched = true;
pattern_id = 626 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 'S' == buffer[i+1] && 'E' == buffer[i+2] && 'R' == buffer[i+3] && 'H' == buffer[i+4] && 'O' == buffer[i+5] && 'S' == buffer[i+6] && 'T' == buffer[i+7] && ' ' == buffer[i+8]) {
 matched = true;
pattern_id = 627 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '3' == buffer[i+1] && 'A' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 628 ;
}
}
for(int i=0; i<buffer_size; i++){
if('2' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2]) {
 matched = true;
pattern_id = 629 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'T' == buffer[i+1] && 'T' == buffer[i+2] && 'P' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 630 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'w' == buffer[i+2] && 'c' == buffer[i+3] && 'g' == buffer[i+4] && 'i' == buffer[i+5] && '6' == buffer[i+6] && '0' == buffer[i+7]) {
 matched = true;
pattern_id = 631 ;
}
}
for(int i=0; i<buffer_size; i++){
if('*' == buffer[i] && 'G' == buffer[i+1] && 'O' == buffer[i+2] && 'B' == buffer[i+3] && 'B' == buffer[i+4] && 'L' == buffer[i+5] && 'E' == buffer[i+6] && '*' == buffer[i+7]) {
 matched = true;
pattern_id = 632 ;
}
}
for(int i=0; i<buffer_size; i++){
if('u' == buffer[i] && 'n' == buffer[i+1] && 'a' == buffer[i+2] && 'm' == buffer[i+3] && 'e' == buffer[i+4]) {
 matched = true;
pattern_id = 633 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'O' == buffer[i+1] && 'B' == buffer[i+2] && 'B' == buffer[i+3] && 'L' == buffer[i+4] && 'E' == buffer[i+5] && 'S' == buffer[i+6]) {
 matched = true;
pattern_id = 634 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'i' == buffer[i+2] && 'r' == buffer[i+3] && 'e' == buffer[i+4] && 'c' == buffer[i+5] && 't' == buffer[i+6] && 'o' == buffer[i+7] && 'r' == buffer[i+8] && 'y' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 635 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && '|' == buffer[i+6] && 'C' == buffer[i+7]) {
 matched = true;
pattern_id = 636 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 's' == buffer[i+1] && 'f' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && '=' == buffer[i+6] && '|' == buffer[i+7] && '2' == buffer[i+8] && '2' == buffer[i+9] && '|' == buffer[i+10] && '`' == buffer[i+11]) {
 matched = true;
pattern_id = 637 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'l' == buffer[i+2] && 'i' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5] && 'f' == buffer[i+6] && 'o' == buffer[i+7] && 'r' == buffer[i+8] && 'm' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 638 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'f' == buffer[i+2] && '.' == buffer[i+3] && 'c' == buffer[i+4] && 'g' == buffer[i+5] && 'i' == buffer[i+6]) {
 matched = true;
pattern_id = 639 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'W' == buffer[i+1] && 'E' == buffer[i+2] && 'B' == buffer[i+3] && '-' == buffer[i+4] && 'I' == buffer[i+5] && 'N' == buffer[i+6] && 'F' == buffer[i+7]) {
 matched = true;
pattern_id = 640 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'l' == buffer[i+5] && 'e' == buffer[i+6] && 't' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 641 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6]) {
 matched = true;
pattern_id = 642 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'l' == buffer[i+5] && 'e' == buffer[i+6] && 't' == buffer[i+7] && '/' == buffer[i+8] && 'c' == buffer[i+9] && 'o' == buffer[i+10] && 'n' == buffer[i+11]) {
 matched = true;
pattern_id = 643 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'o' == buffer[i+2] && 'd' == buffer[i+3] && 'u' == buffer[i+4] && 'l' == buffer[i+5] && 'e' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 644 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'S' == buffer[i+1] && 'H' == buffer[i+2] && '-' == buffer[i+3]) {
 matched = true;
pattern_id = 645 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 646 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'O' == buffer[i+1] && 'G' == buffer[i+2] && 'I' == buffer[i+3] && 'N' == buffer[i+4]) {
 matched = true;
pattern_id = 647 ;
}
}
for(int i=0; i<buffer_size; i++){
if('!' == buffer[i] && '@' == buffer[i+1] && '|' == buffer[i+2] && '2' == buffer[i+3] && '3' == buffer[i+4] && '|' == buffer[i+5]) {
 matched = true;
pattern_id = 648 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'U' == buffer[i+1] && 'T' == buffer[i+2] && 'H' == buffer[i+3] && 'E' == buffer[i+4] && 'N' == buffer[i+5] && 'T' == buffer[i+6] && 'I' == buffer[i+7] && 'C' == buffer[i+8] && 'A' == buffer[i+9] && 'T' == buffer[i+10] && 'E' == buffer[i+11]) {
 matched = true;
pattern_id = 649 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'I' == buffer[i+1] && 'S' == buffer[i+2] && 'T' == buffer[i+3]) {
 matched = true;
pattern_id = 650 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'n' == buffer[i+2] && 'c' == buffer[i+3] && 'v' == buffer[i+4] && 'i' == buffer[i+5] && 'e' == buffer[i+6] && 'w' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && '.' == buffer[i+10] && 'j' == buffer[i+11] && 'a' == buffer[i+12] && 'r' == buffer[i+13]) {
 matched = true;
pattern_id = 651 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'a' == buffer[i+4] && 'l' == buffer[i+5] && 'i' == buffer[i+6] && 'z' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && '/' == buffer[i+10]) {
 matched = true;
pattern_id = 652 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'c' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 't' == buffer[i+7] && '-' == buffer[i+8] && 'l' == buffer[i+9] && 'i' == buffer[i+10] && 't' == buffer[i+11] && 'e' == buffer[i+12] && '/' == buffer[i+13]) {
 matched = true;
pattern_id = 653 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'f' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 654 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'a' == buffer[i+2] && 'y' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'o' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'd' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 655 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'c' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && 'v' == buffer[i+5] && 'e' == buffer[i+6] && '.' == buffer[i+7] && 'l' == buffer[i+8] && 'o' == buffer[i+9] && 'g' == buffer[i+10]) {
 matched = true;
pattern_id = 656 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'b' == buffer[i+3] && 'o' == buffer[i+4] && 't' == buffer[i+5] && 's' == buffer[i+6] && '.' == buffer[i+7] && 't' == buffer[i+8] && 'x' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 657 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'n' == buffer[i+1] && 'g' == buffer[i+2] && ' ' == buffer[i+3] && '[' == buffer[i+4] && ']' == buffer[i+5] && '.' == buffer[i+6] && '.' == buffer[i+7] && 'K' == buffer[i+8] && 's' == buffer[i+9] && ' ' == buffer[i+10] && 'l' == buffer[i+11] && '4' == buffer[i+12] && '4' == buffer[i+13]) {
 matched = true;
pattern_id = 658 ;
}
}
for(int i=0; i<buffer_size; i++){
if('n' == buffer[i] && 'i' == buffer[i+1] && 'g' == buffer[i+2] && 'g' == buffer[i+3] && 'a' == buffer[i+4] && 'h' == buffer[i+5] && 'b' == buffer[i+6] && 'i' == buffer[i+7] && 't' == buffer[i+8] && 'c' == buffer[i+9] && 'h' == buffer[i+10]) {
 matched = true;
pattern_id = 659 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'b' == buffer[i+3] && 'o' == buffer[i+4] && 't' == buffer[i+5] && '.' == buffer[i+6] && 't' == buffer[i+7] && 'x' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 660 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'l' == buffer[i+5] && 'e' == buffer[i+6] && 't' == buffer[i+7] && '/' == buffer[i+8] && 'a' == buffer[i+9] && 'd' == buffer[i+10] && 'm' == buffer[i+11] && 'i' == buffer[i+12] && 'n' == buffer[i+13]) {
 matched = true;
pattern_id = 661 ;
}
}
for(int i=0; i<buffer_size; i++){
if('Y' == buffer[i] && 'W' == buffer[i+1] && 'R' == buffer[i+2] && 't' == buffer[i+3] && 'a' == buffer[i+4] && 'W' == buffer[i+5] && '4' == buffer[i+6] && '6' == buffer[i+7] && 'Y' == buffer[i+8] && 'W' == buffer[i+9] && 'R' == buffer[i+10] && 't' == buffer[i+11] && 'a' == buffer[i+12] && 'W' == buffer[i+13] && '4' == buffer[i+14]) {
 matched = true;
pattern_id = 662 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'r' == buffer[i+2] && 't' == buffer[i+3] && 'g' == buffer[i+4] && '.' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 663 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4] && 'y' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 664 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'X' == buffer[i+1] && 'S' == buffer[i+2] && 'Q' == buffer[i+3] && 'L' == buffer[i+4] && 'C' == buffer[i+5] && 'o' == buffer[i+6] && 'n' == buffer[i+7] && 'f' == buffer[i+8] && 'i' == buffer[i+9] && 'g' == buffer[i+10] && '.' == buffer[i+11] && 'x' == buffer[i+12] && 'm' == buffer[i+13] && 'l' == buffer[i+14]) {
 matched = true;
pattern_id = 665 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'm' == buffer[i+2] && 's' == buffer[i+3] && '0' == buffer[i+4]) {
 matched = true;
pattern_id = 666 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'l' == buffer[i+2] && 'o' == buffer[i+3] && 'b' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'j' == buffer[i+9] && 's' == buffer[i+10] && 'a' == buffer[i+11]) {
 matched = true;
pattern_id = 667 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'c' == buffer[i+4] && 's' == buffer[i+5] && 'o' == buffer[i+6]) {
 matched = true;
pattern_id = 668 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'r' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 'n' == buffer[i+7] && 'v' == buffer[i+8]) {
 matched = true;
pattern_id = 669 ;
}
}
for(int i=0; i<buffer_size; i++){
if('u' == buffer[i] && 'i' == buffer[i+1] && 'd' == buffer[i+2] && '=' == buffer[i+3]) {
 matched = true;
pattern_id = 670 ;
}
}
for(int i=0; i<buffer_size; i++){
if('T' == buffer[i] && 'E' == buffer[i+1] && 'R' == buffer[i+2] && 'M' == buffer[i+3] && '=' == buffer[i+4] && 'x' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && 'm' == buffer[i+9]) {
 matched = true;
pattern_id = 671 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'B' == buffer[i+10] && '8' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 672 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '4' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 673 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && 'h' == buffer[i+3] && '/' == buffer[i+4] && '/' == buffer[i+5] && 'b' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 674 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'S' == buffer[i+1] && 'U' == buffer[i+2] && 'B' == buffer[i+3]) {
 matched = true;
pattern_id = 675 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'E' == buffer[i+1] && 'N' == buffer[i+2] && 'A' == buffer[i+3] && 'M' == buffer[i+4] && 'E' == buffer[i+5]) {
 matched = true;
pattern_id = 676 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'I' == buffer[i+1] && 'N' == buffer[i+2] && 'D' == buffer[i+3]) {
 matched = true;
pattern_id = 677 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '4' == buffer[i+5] && ' ' == buffer[i+6] && '9' == buffer[i+7] && '3' == buffer[i+8] && ' ' == buffer[i+9] && 'F' == buffer[i+10] && '3' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 678 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'E' == buffer[i+10] && '4' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 679 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '7' == buffer[i+8] && ' ' == buffer[i+9] && '8' == buffer[i+10] && '8' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 680 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && '-' == buffer[i+1] && 'S' == buffer[i+2] && 'E' == buffer[i+3] && 'A' == buffer[i+4] && 'R' == buffer[i+5] && 'C' == buffer[i+6] && 'H' == buffer[i+7] && ' ' == buffer[i+8]) {
 matched = true;
pattern_id = 681 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'o' == buffer[i+1] && 'l' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'W' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'd' == buffer[i+8] && 's' == buffer[i+9] && '.' == buffer[i+10] && 'N' == buffer[i+11] && 'e' == buffer[i+12] && 't' == buffer[i+13]) {
 matched = true;
pattern_id = 682 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'u' == buffer[i+1] && 't' == buffer[i+2] && 'h' == buffer[i+3] && 'o' == buffer[i+4] && 'r' == buffer[i+5] && 'i' == buffer[i+6] && 'z' == buffer[i+7] && 'e' == buffer[i+8] && 'd' == buffer[i+9] && '_' == buffer[i+10] && 'k' == buffer[i+11] && 'e' == buffer[i+12] && 'y' == buffer[i+13] && 's' == buffer[i+14]) {
 matched = true;
pattern_id = 683 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'U' == buffer[i+1] && 'T' == buffer[i+2] && 'H' == buffer[i+3]) {
 matched = true;
pattern_id = 684 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'p' == buffer[i+2] && 'c' == buffer[i+3] && '-' == buffer[i+4] && 'n' == buffer[i+5] && 'l' == buffer[i+6] && 'o' == buffer[i+7] && 'g' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 685 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'p' == buffer[i+2] && 'c' == buffer[i+3] && '-' == buffer[i+4] && 's' == buffer[i+5] && 'm' == buffer[i+6] && 'b' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 686 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'r' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 687 ;
}
}
for(int i=0; i<buffer_size; i++){
if('X' == buffer[i] && 'T' == buffer[i+1] && 'N' == buffer[i+2] && 'D' == buffer[i+3]) {
 matched = true;
pattern_id = 688 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '1' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 689 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'M' == buffer[i+1] && 'D' == buffer[i+2] && 'I' == buffer[i+3] && 'R' == buffer[i+4]) {
 matched = true;
pattern_id = 690 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'b' == buffer[i+2] && '2' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 691 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'A' == buffer[i+10] && 'B' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 692 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'F' == buffer[i+10] && '3' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 693 ;
}
}
for(int i=0; i<buffer_size; i++){
if('g' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 's' == buffer[i+3] && 'e' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'c' == buffer[i+7] && 'h' == buffer[i+8]) {
 matched = true;
pattern_id = 694 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'o' == buffer[i+2] && 'n' == buffer[i+3] && '-' == buffer[i+4] && 'p' == buffer[i+5]) {
 matched = true;
pattern_id = 695 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'E' == buffer[i+1] && 'S' == buffer[i+2] && 'T' == buffer[i+3]) {
 matched = true;
pattern_id = 696 ;
}
}
for(int i=0; i<buffer_size; i++){
if('D' == buffer[i] && 'E' == buffer[i+1] && 'L' == buffer[i+2] && 'E' == buffer[i+3]) {
 matched = true;
pattern_id = 697 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'M' == buffer[i+1] && 'D' == buffer[i+2]) {
 matched = true;
pattern_id = 698 ;
}
}
for(int i=0; i<buffer_size; i++){
if('x' == buffer[i] && 'p' == buffer[i+1] && '_' == buffer[i+2] && 'r' == buffer[i+3] && 'e' == buffer[i+4] && 'g' == buffer[i+5] && 'w' == buffer[i+6] && 'r' == buffer[i+7] && 'i' == buffer[i+8] && 't' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 699 ;
}
}
for(int i=0; i<buffer_size; i++){
if('x' == buffer[i] && 'p' == buffer[i+1] && '_' == buffer[i+2] && 'r' == buffer[i+3] && 'e' == buffer[i+4] && 'g' == buffer[i+5] && 'd' == buffer[i+6] && 'e' == buffer[i+7] && 'l' == buffer[i+8] && 'e' == buffer[i+9] && 't' == buffer[i+10] && 'e' == buffer[i+11] && 'k' == buffer[i+12] && 'e' == buffer[i+13] && 'y' == buffer[i+14]) {
 matched = true;
pattern_id = 700 ;
}
}
for(int i=0; i<buffer_size; i++){
if('0' == buffer[i] && '0' == buffer[i+1]) {
 matched = true;
pattern_id = 701 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && '|' == buffer[i+1] && '0' == buffer[i+2] && '0' == buffer[i+3] && ' ' == buffer[i+4] && '0' == buffer[i+5] && '2' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 702 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'A' == buffer[i+1] && 'L' == buffer[i+2] && ' ' == buffer[i+3]) {
 matched = true;
pattern_id = 703 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 'S' == buffer[i+1] && 'R' == buffer[i+2] && ' ' == buffer[i+3]) {
 matched = true;
pattern_id = 704 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'p' == buffer[i+2] && 'a' == buffer[i+3] && 's' == buffer[i+4] && 's' == buffer[i+5] && 'w' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 705 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'l' == buffer[i+2] && 'y' == buffer[i+3] && 'a' == buffer[i+4] && '.' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 706 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'r' == buffer[i+3] && 'a' == buffer[i+4] && 'l' == buffer[i+5] && 'a' == buffer[i+6] && 't' == buffer[i+7] && 'o' == buffer[i+8] && 'r' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 707 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && '_' == buffer[i+5] && 'b' == buffer[i+6] && 'o' == buffer[i+7] && 'd' == buffer[i+8] && 'y' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 708 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5] && 'd' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 709 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'd' == buffer[i+2] && 'i' == buffer[i+3] && 't' == buffer[i+4] && '_' == buffer[i+5] && 'i' == buffer[i+6] && 'm' == buffer[i+7] && 'a' == buffer[i+8] && 'g' == buffer[i+9] && 'e' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 710 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'm' == buffer[i+5] && 's' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 711 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3]) {
 matched = true;
pattern_id = 712 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '4' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 713 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '7' == buffer[i+8] && '|' == buffer[i+9] && '}' == buffer[i+10]) {
 matched = true;
pattern_id = 714 ;
}
}
for(int i=0; i<buffer_size; i++){
if('e' == buffer[i] && 'r' == buffer[i+1] && 'r' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4] && ' ' == buffer[i+5]) {
 matched = true;
pattern_id = 715 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'A' == buffer[i+10] && '9' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 716 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'A' == buffer[i+10] && '4' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 717 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && 'D' == buffer[i+8] && '|' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 718 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '8' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 719 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '8' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '2' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 720 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '5' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 721 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '2' == buffer[i+1] && '3' == buffer[i+2] && '|' == buffer[i+3] && 'l' == buffer[i+4] && 'i' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7]) {
 matched = true;
pattern_id = 722 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '2' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 723 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'o' == buffer[i+1] && 'v' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'f' == buffer[i+5] && 'l' == buffer[i+6] && 'o' == buffer[i+7] && 'w' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 724 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && '_' == buffer[i+6] && 'b' == buffer[i+7] && 'u' == buffer[i+8] && 'g' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 725 ;
}
}
for(int i=0; i<buffer_size; i++){
if('T' == buffer[i] && 'R' == buffer[i+1] && 'A' == buffer[i+2] && 'C' == buffer[i+3] && 'E' == buffer[i+4]) {
 matched = true;
pattern_id = 726 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 'e' == buffer[i+2] && 'l' == buffer[i+3] && 'p' == buffer[i+4] && 'o' == buffer[i+5] && 'u' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 727 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'M' == buffer[i+1] && 's' == buffer[i+2] && 'm' == buffer[i+3] && 'M' == buffer[i+4] && 'a' == buffer[i+5] && 's' == buffer[i+6] && 'k' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 728 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'D' == buffer[i+1] && 'B' == buffer[i+2] && '4' == buffer[i+3] && 'W' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 729 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && '|' == buffer[i+3] && '.' == buffer[i+4] && 'j' == buffer[i+5] && 's' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 730 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 'p' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'f' == buffer[i+5]) {
 matched = true;
pattern_id = 731 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'm' == buffer[i+2] && '/' == buffer[i+3] && 'd' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'c' == buffer[i+9]) {
 matched = true;
pattern_id = 732 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'c' == buffer[i+1] && 's' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4]) {
 matched = true;
pattern_id = 733 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'l' == buffer[i+2]) {
 matched = true;
pattern_id = 734 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'e' == buffer[i+1] && 'x' == buffer[i+2] && 'e' == buffer[i+3]) {
 matched = true;
pattern_id = 735 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'i' == buffer[i+2] && 'f' == buffer[i+3] && 'f' == buffer[i+4] && 's' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 736 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'h' == buffer[i+2] && 'i' == buffer[i+3] && 'p' == buffer[i+4] && '.' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 737 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '3' == buffer[i+5] && '2' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10] && '|' == buffer[i+11] && '7' == buffer[i+12] && 'C' == buffer[i+13] && '|' == buffer[i+14]) {
 matched = true;
pattern_id = 738 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '3' == buffer[i+5] && '2' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 739 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'y' == buffer[i+2] && 'r' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 740 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'l' == buffer[i+2] && 'o' == buffer[i+3] && 'b' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 741 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && 'a' == buffer[i+5] && 'd' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 742 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'r' == buffer[i+2] && 'i' == buffer[i+3] && 'v' == buffer[i+4] && 'm' == buffer[i+5] && 's' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 743 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '5' == buffer[i+5] && ' ' == buffer[i+6] && 'F' == buffer[i+7] && '7' == buffer[i+8] && '|' == buffer[i+9] && 'h' == buffer[i+10]) {
 matched = true;
pattern_id = 744 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 'r' == buffer[i+3] && 's' == buffer[i+4] && 'e' == buffer[i+5] && '_' == buffer[i+6] && 'x' == buffer[i+7] && 'm' == buffer[i+8] && 'l' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 745 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && '|' == buffer[i+4] && '3' == buffer[i+5] && 'A' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 746 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && ' ' == buffer[i+9] && 'B' == buffer[i+10] && 'C' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 747 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'R' == buffer[i+1] && 'E' == buffer[i+2] && 'A' == buffer[i+3] && 'T' == buffer[i+4] && 'E' == buffer[i+5]) {
 matched = true;
pattern_id = 748 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'A' == buffer[i+1] && 'P' == buffer[i+2] && 'A' == buffer[i+3]) {
 matched = true;
pattern_id = 749 ;
}
}
for(int i=0; i<buffer_size; i++){
if('T' == buffer[i] && 'O' == buffer[i+1] && 'P' == buffer[i+2]) {
 matched = true;
pattern_id = 750 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'S' == buffer[i+1] && 'E' == buffer[i+2] && 'T' == buffer[i+3]) {
 matched = true;
pattern_id = 751 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'l' == buffer[i+2] && 'b' == buffer[i+3] && 'u' == buffer[i+4] && 'm' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 752 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'h' == buffer[i+2] && 'i' == buffer[i+3] && 'p' == buffer[i+4] && 'c' == buffer[i+5] && 'f' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 753 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 'I' == buffer[i+1] && 'D' == buffer[i+2] && 'L' == buffer[i+3]) {
 matched = true;
pattern_id = 754 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'k' == buffer[i+2] && 'o' == buffer[i+3] && 'n' == buffer[i+4] && 'b' == buffer[i+5] && 'o' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'd' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 755 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'w' == buffer[i+2] && 's' == buffer[i+3] && 'r' == buffer[i+4] && 'v' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 756 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 's' == buffer[i+2] && 'i' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 'l' == buffer[i+6] && 'o' == buffer[i+7] && 'g' == buffer[i+8] && '.' == buffer[i+9] && 'd' == buffer[i+10] && 'l' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 757 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '.' == buffer[i+9] && 'a' == buffer[i+10] && 's' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 758 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'b' == buffer[i+5] && 'o' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'd' == buffer[i+9] && '.' == buffer[i+10] && 'm' == buffer[i+11] && 'd' == buffer[i+12] && 'b' == buffer[i+13]) {
 matched = true;
pattern_id = 759 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 'c' == buffer[i+5] && 'w' == buffer[i+6] && 'o' == buffer[i+7] && 'r' == buffer[i+8] && 'k' == buffer[i+9] && 's' == buffer[i+10] && '.' == buffer[i+11] && 'i' == buffer[i+12] && 'n' == buffer[i+13] && 'i' == buffer[i+14]) {
 matched = true;
pattern_id = 760 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '*' == buffer[i+1] && '.' == buffer[i+2] && 's' == buffer[i+3] && 'h' == buffer[i+4] && 't' == buffer[i+5] && 'm' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 761 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && '-' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 'w' == buffer[i+5] && 's' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 762 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'u' == buffer[i+4] && 't' == buffer[i+5] && 'b' == buffer[i+6] && 'o' == buffer[i+7] && 'x' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 763 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'm' == buffer[i+2] && '-' == buffer[i+3] && '2' == buffer[i+4] && '-' == buffer[i+5] && 'b' == buffer[i+6] && '2' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 764 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 765 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'u' == buffer[i+2] && 't' == buffer[i+3] && 'o' == buffer[i+4] && 'h' == buffer[i+5] && 't' == buffer[i+6] && 'm' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 766 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'o' == buffer[i+1] && 'r' == buffer[i+2] && 'u' == buffer[i+3] && 'm' == buffer[i+4] && '/' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'd' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 767 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'n' == buffer[i+2] && 'n' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 'n' == buffer[i+6] && 'c' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 768 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '5' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 769 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'F' == buffer[i+1] && 'F' == buffer[i+2] && '|' == buffer[i+3] && 'S' == buffer[i+4] && 'M' == buffer[i+5] && 'B' == buffer[i+6] && '%' == buffer[i+7]) {
 matched = true;
pattern_id = 770 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'C' == buffer[i+1] && 'S' == buffer[i+2] && 'M' == buffer[i+3] && 'a' == buffer[i+4] && 'i' == buffer[i+5] && 'l' == buffer[i+6] && 't' == buffer[i+7] && 'o' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 771 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'l' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 't' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 772 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'g' == buffer[i+4] && 'y' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 773 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'v' == buffer[i+2] && 's' == buffer[i+3] && 'v' == buffer[i+4] && 'i' == buffer[i+5] && 'e' == buffer[i+6] && 'w' == buffer[i+7] && '2' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 774 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'v' == buffer[i+2] && 's' == buffer[i+3] && 'l' == buffer[i+4] && 'o' == buffer[i+5] && 'g' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 775 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'u' == buffer[i+2] && 'l' == buffer[i+3] && 't' == buffer[i+4] && 'i' == buffer[i+5] && 'd' == buffer[i+6] && 'i' == buffer[i+7] && 'f' == buffer[i+8] && 'f' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 776 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'n' == buffer[i+2] && 'e' == buffer[i+3] && 'w' == buffer[i+4] && 's' == buffer[i+5] && 'w' == buffer[i+6] && 'e' == buffer[i+7] && 'b' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 777 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'w' == buffer[i+3] && 'n' == buffer[i+4] && 'l' == buffer[i+5] && 'o' == buffer[i+6] && 'a' == buffer[i+7] && 'd' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 778 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'z' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'm' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 779 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'z' == buffer[i+2] && 'b' == buffer[i+3] && 'o' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 780 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'z' == buffer[i+2] && 'm' == buffer[i+3] && 'a' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'c' == buffer[i+7] && 'g' == buffer[i+8] && 'i' == buffer[i+9]) {
 matched = true;
pattern_id = 781 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'i' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 's' == buffer[i+5] && 'e' == buffer[i+6] && 'e' == buffer[i+7] && 'k' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 782 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && '.' == buffer[i+4] && 'c' == buffer[i+5] && 'g' == buffer[i+6] && 'i' == buffer[i+7]) {
 matched = true;
pattern_id = 783 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 'd' == buffer[i+4] && 'o' == buffer[i+5] && 'c' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 784 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'l' == buffer[i+2] && 'o' == buffer[i+3] && 'b' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 785 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'm' == buffer[i+2] && 'a' == buffer[i+3] && 'g' == buffer[i+4] && 'e' == buffer[i+5] && 'F' == buffer[i+6] && 'o' == buffer[i+7] && 'l' == buffer[i+8] && 'i' == buffer[i+9] && 'o' == buffer[i+10] && '.' == buffer[i+11] && 'c' == buffer[i+12] && 'g' == buffer[i+13] && 'i' == buffer[i+14]) {
 matched = true;
pattern_id = 786 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'f' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 787 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'v' == buffer[i+5] && 'i' == buffer[i+6] && 'e' == buffer[i+7] && 'w' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 788 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 's' == buffer[i+2] && 'M' == buffer[i+3] && 'a' == buffer[i+4] && 'n' == buffer[i+5] && 'a' == buffer[i+6] && 'g' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 789 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 790 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'r' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5] && 'm' == buffer[i+6] && 'a' == buffer[i+7] && 'i' == buffer[i+8] && 'l' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 791 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'i' == buffer[i+5] && 'c' == buffer[i+6] && 'e' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 792 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 'p' == buffer[i+4] && 'a' == buffer[i+5] && 's' == buffer[i+6] && 's' == buffer[i+7] && 'w' == buffer[i+8] && 'd' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'g' == buffer[i+12] && 'i' == buffer[i+13]) {
 matched = true;
pattern_id = 793 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 's' == buffer[i+2] && '_' == buffer[i+3] && 'm' == buffer[i+4] && 'a' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 794 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 's' == buffer[i+2] && 'N' == buffer[i+3] && 'e' == buffer[i+4] && 'w' == buffer[i+5] && 's' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 795 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 's' == buffer[i+2] && 'u' == buffer[i+3] && 'n' == buffer[i+4] && 'a' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11]) {
 matched = true;
pattern_id = 796 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'o' == buffer[i+2] && 'z' == buffer[i+3] && 'i' == buffer[i+4] && 'l' == buffer[i+5] && 'a' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'g' == buffer[i+9] && 'i' == buffer[i+10]) {
 matched = true;
pattern_id = 797 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'i' == buffer[i+1] && 'b' == buffer[i+2] && '.' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'c' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 798 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'e' == buffer[i+3] && 'w' == buffer[i+4] && 't' == buffer[i+5] && 'o' == buffer[i+6] && 'p' == buffer[i+7] && 'i' == buffer[i+8] && 'c' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 799 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '.' == buffer[i+9] && 'd' == buffer[i+10] && 'l' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 800 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'T' == buffer[i+1] && 'O' == buffer[i+2] && 'P' == buffer[i+3] && '1' == buffer[i+4] && '0' == buffer[i+5] && '.' == buffer[i+6] && 'd' == buffer[i+7] && 'l' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 801 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'S' == buffer[i+1] && 'p' == buffer[i+2] && 'a' == buffer[i+3] && 'm' == buffer[i+4] && 'E' == buffer[i+5] && 'x' == buffer[i+6] && 'c' == buffer[i+7] && 'p' == buffer[i+8] && '.' == buffer[i+9] && 'd' == buffer[i+10] && 'l' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 802 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'p' == buffer[i+2] && 'a' == buffer[i+3] && 'm' == buffer[i+4] && 'r' == buffer[i+5] && 'u' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'd' == buffer[i+10] && 'l' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 803 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'C' == buffer[i+1] && 'o' == buffer[i+2] && 'n' == buffer[i+3] && 's' == buffer[i+4] && 'o' == buffer[i+5] && 'l' == buffer[i+6] && 'e' == buffer[i+7] && 'H' == buffer[i+8] && 'e' == buffer[i+9] && 'l' == buffer[i+10] && 'p' == buffer[i+11] && '/' == buffer[i+12]) {
 matched = true;
pattern_id = 804 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'd' == buffer[i+3] && 'i' == buffer[i+4] && 'r' == buffer[i+5] && 'e' == buffer[i+6] && 'c' == buffer[i+7] && 't' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 805 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'h' == buffer[i+2] && 'a' == buffer[i+3] && 'n' == buffer[i+4] && 'g' == buffer[i+5] && 'e' == buffer[i+6] && 'p' == buffer[i+7] && 'w' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 806 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'w' == buffer[i+2] && 'm' == buffer[i+3] && 'a' == buffer[i+4] && 'i' == buffer[i+5] && 'l' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 807 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'd' == buffer[i+2] && 'i' == buffer[i+3] && 'c' == buffer[i+4] && 'g' == buffer[i+5] && 'i' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 808 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'd' == buffer[i+2] && 'c' == buffer[i+3] && 'g' == buffer[i+4] && 'i' == buffer[i+5] && '.' == buffer[i+6] && 'e' == buffer[i+7] && 'x' == buffer[i+8] && 'e' == buffer[i+9]) {
 matched = true;
pattern_id = 809 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'W' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'n' == buffer[i+4] && 'e' == buffer[i+5] && 'w' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 810 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '.' == buffer[i+9] && 'd' == buffer[i+10] && 'l' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 811 ;
}
}
for(int i=0; i<buffer_size; i++){
if('X' == buffer[i] && 'E' == buffer[i+1] && 'X' == buffer[i+2] && 'C' == buffer[i+3] && 'H' == buffer[i+4] && '5' == buffer[i+5] && '0' == buffer[i+6]) {
 matched = true;
pattern_id = 812 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '4' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 813 ;
}
}
for(int i=0; i<buffer_size; i++){
if('E' == buffer[i] && 'X' == buffer[i+1] && 'P' == buffer[i+2] && 'N' == buffer[i+3]) {
 matched = true;
pattern_id = 814 ;
}
}
for(int i=0; i<buffer_size; i++){
if('V' == buffer[i] && 'R' == buffer[i+1] && 'F' == buffer[i+2] && 'Y' == buffer[i+3]) {
 matched = true;
pattern_id = 815 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'E' == buffer[i+1] && 'N' == buffer[i+2] && 'D' == buffer[i+3] && ' ' == buffer[i+4] && 'F' == buffer[i+5] && 'R' == buffer[i+6] && 'O' == buffer[i+7] && 'M' == buffer[i+8] && '|' == buffer[i+9] && '3' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 816 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'A' == buffer[i+1] && 'M' == buffer[i+2] && 'L' == buffer[i+3] && ' ' == buffer[i+4] && 'F' == buffer[i+5] && 'R' == buffer[i+6] && 'O' == buffer[i+7] && 'M' == buffer[i+8] && '|' == buffer[i+9] && '3' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 817 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'O' == buffer[i+1] && 'M' == buffer[i+2] && 'L' == buffer[i+3] && ' ' == buffer[i+4] && 'F' == buffer[i+5] && 'R' == buffer[i+6] && 'O' == buffer[i+7] && 'M' == buffer[i+8] && '|' == buffer[i+9] && '3' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 818 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'A' == buffer[i+1] && 'I' == buffer[i+2] && 'L' == buffer[i+3] && ' ' == buffer[i+4] && 'F' == buffer[i+5] && 'R' == buffer[i+6] && 'O' == buffer[i+7] && 'M' == buffer[i+8] && '|' == buffer[i+9] && '3' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 819 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'C' == buffer[i+1] && 'P' == buffer[i+2] && 'T' == buffer[i+3] && ' ' == buffer[i+4] && 'T' == buffer[i+5] && 'O' == buffer[i+6] && '|' == buffer[i+7] && '3' == buffer[i+8] && 'A' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 820 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 's' == buffer[i+2] && 'd' == buffer[i+3] && 'o' == buffer[i+4] && 'c' == buffer[i+5] && 'c' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8]) {
 matched = true;
pattern_id = 821 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'T' == buffer[i+1] && 'i' == buffer[i+2] && 't' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 822 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'S' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 'u' == buffer[i+4] && 'p' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 823 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && 'c' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 824 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'r' == buffer[i+2] && 'i' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5] && 'd' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 825 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '_' == buffer[i+6] && 'e' == buffer[i+7] && 'd' == buffer[i+8] && 'i' == buffer[i+9] && 't' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 826 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '_' == buffer[i+6] && 'h' == buffer[i+7] && 'e' == buffer[i+8] && 'l' == buffer[i+9] && 'p' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 827 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'o' == buffer[i+2] && 'o' == buffer[i+3] && 't' == buffer[i+4] && 'h' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 828 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 'l' == buffer[i+3] && 'l' == buffer[i+4] && '_' == buffer[i+5] && 's' == buffer[i+6] && 's' == buffer[i+7] && 'i' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 829 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 'p' == buffer[i+3] && 'u' == buffer[i+4] && 'p' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 830 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'i' == buffer[i+2] && 'l' == buffer[i+3] && 'e' == buffer[i+4] && 's' == buffer[i+5] && '.' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && 'c' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 831 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'h' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'b' == buffer[i+5] && 'o' == buffer[i+6] && 'x' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 832 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 'u' == buffer[i+4] && 'p' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 833 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'o' == buffer[i+1] && '=' == buffer[i+2] && 'e' == buffer[i+3] && 'x' == buffer[i+4] && 't' == buffer[i+5]) {
 matched = true;
pattern_id = 834 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'r' == buffer[i+1] && 'g' == buffer[i+2] && 'u' == buffer[i+3] && 'm' == buffer[i+4] && 'e' == buffer[i+5] && 'n' == buffer[i+6] && 't' == buffer[i+7]) {
 matched = true;
pattern_id = 835 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'x' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 836 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'x' == buffer[i+3] && 'w' == buffer[i+4] && 'e' == buffer[i+5] && 'b' == buffer[i+6] && '.' == buffer[i+7] && 'd' == buffer[i+8] && 'l' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 837 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'q' == buffer[i+1] && 'u' == buffer[i+2] && 'i' == buffer[i+3] && 'c' == buffer[i+4] && 'k' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && 'o' == buffer[i+8] && 'r' == buffer[i+9] && 'e' == buffer[i+10] && '.' == buffer[i+11] && 'c' == buffer[i+12] && 'g' == buffer[i+13] && 'i' == buffer[i+14]) {
 matched = true;
pattern_id = 838 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'p' == buffer[i+4] && 's' == buffer[i+5] && 'e' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'c' == buffer[i+9] && 'h' == buffer[i+10] && '.' == buffer[i+11] && 'a' == buffer[i+12] && 's' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 839 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'g' == buffer[i+2] && 'd' == buffer[i+3] && 'y' == buffer[i+4] && 'n' == buffer[i+5] && 'a' == buffer[i+6] && 'm' == buffer[i+7] && 'o' == buffer[i+8] && '.' == buffer[i+9] && 'e' == buffer[i+10] && 'x' == buffer[i+11] && 'e' == buffer[i+12]) {
 matched = true;
pattern_id = 840 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 's' == buffer[i+2] && 'm' == buffer[i+3] && 'l' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 841 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 842 ;
}
}
for(int i=0; i<buffer_size; i++){
if('X' == buffer[i] && 'C' == buffer[i+1] && 'W' == buffer[i+2] && 'D' == buffer[i+3]) {
 matched = true;
pattern_id = 843 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 844 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'h' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'h' == buffer[i+5] && 'e' == buffer[i+6] && 'a' == buffer[i+7] && 'd' == buffer[i+8] && 'e' == buffer[i+9] && 'r' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 845 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 'r' == buffer[i+3] && 't' == buffer[i+4] && 'n' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 846 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && '_' == buffer[i+3] && 'm' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'b' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 847 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'e' == buffer[i+2] && 'f' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'e' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 848 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'p' == buffer[i+2] && 'c' == buffer[i+3] && 'h' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 849 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'c' == buffer[i+3] && '/' == buffer[i+4] && 'a' == buffer[i+5] && 'd' == buffer[i+6] && 'm' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9]) {
 matched = true;
pattern_id = 850 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'e' == buffer[i+2] && 'w' == buffer[i+3] && 's' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 851 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 'c' == buffer[i+3] && 'k' == buffer[i+4] && 'a' == buffer[i+5] && 'g' == buffer[i+6] && 'e' == buffer[i+7] && 's' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 852 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'p' == buffer[i+2] && 'h' == buffer[i+3] && 'p' == buffer[i+4] && 'd' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 853 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'u' == buffer[i+2] && 'n' == buffer[i+3] && 'c' == buffer[i+4] && 't' == buffer[i+5] && 'i' == buffer[i+6] && 'o' == buffer[i+7] && 'n' == buffer[i+8] && 's' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 854 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'n' == buffer[i+3] && 'f' == buffer[i+4] && 'i' == buffer[i+5] && 'g' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'o' == buffer[i+9] && 'n' == buffer[i+10] && 'f' == buffer[i+11]) {
 matched = true;
pattern_id = 855 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'h' == buffer[i+2] && 'o' == buffer[i+3] && 'w' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'o' == buffer[i+7] && 't' == buffer[i+8] && 'o' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 856 ;
}
}
for(int i=0; i<buffer_size; i++){
if('X' == buffer[i] && 'M' == buffer[i+1] && 'K' == buffer[i+2] && 'D' == buffer[i+3]) {
 matched = true;
pattern_id = 857 ;
}
}
for(int i=0; i<buffer_size; i++){
if('N' == buffer[i] && 'L' == buffer[i+1] && 'S' == buffer[i+2] && 'T' == buffer[i+3]) {
 matched = true;
pattern_id = 858 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '8' == buffer[i+1] && '5' == buffer[i+2] && ' ' == buffer[i+3] && '1' == buffer[i+4] && '3' == buffer[i+5] && '|' == buffer[i+6] && '<' == buffer[i+7] && '|' == buffer[i+8] && '9' == buffer[i+9] && 'E' == buffer[i+10] && ' ' == buffer[i+11] && 'A' == buffer[i+12] && '2' == buffer[i+13] && '|' == buffer[i+14]) {
 matched = true;
pattern_id = 859 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '7' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 860 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '3' == buffer[i+1] && 'A' == buffer[i+2] && '|' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 861 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'N' == buffer[i+1] && 'T' == buffer[i+2] && 'O' == buffer[i+3]) {
 matched = true;
pattern_id = 862 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'T' == buffer[i+1] && 'O' == buffer[i+2] && 'U' == buffer[i+3]) {
 matched = true;
pattern_id = 863 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'P' == buffer[i+1] && 'P' == buffer[i+2] && 'E' == buffer[i+3]) {
 matched = true;
pattern_id = 864 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '_' == buffer[i+1] && 'a' == buffer[i+2] && 'd' == buffer[i+3] && 'm' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 865 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && '!' == buffer[i+1]) {
 matched = true;
pattern_id = 866 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'h' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && 'a' == buffer[i+6] && 'm' == buffer[i+7] && 'i' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12] && '?' == buffer[i+13]) {
 matched = true;
pattern_id = 867 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'h' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && 'a' == buffer[i+6] && 'm' == buffer[i+7] && 'i' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 868 ;
}
}
for(int i=0; i<buffer_size; i++){
if('n' == buffer[i] && 'e' == buffer[i+1] && 'w' == buffer[i+2] && 's' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && 't' == buffer[i+6] && 't' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 869 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'd' == buffer[i+2] && 'i' == buffer[i+3] && 't' == buffer[i+4] && 't' == buffer[i+5] && 'a' == buffer[i+6] && 'g' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 870 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 871 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 't' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 872 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 873 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 'g' == buffer[i+3] && 'e' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 874 ;
}
}
for(int i=0; i<buffer_size; i++){
if('D' == buffer[i] && 'E' == buffer[i+1] && 'S' == buffer[i+2] && 'C' == buffer[i+3] && 'R' == buffer[i+4] && 'I' == buffer[i+5] && 'B' == buffer[i+6] && 'E' == buffer[i+7]) {
 matched = true;
pattern_id = 875 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '8' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 876 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'B' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 877 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'D' == buffer[i+1] && 'T' == buffer[i+2] && 'M' == buffer[i+3]) {
 matched = true;
pattern_id = 878 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i]) {
 matched = true;
pattern_id = 879 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '3' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '1' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 880 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'r' == buffer[i+1] && 'a' == buffer[i+2]) {
 matched = true;
pattern_id = 881 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'r' == buffer[i+1] && 'm' == buffer[i+2] && 'p' == buffer[i+3]) {
 matched = true;
pattern_id = 882 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'r' == buffer[i+1] && 't' == buffer[i+2]) {
 matched = true;
pattern_id = 883 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'r' == buffer[i+1] && 'p' == buffer[i+2]) {
 matched = true;
pattern_id = 884 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 'd' == buffer[i+3] && 's' == buffer[i+4] && 'y' == buffer[i+5] && 's' == buffer[i+6]) {
 matched = true;
pattern_id = 885 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 'd' == buffer[i+3] && 'u' == buffer[i+4] && 'u' == buffer[i+5] && 'n' == buffer[i+6] && 'a' == buffer[i+7] && 'm' == buffer[i+8] && 'e' == buffer[i+9]) {
 matched = true;
pattern_id = 886 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'h' == buffer[i+1] && 'e' == buffer[i+2] && 'c' == buffer[i+3] && 'k' == buffer[i+4] && 'g' == buffer[i+5] && 'r' == buffer[i+6] && 'o' == buffer[i+7] && 'u' == buffer[i+8] && 'p' == buffer[i+9] && 's' == buffer[i+10]) {
 matched = true;
pattern_id = 887 ;
}
}
for(int i=0; i<buffer_size; i++){
if('i' == buffer[i] && 'h' == buffer[i+1] && 'a' == buffer[i+2] && 'v' == buffer[i+3] && 'e' == buffer[i+4]) {
 matched = true;
pattern_id = 888 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 'n' == buffer[i+2] && 'd' == buffer[i+3] && 'm' == buffer[i+4] && 'e' == buffer[i+5]) {
 matched = true;
pattern_id = 889 ;
}
}
for(int i=0; i<buffer_size; i++){
if('n' == buffer[i] && 'e' == buffer[i+1] && 'w' == buffer[i+2] && 'g' == buffer[i+3] && 'r' == buffer[i+4] && 'o' == buffer[i+5] && 'u' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 890 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'm' == buffer[i+1] && 'g' == buffer[i+2] && 'r' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 'p' == buffer[i+6]) {
 matched = true;
pattern_id = 891 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'a' == buffer[i+1] && 'k' == buffer[i+2] && 'e' == buffer[i+3] && 't' == buffer[i+4] && 'h' == buffer[i+5] && 'i' == buffer[i+6] && 's' == buffer[i+7]) {
 matched = true;
pattern_id = 892 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'r' == buffer[i+3] && 'm' == buffer[i+4] && '2' == buffer[i+5] && 'r' == buffer[i+6] && 'a' == buffer[i+7] && 'w' == buffer[i+8] && '.' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 893 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'e' == buffer[i+1] && 'm' == buffer[i+2] && 'f' == buffer[i+3]) {
 matched = true;
pattern_id = 894 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'w' == buffer[i+1] && 'm' == buffer[i+2] && 'f' == buffer[i+3]) {
 matched = true;
pattern_id = 895 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'p' == buffer[i+1] && 'p' == buffer[i+2] && 'l' == buffer[i+3] && 'i' == buffer[i+4] && 'c' == buffer[i+5] && 'a' == buffer[i+6] && 't' == buffer[i+7] && 'i' == buffer[i+8] && 'o' == buffer[i+9] && 'n' == buffer[i+10] && '/' == buffer[i+11] && 's' == buffer[i+12] && 'm' == buffer[i+13] && 'i' == buffer[i+14]) {
 matched = true;
pattern_id = 896 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'i' == buffer[i+1] && 'l' == buffer[i+2] && 'e' == buffer[i+3] && '|' == buffer[i+4] && '3' == buffer[i+5] && 'A' == buffer[i+6] && '|' == buffer[i+7] && '/' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 897 ;
}
}
for(int i=0; i<buffer_size; i++){
if('h' == buffer[i] && 't' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && '|' == buffer[i+4] && '3' == buffer[i+5] && 'A' == buffer[i+6] && '|' == buffer[i+7] && '/' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 898 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 't' == buffer[i+1] && 's' == buffer[i+2] && 'p' == buffer[i+3] && '|' == buffer[i+4] && '3' == buffer[i+5] && 'A' == buffer[i+6] && '|' == buffer[i+7] && '/' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 899 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && '=' == buffer[i+5] && '0' == buffer[i+6]) {
 matched = true;
pattern_id = 900 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '5' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 901 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'f' == buffer[i+6] && 'o' == buffer[i+7] && '.' == buffer[i+8] && 'h' == buffer[i+9] && 't' == buffer[i+10] && 's' == buffer[i+11]) {
 matched = true;
pattern_id = 902 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'L' == buffer[i+1] && 'L' == buffer[i+2] && 'O' == buffer[i+3]) {
 matched = true;
pattern_id = 903 ;
}
}
for(int i=0; i<buffer_size; i++){
if('Y' == buffer[i] && 'M' == buffer[i+1] && 'S' == buffer[i+2] && 'G' == buffer[i+3]) {
 matched = true;
pattern_id = 904 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && 'R' == buffer[i+1]) {
 matched = true;
pattern_id = 905 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'D' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '5' == buffer[i+8] && ' ' == buffer[i+9] && '0' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 906 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'o' == buffer[i+2] && 'u' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'e' == buffer[i+6] && '.' == buffer[i+7] && 'j' == buffer[i+8] && 's' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 907 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && 'S' == buffer[i+1] && 'T' == buffer[i+2] && 'R' == buffer[i+3] && 'E' == buffer[i+4] && 'A' == buffer[i+5] && 'M' == buffer[i+6] && 'Q' == buffer[i+7] && 'U' == buffer[i+8] && 'O' == buffer[i+9] && 'T' == buffer[i+10] && 'E' == buffer[i+11] && '>' == buffer[i+12]) {
 matched = true;
pattern_id = 908 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && 'S' == buffer[i+1] && 'N' == buffer[i+2] && 'A' == buffer[i+3] && 'P' == buffer[i+4] && 'Q' == buffer[i+5] && 'U' == buffer[i+6] && 'O' == buffer[i+7] && 'T' == buffer[i+8] && 'E' == buffer[i+9] && '>' == buffer[i+10]) {
 matched = true;
pattern_id = 909 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2]) {
 matched = true;
pattern_id = 910 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'E' == buffer[i+1] && 'A' == buffer[i+2] && 'D' == buffer[i+3]) {
 matched = true;
pattern_id = 911 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'U' == buffer[i+1] && 'T' == buffer[i+2]) {
 matched = true;
pattern_id = 912 ;
}
}
for(int i=0; i<buffer_size; i++){
if('D' == buffer[i] && 'E' == buffer[i+1] && 'L' == buffer[i+2] && 'E' == buffer[i+3] && 'T' == buffer[i+4] && 'E' == buffer[i+5]) {
 matched = true;
pattern_id = 913 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'O' == buffer[i+1] && 'C' == buffer[i+2] && 'K' == buffer[i+3]) {
 matched = true;
pattern_id = 914 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'K' == buffer[i+1] && 'C' == buffer[i+2] && 'O' == buffer[i+3] && 'L' == buffer[i+4]) {
 matched = true;
pattern_id = 915 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'O' == buffer[i+1] && 'P' == buffer[i+2] && 'Y' == buffer[i+3]) {
 matched = true;
pattern_id = 916 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'O' == buffer[i+1] && 'V' == buffer[i+2] && 'E' == buffer[i+3]) {
 matched = true;
pattern_id = 917 ;
}
}
for(int i=0; i<buffer_size; i++){
if('-' == buffer[i] && '-' == buffer[i+1] && 'b' == buffer[i+2] && 'a' == buffer[i+3] && 'c' == buffer[i+4] && 'k' == buffer[i+5] && 'u' == buffer[i+6] && 'p' == buffer[i+7] && '-' == buffer[i+8] && 'd' == buffer[i+9] && 'i' == buffer[i+10] && 'r' == buffer[i+11]) {
 matched = true;
pattern_id = 918 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'o' == buffer[i+2] && 'd' == buffer[i+3] && 'u' == buffer[i+4] && 'l' == buffer[i+5] && 'e' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 919 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'e' == buffer[i+3] && 'w' == buffer[i+4] && 'f' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && 'u' == buffer[i+8] && 'm' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 920 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'i' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'e' == buffer[i+6] && 'm' == buffer[i+7] && 'u' == buffer[i+8]) {
 matched = true;
pattern_id = 921 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'm' == buffer[i+2] && 'u' == buffer[i+3] && 'm' == buffer[i+4] && 'a' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7] && '.' == buffer[i+8] && 'f' == buffer[i+9] && 'c' == buffer[i+10] && 'g' == buffer[i+11] && 'i' == buffer[i+12]) {
 matched = true;
pattern_id = 922 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 'e' == buffer[i+4] && 't' == buffer[i+5] && 'p' == buffer[i+6] && 'a' == buffer[i+7] && 's' == buffer[i+8] && 's' == buffer[i+9]) {
 matched = true;
pattern_id = 923 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && 'H' == buffer[i+1] && 'T' == buffer[i+2] && 'T' == buffer[i+3] && 'P' == buffer[i+4] && '/' == buffer[i+5]) {
 matched = true;
pattern_id = 924 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'a' == buffer[i+7] && 's' == buffer[i+8] && 'p' == buffer[i+9] && 'x' == buffer[i+10]) {
 matched = true;
pattern_id = 925 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 926 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'o' == buffer[i+1] && 'c' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'i' == buffer[i+5] && 'o' == buffer[i+6] && 'n' == buffer[i+7] && '|' == buffer[i+8] && '3' == buffer[i+9] && 'A' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 927 ;
}
}
for(int i=0; i<buffer_size; i++){
if('j' == buffer[i]) {
 matched = true;
pattern_id = 928 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5] && 't' == buffer[i+6] && '-' == buffer[i+7] && 'L' == buffer[i+8] && 'e' == buffer[i+9] && 'n' == buffer[i+10] && 'g' == buffer[i+11] && 't' == buffer[i+12] && 'h' == buffer[i+13]) {
 matched = true;
pattern_id = 929 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'a' == buffer[i+1] && 'x' == buffer[i+2] && '-' == buffer[i+3] && 'd' == buffer[i+4] && 'o' == buffer[i+5] && 't' == buffer[i+6] && 'd' == buffer[i+7] && 'o' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 930 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'N' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'u' == buffer[i+5] && 's' == buffer[i+6] && 'T' == buffer[i+7] && 'e' == buffer[i+8] && 's' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 931 ;
}
}
for(int i=0; i<buffer_size; i++){
if('T' == buffer[i] && 'I' == buffer[i+1] && 'M' == buffer[i+2] && 'E' == buffer[i+3] && '_' == buffer[i+4] && 'Z' == buffer[i+5] && 'O' == buffer[i+6] && 'N' == buffer[i+7] && 'E' == buffer[i+8]) {
 matched = true;
pattern_id = 932 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'R' == buffer[i+1] && 'O' == buffer[i+2] && 'M' == buffer[i+3] && '_' == buffer[i+4] && 'T' == buffer[i+5] && 'Z' == buffer[i+6]) {
 matched = true;
pattern_id = 933 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 'c' == buffer[i+5] && 't' == buffer[i+6] && '_' == buffer[i+7] && 'd' == buffer[i+8] && 'a' == buffer[i+9] && 't' == buffer[i+10] && 'a' == buffer[i+11]) {
 matched = true;
pattern_id = 934 ;
}
}
for(int i=0; i<buffer_size; i++){
if('N' == buffer[i] && 'U' == buffer[i+1] && 'M' == buffer[i+2] && 'T' == buffer[i+3] && 'O' == buffer[i+4]) {
 matched = true;
pattern_id = 935 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '1' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '2' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 936 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3] && 'g' == buffer[i+4] && '.' == buffer[i+5] && 'a' == buffer[i+6] && 's' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 937 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'r' == buffer[i+2] && 'o' == buffer[i+3] && 'c' == buffer[i+4] && 'e' == buffer[i+5] && 's' == buffer[i+6] && 's' == buffer[i+7] && 'i' == buffer[i+8] && 't' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 938 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'b' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'l' == buffer[i+5] && 'p' == buffer[i+6] && 'm' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 939 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'g' == buffer[i+2] && 'p' == buffer[i+3] && 'm' == buffer[i+4] && 'a' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 940 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && 'M' == buffer[i+1]) {
 matched = true;
pattern_id = 941 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'r' == buffer[i+2] && 'e' == buffer[i+3] && 's' == buffer[i+4] && 'u' == buffer[i+5] && 'l' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 942 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 't' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4]) {
 matched = true;
pattern_id = 943 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5]) {
 matched = true;
pattern_id = 944 ;
}
}
for(int i=0; i<buffer_size; i++){
if('T' == buffer[i] && 'O' == buffer[i+1] && '_' == buffer[i+2] && 'C' == buffer[i+3] && 'H' == buffer[i+4] && 'A' == buffer[i+5] && 'R' == buffer[i+6]) {
 matched = true;
pattern_id = 945 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 's' == buffer[i+2] && 'q' == buffer[i+3] && 'l' == buffer[i+4] && 'p' == buffer[i+5] && 'l' == buffer[i+6] && 'u' == buffer[i+7] && 's' == buffer[i+8]) {
 matched = true;
pattern_id = 946 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'u' == buffer[i+7] && 'i' == buffer[i+8] && 'x' == buffer[i+9]) {
 matched = true;
pattern_id = 947 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5] && 't' == buffer[i+6] && '-' == buffer[i+7] && 'T' == buffer[i+8] && 'y' == buffer[i+9] && 'p' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 948 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'F' == buffer[i+1] && 'F' == buffer[i+2] && '|' == buffer[i+3] && 'S' == buffer[i+4] && 'M' == buffer[i+5] && 'B' == buffer[i+6] && 's' == buffer[i+7]) {
 matched = true;
pattern_id = 949 ;
}
}
for(int i=0; i<buffer_size; i++){
if('_' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'n' == buffer[i+3] && 'f' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 950 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'A' == buffer[i+1] && 'T' == buffer[i+2] && '|' == buffer[i+3] && '2' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 951 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && 'N' == buffer[i+1] && ' ' == buffer[i+2] && '|' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '2' == buffer[i+8] && ' ' == buffer[i+9] && '0' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 952 ;
}
}
for(int i=0; i<buffer_size; i++){
if('W' == buffer[i] && 'I' == buffer[i+1] && 'N' == buffer[i+2] && 'D' == buffer[i+3] && 'I' == buffer[i+4] && 'R' == buffer[i+5]) {
 matched = true;
pattern_id = 953 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'Y' == buffer[i+1] && 'S' == buffer[i+2] && 'D' == buffer[i+3] && 'I' == buffer[i+4] && 'R' == buffer[i+5]) {
 matched = true;
pattern_id = 954 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'B' == buffer[i+1] && 'C' == buffer[i+2] && 'J' == buffer[i+3] && 'Z' == buffer[i+4] && 'D' == buffer[i+5] && 'A' == buffer[i+6] && 'T' == buffer[i+7] && 'E' == buffer[i+8] && 'I' == buffer[i+9] && 'V' == buffer[i+10]) {
 matched = true;
pattern_id = 955 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'Q' == buffer[i+1] && 'S' == buffer[i+2]) {
 matched = true;
pattern_id = 956 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'N' == buffer[i+1] && 'T' == buffer[i+2]) {
 matched = true;
pattern_id = 957 ;
}
}
for(int i=0; i<buffer_size; i++){
if('D' == buffer[i] && 'I' == buffer[i+1] && 'S' == buffer[i+2] && 'T' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '0' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '0' == buffer[i+9] && '0' == buffer[i+10] && '1' == buffer[i+11]) {
 matched = true;
pattern_id = 958 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'e' == buffer[i+1] && 'l' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && '.' == buffer[i+5] && '.' == buffer[i+6] && '.' == buffer[i+7]) {
 matched = true;
pattern_id = 959 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'P' == buffer[i+1] && 'P' == buffer[i+2] && 'E' == buffer[i+3] && 'N' == buffer[i+4] && 'D' == buffer[i+5]) {
 matched = true;
pattern_id = 960 ;
}
}
for(int i=0; i<buffer_size; i++){
if('E' == buffer[i] && 'X' == buffer[i+1] && 'A' == buffer[i+2] && 'M' == buffer[i+3] && 'I' == buffer[i+4] && 'N' == buffer[i+5] && 'E' == buffer[i+6]) {
 matched = true;
pattern_id = 961 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && 'C' == buffer[i+3] && 'H' == buffer[i+4]) {
 matched = true;
pattern_id = 962 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'T' == buffer[i+1] && 'A' == buffer[i+2] && 'T' == buffer[i+3] && 'U' == buffer[i+4] && 'S' == buffer[i+5]) {
 matched = true;
pattern_id = 963 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'U' == buffer[i+1] && 'B' == buffer[i+2] && 'S' == buffer[i+3] && 'C' == buffer[i+4] && 'R' == buffer[i+5] && 'I' == buffer[i+6] && 'B' == buffer[i+7] && 'E' == buffer[i+8]) {
 matched = true;
pattern_id = 964 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 'N' == buffer[i+1] && 'S' == buffer[i+2] && 'U' == buffer[i+3] && 'B' == buffer[i+4] && 'S' == buffer[i+5] && 'C' == buffer[i+6] && 'R' == buffer[i+7] && 'I' == buffer[i+8] && 'B' == buffer[i+9] && 'E' == buffer[i+10]) {
 matched = true;
pattern_id = 965 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'N' == buffer[i+1] && 'F' == buffer[i+2] && 'R' == buffer[i+3]) {
 matched = true;
pattern_id = 966 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'E' == buffer[i+1] && 'A' == buffer[i+2] && 'R' == buffer[i+3] && 'C' == buffer[i+4] && 'H' == buffer[i+5] && '|' == buffer[i+6] && '2' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 967 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'I' == buffer[i+1] && 'F' == buffer[i+2] && 'F' == buffer[i+3]) {
 matched = true;
pattern_id = 968 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '5' == buffer[i+1] && 'C' == buffer[i+2] && '|' == buffer[i+3] && 's' == buffer[i+4] && 'e' == buffer[i+5] && 'c' == buffer[i+6] && 'u' == buffer[i+7] && 'r' == buffer[i+8] && 'e' == buffer[i+9] && '|' == buffer[i+10] && '5' == buffer[i+11] && 'C' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 969 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 'c' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7] && 'd' == buffer[i+8]) {
 matched = true;
pattern_id = 970 ;
}
}
for(int i=0; i<buffer_size; i++){
if('g' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'c' == buffer[i+3] && 'l' == buffer[i+4] && 'i' == buffer[i+5] && 'e' == buffer[i+6] && 'n' == buffer[i+7] && 't' == buffer[i+8]) {
 matched = true;
pattern_id = 971 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'l' == buffer[i+1] && 'i' == buffer[i+2] && 'e' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5]) {
 matched = true;
pattern_id = 972 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '2' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 973 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'p' == buffer[i+3] && '_' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && 'a' == buffer[i+7] && '.' == buffer[i+8] && 's' == buffer[i+9] && 't' == buffer[i+10] && 'm' == buffer[i+11]) {
 matched = true;
pattern_id = 974 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && '3' == buffer[i+2] && 'w' == buffer[i+3] && 'h' == buffer[i+4] && 'o' == buffer[i+5] && '.' == buffer[i+6] && 'd' == buffer[i+7] && 'l' == buffer[i+8] && 'l' == buffer[i+9] && '?' == buffer[i+10]) {
 matched = true;
pattern_id = 975 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'c' == buffer[i+1] && 'd' == buffer[i+2] && 'a' == buffer[i+3]) {
 matched = true;
pattern_id = 976 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && ' ' == buffer[i+9] && '0' == buffer[i+10] && '8' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 977 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && 'O' == buffer[i+1] && 'B' == buffer[i+2] && 'J' == buffer[i+3] && 'E' == buffer[i+4] && 'C' == buffer[i+5] && 'T' == buffer[i+6]) {
 matched = true;
pattern_id = 978 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && 'n' == buffer[i+5] && 't' == buffer[i+6] && 't' == buffer[i+7] && 'y' == buffer[i+8] && 'p' == buffer[i+9] && 'e' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 979 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i]) {
 matched = true;
pattern_id = 980 ;
}
}
for(int i=0; i<buffer_size; i++){
if('1' == buffer[i] && 'j' == buffer[i+1] && '|' == buffer[i+2] && 'D' == buffer[i+3] && '0' == buffer[i+4] && ' ' == buffer[i+5] && 'D' == buffer[i+6] && '9' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 981 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'w' == buffer[i+1] && 'm' == buffer[i+2] && 'z' == buffer[i+3]) {
 matched = true;
pattern_id = 982 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'c' == buffer[i+1] && 'm' == buffer[i+2] && 'd' == buffer[i+3] && '|' == buffer[i+4] && '2' == buffer[i+5] && '2' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 983 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'b' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && '|' == buffer[i+4] && '2' == buffer[i+5] && '2' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 984 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i]) {
 matched = true;
pattern_id = 985 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 't' == buffer[i+3] && 'p' == buffer[i+4] && 'o' == buffer[i+5] && 'd' == buffer[i+6] && 'b' == buffer[i+7] && 'c' == buffer[i+8] && '.' == buffer[i+9] && 'd' == buffer[i+10] && 'l' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 986 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'F' == buffer[i+1] && 'F' == buffer[i+2] && ' ' == buffer[i+3] && 'F' == buffer[i+4] && 'A' == buffer[i+5] && '|' == buffer[i+6] && '\'' == buffer[i+7] && '|' == buffer[i+8] && '0' == buffer[i+9] && '0' == buffer[i+10] && ' ' == buffer[i+11] && '0' == buffer[i+12] && '0' == buffer[i+13] && '|' == buffer[i+14]) {
 matched = true;
pattern_id = 987 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'R' == buffer[i+1] && 'K' == buffer[i+2] && 'A' == buffer[i+3] && 'D' == buffer[i+4] && 'M' == buffer[i+5] && 'I' == buffer[i+6] && 'N' == buffer[i+7] && '_' == buffer[i+8] && 'G' == buffer[i+9] && 'E' == buffer[i+10] && 'T' == buffer[i+11] && '_' == buffer[i+12]) {
 matched = true;
pattern_id = 988 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && '|' == buffer[i+3] && 'M' == buffer[i+4]) {
 matched = true;
pattern_id = 989 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && '|' == buffer[i+3] && 'T' == buffer[i+4]) {
 matched = true;
pattern_id = 990 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '1' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '2' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && ' ' == buffer[i+9] && '1' == buffer[i+10] && '4' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 991 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'w' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 992 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'w' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && 's' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10] && '?' == buffer[i+11]) {
 matched = true;
pattern_id = 993 ;
}
}
for(int i=0; i<buffer_size; i++){
if('I' == buffer[i] && 'N' == buffer[i+1] && 'V' == buffer[i+2] && 'I' == buffer[i+3] && 'T' == buffer[i+4] && 'E' == buffer[i+5]) {
 matched = true;
pattern_id = 994 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'o' == buffer[i+2] && 'n' == buffer[i+3] && 'g' == buffer[i+4] && 'j' == buffer[i+5] && 'i' == buffer[i+6] && '.' == buffer[i+7] && 'j' == buffer[i+8] && 's' == buffer[i+9]) {
 matched = true;
pattern_id = 995 ;
}
}
for(int i=0; i<buffer_size; i++){
if('2' == buffer[i] && '2' == buffer[i+1] && '0' == buffer[i+2] && '|' == buffer[i+3] && '2' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 996 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'u' == buffer[i+2] && 'i' == buffer[i+3] && 'e' == buffer[i+4] && 'b' == buffer[i+5] && 'l' == buffer[i+6] && 'a' == buffer[i+7] && 'c' == buffer[i+8] && 'k' == buffer[i+9] && 'c' == buffer[i+10] && 'a' == buffer[i+11] && 't' == buffer[i+12]) {
 matched = true;
pattern_id = 997 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'n' == buffer[i+2] && 'o' == buffer[i+3] && 'n' == buffer[i+4] && 'y' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 998 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'D' == buffer[i+2] && 'F' == buffer[i+3] && '-' == buffer[i+4] && '1' == buffer[i+5] && '.' == buffer[i+6]) {
 matched = true;
pattern_id = 999 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'r' == buffer[i+1] && 'y' == buffer[i+2]) {
 matched = true;
pattern_id = 1000 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 't' == buffer[i+3] && 'o' == buffer[i+4] && 't' == buffer[i+5] && 'y' == buffer[i+6] && 'p' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 1001 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'R' == buffer[i+2] && 'O' == buffer[i+3] && 'G' == buffer[i+4] && 'R' == buffer[i+5] && 'A' == buffer[i+6] && 'M' == buffer[i+7] && 'D' == buffer[i+8] && 'A' == buffer[i+9] && 'T' == buffer[i+10] && 'A' == buffer[i+11] && '%' == buffer[i+12]) {
 matched = true;
pattern_id = 1002 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'A' == buffer[i+1] && 'P' == buffer[i+2] && 'P' == buffer[i+3] && 'D' == buffer[i+4] && 'A' == buffer[i+5] && 'T' == buffer[i+6] && 'A' == buffer[i+7] && '%' == buffer[i+8]) {
 matched = true;
pattern_id = 1003 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'C' == buffer[i+1] && 'O' == buffer[i+2] && 'M' == buffer[i+3] && 'S' == buffer[i+4] && 'P' == buffer[i+5] && 'E' == buffer[i+6] && 'C' == buffer[i+7] && '%' == buffer[i+8]) {
 matched = true;
pattern_id = 1004 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'H' == buffer[i+1] && 'O' == buffer[i+2] && 'M' == buffer[i+3] && 'E' == buffer[i+4] && 'D' == buffer[i+5] && 'R' == buffer[i+6] && 'I' == buffer[i+7] && 'V' == buffer[i+8] && 'E' == buffer[i+9] && '%' == buffer[i+10]) {
 matched = true;
pattern_id = 1005 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'H' == buffer[i+1] && 'O' == buffer[i+2] && 'M' == buffer[i+3] && 'E' == buffer[i+4] && 'P' == buffer[i+5] && 'A' == buffer[i+6] && 'T' == buffer[i+7] && 'H' == buffer[i+8] && '%' == buffer[i+9]) {
 matched = true;
pattern_id = 1006 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'L' == buffer[i+1] && 'O' == buffer[i+2] && 'C' == buffer[i+3] && 'A' == buffer[i+4] && 'L' == buffer[i+5] && 'A' == buffer[i+6] && 'P' == buffer[i+7] && 'P' == buffer[i+8] && 'D' == buffer[i+9] && 'A' == buffer[i+10] && 'T' == buffer[i+11] && 'A' == buffer[i+12] && '%' == buffer[i+13]) {
 matched = true;
pattern_id = 1007 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'R' == buffer[i+2] && 'O' == buffer[i+3] && 'G' == buffer[i+4] && 'R' == buffer[i+5] && 'A' == buffer[i+6] && 'M' == buffer[i+7] && 'F' == buffer[i+8] && 'I' == buffer[i+9] && 'L' == buffer[i+10] && 'E' == buffer[i+11] && 'S' == buffer[i+12] && '%' == buffer[i+13]) {
 matched = true;
pattern_id = 1008 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'S' == buffer[i+1] && 'y' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'D' == buffer[i+7] && 'r' == buffer[i+8] && 'i' == buffer[i+9] && 'v' == buffer[i+10] && 'e' == buffer[i+11] && '%' == buffer[i+12]) {
 matched = true;
pattern_id = 1009 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'S' == buffer[i+1] && 'y' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'R' == buffer[i+7] && 'o' == buffer[i+8] && 'o' == buffer[i+9] && 't' == buffer[i+10] && '%' == buffer[i+11]) {
 matched = true;
pattern_id = 1010 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'T' == buffer[i+1] && 'E' == buffer[i+2] && 'M' == buffer[i+3] && 'P' == buffer[i+4] && '%' == buffer[i+5]) {
 matched = true;
pattern_id = 1011 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'T' == buffer[i+1] && 'M' == buffer[i+2] && 'P' == buffer[i+3] && '%' == buffer[i+4]) {
 matched = true;
pattern_id = 1012 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'U' == buffer[i+1] && 'S' == buffer[i+2] && 'E' == buffer[i+3] && 'R' == buffer[i+4] && 'D' == buffer[i+5] && 'A' == buffer[i+6] && 'T' == buffer[i+7] && 'A' == buffer[i+8] && '%' == buffer[i+9]) {
 matched = true;
pattern_id = 1013 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'U' == buffer[i+1] && 'S' == buffer[i+2] && 'E' == buffer[i+3] && 'R' == buffer[i+4] && 'N' == buffer[i+5] && 'A' == buffer[i+6] && 'M' == buffer[i+7] && 'E' == buffer[i+8] && '%' == buffer[i+9]) {
 matched = true;
pattern_id = 1014 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'U' == buffer[i+1] && 'S' == buffer[i+2] && 'E' == buffer[i+3] && 'R' == buffer[i+4] && 'P' == buffer[i+5] && 'R' == buffer[i+6] && 'O' == buffer[i+7] && 'F' == buffer[i+8] && 'I' == buffer[i+9] && 'L' == buffer[i+10] && 'E' == buffer[i+11] && '%' == buffer[i+12]) {
 matched = true;
pattern_id = 1015 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'W' == buffer[i+1] && 'I' == buffer[i+2] && 'N' == buffer[i+3] && 'D' == buffer[i+4] && 'I' == buffer[i+5] && 'R' == buffer[i+6] && '%' == buffer[i+7]) {
 matched = true;
pattern_id = 1016 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'U' == buffer[i+2] && 'B' == buffer[i+3] && 'L' == buffer[i+4] && 'I' == buffer[i+5] && 'C' == buffer[i+6] && '%' == buffer[i+7]) {
 matched = true;
pattern_id = 1017 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'S' == buffer[i+2] && 'M' == buffer[i+3] && 'o' == buffer[i+4] && 'd' == buffer[i+5] && 'u' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && 'P' == buffer[i+9] && 'a' == buffer[i+10] && 't' == buffer[i+11] && 'h' == buffer[i+12] && '%' == buffer[i+13]) {
 matched = true;
pattern_id = 1018 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'C' == buffer[i+1] && 'O' == buffer[i+2] && 'M' == buffer[i+3] && 'P' == buffer[i+4] && 'U' == buffer[i+5] && 'T' == buffer[i+6] && 'E' == buffer[i+7] && 'R' == buffer[i+8] && 'N' == buffer[i+9] && 'A' == buffer[i+10] && 'M' == buffer[i+11] && 'E' == buffer[i+12] && '%' == buffer[i+13]) {
 matched = true;
pattern_id = 1019 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'L' == buffer[i+1] && 'O' == buffer[i+2] && 'G' == buffer[i+3] && 'O' == buffer[i+4] && 'N' == buffer[i+5] && 'S' == buffer[i+6] && 'E' == buffer[i+7] && 'R' == buffer[i+8] && 'V' == buffer[i+9] && 'E' == buffer[i+10] && 'R' == buffer[i+11] && '%' == buffer[i+12]) {
 matched = true;
pattern_id = 1020 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'A' == buffer[i+2] && 'T' == buffer[i+3] && 'H' == buffer[i+4] && '%' == buffer[i+5]) {
 matched = true;
pattern_id = 1021 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'A' == buffer[i+2] && 'T' == buffer[i+3] && 'H' == buffer[i+4] && 'E' == buffer[i+5] && 'X' == buffer[i+6] && 'T' == buffer[i+7] && '%' == buffer[i+8]) {
 matched = true;
pattern_id = 1022 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'P' == buffer[i+1] && 'R' == buffer[i+2] && 'O' == buffer[i+3] && 'M' == buffer[i+4] && 'P' == buffer[i+5] && 'T' == buffer[i+6] && '%' == buffer[i+7]) {
 matched = true;
pattern_id = 1023 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'U' == buffer[i+1] && 'S' == buffer[i+2] && 'E' == buffer[i+3] && 'R' == buffer[i+4] && 'D' == buffer[i+5] && 'O' == buffer[i+6] && 'M' == buffer[i+7] && 'A' == buffer[i+8] && 'I' == buffer[i+9] && 'N' == buffer[i+10] && '%' == buffer[i+11]) {
 matched = true;
pattern_id = 1024 ;
}
}
for(int i=0; i<buffer_size; i++){
if('_' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && '0' == buffer[i+3] && '0' == buffer[i+4] && '=' == buffer[i+5]) {
 matched = true;
pattern_id = 1025 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && '.' == buffer[i+3] && 'c' == buffer[i+4] && 'g' == buffer[i+5] && 'i' == buffer[i+6] && '?' == buffer[i+7]) {
 matched = true;
pattern_id = 1026 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && '.' == buffer[i+3] && 'c' == buffer[i+4] && 'g' == buffer[i+5] && 'i' == buffer[i+6]) {
 matched = true;
pattern_id = 1027 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'h' == buffer[i+1] && 'i' == buffer[i+2] && '.' == buffer[i+3] && 'c' == buffer[i+4] && 'g' == buffer[i+5] && 'i' == buffer[i+6]) {
 matched = true;
pattern_id = 1028 ;
}
}
for(int i=0; i<buffer_size; i++){
if('3' == buffer[i] && '0' == buffer[i+1] && '2' == buffer[i+2]) {
 matched = true;
pattern_id = 1029 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'T' == buffer[i+3] && 'i' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6] && 'o' == buffer[i+7] && 'u' == buffer[i+8] && 't' == buffer[i+9] && '|' == buffer[i+10] && '2' == buffer[i+11] && '8' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 1030 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '9' == buffer[i+1] && 'E' == buffer[i+2] && ' ' == buffer[i+3] && '9' == buffer[i+4] && '8' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1031 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'o' == buffer[i+4] && 't' == buffer[i+5] && 's' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 1032 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '?' == buffer[i+4] && 'i' == buffer[i+5] && 'p' == buffer[i+6] && '=' == buffer[i+7]) {
 matched = true;
pattern_id = 1033 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && '/' == buffer[i+2] && '?' == buffer[i+3] && 'k' == buffer[i+4] && '=' == buffer[i+5]) {
 matched = true;
pattern_id = 1034 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'g' == buffer[i+1] && 'i' == buffer[i+2] && 'f' == buffer[i+3]) {
 matched = true;
pattern_id = 1035 ;
}
}
for(int i=0; i<buffer_size; i++){
if('A' == buffer[i] && 'c' == buffer[i+1] && 'u' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 't' == buffer[i+5] && 'i' == buffer[i+6] && 'x' == buffer[i+7] && '-' == buffer[i+8]) {
 matched = true;
pattern_id = 1036 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'H' == buffer[i+1] && 'N' == buffer[i+2] && 'j' == buffer[i+3] && 'c' == buffer[i+4] && 'm' == buffer[i+5] && 'l' == buffer[i+6] && 'w' == buffer[i+7] && 'd' == buffer[i+8] && 'D' == buffer[i+9]) {
 matched = true;
pattern_id = 1037 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && 'S' == buffer[i+1] && 'c' == buffer[i+2] && 'R' == buffer[i+3] && 'i' == buffer[i+4] && 'P' == buffer[i+5] && 't' == buffer[i+6] && '>' == buffer[i+7] && 'p' == buffer[i+8] && 'r' == buffer[i+9] && 'o' == buffer[i+10] && 'm' == buffer[i+11] && 'p' == buffer[i+12] && 't' == buffer[i+13] && '(' == buffer[i+14]) {
 matched = true;
pattern_id = 1038 ;
}
}
for(int i=0; i<buffer_size; i++){
if('>' == buffer[i] && '=' == buffer[i+1] && '|' == buffer[i+2] && '5' == buffer[i+3] && 'C' == buffer[i+4] && '|' == buffer[i+5] && 'x' == buffer[i+6] && 'a' == buffer[i+7] && '2' == buffer[i+8]) {
 matched = true;
pattern_id = 1039 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'f' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3] && 'r' == buffer[i+4] && 'e' == buffer[i+5] && 'a' == buffer[i+6] && 'm' == buffer[i+7] && '|' == buffer[i+8] && '2' == buffer[i+9] && '6' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 1040 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && '-' == buffer[i+4] && 'A' == buffer[i+5] && 'g' == buffer[i+6] && 'e' == buffer[i+7] && 'n' == buffer[i+8] && 't' == buffer[i+9] && '|' == buffer[i+10] && '3' == buffer[i+11] && 'A' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 1041 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '9' == buffer[i+1] && 'A' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '2' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && ' ' == buffer[i+9] && '0' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1042 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'm' == buffer[i+2] && 'd' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'p' == buffer[i+7] && '?' == buffer[i+8] && 'c' == buffer[i+9] && 'm' == buffer[i+10] && 'd' == buffer[i+11] && '=' == buffer[i+12]) {
 matched = true;
pattern_id = 1043 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '2' == buffer[i+1] && 'F' == buffer[i+2] && '|' == buffer[i+3]) {
 matched = true;
pattern_id = 1044 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && '.' == buffer[i+3] && 'p' == buffer[i+4] && 'h' == buffer[i+5] && 'p' == buffer[i+6]) {
 matched = true;
pattern_id = 1045 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'y' == buffer[i+3] && 'p' == buffer[i+4] && 'e' == buffer[i+5] && '=' == buffer[i+6]) {
 matched = true;
pattern_id = 1046 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'i' == buffer[i+2] && 'd' == buffer[i+3] && '/' == buffer[i+4] && 'p' == buffer[i+5] && 'i' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 't' == buffer[i+9] && 'x' == buffer[i+10] && 't' == buffer[i+11]) {
 matched = true;
pattern_id = 1047 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && ' ' == buffer[i+3] && '/' == buffer[i+4] && '?' == buffer[i+5]) {
 matched = true;
pattern_id = 1048 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '?' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'c' == buffer[i+7] && '=' == buffer[i+8]) {
 matched = true;
pattern_id = 1049 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '3' == buffer[i+1] && 'B' == buffer[i+2] && ' ' == buffer[i+3] && '2' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6] && 's' == buffer[i+7] && 'v' == buffer[i+8] && '|' == buffer[i+9] && '3' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1050 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 'i' == buffer[i+4] && 'g' == buffer[i+5] && 'n' == buffer[i+6] && 'a' == buffer[i+7] && 'l' == buffer[i+8] && '.' == buffer[i+9] && 'j' == buffer[i+10] && 'p' == buffer[i+11] && 'g' == buffer[i+12] && '?' == buffer[i+13]) {
 matched = true;
pattern_id = 1051 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'k' == buffer[i+1] && 's' == buffer[i+2] && 'a' == buffer[i+3] && '.' == buffer[i+4] && 't' == buffer[i+5] && 'x' == buffer[i+6] && 't' == buffer[i+7]) {
 matched = true;
pattern_id = 1052 ;
}
}
for(int i=0; i<buffer_size; i++){
if('o' == buffer[i] && 'p' == buffer[i+1] && '=' == buffer[i+2]) {
 matched = true;
pattern_id = 1053 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'p' == buffer[i+3] && '/' == buffer[i+4] && 'g' == buffer[i+5] && 'e' == buffer[i+6] && 'o' == buffer[i+7] && 'i' == buffer[i+8] && 'p' == buffer[i+9] && '.' == buffer[i+10] && 'j' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 1054 ;
}
}
for(int i=0; i<buffer_size; i++){
if('M' == buffer[i] && 'Z' == buffer[i+1]) {
 matched = true;
pattern_id = 1055 ;
}
}
for(int i=0; i<buffer_size; i++){
if('0' == buffer[i] && 'a' == buffer[i+1] && 'W' == buffer[i+2] && '1' == buffer[i+3] && 'l' == buffer[i+4] && 'P' == buffer[i+5]) {
 matched = true;
pattern_id = 1056 ;
}
}
for(int i=0; i<buffer_size; i++){
if('&' == buffer[i] && 's' == buffer[i+1] && 'k' == buffer[i+2] && '1' == buffer[i+3] && '=' == buffer[i+4]) {
 matched = true;
pattern_id = 1057 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && '-' == buffer[i+4]) {
 matched = true;
pattern_id = 1058 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'c' == buffer[i+4] && 'o' == buffer[i+5] && 'n' == buffer[i+6] && 't' == buffer[i+7] && 'e' == buffer[i+8] && 'n' == buffer[i+9] && 't' == buffer[i+10]) {
 matched = true;
pattern_id = 1059 ;
}
}
for(int i=0; i<buffer_size; i++){
if('O' == buffer[i] && 'p' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'a' == buffer[i+4] && '/' == buffer[i+5] && '1' == buffer[i+6] && '0' == buffer[i+7] && '|' == buffer[i+8] && '2' == buffer[i+9] && '0' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 1060 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && 'i' == buffer[i+1] && 'f' == buffer[i+2] && 'r' == buffer[i+3] && 'a' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 1061 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'e' == buffer[i+2] && 'e' == buffer[i+3] && 'd' == buffer[i+4] && '?' == buffer[i+5] && 'r' == buffer[i+6] && 'e' == buffer[i+7] && 'q' == buffer[i+8] && '=' == buffer[i+9] && 'h' == buffer[i+10] && 't' == buffer[i+11] && 't' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 1062 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'C' == buffer[i+1] && 'R' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'd' == buffer[i+5]) {
 matched = true;
pattern_id = 1063 ;
}
}
for(int i=0; i<buffer_size; i++){
if('h' == buffer[i] && 'o' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && 'd' == buffer[i+5] && '=' == buffer[i+6]) {
 matched = true;
pattern_id = 1064 ;
}
}
for(int i=0; i<buffer_size; i++){
if('m' == buffer[i] && 'o' == buffer[i+1] && 'z' == buffer[i+2] && 'i' == buffer[i+3] && 'l' == buffer[i+4] && 'l' == buffer[i+5] && 'a' == buffer[i+6]) {
 matched = true;
pattern_id = 1065 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '3' == buffer[i+1] && 'B' == buffer[i+2] && '|' == buffer[i+3] && ' ' == buffer[i+4] && 'f' == buffer[i+5] && 'i' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && 'n' == buffer[i+9] && 'a' == buffer[i+10] && 'm' == buffer[i+11] && 'e' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 1066 ;
}
}
for(int i=0; i<buffer_size; i++){
if('i' == buffer[i] && 'n' == buffer[i+1] && 'd' == buffer[i+2] && 'e' == buffer[i+3] && 'x' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 1067 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && '!' == buffer[i+1] && '-' == buffer[i+2] && '-' == buffer[i+3] && 'd' == buffer[i+4] && 'e' == buffer[i+5] && 'd' == buffer[i+6] && '5' == buffer[i+7] && '0' == buffer[i+8] && '9' == buffer[i+9] && '-' == buffer[i+10] && '-' == buffer[i+11] && '>' == buffer[i+12]) {
 matched = true;
pattern_id = 1068 ;
}
}
for(int i=0; i<buffer_size; i++){
if('g' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'e' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'p' == buffer[i+7] && '|' == buffer[i+8] && '3' == buffer[i+9] && 'F' == buffer[i+10] && '|' == buffer[i+11] && 'i' == buffer[i+12] && 'd' == buffer[i+13] && '=' == buffer[i+14]) {
 matched = true;
pattern_id = 1069 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && '_' == buffer[i+1] && 'a' == buffer[i+2] && 'l' == buffer[i+3] && 'i' == buffer[i+4] && 'v' == buffer[i+5] && 'e' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10] && '?' == buffer[i+11] && 'i' == buffer[i+12] && 'd' == buffer[i+13] && '=' == buffer[i+14]) {
 matched = true;
pattern_id = 1070 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && '_' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 's' == buffer[i+4] && 'k' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9] && '?' == buffer[i+10] && 'i' == buffer[i+11] && 'd' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 1071 ;
}
}
for(int i=0; i<buffer_size; i++){
if('h' == buffer[i] && 't' == buffer[i+1] && 't' == buffer[i+2] && 'p' == buffer[i+3] && '|' == buffer[i+4] && '7' == buffer[i+5] && 'C' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 1072 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 't' == buffer[i+1] && 'o' == buffer[i+2] && 'p' == buffer[i+3] && '|' == buffer[i+4] && '7' == buffer[i+5] && 'C' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 1073 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'i' == buffer[i+1] && 'e' == buffer[i+2] && '|' == buffer[i+3] && '7' == buffer[i+4] && 'C' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1074 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'l' == buffer[i+1] && 'e' == buffer[i+2] && 'e' == buffer[i+3] && 'p' == buffer[i+4] && '|' == buffer[i+5] && '7' == buffer[i+6] && 'C' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 1075 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'i' == buffer[i+1] && 'm' == buffer[i+2] && 'p' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && '|' == buffer[i+6] && '7' == buffer[i+7] && 'C' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1076 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'o' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && 'p' == buffer[i+5] && 'o' == buffer[i+6] && 's' == buffer[i+7] && 't' == buffer[i+8] && '|' == buffer[i+9] && '7' == buffer[i+10] && 'C' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1077 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 'p' == buffer[i+4] && 'o' == buffer[i+5] && 's' == buffer[i+6] && 't' == buffer[i+7] && '|' == buffer[i+8] && '7' == buffer[i+9] && 'C' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 1078 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'y' == buffer[i+1] && 'n' == buffer[i+2] && '|' == buffer[i+3] && '7' == buffer[i+4] && 'C' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1079 ;
}
}
for(int i=0; i<buffer_size; i++){
if('u' == buffer[i] && 'd' == buffer[i+1] && 'p' == buffer[i+2] && '|' == buffer[i+3] && '7' == buffer[i+4] && 'C' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1080 ;
}
}
for(int i=0; i<buffer_size; i++){
if('u' == buffer[i] && 'd' == buffer[i+1] && 'p' == buffer[i+2] && 'd' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'a' == buffer[i+6] && '|' == buffer[i+7] && '7' == buffer[i+8] && 'C' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1081 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && '|' == buffer[i+4] && '7' == buffer[i+5] && 'C' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 1082 ;
}
}
for(int i=0; i<buffer_size; i++){
if('i' == buffer[i] && 'c' == buffer[i+1] && 'm' == buffer[i+2] && 'p' == buffer[i+3] && '|' == buffer[i+4] && '7' == buffer[i+5] && 'C' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 1083 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'c' == buffer[i+1] && 'p' == buffer[i+2] && 'd' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'a' == buffer[i+6] && '|' == buffer[i+7] && '7' == buffer[i+8] && 'C' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1084 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 'g' == buffer[i+4] && 'e' == buffer[i+5] && 't' == buffer[i+6] && '|' == buffer[i+7] && '7' == buffer[i+8] && 'C' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1085 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 'c' == buffer[i+5] && 't' == buffer[i+6] && '|' == buffer[i+7] && '7' == buffer[i+8] && 'C' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1086 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'n' == buffer[i+1] && 's' == buffer[i+2] && '|' == buffer[i+3] && '7' == buffer[i+4] && 'C' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1087 ;
}
}
for(int i=0; i<buffer_size; i++){
if('e' == buffer[i] && 'x' == buffer[i+1] && 'e' == buffer[i+2] && 'c' == buffer[i+3] && '|' == buffer[i+4] && '7' == buffer[i+5] && 'C' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 1088 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'e' == buffer[i+1] && 's' == buffer[i+2] && 'o' == buffer[i+3] && 'l' == buffer[i+4] && 'v' == buffer[i+5] && 'e' == buffer[i+6] && '|' == buffer[i+7] && '7' == buffer[i+8] && 'C' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1089 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'n' == buffer[i+1] && 't' == buffer[i+2] && 'i' == buffer[i+3] && 'd' == buffer[i+4] && 'd' == buffer[i+5] && 'o' == buffer[i+6] && 's' == buffer[i+7] && '|' == buffer[i+8] && '7' == buffer[i+9] && 'C' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 1090 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'a' == buffer[i+1] && 'n' == buffer[i+2] && 'g' == buffer[i+3] && 'e' == buffer[i+4] && '|' == buffer[i+5] && '7' == buffer[i+6] && 'C' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 1091 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 't' == buffer[i+1] && 'p' == buffer[i+2] && '|' == buffer[i+3] && '7' == buffer[i+4] && 'C' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1092 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'o' == buffer[i+1] && 'w' == buffer[i+2] && 'n' == buffer[i+3] && 'l' == buffer[i+4] && 'o' == buffer[i+5] && 'a' == buffer[i+6] && 'd' == buffer[i+7] && '|' == buffer[i+8] && '7' == buffer[i+9] && 'C' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 1093 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3] && 'd' == buffer[i+4] && 'd' == buffer[i+5] && 'o' == buffer[i+6] && 's' == buffer[i+7] && '|' == buffer[i+8] && '7' == buffer[i+9] && 'C' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 1094 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'w' == buffer[i+3] && 'h' == buffer[i+4] && 't' == buffer[i+5] && 't' == buffer[i+6] && 'p' == buffer[i+7] && '|' == buffer[i+8] && '7' == buffer[i+9] && 'C' == buffer[i+10] && '|' == buffer[i+11]) {
 matched = true;
pattern_id = 1095 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'l' == buffer[i+1] && 'l' == buffer[i+2] && 'h' == buffer[i+3] && 't' == buffer[i+4] && 't' == buffer[i+5] && 'p' == buffer[i+6] && '|' == buffer[i+7] && '7' == buffer[i+8] && 'C' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1096 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'u' == buffer[i+1] && 'l' == buffer[i+2] && 'l' == buffer[i+3] && '|' == buffer[i+4] && '7' == buffer[i+5] && 'C' == buffer[i+6] && '|' == buffer[i+7]) {
 matched = true;
pattern_id = 1097 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'a' == buffer[i+3] && 'd' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && '.' == buffer[i+7] && 'c' == buffer[i+8] && 'p' == buffer[i+9] && 'l' == buffer[i+10]) {
 matched = true;
pattern_id = 1098 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && '3' == buffer[i+4] && 'q' == buffer[i+5] && '/' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8]) {
 matched = true;
pattern_id = 1099 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'p' == buffer[i+4] && 'a' == buffer[i+5] && 'y' == buffer[i+6] && '.' == buffer[i+7] && 'h' == buffer[i+8] && 't' == buffer[i+9] && 'm' == buffer[i+10] && 'l' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 1100 ;
}
}
for(int i=0; i<buffer_size; i++){
if('m' == buffer[i] && 'a' == buffer[i+1] && 'c' == buffer[i+2] && 'N' == buffer[i+3] && 'a' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6] && '=' == buffer[i+7]) {
 matched = true;
pattern_id = 1101 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'm' == buffer[i+2] && 'a' == buffer[i+3] && 'g' == buffer[i+4] && 'e' == buffer[i+5] && 's' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 1102 ;
}
}
for(int i=0; i<buffer_size; i++){
if('=' == buffer[i] && ' ' == buffer[i+1] && 'H' == buffer[i+2] && 'T' == buffer[i+3] && 'T' == buffer[i+4] && 'P' == buffer[i+5] && '/' == buffer[i+6] && '1' == buffer[i+7] && '.' == buffer[i+8]) {
 matched = true;
pattern_id = 1103 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 'v' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && 't' == buffer[i+6] && '|' == buffer[i+7] && '2' == buffer[i+8] && '8' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1104 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'p' == buffer[i+3] && 'l' == buffer[i+4] && 'e' == buffer[i+5] && 't' == buffer[i+6] && ' ' == buffer[i+7] && 'w' == buffer[i+8] && 'i' == buffer[i+9] && 'd' == buffer[i+10] && 't' == buffer[i+11] && 'h' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 1105 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 'c' == buffer[i+2] && 'a' == buffer[i+3] && 'c' == buffer[i+4] && 'h' == buffer[i+5] && 'e' == buffer[i+6] && '/' == buffer[i+7] && '?' == buffer[i+8] && 'f' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1106 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && '5' == buffer[i+2] && '.' == buffer[i+3] && 'h' == buffer[i+4] && 't' == buffer[i+5] && 'm' == buffer[i+6]) {
 matched = true;
pattern_id = 1107 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'x' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 1108 ;
}
}
for(int i=0; i<buffer_size; i++){
if('r' == buffer[i] && 'a' == buffer[i+1] && 'w' == buffer[i+2] && 'i' == buffer[i+3] && 'n' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8] && '?' == buffer[i+9] && 'b' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 1109 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && '.' == buffer[i+4] && 'a' == buffer[i+5] && 's' == buffer[i+6] && 'p' == buffer[i+7] && '?' == buffer[i+8] && 'm' == buffer[i+9] && 'a' == buffer[i+10] && 'c' == buffer[i+11] && '=' == buffer[i+12]) {
 matched = true;
pattern_id = 1110 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'j' == buffer[i+1] && 'o' == buffer[i+2] && 'r' == buffer[i+3] && 'g' == buffer[i+4] && '.' == buffer[i+5] && 'h' == buffer[i+6] && 't' == buffer[i+7] && 'm' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 1111 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'j' == buffer[i+1] && 'l' == buffer[i+2] && 'n' == buffer[i+3] && 'p' == buffer[i+4] && '.' == buffer[i+5] && 'h' == buffer[i+6] && 't' == buffer[i+7] && 'm' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 1112 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'j' == buffer[i+1] && 'o' == buffer[i+2] && 'v' == buffer[i+3] && 'f' == buffer[i+4] && '.' == buffer[i+5] && 'h' == buffer[i+6] && 't' == buffer[i+7] && 'm' == buffer[i+8] && 'l' == buffer[i+9]) {
 matched = true;
pattern_id = 1113 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'i' == buffer[i+1] && 'l' == buffer[i+2] && 'e' == buffer[i+3] && 'n' == buffer[i+4] && 'a' == buffer[i+5] && 'm' == buffer[i+6] && 'e' == buffer[i+7] && '=' == buffer[i+8]) {
 matched = true;
pattern_id = 1114 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'K' == buffer[i+1]) {
 matched = true;
pattern_id = 1115 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '?' == buffer[i+1] && 'f' == buffer[i+2] && '=' == buffer[i+3] && 'a' == buffer[i+4]) {
 matched = true;
pattern_id = 1116 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '?' == buffer[i+4]) {
 matched = true;
pattern_id = 1117 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '?' == buffer[i+1]) {
 matched = true;
pattern_id = 1118 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 's' == buffer[i+1] && '0' == buffer[i+2] && '=' == buffer[i+3]) {
 matched = true;
pattern_id = 1119 ;
}
}
for(int i=0; i<buffer_size; i++){
if('=' == buffer[i] && '=' == buffer[i+1]) {
 matched = true;
pattern_id = 1120 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && '0' == buffer[i+3] && '.' == buffer[i+4] && 'j' == buffer[i+5] && 'p' == buffer[i+6] && 'g' == buffer[i+7]) {
 matched = true;
pattern_id = 1121 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '5' == buffer[i+1] && '5' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '4' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && 'A' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1122 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'd' == buffer[i+2] && '.' == buffer[i+3] && 'a' == buffer[i+4] && 's' == buffer[i+5] && 'p' == buffer[i+6] && 'x' == buffer[i+7]) {
 matched = true;
pattern_id = 1123 ;
}
}
for(int i=0; i<buffer_size; i++){
if('&' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && 'p' == buffer[i+5] && '=' == buffer[i+6]) {
 matched = true;
pattern_id = 1124 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'm' == buffer[i+2] && 'd' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 1125 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && 's' == buffer[i+3] && '/' == buffer[i+4] && 's' == buffer[i+5] && 'e' == buffer[i+6] && 'a' == buffer[i+7] && 'r' == buffer[i+8] && 'c' == buffer[i+9] && 'h' == buffer[i+10] && '.' == buffer[i+11] && 'a' == buffer[i+12] && 's' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 1126 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'l' == buffer[i+2] && '.' == buffer[i+3] && 'h' == buffer[i+4] && 't' == buffer[i+5] && 'm' == buffer[i+6]) {
 matched = true;
pattern_id = 1127 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'm' == buffer[i+3] && 'l' == buffer[i+4]) {
 matched = true;
pattern_id = 1128 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'd' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && '/' == buffer[i+7] && 'i' == buffer[i+8] && 'd' == buffer[i+9] && 'o' == buffer[i+10] && '.' == buffer[i+11] && 'i' == buffer[i+12] && 'p' == buffer[i+13] && 'l' == buffer[i+14]) {
 matched = true;
pattern_id = 1129 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'r' == buffer[i+3] && 'm' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 1130 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'a' == buffer[i+2] && 'g' == buffer[i+3] && 'e' == buffer[i+4] && '/' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'd' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 1131 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'E' == buffer[i+1] && 'T' == buffer[i+2] && ' ' == buffer[i+3] && '/' == buffer[i+4] && '3' == buffer[i+5] && '0' == buffer[i+6] && '0' == buffer[i+7] && '1' == buffer[i+8]) {
 matched = true;
pattern_id = 1132 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'I' == buffer[i+1] && 'P' == buffer[i+2] && '/' == buffer[i+3] && '2' == buffer[i+4] && '.' == buffer[i+5] && '0' == buffer[i+6]) {
 matched = true;
pattern_id = 1133 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'e' == buffer[i+5] && 'n' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 1134 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'h' == buffer[i+1] && '0' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4]) {
 matched = true;
pattern_id = 1135 ;
}
}
for(int i=0; i<buffer_size; i++){
if('X' == buffer[i] && '-' == buffer[i+1] && 'F' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4] && 'w' == buffer[i+5] && 'a' == buffer[i+6] && 'r' == buffer[i+7] && 'd' == buffer[i+8] && 'e' == buffer[i+9] && 'd' == buffer[i+10] && '-' == buffer[i+11] && 'F' == buffer[i+12] && 'o' == buffer[i+13] && 'r' == buffer[i+14]) {
 matched = true;
pattern_id = 1136 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'd' == buffer[i+3] && 'e' == buffer[i+4] && 'x' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9] && '?' == buffer[i+10]) {
 matched = true;
pattern_id = 1137 ;
}
}
for(int i=0; i<buffer_size; i++){
if('?' == buffer[i] && 'm' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'a' == buffer[i+5] && 'g' == buffer[i+6] && 'e' == buffer[i+7] && '=' == buffer[i+8]) {
 matched = true;
pattern_id = 1138 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && '=' == buffer[i+4] && '%' == buffer[i+5] && '2' == buffer[i+6] && '0' == buffer[i+7] && 'N' == buffer[i+8] && 'o' == buffer[i+9] && 'm' == buffer[i+10] && 'e' == buffer[i+11] && '.' == buffer[i+12] && '.' == buffer[i+13] && ':' == buffer[i+14]) {
 matched = true;
pattern_id = 1139 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3] && 'g' == buffer[i+4] && '.' == buffer[i+5] && 'h' == buffer[i+6] && 't' == buffer[i+7] && 'm' == buffer[i+8] && 'l' == buffer[i+9] && '?' == buffer[i+10] && 'r' == buffer[i+11] && '=' == buffer[i+12]) {
 matched = true;
pattern_id = 1140 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'r' == buffer[i+2] && 'y' == buffer[i+3] && 'p' == buffer[i+4] && 't' == buffer[i+5] && '_' == buffer[i+6] && '1' == buffer[i+7] && '_' == buffer[i+8] && 's' == buffer[i+9] && 'e' == buffer[i+10] && 'l' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 1141 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'e' == buffer[i+1] && 'x' == buffer[i+2] && 'e' == buffer[i+3] && '&' == buffer[i+4] && 'h' == buffer[i+5] && '=' == buffer[i+6]) {
 matched = true;
pattern_id = 1142 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && '2' == buffer[i+2] && '2' == buffer[i+3] && '/' == buffer[i+4] && 'm' == buffer[i+5] && 'u' == buffer[i+6] && 't' == buffer[i+7] && 'a' == buffer[i+8] && 'b' == buffer[i+9] && 'i' == buffer[i+10] && 'x' == buffer[i+11] && 'a' == buffer[i+12] && '/' == buffer[i+13]) {
 matched = true;
pattern_id = 1143 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'j' == buffer[i+1] && 'p' == buffer[i+2] && 'g' == buffer[i+3]) {
 matched = true;
pattern_id = 1144 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '?' == buffer[i+7] && 'q' == buffer[i+8] && '=' == buffer[i+9]) {
 matched = true;
pattern_id = 1145 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'D' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && 'A' == buffer[i+5] && '|' == buffer[i+6] && 'u' == buffer[i+7] && 'u' == buffer[i+8] && 'i' == buffer[i+9] && 'd' == buffer[i+10] && ':' == buffer[i+11] && ' ' == buffer[i+12]) {
 matched = true;
pattern_id = 1146 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && 'J' == buffer[i+1] && 'a' == buffer[i+2] && 'v' == buffer[i+3] && 'a' == buffer[i+4] && '/' == buffer[i+5] && '1' == buffer[i+6] && '.' == buffer[i+7]) {
 matched = true;
pattern_id = 1147 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '?' == buffer[i+1] && 'u' == buffer[i+2] && '=' == buffer[i+3]) {
 matched = true;
pattern_id = 1148 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '?' == buffer[i+1] && 'g' == buffer[i+2] && 'w' == buffer[i+3] && 's' == buffer[i+4] && '_' == buffer[i+5] && 'r' == buffer[i+6] && 'd' == buffer[i+7] && '=' == buffer[i+8] && 'c' == buffer[i+9] && 'r' == buffer[i+10]) {
 matched = true;
pattern_id = 1149 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && 'u' == buffer[i+5] && 's' == buffer[i+6] && '/' == buffer[i+7] && '?' == buffer[i+8] && '&' == buffer[i+9] && 'c' == buffer[i+10] && 'm' == buffer[i+11] && 'p' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 1150 ;
}
}
for(int i=0; i<buffer_size; i++){
if('&' == buffer[i] && 'a' == buffer[i+1] && 'f' == buffer[i+2] && 'f' == buffer[i+3] && 'i' == buffer[i+4] && 'd' == buffer[i+5] && '=' == buffer[i+6]) {
 matched = true;
pattern_id = 1151 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && '.' == buffer[i+2] && 'a' == buffer[i+3] && 's' == buffer[i+4] && 'h' == buffer[i+5] && 'x' == buffer[i+6] && '?' == buffer[i+7] && 'p' == buffer[i+8] && 'r' == buffer[i+9] && 'd' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 1152 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'j' == buffer[i+1] && 'n' == buffer[i+2] && 'l' == buffer[i+3] && 'p' == buffer[i+4]) {
 matched = true;
pattern_id = 1153 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'z' == buffer[i+1] && 'i' == buffer[i+2] && 'p' == buffer[i+3]) {
 matched = true;
pattern_id = 1154 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'l' == buffer[i+1] && 'd' == buffer[i+2]) {
 matched = true;
pattern_id = 1155 ;
}
}
for(int i=0; i<buffer_size; i++){
if('i' == buffer[i] && 'p' == buffer[i+1] && 't' == buffer[i+2] && 'u' == buffer[i+3] && 'x' == buffer[i+4]) {
 matched = true;
pattern_id = 1156 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '5' == buffer[i+1] && '4' == buffer[i+2] && ' ' == buffer[i+3] && '2' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1157 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 'P' == buffer[i+1] && 'D' == buffer[i+2] && 'A' == buffer[i+3] && 'T' == buffer[i+4] && 'E' == buffer[i+5] && '|' == buffer[i+6] && '7' == buffer[i+7] && 'C' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1158 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'z' == buffer[i+1] && 'o' == buffer[i+2] && 'l' == buffer[i+3] && 'l' == buffer[i+4] && 'a' == buffer[i+5] && 'r' == buffer[i+6] && 'd' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 1159 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'n' == buffer[i+3] && 'f' == buffer[i+4] && 'i' == buffer[i+5] && 'g' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10] && '?' == buffer[i+11]) {
 matched = true;
pattern_id = 1160 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 'x' == buffer[i+2] && 'e' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 1161 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'm' == buffer[i+2] && 'd' == buffer[i+3] && '?' == buffer[i+4] && 'v' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && 's' == buffer[i+8] && 'i' == buffer[i+9] && 'o' == buffer[i+10] && 'n' == buffer[i+11] && '=' == buffer[i+12]) {
 matched = true;
pattern_id = 1162 ;
}
}
for(int i=0; i<buffer_size; i++){
if('J' == buffer[i] && 'O' == buffer[i+1] && 'I' == buffer[i+2] && 'N' == buffer[i+3] && ' ' == buffer[i+4] && '|' == buffer[i+5] && '3' == buffer[i+6] && 'A' == buffer[i+7] && '|' == buffer[i+8] && '#' == buffer[i+9]) {
 matched = true;
pattern_id = 1163 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'i' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && '2' == buffer[i+5] && '/' == buffer[i+6]) {
 matched = true;
pattern_id = 1164 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 's' == buffer[i+4] && 't' == buffer[i+5] && 'a' == buffer[i+6] && 't' == buffer[i+7] && '/' == buffer[i+8] && '?' == buffer[i+9] && 'i' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 1165 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'e' == buffer[i+1] && 'x' == buffer[i+2] && 'e' == buffer[i+3] && '|' == buffer[i+4] && '0' == buffer[i+5] && 'D' == buffer[i+6] && ' ' == buffer[i+7] && '0' == buffer[i+8] && 'A' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1166 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && '/' == buffer[i+3] && 'g' == buffer[i+4] && 'a' == buffer[i+5] && 't' == buffer[i+6] && 'e' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 1167 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'e' == buffer[i+1] && 'c' == buffer[i+2] && 'e' == buffer[i+3] && 'i' == buffer[i+4] && 'p' == buffer[i+5] && 't' == buffer[i+6]) {
 matched = true;
pattern_id = 1168 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'h' == buffer[i+1] && 'i' == buffer[i+2] && 'p' == buffer[i+3] && 'p' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && 'g' == buffer[i+7]) {
 matched = true;
pattern_id = 1169 ;
}
}
for(int i=0; i<buffer_size; i++){
if('v' == buffer[i] && 'o' == buffer[i+1] && 'i' == buffer[i+2] && 'c' == buffer[i+3] && 'e' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'i' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 1170 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 't' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6] && 'n' == buffer[i+7] && 't' == buffer[i+8]) {
 matched = true;
pattern_id = 1171 ;
}
}
for(int i=0; i<buffer_size; i++){
if('&' == buffer[i] && 'b' == buffer[i+1] && 'o' == buffer[i+2] && 'l' == buffer[i+3] && 'a' == buffer[i+4] && 'u' == buffer[i+5] && 's' == buffer[i+6] && 'a' == buffer[i+7] && 'd' == buffer[i+8] && 'o' == buffer[i+9]) {
 matched = true;
pattern_id = 1172 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'r' == buffer[i+1] && 'o' == buffer[i+2] && 'u' == buffer[i+3] && 'p' == buffer[i+4] && '|' == buffer[i+5] && '3' == buffer[i+6] && 'D' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 1173 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'g' == buffer[i+2] && '/' == buffer[i+3] && 'p' == buffer[i+4] && 'l' == buffer[i+5] && 'u' == buffer[i+6] && 'g' == buffer[i+7] && 'i' == buffer[i+8] && 'n' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'r' == buffer[i+12] && 'x' == buffer[i+13]) {
 matched = true;
pattern_id = 1174 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4]) {
 matched = true;
pattern_id = 1175 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '/' == buffer[i+5] && 'e' == buffer[i+6] && 'c' == buffer[i+7] && 'h' == buffer[i+8] && 'o' == buffer[i+9]) {
 matched = true;
pattern_id = 1176 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && '/' == buffer[i+4] && '?' == buffer[i+5] && 'v' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '=' == buffer[i+9]) {
 matched = true;
pattern_id = 1177 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'H' == buffer[i+1] && 'N' == buffer[i+2] && 'A' == buffer[i+3] && 'P' == buffer[i+4] && '1' == buffer[i+5]) {
 matched = true;
pattern_id = 1178 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'r' == buffer[i+2] && 'l' == buffer[i+3] && '/' == buffer[i+4] && 'e' == buffer[i+5] && 'l' == buffer[i+6] && '.' == buffer[i+7] && 'h' == buffer[i+8] && 't' == buffer[i+9] && 'm' == buffer[i+10] && 'l' == buffer[i+11]) {
 matched = true;
pattern_id = 1179 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'm' == buffer[i+2] && 'p' == buffer[i+3] && '/' == buffer[i+4] && 'i' == buffer[i+5] && 'm' == buffer[i+6] && 'a' == buffer[i+7] && 'g' == buffer[i+8] && 'e' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 1180 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '2' == buffer[i+1] && '0' == buffer[i+2]) {
 matched = true;
pattern_id = 1181 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'c' == buffer[i+2] && 's' == buffer[i+3] && '?' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'a' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1182 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'd' == buffer[i+2] && 'i' == buffer[i+3] && '?' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'a' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1183 ;
}
}
for(int i=0; i<buffer_size; i++){
if('l' == buffer[i] && 'i' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3] && 'a' == buffer[i+4]) {
 matched = true;
pattern_id = 1184 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 't' == buffer[i+4] && '?' == buffer[i+5]) {
 matched = true;
pattern_id = 1185 ;
}
}
for(int i=0; i<buffer_size; i++){
if('m' == buffer[i] && 'y' == buffer[i+1] && 'v' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 's' == buffer[i+5] && 'i' == buffer[i+6] && 'o' == buffer[i+7] && 'n' == buffer[i+8] && '|' == buffer[i+9] && '7' == buffer[i+10] && 'C' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1186 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '8' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1187 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '8' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '1' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1188 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '8' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '2' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1189 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '8' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '3' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1190 ;
}
}
for(int i=0; i<buffer_size; i++){
if('[' == buffer[i] && 'm' == buffer[i+1] && 'a' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'c' == buffer[i+5] && 'a' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8] && '1' == buffer[i+9] && '.' == buffer[i+10] && '0' == buffer[i+11] && ']' == buffer[i+12]) {
 matched = true;
pattern_id = 1191 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && 'd' == buffer[i+6] && '.' == buffer[i+7] && 'e' == buffer[i+8] && 'x' == buffer[i+9] && 'e' == buffer[i+10]) {
 matched = true;
pattern_id = 1192 ;
}
}
for(int i=0; i<buffer_size; i++){
if('L' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'u' == buffer[i+3] && 'x' == buffer[i+4] && '|' == buffer[i+5] && '2' == buffer[i+6] && '0' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 1193 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'd' == buffer[i+1] && 'f' == buffer[i+2] && '_' == buffer[i+3] && 'e' == buffer[i+4] && 'f' == buffer[i+5] && 'a' == buffer[i+6] && 'x' == buffer[i+7] && '_' == buffer[i+8]) {
 matched = true;
pattern_id = 1194 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '6' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1195 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '7' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1196 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '6' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '1' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1197 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '7' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '1' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1198 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '6' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '2' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1199 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '7' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '2' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1200 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '6' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '3' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1201 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '7' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '3' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1202 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'd' == buffer[i+1] && 'o' == buffer[i+2] && 'c' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 1203 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'g' == buffer[i+1] && 'i' == buffer[i+2] && 'f' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 1204 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'j' == buffer[i+1] && 'p' == buffer[i+2] && 'e' == buffer[i+3] && 'g' == buffer[i+4] && '.' == buffer[i+5] && 'e' == buffer[i+6] && 'x' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 1205 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'j' == buffer[i+1] && 'p' == buffer[i+2] && 'g' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 1206 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'd' == buffer[i+2] && 'f' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 1207 ;
}
}
for(int i=0; i<buffer_size; i++){
if(')' == buffer[i] && '&' == buffer[i+1] && 'd' == buffer[i+2] && 't' == buffer[i+3] && '=' == buffer[i+4]) {
 matched = true;
pattern_id = 1208 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '2' == buffer[i+1] && '8' == buffer[i+2] && ' ' == buffer[i+3] && '9' == buffer[i+4] && '4' == buffer[i+5] && ' ' == buffer[i+6] && '8' == buffer[i+7] && 'D' == buffer[i+8] && ' ' == buffer[i+9] && 'A' == buffer[i+10] && 'B' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1209 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'O' == buffer[i+1] && 'S' == buffer[i+2] && 'T' == buffer[i+3] && ' ' == buffer[i+4] && '/' == buffer[i+5]) {
 matched = true;
pattern_id = 1210 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '0' == buffer[i+1] && '.' == buffer[i+2] && 'g' == buffer[i+3] && 'i' == buffer[i+4] && 'f' == buffer[i+5] && '?' == buffer[i+6]) {
 matched = true;
pattern_id = 1211 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && '/' == buffer[i+3]) {
 matched = true;
pattern_id = 1212 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'h' == buffer[i+1] && 't' == buffer[i+2] && 'm' == buffer[i+3] && 'l' == buffer[i+4] && '?' == buffer[i+5] && '0' == buffer[i+6] && '.' == buffer[i+7]) {
 matched = true;
pattern_id = 1213 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && 'l' == buffer[i+7]) {
 matched = true;
pattern_id = 1214 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'q' == buffer[i+1] && 'u' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'y' == buffer[i+5] && '?' == buffer[i+6] && 'v' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && 's' == buffer[i+10] && 'i' == buffer[i+11] && 'o' == buffer[i+12] && 'n' == buffer[i+13] && '=' == buffer[i+14]) {
 matched = true;
pattern_id = 1215 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 1216 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'o' == buffer[i+2] && 'n' == buffer[i+3] && 'i' == buffer[i+4] && 't' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 1217 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'm' == buffer[i+1] && 's' == buffer[i+2]) {
 matched = true;
pattern_id = 1218 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'E' == buffer[i+1] && 'L' == buffer[i+2] && 'L' == buffer[i+3] && 'O' == buffer[i+4] && '|' == buffer[i+5] && '0' == buffer[i+6] && 'A' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 1219 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'E' == buffer[i+1] && 'A' == buffer[i+2] && 'D' == buffer[i+3] && 'D' == buffer[i+4] && '|' == buffer[i+5] && '0' == buffer[i+6] && 'A' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 1220 ;
}
}
for(int i=0; i<buffer_size; i++){
if('R' == buffer[i] && 'E' == buffer[i+1] && 'A' == buffer[i+2] && 'D' == buffer[i+3] && 'Y' == buffer[i+4] && '|' == buffer[i+5] && '0' == buffer[i+6] && 'A' == buffer[i+7] && '|' == buffer[i+8]) {
 matched = true;
pattern_id = 1221 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'o' == buffer[i+2] && 'f' == buffer[i+3] && 't' == buffer[i+4] && 'w' == buffer[i+5] && 'a' == buffer[i+6] && 'r' == buffer[i+7] && 'e' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12] && '?' == buffer[i+13]) {
 matched = true;
pattern_id = 1222 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '3' == buffer[i+1] && 'A' == buffer[i+2] && '|' == buffer[i+3] && 'b' == buffer[i+4] && 'p' == buffer[i+5] && 'a' == buffer[i+6] && 's' == buffer[i+7] && 's' == buffer[i+8] && '|' == buffer[i+9] && '0' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1223 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'e' == buffer[i+2] && '/' == buffer[i+3]) {
 matched = true;
pattern_id = 1224 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'i' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 1225 ;
}
}
for(int i=0; i<buffer_size; i++){
if('&' == buffer[i] && 's' == buffer[i+1] && 't' == buffer[i+2] && 'r' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'g' == buffer[i+6] && '=' == buffer[i+7]) {
 matched = true;
pattern_id = 1226 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'u' == buffer[i+2] && 'p' == buffer[i+3] && 'p' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 't' == buffer[i+7] && '.' == buffer[i+8] && 'e' == buffer[i+9] && 'x' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 1227 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'm' == buffer[i+2] && 'p' == buffer[i+3] && 's' == buffer[i+4] && '.' == buffer[i+5] && 'e' == buffer[i+6] && 'x' == buffer[i+7] && 'e' == buffer[i+8]) {
 matched = true;
pattern_id = 1228 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && '/' == buffer[i+4] && '?' == buffer[i+5] && 'd' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8] && 'a' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1229 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '1' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6] && 'J' == buffer[i+7] && 'F' == buffer[i+8] && 'I' == buffer[i+9] && 'F' == buffer[i+10]) {
 matched = true;
pattern_id = 1230 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'o' == buffer[i+3] && 's' == buffer[i+4] && '=' == buffer[i+5]) {
 matched = true;
pattern_id = 1231 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '?' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6] && 't' == buffer[i+7] && 'h' == buffer[i+8] && 'o' == buffer[i+9] && 'd' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 1232 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'o' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && 'f' == buffer[i+5] && 'y' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 1233 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && '3' == buffer[i+1] && 'D' == buffer[i+2] && '%' == buffer[i+3] && '2' == buffer[i+4] && '8' == buffer[i+5] && '%' == buffer[i+6] && '2' == buffer[i+7] && '9' == buffer[i+8] && '+' == buffer[i+9] && '%' == buffer[i+10] && '7' == buffer[i+11] && 'B' == buffer[i+12]) {
 matched = true;
pattern_id = 1234 ;
}
}
for(int i=0; i<buffer_size; i++){
if('(' == buffer[i] && ')' == buffer[i+1] && ' ' == buffer[i+2] && '{' == buffer[i+3]) {
 matched = true;
pattern_id = 1235 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '0' == buffer[i+1] && '/' == buffer[i+2] && ' ' == buffer[i+3] && 'H' == buffer[i+4] && 'T' == buffer[i+5] && 'T' == buffer[i+6] && 'P' == buffer[i+7] && '/' == buffer[i+8] && '1' == buffer[i+9] && '.' == buffer[i+10]) {
 matched = true;
pattern_id = 1236 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && 'U' == buffer[i+1] && 'I' == buffer[i+2] && 'L' == buffer[i+3] && 'D' == buffer[i+4] && ' ' == buffer[i+5] && 'X' == buffer[i+6] && '8' == buffer[i+7] && '6' == buffer[i+8] && '|' == buffer[i+9] && '0' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1237 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 'S' == buffer[i+1] && 'E' == buffer[i+2] && 'R' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 1238 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && '/' == buffer[i+2] && 'p' == buffer[i+3] && 'k' == buffer[i+4] && 'g' == buffer[i+5] && '/' == buffer[i+6] && 'T' == buffer[i+7] && '2' == buffer[i+8] && '0' == buffer[i+9] && '2' == buffer[i+10]) {
 matched = true;
pattern_id = 1239 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'x' == buffer[i+1] && '/' == buffer[i+2]) {
 matched = true;
pattern_id = 1240 ;
}
}
for(int i=0; i<buffer_size; i++){
if('P' == buffer[i] && 'A' == buffer[i+1] && 'S' == buffer[i+2] && 'S' == buffer[i+3] && ' ' == buffer[i+4]) {
 matched = true;
pattern_id = 1241 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'o' == buffer[i+2] && 'd' == buffer[i+3] && '_' == buffer[i+4]) {
 matched = true;
pattern_id = 1242 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && '/' == buffer[i+2] && 's' == buffer[i+3] && 'h' == buffer[i+4] && 'o' == buffer[i+5] && 'e' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 1243 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 'a' == buffer[i+4] && '/' == buffer[i+5] && 'o' == buffer[i+6] && 'r' == buffer[i+7] && 'd' == buffer[i+8] && 'e' == buffer[i+9] && 'r' == buffer[i+10] && '.' == buffer[i+11] && 'p' == buffer[i+12] && 'h' == buffer[i+13] && 'p' == buffer[i+14]) {
 matched = true;
pattern_id = 1244 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'H' == buffer[i+1] && 'V' == buffer[i+2] && '1' == buffer[i+3] && ':' == buffer[i+4]) {
 matched = true;
pattern_id = 1245 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '2' == buffer[i+1] && '0' == buffer[i+2] && '|' == buffer[i+3] && 'O' == buffer[i+4] && 'S' == buffer[i+5] && '|' == buffer[i+6] && '3' == buffer[i+7] && 'A' == buffer[i+8] && ' ' == buffer[i+9] && '2' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1246 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'f' == buffer[i+3] && 'o' == buffer[i+4] && '.' == buffer[i+5] && 'x' == buffer[i+6] && 'm' == buffer[i+7] && 'l' == buffer[i+8]) {
 matched = true;
pattern_id = 1247 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && '(' == buffer[i+1] && ')' == buffer[i+2] && ' ' == buffer[i+3] && '{' == buffer[i+4]) {
 matched = true;
pattern_id = 1248 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'd' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6]) {
 matched = true;
pattern_id = 1249 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'l' == buffer[i+1] && 'u' == buffer[i+2] && 'g' == buffer[i+3] && '=' == buffer[i+4] && 'N' == buffer[i+5] && 'A' == buffer[i+6] && 'O' == buffer[i+7]) {
 matched = true;
pattern_id = 1250 ;
}
}
for(int i=0; i<buffer_size; i++){
if('I' == buffer[i] && 'N' == buffer[i+1] && 'T' == buffer[i+2] && 'E' == buffer[i+3] && 'R' == buffer[i+4] && 'N' == buffer[i+5] && 'A' == buffer[i+6] && 'C' == buffer[i+7] && 'I' == buffer[i+8] && 'O' == buffer[i+9] && 'N' == buffer[i+10] && 'A' == buffer[i+11] && 'L' == buffer[i+12]) {
 matched = true;
pattern_id = 1251 ;
}
}
for(int i=0; i<buffer_size; i++){
if('B' == buffer[i] && 'R' == buffer[i+1] && 'A' == buffer[i+2] && 'S' == buffer[i+3] && 'I' == buffer[i+4] && 'L' == buffer[i+5]) {
 matched = true;
pattern_id = 1252 ;
}
}
for(int i=0; i<buffer_size; i++){
if('_' == buffer[i] && 'p' == buffer[i+1] && 'd' == buffer[i+2] && 'f' == buffer[i+3] && '.' == buffer[i+4] && 'e' == buffer[i+5] && 'x' == buffer[i+6] && 'e' == buffer[i+7]) {
 matched = true;
pattern_id = 1253 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '3' == buffer[i+2] && '|' == buffer[i+3] && 'q' == buffer[i+4] && '0' == buffer[i+5] && 'v' == buffer[i+6] && '|' == buffer[i+7] && '0' == buffer[i+8] && '2' == buffer[i+9] && '|' == buffer[i+10] && 'p' == buffer[i+11] && 'l' == buffer[i+12]) {
 matched = true;
pattern_id = 1254 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'a' == buffer[i+3] && 'r' == buffer[i+4] && 'c' == buffer[i+5] && 'h' == buffer[i+6] && '?' == buffer[i+7] && 'b' == buffer[i+8] && 't' == buffer[i+9] && 'n' == buffer[i+10] && 'G' == buffer[i+11] && '=' == buffer[i+12]) {
 matched = true;
pattern_id = 1255 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'e' == buffer[i+2] && 'b' == buffer[i+3] && 'h' == buffer[i+4] && 'p' == buffer[i+5] && '?' == buffer[i+6] && 'r' == buffer[i+7] && 'e' == buffer[i+8] && 'l' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1256 ;
}
}
for(int i=0; i<buffer_size; i++){
if('(' == buffer[i] && '|' == buffer[i+1] && '0' == buffer[i+2] && '0' == buffer[i+3] && '|' == buffer[i+4]) {
 matched = true;
pattern_id = 1257 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 't' == buffer[i+1] && 'x' == buffer[i+2] && 't' == buffer[i+3] && '/' == buffer[i+4] && 'r' == buffer[i+5] && 'e' == buffer[i+6] && 'a' == buffer[i+7] && 'd' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 1258 ;
}
}
for(int i=0; i<buffer_size; i++){
if('D' == buffer[i] && 'E' == buffer[i+1] && 'X' == buffer[i+2] && 'T' == buffer[i+3] && '8' == buffer[i+4] && '7' == buffer[i+5]) {
 matched = true;
pattern_id = 1259 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '1' == buffer[i+1] && '1' == buffer[i+2] && '/' == buffer[i+3] && 'f' == buffer[i+4] && 'o' == buffer[i+5] && 'r' == buffer[i+6] && 'm' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 1260 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '1' == buffer[i+1] && '1' == buffer[i+2] && '/' == buffer[i+3] && 'f' == buffer[i+4] && 'e' == buffer[i+5] && 'e' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 1261 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '4' == buffer[i+1] && 'C' == buffer[i+2] && ' ' == buffer[i+3] && '4' == buffer[i+4] && 'C' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1262 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '7' == buffer[i+1] && 'B' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '8' == buffer[i+5] && ' ' == buffer[i+6] && '2' == buffer[i+7] && 'A' == buffer[i+8] && ' ' == buffer[i+9] && '2' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1263 ;
}
}
for(int i=0; i<buffer_size; i++){
if('H' == buffer[i] && 'T' == buffer[i+1] && 'T' == buffer[i+2] && 'P' == buffer[i+3] && '/' == buffer[i+4] && '1' == buffer[i+5]) {
 matched = true;
pattern_id = 1264 ;
}
}
for(int i=0; i<buffer_size; i++){
if('<' == buffer[i] && '?' == buffer[i+1] && 'x' == buffer[i+2] && 'm' == buffer[i+3] && 'l' == buffer[i+4]) {
 matched = true;
pattern_id = 1265 ;
}
}
for(int i=0; i<buffer_size; i++){
if('=' == buffer[i] && '0' == buffer[i+1] && 'D' == buffer[i+2] && '=' == buffer[i+3] && '0' == buffer[i+4] && 'A' == buffer[i+5] && 'C' == buffer[i+6] && 'l' == buffer[i+7] && 'i' == buffer[i+8] && 'p' == buffer[i+9] && 'b' == buffer[i+10] && 'o' == buffer[i+11] && 'a' == buffer[i+12] && 'r' == buffer[i+13] && 'd' == buffer[i+14]) {
 matched = true;
pattern_id = 1266 ;
}
}
for(int i=0; i<buffer_size; i++){
if('n' == buffer[i] && 'a' == buffer[i+1] && 'm' == buffer[i+2] && 'e' == buffer[i+3] && '=' == buffer[i+4] && 's' == buffer[i+5] && 'c' == buffer[i+6] && 'r' == buffer[i+7] && 'e' == buffer[i+8] && 'e' == buffer[i+9] && 'n' == buffer[i+10] && 's' == buffer[i+11] && 'h' == buffer[i+12] && 'o' == buffer[i+13] && 't' == buffer[i+14]) {
 matched = true;
pattern_id = 1267 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'j' == buffer[i+1] && 's' == buffer[i+2] && '/' == buffer[i+3] && 'j' == buffer[i+4] && 'q' == buffer[i+5] && 'u' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && 'y' == buffer[i+9] && '-' == buffer[i+10]) {
 matched = true;
pattern_id = 1268 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'g' == buffer[i+1] && 'i' == buffer[i+2] && 'f' == buffer[i+3] && '?' == buffer[i+4] && 'a' == buffer[i+5] && 'c' == buffer[i+6] && 't' == buffer[i+7] && 'i' == buffer[i+8] && 'o' == buffer[i+9] && 'n' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 1269 ;
}
}
for(int i=0; i<buffer_size; i++){
if('&' == buffer[i] && 'p' == buffer[i+1] && 'c' == buffer[i+2] && 'n' == buffer[i+3] && 'a' == buffer[i+4] && 'm' == buffer[i+5] && 'e' == buffer[i+6] && '=' == buffer[i+7]) {
 matched = true;
pattern_id = 1270 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'd' == buffer[i+3] && 'a' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 'b' == buffer[i+7] && '.' == buffer[i+8] && 'x' == buffer[i+9] && 'm' == buffer[i+10] && 'l' == buffer[i+11] && '?' == buffer[i+12]) {
 matched = true;
pattern_id = 1271 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'b' == buffer[i+1] && 'b' == buffer[i+2] && '/' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'd' == buffer[i+6] && 'e' == buffer[i+7] && 'x' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 1272 ;
}
}
for(int i=0; i<buffer_size; i++){
if(' ' == buffer[i] && 'E' == buffer[i+1] && 'M' == buffer[i+2] && 'F' == buffer[i+3]) {
 matched = true;
pattern_id = 1273 ;
}
}
for(int i=0; i<buffer_size; i++){
if('K' == buffer[i] && 'r' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 'R' == buffer[i+4]) {
 matched = true;
pattern_id = 1274 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'e' == buffer[i+2] && 'p' == buffer[i+3] && 'o' == buffer[i+4] && 'r' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10] && '?' == buffer[i+11]) {
 matched = true;
pattern_id = 1275 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '?' == buffer[i+5]) {
 matched = true;
pattern_id = 1276 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'p' == buffer[i+2] && '/' == buffer[i+3] && '?' == buffer[i+4] && 'c' == buffer[i+5] && 'l' == buffer[i+6] && 'i' == buffer[i+7] && 'e' == buffer[i+8] && 'n' == buffer[i+9] && 't' == buffer[i+10] && '=' == buffer[i+11] && 's' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 1277 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'J' == buffer[i+3] && 's' == buffer[i+4] && '/' == buffer[i+5] && 'v' == buffer[i+6]) {
 matched = true;
pattern_id = 1278 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'h' == buffer[i+2] && 'e' == buffer[i+3] && 'c' == buffer[i+4] && 'k' == buffer[i+5] && '?' == buffer[i+6] && 'i' == buffer[i+7] && 'i' == buffer[i+8] && 'd' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1279 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'm' == buffer[i+3] && 'p' == buffer[i+4] && 'i' == buffer[i+5] && 'l' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '?' == buffer[i+9] && 'i' == buffer[i+10] && 'i' == buffer[i+11] && 'd' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 1280 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 'p' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && 'a' == buffer[i+5] && 'd' == buffer[i+6] && '/' == buffer[i+7] && 'm' == buffer[i+8] && 'o' == buffer[i+9] && 'd' == buffer[i+10] && 'u' == buffer[i+11] && 'l' == buffer[i+12] && 'e' == buffer[i+13]) {
 matched = true;
pattern_id = 1281 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'i' == buffer[i+2] && 's' == buffer[i+3] && 'c' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8] && '?' == buffer[i+9] && 'v' == buffer[i+10] && '=' == buffer[i+11]) {
 matched = true;
pattern_id = 1282 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'd' == buffer[i+2] && 'c' == buffer[i+3] && 'o' == buffer[i+4] && 'n' == buffer[i+5] && 't' == buffer[i+6] && 'a' == buffer[i+7] && 'c' == buffer[i+8] && 't' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 1283 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'n' == buffer[i+1] && 'e' == buffer[i+2] && 'w' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 1284 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'l' == buffer[i+2] && 'u' == buffer[i+3] && 'p' == buffer[i+4] && 'd' == buffer[i+5] && 'a' == buffer[i+6] && 't' == buffer[i+7] && 'e' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 1285 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'A' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'h' == buffer[i+6] && 't' == buffer[i+7] && 'm' == buffer[i+8] && 'l' == buffer[i+9] && '_' == buffer[i+10]) {
 matched = true;
pattern_id = 1286 ;
}
}
for(int i=0; i<buffer_size; i++){
if('s' == buffer[i] && 'n' == buffer[i+1] && 'a' == buffer[i+2] && 'm' == buffer[i+3] && 'e' == buffer[i+4] && '=' == buffer[i+5]) {
 matched = true;
pattern_id = 1287 ;
}
}
for(int i=0; i<buffer_size; i++){
if('I' == buffer[i] && 'D' == buffer[i+1] && '_' == buffer[i+2] && 'M' == buffer[i+3] && 'A' == buffer[i+4] && 'Q' == buffer[i+5] && 'U' == buffer[i+6] && 'I' == buffer[i+7] && 'N' == buffer[i+8] && 'A' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1288 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'r' == buffer[i+2] && 'o' == buffer[i+3] && 'k' == buffer[i+4] && '/' == buffer[i+5]) {
 matched = true;
pattern_id = 1289 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'e' == buffer[i+1] && 'x' == buffer[i+2] && 't' == buffer[i+3] && 'o' == buffer[i+4] && '=' == buffer[i+5] && '%' == buffer[i+6] && '0' == buffer[i+7] && 'D' == buffer[i+8] && '%' == buffer[i+9] && '0' == buffer[i+10] && 'A' == buffer[i+11]) {
 matched = true;
pattern_id = 1290 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'i' == buffer[i+2] && 'f' == buffer[i+3] && 'f' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8]) {
 matched = true;
pattern_id = 1291 ;
}
}
for(int i=0; i<buffer_size; i++){
if('2' == buffer[i] && '|' == buffer[i+1] && '7' == buffer[i+2] && 'C' == buffer[i+3] && '|' == buffer[i+4] && 'h' == buffer[i+5] && 't' == buffer[i+6] && 't' == buffer[i+7] && 'p' == buffer[i+8] && ':' == buffer[i+9] && '/' == buffer[i+10] && '/' == buffer[i+11]) {
 matched = true;
pattern_id = 1292 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'f' == buffer[i+1] && 'o' == buffer[i+2] && 'r' == buffer[i+3] && 'u' == buffer[i+4] && 'm' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 1293 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'm' == buffer[i+1] && 'o' == buffer[i+2] && 'd' == buffer[i+3]) {
 matched = true;
pattern_id = 1294 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '?' == buffer[i+4] && 'u' == buffer[i+5] && 's' == buffer[i+6] && 'e' == buffer[i+7] && 'r' == buffer[i+8] && '_' == buffer[i+9] && 'c' == buffer[i+10] && 'o' == buffer[i+11] && 'd' == buffer[i+12] && 'e' == buffer[i+13] && '=' == buffer[i+14]) {
 matched = true;
pattern_id = 1295 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'o' == buffer[i+1] && 'r' == buffer[i+2] && 'd' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 1296 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 's' == buffer[i+1] && 'w' == buffer[i+2] && 'f' == buffer[i+3] && '?' == buffer[i+4]) {
 matched = true;
pattern_id = 1297 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 't' == buffer[i+2] && 'o' == buffer[i+3] && 'm' == buffer[i+4] && 'i' == buffer[i+5] && 'c' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10]) {
 matched = true;
pattern_id = 1298 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'r' == buffer[i+1] && 'p' == buffer[i+2] && '?' == buffer[i+3] && 'v' == buffer[i+4] && '=' == buffer[i+5]) {
 matched = true;
pattern_id = 1299 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'o' == buffer[i+1] && 'f' == buffer[i+2] && 'f' == buffer[i+3] && 'e' == buffer[i+4] && 'r' == buffer[i+5] && 's' == buffer[i+6] && '_' == buffer[i+7] && 'n' == buffer[i+8] && 'e' == buffer[i+9] && 'w' == buffer[i+10] && '?' == buffer[i+11] && 'v' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 1300 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && '-' == buffer[i+4] && 'A' == buffer[i+5] && 'g' == buffer[i+6] && 'e' == buffer[i+7] && 'n' == buffer[i+8] && 't' == buffer[i+9]) {
 matched = true;
pattern_id = 1301 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8] && '/' == buffer[i+9]) {
 matched = true;
pattern_id = 1302 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'o' == buffer[i+2] && 'u' == buffer[i+3] && 'n' == buffer[i+4] && 't' == buffer[i+5] && 'e' == buffer[i+6] && 'r' == buffer[i+7] && '/' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 1303 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && 'i' == buffer[i+2] && 'p' == buffer[i+3] && '.' == buffer[i+4] && 'j' == buffer[i+5] && 'p' == buffer[i+6] && 'g' == buffer[i+7]) {
 matched = true;
pattern_id = 1304 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 't' == buffer[i+2] && '.' == buffer[i+3] && 'j' == buffer[i+4] && 'p' == buffer[i+5] && 'g' == buffer[i+6] && '?' == buffer[i+7]) {
 matched = true;
pattern_id = 1305 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '3' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1306 ;
}
}
for(int i=0; i<buffer_size; i++){
if('p' == buffer[i] && 'o' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3] && '=' == buffer[i+4]) {
 matched = true;
pattern_id = 1307 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'c' == buffer[i+3] && 'k' == buffer[i+4] && 'y' == buffer[i+5] && 'c' == buffer[i+6] && 'r' == buffer[i+7] && 'y' == buffer[i+8] && 'p' == buffer[i+9] && 't' == buffer[i+10] && '.' == buffer[i+11] && 'r' == buffer[i+12] && 'a' == buffer[i+13] && 'r' == buffer[i+14]) {
 matched = true;
pattern_id = 1308 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'O' == buffer[i+1] && 'N' == buffer[i+2] && 'N' == buffer[i+3] && 'E' == buffer[i+4] && 'C' == buffer[i+5] && 'T' == buffer[i+6]) {
 matched = true;
pattern_id = 1309 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '1' == buffer[i+1] && '6' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '3' == buffer[i+5] && '|' == buffer[i+6]) {
 matched = true;
pattern_id = 1310 ;
}
}
for(int i=0; i<buffer_size; i++){
if('h' == buffer[i] && 'i' == buffer[i+1] && '0' == buffer[i+2] && '0' == buffer[i+3]) {
 matched = true;
pattern_id = 1311 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'N' == buffer[i+1] && 'e' == buffer[i+2] && 'w' == buffer[i+3] && 's' == buffer[i+4] && '/' == buffer[i+5] && 'g' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8] && 'e' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 1312 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'N' == buffer[i+1] && 'e' == buffer[i+2] && 'w' == buffer[i+3] && 's' == buffer[i+4] && '/' == buffer[i+5] && 'g' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8] && 'e' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 1313 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && ' ' == buffer[i+2] && 'H' == buffer[i+3] && 'T' == buffer[i+4] && 'T' == buffer[i+5] && 'P' == buffer[i+6] && '/' == buffer[i+7] && '1' == buffer[i+8] && '.' == buffer[i+9] && '1' == buffer[i+10]) {
 matched = true;
pattern_id = 1314 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'p' == buffer[i+1] && 'o' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 1315 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'b' == buffer[i+1] && 'i' == buffer[i+2] && 'n' == buffer[i+3]) {
 matched = true;
pattern_id = 1316 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '7' == buffer[i+1] && 'B' == buffer[i+2] && ' ' == buffer[i+3] && '5' == buffer[i+4] && 'C' == buffer[i+5] && '|' == buffer[i+6] && 'r' == buffer[i+7] && 't' == buffer[i+8] && 'v' == buffer[i+9] && 'p' == buffer[i+10] && 'n' == buffer[i+11]) {
 matched = true;
pattern_id = 1317 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'i' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'p' == buffer[i+7] && '?' == buffer[i+8] && 'd' == buffer[i+9] && '=' == buffer[i+10]) {
 matched = true;
pattern_id = 1318 ;
}
}
for(int i=0; i<buffer_size; i++){
if('3' == buffer[i] && '0' == buffer[i+1] && '7' == buffer[i+2]) {
 matched = true;
pattern_id = 1319 ;
}
}
for(int i=0; i<buffer_size; i++){
if('.' == buffer[i] && 'p' == buffer[i+1] && 'h' == buffer[i+2] && 'p' == buffer[i+3] && '?' == buffer[i+4] && 'd' == buffer[i+5] && '=' == buffer[i+6]) {
 matched = true;
pattern_id = 1320 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'd' == buffer[i+3] && 'e' == buffer[i+4] && 'x' == buffer[i+5] && '.' == buffer[i+6] && 'a' == buffer[i+7] && 's' == buffer[i+8] && 'p' == buffer[i+9]) {
 matched = true;
pattern_id = 1321 ;
}
}
for(int i=0; i<buffer_size; i++){
if('b' == buffer[i] && 't' == buffer[i+1] && 's' == buffer[i+2] && 't' == buffer[i+3] && '=' == buffer[i+4]) {
 matched = true;
pattern_id = 1322 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'i' == buffer[i+3] && '/' == buffer[i+4]) {
 matched = true;
pattern_id = 1323 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'O' == buffer[i+1] && 'D' == buffer[i+2] && 'Z' == buffer[i+3] && 'I' == buffer[i+4] && 'L' == buffer[i+5] && 'L' == buffer[i+6] && 'A' == buffer[i+7] && '=' == buffer[i+8]) {
 matched = true;
pattern_id = 1324 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'p' == buffer[i+7] && '?' == buffer[i+8]) {
 matched = true;
pattern_id = 1325 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'u' == buffer[i+1] && 's' == buffer[i+2] && 'e' == buffer[i+3] && 'r' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && 'f' == buffer[i+7] && 'o' == buffer[i+8] && '.' == buffer[i+9] && 'p' == buffer[i+10] && 'h' == buffer[i+11] && 'p' == buffer[i+12]) {
 matched = true;
pattern_id = 1326 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 's' == buffer[i+3] && 't' == buffer[i+4] && 'a' == buffer[i+5] && 'l' == buffer[i+6] && 'l' == buffer[i+7] && 'e' == buffer[i+8] && 'r' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13] && '?' == buffer[i+14]) {
 matched = true;
pattern_id = 1327 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'o' == buffer[i+1] && 'p' == buffer[i+2] && 't' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9] && '?' == buffer[i+10]) {
 matched = true;
pattern_id = 1328 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'n' == buffer[i+2] && 'f' == buffer[i+3] && 'o' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 1329 ;
}
}
for(int i=0; i<buffer_size; i++){
if('U' == buffer[i] && 's' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && '-' == buffer[i+4] && 'A' == buffer[i+5] && 'g' == buffer[i+6] && 'e' == buffer[i+7] && 'n' == buffer[i+8] && 't' == buffer[i+9] && '|' == buffer[i+10] && '3' == buffer[i+11] && 'A' == buffer[i+12] && '|' == buffer[i+13] && ' ' == buffer[i+14]) {
 matched = true;
pattern_id = 1330 ;
}
}
for(int i=0; i<buffer_size; i++){
if('=' == buffer[i] && 'P' == buffer[i+1] && '4' == buffer[i+2] && 'C' == buffer[i+3] && 'K' == buffer[i+4] && '3' == buffer[i+5] && 'T' == buffer[i+6] && '=' == buffer[i+7]) {
 matched = true;
pattern_id = 1331 ;
}
}
for(int i=0; i<buffer_size; i++){
if('=' == buffer[i] && '0' == buffer[i+1] && 'D' == buffer[i+2] && '=' == buffer[i+3] && '0' == buffer[i+4] && 'A' == buffer[i+5] && '=' == buffer[i+6] && '0' == buffer[i+7] && 'D' == buffer[i+8] && '=' == buffer[i+9] && '0' == buffer[i+10] && 'A' == buffer[i+11]) {
 matched = true;
pattern_id = 1332 ;
}
}
for(int i=0; i<buffer_size; i++){
if('=' == buffer[i] && '0' == buffer[i+1] && 'D' == buffer[i+2] && '=' == buffer[i+3] && '0' == buffer[i+4] && 'A' == buffer[i+5]) {
 matched = true;
pattern_id = 1333 ;
}
}
for(int i=0; i<buffer_size; i++){
if('W' == buffer[i] && 'R' == buffer[i+1] && 'A' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'e' == buffer[i+5] && 'm' == buffer[i+6] && 'b' == buffer[i+7] && 'l' == buffer[i+8] && 'y' == buffer[i+9]) {
 matched = true;
pattern_id = 1334 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '4' == buffer[i+1] && '0' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && ' ' == buffer[i+9] && '0' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1335 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 't' == buffer[i+1] && 't' == buffer[i+2] && 'a' == buffer[i+3] && 'c' == buffer[i+4] && 'h' == buffer[i+5] && 'm' == buffer[i+6] && 'e' == buffer[i+7] && 'n' == buffer[i+8] && 't' == buffer[i+9] && '|' == buffer[i+10] && '3' == buffer[i+11] && 'B' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 1336 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'A' == buffer[i+2] && '|' == buffer[i+3] && 'P' == buffer[i+4] && 'r' == buffer[i+5] && 'o' == buffer[i+6] && 'x' == buffer[i+7] && 'y' == buffer[i+8] && '|' == buffer[i+9] && '3' == buffer[i+10] && 'A' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1337 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'd' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'a' == buffer[i+4] && '/' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && 'f' == buffer[i+8] && 'o' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 1338 ;
}
}
for(int i=0; i<buffer_size; i++){
if('a' == buffer[i] && 'b' == buffer[i+1] && 'o' == buffer[i+2] && 'u' == buffer[i+3] && 't' == buffer[i+4] && ':' == buffer[i+5]) {
 matched = true;
pattern_id = 1339 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'e' == buffer[i+2] && 'o' == buffer[i+3] && 'i' == buffer[i+4] && 'p' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9] && '?' == buffer[i+10] && 'b' == buffer[i+11] && 'd' == buffer[i+12] && 'r' == buffer[i+13] && '=' == buffer[i+14]) {
 matched = true;
pattern_id = 1340 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && 'B' == buffer[i+2] && ' ' == buffer[i+3] && '1' == buffer[i+4] && '0' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '5' == buffer[i+8] && ' ' == buffer[i+9] && '0' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1341 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'v' == buffer[i+1] && '1' == buffer[i+2]) {
 matched = true;
pattern_id = 1342 ;
}
}
for(int i=0; i<buffer_size; i++){
if('m' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'e' == buffer[i+6] && '=' == buffer[i+7]) {
 matched = true;
pattern_id = 1343 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'i' == buffer[i+1] && 'c' == buffer[i+2] && 'l' == buffer[i+3] && 'o' == buffer[i+4] && 'u' == buffer[i+5] && 'd' == buffer[i+6] && 's' == buffer[i+7] && 'y' == buffer[i+8] && 'n' == buffer[i+9] && 'c' == buffer[i+10] && 'd' == buffer[i+11]) {
 matched = true;
pattern_id = 1344 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'd' == buffer[i+3] && '.' == buffer[i+4] && 'p' == buffer[i+5] && 'h' == buffer[i+6] && 'p' == buffer[i+7]) {
 matched = true;
pattern_id = 1345 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'L' == buffer[i+1] && 'e' == buffer[i+2] && 't' == buffer[i+3] && 's' == buffer[i+4] && 'G' == buffer[i+5] && 'o' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10] && '?' == buffer[i+11] && 'A' == buffer[i+12] && '=' == buffer[i+13]) {
 matched = true;
pattern_id = 1346 ;
}
}
for(int i=0; i<buffer_size; i++){
if('i' == buffer[i] && 'S' == buffer[i+1] && 'p' == buffer[i+2] && 'y' == buffer[i+3] && 'K' == buffer[i+4] && 'e' == buffer[i+5] && 'l' == buffer[i+6] && 'o' == buffer[i+7] && 'g' == buffer[i+8] && 'g' == buffer[i+9] && 'e' == buffer[i+10] && 'r' == buffer[i+11]) {
 matched = true;
pattern_id = 1347 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'e' == buffer[i+2] && 's' == buffer[i+3] && 's' == buffer[i+4] && 'a' == buffer[i+5] && 'g' == buffer[i+6] && 'e' == buffer[i+7] && '.' == buffer[i+8] && 'p' == buffer[i+9] && 'h' == buffer[i+10] && 'p' == buffer[i+11]) {
 matched = true;
pattern_id = 1348 ;
}
}
for(int i=0; i<buffer_size; i++){
if('f' == buffer[i] && 'i' == buffer[i+1] && 'l' == buffer[i+2] && 'e' == buffer[i+3] && '_' == buffer[i+4] && 'm' == buffer[i+5] && 'a' == buffer[i+6] && 'n' == buffer[i+7] && 'a' == buffer[i+8] && 'g' == buffer[i+9] && 'e' == buffer[i+10] && 'r' == buffer[i+11] && '_' == buffer[i+12]) {
 matched = true;
pattern_id = 1349 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'U' == buffer[i+1] && 'p' == buffer[i+2] && 'g' == buffer[i+3] && 'S' == buffer[i+4] && 'v' == buffer[i+5] && 'r' == buffer[i+6] && '/' == buffer[i+7]) {
 matched = true;
pattern_id = 1350 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '1' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '1' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1351 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '0' == buffer[i+1] && '1' == buffer[i+2] && ' ' == buffer[i+3] && '0' == buffer[i+4] && '2' == buffer[i+5] && ' ' == buffer[i+6] && '0' == buffer[i+7] && '0' == buffer[i+8] && '|' == buffer[i+9]) {
 matched = true;
pattern_id = 1352 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'd' == buffer[i+2] && 'm' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'p' == buffer[i+7] && 'h' == buffer[i+8] && 'p' == buffer[i+9] && '?' == buffer[i+10] && 'f' == buffer[i+11] && '=' == buffer[i+12]) {
 matched = true;
pattern_id = 1353 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'h' == buffer[i+2] && 'e' == buffer[i+3] && 'c' == buffer[i+4] && 'k' == buffer[i+5] && 'u' == buffer[i+6] && 'p' == buffer[i+7] && 'd' == buffer[i+8] && 'a' == buffer[i+9] && 't' == buffer[i+10] && 'e' == buffer[i+11]) {
 matched = true;
pattern_id = 1354 ;
}
}
for(int i=0; i<buffer_size; i++){
if('t' == buffer[i] && 'i' == buffer[i+1] && 'm' == buffer[i+2] && 'e' == buffer[i+3] && '|' == buffer[i+4] && '3' == buffer[i+5] && 'A' == buffer[i+6] && ' ' == buffer[i+7] && '2' == buffer[i+8] && '0' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1355 ;
}
}
for(int i=0; i<buffer_size; i++){
if('G' == buffer[i] && 'Z' == buffer[i+1] && 'I' == buffer[i+2] && 'P' == buffer[i+3] && 'O' == buffer[i+4] && 'K' == buffer[i+5] && '|' == buffer[i+6] && '3' == buffer[i+7] && 'A' == buffer[i+8] && ' ' == buffer[i+9] && '2' == buffer[i+10] && '0' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1356 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'g' == buffer[i+1] && 'a' == buffer[i+2] && 't' == buffer[i+3] && 'e' == buffer[i+4] && '.' == buffer[i+5] && 'p' == buffer[i+6] && 'h' == buffer[i+7] && 'p' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 1357 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'j' == buffer[i+4] && 's' == buffer[i+5] && 'o' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8]) {
 matched = true;
pattern_id = 1358 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'F' == buffer[i+1] && 'E' == buffer[i+2] && '|' == buffer[i+3] && 'S' == buffer[i+4] && 'M' == buffer[i+5] && 'B' == buffer[i+6] && '|' == buffer[i+7] && '4' == buffer[i+8] && '0' == buffer[i+9] && ' ' == buffer[i+10] && '0' == buffer[i+11] && '0' == buffer[i+12] && '|' == buffer[i+13]) {
 matched = true;
pattern_id = 1359 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'S' == buffer[i+1] && 'e' == buffer[i+2] && 'r' == buffer[i+3] && 'v' == buffer[i+4] && 'e' == buffer[i+5] && 'r' == buffer[i+6] && 'm' == buffer[i+7] && 'a' == buffer[i+8] && 'c' == buffer[i+9] && '.' == buffer[i+10] && 'p' == buffer[i+11] && 'h' == buffer[i+12] && 'p' == buffer[i+13]) {
 matched = true;
pattern_id = 1360 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'r' == buffer[i+2] && 'o' == buffer[i+3] && 'o' == buffer[i+4] && 't' == buffer[i+5] && '/' == buffer[i+6] && 'v' == buffer[i+7] && '3' == buffer[i+8]) {
 matched = true;
pattern_id = 1361 ;
}
}
for(int i=0; i<buffer_size; i++){
if('c' == buffer[i] && 'o' == buffer[i+1] && 'm' == buffer[i+2] && 'm' == buffer[i+3] && 'a' == buffer[i+4] && 'n' == buffer[i+5] && 'd' == buffer[i+6] && 'I' == buffer[i+7] && 'd' == buffer[i+8] && '=' == buffer[i+9]) {
 matched = true;
pattern_id = 1362 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && '7' == buffer[i+1] && 'A' == buffer[i+2] && ' ' == buffer[i+3] && '8' == buffer[i+4] && 'D' == buffer[i+5] && ' ' == buffer[i+6] && '9' == buffer[i+7] && 'B' == buffer[i+8] && ' ' == buffer[i+9] && 'D' == buffer[i+10] && 'C' == buffer[i+11] && '|' == buffer[i+12]) {
 matched = true;
pattern_id = 1363 ;
}
}
for(int i=0; i<buffer_size; i++){
if('|' == buffer[i] && 'F' == buffer[i+1] && 'F' == buffer[i+2] && '|' == buffer[i+3] && 'S' == buffer[i+4] && 'M' == buffer[i+5] && 'B' == buffer[i+6] && '|' == buffer[i+7] && 'A' == buffer[i+8] && '0' == buffer[i+9] && '|' == buffer[i+10]) {
 matched = true;
pattern_id = 1364 ;
}
}
for(int i=0; i<buffer_size; i++){
if('F' == buffer[i] && 'r' == buffer[i+1] && 'a' == buffer[i+2] && 'g' == buffer[i+3]) {
 matched = true;
pattern_id = 1365 ;
}
}
for(int i=0; i<buffer_size; i++){
if('8' == buffer[i] && '5' == buffer[i+1] && '6' == buffer[i+2]) {
 matched = true;
pattern_id = 1366 ;
}
}
for(int i=0; i<buffer_size; i++){
if('E' == buffer[i] && 'r' == buffer[i+1] && 'r' == buffer[i+2] && 'o' == buffer[i+3] && 'r' == buffer[i+4]) {
 matched = true;
pattern_id = 1367 ;
}
}
for(int i=0; i<buffer_size; i++){
if('C' == buffer[i] && 'o' == buffer[i+1] && 'n' == buffer[i+2] && 'n' == buffer[i+3] && 'e' == buffer[i+4] && 'c' == buffer[i+5] && 't' == buffer[i+6] && '.' == buffer[i+7] && 'p' == buffer[i+8] && 'h' == buffer[i+9] && 'p' == buffer[i+10] && '?' == buffer[i+11] && 'i' == buffer[i+12] && 'd' == buffer[i+13] && '=' == buffer[i+14]) {
 matched = true;
pattern_id = 1368 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'J' == buffer[i+1] && 'P' == buffer[i+2] && '-' == buffer[i+3] && 'j' == buffer[i+4] && 'a' == buffer[i+5] && '/' == buffer[i+6] && 'j' == buffer[i+7] && 's' == buffer[i+8] && '?' == buffer[i+9]) {
 matched = true;
pattern_id = 1369 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'm' == buffer[i+1] && 'm' == buffer[i+2] && '.' == buffer[i+3] && 'j' == buffer[i+4] && 'p' == buffer[i+5] && 'g' == buffer[i+6]) {
 matched = true;
pattern_id = 1370 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'l' == buffer[i+1] && 'o' == buffer[i+2] && 'g' == buffer[i+3] && 'o' == buffer[i+4] && 'n' == buffer[i+5] && '.' == buffer[i+6] && 'a' == buffer[i+7] && 's' == buffer[i+8] && 'p' == buffer[i+9] && 'x' == buffer[i+10] && '?' == buffer[i+11] && 'I' == buffer[i+12] && 'd' == buffer[i+13] && '=' == buffer[i+14]) {
 matched = true;
pattern_id = 1371 ;
}
}
for(int i=0; i<buffer_size; i++){
if('W' == buffer[i] && 'a' == buffer[i+1] && 's' == buffer[i+2] && 'h' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'g' == buffer[i+6] && 'T' == buffer[i+7] && 'o' == buffer[i+8] && 'n' == buffer[i+9]) {
 matched = true;
pattern_id = 1372 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && '.' == buffer[i+1] && 's' == buffer[i+2] && 'v' == buffer[i+3] && 'n' == buffer[i+4] && '/' == buffer[i+5] && 'e' == buffer[i+6] && 'n' == buffer[i+7] && 't' == buffer[i+8] && 'r' == buffer[i+9] && 'i' == buffer[i+10] && 'e' == buffer[i+11] && 's' == buffer[i+12]) {
 matched = true;
pattern_id = 1373 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8] && 's' == buffer[i+9] && 'h' == buffer[i+10]) {
 matched = true;
pattern_id = 1374 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'c' == buffer[i+3] && '/' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && 'e' == buffer[i+7] && 't' == buffer[i+8] && 'd' == buffer[i+9] && '.' == buffer[i+10] && 'c' == buffer[i+11] && 'o' == buffer[i+12] && 'n' == buffer[i+13] && 'f' == buffer[i+14]) {
 matched = true;
pattern_id = 1375 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'c' == buffer[i+3] && '/' == buffer[i+4] && 'm' == buffer[i+5] && 'o' == buffer[i+6] && 't' == buffer[i+7] && 'd' == buffer[i+8]) {
 matched = true;
pattern_id = 1376 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'e' == buffer[i+1] && 't' == buffer[i+2] && 'c' == buffer[i+3] && '/' == buffer[i+4] && 's' == buffer[i+5] && 'h' == buffer[i+6] && 'a' == buffer[i+7] && 'd' == buffer[i+8] && 'o' == buffer[i+9] && 'w' == buffer[i+10]) {
 matched = true;
pattern_id = 1377 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 's' == buffer[i+2] && '_' == buffer[i+3] && 'f' == buffer[i+4] && 't' == buffer[i+5] && 'p' == buffer[i+6] && '.' == buffer[i+7] && 'l' == buffer[i+8] && 'o' == buffer[i+9] && 'g' == buffer[i+10]) {
 matched = true;
pattern_id = 1378 ;
}
}
for(int i=0; i<buffer_size; i++){
if('S' == buffer[i] && 'I' == buffer[i+1] && 'T' == buffer[i+2] && 'E' == buffer[i+3] && ' ' == buffer[i+4] && 'S' == buffer[i+5] && 'E' == buffer[i+6] && 'T' == buffer[i+7] && 'C' == buffer[i+8]) {
 matched = true;
pattern_id = 1379 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'c' == buffer[i+1] && 'g' == buffer[i+2] && 'i' == buffer[i+3] && '-' == buffer[i+4] && 'b' == buffer[i+5] && 'i' == buffer[i+6] && 'n' == buffer[i+7] && '/' == buffer[i+8] && 'c' == buffer[i+9] && 'g' == buffer[i+10] && 'i' == buffer[i+11] && 'c' == buffer[i+12] && 't' == buffer[i+13] && 'l' == buffer[i+14]) {
 matched = true;
pattern_id = 1380 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'a' == buffer[i+1] && 'p' == buffer[i+2] && 'i' == buffer[i+3] && '/' == buffer[i+4] && 's' == buffer[i+5] && 't' == buffer[i+6] && 'a' == buffer[i+7] && 't' == buffer[i+8] && 'u' == buffer[i+9] && 's' == buffer[i+10]) {
 matched = true;
pattern_id = 1381 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'i' == buffer[i+1] && 'd' == buffer[i+2] && '=' == buffer[i+3]) {
 matched = true;
pattern_id = 1382 ;
}
}
for(int i=0; i<buffer_size; i++){
if('d' == buffer[i] && 'o' == buffer[i+1] && 'w' == buffer[i+2] && 'n' == buffer[i+3] && 'l' == buffer[i+4] && 'o' == buffer[i+5] && 'a' == buffer[i+6] && 'd' == buffer[i+7] && '.' == buffer[i+8] && 'c' == buffer[i+9] && 'o' == buffer[i+10] && 'n' == buffer[i+11] && 'f' == buffer[i+12]) {
 matched = true;
pattern_id = 1383 ;
}
}
for(int i=0; i<buffer_size; i++){
if('w' == buffer[i] && 'a' == buffer[i+1] && 'i' == buffer[i+2] && 't' == buffer[i+3] && 'P' == buffer[i+4] && 'i' == buffer[i+5] && 'n' == buffer[i+6] && 'g' == buffer[i+7] && 'q' == buffer[i+8] && 'r' == buffer[i+9] && 'y' == buffer[i+10]) {
 matched = true;
pattern_id = 1384 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'a' == buffer[i+4] && 'd' == buffer[i+5] && 'm' == buffer[i+6] && 'i' == buffer[i+7] && 'n' == buffer[i+8]) {
 matched = true;
pattern_id = 1385 ;
}
}
for(int i=0; i<buffer_size; i++){
if('/' == buffer[i] && 'w' == buffer[i+1] && 'p' == buffer[i+2] && '-' == buffer[i+3] && 'i' == buffer[i+4] && 'n' == buffer[i+5] && 'c' == buffer[i+6] && 'l' == buffer[i+7] && 'u' == buffer[i+8] && 'd' == buffer[i+9] && 'e' == buffer[i+10] && 's' == buffer[i+11]) {
 matched = true;
pattern_id = 1386 ;
}
}
for(int i=0; i<buffer_size; i++){
if('%' == buffer[i] && 'D' == buffer[i+1] && '0' == buffer[i+2] && '%' == buffer[i+3] && '8' == buffer[i+4] && 'B' == buffer[i+5] && 'T' == buffer[i+6] && 'l' == buffer[i+7] && '%' == buffer[i+8] && 'D' == buffer[i+9] && 'C' == buffer[i+10]) {
 matched = true;
pattern_id = 1387 ;
}
}

}