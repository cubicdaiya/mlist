#include <stdio.h>
#include <string.h>
#include "mlist.h"

int main (int argc, char *argv[]) {
  
  mlist_t *list;
  int *n;
  char *c;
  char *name;
  list = mlist_alloc();
  n    = mlist_data_alloc(list, sizeof(int));
  list = mlist_extend(list);
  c    = mlist_data_alloc(list, sizeof(char));
  list = mlist_extend(list);
  name = mlist_data_alloc(list, strlen("cubicdaiya") + 1);
  list = mlist_extend(list);
  *n = 5;
  *c = 'a';
  strcpy(name, "cubicdaiya");
  printf("n = %d\n", *n);
  printf("c = %c\n", *c);
  printf("name = %s\n", name);
  mlist_free(list);
  
  return 0;
}
