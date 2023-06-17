/*
** EPITECH PROJECT, 2023
** init_game_menu.c
** File description:
** initialize the game menu for rpg
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"
#include <stdlib.h>

sfSprite *init_sprite(char *filepath)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *new_texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(sprite, new_texture, true);
    return sprite;
}

game_menu_t *init_game_menu(game_struct_t *rpg)
{
    game_menu_t *result = malloc(sizeof(game_menu_t));
    result->background = init_sprite(SETT_BG_PATH);
    result->how_to_play = init_sprite(HTP_PATH);
    result->s_settings = init_sprite(SETT_PATH);
    result->s_inventory = init_sprite(INV_PATH);
    result->menus = SETTINGS;
    result->b_menu = create_button(50, 50);
    result->b_settings = create_button(230, 50);
    result->b_inventory = create_button(410, 50);
    result->b_htp = create_button(590, 50);
    result->menu = create_text_mm(rpg->font, "Menu", 80, 50);
    result->settings = create_text_mm(rpg->font, "Settings", 239, 50);
    result->inventory = create_text_mm(rpg->font, "Inventory", 414, 55);
    sfText_setCharacterSize(result->inventory, 42);
    result->htp = create_text_mm(rpg->font, "HTP", 640, 50);
    result->inv_bandage = NULL;
    result->inv_scissors = NULL;
    return result;
}
