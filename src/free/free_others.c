/*
** EPITECH PROJECT, 2023
** free others
** File description:
** free others
*/

#include <stdlib.h>

#include "structs.h"
#include "my_rpg.h"

void free_others(game_struct_t *rpg)
{
    sfRenderWindow_destroy(rpg->window);
    sfFont_destroy(rpg->font);
    sfFont_destroy(rpg->title_font);
    sfMusic_destroy(rpg->music);
}
