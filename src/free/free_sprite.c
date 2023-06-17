/*
** EPITECH PROJECT, 2023
** free sprite
** File description:
** free sprite
*/

#include <stdlib.h>

#include "structs.h"

void free_sprite(game_struct_t *rpg)
{
    all_cops_t *tmp_cop = rpg->cops_struct;
    sfSprite_destroy(rpg->sprite_struct->ground_map);
    sfSprite_destroy(rpg->sprite_struct->walls_map);
    sfSprite_destroy(rpg->sprite_struct->player);
    sfSprite_destroy(rpg->sprite_struct->fight_bg);
    sfSprite_destroy(rpg->sprite_struct->reverse_cop);
    sfSprite_destroy(rpg->sprite_struct->prisoner);
    sfSprite_destroy(rpg->sprite_struct->quest);
    sfSprite_destroy(rpg->sprite_struct->win_screen);
    sfSprite_destroy(rpg->sprite_struct->loose_screen);
    sfSprite_destroy(rpg->sprite_struct->player_hud);
    sfSprite_destroy(rpg->sprite_struct->cop_hud);
    free(rpg->sprite_struct);
    while (tmp_cop != NULL) {
        sfSprite_destroy(tmp_cop->cops);
        tmp_cop = tmp_cop->next;
    }
    free(rpg->cops_struct);
}
