#include "main.h"
/**
 *-strcmp Compare tow strings
 *@s1: string
 *@s2 : string
 *return not positive number if s1 < S2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
