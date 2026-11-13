/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:59:12 by marvin            #+#    #+#             */
/*   Updated: 2026/11/11 17:59:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    int i;
    unsigned char *str_s1;
    unsigned char *str_s2;

    i = 0;
    str_s1 = s1;
    str_s2 = s2;
    while (i < n && str_s1 == str_s2)
        i++;
    return (str_s1 - str_s2);
}