#include "printf.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int iter_1, iter_0;
	unsigned int num_char;
	va_list arg;
	va_start(arg, format);

	for (iter_0 = 0; format[iter_0] != '\0'; iter_0++)
	{
		if (format[iter_0] != '%')
		{
			_putchar(format[iter_0]);
			continue;
		}
		else
		{
			iter_0++;
			for (iter_1 = 0; formatters_functions[iter_1].format != '\0'; iter_1++)
			{
				formatters[iter_1].func(arg);
				num_char = formatters[iter_1].func(arg); 
				break;
			}
		}

	}
	va_end(arg);
	return(num_char);
}

