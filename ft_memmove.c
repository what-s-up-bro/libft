/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:17:36 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/03 09:50:41 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			a;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d < s)
	{
		i = 0;
		a = i;
		while (i < n)
			d[i++] = s[a++];
	}
	else
	{
		i = n;
		a = i;
		while (i > 0)
			d[i-- - 1] = s[a-- - 1];
	}
	return (d);
}
