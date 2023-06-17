/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** find_attacked_cop
*/

#include "structs.h"

all_cops_t *find_attacked_cop(all_cops_t *cops)
{
    all_cops_t *attacked_cop = cops;
    while (attacked_cop != NULL) {
        if (attacked_cop->is_attacked == sfTrue)
            break;
        attacked_cop = attacked_cop->next;
    }
    return attacked_cop;
}
