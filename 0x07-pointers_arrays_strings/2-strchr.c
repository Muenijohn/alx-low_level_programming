#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: pointer to a string
 * @c: character to be located
 * Return: pointer when locatede NULL when not
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (NULL);
}
