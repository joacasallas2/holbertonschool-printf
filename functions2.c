#include "main.h"
/**
 * getBin - Function that convert a decimal number in a binary number
 * @args: The list of args to run
 * Return: the large of the character printed
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
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		printf("pending negative number to binary");
		return (0);
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

/**
 * getUnsigned - Function that get an unsigned number from un int
 * @args: The list of args to run
 * Return: the large of the character printed
 */
int getUnsigned(va_list args)
{
	int i, num, num2, len, mul, neg;

	mul = 1;
	num = va_arg(args, int);
	len = neg = 0;

	if (num < 0)
	{
		num = UINT_MAX + 1 - num;
	}
	num2 = num / 10;
	for (; num2 / mul; len++)
	{
		mul = mul * 10;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(48 + (num / mul) % 10);
		mul /= 10;
	}
	len++;
	return (len);
}
/**
 * getOctal - Function that convert a decimal number in a octal
 * @args: The list of args to run
 * Return: the large of the character printed
 */
int getOctal(va_list args)
{
	int i, num, mod, *buffer, len;

	len = 0;

	buffer = malloc(BUFFSIZE);
	if (buffer == NULL)
	{
		return ('\0');
	}
	num = va_arg(args, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		printf("pending negative number to binary");
		return (0);
	}
	for (i = 0; num >= 1; i++)
	{
		mod = num % 8;
		num = num / 8;
		buffer[i] = mod;
	}
	i--;
	for (; i >= 0; i--, len++)
	{
		_putchar(48 + buffer[i]);
	}
	return (len);
}