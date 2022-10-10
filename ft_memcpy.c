/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 04:45:33 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/10 10:41:10 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *  ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    char *d;
    char *s;

    d = dest;
    s = (char *)src;
    i = 0;
    while (i < (int)n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}

// int main ()
// {
//     char s[10] = "hello";
//     char d[10];

//     char * k = memcpy(d, s, 3);
//     printf("%s",k);
// }