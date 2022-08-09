/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:14:25 by flortie           #+#    #+#             */
/*   Updated: 2022/07/21 16:08:28 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int *range;

	printf("N'oubliez pas d'utiliser malloc\n");

	range = ft_range(0, 2);
	if (range[0] == 0 && range[1] == 1)
        printf("Success 1/2\n");
	range = ft_range(53, 3);
    if (range == 0)
        printf("Success 2/2\n");
}