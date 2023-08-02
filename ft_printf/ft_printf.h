/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:09:57 by ksimonov          #+#    #+#             */
/*   Updated: 2023/02/23 16:09:21 by ksimonov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_convert(va_list args, char c);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnum(int nb);
int	ft_puthex(unsigned int n, char c);
int	ft_putpointer(unsigned long n);
int	ft_putunint(unsigned int n);

#endif