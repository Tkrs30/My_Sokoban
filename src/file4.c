/*
** EPITECH PROJECT, 2020
** bootstrapmysokoban
** File description:
** file4.c
*/

#include "my.h"

void getmapsize(sd *structd)
{
    int i = 0;
    int j = 0;

    for (; structd->map[i] != NULL; i++)
        for (j = 0; structd->map[i][j] != 0; j++);
    structd->map_y = i;
    structd->map_x = j;
}

void calccoowin(sd *structd)
{
    structd->coox = structd->max_x / 2 - structd->map_x / 2;
    structd->cooy = structd->max_y / 2 - structd->map_y / 2;
}

void printallwin(sd structd)
{
    move(structd.cooy, structd.coox);
    for (int i = 0; structd.map[i] != NULL; i++)
        mvprintw(structd.cooy + i, structd.coox, "%s\n", structd.map[i]);
    mvprintw(structd.y + structd.cooy, structd.x + structd.coox, "P");
}