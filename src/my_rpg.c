/*
** EPITECH PROJECT, 2023
** function
** File description:
** function
*/

#include "my_rpg.h"
#include "macros.h"
#include "structs.h"

int my_rpg(void)
{
    game_struct_t *rpg = init_all_objects();
    sfMusic_play(rpg->music);
    sfMusic_setLoop(rpg->music, sfTrue);
    sfRenderWindow_clear(WINDOW, sfBlack);
    while (sfRenderWindow_isOpen(WINDOW)) {
        call_scenes_function(rpg);
        handling_events(rpg);
        sfRenderWindow_display(WINDOW);
    }
    free_all_objects(rpg);
    return SUCCESS;
}
