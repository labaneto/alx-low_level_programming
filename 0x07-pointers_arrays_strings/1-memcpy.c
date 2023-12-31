#include "main.h"
/**
 * _memcpy - function that copies the memory area
 * @dest: memory storage
 * @src: memory where is copied
 * @n: number of byte
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}


