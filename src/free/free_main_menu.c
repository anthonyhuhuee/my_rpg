/*
** EPITECH PROJECT, 2023
** free main menu
** File description:
** free main menu
*/

#include <stdlib.h>

#include "structs.h"
#include "my_rpg.h"

void free_main_menu(main_menu_t *main_menu)
{
    sfSprite_destroy(main_menu->background);
    sfText_destroy(main_menu->title);
    sfText_destroy(main_menu->play);
    sfText_destroy(main_menu->options);
    sfText_destroy(main_menu->quit);
    destroy_button(main_menu->b_play);
    destroy_button(main_menu->b_options);
    destroy_button(main_menu->b_quit);
    free(main_menu->b_play);
    free(main_menu->b_options);
    free(main_menu->b_quit);
}
