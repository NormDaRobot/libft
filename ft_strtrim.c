/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:01:44 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/17 16:10:39 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (i);
		i++;
	}
	return (i);
}

static size_t	get_len(char const *s1, char const *set, size_t start)
{
	size_t	i;

	i = 0;
	while (s1[start + i])
	{
		if (ft_strchr(set, s1[start + i]))
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	size_t	start;
	size_t	len;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = get_start(s1, set);
	len = get_len(s1, set, start);
	c = malloc(sizeof(char) * len + 1);
	if (!c)
		return (NULL);
	c = ft_substr(s1, start, len);
	return (c);
}
