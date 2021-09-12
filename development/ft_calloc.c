/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:33:43 by epacheco          #+#    #+#             */
/*   Updated: 2021/09/11 13:33:47 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	ns;

	ns = nmemb * size;
	if (ns > 2147483647)
		return (NULL);
	ptr = (void *)malloc(sizeof(ns));
	ft_bzero(ptr, ns);
	if (!ptr)
		return (NULL);
	return (ptr);
}
