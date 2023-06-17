/*
** EPITECH PROJECT, 2023
** button_fight_scene.c
** File description:
** file for button management in the fight scene
*/

#include "structs.h"
#include "my_rpg.h"
#include "macros.h"

void mouse_hover_fm(game_struct_t *rpg, sfMouseMoveEvent *mouse)
{
    is_mouse_hover(rpg->fight_menu->b_attack, mouse);
    is_mouse_hover(rpg->fight_menu->b_run, mouse);
}

void button_pressed_fm(game_struct_t *rpg, sfMouseButtonEvent *mouse)
{
    all_cops_t *attacked_cop = find_attacked_cop(COP);
    is_button_clicked(rpg->fight_menu->b_attack, mouse);
    if (rpg->fight_menu->b_attack->state == PRESSED &&
        attacked_cop->stats->life > 0) {
            make_attack_animation(rpg, attacked_cop);
    }
    is_button_clicked(rpg->fight_menu->b_run, mouse);
    if (rpg->fight_menu->b_run->state == PRESSED) {
        attacked_cop->is_attacked = sfFalse;
        if (attacked_cop->stats->have_key == true)
            attacked_cop->stats->life = 100;
        else
            attacked_cop->stats->life = 60;
        rpg->player->player_pos = (sfVector2f){259, 120};
        rpg->fight_menu->b_run->state = RELEASED;
        SCENE = RPG;
    }
}

void button_released_fm(game_struct_t *rpg)
{
    rpg->fight_menu->b_attack->state = RELEASED;
    rpg->fight_menu->b_run->state = RELEASED;
}
