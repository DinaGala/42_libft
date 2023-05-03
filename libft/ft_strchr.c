/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:53:24 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/03 17:09:16 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	*x;

	x = (char *)str;
	while ((*x != '\0') && x[0] != c)
		x++;
	return (x);
}

/*int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
   	int c = 't';

	printf("%s\n", strchr(str, c));
	printf("%s\n", ft_strchr(str, c));
	return (0);
}*/
