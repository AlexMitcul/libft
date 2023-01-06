/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:58 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 10:49:15 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The strlcat() function concatenate strings with the same input
 *	parameters and output result as snprintf(3).
 *
 *	- It is designed to be safer, more consistent, and less error prone
 *	replacements for the easily misused functions strncat(3).
 *
 *	- strlcat() take the full size of the dstination buffer and guarantee
 *	NUL-termination if there is room.  Note that room for the NUL should be
 *	included in dstsize.
 *
 *	- strlcat() appends string src to the end of dst.  It will append at most
 *	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
 *	unless dstsize is 0 or the original dst string was longer than dstsize
 *	(in practice this should not happen as it means that
 *	either dstsize is incorrect or that dst is not a proper string).

 *	- If the src and dst strings overlap, the behavior is undefined.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	res;
	size_t	n;

	if ((dst == NULL) && (size == 0))
		return (0);
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size < len_dst)
		return (ft_strlen(src) + size);
	i = 0;
	n = size - len_dst;
	res = len_dst + len_src;
	while (((i + 1) < n) && (*(src + i) != '\0'))
	{
		*(dst + (len_dst + i)) = *(src + i);
		i++;
	}
	(*(dst + (len_dst + i)) = '\0');
	return (res);
}
