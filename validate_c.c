/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:20:20 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/13 23:03:20 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	process_map_element(t_data_game *game, int i, int j,
							t_element_count *count)
{
	if (game->map.map[i][j] == 'C')
		game->total_collectibles++;
	else if (game->map.map[i][j] == 'P')
	{
		count->player++;
		game->map.player_x_position = j;
		game->map.player_y_position = i;
	}
	else if (game->map.map[i][j] == 'E')
		count->exit++;
}

static void	flood_fill(char **map, int x, int y, t_data_game *game)
{
	if (map[y][x] == '1' || map[y][x] == 'v' || map[y][x] == 'M')
		return ;
	if (map[y][x] == 'C')
		game->total_collectibles_found++;
	if (map[y][x] == 'E')//compare in logic
		game->zjebana;
	map[y][x] = 'v';
	flood_fill(map, x, y - 1, game);
	flood_fill(map, x - 1, y, game);
	flood_fill(map, x, y + 1, game);
	flood_fill(map, x + 1, y, game);
}

void	validate_path(t_data_game *game)
{
	char	**map_copy;
	int		i;

	game->total_collectibles_found = 0;
	map_copy = malloc(sizeof(char *) * game->map.map_height);
	if (!map_copy)
		end_game(game, "Malloc error for map copy", 1);
	i = 0;
	while (i < game->map.map_height)
	{
		map_copy[i] = ft_strdup(game->map.map[i]);
		if (!map_copy[i])
			end_game(game, "Malloc error for map row copy", 1);
		i++;
	}
	flood_fill(map_copy, game->map.player_x_position,
		game->map.player_y_position, game);
	if (game->total_collectibles_found != game->total_collectibles)
		end_game(game, "Not all collectibles are accessible!", 1);
	i = 0;
	while (i < game->map.map_height)
		free(map_copy[i++]);
	free(map_copy);
}
