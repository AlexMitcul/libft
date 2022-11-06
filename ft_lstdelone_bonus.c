/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:19:24 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/22 18:50:33 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Takes as a parameter a node and frees the memory of the node's content usign
 * the function 'del' given as a parameter and free the node.
 * The memory of 'next' myst not be freed.
 *
 * - Parameters:
 * lst: The node to free.
 * del: The address of the function used to delete the content.
 *
 * - Return value:
 * None
**/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
