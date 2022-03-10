#include <stdio.h>

/**
 * main - prints the of various types
 * Return - 0 if successful
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	print("Size of an int: %i byte(s)\n", sizeof(int));
	print("Size of long int: %i bytes(s)\n", sizeof(long int));
	print("Size of long long int: %i bytes\n", sizeof(long long int));
	print("Size of a float: %i bytes\n", sizeof(float));
	return (0);
}
