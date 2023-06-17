/*
** EPITECH PROJECT, 2023
** init all sprites
** File description:
** init all sprites
*/

#include <stdlib.h>
#include "my_rpg.h"
#include "structs.h"
#include "macros.h"

game_struct_t *init_all_sprites(game_struct_t *result)
{
    result->sprite_struct = malloc(sizeof(all_sprite_t));
    R_WALLS = create_sprite(R_WALLS, WALLS_TEXTURE, (sfVector2f){0,0});
    R_GROUND = create_sprite(R_GROUND, GROUND_TEXTURE, (sfVector2f){0,0});
    R_PLAYER = create_sprite(R_PLAYER, PLAYER_TEXTURE, (sfVector2f){259, 120});
    R_FIGHTBG = create_sprite(R_FIGHTBG, FIGHTBG_TEXTURE, (sfVector2f){0,0});
    R_RCOP = create_sprite(R_RCOP, RCOP_TEXTURE, (sfVector2f){1500, 745});
    R_QUEST = create_sprite(R_QUEST, QUEST_TEXTURE, (sfVector2f){210, 150});
    R_WIN = create_sprite(R_WIN, WIN_TEXTURE, (sfVector2f){0, 0});
    R_LOOSE = create_sprite(R_LOOSE, LOOSE_TEXTURE, (sfVector2f){0, 0});
    R_STATHUD = create_sprite(R_STATHUD, STATHUD_TEXTURE, (sfVector2f){0, 0});
    R_COPHUD = create_sprite(R_COPHUD, COPHUD_TEXTURE, (sfVector2f){1425, 0});
    sfVector2f prisoner_pos = {210, 175};
    R_PRISONER = create_sprite(R_PRISONER, PRISONER_TEXTURE, prisoner_pos);
    sfSprite_setScale(R_RCOP, (sfVector2f){0.35, 0.35});
    sfSprite_setScale(R_PLAYER, (sfVector2f){0.025, 0.025});
    sfSprite_setScale(R_PRISONER, (sfVector2f){0.025, 0.025});
    sfSprite_setScale(R_FIGHTBG, (sfVector2f){5, 4});
    sfSprite_setScale(R_QUEST, (sfVector2f){0.15, 0.15});
    return result;
}
