#include "main.h"
/**
 * getChar - Function that prints a char
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getChar(va_list args)
{
	int element;

	element = va_arg(args, int);
	printf("%c", element);
	return (0);
}
/**
 * getInt - Function that prints an integer
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getInt(va_list args)
{
	int element;

	element = va_arg(args, int);
	printf("%i", element);
	return (0);
}
/**
 * getFloat - Function that prints a float
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getFloat(va_list args)
{
	float element;

	element = va_arg(args, double);
	printf("%f", element);
	return (0);
}
/**
 * getString - Function that prints a String
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getString(va_list args)
{
	char *elementString;

	elementString = va_arg(args, char *);
	if (elementString == NULL)
	{
		elementString = "(nil)";
	}
	printf("%s", elementString);
	return (0);
}