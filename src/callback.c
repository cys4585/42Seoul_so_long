/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callback.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcho <youngcho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:56:24 by youngcho          #+#    #+#             */
/*   Updated: 2022/07/30 15:34:38 by youngcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "callback.h"

int	on_keydown_callback(int keycode, void *param)
{
	if (keycode == KEY_D || keycode == KEY_A || \
		keycode == KEY_S || keycode == KEY_W)
		command_player_to_move(keycode, param);
	else if (keycode == KEY_ESC)
		terminate_command((t_game_info *)param);
	return (0);
}

int	on_destroy_callback(void *param)
{
	terminate_command((t_game_info *)param);
	return (0);
}
