/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:07:59 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/25 11:50:53 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = 0;
	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		temp = *lst;
		(*lst) = (*lst)->next;
		free(temp);
	}
}
