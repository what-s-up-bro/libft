/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:24:36 by yaait-am          #+#    #+#             */
/*   Updated: 2024/07/07 10:56:13 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*yas;
	int		i;

	i = 0;
	yas = (char *) malloc (sizeof(char) * ft_strlen(src) + 1);
	if (!yas)
		return (NULL);
	while (src[i])
	{
		yas[i] = src[i];
		i++;
	}
	yas[i] = '\0';
	return (yas);
}
