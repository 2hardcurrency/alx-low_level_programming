#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character
 * @c: is the file to be checked
 * Return: 1 if alphabet, else, 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z')
		return (1);
	else
		return (0);
}
