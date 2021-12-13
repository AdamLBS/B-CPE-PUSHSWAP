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
void pa(node_t **dest, node_t **src, node_t **tail);
void pb(node_t **dest, node_t **src, node_t **tail);
void append(node_t **head, long int val, node_t **tail);
void printlist(node_t *head);
int move_end(node_t **head_ref, node_t **tail);
int radix_binary(node_t *l_a, node_t *l_b, int neg, int size, node_t *tail);
int manage_neg(node_t *l_a, node_t *l_b, int neg, int size, node_t *tail);
int check_neg(node_t *l_a);
int re_put_in_a(node_t *l_a, node_t *l_b, int switch_list);
int is_sorted(node_t *l_a);
int my_putstr(char const *str);
int get_size(node_t *l_a);
void my_putchar (char c);
long int my_get_nbr(char *str);
#endif /* !MY_H_ */
