/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:52:59 by beyarsla          #+#    #+#             */
/*   Updated: 2023/10/21 16:15:23 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	p;
	int	s;

	p = 0;
	while (p < 100)
	{
		s = p + 1;
		while (s < 100)
		{
			ft_putchar(p / 10 + '0');
			ft_putchar(p % 10 + '0');
			ft_putchar(' ');
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			if (p != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s++;
		}
		p++;
	}
}
