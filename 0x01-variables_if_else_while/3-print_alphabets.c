#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: Succes 0
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alp[x]);
	}
	putchar('\n');
	return (0);
}
