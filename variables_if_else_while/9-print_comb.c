#include <stdio.h>
/**
 * main - Task9
 *
 * Return: always 0
 */
int main(void)
{
	int boo;

	for (boo = '0'; boo <= '8'; boo++)
	{
		putchar (boo);
		putchar (',');
		putchar (' ');
	}
	putchar ('9');
	return (0);
}
