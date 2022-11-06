/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:27:24 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/19 19:37:02 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * The memcmp() function compares byte string s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 *
 * - Return value:
 * The memcmp() function returns zero if the two strings are identical,
 * otherwise returns the difference between the first two differing bytes
 * (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’, for
 * example).
 * Zero-length strings are always identical.
 * This behavior is not required by C and portable code should
 * only depend on the sign of the returned value.
**/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0 && *str1 == *str2)
	{
		str1 += 1;
		str2 += 1;
		n -= 1;
	}
	if (n == 0)
		return (0);
	return (*str1 - *str2);
}
