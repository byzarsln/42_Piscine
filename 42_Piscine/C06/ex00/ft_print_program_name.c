/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:44:08 by beyarsla          #+#    #+#             */
/*   Updated: 2023/11/06 16:44:10 by beyarsla         ###   ########.tr       */
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
	if (ac != 0)
	{
		ft_putstr(ag[0]);
		write(1, "\n", 1);
	}
}
