#include <stdio.h>

/**
 * main - prints the of various types
 * Return - 0 if successful
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	print("Size of an int: %lu byte(s)\n", sizeof(int));
	print("Size of long int: %lu bytes(s)\n", sizeof(long int));
	print("Size of long long int: %lu bytes\n", sizeof(long long int));
	print("Size of a float: %lu bytes\n", sizeof(float));
	return (0);
}
