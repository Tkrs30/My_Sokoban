/*
** EPITECH PROJECT, 2020
** bootstrapmysokoban
** File description:
** error.c
*/

#include "../include/my.h"

void error(int argc, char **map)
{
    if (argc != 2) {
        exit(84);
    }
    maperror(map);
}

void maperror(char **map)
{
    int error = 0;
    int nbx = 0;
    int nbo = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            ifmaperror1(map, i, j);
            ifmaperror2(map, i, j, &error);
            ifmaperror3(map, i, j, &nbx);
            ifmaperror4(map, i, j, &nbo);
        }
    }
    if (error == 0 || nbx != nbo) {
        exit(84);
    }
}

void endfunc(sd structd, sd *masterstru)
{
    printallwin(structd);
    free(masterstru);
    for (int i = 0; structd.map[i] != NULL; i++) {
        free(structd.map[i]);
    }
    free(structd.map);
}