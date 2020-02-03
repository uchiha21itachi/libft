/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:25:55 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/12 18:34:52 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	check_num(long num, int neg)
{
	if (neg > 0 && num > 2147483647)
		return (-1);
	else if (neg < 0 && num > 2147483648)
		return (0);
	return (num * neg);
}

int			ft_atoi(const char *str)
{
	long	num;
	int		neg;

	num = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r')
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - 48);
		if (num > 21474836470)
			break ;
		str++;
	}
	num = check_num(num, neg);
	return (num);
}
