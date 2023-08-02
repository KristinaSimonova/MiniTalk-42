/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:32:33 by ksimonov          #+#    #+#             */
/*   Updated: 2023/07/05 14:15:34 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"

void	ft_send_bytes(char c, pid_t pid)
{
	int	i;

	i = 0;
	while (i <= 7)
	{
		if ((c & 1) == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c = c >> 1;
		i++;
		usleep(150);
	}
}

int	ft_error_handler(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Error! Wrong arguments\n");
		ft_printf("<./client> <PID> <message>\n");
		return (1);
	}
	while (argv[1][i])
	{
		if (ft_isdigit(argv[1][i]) != 1)
		{
			ft_printf("Error! PID is missing, write it before the message\n");
			ft_printf("<./client> <PID> <message>\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	pid_t	pr_id;
	int		i;

	i = 0;
	if (ft_error_handler(argc, argv) == 1)
		return (0);
	pr_id = ft_atoi(argv[1]);
	if (pr_id <= 0)
		return (1);
	while (argv[2][i])
	{
		ft_send_bytes(argv[2][i], pr_id);
		i++;
	}
	return (0);
}
