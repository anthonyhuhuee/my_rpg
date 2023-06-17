/*
** EPITECH PROJECT, 2023
** button_main_menu.c
** File description:
** handilng the button in the main menu
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"

void mouse_hover_mm(game_struct_t *rpg, sfMouseMoveEvent *mouse)
{
    is_mouse_hover(rpg->main_menu->b_play, mouse);
    is_mouse_hover(rpg->main_menu->b_options, mouse);
    is_mouse_hover(rpg->main_menu->b_quit, mouse);
}

void button_pressed_mm(game_struct_t *rpg, sfMouseButtonEvent *mouse)
{
    is_button_clicked(rpg->main_menu->b_play, mouse);
    if (rpg->main_menu->b_play->state == PRESSED) {
        SCENE = RPG;
    }
    is_button_clicked(rpg->main_menu->b_options, mouse);
    if (rpg->main_menu->b_options->state == PRESSED) {
        SCENE = GAME_MENU;
    }
    is_button_clicked(rpg->main_menu->b_quit, mouse);
    if (rpg->main_menu->b_quit->state == PRESSED) {
        sfRenderWindow_close(rpg->window);
    }
}

void button_released_mm(game_struct_t *rpg)
{
    rpg->main_menu->b_play->state = RELEASED;
    rpg->main_menu->b_options->state = RELEASED;
    rpg->main_menu->b_quit->state = RELEASED;
}
