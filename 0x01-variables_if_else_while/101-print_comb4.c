#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combination of two digits
 * Numbers must be seperated by ,, followed by a space
 * The two digits 0 and 1
 * prints only the smallest combination of two digits
 * Numbers should be printed in ascending of two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc ..) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * all your code should be in the maun function
 * Return: 0 on  success
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);
					if (!(e == 7 && d == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
