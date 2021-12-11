/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** my
*/
#include "linked_list.h"
#include <stdlib.h>
#ifndef MY_H_
#define MY_H_
void move(node_t **dest, node_t **src);
void append(node_t **head, long int val);
void printlist(node_t *head);
int move_end(node_t **head_ref);
int radix_binary(node_t *l_a, node_t *l_b, int neg, int size);
int manage_neg(node_t *l_a, node_t *l_b, int neg, int size);
int check_neg(node_t *l_a);
int re_put_in_a(node_t *l_a, node_t *l_b, int switch_list);
int is_sorted(node_t *l_a);
int my_putstr(char const *str);
int get_size(node_t *l_a);
void my_putchar (char c);
long int my_get_nbr(char *str);
#endif /* !MY_H_ */
