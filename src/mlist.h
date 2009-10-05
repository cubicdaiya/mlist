
/* written by C99 style */

#ifndef MLIST_H
#define MLIST_H

#include <stdlib.h>
#include <stdbool.h>

#define MLIST_FREE(p) do { free(p); (p) = NULL; } while(0);

typedef void mlist_data_t;

typedef struct mlist_t {
  mlist_data_t *data;
  struct mlist_t *next;
  struct mlist_t *begin;
} mlist_t;

mlist_t *mlist_create();
mlist_data_t *mlist_palloc(mlist_t *p, size_t size);
mlist_t *mlist_extend(mlist_t *p);
void mlist_destroy(mlist_t *p);


#endif


