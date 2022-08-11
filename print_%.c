#include "main.h"
#include <unistd.h>

/**
 * print_% - A function that prints a string
 * @%: string to print
 * Return: i
 */
int print_%(va_list %)
{
	char *str = va_arg(%, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}
