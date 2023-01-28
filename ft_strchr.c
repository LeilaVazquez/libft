/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:16:25 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/18 17:16:28 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char) c)
		{
			return ((char*)s);
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}