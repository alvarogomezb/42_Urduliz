/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:08:18 by agomez-b          #+#    #+#             */
/*   Updated: 2022/09/17 18:49:25 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(char *str);
// ft_bzero.c
// ft_calloc.c
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
// ft_memchr.c
// ft_memcmp.c
// ft_memcpy.c
// ft_memmove.c
// ft_memset.c
// ft_strchr.c
// ft_strdup.c
// ft_strlcat.c
size_t	ft_strlcpy(char *dest, char *src, size_t len);
size_t	ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
// ft_strnstr.c
// ft_strrchr.c
int		ft_tolower(unsigned char c);
int		ft_toupper(unsigned char c);

#endif