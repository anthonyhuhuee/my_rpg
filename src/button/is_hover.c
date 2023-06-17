/*
** EPITECH PROJECT, 2023
** is_hover.c
** File description:
** check if mouse if hover button given
*/

#include "structs.h"

void is_mouse_hover(t_gui_object *button, sfMouseMoveEvent *mouse)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(button->rect);
    if (sfFloatRect_contains(&rect, mouse->x, mouse->y) == sfTrue &&
        button->state != PRESSED) {
            button->state = HOVER;
    } else {
        button->state = RELEASED;
    }
}
