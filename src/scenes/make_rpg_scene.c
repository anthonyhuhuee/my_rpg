/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** make_rpg_scene
*/

#include "my_rpg.h"
#include "macros.h"
#include "structs.h"

void make_rpg_scene(game_struct_t *rpg)
{
    sfSprite_setPosition(PLAYER, rpg->player->player_pos);
    sfSprite_setScale(PLAYER, rpg->player->player_scale);
    VIEW = sfView_createFromRect((sfFloatRect){0, 0, 220, 154});
    sfView_setCenter(VIEW, sfSprite_getPosition(PLAYER));
    sfRenderWindow_setView(WINDOW, VIEW);
    all_drawing_sprite(rpg);
    sfSprite_setTextureRect(PLAYER, P_RECT);
    make_player_move(rpg, PLAYER);
    move_rect(P_CLOCK, &P_RECT);
    rpg->player->player_pos = sfSprite_getPosition(PLAYER);
    rpg->player->player_scale = sfSprite_getScale(PLAYER);
}
