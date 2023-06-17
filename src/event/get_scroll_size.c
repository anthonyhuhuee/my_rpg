/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** get_scroll_size
*/

#include <SFML/Graphics.h>

sfVector2f get_scroll_size(sfView *view, sfMouseWheelEvent *wheel)
{
    sfVector2f size = sfView_getSize(view);
    if (wheel->delta > 0 && (size.x <= 130 || size.y <= 130))
        return size;
    if (wheel->delta < 0 && (size.x >= 350 || size.y >= 350))
        return size;
    int delta = wheel->delta;
    int absolute_delta = 0;
    if (delta < 0)
        absolute_delta = delta * -1;
    else
        absolute_delta = delta;
    size.x -= 32 * (delta / absolute_delta);
    size.y -= 18 * (delta / absolute_delta);
    return size;
}
