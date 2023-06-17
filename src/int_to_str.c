/*
** EPITECH PROJECT, 2023
** int_to_strc
** File description:
** switch an int to a string
*/

#include <stdlib.h>

int count_ints(int nb)
{
    int result = 0;
    for (int i = 0; nb > 0; i++) {
        nb = nb / 10;
        result++;
    }
    return result;
}

char *int_to_str(int nb)
{
    int sign = 0;
    if (nb < 0) {
        sign = 1;
        nb *= -1;
    }
    if (nb == 0)
        return "0";
    int nb_len = count_ints(nb);
    char *str = malloc(sizeof(char) * (nb_len + sign +1));
    if (sign == 1)
        str[0] = '-';
    str[nb_len + sign] = '\0';
    for (int j = nb_len + sign - 1; nb > 0; j--) {
        str[j] = nb % 10 + '0';
        nb = nb / 10;
    }
    return str;
}
