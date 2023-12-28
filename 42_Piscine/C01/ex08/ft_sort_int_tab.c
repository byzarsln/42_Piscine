/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:22:46 by beyarsla          #+#    #+#             */
/*   Updated: 2023/10/25 15:21:25 by beyarsla         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	b;
	int	swap;

	while (size >= 0)
	{
		b = 0;
		while (b < size - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				swap = tab [b];
				tab [b] = tab [b + 1];
				tab [b + 1] = swap;
			}
			b++;
		}
		size--;
	}
}
