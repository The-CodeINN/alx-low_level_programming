#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Description: Displays the result followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
