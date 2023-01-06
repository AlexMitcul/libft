/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:03:50 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 13:34:46 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Outputs the character 'c' to the given file descriptor.
 *
 * - Parameters:
 * c: The character to output.
 * fd: The file descriptor on which to write.
 *
 * - Return value:
 * None
**/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
