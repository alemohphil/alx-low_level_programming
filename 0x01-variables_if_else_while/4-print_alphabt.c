#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	puchar('\n');

	return (0);
}
