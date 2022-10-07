/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:15:32 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/06 14:10:50 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int arg)
{
    if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}
