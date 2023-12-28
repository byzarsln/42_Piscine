/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:35:01 by beyarsla          #+#    #+#             */
/*   Updated: 2023/10/31 15:22:22 by beyarsla         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[y + i] = src[i];
		i++;
	}
	dest[y + i] = '\0';
	return (dest);
}
