/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:07:10 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/27 13:55:00 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (const char)c)
			temp = (char *)s;
		s++;
	}
	if (*s == (const char)c)
		return ((char *)s);
	return (temp);
}

/*#include <stdio.h>
int main(int args, char **argv)
{

   printf( "%s", ft_strrchr(argv[1], (int)argv[2][0]));
   //printf( "c=%c\n", c );
   //printf( "strrchr=%s\n", ft_strrchr( s, c ) );
   
	return(0);
}*/