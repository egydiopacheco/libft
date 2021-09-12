/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:35:05 by epacheco          #+#    #+#             */
/*   Updated: 2021/09/11 13:35:07 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	j;

	if (!n)
		return (NULL);
	p = (char *) s;
	j = 0;
	while (j < n)
		*(p + j++) = c;
	return (p);
}
