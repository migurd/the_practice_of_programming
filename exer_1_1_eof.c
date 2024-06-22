/*
BOOK VERSION:
#define TRUE 0
#define FALSE 1

if ((ch = getchar() == EOF)
  not_eof = FALSE
*/

#include <stdio.h>
#include <stdint.h>

#define TRUE 1
#define FALSE 0

int main() {
  char ch;
  uint8_t is_eof = FALSE;

  if ((ch = getchar()) == '\n') // once assignation is done to ch, resultant value is compared with EOF
    is_eof = TRUE;

  if (is_eof) printf("EOF inputed!!!!\n");
  else printf("You inputed `%c`, not EOF!\n", ch);

  return 0;
}
