/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** pushswap.c
*/

#include<stdio.h>
#include<stdlib.h>
#include "my.h"

void move(struct node **dest, struct node **src)
{
    struct node *new_node = *src;
    *src = (*src)->next;
    new_node->next = *dest;
    *dest = new_node; 
}
 
void append(struct node **head, int val)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;
    if (*head == NULL)
         *head = new_node;
    else {
        struct node *last = *head;
        while(last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }
}

/*void printlist(struct node *head)
{
    struct node *temp = head;
    for(;temp != NULL; temp = temp->next)
    {
         printf("%d ", temp->data);
    }
}*/

int move_end(struct node **head_ref)
{
    if (*head_ref == NULL)
        return 0;
    if (get_size(*head_ref) < 2)
        return 0;
    struct node *first = *head_ref;
    struct node *last = *head_ref;
    for (;last->next != NULL; last = last->next)
    {}
    *head_ref = first->next;
    first->next = NULL;
    last->next = first;
}

int radix_binary(struct node *l_a, struct node *l_b, int neg)
{
    int switch_list = 0;
    int mask = 0;
    int count = 0;
    int size = get_size(l_a);
    for (int i = 0 ; i < 31; i++) {
        for (int tmp = size; tmp != 0; tmp--){
            if ((l_a->data >> i & 1)){
                move_end(&l_a);
                my_putstr("ra ");
                } else {
                    move(&l_b, &l_a);
                    my_putstr("pb ");
                    count++;
                    }
                }
                for (; count != 0; count--)
                {
                    move(&l_a, &l_b);
                    my_putstr("pa ");
                }
    }
    manage_neg(l_a, l_b, neg);
}

int manage_neg(struct node *l_a, struct node *l_b, int neg)
{
    if (neg == 0)
    return 0;
    int list_size = get_size(l_a);
    while (list_size != 0)
    {
            if ((l_a->data >> 31 == 0)){
                move_end(&l_a);
                my_putstr("ra ");
                list_size--;
            } else
            list_size--;
    }
}

int get_size(struct node *l_a)
{
    struct node *temp = l_a;
    int size;
    for (size = 0; temp != NULL; size++)
        temp = temp->next;
    return size;
}

int check_neg(struct node *l_a)
{
    int neg;
    struct node *temp = l_a;
    while(temp != NULL)
    {
        if (temp->data < 0)
        return 1;
         temp = temp->next;
    }
    return 0;
}

int re_put_in_a(struct node *l_a, struct node *l_b, int switch_list)
{
    for (; switch_list > 0; switch_list--)
    {
                my_putstr("pa ");
                move(&l_a, &l_b);
                my_putstr("ra ");
                move_end(&l_a);
    }
}

int is_sorted(struct node *l_a)
{
    struct node *temp = l_a;
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

int put_in_list(struct node *l_a, char **av, int ac)
{
    int i = 1;
    while (av[i] != NULL)
    {
        append(&l_a, atoi(av[i]));
        i++;
    }
}

int main(int ac, char **av)
{
    struct node *l_a = NULL;
    struct node *l_b = NULL;
    int i = 1;
    if (ac == 1)
    return 84;
    while (av[i] != NULL)
    {
        append(&l_a, atoi(av[i]));
        i++;
    }
    int sorted = is_sorted(l_a);
    if (sorted == 1 || ac == 2) 
    {
        my_putchar('\n');
        return 0;
    }
    int neg = check_neg(l_a);
    radix_binary(l_a, l_b, neg);
    my_putstr("rb\n");
    return 0;
}
