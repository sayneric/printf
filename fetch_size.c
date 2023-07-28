#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @x: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *x)
{
	int curr_i = *x + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;
	if (size == 0)
		*x = curr_i - 1;
	else
		*x = curr_i;
	return (size);
}
