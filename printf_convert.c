#include "printf.h"
/**
 * convert - converts output to binary, base 10, octal or hexadecimal
 * @num: number to be converted
 * @base: base to be adjusted
 * Return: pointer to the address of the converted number.
 */
char *convert(unsigned int num, int base, char formater)
{
	static char Representation[] = "0123456789ABCDEF";
	static char representation[] = "0123456789abcdef";
	static char buffer[50];
	char *ptr = &buffer[49];

	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = Representation[num % base];
		num /= base;
	}

	return(ptr);
}

