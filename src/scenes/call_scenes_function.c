/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** call_scene_function
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"

void make_end_scene(game_struct_t *rpg)
{
    if (rpg->player->inventory->key == true) {
        sfRenderWindow_drawSprite(WINDOW,
        rpg->sprite_struct->win_screen, NULL);
    } else {
        sfRenderWindow_drawSprite(WINDOW,
        rpg->sprite_struct->loose_screen, NULL);
    }
    draw_buttons(rpg, rpg->end_menu->b_quit);
    sfRenderWindow_drawText(WINDOW, rpg->end_menu->quit, NULL);
}

void call_scenes_function(game_struct_t *rpg)
{
    switch (SCENE) {
        case RPG:
            make_rpg_scene(rpg);
            break;
        case FIGHT:
            make_fight_scene(rpg);
            break;
        case MAIN_MENU:
            make_main_menu_scene(rpg);
            break;
        case GAME_MENU:
            make_game_menu_scene(rpg);
            break;
        case END:
            make_end_scene(rpg);
            break;
    }
}
