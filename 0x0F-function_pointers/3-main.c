#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the result of simple operations
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	    int (*op_func)(int, int);

	    if (argc != 4)
	    {
		    printf("Error\n");
		            return (98);
	    }
	    a = atoi(argv[1]);
	        b = atoi(argv[3]);
		    op_func = get_op_func(argv[2]);

		     if (!op_func)
		     {
			     printf("Error\n");
			             return (99);
		     }
		       if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
		       {
			      printf("Error\n");
			               return (100);

		       }
		        result = op_func(a, b);
			    printf("%d\n", result);

			    return (0);
}
