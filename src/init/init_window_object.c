/*
** EPITECH PROJECT, 2023
** init_window_object.c
** File description:
** init_window_object.c
*/

#include "my_rpg.h"
#include "macros.h"
#include <SFML/Graphics.h>

sfRenderWindow *init_window_object(void)
{
    sfVideoMode mode = {WIN_HEI, WIN_WID, 32};
    sfRenderWindow *window = NULL;
    window = sfRenderWindow_create(mode, WIN_NAME, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 3000);
    return window;
}
