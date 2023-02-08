/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:05:35 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/16 15:05:37 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) dest;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    size_t len = 10;
    char dst[len];
    int loop;

    memset(dst,4,len);
    printf("Array elements are (after memset()): \n");
	for(loop=0; loop<len; loop++)
		printf("%d ",dst[loop]);
	printf("\n");

	ft_memset(dst, 4, len);

	printf("Array elements are (after memset()): \n");
	for(loop=0; loop<len; loop++)
		printf("%d ",dst[loop]);
	printf("\n");
}*/