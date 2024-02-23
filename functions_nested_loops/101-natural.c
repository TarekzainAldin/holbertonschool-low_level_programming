#include <stdio.h>
/**
*main Nature made the natural numbers sum of all multiples of 3 or 5 up to 1024
*If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23
Find the sum of all the multiples of 3 or 5 below 1000
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
