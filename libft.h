/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:39:47 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/08 04:47:04 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int ft_isalnum(int arg);
int	ft_isalpha(int arg);
int ft_isascii(int arg);
int	ft_isdigit(int arg);
int ft_isprint(int arg);
size_t ft_strlen(char *str);
void *ft_memset(void *ptr, int x, size_t n);
void * ft_memcpy(void *to, const void *from, size_t numBytes);

#endif
