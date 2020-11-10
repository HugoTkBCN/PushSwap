/*
** EPITECH PROJECT, 2018
** action sur la liste a
** File description:
** push swap
*/

#include "include/my.h"

int *swap(int *list, char type)
{
    int save = list[0];

    list[0] = list[1];
    list[1] = save;
    type == 'a' ? my_putstr("sa ") : 0;
    type == 'b' ? my_putstr("sb ") : 0;
    return (list);
}

int **pick_b(int **list, int *size)
{
    int save = list[0][0];

    list[0] = remove_first(list[0]);
    list[1] = put_save_in_first(list[1], save);
    my_putstr("pb ");
    return (list);
}

int **pick_a(int **list, int *size)
{
    int save = list[1][0];

    list[1] = remove_first(list[1]);
    list[0] = put_save_in_first(list[0], save);
    my_putstr("pa");
    return (list);
}

int *r_first_last(int *list, char type)
{
    int save = list[0];

    for (int i = 0; list[i]; i++) {
        if (list[i + 1])
            list[i] = list[i + 1];
        else
            list[i] = save;
    }
    type == 'a' ? my_putstr("ra ") : 0;
    type == 'b' ? my_putstr("rb ") : 0;
    return (list);
}

int *rr_last_first(int *list, char type)
{
    int y = 0;
    int *save;

    while (list[y])
        y++;
    save = malloc(sizeof(int) * y);
    for (int i = 0; list[i]; i++)
        save[i] = list[i];
    for (int i = 0; list[i]; i++) {
        if (i == 0)
            list[i] = list[y - 1];
        else
            list[i] = save[i - 1];
    }
    type == 'a' ? my_putstr("rra ") : 0;
    type == 'b' ? my_putstr("rrb ") : 0;
    free(save);
    return (list);
}
