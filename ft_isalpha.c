/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:26:37 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/17 12:34:35 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	- The isalpha() function tests for any character for which
 *	isupper(3) or islower(3) is true.  The value of the argument must be
 *	representable as an unsigned char or the value of EOF.
 *
 *	- The isalpha() function returns zero if the character tests false and
 *	returns non-zero if the character tests true.
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
