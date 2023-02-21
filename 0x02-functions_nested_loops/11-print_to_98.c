#include "main.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input value to 98,
 *               in order, separated by a comma followed by a space.
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
				_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');

			if (n == 98)
				break;
			_putchar(',');
			_putchar(' ');
			n--;
		}
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
