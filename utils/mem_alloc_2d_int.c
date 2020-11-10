/*
** EPITECH PROJECT, 2018
** mem alloc 2d int
** File description:
** bootstrap bsq
*/

#include "../include/my.h"

int **mem_alloc_2d_int(int nb_rows, int nb_cols)
{
    int **array = malloc(sizeof(int *) * nb_rows + 1);

    for (int i = 0; i != nb_rows; i++)
        array[i] = malloc(sizeof(int) * nb_cols + 1);
    return (array);
}
