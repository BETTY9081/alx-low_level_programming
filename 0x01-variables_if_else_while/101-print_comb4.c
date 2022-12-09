#include <stdio.h>
/**
 * main - print all possiblle different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int on = '0';
	int tn = '0';
	int hn = '0';

	for (hn = '0'; hn <= '9'; hn++)
	{
		for (tn = '0'; tn <= '9'; tn++)
		{
			for (on = '0'; on <= '9'; on++)
			{
				if (!((on == tn) || (tn == hn) || (tn > on) || (hn > tn)))
				{
					putchar(hn);
					putchar(tn);
					putchar(on);
					if (!(on == '9' && hn == '7' && tn == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
