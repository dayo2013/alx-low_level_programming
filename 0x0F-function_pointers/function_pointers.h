#ifndef _FUNTION_POINTERS_H_
#define _FUNTION_POINTERS_H_

#include <stddef.h>

int _puthchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
