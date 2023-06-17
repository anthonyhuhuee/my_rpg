/*
** EPITECH PROJECT, 2023
** free game menu
** File description:
** free game menu
*/

#include <stdlib.h>

#include "structs.h"
#include "my_rpg.h"

void free_game_button(game_menu_t *game)
{
    destroy_button(game->b_menu);
    destroy_button(game->b_settings);
    destroy_button(game->b_inventory);
    destroy_button(game->b_htp);
    free(game->b_menu);
    free(game->b_settings);
    free(game->b_inventory);
    free(game->b_htp);
}

void free_game_menu(game_menu_t *game)
{
    sfSprite_destroy(game->background);
    sfSprite_destroy(game->how_to_play);
    sfSprite_destroy(game->s_settings);
    sfSprite_destroy(game->s_inventory);
    free_game_button(game);
    sfText_destroy(game->menu);
    sfText_destroy(game->inventory);
    sfText_destroy(game->settings);
    sfText_destroy(game->htp);
    if (game->inv_bandage != NULL)
        sfText_destroy(game->inv_bandage);
    if (game->inv_scissors != NULL)
        sfText_destroy(game->inv_scissors);
}
