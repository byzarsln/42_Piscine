/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:55:26 by beyarsla          #+#    #+#             */
/*   Updated: 2023/10/31 15:22:40 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = ft_strlen(dest);
	while ((src[i] != '\0') && i < nb)
	{
		dest[y + i] = src[i];
		i++;
	}
	dest[y + i] = '\0';
	return (dest);
}
