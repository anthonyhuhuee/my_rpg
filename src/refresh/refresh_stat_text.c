/*
** EPITECH PROJECT, 2023
** refresh stat text
** File description:
** refresh stat text
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

void refresh_stat_text(game_struct_t *rpg)
{
    sfText_destroy(rpg->fight_menu->stats_text->p_attack);
    sfText_destroy(rpg->fight_menu->stats_text->p_xp);
    sfText_destroy(rpg->fight_menu->stats_text->p_lvl);

    rpg->fight_menu->stats_text->p_attack = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->attack), 100, 65);
    set_scale_and_color(rpg->fight_menu->stats_text->p_attack, 60, sfWhite);

    rpg->fight_menu->stats_text->p_xp = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->xp), 100, 140);
    set_scale_and_color(rpg->fight_menu->stats_text->p_xp, 60, sfWhite);

    rpg->fight_menu->stats_text->p_lvl = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->level), 100, 210);
    set_scale_and_color(rpg->fight_menu->stats_text->p_lvl, 60, sfWhite);

    return;
}
