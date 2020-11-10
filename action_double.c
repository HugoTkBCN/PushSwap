/*
** EPITECH PROJECT, 2018
** action deux fois
** File description:
** push swap
*/

#include "include/my.h"

void double_swap(int *list_a, int *list_b)
{
    list_a = swap(list_a, 'c');
    list_b = swap(list_b, 'c');
    my_putstr("sc ");
}

void double_r(int *list_a, int *list_b)
{
    list_a = r_first_last(list_a, 'r');
    list_b = r_first_last(list_b, 'r');
    my_putstr("rr ");
}

void double_rr(int *list_a, int *list_b)
{
    list_a = rr_last_first(list_a, 'r');
    list_b = rr_last_first(list_b, 'r');
    my_putstr("rrr ");
}
