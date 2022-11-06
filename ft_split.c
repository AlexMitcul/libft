/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:53:26 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/19 20:00:45 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Allocates (with malloc(3)) and returns an array of string obtained by
 * splitting 's' using the character 'c' as a delimiter. The array must end
 * with a NULL pointer.
 *
 * - Parameters:
 * s: The string to be splitted.
 * c: The delimiter character.
 *
 * - Return value:
 * The array of new strings resulting from the split.
 * NULL if the allocation fails.
**/

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;
	int	was_space;

	count = 0;
	was_space = 1;
	i = 0;
	while (str && str[i] != '\0')
	{
		if (str[i] != c && was_space)
		{
			count += 1;
			was_space = 0;
		}
		else if (was_space == 0 && str[i] == c)
			was_space = 1;
		i++;
	}
	return (count);
}

static char	*get_word(const char *str, char c)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len += 1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = 0;
	while (i < len)
	{
		res[i] = *str;
		str++;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		words_count;
	int		i;
	char	**lines;

	words_count = count_words(s, c);
	lines = (char **)malloc((words_count + 1) * sizeof(char *));
	if (!lines)
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		while (*s != '\0' && *s == c)
			s += 1;
		lines[i] = get_word(s, c);
		s = s + ft_strlen(lines[i]);
		i++;
	}
	lines[i] = NULL;
	return (lines);
}

/* int main(void)
{

	char *splitme = strdup("--1-2--3---4----5-----42");
	char **tab = ft_split(splitme, '-');
	for (int i = 0; tab[i] != NULL; i++)
		printf("%s\n", tab[i]);

	return (0);
} */
