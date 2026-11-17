/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:49:34 by marvin            #+#    #+#             */
/*   Updated: 2026/11/16 21:47:50 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			bytes;
	void			*result;

	if ((size > 0) && (nmemb > __SIZE_MAX__ / size))
	{
		return NULL;
	}
	bytes = nmemb * size;
	result = malloc(bytes);
	if (!result)
		return (NULL);
	ft_bzero(result, bytes);
	return (result);
	
	//return (NULL);
}
