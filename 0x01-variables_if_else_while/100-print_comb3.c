#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combination of two digits
 * Numbers must be seperated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of two digits
 * Numbers should be printed in ascending of two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc..) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any varaible of type char
 * all your code should be in the main function
 * Return: 0 on success
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
