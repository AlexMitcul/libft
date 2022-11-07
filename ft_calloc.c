/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:25:45 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/07 00:21:30 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to
 * the allocated memory.
 * The allocated memory is filled with bytes of value zero.
*/

#include "libft.h"

#include <stdio.h>

static int	is_overflow(size_t a, size_t b)
{
	size_t	x;

	x = a * b;
	if (a != 0 && x / a != b)
		return (1);
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count == 0 || size == 0 || is_overflow(count, size))
		return (NULL);
	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
