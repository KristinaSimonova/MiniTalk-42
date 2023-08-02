/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:00:48 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/23 16:10:00 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunint(unsigned int n)
{
	int	length;

	length = 0;
	if (n == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	else if (n >= 10)
	{
		length = length + ft_putunint(n / 10);
		length = length + ft_putunint(n % 10);
	}
	else
		length = length + ft_putchar(n + '0');
	return (length);
}
