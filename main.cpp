#include "pattern_matcher.h"

void top_func(char chunk[chunk_len], bool matched, int pattern_id){
    char buffer[buffer_size];
    fill(chunk, buffer);
    shift(buffer);
    match(matched, pattern_id, buffer);
}