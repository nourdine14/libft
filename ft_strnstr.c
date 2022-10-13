/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:42:37 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/13 16:36:54 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	char	*pt;

	i = 0;
	pt = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			pt = (char *)big + i;
			j = 0;
			while (big[i + j] == little[j] && i + j < len)
			{
				if (!little[j + 1])
					return (pt);
				j++;
			}
			pt = 0;
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	// char	*s1 = "MZIRIBMZIRIBMZE123";
// 	// char	*s2 = "MZIRIBMZE";
// 	// size_t	max = strlen(s2);

// 	printf("%s\n",ft_strnstr(NULL, "fake", 0));
// 	printf("%s\n",strnstr(NULL, "fake", 0));
// }