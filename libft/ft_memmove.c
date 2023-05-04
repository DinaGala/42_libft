/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:30:44 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/04 20:26:37 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

static void	*back(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)str2)[i])
		i++;
	if (i < n)
	{
		while (i < n)
		{
			((char *)str1)[i] = '\0';
			n--;
		}
	}
	while (n >= 0)
	{
		((char *)str1)[n] = ((char *)str2)[n];
		n--;
	}
	return (str1);
}

static void	*forward(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)str1)[i] && ((char *)str2)[i] && i < n)
	{
		((char *)str1)[i] = ((char *)str2)[i];
		i++;
	}
	if (((char *)str2)[i] == '\0' && i < n)
	{
		while (i < n)
		{
			((char *)str1)[i] = '\0';
			i++;
		}
	}
	return (str1);
}	

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (((char *)str2) == (void *) '\0')
	{
		while (n > 0 && ((char *)str1)[i])
		{
			((char *)str1)[i] = '\0';
			i++;
		}
		return (str1);
	}
	if (((char *)str1) == (void *) '\0' || (char *)str1 == (char *)str2)
		return (str1);
	if ((char *)str1 < (char *)str2)
		return (forward(str1, str2, n));
	if ((char *)str2 < (char *)str1)
		return (back(str1, str2, n));
	return (0);
}

/*int	main(void)
{
	char	dest[] = "1234567890";
	char	dest0[] = "1234567890";
	char	*y;
	char	*x;
//	char	src[] = "0000";
	size_t	n = 5;

	x = memmove(dest0, dest + 2, n);
	printf("%s\n", x);
	printf("%c\n", x[3]);
	y = ft_memmove(dest, dest + 2, n);
	printf("%s\n", y);
	printf("%c\n", y[3]);
	return (0);
}*/
