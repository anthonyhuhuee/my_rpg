/*
** EPITECH PROJECT, 2023
** free player
** File description:
** free player
*/

#include <stdlib.h>

#include "structs.h"

void free_player(game_struct_t *rpg)
{
    sfView_destroy(rpg->player->view);
    sfImage_destroy(rpg->player->walk);
    sfClock_destroy(rpg->player->player_clock);
    free(rpg->player->movement);
    free(rpg->player->player_stats);
    free(rpg->player);
}
