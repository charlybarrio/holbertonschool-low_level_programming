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
	int t = 0;

	if (argc < 1)
		return (0);

	for (a = 1; a < argc; a++)
	{
		if (!atoi(argv[a]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		t += atoi(argv[a]);
	}
	printf("%d\n", t);

	return (0);
}
