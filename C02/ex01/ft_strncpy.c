/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:40:47 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/21 20:39:06 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((src[cont] != '\0') && (cont < n))
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Hello, world";
	char	dest[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

	printf("src antes, dest antes %s %s\n", src, dest);
	
	printf("src depois, dest depois %s %s\n", src, ft_strncpy(dest, src, 12));
}
