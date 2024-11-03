/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:24:36 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/03 11:38:14 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*yas;
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	yas = malloc(i + 1);
	if (!yas)
		return (NULL);
	j = 0;
	while (j < i)
	{
		yas[j] = src[j];
		j++;
	}
	yas[i] = '\0';
	return (yas);
}
