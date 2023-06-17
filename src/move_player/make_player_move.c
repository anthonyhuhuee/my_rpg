/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** make_player_move
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

static void make_all_input_false(game_struct_t *rpg)
{
    rpg->player->movement->move_down = sfFalse;
    rpg->player->movement->move_left = sfFalse;
    rpg->player->movement->move_up = sfFalse;
    rpg->player->movement->move_right = sfFalse;
}

static void detect_npc_collision(game_struct_t *rpg)
{
    all_cops_t *temp_cops = COP;
    sfFloatRect p_bounds;
    sfFloatRect c_bounds;
    while (temp_cops != NULL) {
        p_bounds = sfSprite_getGlobalBounds(PLAYER);
        if (temp_cops->cops != NULL)
            c_bounds = sfSprite_getGlobalBounds(temp_cops->cops);
        if (sfFloatRect_intersects(&p_bounds, &c_bounds, NULL) == sfTrue) {
            temp_cops->is_attacked = sfTrue;
            make_all_input_false(rpg);
            refresh_stat_text(rpg);
            SCENE = FIGHT;
            break;
        }
        temp_cops = temp_cops->next;
    }
}

void make_player_move(game_struct_t *rpg, sfSprite *sprite)
{
    make_player_move_down(rpg, sprite);
    make_player_move_up(rpg, sprite);
    make_player_move_right(rpg, sprite);
    make_player_move_left(rpg, sprite);
    detect_npc_collision(rpg);
    detect_quest_collision(rpg);
}
