/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:23:40 by flortie           #+#    #+#             */
/*   Updated: 2022/07/26 22:13:53 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[i2] && str[i + i2] == to_find[i2] && str[i + i2] != '\0')
			i2++;
		if (!to_find[i2])
			return (&str[i]);
		i++;
		i2 = 0;
	}
	return (0);
}
