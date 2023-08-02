/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:21:19 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/23 15:57:01 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (n > 15)
		len += ft_putpointer(n / 16);
	len += ft_putchar(hex[n % 16]);
	return (len);
}
