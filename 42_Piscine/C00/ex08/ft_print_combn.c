/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:12:20 by beyarsla          #+#    #+#             */
/*   Updated: 2023/10/22 14:12:26 by beyarsla         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *temp, int n)
{
	int		i;
	bool	sequence;

	i = 1;
	sequence = 1;
	while (i < n)
	{
		if (temp[i - 1] >= temp[i])
			sequence = 0;
		i++;
	}
	if (sequence)
	{
		i = 0;
		while (i < n)
			ft_putchar(temp[i++] + 48);
		if (temp[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	temp[10];

	i = 0;
	while (i < 10)
		temp[i++] = 0;
	while (temp[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(temp, n);
		temp[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (temp[i] > 9)
			{
				temp[i - 1]++;
				temp[i] = 0;
			}
			i--;
		}
	}
}
