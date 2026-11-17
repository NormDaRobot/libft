/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfiguero <gfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:13:24 by gfiguero          #+#    #+#             */
/*   Updated: 2026/11/17 16:42:23 by gfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	if (s[0] != c && s[1] == c)
	{
		words++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			words++;
		i++;
	}
	return (words);
}

static int	ft_word_len(const char *s, const char c, int pos)
{
	int	word_len;
	int	this_pos;
	int	i;

	this_pos = 0;
	i = 0;
	word_len = 0;
	if (s[0] != '\0')
	{
		this_pos++;
		i++;
	}
	while (s[i] && (this_pos < pos))
	{
		if (s[i] == c && s[i + 1] != c)
			this_pos++;
		i++;
	}
	while (s[i] && (s[i] != c))
	{
		word_len++;
		i++;
	}
	return (word_len);
}

static void	ft_delete_all(char **str, int i)
{
	while (i > 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static char	**ft_create_str(char const *s, char c)
{
	char	**str;
	int		words;
	int		word_len;
	int		i;

	words = ft_countwords(s, c);
	str = malloc(sizeof(char *) * words + 1);
	if (!str)
		return (NULL);
	str[words + 1] = NULL;
	i = 0;
	while (i < words)
	{
		word_len = ft_word_len(s, c, i);
		str[i] = malloc(sizeof(char) * word_len + 1);
		if (!str[i])
		{
			ft_delete_all(str, i);
			return (NULL);
		}
		str[i][word_len + 1] = 0;
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	str = ft_create_str(s, c);
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (s[k] != c)
			{
				str[i][j] = s[k];
				j++;
			}
			k++;
		}
		i++;
	}
	return (str);
}
