/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <jchotel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 12:31:49 by jchotel           #+#    #+#             */
/*   Updated: 2020/01/23 20:51:34 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	handle_o(char *buffer, t_arg *arg, int *count, int i)
{
	i = 0;
	ft_putstr_count(buffer, count, arg->w2);
}
