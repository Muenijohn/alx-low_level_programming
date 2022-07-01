#include <stdio.h>

/**
 * main - prints hexadecimal
 *
 * Return: 0 shows success
 */

int main(void)

{

	int i;
	char x;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar(10);
	return (0);
}
