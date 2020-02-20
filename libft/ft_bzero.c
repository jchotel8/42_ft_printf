/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <jchotel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:37:44 by jchotel           #+#    #+#             */
/*   Updated: 2020/01/23 20:51:34 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*d;
	unsigned int	index;

	index = 0;
	d = (unsigned char *)s;
	while (index < n)
	{
		d[index] = '\0';
		index++;
	}
}
