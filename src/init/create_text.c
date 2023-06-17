/*
** EPITECH PROJECT, 2023
** create_text.c
** File description:
** function that creates a text with position and char*
*/

#include "structs.h"

sfText *create_text(sfFont *font, char *string, int pos_x, int pos_y)
{
    sfText *txt = sfText_create();
    sfText_setFont(txt, font);
    sfText_setColor(txt, sfBlack);
    sfText_setString(txt, string);
    sfVector2f pos;
    pos.x = pos_x;
    pos.y = pos_y;
    sfText_setPosition(txt, pos);
    return txt;
}

sfText *create_text_mm(sfFont *font, char *string, int pos_x, int pos_y)
{
    sfText *txt = sfText_create();
    sfText_setCharacterSize(txt, 50);
    sfText_setFont(txt, font);
    sfText_setColor(txt, sfBlack);
    sfText_setString(txt, string);
    sfVector2f pos;
    pos.x = pos_x;
    pos.y = pos_y;
    sfText_setPosition(txt, pos);
    return txt;
}
