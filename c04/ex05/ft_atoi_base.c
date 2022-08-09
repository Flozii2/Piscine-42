/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:02:03 by flortie           #+#    #+#             */
/*   Updated: 2022/07/27 12:03:47 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_arecharsunique(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_contains_plus_or_minus(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	iswhitespaces(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	res;
	int	len;

	while (base[len] != '\0')
		len++;
	if (len <= 1 || !ft_arecharsunique(base)
		|| ft_contains_plus_or_minus(base))
		return (0);
	while (iswhitespaces(str[i]))
		i++;
	while (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while ((str[i] != '\0') && ft_strchr(base, str[i]))
	{
		j = ft_strchr(base, str[i]) - base;
		res = res * len + j;
		i++;
	}
	return (res * sign);
}
