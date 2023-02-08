/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:18:45 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/11 13:20:28 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int	main(int argc, const char **argv)
{
	int	r = 0;
	
	if (argc == 2)
	{
		r = ft_strlen(argv[1]);
	}
	r += 48;
	write (1, &r, 1);
	return (0);
}*/