/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:23:21 by amitcul           #+#    #+#             */
/*   Updated: 2022/11/06 22:24:39 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The  strncmp()  function  is similar, except it compares only the
**	first (at most) n bytes of s1 and s2.
**
**	The strcmp() and strncmp() functions return an integer less than, equal
**	to, or greater than zero if s1 (or the first n bytes thereof) is found,
**	respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
