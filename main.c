/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** main
*/

#include<stdio.h>
#include<stdlib.h>
#include "my.h"

int main(int ac, char **av)
{
    node_t *l_a = NULL, *l_b = NULL, *tail = NULL;
    int i = 1;
    if (ac == 1)
        return 84;
    while (av[i] != NULL)
    {
        append(&l_a, my_get_nbr(av[i]), &tail);
        i++;
    }
    values my_vals = {l_a, l_b, tail, 1};
    int sorted = is_sorted(l_a);
    if (sorted == 1 || ac == 2) {
        my_putchar('\n');
        return 0;
    }
    int size = get_size(l_a);
    radix_binary(my_vals, size);
    my_putstr("rb\n");
    return 0;
}
