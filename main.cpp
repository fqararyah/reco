#include "pattern_matcher.h"

void top_func(char chunk[chunk_len], bool matched, int pattern_id){
    char buffer[buffer_size];
    shift(buffer);
    fill(chunk, buffer);
    match(matched, pattern_id, buffer);
}