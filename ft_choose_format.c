/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:47 by llopez-a          #+#    #+#             */
/*   Updated: 2022/04/25 20:56:40 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choose_format(const char y, va_list args)
{
	if (y == 'c')
		return (ft_printf_char(va_arg(args, int)));
	if (y == 's')
		return (ft_printf_str(va_arg(args, char *)));
	if (y == 'p')
		return (ft_printf_ptr(va_arg(args, void *)));
	if (y == 'd' || y == 'i')
		return (ft_printf_int(va_arg(args, int)));
	if (y == 'u')
		return (ft_printf_un(va_arg(args, unsigned int)));
	if (y == 'x')
		return (ft_printf_hex(va_arg(args, unsigned int)));
	if (y == 'X')
		return (ft_printf_hexcap(va_arg(args, unsigned int)));
	if (y == '%')
		return (ft_printf_char('%'));
	return (0);
}
