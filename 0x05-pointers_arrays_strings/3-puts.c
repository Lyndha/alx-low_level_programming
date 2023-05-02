#include "main.h"
/**
 * _puts - puts a string
 * @str: string to return
 * Return: void
 */
void _puts(chat *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
