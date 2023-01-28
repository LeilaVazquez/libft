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
	char	buffer[len];
	char	*destcpy;
	char	*source;

	source = (char *) src;
	destcpy = (char *) dst;
	i = 0;
	
	while (i < len)
	{
		buffer[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		destcpy[i] = buffer[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
VER ERRORES: --->

[crash]: your memmove does not work with a 128Mo data input !
[crash]: your memmove does not well with NULL as both parameters and size


[fail]: your memmove does not support 
the overlap (test 1)
 Test code:
        char dst1[0xF0];
        char dst2[0xF0];
        char *data = "thi\xc3\x9f \xc3\x9f\xde\xad\xbe\xeftri\xc3\xb1g will be \xc3\xb8v\xc3\xa9rlap\xc3\xa9d !\r\n";
        int size = 0xF0 - 0xF;
 
        __builtin___memset_chk (dst1, 'A', sizeof(dst1), __builtin_object_size (dst1, 0));
        __builtin___memset_chk (dst2, 'A', sizeof(dst2), __builtin_object_size (dst2, 0));

        __builtin___memcpy_chk (dst1, data, strlen(data), __builtin_object_size (dst1, 0));
        __builtin___memcpy_chk (dst2, data, strlen(data), __builtin_object_size (dst2, 0));

        __builtin___memmove_chk (dst1 + 3, dst1, size, __builtin_object_size (dst1 + 3, 0));

        ft_memmove(dst2 + 3, dst2, size);
        if (!memcmp(dst1, dst2, size))
                exit(TEST_SUCCESS);
        exit(TEST_FAILED);
*/