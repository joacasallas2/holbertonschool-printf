#include "main.h"
/**
 * getChar - Function that print a char
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getChar(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	_putchar(letter);
	return (1);
}

/**
 * getInt - Function that print an integer
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getInt(va_list args)
{
	int i, num, num2, len, mul;

	mul = 1;
	num = va_arg(args, int);
	num2 = num / 10;

	for (len = 0; num2 / mul; len++)
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
 * getFloat - Function that print a float
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getFloat(va_list args)
{
	float num, mul, num2, len;

	num = va_arg(args, double);
	mul = len = 0;
	num2 = num;
	while (num2 / 10)
	{
		num2 = num2 / 10;
		mul++;
	}
	while (mul > 0)
	{
		num = (int)num % 10;
		mul--;
		_putchar((float)num);
		len++;
	}
	return (len);
}

/**
 * getStr - Function that print a String
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getStr(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * getPer - Function that print a Percent sign
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getPer(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}