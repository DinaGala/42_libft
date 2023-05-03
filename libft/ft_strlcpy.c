/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:59:33 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/03/02 13:15:11 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lenth;
	unsigned int	i;

	lenth = 0;
	while (src[lenth] != '\0')
		lenth++;
	i = 0;
	if (size != 0)
	{	
		while (src[i] && i < size - 1)
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	return (lenth);
}

/*int	main(void)
{
	char	dest1[] = "de";
	char    dest2[] = "de";
	char    src[] = "";
	unsigned int	size = 0;

	printf("%lu\n", strlcpy(dest1, src, size));
	printf("%s\n", dest1);
	printf("%u\n", ft_strlcpy(dest2, src, size));
	printf("%s\n", dest2);
}*/
