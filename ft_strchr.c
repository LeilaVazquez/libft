/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:16:25 by leilavaz          #+#    #+#             */
/*   Updated: 2023/02/01 12:51:46 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char) c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	char test[] = "hola";
	ft_strchr(test, 'h');
	printf("%s", test);

[fail]: your strchr does not work with \0
 Test code:
        char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
        char *d1 = strchr(src, '\0');
        char *d2 = ft_strchr(src, '\0');
 
        if (d1 == d2)
                exit(TEST_SUCCESS);
        exit(TEST_FAILED);
 
 Diffs:
       strchr: ||
    ft_strchr: |(null)|

	return(0);
}*/
