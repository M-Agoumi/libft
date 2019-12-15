/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 01:00:00 by magoumi           #+#    #+#             */
/*   Updated: 2019/11/20 15:44:34 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(intmax_t value, int base)
{
	char	s[17];
	char	*result;
	long	i;

	if (value == 0)
		return ("0");
	if (value < 0 && base != 10)
		return (ft_itoa_negative(value, base));
	ft_strcpy(s, "0123456789abcdef");
	i = ft_countnumber(value, base);
	if (value < 0)
		value *= -1;
	result = (char*)ft_memalloc(i + 1);
	result[i] = 0;
	while (value > 0)
	{
		result[--i] = s[value % base];
		value /= base;
	}
	if (i == 1)
		result[0] = '-';
	return (result);
}
