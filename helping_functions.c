#include "main.h"

/**
 * is_printable - chech if the char is printable or not
 * @c: indicated tha char
 * Return: 1 if it is true, 0 if it is not
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/**
 * append_hexa_code - append ascii in hexadecimal code in the buffer
 * @buffer: Array of chars.
 * @i: index at which appending start
 * @ascii_code: ascii code
 * Return: Always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - checks if the char is a digit
 * @c: the char
 * Return: 1 if c is digit, 0 if not.
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * convert_size_number - casts a number to specefied size
 * @num: number to be casted
 * @size: the integer value representing the type to be casted
 * Return: casted value of num
 *
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);
	return ((int)num);
}

/**
 * convert_size_unsgnd - casts a number to specefic size
 * @num: nuber to be casted
 * @size: the integer that indicates the type of the casted.
 * Return: Casted value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
