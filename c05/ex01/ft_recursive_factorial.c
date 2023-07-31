/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadkilic <kadkilic@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 06:04:19 by kadkilic          #+#    #+#             */
/*   Updated: 2023/04/13 07:03:35 by kadkilic         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
