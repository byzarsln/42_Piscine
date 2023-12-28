/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:44:18 by beyarsla          #+#    #+#             */
/*   Updated: 2023/11/06 16:44:20 by beyarsla         ###   ########.tr       */
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
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(ag[i]);
		write(1, "\n", 1);
		i++;
	}
}
