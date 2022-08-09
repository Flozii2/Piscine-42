/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:49:30 by flortie           #+#    #+#             */
/*   Updated: 2022/07/27 13:15:10 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *txt)
{
	int	i;

	i = 0;
	while (txt[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	i2 = dest_len;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && (i < size - dest_len - 1))
	{
		dest[i2] = src[i];
		i++;
		i2++;
	}
	dest[i2] = '\0';
	return (dest_len + src_len);
}
