#include "main.h"

/**
 * flip_bits - counts no of bits to be changed to get from one no to another
 * @n: first no
 * @m: second no
 *
 * Return: no of bites to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}

return (count);
}


