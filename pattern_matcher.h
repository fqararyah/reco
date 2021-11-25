#include "ap_int.h"


typedef ap_uint<1> boolean;

const int pattern_max_len = 364;
const int chunk_len = 1;
//Buffer size should be pattern_max_len + chunk_len, however, patern_max_len might not be divisable by patern_max_len
//this assumes that chunk_len bytes are processed in parallel
const int buffer_size = chunk_len + pattern_max_len;

void match(bool &matched, int &pattern_id, char buffer[buffer_size]);
void shift(char buffer[buffer_size]);
void fill(char chunk[chunk_len], char buffer[buffer_size]);
void dummy(bool &matched, int &pattern_id, char buffer[buffer_size]);