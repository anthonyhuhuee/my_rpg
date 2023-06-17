/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** make_fight_scene
*/

#include "macros.h"
#include "structs.h"
#include "my_rpg.h"

void draw_fight_sprites(game_struct_t *rpg)
{
    sfRenderWindow_drawSprite(WINDOW, rpg->sprite_struct->fight_bg, NULL);
    sfRenderWindow_drawSprite(WINDOW, PLAYER, NULL);
    sfRenderWindow_drawSprite(WINDOW, FCOP, NULL);
    sfRenderWindow_drawSprite(WINDOW, PLAYERHUD, NULL);
    sfRenderWindow_drawSprite(WINDOW, COPHUD, NULL);
    return;
}

void draw_fight_text(game_struct_t *rpg)
{
    sfRenderWindow_drawText(WINDOW, FIGHT_MENU->attack, NULL);
    sfRenderWindow_drawText(WINDOW, FIGHT_MENU->run, NULL);
    sfRenderWindow_drawText(WINDOW, FIGHT_MENU->stats_text->p_life, NULL);
    sfRenderWindow_drawText(WINDOW, FIGHT_MENU->stats_text->p_attack, NULL);
    sfRenderWindow_drawText(WINDOW, FIGHT_MENU->stats_text->p_xp, NULL);
    sfRenderWindow_drawText(WINDOW, FIGHT_MENU->stats_text->p_lvl, NULL);
    sfRenderWindow_drawText(WINDOW, FIGHT_MENU->stats_text->c_life, NULL);
    return;
}

void draw_fight_scene(game_struct_t *rpg, all_cops_t *attacked_cop)
{
    refresh_life_stat(rpg, attacked_cop);
    draw_fight_sprites(rpg);
    VIEW = sfView_createFromRect((sfFloatRect){0, 0, WIN_HEI, WIN_WID});
    sfRenderWindow_setView(WINDOW, VIEW);
    sfIntRect rect = (sfIntRect){0, 0, PLAYER_SIZE_X, PLAYER_SIZE_Y};
    sfSprite_setTextureRect(PLAYER, rect);
    sfSprite_setPosition(PLAYER, (sfVector2f){200, 745});
    sfSprite_setScale(PLAYER, (sfVector2f){0.35, 0.35});
    draw_buttons(rpg, rpg->fight_menu->b_attack);
    draw_buttons(rpg, rpg->fight_menu->b_run);
    draw_fight_text(rpg);
}

void end_fight(game_struct_t *rpg, all_cops_t *attacked_cop)
{
    attacked_cop->is_attacked = sfFalse;
    attacked_cop->cops = NULL;
    rpg->player->player_stats->xp += 10;
}

void make_fight_scene(game_struct_t *rpg)
{
    all_cops_t *attacked_cop = find_attacked_cop(COP);
    draw_fight_scene(rpg, attacked_cop);
    if (rpg->player->player_stats->life <= 0)
        SCENE = END;
    if (attacked_cop->stats->life <= 0) {
        sfSprite_destroy(attacked_cop->cops);
        end_fight(rpg, attacked_cop);
        check_level(rpg);
        if (attacked_cop->stats->have_bandage == true)
            rpg->player->inventory->bandage += 1;
        if (attacked_cop->stats->have_scissors == true) {
            rpg->player->inventory->scissors += 1;
            rpg->player->player_stats->attack += 5;
        }
        if (attacked_cop->stats->have_key == true) {
            switch_to_end(rpg);
            return;
        }
        SCENE = RPG;
    }
}
