/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** linked_list
*/

#include "my.h"

void do_pa(node_t **dest, node_t **src, node_t **tail)
{
    if (*src == NULL)
        return;
    node_t *new_node = *src;
    *src = (*src)->next;
    new_node->next = *dest;
    *dest = new_node;
    if ((*dest)->next == NULL)
        *tail = *dest;
}

void do_pb(node_t **dest, node_t **src, node_t **tail)
{
    if (*src == NULL)
        return;
    node_t *new_node = *src;
    *src = (*src)->next;
    new_node->next = *dest;
    *dest = new_node;
}

int move_end(node_t **head_ref, node_t **tail)
{
    if (*head_ref == NULL)
        return 0;
    if ((*head_ref)->next == NULL)
        return 0;
    node_t *first = *head_ref;
    node_t *last = *tail;
    *head_ref = first->next;
    first->next = NULL;
    last->next = first;
    *tail = last->next;
}
