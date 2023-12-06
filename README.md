## C - printf  

Customized printf function  

## General Requirements  

* Allowed editors: vi, vim, emacs  
* Project compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89  

## functions and macros  

* write (man 2 write)  
* malloc (man 3 malloc)  
* free (man 3 free)  
* va_start (man 3 va_start)  
* va_end (man 3 va_end)  
* va_copy (man 3 va_copy)  
* va_arg (man 3 va_arg)  

## Compilation  
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


|Files|
|-----------|
|1. [main.h](https://github.com/joacasallas2/holbertonschool-printf/tree/main/main.h)|
|2. [_printf.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/printFunction.c)|
|3. [get_op_fun.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/get_function.c)|
|4. [functions.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/functions.c)|  
|5. [functions2.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/functions2.c)|  
|6. [_putchar.c](https://github.com/joacasallas2/holbertonschool-printf/tree/main/_putchar.c)|  
|7. [man_3_printf](https://github.com/joacasallas2/holbertonschool-printf/tree/main/man_3_printf)|  

|Tasks|
|-----------|
|1. function that produces output according to a format.|
|2. Handle the following conversion specifiers: d and i|
|3. Create a man page for your function.|
|4. b: the unsigned int argument is converted to binary|
|5. Handle the following conversion specifiers: u, o, x, X|
|6. Use a local buffer of 1024 chars in order to call write as little as possible.|
|7. Handle the secifiers: s, p|
|8. Handle the length secifiers: l, h|
|9. Handle the field width for non-custom conversion specifiers.|
|10. Handle the precision for non-custom conversion specifiers.|
|11. Handle the 0 flag character for non-custom conversion specifiers.|
|12. Handle the following custom conversion specifier: r =  prints the reversed string|
|13. Handle the following custom conversion specifier: r =  R: prints the rot13'ed string|




## Autor: joacasallas  
contact: joacasallas@gmail.com  

