#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;
int print_iint(va_list l, flags_t *f);
void priint_number(int n);
int print_unsiigned(va_list l, flags_t *f);
int count_diigit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_bnary(va_list l, flags_t *f);
int print_octl(va_list l, flags_t *f);
char *cnvert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*gt_print(char s))(va_list, flags_t *);
int gt_flag(char s, flags_t *f);
int print_strng(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rt13(va_list l, flags_t *f);
int print_rv(va_list l, flags_t *f);
int print_bgS(va_list l, flags_t *f);
int print_adress(va_list l, flags_t *f);
int print_prcent(va_list l, flags_t *f);
#endif
