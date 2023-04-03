#include "main.h"
/**
 *_islower - Shows 1 if the target is lowercase and 0 otherwise
 *@c: input character
 *Return: 1 if lowercase character. otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
