/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:11:00 by jchotel           #+#    #+#             */
/*   Updated: 2020/01/23 20:52:32 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long int	result;
	long				sign;
	int					index;

	result = 0;
	index = 0;
	sign = 1;
	while ((str[index] >= 8 && str[index] <= 13) || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -sign;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	if (result > 9223372036854775807UL && sign == 1)
		return (-1);
	else if (result > 9223372036854775808UL && sign == -1)
		return (0);
	return (result * sign);
}
