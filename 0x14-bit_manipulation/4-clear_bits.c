#include "main.h"

#define CHAR_SIZE 8 /*size of char*/
#define INT_SIZE (sizeof(unsigned long int) * CHAR_SIZE)

/**
 * print_bin - prints binary rep of @n
 *
 * @number: decimal value
 *
 * Return: null
*/
void print_bin(unsigned long int number)
{
	if (number >> 1)
		print_bin(number >> 1);

	putc((number & 1) ? '1' : '0', stdout);
}

/**
 * clear_bit - sets the value of a bit to 1 at a given
 *           index.
 *
 * @n: number
 * @index: index to set the value of bit to 1
 *
 * Return: 1 if it worked OR -1 if it failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_BITS)
		return (-1);

	mask = ~(mask << index); /*create mask based on index position*/

	*n = (*n & mask);

	return (1);
}
