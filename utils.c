/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** utils
*/

#include "my.h"

int is_sorted(node_t *l_a)
{
    node_t *temp = l_a;
    int size = get_size(l_a);
    while (size != 1)
    {
        if (temp->data > temp->next->data)
            return 0;
        temp = temp->next;
        size--;
    }
    return 1;
}

int check_neg(node_t *l_a)
{
    int neg;
    node_t *temp = l_a;
    while (temp != NULL)
    {
        if (temp->data < 0)
            return 1;
        temp = temp->next;
    }
    return 0;
}
