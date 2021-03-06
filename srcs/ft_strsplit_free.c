/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex <Alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 13:03:49 by alex              #+#    #+#             */
/*   Updated: 2020/05/05 17:50:40 by Alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strsplit_free(char **tab)
{
	char	**p;

	p = tab;
	while (*p)
		free(*(p++));
	free(tab);
}
