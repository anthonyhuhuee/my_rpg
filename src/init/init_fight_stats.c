/*
** EPITECH PROJECT, 2023
** init_fight_stats
** File description:
** init_fight_stats
*/

#include <stdlib.h>

#include "macros.h"
#include "structs.h"
#include "my_rpg.h"

void init_fight_stats(game_struct_t *rpg)
{
    rpg->fight_menu->stats_text = malloc(sizeof(fight_stats_text_t));

    rpg->fight_menu->stats_text->p_life = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->life), 100, -10);
    set_scale_and_color(rpg->fight_menu->stats_text->p_life, 60, sfWhite);
    rpg->fight_menu->stats_text->p_attack = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->attack), 100, 65);
    set_scale_and_color(rpg->fight_menu->stats_text->p_attack, 60, sfWhite);
    rpg->fight_menu->stats_text->p_xp = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->xp), 100, 140);
    set_scale_and_color(rpg->fight_menu->stats_text->p_xp, 60, sfWhite);
    rpg->fight_menu->stats_text->p_lvl = create_text(rpg->font,
    int_to_str(rpg->player->player_stats->level), 100, 210);
    set_scale_and_color(rpg->fight_menu->stats_text->p_lvl, 60, sfWhite);
    rpg->fight_menu->stats_text->c_life = create_text(rpg->font,
    "0", 1750, -10);
    set_scale_and_color(rpg->fight_menu->stats_text->c_life, 60, sfWhite);
    return;
}
