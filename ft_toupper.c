/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:53:18 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/10 09:20:29 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper( int character )
{
    if (character >= 'a' && character <= 'z')
        character = character - 32;
    return (character);
}

// int main ()
// {
//     int a = 105;
//     char c = (char)toupper(a);
//     printf("%c",c);
// }