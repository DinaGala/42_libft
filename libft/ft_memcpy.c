/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:39:21 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/02 19:19:08 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	i = 0;
	dest1 = (char *)dest;
	src1 = (char *)src;
	if (*src1 == '\0' && n > 0)
		dest1[i] = '\0';
	else
	{
		while (dest1[i] && src1[i] && i < n)
		{	
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "1234567890";
	char	dest0[] = "1234567890";
	char	*x;
	char	src[] = "";
	size_t	n = 0;

	x = memcpy(dest0, src, n);
	printf("%s\n", x);
	printf("%c\n", x[2]);
	printf("%s\n", ft_memcpy(dest, src, n));
	return (0);
}*/
