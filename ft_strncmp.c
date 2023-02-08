/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:55:04 by leilavaz          #+#    #+#             */
/*   Updated: 2023/02/02 13:54:14 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*int	main(int argc, char *argv[])
{
	int	rdo;
	unsigned int n = 5;
	char res;
	if (argc != 3)
		return (-1);
	else
	{
		rdo = ft_strncmp(argv[1], argv[2], n);
		rdo += 48;
		write(1, &rdo ,1);
	}
	return (0);
}*/
