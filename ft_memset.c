/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:35:31 by marvin            #+#    #+#             */
/*   Updated: 2026/11/10 16:35:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memset(void *s, int c, unsigned int n)
{
    unsigned char *str;

    str = s;
    while (n > 0)
    {
        *str = (unsigned char)c;
        str++;
        n--;
    }
    return (s);
}