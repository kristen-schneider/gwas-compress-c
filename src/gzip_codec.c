#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//#include <zlib.h>
#include "/home/krsc0813/projects/gwas-compress-c/lib/zlib/zlib.h"
#include "gzip_codec.h"

// CHUNK is the size of the memory chunk used by the zlib routines.
#define CHUNK 0x4000
#define windowBits 15
#define ENABLE_ZLIB_GZIP 32

#define CALL_ZLIB(x) {  \
    int status;     \
    status = x;     \
    if (status < 0) \
    {               \
            fprintf(stderr, "%s:%d: %s returned a bad status of %d.\n", __FILE__, __LINE__, #x, status);  \
            exit(EXIT_FAILURE);\
    }              \
 }                 \




int compressWithGzip()
{
    const char * file_name = "test.gz";
    FILE * file;
    z_stream strm = {0};
    unsigned char in[CHUNK];
    unsigned char out[CHUNK];

    strm.zalloc = Z_NULL;
    strm.zfree = Z_NULL;
    strm.opaque = Z_NULL;
    strm.next_in = in;
    strm.avail_in = 0;
    CALL_ZLIB (inflateInit2 (& strm, windowBits | ENABLE_ZLIB_GZIP));

    /* Open the file. */

    file = fopen (file_name, "rb");

    //while (1)
    //{
    //    int bytes_read;

    //    bytes_read = fread (in, sizeof (char), sizeof (in), file);

    //    strm.avail_in = bytes_read;
    //    do
    //    {
    //        unsigned have;
    //        strm.avail_out = CHUNK;
    //        strm.next_out = out;
    //        CALL_ZLIB (inflate (& strm, Z_NO_FLUSH));
    //        have = CHUNK - strm.avail_out;
    //        fwrite (out, sizeof (unsigned char), have, stdout);
    //    }
    //    while (strm.avail_out == 0);
    //    if (feof (file))
    //    {
    //        inflateEnd (& strm);
    //        break;
    //    }
    //}

    return 0;
}

