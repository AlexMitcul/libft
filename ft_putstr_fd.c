/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:05:24 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 13:43:18 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Outputs the string 's' to the given file descriptor.
 *
 * - Parameters:
 * s: The string to output.
 * fd: The file descriptor on which to write.
 *
 * - Return value:
 * None
**/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
