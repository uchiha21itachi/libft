/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 05:51:00 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/08 05:51:01 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		neg;
	char	c;

	c = 45;
	neg = 0;
	if (n == -2147483648)
	{
		ft_putchar_fd(c, fd);
		ft_putchar_fd(50, fd);
		n = 147483648;
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd(c, fd);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}
