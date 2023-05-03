/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:10:42 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/03/01 12:40:25 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;
	int				b;

	i = 0;
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
	char	s1[] = "77\200";
	char	s2[] = "777";
	unsigned int	n = 1;

	printf("%i\n", strncmp(s1, s2, n));
	printf("%i", ft_strncmp(s1, s2, n));
	return (0);
}*/
