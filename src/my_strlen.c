/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** my_strlen
*/

int my_strlen(char const *string)
{
    int result = 0;
    while (string[result] != '\0') {
        result += 1;
    }
    return result;
}
