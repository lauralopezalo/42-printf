/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:49:55 by llopez-a          #+#    #+#             */
/*   Updated: 2022/04/25 20:49:57 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_un(unsigned int x)
{
	int	i;

	i = 0;
	if (x > 9)
	{
		i = i + ft_printf_un(x / 10);
		i = i + ft_printf_char(x % 10 + '0');
	}
	else
		i = i + ft_printf_char(x + '0');
	return (i);
}
