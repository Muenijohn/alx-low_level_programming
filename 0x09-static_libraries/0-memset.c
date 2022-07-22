#include "main.h"
/**
 * _memset - set memory
 * @s: pointer to a string
 * @b: charcter to be changed
 * @n: space to be useid
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
