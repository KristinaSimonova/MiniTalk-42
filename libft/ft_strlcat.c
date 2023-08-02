/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:13:02 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/16 15:47:59 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (dst[j] && j < dstsize)
		j++;
	while ((src[i]) && ((j + i + 1) < dstsize))
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != dstsize)
		dst[j + i] = '\0';
	return (j + ft_strlen(src));
}
