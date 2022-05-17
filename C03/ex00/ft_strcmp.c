/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 03:31:34 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/22 01:00:56 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while ((s1[cont] == s2[cont]) && (s1[cont] != '\0') && (s2[cont] != '\0'))
	{
		cont++;
	}
	return (s1[cont] - s2[cont]);
}

/*#include <stdio.h>
int main(void)
{
	char *str1 = "hEllou";
	char *str2 = "haaaEllou";
	
	printf("%i\n", ft_strcmp(str1, str2));

	return 0;
}*/
