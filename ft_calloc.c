/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:53:39 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/04 15:44:51 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*yas;

	if (size != 0 && count > (SIZE_MAX / size))
		return (NULL);
	yas = malloc(count * size);
	if (!yas)
		return (NULL);
	ft_memset(yas, 0, count * size);
	return (yas);
}
