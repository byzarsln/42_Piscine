/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:19:22 by beyarsla          #+#    #+#             */
/*   Updated: 2023/11/02 12:19:23 by beyarsla         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	val;

	index = 0;
	sign = 1;
	val = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
	{
		index++;
	}
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		val = (str[index] - '0') + (val * 10);
		index++;
	}
	return (val * sign);
}
