/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:44:33 by alejhern          #+#    #+#             */
/*   Updated: 2024/03/23 22:44:37 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printer(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
		ft_putchar('/');
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
		ft_putchar('\\');
	else if (j == 0 || j == x - 1 || i == 0 || i == y - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		write(1, &"Value not Allowed\n", 18);
	else
	{
		i = 0;
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				ft_printer(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
