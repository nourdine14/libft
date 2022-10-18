/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:24:21 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/17 01:37:53 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower( int character )
{
	if (character >= 'A' && character <= 'Z')
		character = character + 32;
	return (character);
}

// int main ()
// {
//     int a = 'J';
//     char c = (char)tolower(a);
//     printf("%c",c);
// }