/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:47:02 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/10 10:40:13 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t lendest;
	
	i = 0;
	j = 0;
	lendest = ft_strlen(dest);
	if (dstsize == 0)
		return (strlen(src));
	while (dest[i] && i < dstsize)
		i++;
	while (src[j] && i < dstsize -1)
		dest[i++] = src[j++];
	if (dstsize != 0 && dstsize )
		dest[i] = '\0';
	if (dstsize < lendest)
		return (ft_strlen(src) + dstsize);
	else
		return (lendest + ft_strlen(src));
}

// int main()
// {
// 	char s1[8] = "hello";
// 	char s2[] = "blok";
// 	size_t i = 8;

// 	size_t e = ft_strlcat(s1, s2, i);
// 	printf("%zu\n",e);
// 	printf("%s\n",s1);
// }