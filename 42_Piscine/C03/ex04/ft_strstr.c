/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:56:23 by beyarsla          #+#    #+#             */
/*   Updated: 2023/10/31 17:56:28 by beyarsla         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	t;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		t = 0;
		while (str[i + t] == to_find[t] && str[i + t] != '\0')
		{
			if (to_find[t + 1] == '\0')
			{
				return (&str[i]);
			}
			t++;
		}
		i++;
	}
	return (0);
}
