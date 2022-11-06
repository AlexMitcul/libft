/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:00:57 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/20 14:58:06 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Applies the function 'f' on each character of the string passed as argument,
 * passing its index as first argument. Each character is passed by address to
 * 'f' to be modified if necessary.
 *
 * - Parameters:
 * s: The string on which to iterate.
 * f: The function to apply to each character.
 *
 * - Return value:
 * None
**/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	if (!s || !f)
		return ;
	length = ft_strlen(s);
	while (i < length)
	{
		(*f)(i, &s[i]);
		i += 1;
	}
}
