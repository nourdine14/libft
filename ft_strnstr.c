/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:42:37 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/11 03:52:12 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;

	while (big[i])
	{
		j = 0;
		if(*(big + i) == *(little))
		{
			while (*(big + i + j) == *(little + j))
			{
				if (!*(little + j) && i + (int)ft_strlen((char *)little) - j <= (int)len - 1)
					return ((char *)(big + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// #include"libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	found;

// 	i = 0;
// 	if (!*needle)
// 		return ((char *)haystack);
// 	while (haystack[i] && i < len)
// 	{
// 		if (haystack[i] == needle[0])
// 		{
// 			j = 0;
// 			found = 1;
// 			while (needle[j])
// 			{
// 				if (needle[j] != haystack[i + j] || i + j >= len)
// 					found = 0;
// 				j++;
// 			}
// 			if (found)
// 				return ((char *) haystack + i);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int main ()
{
	char s1[] = "abcdefghijklmn";
	char *s2 = "ghi";
	
	printf("%s",ft_strnstr(s1, s2, 8));
}