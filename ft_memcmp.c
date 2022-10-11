/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:29:21 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/11 07:29:00 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_memcmp( const void * p1, const void * p2, size_t size )
{
    if(p1 == NULL || p2 == NULL)
        return (-99);
    const unsigned char *s1;
    const unsigned char *s2;
    size_t i;

    s1 = p1;
    s2 = p2;
    i = 0;
    while (i < size -1 && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int main() {

    // int array1 [] = { 54, 85, 20, 63, 21 };
    // int array2 [] = { 54, 85, 19, 63, 21 };
    
    //size_t size = sizeof( int ) * 2;
    int exitstatus = ft_memcmp("NULL", "array2", 10);
    if (exitstatus == -99)
        printf( "Test is not ok\n" );
    else
        printf( "Test is ok \nlfer9 howa %d" , exitstatus );
    
    return 0;
}