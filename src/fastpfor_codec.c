#include "fastpfor_codec.h"
#include <htslib/vcf.h>
//#include "/home/krsc0813/projects/gwas-compress-c/lib/FastPFor/headers/fastpfor.h"

//#include "FastPFor/headers/codecfactory.h"
//#include "FastPFor/headers/deltautil.h"

int main() {
    using namespace FastPForLib;
    
    // Select a CODEC
    IntegerCODEC &codec = *CODECFactory::getFromName("simdfastpfor256");
}

int compress_with_fastpfor(){   
    return 0;
}

