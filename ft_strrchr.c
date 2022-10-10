/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:05:21 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/10 10:59:00 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *str, int c)
{
    int n = ft_strlen(str);
    while (n)
    {
        if (*(str + n) == c)
            return (str);
        n--;
    }
    return (NULL);
}

int main ()
{
    int c = '\0';
    const char str[10] = "123456789";
    
    printf("%s",ft_strchr(str, c));
}