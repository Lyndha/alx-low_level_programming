#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first int to be swaped
 * @b: second int to be swaped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
