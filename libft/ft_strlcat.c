/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:29:12 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/03/01 17:12:45 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	count(char *str)
{
	unsigned int	lenth;

	lenth = 0;
	while (str[lenth])
		lenth++;
	return (lenth);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	j;

	d = count(dest);
	s = count(src);
	i = 0;
	j = d;
	if (d >= size || size == 0)
		return (s + size);
	while (src[i] && i < size - d - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (s + d);
}

/*int	main(void)
{
	char	dest[20] = "";
	char    dest2[20] = "";
	char	src[20] = "";
	unsigned int	size = 0;

	printf("%s, %lu\n", dest2, strlcat(dest2, src, size));
	printf("%s, %u\n", dest, ft_strlcat(dest, src, size));
	return (0);
}*/
