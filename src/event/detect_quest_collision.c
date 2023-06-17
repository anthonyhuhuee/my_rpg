/*
** EPITECH PROJECT, 2023
** quest event
** File description:
** quest event
*/

#include "my_rpg.h"
#include "structs.h"
#include "macros.h"

void detect_quest_collision(game_struct_t *rpg)
{
    sfFloatRect p_bounds = sfSprite_getGlobalBounds(PLAYER);
    sfFloatRect q_bounds = sfSprite_getGlobalBounds(PRISONER);
    if (rpg->player->movement->interact == sfTrue &&
        sfFloatRect_intersects(&p_bounds, &q_bounds, NULL) == sfTrue) {
            sfRenderWindow_drawSprite(WINDOW, QUEST, NULL);
    }
}
