/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:28:41 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/06 22:01:21 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The atoi() function converts the initial portion of the string
 *	pointed to by str to int representation.
**/

#include "libft.h"

static int	check_overflow(unsigned long n)
{
	if ((n * 10) / 10 != n)
		return (1);
	return (0);
}

static int	get_overflow_number(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' || \
	*str == '\t' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		if (check_overflow(res))
			return (get_overflow_number(sign));
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
