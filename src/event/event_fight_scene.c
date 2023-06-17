/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** event_fight_scene
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

void event_fight_menu(game_struct_t *rpg)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(rpg->window, &event)) {
        switch (event.type) {
        case sfEvtClosed:
            sfRenderWindow_close(rpg->window);
            break;
        case sfEvtMouseMoved:
            mouse_hover_fm(rpg, &event.mouseMove);
            break;
        case sfEvtMouseButtonPressed:
            button_pressed_fm(rpg, &event.mouseButton);
            break;
        case sfEvtMouseButtonReleased:
            button_released_fm(rpg);
            break;
        default:
            break;
        }
    }
}
