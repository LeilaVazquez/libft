/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:54:08 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/12 17:54:15 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int ch)
{
    if (ch >= 97 && ch <= 122)
    {
        ch -= 32;
    }
	return (ch);
}
