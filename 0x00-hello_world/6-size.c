#include <stdio.h>
/**
 * main -print out size of data
 * coding with sipho
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	char e;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size ofan float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
