#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int tm = 'a';

	while (tm <= 'z')
	{
		if (tm == 'e' || tm == 'q')
		{
			tm++;
		}
		else
		{
			putchar(tm);
			tm++;
		}
	}
	putchar('\n');
	return (0);
}
