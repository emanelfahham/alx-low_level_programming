#include "main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - print alphabet lowercase 10 times
 * Return : void
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
