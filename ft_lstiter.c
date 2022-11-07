/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:23:19 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/22 18:50:41 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Iterates the list 'lst' and applies the function 'f' on the content
 * of each node.
 *
 * - Parameters:
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 *
 * - Return value:
 * None
**/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
