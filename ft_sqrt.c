/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:27:40 by pavaucha          #+#    #+#             */
/*   Updated: 2017/11/15 17:42:56 by pavaucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb <= 92682)
		i = nb / 2;
	else
		i = 46341;
	while (i != 1)
	{
		if (i * i == nb)
			return (i);
		i--;
	}
	return (0);
}
