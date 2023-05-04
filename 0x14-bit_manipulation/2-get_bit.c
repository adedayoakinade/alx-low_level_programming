#include "main.h"

#define CHAR_SIZE 8 /*size of char*/
#define INT_SIZE (sizeof(unsigned long int) * CHAR_SIZE)

/**
 * print_bin - prints binary rep of @n
 *
 * @number: decimal value
 *
 * Return: nothing
*/
void print_bin(unsigned long int number)
{
	if (number >> 1)
		print_bin(number >> 1);

	putc((number & 1) ? '1' : '0', stdout);
}


/**
 * get_bit - gets a bit at a given index
 *
 * @n: decimal value
 * @index: integer value of bit position
 *        to get from @n
 *
 * Return: the value of the bit or -1 if an
 *          error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_SIZE)
		return (-1);

	bit = ((n >> index) & 1); /*shift n right by index and with 1 to find bit*/

	return (bit);
}
