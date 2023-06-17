/*
** EPITECH PROJECT, 2023
** button_game_menu.c
** File description:
** handle the gem menu buttons
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

void mouse_hover_gm(game_struct_t *rpg, sfMouseMoveEvent *mouse)
{
    is_mouse_hover(rpg->game_menu->b_menu, mouse);
    is_mouse_hover(rpg->game_menu->b_settings, mouse);
    is_mouse_hover(rpg->game_menu->b_inventory, mouse);
    is_mouse_hover(rpg->game_menu->b_htp, mouse);
}

void button_pressed_gm(game_struct_t *rpg, sfMouseButtonEvent *mouse)
{
    is_button_clicked(rpg->game_menu->b_menu, mouse);
    if (rpg->game_menu->b_menu->state == PRESSED) {
        rpg->scene = MAIN_MENU;
    }
    is_button_clicked(rpg->game_menu->b_settings, mouse);
    if (rpg->game_menu->b_settings->state == PRESSED) {
        rpg->game_menu->menus = SETTINGS;
    }
    is_button_clicked(rpg->game_menu->b_inventory, mouse);
    if (rpg->game_menu->b_inventory->state == PRESSED) {
        rpg->game_menu->menus = INVENTORY;
    }
    is_button_clicked(rpg->game_menu->b_htp, mouse);
    if (rpg->game_menu->b_htp->state == PRESSED) {
        rpg->game_menu->menus = HOWTOPLAY;
    }
}

void button_released_gm(game_struct_t *rpg)
{
    rpg->game_menu->b_menu->state = RELEASED;
    rpg->game_menu->b_settings->state = RELEASED;
    rpg->game_menu->b_inventory->state = RELEASED;
    rpg->game_menu->b_htp->state = RELEASED;
}
