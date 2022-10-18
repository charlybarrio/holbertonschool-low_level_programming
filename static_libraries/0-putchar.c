#include "main.h"
/**
 * main - task0
 *
 * Return: always 0
 */
int main(void)
{
	char x[] = "_putchar";
	int y;

	for (y = 0 ; x[y] != '\0' ; y++)
	{
		_putchar (x[y]);
	}
	{
		_putchar ('\n');
	}
	return (0);
}
