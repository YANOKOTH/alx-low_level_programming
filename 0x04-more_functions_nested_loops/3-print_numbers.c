#include "main.h"
/**
 * print_numbers - Prints numbers 0 to 9
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		_putchar(c + '0');
	_putchar("\n");
	_putchar('\n');
}