/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:24:18 by marvin            #+#    #+#             */
/*   Updated: 2026/11/16 13:39:16 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str_s;

	i = 0;
	str_s = (const unsigned char *)s;
	while (i < n)
	{
		if (str_s[i] == (unsigned char)c)
			return ((void *)&str_s[i]);
		i++;
	}
	return (NULL);
}
