#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> // Include for va_list

#define BUFF_SIZE 1024 // Define the buffer size

// Function prototypes
void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);

// Add function prototypes for get_flags, get_width, get_precision, get_size, handle_print
// Example:
// int get_flags(const char *format, int *index);
// int get_width(const char *format, int *index, va_list list);
// int get_precision(const char *format, int *index, va_list list);
// int get_size(const char *format, int *index);
// int handle_print(const char *format, int *index, va_list list, char buffer[],
//                  int flags, int width, int precision, int size);

#endif /* MAIN_H */

