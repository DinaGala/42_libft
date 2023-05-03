/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:48:41 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/02 16:03:59 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	x = 128;

	printf("%d\n", isascii(x));
	printf("%d\n", ft_isascii(x));
	return (0);
}*/
