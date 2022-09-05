/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexcap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:18:41 by llopez-a          #+#    #+#             */
/*   Updated: 2022/04/25 20:18:43 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexcap(unsigned int x)
{
	int		i;

	i = 0;
	if (x > 15)
	{
		i = i + ft_printf_hexcap(x / 16);
		i = i + ft_printf_hexcap(x % 16);
	}
	else
	{
		if (x < 10)
			i = i + ft_printf_char(x + '0');
		else
			i = i + ft_printf_char(x - 10 + 'A');
	}
	return (i);
}
