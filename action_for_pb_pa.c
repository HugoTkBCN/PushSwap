/*
** EPITECH PROJECT, 2018
** action pour pb et pa
** File description:
** pushswap
*/

#include "include/my.h"

int *clean_list(int *list)
{
    for (int i = 0; list[i]; i++)
        list[i] = 0;
    return (list);
}

int *remove_first(int *list)
{
    int *list_save = my_int_star_dup(list);

    if (list_save == NULL)
        return (list);
    list = clean_list(list);
    for (int i = 0; list_save[i + 1]; i++)
        list[i] = list_save[i + 1];
    return (list);
}

int *put_save_in_first(int *list, int save)
{
    int *list_save = my_int_star_dup(list);

    list = clean_list(list);
    list[0] = save;
    if (list_save != NULL) {
        for (int i = 0; list_save[i]; i++)
            list[i + 1] = list_save[i];
    }
    return (list);
}
