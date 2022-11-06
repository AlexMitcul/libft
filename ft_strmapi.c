/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:58:16 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/20 14:40:07 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Applies the function 'f' to each character of the string 's', and passing
 * its index as first argument to create a new string (with malloc(3))
 * resulting from successive applications of 'f'.
 *
 * - Parameters:
 * s: The string on which to iterate.
 * f: The function to apply to each character.
 *
 * - Return value:
 * The string created from the successive applications of 'f'.
 * Returns NULL if the allocation fails.
**/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	if (!f)
		return ((char *)s);
	i = 0;
	length = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (!res)
		return (NULL);
	res[length] = '\0';
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i += 1;
	}
	return (res);
}
