/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:41:58 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:42:00 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	mem_size;

	mem_size = nmemb * size;
	ptr = malloc(mem_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, mem_size);
	return (ptr);
}
/*
int	main(void)
{
	char	*buff;

	buff = (char *)calloc(10, sizeof(char));
	ft_strlcpy(buff, "ass scratcherino !\n", 20);
	ft_putstr(buff);
	return (0);
}
*/
