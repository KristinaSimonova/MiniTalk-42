/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:07:47 by ksimonov          #+#    #+#             */
/*   Updated: 2023/07/04 16:09:42 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(va_list args, char c)
{
	int	length;

	length = 0;
	if (c == 'c')
		length = length + ft_putchar(va_arg(args, int));
	if (c == 's')
		length = length + ft_putstr(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		length = length + ft_putnum(va_arg(args, int));
	if (c == 'x' || c == 'X')
		length = length + ft_puthex(va_arg(args, unsigned int), c);
	if (c == 'p')
		length += ft_putstr("0x") + ft_putpointer(va_arg(args, unsigned long));
	if (c == 'u')
		length = length + ft_putunint(va_arg(args, unsigned int));
	if (c == '%')
		length = length + ft_putchar('%');
	if (c == ' ')
		length = length + ft_putchar(' ');
	return (length);
}

static int	is_flag(char flag)
{
	if (flag == 'c' || flag == 's' || flag == 'p' || flag == 'X'
		|| flag == 'x' || flag == 'd' || flag == 'i'
		|| flag == 'u' || flag == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (is_flag(str[i]))
				length += ft_convert(args, str[i]);
			else
				length = length + ft_putchar(str[i]);
		}
		else
			length = length + ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
