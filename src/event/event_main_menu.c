/*
** EPITECH PROJECT, 2023
** event_main_menu.c
** File description:
** event function when in the main menu
*/

#include "structs.h"
#include "my_rpg.h"

void event_main_menu(game_struct_t *rpg)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(rpg->window, &event)) {
        switch (event.type) {
        case sfEvtClosed:
            sfRenderWindow_close(rpg->window);
            break;
        case sfEvtMouseMoved:
            mouse_hover_mm(rpg, &event.mouseMove);
            break;
        case sfEvtMouseButtonPressed:
            button_pressed_mm(rpg, &event.mouseButton);
            break;
        case sfEvtMouseButtonReleased:
            button_released_mm(rpg);
            break;
        default:
            break;
        }
    }
}
