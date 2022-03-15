#include <stdio.h>
/**
 *main - Program entry point
 *Return:0 on success. Error code otherwise
 */
int main(void)
{
	int n = 48;
	int com = 44;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(com);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
