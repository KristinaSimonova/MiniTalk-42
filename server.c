/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:32:40 by ksimonov          #+#    #+#             */
/*   Updated: 2023/07/04 16:10:24 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"

void	ft_print_bytes(char *byte)
{
	int		*a;
	int		i;
	int		sum;
	char	c;

	sum = 0;
	i = 0;
	a = (int [8]){1, 2, 4, 8, 16, 32, 64, 128};
	while (i < 8)
	{
		if (byte[i] == '1')
			sum += a[i];
		i++;
	}
	c = sum;
	write(1, &c, 1);
}

void	sighandler(int signum)
{
	static char	byte[8];
	static int	i;

	byte[i] = signum - 30;
	if (i == 7)
	{
		byte[i] = ((signum - 30) + '0');
		ft_print_bytes(byte);
		i = 0;
		return ;
	}
	byte[i] = ((signum - 30) + '0');
	i++;
}

int	main(void)
{
	ft_printf("SERVER'S PID IS: %d\n", getpid());
	while (1)
	{
		usleep(50);
		signal(SIGUSR1, sighandler);
		signal(SIGUSR2, sighandler);
	}
	return (0);
}
