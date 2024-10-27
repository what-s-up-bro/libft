/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:17:25 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/27 17:23:10 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*yas;

	if (!lst)
		return (NULL);
	yas = lst;
	while (yas->next != NULL)
		yas = yas->next;
	return (yas);
}
