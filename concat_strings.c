/*
** EPITECH PROJECT, 2020
** concat_strings.c
** File description:
** concat 2 strings
*/

#include <stddef.h>

char *concat_strings(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0')
        dest[len + i] = src[i++];
    dest[len + i] = '\0';
    return (dest);
}
