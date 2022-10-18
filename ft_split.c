/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:36:11 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/18 11:34:03 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **str;

	i = 0;
	str = 0;
	while(s[i])
	{
		while(*s++ != c && s[k]);
		str[i] = (char *)malloc(i - 1);
		if (!str[i])
			return (0);
		j = 0;
		k = 0;
		while (s[i] != c && s[i])
		{
			str[i][j++] = *(s + k);
			k++;
		}
		i++;
	}
	return (str);
}