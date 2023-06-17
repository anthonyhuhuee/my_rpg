/*
** EPITECH PROJECT, 2023
** init inventory
** File description:
** init inventory
*/

#include <stdlib.h>

#include "my_rpg.h"
#include "structs.h"
#include "macros.h"

inventory_t *init_inventory(void)
{
    inventory_t *result = malloc(sizeof(inventory_t));
    result->bandage = 0;
    result->scissors = 0;
    result->key = false;

    return result;
}
