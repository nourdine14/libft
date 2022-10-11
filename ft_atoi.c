/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 07:50:00 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/11 09:14:20 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int signe;
    int value;

    signe = 1;
    value = 0;
    i = 0;
    while (str[i] == ' ')
        i++;
    if(str[i++] == '-')
        signe = -1;
    while (str[i] <= '9' && str[i] >= '0')
    {
        value = value * 10 + (str[i] - 48);
        i++;
    }
    return (signe * value);
}

// int main ()
// {
//     char * str;
//     int i;
//     str = "        -12k458";
//     i = ft_atoi(str);
//     printf("%d",i);
// }