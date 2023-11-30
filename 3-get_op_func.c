#include "main.h"
int getStr(va_list args);
/**
 * get_op_fun - Function that return the required function
 * @s: This is the format required
 * Return: A pointer to the function
 */
int (*get_op_fun(char s))(va_list args)
{
	op_t ops[] = {
		{"c", getChar},
		{"i", getInt},
		{"d", getInt},
		{"f", getFloat},
		{"%", getPer},
		{"s", getStr},
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
