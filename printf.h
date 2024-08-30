#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdarg.h>

int _printf(const char *format, ...);
int convert(unsigned int, int);
int print_char(va_list args);
int print_int(va_list args);
int print_octal(va_list args);
int print_string(va_list args);
int print_hex(va_list args);

typedef struct format_specifier {
	char specifier;
	int (*func)(va_list);
}formatters;

formatters  formatters_functions[] = {
	{'c', print_char},
	{'d', print_int},
	{'i', print_int}.
	{'o', print_octal},
	{'s', print_string},
	{'x', print_hex},
	{'X', print_hex},
	{'\0', NULL}
};

#endif /*_PRINTF_H_*/
