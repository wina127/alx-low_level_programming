 #ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>

int get_endianness(void);
unsigned int flip_bits(unsigned log int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit (unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);

#endif
