#include "main.h"
/**
 *   char *ptr = reverse(STR);
 *
 * Reverse the characters of STR[] in place, and return STR.
 */
void rev_string(char *s)
{
char ch, *p, *q;
if (!s || *s == '\0')
return;
for (q = s; *q != '\0'; ++q)
;
--q;
for (p = s; p < q; ++p, --q)
ch = *p;
*p = *q;
*q = ch;
}
