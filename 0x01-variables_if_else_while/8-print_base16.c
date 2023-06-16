#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 16
 * starting from 0 and going to 'f', followed by a new line
 * Return: 0 on successful output
 */
int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		if (c <= '9' || (c >= 'a' && c <= 'f'))
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
