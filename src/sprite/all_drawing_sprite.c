/*
** EPITECH PROJECT, 2023
** all drawing sprite
** File description:
** all drawing sprite
*/

#include "macros.h"
#include "structs.h"

void all_drawing_sprite(game_struct_t *rpg)
{
    all_cops_t *tmp_cop = rpg->cops_struct;

    sfRenderWindow_drawSprite(WINDOW, MAP, NULL);
    sfRenderWindow_drawSprite(WINDOW, PLAYER, NULL);
    sfRenderWindow_drawSprite(WINDOW, PRISONER, NULL);
    sfRenderWindow_drawSprite(WINDOW, WALLS, NULL);
    while (tmp_cop != NULL) {
        if (tmp_cop->cops != NULL)
            sfRenderWindow_drawSprite(WINDOW, tmp_cop->cops, NULL);
        tmp_cop = tmp_cop->next;
    }
}
