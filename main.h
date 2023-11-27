#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

#define BUFFSIZE 1024

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;


int _putchar(char c);
int _printf(const char *format, ...);
int getChar(va_list args);
int getInt(va_list args);
int getFloat(va_list args);
int getString(va_list args);
int (*get_op_fun(char s))(va_list args);


#endif