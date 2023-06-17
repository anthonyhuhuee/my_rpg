/*
** EPITECH PROJECT, 2023
** init cops
** File description:
** init cops
*/

#include <stdlib.h>
#include <time.h>

#include "my_rpg.h"
#include "structs.h"
#include "macros.h"

bool random_value(void)
{
    srand(time(NULL));
    int result = rand() % 2;
    if (result == 0)
        return false;
    if (result == 1)
        return true;
    return true;
}

all_cops_t *init_first_cops(sfTexture *cops)
{
    all_cops_t *result = malloc(sizeof(all_cops_t));
    result->stats = malloc(sizeof(npc_stats_t));
    result->cops = create_sprite(result->cops, cops, (sfVector2f){0, 0});
    result->stats->life = 100;
    result->stats->attack = 20;
    result->stats->have_key = true;
    result->stats->have_bandage = false;
    result->is_attacked = sfFalse;
    result->stats->have_scissors = false;
    result->next = NULL;

    sfSprite_setScale(result->cops, (sfVector2f){0.03, 0.03});

    return result;
}

void init_other_cops(all_cops_t *tmp, sfTexture *cops)
{
    tmp->next = malloc(sizeof(all_cops_t));
    tmp->next->stats = malloc(sizeof(npc_stats_t));
    tmp->next->cops = create_sprite(tmp->cops, cops, (sfVector2f){0, 0});
    tmp->next->stats->life = 60;
    tmp->next->stats->attack = 5;
    tmp->next->stats->have_key = false;
    tmp->next->stats->have_bandage = random_value();
    tmp->next->is_attacked = sfFalse;
    tmp->next->stats->have_scissors = random_value();
    tmp->next->next = NULL;

    sfSprite_setScale(tmp->next->cops, (sfVector2f){0.03, 0.03});

    return;
}

all_cops_t *add_cops_node(all_cops_t *cops_struct, sfTexture *cops)
{
    all_cops_t *tmp = cops_struct;
    if (tmp == NULL) {
        tmp = init_first_cops(cops);
        return tmp;
    }

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    init_other_cops(tmp, cops);
    return cops_struct;
}

all_cops_t *init_all_cops(sfTexture *cops)
{
    all_cops_t *cops_struct = NULL;
    for (int i = 0; i != 3; i++) {
        cops_struct = add_cops_node(cops_struct, cops);
    }
    sfSprite_setPosition(cops_struct->cops, (sfVector2f){360, 175});
    sfSprite_setPosition(cops_struct->next->cops, (sfVector2f){300, 300});
    sfSprite_setPosition(cops_struct->next->next->cops, (sfVector2f){180, 425});
    return cops_struct;
}
