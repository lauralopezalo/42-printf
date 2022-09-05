/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:17:44 by llopez-a          #+#    #+#             */
/*   Updated: 2022/04/25 20:39:58 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int x)
{
	int		i;

	i = 0;
	if (x > 15)
	{
		i = i + ft_printf_hex(x / 16);
		i = i + ft_printf_hex(x % 16);
	}
	else
	{
		if (x < 10)
			i = i + ft_printf_char(x + '0');
		else
			i = i + ft_printf_char(x - 10 + 'a');
	}
	return (i);
}
