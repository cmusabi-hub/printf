#include "printf.h"
/**
 *
 */
int print_char(va_list args)
{

	unsigned int return_val = 0,  code = va_arg(args, int);
	_putchar(code);
	return_val++;
	break;
	return(return_val);
}

/**
 *
 */
int print_int(va_list args, char format)
{
	unsigned int return_val = 0, num = va_arg(args, int), iter;
	char *str;

	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}

	*str = convert(num, 10, format);
}

/**
 *
 */
int print_octal(va_list args)
{
}

/**
 *
 */
int print_string(va_list args)
{
}

/**
 */
int print_hex(va_list args)
{
}

