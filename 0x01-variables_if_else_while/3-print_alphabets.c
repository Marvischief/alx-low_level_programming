#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and then in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C++;
	}

	C = 'A';

	while (C <= 'Z')
	{

		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
