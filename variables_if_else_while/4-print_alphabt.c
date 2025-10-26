#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

