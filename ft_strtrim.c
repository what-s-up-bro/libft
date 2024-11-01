/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:02:25 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/01 11:58:23 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sir(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*yas;
	size_t	a;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_sir(s1[i], set))
		i++;
	while (j > i && ft_sir(s1[j], set))
		j--;
	yas = malloc ((j - i + 2) * sizeof (char));
	if (!yas)
		return (NULL);
	a = 0;
	while (i <= j)
		yas[a++] = s1[i++];
	yas[a] = '\0';
	return (yas);
}
