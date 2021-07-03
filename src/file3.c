/*
** EPITECH PROJECT, 2020
** bootstrapmysokoban
** File description:
** file3.c
*/

#include "my.h"

void searchbasecoo(sd *structd, char **map)
{
    int i = 0;
    int b = 0;

    for (; map[i] != NULL; i++) {
        for (b = 0; map[i][b]; b++) {
            ifsearchbasecoo(i, b, structd, map);
        }
    }
}

int ifsearchbasecoo(int i, int b, sd *structd, char **map)
{
    if (map[i][b] == 'P') {
        map[i][b] = ' ';
        structd->y = i;
        structd->x = b;
        return (1);
    }
    return (0);
}

void initialisation(sd *structd)
{
    structd->x = 0;
    structd->y = 0;
    structd->nb_O = 0;
}

int verifwin(sd *structd)
{
    int c = 0;

    for (int i = 0; structd->map[i] != NULL; i++) {
        for (int j = 0; structd->map[i][j] != '\0'; j++) {
            c = ifverifwin(structd, i, j, c);
        }
    }
    if (c == 0)
        return (1);
    return (0);
}

int ifverifwin(sd *structd, int i, int j, int c)
{
    if (structd->map[i][j] == 'O')
        c++;
    return (c);
}