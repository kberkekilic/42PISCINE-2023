/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadkilic <kadkilic@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:39:26 by kadkilic          #+#    #+#             */
/*   Updated: 2023/04/10 21:39:31 by kadkilic         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	k ;

	k = 0 ;
	while (str[k] != '\0')
	{
		if ((str[k] < '0') || (str[k] > '9'))
			return (0);
			k++ ;
	}
	return (1);
}