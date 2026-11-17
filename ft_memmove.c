/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:16:09 by marvin            #+#    #+#             */
/*   Updated: 2026/11/16 20:52:31 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*str_dest;
	const unsigned char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if ((dest > src) && ((unsigned char *)dest < str_src + n))
	{
		while (n > 0)
		{
			n--;
			str_dest[n] = str_src[n];
		}
	}
	else
	{
		str_dest = ft_memcpy(dest, src, n);
	}
	return (dest);
}
