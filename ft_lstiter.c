/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 20:35:06 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/16 20:38:31 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
