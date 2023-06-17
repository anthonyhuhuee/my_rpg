/*
** EPITECH PROJECT, 2023
** init player stats
** File description:
** init player stats
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

#include "structs.h"

player_stats_t *init_player_stats(void)
{
    player_stats_t *player_stats = malloc(sizeof(player_stats_t));
    player_stats->life = 100;
    player_stats->attack = 15;
    player_stats->speed = 1;
    player_stats->xp = 0;
    player_stats->level = 1;
    return player_stats;
}
