#include "ap_int.h"


#ifndef TDWIDTH
#define TDWIDTH 16
#endif
typedef ap_uint<1> boolean;

const char a_safe_prefix_postfix = (char)255;
const int pattern_max_len = 7;
const int chunk_len = 2;
const int buffer_size = chunk_len + pattern_max_len;

void match(bool &matched, int *pattern_id, char buffer[buffer_size], int start_indx);
void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx);
void dummy(bool &matched, int *pattern_id, char buffer[buffer_size]);
