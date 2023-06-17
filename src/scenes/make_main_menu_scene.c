/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** make_main_menu_scene
*/

#include "my_rpg.h"
#include "macros.h"
#include "structs.h"

void make_main_menu_scene(game_struct_t *rpg)
{
    VIEW = sfView_createFromRect((sfFloatRect){0, 0, 1900, 1000});
    sfRenderWindow_setView(WINDOW, VIEW);
    sfRenderWindow_drawSprite(WINDOW, rpg->main_menu->background, NULL);
    draw_buttons(rpg, rpg->main_menu->b_play);
    draw_buttons(rpg, rpg->main_menu->b_options);
    draw_buttons(rpg, rpg->main_menu->b_quit);
    sfRenderWindow_drawText(WINDOW, rpg->main_menu->title, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->main_menu->play, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->main_menu->options, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->main_menu->quit, NULL);
}
