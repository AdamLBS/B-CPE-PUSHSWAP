/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** my_get_nbr
*/

int my_get_nbr(char *str)
{
    int i = 0;
    int nb = 0;
    while (str[i] != '\0' ) {
        while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10;
        nb = nb + str[i] - 48;
        i = i + 1;
        }
    }
    return nb;
} 