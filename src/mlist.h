
#ifndef MLIST_H
#define MLIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef void mlist_data_t;

typedef struct mlist_list_t {
  mlist_data_t *data;
  struct mlist_list_t *next;
  struct mlist_list_t *begin;
} mlist_list_t;

mlist_list_t *mlist_list_alloc();
mlist_data_t *mlist_data_alloc(mlist_list_t *p, size_t size);
mlist_list_t *mlist_list_extend(mlist_list_t *p);
void mlist_list_free(mlist_list_t *p);


#endif


