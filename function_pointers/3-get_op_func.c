#include "3-calc.h"
/**
 *get_op_func - Select the correct operator
 *Return: Operator
 *@symb: Operator writed by the user
**/
int (*get_op_func(char *symb))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (ops[i].op != NULL && *(ops[i].op) != *symb)
	{
		i++;
	}
	return (ops[i].f);
}
