#ifndef MAIN_H
#define MAIN_H

/**
 * Header file that contains needed function prototypes
 */

int _putchar(char c);
int main(int argc, char *argv[]);

#endif


vi _putchar.c

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
