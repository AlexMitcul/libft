/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:12:50 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/17 20:22:04 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	- The isalnum() function tests for any character for which isalpha(3) or
 *	isdigit(3) is true.  The value of the argument must be representable as
 *	an unsigned char or the value of EOF.
 *
 *	- The isalnum() function returns zero if the character tests false
 *	and returns non-zero if the character tests true.
*/

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
