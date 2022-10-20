/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:15:35 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/20 12:11:40 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	size;
	size_t	sz;

	substr = NULL;
	sz = ft_strlen((char *)s);
	if (s == NULL)
		return (NULL);
	if (start + len <= sz)
		substr = malloc(sizeof(char) * (len + 1));
	else if (start < sz && start + len > sz)
		substr = malloc(sizeof(char) * (sz - start));
	else
		return (ft_strdup(""));
	if (substr == NULL)
		return (NULL);
	size = ft_strlen((char *)s + start);
	i = -1;
	while (++i < len && start < ft_strlen((char *)s))
		substr[i] = s[start++];
	substr[i] = '\0';
	return (substr);
}

// int main ()
// {
// 	printf("x");
// 	char *s = "1";
// 	printf("|%s|\n",ft_substr(s, 42, 42000)); 
// }