#include "main.h"
/**
 * get_flag - flag function get function hhh
 * @s: character hhhhhhhhhh hhhhhhhhh h  hhhhhhhhh h
 * @f: pointer hhhh bbbbb zzzz hhhhh kkkkk jjjj jjjjj
 * Return: maso9akch fya hhhhh bbbbb kkimba hhhh jjjjjjjj
 */
int get_flag(char s, flags_t *f)
{
int j = 0;
switch (s)
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
