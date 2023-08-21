#include <limits.h>
#include <stdio.h>
#include "main.h" 

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;  
    int len2; 
    unsigned int ui;
    void *addr;  

    // Test printing a sentence and store return values
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    // Create an unsigned integer value larger than INT_MAX
    ui = (unsigned int)INT_MAX + 1024;

    // Assign an address to the pointer
    addr = (void *)0x7ffe637541f0;

    // Print lengths using _printf and printf
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    // Print negative integers using _printf and printf
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    // Print an unsigned integer in different formats
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    // Print a character
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    // Print a string
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    // Print an address
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    // Print length using % specifier
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    // Print unknown specifier
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0);
}
