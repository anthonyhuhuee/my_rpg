##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC = 	main.c 									\
		errors_handling.c						\
		int_to_str.c							\
		my_rpg.c 								\
		check_pixel_color.c						\
		draw_main_menu.c						\
		my_strlen.c								\
		my_strncmp.c							\
		scenes/call_scenes_function.c			\
		scenes/find_attacked_cop.c				\
		scenes/make_fight_scene.c				\
		scenes/make_attack_animation.c			\
		scenes/make_rpg_scene.c					\
		scenes/make_main_menu_scene.c			\
		scenes/make_game_menu_scene.c			\
		scenes/switch_to_end.c					\
		sprite/all_drawing_sprite.c				\
		sprite/move_rect.c						\
		init/create_sprite.c 					\
		init/create_text.c	 					\
		init/set_scale_and_color.c				\
		init/init_main_menu.c					\
		init/init_game_menu.c					\
		init/init_all_objects.c 				\
		init/init_window_object.c 				\
		init/init_all_sprites.c					\
		init/init_player_stats.c				\
		init/init_player_struct.c				\
		init/init_inventory.c					\
		init/init_cops.c 						\
		init/init_movements.c					\
		init/init_fight_stats.c					\
		event/event_main_menu.c					\
		event/event_game_menu.c					\
		event/event_fight_scene.c				\
		event/analyse_events.c 					\
		event/get_scroll_size.c					\
		event/keys_handling.c					\
		event/detect_quest_collision.c			\
		event/check_level.c						\
		event/use_bandage.c						\
		button/button_main_menu.c				\
		button/button_game_menu.c				\
		button/button_fight_scene.c				\
		button/button_end_scene.c				\
		button/is_clicked.c						\
		button/is_hover.c						\
		move_player/make_player_move.c			\
		move_player/make_player_move_right.c	\
		move_player/make_player_move_left.c		\
		move_player/make_player_move_down.c		\
		move_player/make_player_move_up.c		\
		refresh/refresh_stat_text.c				\
		refresh/refresh_life_stat.c				\
		free/destroy_button.c					\
		free/free_game_menu.c					\
		free/free_player.c						\
		free/free_texture.c						\
		free/free_sprite.c						\
		free/free_main_menu.c					\
		free/free_others.c						\
		free/free_fight_menu.c					\
		free/free_all_objects.c

OBJ = $(addprefix src/, $(SRC:.c=.o))

NAME = my_rpg

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I./include/

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(CSFML)

all: $(NAME)

clean:
	rm -f $(OBJ)
	make -C tests/ clean

fclean: clean
	rm -f $(NAME)
	find . -name "*.gcno" -delete
	find . -name "*.gcda" -delete
	make -C tests/ fclean

unit_tests:
	make -C tests/

run_tests:
	make -C tests/ run_tests

tests_run:
	make -C tests/ tests_run

re: fclean all

.PHONY: all clean fclean re unit_tests run_tests tests_run
