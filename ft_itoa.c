/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:27:03 by nakebli           #+#    #+#             */
/*   Updated: 2022/10/20 10:17:04 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_negative(long *n)
{
	if (*n < 0)
	{
		*n = *n * -1;
		return (1);
	}
	return (0);
}

int	ft_count_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		isneg;
	int		len;
	char	*str;
	long	m;

	m = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	isneg = is_negative(&m);
	len = ft_count_len(m) + isneg;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = m % 10 + 48;
		m = m / 10;
	}
	if (isneg == 1)
		str[0] = '-';
	return (str);
}

// int main ()
// {
// 	char *s = ft_itoa(123);

// 	printf("|%s|\n",s);
// }