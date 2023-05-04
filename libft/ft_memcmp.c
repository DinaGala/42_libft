/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:06:21 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/04 19:10:41 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	int		a;
	int		b;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (n == 0)
		return (0);
	else
	{
		while ((s1[i] && s2[i]) && s1[i] == s2[i] && i < n - 1)
			i++;
	}
	a = s1[i];
	b = s2[i];
	if (a < 0)
		a = a * -1;
	if (b < 0)
		b = b * -1;
	return (a - b);
}

/*int	main(void)
{
	char str1[] = "asdf";
	char str2[] = "";
	size_t	n = 5;

//   memcpy(str1, "abcdef", 6);
//   memcpy(str2, "ABCDEF", 6);

   printf("%d\n",  memcmp(str1, str2, n));
   printf("%d\n",  ft_memcmp(str1, str2, n));
   return (0);
}*/
