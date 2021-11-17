#ifndef __READ_FILE_H__
#define __READ_FILE_H__

#include "htslib/hts.h"

/** @read_file.h
 *  @brief reads input file 
 *  
 *  @param file_name An input GWAS file
 *  @return input file as structure
 */

struct file_data
{
    char *file_name;
    uint32_t num_intervals;
    double mean_interval_size;
};

void file_data_free(void **v);


#endif
