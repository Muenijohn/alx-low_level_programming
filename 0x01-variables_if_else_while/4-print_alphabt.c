#include <stdio.h>

/**
 * main - prints whats is in the loop
 *
 * Return: 0 shows success
 */

int main(void)
{

	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
	if (k != 'e' && k != 'q')
		putchar(k);
}
	putchar(10);
	return (0);

}
