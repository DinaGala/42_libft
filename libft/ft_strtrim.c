/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:37:25 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/10 19:23:29 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*x;
	size_t	i;
	size_t	end;
	size_t	start;

	end = ft_strlen(s1);
	if (s1 == (void *)0 || set == (void *)0)
		return (NULL);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	x = (char *) malloc(end - start + 1);
	if (x == 0)
		return (NULL);
	i = 0;
	while (start < end)
	{
		x[i] = s1[start];
		start++;
		i++;
	}
	x[i] = '\0';
	return (x);
}

int	main(void)
{
	char const	s1[] = "  \t \t \n   \n\n\n\t";
	char const	set[] = " \n\t";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
