#include <stdio.h>
/**
 * main - print size of a program
 *
 * return: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: % lu byte($)\n, (unsigned long)sizeof(a));
printf("size of a int : % lu byte($)\n, (unsigned long)sizeof(b));
printf("size of a long int: % lu byte($)\n, (unsigned long)sizeof(c));
printf("size of a long long int: % lu byte($)\n, (unsigned long)sizeof(d));
printf("size of a float: % lu byte($)\n, (unsigned long)sizeof(f));
return (0);
}
