/*
** EPITECH PROJECT, 2023
** check level
** File description:
** check level
*/

#include "macros.h"
#include "structs.h"
#include "my_rpg.h"

void check_level(game_struct_t *rpg)
{
    if (rpg->player->player_stats->xp == 20) {
        rpg->player->player_stats->xp = 0;
        rpg->player->player_stats->level += 1;
        rpg->player->player_stats->life += 50;
        rpg->player->player_stats->attack += 5;
        rpg->player->player_stats->speed += 1;
    }
    return;
}
