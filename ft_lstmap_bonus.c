/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:09:16 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/31 09:53:26 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	t_list	*con;
	void	*new_c;

	if (!lst || !f || !del)
		return (NULL);
	con = lst;
	new_l = NULL;
	while (con)
	{
		new_c = f(con->content);
		new_n = ft_lstnew(new_c);
		if (!new_n || !new_c)
		{
			free (new_c);
			free (new_n);
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_l, new_n);
		con = con->next;
	}
	return (new_l);
}
