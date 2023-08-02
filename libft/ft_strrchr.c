/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:12:39 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/16 15:53:45 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;

	chr = c;
	i = ft_strlen(s);
	while (i > 0 && s[i] != chr)
	{
		i--;
	}
	if (s[i] == chr)
		return ((char *)&s[i]);
	return (NULL);
}
