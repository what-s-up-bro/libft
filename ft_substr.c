/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:37:35 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/30 08:57:57 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*y;
	size_t	h;

	if (!s)
		return (NULL);
	h = ft_strlen(s);
	if (start >= h)
		return (ft_strdup(""));
	if (len > h - start)
		len = h - start;
	y = malloc((len + 1) * sizeof(char));
	if (!y)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		y[i] = s[start + i];
		i++;
	}
	y[i] = '\0';
	return (y);
}
