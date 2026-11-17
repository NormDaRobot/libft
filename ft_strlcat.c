/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:14:35 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/16 20:29:03 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	len_dst = 0;
	if (dstsize == 0)
		return (len_dst + len_src);
	while (dst[len_dst] && len_dst < dstsize)
	{
		len_dst++;
	}
	if (dstsize <= len_dst)
		return (len_dst + len_src);
	i = 0;
	while (src[i] && (len_dst + i + 1 < dstsize))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = 0;
	return (len_dst + len_src);
}
