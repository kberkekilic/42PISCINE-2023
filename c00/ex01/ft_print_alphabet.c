/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadkilic <kadkilic@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:21:15 by kadkilic          #+#    #+#             */
/*   Updated: 2023/04/12 17:35:11 by kadkilic         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 97;
	while (alphabet < 123)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
int	main()
{
	ft_print_alphabet();
}
