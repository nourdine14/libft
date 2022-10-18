/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:06:21 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/17 00:01:47 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tlen;
	char	*js;
	int		i;
	int		j;

	tlen = 0;
	if (!s1 || !s2)
		return (NULL);
	if (*s1 && *s2)
		tlen = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	js = malloc((int)tlen);
	if (!js)
		return (0);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
		js[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		js[i++] = s2[j++];
	js[i] = '\0';
	return (js);
}

// int main ()
// {
//     char	*s1 = "my favorite animal is";
// 	char	*s2 = " ";
// 	char	*s3 = "the nyancat";

//     printf("%s",ft_strjoin(ft_strjoin(s1, s2), s3));
// }