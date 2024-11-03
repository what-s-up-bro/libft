/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:26:55 by yaait-am          #+#    #+#             */
/*   Updated: 2024/11/03 11:43:56 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	yas;
	int	sir;

	i = 0;
	sir = 1;
	yas = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sir = -sir;
		i++;
	}
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		yas = (yas * 10 + (str[i] - 48));
		i++;
	}
	return (yas * sir);
}
