/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noob.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:24:47 by graja             #+#    #+#             */
/*   Updated: 2021/02/04 12:26:09 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int	ft_nputchar(char c, int n)
{
	int i=1;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
	return (0);
}

int	main()
{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return(0);
}
