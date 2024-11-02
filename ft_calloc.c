/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:53:39 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/02 08:32:31 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*yas;

	if (size != 0 && num > (SIZE_MAX / size))
		return (NULL);
	yas = malloc(num * size);
	if (!yas)
		return (NULL);
	ft_memset(yas, 0, num * size);
	return (yas);
}
