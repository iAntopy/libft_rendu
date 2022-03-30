/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:54:05 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/30 15:37:16 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char const c, char const *set)
{
	while (*set)
		if (*(set++) == c)
			return (1);
	return (0);
}

static char	*return_empty_str(void)
{
	char	*empty;

	empty = (char *)malloc(sizeof(char));
	empty[0] = '\0';
	return (empty);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	while (s1[start] && char_in_set(s1[start], set))
		start++;
	if (!s1[start])
		return (return_empty_str());
	end = start;
	while (s1[end])
		end++;
	while ((start < --end) && char_in_set(s1[end], set))
		continue ;
	end++;
	if (start == end)
		return (return_empty_str());
	return (ft_substr(s1, start, end - start));
}
/*
int	main(int argc, char *argv[])
{
	char	*tstr;
	char	ctest[] = "abcdcba";

	tstr = ft_strtrim(ctest, "acb");
	ft_putstr("--Custom test : \n");
	ft_putstr("--Original str : \n");
	ft_putstr(ctest);
	ft_putstr("\n--trimed str : \n");
	ft_putstr(tstr);
	ft_putstr("\n\n");

	if (argc > 2)
	{
		tstr = ft_strtrim(argv[1], argv[2]);
		ft_putstr("init str, trimset : ");
		ft_putstr(argv[1]);
		ft_putstr(", ");
		ft_putstr(argv[2]);
		ft_putstr("\n");
		ft_putstr("trimed str : ");
		ft_putstr(tstr);
	}
	return (0);
}
*/
