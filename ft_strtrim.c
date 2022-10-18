/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:51:02 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/18 09:35:27 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*simplfind(char const *s1, char const *set)
// {
// 	int		i;
// 	int		j;
// 	char	*left;

// 	i = 0;
// 	j = 0;
// 	if (s1)
// 	{
// 		while (s1[i] == ' ')
// 			i++;
// 		while (s1[i])
// 		{
// 			while (set[j])
// 			{
// 				if (s1[i] == set[j])
// 				{
// 					i++;
// 					j = -1;
// 				}
// 				j++;
// 			}
// 			if (s1[i] != set[j])
// 				break ;
// 		}
// 	}
// 	left = malloc(ft_strlen((char *)s1) - i + 1);
// 	if (!left)
// 		return (0);
// 	j = 0;
// 	while (s1[i])
// 		left[j++] = s1[i++];
// 	left[j] = '\0';
// 	return (left);
// }

// char	*backfind(char const *s1, char const *set)
// {
// 	char	*right;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	if (s1)
// 	{
// 		while (s1[i + 1])
// 			i++;
// 		while (s1[i] == ' ')
// 			i--;
// 		while (i)
// 		{
// 			while (set[j])
// 			{
// 				if (s1[i] == set[j])
// 				{
// 					i--;
// 					j = -1;
// 				}
// 				j++;
// 			}
// 			if (s1[i] != set[j])
// 				break ;
// 		}
// 	}
// 	right = malloc(i + 2);
// 	if (!right)
// 		return (0);
// 	j = 0;
// 	while (j <= i)
// 	{
// 		right[j] = s1[j];
// 		j++;
// 	}
// 	right[j] = '\0';
// 	return (right);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char const	*res1;
// 	char		*res2;

// 	if (!s1)
// 		return (0);
// 	if (!set)
// 		return ((char *)s1);
// 	res1 = simplfind(s1, set);
// 	res2 = backfind(res1, set);
// 	return (res2);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		i;
// 	int		j;
// 	char	*left;
// 	char	*right;

// 	i = 0;
// 	j = 0;
// }
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	j = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	s = malloc(j - i + 2);
	if (!s)
		return (NULL);
	ft_strlcpy(s, (char *)s1 + i, j - i + 2);
	return (s);
}
// int main ()
// {
// 	char *s;
// 	printf("|%s|\n",s =  ft_strtrim("abcdba", "acb"));
// 	return (0);
// }
