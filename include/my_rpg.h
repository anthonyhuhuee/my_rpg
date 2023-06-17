/*
** EPITECH PROJECT, 2023
** include
** File description:
** include
*/

#ifndef INCLUDE_
    #define INCLUDE_

    #include <SFML/Graphics.h>
    #include "structs.h"

int my_rpg(void);
int errors_handling(int nb_args, char **args, char **env_var);
char *int_to_str(int nb);

game_struct_t *init_all_objects(void);
sfRenderWindow *init_window_object(void);
game_struct_t *init_all_sprites(game_struct_t *result);
all_cops_t *init_all_cops(sfTexture *cops);
player_mov_t *init_movements(void);
player_stats_t *init_player_stats(void);
game_struct_t *init_player_struct(game_struct_t *result);
inventory_t *init_inventory(void);
void init_fight_stats(game_struct_t *rpg);

sfSprite *create_sprite(sfSprite *sprite, sfTexture *texture, sfVector2f pos);

void is_button_clicked(struct s_gui_object *button, sfMouseButtonEvent *mouse);
void is_mouse_hover(struct s_gui_object *button, sfMouseMoveEvent *mouse);

void analyse_events(game_struct_t *rpg);
void event_fight_menu(game_struct_t *rpg);

void make_player_move_left(game_struct_t *rpg, sfSprite *sprite);
void make_player_move_right(game_struct_t *rpg, sfSprite *sprite);
void make_player_move_down(game_struct_t *rpg, sfSprite *sprite);
void make_player_move_up(game_struct_t *rpg, sfSprite *sprite);
void make_player_move(game_struct_t *rpg, sfSprite *sprite);
all_cops_t *find_attacked_cop(all_cops_t *cops);

void key_released_handling(game_struct_t *rpg, sfKeyEvent *key_pressed);
void key_pressed_handling(game_struct_t *rpg, sfKeyEvent *key_pressed);

void detect_quest_collision(game_struct_t *rpg);

void call_scenes_function(game_struct_t *rpg);
void make_fight_scene(game_struct_t *rpg);
void make_rpg_scene(game_struct_t *rpg);
void make_game_menu_scene(game_struct_t *rpg);
void make_main_menu_scene(game_struct_t *rpg);

void check_level(game_struct_t *rpg);
void use_bandage(game_struct_t *rpg);

sfBool check_pixel_color(sfColor pixel, sfColor color);

sfVector2f get_scroll_size(sfView *view, sfMouseWheelEvent *wheel);

void all_drawing_sprite(game_struct_t *rpg);
void draw_fight_scene(game_struct_t *rpg, all_cops_t *attacked_cop);
void make_attack_animation(game_struct_t *rpg, all_cops_t *attacked_cop);
void move_rect(sfClock *clock, sfIntRect *rect);

sfText *create_text(sfFont *font, char *string, int pos_x, int pos_y);
sfText *create_text_mm(sfFont *font, char *string, int pos_x, int pos_y);

main_menu_t *init_main_menu(game_struct_t *rpg);
void button_pressed_mm(game_struct_t *rpg, sfMouseButtonEvent *mouse);
void mouse_hover_mm(game_struct_t *rpg, sfMouseMoveEvent *mouse);
void button_released_mm(game_struct_t *rpg);
void event_main_menu(game_struct_t *rpg);

void draw_buttons(game_struct_t *rpg, t_gui_object *button);
void handling_events(game_struct_t *rpg);
t_gui_object *create_button(int pos_x, int pos_y);

game_menu_t *init_game_menu(game_struct_t *rpg);
void button_pressed_gm(game_struct_t *rpg, sfMouseButtonEvent *mouse);
void mouse_hover_gm(game_struct_t *rpg, sfMouseMoveEvent *mouse);
void button_released_gm(game_struct_t *rpg);
void event_game_menu(game_struct_t *rpg);

void button_pressed_fm(game_struct_t *rpg, sfMouseButtonEvent *mouse);
void mouse_hover_fm(game_struct_t *rpg, sfMouseMoveEvent *mouse);
void button_released_fm(game_struct_t *rpg);

void button_pressed_es(game_struct_t *rpg, sfMouseButtonEvent *mouse);
void mouse_hover_es(game_struct_t *rpg, sfMouseMoveEvent *mouse);
void button_released_es(game_struct_t *rpg);
void switch_to_end(game_struct_t *rpg);

void set_scale_and_color(sfText *text, int size, sfColor color);
void refresh_stat_text(game_struct_t *rpg);
void refresh_life_stat(game_struct_t *rpg, all_cops_t *attacked_cop);

void destroy_button(t_gui_object *button);
void free_game_menu(game_menu_t *game);
void free_main_menu(main_menu_t *main_menu);
void free_fight_menu(fight_scene_t *fight_menu);
void free_player(game_struct_t *rpg);
void free_texture(game_struct_t *rpg);
void free_sprite(game_struct_t *rpg);
void free_others(game_struct_t *rpg);
void free_all_objects(game_struct_t *rpg);

int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *string);

#endif /* INCLUDE_ */
