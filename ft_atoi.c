/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:51:19 by namorgha          #+#    #+#             */
/*   Updated: 2022/10/12 14:51:28 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		res;
	int		sign;
	char	*x;

	i = 0;
	res = 0;
	sign = 1;
	x = (char *)str;
	while ((x[i] >= 9 && 13 >= x[i]) || x[i] == 32)
		i++;
	if (x[i] == '-' || x[i] == '+')
	{
		if (x[i] == '-')
			sign = -1;
		i++;
	}
	while (x[i] >= '0' && x[i] <= '9')
	{
		res = (res * 10) + x[i] - 48;
		i++;
	}
	return (res * sign);
}
