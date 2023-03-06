#include "main.h"
#include <stdio.h>

/**
 * main - check the needle in the file haystack.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "haystack";
	char *f = "needle";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
