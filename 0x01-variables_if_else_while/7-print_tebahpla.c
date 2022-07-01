#include <stdio.h>

/**
 * main - prints z - a
 *
 * Return: 0 shows success
 */

int main(void)

{

	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		--i;
	}
	putchar(10);
	return (0);
}
