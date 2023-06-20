#include "main.h"
#include<stdio.h>
/**
 * _islower -  checks if character is lower case
 * @c : character in ASCII code
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
