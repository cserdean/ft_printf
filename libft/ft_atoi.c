/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserdean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:57:38 by cserdean          #+#    #+#             */
/*   Updated: 2017/02/09 13:57:40 by cserdean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int nr;
	int neg;

	nr = 0;
	neg = 1;
	while (*str == '\f' || *str == '\t' || *str == '\n' || *str == '\r'
					|| *str == '\v' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nr = nr * 10 + *str - 48;
		str++;
	}
	return (nr * neg);
}
