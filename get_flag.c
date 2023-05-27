#include "main.h"
/**
 * get_flag - turnson flagss ila _printf findss
 * @c: char holder to falgs in get flag
 * @f: pointer f li kandiroh f had fonction get flag hhhhh
 *
 * Return: maso9ich hadchi fchkel w nta katZid 3lya a khay hhhh
 */
int get_flag(char c, flags_t *f)
{
int j = 0;
switch (c)
{
case '+':
f->plus = 1;
j = 1;
break;
case ' ':
f->space = 1;
j = 1;
break;
case '#':
f->hash = 1;
j = 1;
break;
}
return (j);
}
