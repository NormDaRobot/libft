/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:00:12 by marvin            #+#    #+#             */
/*   Updated: 2026/11/11 18:00:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
    int i;
    int j;
    int needle_len;
    char *result;

    if (!needle[0])
        return (haystack);
    needle_len = ft_strlen(needle);
    if (needle_len > len)
        return (NULL);
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        if (haystack[i] == needle[0])
            while (haystack[i + j] == needle[j] && (i + j) < len && j < needle_len)
                j++;
            if (j == needle_len)
                return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}