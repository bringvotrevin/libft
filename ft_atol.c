/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:39:12 by dim               #+#    #+#             */
/*   Updated: 2021/05/31 12:22:10 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "libft.h"

int		*ft_isspace(const char *str)
{
	 return (str[i] >= 8 && str[i] <= 13);
}

int		ft_atol(const char *str)
{
	int		num;
	int		minus;
	int		i;

	i = 0;
	minus = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++
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
