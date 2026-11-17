/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 22:24:05 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/16 11:46:15 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	size_t	i;

	i = 0;
	while (i < ft_lstsize(lst) && lst->next != del)
	{
		lst = lst->next;
		i++;
	}
	del(lst);
}
