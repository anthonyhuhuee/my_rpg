/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-mypaint-anthony.ardhuin
** File description:
** macros
*/

#ifndef MACROS_H_
    #define MACROS_H_

    #define SUCCESS 0
    #define FAILURE 84

    #define WIN_NAME "My RPG"
    #define WIN_WID 1080
    #define WIN_HEI 1920

    #define GROUND_PATH "res/images/groundmap.png"
    #define WALLS_PATH "res/images/wallmap.png"
    #define WALKMAP_PATH "res/images/walking_map.png"
    #define PLAYER_PATH "res/images/player.png"
    #define COPS_PATH "res/images/cop2idle.png"
    #define RCOP_PATH "res/images/reverse_cop.png"
    #define FIGHT_BG "res/images/fight_background.png"
    #define MUSIC_PATH "res/music/Song_for_rpg.ogg"
    #define FONT_PATH "res/font/m5x7.ttf"
    #define TITLE_PATH "res/font/prison_walls.ttf"
    #define SETT_BG_PATH "res/images/Settings_bg.png"
    #define HTP_PATH "res/images/How_to_play.png"
    #define SETT_PATH "res/images/Settings.png"
    #define INV_PATH "res/images/Inventory.png"
    #define PRISONER_PATH "res/images/prisoner.png"
    #define QUEST_PATH "res/images/quest.png"
    #define NORMAL_BUTTON "res/images/button_normal.png"
    #define HOVER_BUTTON "res/images/button_hover.png"
    #define PRESSED_BUTTON "res/images/button_pressed.png"
    #define PRISON_BG "res/images/prison_background.png"
    #define BLOOD_PATH "res/images/blood_anim.png"
    #define WIN_PATH "res/images/win_screen.png"
    #define LOOSE_PATH "res/images/loose_screen.png"
    #define STATHUD_PATH "res/images/player_hud.png"
    #define COPHUD_PATH "res/images/cop_hud.png"

    #define WALLS_TEXTURE result->textures->walls
    #define GROUND_TEXTURE result->textures->ground_map
    #define PLAYER_TEXTURE result->textures->player
    #define COPS_TEXTURE result->textures->cops
    #define FIGHTBG_TEXTURE result->textures->fight_bg
    #define RCOP_TEXTURE result->textures->reverse_cop
    #define PRISONER_TEXTURE result->textures->prisoner
    #define QUEST_TEXTURE result->textures->quest
    #define WIN_TEXTURE result->textures->win
    #define LOOSE_TEXTURE result->textures->loose
    #define STATHUD_TEXTURE result->textures->playerhud
    #define COPHUD_TEXTURE result->textures->cop_hud

    #define INIT_COPS result->cops_struct->cops
    #define R_WALLS result->sprite_struct->walls_map
    #define R_PLAYER result->sprite_struct->player
    #define R_GROUND result->sprite_struct->ground_map
    #define R_FIGHTBG result->sprite_struct->fight_bg
    #define R_RCOP result->sprite_struct->reverse_cop
    #define R_PRISONER result->sprite_struct->prisoner
    #define R_QUEST result->sprite_struct->quest
    #define R_WIN result->sprite_struct->win_screen
    #define R_LOOSE result->sprite_struct->loose_screen
    #define R_STATHUD result->sprite_struct->player_hud
    #define R_COPHUD result->sprite_struct->cop_hud
    #define PLAYER_SIZE_X 530
    #define PLAYER_SIZE_Y 833
    #define PLAYER_MAX 1060

    #define MOUSE &event.mouseButton
    #define MOUSE_X curr_pos.x
    #define MOUSE_Y curr_pos.y

    #define SPEED rpg->player->player_stats->speed

    #define WINDOW rpg->window
    #define P_CLOCK rpg->player->player_clock
    #define P_RECT rpg->player->player_rect
    #define SCENE rpg->scene
    #define VIEW rpg->player->view
    #define PLAYER rpg->sprite_struct->player
    #define PRISONER rpg->sprite_struct->prisoner
    #define QUEST rpg->sprite_struct->quest
    #define COP rpg->cops_struct
    #define MAP rpg->sprite_struct->ground_map
    #define WALLS rpg->sprite_struct->walls_map
    #define FCOP rpg->sprite_struct->reverse_cop
    #define WIN rpg->sprite_struct->win_screen
    #define LOOSE rpg->sprite_struct->loose_screen
    #define PLAYERHUD rpg->sprite_struct->player_hud
    #define COPHUD rpg->sprite_struct->cop_hud
    #define FIGHT_MENU rpg->fight_menu

#endif /* !MACROS_H_ */
