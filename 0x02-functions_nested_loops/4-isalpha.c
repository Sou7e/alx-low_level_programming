#include "main.h"
/**
 *_isalpha - shows 1 if the target is a letter. otherwise 0.
 *@c: input parameter
 *Return: 1 for letters. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
