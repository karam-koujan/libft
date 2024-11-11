/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:47:00 by kkoujan           #+#    #+#             */
/*   Updated: 2024/11/05 16:28:21 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*l;
	int		count;

	count = 1;
	l = lst;
	if (l == NULL)
		return (0);
	while (l->next)
	{
		count++;
		l = l->next;
	}
	return (count);
}
