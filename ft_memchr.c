/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:42:17 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/23 15:09:47 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*k;

	i = 0;
	k = (const unsigned char *)s;
	while (i < n)
	{
		if (k[i] == (unsigned char)c)
		{
			return ((void *)&k[i]);
		}
		i++;
	}
	return (0);
}
