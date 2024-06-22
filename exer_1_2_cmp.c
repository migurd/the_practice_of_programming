/*
Exercise 1-2. Improve this funcion:
int smaller(char *s, char *t) {
  if (strcmp(s, t) < 1)
    return 1;
  else  
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int is_smaller(char *s, char *t) {
  if (strcmp(s, t) < 0) // notice there are going to be cases where both values are equal then s is going to be smaller than t
    return TRUE;
  return FALSE;
}

int main() {
  char s = '0', t = '0';
  if (is_smaller(&s, &t)) printf("%c is smaller than %c\n", s, t);
  else printf("%c is smaller than %c\n", t, s);
  return 0;
}
