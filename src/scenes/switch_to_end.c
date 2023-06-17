/*
** EPITECH PROJECT, 2023
** switch_to_end.c
** File description:
** switch_to_end
*/

#include "structs.h"
#include "macros.h"

void switch_to_end(game_struct_t *rpg)
{
    rpg->player->inventory->key += 1;
    SCENE = END;
}
