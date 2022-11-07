/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmitcul <alexmitcul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:09:29 by alexmitcul        #+#    #+#             */
/*   Updated: 2022/11/06 22:29:56 by alexmitcul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * - Description:
 * Allocates (with malloc(3)) and returns a new node.
 * The member variable 'content' is initialized with the value of the
 * parameter 'content'.
 * The variable 'next' is initialized to NULL.
 *
 * - Parameters:
 * content: The content to create the node with.
 *
 * - Return value:
 * The new node.
**/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
