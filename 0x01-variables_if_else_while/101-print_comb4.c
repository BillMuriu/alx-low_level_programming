#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t1 = 48;
	int t2, t3;
	int com = 44;

	while (t1 <= 57)
	{
		t2 = t1 + 1;
		while (t2 <= 57)
		{
			t3 = t2 + 1;
			while (t3 <= 57)
			{
				putchar(t1);
				putchar(t2);
				putchar(t3);
				if (t1 != 55 || t2 != 56 || t3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				t3++;
			}
			t2++;
		}
		t1++;
	}
	putchar('\n');
	return (0);
}
