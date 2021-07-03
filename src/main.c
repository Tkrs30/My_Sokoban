/*
** EPITECH PROJECT, 2020
** bootstrapmysokoban
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char **argv)
{
    sd structd;
    sd *masterstru;

    initialisation(&structd);
    initscr();
    getmaxyx(stdscr, structd.max_y, structd.max_x);
    structd.map = my_str_to_word_array(argv[1], "\n");
    error(argc, structd.map);
    getmapsize(&structd);
    masterstru = malloc(sizeof(sd) * count_O(structd.map));
    masterstru = registercoo(masterstru, structd.map);
    structd.nb_O = count_O(structd.map);
    initscr();
    noecho();
    curs_set(FALSE);
    searchbasecoo(&structd, structd.map);
    start(structd, masterstru);
    return (0);
}

sd *registercoo(sd *masterstru, char **map)
{
    temp temp0 = {0, 0, 0};

    for (; map[temp0.i] != NULL; temp0.i++) {
        for (temp0.j = 0; map[temp0.i][temp0.j]; temp0.j++) {
            masterstru = ifregistercoo(masterstru, &temp0, map);
        }
    }
    return (masterstru);
}

sd *ifregistercoo(sd *masterstru, temp *temp0, char **map)
{
    if (map[temp0->i][temp0->j] == 'O') {
        masterstru[temp0->t].x = temp0->j;
        masterstru[temp0->t].y = temp0->i;
        temp0->t++;
    }
    return (masterstru);
}

int count_O(char **map)
{
    int count = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j]; j++) {
            if (map[i][j] == 'O')
                count++;
        }
    }
    return (count);
}

int ifcount_O(char **map, int i, int j, int count)
{
    if (map[i][j] == 'O')
        count++;
    return (count);
}