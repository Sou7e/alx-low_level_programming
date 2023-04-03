#include "main.h"
/**
 *_abs - Shows the absolute value of an integer
 *@i: target parameter
 *Return: absolute value of an integer
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
