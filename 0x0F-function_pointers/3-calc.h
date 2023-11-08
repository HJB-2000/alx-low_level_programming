#ifndef CALC_H
#define CALC_H



/**
 * struct op - Structure for representing an operator
 *   and its associated function.
 * @op: The operator symbol.
 * @f: A pointer to the associated function.
 */



typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}	op_t;


/*Function pointer declaration for dynamic operator selection*/
int (*get_op_func(char *s))(int, int);

/*Function declarations for basic operations*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


#endif

