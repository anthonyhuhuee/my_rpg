/*
** EPITECH PROJECT, 2023
** create sprite
** File description:
** create sprite
*/

#include <stdbool.h>
#include "my_rpg.h"
#include "macros.h"
#include "structs.h"

sfSprite *create_sprite(sfSprite *sprite, sfTexture *texture, sfVector2f pos)
{
    sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, true);
    sfSprite_setPosition(sprite, pos);

    return sprite;
}
