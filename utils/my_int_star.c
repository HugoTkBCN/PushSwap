/*
** EPITECH PROJECT, 2018
** my int star
** File description:
** push swap
*/

#include "../include/my.h"

int my_int_star_len(int *list)
{
    int i = 0;

    if (!list[i])
        return (0);
    else {
        for (i = 0; list[i]; i++) {
        }
    }
    return (i);
}

int *my_int_star_dup(int *list)
{
    int *new_list = malloc(sizeof(int) * (my_int_star_len(list) + 1));

    if (new_list == NULL)
        return (NULL);
    else if (list[0]) {
        for (int i = 0; list[i]; i++)
            new_list[i] = list[i];
        return (new_list);
    } else
        return (NULL);
}
