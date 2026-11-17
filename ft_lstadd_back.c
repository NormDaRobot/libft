/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 22:14:23 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/16 11:56:22 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	i;

	while (lst[i]->next != NULL)
	{
		if (lst[i + 1]->next == NULL)
		{
			lst[i + 1]->next = new;
			return ;
		}
		i++;
	}
}
