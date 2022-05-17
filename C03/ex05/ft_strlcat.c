/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:47:34 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/19 23:57:27 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = ft_strlen(dest);
	b = 0;
	if (size == 0 || size < ft_strlen(dest))
	{
		return (ft_strlen(src) + size);
	}
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[b]));
}
