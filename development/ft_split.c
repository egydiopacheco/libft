/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:35:28 by epacheco          #+#    #+#             */
/*   Updated: 2021/09/12 13:21:26 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*slice_delimiters(int begin, int end, const char *s)
{
	char			*fragment;
	int				j;
	unsigned int	frag_size;

	j = 0;
	frag_size = end - begin;
	fragment = malloc(frag_size * sizeof(char));
	if (!fragment)
		return (NULL);
	while (begin < end)
		*(fragment + j++) = *(s + begin++);
	*(fragment + j) = '\0';
	return (fragment);
}

static char	**synthetize_array(char **arr, char const *s, char c)
{
	size_t	j;
	size_t	k;
	int		m;

	j = 0;
	k = 0;
	m = -1;
	while (j <= ft_strlen(s))
	{
		if (*(s + j) != c && m < 0)
			m = j;
		else if ((*(s + j) == c || j == ft_strlen(s)) && m >= 0)
		{
			*(arr + k++) = slice_delimiters(m, j, s);
			m = -1;
		}
		j++;
	}
	*(arr + k) = NULL;
	return (arr);
}

static int	get_amount(char const *s, char c)
{
	int		amount;
	char	flag;

	amount = 0;
	flag = 'F';
	while (*s)
	{
		if (*s == c)
			flag = 'F';
		else if (flag == 'F')
		{
			flag = 'T';
			amount++;
		}
		s++;
	}
	return (amount);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * get_amount(s, c) + 1);
	if (!arr)
		return (NULL);
	return (synthetize_array(arr, s, c));
}
