/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-a <llopez-a@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:25:02 by llopez-a          #+#    #+#             */
/*   Updated: 2022/04/25 20:55:20 by llopez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_printf_char(char c);
int	ft_choose_format(const char y, va_list args);
int	ft_printf_str(char *str);
int	ft_printf_ptr(void *ptr);
int	ft_printf_hex(unsigned int x);
int	ft_printf_hexcap(unsigned int x);
int	ft_printf_int(int x);
int	ft_printf_un(unsigned int x);

#endif
