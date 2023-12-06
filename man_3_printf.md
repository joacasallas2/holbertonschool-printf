.TH _printf 
.PP
.SH NAME:  
        _printf: format and print data  

.PP
.SH SYNOPSIS:  
        Customized Printf Function
.br
        Project compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89  

.PP
.SH Compilation  
        $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
.br
.PP
.SH SYNTAX:  
        int _printf(const char *format, ...)
        The overall syntax of a conversion specification is:  
        %[$][flags][width][.precision][length modifier]conversion  
.br
.PP
.SH DESCRIPTION: 
        Format of the format string:
        The format string is a character string, which is composed
        of zero or more directives (conversion
        specifications).  Each conversion specification is
        introduced by the character %, and ends with a conversion
        specifier.  In between there may be (in this order) zero or more
        flags.
        Summarizing, _printf function prints ARGUMENT(s) according to FORMAT, or execute according to the conversion specifiers.  
.br
.PP
.SH OPTIONS:  
        Conversion specifiers:  
        A character that specifies the type of conversion to be applied.
        The conversion specifiers and their meanings are:  
.br
|Conversion Specifiers|
|-----------|
|[i] | print an integer in base 10|
|[d] | print a decimal (base 10) number|
|[o] | print a number in octal (base 8)|
|[u] | print an unsigned decimal (base 10) number|
|[x] | print a number in hexidecimal (base 16). The letters abcdef are used for x conversions|
|[X] | print a number in hexidecimal (base 16). the letters ABCDEF are used for X conversions|
|[b] | print a number in octal (base 2)|
|[c] | print a single character|
|[s] | print a string of characters.|
|[%] | print a percent sign|
.br
.PP
.SH RETURN VALUE:  
        Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).  
.br
.PP
.SH EXAMPLES:  
        
        To print a number in the simple way, the format specifier is simply %d.
        '#'include '"main.h"'
        int age;
        age = 25;
        printf ( "I am %d years old\n", age);
        Output = I am 25 years old  
.br
|EXAMPLES|
|-----------|
| _printf | Output |
|-----------|
|("Negative:[%d]\n", -762534) | Negative:[-762534]|
|("Unsigned:[%u]\n", ui) | Unsigned:[2147484671]|
|("Character:[%c]\n", 'H') | Character:[H]|
|("String:[%s]\n", "I am a string !") | String:[I am a string !]|
|("Percent:[%%]\n") | Percent:[%]|
|("HEX: [%X]\n", 1024) | HEX: [BA2A6]|
|("binary: [%b]\n", 1024) | binary: [10000000000]|
.br
.PP
.SH FILES 
.br
|Files|
|-----------|
|1. [main.h](https://github.com/joacasallas2/holbertonschool-printf/tree/main/main.h)|
|2. [_printf.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/printFunction.c)|
|3. [get_op_fun.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/get_function.c)|
|4. [functions.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/functions.c)|  
|5. [functions2.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/functions2.c)|  
|6. [_putchar.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/_putchar.c)|  
|7. [man_3_printf](https://github.com/joacasallas2/holbertonschool-printf/tree/main/man_3_printf)| 

.br
.PP
.SH Autor: joacasallas  
contact: joacasallas@gmail.com  
.br
