/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:58 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/06 23:19:50 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The strlcat() function concatenate strings with the same input
 *	parameters and output result as snprintf(3).
 *
 *	- It is designed to be safer, more consistent, and less error prone
 *	replacements for the easily misused functions strncat(3).
 *
 *	- strlcat() take the full size of the destination buffer and guarantee
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char			*s;
	unsigned int	len_dst;
	unsigned int	res;
	unsigned int	len_src;
	unsigned int	i;

	s = (char *)src;
	if (dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	res = 0;
	i = 0;
	if (dstsize > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + dstsize;
	while (s[i] && (len_dst + 1) < dstsize)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
