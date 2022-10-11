/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:44:37 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/11 09:53:08 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * calloc(size_t count, size_t size)
{
    void *p;
    p = malloc(count * size);
    if (!p)
        return (NULL);
    ft_bzero(p,count * size);
    return (p);
}