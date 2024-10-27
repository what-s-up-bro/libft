/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:20:41 by yaait-am          #+#    #+#             */
/*   Updated: 2024/10/27 10:28:42 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_count(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb / 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*yas;

	i = 0;
	j = ft_count(n);
	yas = malloc ((j * sizeof(char)) + 1);
	if (!yas)
		return (NULL);
	if (n < 0)
	{
		yas[i] = '-';
		n = -n;
		i++;
	}
	i = j - 1;
	while (n >= 0 && i > 0)
	{
		yas[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	yas[j] = '\0';
	return (yas);
}
