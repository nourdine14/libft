/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:47:26 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/12 10:21:36 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if(*str == c)
            return ((char*)(str));
        str++;
    }
    if(*str == c)
        return ((char*)(str));
    return (NULL);
}

// int main ()
// {
//     int c = '\0';
//     const char str[10] = "123456789";
    
//     printf("%s",ft_strchr(str, c));
// }