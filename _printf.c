#include "main.h"

/**
 * _printf - Function that prints everything
 * @format: This is the string that contains the text to be written to stdout
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	char symbol, *buffer;
	int i, j, k, len, (*functionPtr)(va_list);

	if (format == NULL)
		return (-1);
	if (strlen(format) == 1 && format[0] == '%')
		return (-1);
	k = len = 0;
	buffer = malloc(BUFFSIZE);
	if (buffer == NULL)
		return ('\0');
	va_start(args, format);
	for (i = j = 0; format[i]; i++)
	{
		if (format[i] == '\0')
			break;
		if (format[i] != '%')
		{
			buffer[k] = format[i];
			k++;
			j++;
		}
		if (format[i] == '%')
		{
			buffer[k] = '\0';
			write(1, buffer, k);
			i++;
			k = 0;
			if (format[i] == '!' || format[i] == 'K')
			{
				buffer[k] = '%';
				j++;
				k++;
				buffer[k] = format[i];
				j++;
				k++;
			}
			else
			{
				symbol = format[i];
				functionPtr = get_op_fun(symbol);
				if (functionPtr == NULL)
					continue;
				else
				{
					len = functionPtr(args);
					j += len;
					len = 0;
				}
			}
		}
	}
	buffer[k] = '\0';
	write(1, buffer, strlen(buffer));
	free(buffer);
	va_end(args);
	return (j);
}
