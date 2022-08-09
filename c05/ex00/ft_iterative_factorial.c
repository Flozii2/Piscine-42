/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:47:34 by flortie           #+#    #+#             */
/*   Updated: 2022/07/28 16:58:40 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	final;
	int				i;

	i = 0;
	final = 1;
	if (i <= 0)
		return (0);
	while (i != nb)
	{
		i++;
		final = final * i;
	}
	return (final);
}
