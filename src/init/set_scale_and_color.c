/*
** EPITECH PROJECT, 2023
** set scale and color
** File description:
** set scale and color
*/

#include "macros.h"
#include "structs.h"
#include "my_rpg.h"

void set_scale_and_color(sfText *text, int size, sfColor color)
{
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, color);

    return;
}
