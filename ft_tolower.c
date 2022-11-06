/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:40:13 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/17 12:41:20 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The tolower() function converts an upper-case letter to the corresponding
 * lower-case letter.
 * The argument must be representable as an unsigned char or the value of EOF.
 *
 * If the argument is an upper-case letter, the tolower() function returns
 * the corresponding lower-case letter if there is one;
 * Otherwise, the argument is returned unchanged.
**/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
