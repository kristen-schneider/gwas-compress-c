#include <err.h>
#include <sysexits.h>
#include <stdlib.h>
#include <stdio.h>
#include "read_file.h"

/** @file read_file.c Read in file with proper checks
 *  @author Kristen Schneider
 */

void file_data_free(void **v)
{
    struct file_data **fd = (struct file_data **)v;
    free((*fd)->file_name);
    free(*fd);
    *fd = NULL;
}

