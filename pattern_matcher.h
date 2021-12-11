#include "ap_int.h"


#ifndef DWIDTH
#define DWIDTH 512
#endif
typedef ap_uint<1> boolean;

const char a_safe_prefix_postfix = (char)255;
const int pattern_max_len = 31;
const int parallelism = 2;
const int buffer_size = parallelism + pattern_max_len - 1;

void match(ap_uint<16> &pattern_id, char buffer[buffer_size]);
void shift_and_fill(ap_uint<DWIDTH> chunk, char buffer[buffer_size], int start_indx);
