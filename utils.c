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
    while(temp != NULL)
    {
        if (temp->data < 0)
        return 1;
         temp = temp->next;
    }
    return 0;
}

int put_in_list(node_t *l_a, char **av, int ac)
{
    int i = 1;
    while (av[i] != NULL)
    {
        append(&l_a, my_get_nbr(av[i]));
        i++;
    }
}

int re_put_in_a(node_t *l_a, node_t *l_b, int switch_list)
{
    for (; switch_list > 0; switch_list--)
    {
                my_putstr("pa ");
                move(&l_a, &l_b);
                my_putstr("ra ");
                move_end(&l_a);
    }
}