/*
** EPITECH PROJECT, 2023
** free fight menu
** File description:
** free fight menu
*/

#include <stdlib.h>

#include "structs.h"
#include "my_rpg.h"

void free_fight_menu(fight_scene_t *fight_menu)
{
    destroy_button(fight_menu->b_attack);
    destroy_button(fight_menu->b_run);
    free(fight_menu->b_attack);
    free(fight_menu->b_run);
    sfText_destroy(fight_menu->attack);
    sfText_destroy(fight_menu->run);
    if (fight_menu->stats_text == NULL)
        return;
    sfText_destroy(fight_menu->stats_text->c_life);
    sfText_destroy(fight_menu->stats_text->p_life);
    sfText_destroy(fight_menu->stats_text->p_attack);
    sfText_destroy(fight_menu->stats_text->p_xp);
    sfText_destroy(fight_menu->stats_text->p_lvl);
    free(fight_menu->stats_text);
}
