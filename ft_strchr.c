/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:42:45 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 13:07:28 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strchr() function locates the first occurrence of c
 * (converted to a char) in the string pointed to by s.
 * The terminating null character is considered to be part of the string;
 * Therefore if c is ‘\0’, the functions locate the terminating ‘\0’
 *
 * The functions strchr() return a pointqer to the located character,
 * or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	symbol;

	str = (char *)s;
	symbol = (char)c;
	while (*str != '\0')
	{
		if (*str == symbol)
			return (str);
		str++;
	}
	if (*str == '\0' && symbol == '\0')
		return (str);
	return (NULL);
}
