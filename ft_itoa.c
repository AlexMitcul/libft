/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:56:01 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/21 17:58:18 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Allocates (with malloc(3)) and returns a string representing the integer
 * received as an argument.
 * Negative numbers must be handled.
 *
 * - Parameters:
 * n: The integer to convert.
 *
 * - Return value:
 * The string representing the integer.
 * NULL if the allocation fails.
**/

#include "libft.h"

static unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static unsigned int	count_number_length(int n)
{
	int	length;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
		length += 1;
	while (n != 0)
	{
		length += 1;
		n = n / 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		number_length;
	char	*res;

	number_length = count_number_length(n);
	res = (char *)malloc(sizeof(char) * (number_length + 1));
	if (!res)
		return (NULL);
	res[number_length] = '\0';
	number_length -= 1;
	if (n == 0)
		res[0] = '0';
	if (n < 0)
		res[0] = '-';
	while (n != 0)
	{
		res[number_length] = '0' + ft_abs(n % 10);
		number_length -= 1;
		n = n / 10;
	}
	return (res);
}
