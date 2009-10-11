#include <stdio.h>
#include <string.h>
#include "mlist.h"

int main (int argc, char *argv[]) {
  
  mlist_t *list;
  int *n;
  char *c;
  char *s1 = NULL;
  char *s2 = NULL;
  const char *name1 = "bokko";
  const char *name2 = "cubicdaiya";
  list = mlist_create();
  n    = mlist_palloc(&list, sizeof(int));
  c    = mlist_palloc(&list, sizeof(char));
  s1    = mlist_palloc(&list, strlen(name1) + 1);
  s2    = mlist_palloc(&list, strlen(name2) + 1);
  *n = 5;
  *c = 'a';
  strncpy(s1, name1, strlen(name1) + 1);
  strncpy(s2, name2, strlen(name2) + 1);
  printf("n = %d\n", *n);
  printf("c = %c\n", *c);
  printf("name1 = %s\n", s1);
  printf("name2 = %s\n", s2);
  mlist_destroy(list);
  
  return 0;
}
