/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:36:04 by epacheco          #+#    #+#             */
/*   Updated: 2021/09/11 13:36:05 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		j;
	int		size;

	j = 0;
	size = ft_strlen(s);
	if (size == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (size + 1));
	while (j < size)
	{
		*(str + j) = f(j, *(s + j));
		j++;
	}
	*(str + j) = '\0';
	return (str);
}
