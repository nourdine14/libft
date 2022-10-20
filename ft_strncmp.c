/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:25:37 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/20 10:14:09 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	size;

	i = 0;
	size = n;
	if (size <= 0)
		return (size);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (int)(n - 1))
		i++;
	return ((unsigned char )s1[i] - (unsigned char)s2 [i]);
}

// int main ()
// {
//     char s1[10] = "1234";
//     char s2[10] = "1235";

//     printf("%d",ft_strncmp(s1,s2, 0));
// }