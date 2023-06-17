/*
** EPITECH PROJECT, 2023
** event_game_menu.c
** File description:
** event file for the game menu event
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

void event_game_menu(game_struct_t *rpg)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(WINDOW, &event)) {
        switch (event.type) {
            case sfEvtClosed:
                sfRenderWindow_close(WINDOW);
                break;
            case sfEvtMouseMoved:
                mouse_hover_gm(rpg, &event.mouseMove);
                break;
            case sfEvtMouseButtonPressed:
                button_pressed_gm(rpg, &event.mouseButton);
                break;
            case sfEvtMouseButtonReleased:
                button_released_gm(rpg);
                break;
            default:
                break;
        }
    }
}
