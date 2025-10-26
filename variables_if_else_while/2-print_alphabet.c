#include <stdio.h>

/**
 * main - imprime l'alphabet en lettres minuscules
 *
 * Return: Always 0 (Succès)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
