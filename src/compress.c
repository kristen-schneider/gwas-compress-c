#include "algx.h"
#include "gzip_codec.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // adding integers
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int r = alg_add(a, b);
     printf("%d+%d=%d\n", a, b, r);
    
    // gzip compression
    compressWithGzip();

    
}
