/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:39:12 by dim               #+#    #+#             */
/*   Updated: 2021/06/09 15:38:24 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>


int			ft_isspace(const char c)
{
	 return ((c >= 8 && c <= 13) || c == ' ');
}

long long	ft_atol(const char *str)
{
	int		num;
	int		minus;
	int		i;

	i = 0;
	num = 0;
	minus = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (str[i] != 0)
		return (123456789123456789);
	return (num * minus);
}

int		main()
{
	char	str[4] = "1";
	long long num;

	num = 0;
	num = ft_atol(str);
	printf("str : %s\n", str);
	printf("num : %lld\n", num);
	return 0;
}