/*
** EPITECH PROJECT, 2020
** bootstrapmysokoban
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H
#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct {
    int x;
    int y;
    char **map;
    int nb_O;
    int max_y;
    int max_x;
    int map_x;
    int map_y;
    int coox;
    int cooy;
}sd;

typedef struct temp {
    int i;
    int j;
    int t;
}temp;

void initialisation(sd *structd);

void switchf(sd *structd, int *result);

void start(sd structd, sd *masterstru);

char **my_str_to_word_array(char *str, const char *separator);

int count_size_one_word(char const *str, char const *separator, int *n);

char *returnanstr(char const *argv);

int get_nb_words(const char *str, const char *separator);

void convert(char **tab, char const *str, char const *src, int *n);

int ifgetnbwords(char const *str, char const *separator, int count, int i);

int ifsearchbasecoo(int i, int b, sd *structd, char **map);

void searchbasecoo(sd *structd, char **map);

void verifcoll(sd *structd, int *result);

void verifcoll2(sd *structd, int *result, sd *masterstru);

void move_x(int x, int y, sd *structd, sd *masterstru);

int count_O(char **map);

int ifcount_O(char **map, int i, int j, int count);

sd *registercoo(sd *masterstru, char **map);

sd *ifregistercoo(sd *masterstru, temp *temp0, char **map);

void error(int argc, char **map);

void maperror(char **map);

void ifmaperror2(char **map, int i, int j, int *param);

void ifmaperror1(char **map, int i, int j);

int verifwin(sd *structd);

int ifverifwin(sd *structd, int i, int j, int c);

void getmapsize(sd *structd);

void calccoowin(sd *structd);

void printallwin(sd structd);

void ifmaperror3(char **map, int i, int j, int *nbx);

void ifmaperror4(char **map, int i, int j, int *nbo);

void endfunc(sd structd, sd *masterstru);

#endif