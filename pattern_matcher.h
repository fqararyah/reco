const int pattern_max_len = 20;
const int chunck_len = 64;

void pattern_matcher(ap_int<1> positions[256][chunck_len + pattern_max_len], char chunk[chunck_len + pattern_max_len - 1]);