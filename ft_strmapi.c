/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:50:29 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/30 09:43:18 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*yas;

	i = 0;
	if (!s || !f)
		return (NULL);
	yas = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!yas)
		return (NULL);
	while (s[i])
	{
		yas[i] = f(i, s[i]);
		i++;
	}
	yas[i] = '\0';
	return (yas);
}
