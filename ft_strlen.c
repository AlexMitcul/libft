/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:08:18 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 12:13:43 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	- The strlen() function computes the length of the string s.
 *
 *	- The strlen() function returns the number of characters that precede the
 *	terminating NUL character.
*/

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}
