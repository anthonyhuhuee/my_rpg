/*
** EPITECH PROJECT, 2023
** is_clicked.c
** File description:
** check if button given is clicked
*/

#include "structs.h"

void is_button_clicked(t_gui_object *button, sfMouseButtonEvent *mouse)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(button->rect);
    if (sfFloatRect_contains(&rect, mouse->x, mouse->y) == sfTrue) {
        button->state = PRESSED;
    } else {
        button->state = RELEASED;
    }
}
