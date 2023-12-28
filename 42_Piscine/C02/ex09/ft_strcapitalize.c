/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:41:35 by beyarsla          #+#    #+#             */
/*   Updated: 2023/10/30 14:41:37 by beyarsla         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'a' || str[i - 1] > 'z')
			{
				if (str[i - 1] > 'Z' || str[i - 1] < 'A')
				{
					if (str[i - 1] < '0' || str[i - 1] > '9')
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
