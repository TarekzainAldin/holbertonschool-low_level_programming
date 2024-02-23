#include <stdio.h>
/**
 *main - thise f number
 *
 *the varaible numf& and numF
 */
int main(void)
{
int count;
unsigned long numf1 = 0, numf2 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = numf1 + numf2;
printf("%lu", sum);
numf1 = numf2;
numf2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
