#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: Always 0
 */

int main(void)
{
	char rl;

	for (rl = 'z'; rl >= 'a'; rl--)
		putchar(rl);
	putchar('\n');

	return (0);
}
