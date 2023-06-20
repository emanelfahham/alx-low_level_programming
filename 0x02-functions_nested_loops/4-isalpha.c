#include "main.h"
#include<stdio.h>
/**
 * _isalpha - checks for alphabetic characters
 * @c : Ascii character
 * Return : 1 for letters
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
