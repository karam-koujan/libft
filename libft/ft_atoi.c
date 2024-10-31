/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:34:56 by kkoujan           #+#    #+#             */
/*   Updated: 2024/10/29 21:26:21 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtoint(const char *str, int sign)
{
	long	result;
	long	max;

	max = 0;
	result = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result < max)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		max = result;
		str++;
	}
	return ((int)result * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = 1;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	return (ft_strtoint(str, sign));
}
