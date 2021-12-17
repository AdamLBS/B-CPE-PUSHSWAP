/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-adam.elaoumari
** File description:
** my_get_nbr
*/

long my_get_nbr(char *str)
{
    long i = 0, nb = 0, neg = 0;
    while (str[i] != '\0') {
        if (str[i] == '-')
        {
            neg = 1;
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - 48;
            i = i + 1;
        }
    }
    if (neg == 1)
        nb = (nb * -1);
    return nb;
}
