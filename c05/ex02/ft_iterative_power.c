/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:51:25 by flortie           #+#    #+#             */
/*   Updated: 2022/07/19 19:05:33 by flortie          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	final;

	final = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (power > 0)
	{
		final = final * nb;
		power--;
	}
	return (final);
}
