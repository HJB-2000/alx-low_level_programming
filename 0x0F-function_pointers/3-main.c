#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"



/**
 * main - Entry point for performing simple arithmetic operations.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always returns 0 to indicate successful execution.
 */



#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
    int num1, num2;
    int result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operation = get_op_func(argv[2]);

    if (operation == NULL || (argv[2][1] != '\0'))
    {
        printf("Error\n");
        exit(99);
    }

    if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = operation(num1, num2);
    printf("%d\n", result);

    return 0;
}

