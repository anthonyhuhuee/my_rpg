/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <stddef.h>

#include "my_rpg.h"
#include "macros.h"

int main(int argc, char **argv, char **env)
{
    if (errors_handling(argc, argv, env) == FAILURE)
        return FAILURE;
    return my_rpg();
}
