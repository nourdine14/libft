/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 04:26:43 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/18 09:28:32 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char	*str;

	str = ptr;
	while (n--)
	{
		*str++ = (unsigned char)x;
	}
	return (ptr);
}

// int main()
// {
//     char str[50] = "GeeksForGeeks is for programming geeks.";
//     printf("\nBefore memset(): %s\n", str);
//     ft_memset(str + 13, '0', 8*sizeof(char));
//     printf("After memset():  %s", str);
//     return 0;
// }