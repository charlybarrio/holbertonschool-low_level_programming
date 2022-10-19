#include "main.h"
/**
 *main - task2
 *@argv: char
 *@argc: int
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int t = 0;
	int x;
	int y;
	int z;

	if (argc < 1)
		return (0);

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < 47 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		if (!atoi(argv[z]))
		{
		}
		t += atoi(argv[z]);
	}
	printf("%d\n", t);

	return (0);
}

