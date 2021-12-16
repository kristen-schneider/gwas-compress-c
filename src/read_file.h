#ifndef __READ_FILE_H__
#define __READ_FILE_H__


/** @read_file.h
 *  @brief reads input file 
 *  
 *  @param file_name An input GWAS file
 *  @return input file as structure
 */


struct input_file *input_file_init(char *file_name);

struct input_file
{
    char *file_name;
    enum {BED,TSV} type;
};


#endif
