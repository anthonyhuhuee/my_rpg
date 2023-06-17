/*
** EPITECH PROJECT, 2023
** init_game_menu.c
** File description:
** initialize the game_menu struct
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"
#include <stdlib.h>

sfSprite *create_sprite_mm(char *filepath, sfVector2f pos)
{
    sfTexture * texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale;
    scale.x = 1.9;
    scale.y = 1.7;
    sfVector2f new_pos;
    new_pos.x = pos.x;
    new_pos.y = pos.y;
    sfSprite_setTexture(sprite, texture, true);
    sfSprite_setPosition(sprite, new_pos);
    sfSprite_setScale(sprite, scale);
    return sprite;
}

t_gui_object *create_button(int pos_x, int pos_y)
{
    t_gui_object *result = malloc(sizeof(t_gui_object));
    result->state = RELEASED;
    result->rect = sfRectangleShape_create();
    sfVector2f size;
    size.x = 150;
    size.y = 80;
    sfVector2f pos;
    pos.x = pos_x;
    pos.y = pos_y;
    sfRectangleShape_setSize(result->rect, size);
    sfRectangleShape_setPosition(result->rect, pos);
    sfRectangleShape_setFillColor(result->rect, sfBlack);
    result->normal = create_sprite_mm(NORMAL_BUTTON, pos);
    result->hover = create_sprite_mm(HOVER_BUTTON, pos);
    result->pressed = create_sprite_mm(PRESSED_BUTTON, pos);
    return result;
}

main_menu_t *init_main_menu(game_struct_t *rpg)
{
    main_menu_t *result = malloc(sizeof(main_menu_t));
    sfTexture *new_texture = sfTexture_createFromFile(PRISON_BG, NULL);
    result->background = sfSprite_create();
    sfSprite_setTexture(result->background, new_texture, true);
    sfVector2f scale;
    scale.x = 2.45;
    scale.y = 2.60;
    sfSprite_setScale(result->background, scale);
    result->b_play = create_button(695, 620);
    result->b_options = create_button(895, 620);
    result->b_quit = create_button(1095, 620);
    result->title = create_text(rpg->title_font, "Prison Escape", 692, 330);
    sfText_setCharacterSize(result->title, 50);
    result->play = create_text_mm(rpg->font, "Play", 737, 620);
    result->options = create_text_mm(rpg->font, "Settings", 904, 620);
    result->quit = create_text_mm(rpg->font, "Quit", 1140, 620);
    return result;
}
