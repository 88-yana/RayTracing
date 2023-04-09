/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuramat <tmuramat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:30:01 by hyanagim          #+#    #+#             */
/*   Updated: 2023/04/09 23:11:56 by tmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void	print_input(t_game *game);

int	main(int argc, char **argv)
{
	t_game	game;

	check_arg(argc, argv);
	input_file(&game, argv[1]);
	print_input(&game);
	init_game(&game);
	mlx_loop(game.mlx);
	system("leaks -q cub3D");
	return (0);
}
