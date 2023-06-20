#include "main.h"
#include<stdio.h>
/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
