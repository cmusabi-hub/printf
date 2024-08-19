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
} formatters;

formatters[] = {
	{'c', print_char},
	{'d', print_int},
	{'o', print_octal},
	{'s', print_string},
	{'c', print_hex},
	{'\0', NULL}
};

#endif /*_PRINTF_H_*/
