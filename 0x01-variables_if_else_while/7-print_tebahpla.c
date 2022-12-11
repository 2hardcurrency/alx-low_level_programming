#include<stdio.h>
/**
 * main - to write a program that prints lowercaswe alphabets in reverse order
 *
 * Return: 0
*/
int main(void)
{
	char letter;

	for (letter = z; letter >= a; letter--)

		putchar(letter);
	putchar('\n');

	return (0);

}
