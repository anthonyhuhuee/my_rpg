/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** check_pixel_color
*/

#include <SFML/Graphics.h>

sfBool check_pixel_color(sfColor pixel, sfColor color)
{
    if (pixel.a == color.a &&
        pixel.b == color.b &&
        pixel.g == color.g &&
        pixel.r == color.r)
            return sfTrue;
    return sfFalse;
}
