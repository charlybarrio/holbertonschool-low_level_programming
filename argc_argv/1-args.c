#include "main.h"
/**
 *main - task1
 *@argv: char
 *@argc: int
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
