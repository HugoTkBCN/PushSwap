/*
** EPITECH PROJECT, 2018
** main
** File description:
** push swap
*/

#include "include/my.h"

void print_list(int *list)
{
    my_putchar('\n');
    my_putstr("list=");
    my_putchar(' ');
    for (int i = 0; list[i]; i++) {
        my_put_nbr(list[i]);
        my_putchar(' ');
    }
    my_putchar('\n');
}

int *get_nbrs(int *nbr, char **av)
{
    for (int i = 1; av[i]; i++)
        nbr[i - 1] = str_to_int(av[i]);
    return (nbr);
}

int main(int ac, char **av)
{
    int **list = mem_alloc_2d_int(2, ac);
    int ret = check_arg(ac, av);

    if (ret == 1)
        return (0);
    else if (list[1] == NULL || list[0] == NULL)
        return (EXIT_ERROR);
    list[0] = get_nbrs(list[0], av);
    if (check_list(av) == 84)
        return (EXIT_ERROR);
    else if (check_if_sorted(list[0]) == 1) {
        my_putchar('\n');
        return (0);
    }
    ret = push_swap(list);
    if (ret == EXIT_ERROR)
        return (EXIT_ERROR);
    return (0);
}
