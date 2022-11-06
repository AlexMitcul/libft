/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:21:25 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/22 18:50:23 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Deletes and frees the given node and every successor of that node, usign the
 * function 'del' and free(3).
 * Finally, the pointer to the list must be set to NULL.
 *
 * - Parameters:
 * lst: The address of a pointer to a node.
 * del: The address of the function used to delete the content of the node.
 *
 * - Return value:
 * None
**/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	curr = *lst;
	while (curr != NULL)
	{
		next = curr->next;
		(*del)(curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
