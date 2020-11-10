/*
** EPITECH PROJECT, 2018
** my pushswap
** File description:
** swap element and display algo
*/

#include "include/my.h"

int first_is_lower(int *list)
{
    for (int i = 1; list[i]; i++) {
        if (list[0] > list[i])
            return (0);
    }
    return (1);
}

int *put_lower_first(int *list)
{
    for (int i = 0; first_is_lower(list) == 0; i++) {
        list = r_first_last(list, 'a');
    }
    return (list);
}

void put_b_in_a(int **list, int *size)
{
    for (int i = 0; i < size[2]; i++) {
        size = get_size(size, list);
        list = pick_a(list, size);
        if (i + 1 != size[2])
            my_putchar(' ');
        else
            my_putchar('\n');
    }
}

int *get_size(int *size, int **list)
{
    size[0] = 0;
    size[1] = 0;
    for (int i = 0; list[0][i]; i++)
        size[0] = size[0] + 1;
    for (int i = 0; list[1][i]; i++)
        size[1] = size[1] + 1;
    return (size);
}

int push_swap(int **list)
{
    int *size = malloc(sizeof(int) * 3);

    size = get_size(size, list);
    size[2] = size[0];
    while (list[0][0]) {
        size = get_size(size, list);
        list[0] = put_lower_first(list[0]);
        list = pick_b(list, size);
    }
    put_b_in_a(list, size);
    free(list[1]);
    free(list[0]);
    free(size);
    return (0);
}
