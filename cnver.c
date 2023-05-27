#include "main.h"

/**
 * convert - conver function by sara and ghizlane
 * @num: input numero
 * @base: input bace HHHHHHHHH
 * @lowercase: hexa flag for this function hhhhhhhhhhhh
 * Return: maso9akch a betty
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rp;
	static char buf[50];
	char *p;

	rp = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buf[49];
	*p = '\0';
	do {
		*--p = rp[num % base];
		num /= base;
	} while (num != 0);

	return (p);
}
