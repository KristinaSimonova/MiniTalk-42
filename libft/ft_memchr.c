/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:16:33 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/16 15:28:01 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*str;

	i = 0;
	a = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*str == a)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
