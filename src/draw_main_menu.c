/*
** EPITECH PROJECT, 2023
** draw_main_menu.c
** File description:
** draw everything that needs the main menu scene
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"

void draw_buttons(game_struct_t *rpg, t_gui_object *button)
{
    switch (button->state) {
    case HOVER:
        sfRenderWindow_drawSprite(WINDOW, button->hover, NULL);
        break;
    case PRESSED:
        sfRenderWindow_drawSprite(WINDOW, button->pressed, NULL);
        break;
    case RELEASED:
        sfRenderWindow_drawSprite(WINDOW, button->normal, NULL);
        break;
    default:
        break;
    }
}

void draw_main_menu(game_struct_t *rpg)
{
    sfRenderWindow_drawSprite(WINDOW, rpg->main_menu->background, NULL);
    draw_buttons(rpg, rpg->main_menu->b_play);
    draw_buttons(rpg, rpg->main_menu->b_options);
    draw_buttons(rpg, rpg->main_menu->b_quit);
    sfRenderWindow_drawText(WINDOW, rpg->main_menu->play, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->main_menu->options, NULL);
    sfRenderWindow_drawText(WINDOW, rpg->main_menu->quit, NULL);
}
