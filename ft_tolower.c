/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:25:16 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/22 10:57:36 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'A')
		c = c + 32;
	return (c);
}
