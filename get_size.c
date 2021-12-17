/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** get_size
*/

#include "my.h"

int get_size(node_t *l_a)
{
    node_t *temp = l_a;
    int size;
    for (size = 0; temp != NULL; size++)
        temp = temp->next;
    return size;
}
