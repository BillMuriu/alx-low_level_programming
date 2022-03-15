#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t1 = 48;
	int t2;
	int com = 44;

	while (t1 <= 57)
	{
		t2 = t1 + 1;
		while (t2 <= 57)
		{
			putchar(t1);
			putchar(t2);
			if (t1 != 56 || t2 != 57)
			{
				putchar(com);
				putchar(32);
			}
			t2++;
		}
		t1++;
	}
	putchar('\n');
	return (0);
}
