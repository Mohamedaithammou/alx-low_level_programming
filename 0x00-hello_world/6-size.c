#include <stdio.h>

/**
 * main - main function
 *
 * Return: o on success
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
