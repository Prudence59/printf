#include "main.h"
#include <unistd.h>

/**
 * print_p - A function that prints a string
 * @p: string to print
 * Return: i
 */
int print_p(va_list %)
{
	char *str = va_arg(%, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}
