/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:36:23 by epacheco          #+#    #+#             */
/*   Updated: 2021/09/13 14:26:56 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	t;
	size_t	v;

	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	t = 0;
	v = start;
	while (v < ft_strlen(s) && t < len)
	{
		*(substr + t++) = *(s + v++);
	}
	*(substr + t) = '\0';
	return (substr);
}
