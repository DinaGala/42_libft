/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:34:36 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/03/02 12:00:39 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	min;
	int	x;

	i = 0;
	min = 0;
	x = 0;
	while (((str[i] > 8 && str[i] < 14) || str[i] == 32) && str[i])
		i++;
	while ((str[i] == 43 || str[i] == 45) && str[i])
	{
		if (str[i] == 45)
			min++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58 && str[i])
	{
		x = x * 10 + (str[i] - 48);
		i++;
	}
	if (min % 2 == 1)
		x = x * -1;
	return (x);
}

/*int	main(void)
{
	char	str[] = "";

	printf("%i", atoi(str));
	printf("%i", ft_atoi(str));
	return (0);
}*/
