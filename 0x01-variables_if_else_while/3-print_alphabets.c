#include <stdio.h>
/**
 * main - to write code that prints alphabet in lowercase, then uppercase
 *
 * Return: 0
*/
int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
