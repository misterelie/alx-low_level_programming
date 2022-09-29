#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *  @n: input number.
 *  Return: factorial of the number.
 */
int factorial(int n)
{
	if (n < n)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
