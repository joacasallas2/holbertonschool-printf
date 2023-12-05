#include "main.h"
/**
 * getBin - Function that convert a decimal number in a binary number
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getBin(va_list args)
{
	int i, num, mod, *buffer, len;

	len = 0;

	buffer = malloc(BUFFSIZE);
	if (buffer == NULL)
	{
		return ('\0');
	}
	num = va_arg(args, int);
	if (num < 0)
	{
		num = num * -1;
		for (i = 0; i < 21; i++)
		{
			_putchar('1');
			len++;
		}
		len--;
	}
	for (i = 0; num >= 1; i++)
	{
		mod = num % 2;
		num = num / 2;
		buffer[i] = mod;
	}
	i--;
	for (; i >= 0; i--, len++)
	{
		_putchar(48 + buffer[i]);
	}
	return (len);
}
