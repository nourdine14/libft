/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:05:21 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/24 11:01:59 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	n;

	n = ft_strlen((char *)str);
	while (n >= 0)
	{
		if (*(str + n) == (char)c)
			return ((char *)str + n);
		n--;
	}
	return (NULL);
}
