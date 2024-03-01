#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String of variable pointer
 * Return: String that is encoded
 */
char *leet(char *s)
{
  char *ptr = s;
	unsigned int i;
	char letter[] = {'A', 'E','O','T','L'};
	int val[] = {4,3,0,7,1};
	while(*s)
	  for(i = 0; i<sizeof(letter)/sizeof(char); i++)
	{
	  if(*s == letter[i] || *s == letter[i] +32)
	    {
	      *s = 48 + val[i];
	    }
	}
	s++;

	return (ptr);
}
