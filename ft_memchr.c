/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:48:14 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/16 23:28:58 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n)
	{
		if (*str == (unsigned char)c)
		{
			return ((void *)str);
		}
		str++;
		n--;
	}
	return (NULL);
}

// int main ()
// {
//     char *s = "hello \0 Asi";
//     char a = '\0';	
//     printf("%s",memchr(s, a, 5));
//     return (0);
// }