/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:38:55 by yaait-am          #+#    #+#             */
/*   Updated: 2024/07/08 18:19:46 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_sir(int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		if (i < size - 1)
			j = j + ft_strlen(sep);
		i++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*yas;

	j = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	j = ft_sir(size, strs, sep);
	yas = malloc((j * sizeof(char)) + 1);
	if (! yas)
		return (NULL);
	yas[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(yas, strs[i]);
		if (i < size - 1)
			ft_strcat(yas, sep);
		i++;
	}
	return (yas);
}
