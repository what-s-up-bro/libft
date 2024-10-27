/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:37:35 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/26 09:56:29 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*y;
	size_t	h;

	if (!s)
		return (NULL);
	h = strlen(s);
	y = malloc(len + 1 sizeof * ((char)));
	if (!y)
		return (NULL);
	if (len > h - start)
		len = h - start;
	if (start >= h)
		return (strdup(""));
	i = 0;
	while (i < len && s[start + 1])
	{
		y[i] = s[start + i];
		i++;
	}
	y[i] = '\0';
	return (y);
}
