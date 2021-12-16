/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** test_is_sorted
*/

#include <criterion/criterion.h>
#include "../my.h"

Test(sorted, nb_sorted)
{
    char **av[] = {"1", "1", "1000000", "20000000"};
    node_t *list = NULL;
    makelist(&list, av, 4);
    cr_expect_eq(is_sorted(list), 1);
}
