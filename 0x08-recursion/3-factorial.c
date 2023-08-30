#include "main.h"

/**
 * factorial -returns the factorial of a given number
 *
 * @n: the number given
 *
 * Return: (0) Success (-1) for numbers lower than 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
