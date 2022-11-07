/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:43:04 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/07 00:45:25 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * The memmove() function copies len bytes from string src to string dst.
 * The two strings may overlap; the copy is always done in
 * a non-destructive manner.
 *
 * - Return value:
 * The memmove() function returns the original value of dst.
**/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
