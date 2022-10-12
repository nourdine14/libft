/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:39:47 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/12 10:25:24 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int	ft_isalpha(int arg);
int	ft_isdigit(int arg);
int ft_isalnum(int arg);
int ft_isascii(int arg);
int ft_isprint(int arg);
size_t ft_strlen(char *str);
void *ft_memset(void *ptr, int x, size_t n);
void ft_bzero(void *s, size_t n);
void * ft_memcpy(void *to, const void *from, size_t numBytes);
void * ft_memmove( void * dest, const void * src, size_t n );
size_t ft_strlcpy( char *dst,const char *src,size_t size );
size_t ft_strlcat(char *dest, char *src, size_t dstsize);
int ft_toupper( int character );
int ft_tolower( int character );
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp ( const char * s1, const char * s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp( const void * p1, const void * p2, size_t size );
char * ft_strnstr(const char *big, const char *little, size_t len);
int ft_atoi(const char *str);
void * ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);

#endif
