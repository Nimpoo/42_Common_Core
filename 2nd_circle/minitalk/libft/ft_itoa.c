/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:24:45 by mayoub            #+#    #+#             */
/*   Updated: 2021/11/02 14:32:51 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nlen(int c)
{
	int	i;

	i = 1;
	if (c < 0)
		i++;
	while (c / 10)
	{
		i++;
		c /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	nb;
	char		*str;
	int			posinega;
	int			len;

	nb = n;
	len = ft_nlen(nb);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	posinega = 1;
	if (n < 0)
	{
		str[0] = '-';
		posinega = -1;
	}
	str[len--] = '\0';
	str[len--] = ((n % 10) * posinega) + '0';
	while (n / 10)
	{
		n /= 10;
		str[len--] = ((n % 10) * posinega) + '0';
	}
	return (str);
}
