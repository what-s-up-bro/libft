/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:53:39 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/27 12:15:17 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*calloc(size_t num, size_t size)
{
	void	*yas;

	yas = malloc(num * size);
	if (!yas)
		return (NULL);
	ft_memset(yas, 0, num * size);
	return (yas);
}
