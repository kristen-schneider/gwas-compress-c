#include <err.h>
#include <sysexits.h>
#include <stdlib.h>
#include <stdio.h>
#include "read_file.h"

/** @file read_file.c Read in file with proper checks
 *  @author Kristen Schneider
 */

struct input_file *input_file_init(char *file_name)
{
    struct input_file *i = (struct input_file *)
            malloc(sizeof(struct input_file));
    if (i == NULL)
        err(1, "malloc error in input_file_init().");

    i->file_name = strdup(file_name);

    // .bed.gz
        if ( (strlen(i->file_name) > 7) && 
            strcmp(".bed.gz", file_name + strlen(i->file_name) - 7) == 0)
        {
            i->type = BED;
        }
}
    
