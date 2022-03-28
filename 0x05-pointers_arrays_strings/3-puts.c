#include "main.h"

/**
* _puts - prints single line in stdout
* @str: string parameter
*
* Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
