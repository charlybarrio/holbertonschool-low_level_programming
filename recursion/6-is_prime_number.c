#include "main.h"
int _aguskun(int n, int Uwu);
/**
 *is_prime_number - Task6
 *@n: int
 *Return: always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_aguskun(n, 2));
}
/**
 * _aguskun - raiz cuadrada
 * @Uwu: int
 * @n: int
 * Return: always 0
 */
int _aguskun(int n, int Uwu)
{

	if (n == Uwu)
		return (1);

	else if (n % Uwu == 0)
	{
		return (0);
	}
	else
	{
		return (_aguskun(n, Uwu + 1));
	}
}
