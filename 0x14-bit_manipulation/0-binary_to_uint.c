#include "main.h"

/**
 * _atoi - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
*/
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int
 *
 * @b: string that contains 0 and 1 characters
 *
 * Return: the number converted or 0
 *         if @b contains a character
 *         that is not 0 or 1 or when
 *         @b is null
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; 
	unsigned int baseVal = 1;
	unsigned int num = 0;

	/*if b is NULL return 0*/
	if (b == NULL)
		return (0);

	/*iterate through string*/
	for (int i = _strlen(b) - 1; i >= 0; i--)
	{
		num = _atoi(b[i]); /*convert char to number*/

		/*if number is not 0 or 1 return 0*/
		if (num != 0 && num != 1)
			return (0);

		result += num * baseVal;

		baseVal *= 2;
	}

	return (result);

}
