/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-baptiste.caulier
** File description:
** make_attack_animation
*/

#include "structs.h"
#include "macros.h"
#include "my_rpg.h"

void wait_x_seconds(float x)
{
    sfClock *clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);
    float seconds = time.microseconds / 1000000.0;
    while (seconds < x) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
    }
    sfClock_destroy(clock);
}

void make_blood_animation(game_struct_t *rpg, sfSprite *blood)
{
    sfIntRect rect = (sfIntRect){0, 0, 512, 512};
    all_cops_t *attacked_cop = find_attacked_cop(COP);
    while (rect.left <= 7680) {
        sfSprite_setTextureRect(blood, rect);
        draw_fight_scene(rpg, attacked_cop);
        sfRenderWindow_drawSprite(WINDOW, blood, NULL);
        sfRenderWindow_display(WINDOW);
        wait_x_seconds(0.05);
        rect.left += 1024;
    }
    draw_fight_scene(rpg, attacked_cop);
    sfRenderWindow_display(WINDOW);
}

void draw_damage(game_struct_t *rpg, int damage_i, sfVector2f position)
{
    char *damage = int_to_str(damage_i * -1);
    sfFont *font = sfFont_createFromFile(FONT_PATH);
    sfText *text = create_text(font, damage, position.x, position.y);
    sfText_setCharacterSize(text, 60);
    sfText_setColor(text, sfWhite);
    sfRenderWindow_drawText(WINDOW, text, NULL);
    sfRenderWindow_display(WINDOW);
    sfText_destroy(text);
    sfFont_destroy(font);
}

void make_attack_animation(game_struct_t *rpg, all_cops_t *attacked_cop)
{
    sfTexture *blood = sfTexture_createFromFile(BLOOD_PATH, NULL);
    sfSprite *blood_sprite = NULL;
    blood_sprite = create_sprite(blood_sprite, blood, (sfVector2f){1450, 830});
    sfSprite_setScale(blood_sprite, (sfVector2f){0.5, 0.5});
    make_blood_animation(rpg, blood_sprite);
    sfVector2f pos = (sfVector2f){1650, -10};
    attacked_cop->stats->life -= rpg->player->player_stats->attack;
    draw_damage(rpg, rpg->player->player_stats->attack, pos);
    wait_x_seconds(0.8);
    if (attacked_cop->stats->life > 0) {
        sfSprite_setScale(blood_sprite, (sfVector2f){-0.5, 0.5});
        sfSprite_setPosition(blood_sprite, (sfVector2f){430, 830});
        make_blood_animation(rpg, blood_sprite);
        rpg->player->player_stats->life -= attacked_cop->stats->attack;
        draw_damage(rpg, attacked_cop->stats->attack, (sfVector2f){200, -10});
        wait_x_seconds(0.8);
        sfSprite_destroy(blood_sprite);
        sfTexture_destroy(blood);
    }
}
