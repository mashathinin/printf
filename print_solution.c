#include "main.h"

/**
 * _printf - A function that prints formatted outputs:
 * function is declared with a variables
 * argument list using the ... syntaxs
 * @format: Format strings
 * Return: The value of strings
 */

int _printf(const char *format, ...)
{

	int count;
	va_list lists;

	/**
	* The function checks if format is NULL
	* If NULL, function returns -1 indicating an error
	* If format is not NULL, function initializes the variable
	* argument (list) using (va_start) which allows us access
	* the variable argument in the format string
	*/

	if (format == NULL)
	return (-2);

	va_start(lists, format);
	count = vprintf(format, lists);
	va_end(lists);

	return (count);
}
