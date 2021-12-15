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
    // pointer to input file
    struct input_file *i = (struct input_file *)
            malloc(sizeof(struct input_file));
    if (i == NULL)
        err(1, "malloc error in input_file_init().");

    i->file_name = strdup(file_name);
    // checking input file naming to see if extension is .tsv.gz
    if ( (strlen(i->file_name) > 7) &&
            strcmp(".tsv.gz", file_name + strlen(i->file_name) - 7) == 0) {
        i->type = TSV;

    else {
        fprintf(stderr, "File type not supported '%s'.\n", i->file_name);
        free(i->file_name);
        free(i);
        return NULL;
    }

    // if input file is of type tsv, initialize allocated memory to zero
    if (i->type == TSV) {
        i->kstr = (kstring_t*)calloc(1, sizeof(kstring_t));
        if (i->kstr == NULL) {
            fprintf(stderr, "calloc error in input_file_init().");
            return NULL;
        }

        // error if file cannot be opened
        if ((i->tsv_fp = bgzf_open(file_name, "r")) == 0) {
            fprintf(stderr ,"Could not open file '%s'\n", file_name);
            return NULL;
        }

        i->last_offset = 0;
}   
