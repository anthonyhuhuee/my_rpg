/*
** EPITECH PROJECT, 2023
** init player struct
** File description:
** init player struct
*/

#include <stdlib.h>

#include "my_rpg.h"
#include "structs.h"
#include "macros.h"

game_struct_t *init_player_struct(game_struct_t *result)
{
    result->player = malloc(sizeof(player_struct_t));
    result->player->movement = init_movements();
    result->player->walk = sfTexture_copyToImage(result->textures->walk);
    result->player->player_stats = init_player_stats();
    result->player->inventory = init_inventory();

    sfFloatRect view_rect = {0, 0, WIN_WID, WIN_HEI};
    result->player->view = sfView_createFromRect(view_rect);

    sfIntRect player_rect = {0, 0, PLAYER_SIZE_X, PLAYER_SIZE_Y};
    result->player->player_rect = player_rect;

    result->player->player_clock = sfClock_create();
    result->player->player_pos = (sfVector2f){259, 120};
    result->player->player_scale = (sfVector2f){0.025, 0.025};

    return result;
}
