/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-mypaint-anthony.ardhuin
** File description:
** structs
*/

#ifndef STRUCTS_H_
    #define STRUCTS_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>

typedef struct all_textures_s {
    sfTexture *ground_map;
    sfTexture *walls;
    sfTexture *walk;
    sfTexture *player;
    sfTexture *cops;
    sfTexture *fight_bg;
    sfTexture *reverse_cop;
    sfTexture *prisoner;
    sfTexture *quest;
    sfTexture *win;
    sfTexture *loose;
    sfTexture *playerhud;
    sfTexture *cop_hud;
} all_textures_t;

typedef struct all_sprite_s {
    sfSprite *ground_map;
    sfSprite *walls_map;
    sfSprite *player;
    sfSprite *fight_bg;
    sfSprite *reverse_cop;
    sfSprite *prisoner;
    sfSprite *quest;
    sfSprite *win_screen;
    sfSprite *loose_screen;
    sfSprite *player_hud;
    sfSprite *cop_hud;
} all_sprite_t;

enum e_gui_state {
    NONE = 0,
    HOVER = 1,
    PRESSED = 2,
    RELEASED = 3
};

enum e_rpg_scene {
    MAIN_MENU = 0,
    GAME_MENU = 1,
    RPG = 2,
    FIGHT = 3,
    END = 4
};

typedef struct s_gui_object {
    sfRectangleShape *rect;
    sfSprite *normal;
    sfSprite *hover;
    sfSprite *pressed;
    void (*is_clicked)(struct s_gui_object *button, sfMouseButtonEvent *mouse);
    void (*is_hover)(struct s_gui_object *button, sfMouseMoveEvent *mouse);
    enum e_gui_state state;
} t_gui_object;

typedef struct main_menu_s {
    sfSprite *background;
    t_gui_object *b_play;
    t_gui_object *b_options;
    t_gui_object *b_quit;
    sfText *title;
    sfText *play;
    sfText *options;
    sfText *quit;
} main_menu_t;

typedef struct textures_s {
    sfTexture *map_texture;
} textures_t;

typedef struct s_gui_options {
    struct s_gui_object *option;
    struct s_gui_options *next;
} t_gui_options;

typedef struct s_gui_drop_menu {
    struct s_gui_object *button;
    struct s_gui_options *options;
} t_gui_drop_menu;

typedef struct player_mov_s {
    sfBool move_right;
    sfBool move_left;
    sfBool move_up;
    sfBool move_down;
    sfBool interact;
} player_mov_t;

typedef struct npc_stats_s {
    int life;
    int attack;
    bool have_key;
    bool have_bandage;
    bool have_scissors;
} npc_stats_t;

typedef struct fight_stats_text_s {
    sfText *p_life;
    sfText *p_attack;
    sfText *p_xp;
    sfText *p_lvl;
    sfText *c_life;
} fight_stats_text_t;

typedef struct fight_scene_s {
    t_gui_object *b_attack;
    t_gui_object *b_run;
    sfText *attack;
    sfText *run;
    fight_stats_text_t *stats_text;
} fight_scene_t;

typedef struct all_cops_s {
    sfSprite *cops;
    npc_stats_t *stats;
    sfBool is_attacked;
    struct all_cops_s *next;
} all_cops_t;

typedef struct player_stats_s {
    int life;
    int attack;
    int speed;
    int xp;
    int level;
} player_stats_t;

enum e_game_menu {
    INVENTORY = 0,
    SETTINGS = 1,
    HOWTOPLAY = 2
};

typedef struct game_menu_s {
    sfSprite *background;
    sfSprite *how_to_play;
    sfSprite *s_settings;
    sfSprite *s_inventory;
    t_gui_object *b_menu;
    t_gui_object *b_settings;
    t_gui_object *b_inventory;
    t_gui_object *b_htp;
    sfText *menu;
    sfText *inventory;
    sfText *settings;
    sfText *htp;
    sfText *inv_bandage;
    sfText *inv_scissors;
    enum e_game_menu menus;
} game_menu_t;

typedef struct inventory_s {
    int bandage;
    int scissors;
    bool key;
} inventory_t;

typedef struct player_struct_s {
    sfView *view;
    sfClock *player_clock;
    sfImage *walk;
    player_mov_t *movement;
    player_stats_t *player_stats;
    inventory_t *inventory;
    sfVector2f player_pos;
    sfVector2f player_scale;
    sfIntRect player_rect;
} player_struct_t;

typedef struct end_menu_s {
    t_gui_object *b_quit;
    sfText *quit;
} end_menu_t;

typedef struct game_struct_s {
    sfRenderWindow *window;
    all_textures_t *textures;
    all_cops_t *cops_struct;
    all_sprite_t *sprite_struct;
    player_struct_t *player;
    main_menu_t *main_menu;
    game_menu_t *game_menu;
    fight_scene_t *fight_menu;
    end_menu_t *end_menu;
    sfFont *font;
    sfFont *title_font;
    sfMusic *music;
    enum e_rpg_scene scene;
} game_struct_t;

#endif /* !STRUCTS_H_ */
