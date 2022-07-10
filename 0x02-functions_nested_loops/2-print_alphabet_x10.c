#include "main.h"
/**
 * print_alphabet_x10 -> print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
