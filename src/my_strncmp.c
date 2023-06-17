/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int str1 = 0;
    int str2 = 0;
    int i = 0;
    while (i < n){
        str1 = str1 + s1[i];
        str2 = str2 + s2[i];
        i = i + 1;
    }
    if (str1 == str2){
        return (0);
    }
    if (str1 < str2){
        return (str1 - str2);
    } else {
        return (str1 - str2);
    }
}
