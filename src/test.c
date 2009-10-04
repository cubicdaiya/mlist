#include <stdio.h>
#include <string.h>
#include "mlist.h"

int main (int argc, char *argv[]) {
  
  mlist_t *list;
  int *n;
  char *c;
  char *s = NULL;
  const char *name = "cubicdaiya";
  list = mlist_alloc();
  n    = mlist_data_alloc(list, sizeof(int));
  list = mlist_extend(list);
  c    = mlist_data_alloc(list, sizeof(char));
  list = mlist_extend(list);
  s = mlist_data_alloc(list, strlen(name) + 1);
  list = mlist_extend(list);
  *n = 5;
  *c = 'a';
  strncpy(s, name, strlen(name) + 1);
  printf("n = %d\n", *n);
  printf("c = %c\n", *c);
  printf("name = %s\n", s);
  mlist_free(list);
  
  return 0;
}
