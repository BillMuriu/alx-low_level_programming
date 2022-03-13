#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar (ch);
		ch--;
	}
	putchar ('\n');
	return (0);
}
