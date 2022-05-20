#include "main.h"
#include <stdarg.h>
/**
 *
 */

int _print_int(va_list args)
{
	int i;
	int n = va_arg(args, int);
	int count;

	for (i = 0; i < count; i++)
	{
		_putchar(va_arg(args, int));
	}

	return  (0);
}
