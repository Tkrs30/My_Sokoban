/*
** EPITECH PROJECT, 2020
** B-PSU-200-MPL-2-1-mysokoban-hugo.frango
** File description:
** error2.c
*/

#include "my.h"

void ifmaperror3(char **map, int i, int j, int *nbx)
{
    if (map[i][j] == 'X')
        *nbx += 1;
}

void ifmaperror4(char **map, int i, int j, int *nbo)
{
    if (map[i][j] == 'O')
        *nbo += 1;
}

void ifmaperror2(char **map, int i, int j, int *param)
{
    if (map[i][j] == 'P') {
        *param += 1;
    }
}

void ifmaperror1(char **map, int i, int j)
{
    if (map[i][j] != ' ' && map[i][j] != '#' && \
    map[i][j] != 'P' && map[i][j] != 'X' && map[i][j] != 'O') {
        exit(84);
    }
}