/*
** EPITECH PROJECT, 2020
** mystrtowordarray
** File description:
** my_str_to_word_array.c
*/

#include "my.h"

int count_size_one_word(char const *str, char const *separator, int *n);

char *returnanstr(char const *argv);

int get_nb_words(const char *str, const char *separator)
{
    int count = 0;

    for (int i = 0; separator[i] != '\0'; i += 1) {
        count = ifgetnbwords(str, separator, count, i);
    }
    return (count + 1);
}

void convert(char **tab, char const *str, char const *src, int *n)
{
    int t = 0;
    int c = 0;
    int i = 0;
    int v = 0;
    int g = get_nb_words(str, src);

    for (; i < g; i++) {
        c = count_size_one_word(str, src, n);
        tab[i] = malloc(sizeof(char) * (c + 1));
        for (; t < *n; t++, v++) {
            tab[i][v] = str[t];
        }
        v = 0;
        t += 1;
        *n += 1;
        tab[i][c] = '\0';
    }
}

int count_size_one_word(char const *str, char const *separator, int *n)
{
    int t = *n;
    int g = 0;

    for (int i = 0; separator[i] != '\0'; i += 1) {
        for (; str[t] != '\0'; t += 1) {
            if (str[t] == separator[i] || str[t] == '\0') {
                *n = t;
                break;
            }
            g += 1;
        }
        if (str[t] == '\0') {
            *n = t;
            break;
        }
    }
    return (g);
}

char **my_str_to_word_array(char *str, const char *separator)
{
    int n = 0;
    char *str2 = returnanstr(str);
    int g = get_nb_words(str2, separator);
    char **stra = malloc(sizeof(char *) * (g + 2));

    stra[g] = NULL;
    convert(stra, str2, separator, &n);
    return (stra);
}

char *returnanstr(char const *argv)
{
    struct stat sb;
    int u;
    char *buff;
    int verifo = 0;

    verifo = open(argv, O_RDONLY);
    stat(argv, &sb);
    u = sb.st_size;
    buff = malloc(sizeof(char) * (u + 1));
    read(verifo, buff, u);
    buff[u] = '\0';
    close(verifo);
    return (buff);
}