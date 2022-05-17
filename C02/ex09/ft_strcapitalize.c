/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:59:01 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/18 19:16:04 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
			str[cont] += 32;
		cont++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	ft_strlowcase(str);
	c = 0;
	while (str[c] != '\0')
	{
		if ((c == 0) && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			c++;
		}
		else if ((str[c - 1] < '0') && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			c++;
		}
		else
		{
			c++;
		}
	}
	return (str);
}
