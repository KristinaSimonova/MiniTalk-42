/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:17:49 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/19 17:05:22 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	str = malloc(size * count);
	if (!str)
		return (NULL);
	ft_memset(str, 0, count * size);
	return (str);
}
