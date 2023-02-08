/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:09:16 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/18 18:09:17 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
 
int main()
{
   char cadena[] = "Erase una vez...";
   char *puntero; 
 
   puntero = (char *)memchr( cadena, 'a', 9 );
   printf( "%s\n", cadena); 
   printf( "%s\n", puntero ); 
 
   return 0;
}*/