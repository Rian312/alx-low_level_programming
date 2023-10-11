#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
		return a + b;
}

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Difference of a and b
 *      */
int op_sub(int a, int b)
{
		return a - b;
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
		return a * b;
}

/**
 * op_div - Divides two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: Result of division of a by b
 */
int op_div(int a, int b)
{
		if (b == 0)
				{
							return -1; /* Return -1 to handle division by zero error */
								}
			return a / b;
}

/**
 * op_mod - Computes the remainder of division of a by b
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: Remainder of division of a by b
 */
int op_mod(int a, int b)
{
		if (b == 0)
				{
							return -1; /* Return -1 to handle modulo by zero error */
								}
			return a % b;
}

