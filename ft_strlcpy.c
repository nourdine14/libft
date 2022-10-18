/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:38:09 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/17 00:16:33 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			if (src[i] == '\0')
				break ;
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen((char *)src));
}

// int main ()
// {
//     char s1[10] = "hello wor";
//     char s2[20] = "kkkkkkkkkkkkk";
//     size_t b = ft_strlcpy(s2, s1, 20);
//     printf("s1 = %s\n" ,s1);
//     printf("s2 = %s\n" ,s2);
//     printf("b = %zu\n" ,b);
// }