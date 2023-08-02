/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:35:02 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/22 16:43:43 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnum(int nb)
{
	int	length;

	length = 0;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (nb < 0)
	{
		length += ft_putchar('-');
		length += ft_putnum(nb * -1);
	}
	else if (nb >= 10)
	{
		length += ft_putnum(nb / 10);
		length += ft_putnum(nb % 10);
	}
	else
		length += ft_putchar(nb + '0');
	return (length);
}
