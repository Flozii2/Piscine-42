/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:17:16 by flortie           #+#    #+#             */
/*   Updated: 2022/07/27 15:32:32 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_bsq.h>

int	test_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	return (fd);
}

char	*read_file(char *filename)
{
	int		fd;
	int		file_size;
	char	*buffer;
	int		last_pos;

	fd = test_file(filename);
	if (fd == -1)
		return (NULL);
	file_size = get_file_size(filename);
	if (file_size < 1)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (file_size + 1));
	if (!buffer)
		return (NULL);
	last_pos = read(fd, buffer, file_size);
	close(fd);
	buffer[last_pos] = '\0';
	return (buffer);
}

int	get_file_size(char *filename)
{
	int		fd;
	int		size;
	int		act_pos;
	char	buffer[1];

	fd = test_file(filename);
	if (fd == -1)
		return (-1);
	size = 0;
	act_pos = 1;
	while (act_pos != 0)
	{
		act_pos = read(fd, buffer, 1);
		size++;
	}
	close(fd);
	return (size);
}
