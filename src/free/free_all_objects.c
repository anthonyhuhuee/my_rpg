/*
** EPITECH PROJECT, 2023
** free_all_objects.c
** File description:
** free_all_objects.c
*/

#include <stdlib.h>

#include "structs.h"
#include "my_rpg.h"

void free_all_objects(game_struct_t *rpg)
{
    free_others(rpg);
    free_main_menu(rpg->main_menu);
    free(rpg->main_menu);
    free_game_menu(rpg->game_menu);
    free(rpg->game_menu);
    free_fight_menu(rpg->fight_menu);
    free(rpg->fight_menu);
    free_sprite(rpg);
    free_texture(rpg);
    free_player(rpg);
    free(rpg);
}
