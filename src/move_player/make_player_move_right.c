/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** make_player_move_right
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

static sfBool check_pixels_line(game_struct_t *rpg, sfFloatRect player, float i)
{
    sfColor pixel;
    for (float j = player.top; j <= player.top + player.height; j += 1) {
        pixel = sfImage_getPixel(rpg->player->walk, i, j);
        if (check_pixel_color(pixel, sfBlack) == sfFalse)
            return sfFalse;
    }
    return sfTrue;
}

static sfBool check_next_pixels(game_struct_t *rpg)
{
    sfFloatRect player = sfSprite_getGlobalBounds(PLAYER);
    float index = player.left + player.width;
    for (float i = index; i <= index + SPEED; i += 1) {
        if (check_pixels_line(rpg, player, i) == sfFalse)
            return sfFalse;
    }
    return sfTrue;
}

void make_player_move_right(game_struct_t *rpg, sfSprite *sprite)
{
    sfVector2f new_pos = sfSprite_getPosition(sprite);
    new_pos.x += SPEED;
    if (rpg->player->movement->move_right == sfTrue &&
    check_next_pixels(rpg) == sfTrue)
        sfSprite_setPosition(sprite, new_pos);
}
