#include "main.h"
/**
 * print - Function that prints everything
 * @format: This is the string that contains the text to be written to stdout
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	void *buffer;
	buffer = malloc(BUFFSIZE);
	
	write(1, buffer, strlen(buffer));

}