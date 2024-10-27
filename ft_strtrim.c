/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:02:25 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/27 11:07:24 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

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

	i = 0;
	a = 0;
	if (!s1 || !set)
		return ;
	j = strlen(s1) - 1;
	if (j == -1)
		return (strdup(""));
	while (s1[i] && ft_sir(s1[i], set))
		i++;
	while (j > i && ft_sir(s1[j], set))
		j--;
	yas = malloc ((j - i) + 1 + 1);
	if (!yas)
		return (NULL);
	yas[j - i + 2] = 0;
	while (s1[i] != '\0' && i <= j)
		yas[a++] = s1[i++];
	return (yas);
}
