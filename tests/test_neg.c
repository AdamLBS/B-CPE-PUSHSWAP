/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** test_size
*/

#include <criterion/criterion.h>
#include "../my.h"

Test(neg, is_neg)
{
    char **av[] = {"1", "-1", "1000000", "20000000", "12", "444"};
    node_t *list = NULL;
    makelist(&list, av, 6);
    cr_expect_eq(check_neg(list), 1);
}
