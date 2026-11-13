/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:16:09 by marvin            #+#    #+#             */
/*   Updated: 2026/11/10 17:16:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, unsigned int n)
{
    int i;
    unsigned char *str_dest;
    unsigned char *str_src;

    i = 0;
    str_dest = dest;
    str_src = src;
    if (dest > src && dest < str_src + n)
    {
        while (n > 0)
        {
            n--;
            str_dest[n] = str_src[n];
        }
    }
    else
    {
        while (i < n)
        {
            str_dest[i] = str_src[i];
            i++;
        }
    }
    return (dest);
}