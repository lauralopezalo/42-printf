/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:08:29 by llopez-a          #+#    #+#             */
/*   Updated: 2022/04/25 20:08:31 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int x)
{
	int	i;

	i = 0;
	if (x == -2147483648)
		return (ft_printf_str("-2147483648"));
	if (x < 0)
	{	
		i = i + ft_printf_char('-');
		x = -x;
	}
	if (x > 9)
	{
		i = i + ft_printf_int(x / 10);
		i = i + ft_printf_char(x % 10 + '0');
	}
	else
		i = i + ft_printf_char(x + '0');
	return (i);
}
