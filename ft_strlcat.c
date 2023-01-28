/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:59:56 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/17 17:59:58 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char* dest, const char* src, size_t dstsize)
{
    size_t	dstlen; 
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (dstsize == 0)
	{
		return (dstlen + srclen);
	}
	if (dstsize - 1 <= dstlen)
	{
		return (srclen + dstsize);
	}
	while ((dstlen + i) < (dstsize - 1))
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	
	dest[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*
Errors in strlcat: /Users/leilavaz/francinette/temp/libft/war-machine/tests/Part1_functions/ft_strlcat
Test 5:
    dest[10] = 'a';
    ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
    write(1, "\n", 1);
    write(1, dest, 15); 10+15+1
Expected (cat -e test05.output):
26$
rrrrrr^@^@^@^@a^@^@^@^@
Your result (cat -e user_output_test05):
32$
rrrrrr^@^@^@^@a^@^@^@^@
Test 9:
    memset(dest, 'r', 14);
    ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    write(1, "\n", 1);
    write(1, dest, 15); 
Expected (cat -e test09.output):
40$
rrrrrrrrrrrrrr^@
Your result (cat -e user_output_test09):
41$
rrrrrrrrrrrrrr^@

For /Users/leilavaz/francinette/tests/libft/Tripouille/tests/ft_strlcat_test.cpp:
KO  21:         1 check(ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B")); showLeaks();

*/