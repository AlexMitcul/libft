/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:04:58 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 10:44:07 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Allocates (with malloc(3)) and returns a copy of 's1' with the characters
 * specified in 'set' removed from the beginning and the end of the string.
 *
 * - Parameters:
 * s1: The string to be trimmed.
 * set:	the reference set of characters to trim.
 *
 * - Return value:
 * The trimmed string.
 * NULL if the allocation fails.
**/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	j = (ft_strlen(s1) - 1);
	while ((*(s1 + i) != '\0') && (ft_strchr(set, *(s1 + i))))
		i++;
	while ((*(s1 + i) != '\0') && (ft_strchr(set, *(s1 + j))))
		j--;
	str = ft_substr(s1, i, ((j - i) + 1));
	return (str);
}
