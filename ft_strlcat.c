/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:47:02 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/13 18:28:07 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst,char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	if (size == 0)
	{
		return (ft_strlen((char*)src));
	}
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dst[i] = '\0';
	if (size < (size_t)ft_strlen(dst))
		return (ft_strlen((char*)src) + size);
	else
		return (ft_strlen((char*)src) + len_dst);
}

// int main()
// {
// 	char s1[8] = "hello";
// 	char s2[] = "blok";
// 	size_t i = 8;

// 	size_t e = ft_strlcat(s1, s2, i);
// 	printf("%zu\n",e);
// 	printf("%s\n",s1);

// 	char s3[8] = "hello";
// 	char s4[] = "blok";
// 	size_t j = 8;

// 	size_t f = ft_strlcat(s3, s4, j);
// 	printf("%zu\n",f);
// 	printf("%s\n",s3);
// }