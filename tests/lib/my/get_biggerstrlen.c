/*
** EPITECH PROJECT, 2017
** get_biggerstrlen
** File description:
** return bigger len
*/

#include "../../include/my.h"

int get_biggerstrlen(char *s1, char *s2)
{
	int a = my_strlen(s1);
	int b = my_strlen(s2);

	if (a - b > 0)
		return (a);
	else
		return (b);
	return (0);
}
