/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:57:56 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/12 10:21:39 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
	char *s2;
	int i;
	
	s2 = malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	if (!s2)
		return (NULL);
	i = -1;
	while (s1[++i])
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	return (s2);
}

// int main ()
// {
// 	const char *s1 = "hello world";
// 	char *s2 = ft_strdup(s1);

// 	printf("%s",s2);
// }