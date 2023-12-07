#include "main.h"

/**
 * _printf - Function that prints everything
 * @format: This is the string that contains the text to be written to stdout
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	/* The function receive a string as 1st argument (*format)*/
	va_list args;
	/*args is where each new argument after of format is received*/
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
	/*va_start initialize, the va_list args*/
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
			/*if we find '%', then we print the buffer*/
			buffer[k] = '\0';
			write(1, buffer, k);
			/*we search the next digit in order to know the format required*/
			i++;
			k = 0;

			if (format[i] == '!' || format[i] == 'K' || format[i] == 'r')
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
				/*we call the function according the letter after the '%' symbol*/
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
	/*at the end of the format string, we close the buffer with null and call the syscall write*/
	buffer[k] = '\0';
	write(1, buffer, strlen(buffer));
	free(buffer);
	va_end(args);
	return (j);
}
