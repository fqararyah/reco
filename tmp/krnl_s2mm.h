#include "ap_axi_sdata.h"
#include "hls_stream.h"

#define DWIDTH 512
#define TDWIDTH 16

#define BYTES_PER_BEAT (DWIDTH / 8)

typedef ap_axiu<DWIDTH, 1, 1, TDWIDTH> pkt;

typedef ap_uint<1> boolean;

#define PATTERN_MAX_LEN 364
#define N_BYTES 1
//Buffer size should be pattern_max_len + chunk_len, however, patern_max_len might not be divisable by patern_max_len
//this assumes that chunk_len bytes are processed in parallel
// @Mateo Shouldn't it be pattern_max_len + chunk_len - 1?
#define BUFFER_SIZE (N_BYTES + PATTERN_MAX_LEN)

void krnl_s2mm(ap_uint<DWIDTH> *out,     // Write only memory mapped
               hls::stream<pkt> &n2k,    // Internal Stream
               unsigned int  size,    // Size in bytes
			   // Added for project
			   // @Mateo Shouldn't this be the pointers instead?
			   bool 			&matched,
			   int 				*pattern_id,
			   int				&count
               );
