#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
