#include "main.h"

/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * description: print the numbers with _putchar
  *
  * Return: void
  */
void print_numbers(void)
{
	int number;

	for (number= '0'; number <= '9'; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}
