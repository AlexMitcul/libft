/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:38:04 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/17 12:40:05 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The toupper() function converts a lower-case letter to the corresponding
 * upper-case letter.  The argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * If the argument is a lower-case letter, the toupper() function returns the
 * corresponding upper-case letter if there is one;
 * otherwise, the argument is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
