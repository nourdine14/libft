/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:15:35 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/18 10:00:00 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t size;
	if (s == NULL)
		return (NULL);
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);

	size = ft_strlen((char *)s + start);
	i = 0;
	while (i < len && start < ft_strlen((char *)s))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main ()
// {
// 	char *s = "";
// 	printf("|%s|\n",ft_substr(s, 5, 0)); 
// }