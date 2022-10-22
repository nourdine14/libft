/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:30:22 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/22 21:14:30 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	temp = lst;
	(void) del;
	t_list *new;
	new = malloc(sizeof(t_list));
	new =  NULL;
	while (lst)
	{
		ft_lstadd_back(&new , ft_lstnew(f(lst->content)));
		if(!lst->next)
			break ;
		lst = lst->next;
	}
	while(temp)
	{
		free(temp);
		(temp) = (temp)->next;
	}
	return(new);
}

void *ft_walo(void *cont)
{
	char *str;
	str = ft_strjoin((char *)cont, " + ft_walo");
	return(str);
}

int main ()
{
	t_list *lst;
	t_list *tmp;
	
	lst = malloc(sizeof(t_list));
	lst = NULL;

	int i = 0 ;
	while(i < 10)
	{
		ft_lstadd_back(&lst, ft_lstnew("content"));
		i++;
	}
	tmp = ft_lstmap(lst , ft_walo, NULL);
	while(tmp)
	{
		printf("%s\n" , (char *)tmp->content );
		tmp = tmp->next;
	}
	return(0);
}
