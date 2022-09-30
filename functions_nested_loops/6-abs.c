#include "main.h"
/**
 * _abs - Task6
 *@oni: int
 *Return: always 0
 */
int _abs(int oni)
{
	int chan;

	chan = oni * -1;

	if (oni >= 0)
		_putchar (oni);
	else
		_putchar (chan);
	return (0);
}
