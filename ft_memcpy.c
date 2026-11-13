/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:01:08 by marvin            #+#    #+#             */
/*   Updated: 2026/11/10 17:01:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memcpy(void *dest, const void *src, unsigned int n)
{
    int i;
    unsigned char *str_dest;
    unsigned char *str_src;

    i = 0;
    str_dest = dest;
    str_src = src;
    while (i < n)
    {
        str_dest[i] = str_src[i];
        i++;
    }
}