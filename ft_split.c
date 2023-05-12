/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:34:04 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/12 21:18:52 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static const char	*pop(char *arr, const char *s, char c)
{
	int	i;

	i = 0;
	if (*s == '\0')
		return (NULL);
	while (*s != '\0' && *s != c)
	{
		arr[i] = *s;
		s++;
		i++;
	}
	arr[i] = '\0';
	return (s);
}

static int	lenth(char const *s, char c)
{
	int	l;

	l = 0;
	while (*s != c && *s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

static size_t	count(char const *s, char c)
{
	int		i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			n++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;

	arr = (char **) malloc((count(s, c) + 1) * sizeof(char *));
	if (arr == 0)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			arr[i] = (char *) malloc(lenth(s, c) + 1);
			if (arr[i] == 0)
			{
				free(arr);
				return (NULL);
			}
			s = pop(arr[i], s, c);
			i++;
		}
		s++;
	}
	arr[i] = NULL;

//	printf("inside i: %lu\n", i);
//	printf("inside arr[0]: %s\n", arr[0]);
//	printf("inside arr[1]: %p\n", arr[1]);
	return (arr);
}

/*#include <string.h>

int	main(void)
{
//	int			i;
	char 		**res;
	res = ft_split("tripouille", 0);
//	printf("res[0]: %s\n", res[0]);
//	printf("res[1]: %p", res[1]);
	
//	printf("%lu\n", count("tripouille", 0));	
//	for (i = 0; i < 2; i++)
//	{
//	  	printf("%s\n", ft_split("tripouille", 0)[i]);
//	}
//	printf("%d\n", strcmp(ft_split("tripouille", 0)[0], "tripouille"));
//	printf("%d\n", ft_split("tripouille", 0)[1] == NULL);
//	printf("%p\n", ft_split("tripouille", 0)[1]);
	return (0);
}*/
