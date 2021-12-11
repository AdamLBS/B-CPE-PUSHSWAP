/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** linked_list
*/

#include "my.h"

void move(node_t **dest, node_t **src)
{
    node_t *new_node = *src;
    *src = (*src)->next;
    new_node->next = *dest;
    *dest = new_node; 
}

void append(node_t **head, int val)
{
    node_t *new_node = malloc(sizeof(node_t));
    new_node->data = val;
    new_node->next = NULL;
    if (*head == NULL)
         *head = new_node;
    else {
        node_t *last = *head;
        while(last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }
}

int move_end(node_t **head_ref)
{
    if (*head_ref == NULL)
        return 0;
    if (get_size(*head_ref) < 2)
        return 0;
    node_t *first = *head_ref;
    node_t *last = *head_ref;
    for (;last->next != NULL; last = last->next)
    {}
    *head_ref = first->next;
    first->next = NULL;
    last->next = first;
}

int get_size(node_t *l_a)
{
    node_t *temp = l_a;
    int size;
    for (size = 0; temp != NULL; size++)
        temp = temp->next;
    return size;
}