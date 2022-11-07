/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:22:10 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/07 01:25:26 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * The strrchr() function is identical to strchr(), except it
 * locates the last occurrence of c.
 *
 * - Return value:
 * The strrchr() return a pointer to the located character,
 * or NULL if the character does not appear in the string.
**/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	symbol;
	int				i;

	symbol = c;
	i = ft_strlen(s);
	if (symbol == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == symbol)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
