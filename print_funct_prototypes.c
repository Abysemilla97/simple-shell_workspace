#include "shell.h"

/**
 * _putchar - writes a char (c) to the STDOUT.
 * @c: The char to be printed.
 * Return: 1 on success and -1 on failure.
 */
int _putchar(const char c)
{
	return (write (1, &c, 1));
}

/**
 * _print - writes to the STDOUT.
 * @s: a pointer to the string to be printed.
 */
void _print(char *s)
{
	write(STDOUT_FILENO, s, stringlen(s));
}
