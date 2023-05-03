/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headfile.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:00:07 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/03 21:02:25 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADFILE_H
#define HEADFILE_H

int	ft_isalpha(int x);
int	ft_isdigit(int x);
int	ft_isalnum(int x);
int	ft_isascii(int x);
int	ft_isprint(int x);
int	ft_toupper(int ch);
int	ft_tolower(int ch);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *dst, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);


#endif
