#include "main.h"
/**
 *main - task2
 *@argv: char
 *@argc: int
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc > 0)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}

