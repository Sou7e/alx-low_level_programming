#include "main.h"
/**
 *print_alphabet_x10 - Prints the alphabet x10
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
