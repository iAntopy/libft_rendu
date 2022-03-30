/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_average_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:45:56 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:45:57 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_average(t_list *lst)
{
	int	size;
	int	total;

	size = 0;
	total = 0;
	while (lst)
	{
		total += *(int *)(lst->content);
		size++;
		lst = lst->next
	}
	return (total / size);
}
