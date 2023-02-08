/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:56:20 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/12 17:56:22 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)hays);
	while (hays[i] != '\0' && needle[j] != '\0' && i < len)
	{
		j = 0;
		if (hays[i] == needle[0])
		{
			while ((hays[i + j] == needle[j]) && ((i + j) < len))
			{
				if (needle[j + 1] == '\0')
				{
					return ((char *)hays + i);
				}
				j++;
			}
		}	
	i++;
	}
	return (NULL);
}
