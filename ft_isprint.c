/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:22:03 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/06 18:21:40 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint( int arg )
{
    if (arg >= 33 && arg <= 126)
		return (1);
	return (0);
}