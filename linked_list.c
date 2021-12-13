/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** linked_list
*/

#include "my.h"

void pa(node_t **dest, node_t **src, node_t **tail)
{
    node_t *new_node = *src;
    *src = (*src)->next;
    new_node->next = *dest;
    *dest = new_node;
    if ((*dest)->next == NULL)
    *tail = *dest;
}

void pb(node_t **dest, node_t **src, node_t **tail)
{
    node_t *new_node = *src;
    *src = (*src)->next;
    new_node->next = *dest;
    *dest = new_node; 
}

void append(node_t **head, long val, node_t **tail)
{
    node_t *new_node = malloc(sizeof(node_t));
    new_node->data = val;
    new_node->next = NULL;
    if (*head == NULL){
         *head = new_node;
         *tail = new_node;
    }else {
        node_t *last = *head;
        while(last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
        *tail = last->next;
    }
}

int move_end(node_t **head_ref, node_t **tail)
{
    if (*head_ref == NULL)
        return 0;
    node_t *first = *head_ref;
    node_t *last = *tail;
    *head_ref = first->next;
    first->next = NULL;
    last->next = first;
    *tail = last->next;
}

int get_size(node_t *l_a)
{
    node_t *temp = l_a;
    int size;
    for (size = 0; temp != NULL; size++)
        temp = temp->next;
    return size;
}