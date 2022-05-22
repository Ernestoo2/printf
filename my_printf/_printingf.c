#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, k = 0, num = 0;
	int n_displayed = 0;
	char *str = NULL;
	int (*func)(va_list);
	int count;
	
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				n_displayed += func(args);
				n_displayed++;
				i++;
			}
		}
		i++;
	}

	va_end(args);

	return (n_displayed);
}
