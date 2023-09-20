#include "shell.h"

/**
 * _stringlen - computes length of a string.
 * @s: the string whose length is to be computed.
 * Return: number of char in the string.
 */
int _stringlen(char s)
{
	/*variable len is initalized to store the string length*/
	int len = 0;

	/*check is it is a valid pointer to the string*/
	if (s == NULL)
		return (len);
	
	/*loop to the end of string*/
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
