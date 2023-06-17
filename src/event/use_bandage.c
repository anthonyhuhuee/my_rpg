/*
** EPITECH PROJECT, 2023
** use bandage
** File description:
** use bandage
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"

void use_bandage(game_struct_t *rpg)
{
    if (rpg->player->inventory->bandage >= 1) {
        rpg->player->inventory->bandage -= 1;
        rpg->player->player_stats->life += 25;
    }
    return;
}
