#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0 , followed by new line
 * Return: 0
 */
int main(void)
{
	char C = '0';

	while (C <= '9')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
