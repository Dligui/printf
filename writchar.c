#include "main.h"
#include <unistd.h>

/**
 * _putchar - katkatb charactaire function
 * @c: inpute charctaire function
 * Return: maso9akech
 * Description: _putchar kandiroh hhhhhhh hhhhhh hhhhh
 * walah ila bzf hadchi
 */
int _putchar(char c)
{
	static char buf[1024];
	static int j;

	if (c == -1 || j >= 1024)
	{
		write(1, &buf, j);
		j = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		j++;
	}
	return (1);
}

/**
 * _puts - prints a string function
 * @str: pointer to print a string
 * Return: maso9kach a shabi kimba
 */
int _puts(char *str)
{
	register int z;

	for (z = 0; str[z] != '\0'; z++)
		_putchar(str[z]);
	return (z);
}
