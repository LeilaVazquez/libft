/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:27:19 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/17 15:27:22 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*destcpy;
	char	*source;

	source = (char *) src;
	destcpy = (char *) dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (destcpy > source)
	{
		while (len-- > 0)
			destcpy[len] = source[len];
	}
	else
	{
		while (i < len)
		{
			destcpy[i] = source[i];
			i++;
		}
	}
	return (dst);
}
