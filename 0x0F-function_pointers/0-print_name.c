#include "function_pointers.h"




/**
 * print_name - A function that prints a name using
 *   a specified printing function.
 * @name: The name to print.
 * @f: A function pointer that specifies how to print the name.
 */



void print_name(char *name, void (*f)(char *))
{
	/*Check if either 'name' or 'f' is NULL, and if so, return without printing.*/
	if (name == NULL || f == NULL)
	{
		return;
	}
	/*Call the specified printing function 'f' and pass the 'name' to it.*/
	f(name);
}
