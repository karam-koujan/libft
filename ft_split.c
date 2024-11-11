/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:03:00 by kkoujan           #+#    #+#             */
/*   Updated: 2024/11/05 09:26:50 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

static void	free_arr(char **arr, int len)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		free(arr[i--]);
	}
	free(arr);
}

static char	**fill_arr(char **arr, char const *s, char c, int i)
{
	int	j;
	int	start;

	j = 0;
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		if (s[j])
		{
			start = j;
			while (s[j] && s[j] != c)
				j++;
			arr[i] = ft_substr(s, start, j - start);
			if (arr[i] == NULL)
			{
				free_arr(arr, i);
				return (NULL);
			}
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		word_count;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	arr = malloc((word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (word_count == 0)
	{
		arr[0] = NULL;
		return (arr);
	}
	return (fill_arr(arr, s, c, 0));
}
