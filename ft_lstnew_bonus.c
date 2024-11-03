/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:56:48 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/02 16:17:16 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*yas;

	yas = malloc(sizeof(t_list));
	if (!yas)
		return (NULL);
	yas->content = content;
	yas->next = NULL;
	return (yas);
}
