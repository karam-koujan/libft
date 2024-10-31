/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:04:56 by kkoujan           #+#    #+#             */
/*   Updated: 2024/10/29 22:14:35 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;

	s = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s, s1, ft_strlen(s1) + 1);
	return (s);
}
