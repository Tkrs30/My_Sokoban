/*
** EPITECH PROJECT, 2020
** bootstrapmysokoban
** File description:
** file2.c
*/

#include "my.h"

void start(sd structd, sd *masterstru)
{
    int result;

    while (result != 80) {
        clear();
        getmaxyx(stdscr, structd.max_y, structd.max_x);
        calccoowin(&structd);
        printallwin(structd);
        result = getch();
        refresh();
        switchf(&structd, &result);
        verifcoll2(&structd, &result, masterstru);
        verifcoll(&structd, &result);
        if (verifwin(&structd) == 1)
            break ;
    }
    endfunc(structd, masterstru);
    refresh();
    endwin();
    exit(0);
}

void verifcoll(sd *structd, int *result)
{
    if (structd->map[structd->y][structd->x] == '#' || \
    structd->map[structd->y][structd->x] == 'X') {
        switch (*result) {
            case 67:
                structd->x -= 1;
                break;
            case 68:
                structd->x += 1;
                break;
            case 65:
                structd->y += 1;
                break;
            case 66:
                structd->y -= 1;
                break;
        }
    }
}

void verifcoll2(sd *structd, int *result, sd *masterstru)
{
    if (structd->map[structd->y][structd->x] == 'X') {
        switch (*result) {
            case 67:
                move_x(structd->x + 1, structd->y, structd, masterstru);
                break;
            case 68:
                move_x(structd->x - 1, structd->y, structd, masterstru);
                break;
            case 65:
                move_x(structd->x, structd->y - 1, structd, masterstru);
                break;
            case 66:
                move_x(structd->x, structd->y + 1, structd, masterstru);
                break;
        }
    }
}

void move_x(int x, int y, sd *structd, sd *masterstru)
{
    if (structd->map[y][x] != '#' && structd->map[y][x] != 'X') {
        structd->map[structd->y][structd->x] = ' ';
        structd->map[y][x] = 'X';
        for (int i = 0; i != structd->nb_O; i++) {
            if (structd->x == masterstru[i].x && \
            structd->y == masterstru[i].y) {
                structd->map[structd->y][structd->x] = 'O';
            }
        }
    }
}

void switchf(sd *structd, int *result)
{
    switch(*result) {
    case 67:
        structd->x += 1;
        break;
    case 68:
        structd->x -= 1;
        break;
    case 65:
        structd->y -= 1;
        break;
    case 66:
        structd->y += 1;
        break;
    }
}

//mvprintw(structd.max_x / 2, structd.max_y / 2, "%s\n", structd.map[i]);