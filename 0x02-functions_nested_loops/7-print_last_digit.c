#include "main.h"


/**
 * prints_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (n < 0)
		n = -n;

	_putchar(a + '0');

	return (a);
}
