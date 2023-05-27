#include "main.h"
#include <unistd.h>

/**
 * _putchar - KKANKATBO CARATCAIRE F SODOUT
 * @c: CARACHTER GHDI TPRANTA
 * Return: MASO9AKCH
 * hit sowa ghadi raja3 1 wla -1 ila kan chi mchkile w safe
 * Description: _putchar owner by sara yamil w ghizlane dilgui
 * cap cap cal cal
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
		buf[j] = c;
		j++;
	}
	return (1);
}

/**
 * _puts - kiparnti lina string w safe
 * @str: pointer ta3 string li atprnta
 * Return: nmaso9akch a sidi
 */
int _puts(char *str)
{
	register int j;

	for (j = 0; str[j] != '\0'; j++)
		_putchar(str[j]);
	return (j);
}
