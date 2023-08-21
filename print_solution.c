#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function that prints formatted outputs:
 * function is declared with a variables
 * argument list using the ... syntax
 * @format: Format strings
 * Return: The value of strings
 */

int _printf(const char *format, ...)
{
    if (format == NULL)
        return -1;
    
    int count;
    va_list args;
    
    va_start(args, format);
    count = vprintf(format, args);
    va_end(args);
    
    return count;
}

int main() 
{
    int num = 42;
    char str[] = "Hello, World!";
    
    int result = _printf("Number: %d\nString: %s\n", num, str);
    printf("Number of characters printed: %d\n", result);
    
    return 0;
}
