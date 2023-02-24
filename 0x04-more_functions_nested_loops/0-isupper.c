#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks whether a character is uppercase or not.
 *@c: char input to _isupper
 *
 *Returns 1 if c is uppercase and Returns 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
