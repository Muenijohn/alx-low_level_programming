#include <stdio.h>

/**
 * main - prints results of the while loop
 *
 * Return: 0 is success
 */

int main(void)

{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar(10);
	return (0);
}
