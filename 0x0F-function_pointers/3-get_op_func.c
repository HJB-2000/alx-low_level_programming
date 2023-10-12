#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function for the requested operation.
 *
 * @s: The operator provided as an argument.
 *
 * Return: A function pointer to the operation function
 *   corresponding to the given operator.
 */


int (*get_op_func(char *s))(int, int)
{

op_t operator[] = {
{"+", add},
{"-", sub},
{"*", mul},
{"/", divi},
{"%", mod},
{NULL, NULL}
};


int x = 0;

while (operator[x].op != NULL && *(operator[x].op) != *s)
x++;

return (operator[x].f);

}
