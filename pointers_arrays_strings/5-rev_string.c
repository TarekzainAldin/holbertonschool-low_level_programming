#include "main.h"
/**
 *   char *ptr = reverse(STR);
 *
 * Reverse the characters of STR[] in place, and return STR.
 */
char *reverse(char *s) 
{
  char ch, *p, *q;

  for (q = s; *q != '\0'; ++q)
    ;
  if (q > s)
    --q;
  

  for (p = s; p < q; ++p, --q) {
    ch = *p;
    *p = *q;
    *q = ch;
  }

  return s;
}
