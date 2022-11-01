#include "variadic_functions.h"
/**
 *print_numbers - prints numbers, followed by a new line
 *@separator:char
 *@n:int
 *@...:parameter
 *Return:always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(num, n);
	for (i = 0; i != n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
