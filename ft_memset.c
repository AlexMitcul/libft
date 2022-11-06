/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:49:33 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/06 21:56:45 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The memset() function writes len bytes of value c
 *	(converted to an unsigned char) to the string b.
 *
 *	- The memset() function returns its first argument.
**/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*tmp;

	tmp = b;
	while (len > 0)
	{
		*(char *)tmp = c;
		tmp++;
		len -= 1;
	}
	return (b);
}
