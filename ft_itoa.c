/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:46:14 by kkoujan           #+#    #+#             */
/*   Updated: 2024/10/31 12:30:30 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	num_len(long n)
{
	long	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*fill_str(char *s, long nbr, int len, int sign)
{
	while (len > 0)
	{
		s[len + sign - 1] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		sign;		
	long	nbr;

	sign = 0;
	nbr = n;
	if (nbr < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	len = num_len(nbr);
	s = (char *)malloc((len + sign + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (sign)
		s[0] = '-';
	s[len + sign] = '\0';
	return (fill_str(s, nbr, len, sign));
}
