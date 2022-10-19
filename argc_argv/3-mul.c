#include "main.h"
/**
 *main - task2
 *@argv: char
 *@argc: int
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int t;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		t = x * y;

			printf("%d\n", t);
		return (0);
	}
}
