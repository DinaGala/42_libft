/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:15:04 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/04 19:01:15 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

static size_t	count(char *little)
{
	size_t	lenth;

	lenth = 0;
	while (little[lenth])
		lenth++;
	return (lenth);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		s;
	size_t		f;
	char		*l;
	char		*b;

	b = (char *)big;
	l = (char *)little;
	if (*l == '\0')
		return (b);
	s = 0;
	while (b[s] && s < len)
	{
		f = 0;
		while ((b[s + f] && l[f]) && b[s + f] == l[f] && (s + f) < len)
			f++;
		if (f == count(l))
			return (&b[s]);
		s++;
	}
	return ("\0");
}

/*int	main(void)
{
	const char	str[] = "hola me llamo actor comp";
	const char	to_find[] = "actor";
	size_t	len = 25;

	printf("%s\n", strnstr(str, to_find, len));
	printf("%s\n", ft_strnstr(str, to_find, len));
	return (0);
}*/
