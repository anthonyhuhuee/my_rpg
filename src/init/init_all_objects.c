/*
** EPITECH PROJECT, 2023
** init_all_objects.c
** File description:
** init_all_objects.c
*/

#include <stdlib.h>

#include "my_rpg.h"
#include "structs.h"
#include "macros.h"

static game_struct_t *init_textures(game_struct_t *result)
{
    result->window = init_window_object();

    result->textures = malloc(sizeof(all_textures_t));

    result->textures->ground_map = sfTexture_createFromFile(GROUND_PATH, NULL);
    result->textures->walk = sfTexture_createFromFile(WALKMAP_PATH, NULL);
    result->textures->player = sfTexture_createFromFile(PLAYER_PATH, NULL);
    result->textures->walls = sfTexture_createFromFile(WALLS_PATH, NULL);
    result->textures->cops = sfTexture_createFromFile(COPS_PATH, NULL);
    result->textures->fight_bg = sfTexture_createFromFile(FIGHT_BG, NULL);
    result->textures->reverse_cop = sfTexture_createFromFile(RCOP_PATH, NULL);
    result->textures->prisoner = sfTexture_createFromFile(PRISONER_PATH, NULL);
    result->textures->quest = sfTexture_createFromFile(QUEST_PATH, NULL);
    result->textures->win = sfTexture_createFromFile(WIN_PATH, NULL);
    result->textures->loose = sfTexture_createFromFile(LOOSE_PATH, NULL);
    result->textures->playerhud = sfTexture_createFromFile(STATHUD_PATH, NULL);
    result->textures->cop_hud = sfTexture_createFromFile(COPHUD_PATH, NULL);
    return result;
}

void init_fight_scene(game_struct_t *rpg)
{
    rpg->fight_menu = malloc(sizeof(fight_scene_t));
    rpg->fight_menu->b_attack = create_button(785, 300);
    rpg->fight_menu->b_run = create_button(985, 300);
    rpg->fight_menu->attack = create_text_mm(rpg->font, "Attack", 812, 300);
    rpg->fight_menu->run = create_text_mm(rpg->font, "Run", 1031, 300);
    init_fight_stats(rpg);
}

end_menu_t *init_end_menu(game_struct_t *rpg)
{
    end_menu_t *result = malloc(sizeof(end_menu_t));
    result->b_quit = create_button(885, 500);
    result->quit = create_text_mm(rpg->font, "Quit", 930, 500);
    return result;
}

game_struct_t *init_all_objects(void)
{
    game_struct_t *result = malloc(sizeof(game_struct_t));

    result->font = sfFont_createFromFile(FONT_PATH);
    result->title_font = sfFont_createFromFile(TITLE_PATH);
    result->music = sfMusic_createFromFile(MUSIC_PATH);
    result->game_menu = init_game_menu(result);
    result->main_menu = init_main_menu(result);
    result->end_menu = init_end_menu(result);
    result = init_textures(result);
    result = init_all_sprites(result);
    result->cops_struct = init_all_cops(result->textures->cops);
    result = init_player_struct(result);
    result->main_menu = init_main_menu(result);
    init_fight_scene(result);
    result->scene = MAIN_MENU;
    return result;
}
