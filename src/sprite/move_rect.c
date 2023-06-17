/*
** EPITECH PROJECT, 2023
** move rect
** File description:
** move rect
*/

#include "macros.h"
#include "structs.h"

void move_rect(sfClock *clock, sfIntRect *rect)
{
    sfTime time = sfClock_getElapsedTime(clock);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.22) {
        if (rect->left >= PLAYER_MAX) {
            rect->left = 0;
        } else {
            rect->left += PLAYER_SIZE_X;
        }
        sfClock_restart(clock);
    }
}
