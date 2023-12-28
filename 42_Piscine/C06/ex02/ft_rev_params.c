/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:44:29 by beyarsla          #+#    #+#             */
/*   Updated: 2023/11/06 16:44:30 by beyarsla         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	main(int ac, char *ag[])
{
	int	z;

	z = (ac - 1);
	while (0 < z)
	{
		ft_putstr(ag[z]);
		write(1, "\n", 1);
		z--;
	}
}
