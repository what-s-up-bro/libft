/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:21:06 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/29 11:24:57 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s == c)
			j = 0;
		else if (!j)
		{
			j = 1;
			i++;
		}
		s++;
	}
	return (i);
}

static char	*ft_cpy(const char *s, char c)
{
	size_t		i;
	char		*word;
	size_t		j;
	const char	*sir;

	i = 0;
	j = 0;
	sir = s;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	word = (char *)malloc ((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (j < i)
	{
		word[j] = sir[j];
		j++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**yas;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = ft_count(s, c);
	yas = (char **) malloc ((words + 1) * sizeof(char *));
	if (!yas)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			yas[i++] = ft_cpy(s, c);
		while (*s && *s != c)
			s++;
	}
	yas[i] = NULL;
	return (yas);
}
