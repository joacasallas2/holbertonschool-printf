#include "main.h"

/**
 * _printf - Function that prints everything
 * @format: This is the string that contains the text to be written to stdout
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	char *buffer;
	va_list args;
	char symbol;
	int i, j;
	int (*functionPtr)(va_list);

	buffer = malloc(BUFFSIZE);
	if (buffer == NULL)
		return ('\0');
	va_start(args, format);
	for (i = 0, j = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			symbol = format[i];
			functionPtr = get_op_fun(symbol);
			if (functionPtr == NULL)
			{
				continue;
			}
			else
			{
				buffer[j] = functionPtr(args);
				j++;
			}
		}
		else
		{
			buffer[j] = format[i];
			j++;
		}
	}
	buffer[j] = '\0';
	write(1, buffer, strlen(buffer));
	free(buffer);
	va_end(args);

	return (j);
}
