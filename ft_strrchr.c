/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:05:21 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/12 17:30:17 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int n = ft_strlen((char *)str);
    while (n >= 0)
    {
        if (*(str + n) == c)
            return ((char *)str + n);
        n--;
    }
    return (NULL);
}

// int main ()
// {
//     int c = '1';
//     const char str[10] = "123456789";
    
//     printf("|%s|",ft_strrchr(str, c));
// }