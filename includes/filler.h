/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:16:38 by agusev            #+#    #+#             */
/*   Updated: 2019/04/29 22:31:05 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../libft/libft.h"

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef	struct	s_filler
{
	char		enemy;
	char		player;
	char		**map;
	int			map_x;
	int			map_y;
	char		**piece;
	int			piece_x;
	int			piece_y;
}				t_filler;

int				solver(t_filler *filler);
int				**map_apply(char player, char enemy, char **map);

#endif
