
#include "mlist.h"

mlist_list_t *mlist_list_alloc () {
  mlist_list_t *p;
  if ((p = (mlist_list_t *)malloc(sizeof(mlist_list_t))) == NULL) {
    return NULL;
  }
  p->data = NULL;
  p->next = NULL;
  p->begin = p;
  return p;
}

mlist_list_t *mlist_list_extend(mlist_list_t *p) {
  p->next = mlist_list_alloc();
  p->next->begin = p->begin;
  return p->next;
}

mlist_data_t *mlist_data_alloc(mlist_list_t *p, size_t size) {
  if ((p->data = (mlist_data_t *)malloc(size)) == NULL) {
    return NULL;
  }
  return p->data;
}

void mlist_list_free (mlist_list_t *list) {
  for (mlist_list_t *p=list->begin;p!=NULL;) {
    mlist_list_t *current = p;
    mlist_list_t *next_p = p->next;
    free(current->data);
    free(current);
    p = next_p;
  }
}
