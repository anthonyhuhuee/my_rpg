/*
** EPITECH PROJECT, 2023
** analyse_events.c
** File description:
** analyse_events.c
*/

#include <math.h>

#include "my_rpg.h"
#include "macros.h"
#include "structs.h"

void analyse_events(game_struct_t *rpg)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(WINDOW, &event)) {
        switch (event.type) {
            case sfEvtKeyPressed:
                key_pressed_handling(rpg, &event.key);
                break;
            case sfEvtKeyReleased:
                key_released_handling(rpg, &event.key);
                break;
            case sfEvtClosed:
                sfRenderWindow_close(WINDOW);
                break;
            case sfEvtMouseWheelMoved:
                sfView_setSize(VIEW, get_scroll_size(VIEW, &event.mouseWheel));
                break;
            default:
                break;
        }
    }
}

void event_end_scene(game_struct_t *rpg)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(WINDOW, &event)) {
        switch (event.type) {
            case sfEvtClosed:
                sfRenderWindow_close(WINDOW);
                break;
            case sfEvtMouseMoved:
                mouse_hover_es(rpg, &event.mouseMove);
                break;
            case sfEvtMouseButtonPressed:
                button_pressed_es(rpg, &event.mouseButton);
                break;
            case sfEvtMouseButtonReleased:
                button_released_es(rpg);
                break;
            default:
                break;
        }
    }
}

void handling_events(game_struct_t *rpg)
{
    switch (SCENE) {
        case RPG:
            analyse_events(rpg);
            break;
        case FIGHT:
            event_fight_menu(rpg);
            break;
        case MAIN_MENU:
            event_main_menu(rpg);
            break;
        case GAME_MENU:
            event_game_menu(rpg);
            break;
        case END:
            event_end_scene(rpg);
            break;
    }
}
