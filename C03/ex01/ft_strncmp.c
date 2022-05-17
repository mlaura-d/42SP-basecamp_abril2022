/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:30:12 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/19 18:44:11 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((s1[cont] != '\0' || s2[cont] != '\0') && cont < n)
	{
		if (s1[cont] > s2[cont])
		{
			return (1);
		}
		else if (s1[cont] < s2[cont])
		{
			return (-1);
		}
		cont++;
	}
	return (0);
}
