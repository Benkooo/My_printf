/*
** EPITECH PROJECT, 2017
** strcat
** File description:
** concat 2 strings
*/

#include <stdio.h>

static int my_strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int destlen = my_strlen(dest);

	if (dest == NULL || src == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++) {
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
