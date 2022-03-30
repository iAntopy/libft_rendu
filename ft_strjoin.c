/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:55:28 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:55:29 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jstr;
	char	*j;

	jstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!jstr)
		return (NULL);
	j = jstr;
	while (*s1)
		*(j++) = *(s1++);
	while (*s2)
		*(j++) = *(s2++);
	*j = '\0';
	return (jstr);
}
/*
int	main(int argc, char *argv[])
{
	char	*jstr;

	if (argc > 2)
	{
		jstr = ft_strjoin(argv[1], argv[2]);
		ft_putstr("str1, str2 : ");
		ft_putstr(argv[1]);
		ft_putstr(", ");
		ft_putstr(argv[2]);
		ft_putstr("\n");
		ft_putstr("jstr : ");
		ft_putstr(jstr);

	}
	return (0);
}
*/
