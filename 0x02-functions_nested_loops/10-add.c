#include "main.h"
#include <stdio.h>
/**
* add - a function that adds two integers
* and returns the result.
*
* @a: number one.
* @b: number two.
*
* Return: Add of number one and number two.
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
