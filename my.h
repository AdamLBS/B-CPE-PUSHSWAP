/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
struct node
{
    int data;
    struct node *next;
};
void move(struct node **dest, struct node **src);
void append(struct node **head, int val);
void printlist(struct node *head);
int move_end(struct node **head_ref);
int radix_binary(struct node *l_a, struct node *l_b, int neg);
int manage_neg(struct node *l_a, struct node *l_b, int neg);
int check_neg(struct node *l_a);
int re_put_in_a(struct node *l_a, struct node *l_b, int switch_list);
int is_sorted(struct node *l_a);
int my_putstr(char const *str);
int get_size(struct node *l_a);
void my_putchar (char c);
#endif /* !MY_H_ */
