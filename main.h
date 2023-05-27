#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct flags hadchi li katb lah
 * flag bagha tkon hokak nta a kimba chgolak
 * @plus: flag dyal + hna ma3dna mndiro
 * @space: flag dyal speace ma3dna mandiro
 * @hash: hachtag dounia batma a kimba
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct printhandeler a sidi kimba lah ijib tssir
 * @c: forma ana brassi m3a hhhhh
 * @f: pointer ki corecti lina pritat a sidi
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;
int print_int(va_list l, flags_t *f);
void print_number(int m);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
char *convert(unsigned long int nm, int bs, int lw);
int _printf(const char *format, ...);
int (*get_print(char c))(va_list, flags_t *);
int get_flag(char c, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
#endif
