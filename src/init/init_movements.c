/*
** EPITECH PROJECT, 2023
** init movement
** File description:
** init movement
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

#include "structs.h"

player_mov_t *init_movements(void)
{
    player_mov_t *movement = malloc(sizeof(player_mov_t));
    movement->move_down = sfFalse;
    movement->move_up = sfFalse;
    movement->move_left = sfFalse;
    movement->move_right = sfFalse;
    return movement;
}
