/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** pushswap.c
*/

#include<stdio.h>
#include<stdlib.h>
#include "my.h"

int compute(values *my_val, int i)
{
    if ((my_val->l_a->data >> i & 1)) {
        move_end(&my_val->l_a, &my_val->tail);
        my_putstr("ra ");
    } else {
        pb(&my_val->l_b, &my_val->l_a, &my_val->tail);
        my_putstr("pb ");
        my_val->count++;
    }
}

int radix_binary(values my_val, int size)
{
    int switch_list = 0, count = 0;
    for (int i = 0 ; i <= 31; i++) {
        for (int tmp = size; tmp != 0; tmp--) {
            compute(&my_val, i);
        }
        for (; my_val.count != 0; my_val.count--)
        {
            pb(&my_val.l_a, &my_val.l_b, &my_val.tail);
            my_putstr("pa ");
        }
    }
    manage_neg(my_val, size);
}

int manage_neg(values my_val, int size)
{
    while (size != 0)
    {
        if ((my_val.l_a->data >> 31 == 0)) {
            move_end(&my_val.l_a, &my_val.tail);
            my_putstr("ra ");
            size--;
        } else
            size--;
    }
}

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
