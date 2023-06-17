/*
** EPITECH PROJECT, 2023
** destroy button
** File description:
** destroy button
*/

#include <stdlib.h>

#include "structs.h"
#include "my_rpg.h"

void destroy_button(t_gui_object *button)
{
    sfRectangleShape_destroy(button->rect);
    sfSprite_destroy(button->normal);
    sfSprite_destroy(button->hover);
    sfSprite_destroy(button->pressed);
}
