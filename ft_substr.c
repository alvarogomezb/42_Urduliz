/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:15:39 by agomez-b          #+#    #+#             */
/*   Updated: 2022/11/09 03:13:47 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s_sub;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
	{
		s_sub = malloc(sizeof(char));
		s_sub[0] = '\0';
		return (s_sub);
	}
	s_sub = malloc(sizeof(char) * (len + 1));
	if (s_sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_sub[i] = s[start + i];
		i ++;
		len --;
	}
	s_sub[i] = '\0';
	return (s_sub);
}
