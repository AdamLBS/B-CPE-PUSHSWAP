/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** append TEST JENKINS
*/

#include "my.h"

void append(node_t **head, long val, node_t **tail)
{
    node_t *new_node = malloc(sizeof(node_t));
    new_node->data = val;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
        *tail = new_node;
    } else {
        node_t *last = *tail;
        last->next = new_node;
        *tail = last->next;
    }
}
