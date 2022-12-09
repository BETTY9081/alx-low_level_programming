#include <stdio.h>
/**
 * main - print all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int on = '0';
	int tn = '0';

	for (tn = '0'; tn <= '9'; tn++)
	{
		for (on = '0'; on <= '0'; on++)
		{
			if (!((on == tn) || (tn > on)))
			{
				putchar(tn);
				putchar(on);
				if (!(on == '9' && tn == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
