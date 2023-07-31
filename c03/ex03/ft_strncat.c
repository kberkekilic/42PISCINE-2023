/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadkilic <kadkilic@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:11:12 by kadkilic          #+#    #+#             */
/*   Updated: 2023/04/12 02:25:19 by kadkilic         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	b = 0;
	while (dest[b] != '\0')
		b++;
	a = 0;
	while (a < nb && src[a] != '\0')
	{
		dest[b + a] = src[a];
		a++;
	}
	dest[b + a] = '\0';
	return (dest);
}
