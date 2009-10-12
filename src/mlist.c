
/* written by C99 style */

#include "mlist.h"

mlist_t *mlist_create () {
  mlist_t *p;
  MLIST_MALLOC(p, sizeof(mlist_t));
  p->data = NULL;
  p->next = NULL;
  p->begin = p;
  return p;
}

mlist_t *mlist_extend(mlist_t *p) {
  p->next = mlist_create();
  p->next->begin = p->begin;
  return p->next;
}

mlist_data_t *mlist_palloc(mlist_t **p, size_t size) {
  mlist_t *lp = *p;
  MLIST_MALLOC(lp->data, size);
  *p = mlist_extend(*p);
  return lp->data;
}

void mlist_destroy (mlist_t *list) {
  for (mlist_t *p=list->begin;p!=NULL;) {
    mlist_t *current = p;
    mlist_t *next    = p->next;
    MLIST_FREE(current->data);
    MLIST_FREE(current);
    p = next;
  }
}
