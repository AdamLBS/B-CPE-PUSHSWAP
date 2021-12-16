/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** make_list
*/

#include "../my.h"

void *makelist(node_t **l_a, char **mychar, int i)
{
    int j = 0;
    node_t *tail = NULL;
    while (j != i)
    {
        append(l_a, my_get_nbr(mychar[j]), &tail);
        j++;
    }
}
