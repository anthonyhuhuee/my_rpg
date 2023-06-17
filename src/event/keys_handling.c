/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** keys_handling
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"

void key_released_handling(game_struct_t *rpg, sfKeyEvent *key_pressed)
{
    switch (key_pressed->code) {
        case sfKeyD:
            rpg->player->movement->move_right = sfFalse;
            break;
        case sfKeyS:
            rpg->player->movement->move_down = sfFalse;
            break;
        case sfKeyQ:
            rpg->player->movement->move_left = sfFalse;
            break;
        case sfKeyZ:
            rpg->player->movement->move_up = sfFalse;
            break;
        case sfKeyE:
            rpg->player->movement->interact = sfFalse;
        default:
            break;
    }
}

void key_pressed_handling_next(game_struct_t *rpg, sfKeyEvent *key_pressed)
{
    switch (key_pressed->code) {
        case sfKeyEscape:
            rpg->scene = GAME_MENU;
            break;
        case sfKeyNum1:
            use_bandage(rpg);
        default:
            break;
    }
}

void key_pressed_handling(game_struct_t *rpg, sfKeyEvent *key_pressed)
{
    switch (key_pressed->code) {
        case sfKeyD:
            rpg->player->movement->move_right = sfTrue;
            break;
        case sfKeyS:
            rpg->player->movement->move_down = sfTrue;
            break;
        case sfKeyQ:
            rpg->player->movement->move_left = sfTrue;
            break;
        case sfKeyZ:
            rpg->player->movement->move_up = sfTrue;
            break;
        case sfKeyE:
            rpg->player->movement->interact = sfTrue;
            break;
        default:
            key_pressed_handling_next(rpg, key_pressed);
            break;
    }
}
