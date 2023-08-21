#include "main.h"

/**
 * percent_specifier - print %
 * @args_lst: optional args list
 * Return: int
 */
int percent_specifier(va_list args_lst)
{
	int no_chars = 0;
	char per = '%';
	(void)args_lst;

	write(1, &per, 1);
	no_chars++;
	return (no_chars);
}

/**
 * c_specifier - char
 * @args_lst: optional args list
 * Return: int
 */
int c_specifier(va_list args_lst)
{
	int no_chars = 0;
	char c = va_arg(args_lst, int);

	write(1, &c, 1);
	no_chars++;
	return (no_chars);
}

/**
 * s_specifier - string
 * @args_lst: optional args list
 * Return:int
 */
int s_specifier(va_list args_lst)
{
	int no_chars = 0;
	char *str = va_arg(args_lst, char *);
	int len = _strlen(str);

	write(1, str, len);
	no_chars += len;
	return (no_chars);
}
