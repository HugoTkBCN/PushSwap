/*
** EPITECH PROJECT, 2018
** check les arguments et renvoie des erreur
** File description:
** push swap
*/

#include "../include/my.h"


int check_if_sorted(int *list)
{
    if (!list[1])
        return (1);
    for (int i = 0; list[i]; i++) {
        if (list[i + 1] && list[i] > list[i + 1])
            return (0);
    }
    return (1);
}

int check_arg(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("./push_swap nbr nbr nbr ...\n");
        return (1);
    } else if (ac == 1) {
        my_putstr("You must give arguments\n");
        return (1);
    } else {
        return (0);
    }
}

int check_str(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] != '-' && (str[i] < '0' || str[i] > '9'))
            return (EXIT_ERROR);
    }
}

int check_list(char **list)
{
    for (int i = 1; list[i]; i++) {
        if (check_str(list[i]) == EXIT_ERROR) {
            my_putstr("Arguments should be only numbers !\n");
            return (EXIT_ERROR);
        }
    }
    return (0);
}
