/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:00:37 by flortie           #+#    #+#             */
/*   Updated: 2022/07/27 15:27:37 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# define ARGCERR 2

# include <unistd.h>
# include <fcntl.h>

int		check_arguments(int argc, char *argv[]);

int		get_file_size(char *filename);
char	*read_file(char *filename);

typedef struct ft_map
{
	unsigned int	x;
	unsigned int	y;
}	t_map;

#endif