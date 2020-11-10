/*
** EPITECH PROJECT, 2018
** include
** File description:
** my.h
*/

#ifndef MY_H_
# define MY_H_
# define EXIT_ERROR 84

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int *clean_list(int *);
int *remove_first(int *);
int *put_save_in_first(int *, int);
void put_b_in_a(int **, int *);
int *put_lower_first(int *);
int first_is_lower(int *);
int *get_size(int *, int **);
void print_list(int *);
int push_swap(int **);
int *get_nbrs(int *, char **);
void my_putchar(char);
int my_put_nbr(int);
void my_putstr(char const *);
int my_strlen(char const *);
int str_to_int(char *);
char *int_to_str(int);
int *swap(int *, char);
int **pick_b(int **, int*);
int **pick_a(int **, int*);
int *r_first_last(int *, char);
int *rr_last_first(int *, char);
void double_swap(int *, int *);
void double_r(int *, int *);
void double_rr(int *, int *);
char *my_strcpy(char *, char const *);
char *my_strdup(char const *);
int check_arg(int, char **);
int check_str(char *);
int check_list(char **);
int check_if_sorted(int *);
int my_int_star_len(int *list);
int *my_int_star_dup(int *list);
char *my_revstr(char *str);
int **mem_alloc_2d_int(int nb_rows, int nb_cols);
#endif /* !MY_H_ */
