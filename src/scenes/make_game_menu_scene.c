/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** make_game_menu_scene
*/

#include "my_rpg.h"
#include "macros.h"
#include "structs.h"

void draw_inventory(game_struct_t *rpg)
{
    rpg->game_menu->inv_bandage = create_text(rpg->font,
    int_to_str(rpg->player->inventory->bandage), 750, 572);
    sfText_setCharacterSize(rpg->game_menu->inv_bandage, 60);
    rpg->game_menu->inv_scissors = create_text(rpg->font,
    int_to_str(rpg->player->inventory->scissors), 1718, 576);
    sfText_setCharacterSize(rpg->game_menu->inv_scissors, 60);
    sfRenderWindow_drawSprite(WINDOW, rpg->game_menu->s_inventory, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->game_menu->inv_bandage, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->game_menu->inv_scissors, NULL);
}

void make_game_menu_scene(game_struct_t *rpg)
{
    VIEW = sfView_createFromRect((sfFloatRect){0, 0, WIN_HEI, WIN_WID});
    sfRenderWindow_setView(WINDOW, VIEW);
    sfIntRect rect = (sfIntRect){0, 0, PLAYER_SIZE_X, PLAYER_SIZE_Y};
    sfSprite_setTextureRect(PLAYER, rect);
    sfRenderWindow_drawSprite(WINDOW, rpg->game_menu->background, NULL);
    draw_buttons(rpg, rpg->game_menu->b_menu);
    draw_buttons(rpg, rpg->game_menu->b_inventory);
    draw_buttons(rpg, rpg->game_menu->b_settings);
    draw_buttons(rpg, rpg->game_menu->b_htp);
    if (rpg->game_menu->menus == HOWTOPLAY)
        sfRenderWindow_drawSprite(WINDOW, rpg->game_menu->how_to_play, NULL);
    if (rpg->game_menu->menus == SETTINGS)
        sfRenderWindow_drawSprite(WINDOW, rpg->game_menu->s_settings, NULL);
    if (rpg->game_menu->menus == INVENTORY) {
        draw_inventory(rpg);
    }
    sfRenderWindow_drawText(WINDOW, rpg->game_menu->menu, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->game_menu->inventory, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->game_menu->settings, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->game_menu->htp, NULL);
}
