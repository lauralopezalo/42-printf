/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:01:54 by llopez-a          #+#    #+#             */
/*   Updated: 2022/04/25 20:02:38 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_position(unsigned long long pos)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (pos > 15)
	{
		i = i + ft_print_position(pos / 16);
		i = i + ft_print_position(pos % 16);
	}
	else
	{
		if (pos < 10)
			i = i + ft_printf_char(pos + '0');
		else
			i = i + ft_printf_char(pos - 10 + 'a');
	}
	return (i);
}

int	ft_printf_ptr(void *pos)
{
	return (write(1, "0x", 2) + ft_print_position((unsigned long long)pos));
}
