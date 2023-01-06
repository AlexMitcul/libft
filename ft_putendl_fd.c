/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:06:56 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/26 13:33:25 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Outputs the string 's' to the given file descriptor followed
 * by a newline.
 *
 * - Parameters:
 * s: The string to output.
 * fd: The file descriptor on which to write.
 *
 * - Return value:
 * None
**/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
