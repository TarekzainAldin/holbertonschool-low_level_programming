#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; dest[i] != '\0'; i++)
for (i = 0 ; src[i] != '\0' && i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
