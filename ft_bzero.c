/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <gomezbarroso.a@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:03:45 by agomez-b          #+#    #+#             */
/*   Updated: 2022/11/03 13:03:45 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// CAMBIAR EMAIL ENCABEZADO !!!!!!!!!!!!!!!!! //

// bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s
// by writing zeros (bytes containing '\0') to that area.

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i ++;
	}
}

int main(void)
{
    char s[5] = "bzero";

    ft_bzero(s, 4);
    return(0);
}

// bzero is deprecated, use memset instead:

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}