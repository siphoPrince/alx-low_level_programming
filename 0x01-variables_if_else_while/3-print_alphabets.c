#include<stdio.h>
/**
 * main-  prints the alphabet in lowercase
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int l;

	for (l = 1; l < 26; l++)
	{
		putchar(alphabet[l]);
	}
	putchar('\n');
	return (0);
}
