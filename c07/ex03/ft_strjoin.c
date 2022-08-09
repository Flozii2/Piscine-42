/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flortie <flortie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:37:57 by flortie           #+#    #+#             */
/*   Updated: 2022/07/25 18:11:55 by flortie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	foundsep(char str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (str == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*mainstr;
	int		i;
	char	slen;

	i = 0;
	slen = ft_strlen(*strs);
	mainstr = malloc(sizeof(char) * (slen + 1));
	if (!mainstr)
		return (NULL);
	if (!size)
		return (mainstr);
	while (strs[i] != '\0')
	{
		if (!foundsep(*strs[i], sep))
			mainstr = ft_strcat(mainstr, strs[i]);
		i++;
	}
	return (mainstr);
}

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n", ft_strjoin(argc, &argv[1], "___"));
}
