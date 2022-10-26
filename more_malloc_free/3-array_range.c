#include "main.h"
/**
 **array_range - creates an array of integers
 *@max: int
 *@min: int
 *Return: always 0
 */
int *array_range(int min, int max)
{
	int *oni;
	int chan;

	if (min > max)
		return (NULL);

	oni = malloc(sizeof(int) * ((max - min) + 1));

	if (!oni)
		return (NULL);
	for (chan = 0; min <= max; chan++)
		oni[chan] = min++;
	return (oni);
}
