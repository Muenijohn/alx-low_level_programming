#include <stdio.h>

/**
 * main - prints out the loop
 *
 * Return: 0 shows success
 */

int main(void)

{

	int k;
	int j;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar(10);

	return (0);
}
