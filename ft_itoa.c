/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:27:03 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/18 12:08:34 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int i;
    int sv;
    int count;
    int index;
    char *inteager;

    i = n;
    sv = 1;
    count = 0;
    while (i)
    {
        i = i / 10;
        sv = sv * 10;
        count++;
    }
    sv = sv / 10;
    inteager = malloc(count + 1);
    if (!inteager)
        return (0);
    index = 0;
    i = n;
    while(sv)
    {
        inteager[index++] = '0' + (i / sv);
        i = i % sv;
        sv = sv / 10;
    }
    inteager[index] = '\0';
    return (inteager);
}

// int main ()
// {
//     char *s = ft_itoa(123);

//     printf("|%s|\n",s);
// }