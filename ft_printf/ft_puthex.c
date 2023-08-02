/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:11:40 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/22 17:28:36 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_puthex(unsigned int n, char c)
{
	int		len;
	char	*hex;

	len = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
		len += ft_puthex(n / 16, c);
	len += ft_putchar(hex[n % 16]);
	return (len);
}
