/*
** EPITECH PROJECT, 2023
** refresh life stat
** File description:
** refresh life stat
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

void refresh_life_stat(game_struct_t *rpg, all_cops_t *attacked_cop)
{
    sfText_destroy(rpg->fight_menu->stats_text->p_life);
    sfText_destroy(rpg->fight_menu->stats_text->c_life);

    rpg->fight_menu->stats_text->p_life = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->life), 100, -10);
    set_scale_and_color(rpg->fight_menu->stats_text->p_life, 60, sfWhite);

    rpg->fight_menu->stats_text->c_life = create_text(rpg->font,
    int_to_str(attacked_cop->stats->life), 1750, -10);
    set_scale_and_color(rpg->fight_menu->stats_text->c_life, 60, sfWhite);

    return;
}
