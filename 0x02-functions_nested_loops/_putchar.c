#include "main.h"

#include <unistd.h>

/**
 *
 * _putchar writes the character c to standard output
 *
 * Return: Always 1 (successful)
 *
 */
int _putchar(char c)

{

	    write(1, &c, 1);

	    return (1);

}
