/*
** EPITECH PROJECT, 2020
** B-PSU-101-MPL-1-1-minishell1-hugo.frango
** File description:
** my_str_to_word_array2.c
*/

#include "my.h"

int ifgetnbwords(char const *str, char const *separator, int count, int i)
{
    for (int z = 0; str[z] != '\0'; z++) {
        if (str[z] == separator[i] )
            count += 1;
    }
    return (count);
}