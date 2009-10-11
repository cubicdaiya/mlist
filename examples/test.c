#include <stdio.h>
#include <string.h>
#include "mlist.h"

int main (int argc, char *argv[]) {
  
  mlist_t *list;
  int *n;
  char *c;
  char *s = NULL;
  const char *name = "cubicdaiya";
  list = mlist_create();
  n    = mlist_palloc(&list, sizeof(int));
  c    = mlist_palloc(&list, sizeof(char));
  s    = mlist_palloc(&list, strlen(name) + 1);
  *n = 5;
  *c = 'a';
  strncpy(s, name, strlen(name) + 1);
  printf("n = %d\n", *n);
  printf("c = %c\n", *c);
  printf("name = %s\n", s);
  mlist_destroy(list);
  
  return 0;
}
