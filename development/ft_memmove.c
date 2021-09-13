/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:35:02 by epacheco          #+#    #+#             */
/*   Updated: 2021/09/13 13:10:15 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	j;
	char	*ds;
	char	*sr;

	if (!src && !dest)
		return (NULL);
	ds = (char *)dest;
	sr = (char *)src;
	if (ds > sr)
	{
		j = n - 1;
		while (n--)
		{
			*(ds + j) = *(sr + j);
			j--;
		}
	}
	else
	{
		j = 0;
		while (j < n)
		{
			*(ds + j) = *(sr + j);
			j++;
		}
	}
	return (dest);
}
