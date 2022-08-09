/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:51:07 by flortie           #+#    #+#             */
/*   Updated: 2022/07/28 14:58:41 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	blen;
	int	isnegative;

	blen = ft_strlen(base);
	if (nbr < 0)
	{
		isnegative = 1;
		nbr = -nbr;
	}
	else
		isnegative = 0;
	if (nbr >= blen)
		ft_putnbr_base(nbr / blen, base);
	i = nbr % blen;
	if (i < 0)
		i = i + blen;
	if (isnegative == 1)
		write(1, "-", 1);
	write(1, &base[i], 1);
}
