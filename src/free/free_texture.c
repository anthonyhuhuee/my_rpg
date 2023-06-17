/*
** EPITECH PROJECT, 2023
** free texture
** File description:
** free texture
*/

#include <stdlib.h>

#include "structs.h"

void free_texture(game_struct_t *rpg)
{
    sfTexture_destroy(rpg->textures->ground_map);
    sfTexture_destroy(rpg->textures->walk);
    sfTexture_destroy(rpg->textures->player);
    sfTexture_destroy(rpg->textures->walls);
    sfTexture_destroy(rpg->textures->cops);
    sfTexture_destroy(rpg->textures->fight_bg);
    sfTexture_destroy(rpg->textures->reverse_cop);
    sfTexture_destroy(rpg->textures->prisoner);
    sfTexture_destroy(rpg->textures->quest);
    sfTexture_destroy(rpg->textures->win);
    sfTexture_destroy(rpg->textures->loose);
    sfTexture_destroy(rpg->textures->playerhud);
    sfTexture_destroy(rpg->textures->cop_hud);
    free(rpg->textures);
}
