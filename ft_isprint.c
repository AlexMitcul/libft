/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:33:25 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/17 12:37:20 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	The isprint() function tests for any printing character,
 *	including space (‘ ’).  The value of the argument must be
 *	representable as an unsigned char or the value of EOF.
 *
 *	- The isprint() function returns zero if the character tests false and
 *	returns non-zero if the character tests true.
**/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
