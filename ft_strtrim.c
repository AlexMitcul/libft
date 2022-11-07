/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:04:58 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/07 00:14:16 by alexmitcul       ###   ########.fr       */
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

static void	get_length(char const *line, char const *set, int *start, int *end)
{
	int		i;
	int		len;

	len = ft_strlen(line);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, line[i]) == NULL)
			break ;
		i++;
	}
	*start = i;
	i = len - 1;
	while (i >= 0)
	{
		if (ft_strchr(set, line[i]) == NULL)
			break ;
		i--;
	}
	*end = len - i - 1;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		start;
	int		end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	get_length(s1, set, &start, &end);
	if (start - end == 0)
		res = malloc(sizeof(char));
	else
		res = malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	end = ft_strlen(s1) - start - end;
	while (i < end)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
