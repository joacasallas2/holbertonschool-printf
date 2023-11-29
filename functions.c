#include "main.h"
/**
 * getChar - Function that return a char
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getChar(va_list args) { return (va_arg(args, int)); }

/**
 * getInt - Function that return an integer
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getInt(va_list args) { return (48 + (va_arg(args, int))); }

/**
 * getFloat - Function that return a float
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getFloat(va_list args) { return (48 + (va_arg(args, double))); }

/**
 * getString - Function that return a String
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
char *getString(va_list args) { return (va_arg(args, char *)); }

/**
 * getPer - Function that return a Percent sign
 * @args: The list of args to run
 * Return: Always 0 (Success)
 */
int getPer(__attribute__((unused)) va_list args) { return ('%'); }
