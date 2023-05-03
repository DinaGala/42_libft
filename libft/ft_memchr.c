/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:29:35 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/03 19:49:22 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str1;
	void	*strret;
	size_t	i;

	i = 0;
	str1 = (char *)str;
	while (str1[i] && i < n && str1[i] != c)
		i++;
	strret = (void *)&str[i];
	if (str1[i] == c)
		return (strret);
	return (NULL);
}

/*int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
   	int c = 'i';
	size_t	n = 4;

	printf("%s\n", memchr(str, c, n));
	printf("%s\n", ft_memchr(str, c, n));
	return (0);
}*/
