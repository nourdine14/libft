/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:10:05 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/20 16:28:14 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int		i;
	int		len;

	len = ft_strlen((char *)s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}