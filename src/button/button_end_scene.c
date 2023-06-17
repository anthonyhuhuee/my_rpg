/*
** EPITECH PROJECT, 2023
** button_end_scene.c
** File description:
** button handling for th end scene
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

void mouse_hover_es(game_struct_t *rpg, sfMouseMoveEvent *mouse)
{
    is_mouse_hover(rpg->end_menu->b_quit, mouse);
}

void button_pressed_es(game_struct_t *rpg, sfMouseButtonEvent *mouse)
{
    is_button_clicked(rpg->end_menu->b_quit, mouse);
    if (rpg->end_menu->b_quit->state == PRESSED) {
        sfRenderWindow_close(WINDOW);
    }
}

void button_released_es(game_struct_t *rpg)
{
    rpg->end_menu->b_quit->state = RELEASED;
}
