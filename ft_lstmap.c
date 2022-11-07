/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:24:50 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/10/22 19:15:01 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Iterates the list 'lst' and applies the function 'f' on the
 * content of each node.
 * Creates a new list resulting of the successive applications
 * of the function 'f'.
 * The 'del' function is used to delete the content of a node if needed.
 *
 * - Parameters:
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 * del: The address of the function used to delete
 *		the content of a node if needed.
 *
 * - Return value:
 * The new list.
 * NULL if the allocation fails.
**/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	head = NULL;
	(void)(del);
	while (lst)
	{
		ft_lstadd_back(&head, ft_lstnew((*f)(lst->content)));
		lst = lst->next;
	}
	return (head);
}
