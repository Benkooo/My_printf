/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include <stdarg.h>
#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_isnum(char c);
int my_put_nbr(int nb);
int my_put_nbr_long(long nb);
int my_put_nbr_longlong(long long nb);
int my_put_nbr_base(unsigned int nb, char *base);
long my_put_nbr_base_long(unsigned long nb, char *base);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strdup(char *str);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int get_biggerstrlen(char *s1, char *s2);
int get_smallerstrlen(char *s1, char *s2);
char *get_bigstr(char *s1, char *s2);
char *get_smallstr(char *s1, char *s2);

void print_int(va_list ap);
void print_long(va_list ap);
void print_longlong(va_list ap);
void print_char(va_list ap);
void print_string(va_list ap);
void print_unsigned_int(va_list ap);
void print_binary(va_list ap);
void print_percent();
void print_pointer_hexa(va_list ap);
void print_hexa(va_list ap);
void print_hexa_caps(va_list ap);
void print_octal(va_list ap);

void my_printf(char *str, ...);

#endif /* MY_H_ */
