/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:08:38 by kkoujan           #+#    #+#             */
/*   Updated: 2024/10/31 11:47:00 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start_idx(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, (int)s1[i]) != NULL)
	{
		i++;
	}
	return (i);
}

static int	get_end_idx(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strchr(set, (int)s1[i]) != NULL)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (get_start_idx(s1, set) > get_end_idx(s1, set))
	{
		ptr = (char *)malloc(1 * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	len = get_end_idx(s1, set) - get_start_idx(s1, set) + 1;
	ptr = ft_substr(s1, get_start_idx(s1, set), len);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
