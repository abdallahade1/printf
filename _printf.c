#include "main.h"

/**
 * _printf - print output according to a format
 * @format: character string
 * Return: num of printed characters
 */

int _printf(const char *format, ...)
{
	int printed_char = 0, j = 0, i, len;
	va_list args_lst;
	sep specifiers[] = {
		{'c', c_specifier},
		{'s', s_specifier},
		{'%', percent_specifier}
	};

	if (format == NULL)
		return (-1);
	va_start(args_lst, format);
	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			write(1, &format[j], 1);
			printed_char++;
		}
		else
		{
			j++;
			if (format[j] == '\0')
				break;
			i = 0;
			while (specifiers[i].specifier)
			{
				if (format[j] == specifiers[i].specifier)
				{
					len = specifiers[i].f(args_lst);
					printed_char += len;
				}
				i++;
			}
		}
		j++;
	}
	va_end(args_lst);
	return (printed_char);
}
