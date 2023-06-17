/*
** EPITECH PROJECT, 2023
** errors_handling.c
** File description:
** errors_handling.c
*/

#include <unistd.h>
#include <sys/stat.h>
#include "macros.h"
#include "my_rpg.h"

int is_file_found(char const *filepath)
{
    struct stat s;
    if (stat(filepath, &s) == -1) {
        write(2, "File not found\n", 16);
        return FAILURE;
    }
    return SUCCESS;
}

int ressources_errors_next(void)
{
    if (is_file_found(SETT_PATH) == FAILURE ||
        is_file_found(INV_PATH) == FAILURE ||
        is_file_found(PRISONER_PATH) == FAILURE ||
        is_file_found(QUEST_PATH) == FAILURE ||
        is_file_found(NORMAL_BUTTON) == FAILURE ||
        is_file_found(HOVER_BUTTON) == FAILURE ||
        is_file_found(PRESSED_BUTTON) == FAILURE ||
        is_file_found(PRISON_BG) == FAILURE ||
        is_file_found(BLOOD_PATH) == FAILURE ||
        is_file_found(WIN_PATH) == FAILURE ||
        is_file_found(LOOSE_PATH) == FAILURE ||
        is_file_found(STATHUD_PATH) == FAILURE ||
        is_file_found(COPHUD_PATH) == FAILURE)
            return FAILURE;
    return SUCCESS;
}

int ressources_errors(void)
{
    if (is_file_found(GROUND_PATH) == FAILURE ||
        is_file_found(WALLS_PATH) == FAILURE ||
        is_file_found(WALKMAP_PATH) == FAILURE ||
        is_file_found(PLAYER_PATH) == FAILURE ||
        is_file_found(COPS_PATH) == FAILURE ||
        is_file_found(RCOP_PATH) == FAILURE ||
        is_file_found(FIGHT_BG) == FAILURE ||
        is_file_found(MUSIC_PATH) == FAILURE ||
        is_file_found(FONT_PATH) == FAILURE ||
        is_file_found(TITLE_PATH) == FAILURE ||
        is_file_found(SETT_BG_PATH) == FAILURE ||
        is_file_found(HTP_PATH) == FAILURE)
            return FAILURE;
    return ressources_errors_next();
}

int check_display_var(char **env_var)
{
    if (env_var == NULL)
        return FAILURE;
    for (int index = 0; env_var[index] != NULL; index += 1) {
        if (my_strlen(env_var[index]) > 8 &&
            my_strncmp(env_var[index], "DISPLAY=", 8) == 0)
                return SUCCESS;
    }
    return FAILURE;
}

int errors_handling(int nb_args, char **args, char **env_var)
{
    if (nb_args != 1 || args == NULL) {
        write(2, "Too many arguments\n", 20);
        return FAILURE;
    }
    if (ressources_errors() == FAILURE ||
        check_display_var(env_var) == FAILURE)
            return FAILURE;
    return SUCCESS;
}
