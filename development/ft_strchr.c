/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:35:35 by epacheco          #+#    #+#             */
/*   Updated: 2021/09/11 13:35:36 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;
	int				j;

	j = 0;
	p = (unsigned char *)s;
	while (*(p + j))
	{
		if (*(p + j) == c)
			return ((char *)(p + j));
		j++;
	}
	if (c == '\0')
		return ((char *)(p + j));
	return (NULL);
}
