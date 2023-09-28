#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: pointer to the number to be chnaged
 * @index: ndex of bit to clear
 *
 * Return: succes 1 or failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}


