/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 15:24:53 by magoumi           #+#    #+#             */
/*   Updated: 2019/11/20 15:25:02 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_countnumber(intmax_t v, int b)
{
	long	i;

	i = 0;
	if (v < 0)
	{
		i = i + 1;
		v = v * -1;
	}
	while (v > 0)
	{
		i = i + 1;
		v = v / b;
	}
	return (i);
}