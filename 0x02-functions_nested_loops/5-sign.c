#include "main.h"
#include<stdio.h>
/**
 * print_sign - Checks if number greater than or less than 0
 * @n: Ascii number
 * Return: 1 if greater than zero
 * Return : 0 if zero
 * Return -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
