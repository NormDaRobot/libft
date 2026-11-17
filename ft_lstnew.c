/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:32:08 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/16 11:50:15 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*list;
	unsigned char	*str;
	size_t			size;

	str = content;
	size = ft_strlen(str);
	list = malloc(sizeof(unsigned char) * (size + 1) + (sizeof(size_t)));
	if (!list)
		return (NULL);
	list->content = str;
	list->next = NULL;
	return (list);
}
