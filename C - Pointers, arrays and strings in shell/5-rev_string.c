#include "main.h"

/**
* rev_string -  string reverse
*
* @s: string pointer to be used
*
* Return: void
**/

void rev_string(char *s)
{
	int len = 0, rev = 0;
	char temp;

	while (s[rev++])
		len++;

	for (rev = len - 1; rev >= len / 2; rev--)
	{
		temp = s[rev];
		s[rev] = s[len - rev - 1];
		s[len - rev - 1] = temp;
	}
}
