/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** pushswap.c
*/

#include<stdio.h>
#include<stdlib.h>
#include "my.h"

/*void printlist(struct node *head)
{
    struct node *temp = head;
    for(;temp != NULL; temp = temp->next)
    {
         printf("%d ", temp->data);
    }
}*/

int radix_binary(node_t *l_a, node_t *l_b, int neg, int size, node_t *tail)
{
    int switch_list = 0, count = 0;
    for (int i = 0 ; i <= 31; i++) {
        for (int tmp = size; tmp != 0; tmp--){
            if ((l_a->data >> i & 1)){
                move_end(&l_a, &tail);
                my_putstr("ra ");
                } else {
                    pb(&l_b, &l_a, &tail);
                    my_putstr("pb ");
                    count++;
                    }
                }
                for (; count != 0; count--)
                {
                    pa(&l_a, &l_b, &tail);
                    my_putstr("pa ");
                }
    }
    manage_neg(l_a, l_b, neg, size, tail);
}

int manage_neg(node_t *l_a, node_t *l_b, int neg, int size, node_t *tail)
{
    if (neg == 0)
    return 0;
    while (size != 0)
    {
            if ((l_a->data >> 31 == 0)){
                move_end(&l_a, &tail);
                my_putstr("ra ");
                size--;
            } else
            size--;
    }
    printlist(l_a);
} 

int main(int ac, char **av)
{
    node_t *l_a = NULL;
    node_t *l_b = NULL;
    node_t *tail = NULL;
    int i = 1;
    if (ac == 1)
    return 84;
    while (av[i] != NULL)
    {
        append(&l_a, my_get_nbr(av[i]), &tail);
        i++;
    }
    int sorted = is_sorted(l_a);
    if (sorted == 1 || ac == 2) 
    {
        my_putchar('\n');
        return 0;
    }
    int neg = check_neg(l_a);
    int size = get_size(l_a);
    radix_binary(l_a, l_b, neg, size, tail);
    my_putstr("rb\n");
    return 0;
}
