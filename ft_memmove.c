/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:23:49 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/13 19:52:11 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove( void * dest, const void * src, size_t n )
{
    int i;
    char *d;
    char *s;

    d = dest;
    s = (char *)src;
    i = 0;
    
    if (s == d || !n)
    {
        return (d);
    }
    else if (s > d)
    {
        while (i < (int)n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = 0;
        while (i <= (int)(n - 1))
        {
            d[n - 1 - i] = s[n - 1 - i];
            i++;
        }
    }
    return (d);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t	idx;

// 	if (dest == src || !n)
// 		return (dest);
// 	idx = 0;
// 	if (dest < src)
// 	{
// 		while (idx < n)
// 		{
// 			*((char *)dest + idx) = *((char *)src + idx);
// 			idx++;
// 		}
// 	}
// 	else
// 	{
// 		while (n > 0)
// 		{
// 			*((char *)dest + n - 1) = *((char *)src + n - 1);
// 			n--;
// 		}
// 	}
// 	return (dest);
// }

// int main ()
// {
//     char d[10] = "111222";
    
//     char * k = ft_memmove(d, d + 2, 4);
//     printf("%s",k);
//     return 0;
// }