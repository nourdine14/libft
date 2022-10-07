/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:38:09 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/06 23:35:29 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
size_t strlcpy( char *dst,const char *src,size_t size )
{
    size_t i;

    i = 0;
    while (i < size - 1)
    {
        if (src[i] == '\0')
            break;
        dst[i] = src[i];
        i++;
    }
        dst[i] = '\0';
       return (i);
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