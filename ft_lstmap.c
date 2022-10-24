/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:01:12 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/24 11:15:53 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*hi;

	temp = lst;
	new = 0;
	while (temp)
	{
		hi = ft_lstnew(f(temp -> content));
		if (!hi)
		{
			ft_lstclear(&new, del);
			free(hi);
			return (new);
		}
		ft_lstadd_back(&new, hi);
		temp = temp -> next;
	}
	return (new);
}
