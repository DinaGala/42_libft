/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:56:55 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/03 17:08:51 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*i;
	char	*x;

	i = "\0";
	x = (char *)str;
	while (*x != '\0')
	{
		if (x[0] == c)
			i = x;
		x++;
	}
	return (i);
}

/*int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
   	int c = 'z';

	printf("%s\n", strrchr(str, c));
	printf("%s\n", ft_strrchr(str, c));
	return (0);
}*/
