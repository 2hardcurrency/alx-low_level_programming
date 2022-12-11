#include <stdio.h>
/**
 * main - to write a program that prints the alphabets in lower case
 *
 * Return: 0
*/
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
