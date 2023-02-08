/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:16:27 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/16 17:16:29 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) dst;
	if (n != '\0')
	{
		while (i < n)
		{
			ptr[i] = '\0';
			i++;
		}
	}
}
/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char test[20];

	bzero(test, 20);
	ft_bzero(test, 20);

	return (0);
}*/