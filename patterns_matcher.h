#include "ap_int.h"


typedef ap_uint<1> boolean;
const int pattern_max_len = 364;
const int chunk_len = 1;
const int buffer_size = chunk_len + pattern_max_len;

void match(bool &matched, int &pattern_id, char buffer[buffer_size]);
void shift_and_fill(ap_uint<DWIDTH> chunck, char buffer[buffer_size], int start_indx);
void dummy(bool &matched, int &pattern_id, char buffer[buffer_size]);
