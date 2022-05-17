/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:38:40 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/16 21:21:55 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'A') && (str[cont] <= 'Z'))
		{
			str[cont] += 'a' - 'A';
		}
		cont++;
	}
	return (str);
}
