/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:38:09 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/08 01:03:23 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy( char *dst,const char *src,size_t size )
{
    size_t i;

    i = 0;
    if (size > 0)
    {
        while (i < size - 1)
        {
            if (src[i] == '\0')
                break;
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
        
    }
    return (ft_strlen(src));
}

int main ()
{
    char s1[10] = "hello";
    char s2[10] = "ba";
    
    size_t b = strlcpy(s2, s1, 2);
    printf("s1 = %s\n" ,s1);
    printf("s1 = %s\n" ,s2);
    printf("b = %zu\n" ,b);
}