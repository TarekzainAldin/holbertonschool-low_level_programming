#include <stdio.h>
/**
* main - Nature made the natural numbers sum of all multiples
*Find the sum of all the multiples
* Return:Always (0)
*/
int main(void)
{
int i, z = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d\n", z);
return (0);
}
