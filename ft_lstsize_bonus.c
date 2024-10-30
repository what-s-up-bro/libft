/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:50:58 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/28 10:19:15 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*yas;

	i = 0;
	if (!lst)
		return (0);
	yas = lst;
	while (yas != NULL)
	{
		i++;
		yas = yas->next;
	}
	return (i);
}
