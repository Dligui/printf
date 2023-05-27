#include "main.h"

/**
 * convert - converts kanbdlou numero l string
 * @nm: input numero
 * @bs: input bsae
 * @lw: flag hexadi values khassaha twli  lowercas
 * Return: maso9akch fya ms string
 */
char *convert(unsigned long int nm, int bs, int lw)
{
	static char *rp;
	static char buf[50];
	char *p;

	rp = (lw)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buf[49];
	*p = '\0';
	do {
		*--p = rp[nm % bs];
		nm /= bs;
	} while (nm != 0);

	return (p);
}
